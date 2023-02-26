/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Wdg_59_DriverA_Cfg.h                                        */
/* $Revision: 364667 $                                                        */
/* $Date: 2017-02-20 11:20:04 +0530 (Mon, 20 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Wdg pre-compile time configurations                     */
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
 * V1.0.0:  07-Aug-2015,  Initial Version
 *
 * V1.0.1:  13-Jan-2016,  The following changes were done:
 *                        1. Added Macro WDG_59_DRIVERA_E_READBACK_FAILURE for
 *                           DEM error reporting.
 *                        2. Added Macro WDG_59_DRIVERA_READBACK_OPTION for
 *                           readback functionality.
 *                        3. Updated copyright information.
 *
 * V1.0.2:  21-Feb-2017, The following changes were done:
 *                        1. As per ticket ARDAAAF-984, replaced the Register
 *                           ReadBack with WDG_WRITE_VERIFY.
 *                        2. As per ticket ARDAAAF-984, added the macro
 *                           WDG_USE_WV_ERROR_INTERFACE, WDG_E_REG_WRITE_VERIFY
 *                           and WDG_E_INT_INCONSISTENT.
 *                        3. As per ticket ARDAAAF-984,
 *                           WDG_59_DRIVERA_E_MODE_FAILED_REPORTING and
 *                           WDG_59_DRIVERA_E_DISABLE_REJECTED_REPORTING are
 *                           added for reporting DEM Errors.
 *
 */
/******************************************************************************/
#ifndef WDG_59_DRIVERA_CFG_H
#define WDG_59_DRIVERA_CFG_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Wdg_59_Hardware.h"
/*******************************************************************************
**                      Macro definitions                                     **
*******************************************************************************/
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* WDG_59_DRIVERA SW Major Version */
#define WDG_59_DRIVERA_SW_MAJOR_VERSION_VALUE              1U
/* WDG_59_DRIVERA SW Minor Version */
#define WDG_59_DRIVERA_SW_MINOR_VERSION_VALUE              0U
/* WDG_59_DRIVERA SW Revision Version */
#define WDG_59_DRIVERA_SW_PATCH_VERSION_VALUE              2U
/* WDG_59_DRIVERA AR Major Version */
#define WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION_VALUE      4U
/* WDG_59_DRIVERA AR Minor Version */
#define WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION_VALUE      0U
/* WDG_59_DRIVERA AR Revision Version */
#define WDG_59_DRIVERA_AR_RELEASE_REVISION_VERSION_VALUE   3U
/* WDG_59_DRIVERA Module ID */
#define WDG_59_DRIVERA_MODULE_ID_VALUE                     102U
/* WDG_59_DRIVERA Vendor ID */
#define WDG_59_DRIVERA_VENDOR_ID_VALUE                     59U
/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
/* Pre-compile option for development error detect. */
#define WDG_59_DRIVERA_DEV_ERROR_DETECT               STD_ON
/* Pre-compile option to allow or forbid disabling Watchdog Driver. */
#define WDG_59_DRIVERA_DISABLE_ALLOWED                STD_ON
/* Maximum timeout in msec to which the watchdog trigger condition can
   be initialized. */
#define WDG_59_DRIVERA_MAXIMUM_TIMEOUT                (uint16)10000
/* Initial timeout in msec for the trigger condition to be initialized
   during Init or set mode function. */
#define WDG_59_DRIVERA_INITIAL_TIMEOUT                (uint16)10000
/* Represents the watchdog driver execution area is either from
   ROM(Flash) or RAM as required with the particular microcontroller. */
#define WDG_59_DRIVERA_RUN_AREA                       WDG_59_DRIVERA_RAM
/* Pre-compile option for version info API. */
#define WDG_59_DRIVERA_VERSION_INFO_API               STD_OFF
/* Compile switch to allow/forbid VAC. */
#define WDG_59_DRIVERA_VAC_ALLOWED                    STD_ON
/* Pre-compile option for enable or disable inter-module dependencies. */
#define WDG_59_DRIVERA_VER_CHECK_EXT                  STD_OFF
/* Pre-compile option for critical section protection */
#define WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION    STD_ON
/* Pre-compile option for error notification of write verify */
#define WDG_59_DRIVERA_USE_WV_ERROR_INTERFACE         STD_OFF
/* Pre-compile option for critical section protection */
#define WDG_59_DRIVERA_INTERRUPT_CONSISTENCY_CHECK    STD_OFF
/*Pre-compile option for enable or disable following error reporting to Dem */
#define WDG_59_DRIVERA_E_DISABLE_REJECTED_REPORTING   STD_OFF
/* Pre-compile option to enable or disable mode switching error reporting to
   Dem */
#define WDG_59_DRIVERA_E_MODE_FAILED_REPORTING        STD_OFF
/* Watchdog Driver Id */
#define WDG_59_DRIVERA_INDEX                          (uint8)0
/* If error during mode switch failed, the following error is reported to DEM */
#define WDG_59_DRIVERA_E_DISABLE_REJECTED           \
                  DemConf_DemEventParameter_${DemShortName}
/* If switching between the modes is failed, the following error is reported
to DEM */
#define WDG_59_DRIVERA_E_MODE_FAILED           \
                  DemConf_DemEventParameter_${DemShortName}
/* Enable/Disable the register write verify check
   WV_DISABLE - 0U, WV_INIT_ONLY - 1U, WV_INIT_RUNTIME - 2U */
#define WDG_59_DRIVERA_WRITE_VERIFY         0U
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/* Instance ID of the WDG Component */
#define WDG_59_DRIVERA_INSTANCE_ID_VALUE       0U /* Wdg Instance ID */
/* Watchdog trigger mode */
#define WDG_59_DRIVERA_TRIGGER_MODE            WDG_59_DRIVERA_WINDOW
/* Configuration Set Handles */
#define Wdg_59_DriverA_WdgSettingsConfig      (&Wdg_59_DriverA_GstConfiguration)
/* Address of INTWDT EI Level Interrupt Control Register */
#define WDG_59_DRIVERA_WDTAEIC_ADDR           (*((volatile uint8*)0xFFFEEA10UL))
/* Address of INTWDT IMR Register */
#define WDG_59_DRIVERA_INTWDTIMR_ADDR        (*((volatile uint16*)0xFFFEEAF0UL))
/* INTWDT Interrupt enable IMR mask */
#define WDG_59_DRIVERA_INTWDTIMR_MASK            ((uint16)0xFEFF)
/* INTWDT Vector mode enable mask */
#define WDG_59_DRIVERA_INTVECTAB_MASK             ((uint8)0x0040)
/* This macro enables INTWDT Interrupt vector table mode */
#define WDG_59_DRIVERA_ENB_INTVECTAB_MODE \
                  (WDG_59_DRIVERA_WDTAEIC_ADDR |= WDG_59_DRIVERA_INTVECTAB_MASK)
/* This macro enables the INTWDTn interrupt */
#define WDG_59_DRIVERA_ENB_INTWDT_INT \
              (WDG_59_DRIVERA_INTWDTIMR_ADDR &= WDG_59_DRIVERA_INTWDTIMR_MASK)
/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#endif /* WDG_59_DRIVERA_CFG_H  */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

