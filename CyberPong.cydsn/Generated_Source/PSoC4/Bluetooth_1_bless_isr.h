/*******************************************************************************
* File Name: Bluetooth_1_bless_isr.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_Bluetooth_1_bless_isr_H)
#define CY_ISR_Bluetooth_1_bless_isr_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void Bluetooth_1_bless_isr_Start(void);
void Bluetooth_1_bless_isr_StartEx(cyisraddress address);
void Bluetooth_1_bless_isr_Stop(void);

CY_ISR_PROTO(Bluetooth_1_bless_isr_Interrupt);

void Bluetooth_1_bless_isr_SetVector(cyisraddress address);
cyisraddress Bluetooth_1_bless_isr_GetVector(void);

void Bluetooth_1_bless_isr_SetPriority(uint8 priority);
uint8 Bluetooth_1_bless_isr_GetPriority(void);

void Bluetooth_1_bless_isr_Enable(void);
uint8 Bluetooth_1_bless_isr_GetState(void);
void Bluetooth_1_bless_isr_Disable(void);

void Bluetooth_1_bless_isr_SetPending(void);
void Bluetooth_1_bless_isr_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the Bluetooth_1_bless_isr ISR. */
#define Bluetooth_1_bless_isr_INTC_VECTOR            ((reg32 *) Bluetooth_1_bless_isr__INTC_VECT)

/* Address of the Bluetooth_1_bless_isr ISR priority. */
#define Bluetooth_1_bless_isr_INTC_PRIOR             ((reg32 *) Bluetooth_1_bless_isr__INTC_PRIOR_REG)

/* Priority of the Bluetooth_1_bless_isr interrupt. */
#define Bluetooth_1_bless_isr_INTC_PRIOR_NUMBER      Bluetooth_1_bless_isr__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable Bluetooth_1_bless_isr interrupt. */
#define Bluetooth_1_bless_isr_INTC_SET_EN            ((reg32 *) Bluetooth_1_bless_isr__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the Bluetooth_1_bless_isr interrupt. */
#define Bluetooth_1_bless_isr_INTC_CLR_EN            ((reg32 *) Bluetooth_1_bless_isr__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the Bluetooth_1_bless_isr interrupt state to pending. */
#define Bluetooth_1_bless_isr_INTC_SET_PD            ((reg32 *) Bluetooth_1_bless_isr__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the Bluetooth_1_bless_isr interrupt. */
#define Bluetooth_1_bless_isr_INTC_CLR_PD            ((reg32 *) Bluetooth_1_bless_isr__INTC_CLR_PD_REG)



#endif /* CY_ISR_Bluetooth_1_bless_isr_H */


/* [] END OF FILE */
