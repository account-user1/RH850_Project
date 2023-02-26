/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Fls_Cfg.h                                                   */
/* $Revision: 507604 $                                                        */
/* $Date: 2018-01-05 12:24:14 +0530 (Fri, 05 Jan 2018) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2018 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains pre-compile time parameters.                            */
/* AUTOMATICALLY GENERATED FILE - DO NOT EDIT                                 */
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
 * V1.0.0:  06-Aug-2015: Initial Version
 *
 * V1.0.1:  29-Mar-2016:   : As part of P1x-C V4.01.00, following changes are
 *                           done:
 *                          1) As per JIRA #ARDAAAF-290,
 *                             IsBooleanParameterEnabledOrDisabled is updated
 *                             for path information in error report.
 *                          2) Removed the following macros:
 *                             FLS_FLASH_ACCESS, FLS_BLANK_CHECK,
 *                             CF related macros, FLS_E_UNEXPECTED_FLASH_ID.
 *                          3) Added the following macros:
 *                             FLS_ERASE_TIMEOUT_COUNT, FLS_WRITE_TIMEOUT_COUNT,
 *                             FLS_INTERRUPT_MODE, FLS_RESUME_API,
 *                             FLS_BLANKCHECK_TIMEOUT_COUNT, FLS_SUSPEND_API,
 *                             FLS_FACI_ECC_CHECK, FLS_LOOP_COUNT,
 *                             FLS_USE_WV_ERROR_INTERFACE, FLS_E_ECC_FAILED,
 *                             FLS_E_HW_FAILURE, FLS_DF_SECTOR_START_ADDRESS,
 *                             FLS_FHVE_REGS, FLS_DF_POOL_SIZE,
 *                             FLS_FWCOPY_SUPPORTED.
 *
 * V1.0.2:  27-Feb-2017:   : The following changes are made:
 *                          1) W.r.t JIRA #ARDAAAF-907, added macro
 *                             FLS_AR_VERSION.
 *                          2) W.r.t JIRA #ARDAAAF-1133, comments for macros
 *                             FLS_DF_POOL_SIZE, FLS_DF_TOTAL_SIZE and
 *                             FLS_CPU_FREQUENCY_MHZ are improved.
 *                             Macro FLS_DF_TOTAL_BLOCKS generation is removed.
 *                          3) W.r.t JIRA #ARDAAAF-559, Macros FLS_WRITE_VERIFY
 *                             FLS_USE_WV_ERROR_INTERFACE are added.
 *                          4) W.r.t JIRA #ARDAAAF-770, Macro FACIFRTEINT is
 *                             typecasted.
 *                          5) W.r.t ARDAAAF-1482, validation for
 *                             FlsJobEndNotification, FlsJobErrorNotification,
 *                             FlsEccSedNotification and FlsEccDedNotification,
 *                             FlsWriteVerifyErrorInterface are updated
 *                          6) As part of ARDAAAF-907,Removed validation for
 *                             parameter  FLS_INTERRUPT_MODE
 *                          7) W.r.t JIRA #ARDAAAF-1879, Macro FLS_DF_TOTAL_SIZE
 *                             value calculation updated.
 *                          8) W.r.t JIRA #ARDAAAF-901, removed Macro FACI_UNIT
 * Ver4.02.00.D_FLS_HF001 : 25-July-2017 : Related Tickets :
 *                        JIRA #ARDAAAF-2806: Modification Info :
 *                        1. Changed the parameter name  FlsFdlCpuFrequency
 *                           to FlsCpuFrequency
 *                        2. Modified "Destination_Ref" path for
 *                           "FlsCpuFrequency"
 *                        : Modification Info Ends :
 */
/******************************************************************************/
#ifndef FLS_CFG_H
#define FLS_CFG_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "MemIf_Types.h"
/*******************************************************************************
**                      Macro definitions                                     **
*******************************************************************************/
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* FLS SW Major Version */
#define FLS_SW_MAJOR_VERSION_VALUE              1U
/* FLS SW Minor Version */
#define FLS_SW_MINOR_VERSION_VALUE              0U
/* FLS SW Revision Version */
#define FLS_SW_PATCH_VERSION_VALUE              2U
/* FLS AR Major Version */
#define FLS_AR_RELEASE_MAJOR_VERSION_VALUE      4U
/* FLS AR Minor Version */
#define FLS_AR_RELEASE_MINOR_VERSION_VALUE      0U
/* FLS AR Revision Version */
#define FLS_AR_RELEASE_REVISION_VERSION_VALUE   3U
/* FLS Module ID */
#define FLS_MODULE_ID_VALUE                     92U
/* FLS Vendor ID */
#define FLS_VENDOR_ID_VALUE                     59U
/* Instance ID of the FLS */
#define FLS_INSTANCE_ID_VALUE                   0U    /* FLS Instance ID */
/* AR version */
#define FLS_AR_VERSION                          FLS_AR_HIGHER_VERSION 
/*******************************************************************************
*                         Global Symbols                              *
*******************************************************************************/
/* Pre-compile option for development error detect */
#define FLS_DEV_ERROR_DETECT                    STD_ON 
/* Enable/Disable the Fls_GetJobResult function */
#define FLS_READIMMEDIATE_API                   STD_OFF 
/* Enable/Disable the Fls_Blankcheck function */
#define FLS_BLANKCHECK_API                      STD_ON 
/* Pre-compile option for Version information */
#define FLS_VERSION_INFO_API                    STD_OFF 
/* Enable/Disable the Fls_Cancel function */
#define FLS_CANCEL_API                          STD_ON 
/* Enable/Disable the Fls_Compare function */
#define FLS_COMPARE_API                         STD_ON 
/* Enable/Disable the Fls_SetMode function */
#define FLS_SET_MODE_API                        STD_OFF 
/* Enable/Disable the Fls_GetStatus function */
#define FLS_GET_STATUS_API                      STD_ON 
/* Enable/Disable the Fls_GetJobResult function */
#define FLS_GET_JOB_RESULT_API                  STD_ON 
/* Enable/Disable the FlsSuspend function */
#define FLS_SUSPEND_API                         STD_OFF 
/* Enable/Disable the FlsResume function */
#define FLS_RESUME_API                          STD_OFF 
/* Enable/disable the version check of inter-module dependencies */
#define FLS_VERSION_CHECK_EXT_MODULES           STD_OFF 
/* Enable/disable the Critical section protection */
#define FLS_CRITICAL_SECTION_PROTECTION         STD_ON 
/* This Parameter compiles switch to enable or disable the
  FlsTimeout Supervision */
