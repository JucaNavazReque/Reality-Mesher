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

// Función ejecutada al iniciar la aplicación
    void Awake() {
        posWriter = new StreamWriter(Application.persistentDataPath + "/traj.txt", false);
        posWriter.Close();
    }

// Función ejecutada al habilitar el script
    void OnEnable() {
        posWriter = new StreamWriter(Application.persistentDataPath + "/traj.txt", true);
        //posWriter.WriteLine("timestamp,x,y,z,qw,qx,qy,qz");
        posWriter.WriteLine("timestamp,matrix");
    }

// Función ejecutada al deshabilitar el script
    public void OnDisable() {
        posWriter.Close();
    }

// Función ejecutada cada ciclo de la aplicación
    void Update() {
        if (Time.time > nextActionTime)
	    {
            nextActionTime = Time.time + PosMarkerCreationPeriod;
            GOParent = new GameObject("PosMarker");
            createSphere();
            DrawLine();
            GOParent.tag = "PosMarker";
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
            posWriter.WriteLine(DateTime.Now.ToString("dd-MM-yyyy_HH:mm:ss", culture) + "," + matrixString);
            // Quaternion exportRotation = localPos.rotation;
            // Vector3 exportPosition = localPos.GetColumn(3);
            // // Quaternion posRotation = Camera.main.transform.rotation;
            // posWriter.WriteLine(DateTime.Now.ToString("dd-MM-yyyy_HH:mm:ss", culture) + "," 
            //     + exportPosition.x.ToString(culture) + "," 
            //     + exportPosition.y.ToString(culture) + "," 
            //     + exportPosition.z.ToString(culture) + "," 
            //     + exportRotation.w.ToString(culture) + "," 
            //     + exportRotation.x.ToString(culture) + "," 
            //     + exportRotation.y.ToString(culture) + "," 
            //     + exportRotation.z.ToString(culture));
        }
    }

// Funciones para crear los marcadores visuales
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