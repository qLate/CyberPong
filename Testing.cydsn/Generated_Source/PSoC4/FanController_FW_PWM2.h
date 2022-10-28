/*******************************************************************************
* File Name: FanController_FW_PWM2.h
* Version 2.10
*
* Description:
*  This file provides constants and parameter values for the FanController_FW_PWM2
*  component.
*
* Note:
*  None
*
********************************************************************************
* Copyright 2013-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_TCPWM_FanController_FW_PWM2_H)
#define CY_TCPWM_FanController_FW_PWM2_H


#include "CyLib.h"
#include "cytypes.h"
#include "cyfitter.h"


/*******************************************************************************
* Internal Type defines
*******************************************************************************/

/* Structure to save state before go to sleep */
typedef struct
{
    uint8  enableState;
} FanController_FW_PWM2_BACKUP_STRUCT;


/*******************************************************************************
* Variables
*******************************************************************************/
extern uint8  FanController_FW_PWM2_initVar;


/***************************************
*   Conditional Compilation Parameters
****************************************/

#define FanController_FW_PWM2_CY_TCPWM_V2                    (CYIPBLOCK_m0s8tcpwm_VERSION == 2u)
#define FanController_FW_PWM2_CY_TCPWM_4000                  (CY_PSOC4_4000)

/* TCPWM Configuration */
#define FanController_FW_PWM2_CONFIG                         (7lu)

/* Quad Mode */
/* Parameters */
#define FanController_FW_PWM2_QUAD_ENCODING_MODES            (0lu)
#define FanController_FW_PWM2_QUAD_AUTO_START                (0lu)

/* Signal modes */
#define FanController_FW_PWM2_QUAD_INDEX_SIGNAL_MODE         (0lu)
#define FanController_FW_PWM2_QUAD_PHIA_SIGNAL_MODE          (3lu)
#define FanController_FW_PWM2_QUAD_PHIB_SIGNAL_MODE          (3lu)
#define FanController_FW_PWM2_QUAD_STOP_SIGNAL_MODE          (0lu)

/* Signal present */
#define FanController_FW_PWM2_QUAD_INDEX_SIGNAL_PRESENT      (0lu)
#define FanController_FW_PWM2_QUAD_STOP_SIGNAL_PRESENT       (0lu)

/* Interrupt Mask */
#define FanController_FW_PWM2_QUAD_INTERRUPT_MASK            (1lu)

/* Timer/Counter Mode */
/* Parameters */
#define FanController_FW_PWM2_TC_RUN_MODE                    (0lu)
#define FanController_FW_PWM2_TC_COUNTER_MODE                (0lu)
#define FanController_FW_PWM2_TC_COMP_CAP_MODE               (2lu)
#define FanController_FW_PWM2_TC_PRESCALER                   (0lu)

/* Signal modes */
#define FanController_FW_PWM2_TC_RELOAD_SIGNAL_MODE          (0lu)
#define FanController_FW_PWM2_TC_COUNT_SIGNAL_MODE           (3lu)
#define FanController_FW_PWM2_TC_START_SIGNAL_MODE           (0lu)
#define FanController_FW_PWM2_TC_STOP_SIGNAL_MODE            (0lu)
#define FanController_FW_PWM2_TC_CAPTURE_SIGNAL_MODE         (0lu)

/* Signal present */
#define FanController_FW_PWM2_TC_RELOAD_SIGNAL_PRESENT       (0lu)
#define FanController_FW_PWM2_TC_COUNT_SIGNAL_PRESENT        (0lu)
#define FanController_FW_PWM2_TC_START_SIGNAL_PRESENT        (0lu)
#define FanController_FW_PWM2_TC_STOP_SIGNAL_PRESENT         (0lu)
#define FanController_FW_PWM2_TC_CAPTURE_SIGNAL_PRESENT      (0lu)

/* Interrupt Mask */
#define FanController_FW_PWM2_TC_INTERRUPT_MASK              (1lu)

/* PWM Mode */
/* Parameters */
#define FanController_FW_PWM2_PWM_KILL_EVENT                 (0lu)
#define FanController_FW_PWM2_PWM_STOP_EVENT                 (0lu)
#define FanController_FW_PWM2_PWM_MODE                       (4lu)
#define FanController_FW_PWM2_PWM_OUT_N_INVERT               (0lu)
#define FanController_FW_PWM2_PWM_OUT_INVERT                 (0lu)
#define FanController_FW_PWM2_PWM_ALIGN                      (0lu)
#define FanController_FW_PWM2_PWM_RUN_MODE                   (0lu)
#define FanController_FW_PWM2_PWM_DEAD_TIME_CYCLE            (0lu)
#define FanController_FW_PWM2_PWM_PRESCALER                  (0lu)

