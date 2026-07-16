
using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using Game.Network;


namespace HL2Com.Messages
{
    /// <summary>
    /// Auto-generated message classes and serializers.
    /// NO REFLECTION. IL2CPP/AOT safe.
    /// Wire format: TLV with varint length encoding.
    /// </summary>

    public class RealityMesherBundle
    {
        public const byte WIRE_VERSION = 2;



        public ClassifiedPointCloud classified_point_cloud { get; set; }



        public Mesh bundled_mesh { get; set; }



        public MarkerTags marker_tags { get; set; }



        public RealityMesherBundle()
        {


            classified_point_cloud = null;



            bundled_mesh = null;



            marker_tags = null;


        }

        public byte[] Serialize()
        {
            byte[] body = SerializeRealityMesherBundle(this);
            var buffer = new MemoryStream();
            var writer = new BinaryWriter(buffer);

            writer.Write(WIRE_VERSION);
            BinaryHelper.WriteVarint(writer, (uint)body.Length);
            writer.Write(body);

            return buffer.ToArray();
        }

        public static RealityMesherBundle Deserialize(byte[] data)
        {
            int pos = 0;
            byte version = data[pos++];
            BinaryHelper.ValidateVersion(version, WIRE_VERSION);

            uint length;
            int varintBytes;
            BinaryHelper.ReadVarint(data, pos, out length, out varintBytes);
            pos += varintBytes;
            int endPos = pos + (int)length;

            var result = DeserializeRealityMesherBundle(data, ref pos, endPos);
            return result;
        }

        public static byte[] SerializeRealityMesherBundle(RealityMesherBundle obj)
        {
            var fieldBuffer = new MemoryStream();
            var fieldWriter = new BinaryWriter(fieldBuffer);



            if (obj.classified_point_cloud != null)
            {
                byte[] objData = ClassifiedPointCloud.SerializeClassifiedPointCloud(obj.classified_point_cloud);
                WriteFieldHeader(fieldWriter, 1, objData.Length);
                fieldWriter.Write(objData);
            }



            if (obj.bundled_mesh != null)
            {
                byte[] objData = Mesh.SerializeMesh(obj.bundled_mesh);
                WriteFieldHeader(fieldWriter, 2, objData.Length);
                fieldWriter.Write(objData);
            }



            if (obj.marker_tags != null)
            {
                byte[] objData = MarkerTags.SerializeMarkerTags(obj.marker_tags);
                WriteFieldHeader(fieldWriter, 3, objData.Length);
                fieldWriter.Write(objData);
            }



            return fieldBuffer.ToArray();
        }

        public static RealityMesherBundle DeserializeRealityMesherBundle(byte[] data, ref int pos, int endPos)
        {
            var result = new RealityMesherBundle();

            while (pos < endPos)
            {
                uint tag;
                uint fieldLength;
                int headerBytes;
                ReadFieldHeader(data, pos, out tag, out fieldLength, out headerBytes);
                pos += headerBytes;
                int fieldEndPos = pos + (int)fieldLength;

                switch (tag)
                {

                    case 1:

                        {
                            result.classified_point_cloud = ClassifiedPointCloud.DeserializeClassifiedPointCloud(data, ref pos, fieldEndPos);
                            pos = fieldEndPos;
                        }

                        break;


                    case 2:

                        {
                            result.bundled_mesh = Mesh.DeserializeMesh(data, ref pos, fieldEndPos);
                            pos = fieldEndPos;
                        }

                        break;


                    case 3:

                        {
                            result.marker_tags = MarkerTags.DeserializeMarkerTags(data, ref pos, fieldEndPos);
                            pos = fieldEndPos;
                        }

                        break;


                    default:
                        pos = fieldEndPos;
                        break;
                }
            }

            return result;
        }

        private static void WriteFieldHeader(BinaryWriter writer, uint tag, int length)
        {
            BinaryHelper.WriteVarint(writer, tag);
            BinaryHelper.WriteVarint(writer, (uint)length);
        }

