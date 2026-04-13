using System;
using System.IO;

namespace Game.Network
{
    /// <summary>
    /// IL2CPP-safe binary serialization helpers.
    /// No reflection, no dynamic dispatch, all explicit code paths.
    /// </summary>
    public static class BinaryHelper
    {
        /// <summary>
        /// Encode an unsigned integer as varint (LEB128 format).
        /// </summary>
        public static void WriteVarint(BinaryWriter writer, uint value)
        {
            while (value >= 128)
            {
                writer.Write((byte)((value & 0x7F) | 0x80));
                value >>= 7;
            }
            writer.Write((byte)(value & 0x7F));
        }

        /// <summary>
        /// Decode a varint from buffer at offset.
        /// </summary>
        public static void ReadVarint(byte[] buffer, int offset, out uint value, out int bytesRead)
        {
            uint result = 0;
            int shift = 0;
            int pos = offset;

            while (true)
            {
                byte b = buffer[pos++];
                result |= (uint)(b & 0x7F) << shift;
                if ((b & 0x80) == 0)
                    break;
                shift += 7;
            }

            value = result;
            bytesRead = pos - offset;
        }

        /// <summary>
        /// Write a string: varint length + UTF-8 bytes.
        /// </summary>
        public static void WriteString(BinaryWriter writer, string value)
        {
            if (value == null)
            {
                WriteVarint(writer, 0);
                return;
            }

            byte[] bytes = System.Text.Encoding.UTF8.GetBytes(value);
            WriteVarint(writer, (uint)bytes.Length);
            writer.Write(bytes);
        }

        /// <summary>
        /// Read a string: varint length + UTF-8 bytes.
        /// </summary>
        public static string ReadString(byte[] buffer, int offset, out int bytesRead)
        {
            uint length;
            int varintBytes;
            ReadVarint(buffer, offset, out length, out varintBytes);
            bytesRead = varintBytes;

            if (length == 0)
                return "";

            string result = System.Text.Encoding.UTF8.GetString(buffer, offset + varintBytes, (int)length);
            bytesRead += (int)length;
            return result;
        }

        /// <summary>
        /// Write Vector2: [x: float, y: float].
        /// </summary>
        public static void WriteVector2(BinaryWriter writer, UnityEngine.Vector2 v)
        {
            writer.Write(v.x);
            writer.Write(v.y);
        }

        /// <summary>
        /// Read Vector2: [x: float, y: float].
        /// </summary>
        public static UnityEngine.Vector2 ReadVector2(byte[] buffer, int offset)
        {
            float x = BitConverter.ToSingle(buffer, offset);
            float y = BitConverter.ToSingle(buffer, offset + 4);
            return new UnityEngine.Vector2(x, y);
        }

        /// <summary>
        /// Write Vector3: [x: float, y: float, z: float].
        /// </summary>
        public static void WriteVector3(BinaryWriter writer, UnityEngine.Vector3 v)
        {
            writer.Write(v.x);
            writer.Write(v.y);
            writer.Write(v.z);
        }

        /// <summary>
        /// Read Vector3: [x: float, y: float, z: float].
        /// </summary>
        public static UnityEngine.Vector3 ReadVector3(byte[] buffer, int offset)
        {
            float x = BitConverter.ToSingle(buffer, offset);
            float y = BitConverter.ToSingle(buffer, offset + 4);
            float z = BitConverter.ToSingle(buffer, offset + 8);
            return new UnityEngine.Vector3(x, y, z);
        }

        /// <summary>
        /// Validate wire format version. Throws on mismatch.
        /// </summary>
        public static void ValidateVersion(byte wireVersion, byte expected)
        {
            if (wireVersion != expected)
            {
                throw new System.InvalidOperationException(
                    $"Version mismatch: expected {expected}, got {wireVersion}. Message rejected.");
            }
        }
    }
}
