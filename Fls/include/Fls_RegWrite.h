/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Fls_RegWrite.h                                              */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file is to have macro definitions for the registers write and         */
/* verification.                                                              */
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
 * V1.0.0:  27-Feb-2017  : Initial Version
 */
/******************************************************************************/

/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       : (2:3132) Hard coded 'magic' number, '', used to define the */
/*                 size of an array.                                          */
/* Rule          : NA                                                         */
/* Justification : Hard coded Numbers are added instead of macros for better  */
/*                 readability.                                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning START Msg(2:3132)-1 and               */
/*                 END Msg(2:3132)-1 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3412) Macro defines an unrecognized code-fragment       */
/* Rule          : MISRA-C:2004 Rule 19.4                                     */
/* Justification : Macro definition as multi-line operation hence multi-line  */
/*                 macro is used                                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3412)-1 and                           */
/*                 END Msg(4:3412)-1 tags in the code.                        */
/******************************************************************************/
#ifndef FLS_REGWRITE_H
#define FLS_REGWRITE_H

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/

/* To publish the standard types */
#include "Std_Types.h"
/* Included for pre-compile time parameters */
#include "Fls_Cfg.h"
/* Included for Prototype Declaration for Callback Notification functions */
#include "Fls_Cbk.h"

/* Dem.h inclusion to get Dem_ReportErrorStatus declaration */
#if ( FLS_USE_WV_ERROR_INTERFACE == STD_OFF )
#include "Dem.h"
#endif

/*******************************************************************************
**                      Version Information                                  **
*******************************************************************************/
/* AUTOSAR Release version information */
#define FLS_REGWRITE_H_AR_RELEASE_MAJOR_VERSION   \
                                                   FLS_AR_RELEASE_MAJOR_VERSION
#define FLS_REGWRITE_H_AR_RELEASE_MINOR_VERSION   \
                                                   FLS_AR_RELEASE_MINOR_VERSION
#define FLS_REGWRITE_H_AR_RELEASE_REVISION_VERSION \
                                                FLS_AR_RELEASE_REVISION_VERSION

/* File version information */
#define FLS_REGWRITE_SW_MAJOR_VERSION  FLS_SW_MAJOR_VERSION
#define FLS_REGWRITE_SW_MINOR_VERSION  FLS_SW_MINOR_VERSION

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
/*******************************************************************************
**                     Macro Definitions                                      **
*******************************************************************************/
/* API IDs for all APIs in Fls.c and Fls_Internal.c for register write
verification User interface error notification */

/* For APIs which uses static registers, we give APIid as FLS_INIT_API_ID */
#define   FLS_INIT_API_ID                                     0x70
#define   FLS_CANCEL_API_ID                                   0x71
#define   FLS_SUSPEND_API_ID                                  0x72
#define   FLS_RESUME_API_ID                                   0x73
#define   FLS_PERFORMREADCHECKECC_API_ID                      0x74
#define   FLS_PROCESSREADIMM_API_ID                           0x75
#define   FLS_SETFHVE_API_ID                                  0x76
#define   FLS_PROCESSJOBRESULT_API_ID                         0x77
#define   FLS_CLEARINTREQ_API_ID                              0x78
#define   FLS_SETINTREQ_API_ID                                0x79
#define   FLS_TIMEOUTCHECKANDPROCESSING_API_ID                0x7A
#define   FLS_FCUSWITCHMODE_API_ID                            0x7B
#define   FLS_FCUCLEARSTATUS_API_ID                           0x7C
#define   FLS_FCUDATACOPY_API_ID                              0x7D
#define   FLS_FCUPERFORMBLANKCHECK_API_ID                     0x7E
#define   FLS_ERASEINTERNAL_API_ID                            0x7F
#define   FLS_WRITEINTERNAL_API_ID                            0x80
#define   FLS_BLANKCHECKINTERNAL_API_ID                       0x81
#define   FLS_SETSTARTENDADDR_API_ID                          0x82
#define   FLS_PERFORMBLANKCHECKFORREADOP_API_ID               0x83
#define   FLS_INITIATEWRITEJOB_API_ID                         0x84
#define   FLS_INITIATEERASEJOB_API_ID                         0x85

/* Macro for Register read-back disable */
#define FLS_WV_DISABLE                                            0U
/* Macro for Register read-back INIT_ONLY */
#define FLS_WV_INIT_ONLY                                          1U
/* Macro for Register read-back INIT_RUNTIME */
#define FLS_WV_INIT_RUNTIME                                       2U

