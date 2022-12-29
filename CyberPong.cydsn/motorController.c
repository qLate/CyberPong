#include "motorController.h"


int Clamp01(int v, int min, int max){
    if (v < min)
        v = min;
    else if(v > max)
        v = max;    
    return v;
}
void SetMotorSpeed(int speeds[]) {
    for (int i = 0; i < MOTOR_COUNT; i++) {
        SetMotorSpeed_Single(i, speeds[i]);
    }
}
void SetMotorSpeed_Single(enum MotorDirection dir, int speed) {
    if(speed == 0) {
        FanController_SetDesiredSpeed(dir+1, 0);
        return;
    }
    int clamped = Clamp01(speed, MIN_RPM, MAX_RPM);
    FanController_SetDesiredSpeed(dir+1, 2*clamped);
}
/* [] END OF FILE */
