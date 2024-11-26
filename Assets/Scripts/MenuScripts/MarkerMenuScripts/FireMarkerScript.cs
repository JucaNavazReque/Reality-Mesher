using UnityEngine;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;

public class FireMarkerScript : MonoBehaviour
{
    public GameObject markerPrefab;
    public Shader HighlightShader;
    public bool HighlightMarkers = false;
    [HideInInspector]
    public string MarkerName;
    [HideInInspector]
    public Color MarkerColor;

    public void createMarker() {
        Quaternion rotation_quat = Quaternion.Euler(Camera.main.transform.forward.x, Camera.main.transform.forward.y+180, Camera.main.transform.forward.z);
        Ray ray = new Ray(Camera.main.transform.position, Camera.main.transform.forward);
        RaycastHit hitData;
        if (Physics.Raycast(ray, out hitData, Mathf.Infinity, 1<<31))
        {
            GameObject WallMarker = Instantiate(markerPrefab, hitData.point, rotation_quat);
            WallMarker.tag = "Marker";
            WallMarker.name = MarkerName;
            WallMarker.transform.Find("Sphere").GetComponent<Renderer>().material.color = MarkerColor;
            if (HighlightMarkers) {WallMarker.transform.Find("Sphere").GetComponent<Renderer>().material.shader = HighlightShader;}
        }
    }
}
