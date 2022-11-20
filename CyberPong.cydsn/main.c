
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
    
    
    int speed_config[4] = {4250, 4250, 4250, 4250};
    SetMotorSpeed(speed_config);
    
    for(;;)
    {   
        CyBle_ProcessEvents();
        PrintMotorSpeeds();
    }
}

/* [] END OF FILE */