#define FLS_TIMEOUT_MONITORING                  STD_OFF 
/* Enable/Disable the Firmware Copying procedure */
#define FLS_FWCOPY_SUPPORTED                   STD_ON
/* This Parameter compiles switch to enable or disable the
  FACI ECC Register Settings Check */
#define FLS_FACI_ECC_CHECK                      STD_ON 
/* This Parameter is a compiler switch to enable or disable the
 register write check
 WV_DISABLE - 0
 WV_INIT_ONLY - 1
 WV_INIT_RUNTIME - 2*/
#define FLS_WRITE_VERIFY                        0U
/* This Parameter compiles switch to enable or disable the
  Error Interface */
#define FLS_USE_WV_ERROR_INTERFACE              STD_OFF 
#define FLS_DF_START_VALUE                     4280287232U
/* Count value to avoid the risk of endless loops in FLS driver */
#define FLS_LOOP_COUNT                         32U
/*  Depends on FlsNumberOfSectors and FlsSectorSize */
#define FLS_DF_SECTOR_START_ADDRESS            4280287936UL
/*  Disable/Enable Job notification */
#define FLS_JOB_NOTIF_CONFIG                    STD_OFF 
/* The contents of erased flash memory cell */
#define FLS_ERASED_VALUE                        4294967295U
/*Dem Error Ids*/
#define FLS_E_COMPARE_FAILED                     \
        DemConf_DemEventParameter_FLS_E_COMPARE_FAILED
#define FLS_E_ERASE_FAILED                       \
        DemConf_DemEventParameter_FLS_E_ERASE_FAILED
#define FLS_E_READ_FAILED                        \
        DemConf_DemEventParameter_FLS_E_READ_FAILED
#define FLS_E_WRITE_FAILED                       \
        DemConf_DemEventParameter_FLS_E_WRITE_FAILED
#define FLS_E_READ_FAILED_DED                    \
        DemConf_DemEventParameter_FLS_E_READ_FAILED_DED
#define FLS_E_ECC_FAILED                         \
        DemConf_DemEventParameter_FLS_E_READ_FAILED_DED
#define FLS_E_HW_FAILURE                         \
        DemConf_DemEventParameter_FLS_E_HW_FAILURE
/* Total amount of data flash memory in blocks on hardware */
#define FLS_DF_POOL_SIZE                       1013U
/* Total amount of data flash memory in bytes configured for FLS */
/* It is generated from FlsNumberOfSectors * FlsSectorSize */
#define FLS_DF_TOTAL_SIZE                      64832U
/* Smallest amount of flash memory written that can be programmed */
#define FLS_PAGE_SIZE                          (uint8)4
/* Reference frequency for Flash Programming HW */
#define FLS_CPU_FREQUENCY_MHZ                  240U
/* FLS_DF_BLOCK_SIZE related macros */
/* Block size of data flash memory in bytes */
#define FLS_DF_BLOCK_SIZE                      64U
/* Data flash memory start address */
#define FLS_DF_BASE_ADDRESS                    4280287936UL
/* Macro to make  FHVE3 and FHVE15  Registers setting
available only for supported variants */
#define FLS_FHVE_REGS                          SUPPORTED
/* Macro for FHVE3 Register address*/
#define FLS_FHVE3                              FHVE3
/* Macro for FHVE15 Register address*/
#define FLS_FHVE15                             FHVE15
/* Macro for FLS_FACIFRTEINT Register address*/
#define FLS_FACIFRTEINT                        (uint8)FACIFRTEINT
/* Macro for FLS_FCUFAREA Register address*/
#define FLS_FCUFAREA                           FCUFAREA
/* Configuration Set Handle 0 */
#define FlsConfigSet   (&Fls_GstConfiguration[0])
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#endif /* FLS_CFG_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

