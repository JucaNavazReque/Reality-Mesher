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
using static GeoTECH.Logger.AppLogger;
// Serializer
using Game.Network;

public class MainMenuScript : MonoBehaviour
{
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

    public void Start()
    {
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
            Log("No remaining markers to delete.");
        }
    }

    public void ManageData() {
        IDialog dialog = dialogPool.Get()
            .SetHeader("Manage data")
            .SetBody("Select action")
            .SetPositive("Save scan", _ => SaveScan())
            .SetNegative("Remote process", _ => Send2Remote())
            .SetNeutral("Cancel");
        dialog.Show();
    }
    public void SaveScan() {
        IDialog dialog = dialogPool.Get()
            .SetHeader("Save data")
            .SetBody("Select action")
            .SetPositive("Markers", _ => SaveMarkers())
            .SetNegative("Mesh", _ => SaveMesh())
            .SetNeutral("Cancel");
        dialog.Show();
    }

    // Saves all tag markers positioned. Format: name,x,y,z
    private void SaveMarkers() {
        using (StreamWriter markerWriter = new StreamWriter(string.Format(CultureInfo.InvariantCulture, "{0}/{1}/{1}_markers.txt", Application.persistentDataPath, session), false)) {
            foreach (var marker in MarkerManager.Instance.GetAllMarkers()) {
                markerWriter.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0},{1},{2},{3}", marker.name, marker.transform.position.x.ToString("f3"), marker.transform.position.y.ToString("f3"), marker.transform.position.z.ToString("f3")));
            }
        }
        Log("Tag markers saved.");
    }

    // Saves the mesh of the environment. Format: x,y,z
    private async void SaveMesh() {
        Vector3[] vertices = GetPointCloud();
        await Task.Run(() => MeshWriter(savingPath, vertices));
        Log("Mesh saved.");
    }

    private Vector3[] GetPointCloud() {
        Log("Generating point cloud...");
        meshFilters = meshParent.GetComponentsInChildren<MeshFilter>();
        if (meshFilters.Length == 0) {
            Log("No mesh found to save.");
            return Array.Empty<Vector3>();
        }
        combine = new CombineInstance[meshFilters.Length];
        MeshCombiner(meshFilters, ref combine);
        combinedMesh.CombineMeshes(combine);
        Log($"Point cloud generated with {combinedMesh.vertexCount} vertices.");
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
                Log("Taking picture...");
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

        Log("Saved picture.");
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

    private async void Send2Remote() {
        string urlTrimmed = processingUrl.Trim();
        string meshFilePath = string.Format("{0}/{1}/{1}_mesh.txt", savingPath, session);

        if (!File.Exists(meshFilePath)) {
            Log("No environment has been saved yet.", GeoTECH.Logger.LogType.Warning);
        }

        ClassifiedPointCloud pc = new ClassifiedPointCloud();
        await Task.Run(async () =>
        {
            Log("Loading saved environment vertices...");
            // using StreamReader reader = new StreamReader(meshFilePath);
            // string line;
            // while ((line = reader.ReadLine()) != null) // While loop is used to avoid loading the entire file into memory
            // {
            //     var coords = line.Split(',');
            //     pc.point_cloud.Add(new Vector3(
            //         float.Parse(coords[0], CultureInfo.InvariantCulture),
            //         float.Parse(coords[1], CultureInfo.InvariantCulture),
            //         float.Parse(coords[2], CultureInfo.InvariantCulture)
            //     ));
            //     pc.classification.Add((byte) 0); // c = 0 means unclassified, default for original points
            // }
            // DESCOMENTAR RETURN DEBAJO DE "if (pc.classification.Count == 0)".

            for (int i = 0; i < 150; i++) {
                pc.point_cloud.Add(new Vector3((float)(i*4%6*0.9),(float)(i*6%2*1.02),(float)(i*3.5%6*1.29))); // Dummy data to test with.
                pc.classification.Add((byte) 0);
            }
        });
        Log($"Loaded {pc.classification.Count} vertices from saved environment file.");

        if (pc.classification.Count == 0)
        {
            Log("Point cloud is empty. Please save the environment before sending to remote processing.", GeoTECH.Logger.LogType.Warning);
            // return;
        }
        Log("Serializing data...");
        byte[] binaryData = pc.Serialize();
        Log("Data serialized.");

        // Prepare request information
        Log($"Sending {binaryData.Length} bytes to remote server: {urlTrimmed}");
        using var request = new UnityWebRequest(urlTrimmed, UnityWebRequest.kHttpVerbPOST);
        request.uploadHandler = new UploadHandlerRaw(binaryData);
        request.downloadHandler = new DownloadHandlerBuffer();
        // Certificate bypass (self-signed).
        request.certificateHandler = new AcceptAllCertificates();
        request.disposeCertificateHandlerOnDispose = true;

        // Polling is preferred over AsyncOperation.completed since the latter is not reliable on IL2CPP builds.
        UnityWebRequestAsyncOperation operation = request.SendWebRequest();
        while (!operation.isDone) {await Task.Yield();}

        if (request.result != UnityWebRequest.Result.Success)
        {
            Log($"Remote request failed: {request.error} (result: {request.result}, HTTP {request.responseCode}, URL: {urlTrimmed})", GeoTECH.Logger.LogType.Error);
            return;
        }

        byte[] responseData = request.downloadHandler.data;
        if (responseData == null || responseData.Length == 0)
        {
            Log("Server returned empty response.", GeoTECH.Logger.LogType.Warning);
            return;
        }

        try
        {
            ClassifiedPointCloud response = await Task.Run(() =>
            {
                return ClassifiedPointCloud.Deserialize(responseData);
            });

            Log($"Remote response received with {response.classification.Count(p => p != 0)}/{response.classification.Count} classified points.");
        }
        catch (Exception e)
        {
            Log($"Response deserialization failed: {e.Message}", GeoTECH.Logger.LogType.Error);
        }
    }
}
