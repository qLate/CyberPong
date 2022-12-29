
#include "project.h"
#include "main_data.h"
#include "motorController.h"
#include "debug.h"
#include "aios.h"
#include "ballServeController.h"
#include "time.h"


int main(void)
{
    CyGlobalIntEnable;
    
    // Set everything up
    FanController_Start();
    UART_Start();
    ISR_Ball_Trigger_StartEx(Pin_Input_BallTrigger_Handler);
    doServe = true;
    // Bluetooth
    CyBle_Start(AIOS_Handler);
    CyBle_AiosRegisterAttrCallback(AIOS_Callback);
    
    
    // Set up flags
    disablePrintIfZeroRPM = false;
    
    int speed_config[4] = {0, 0, 0, 0};
    SetMotorSpeed(speed_config);
    
    clock_t c_=clock();
    for(;;)
    {
        CyBle_ProcessEvents();
        PrintMotorSpeeds();
        HandleUARTInput();
        CheckForBallServeRequest();
        UpdateServing();
    }
}

/* [] END OF FILE */
