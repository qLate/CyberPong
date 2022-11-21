#include "aios.h"

void AIOS_Handler(uint32 eventCode, void *eventParams)
{
    switch(eventCode){
        case CYBLE_EVT_STACK_ON:
        case CYBLE_EVT_GAP_DEVICE_DISCONNECTED:
            CyBle_GappStartAdvertisement(CYBLE_ADVERTISING_FAST);
            break;
    }
}
void AIOS_Callback(uint32 eventCode, void *eventParam){
    CYBLE_AIOS_CHAR_VALUE_T *locCharValue = eventParam;

    switch(eventCode)
    {
    case CYBLE_EVT_AIOSS_CHAR_WRITE: {
        uint16 motorSpeed = CyBle_AiosGet16ByPtr(locCharValue->value->val);
        sprintf(str, "%X -> %u\n\r", motorSpeed, motorSpeed);
        Print(str);
        
        int motorIndex = locCharValue->charInstance;
        sprintf(str,"charInstance - %d", motorIndex);
        Println(str);
        
        SetMotorSpeed_Single(motorIndex, motorSpeed);
        break;
        }
    }
    
    //Control_Rotation_Write(0b1100);
} 
/* [] END OF FILE */
