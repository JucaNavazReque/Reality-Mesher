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
using System.Reflection;
using System.Collections;
using UnityEngine.Scripting;
using ProtoContracts;

#if ENABLE_WINMD_SUPPORT
using Windows.Foundation.Diagnostics;
#endif

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

[Preserve]
[ProtoContract]
public class LocalClassifiedPointProto
{
    [Preserve]
    [ProtoMember(1, IsRequired = true)]
    public float X;

    [Preserve]
    [ProtoMember(2, IsRequired = true)]
    public float Y;

    [Preserve]
    [ProtoMember(3, IsRequired = true)]
    public float Z;

    [Preserve]
    [ProtoMember(4, IsRequired = true)]
    public int C = -1;
}

[Preserve]
[ProtoContract]
public class LocalPointCloudProto
{
    [Preserve]
    [ProtoMember(1, IsRequired = true)]
    public List<LocalClassifiedPointProto> Vectors = new();
}

public class MainMenuScript : MonoBehaviour
{
    private enum ProtoSerializationMode
    {
        LocalDecorated = 0,
        ExternalPrecompiled = 1
    }

    private void Log(string message, int level = 0)
    {
        if (level == 2)
        {
            Debug.LogError(message);
            #if ENABLE_WINMD_SUPPORT
            lc.LogMessage(message, LoggingLevel.Error);
            #endif

        }
        else if (level == 1)
        {
            Debug.LogWarning(message);
            #if ENABLE_WINMD_SUPPORT
            lc.LogMessage(message, LoggingLevel.Warning);
            #endif
        }
        else
        {
            Debug.Log(message);
            #if ENABLE_WINMD_SUPPORT
            lc.LogMessage(message);
            #endif

        }
    }

    private static string _modelSelection = "not initialized";
    private static string _modelSelectionReason = "model not initialized";
    private static TypeModel _protobufModel;
    private static bool _modelInitAttempted;
    private static RuntimeTypeModel _localDecoratedModel;
    private static bool _localModelInitAttempted;
    private static string _localModelReason = "model not initialized";

    [SerializeField] private ProtoSerializationMode serializationMode = ProtoSerializationMode.LocalDecorated;

    private static bool TryGetLocalDecoratedModel(out RuntimeTypeModel model)
    {
        if (_localDecoratedModel != null)
        {
            model = _localDecoratedModel;
            return true;
        }

        if (_localModelInitAttempted)
        {
            model = null;
            return false;
        }

        _localModelInitAttempted = true;

        try
        {
            _localDecoratedModel = BuildLocalDecoratedModel();
            _localModelReason = "ok";
            model = _localDecoratedModel;
            return true;
        }
        catch (Exception ex)
        {
            Exception root = ex.InnerException ?? ex;
            _localModelReason = $"{root.GetType().Name}: {root.Message}";
            model = null;
            return false;
        }
    }

    private static bool TryGetProtobufModel(out TypeModel model)
    {
        if (_protobufModel != null)
        {
            model = _protobufModel;
            return true;
        }

        if (_modelInitAttempted)
        {
            model = null;
            return false;
        }

        _modelInitAttempted = true;

        try
        {
            _protobufModel = BuildPreferredModel();
            model = _protobufModel;
            return model != null;
        }
        catch (Exception ex)
        {
            Exception root = ex.InnerException ?? ex;
            _modelSelection = "initialization failed";
            _modelSelectionReason = $"{root.GetType().Name}: {root.Message}";
            model = null;
            return false;
        }
    }

    private static TypeModel BuildPreferredModel()
    {
        Type compiledModelType = FindCompiledModelType();
        if (compiledModelType != null && typeof(TypeModel).IsAssignableFrom(compiledModelType))
        {
            object instance = Activator.CreateInstance(compiledModelType);
            if (instance is TypeModel compiledModel)
            {
                _modelSelection = "precompiled";
                _modelSelectionReason = compiledModelType.FullName;
                return compiledModel;
            }

            _modelSelectionReason = "compiled model type could not be instantiated as TypeModel";
            return BuildRuntimeModel();
        }

        if (compiledModelType != null)
        {
            _modelSelectionReason = $"type found but not assignable: {compiledModelType.FullName}";
        }
        return BuildRuntimeModel();
    }

    private static Type FindCompiledModelType()
    {
        foreach (Assembly assembly in AppDomain.CurrentDomain.GetAssemblies())
        {
            Type type = assembly.GetType("CompiledProtoModel", false);
            if (type != null)
            {
                return type;
            }
        }

        return null;
    }

