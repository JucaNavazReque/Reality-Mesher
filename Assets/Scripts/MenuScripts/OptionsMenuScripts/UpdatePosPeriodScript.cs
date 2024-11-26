using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Experimental.UI;
using TMPro;

public class UpdatePosPeriodScript : MonoBehaviour
{
    public GameObject MRPlayspaceGO;
    TextMeshPro textMesh;
    float PeriodValue;

    void Start() {
        textMesh = transform.Find("TextParent").Find("PeriodValue").GetComponent<TextMeshPro>();
        if (MRPlayspaceGO == null) {
            Debug.Log("Null GameObject, searching...");
            foreach (GameObject go in gameObject.scene.GetRootGameObjects()) {
                if (go.name == "MixedRealityPlayspace") {
                    MRPlayspaceGO = go;
                    Debug.Log("GameObject found.");
                }
            }
        }
        float startPeriodValue = MRPlayspaceGO.GetComponent<CreatePosMarkers>().PosMarkerCreationPeriod;
        transform.Find("PeriodSlider").GetComponent<StepSlider>().SliderValue = (startPeriodValue - 0.2f) / 9.8f;
    }

// Función llamada al actualizar el elemento deslizante del periodo de registro de posición
    public void UpdatePosPeriod(SliderEventData eventData) {
        PeriodValue = eventData.NewValue * 9.8f + 0.2f;
        textMesh.text = $"{PeriodValue:F2}";
        MRPlayspaceGO.GetComponent<CreatePosMarkers>().PosMarkerCreationPeriod = PeriodValue;
    }
}
