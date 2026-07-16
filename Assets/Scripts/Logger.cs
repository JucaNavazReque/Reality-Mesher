using System; // Needed for Guid
using UnityEngine;

#if ENABLE_WINMD_SUPPORT
using Windows.Foundation.Diagnostics;
#endif

namespace GeoTECH.Logger
{
    public enum LogType { Info, Warning, Error }

    public static class AppLogger
    {
#if ENABLE_WINMD_SUPPORT
        private static readonly LoggingChannel lc = new LoggingChannel("RealityMesherLogger", null, new Guid("2df964bb-cd29-4ac0-a462-59b4c484ae3d"));
#endif

        public static void Log(object input, LogType level = LogType.Info)
        {
            string message = input?.ToString() ?? "[Logged object cannot be converted to string]";

            if (level == LogType.Error)
            {
                Debug.LogError(message);
#if ENABLE_WINMD_SUPPORT
                lc.LogMessage(message, LoggingLevel.Error);
#endif
            }
            else if (level == LogType.Warning)
            {
                Debug.LogWarning(message);
#if ENABLE_WINMD_SUPPORT
                lc.LogMessage(message, LoggingLevel.Warning);
#endif
            }
            else
            {
                Debug.Log(message);
#if ENABLE_WINMD_SUPPORT
                lc.LogMessage(message);
#endif
            }
        }
    }
}