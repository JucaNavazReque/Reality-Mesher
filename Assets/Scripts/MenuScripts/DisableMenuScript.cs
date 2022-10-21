using UnityEngine;

public class DisableMenuScript : MonoBehaviour
{
    Material rendMat;
    void Start() {
        rendMat = transform.parent.Find("Backplate").GetComponent<Renderer>().material;
    }
    public void DisableMenu() {
        rendMat.color = new Color(0.3f, 0.3f, 0.3f);
        rendMat.SetFloat("_BorderMinValue", 0.75f);
        foreach (Transform child in transform) {
            child.GetComponent<BoxCollider>().enabled = false;
        }
    }
    public void EnableMenu() {
        rendMat.color = new Color(0f, 0f, 0f);
        rendMat.SetFloat("_BorderMinValue", 0.6f);
        foreach (Transform child in transform) {
            child.GetComponent<BoxCollider>().enabled = true;
        }
    }
}
