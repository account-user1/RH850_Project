/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Dio_RegWrite.h                                              */
/* $Revision: 420863 $                                                        */
/* $Date: 2017-06-14 21:05:08 +0900 (水, 14 6 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2017 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file is to have macro definitions for the registers write             */
/* functionality verification.                                                */
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
 * V1.0.0:  20-Feb-2017 : Initial Version
 *
 * V1.0.1:  03-May-2017 : As per ARDAAAF-2357, Modified file banner for Date
 *                        and Revision.
 *
 * V1.0.2:  16-Jun-2017:  As per ARDAAAF-2475,
 *                        a. Unused macro DIO_WV_DISABLE is removed.
 *                        b. Added one space after if condition to correct
 *                           the style format.
 *                        c. Corrected the alignment of revision history
 *                           banner.
 */
/******************************************************************************/

#ifndef DIO_REG_WRITE_H
#define DIO_REG_WRITE_H

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/

#include "Std_Types.h"
#include "Dio_Cfg.h"
#include "Dem.h"
#include "Dio_Cbk.h"

/*******************************************************************************
**                      Version Information                                  **
*******************************************************************************/

/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3412) Macro defines an unrecognised code-fragment       */
/* Rule          : MISRA-C:2004 Rule 19.4                                     */
/* Justification : Macro definition as multi-line operation hence multi-line  */
/*                 macro is used                                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3412)-1 and                           */
/*                 END Msg(4:3412)-1 tags in the code.                        */
/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3410) Macro parameter not enclosed in ()                */
/* Rule          : MISRA-C:2004 Rule 19.10                                    */
/* Justification : The macros are used for differentiating register access ,  */
/*                 instead of direct pointer access.                          */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3410)-2 and                           */
/*                 END Msg(4:3410)-2 tags in the code.                        */
/******************************************************************************/
/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3458) Macro defines a braced code statement block.      */
/* Rule          : NA                                                         */
/* Justification : Since the macros are implemented as function macros braces */
/*                 cannot be avoided.                                         */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3458)-3 and                           */
/*                 END Msg(4:3458)-3 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                     Macro Definitions                                      **
*******************************************************************************/
/* Macro for Register readback INIT_RUNTIME */
#define DIO_WV_INIT_RUNTIME                1U

/*******************************************************************************
** Macro Name            : DIO_REG_WRITE_ONLY
**
** Description           : This Macro performs register direct writing
**                         operation.
**
** Input Parameters      : REG, VAL
**                         REG  : Variable mapped to register memory.
**                         VAL  : Value to be written to the register.
*******************************************************************************/
/* MISRA C Rule Violation: START Msg(4:3410)-2 */
/* MISRA C Rule Violation: START Msg(4:3458)-3 */
#define DIO_WRITE_REG_ONLY(pWriteRegAddr, uiRegWriteValue)  \
{ \
    (*(pWriteRegAddr)) = (uiRegWriteValue); \
} \

/* END Msg(4:3410)-2 */
/* END Msg(4:3458)-3 */

/*******************************************************************************
** Macro Name            : DIO_CHECK_WRITE_VERIFY_RUNTIME
**
** Description           : This macro is to do the write verify for the dio
**                         registers during runtime.
**
** Input Parameters      : WriteRegAddr, uiCheckValue, uiWCMaskValue, uiApiId
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
/* MISRA C Rule Violation: START Msg(4:3412)-1 */
#if (DIO_WV_INIT_RUNTIME == DIO_WRITE_VERIFY )
#define DIO_CHECK_WRITE_VERIFY_RUNTIME(WriteRegAddr, uiCheckValue,\
                                         uiWCMaskValue, uiApiId) \
DIO_MASKED_CHECK_WRITE_VERIFY(WriteRegAddr, uiCheckValue,\
                                  uiWCMaskValue, uiApiId);
#else
#define DIO_CHECK_WRITE_VERIFY_RUNTIME(WriteRegAddr, uiCheckValue, \
                                      uiWCMaskValue, uiApiId) \
  { \
  }
#endif
/* END Msg(4:3412)-1 */

/*******************************************************************************
** Macro Name            : DIO_MASKED_CHECK_WRITE_VERIFY
**
** Description           : This macro is to do call the error report macro if
**                         the register write-verify fails
**
** Input Parameters      : WriteRegAddr,uiCheckValue, uiWCMaskValue, uiApiId
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
/* MISRA C Rule Violation: START Msg(4:3412)-1 */
#define DIO_MASKED_CHECK_WRITE_VERIFY(pCompareRegAddr, uiCheckValue,\
                                              uiMaskValue, uiApiId) \
  if ((uiCheckValue) != ((*(pCompareRegAddr)) & (uiMaskValue))) \
  { \
      DIO_WV_REPORT_ERROR(DIO_E_REG_WRITE_VERIFY, \
                           DEM_EVENT_STATUS_FAILED, uiApiId); \
  } \
  else \
  { \
  }
/* END Msg(4:3412)-1 */

/*******************************************************************************
** Macro Name            : DIO_WV_REPORT_ERROR
**
** Description           : This macro is to do the write verify for the dio
**                         registers
**
** Input Parameters      : WVErrId, ErrStat, uiApiId
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
/* MISRA C Rule Violation: START Msg(4:3412)-1 */
#if ( DIO_USE_WV_ERROR_INTERFACE == STD_ON )
#define DIO_WV_REPORT_ERROR(WVErrId, ErrStat, uiApiId) \
                DIO_ERROR_NOTIFICATION(WVErrId, uiApiId);
#else
#define DIO_WV_REPORT_ERROR(WVErrId, ErrStat, uiApiId) \
                            Dem_ReportErrorStatus(WVErrId, \
                                         ErrStat);
#endif
/* END Msg(4:3412)-1 */
#endif /*  DIO_REG_WRITE_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
