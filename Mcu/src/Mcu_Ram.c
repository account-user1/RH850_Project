/*===========================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                      */
/* Module       = Mcu_Ram.c                                                  */
/* $Revision: 368218 $                                                       */
/* $Date: 2017-02-24 14:26:03 +0000 (Fri, 24 Feb 2017) $                     */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                    */
/*===========================================================================*/
/* Purpose:                                                                  */
/* This file contains the global RAM variable of MCU Driver                  */
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
 * V1.0.1:  05-Feb-2016 : As part of P1x-C 4.01.00 release, Following changes
 *                        are made:
 *                        1. As per JIRA ID ARDAAAF-444, added a global pointer
 *                           Mcu_GpGTMCMUClockSetting for GTM CMU Clock
 *                           Initialization.
 *                        2. Remove the MISRA justifications after static
 *                           analysis.
 *                        3. As per JIRA ID ARDAAAF-12, updated memory sections.
 *                        4. Corrected the code width to 80 columns.
 *                        5. Global variable Mcu_GulLastResetRawValue is
 *                           renamed to Mcu_GusLastResetRawValue and
 *                           Mcu_GulLastResetReason to Mcu_GusLastResetReason
 *                           as per the requirement EAAR_PN0084_NR_0035.
 *                        6. Copyright Information is updated.
 * V1.0.2:  27-Jan-2017 : Following changes are made:
 *                        1. As per JIRA ID ARDAAAF-1270, added the UD IDs and
 *                           requirements for achieving traceability.
 *                        2. As per JIRA ticket ARDAAAF-1451, Global variable
 *                           Mcu_GulTestCompValue is added to access CMPTST0
 *                           value from global ram.
 *                        3. As per JIRA ID ARDAAAF-1711, volatile declaration
 *                           is added for Mcu_GblRAMInitStatus.
 *                        4. As per JIRA ID ARDAAAF-1537, memory section
 *                           for boolean variable is clubbed into one section.
 */
/*****************************************************************************/

/******************************************************************************
**                      Include Section                                      **
******************************************************************************/
/* Implements EAAR_PN0034_FR_0052, EAAR_PN0034_NR_0044 */
/* Included for global variable initialization values */
#include "Mcu_PBTypes.h"

/* Header file inclusion */
#include "Mcu_Ram.h"

/* Included for version check macro definitions and type definitions */
#include "Mcu.h"
/******************************************************************************
**                      Version Information                                  **
******************************************************************************/

/* AUTOSAR release version information */
#define MCU_RAM_C_AR_RELEASE_MAJOR_VERSION    \
                                           MCU_AR_RELEASE_MAJOR_VERSION_VALUE
#define MCU_RAM_C_AR_RELEASE_MINOR_VERSION    \
                                           MCU_AR_RELEASE_MINOR_VERSION_VALUE
#define MCU_RAM_C_AR_RELEASE_REVISION_VERSION  \
                                          MCU_AR_RELEASE_REVISION_VERSION_VALUE

/* File version information */
#define MCU_RAM_C_SW_MAJOR_VERSION     MCU_SW_MAJOR_VERSION_VALUE
#define MCU_RAM_C_SW_MINOR_VERSION     MCU_SW_MINOR_VERSION_VALUE

/******************************************************************************
**                      Version Check                                        **
******************************************************************************/
#if (MCU_RAM_AR_RELEASE_MAJOR_VERSION != MCU_RAM_C_AR_RELEASE_MAJOR_VERSION)
  #error "Mcu_Ram.c : Mismatch in Release Major Version"
#endif

#if (MCU_RAM_AR_RELEASE_MINOR_VERSION != MCU_RAM_C_AR_RELEASE_MINOR_VERSION)
  #error "Mcu_Ram.c : Mismatch in Release Minor Version"
#endif

#if (MCU_RAM_AR_RELEASE_REVISION_VERSION != \
                                   MCU_RAM_C_AR_RELEASE_REVISION_VERSION)
  #error "Mcu_Ram.c : Mismatch in Release Revision Version"
#endif

#if (MCU_RAM_SW_MAJOR_VERSION != MCU_RAM_C_SW_MAJOR_VERSION)
  #error "Mcu_Ram.c : Mismatch in Software Major Version"
#endif

#if (MCU_RAM_SW_MINOR_VERSION != MCU_RAM_C_SW_MINOR_VERSION)
  #error "Mcu_Ram.c : Mismatch in Software Minor Version"
#endif
/*Implements EAAR_PN0034_NR_0026 */
/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message      : (2:3211) The global identifier is defined here but is not   */
/*                not used in this translation unit.                          */
/* Rule         : No Rule                                                     */
/* Justification: As per AUTOSAR, all global variables extern declaration     */
/*                shall be given in Mcu_Ram.h                                 */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(2:3211)-1 and                            */
/*                END Msg(2:3211)-1 tags in the code.                         */
/******************************************************************************/

