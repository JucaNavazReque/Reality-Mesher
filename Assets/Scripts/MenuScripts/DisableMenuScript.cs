using UnityEngine;

public class DisableMenuScript : MonoBehaviour
{
    Material rendMat;
    public Renderer Backplate;
    void Start() {
        rendMat = Backplate.material;
    }
    public void DisableMenu() {
        rendMat.SetColor("_Base_Color_", new Color(0.2f, 0.2f, 0.2f));
        rendMat.SetColor("_Line_Color_", new Color(0.4f,0.44f,0.53f));
        foreach (Transform child in transform) {
            child.GetComponent<BoxCollider>().enabled = false;
        }
    }
    public void EnableMenu() {
        rendMat.SetColor("_Base_Color_", new Color(0f, 0f, 0f));
        rendMat.SetColor("_Line_Color_", new Color(0.2f,0.262745f,0.4f));
        foreach (Transform child in transform) {
            child.GetComponent<BoxCollider>().enabled = true;
        }
    }
}
