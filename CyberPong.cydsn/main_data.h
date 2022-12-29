#if !defined(MainData_H)
#define MainData_H

#include <stdint.h>

#define MOTOR_COUNT 4

#define MAX_RPM 9999
#define MIN_RPM 1000

char uart_rpm_buff[4];
char str[16];

enum MotorDirection{
    Left=0,
    Right=1,
    Top=2,
    Bottom=3
};
static char *MotorDirectionStr[] = {
    "Left", "Right", "Top", "Bottom",
};


#endif
/* [] END OF FILE */