/* Signal modes */
#define FanController_FW_PWM2_PWM_RELOAD_SIGNAL_MODE         (0lu)
#define FanController_FW_PWM2_PWM_COUNT_SIGNAL_MODE          (3lu)
#define FanController_FW_PWM2_PWM_START_SIGNAL_MODE          (0lu)
#define FanController_FW_PWM2_PWM_STOP_SIGNAL_MODE           (0lu)
#define FanController_FW_PWM2_PWM_SWITCH_SIGNAL_MODE         (0lu)

/* Signal present */
#define FanController_FW_PWM2_PWM_RELOAD_SIGNAL_PRESENT      (0lu)
#define FanController_FW_PWM2_PWM_COUNT_SIGNAL_PRESENT       (0lu)
#define FanController_FW_PWM2_PWM_START_SIGNAL_PRESENT       (0lu)
#define FanController_FW_PWM2_PWM_STOP_SIGNAL_PRESENT        (0lu)
#define FanController_FW_PWM2_PWM_SWITCH_SIGNAL_PRESENT      (0lu)

/* Interrupt Mask */
#define FanController_FW_PWM2_PWM_INTERRUPT_MASK             (1lu)


/***************************************
*    Initial Parameter Constants
***************************************/

/* Timer/Counter Mode */
#define FanController_FW_PWM2_TC_PERIOD_VALUE                (65535lu)
#define FanController_FW_PWM2_TC_COMPARE_VALUE               (65535lu)
#define FanController_FW_PWM2_TC_COMPARE_BUF_VALUE           (65535lu)
#define FanController_FW_PWM2_TC_COMPARE_SWAP                (0lu)

/* PWM Mode */
#define FanController_FW_PWM2_PWM_PERIOD_VALUE               (65535lu)
#define FanController_FW_PWM2_PWM_PERIOD_BUF_VALUE           (65535lu)
#define FanController_FW_PWM2_PWM_PERIOD_SWAP                (0lu)
#define FanController_FW_PWM2_PWM_COMPARE_VALUE              (65535lu)
#define FanController_FW_PWM2_PWM_COMPARE_BUF_VALUE          (65535lu)
#define FanController_FW_PWM2_PWM_COMPARE_SWAP               (0lu)


/***************************************
*    Enumerated Types and Parameters
***************************************/

#define FanController_FW_PWM2__LEFT 0
#define FanController_FW_PWM2__RIGHT 1
#define FanController_FW_PWM2__CENTER 2
#define FanController_FW_PWM2__ASYMMETRIC 3

#define FanController_FW_PWM2__X1 0
#define FanController_FW_PWM2__X2 1
#define FanController_FW_PWM2__X4 2

#define FanController_FW_PWM2__PWM 4
#define FanController_FW_PWM2__PWM_DT 5
#define FanController_FW_PWM2__PWM_PR 6

#define FanController_FW_PWM2__INVERSE 1
#define FanController_FW_PWM2__DIRECT 0

#define FanController_FW_PWM2__CAPTURE 2
#define FanController_FW_PWM2__COMPARE 0

#define FanController_FW_PWM2__TRIG_LEVEL 3
#define FanController_FW_PWM2__TRIG_RISING 0
#define FanController_FW_PWM2__TRIG_FALLING 1
#define FanController_FW_PWM2__TRIG_BOTH 2

#define FanController_FW_PWM2__INTR_MASK_TC 1
#define FanController_FW_PWM2__INTR_MASK_CC_MATCH 2
#define FanController_FW_PWM2__INTR_MASK_NONE 0
#define FanController_FW_PWM2__INTR_MASK_TC_CC 3

#define FanController_FW_PWM2__UNCONFIG 8
#define FanController_FW_PWM2__TIMER 1
#define FanController_FW_PWM2__QUAD 3
#define FanController_FW_PWM2__PWM_SEL 7

#define FanController_FW_PWM2__COUNT_UP 0
#define FanController_FW_PWM2__COUNT_DOWN 1
#define FanController_FW_PWM2__COUNT_UPDOWN0 2
#define FanController_FW_PWM2__COUNT_UPDOWN1 3


