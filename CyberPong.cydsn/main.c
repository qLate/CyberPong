
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
    
    int speed_config[4] = {2200, 2500, 2500, 2500};
    SetMotorSpeed(speed_config);
    
    for(;;)
    {   
        CyBle_ProcessEvents();
        PrintMotorSpeeds();
        HandleUARTInput();
    }
}

/* [] END OF FILE */
