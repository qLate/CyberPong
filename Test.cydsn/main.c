/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include <stdio.h>
#include "main_data.h"


int8 speed_idx;
int8 isr_triggered = 0;
int8 serving_enabled = 0;

int16_t motor_speeds[4];
int16 speed_buf;


void UART_print_string(char text[]) {
    // A utility function to print an array of characters with UART
    UART_UartPutChar('\n');
    UART_UartPutChar('\r');
    UART_UartPutString(text);
    UART_UartPutChar('\n');
    UART_UartPutChar('\r');
}


void handle_UART_input(char inp_ch) {
    /* 
    Main input function.
    Responsible for setting modes and writing speeds.
    Operates with most of the global variables.
    */
    
    if (manual_control_flag) {
        if(inp_ch == 'p'){
            print_speed_flag = 0;
            UART_print_string("Set The Speeds:");
        }
        else if(inp_ch == 's'){
            print_speed_flag = 1;
        }
        else if(inp_ch == 'x') {
            UART_print_string("Enabled Serving:");
            serving_enabled = 1;
            Pin_Serve_Write(1);
        }
        else if (inp_ch == 'z') {
            UART_print_string("Disabled Serving:");
            serving_enabled = 0;
            Pin_Serve_Write(0);
        }
        else if (inp_ch == ' ') {
            motor_speeds[speed_idx] = speed_buf;
            speed_idx++;
            speed_buf = 0;
        }
        else if(inp_ch == '\r'){
            if (speed_idx == MOTOR_COUNT - 1) {
                motor_speeds[speed_idx] = speed_buf;
            }
            speed_buf = 0;
            speed_idx = 0;
            UART_UartPutChar('\n');
        }
        else if(inp_ch < HIGHER_NUM_BORDER && inp_ch > LOWER_NUM_BORDER){
            speed_buf *= 10;
            speed_buf += inp_ch - '0';
        }
    }
}

// Set isr trigger flag to avoid bouncing
CY_ISR (Ball_Trigger_Handler) {
    isr_triggered = 1;
}


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Start Everything Up */
    //FanController_Start();
    UART_Start();
    
    ISR_Ball_Trigger_StartEx( Ball_Trigger_Handler );

    char ch;
    speed_buf = 0;
    speed_idx = 0;
    // By default we don't print any speed
    print_speed_flag = 0;
    // Manual control is enabled by default
    manual_control_flag = 1;
    
    Pin_Output_UP_Write(1);
    Pin_Output_UP_GROUND_Write(0);
    
    Pin_Output_DOWN_Write(1);
    Pin_Output_DOWN_GROUND_Write(0);
}

/* [] END OF FILE */
