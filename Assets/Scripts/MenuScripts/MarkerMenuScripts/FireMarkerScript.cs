using UnityEngine;

public class FireMarkerScript : MonoBehaviour
{
    public GameObject markerPrefab;
    public GameObject deleteButton;
    public Shader HighlightShader;
    public bool HighlightMarkers = false;
    [HideInInspector]
    public string MarkerName;
    [HideInInspector]
    public Color MarkerColor;
    [SerializeField]
    private LayerMask _layerMask;

    public void createMarker() {
        Transform CameraTransform = Camera.main.transform;
        Quaternion rotation_quat = Quaternion.Euler(CameraTransform.forward.x, CameraTransform.forward.y+180, CameraTransform.forward.z);
        Ray ray = new Ray(CameraTransform.position, CameraTransform.forward);
        RaycastHit hitData;
        if (Physics.Raycast(ray, out hitData, Mathf.Infinity, _layerMask))
        {
            GameObject WallMarker = Instantiate(markerPrefab, hitData.point, rotation_quat);
            WallMarker.tag = "Marker";
            WallMarker.name = MarkerName;
            WallMarker.transform.GetChild(0).GetComponent<Renderer>().material.color = MarkerColor;
            if (HighlightMarkers) {WallMarker.transform.Find("Sphere").GetComponent<Renderer>().material.shader = HighlightShader;}
            GameObject DeleteMarkerButton = Instantiate(deleteButton, WallMarker.transform.position, rotation_quat);
            DeleteMarkerButton.transform.Translate(0f,0.048f,0f);
            DeleteMarkerButton.transform.SetParent(WallMarker.transform);
        }

        // Testing code
        RaycastHit[] testHits;
        testHits = Physics.RaycastAll(ray, Mathf.Infinity, _layerMask);
        Debug.Log(testHits.Length);
    }
}
