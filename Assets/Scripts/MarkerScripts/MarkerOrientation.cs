using UnityEngine;

public class MarkerOrientation : MonoBehaviour
{
    private Transform FacingCamera;

    void Awake()
    {
        FacingCamera = Camera.main.transform;
    }
    void Update()
    {
        transform.LookAt(FacingCamera);
        transform.Rotate(0, 180, 0);
    }
}