/******************************************************************************
**                         Global Data                                       **
******************************************************************************/
#define MCU_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
/* START Msg(2:3211)-1 */
/* Implements MCU_ESDD_UD_050, MCU200, MCU202 */
/* Implements EAAR_PN0034_FR_0019, EAAR_PN0034_FR_0021 */
/* Global variable to store the config pointer */
P2CONST(Mcu_ConfigType, MCU_VAR, MCU_CONFIG_CONST)Mcu_GpConfigPtr = NULL_PTR;

/* Global pointer variable for MCU Clock Setting configuration */
P2CONST(Mcu_ClockSetting, MCU_VAR, MCU_CONFIG_CONST)Mcu_GpClockSetting =
                                                                       NULL_PTR;

/* Global pointer variable for MCU RAM Setting configuration */
P2CONST(Mcu_RamSetting, MCU_VAR, MCU_CONFIG_CONST)Mcu_GpRamSetting = NULL_PTR;

/* Global pointer variable for MCU RAM Setting configuration */
P2CONST(Mcu_ModeSetting, MCU_VAR, MCU_CONFIG_CONST)Mcu_GpModeSetting = NULL_PTR;

/* Global pointer variable for MCU ECM Setting configuration */
P2CONST(Mcu_EcmSetting, MCU_VAR, MCU_CONFIG_CONST)Mcu_GpEcmSetting = NULL_PTR;

#if(STD_ON == MCU_GTM_SUPPORT)
P2CONST(Mcu_GTMCMUClockSetting, MCU_VAR, MCU_CONFIG_CONST)
                                             Mcu_GpGTMCMUClockSetting= NULL_PTR;
#endif
/* END Msg(2:3211)-1 */
#define MCU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define MCU_START_SEC_VAR_INIT_BOOLEAN
#include "MemMap.h"
/* Implements MCU_ESDD_UD_036*/
#if (STD_ON == MCU_DEV_ERROR_DETECT )
/* START Msg(2:3211)-1 */
/* Implements MCU_ESDD_UD_051 */
/* Global variable to store Initialization status of MCU Driver */
VAR(boolean, MCU_INIT_DATA) Mcu_GblDriverStatus = MCU_UNINITIALIZED;
/* END Msg(2:3211)-1 */
#endif

/* Implements MCU_ESDD_UD_029 */
#if (STD_ON == MCU_GET_RAM_STATE_API )
/* START Msg(2:3211)-1 */
/* Global variable to store ram status of MCU Driver */
VAR(volatile boolean, MCU_INIT_DATA) Mcu_GblRAMInitStatus = MCU_ZERO;
/* END Msg(2:3211)-1 */
#endif
#define MCU_STOP_SEC_VAR_INIT_BOOLEAN
#include "MemMap.h"

#define MCU_START_SEC_VAR_INIT_8
#include "MemMap.h"
/* START Msg(2:3211)-1 */
/* Global variable to  store the ResetReasonStore call of MCU Driver */
VAR(uint8, MCU_INIT_DATA)Mcu_GucMulRstReasonStoreCall = (uint8)MCU_ZERO;
#define MCU_STOP_SEC_VAR_INIT_8
#include "MemMap.h"
/* END Msg(2:3211)-1 */
#define MCU_START_SEC_VAR_INIT_16
#include "MemMap.h"

/* START Msg(2:3211)-1 */
/* Global variable to store Last Reset raw value */
 VAR(uint16, MCU_INIT_DATA)Mcu_GusLastResetRawValue = (uint16)MCU_ZERO;
/* Global variable to store Last Reset reason status */
 VAR(uint16, MCU_INIT_DATA)Mcu_GusLastResetReason = (uint16)MCU_ZERO;
/* END Msg(2:3211)-1 */
#define MCU_STOP_SEC_VAR_INIT_16
#include "MemMap.h"

#if (STD_ON == MCU_LOCKSTEP_SELFDIAGNOSTIC_TEST)
#define MCU_START_SEC_VAR_INIT_32
#include "MemMap.h"
/* START Msg(2:3211)-1 */
 /* Variable to read the CMPTST0 register value for
    Mcu_LockStepSelfDiagnosticTest API */
 VAR(uint32, MCU_INIT_DATA)Mcu_GulTestCompValue = (uint32)MCU_ZERO;
/* END Msg(2:3211)-1 */
#define MCU_STOP_SEC_VAR_INIT_32
#include "MemMap.h"
#endif

/******************************************************************************
**                      Function Definitions                                 **
******************************************************************************/

/******************************************************************************
**                          End of File                                      **
******************************************************************************/
