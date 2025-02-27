using UnityEngine;
using System;
using System.IO;
using System.Text;
using UnityEngine.Rendering;
using System.Linq;
using UnityEngine.Windows.WebCam;
using System.Globalization;


// All coordinates considered are transformed into left-hand system with Z-up
public class MainMenuScript : MonoBehaviour
{
// Borra la última etiqueta posicionada
    public void DeleteLastMarker() {
        GameObject[] markers = GameObject.FindGameObjectsWithTag("Marker");
        try {
            Destroy(markers[markers.Length - 1]);
        }
        catch(IndexOutOfRangeException) {
            Debug.Log("No remaining markers to delete.");
        }
    }

// Guarda los datos recogidos (la malla) y posicionados (etiquetas) durante la experiencia
    public void SaveMarkers() {
        using (StreamWriter markerWriter = new StreamWriter(Application.persistentDataPath + "/markers.txt", false)) {
            foreach (var marker in GameObject.FindGameObjectsWithTag("Marker")) {
                markerWriter.WriteLine(string.Format(CultureInfo.InvariantCulture, "{0},{1},{2},{3}\n", marker.name, (-marker.transform.position.z).ToString("f3"), marker.transform.position.x.ToString("f3"), marker.transform.position.y.ToString("f3")));
            }
        }
        Debug.Log("Tag markers saved.");
    }
    public void SaveMesh() {
        Debug.Log("Saving mesh...");
        GameObject meshParent;
        meshParent = GameObject.Find("Trackables");
        MeshFilter[] meshFilters = meshParent.GetComponentsInChildren<MeshFilter>();
        CombineInstance[] combine = new CombineInstance[meshFilters.Length];
        for (int i = 0; i < meshFilters.Length; ++i) {
            combine[i].mesh = meshFilters[i].sharedMesh;
            combine[i].transform = meshFilters[i].transform.localToWorldMatrix;
        }
        Mesh combinedMesh = new Mesh();
        combinedMesh.indexFormat = IndexFormat.UInt32;
        combinedMesh.CombineMeshes(combine);
        using (StreamWriter sw = new StreamWriter(Application.persistentDataPath + "/mesh_" + DateTime.Now.ToString("dd-MM-yyyy_HH-mm-ss") + ".txt")) {
            StringBuilder sb = new StringBuilder();
            foreach (Vector3 v in combinedMesh.vertices) {
                sb.Append(string.Format(CultureInfo.InvariantCulture, "{0},{1},{2}\n", -v.z, v.x, v.y));
            }
            sw.Write(sb.ToString());
        }
        Debug.Log("Mesh saved.");
    }

    PhotoCapture photoCaptureObject = null;
    public void TakePicture() {
        Resolution cameraResolution = PhotoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height).First();
        PhotoCapture.CreateAsync(false, delegate(PhotoCapture captureObject) {
            photoCaptureObject = captureObject;
            CameraParameters c = new CameraParameters();
            c.cameraResolutionWidth = cameraResolution.width;
            c.cameraResolutionHeight = cameraResolution.height;
            c.pixelFormat = CapturePixelFormat.BGRA32;

            if(!Directory.Exists(Application.persistentDataPath + "/pictures")) {
                Directory.CreateDirectory(Application.persistentDataPath + "/pictures");
            }

            // Activate the camera
            captureObject.StartPhotoModeAsync(c, delegate(PhotoCapture.PhotoCaptureResult result) {
                Debug.Log("Taking Picture...");
                Matrix4x4 localPos = Camera.main.transform.localToWorldMatrix;
                Vector4 temp;
                temp = localPos.GetRow(2);
                localPos.SetRow(2, localPos.GetRow(1));
                localPos.SetRow(1, localPos.GetRow(0));
                localPos.SetRow(0, -temp);
                temp = localPos.GetColumn(2);
                localPos.SetColumn(2, localPos.GetColumn(1));
                localPos.SetColumn(1, localPos.GetColumn(0));
                localPos.SetColumn(0, -temp);
                String matrixString = localPos.ToString().Replace("\n", ",").Replace("\t", ",");
                matrixString = matrixString[..^1];
                captureObject.TakePhotoAsync(
                    string.Format("{0}/pictures/{1}.jpg", Application.persistentDataPath, matrixString),
                    PhotoCaptureFileOutputFormat.JPG, OnCapturedPhotoToDisk);
            });
        });
    }
    private void OnCapturedPhotoToDisk(PhotoCapture.PhotoCaptureResult result) {
        Debug.Log("Saved picture.");
        photoCaptureObject.StopPhotoModeAsync(OnStoppedPhotoMode);
    }

    private void OnStoppedPhotoMode(PhotoCapture.PhotoCaptureResult result) {
        photoCaptureObject.Dispose();
        photoCaptureObject = null;
    }
}