    private static RuntimeTypeModel BuildRuntimeModel()
    {
        RuntimeTypeModel model = RuntimeTypeModel.Create();
        model.AutoAddMissingTypes = false;

        MetaType pointType = model.Add(typeof(ClassifiedPointProto), false);
        pointType.Add(1, nameof(ClassifiedPointProto.X));
        pointType.Add(2, nameof(ClassifiedPointProto.Y));
        pointType.Add(3, nameof(ClassifiedPointProto.Z));
        pointType.Add(4, nameof(ClassifiedPointProto.C));

        MetaType cloudType = model.Add(typeof(PointCloudProto), false);
        cloudType.Add(1, nameof(PointCloudProto.Vectors));

        return model;
    }

    private static RuntimeTypeModel BuildLocalDecoratedModel()
    {
        RuntimeTypeModel model = RuntimeTypeModel.Create();
        model.AutoAddMissingTypes = false;

        MetaType pointType = model.Add(typeof(LocalClassifiedPointProto), false);
        pointType.Add(1, nameof(LocalClassifiedPointProto.X));
        pointType.Add(2, nameof(LocalClassifiedPointProto.Y));
        pointType.Add(3, nameof(LocalClassifiedPointProto.Z));
        pointType.Add(4, nameof(LocalClassifiedPointProto.C));

        MetaType cloudType = model.Add(typeof(LocalPointCloudProto), false);
        cloudType.Add(1, nameof(LocalPointCloudProto.Vectors));

        return model;
    }

    private byte[] SerializePointCloud(List<ClassifiedPoint> points)
    {
        if (serializationMode == ProtoSerializationMode.LocalDecorated)
        {
            try
            {
                if (!TryGetLocalDecoratedModel(out RuntimeTypeModel localModel) || localModel == null)
                {
                    Log($"Serialization failed (LocalDecorated): no model available ({_localModelReason}).", 2);
                    return Array.Empty<byte>();
                }

                LocalPointCloudProto payload = new LocalPointCloudProto();
                foreach (ClassifiedPoint point in points)
                {
                    payload.Vectors.Add(new LocalClassifiedPointProto
                    {
                        X = point.position.x,
                        Y = point.position.y,
                        Z = point.position.z,
                        C = point.pointClass
                    });
                }

                using MemoryStream stream = new MemoryStream();
                localModel.Serialize(stream, payload);
                return stream.ToArray();
            }
            catch (Exception ex)
            {
                Exception root = ex.InnerException ?? ex;
                Log($"Serialization failed (LocalDecorated): {root.GetType().Name}: {root.Message}", 2);
                return Array.Empty<byte>();
            }
        }

        try
        {
            if (!TryGetProtobufModel(out TypeModel model) || model == null)
            {
                Log($"Serialization failed (ExternalPrecompiled): no protobuf model available ({_modelSelectionReason}).", 2);
                return Array.Empty<byte>();
            }

            PointCloudProto payload = new PointCloudProto { Vectors = new List<ClassifiedPointProto>() };
            foreach (ClassifiedPoint point in points)
            {
                payload.Vectors.Add(new ClassifiedPointProto
                {
                    X = point.position.x,
                    Y = point.position.y,
                    Z = point.position.z,
                    C = point.pointClass
                });
            }

            using MemoryStream stream = new MemoryStream();
            model.Serialize(stream, payload);
            return stream.ToArray();
        }
        catch (Exception ex)
        {
            Exception root = ex.InnerException ?? ex;
            Log($"Serialization failed (ExternalPrecompiled): {root.GetType().Name}: {root.Message}", 2);
        }

        return Array.Empty<byte>();
    }

