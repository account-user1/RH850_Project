/*===========================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                      */
/* Module       = Mcu_Types.h                                                */
/* $Revision: 368218 $                                                       */
/* $Date: 2017-02-24 14:26:03 +0000 (Fri, 24 Feb 2017) $                     */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright(c) 2015-2016 Renesas Electronics Corporation                    */
/*===========================================================================*/
/* Purpose:                                                                  */
/* This file contains macros, MCU type definitions and structure data types  */
/* of MCU Driver                                                             */
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
 *                        1. As per JIRA ID ARDAAAF-295, renamed MCU_WDT_RST to
 *                           MCU_WATCHDOG_RESET.
 *                        2. As per JIRA ID ARDAAAF-444, structure
 *                           Mcu_ConfigType is updated to add the global pointer
 *                           pGTMCMUClockSetting and pGTMCMUGlobalSetting for
 *                           GTM Support.
 *                        3. Copyright Information is updated.
 * V1.0.2:  07-Sep-2016 : Following changes are made:
 *                        1. As per JIRA ID ARDAAAF-477, structure
 *                           Mcu_ConfigType is updated with MCU_CLMA4_RST.
 *                        2. As per JIRA ID ARDAAAF-1302, Added pointer to
 *                           Mcu_CLMASelfDiagTest element in Mcu_ConfigType
 *                           structure and removed MCU_CLMA5_RST from
 *                           Mcu_ConfigType structure.
 *                        3. As per JIRA ID ARDAAAF-1429, structure
 *                           Mcu_ConfigType is updated with ucCvmDiagMask.
 *                        4. As per JIRA ID ARDAAAF-1460,
 *                           MCU_ECM_DELAY_TMR_OVF_RST added on enumeration
 *                           Mcu_ResetType.
 *                        5. As per JIRA ID ARDAAAF-1454, renamed the variable
 *                           ulCvmIndicationReg to ucCvmIndicationReg and
 *                           changed the type to uint8.
 *                        6. As per JIRA ID ARDAAAF-1452, updated the structure
 *                           Mcu_ConfigType with pErrorInitNotification
 *                           callback function.
 *                        7. As per JIRA ID ARDAAAF-1270,added UD IDs and
 *                           Requirements for traceability improvement.
 *
 */
/*****************************************************************************/
#ifndef MCU_TYPES_H
#define MCU_TYPES_H

/******************************************************************************
**                     Include Section                                       **
******************************************************************************/
/* Standard AUTOSAR types */
#include "Std_Types.h"

/* Included for pre-compile options */
#include "Mcu_Cfg.h"

/******************************************************************************
**                        Version Information                                **
******************************************************************************/
/* AUTOSAR release version information */
#define MCU_TYPES_AR_RELEASE_MAJOR_VERSION      MCU_AR_RELEASE_MAJOR_VERSION
#define MCU_TYPES_AR_RELEASE_MINOR_VERSION      MCU_AR_RELEASE_MINOR_VERSION
#define MCU_TYPES_AR_RELEASE_REVISION_VERSION   MCU_AR_RELEASE_REVISION_VERSION

/* File version information */
#define MCU_TYPES_SW_MAJOR_VERSION              MCU_SW_MAJOR_VERSION
#define MCU_TYPES_SW_MINOR_VERSION              MCU_SW_MINOR_VERSION
/******************************************************************************
**                      Global Data Types                                    **
******************************************************************************/
/* Implements MCU_ESDD_UD_054 */
/* Implements MCU235,MCU236 */
/* Type definition for Mcu_RawResetType used by the API Mcu_GetResetRawValue */
typedef uint16  Mcu_RawResetType;

/* Implements MCU_ESDD_UD_052 */
/* Implements MCU239,MCU240 */
/* Type definition for Mcu_RamSectionType used by the API Mcu_InitRamSection */
typedef uint32  Mcu_RamSectionType;

/* Implements MCU_ESDD_UD_055 */
/* Implements MCU237,MCU238 */
/* Type definition for Mcu_ModeType used by the API Mcu_SetMode */
typedef uint8   Mcu_ModeType;

/* Implements MCU_ESDD_UD_059 */
/* Implements MCU232,MCU233 */
/* Type definition for Mcu_ClockType used by the API Mcu_InitClock */
typedef uint8   Mcu_ClockType;

