/*===========================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                      */
/* Module       = Mcu_Ram.h                                                  */
/* $Revision: 352781 $                                                       */
/* $Date: 2017-01-25 13:18:42 +0000 (Wed, 25 Jan 2017) $                     */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                    */
/*===========================================================================*/
/* Purpose:                                                                  */
/* This file contains the extern declarations of global RAM variables of MCU */
/* Driver                                                                    */
/*                                                                           */
/*===========================================================================*/
/*                                                                           */
/* Unless otherwise agreed upon in writing between your company and          */
/* Renesas Electronics Corporation the following shall apply!                */
/*                                                                           */
/* Warranty Disclaimer                                                       */
/*                                                                           */
/* There is no warranty of any kind whatsoever granted by Renesas. Any       */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed*/
/* or implied, including but not limited to those for non-infringement of    */
/* intellectual property, merchantability and/or fitness for the particular  */
/* purpose.                                                                  */
/*                                                                           */
/* Renesas shall not have any obligation to maintain, service or provide bug */
/* fixes for the supplied Product(s) and/or the Application.                 */
/*                                                                           */
/* Each User is solely responsible for determining the appropriateness of    */
/* using the Product(s) and assumes all risks associated with its exercise   */
/* of rights under this Agreement, including, but not limited to the risks   */
/* and costs of program errors, compliance with applicable laws, damage to   */
/* or loss of data, programs or equipment, and unavailability or             */
/* interruption of operations.                                               */
/*                                                                           */
/* Limitation of Liability                                                   */
/*                                                                           */
/* In no event shall Renesas be liable to the User for any incidental,       */
/* consequential, indirect, or punitive damage (including but not limited    */
/* to lost profits) regardless of whether such liability is based on breach  */
/* of contract, tort, strict liability, breach of warranties, failure of     */
/* essential purpose or otherwise and even if advised of the possibility of  */
/* such damages. Renesas shall not be liable for any services or products    */
/* provided by third party vendors, developers or consultants identified or  */
/* referred to the User by Renesas in connection with the Product(s) and/or  */
/* the Application.                                                          */
/*                                                                           */
/*===========================================================================*/
/* Environment:                                                              */
/*              Devices:        P1x-C                                        */
/*===========================================================================*/

/******************************************************************************
**                      Revision Control History                             **
******************************************************************************/
/*
 * V1.0.0:  14-Aug-2015 : Initial Version.
 * V1.0.1:  15-Feb-2016 : As part of P1x-C 4.01.00 release, following changes
 *                        are made:
 *                        1. As per JIRA ID ARDAAAF-444, added a global pointer
 *                           Mcu_GpGTMCMUClockSetting for GTM CMU Clock
 *                           Initialization.
 *                        2. As per JIRA ID ARDAAAF-12, updated memory sections.
 *                        3. Global variable Mcu_GulLastResetRawValue is
 *                           renamed to Mcu_GusLastResetRawValue and
 *                           Mcu_GulLastResetReason to Mcu_GusLastResetReason
 *                           as per the requirement EAAR_PN0084_NR_0035.
 *                        4. Copyright Information is updated.
 * V1.0.2:  27-Jan-2017 : Following changes are made:
 *                        1. As per JIRA ticket ARDAAAF-1451, Global variable
 *                           Mcu_GulTestCompValue is added to access CMPTST0
 *                           value from global ram.
 *                        2. As per JIRA ID ARDAAAF-1270,added UD IDs
 *                           for traceability improvement.
 *                        3. As per JIRA ID ARDAAAF-1711, volatile declaration
 *                           is added for Mcu_GblRAMInitStatus.
 *                        4. As per JIRA ID ARDAAAF-1537, memory section
 *                           for boolean variable is clubbed into one section.
 */
/*****************************************************************************/
#ifndef MCU_RAM_H
#define MCU_RAM_H

/******************************************************************************
**                      Include Section                                      **
******************************************************************************/

/******************************************************************************
**                      Version Information                                  **
******************************************************************************/
/* AUTOSAR specification version information */

#define MCU_RAM_AR_RELEASE_MAJOR_VERSION      MCU_AR_RELEASE_MAJOR_VERSION
#define MCU_RAM_AR_RELEASE_MINOR_VERSION      MCU_AR_RELEASE_MINOR_VERSION
#define MCU_RAM_AR_RELEASE_REVISION_VERSION   MCU_AR_RELEASE_REVISION_VERSION