/* Prescaler */
#define FanController_FW_PWM2_PRESCALE_DIVBY1                ((uint32)(0u << FanController_FW_PWM2_PRESCALER_SHIFT))
#define FanController_FW_PWM2_PRESCALE_DIVBY2                ((uint32)(1u << FanController_FW_PWM2_PRESCALER_SHIFT))
#define FanController_FW_PWM2_PRESCALE_DIVBY4                ((uint32)(2u << FanController_FW_PWM2_PRESCALER_SHIFT))
#define FanController_FW_PWM2_PRESCALE_DIVBY8                ((uint32)(3u << FanController_FW_PWM2_PRESCALER_SHIFT))
#define FanController_FW_PWM2_PRESCALE_DIVBY16               ((uint32)(4u << FanController_FW_PWM2_PRESCALER_SHIFT))
#define FanController_FW_PWM2_PRESCALE_DIVBY32               ((uint32)(5u << FanController_FW_PWM2_PRESCALER_SHIFT))
#define FanController_FW_PWM2_PRESCALE_DIVBY64               ((uint32)(6u << FanController_FW_PWM2_PRESCALER_SHIFT))
#define FanController_FW_PWM2_PRESCALE_DIVBY128              ((uint32)(7u << FanController_FW_PWM2_PRESCALER_SHIFT))

/* TCPWM set modes */
#define FanController_FW_PWM2_MODE_TIMER_COMPARE             ((uint32)(FanController_FW_PWM2__COMPARE         <<  \
                                                                  FanController_FW_PWM2_MODE_SHIFT))
#define FanController_FW_PWM2_MODE_TIMER_CAPTURE             ((uint32)(FanController_FW_PWM2__CAPTURE         <<  \
                                                                  FanController_FW_PWM2_MODE_SHIFT))
#define FanController_FW_PWM2_MODE_QUAD                      ((uint32)(FanController_FW_PWM2__QUAD            <<  \
                                                                  FanController_FW_PWM2_MODE_SHIFT))
#define FanController_FW_PWM2_MODE_PWM                       ((uint32)(FanController_FW_PWM2__PWM             <<  \
                                                                  FanController_FW_PWM2_MODE_SHIFT))
#define FanController_FW_PWM2_MODE_PWM_DT                    ((uint32)(FanController_FW_PWM2__PWM_DT          <<  \
                                                                  FanController_FW_PWM2_MODE_SHIFT))
#define FanController_FW_PWM2_MODE_PWM_PR                    ((uint32)(FanController_FW_PWM2__PWM_PR          <<  \
                                                                  FanController_FW_PWM2_MODE_SHIFT))

/* Quad Modes */
#define FanController_FW_PWM2_MODE_X1                        ((uint32)(FanController_FW_PWM2__X1              <<  \
                                                                  FanController_FW_PWM2_QUAD_MODE_SHIFT))
#define FanController_FW_PWM2_MODE_X2                        ((uint32)(FanController_FW_PWM2__X2              <<  \
                                                                  FanController_FW_PWM2_QUAD_MODE_SHIFT))
#define FanController_FW_PWM2_MODE_X4                        ((uint32)(FanController_FW_PWM2__X4              <<  \
                                                                  FanController_FW_PWM2_QUAD_MODE_SHIFT))

/* Counter modes */
#define FanController_FW_PWM2_COUNT_UP                       ((uint32)(FanController_FW_PWM2__COUNT_UP        <<  \
                                                                  FanController_FW_PWM2_UPDOWN_SHIFT))
#define FanController_FW_PWM2_COUNT_DOWN                     ((uint32)(FanController_FW_PWM2__COUNT_DOWN      <<  \
                                                                  FanController_FW_PWM2_UPDOWN_SHIFT))
#define FanController_FW_PWM2_COUNT_UPDOWN0                  ((uint32)(FanController_FW_PWM2__COUNT_UPDOWN0   <<  \
                                                                  FanController_FW_PWM2_UPDOWN_SHIFT))
#define FanController_FW_PWM2_COUNT_UPDOWN1                  ((uint32)(FanController_FW_PWM2__COUNT_UPDOWN1   <<  \
                                                                  FanController_FW_PWM2_UPDOWN_SHIFT))

/* PWM output invert */
#define FanController_FW_PWM2_INVERT_LINE                    ((uint32)(FanController_FW_PWM2__INVERSE         <<  \
                                                                  FanController_FW_PWM2_INV_OUT_SHIFT))
#define FanController_FW_PWM2_INVERT_LINE_N                  ((uint32)(FanController_FW_PWM2__INVERSE         <<  \
                                                                  FanController_FW_PWM2_INV_COMPL_OUT_SHIFT))

/* Trigger modes */
#define FanController_FW_PWM2_TRIG_RISING                    ((uint32)FanController_FW_PWM2__TRIG_RISING)
#define FanController_FW_PWM2_TRIG_FALLING                   ((uint32)FanController_FW_PWM2__TRIG_FALLING)
#define FanController_FW_PWM2_TRIG_BOTH                      ((uint32)FanController_FW_PWM2__TRIG_BOTH)
#define FanController_FW_PWM2_TRIG_LEVEL                     ((uint32)FanController_FW_PWM2__TRIG_LEVEL)

