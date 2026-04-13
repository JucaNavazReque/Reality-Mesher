
using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace Game.Network
{
    /// <summary>
    /// Auto-generated message classes and serializers.
    /// NO REFLECTION. IL2CPP/AOT safe.
    /// Wire format: TLV with varint length encoding.
    /// </summary>


    public class ClassifiedPointCloud
    {
        public const byte WIRE_VERSION = 1;



    public List<Vector3> point_cloud { get; set; }



    public List<byte> classification { get; set; }



        public ClassifiedPointCloud()
        {


            point_cloud = new List<Vector3>();



            classification = new List<byte>();


        }

        public byte[] Serialize()
        {
            var buffer = new MemoryStream();
            var writer = new BinaryWriter(buffer);

            // Wire version
            writer.Write(WIRE_VERSION);

            // Field data (TLV encoded)
            var fieldBuffer = new MemoryStream();
            var fieldWriter = new BinaryWriter(fieldBuffer);



            if (point_cloud != null && point_cloud.Count > 0)
            {
                var listBuffer = new MemoryStream();
                var listWriter = new BinaryWriter(listBuffer);
                BinaryHelper.WriteVarint(listWriter, (uint)point_cloud.Count);

                foreach (var item in point_cloud)
                {
                    
                    BinaryHelper.WriteVector3(listWriter, item);
                    
                }

                byte[] listData = listBuffer.ToArray();
                WriteFieldHeader(fieldWriter, 1, listData.Length);
                fieldWriter.Write(listData);
            }



            if (classification != null && classification.Count > 0)
            {
                var listBuffer = new MemoryStream();
                var listWriter = new BinaryWriter(listBuffer);
                BinaryHelper.WriteVarint(listWriter, (uint)classification.Count);

                foreach (var item in classification)
                {
                    
                    listWriter.Write(item);
                    
                }

                byte[] listData = listBuffer.ToArray();
                WriteFieldHeader(fieldWriter, 2, listData.Length);
                fieldWriter.Write(listData);
            }



            byte[] fields = fieldBuffer.ToArray();
            BinaryHelper.WriteVarint(writer, (uint)fields.Length);
            writer.Write(fields);

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

            var result = new ClassifiedPointCloud();
            int endPos = pos + (int)length;

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
                        // Unknown tag: skip field by advancing to fieldEndPos
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