        private static void ReadFieldHeader(byte[] data, int offset, out uint tag, out uint length, out int bytesRead)
        {
            uint parsedTag;
            int tagBytes;
            BinaryHelper.ReadVarint(data, offset, out parsedTag, out tagBytes);

            uint parsedLength;
            int lengthBytes;
            BinaryHelper.ReadVarint(data, offset + tagBytes, out parsedLength, out lengthBytes);

            tag = parsedTag;
            length = parsedLength;
            bytesRead = tagBytes + lengthBytes;
        }

    }
}


namespace HL2Com.Messages
{
    /// <summary>
    /// Auto-generated message classes and serializers.
    /// NO REFLECTION. IL2CPP/AOT safe.
    /// Wire format: TLV with varint length encoding.
    /// </summary>

    public class ClassifiedPointCloud
    {
        public const byte WIRE_VERSION = 2;



    public List<Vector3> point_cloud { get; set; }



    public List<byte> classification { get; set; }



        public ClassifiedPointCloud()
        {


            point_cloud = new List<Vector3>();



            classification = new List<byte>();


        }

        public byte[] Serialize()
        {
            byte[] body = SerializeClassifiedPointCloud(this);
            var buffer = new MemoryStream();
            var writer = new BinaryWriter(buffer);

            writer.Write(WIRE_VERSION);
            BinaryHelper.WriteVarint(writer, (uint)body.Length);
            writer.Write(body);

            return buffer.ToArray();
        }

        public static ClassifiedPointCloud Deserialize(byte[] data)
        {
            int pos = 0;
            byte version = data[pos++];
            BinaryHelper.ValidateVersion(version, WIRE_VERSION);

            uint length;
            int varintBytes;
            BinaryHelper.ReadVarint(data, pos, out length, out varintBytes);
            pos += varintBytes;
            int endPos = pos + (int)length;

            var result = DeserializeClassifiedPointCloud(data, ref pos, endPos);
            return result;
        }

        public static byte[] SerializeClassifiedPointCloud(ClassifiedPointCloud obj)
        {
            var fieldBuffer = new MemoryStream();
            var fieldWriter = new BinaryWriter(fieldBuffer);



            if (obj.point_cloud != null && obj.point_cloud.Count > 0)
            {
                var listBuffer = new MemoryStream();
                var listWriter = new BinaryWriter(listBuffer);
                BinaryHelper.WriteVarint(listWriter, (uint)obj.point_cloud.Count);

                foreach (var item in obj.point_cloud)
                {
                    
                    BinaryHelper.WriteVector3(listWriter, item);
                    
                }

                byte[] listData = listBuffer.ToArray();
                WriteFieldHeader(fieldWriter, 1, listData.Length);
                fieldWriter.Write(listData);
            }



            if (obj.classification != null && obj.classification.Count > 0)
            {
                var listBuffer = new MemoryStream();
                var listWriter = new BinaryWriter(listBuffer);
                BinaryHelper.WriteVarint(listWriter, (uint)obj.classification.Count);

                foreach (var item in obj.classification)
                {
                    
                    listWriter.Write(item);
                    
                }

                byte[] listData = listBuffer.ToArray();
                WriteFieldHeader(fieldWriter, 2, listData.Length);
                fieldWriter.Write(listData);
            }



            return fieldBuffer.ToArray();
        }

        public static ClassifiedPointCloud DeserializeClassifiedPointCloud(byte[] data, ref int pos, int endPos)
        {
            var result = new ClassifiedPointCloud();

            while (pos < endPos)
            {
                uint tag;
                uint fieldLength;
                int headerBytes;
                ReadFieldHeader(data, pos, out tag, out fieldLength, out headerBytes);
                pos += headerBytes;
                int fieldEndPos = pos + (int)fieldLength;

                switch (tag)
                {

                    case 1:

                        {
                            uint count;
                            int countBytes;
                            BinaryHelper.ReadVarint(data, pos, out count, out countBytes);
                            pos += countBytes;
                            result.point_cloud = new List<Vector3>();
                            for (int i = 0; i < count; i++)
                            {

                                
                                result.point_cloud.Add(BinaryHelper.ReadVector3(data, pos));
                                pos += 12;
                                

                            }
                        }

                        break;


                    case 2:

                        {
                            uint count;
                            int countBytes;
                            BinaryHelper.ReadVarint(data, pos, out count, out countBytes);
                            pos += countBytes;
                            result.classification = new List<byte>();
                            for (int i = 0; i < count; i++)
                            {

                                
                                result.classification.Add(data[pos++]);
                                

                            }
                        }

                        break;


                    default:
                        pos = fieldEndPos;
                        break;
                }
            }

            return result;
        }