/* Interrupt mask */
#define FanController_FW_PWM2_INTR_MASK_TC                   ((uint32)FanController_FW_PWM2__INTR_MASK_TC)
#define FanController_FW_PWM2_INTR_MASK_CC_MATCH             ((uint32)FanController_FW_PWM2__INTR_MASK_CC_MATCH)

/* PWM Output Controls */
#define FanController_FW_PWM2_CC_MATCH_SET                   (0x00u)
#define FanController_FW_PWM2_CC_MATCH_CLEAR                 (0x01u)
#define FanController_FW_PWM2_CC_MATCH_INVERT                (0x02u)
#define FanController_FW_PWM2_CC_MATCH_NO_CHANGE             (0x03u)
#define FanController_FW_PWM2_OVERLOW_SET                    (0x00u)
#define FanController_FW_PWM2_OVERLOW_CLEAR                  (0x04u)
#define FanController_FW_PWM2_OVERLOW_INVERT                 (0x08u)
#define FanController_FW_PWM2_OVERLOW_NO_CHANGE              (0x0Cu)
#define FanController_FW_PWM2_UNDERFLOW_SET                  (0x00u)
#define FanController_FW_PWM2_UNDERFLOW_CLEAR                (0x10u)
#define FanController_FW_PWM2_UNDERFLOW_INVERT               (0x20u)
#define FanController_FW_PWM2_UNDERFLOW_NO_CHANGE            (0x30u)

/* PWM Align */
#define FanController_FW_PWM2_PWM_MODE_LEFT                  (FanController_FW_PWM2_CC_MATCH_CLEAR        |   \
                                                         FanController_FW_PWM2_OVERLOW_SET           |   \
                                                         FanController_FW_PWM2_UNDERFLOW_NO_CHANGE)
#define FanController_FW_PWM2_PWM_MODE_RIGHT                 (FanController_FW_PWM2_CC_MATCH_SET          |   \
                                                         FanController_FW_PWM2_OVERLOW_NO_CHANGE     |   \
                                                         FanController_FW_PWM2_UNDERFLOW_CLEAR)
#define FanController_FW_PWM2_PWM_MODE_ASYM                  (FanController_FW_PWM2_CC_MATCH_INVERT       |   \
                                                         FanController_FW_PWM2_OVERLOW_SET           |   \
                                                         FanController_FW_PWM2_UNDERFLOW_CLEAR)

#if (FanController_FW_PWM2_CY_TCPWM_V2)
    #if(FanController_FW_PWM2_CY_TCPWM_4000)
        #define FanController_FW_PWM2_PWM_MODE_CENTER                (FanController_FW_PWM2_CC_MATCH_INVERT       |   \
                                                                 FanController_FW_PWM2_OVERLOW_NO_CHANGE     |   \
                                                                 FanController_FW_PWM2_UNDERFLOW_CLEAR)
    #else
        #define FanController_FW_PWM2_PWM_MODE_CENTER                (FanController_FW_PWM2_CC_MATCH_INVERT       |   \
                                                                 FanController_FW_PWM2_OVERLOW_SET           |   \
                                                                 FanController_FW_PWM2_UNDERFLOW_CLEAR)
    #endif /* (FanController_FW_PWM2_CY_TCPWM_4000) */
#else
    #define FanController_FW_PWM2_PWM_MODE_CENTER                (FanController_FW_PWM2_CC_MATCH_INVERT       |   \
                                                             FanController_FW_PWM2_OVERLOW_NO_CHANGE     |   \
                                                             FanController_FW_PWM2_UNDERFLOW_CLEAR)
#endif /* (FanController_FW_PWM2_CY_TCPWM_NEW) */

/* Command operations without condition */
#define FanController_FW_PWM2_CMD_CAPTURE                    (0u)
#define FanController_FW_PWM2_CMD_RELOAD                     (8u)
#define FanController_FW_PWM2_CMD_STOP                       (16u)
#define FanController_FW_PWM2_CMD_START                      (24u)

/* Status */
#define FanController_FW_PWM2_STATUS_DOWN                    (1u)
#define FanController_FW_PWM2_STATUS_RUNNING                 (2u)


/***************************************
*        Function Prototypes
****************************************/

void   FanController_FW_PWM2_Init(void);
void   FanController_FW_PWM2_Enable(void);
void   FanController_FW_PWM2_Start(void);
void   FanController_FW_PWM2_Stop(void);

void   FanController_FW_PWM2_SetMode(uint32 mode);
void   FanController_FW_PWM2_SetCounterMode(uint32 counterMode);
void   FanController_FW_PWM2_SetPWMMode(uint32 modeMask);
void   FanController_FW_PWM2_SetQDMode(uint32 qdMode);

