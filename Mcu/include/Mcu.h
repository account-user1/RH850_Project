/*===========================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                      */
/* Module       = Mcu.h                                                      */
/* $Revision: 368218 $                                                       */
/* $Date: 2017-02-24 14:26:03 +0000 (Fri, 24 Feb 2017) $                     */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright(c) 2015-2016 Renesas Electronics Corporation                    */
/*===========================================================================*/
/* Purpose:                                                                  */
/* This file contains API function prototypes of MCU Driver                  */
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
 * V1.0.1:  02-Feb-2016 : Following changes are made:
 *                        1. As per JIRA ID ARDAAAF-352, removed the macro
 *                           Mcu_GetVersionInfo and added the declaration for
 *                           Mcu_GetVersionInfo API.
 *                        2. As per the requiement EAAR_PN0034_FR_0055,
 *                           hardecoded values of the macros
 *                           MCU_SW_MAJOR_VERSION, MCU_SW_MINOR_VERSION and
 *                           MCU_SW_PATCH_VERSION are replaced with the macro
 *                           values from the Mcu_cfg.h file.
 *                        3. Copyright Information is updated.
 * V1.0.2:  22-Nov-2016 : Following changes are made:
 *                        1. As per JIRA ID ARDAAAF-519,added pre-compile switch
 *                           MCU_RAM_SECTOR_SETTING_CONFIGURED for
 *                           Mcu_InitRamSection API.
 *                        2. As per JIRA ID ARDAAAF-995,added memory mappings
 *                           for functions.
 *                        3. As per JIRA ID ARDAAAF-1270,added UD IDs
 *                           for traceability improvement.
 */
/*****************************************************************************/
/* Implements EAAR_PN0034_FR_0001 */
#ifndef MCU_H
#define MCU_H

/******************************************************************************
**                      Include Section                                      **
******************************************************************************/
/* To publish the type Mcu_ConfigType */
/* Implements MCU211, MCU215 */
#include "Mcu_Types.h"
#include "Mcu_Hardware.h"
/* Implements MCU_ESDD_UD_036*/
#if (MCU_DEV_ERROR_DETECT == STD_ON)
/* Only in case of DET enabled, Debug variables will be available externally*/
/* Implements MCU201 */
#include "Mcu_Debug.h"
#endif
/******************************************************************************
**                      Version Information                                  **
******************************************************************************/
/* Implements MCU_ESDD_UD_021 */
#define MCU_VENDOR_ID                           MCU_VENDOR_ID_VALUE
#define MCU_MODULE_ID                           MCU_MODULE_ID_VALUE
#define MCU_INSTANCE_ID                         MCU_INSTANCE_ID_VALUE

/* AUTOSAR release version information */
#define MCU_AR_RELEASE_MAJOR_VERSION            4
#define MCU_AR_RELEASE_MINOR_VERSION            0
#define MCU_AR_RELEASE_REVISION_VERSION         3

/* Module Software version information */
#define MCU_SW_MAJOR_VERSION                    MCU_SW_MAJOR_VERSION_VALUE
#define MCU_SW_MINOR_VERSION                    MCU_SW_MINOR_VERSION_VALUE
#define MCU_SW_PATCH_VERSION                    MCU_SW_PATCH_VERSION_VALUE
/******************************************************************************
**                      Global Symbols                                       **
******************************************************************************/
/* Implements MCU_ESDD_UD_073 */
/* Implements MCU112, MCU012 */
/* Service IDs */
/* Service Id of Mcu_Init API */
#define MCU_INIT_SID                            (uint8)0x00
/* Service Id of Mcu_InitRamSection API */
#define MCU_INITRAMSECTION_SID                  (uint8)0x01
/* Service Id of Mcu_InitClock API */
#if( STD_ON == MCU_INIT_CLOCK )
#define MCU_INITCLOCK_SID                       (uint8)0x02
#endif /*( STD_ON == MCU_INIT_CLOCK )*/
/* Service Id of Mcu_DistributePllClock API */
#if ( STD_OFF == MCU_NO_PLL )
#define MCU_DISTRIBUTEPLLCLOCK_SID              (uint8)0x03
#endif /*( STD_OFF == MCU_NO_PLL )*/
/* Service Id of Mcu_GetPllStatus API */
#define MCU_GETPLLSTATUS_SID                    (uint8)0x04
/* Service Id of Mcu_GetResetReason API */
#define MCU_GETRESETREASON_SID                  (uint8)0x05
/* Service Id of Mcu_GetResetRawValue API */
#define MCU_GETRESETRAWVAULE_SID                (uint8)0x06
/* Service Id of Mcu_PerformReset API */
#if( STD_ON == MCU_PERFORM_RESET_API )
#define MCU_PERFORMRESET_SID                    (uint8)0x07
#endif/*( STD_ON == MCU_PERFORM_RESET_API )*/
/* Service Id of Mcu_SetMode API */
#define MCU_SETMODE_SID                         (uint8)0x08
/* Service Id of Mcu_GetVersionInfo API */
#if( STD_ON == MCU_VERSION_INFO_API )
#define MCU_GETVERSIONINFO_SID                  (uint8)0x09
#endif/*( STD_ON == MCU_VERSION_INFO_API )*/
/* Implements MCU_ESDD_UD_029 */
/* Service Id of Mcu_GetRamState API */
#if ( STD_ON == MCU_GET_RAM_STATE_API )
#define MCU_GETRAMSTATE_SID                     (uint8)0x0A
#endif/*( STD_ON == MCU_GET_RAM_STATE_API )*/

