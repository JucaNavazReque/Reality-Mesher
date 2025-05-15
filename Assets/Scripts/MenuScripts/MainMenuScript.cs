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


public class MainMenuScript : MonoBehaviour
{
    public DialogPool dialogPool;
    string session;
    GameObject meshParent;
    MeshFilter[] meshFilters;
    CombineInstance[] combine;
    Mesh combinedMesh;
    private string imagePath;
    private string zipPath;

    public void Start() {
        session = "session_" + DateTime.Now.ToString("dd-MM-yyyy_HH-mm-ss");
        meshParent = GameObject.Find("Trackables");
        zipPath = string.Format("{0}/{1}_pictures.zip", Application.persistentDataPath, session);

        // Register existing markers
        foreach (var marker in GameObject.FindGameObjectsWithTag("Marker")) {
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
        }
    }

    public void SaveData() {
        IDialog dialog = dialogPool.Get()
            .SetHeader("Save data")
            .SetBody("What data do you want to save?")
            .SetPositive("Markers", _ => SaveMarkers())
            .SetNegative("Mesh", _ => SaveMesh())
            .SetNeutral("Cancel");
        dialog.Show();
    }

    // Saves all tag markers positioned. Format: name,x,y,z
    private void SaveMarkers() {
        using (StreamWriter markerWriter = new StreamWriter(string.Format(CultureInfo.InvariantCulture, "{0}/{1}_markers.txt", Application.persistentDataPath, session), false)) {
            foreach (var marker in MarkerManager.Instance.GetAllMarkers()) {
                //markerWriter.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0},{1},{2},{3}", marker.name, (-marker.transform.position.z).ToString("f3"), marker.transform.position.x.ToString("f3"), marker.transform.position.y.ToString("f3")));
                markerWriter.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0},{1},{2},{3}", marker.name, marker.transform.position.x.ToString("f3"), marker.transform.position.y.ToString("f3"), marker.transform.position.z.ToString("f3")));
            }
        }
        Debug.Log("Tag markers saved.");
    }

    // Saves the mesh of the environment. Format: x,y,z
    private async void SaveMesh() {
        Debug.Log("Saving mesh...");
        meshFilters = meshParent.GetComponentsInChildren<MeshFilter>();
        if (meshFilters.Length == 0) {
            Debug.Log("No mesh found to save.");
            return;
        }
        combine = new CombineInstance[meshFilters.Length];
        //await Task.Run(() => MeshCombiner(meshFilters, ref combine));
        MeshCombiner(meshFilters, ref combine);
        combinedMesh.CombineMeshes(combine);
        string savingPath = Application.persistentDataPath;
        Vector3[] vertices = combinedMesh.vertices;
        await Task.Run(() => MeshWriter(savingPath, vertices));
        Debug.Log("Mesh saved.");
    }

    private void MeshCombiner(MeshFilter[] meshFilters, ref CombineInstance[] combine) {
        for (int i = 0; i < meshFilters.Length; ++i) {
            combine[i].mesh = meshFilters[i].sharedMesh;
            combine[i].transform = meshFilters[i].transform.localToWorldMatrix;
        }
    }

    private void MeshWriter(string savingPath, Vector3[] vertices) {
        using (StreamWriter sw = new StreamWriter(string.Format("{0}/{1}_mesh.txt", savingPath, session), true)) {
            StringBuilder sb = new StringBuilder();
            foreach (Vector3 v in vertices) {
                sb.AppendFormat(CultureInfo.InvariantCulture, "{0},{1},{2}\n", v.x, v.y, v.z);
            }
            sw.Write(sb.ToString());
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

            if (!Directory.Exists(Application.persistentDataPath + "/pictures")) {
                Directory.CreateDirectory(Application.persistentDataPath + "/pictures");
            }

            // Activate the camera
            captureObject.StartPhotoModeAsync(c, delegate (PhotoCapture.PhotoCaptureResult result) {
                Debug.Log("Taking Picture...");
                Matrix4x4 localPos = Camera.main.transform.localToWorldMatrix;
                // Vector4 temp;
                // temp = localPos.GetRow(2);
                // localPos.SetRow(2, localPos.GetRow(1));
                // localPos.SetRow(1, localPos.GetRow(0));
                // localPos.SetRow(0, -temp);
                // temp = localPos.GetColumn(2);
                // localPos.SetColumn(2, localPos.GetColumn(1));
                // localPos.SetColumn(1, localPos.GetColumn(0));
                // localPos.SetColumn(0, -temp);
                // temp = localPos.GetColumn(2);
                // localPos.SetColumn(2, localPos.GetColumn(1));
                // localPos.SetColumn(1, temp);
                string matrixString = localPos.ToString().Replace("\n", ",").Replace("\t", ",");
                matrixString = matrixString[..^1];
                string pictureTime = DateTime.Now.ToString("dd-MM-yyyy_HH-mm-ss");
                imagePath = string.Format("{0}/pictures/{1}.jpg", Application.persistentDataPath, pictureTime);
                using (StreamWriter imagePosWriter = new StreamWriter(string.Format(CultureInfo.InvariantCulture, "{0}/{1}_pictures_pos.txt", Application.persistentDataPath, session), true)) {
                    imagePosWriter.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0} {1}", pictureTime, matrixString));
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
        photoCaptureObject.StopPhotoModeAsync(OnStoppedPhotoMode);
    }

    private void OnStoppedPhotoMode(PhotoCapture.PhotoCaptureResult result) {
        photoCaptureObject.Dispose();
        photoCaptureObject = null;
    }
}