void   FanController_FW_PWM2_SetPrescaler(uint32 prescaler);
void   FanController_FW_PWM2_TriggerCommand(uint32 mask, uint32 command);
void   FanController_FW_PWM2_SetOneShot(uint32 oneShotEnable);
uint32 FanController_FW_PWM2_ReadStatus(void);

void   FanController_FW_PWM2_SetPWMSyncKill(uint32 syncKillEnable);
void   FanController_FW_PWM2_SetPWMStopOnKill(uint32 stopOnKillEnable);
void   FanController_FW_PWM2_SetPWMDeadTime(uint32 deadTime);
void   FanController_FW_PWM2_SetPWMInvert(uint32 mask);

void   FanController_FW_PWM2_SetInterruptMode(uint32 interruptMask);
uint32 FanController_FW_PWM2_GetInterruptSourceMasked(void);
uint32 FanController_FW_PWM2_GetInterruptSource(void);
void   FanController_FW_PWM2_ClearInterrupt(uint32 interruptMask);
void   FanController_FW_PWM2_SetInterrupt(uint32 interruptMask);

void   FanController_FW_PWM2_WriteCounter(uint32 count);
uint32 FanController_FW_PWM2_ReadCounter(void);

uint32 FanController_FW_PWM2_ReadCapture(void);
uint32 FanController_FW_PWM2_ReadCaptureBuf(void);

void   FanController_FW_PWM2_WritePeriod(uint32 period);
uint32 FanController_FW_PWM2_ReadPeriod(void);
void   FanController_FW_PWM2_WritePeriodBuf(uint32 periodBuf);
uint32 FanController_FW_PWM2_ReadPeriodBuf(void);

void   FanController_FW_PWM2_WriteCompare(uint32 compare);
uint32 FanController_FW_PWM2_ReadCompare(void);
void   FanController_FW_PWM2_WriteCompareBuf(uint32 compareBuf);
uint32 FanController_FW_PWM2_ReadCompareBuf(void);

void   FanController_FW_PWM2_SetPeriodSwap(uint32 swapEnable);
void   FanController_FW_PWM2_SetCompareSwap(uint32 swapEnable);

void   FanController_FW_PWM2_SetCaptureMode(uint32 triggerMode);
void   FanController_FW_PWM2_SetReloadMode(uint32 triggerMode);
void   FanController_FW_PWM2_SetStartMode(uint32 triggerMode);
void   FanController_FW_PWM2_SetStopMode(uint32 triggerMode);
void   FanController_FW_PWM2_SetCountMode(uint32 triggerMode);

void   FanController_FW_PWM2_SaveConfig(void);
void   FanController_FW_PWM2_RestoreConfig(void);
void   FanController_FW_PWM2_Sleep(void);
void   FanController_FW_PWM2_Wakeup(void);


/***************************************
*             Registers
***************************************/

#define FanController_FW_PWM2_BLOCK_CONTROL_REG              (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__TCPWM_CTRL )
#define FanController_FW_PWM2_BLOCK_CONTROL_PTR              ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__TCPWM_CTRL )
#define FanController_FW_PWM2_COMMAND_REG                    (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__TCPWM_CMD )
#define FanController_FW_PWM2_COMMAND_PTR                    ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__TCPWM_CMD )
#define FanController_FW_PWM2_INTRRUPT_CAUSE_REG             (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE )
#define FanController_FW_PWM2_INTRRUPT_CAUSE_PTR             ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE )
#define FanController_FW_PWM2_CONTROL_REG                    (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__CTRL )
#define FanController_FW_PWM2_CONTROL_PTR                    ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__CTRL )
#define FanController_FW_PWM2_STATUS_REG                     (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__STATUS )
#define FanController_FW_PWM2_STATUS_PTR                     ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__STATUS )
#define FanController_FW_PWM2_COUNTER_REG                    (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__COUNTER )
#define FanController_FW_PWM2_COUNTER_PTR                    ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__COUNTER )
#define FanController_FW_PWM2_COMP_CAP_REG                   (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__CC )
#define FanController_FW_PWM2_COMP_CAP_PTR                   ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__CC )
#define FanController_FW_PWM2_COMP_CAP_BUF_REG               (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__CC_BUFF )
#define FanController_FW_PWM2_COMP_CAP_BUF_PTR               ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__CC_BUFF )
#define FanController_FW_PWM2_PERIOD_REG                     (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__PERIOD )
#define FanController_FW_PWM2_PERIOD_PTR                     ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__PERIOD )
#define FanController_FW_PWM2_PERIOD_BUF_REG                 (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__PERIOD_BUFF )
#define FanController_FW_PWM2_PERIOD_BUF_PTR                 ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__PERIOD_BUFF )
#define FanController_FW_PWM2_TRIG_CONTROL0_REG              (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__TR_CTRL0 )
#define FanController_FW_PWM2_TRIG_CONTROL0_PTR              ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__TR_CTRL0 )
#define FanController_FW_PWM2_TRIG_CONTROL1_REG              (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__TR_CTRL1 )
#define FanController_FW_PWM2_TRIG_CONTROL1_PTR              ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__TR_CTRL1 )
#define FanController_FW_PWM2_TRIG_CONTROL2_REG              (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__TR_CTRL2 )
#define FanController_FW_PWM2_TRIG_CONTROL2_PTR              ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__TR_CTRL2 )
#define FanController_FW_PWM2_INTERRUPT_REQ_REG              (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__INTR )
#define FanController_FW_PWM2_INTERRUPT_REQ_PTR              ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__INTR )
#define FanController_FW_PWM2_INTERRUPT_SET_REG              (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__INTR_SET )
#define FanController_FW_PWM2_INTERRUPT_SET_PTR              ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__INTR_SET )
#define FanController_FW_PWM2_INTERRUPT_MASK_REG             (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__INTR_MASK )
#define FanController_FW_PWM2_INTERRUPT_MASK_PTR             ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__INTR_MASK )
#define FanController_FW_PWM2_INTERRUPT_MASKED_REG           (*(reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__INTR_MASKED )
#define FanController_FW_PWM2_INTERRUPT_MASKED_PTR           ( (reg32 *) FanController_FW_PWM2_cy_m0s8_tcpwm_1__INTR_MASKED )


