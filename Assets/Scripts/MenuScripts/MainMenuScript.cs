using UnityEngine;
using System;
using System.IO;
using System.Text;
using UnityEngine.Rendering;
using System.Linq;
using UnityEngine.Windows.WebCam;
using System.Globalization;
using MixedReality.Toolkit.UX;
using System.Threading.Tasks;
using System.IO.Compression;
using UnityEngine.Networking;
using System.Collections.Generic;
using ProtoBuf;
using ProtoBuf.Meta;
using UnityEngine.Scripting;
using System.Collections;

#if ENABLE_WINMD_SUPPORT
using Windows.Foundation.Diagnostics;
#endif

[Preserve]
[ProtoContract]
public class ClassifiedPointProto
{
    [Preserve]
    [ProtoMember(1, IsRequired = true)]
    public float x;

    [Preserve]
    [ProtoMember(2, IsRequired = true)]
    public float y;

    [Preserve]
    [ProtoMember(3, IsRequired = true)]
    public float z;

    [Preserve]
    [ProtoMember(4, IsRequired = true)]
    public int c = -1;

    public ClassifiedPointProto() { }

    public ClassifiedPointProto(float x, float y, float z, int c)
    {
        this.x = x;
        this.y = y;
        this.z = z;
        this.c = c;
    }
}

[Preserve]
[ProtoContract]
public class PointCloudProto
{
    [Preserve]
    [ProtoMember(1, IsRequired = true)]
    public List<ClassifiedPointProto> points = new();
}

[Serializable]
public class ClassifiedPoint
{
    public Vector3 position;
    public int pointClass;

    public ClassifiedPoint(Vector3 position, int pointClass)
    {
        this.position = position;
        this.pointClass = pointClass;
    }
}

public class MainMenuScript : MonoBehaviour
{
    private static readonly RuntimeTypeModel ProtobufModel = BuildProtobufModel();

    private static RuntimeTypeModel BuildProtobufModel()
    {
        RuntimeTypeModel model = RuntimeTypeModel.Create();
        model.AutoAddMissingTypes = false;

        MetaType pointType = model.Add(typeof(ClassifiedPointProto), false);
        pointType.Add(1, nameof(ClassifiedPointProto.x));
        pointType.Add(2, nameof(ClassifiedPointProto.y));
        pointType.Add(3, nameof(ClassifiedPointProto.z));
        pointType.Add(4, nameof(ClassifiedPointProto.c));

        MetaType cloudType = model.Add(typeof(PointCloudProto), false);
        cloudType.Add(1, nameof(PointCloudProto.points));

        return model;
    }

#if ENABLE_WINMD_SUPPORT
    LoggingChannel lc = new LoggingChannel("RealityMesherLogger", null, new Guid("2df964bb-cd29-4ac0-a462-59b4c484ae3d"));
#endif

    public DialogPool dialogPool;
    [HideInInspector]
    public string session;
    GameObject meshParent;
    MeshFilter[] meshFilters;
    CombineInstance[] combine;
    Mesh combinedMesh;
    private string imagePath;
    private string zipPath;
    private int meshCount = 0;
    [SerializeField] private string processingUrl;
    [HideInInspector] string savingPath;
    private readonly List<ClassifiedPoint> latestClassifiedPoints = new();
    public IReadOnlyList<ClassifiedPoint> LatestClassifiedPoints => latestClassifiedPoints;

    public void Start()
    {
        try
        {
            string schema = ProtobufModel.GetSchema(typeof(PointCloudProto));
            Debug.Log($"[ProtoModel] PointCloudProto schema length: {schema?.Length ?? 0}");
#if ENABLE_WINMD_SUPPORT
            lc.LogMessage($"[ProtoModel] PointCloudProto schema length: {schema?.Length ?? 0}");
#endif
        }
        catch (Exception e)
        {
            Debug.LogError($"[ProtoModel] Schema generation failed: {e.Message}");
#if ENABLE_WINMD_SUPPORT
            lc.LogMessage($"[ProtoModel] Schema generation failed: {e.Message}", LoggingLevel.Error);
#endif
        }

        if (string.IsNullOrEmpty(session))
        {
            session = "session_" + DateTime.Now.ToString("dd-MM-yyyy_HH-mm-ss");
        }
        meshParent = GameObject.Find("Trackables");
        zipPath = string.Format("{0}/{1}/{1}_pictures.zip", Application.persistentDataPath, session);
        if (savingPath == "" || savingPath == null) {
            savingPath = Application.persistentDataPath;
        }

        // Register existing markers
        foreach (var marker in GameObject.FindGameObjectsWithTag("Marker"))
        {
            MarkerManager.Instance.AddMarker(marker);
        }

        combinedMesh = new() { indexFormat = IndexFormat.UInt32 };
    }

