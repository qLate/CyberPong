#if !defined(BallServeController_H)
#define BallServeController_H


#include "project.h"
#include "stdbool.h"
    
bool doServe = false;
    
void CheckForBallServeRequest();
void StopBallServe();
CY_ISR(Pin_Input_BallTrigger_Handler);


#endif
/* [] END OF FILE */