/***************************************
*       Registers Constants
***************************************/

/* Mask */
#define FanController_FW_PWM2_MASK                           ((uint32)FanController_FW_PWM2_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK)

/* Shift constants for control register */
#define FanController_FW_PWM2_RELOAD_CC_SHIFT                (0u)
#define FanController_FW_PWM2_RELOAD_PERIOD_SHIFT            (1u)
#define FanController_FW_PWM2_PWM_SYNC_KILL_SHIFT            (2u)
#define FanController_FW_PWM2_PWM_STOP_KILL_SHIFT            (3u)
#define FanController_FW_PWM2_PRESCALER_SHIFT                (8u)
#define FanController_FW_PWM2_UPDOWN_SHIFT                   (16u)
#define FanController_FW_PWM2_ONESHOT_SHIFT                  (18u)
#define FanController_FW_PWM2_QUAD_MODE_SHIFT                (20u)
#define FanController_FW_PWM2_INV_OUT_SHIFT                  (20u)
#define FanController_FW_PWM2_INV_COMPL_OUT_SHIFT            (21u)
#define FanController_FW_PWM2_MODE_SHIFT                     (24u)

/* Mask constants for control register */
#define FanController_FW_PWM2_RELOAD_CC_MASK                 ((uint32)(FanController_FW_PWM2_1BIT_MASK        <<  \
                                                                            FanController_FW_PWM2_RELOAD_CC_SHIFT))
#define FanController_FW_PWM2_RELOAD_PERIOD_MASK             ((uint32)(FanController_FW_PWM2_1BIT_MASK        <<  \
                                                                            FanController_FW_PWM2_RELOAD_PERIOD_SHIFT))
#define FanController_FW_PWM2_PWM_SYNC_KILL_MASK             ((uint32)(FanController_FW_PWM2_1BIT_MASK        <<  \
                                                                            FanController_FW_PWM2_PWM_SYNC_KILL_SHIFT))
#define FanController_FW_PWM2_PWM_STOP_KILL_MASK             ((uint32)(FanController_FW_PWM2_1BIT_MASK        <<  \
                                                                            FanController_FW_PWM2_PWM_STOP_KILL_SHIFT))
#define FanController_FW_PWM2_PRESCALER_MASK                 ((uint32)(FanController_FW_PWM2_8BIT_MASK        <<  \
                                                                            FanController_FW_PWM2_PRESCALER_SHIFT))
#define FanController_FW_PWM2_UPDOWN_MASK                    ((uint32)(FanController_FW_PWM2_2BIT_MASK        <<  \
                                                                            FanController_FW_PWM2_UPDOWN_SHIFT))
#define FanController_FW_PWM2_ONESHOT_MASK                   ((uint32)(FanController_FW_PWM2_1BIT_MASK        <<  \
                                                                            FanController_FW_PWM2_ONESHOT_SHIFT))
#define FanController_FW_PWM2_QUAD_MODE_MASK                 ((uint32)(FanController_FW_PWM2_3BIT_MASK        <<  \
                                                                            FanController_FW_PWM2_QUAD_MODE_SHIFT))
