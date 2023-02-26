/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Fls_Ram.h                                                   */
/* $Revision: 368684 $                                                        */
/* $Date: 2017-02-27 11:49:15 +0000 (Mon, 27 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Global variable declarations of FLS Driver              */
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
 *                           2) As per JIRA ARDAAAF-424, external declarations
 *                              code flash related global variables are removed.
 *
 * V1.0.2:  27-Feb-2017    : The following changes are made:
 *                           1) W.r.t Jira ARDAAAF-548, added extern declaration
 *                              of Fls_GblJobSuspendRequest variable.
 *                           2) W.r.t Jira ARDAAAF-907, Pre compile switches
 *                              are corrected.
 *                           3) W.r.t Jira ARDAAAF-988, memory class for
 *                              Fls_GpConfigPtr corrected are corrected.
 *                           4) W.r.t jira ARDAAAF-770,added qac warning
 *                              justification for msg(2:0862)
 */
/******************************************************************************/
#ifndef FLS_RAM_H
#define FLS_RAM_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Fls_Types.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* AUTOSAR Release version information */
#define FLS_RAM_AR_RELEASE_MAJOR_VERSION      FLS_AR_RELEASE_MAJOR_VERSION
#define FLS_RAM_AR_RELEASE_MINOR_VERSION      FLS_AR_RELEASE_MINOR_VERSION
#define FLS_RAM_AR_RELEASE_REVISION_VERSION   FLS_AR_RELEASE_REVISION_VERSION


/* Module Software version information */
#define FLS_RAM_SW_MAJOR_VERSION   FLS_SW_MAJOR_VERSION
#define FLS_RAM_SW_MINOR_VERSION   FLS_SW_MINOR_VERSION

/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0828) More than 8 levels of nested conditional          */
/*                 inclusion - program does not conform strictly to ISO:C90.  */
/* Rule          : MISRA-C:2004 Rule 1.1                                      */
/* Justification : All levels of nested conditional checks are verified and   */
/*                 no such 8 levels are observed.                             */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0828)-1 and                           */
/*                 END Msg(4:0828)-1 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/* 1.QAC Warning :                                                            */
/* Message       :(2:0862) #include "MemMap.h" directive is redundant.        */
/* Rule          : NA                                                         */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files within the code is a Qac Warning.     */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
#define FLS_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"
/* Global variable to store pointer to Configuration */
extern P2CONST(Fls_ConfigType, FLS_VAR_NOINIT, FLS_CONFIG_CONST)Fls_GpConfigPtr;

/* Structure variable that contains FLS Global variables */
extern VAR(Fls_GstVarProperties, FLS_VAR_NOINIT) Fls_GstVar;

/* FCU Data Global Structure Declaration */
extern VAR(Fls_FcuDataType, FLS_VAR_NOINIT)Fls_GstFcuVar;

#if ((FLS_SUSPEND_API == STD_ON) || (FLS_RESUME_API == STD_ON))
/* Structure variable to Back Up Global Variables in case of Job Suspend */
extern VAR(Fls_GstVarProperties, FLS_VAR_NOINIT) Fls_GstBackUpVar;
#endif

#define FLS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define FLS_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

/* Variable to store the job result */
extern VAR(MemIf_JobResultType, FLS_VAR) Fls_GenJobResult;

/* Variable to store the driver state */
extern VAR(MemIf_StatusType, FLS_VAR) Fls_GenState;

/* Variable to Hold the Current Mode */
extern VAR(MemIf_ModeType, FLS_VAR) Fls_GenCurrentMode;

#define FLS_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


/* Functionality related to R4.0 */
#define FLS_START_SEC_VAR_INIT_BOOLEAN
#include "MemMap.h"
/* MISRA Violation: START Msg(4:0828)-1 */


/* Declaration of variable that stores the module initialization status */
extern VAR(boolean, FLS_VAR) Fls_GblInitStatus;
#if (FLS_TIMEOUT_MONITORING == STD_ON)
extern VAR(boolean, FLS_VAR) Fls_GblTimeOutMonitor;
#endif

/* Functionality related to R4.0 */
#define FLS_STOP_SEC_VAR_INIT_BOOLEAN
#include "MemMap.h"

/* Functionality related to R4.0 */
#define FLS_START_SEC_VAR_NOINIT_BOOLEAN
#include "MemMap.h"

#if (FLS_FHVE_REGS == SUPPORTED)
/* Variable to store the flash enable / protection off status */
extern VAR(boolean, FLS_VAR_NOINIT) Fls_GblFlashEnable;
#endif /* end of #if (FLS_FHVE_REGS == SUPPORTED) */

#if ((FLS_SUSPEND_API == STD_ON) || (FLS_RESUME_API == STD_ON))
/* Variable to store the Job Suspended state */
extern VAR(boolean, FLS_VAR_NOINIT) Fls_GblJobSuspended;
#endif
#if (FLS_SUSPEND_API == STD_ON)
extern VAR(boolean, FLS_VAR_NOINIT) Fls_GblJobSuspendRequest;
#endif
extern VAR(boolean, FLS_VAR_NOINIT) Fls_GblVerifyCompletedJob;

/* Functionality related to R4.0 */
#define FLS_STOP_SEC_VAR_NOINIT_BOOLEAN
#include "MemMap.h"



/* Functionality related to R4.0 */
#define FLS_START_SEC_VAR_NOINIT_32
#include "MemMap.h"

#if (FLS_TIMEOUT_MONITORING == STD_ON)
extern VAR(uint32, FLS_VAR_NOINIT) Fls_GulTimeOutCounter;
#endif

/* Functionality related to R4.0 */
#define FLS_STOP_SEC_VAR_NOINIT_32
#include "MemMap.h"


/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#endif  /* FLS_RAM_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
