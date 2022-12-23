#include "ballServeController.h"

void CheckForBallServeRequest() {
    if(doServe) {
        doServe = false;
        Pin_Output_Serve_Write(1);
    }
}

void StopBallServe() {
    Pin_Output_Serve_Write(1);
}

CY_ISR(Pin_Input_BallTrigger_Handler){
    StopBallServe();
    
    Pin_Input_BallTrigger_ClearInterrupt();
}