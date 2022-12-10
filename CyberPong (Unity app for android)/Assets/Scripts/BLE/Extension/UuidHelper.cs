﻿namespace Android.BLE.Extension
{
    public static class UuidHelper
    {
        public static string Get4BitUuid(this string t)
        {
            string firstPart = t.Split('-')[0];
            return firstPart.Substring(4, 4);
        }
    }
}
