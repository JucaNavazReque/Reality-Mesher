using UnityEngine;

public class DeleteMarkerSelf : MonoBehaviour
{
    public void OnClick() {
        Destroy(transform.parent.gameObject);
    }
}
