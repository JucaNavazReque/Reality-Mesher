using MixedReality.Toolkit.SpatialManipulation;
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
    public LineRenderer lineRend;
    public float LineVerticalOffset = -0.2f;
    public float LineHorizontalOffset = -0.1f;
    public float LineForwardOffset = 0.5f;
    public Material ghostMarkerMat;
    public float ghostTransparency = 0.5f;
    private RaycastHit hitData;
    private Color ghostColor;
    private Camera mainCamera;
    private Vector3 lineOrigin;

    public void Start()
    {
        mainCamera = Camera.main;
    }

    GameObject createSphere(Vector3 rayPosition)
    {
        GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        sphere.transform.localScale = new Vector3(0.05f, 0.05f, 0.05f);
        sphere.transform.position = rayPosition;
        return sphere;
    }
    private void deleteGhostMarker() {
        foreach (GameObject go in gameObject.scene.GetRootGameObjects()) {
            if (go.name == "GhostMarker") {
                Destroy(go);
            }
        }
    }
    public void Update()
    {
        deleteGhostMarker();
        Transform CameraTransform = mainCamera.transform;
        Ray ray = new Ray(CameraTransform.position, CameraTransform.forward);
        if (Physics.Raycast(ray, out hitData, Mathf.Infinity, _layerMask))
        {
            lineRend.enabled = true;
            GameObject ghostMarker = createSphere(hitData.point);
            ghostMarker.name = "GhostMarker";
            ghostMarker.GetComponent<Renderer>().material = ghostMarkerMat;
            ghostColor = MarkerColor;
            ghostColor.a = ghostTransparency;
            ghostMarker.GetComponent<Renderer>().material.color = ghostColor;
            ghostMarker.GetComponent<Renderer>().material.SetColor("_EmissionColor", ghostColor);
            ghostMarker.AddComponent<SolverHandler>();
            ConstantViewSize ghostCVS = ghostMarker.AddComponent<ConstantViewSize>();
            ghostCVS.MaxDistance = 50f;

            lineOrigin = CameraTransform.position;
            lineOrigin.y += LineVerticalOffset;
            lineOrigin += CameraTransform.right * LineHorizontalOffset;
            lineOrigin += CameraTransform.forward * LineForwardOffset;
            lineRend.SetPosition(0, lineOrigin);
            lineRend.SetPosition(1, hitData.point);
        }
        else
        {
            lineRend.enabled = false;
        }
    }
    public void createMarker() {
        deleteGhostMarker();
        Transform CameraTransform = Camera.main.transform;
        Quaternion rotation_quat = Quaternion.Euler(CameraTransform.forward.x, CameraTransform.forward.y+180, CameraTransform.forward.z);
        Ray ray = new Ray(CameraTransform.position, CameraTransform.forward);
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
    }
    public void closeMenu() {
        deleteGhostMarker();
        gameObject.SetActive(false);
    }
}
