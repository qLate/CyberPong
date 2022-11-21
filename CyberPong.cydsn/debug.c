#include "debug.h"


void Print(char text[]) {
    UART_UartPutString(text);
}
void Println(char text[]) {
    UART_UartPutString(text);
    UART_UartPutChar('\n');
    UART_UartPutChar('\r');
}
const float delay = 1;
float lastPrintTime = 0;
void PrintMotorSpeeds() {
    if(disablePrintIfZeroRPM && FanController_GetActualSpeed(1)==0 && FanController_GetActualSpeed(2)==0 && 
       FanController_GetActualSpeed(3)==0 && FanController_GetActualSpeed(4)==0)
        return;
    
    float seconds = (clock() - lastPrintTime) / CLOCKS_PER_SEC;
    if (seconds < delay)
        return;
    else
        seconds=0;
    
    int current_rpm = 0;
    for (int i = 1; i < MOTOR_COUNT + 1; i++) {
        current_rpm = FanController_GetActualSpeed(i);
        
        Print(MotorDirectionStr[i-1]);
        Print(":");
        
        sprintf(uart_rpm_buff, "%u", current_rpm / 2);
        Print(uart_rpm_buff);
        Print(" ");
        
        current_rpm = FanController_GetDesiredSpeed(i);
        sprintf(uart_rpm_buff, "%u  ", current_rpm / 2);
        Print(uart_rpm_buff);
    }
    UART_UartPutChar('\n');
    UART_UartPutChar('\r');
}

void HandleUARTInput(){
    char ch = UART_UartGetChar();
    if (ch == 'a') {
        disablePrintIfZeroRPM = !disablePrintIfZeroRPM;
    }
}

/* [] END OF FILE */