        private static void WriteFieldHeader(BinaryWriter writer, uint tag, int length)
        {
            BinaryHelper.WriteVarint(writer, tag);
            BinaryHelper.WriteVarint(writer, (uint)length);
        }

        private static void ReadFieldHeader(byte[] data, int offset, out uint tag, out uint length, out int bytesRead)
        {
            uint parsedTag;
            int tagBytes;
            BinaryHelper.ReadVarint(data, offset, out parsedTag, out tagBytes);

            uint parsedLength;
            int lengthBytes;
            BinaryHelper.ReadVarint(data, offset + tagBytes, out parsedLength, out lengthBytes);

            tag = parsedTag;
            length = parsedLength;
            bytesRead = tagBytes + lengthBytes;
        }

    }
}


namespace HL2Com.Messages
{
    /// <summary>
    /// Auto-generated message classes and serializers.
    /// NO REFLECTION. IL2CPP/AOT safe.
    /// Wire format: TLV with varint length encoding.
    /// </summary>

    public class MeshFace
    {
        public const byte WIRE_VERSION = 2;



    public List<Vector3> corners { get; set; }



        public MeshFace()
        {


            corners = new List<Vector3>();


        }

        public byte[] Serialize()
        {
            byte[] body = SerializeMeshFace(this);
            var buffer = new MemoryStream();
            var writer = new BinaryWriter(buffer);

            writer.Write(WIRE_VERSION);
            BinaryHelper.WriteVarint(writer, (uint)body.Length);
            writer.Write(body);

            return buffer.ToArray();
        }

        public static MeshFace Deserialize(byte[] data)
        {
            int pos = 0;
            byte version = data[pos++];
            BinaryHelper.ValidateVersion(version, WIRE_VERSION);

            uint length;
            int varintBytes;
            BinaryHelper.ReadVarint(data, pos, out length, out varintBytes);
            pos += varintBytes;
            int endPos = pos + (int)length;

            var result = DeserializeMeshFace(data, ref pos, endPos);
            return result;
        }

        public static byte[] SerializeMeshFace(MeshFace obj)
        {
            var fieldBuffer = new MemoryStream();
            var fieldWriter = new BinaryWriter(fieldBuffer);



            if (obj.corners != null && obj.corners.Count > 0)
            {
                var listBuffer = new MemoryStream();
                var listWriter = new BinaryWriter(listBuffer);
                BinaryHelper.WriteVarint(listWriter, (uint)obj.corners.Count);

                foreach (var item in obj.corners)
                {
                    
                    BinaryHelper.WriteVector3(listWriter, item);
                    
                }

                byte[] listData = listBuffer.ToArray();
                WriteFieldHeader(fieldWriter, 1, listData.Length);
                fieldWriter.Write(listData);
            }



            return fieldBuffer.ToArray();
        }

        public static MeshFace DeserializeMeshFace(byte[] data, ref int pos, int endPos)
        {
            var result = new MeshFace();

            while (pos < endPos)
            {
                uint tag;
                uint fieldLength;
                int headerBytes;
                ReadFieldHeader(data, pos, out tag, out fieldLength, out headerBytes);
                pos += headerBytes;
                int fieldEndPos = pos + (int)fieldLength;

                switch (tag)
                {

                    case 1:

                        {
                            uint count;
                            int countBytes;
                            BinaryHelper.ReadVarint(data, pos, out count, out countBytes);
                            pos += countBytes;
                            result.corners = new List<Vector3>();
                            for (int i = 0; i < count; i++)
                            {

                                
                                result.corners.Add(BinaryHelper.ReadVector3(data, pos));
                                pos += 12;
                                

                            }
                        }

                        break;


                    default:
                        pos = fieldEndPos;
                        break;
                }
            }

            return result;
        }

        private static void WriteFieldHeader(BinaryWriter writer, uint tag, int length)
        {
            BinaryHelper.WriteVarint(writer, tag);
            BinaryHelper.WriteVarint(writer, (uint)length);
        }

