/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Fls.h                                                       */
/* $Revision: 367439 $                                                        */
/* $Date: 2017-02-23 11:57:02 +0000 (Thu, 23 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains macros, FLS type definitions, structure data types and  */
/* API function prototypes of FLS Driver                                      */
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
 * V1.0.0:  06-Aug-2015    : Initial Version.
 *
 * V1.0.1:  07-Apr-2016    : As part of V4.01.00 release, following changes are
 *                           made:
 *                           1) Copy right year is updated.
 *                           2) As per JIRA ARDAAAF-424, code flash
 *                             functionality removed and library related
 *                             functionality are made incorporated to private
 *                             functions.
 *
 * V1.0.2:  23-Feb-2017    : The following changes are made:
 *                           1) W.r.t Jira ARDAAAF-548, return type of
 *                              Fls_Suspend API is modified.
 *                           2) W.r.t Jira ARDAAAF-907, Pre compile switches
 *                              are corrected.
 *                           3) W.r.t Jira ARDAAAF-1251, updated data type for
 *                              "TargetAddressPtr" in Fls_Read and
 *                              Fls_ReadImmediate APIs.
 */
/******************************************************************************/
#ifndef FLS_H
#define FLS_H

/*******************************************************************************
**      To support different AUTOSAR releases in a single package             **
*******************************************************************************/
#define FLS_AR_FOUR_ZERO_THREE    403

#define FLS_AR_HIGHER_VERSION     FLS_AR_FOUR_ZERO_THREE

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* To publish the standard types */
#include "Std_Types.h"
/* Included for pre-compile time parameters */
#include "Fls_Cfg.h"
/* To publish the type Fls_ConfigType */
#include "Fls_Types.h"
#if (FLS_DEV_ERROR_DETECT == STD_ON)
/* Only in case of DET enabled, Debug variables will be available externally */
#include "Fls_Debug.h"
#endif
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* Version identification */
#define FLS_VENDOR_ID              FLS_VENDOR_ID_VALUE
#define FLS_MODULE_ID              FLS_MODULE_ID_VALUE
#define FLS_INSTANCE_ID            FLS_INSTANCE_ID_VALUE


/* Functionality related to R4.0 */
/* AUTOSAR release version information */
#define FLS_AR_RELEASE_MAJOR_VERSION    4
#define FLS_AR_RELEASE_MINOR_VERSION    0
#define FLS_AR_RELEASE_REVISION_VERSION 3


/* Module Software version information */
#define FLS_SW_MAJOR_VERSION    FLS_SW_MAJOR_VERSION_VALUE
#define FLS_SW_MINOR_VERSION    FLS_SW_MINOR_VERSION_VALUE
#define FLS_SW_PATCH_VERSION    FLS_SW_PATCH_VERSION_VALUE
/*******************************************************************************
**                      API Service Id Macros                                 **
*******************************************************************************/
/* Service Id of Fls_Init */
#define FLS_INIT_SID                        (uint8)0x00
/* Service Id of Fls_Erase */
#define FLS_ERASE_SID                       (uint8)0x01
/* Service Id of Fls_Write */
#define FLS_WRITE_SID                       (uint8)0x02
/* Service Id of Fls_Cancel */
#define FLS_CANCEL_SID                      (uint8)0x03
/* Service Id of Fls_GetStatus */
#define FLS_GET_STATUS_SID                  (uint8)0x04
/* Service Id of Fls_GetJobResult */
#define FLS_GET_JOB_RESULT_SID              (uint8)0x05
/* Service Id of Fls_MainFunction */
#define FLS_MAINFUNCTION_SID                (uint8)0x06
/* Service Id of Fls_Read */
#define FLS_READ_SID                        (uint8)0x07
/* Service Id of Fls_Compare */
#define FLS_COMPARE_SID                     (uint8)0x08
/* Service Id of Fls_SetMode */
#define FLS_SET_MODE_SID                    (uint8)0x09
/* Service Id of Fls_GetVersionInfo */
#define FLS_GET_VERSION_INFO_SID            (uint8)0x10
/* Service Id of Fls_ReadImmediate */
#define FLS_READ_IMM_SID                    (uint8)0x11
/* Service Id of Fls_BlankCheck */
#define FLS_BLANK_CHECK_SID                 (uint8)0x12
/* Service Id of Fls_Suspend */
#define FLS_SUSPEND_SID                     (uint8)0x13
/* Service Id of Fls_Resume */
#define FLS_RESUME_SID                      (uint8)0x14
/*******************************************************************************
**                      DET Error Codes                                       **
*******************************************************************************/

/* A wrong parameter passed to Fls_Init API. */
#define FLS_E_PARAM_CONFIG                  (uint8)0x01

/* A wrong address passed to the APIs */
#define FLS_E_PARAM_ADDRESS                 (uint8)0x02

/* A wrong length of the address passed to the APIs */
#define FLS_E_PARAM_LENGTH                  (uint8)0x03

/* A null buffer address passed to the APIs */
#define FLS_E_PARAM_DATA                    (uint8)0x04

/* API service is used without driver initialization */
#define FLS_E_UNINIT                        (uint8)0x05

