using UnityEngine;
using System.Collections.Generic;

public class MarkerManager : MonoBehaviour
{
    private static MarkerManager _instance;
    public static MarkerManager Instance => _instance;

    private List<GameObject> markers = new List<GameObject>();

    private void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            _instance = this;
            DontDestroyOnLoad(gameObject);
        }
    }

    public void AddMarker(GameObject marker)
    {
        markers.Add(marker);
    }

    public void RemoveMarker(GameObject marker)
    {
        markers.Remove(marker);
    }

    public GameObject GetLastMarker()
    {
        if (markers.Count > 0)
        {
            return markers[^1];
        }
        return null;
    }

    public List<GameObject> GetAllMarkers()
    {
        return new List<GameObject>(markers);
    }

    public void DestroyAllMarkers()
    {
        foreach (var marker in markers)
        {
            Destroy(marker);
        }
        markers.Clear();
    }
}