        private static void ReadFieldHeader(byte[] data, int offset, out uint tag, out uint length, out int bytesRead)
        {
            uint parsedTag;
            int tagBytes;
            BinaryHelper.ReadVarint(data, offset, out parsedTag, out tagBytes);

            uint parsedLength;
            int lengthBytes;
            BinaryHelper.ReadVarint(data, offset + tagBytes, out parsedLength, out lengthBytes);

            tag = parsedTag;
            length = parsedLength;
            bytesRead = tagBytes + lengthBytes;
        }

    }
}


namespace HL2Com.Messages
{
    /// <summary>
    /// Auto-generated message classes and serializers.
    /// NO REFLECTION. IL2CPP/AOT safe.
    /// Wire format: TLV with varint length encoding.
    /// </summary>

    public class Mesh
    {
        public const byte WIRE_VERSION = 2;



    public List<Vector3> vertices { get; set; }



    public List<Vector2> uvs { get; set; }



    public List<Vector3> normals { get; set; }



    public List<MeshFace> triangles { get; set; }



        public Mesh()
        {


            vertices = new List<Vector3>();



            uvs = new List<Vector2>();



            normals = new List<Vector3>();



            triangles = new List<MeshFace>();


        }

        public byte[] Serialize()
        {
            byte[] body = SerializeMesh(this);
            var buffer = new MemoryStream();
            var writer = new BinaryWriter(buffer);

            writer.Write(WIRE_VERSION);
            BinaryHelper.WriteVarint(writer, (uint)body.Length);
            writer.Write(body);

            return buffer.ToArray();
        }

        public static Mesh Deserialize(byte[] data)
        {
            int pos = 0;
            byte version = data[pos++];
            BinaryHelper.ValidateVersion(version, WIRE_VERSION);

            uint length;
            int varintBytes;
            BinaryHelper.ReadVarint(data, pos, out length, out varintBytes);
            pos += varintBytes;
            int endPos = pos + (int)length;

            var result = DeserializeMesh(data, ref pos, endPos);
            return result;
        }

        public static byte[] SerializeMesh(Mesh obj)
        {
            var fieldBuffer = new MemoryStream();
            var fieldWriter = new BinaryWriter(fieldBuffer);



            if (obj.vertices != null && obj.vertices.Count > 0)
            {
                var listBuffer = new MemoryStream();
                var listWriter = new BinaryWriter(listBuffer);
                BinaryHelper.WriteVarint(listWriter, (uint)obj.vertices.Count);

                foreach (var item in obj.vertices)
                {
                    
                    BinaryHelper.WriteVector3(listWriter, item);
                    
                }

                byte[] listData = listBuffer.ToArray();
                WriteFieldHeader(fieldWriter, 1, listData.Length);
                fieldWriter.Write(listData);
            }



            if (obj.uvs != null && obj.uvs.Count > 0)
            {
                var listBuffer = new MemoryStream();
                var listWriter = new BinaryWriter(listBuffer);
                BinaryHelper.WriteVarint(listWriter, (uint)obj.uvs.Count);

                foreach (var item in obj.uvs)
                {
                    
                    BinaryHelper.WriteVector2(listWriter, item);
                    
                }

                byte[] listData = listBuffer.ToArray();
                WriteFieldHeader(fieldWriter, 2, listData.Length);
                fieldWriter.Write(listData);
            }



            if (obj.normals != null && obj.normals.Count > 0)
            {
                var listBuffer = new MemoryStream();
                var listWriter = new BinaryWriter(listBuffer);
                BinaryHelper.WriteVarint(listWriter, (uint)obj.normals.Count);

                foreach (var item in obj.normals)
                {
                    
                    BinaryHelper.WriteVector3(listWriter, item);
                    
                }

                byte[] listData = listBuffer.ToArray();
                WriteFieldHeader(fieldWriter, 3, listData.Length);
                fieldWriter.Write(listData);
            }



            if (obj.triangles != null && obj.triangles.Count > 0)
            {
                var listBuffer = new MemoryStream();
                var listWriter = new BinaryWriter(listBuffer);
                BinaryHelper.WriteVarint(listWriter, (uint)obj.triangles.Count);

                foreach (var item in obj.triangles)
                {
                    byte[] itemData = MeshFace.SerializeMeshFace(item);
                    BinaryHelper.WriteVarint(listWriter, (uint)itemData.Length);
                    listWriter.Write(itemData);
                }

                byte[] listData = listBuffer.ToArray();
                WriteFieldHeader(fieldWriter, 4, listData.Length);
                fieldWriter.Write(listData);
            }



            return fieldBuffer.ToArray();
        }