/* Mask values used for write verification of registers */
#define FLS_FEADDR_REG_MASK_VAL                (uint32)0xFFFFFFFCUL
#define FLS_DFERRINT_REG_MASK_VAL             (uint8)0x07
#define FLS_FHVE_REG_MASK_VAL                 (uint32)0x00000001
#define FLS_FASTAT_REG_MASK_VAL               (uint8)0x88
#define FLS_FCURAME_REG_MASK_VAL              (uint16)0xFF03
#define FLS_FENTRYR_REG_MASK_VAL              (uint16)0xFF80
#define FLS_FCUFAREA_MASK_VAL                 (uint8)0x01
#define FLS_08BIT_MASK_VAL                    (uint8)0xFF
#define FLS_16BIT_MASK_VAL                    (uint16)0xFFFFU
#define FLS_32BIT_MASK_VAL                    (uint32)0xFFFFFFFFuL

/*******************************************************************************
** Macro Name            : FLS_REG_WRITE
**
** Description           : This macro is to perform the write operation to the
**                         register which is passed.
**
** Input Parameters      : REG, VAL
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* MISRA Violation: START Msg(4:3412)-1 */
#define FLS_REG_WRITE(REG, VAL)         (REG) = (VAL);
/* MISRA Violation: END Msg(4:3412)-1 */
/*******************************************************************************
** Macro Name            : FLS_REG_WRITE_VERIFY_INIT
**
** Description           : This macro is to do the write verify for the fls
**                         registers during initialize API.
**
** Input Parameters      : WriteRegAddr,uiCheckValue,uiWCMaskValue,uiApiId
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : WRITE_VERIFY shall be enabled
**
** Functions invoked     : None
*******************************************************************************/
/* MISRA Violation: START Msg(4:3412)-1 */
#if((FLS_WV_INIT_ONLY == FLS_WRITE_VERIFY ) || \
      (FLS_WV_INIT_RUNTIME == FLS_WRITE_VERIFY ))
#define FLS_REG_WRITE_VERIFY_INIT(WriteRegAddr,uiCheckValue, \
                                         uiWCMaskValue, uiApiId) \
  FLS_REG_WRITE_VERIFY(WriteRegAddr,uiCheckValue,uiWCMaskValue,uiApiId);
#else
#define FLS_REG_WRITE_VERIFY_INIT(WriteRegAddr,uiCheckValue, \
                                         uiWCMaskValue, uiApiId) \
  { \
  }
#endif
/* MISRA Violation: END Msg(4:3412)-1 */
/*******************************************************************************
** Macro Name            : FLS_REG_WRITE_VERIFY_RUNTIME
**
** Description           : This macro is to do the write verify for the fls
**                         registers during runtime.
**
** Input Parameters      : WriteRegAddr,uiCheckValue,uiWCMaskValue,uiApiId
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* MISRA Violation: START Msg(4:3412)-1 */
#if(FLS_WV_INIT_RUNTIME == FLS_WRITE_VERIFY)
#define FLS_REG_WRITE_VERIFY_RUNTIME(WriteRegAddr,uiCheckValue,\
                                         uiWCMaskValue, uiApiId) \
    FLS_REG_WRITE_VERIFY(WriteRegAddr,uiCheckValue,uiWCMaskValue,uiApiId);
#else
#define FLS_REG_WRITE_VERIFY_RUNTIME(WriteRegAddr, uiCheckValue, \
                                      uiWCMaskValue, uiApiId) \
  { \
  }
#endif
/* MISRA Violation: END Msg(4:3412)-1 */
/*******************************************************************************
** Macro Name            : FLS_REG_WRITE_VERIFY
**
** Description           : This macro is to do call the error report macro if
**                         the register write-verify fails
**
** Input Parameters      : WriteRegAddr,uiCheckValue,uiWCMaskValue,uiApiId
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* MISRA Violation: START Msg(4:3412)-1 */
#define FLS_REG_WRITE_VERIFY(WriteRegAddr,uiCheckValue,\
                                            uiWCMaskValue,uiApiId) \
  if((uiCheckValue) != ((WriteRegAddr) & (uiWCMaskValue)))\
  { \
      FLS_WV_REPORT_ERROR(FLS_E_REG_WRITE_VERIFY, \
                           DEM_EVENT_STATUS_FAILED, uiApiId); \
  } \
  else \
  { \
  }
/* MISRA Violation: END Msg(4:3412)-1 */
/*******************************************************************************
** Macro Name            : FLS_WV_REPORT_ERROR
**
** Description           : This macro is to do the write verify for the fls
**                         registers
**
** Input Parameters      : WVErrId, ErrStat ,uiApiId
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* MISRA Violation: START Msg(4:3412)-1 */
#if (FLS_USE_WV_ERROR_INTERFACE == STD_ON)
#define FLS_WV_REPORT_ERROR(WVErrId, ErrStat, uiApiId) \
                    FLS_ERROR_NOTIFICATION(WVErrId, uiApiId);
#else
#define FLS_WV_REPORT_ERROR(WVErrId, ErrStat, uiApiId) \
                            Dem_ReportErrorStatus(WVErrId, \
                                   (FLS_DEM_TYPE) (ErrStat));
#endif
/* MISRA Violation: END Msg(4:3412)-1 */
#endif /* FLS_REGWRITE_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
