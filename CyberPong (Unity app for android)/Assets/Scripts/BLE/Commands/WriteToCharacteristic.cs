﻿using System.Collections;
using UnityEngine;

namespace Android.BLE.Commands
{
    public class WriteToCharacteristic : BleCommand
    {
        public readonly string DeviceAddress;

        public readonly string Service;
        public readonly string Characteristic;

        public readonly object StringData;

        public readonly bool CustomGatt;

        public WriteToCharacteristic(string deviceAddress, string serviceAddress, string characteristicAddress, string data, bool customGatt = false) : base(false, false)
        {
            DeviceAddress = deviceAddress;
            Service = serviceAddress;
            Characteristic = characteristicAddress;

            StringData = data;

            CustomGatt = customGatt;

            _timeout = 0.3f;
        }

        public WriteToCharacteristic(string deviceAddress, string serviceAddress, string characteristicAddress, byte[] data, bool customGatt = false) : base(false, false)
        {
            DeviceAddress = deviceAddress;
            Service = serviceAddress;
            Characteristic = characteristicAddress;

            StringData = data;

            CustomGatt = customGatt;

            _timeout = 0.3f;
        }

        public override void Start()
        {
            string command = CustomGatt ? "writeToCustomGattCharacteristic" : "writeToGattCharacteristic";
            BleManager.SendCommand(command, DeviceAddress, Service, Characteristic, StringData);
        }
    }
}