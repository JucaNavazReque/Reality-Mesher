using UnityEngine;
using System.IO;
using MixedReality.Toolkit.UX;

public class SettingsMenuScript : MonoBehaviour
{
    public Shader HighlightShader;
    public CreatePosMarkers CPMScript;
    public FireMarkerScript FMScript;
    public DialogPool DialogPool;

// Alterna la habilitación del registro de posición
    public void ReadPosClick() {
        CPMScript.enabled ^= true;
    }

// Alterna la visualización de los marcadores de posición, tanto ya creados como futuros
    public void SeePosClick() {
        CPMScript.ShowMarkers ^= true;
        foreach (GameObject go in GameObject.FindGameObjectsWithTag("PosMarker")) {
            go.transform.Find("Sphere").GetComponent<Renderer>().enabled = CPMScript.ShowMarkers;
            go.transform.Find("Line").GetComponent<LineRenderer>().enabled = CPMScript.ShowMarkers && CPMScript.ShowOrientation;
        }
    }

// Alterna la visualización de las rectas de orientación, tanto ya creadas como futuras
    public void SeeOrientClick() {
        CPMScript.ShowOrientation ^= true;
        foreach (GameObject go in GameObject.FindGameObjectsWithTag("PosMarker")) {
            go.transform.Find("Line").GetComponent<LineRenderer>().enabled = CPMScript.ShowMarkers && CPMScript.ShowOrientation;
        }
    }

// Alterna la visualización de los marcadores de posición, tanto ya creados como futuros
    public void HighlightOcclusionsClick() {
        foreach (Transform child in GameObject.Find("OcclusionHighlighter").transform)
            child.gameObject.SetActive(!child.gameObject.activeSelf);
    }

// Aplica un shader a las etiquetas ya posicionadas y nuevas para visualizarlas a través de elementos escaneados
    public void HighlightMarkersClick() {
        FMScript.HighlightMarkers ^= true;
        foreach (GameObject go in GameObject.FindGameObjectsWithTag("Marker")) {
            if (FMScript.HighlightMarkers) {
                go.transform.Find("Sphere").GetComponent<Renderer>().material.shader = HighlightShader;
            }
            else {
                go.transform.Find("Sphere").GetComponent<Renderer>().material.shader = Shader.Find("Standard");
            }
        }
    }

// Muestra el cuadro de diálogo para confirmar borrado del registro de posición
    public void DeletePosClick() {
        IDialog dialog = DialogPool.Get()
            .SetHeader("Delete position registry")
            .SetBody("Are you sure you want to delete the position registry? This action cannot be undone.")
            .SetPositive("Yes", ( args ) => DeletePos(args.ButtonType))
            .SetNegative("No");
        dialog.Show();
    }

// Ejecuta el borrado del registro de posición. Función llamada desde el cuadro de diálogo correspondiente
    private void DeletePos(DialogButtonType ans) {
        if (ans == 0) { // 0 for positive
            foreach (GameObject go in GameObject.FindGameObjectsWithTag("PosMarker")) {
                Destroy(go);
            }
            bool previousState = CPMScript.enabled;
            CPMScript.enabled = false;
            StreamWriter posWriter = new StreamWriter(Application.persistentDataPath + "/traj.txt", false);
            posWriter.Close();
            CPMScript.enabled = previousState;
        }
    }

// Muestra el cuadro de diálogo para confirmar borrado de las etiquetas posicionadas
    public void DeleteMarkersClick() {
        IDialog dialog = DialogPool.Get()
            .SetHeader("Delete tags")
            .SetBody("Are you sure you want to delete all positioned tags? This action cannot be undone.")
            .SetPositive("Yes", ( args ) => DeleteMarkers(args.ButtonType))
            .SetNegative("No");
        dialog.Show();
    }

// Ejecuta el borrado de las etiquetas posicionadas. Función llamada desde el cuadro de diálogo correspondiente
    private void DeleteMarkers(DialogButtonType ans) {
        if (ans == 0) { // 0 for positive
            foreach (GameObject go in GameObject.FindGameObjectsWithTag("Marker")) {
                Destroy(go);
            }
        }
    }
}