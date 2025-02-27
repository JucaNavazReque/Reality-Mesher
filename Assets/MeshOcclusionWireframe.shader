Shader "Custom/MeshOcclusionWireframe"
{
    Properties
    {
        _WireColor("Wire Color", Color) = (1,1,1,1)
        _WireThickness("Wire Thickness", Range(0,800)) = 100
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }

        // Pass #1: Depth-only occlusion.
        Pass
        {
            Name "DepthOcclusion"
            ColorMask 0
            ZWrite On
            Cull Off

            HLSLPROGRAM
            #pragma vertex vertDepth
            #pragma fragment fragDepth
            #include "UnityCG.cginc"

            struct v2f
            {
                float4 pos : SV_POSITION;
            };

            v2f vertDepth(appdata_base v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                return o;
            }

            fixed4 fragDepth(v2f i) : SV_Target
            {
                return float4(0,0,0,0);
            }
            ENDHLSL
        }

        // Pass #2: Wireframe overlay with stereo support.
        Pass
        {
            Name "Wireframe"
            Blend SrcAlpha OneMinusSrcAlpha
            ZWrite Off
            Cull Off

            HLSLPROGRAM
            #pragma target 4.0       // Geometry shader requires target 4.0+
            #pragma vertex vert
            #pragma geometry geom
            #pragma fragment frag

            #include "UnityCG.cginc"

            uniform float4 _WireColor;
            uniform float _WireThickness;

            // Per-vertex input
            struct appdata
            {
                float4 vertex : POSITION;
            };

            // Vertex-to-geometry stage
            struct v2g
            {
                float4 pos : SV_POSITION;
                float4 clipPos : TEXCOORD0;
                UNITY_VERTEX_OUTPUT_STEREO
            };

            v2g vert(appdata v)
            {
                v2g o = (v2g)0;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.clipPos = o.pos;
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);   
                return o;
            }

            // Geometry-to-fragment stage
            struct g2f
            {
                float4 pos : SV_POSITION;
                float3 bary : TEXCOORD0;
                UNITY_VERTEX_OUTPUT_STEREO
            };

            [maxvertexcount(3)]
            void geom(triangle v2g inTri[3], inout TriangleStream<g2f> triStream)
            {
                // For each of the 3 vertices in the input triangle,
                // pass along stereo info and assign barycentrics.
                [unroll] for (int i = 0; i < 3; i++)
                {
                    g2f o = (g2f)0;
                    o.pos = inTri[i].pos;
                    o.bary = (i == 0) ? float3(1,0,0) : (i == 1) ? float3(0,1,0) : float3(0,0,1);
                    UNITY_TRANSFER_VERTEX_OUTPUT_STEREO(o, inTri[i]);
                    triStream.Append(o);
                }
            }

            fixed4 frag(g2f i) : SV_Target
            {
                // Simple wireframe by measuring how close we are to a triangle edge.
                float minBary = min(min(i.bary.x, i.bary.y), i.bary.z);
                float edgeWidth = _WireThickness * 0.01;
                float edgeFactor = 1.0 - smoothstep(0.0, edgeWidth, minBary);

                // White edges over transparency (or tinted by _WireColor).
                return float4(_WireColor.rgb, edgeFactor * _WireColor.a);
            }
            ENDHLSL
        }
    }
    FallBack "Diffuse"
}