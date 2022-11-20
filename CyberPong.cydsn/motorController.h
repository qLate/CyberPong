#if !defined(MotorController_H)
#define MotorController_H


#include "project.h"
#include "main_data.h"
    
void SetMotorSpeed(int speeds[]);
void SetMotorSpeed_Single(enum MotorDirection dir, int speed);


#endif
/* [] END OF FILE */
