/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Wdg_59_DriverA_PBcfg.c                               */
/* $Revision: 365666 $                                                        */
/* $Date: 2017-02-21 10:55:33 +0530 (Tue, 21 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains post-build time parameters.                             */
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
/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  07-Aug-2015  : Initial Version
 *
 * V1.0.1:  02-Feb-2016  : As part of P1x-C V4.01.00 release, the following
 *                          changes are made :
 *                         1. Corrected the alignment issue.
 *                         2. As per ticket ARDAAAF-290, updated macro
 *                            IsBooleanParameterEnabledOrDisabled,
 *                         3. Updated copyright information.
 *                         4. Appended 'UL' for uint32 variables and 'U' for
 *                            unsigned variables.
 * V1.0.2:  20-Feb-2017  : 1. As per ticket ARDAAAF-469, precision of time value
 *                            has been updated with values to be in microseconds
 *                            for better accuracy.
 *                         2. As per ARDAAAF-985, memory section in the global
 *                            data has been changed from
 *                            SEC_DBTOC_DATA_UNSPECIFIED to
 *                            SEC_CONFIG_DATA_UNSPECIFIED.
 *                         3. As per ARDAAAF-480,updated WdgClkSettingsFast/Slow
 *                            parameters value extraction in accordance with the
 *                            new naming convention.
 *                         4. As per ARDAAAF-469, uint16 InitTimerCountValue 
 *                            DefaultTimeValue ,SlowTimeValue,changed
 *                            to uint32.
 *
 */
/******************************************************************************/
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Wdg_59_DriverA_PBTypes.h"
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message      : (2:3211) The global identifier is defined                   */
/*                here but is not used in this translation unit.              */
/* Rule         : No Rule                                                     */
/* Justification: As per AUTOSAR,all global variables with extern declaration */
/*                shall be given in Adc_Ram.h.                                */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for QAC Warning START Msg(2:3211)-1 and                */
/*                END Msg(2:3211)-1 tags in the code.                         */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message       :(2:0862) / "MemMap.h" directive is redundant.       */
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
**                     Version Information                                    **
*******************************************************************************/
/* AUTOSAR release version information */
#define WDG_59_DRIVERA_PBCFG_C_AR_RELEASE_MAJOR_VERSION    4
#define WDG_59_DRIVERA_PBCFG_C_AR_RELEASE_MINOR_VERSION    0
#define WDG_59_DRIVERA_PBCFG_C_AR_RELEASE_REVISION_VERSION 3
/* File version information */
#define WDG_59_DRIVERA_PBCFG_C_SW_MAJOR_VERSION    1
#define WDG_59_DRIVERA_PBCFG_C_SW_MINOR_VERSION    0
/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (WDG_59_DRIVERA_PBTYPES_AR_RELEASE_MAJOR_VERSION != \
                           WDG_59_DRIVERA_PBCFG_C_AR_RELEASE_MAJOR_VERSION)
  #error "Wdg_59_DriverA_PBcfg.c : Mismatch in Release Major Version"
#endif
#if (WDG_59_DRIVERA_PBTYPES_AR_RELEASE_MINOR_VERSION != \
                           WDG_59_DRIVERA_PBCFG_C_AR_RELEASE_MINOR_VERSION)
  #error "Wdg_59_DriverA_PBcfg.c : Mismatch in Release Minor Version"
#endif
#if (WDG_59_DRIVERA_PBTYPES_AR_RELEASE_REVISION_VERSION != \
                           WDG_59_DRIVERA_PBCFG_C_AR_RELEASE_REVISION_VERSION)
  #error "Wdg_59_DriverA_PBcfg.c : Mismatch in Release Revision Version"
#endif
#if (WDG_59_DRIVERA_PBTYPES_SW_MAJOR_VERSION != \
                           WDG_59_DRIVERA_PBCFG_C_SW_MAJOR_VERSION)
  #error "Wdg_59_DriverA_PBcfg.c : Mismatch in Software Major Version"
#endif
#if (WDG_59_DRIVERA_PBTYPES_SW_MINOR_VERSION != \
                           WDG_59_DRIVERA_PBCFG_C_SW_MINOR_VERSION)
  #error "Wdg_59_DriverA_PBcfg.c : Mismatch in Software Minor Version"
#endif
/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/
#define WDG_59_DRIVERA_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"
/* Structure for Watchdog Driver Init configuration */
/* QAC Warning START Msg(2:3211)-1 */
CONST(Wdg_59_DriverA_ConfigType,WDG_59_DRIVERA_CONFIG_CONST)\
Wdg_59_DriverA_GstConfiguration =
/* END Msg(2:3211)-1 */
{
  /* ulStartOfDbToc */
  0x0ED98100UL,
  /* ulInitTimerCountValue */
  0x0000065BUL,
  /* ulSlowTimeValue */
  0x00001800UL,
  /* ulFastTimeValue */
  0x00000C00UL,
  /* ucWdtamdSlowValue */
  0x7FU,
  /* ucWdtamdFastValue */
  0x6FU,
  /* ucWdtamdDefaultValue */
  0x7FU,
  /* ddWdtamdDefaultMode */
  WDGIF_SLOW_MODE
};
#define WDG_59_DRIVERA_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