        public static Mesh DeserializeMesh(byte[] data, ref int pos, int endPos)
        {
            var result = new Mesh();

            while (pos < endPos)
            {
                uint tag;
                uint fieldLength;
                int headerBytes;
                ReadFieldHeader(data, pos, out tag, out fieldLength, out headerBytes);
                pos += headerBytes;
                int fieldEndPos = pos + (int)fieldLength;

                switch (tag)
                {

                    case 1:

                        {
                            uint count;
                            int countBytes;
                            BinaryHelper.ReadVarint(data, pos, out count, out countBytes);
                            pos += countBytes;
                            result.vertices = new List<Vector3>();
                            for (int i = 0; i < count; i++)
                            {

                                
                                result.vertices.Add(BinaryHelper.ReadVector3(data, pos));
                                pos += 12;
                                

                            }
                        }

                        break;


                    case 2:

                        {
                            uint count;
                            int countBytes;
                            BinaryHelper.ReadVarint(data, pos, out count, out countBytes);
                            pos += countBytes;
                            result.uvs = new List<Vector2>();
                            for (int i = 0; i < count; i++)
                            {

                                
                                result.uvs.Add(BinaryHelper.ReadVector2(data, pos));
                                pos += 8;
                                

                            }
                        }

                        break;


                    case 3:

                        {
                            uint count;
                            int countBytes;
                            BinaryHelper.ReadVarint(data, pos, out count, out countBytes);
                            pos += countBytes;
                            result.normals = new List<Vector3>();
                            for (int i = 0; i < count; i++)
                            {

                                
                                result.normals.Add(BinaryHelper.ReadVector3(data, pos));
                                pos += 12;
                                

                            }
                        }

                        break;


                    case 4:

                        {
                            uint count;
                            int countBytes;
                            BinaryHelper.ReadVarint(data, pos, out count, out countBytes);
                            pos += countBytes;
                            result.triangles = new List<MeshFace>();
                            for (int i = 0; i < count; i++)
                            {

                                uint itemLength;
                                int itemLengthBytes;
                                BinaryHelper.ReadVarint(data, pos, out itemLength, out itemLengthBytes);
                                pos += itemLengthBytes;
                                int itemEndPos = pos + (int)itemLength;
                                var item = MeshFace.DeserializeMeshFace(data, ref pos, itemEndPos);
                                result.triangles.Add(item);
                                pos = itemEndPos;

                            }
                        }

                        break;


                    default:
                        pos = fieldEndPos;
                        break;
                }
            }

            return result;
        }

        private static void WriteFieldHeader(BinaryWriter writer, uint tag, int length)
        {
            BinaryHelper.WriteVarint(writer, tag);
            BinaryHelper.WriteVarint(writer, (uint)length);
        }

        private static void ReadFieldHeader(byte[] data, int offset, out uint tag, out uint length, out int bytesRead)
        {
            uint parsedTag;
            int tagBytes;
            BinaryHelper.ReadVarint(data, offset, out parsedTag, out tagBytes);

            uint parsedLength;
            int lengthBytes;
            BinaryHelper.ReadVarint(data, offset + tagBytes, out parsedLength, out lengthBytes);

            tag = parsedTag;
            length = parsedLength;
            bytesRead = tagBytes + lengthBytes;
        }

    }
}


namespace HL2Com.Messages
{
    /// <summary>
    /// Auto-generated message classes and serializers.
    /// NO REFLECTION. IL2CPP/AOT safe.
    /// Wire format: TLV with varint length encoding.
    /// </summary>

    public class MarkerTags
    {
        public const byte WIRE_VERSION = 2;



    public List<string> name { get; set; }



    public List<Vector3> position { get; set; }



        public MarkerTags()
        {


            name = new List<string>();



            position = new List<Vector3>();


        }