#define FanController_FW_PWM2_INV_OUT_MASK                   ((uint32)(FanController_FW_PWM2_2BIT_MASK        <<  \
                                                                            FanController_FW_PWM2_INV_OUT_SHIFT))
#define FanController_FW_PWM2_MODE_MASK                      ((uint32)(FanController_FW_PWM2_3BIT_MASK        <<  \
                                                                            FanController_FW_PWM2_MODE_SHIFT))

/* Shift constants for trigger control register 1 */
#define FanController_FW_PWM2_CAPTURE_SHIFT                  (0u)
#define FanController_FW_PWM2_COUNT_SHIFT                    (2u)
#define FanController_FW_PWM2_RELOAD_SHIFT                   (4u)
#define FanController_FW_PWM2_STOP_SHIFT                     (6u)
#define FanController_FW_PWM2_START_SHIFT                    (8u)

/* Mask constants for trigger control register 1 */
#define FanController_FW_PWM2_CAPTURE_MASK                   ((uint32)(FanController_FW_PWM2_2BIT_MASK        <<  \
                                                                  FanController_FW_PWM2_CAPTURE_SHIFT))
#define FanController_FW_PWM2_COUNT_MASK                     ((uint32)(FanController_FW_PWM2_2BIT_MASK        <<  \
                                                                  FanController_FW_PWM2_COUNT_SHIFT))
#define FanController_FW_PWM2_RELOAD_MASK                    ((uint32)(FanController_FW_PWM2_2BIT_MASK        <<  \
                                                                  FanController_FW_PWM2_RELOAD_SHIFT))
#define FanController_FW_PWM2_STOP_MASK                      ((uint32)(FanController_FW_PWM2_2BIT_MASK        <<  \
                                                                  FanController_FW_PWM2_STOP_SHIFT))
#define FanController_FW_PWM2_START_MASK                     ((uint32)(FanController_FW_PWM2_2BIT_MASK        <<  \
                                                                  FanController_FW_PWM2_START_SHIFT))

/* MASK */
#define FanController_FW_PWM2_1BIT_MASK                      ((uint32)0x01u)
#define FanController_FW_PWM2_2BIT_MASK                      ((uint32)0x03u)
#define FanController_FW_PWM2_3BIT_MASK                      ((uint32)0x07u)
#define FanController_FW_PWM2_6BIT_MASK                      ((uint32)0x3Fu)
#define FanController_FW_PWM2_8BIT_MASK                      ((uint32)0xFFu)
#define FanController_FW_PWM2_16BIT_MASK                     ((uint32)0xFFFFu)

/* Shift constant for status register */
#define FanController_FW_PWM2_RUNNING_STATUS_SHIFT           (30u)


/***************************************
*    Initial Constants
***************************************/

#define FanController_FW_PWM2_CTRL_QUAD_BASE_CONFIG                                                          \
        (((uint32)(FanController_FW_PWM2_QUAD_ENCODING_MODES     << FanController_FW_PWM2_QUAD_MODE_SHIFT))       |\
         ((uint32)(FanController_FW_PWM2_CONFIG                  << FanController_FW_PWM2_MODE_SHIFT)))

#define FanController_FW_PWM2_CTRL_PWM_BASE_CONFIG                                                           \
        (((uint32)(FanController_FW_PWM2_PWM_STOP_EVENT          << FanController_FW_PWM2_PWM_STOP_KILL_SHIFT))   |\
         ((uint32)(FanController_FW_PWM2_PWM_OUT_INVERT          << FanController_FW_PWM2_INV_OUT_SHIFT))         |\
         ((uint32)(FanController_FW_PWM2_PWM_OUT_N_INVERT        << FanController_FW_PWM2_INV_COMPL_OUT_SHIFT))   |\
         ((uint32)(FanController_FW_PWM2_PWM_MODE                << FanController_FW_PWM2_MODE_SHIFT)))

#define FanController_FW_PWM2_CTRL_PWM_RUN_MODE                                                              \
            ((uint32)(FanController_FW_PWM2_PWM_RUN_MODE         << FanController_FW_PWM2_ONESHOT_SHIFT))
            
#define FanController_FW_PWM2_CTRL_PWM_ALIGN                                                                 \
            ((uint32)(FanController_FW_PWM2_PWM_ALIGN            << FanController_FW_PWM2_UPDOWN_SHIFT))

#define FanController_FW_PWM2_CTRL_PWM_KILL_EVENT                                                            \
             ((uint32)(FanController_FW_PWM2_PWM_KILL_EVENT      << FanController_FW_PWM2_PWM_SYNC_KILL_SHIFT))

#define FanController_FW_PWM2_CTRL_PWM_DEAD_TIME_CYCLE                                                       \
            ((uint32)(FanController_FW_PWM2_PWM_DEAD_TIME_CYCLE  << FanController_FW_PWM2_PRESCALER_SHIFT))

