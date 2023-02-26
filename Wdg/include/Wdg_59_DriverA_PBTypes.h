/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Wdg_59_DriverA_PBTypes.h                                    */
/* $Revision: 366491 $                                                        */
/* $Date: 2017-02-22 08:25:41 +0000 (Wed, 22 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the type definitions of Post Build time Parameters      */
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
 * V1.0.0:  07-Aug-2015    : Initial Version
 *
 * V1.0.1:  28-Jan-2016    : As part of V4.01.00 release, the following changes
 *                           are made:
 *                           1. As per ticket ARDAAAF-324, added macro for
 *                              read back states.
 *                           2. As per ticket ARDAAAF-324, added macro
 *                              WDG_59_DRIVERA_READBACKTEST for verifying the
 *                              register value.
 *                           3. Updated macro WDG_59_DRIVERA_DBTOC_VALUE for
 *                              avoiding QAC warning
 *                           4. Copyright information updated.
 *
 * V2.0.0:  22-Feb-2017    : The following changes are made :
 *                           1. As per ticket ARDAAAF-976, file adapted from
 *                              P1x.
 *                           2. As per ticket ARDAAAF-1435, Comments added for
 *                              traceability.
 *                           3. Critical memory section macros are added.
 *                           4. Macro WDG_59_DRIVERA_DBTOC_VALUE updated to
 *                              avoid QAC warning.
 *                           5. As per ticket ARDAAAF-1714, QAC and MISRA
 *                              warnings fixed/Justified.
 *                           6. As per JIRA ID ARDAAAF-469, macro value
 *                              WDG_59_DRIVERA_COUNTER_ZERO changed to UL
 *                           7. As per ticket ARDAAAF-942, protected all the
 *                              macros defined by appending U,UL accordingly.
 */
/******************************************************************************/
/* Implements EAAR_PN0034_FR_0020 */
#ifndef WDG_59_DRIVERA_PBTYPES_H
#define WDG_59_DRIVERA_PBTYPES_H

/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* Included for module version information */
#include "Wdg_59_DriverA.h"
/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3412) Macro defines an unrecognised code-fragment       */
/* Rule          : MISRA-C:2004 Rule                                          */
/* Justification : Semicolon is added to avoid compilation warnings and       */
/*                 additional QAC warning.                                    */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3412)-1 and                           */
/*                 END Msg(4:3412)-1 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* Implements WDG159 */
/* AUTOSAR release version information */
#define WDG_59_DRIVERA_PBTYPES_AR_RELEASE_MAJOR_VERSION \
                                        WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION
#define WDG_59_DRIVERA_PBTYPES_AR_RELEASE_MINOR_VERSION \
                                        WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION
#define WDG_59_DRIVERA_PBTYPES_AR_RELEASE_REVISION_VERSION \
                                     WDG_59_DRIVERA_AR_RELEASE_REVISION_VERSION

/* Module Software version information */
#define WDG_59_DRIVERA_PBTYPES_SW_MAJOR_VERSION  WDG_59_DRIVERA_SW_MAJOR_VERSION
#define WDG_59_DRIVERA_PBTYPES_SW_MINOR_VERSION  WDG_59_DRIVERA_SW_MINOR_VERSION

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
/* Type definition for trigger mode */
#define WDG_59_DRIVERA_WINDOW          1U

/* Macros for watchdog driver execution area */
#define WDG_59_DRIVERA_RAM             0U
#define WDG_59_DRIVERA_ROM             1U

/* General defines */
#define WDG_59_DRIVERA_DBTOC_VALUE \
                          (((uint32)WDG_59_DRIVERA_VENDOR_ID << 22) | \
                           ((uint32)WDG_59_DRIVERA_MODULE_ID << 14) | \
                     ((uint32)WDG_59_DRIVERA_SW_MAJOR_VERSION << 8) | \
                     ((uint32)WDG_59_DRIVERA_SW_MINOR_VERSION << 3))

/*
 * Value to be written to WDTAWDTE / WDTAEVAC register to clear and restart
 * the timer.
 */
#define WDG_59_DRIVERA_RESTART         (uint8)0xACU

/* Macro for compare with zero,one,three */
#define WDG_59_DRIVERA_ZERO            (uint8)0x00U
#define WDG_59_DRIVERA_ONE             (uint8)0x01U
#define WDG_59_DRIVERA_THREE           (uint8)0x03U

/* Macro for covert microseconds to milliseconds */
#define WDG_59_DRIVERA_THOUSAND           (uint16)0x03E8U

/* Mask for WDTAMD Register */
#define WDG_59_DRIVERA_WDTAMD_MASK   (uint8)0x7FU

/* Implements AR_PN0064_FR_0038 */
/* 75% interrupt mask values */
#define WDG_59_DRIVERA_75INTERRUPT_MASK      (uint8)0x08U

/* WIE bit mask value */
#define WDTAMD_WIE_MASK                (uint8)0x08U

/* Watchdog error type macro */
#define WDG_59_DRIVERA_RESET_MODE      0U
#define WDG_59_DRIVERA_NMI_MODE        1U

/* Mask for WDTAWDTE Register */
#define WDG_59_DRIVERA_WDTAWDTE_MASK   (uint8)0xFFU

/* Mask for WDTAEVAC Register */
#define WDG_59_DRIVERA_WDTAEVAC_MASK   (uint8)0xFFU

/* Mask for EIC Register */
#define WDG_EIC_EIMK_MASK              (uint16)0x0080U

/* Mask for WDTIMR Register */
#define WDG_WDTIMR_MASK              (uint32)0xFFFFFFFFUL

/* Implements AR_PN0064_FR_0038 */
/* WUF0 and WUFC0 register mask values for 75% Interrupt (INTWDTA0) */
#define WDG_59_DRIVERA_INT_MASKVALUE    (uint32)0x00000100UL

 #define WDG_59_DRIVERA_DEM_TYPE Dem_EventStatusType

/* Implements AR_PN0064_FR_0051 */
/* WDG_59_DRIVERA read back states  */
#define WDG_59_DRIVERA_READBACK_DISABLED            0U
#define WDG_59_DRIVERA_READBACK_INIT_ONLY           1U
#define WDG_59_DRIVERA_READBACK_RUNTIME_ONLY        2U
#define WDG_59_DRIVERA_READBACK_INIT_AND_RUNTIME    3U
/* MISRA Violation: START Msg(4:3412)-1 */
#define WDG_59_DRIVERA_READBACKTEST(regaddr, compdata) \
                                                   if ((regaddr) != (compdata))\
{ \
  Dem_ReportErrorStatus(WDG_59_DRIVERA_E_READBACK_FAILURE, \
                                        DEM_EVENT_STATUS_FAILED); \
}
/* END Msg(4:3412)-1 */
/*
 * Value written to Wdg_59_DriverA_GulTiggerCounter to avoid scalar division
 * by zero
 */
#define WDG_59_DRIVERA_COUNTER_ZERO              0x00000000UL

/*******************************************************************************
**               SchM Critical Section Protection Macros                      **
*******************************************************************************/
/* Implements EAAR_PN0034_FR_0061 */
#define WDG_59_DRIVERA_ENTER_CRITICAL_SECTION(Exclusive_Area)\
                                   SchM_Enter_Wdg_59_DriverA_##Exclusive_Area()
#define WDG_59_DRIVERA_EXIT_CRITICAL_SECTION(Exclusive_Area)\
                                   SchM_Exit_Wdg_59_DriverA_##Exclusive_Area()

#endif /* WDG_59_DRIVERA_PBTYPES_H */

/*******************************************************************************
**                         End of File                                        **
*******************************************************************************/