/* File version information */
#define MCU_RAM_SW_MAJOR_VERSION     MCU_SW_MAJOR_VERSION
#define MCU_RAM_SW_MINOR_VERSION     MCU_SW_MINOR_VERSION

/******************************************************************************
**                      Global Symbols                                       **
******************************************************************************/

/******************************************************************************
**                      Global Data Types                                    **
******************************************************************************/
#define MCU_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

/* Implements MCU_ESDD_UD_050 */
/* Global variable to store the config pointer */
extern P2CONST(Mcu_ConfigType, MCU_VAR, MCU_CONFIG_CONST)Mcu_GpConfigPtr;
/* Implements MCU_ESDD_UD_057 */
/* Global pointer variable for MCU Clock Setting configuration */
extern P2CONST(Mcu_ClockSetting, MCU_VAR, MCU_CONFIG_CONST)Mcu_GpClockSetting;

/* Implements MCU_ESDD_UD_050 */
/* Global pointer variable for MCU RAM Setting configuration */
extern P2CONST(Mcu_RamSetting, MCU_VAR, MCU_CONFIG_CONST)Mcu_GpRamSetting;

/* Implements MCU_ESDD_UD_050 */
/* Global pointer variable for MCU Mode Setting configuration */
extern P2CONST(Mcu_ModeSetting, MCU_VAR, MCU_CONFIG_CONST)Mcu_GpModeSetting;

/* Implements MCU_ESDD_UD_050 */
/* Global pointer variable for MCU ECM Setting configuration */
extern P2CONST(Mcu_EcmSetting, MCU_VAR, MCU_CONFIG_CONST)Mcu_GpEcmSetting;

#if(STD_ON == MCU_GTM_SUPPORT)
/* Implements MCU_ESDD_UD_050 */
/* Global pointer variable for MCU GTM CMU Clock Setting configuration */
extern P2CONST(Mcu_GTMCMUClockSetting, MCU_VAR, MCU_CONFIG_CONST)
                                                      Mcu_GpGTMCMUClockSetting;
#endif

#define MCU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define MCU_START_SEC_VAR_INIT_BOOLEAN
#include "MemMap.h"
/* Implements MCU_ESDD_UD_036*/
#if (STD_ON == MCU_DEV_ERROR_DETECT )
/* Implements MCU_ESDD_UD_051 */
/* Global variable to store Initialization status of MCU Driver */
extern VAR(boolean, MCU_INIT_DATA)Mcu_GblDriverStatus;
#endif

/* Implements MCU_ESDD_UD_029 */
#if (STD_ON == MCU_GET_RAM_STATE_API )
/* Global variable to store ram state of MCU Driver */
extern VAR(volatile boolean, MCU_INIT_DATA)Mcu_GblRAMInitStatus;

#endif
#define MCU_STOP_SEC_VAR_INIT_BOOLEAN
#include "MemMap.h"

#define MCU_START_SEC_VAR_INIT_8
#include "MemMap.h"
/* Global variable to store the Reset ReasonStore API call of MCU Driver */
extern VAR(uint8, MCU_INIT_DATA)Mcu_GucMulRstReasonStoreCall;
#define MCU_STOP_SEC_VAR_INIT_8
#include "MemMap.h"

#define MCU_START_SEC_VAR_INIT_16
#include "MemMap.h"
/* Global variable to store Last Reset raw value */
extern VAR(uint16, MCU_INIT_DATA)Mcu_GusLastResetRawValue;
/* Global variable to store Last Reset reason status */
extern VAR(uint16, MCU_INIT_DATA)Mcu_GusLastResetReason;
#define MCU_STOP_SEC_VAR_INIT_16
#include "MemMap.h"

#if (STD_ON == MCU_LOCKSTEP_SELFDIAGNOSTIC_TEST)
#define MCU_START_SEC_VAR_32
#include "MemMap.h"
 /* Variable to read the CMPTST0 register value for
    Mcu_LockStepSelfDiagnosticTest API */
extern VAR(uint32, MCU_INIT_DATA)Mcu_GulTestCompValue;

#define MCU_STOP_SEC_VAR_32
#include "MemMap.h"
#endif
/******************************************************************************
**                      Function Prototypes                                  **
******************************************************************************/

#endif /* MCU_RAM_H  */

/******************************************************************************
**                      End of File                                          **
******************************************************************************/