    // Deletes the last marker created. If marker went missing, it will be ignored
    public void DeleteLastMarker() {
        GameObject lastMarker = MarkerManager.Instance.GetLastMarker();
        if (lastMarker != null) {
            MarkerManager.Instance.RemoveMarker(lastMarker);
            Destroy(lastMarker);
        }
        else {
            Debug.Log("No remaining markers to delete.");
#if ENABLE_WINMD_SUPPORT
            lc.LogMessage("No remaining markers to delete.");
#endif
        }
    }

    public void ManageData() {
        IDialog dialog = dialogPool.Get()
            .SetHeader("Save data")
            .SetBody("Select action")
            .SetPositive("Save scan", _ => SaveScan())
            .SetNegative("Remote process", _ => Send2Remote())
            .SetNeutral("Cancel");
        dialog.Show();
    }

    public void SaveScan() {
        IDialog dialog = dialogPool.Get()
            .SetHeader("Save scan")
            .SetBody("Select action")
            .SetPositive("Save markers", _ => SaveMarkers())
            .SetNegative("Save environment", _ => SaveMesh())
            .SetNeutral("Cancel");
        dialog.Show();
    }

    // Saves all tag markers positioned. Format: name,x,y,z
    private void SaveMarkers() {
        using (StreamWriter markerWriter = new StreamWriter(string.Format(CultureInfo.InvariantCulture, "{0}/{1}/{1}_markers.txt", savingPath, session), false)) {
            foreach (var marker in MarkerManager.Instance.GetAllMarkers()) {
                markerWriter.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0},{1},{2},{3}", marker.name, marker.transform.position.x.ToString("f3"), marker.transform.position.y.ToString("f3"), marker.transform.position.z.ToString("f3")));
            }
        }
        Debug.Log("Tag markers saved.");
#if ENABLE_WINMD_SUPPORT
        lc.LogMessage("Tag markers saved.");
#endif
    }

    // Saves the mesh of the environment. Format: x,y,z
    private async void SaveMesh() {
        Vector3[] vertices = GetPointCloud();
        await Task.Run(() => MeshWriter(savingPath, vertices));
        Debug.Log("Mesh saved.");
#if ENABLE_WINMD_SUPPORT
        lc.LogMessage("Mesh saved.");
#endif
    }

    private void Send2Remote() {
        string urlToUse = (processingUrl ?? string.Empty).Trim();
        string meshFilePath = string.Format("{0}/{1}/{1}_mesh.txt", savingPath, session);

//         if (!File.Exists(meshFilePath)) {
//             Debug.Log("Remote process skipped: no mesh has been saved yet.");
// #if ENABLE_WINMD_SUPPORT
//             lc.LogMessage("Remote process skipped: no mesh has been saved yet.");
// #endif
//             return;
//         }

        // Build dummy points (all on main thread — no Task.Run)
        List<ClassifiedPointProto> pts = new();
        // using StreamReader reader = new StreamReader(meshFilePath);
        // string line;
        // while ((line = reader.ReadLine()) != null)
        // {
        //     var coords = line.Split(',');
        //     pts.Add(new ClassifiedPointProto(
        //         float.Parse(coords[0], CultureInfo.InvariantCulture),
        //         float.Parse(coords[1], CultureInfo.InvariantCulture),
        //         float.Parse(coords[2], CultureInfo.InvariantCulture),
        //         -1));
        // }
        for (int i = 0; i < 150; i++) {
            pts.Add(new ClassifiedPointProto((float)(i*4%6*0.9),(float)(i*6%2*1.02),(float)(i*3.5%6*1.29), -1));
        }

//         if (pts.Count == 0) {
//             Debug.Log("Remote process skipped: point cloud is empty.");
// #if ENABLE_WINMD_SUPPORT
//             lc.LogMessage("Remote process skipped: point cloud is empty.");
// #endif
//             return;
//         }

        Debug.Log($"Loaded {pts.Count} vertices. Serializing...");
#if ENABLE_WINMD_SUPPORT
        lc.LogMessage($"Loaded {pts.Count} vertices. Serializing...");
#endif

        byte[] binaryData;
        using (MemoryStream stream = new MemoryStream()) {
            ProtobufModel.Serialize(stream, new PointCloudProto { points = pts });
            binaryData = stream.ToArray();
        }

        if (binaryData == null || binaryData.Length == 0)
        {
            Debug.LogError($"ERROR: Serialized payload is 0 bytes. Check link.xml IL2CPP stripping and protobuf asset preservation.");
#if ENABLE_WINMD_SUPPORT
            lc.LogMessage("ERROR: Serialized payload is 0 bytes. Check link.xml IL2CPP stripping and protobuf asset preservation.", LoggingLevel.Error);
#endif

            // return;
        }

        int threadId = System.Threading.Thread.CurrentThread.ManagedThreadId;
        Debug.Log($"[Send2Remote] Thread: {threadId}, Payload: {binaryData.Length} bytes");
#if ENABLE_WINMD_SUPPORT
        lc.LogMessage($"[Send2Remote] Thread: {threadId}, Payload: {binaryData.Length} bytes");
#endif

        // Validate payload shape locally before sending to isolate transport issues.
        try
        {
            using MemoryStream validateStream = new MemoryStream(binaryData);
            PointCloudProto localPayload = (PointCloudProto)ProtobufModel.Deserialize(validateStream, null, typeof(PointCloudProto));
            int count = localPayload?.points?.Count ?? 0;
            Debug.Log($"[Send2Remote] Local protobuf round-trip count: {count}");
#if ENABLE_WINMD_SUPPORT
            lc.LogMessage($"[Send2Remote] Local protobuf round-trip count: {count}");
#endif
        }
        catch (Exception e)
        {
            Debug.LogError($"[Send2Remote] Local protobuf round-trip failed: {e.Message}");
#if ENABLE_WINMD_SUPPORT
            lc.LogMessage($"[Send2Remote] Local protobuf round-trip failed: {e.Message}", LoggingLevel.Error);
#endif
            // return;
        }

        Debug.Log($"Sending {binaryData.Length} bytes to {urlToUse}");
#if ENABLE_WINMD_SUPPORT
        lc.LogMessage($"Sending {binaryData.Length} bytes to {urlToUse}");
#endif
        SessionManager.Instance.RunCoroutine(SendCoroutine(binaryData, urlToUse));
    }

    private IEnumerator SendCoroutine(byte[] binaryData, string urlToUse) {
        using UnityWebRequest request = new UnityWebRequest(urlToUse, UnityWebRequest.kHttpVerbPOST);
        request.uploadHandler = new UploadHandlerRaw(binaryData);
        request.uploadHandler.contentType = "application/x-protobuf";
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/x-protobuf");
        request.SetRequestHeader("X-Payload-Bytes", binaryData.Length.ToString());
        request.chunkedTransfer = false;
        request.useHttpContinue = false;
        request.timeout = 60;
        request.certificateHandler = new AcceptAllCertificates();
        request.disposeCertificateHandlerOnDispose = true;

        yield return request.SendWebRequest();  // Unity's native, main-thread, all-platform safe pattern

        if (request.result != UnityWebRequest.Result.Success) {
            Debug.LogError($"Remote request failed: {request.error} (result: {request.result}, HTTP {request.responseCode}, URL: {urlToUse})");
#if ENABLE_WINMD_SUPPORT
            lc.LogMessage($"Remote request failed: {request.error} (result: {request.result}, HTTP {request.responseCode}, URL: {urlToUse})", LoggingLevel.Error);
#endif
            yield break;
        }

        if (request.responseCode >= 300 && request.responseCode < 400)
        {
            string location = request.GetResponseHeader("Location");
            Debug.LogWarning($"Remote request redirected (HTTP {request.responseCode}) to: {location}");
#if ENABLE_WINMD_SUPPORT
            lc.LogMessage($"Remote request redirected (HTTP {request.responseCode}) to: {location}", LoggingLevel.Warning);
#endif
            yield break;
        }

        byte[] responseData = request.downloadHandler.data;
        if (responseData == null || responseData.Length == 0) {
            Debug.LogWarning("Server returned empty response.");
#if ENABLE_WINMD_SUPPORT
            lc.LogMessage("Server returned empty response.", LoggingLevel.Warning);
#endif
            yield break;
        }

        try {
            using MemoryStream stream = new MemoryStream(responseData);
            PointCloudProto response = (PointCloudProto)ProtobufModel.Deserialize(stream, null, typeof(PointCloudProto));
            latestClassifiedPoints.Clear();
            foreach (ClassifiedPointProto point in response.points) {
                latestClassifiedPoints.Add(new ClassifiedPoint(new Vector3(point.x, point.y, point.z), point.c));
            }
            Debug.Log($"Remote response received with {latestClassifiedPoints.Count(p => p.pointClass != -1)}/{latestClassifiedPoints.Count} classified points.");
#if ENABLE_WINMD_SUPPORT
            lc.LogMessage($"Remote response received with {latestClassifiedPoints.Count(p => p.pointClass != -1)}/{latestClassifiedPoints.Count} classified points.");
#endif
        }
        catch (Exception e) {
            Debug.LogError($"Response deserialization failed: {e.Message}");
#if ENABLE_WINMD_SUPPORT
            lc.LogMessage($"Response deserialization failed: {e.Message}", LoggingLevel.Error);
#endif
        }
    }

    // Combines all meshes in the scene and returns the vertices as a point cloud (Vector3[]).
    // Used for saving the environment and sending it to remote.
    private Vector3[] GetPointCloud() {
        Debug.Log("Generating point cloud...");
#if ENABLE_WINMD_SUPPORT
        lc.LogMessage("Generating point cloud...");
#endif
        meshFilters = meshParent.GetComponentsInChildren<MeshFilter>();
        if (meshFilters.Length == 0) {
            Debug.Log("No mesh found to save.");
#if ENABLE_WINMD_SUPPORT
            lc.LogMessage("No mesh found to save.");
#endif

            return Array.Empty<Vector3>();
        }
        combine = new CombineInstance[meshFilters.Length];
        MeshCombiner(meshFilters, ref combine);
        combinedMesh.CombineMeshes(combine);
        Debug.Log($"Point cloud generated with {combinedMesh.vertexCount} vertices.");
#if ENABLE_WINMD_SUPPORT
        lc.LogMessage($"Point cloud generated with {combinedMesh.vertexCount} vertices.");
#endif

        return combinedMesh.vertices;
    }

    private void MeshCombiner(MeshFilter[] meshFilters, ref CombineInstance[] combine) {
        for (int i = 0; i < meshFilters.Length; ++i) {
            combine[i].mesh = meshFilters[i].sharedMesh;
            combine[i].transform = meshFilters[i].transform.localToWorldMatrix;
        }
    }

    private void MeshWriter(string savingPath, Vector3[] vertices)
    {
        StringBuilder sb = new StringBuilder();
        foreach (Vector3 v in vertices)
        {
            sb.AppendFormat(CultureInfo.InvariantCulture, "{0},{1},{2}\n", v.x, v.y, v.z);
        }
        if (!Directory.Exists(string.Format("{0}/{1}/meshes", savingPath, session))) {
            Directory.CreateDirectory(string.Format("{0}/{1}/meshes", savingPath, session));
        }
        using (StreamWriter sw = new StreamWriter(string.Format("{0}/{1}/{1}_mesh.txt", savingPath, session), true))
        {
            sw.Write(sb.ToString());
        }
        using (StreamWriter sw = new StreamWriter(string.Format("{0}/{1}/meshes/{2}_mesh.txt", savingPath, session, meshCount), true))
        {
            sw.Write(sb.ToString());
        }
        meshCount++;
    }

    PhotoCapture photoCaptureObject = null;
    public void TakePicture()     {
        Resolution cameraResolution = PhotoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height).First();
        PhotoCapture.CreateAsync(false, delegate (PhotoCapture captureObject) {
            photoCaptureObject = captureObject;
            CameraParameters c = new();
            c.cameraResolutionWidth = cameraResolution.width;
            c.cameraResolutionHeight = cameraResolution.height;
            c.pixelFormat = CapturePixelFormat.BGRA32;

            if (!Directory.Exists(string.Format("{0}/{1}/pictures", Application.persistentDataPath, session))) {
                Directory.CreateDirectory(string.Format("{0}/{1}/pictures", Application.persistentDataPath, session));
            }

            // Activate the camera
            captureObject.StartPhotoModeAsync(c, delegate (PhotoCapture.PhotoCaptureResult result) {
                Debug.Log("Taking picture...");
#if ENABLE_WINMD_SUPPORT
                lc.LogMessage("Taking picture...");
#endif
                Matrix4x4 localPos = Camera.main.transform.localToWorldMatrix;
                string matrixString = localPos.ToString().Replace("\n", ",").Replace("\t", ",");
                matrixString = matrixString[..^1];
                string pictureTime = DateTime.Now.ToString("dd-MM-yyyy_HH-mm-ss");
                imagePath = string.Format("{0}/{1}/pictures/{2}.jpg", Application.persistentDataPath, session, pictureTime);
                using (StreamWriter imagePosWriter = new StreamWriter(string.Format(CultureInfo.InvariantCulture, "{0}/{1}/{1}_pictures_pos.txt", Application.persistentDataPath, session), true))
                {
                    imagePosWriter.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0},{1}", pictureTime, matrixString));
                }
                captureObject.TakePhotoAsync(
                    imagePath, PhotoCaptureFileOutputFormat.JPG, OnCapturedPhotoToDisk);
            });
        });
    }
    private void OnCapturedPhotoToDisk(PhotoCapture.PhotoCaptureResult result) {
        string entryName = Path.GetFileName(imagePath);
        if (!File.Exists(zipPath))
        {
            using (FileStream zipToCreate = new FileStream(zipPath, FileMode.Create))
            using (ZipArchive archive = new ZipArchive(zipToCreate, ZipArchiveMode.Create))
            {
                archive.CreateEntryFromFile(imagePath, entryName);
            }
        }
        else
        {
            // Update or add new image
            string tempZip = zipPath + ".tmp";

            using (FileStream originalZipStream = new FileStream(zipPath, FileMode.Open))
            using (FileStream tempZipStream = new FileStream(tempZip, FileMode.Create))
            using (ZipArchive original = new ZipArchive(originalZipStream, ZipArchiveMode.Read))
            using (ZipArchive updated = new ZipArchive(tempZipStream, ZipArchiveMode.Update))
            {
                // Copy entries except the one to be updated
                foreach (var entry in original.Entries)
                {
                    if (entry.FullName != entryName)
                    {
                        var tempEntry = updated.CreateEntry(entry.FullName);
                        using (var originalStream = entry.Open())
                        using (var tempStream = tempEntry.Open())
                        {
                            originalStream.CopyTo(tempStream);
                        }
                    }
                }

                // Add or replace the image
                updated.CreateEntryFromFile(imagePath, entryName);
            }

            // Replace old zip with new one
            File.Delete(zipPath);
            File.Move(tempZip, zipPath);
        }

        Debug.Log("Saved picture.");
#if ENABLE_WINMD_SUPPORT
        lc.LogMessage("Saved picture.");
#endif
        photoCaptureObject.StopPhotoModeAsync(OnStoppedPhotoMode);
    }

    private void OnStoppedPhotoMode(PhotoCapture.PhotoCaptureResult result) {
        photoCaptureObject.Dispose();
        photoCaptureObject = null;
    }

    private class AcceptAllCertificates : CertificateHandler
    {
        protected override bool ValidateCertificate(byte[] certificateData)
        {
            return true;
        }
    }
}
