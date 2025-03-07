using UnityEngine;

public class SetMarkerParameters : MonoBehaviour
{
    public string MarkerName;
    public Color MarkerColor;
    public GameObject FireMarkerGO;

    public void SetParameters() {
        FireMarkerScript script = FireMarkerGO.GetComponent<FireMarkerScript>();
        script.MarkerName = MarkerName;
        script.MarkerColor = MarkerColor;
        Debug.Log("Marker parameters set");
    }
}