/******************************************************************************
**                      DET Error Codes                                      **
******************************************************************************/

/* Implements MCU_ESDD_UD_046 */
/* DET Code to report NULL pointer passed to Mcu_Init API */
#define MCU_E_PARAM_CONFIG                      (uint8)0x0A

/* Implements MCU_ESDD_UD_047 */
/* DET Code for invalid Clock Setting */
#define MCU_E_PARAM_CLOCK                       (uint8)0x0B

/* Implements MCU_ESDD_UD_041 */
/* DET Code for invalid RAM Section handle */
#define MCU_E_PARAM_RAMSECTION                  (uint8)0x0D

/* Implements MCU_ESDD_UD_048 */
/* DET Code for invalid Operation Mode */
#define MCU_E_PARAM_MODE                        (uint8)0x0C

/* Implements MCU_ESDD_UD_042 */
/* DET Code to report that PLL Clock is not locked */
#define MCU_E_PLL_NOT_LOCKED                    (uint8)0x0E

/* Implements MCU_ESDD_UD_044 */
/* DET code to report uninitialized state */
#define MCU_E_UNINIT                            (uint8)0x0F

/* Implements MCU_ESDD_UD_043 */
/* DET code to report invalid database */
#define MCU_E_INVALID_DATABASE                  (uint8)0xED

/* Implements MCU_ESDD_UD_045 */
/* DET code to report invalid pointer passed to the Mcu_GetVersionInfo */
#define MCU_E_PARAM_POINTER                     (uint8)0x10

/* Service Id of Mcu_EcmReleaseErrorOutPin API */
#define MCU_RELEASEERROROUTPIN_SID               (uint8)0x11

/******************************************************************************
**                      Global Data Types                                    **
******************************************************************************/

/******************************************************************************
**                      Function Prototypes                                  **
******************************************************************************/
#define MCU_START_SEC_PUBLIC_CODE
#include "MemMap.h"
extern FUNC(void, MCU_PUBLIC_CODE) Mcu_Init
(P2CONST(Mcu_ConfigType, AUTOMATIC, MCU_APPL_CONST) ConfigPtr);

#if (STD_ON == MCU_RAM_SECTOR_SETTING_CONFIGURED)
extern FUNC(Std_ReturnType, MCU_PUBLIC_CODE) Mcu_InitRamSection
(Mcu_RamSectionType RamSection);
#endif

#if (STD_ON == MCU_VERSION_INFO_API)
extern FUNC(void,MCU_PUBLIC_CODE) Mcu_GetVersionInfo
(P2VAR(Std_VersionInfoType, AUTOMATIC, MCU_APPL_CONST) versioninfo);
#endif

/* Implements MCU_ESDD_UD_025 */
#if (MCU_INIT_CLOCK == STD_ON)
extern FUNC(Std_ReturnType, MCU_PUBLIC_CODE) Mcu_InitClock
(Mcu_ClockType ClockSetting);
#endif

#if ( STD_OFF == MCU_NO_PLL )
extern FUNC(void, MCU_PUBLIC_CODE) Mcu_DistributePllClock (void);
#endif /*( STD_OFF == MCU_NO_PLL )*/

extern FUNC(Mcu_PllStatusType, MCU_PUBLIC_CODE) Mcu_GetPllStatus (void);

extern FUNC(Mcu_ResetType, MCU_PUBLIC_CODE) Mcu_GetResetReason (void);

extern FUNC(Mcu_RawResetType, MCU_PUBLIC_CODE) Mcu_GetResetRawValue (void);
/* Implements MCU_ESDD_UD_028 */
#if (MCU_PERFORM_RESET_API == STD_ON)
extern FUNC(void, MCU_PUBLIC_CODE) Mcu_PerformReset (void);
#endif

extern FUNC(void, MCU_PUBLIC_CODE) Mcu_SetMode (Mcu_ModeType McuMode);

#if (MCU_GET_RAM_STATE_API == STD_ON)
extern FUNC(Mcu_RamStateType, MCU_PUBLIC_CODE) Mcu_GetRamState (void);
#endif /* (MCU_GET_RAM_STATE_API == STD_ON) */

#if ( STD_ON == MCU_PERFORM_RESET_API)
extern FUNC(void, MCU_PUBLIC_CODE)MCU_RESET_CALLOUT(void);
#endif

extern FUNC(void, MCU_PUBLIC_CODE) Mcu_EcmReleaseErrorOutPin(void);

#define MCU_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
/******************************************************************************
**                      Global Data                                          **
******************************************************************************/
#define MCU_START_SEC_DBTOC_DATA_UNSPECIFIED
#include "MemMap.h"
/* Implements MCU_ESDD_UD_020 */
/* Structure for MCU Init configuration */
extern CONST(Mcu_ConfigType, MCU_CONST) \
             Mcu_GstConfiguration[MCU_MAX_CONFIG_SETTING];
#define MCU_STOP_SEC_DBTOC_DATA_UNSPECIFIED
#include "MemMap.h"

#endif /* MCU_H */

/******************************************************************************
**                      End of File                                          **
******************************************************************************/
