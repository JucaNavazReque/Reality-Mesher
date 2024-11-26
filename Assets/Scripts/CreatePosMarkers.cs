using UnityEngine;
using System;
using System.IO;

public class CreatePosMarkers : MonoBehaviour
{
    public Material PosMarkerMat;
    public float LineWidth = 0.003f;
    public Color LineColor = Color.yellow;
    public float PosMarkerCreationPeriod = 1.0f;
    public bool ShowMarkers = true;
    public bool ShowOrientation = true;

    float nextActionTime = 0.0f;
    StreamWriter posWriter;
    GameObject GOParent;

// Función ejecutada al iniciar la aplicación
    void Awake() {
        posWriter = new StreamWriter(Application.persistentDataPath + "/traj.txt", false);
        posWriter.Close();
    }

// Función ejecutada al habilitar el script
    void OnEnable() {
        posWriter = new StreamWriter(Application.persistentDataPath + "/traj.txt", true);
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
            posWriter.WriteLine(DateTime.Now.ToString("[dd-MM-yyyy_HH:mm:ss]") + " ((" + Camera.main.transform.position.x + " " + Camera.main.transform.position.y + " " + -Camera.main.transform.position.z + ") " + Camera.main.transform.rotation.eulerAngles + ")");
        }
    }

// Funciones para crear los marcadores visuales
    void createSphere()
    {
        GameObject _Sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        //_Sphere.AddComponent<MeshFilter>();
        //MeshRenderer nRenderer = _Sphere.AddComponent<MeshRenderer>();
        _Sphere.transform.localScale = new Vector3(0.05f, 0.05f, 0.05f);
        _Sphere.transform.position = Camera.main.transform.position;
        _Sphere.GetComponent<Renderer>().material = PosMarkerMat;
        _Sphere.transform.SetParent(GOParent.transform);
        _Sphere.GetComponent<Renderer>().enabled = ShowMarkers;
    }

    void DrawLine()
    {
        GameObject myLine = new GameObject("Line");
        LineRenderer lr = myLine.AddComponent<LineRenderer>();
        lr.startWidth = LineWidth;
        lr.endWidth = LineWidth;
        lr.material = new Material(Shader.Find("Unlit/Color"));
        lr.material.color = LineColor;
        var points = new Vector3[2];
        points[0] = Camera.main.transform.position;
        points[1] = Camera.main.transform.position + Camera.main.transform.TransformDirection(Vector3.forward)*0.2f;
        lr.SetPositions(points);
        lr.transform.SetParent(GOParent.transform);
        lr.GetComponent<LineRenderer>().enabled = ShowMarkers && ShowOrientation;
    }
}