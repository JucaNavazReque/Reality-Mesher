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
using UnityEngine.XR.ARFoundation;
using static GeoTECH.Logger.AppLogger;
// Serializer
using Game.Network;

public class MainMenuScript : MonoBehaviour
{
    public DialogPool dialogPool;
    [HideInInspector]
    public string session;
    ARMeshManager meshManager;
    IList<MeshFilter> meshFilters;
    CombineInstance[] combine;
    Mesh combinedMesh;
    private string imagePath;
    private string zipPath;
    private int savedDataCount = 0;
    [SerializeField] private string processingUrl;
    [HideInInspector] string savingPath;

    public void Start()
    {
        if (string.IsNullOrEmpty(session))
        {
            session = "session_" + DateTime.Now.ToString("dd-MM-yyyy_HH-mm-ss");
        }
        meshManager = GameObject.Find("ARMeshManager").GetComponent<ARMeshManager>();
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
            .SetNegative("Mesh", _ => SaveSpatialData())
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

    // Saves the spatial data of the environment. Format: (x,y,z) and .obj
    private async void SaveSpatialData() {
        Vector3[] vertices = GetSpatialData();
        MeshSnapshot mesh_snap = new MeshSnapshot(combinedMesh);
        await Task.Run(() => DataWriter(savingPath, vertices, mesh_snap));
        Log("Mesh saved.");
    }

    // Combines meshes into "combinedMesh" and extracts its vertices.
    private Vector3[] GetSpatialData() {
        Log("Generating mesh...");
        meshFilters = meshManager.meshes;
        if (meshFilters.Count == 0) {
            Log("No mesh found to save.");
            return Array.Empty<Vector3>();
        }
        combine = new CombineInstance[meshFilters.Count];
        MeshCombiner(meshFilters, ref combine);
        combinedMesh.Clear();
        combinedMesh.CombineMeshes(combine);
        Log($"Mesh generated with {combinedMesh.vertexCount} vertices.");
        return combinedMesh.vertices;
    }

    private void MeshCombiner(IList<MeshFilter> meshFilters, ref CombineInstance[] combine) {
        for (int i = 0; i < meshFilters.Count; ++i) {
            meshFilters[i].sharedMesh.RecalculateNormals();
            combine[i].mesh = meshFilters[i].sharedMesh;
            combine[i].transform = meshFilters[i].transform.localToWorldMatrix;
        }
    }

    private void DataWriter(string savingPath, Vector3[] vertices, MeshSnapshot mesh = null)
    {
        if (vertices.Length == 0)
        {
            Log("No data available to save.", GeoTECH.Logger.LogType.Warning);
            return;
        }

        string sessionFolder = Path.Combine(savingPath, session);
        string meshesFolder = Path.Combine(sessionFolder, "meshes");
        if (!Directory.Exists(meshesFolder)) {
            Directory.CreateDirectory(meshesFolder);
        }

        StringBuilder sb = new StringBuilder();
        foreach (Vector3 v in vertices)
        {
            sb.AppendFormat(CultureInfo.InvariantCulture, "{0},{1},{2}\n", v.x, v.y, v.z);
        }
        using (StreamWriter sw = new StreamWriter(Path.Combine(sessionFolder, $"{session}_points.txt"), true))
        {
            sw.Write(sb.ToString());
        }
        using (StreamWriter sw = new StreamWriter(Path.Combine(meshesFolder, $"{savedDataCount}_points.txt"), true))
        {
            sw.Write(sb.ToString());
        }

        if (mesh != null)
        {
            string objPath = Path.Combine(meshesFolder, $"{savedDataCount}_mesh.obj");

            Vector3[] meshVertices = mesh.meshVertices;
            Vector2[] meshUVs = mesh.meshUVs;
            Vector3[] meshNormals = mesh.meshNormals;
            int[] meshTriangles = mesh.meshTriangles;
            bool hasUVs = meshUVs != null && meshUVs.Length == meshVertices.Length;
            bool hasNormals = meshNormals != null && meshNormals.Length == meshVertices.Length;

            using StreamWriter writer = new StreamWriter(objPath, false);
            writer.WriteLine($"o {Path.GetFileNameWithoutExtension(objPath)}");

            foreach (Vector3 vertex in meshVertices) {
                writer.WriteLine(string.Format(CultureInfo.InvariantCulture, "v {0} {1} {2}", vertex.x, vertex.y, vertex.z));
            }

            if (hasUVs) {
                foreach (Vector2 uv in meshUVs) {
                    writer.WriteLine(string.Format(CultureInfo.InvariantCulture, "vt {0} {1}", uv.x, uv.y));
                }
            }

            if (hasNormals) {
                foreach (Vector3 normal in meshNormals) {
                    writer.WriteLine(string.Format(CultureInfo.InvariantCulture, "vn {0} {1} {2}", normal.x, normal.y, normal.z));
                }
            }

            for (int i = 0; i < meshTriangles.Length; i += 3) {
                int a = meshTriangles[i] + 1;
                int b = meshTriangles[i + 1] + 1;
                int c = meshTriangles[i + 2] + 1;

                if (hasUVs && hasNormals) {
                    writer.WriteLine($"f {a}/{a}/{a} {b}/{b}/{b} {c}/{c}/{c}");
                }
                else if (hasUVs) {
                    writer.WriteLine($"f {a}/{a} {b}/{b} {c}/{c}");
                }
                else if (hasNormals) {
                    writer.WriteLine($"f {a}//{a} {b}//{b} {c}//{c}");
                }
                else {
                    writer.WriteLine($"f {a} {b} {c}");
                }
            }
        }

        savedDataCount++;
    }

    private class MeshSnapshot {
            public Vector3[] meshVertices {get;}
            public Vector2[] meshUVs {get;}
            public Vector3[] meshNormals {get;}
            public int[] meshTriangles {get;}
        public MeshSnapshot(Mesh mesh)
        {
            meshVertices = mesh.vertices;
            meshUVs = mesh.uv;
            meshNormals = mesh.normals;
            meshTriangles = mesh.triangles;
        }
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
        string meshFilePath = string.Format("{0}/{1}/{1}_points.txt", savingPath, session);

        if (!File.Exists(meshFilePath)) {
            Log("No environment has been saved yet.", GeoTECH.Logger.LogType.Warning);
            return;
        }

        ClassifiedPointCloud pc = new ClassifiedPointCloud();
        await Task.Run(() =>
        {
            Log("Loading saved environment vertices...");
            using StreamReader reader = new StreamReader(meshFilePath);
            string line;
            while ((line = reader.ReadLine()) != null) // While loop is used to avoid loading the entire file into memory
            {
                var coords = line.Split(',');
                pc.point_cloud.Add(new Vector3(
                    float.Parse(coords[0], CultureInfo.InvariantCulture),
                    float.Parse(coords[1], CultureInfo.InvariantCulture),
                    float.Parse(coords[2], CultureInfo.InvariantCulture)
                ));
                pc.classification.Add((byte) 0); // c = 0 means unclassified, default for original points
            }
        });
        Log($"Loaded {pc.classification.Count} vertices from saved environment file.");

        if (pc.classification.Count == 0)
        {
            Log("Point cloud is empty. Please save the environment before sending to remote processing.", GeoTECH.Logger.LogType.Warning);
            return;
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
