using UnityEngine;
using System;
using System.IO;
using System.Globalization;

public class CreatePosMarkers : MonoBehaviour
{
    public Material PosMarkerMat;
    public float LineWidth = 0.003f;
    public Color LineColor = Color.yellow;
    public float PosMarkerCreationPeriod = 1.0f;
    public bool ShowMarkers = false;
    public bool ShowOrientation = true;

    float nextActionTime = 0.0f;
    StreamWriter posWriter;
    GameObject GOParent;
    CultureInfo culture = CultureInfo.InvariantCulture;
    [HideInInspector]
    public string session;
    string savingPath;

    void Awake() {
        savingPath = string.Format(CultureInfo.InvariantCulture, "{0}/{1}", Application.persistentDataPath, session);
        if (!Directory.Exists(savingPath))
        {
            Directory.CreateDirectory(savingPath);
        }
        posWriter = new StreamWriter(string.Format(CultureInfo.InvariantCulture,"{0}/{1}_traj.txt",savingPath,session), false);
        posWriter.Close();
    }

    void OnEnable() {
        posWriter = new StreamWriter(string.Format(CultureInfo.InvariantCulture,"{0}/{1}_traj.txt",savingPath,session), true);
        posWriter.WriteLine("timestamp,matrix");
    }

    public void OnDisable() {
        posWriter.Close();
    }

    void Update() {
        if (Time.time > nextActionTime)
	    {
            nextActionTime = Time.time + PosMarkerCreationPeriod;
            GOParent = new GameObject("PosMarker");
            createSphere();
            DrawLine();
            GOParent.tag = "PosMarker";
            Matrix4x4 localPos = Camera.main.transform.localToWorldMatrix;
            string matrixString = localPos.ToString().Replace("\n", ",").Replace("\t", ",");
            matrixString = matrixString[..^1];
            posWriter.WriteLine(DateTime.Now.ToString("dd-MM-yyyy_HH:mm:ss", culture) + "," + matrixString);
        }
    }

    void createSphere()
    {
        GameObject _Sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        _Sphere.transform.localScale = new Vector3(0.05f, 0.05f, 0.05f);
        _Sphere.transform.position = Camera.main.transform.position;
        _Sphere.GetComponent<Renderer>().material = PosMarkerMat;
        _Sphere.transform.SetParent(GOParent.transform);
        _Sphere.GetComponent<Renderer>().enabled = ShowMarkers;
    }

    void DrawLine()
    {
        Transform main_camera = Camera.main.transform;
        GameObject myLine = new GameObject("Line");
        LineRenderer lr = myLine.AddComponent<LineRenderer>();
        lr.startWidth = LineWidth;
        lr.endWidth = LineWidth;
        lr.material = new Material(Shader.Find("Unlit/Color"));
        lr.material.color = LineColor;
        var points = new Vector3[2];
        points[0] = main_camera.position;
        points[1] = main_camera.position + main_camera.TransformDirection(Vector3.forward)*0.2f;
        lr.SetPositions(points);
        lr.transform.SetParent(GOParent.transform);
        lr.GetComponent<LineRenderer>().enabled = ShowMarkers && ShowOrientation;
    }
}