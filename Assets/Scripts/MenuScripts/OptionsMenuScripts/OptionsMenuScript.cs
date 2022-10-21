using UnityEngine;
using Microsoft.MixedReality.Toolkit.Experimental.UI;
using Microsoft.MixedReality.Toolkit.UI;
using System.IO;

public class OptionsMenuScript : MonoBehaviour
{
    public GameObject MRPlayspaceGO;
    public GameObject FireMarkerGO;
    public Shader HighlightShader;
    CreatePosMarkers CPMScript;
    FireMarkerScript FMScript;

    
    [SerializeField]
    [Tooltip("Assign DialogSmall_192x96.prefab")]
    private GameObject dialogPrefabSmall;

    public GameObject DialogPrefabSmall
    {
        get => dialogPrefabSmall;
        set => dialogPrefabSmall = value;
    }

    void Start() {
        if (MRPlayspaceGO == null) {
            Debug.Log("Null MRPlayspace GameObject, searching...");
            foreach (GameObject go in gameObject.scene.GetRootGameObjects()) {
                if (go.name == "MixedRealityPlayspace") {
                    MRPlayspaceGO = go;
                    Debug.Log("GameObject found.");
                }
            }
        }
        CPMScript = MRPlayspaceGO.GetComponent<CreatePosMarkers>();

        if (FireMarkerGO == null) {
            Debug.Log("Null FireMarker Game Object, searching...");
            foreach (GameObject go in gameObject.scene.GetRootGameObjects()) {
                if (go.name == "FireMarker") {
                    FireMarkerGO = go;
                    Debug.Log("GameObject found.");
                }
            }
        }
        FMScript = FireMarkerGO.transform.Find("FireButton").GetComponent<FireMarkerScript>();
    }

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
        Dialog myDialog = Dialog.Open(DialogPrefabSmall, DialogButtonType.No | DialogButtonType.OK, "Delete position registry", "Are you sure you want to delete the position registry? This action cannot be undone.", true);
        myDialog.OnClosed += DeletePos;
    }

// Ejecuta el borrado del registro de posición. Función llamada desde el cuadro de diálogo correspondiente
    private void DeletePos(DialogResult obj) {
        if (obj.Result == DialogButtonType.OK) {
            foreach (GameObject go in GameObject.FindGameObjectsWithTag("PosMarker")) {
                Destroy(go);
            }
            bool previousState = CPMScript.enabled;
            CPMScript.enabled = false;
            StreamWriter posWriter = new StreamWriter(Application.persistentDataPath + "/coords.txt", false);
            posWriter.Close();
            CPMScript.enabled = previousState;
        }
    }

// Muestra el cuadro de diálogo para confirmar borrado de las etiquetas posicionadas
    public void DeleteMarkersClick() {
        Dialog myDialog = Dialog.Open(DialogPrefabSmall, DialogButtonType.No | DialogButtonType.OK, "Delete tags", "Are you sure you want to delete all positioned tags? This action cannot be undone.", true);
        myDialog.OnClosed += DeleteMarkers;
    }

// Ejecuta el borrado de las etiquetas posicionadas. Función llamada desde el cuadro de diálogo correspondiente
    private void DeleteMarkers(DialogResult obj) {
        if (obj.Result == DialogButtonType.OK) {
            foreach (GameObject go in GameObject.FindGameObjectsWithTag("Marker")) {
                Destroy(go);
            }
        }
    }
}