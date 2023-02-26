/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Fls_Ram.c                                                   */
/* $Revision: 368301 $                                                        */
/* $Date: 2017-02-24 16:30:34 +0000 (Fri, 24 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision of Global variable definitions for Flash Wrapper Component.      */
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
 * V1.0.0:  15-Feb-2016    : Initial Version
 *
 * V1.0.1:  07-Apr-2016    : As part of V4.01.00 release, following changes are
 *                           made:
 *                           1) Copy right year is updated.
 *                           2) As per JIRA ARDAAAF-424, code flash related
 *                              global variables are removed.
 *
 * V1.0.2:  24-Feb-2017     : The following changes are made:
 *                           1) W.r.t Jira ARDAAAF-548, added
 *                              Fls_GblJobSuspendRequest variable.
 *                           2) W.r.t Jira ARDAAAF-907, Pre compile switches
 *                              are corrected.
 *                           3) W.r.t Jira ARDAAAF-770, justification for
 *                              QAC Warnings are added.
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* Included for macro definitions and API prototypes */
#include "Fls.h"
/* Included for RAM variable declarations */
#include "Fls_Ram.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* AUTOSAR Release version information */
#define FLS_RAM_C_AR_RELEASE_MAJOR_VERSION    FLS_AR_RELEASE_MAJOR_VERSION_VALUE
#define FLS_RAM_C_AR_RELEASE_MINOR_VERSION    FLS_AR_RELEASE_MINOR_VERSION_VALUE
#define FLS_RAM_C_AR_RELEASE_REVISION_VERSION \
                                           FLS_AR_RELEASE_REVISION_VERSION_VALUE


/* File version information */
#define FLS_RAM_C_SW_MAJOR_VERSION    FLS_SW_MAJOR_VERSION_VALUE
#define FLS_RAM_C_SW_MINOR_VERSION    FLS_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/

  #if (FLS_RAM_AR_RELEASE_MAJOR_VERSION != FLS_RAM_C_AR_RELEASE_MAJOR_VERSION)
    #error "Fls_Ram.c : Mismatch in Release Major Version"
  #endif

  #if (FLS_RAM_AR_RELEASE_MINOR_VERSION != FLS_RAM_C_AR_RELEASE_MINOR_VERSION)
    #error "Fls_Ram.c : Mismatch in Release Minor Version"
  #endif

  #if (FLS_RAM_AR_RELEASE_REVISION_VERSION != \
                                          FLS_RAM_C_AR_RELEASE_REVISION_VERSION)
    #error "Fls_Ram.c : Mismatch in Release Revision Version"
  #endif




#if (FLS_RAM_SW_MAJOR_VERSION != FLS_RAM_C_SW_MAJOR_VERSION)
  #error "Fls_Ram.c : Mismatch in Software Major Version"
#endif

#if (FLS_RAM_SW_MINOR_VERSION != FLS_RAM_C_SW_MINOR_VERSION)
  #error "Fls_Ram.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message      : (2:2022) This is a tentative definition and according to    */
/*                the ISO:C Standard, the object will automatically be        */
/*                initialized to zero.                                        */
/* Justification: The object's initialisation to zero will not affect the     */
/*                functionality.                                              */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(2:2022)-1 and                            */
/*                END Msg(2:2022)-1 tags in the code.                         */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message      : (2:3211) The global identifier 'Fls_GpConfigPtr' is defined */
/*                here but is not used in this translation unit.              */
/* Justification: As per AUTOSAR, all global variables extern declaration     */
/*                shall be given in Fls_Ram.h                                 */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(2:3211)-2 and                            */
/*                END Msg(2:3211)-2 tags in the code.                         */
/******************************************************************************/
/* 3. QAC Warning:                                                            */
/* Message       : (2:0862) #include "MemMap.h" directive is redundant.       */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files within the code is a MISRA violation. */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/*                                                                            */
/******************************************************************************/
/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/
#define FLS_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"
/* Implements FLS302,FLS318_Conf,FLS355 */
/* QAC Warning: START Msg(2:2022)-1 */
/* QAC Warning: START Msg(2:3211)-2 */
/* FCU Data Global Structure Declaration */
VAR(Fls_FcuDataType, FLS_VAR_NOINIT)Fls_GstFcuVar;

P2CONST(Fls_ConfigType, FLS_VAR_NOINIT, FLS_CONFIG_CONST) Fls_GpConfigPtr;

/* Structure variable that contains FLS Global variables */
VAR(Fls_GstVarProperties, FLS_VAR_NOINIT) Fls_GstVar;

#if ((FLS_SUSPEND_API == STD_ON) || (FLS_RESUME_API == STD_ON))
/* Structure variable to Back Up Global Variables in case of Job Suspend */
VAR(Fls_GstVarProperties, FLS_VAR_NOINIT) Fls_GstBackUpVar;
#endif


#define FLS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define FLS_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

/* Variable to store the job result */
VAR(MemIf_JobResultType, FLS_VAR) Fls_GenJobResult = MEMIF_JOB_OK;

/* Variable to store the driver state */
VAR(MemIf_StatusType, FLS_VAR) Fls_GenState = MEMIF_UNINIT;

/* Variable to Hold the Current Mode */
VAR(MemIf_ModeType, FLS_VAR) Fls_GenCurrentMode = MEMIF_MODE_SLOW;

#define FLS_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"


/* Functionality related to R4.0 */
#define FLS_START_SEC_VAR_INIT_BOOLEAN
#include "MemMap.h"

/* Variable to store the module initialization status */
VAR(boolean, FLS_VAR) Fls_GblInitStatus = FLS_UNINITIALIZED;
#if (FLS_TIMEOUT_MONITORING == STD_ON)
VAR(boolean, FLS_VAR) Fls_GblTimeOutMonitor = FLS_FALSE;
#endif

/* Functionality related to R4.0 */
#define FLS_STOP_SEC_VAR_INIT_BOOLEAN
#include "MemMap.h"




/* Functionality related to R4.0 */
#define FLS_START_SEC_VAR_NOINIT_BOOLEAN
#include "MemMap.h"

#if (FLS_FHVE_REGS == SUPPORTED)

/* Variable to store the flash enable / protection off status */
VAR(boolean, FLS_VAR_NOINIT) Fls_GblFlashEnable;

#endif /* end of #if (FLS_FHVE_REGS == SUPPORTED) */

#if ((FLS_SUSPEND_API == STD_ON) || (FLS_RESUME_API == STD_ON))

/* Variable to store the Job Suspended state */
VAR(boolean, FLS_VAR_NOINIT) Fls_GblJobSuspended;

#endif
#if (FLS_SUSPEND_API == STD_ON)
VAR(boolean, FLS_VAR_NOINIT) Fls_GblJobSuspendRequest;
#endif
#if (FLS_DEV_ERROR_DETECT == STD_ON)

VAR(boolean, FLS_VAR_NOINIT) Fls_GblVerifyCompletedJob;

#endif

/* Functionality related to R4.0 */
#define FLS_STOP_SEC_VAR_NOINIT_BOOLEAN
#include "MemMap.h"



/* Functionality related to R4.0 */
#define FLS_START_SEC_VAR_NOINIT_32
#include "MemMap.h"

#if (FLS_TIMEOUT_MONITORING == STD_ON)

VAR(uint32, FLS_VAR_NOINIT) Fls_GulTimeOutCounter;

#endif

/* Functionality related to R4.0 */
#define FLS_STOP_SEC_VAR_NOINIT_32
#include "MemMap.h"


/* END Msg(2:3211)-2 */
/* END Msg(2:2022)-1 */

/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
