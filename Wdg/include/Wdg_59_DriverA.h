/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Wdg_59_DriverA.h                                            */
/* $Revision: 365573 $                                                        */
/* $Date: 2017-02-20 18:24:58 +0000 (Mon, 20 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision of API and database declaration, Service Id and DET error Macros */
/* and Module version information Macros.                                     */
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
 *                           1. As per ticket ARDAAAF-352, removed the macro
 *                              Wdg_59_DriverA_GetVersionInfo.
 *                           2. As per ticket ARDAAAF-352, added the
 *                              declaration of Wdg_59_DriverA_GetVersionInfo.
 *                           3. Typecasting done for macros to avoid QAC
 *                              warning.
 *                           4. Copyright information updated.
 *
 * V2.0.0:  20-Feb-2017    : The following changes are made :
 *                           1. As per ticket ARDAAAF-976, file adapted from
 *                              P1x.
 *                           2. As per ticket ARDAAAF-1435, Comments added for
 *                              traceability.
 *                           3. As per ticket ARDAAAF-942, protected all the
 *                              macros defined by appending U,UL accordingly.
 */
/******************************************************************************/
#ifndef WDG_59_DRIVERA_H
#define WDG_59_DRIVERA_H

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/

/* Implements WDG149,WDG150,WDG151*/
/* Implements EAAR_PN0034_FR_0001 */
/* To publish the type Wdg_59_DriverA_ConfigType */
#include "Wdg_59_DriverA_Types.h"
/* Inclusion for the tool generated macros */
#include "Wdg_59_DriverA_Cfg.h"
/* Included for Notification declarations */
#include "Wdg_59_DriverA_Cbk.h"
/* Included for Register Write Verify options */
#include "Wdg_59_DriverA_RegWrite.h"

#if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT )
/* Only in case of DET enabled, Debug variables will be available externally */
#include "Wdg_59_DriverA_Debug.h"
#endif

/*******************************************************************************
**                        Version Information                                 **
*******************************************************************************/
#define WDG_59_DRIVERA_VENDOR_ID    WDG_59_DRIVERA_VENDOR_ID_VALUE
#define WDG_59_DRIVERA_MODULE_ID    WDG_59_DRIVERA_MODULE_ID_VALUE
/* Implements WDG117_Conf */
#define WDG_59_DRIVERA_INSTANCE_ID  WDG_59_DRIVERA_INSTANCE_ID_VALUE

/* AUTOSAR release version information */
#define WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION    4U
#define WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION    0U
#define WDG_59_DRIVERA_AR_RELEASE_REVISION_VERSION 3U

/* Module Software version information */
#define WDG_59_DRIVERA_SW_MAJOR_VERSION   WDG_59_DRIVERA_SW_MAJOR_VERSION_VALUE
#define WDG_59_DRIVERA_SW_MINOR_VERSION   WDG_59_DRIVERA_SW_MINOR_VERSION_VALUE
#define WDG_59_DRIVERA_SW_PATCH_VERSION   WDG_59_DRIVERA_SW_PATCH_VERSION_VALUE

/*******************************************************************************
**                      DET ERROR CODES                                       **
*******************************************************************************/
/* Implements WDG010 */
/*
 * Following error will be reported when API service is used in wrong context
 * (For eg. When Trigger / SetMode function is invoked without initialization).
 */
/* Implements AR_PN0064_FR_0036 */
#define WDG_59_DRIVERA_E_DRIVER_STATE       (uint8) 0x10U

/*
 * Following error will be reported when API service is called with wrong /
 * inconsistent parameter(s).
 */
#define WDG_59_DRIVERA_E_PARAM_MODE         (uint8) 0x11U

/*
 * Following error will be reported when API service is called with wrong /
 * inconsistent parameter(s).
 */
#define WDG_59_DRIVERA_E_PARAM_CONFIG       (uint8) 0x12U

/*
 * Following error will be reported when API Wdg_SetTriggerCondition is called
 * with timeout value greater than the maximum timeout value.
 */
#define WDG_59_DRIVERA_E_PARAM_TIMEOUT      (uint8) 0x13U

/*
 * Following error will be reported when Wdg_GetVersionInfo API is invoked with
 * a null pointer.
 */
#define WDG_59_DRIVERA_E_PARAM_POINTER      (uint8) 0x14U

/*
 * Following error will be reported when Watchdog driver database does not
 * exist or exist in invalid location.
 */
#define WDG_59_DRIVERA_E_INVALID_DATABASE   (uint8) 0xF1U

/*******************************************************************************
**                      API Service Id Macros                                 **
*******************************************************************************/
/* Service ID of Watchdog Driver Initialization API. */
#define WDG_59_DRIVERA_INIT_SID             (uint8) 0x00U

/*
 * Service ID of SetMode API which switches current watchdog mode to the
 * Watchdog mode defined by the parameter ModeSet.
 */
#define WDG_59_DRIVERA_SETMODE_SID              (uint8) 0x01U

/* Service ID of Trigger condition API which triggers the Watchdog Hardware. */
#define WDG_59_DRIVERA_SETTRIGGERCONDITION_SID  (uint8) 0x03U

/* Service ID of Version Information API. */
#define WDG_59_DRIVERA_GETVERSIONINFO_SID       (uint8) 0x04U

/* Api ID of TRIGGERFUNCTION_ISR. */
#define WDG_59_DRIVERA_TRIGGERFUNCTION_ISR_ID    (uint8)0x06U

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#define WDG_59_DRIVERA_START_SEC_PUBLIC_CODE
#include "MemMap.h"

#if (STD_ON == WDG_59_DRIVERA_VERSION_INFO_API )
extern FUNC(void, WDG_59_DRIVERA_PUBLIC_CODE) Wdg_59_DriverA_GetVersionInfo
(P2VAR(Std_VersionInfoType, AUTOMATIC, WDG_59_DRIVERA_APPL_DATA) versioninfo);
#endif

/* External Declaration for Watchdog Initialization API. */
extern FUNC(void, WDG_59_DRIVERA_PUBLIC_CODE) Wdg_59_DriverA_Init
  (P2CONST(Wdg_59_DriverA_ConfigType, AUTOMATIC, WDG_59_DRIVERA_APPL_CONST)
                                                                    ConfigPtr);

/* External Declaration for Watchdog SetMode API. */
extern FUNC(Std_ReturnType, WDG_59_DRIVERA_PUBLIC_CODE) Wdg_59_DriverA_SetMode
  (WdgIf_ModeType Mode);

/* External Declaration for Watchdog Set Trigger Condition API. */
extern FUNC(void, WDG_59_DRIVERA_PUBLIC_CODE)
                          Wdg_59_DriverA_SetTriggerCondition(uint16 Luctimeout);

#define WDG_59_DRIVERA_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#define WDG_59_DRIVERA_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"
/* External Declaration for Watchdog database configuration set. */
extern CONST(Wdg_59_DriverA_ConfigType, WDG_59_DRIVERA_CONFIG_CONST)
                                               Wdg_59_DriverA_GstConfiguration;

#define WDG_59_DRIVERA_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

#endif /* WDG_59_DRIVERA_H */

/*******************************************************************************
**                          End Of File                                       **
*******************************************************************************/