/* Implements MCU_ESDD_UD_098 */
/* Type definition for Mcu_ECMInstance used by Mcu_ConfigureEcmRamErrors API */
typedef uint8   Mcu_ECMInstance;

/* Implements MCU_ESDD_UD_079 */
/* Type definition for Mcu_CLMAInstance used by Mcu_ClmaSelfDiagnosticTest API*/
typedef uint8   Mcu_CLMAInstance;

/* Implements MCU_ESDD_UD_056 */
/* Implements MCU231,MCU230 */
/* Status value returned by the API Mcu_GetPllStatus */
typedef enum ETag_Mcu_PllStatusType
{
  MCU_PLL_LOCKED = 0,
  MCU_PLL_UNLOCKED,
  MCU_PLL_STATUS_UNDEFINED
} Mcu_PllStatusType;

/* Implements MCU_ESDD_UD_058 */
/* Implements MCU234,MCU134 */
/* Type of reset supported by the hardware */
typedef enum ETag_Mcu_ResetType
{
  MCU_POWER_ON_RESET = 0,
  MCU_TERMINAL_RESET,
  MCU_CVM_RESET,
  MCU_SW_SYS_RESET,
  MCU_WATCHDOG_RESET,
  MCU_LOCK_STEP_CORE_RST,
  MCU_PBUS_FSS_RST,
  MCU_BUS_BRIDGE_ERROR_RST,
  MCU_SAFETY_MECH_COMP_RST,
  MCU_TEMPERATURE_SENSOR_RST,
  MCU_CLMA0_RST,
  MCU_CLMA2_RST,
  MCU_CLMA3_RST,
  MCU_CLMA4_RST,
  MCU_CLMA1_RST,
  MCU_LRAM_ECC_DED_RST,
  MCU_GRAM_ECC_DED_RST,
  MCU_CACHE_RAM_EDC_RST,
  MCU_CODE_FLS_ECC_DED_RST,
  MCU_DATA_FLS_ECC_DED_RST,
  MCU_CSIH_RAM_ECC_DED_RST,
  MCU_CAN_RAM_ECC_DED_RST,
  MCU_ETH_RAM_ECC_DED_RST,
  MCU_FR_RAM_ECC_DED_RST,
  MCU_GTM_RAM_ECC_DED_RST,
  MCU_BUS_ECC_DED_RST,
  MCU_BUS_ECC_SED_RST,
  MCU_LRAM_ADDR_OVF_RST,
  MCU_GRAM_ADDR_OVF_RST,
  MCU_CODE_FLS_ADDR_OVF_RST,
  MCU_DATA_FLS_ADDR_OVF_RST,
  MCU_PERI_RAM_ECC_ADDR_OVF_RST,
  MCU_DTS_RAM_ECC_DED_RST,
  MCU_DTS_RAM_ECC_SED_RST,
  MCU_LRAM_ECC_SED_RST,
  MCU_GRAM_ECC_SED_RST,
  MCU_CODE_FLS_ECC_SED_RST,
  MCU_DATA_FLS_ECC_SED_RST,
  MCU_CSIH_RAM_ECC_SED_RST,
  MCU_CAN_RAM_ECC_SED_RST,
  MCU_ETH_RAM_ECC_SED_RST,
  MCU_FR_RAM_ECC_SED_RST,
  MCU_GTM_RAM_ECC_SED_RST,
  MCU_PE_GUARD_RST,
  MCU_GRAM_GUARD_RST,
  MCU_MEMC_GUARD_RST,
  MCU_SLAVE_GUARD_RST,
  MCU_CODE_FLS_PE_UNMAP_ACCESS_RST,
  MCU_GRAM_PE_UNMAP_ACCESS_RST,
  MCU_LPB_PE_UNMAP_ACCESS_RST,
  MCU_PBUS_UNMAP_ACCESS_RST,
  MCU_HBUS_UNMAP_ACCESS_RST,
  MCU_CODE_FLS_GVCI_UNMAP_ACCESS_RST,
  MCU_GRAM_FLS_GVCI_UNMAP_ACCESS_RST,
  MCU_RES_HBUS_UNMAP_ACCESS_RST,
  MCU_DMA_TRANSFER_RST,
  MCU_DMA_UNMAPPED_RST,
  MCU_FLS_SEQUENCE_RST,
  MCU_FLS_FACI_RST,
  MCU_ADC_PARITY_RST,
  MCU_PE_UNINTEN_EN_DIS_RST,
  MCU_UNINTEN_DEACT_USR_RST,
  MCU_UNINTEN_ACT_CFP_MODE_RST,
  MCU_UNINTEN_DEBUG_EN_DET_RST,
  MCU_UNINTEN_ACT_TESTMODE_RST,
  MCU_ECM_COMP_RST,
  MCU_ECM_DELAY_TMR_OVF_RST,
  MCU_DEBUGGER_RESET,
  MCU_SW_APPL_RESET,
  MCU_BIST_RESET,
  MCU_RESET_UNDEFINED,
  MCU_RESET_UNKNOWN
} Mcu_ResetType;