        public byte[] Serialize()
        {
            byte[] body = SerializeMarkerTags(this);
            var buffer = new MemoryStream();
            var writer = new BinaryWriter(buffer);

            writer.Write(WIRE_VERSION);
            BinaryHelper.WriteVarint(writer, (uint)body.Length);
            writer.Write(body);

            return buffer.ToArray();
        }

        public static MarkerTags Deserialize(byte[] data)
        {
            int pos = 0;
            byte version = data[pos++];
            BinaryHelper.ValidateVersion(version, WIRE_VERSION);

            uint length;
            int varintBytes;
            BinaryHelper.ReadVarint(data, pos, out length, out varintBytes);
            pos += varintBytes;
            int endPos = pos + (int)length;

            var result = DeserializeMarkerTags(data, ref pos, endPos);
            return result;
        }

        public static byte[] SerializeMarkerTags(MarkerTags obj)
        {
            var fieldBuffer = new MemoryStream();
            var fieldWriter = new BinaryWriter(fieldBuffer);



            if (obj.name != null && obj.name.Count > 0)
            {
                var listBuffer = new MemoryStream();
                var listWriter = new BinaryWriter(listBuffer);
                BinaryHelper.WriteVarint(listWriter, (uint)obj.name.Count);

                foreach (var item in obj.name)
                {
                    
                    BinaryHelper.WriteString(listWriter, item);
                    
                }

                byte[] listData = listBuffer.ToArray();
                WriteFieldHeader(fieldWriter, 1, listData.Length);
                fieldWriter.Write(listData);
            }



            if (obj.position != null && obj.position.Count > 0)
            {
                var listBuffer = new MemoryStream();
                var listWriter = new BinaryWriter(listBuffer);
                BinaryHelper.WriteVarint(listWriter, (uint)obj.position.Count);

                foreach (var item in obj.position)
                {
                    
                    BinaryHelper.WriteVector3(listWriter, item);
                    
                }

                byte[] listData = listBuffer.ToArray();
                WriteFieldHeader(fieldWriter, 2, listData.Length);
                fieldWriter.Write(listData);
            }



            return fieldBuffer.ToArray();
        }

        public static MarkerTags DeserializeMarkerTags(byte[] data, ref int pos, int endPos)
        {
            var result = new MarkerTags();

            while (pos < endPos)
            {
                uint tag;
                uint fieldLength;
                int headerBytes;
                ReadFieldHeader(data, pos, out tag, out fieldLength, out headerBytes);
                pos += headerBytes;
                int fieldEndPos = pos + (int)fieldLength;

                switch (tag)
                {

                    case 1:

                        {
                            uint count;
                            int countBytes;
                            BinaryHelper.ReadVarint(data, pos, out count, out countBytes);
                            pos += countBytes;
                            result.name = new List<string>();
                            for (int i = 0; i < count; i++)
                            {

                                
                                var str = BinaryHelper.ReadString(data, pos, out int strLen);
                                result.name.Add(str);
                                pos += strLen;
                                

                            }
                        }

                        break;


                    case 2:

                        {
                            uint count;
                            int countBytes;
                            BinaryHelper.ReadVarint(data, pos, out count, out countBytes);
                            pos += countBytes;
                            result.position = new List<Vector3>();
                            for (int i = 0; i < count; i++)
                            {

                                
                                result.position.Add(BinaryHelper.ReadVector3(data, pos));
                                pos += 12;
                                

                            }
                        }

                        break;


                    default:
                        pos = fieldEndPos;
                        break;
                }
            }

            return result;
        }

        private static void WriteFieldHeader(BinaryWriter writer, uint tag, int length)
        {
            BinaryHelper.WriteVarint(writer, tag);
            BinaryHelper.WriteVarint(writer, (uint)length);
        }

        private static void ReadFieldHeader(byte[] data, int offset, out uint tag, out uint length, out int bytesRead)
        {
            uint parsedTag;
            int tagBytes;
            BinaryHelper.ReadVarint(data, offset, out parsedTag, out tagBytes);

            uint parsedLength;
            int lengthBytes;
            BinaryHelper.ReadVarint(data, offset + tagBytes, out parsedLength, out lengthBytes);

            tag = parsedTag;
            length = parsedLength;
            bytesRead = tagBytes + lengthBytes;
        }

    }
}