/* API service used when the driver is busy */
#define FLS_E_BUSY                          (uint8)0x06

/* DET error code to report that the erase job has failed */
#define FLS_E_VERIFY_ERASE_FAILED           (uint8)0x07

/* DET error code to report that the block is not erased for a write job */
#define FLS_E_VERIFY_WRITE_FAILED           (uint8)0x08

/*
 * DET error code to report when timeout supervision of a read, write, erase or
 * compare job failed
 */
#define FLS_E_TIMEOUT                       (uint8)0x09

/* When valid Database is not available */
#define FLS_E_INVALID_DATABASE              (uint8)0xEF

/* API Fls_GetVersionInfo invoked with a null pointer */
#define FLS_E_PARAM_POINTER                 (uint8)0x0A

/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3684) Array declared with unknown size.                 */
/* Rule          : MISRA-C:2004 Rule 8.12                                     */
/* Justification : Config array used is verified in the file which is only    */
/*                 declaration and size is configuration dependent.           */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3684)-1 and                           */
/*                 END Msg(4:3684)-1 tags in the code.                        */
/******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/* Address offset from the configured flash base address to access a certain
 * flash memory area
 */
typedef uint32 Fls_AddressType;

/* Specifies the number of bytes to read/write/erase/compare */
typedef uint32 Fls_LengthType;


/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Declaration of API "Fls_Init" */
extern FUNC(void, FLS_PUBLIC_CODE) Fls_Init
(P2CONST(Fls_ConfigType, AUTOMATIC, FLS_APPL_CONST) ConfigPtr);

/* Declaration of API "Fls_Erase" */
extern FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Erase
        (Fls_AddressType TargetAddress, Fls_LengthType Length);

/* Declaration of API "Fls_Write" */
extern FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Write
(Fls_AddressType TargetAddress,
P2CONST(uint8, AUTOMATIC, FLS_APPL_CONST) SourceAddressPtr,
Fls_LengthType Length);

/* Declaration of API "Fls_Read" */
extern FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Read
(Fls_AddressType SourceAddress, P2VAR(uint8, AUTOMATIC, FLS_APPL_CONST)
 TargetAddressPtr, Fls_LengthType Length);

#if (FLS_READIMMEDIATE_API == STD_ON)
/* Declaration of API "Fls_ReadImmediate" */
extern FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_ReadImmediate
(Fls_AddressType SourceAddress, P2VAR(uint8, AUTOMATIC, FLS_APPL_CONST)
TargetAddressPtr, Fls_LengthType Length);
#endif

#if (FLS_COMPARE_API == STD_ON)
/* Declaration of API "Fls_Compare" */
extern FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Compare
(Fls_AddressType SourceAddress, P2CONST(uint8, AUTOMATIC, FLS_APPL_CONST)
 TargetAddressPtr, Fls_LengthType Length);
#endif

#if (FLS_CANCEL_API == STD_ON)
/* Declaration of API "Fls_Cancel" */
extern FUNC(void, FLS_PUBLIC_CODE)Fls_Cancel(void);
#endif

#if (FLS_SET_MODE_API == STD_ON)
/* Declaration of API "Fls_SetMode" */
extern FUNC(void, FLS_PUBLIC_CODE) Fls_SetMode(MemIf_ModeType LenMode);
#endif

/* Declaration of API "Fls_MainFunction" */
extern FUNC(void, FLS_PUBLIC_CODE) Fls_MainFunction(void);

#if (FLS_GET_STATUS_API == STD_ON)
/* Declaration of API "Fls_GetStatus" */
extern FUNC(MemIf_StatusType, FLS_PUBLIC_CODE) Fls_GetStatus(void);
#endif

#if (FLS_GET_JOB_RESULT_API == STD_ON)
/* Declaration of API "Fls_GetJobResult" */
extern FUNC(MemIf_JobResultType, FLS_PUBLIC_CODE) Fls_GetJobResult(void);
#endif

#if (FLS_SUSPEND_API == STD_ON)
/* Declaration of API "Fls_Suspend" */
extern FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Suspend(void);
#endif

#if (FLS_RESUME_API == STD_ON)
/* Declaration of API "Fls_Resume" */
extern FUNC(void, FLS_PUBLIC_CODE) Fls_Resume(void);
#endif

#if (FLS_BLANKCHECK_API == STD_ON)
/* Declaration of API "Fls_BlankCheck" */
extern FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_BlankCheck
(Fls_AddressType TargetAddress, Fls_LengthType Length);
#endif

#if (FLS_VERSION_INFO_API == STD_ON)
/* Declaration of API "Fls_GetVersionInfo" */
extern FUNC(void, FLS_PUBLIC_CODE) Fls_GetVersionInfo
(P2VAR(Std_VersionInfoType, AUTOMATIC, FLS_APPL_DATA)versioninfo);
#endif

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#define FLS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"
/* MISRA Violation: START Msg(4:3684)-1 */
/* Declaration for FLS Database */
extern CONST(Fls_ConfigType, FLS_CONST) Fls_GstConfiguration[];
/* END Msg(4:3684)-1 */
#define FLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

#endif /* FLS_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