    private bool TryDeserializePointCloud(byte[] responseData)
    {
        if (serializationMode == ProtoSerializationMode.LocalDecorated)
        {
            try
            {
                if (!TryGetLocalDecoratedModel(out RuntimeTypeModel localModel) || localModel == null)
                {
                    Log($"Deserialization failed (LocalDecorated): no model available ({_localModelReason}).", 2);
                    return false;
                }

                using MemoryStream stream = new MemoryStream(responseData);
                LocalPointCloudProto response = (LocalPointCloudProto)localModel.Deserialize(stream, null, typeof(LocalPointCloudProto));
                latestClassifiedPoints.Clear();
                foreach (LocalClassifiedPointProto point in response.Vectors)
                {
                    latestClassifiedPoints.Add(new ClassifiedPoint(new Vector3(point.X, point.Y, point.Z), point.C));
                }
                return true;
            }
            catch (Exception ex)
            {
                Exception root = ex.InnerException ?? ex;
                Log($"Deserialization failed (LocalDecorated): {root.GetType().Name}: {root.Message}", 2);
                return false;
            }
        }

        try
        {
            if (!TryGetProtobufModel(out TypeModel model) || model == null)
            {
                Log($"Deserialization failed (ExternalPrecompiled): no protobuf model available ({_modelSelectionReason}).", 2);
                return false;
            }

            using MemoryStream stream = new MemoryStream(responseData);
            PointCloudProto response = (PointCloudProto)model.Deserialize(stream, null, typeof(PointCloudProto));
            latestClassifiedPoints.Clear();
            foreach (ClassifiedPointProto point in response.Vectors)
            {
                latestClassifiedPoints.Add(new ClassifiedPoint(new Vector3(point.X, point.Y, point.Z), point.C));
            }
            return true;
        }
        catch (Exception ex)
        {
            Exception root = ex.InnerException ?? ex;
            Log($"Deserialization failed (ExternalPrecompiled): {root.GetType().Name}: {root.Message}", 2);
            return false;
        }
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
        if (serializationMode == ProtoSerializationMode.ExternalPrecompiled)
        {
            if (_modelSelection == "not initialized")
            {
                // Attempt initialization once at startup, but keep app functional if it fails.
                TryGetProtobufModel(out _);
            }

            Log($"[ProtoModel] Mode: ExternalPrecompiled ({_modelSelectionReason}).");
        }
        else
        {
            TryGetLocalDecoratedModel(out _);
            Log($"[ProtoModel] Mode: LocalDecorated ({_localModelReason}).");
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
            Log("No remaining markers to delete.");
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
        Log("Tag markers saved.");
    }

    // Saves the mesh of the environment. Format: x,y,z
    private async void SaveMesh() {
        Vector3[] vertices = GetPointCloud();
        await Task.Run(() => MeshWriter(savingPath, vertices));
        Log("Mesh saved.");
    }

    private void Send2Remote() {
        string urlToUse = (processingUrl ?? string.Empty).Trim();
        string meshFilePath = string.Format("{0}/{1}/{1}_mesh.txt", savingPath, session);

//         if (!File.Exists(meshFilePath)) {
//             Log("Remote process skipped: no mesh has been saved yet.");
//             return;
//         }

        // Build dummy points (all on main thread — no Task.Run)
        List<ClassifiedPoint> pts = new();
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
            pts.Add(new ClassifiedPoint(
                new Vector3((float)(i * 4 % 6 * 0.9), (float)(i * 6 % 2 * 1.02), (float)(i * 3.5 % 6 * 1.29)),
                -1));
        }

//         if (pts.Count == 0) {
//             Log("Remote process skipped: point cloud is empty.");
//             return;
//         }

        Log($"Loaded {pts.Count} vertices. Serializing...");

        byte[] binaryData = SerializePointCloud(pts);

        if (binaryData == null || binaryData.Length == 0)
        {
            Log("ERROR: Serialization produced 0 bytes after all attempts.", 2);
            return;
        }

        Log($"Payload ready: {binaryData.Length} bytes.");

        SessionManager.Instance.RunCoroutine(SendCoroutine(binaryData, urlToUse));
    }

    private IEnumerator SendCoroutine(byte[] binaryData, string urlToUse) {
        using UnityWebRequest request = new UnityWebRequest(urlToUse, UnityWebRequest.kHttpVerbPOST);
        request.uploadHandler = new UploadHandlerRaw(binaryData);
        request.uploadHandler.contentType = "application/x-protobuf";
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/x-protobuf");
        request.SetRequestHeader("X-Payload-Bytes", binaryData.Length.ToString());
        request.useHttpContinue = false;
        request.timeout = 60;
        request.certificateHandler = new AcceptAllCertificates();
        request.disposeCertificateHandlerOnDispose = true;

        yield return request.SendWebRequest();  // Unity's native, main-thread, all-platform safe pattern

        if (request.result != UnityWebRequest.Result.Success) {
            Log($"Remote request failed: {request.error} (result: {request.result}, HTTP {request.responseCode}, URL: {urlToUse})", 2);
            yield break;
        }

        if (request.responseCode >= 300 && request.responseCode < 400)
        {
            string location = request.GetResponseHeader("Location");
            Log($"Remote request redirected (HTTP {request.responseCode}) to: {location}", 1);
            yield break;
        }

        byte[] responseData = request.downloadHandler.data;
        if (responseData == null || responseData.Length == 0) {
            Log("Server returned empty response.", 1);
            yield break;
        }

        try {
            if (!TryDeserializePointCloud(responseData))
            {
                yield break;
            }

            int classifiedCount = latestClassifiedPoints.Count(p => p.pointClass != -1);
            Log($"Response received: {classifiedCount}/{latestClassifiedPoints.Count} classified points.");
        }
        catch (Exception e) {
            Log($"Response deserialization failed: {e.Message}", 2);
        }
    }

    // Combines all meshes in the scene and returns the vertices as a point cloud (Vector3[]).
    // Used for saving the environment and sending it to remote.
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
}