/* Implements MCU_ESDD_UD_029 */
#if (MCU_GET_RAM_STATE_API == STD_ON)
/* Implements MCU_ESDD_UD_053 */
/* Status value returned by the API Mcu_GetRamState */
typedef enum ETag_Mcu_RamStateType
{
  MCU_RAMSTATE_INVALID = 0,
  MCU_RAMSTATE_VALID
} Mcu_RamStateType;
#endif

/* Implements MCU_ESDD_UD_068 */
/* Implements MCU131, MCU031, MCU030, MCU035, MCU054 */
/* Structure for MCU Init Configuration */
typedef struct STag_Mcu_ConfigType
{
  /* Database start value */
  VAR(uint32,AUTOMATIC)                         ulStartOfDbToc;
  /*Maximum RamSector Configuration */
  VAR(uint32,AUTOMATIC)                         ulMaxRamSetting;
  /* Element to handle the detection level of voltage */
  VAR(uint8,AUTOMATIC)                          ucCvmIndicationReg;
  /* Software Reset Trigger value */
  VAR(uint8,AUTOMATIC)                          ucSWRstTrigger;
  /* Ecm Reset Configure */
  VAR(uint8,AUTOMATIC)                          ucEcmRstConf;
  /*Maximum Clock Setting configuration */
  VAR(uint8,AUTOMATIC)                          ucMaxClockSetting;
  /*Maximum Mode Setting configuration */
  VAR(uint8,AUTOMATIC)                          ucMaxModeSetting;
  /* Element to handle the CVMOUT Mask in Diag mode  */
  VAR(uint8,AUTOMATIC)                          ucCvmDiagMask;
  /* Pointer to array of MCU ECM Setting configuration */
  P2CONST(void, AUTOMATIC, MCU_CONFIG_CONST)    pEcmSetting;
  /* Pointer to MCU Clock Setting configuration */
  P2CONST(void, AUTOMATIC, MCU_CONFIG_CONST)    pClockSetting;
  /* Pointer to Ram Setting configuration */
  P2CONST(void, AUTOMATIC, MCU_CONFIG_CONST)    pRamSetting;
  /* Pointer to Mode Setting configuration */
  P2CONST(void, AUTOMATIC, MCU_CONFIG_CONST)    pModeSetting;
  /* Pointer to callback notification function */
  P2CONST(void, AUTOMATIC, MCU_CONFIG_CONST)    pMINotification;
  /* Pointer to callback notification function */
  P2CONST (void, AUTOMATIC, MCU_CONFIG_CONST )  pNMINotification;
  /* Pointer to callback notification function */
  P2CONST (void, AUTOMATIC, MCU_CONFIG_CONST )  pErrorInitNotification;
  #if(STD_ON == MCU_GTM_SUPPORT)
  /*Mcu_GTMCMUClockSetting */
  P2CONST (void, AUTOMATIC, MCU_CONFIG_CONST )  pGTMCMUClockSetting;
  /* Mcu_GTMCMUGlobalSetting */
  P2CONST (void, AUTOMATIC, MCU_CONFIG_CONST )  pGTMCMUGlobalSetting;
  #endif
  /* Implements MCU_ESDD_UD_077 */
  #if(STD_ON == MCU_CLMA_SELFDIAGNOSTIC_TEST)
  /* Mcu_CLMASelfDiagTest */
  P2CONST (void, AUTOMATIC, MCU_CONFIG_CONST )  pCLMASelfDiagTest;
  #endif

} Mcu_ConfigType;

#endif /* MCU_TYPES_H */

/******************************************************************************
**                          End Of File                                      **
******************************************************************************/
