using UnityEngine;

public class PrevNextButtons : MonoBehaviour
{
    public GameObject ButtonCollectionWrapper;
    [System.NonSerialized]
    public int currentCollection = 0;

    public void NextButtonClick() {
        ButtonCollectionWrapper.transform.GetChild(currentCollection).gameObject.SetActive(false);
        currentCollection++;
        if (currentCollection >= ButtonCollectionWrapper.transform.childCount) {currentCollection = 0;}
        ButtonCollectionWrapper.transform.GetChild(currentCollection).gameObject.SetActive(true);
    }
    public void PrevButtonClick() {
        ButtonCollectionWrapper.transform.GetChild(currentCollection).gameObject.SetActive(false);
        currentCollection--;
        if (currentCollection < 0) {currentCollection = ButtonCollectionWrapper.transform.childCount - 1;}
        ButtonCollectionWrapper.transform.GetChild(currentCollection).gameObject.SetActive(true);
    }
}
