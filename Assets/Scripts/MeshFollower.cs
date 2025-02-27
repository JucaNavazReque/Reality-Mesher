using UnityEngine;

public class MeshFollower : MonoBehaviour
{
    public Transform cameraGO;
    // Update is called once per frame
    void Update()
    {
        gameObject.transform.position = cameraGO.position;
    }
}
