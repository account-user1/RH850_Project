/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Wdg_59_DriverA_Ram.c                                        */
/* $Revision: 364146 $                                                        */
/* $Date: 2017-02-17 09:18:20 +0000 (Fri, 17 Feb 2017) $                      */
/*============================================================================*/
/* Implements EAAR_PN0034_NR_0018 */
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* Global RAM variable definitions for Watchdog Driver A                      */
/*                                                                            */
/*============================================================================*/
/*                                                                            */
/* Unless otherwise agreed upon in writing between your company and           */
/* Renesas Electronics Corporation the following shall apply!                 */
/*                                                                            */
/* Warranty Disclaimer                                                        */
/*                                                                            */
/* There is no warranty of any kind whatsoever granted by Renesas. Any        */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed */
/* or implied, including but not limited to those for non-infringement of     */
/* intellectual property, merchantability and/or fitness for the particular   */
/* purpose.                                                                   */
/*                                                                            */
/* Renesas shall not have any obligation to maintain, service or provide bug  */
/* fixes for the supplied Product(s) and/or the Application.                  */
/*                                                                            */
/* Each User is solely responsible for determining the appropriateness of     */
/* using the Product(s) and assumes all risks associated with its exercise    */
/* of rights under this Agreement, including, but not limited to the risks    */
/* and costs of program errors, compliance with applicable laws, damage to    */
/* or loss of data, programs or equipment, and unavailability or              */
/* interruption of operations.                                                */
/*                                                                            */
/* Limitation of Liability                                                    */
/*                                                                            */
/* In no event shall Renesas be liable to the User for any incidental,        */
/* consequential, indirect, or punitive damage (including but not limited     */
/* to lost profits) regardless of whether such liability is based on breach   */
/* of contract, tort, strict liability, breach of warranties, failure of      */
/* essential purpose or otherwise and even if advised of the possibility of   */
/* such damages. Renesas shall not be liable for any services or products     */
/* provided by third party vendors, developers or consultants identified or   */
/* referred to the User by Renesas in connection with the Product(s) and/or   */
/* the Application.                                                           */
/*                                                                            */
/*============================================================================*/
/* Environment:                                                               */
/*              Devices:        P1x-C                                         */
/*============================================================================*/
/* Implements EAAR_PN0034_NR_0056 */
/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  07-Aug-2015    : Initial Version
 *
 * V1.0.1:  11-Feb-2016    : As part of V4.01.00 release, the following changes
 *                           are made:
 *                           1. Removed hard coded initialization of
 *                              Wdg_59_DriverA_GusTiggerCounter.
 *                           2. As per ticket ARDAAAF-12, memory sections
 *                              updated.
 *                           3. Copyright information updated.
 * V2.0.0:  17-Feb-2017    : The following changes are made :
 *                           1. As per ticket ARDAAAF-976, file adapted from
 *                              P1x.
 *                           2. As per ticket ARDAAAF-1435, Comments added for
 *                              traceability.
 *                           3. As per ticket ARDAAAF-769, QAC and MISRA
 *                              warnings fixed/Justified.
 *                           4. As per ARDAAAF-1714,variable
 *                              Wdg_59_DriverA_GusTiggerCounter and
 *                              Wdg_59_DriverA_GddDriverState declared volatile.
 *                           5. As per ticket ARDAAAF-469,
 *                              Wdg_59_DriverA_GusTiggerCounter is changed to
 *                              uint32.
 */
/******************************************************************************/

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/* Implements WDG061,WDG168 */
/* Included for module version information and other types declarations */
#include "Wdg_59_DriverA.h"
/* Header file inclusion */
#include "Wdg_59_DriverA_Ram.h"
/* Included for Wdg_59_DriverA_PBTypes.h inclusion and macro definitions */
#include "Wdg_59_DriverA_PBTypes.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define WDG_59_DRIVERA_RAM_C_AR_RELEASE_MAJOR_VERSION \
                                  WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION_VALUE
#define WDG_59_DRIVERA_RAM_C_AR_RELEASE_MINOR_VERSION \
                                  WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION_VALUE
#define WDG_59_DRIVERA_RAM_C_AR_RELEASE_REVISION_VERSION \
                               WDG_59_DRIVERA_AR_RELEASE_REVISION_VERSION_VALUE

/* File version information */
#define WDG_59_DRIVERA_RAM_C_SW_MAJOR_VERSION \
                                          WDG_59_DRIVERA_SW_MAJOR_VERSION_VALUE
