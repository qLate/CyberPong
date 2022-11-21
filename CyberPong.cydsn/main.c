
#include "project.h"
#include "main_data.h"
#include "motorController.h"
#include "debug.h"
#include "aios.h"


int main(void)
{
    CyGlobalIntEnable;
    
    // Set everything up
    FanController_Start();
    UART_Start();
    CyBle_Start(AIOS_Handler);
    CyBle_AiosRegisterAttrCallback(AIOS_Callback);
    
    // Set up flags
    disablePrintIfZeroRPM = false;
    
    int speed_config[4] = {4250, 4250, 4250, 4250};
    SetMotorSpeed(speed_config);
    
    for(;;)
    {   
        CyBle_ProcessEvents();
        PrintMotorSpeeds();
        HandleUARTInput();
        
        //uint16 speed;
        //CyBle_AiossGetCharacteristicValue(CYBLE_AIOS_ANALOG,0u,sizeof(speed),(uint8*)&speed);
        //sprintf(str,"curr char value: %X",speed);
        //Println(str);
    }
}

/* [] END OF FILE */