#define FanController_FW_PWM2_CTRL_PWM_PRESCALER                                                             \
            ((uint32)(FanController_FW_PWM2_PWM_PRESCALER        << FanController_FW_PWM2_PRESCALER_SHIFT))

#define FanController_FW_PWM2_CTRL_TIMER_BASE_CONFIG                                                         \
        (((uint32)(FanController_FW_PWM2_TC_PRESCALER            << FanController_FW_PWM2_PRESCALER_SHIFT))       |\
         ((uint32)(FanController_FW_PWM2_TC_COUNTER_MODE         << FanController_FW_PWM2_UPDOWN_SHIFT))          |\
         ((uint32)(FanController_FW_PWM2_TC_RUN_MODE             << FanController_FW_PWM2_ONESHOT_SHIFT))         |\
         ((uint32)(FanController_FW_PWM2_TC_COMP_CAP_MODE        << FanController_FW_PWM2_MODE_SHIFT)))
        
#define FanController_FW_PWM2_QUAD_SIGNALS_MODES                                                             \
        (((uint32)(FanController_FW_PWM2_QUAD_PHIA_SIGNAL_MODE   << FanController_FW_PWM2_COUNT_SHIFT))           |\
         ((uint32)(FanController_FW_PWM2_QUAD_INDEX_SIGNAL_MODE  << FanController_FW_PWM2_RELOAD_SHIFT))          |\
         ((uint32)(FanController_FW_PWM2_QUAD_STOP_SIGNAL_MODE   << FanController_FW_PWM2_STOP_SHIFT))            |\
         ((uint32)(FanController_FW_PWM2_QUAD_PHIB_SIGNAL_MODE   << FanController_FW_PWM2_START_SHIFT)))

#define FanController_FW_PWM2_PWM_SIGNALS_MODES                                                              \
        (((uint32)(FanController_FW_PWM2_PWM_SWITCH_SIGNAL_MODE  << FanController_FW_PWM2_CAPTURE_SHIFT))         |\
         ((uint32)(FanController_FW_PWM2_PWM_COUNT_SIGNAL_MODE   << FanController_FW_PWM2_COUNT_SHIFT))           |\
         ((uint32)(FanController_FW_PWM2_PWM_RELOAD_SIGNAL_MODE  << FanController_FW_PWM2_RELOAD_SHIFT))          |\
         ((uint32)(FanController_FW_PWM2_PWM_STOP_SIGNAL_MODE    << FanController_FW_PWM2_STOP_SHIFT))            |\
         ((uint32)(FanController_FW_PWM2_PWM_START_SIGNAL_MODE   << FanController_FW_PWM2_START_SHIFT)))

#define FanController_FW_PWM2_TIMER_SIGNALS_MODES                                                            \
        (((uint32)(FanController_FW_PWM2_TC_CAPTURE_SIGNAL_MODE  << FanController_FW_PWM2_CAPTURE_SHIFT))         |\
         ((uint32)(FanController_FW_PWM2_TC_COUNT_SIGNAL_MODE    << FanController_FW_PWM2_COUNT_SHIFT))           |\
         ((uint32)(FanController_FW_PWM2_TC_RELOAD_SIGNAL_MODE   << FanController_FW_PWM2_RELOAD_SHIFT))          |\
         ((uint32)(FanController_FW_PWM2_TC_STOP_SIGNAL_MODE     << FanController_FW_PWM2_STOP_SHIFT))            |\
         ((uint32)(FanController_FW_PWM2_TC_START_SIGNAL_MODE    << FanController_FW_PWM2_START_SHIFT)))
        
#define FanController_FW_PWM2_TIMER_UPDOWN_CNT_USED                                                          \
                ((FanController_FW_PWM2__COUNT_UPDOWN0 == FanController_FW_PWM2_TC_COUNTER_MODE)                  ||\
                 (FanController_FW_PWM2__COUNT_UPDOWN1 == FanController_FW_PWM2_TC_COUNTER_MODE))

#define FanController_FW_PWM2_PWM_UPDOWN_CNT_USED                                                            \
                ((FanController_FW_PWM2__CENTER == FanController_FW_PWM2_PWM_ALIGN)                               ||\
                 (FanController_FW_PWM2__ASYMMETRIC == FanController_FW_PWM2_PWM_ALIGN))               
        
#define FanController_FW_PWM2_PWM_PR_INIT_VALUE              (1u)
#define FanController_FW_PWM2_QUAD_PERIOD_INIT_VALUE         (0x8000u)



#endif /* End CY_TCPWM_FanController_FW_PWM2_H */

/* [] END OF FILE */
