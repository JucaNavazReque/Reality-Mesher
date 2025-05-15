using UnityEngine;

public class DeleteMarkerSelf : MonoBehaviour
{
    public void OnClick() {
        GameObject marker = transform.parent.gameObject;
        MarkerManager.Instance.RemoveMarker(marker);
        Destroy(marker);
    }
}
