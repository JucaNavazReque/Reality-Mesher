using UnityEngine;
using TMPro;
using MixedReality.Toolkit.UX;

public class UpdatePosPeriodScript : MonoBehaviour
{
    public CreatePosMarkers PosTracker;
    public TextMeshPro PeriodValueText;
    public Slider slider;
    float PeriodValue;

    void Start() {
        float startPeriodValue = PosTracker.PosMarkerCreationPeriod;
        slider.Value = startPeriodValue;
    }

// Función llamada al actualizar el elemento deslizante del periodo de registro de posición
    public void UpdatePosPeriod(SliderEventData eventData) {
        PeriodValue = eventData.NewValue;
        PeriodValueText.text = $"{PeriodValue:F2}";
        PosTracker.PosMarkerCreationPeriod = PeriodValue;
    }
}