#define WDG_59_DRIVERA_RAM_C_SW_MINOR_VERSION \
                                          WDG_59_DRIVERA_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (WDG_59_DRIVERA_RAM_AR_RELEASE_MAJOR_VERSION != \
                                  WDG_59_DRIVERA_RAM_C_AR_RELEASE_MAJOR_VERSION)
  #error "Wdg_59_DriverA_Ram.c : Mismatch in Release Major Version"
#endif

#if (WDG_59_DRIVERA_RAM_AR_RELEASE_MINOR_VERSION != \
                                  WDG_59_DRIVERA_RAM_C_AR_RELEASE_MINOR_VERSION)
  #error "Wdg_59_DriverA_Ram.c : Mismatch in Release Minor Version"
#endif

#if (WDG_59_DRIVERA_RAM_AR_RELEASE_REVISION_VERSION != \
                               WDG_59_DRIVERA_RAM_C_AR_RELEASE_REVISION_VERSION)
  #error "Wdg_59_DriverA_Ram.c : Mismatch in Release Revision Version"
#endif

#if (WDG_59_DRIVERA_RAM_SW_MAJOR_VERSION != \
                                          WDG_59_DRIVERA_RAM_C_SW_MAJOR_VERSION)
  #error "Wdg_59_DriverA_Ram.c : Mismatch in Software Major Version"
#endif

#if (WDG_59_DRIVERA_RAM_SW_MINOR_VERSION != \
                                          WDG_59_DRIVERA_RAM_C_SW_MINOR_VERSION)
  #error "Wdg_59_DriverA_Ram.c : Mismatch in Software Minor Version"
#endif
/******************************************************************************
**                      MISRA C Rule Violations                              **
******************************************************************************/
/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message      : (2:3211) The global identifier is defined                   */
/*                here but is not used in this translation unit.              */
/* Rule         : No Rule                                                     */
/* Justification: As per AUTOSAR,all global variables with extern declaration */
/*                shall be given in Wdg_59_DriverA_Ram.h.                     */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for QAC Warning START Msg(2:3211)-1 and                */
/*                END Msg(2:3211)-1 tags in the code.                         */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message       :(2:0862) #include "MemMap.h" directive is redundant.        */
/* Rule          : No Rule                                                    */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files is done within the code.              */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.Also this is not a MISRA violation    */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
#if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT )

#define WDG_59_DRIVERA_START_SEC_VAR_INIT_8
#include "MemMap.h"
/* Implements WDG_ESDD_UD_025 */
/* Implements WDG152 */
/* Global variable to store the current watchdog driver state */
/* QAC Warning START Msg(2:3211)-1 */
VAR(volatile Wdg_59_DriverA_StatusType, WDG_59_DRIVERA_INIT_DATA)
                          Wdg_59_DriverA_GddDriverState = WDG_59_DRIVERA_UNINIT;
/* END Msg(2:3211)-1 */
#define WDG_59_DRIVERA_STOP_SEC_VAR_INIT_8
#include "MemMap.h"

#endif

#define WDG_59_DRIVERA_START_SEC_VAR_INIT_8
#include "MemMap.h"
/* Implements WDG_ESDD_UD_025 */
/* Implements WDG154 */
/* Global variable to store the current watchdog driver mode */
/* QAC Warning START Msg(2:3211)-1 */
VAR(WdgIf_ModeType, WDG_59_DRIVERA_INIT_DATA) Wdg_59_DriverA_GddCurrentMode =
                                                                 WDGIF_OFF_MODE;
/* END Msg(2:3211)-1 */
#define WDG_59_DRIVERA_STOP_SEC_VAR_INIT_8
#include "MemMap.h"

#define WDG_59_DRIVERA_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
/* Implements WDG_ESDD_UD_025 */
/* Global variable to store pointer to Configuration */
/* QAC Warning START Msg(2:3211)-1 */
P2CONST(Wdg_59_DriverA_ConfigType, AUTOMATIC,
                        WDG_59_DRIVERA_INIT_DATA)Wdg_59_DriverA_GpConfigPtr =
                                                                       NULL_PTR;
/* END Msg(2:3211)-1 */
#define WDG_59_DRIVERA_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define WDG_59_DRIVERA_START_SEC_VAR_INIT_32
#include "MemMap.h"
/* Implements WDG_ESDD_UD_025 */
/* Implements WDG153 */
/* Global variable to store the trigger counter value */
/* QAC Warning START Msg(2:3211)-1 */
VAR(volatile uint32, WDG_59_DRIVERA_INIT_DATA) Wdg_59_DriverA_GulTiggerCounter =
                                                  (uint32)WDG_59_DRIVERA_ZERO;
/* END Msg(2:3211)-1 */
#define WDG_59_DRIVERA_STOP_SEC_VAR_INIT_32
#include "MemMap.h"

/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
