using UnityEngine;

public class SetMarkerParameters : MonoBehaviour
{
    public string MarkerName;
    public Color MarkerColor;
    public GameObject FireMarkerGO;

    void Start() {
        if (FireMarkerGO == null) {
            Debug.Log("Null GameObject, searching...");
            foreach (GameObject go in gameObject.scene.GetRootGameObjects()) {
                if (go.name == "FireMarker") {
                    FireMarkerGO = go;
                    Debug.Log("GameObject found.");
                }
            }
        }
    }

    public void SetParameters() {
        FireMarkerScript script = FireMarkerGO.transform.Find("FireButton").GetComponent<FireMarkerScript>();
        script.MarkerName = MarkerName;
        script.MarkerColor = MarkerColor;
        Debug.Log("Parámetros editados");
    }
}
