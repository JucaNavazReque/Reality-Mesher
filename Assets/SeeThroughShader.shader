// Shader by Alex M, peacefulshade and Kaanin25
//https://answers.unity.com/questions/26486/display-complex-object-when-it-is-behind-the-wall.html


Shader "Custom/SeeThroughShader"
{
    Properties 
    {
        _Color ("Main Color", Color) = (1,1,1,1)
    _MainTex ("Base (RGB) Gloss (A)", 2D) = "white" {}
    }
    
    Category 
    {
        SubShader
        {
            Tags { "Queue"="Overlay+1"
            "RenderType"="Transparent"}
            
            Pass
            {
                ZWrite Off
                ZTest Greater
                Lighting Off
                Color [_Color]
            }
            
            Pass
            {
                Blend SrcAlpha OneMinusSrcAlpha
                ZTest Less
                SetTexture [_MainTex] {combine texture}
            }
        }
    }
 
    FallBack "Specular", 1
}
