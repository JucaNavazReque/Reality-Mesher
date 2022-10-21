using UnityEngine;

public class BrightenColorScript : MonoBehaviour
{
    public void Brighten()
    {
        float h, s, v;
        Color.RGBToHSV(GetComponent<Renderer>().material.color, out h, out s, out v);
        v = 0.5f*v + 0.5f;
        GetComponent<Renderer>().material.color = Color.HSVToRGB(h, s, v);
    }

    public void Darken()
    {
        float h, s, v;
        Color.RGBToHSV(GetComponent<Renderer>().material.color, out h, out s, out v);
        v = (v - 0.5f)/0.5f;
        GetComponent<Renderer>().material.color = Color.HSVToRGB(h, s, v);
    }
}
