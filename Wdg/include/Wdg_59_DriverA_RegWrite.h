/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Wdg_59_DriverA_RegWrite.h                                   */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2017 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file is to have macro definitions for the registers write and         */
/*  verification.                                                             */
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
 * V1.0.0:  22-Feb-2017 : Initial Version
 */
/******************************************************************************/

#ifndef WDG_59_DRIVERA_REG_WRITE_H
#define WDG_59_DRIVERA_REG_WRITE_H

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/

/* Dem.h inclusion to get Dem_ReportErrorStatus declaration */


#include "Wdg_59_DriverA_Cfg.h"
#if (STD_OFF == WDG_59_DRIVERA_USE_WV_ERROR_INTERFACE)
#include "Dem.h"
#else
#include "Wdg_59_DriverA_Cbk.h"
#endif

/*******************************************************************************
**                      Version Information                                  **
*******************************************************************************/

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
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3458) Macro defines a braced code statement block.      */
/* Rule          : MISRA-C:2004 Rule 19.4                                     */
/* Justification : Since API is implemented as macro, braces cannot be        */
/*                 avoided.                                                   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3458)-2 and                           */
/*                 END Msg(4:3458)-2 tags in the code.                        */
/******************************************************************************/
/******************************************************************************/

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                     Macro Definitions                                      **
*******************************************************************************/

/* WDG_59_DRIVERA read back states  */
#define WDG_59_DRIVERA_INIT_API_ID                   0x80U
#define WDG_59_DRIVERA_SETMODE_API_ID                0x81U
#define WDG_59_DRIVERA_TRIGGER_API_ID                0x82U
#define WDG_59_DRIVERA_TRIGGERFUNCTION_ISR_API_ID    0x83U

#define WDG_59_DRIVERA_WV_DISABLE  0x0U
#define WDG_59_DRIVERA_WV_INIT_ONLY  0x1U
#define WDG_59_DRIVERA_WV_INIT_RUNTIME  0x2U
/*******************************************************************************
**                           Macro Functions                                  **
*******************************************************************************/
/*MISRA Violation: START Msg(4:3412)-1 */
/*******************************************************************************
** Macro Name            : WDG_59_DRIVERA_REG_WRITE
**
** Description           : This macro is to perform the write operation to the
**                         register which is passed.
**
** Input Parameters      : pWriteRegAddr,uiRegWriteValue
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
#define WDG_59_DRIVERA_REG_WRITE(REG, VAL)         (REG) = (VAL);
/* END Msg(4:3412)-1 */

/*******************************************************************************
** Macro Name            : WDG_59_DRIVERA_WV_REPORT_ERROR
**
** Description           : This macro is to report the error to respective
**                         interface.
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
** Functions invoked     : Dem_ReportErrorStatus
**                         WDG_59_DRIVERA_ERROR_NOTIFICATION
*******************************************************************************/
#if ( WDG_59_DRIVERA_WRITE_VERIFY != WDG_59_DRIVERA_WV_DISABLE )
/* MISRA Violation: START Msg(4:3412)-1 */
#if (WDG_59_DRIVERA_USE_WV_ERROR_INTERFACE == STD_ON )
#define WDG_59_DRIVERA_WV_REPORT_ERROR(WVErrId, ErrStat, uiApiId) \
                        WDG_59_DRIVERA_ERROR_NOTIFICATION   (WVErrId, uiApiId)

#else
#define WDG_59_DRIVERA_WV_REPORT_ERROR(WVErrId, ErrStat, uiApiId) \
                            Dem_ReportErrorStatus(WVErrId, \
                                   (WDG_59_DRIVERA_DEM_TYPE)(ErrStat))

#endif
#endif


/*******************************************************************************
** Macro Name            : WDG_59_DRIVERA_REG_WRITE_VERIFY_INIT
**
** Description           : This macro is to do the write verify for the WDG
**                         registers during Wdg_59_DriverA_Init API.
**
** Input Parameters      : pCompareRegAddr, uiCheckValue, uiWCMaskValue,
**                         uiApiId
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
#if ( WDG_59_DRIVERA_WV_DISABLE != WDG_59_DRIVERA_WRITE_VERIFY )
#define WDG_59_DRIVERA_REG_WRITE_VERIFY_INIT(pCompareRegAddr,  \
                               uiCheckValue, uiWCMaskValue, uiApiId) \
  WDG_59_DRIVERA_REG_WRITE_VERIFY(pCompareRegAddr,uiCheckValue, \
                                         uiWCMaskValue, uiApiId)

#else
/* MISRA Violation: START Msg (4:3412)-1 */
#define WDG_59_DRIVERA_REG_WRITE_VERIFY_INIT(pCompareRegAddr,uiCheckValue, \
                                         uiWCMaskValue, uiApiId) \
  { \
  }
/* END Msg (4:3412)-1 */
#endif


/*******************************************************************************
** Macro Name            : WDG_59_DRIVERA_REG_WRITE_VERIFY_RUNTIME
**
** Description           : This macro is used to perform write verify for the
**                         Wdg registers at runtime.
**
** Input Parameters      : pCompareRegAddr, uiCheckValue, uiWCMaskValue,
**                         uiApiId.
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
#if (WDG_59_DRIVERA_WV_INIT_RUNTIME == WDG_59_DRIVERA_WRITE_VERIFY )
#define WDG_59_DRIVERA_REG_WRITE_VERIFY_RUNTIME(pCompareRegAddr,  \
                               uiCheckValue, uiWCMaskValue, uiApiId) \
  WDG_59_DRIVERA_REG_WRITE_VERIFY(pCompareRegAddr,uiCheckValue, \
                                         uiWCMaskValue, uiApiId)
#else
/* MISRA Violation: START Msg (4:3412)-1 */
#define WDG_59_DRIVERA_REG_WRITE_VERIFY_RUNTIME(pCompareRegAddr,uiCheckValue, \
                                         uiWCMaskValue, uiApiId) \
  { \
  }
/* END Msg (4:3412)-1 */
#endif

/*******************************************************************************
** Macro Name            : WDG_59_DRIVERA_REG_WRITE_VERIFY
**
** Description           : This macro is to do call the error report macro if
**                         the register write-verify fails.
**
** Input Parameters      : pCompareRegAddr, uiCheckValue, uiWCMaskValue,
**                         uiApiId
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
/* MISRA Violation: START Msg (4:3458)-2 */
#define WDG_59_DRIVERA_REG_WRITE_VERIFY(pCompareRegAddr, uiCheckValue, \
                                    uiWCMaskValue, uiApiId) \
{ \
  if ((uiCheckValue) != ((*(pCompareRegAddr)) & (uiWCMaskValue))) \
  { \
      WDG_59_DRIVERA_WV_REPORT_ERROR(WDG_59_DRIVERA_E_REG_WRITE_VERIFY, \
                          DEM_EVENT_STATUS_FAILED, uiApiId); \
  } \
  else \
  { \
  } \
}
/* END Msg (4:3458)-2 */
#endif
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
