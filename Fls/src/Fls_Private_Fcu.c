/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Fls_Private_Fcu.c                                           */
/* $Revision: 504002 $                                                        */
/* $Date: 2017-12-22 10:39:58 +0530 (Fri, 22 Dec 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2016-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains FCU related API implementations                         */
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
 * V1.0.0:  07-Apr-2016     : Initial Version
 *
 * V1.0.1:  27-Feb-2017     : The following changes are made:
 *                           1) W.r.t Jira ARDAAAF-907, Pre compile switches
 *                              are corrected.
 *                           2) W.r.t ARDAAAF-546, updated
 *                              Fls_FcuCheckJobStatus function to invoke
 *                              Fls_ProcessSuspend function for erase and write
 *                              operations
 *                           3) W.r.t ARDAAAF-903, Fls_FcuGetDFSize is updated.
 *                           4) W.r.t ARDAAAF-961,Fls_FcuInitRAM function banner
 *                              is updated.
 *                           5) W.r.t ARDAAAF-902, Fls_FcuSwitchMode and
 *                              Fls_FcuForcedStop APIs are modified.
 *                           6) W.r.t ARDAAAF-896, Fls_FcuSwitchMode and
 *                              Fls_FcuPerformBlankCheck APIs are modified.
 *                           7) W.r.t ARDAAAF-906, Register write-verify is
 *                              implemented for DFERSTC register in
 *                              Fls_FcuDataCopy.
 *                           8) W.r.t ARDAAAF-559, Register write-verify is
 *                              implemented for all registers and FACI1
 *                              support is removed.
 *                           9) W.r.t Jira ARDAAAF-770, justification for
 *                              QAC Warnings are added.
 *                          10) W.r.t Jira ARDAAAF-1231 critical section
 *                              protection for Fls_FcuGetFWParam(),
 *                              Fls_FcuCopytoRam() added.
 *                          11) As per JIRA ID ARDAAAF-1688, Fls_FcuCopytoRam,
 *                              Fls_FcuSwitchBFlash,Fls_FcuClearCache and
 *                              Fls_FcuGetFWParam are kept under
 *                              FLS_START_SEC_PRIVATERAM_CODE memory section.
 *                          12) As per JIRA ID ARDAAAF-899, comments updated.
 *                          13) As part of ARDAAAF-907,removed switch operation
 *                              #if (FLS_INTERRUPT_MODE == STD_OFF)
 *                          14) As part of JIRA ID ARDAAAF-1885,
 *                              Fls_FcuClearStatus API is updated to remove
 *                              error bit checking.
 *                          15) As per JIRA ID ARDAAAF-1397, Fls_FcuSwitchMode
 *                              is improved to handle mode switch to USER and
 *                              mode switch to P/E separately and
 *                              Fls_FcuCheckSequencerStatus is added to check
 *                              FENTRYR register to identify command lock state
 *                              and Lddmode in Fls_FcuSwitchMode changed to
 *                              constant.
 *                          16) As part of ARDAAAF-770,
 *                              1.removed variable declaration
 *                              LusModeRegVal to fix Msg(3:3203)
 *                              2.Added justification for qac warning (2:3892)
 *                          17) As per ticket ARDAAAF-1886 LucLoopCount in
 *                              Fls_FcuForcedStop API is updated to check for
 *                              FRDY bit using FLS_FCU_FRDY_POOL_COUNT value.
 * Ver4.02.00.D_FLS_HF003: 22-Dec-2017 : Related Tickets :
 *                         JIRA #ARDAAAF-3326
 *                       : Modification Info :
 *                         Included P1X_C_Hardware_Defines.h file.
 *                       : Modification Info Ends :
 */
/******************************************************************************/

/*******************************************************************************
**                         Include Section                                    **
*******************************************************************************/
/* Implements EAAR_PN0034_FR_0001 */
#include "Fls_Private_Fcu.h"
#include "Fls_Internal.h"
/* Included for RAM variable declarations */
#include "Fls_Ram.h"
/* Included for Prototype Declarations for FLS callback notification functions*/
#include "Fls_Cbk.h"

#include "Fls_Hardware.h"
/* Included for the definition write verify macros */
#include "Fls_RegWrite.h"
#if (FLS_DEV_ERROR_DETECT == STD_ON)
/* Included for the declaration of Det_ReportError() */
#include "Det.h"
#endif /* #if (FLS_DEV_ERROR_DETECT == STD_ON) */
#include "P1X_C_Hardware_Defines.h"
/*******************************************************************************
**                         Version Information                                **
*******************************************************************************/

/* Functionality related to R4.0 */
/* AUTOSAR release version information */
#define FLS_PRIVATE_FCU_C_AR_RELEASE_MAJOR_VERSION  \
                                              FLS_AR_RELEASE_MAJOR_VERSION_VALUE
#define FLS_PRIVATE_FCU_C_AR_RELEASE_MINOR_VERSION     \
                                              FLS_AR_RELEASE_MINOR_VERSION_VALUE
#define FLS_PRIVATE_FCU_C_AR_RELEASE_REVISION_VERSION  \
                                           FLS_AR_RELEASE_REVISION_VERSION_VALUE


/* File version information */
#define FLS_PRIVATE_FCU_C_SW_MAJOR_VERSION      FLS_SW_MAJOR_VERSION_VALUE
#define FLS_PRIVATE_FCU_C_SW_MINOR_VERSION      FLS_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                           Version Check                                    **
*******************************************************************************/
/* Implements FLS364 */

/* Functionality related to R4.0 */
#if (FLS_PRIVATE_FCU_AR_RELEASE_MAJOR_VERSION != \
                                     FLS_PRIVATE_FCU_C_AR_RELEASE_MAJOR_VERSION)
  #error "Fls_Private_Fcu.c : Mismatch in Release Major Version"
#endif

#if (FLS_PRIVATE_FCU_AR_RELEASE_MINOR_VERSION != \
                                     FLS_PRIVATE_FCU_C_AR_RELEASE_MINOR_VERSION)
  #error "Fls_Private_Fcu.c : Mismatch in Release Minor Version"
#endif

#if (FLS_PRIVATE_FCU_AR_RELEASE_REVISION_VERSION != \
                                  FLS_PRIVATE_FCU_C_AR_RELEASE_REVISION_VERSION)
  #error "Fls_Private_Fcu.c : Mismatch in Release Revision Version"
#endif



#if (FLS_PRIVATE_FCU_SW_MAJOR_VERSION != FLS_PRIVATE_FCU_C_SW_MAJOR_VERSION)
  #error "Fls_Private_Fcu.c : Mismatch in Software Major Version"
#endif

#if (FLS_PRIVATE_FCU_SW_MINOR_VERSION != FLS_PRIVATE_FCU_C_SW_MINOR_VERSION)
  #error "Fls_Private_Fcu.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/

/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/

/******************************************************************************/

/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0303) [I] Cast between a pointer to volatile object     */
/*                 and an integral type.                                      */
/* Rule          : MISRA-C:2004 Rule 3.1 and 11.3                             */
/* Justification : This macro is used to write or read values from hardware   */
/*                 addresses.                                                 */
/* Verification  : However, this part of the code is verified manually and it */
/*                 is not having any impact.                                  */
/* Reference     : Look for START Msg(4:0303)-1 and                           */
/*                 END Msg(4:0303)-1 tags in the code.                        */
/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:4461) [L] Number of macro definitions exceeds 1024 -    */
/*                 program does not conform strictly to ISO:C90               */
/* Rule          : MISRA-C:2004 Rule 10.1                                     */
/* Justification : This macro is used to write or read values from hardware   */
/*                 addresses.                                                 */
/* Verification  : However, this part of the code is verified manually and it */
/*                 is not having any impact.                                  */
/* Reference     : Look for START Msg(4:4461)-2 and                           */
/*                 END Msg(4:4461)-2 tags in the code.                        */
/******************************************************************************/
/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2982) This assignment appears to be redundant because   */
/*                 the value of the object is not used before it is modified  */
/*                 again.                                                     */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : This assignment is used to read values from hardware       */
/*                 addresses.                                                 */
/* Verification  : However, this part of the code is verified manually and it */
/*                 is not having any impact.                                  */
/* Reference     : Look for START Msg(4:2982)-3 and                           */
/*                 END Msg(4:2982)-3 tags in the code.                        */
/******************************************************************************/
/* 4. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:1290) An integer constant of 'essentially signed' type  */
/*                  is being converted to unsigned type on assignment.        */
/* Rule          : MISRA-C:2004 Rule 10.1                                     */
/* Justification : The variable which is used of unsigned type and it can not */
/*                 be signed type for module implementation.                  */
/* Verification  : However, part of the code is verified manually and         */
/*                 it is not having any impact                                */
/* Reference     : Look for START Msg(4:1290)-4 and                           */
/*                 END Msg(4:1290)-4 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/

/* 1. QAC Warning:                                                            */
/* Message       : (2:2814) Possible: Dereference of NULL pointer.            */
/* Justification : The Pointers generated using Post Build configurations may */
/*                 not be NULL.                                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2814)-1 and                           */
/*                 END Msg(2:2814)-1 tags in the code.                        */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message       : (2:0862) #include "MemMap.h" directive is redundant.       */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files within the code is a MISRA violation. */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/
/* 3. QAC Warning:                                                            */
/* Message       : (2:3416) Logical operation performed on expression with    */
/*                 possible side effects.                                     */
/* Justification : Logical operation accesses volatile object which is a      */
/*                 register access. All register addresses are generated with */
/*                 volatile qualifier. There is no impact on the functionality*/
/*                 due to this conditional check for mode change.             */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3416)-3 and                           */
/*                 END Msg(2:3416)-3 tags in the code.                        */
/******************************************************************************/
/* 4. QAC Warning:                                                            */
/* Message       : (2:2016) This 'switch' statement 'default' clause is empty.*/
/* Justification : No action is required for default statements. Hence it is  */
/*                 left empty.                                                */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2016)-4 and                           */
/*                 END Msg(2:2016)-4 tags in the code.                        */
/******************************************************************************/
/* 5. QAC Warning:                                                            */
/* Message       : (2:3204) The variable 'LulEndAddr' is only set once and so */
/*                 it could be declared with the 'const' qualifier.           */
/* Justification : LulEndAddr is set within the macro FLS_REG_WRITE as well.  */
/*                 However this local variable cannot be declared with 'const'*/
/*                 qualifier since it is subjected to change for every cycle  */
/*                 of blank check operation.                                  */
/*                 left empty.                                                */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3204)-5 and                           */
/*                 END Msg(2:3204)-5 tags in the code.                        */
/******************************************************************************/
/* 6. QAC Warning:                                                            */
/* Message       : (3:3203) The variable 'LucModeVal' is set but never used.  */
/* Justification : LucModeVal is used for dummy read of FCUFAREA register.    */
/*                 While switching the BFLASH area, this delay or dummy read  */
/*                 is at most required. Hence canot be avoided. However part  */
/*                 of this code has no impact on functionality.               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(3:3203)-6 and                           */
/*                 END Msg(3:3203)-6 tags in the code.                        */
/******************************************************************************/
/* 7. QAC Warning:                                                            */
/* Message       : (2:3227) The parameter '' is never modified and so         */
/*                 it could be declared with the 'const' qualifier.           */
/*                 another type.                                              */
/*                 different integer type.                                    */
/* Justification : These variables cannot be declared with 'const' qualifier  */
/*                 since these variables are subjected to change in each      */
/*                 cycle of mainfunction call and boolean parameters don't    */
/*                 don't require 'const' qualifier.                           */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any safety impact.                              */
/* Reference     : Look for START Msg(2:3227)-7 and                           */
/*                 END Msg(2:3227)-7 tags in the code.                        */
/******************************************************************************/
/* 8. QAC Warning:                                                            */
/* Message       : (2:3892) The result of this cast is implicitly converted to*/
/*                 another type.                                              */
/*                 REFERENCE - ISO:C90-6.3.2.1 Semantics                      */
/* Justification : This is to get the value to pointer.                       */
/* Verification  : However, this part of the code is verified  manually and   */
/*                 it is not having any impact.                               */
/* Reference     : Look for START Msg(2:3892)-8 and END Msg(2:3892)-8 tags in */
/*                 the code.                                                  */
/******************************************************************************/

/******************************************************************************/
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
** Function Name             : Fls_FcuSwitchMode
**
** Service ID                : NA
**
** Description               : This function Switch FCU mode to Programming/User
**                             mode and checks if the Flash sequencer operation
**                             mode switch is performed correctly
**
** Sync/Async                : Synchronous
**
** Reentrancy                : NA
**
** Input Parameters          : LddMode
**
** InOut Parameters          : None
**
** Output Parameters         : Fls_FcuStatusType
**
** Return parameter          : LenStatus
**
** Preconditions             : None
**
** Global Variables Used     : Fls_GstFcuVar.usFcuFlashMode
**
** Function(s) invoked       : Fls_FcuCheckSequencerStatus, Fls_FcuForcedStop
**
** Registers Used            : FENTRYR,FSADDR,FEADDR
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_075,FLS_ESDD_UD_115,FLS_ESDD_UD_116,FLS_ESDD_UD_117 */
/* Implements EAAR_PN0034_FSR_0002,EAAR_PN0034_FSR_0013,EAAR_PN0034_FSR_0001 */
/* QAC Warning: START Msg(2:3227)-7*/
FUNC(Fls_FcuStatusType, FLS_PRIVATE_CODE) Fls_FcuSwitchMode
(CONST(uint16, FLS_APPL_DATA) LddMode)
{
/* END Msg(2:3227)-7*/
  Fls_FcuStatusType LenStatus;
  uint8 LucLoopCount;
  LenStatus = FLS_FCU_ERR_INTERNAL;
  /* Check if the mode is already set. If yes, setting it again would
  toggle the mode.So, don't set it again */
  /* QAC Warning: START Msg(2:2814)-1 */
  if (LddMode != FACIReg_BaseAddress->usFENTRYR)
  {
    /* END Msg(2:2814)-1 */
    if (FLS_FCU_MODE_PE == LddMode)
    {
      /* Clear FSADDRR and FEADDRR when entering P/E mode */
      FLS_REG_WRITE(FACIReg_BaseAddress->ulFSADDR,FLS_FCU_ADDR_REG_RESET)
      /*Clear FSADDRR in other FACI Unit */
      /* For write verification */
      /* MISRA Violation: START Msg(4:1290)-4 */
      FLS_REG_WRITE_VERIFY_INIT(FACIReg_BaseAddress->ulFSADDR,
          FLS_FCU_ADDR_REG_RESET, FLS_32BIT_MASK_VAL, FLS_FCUSWITCHMODE_API_ID)
      /*Clear FEADDRR in other FACI Unit */
      FLS_REG_WRITE(FACIReg_BaseAddress->ulFEADDR,FLS_FCU_ADDR_REG_RESET)
      /* For write verification */
      FLS_REG_WRITE_VERIFY_INIT(FACIReg_BaseAddress->ulFEADDR,
      FLS_FCU_ADDR_REG_RESET, FLS_FEADDR_REG_MASK_VAL, FLS_FCUSWITCHMODE_API_ID)
      /* END Msg(4:1290)-4 */
    }
    else /* Switch User mode */
    {
      /* check FRDY bit and cmd lock status */
      LenStatus = Fls_FcuCheckSequencerStatus();
      if (FLS_FCU_OK != LenStatus)
      {
        /* In case cmd lock, issue a forced stop */
        /* :- If any error occurs here, it will be returned */
        /* :- retVal must not be overwritten with FLS_FCU_OK */
        /* :- any other error report is ok */
        LenStatus = Fls_FcuForcedStop();
      }
      else
      {
        /* No action required */
      }
    }
    /* Set FENTRYR to switch FCU mode to User or P/E mode */
    FLS_REG_WRITE(FACIReg_BaseAddress->usFENTRYR,(LddMode +
                                           FLS_FCU_REGBIT_FENTRY_KEY))
    /* Implements FLS_ESDD_UD_113 */
    Fls_GstFcuVar.usFcuFlashMode = LddMode;

    /* Implements FLS_ESDD_UD_107 */
    LucLoopCount = FLS_LOOP_COUNT;

    /* Check if value of the FENTRYD bit is set as requested */
    /* We need a dummy read as the mode is not changed immediately on
    some devices */
    /* Start : FLS_UT_002*/
    do
    {
       LucLoopCount--;
    } while ((LddMode != FACIReg_BaseAddress->usFENTRYR) &&
                                                (FLS_FCU_ZERO < LucLoopCount));
    /* End : FLS_UT_002*/

    /* MISRA Violation: START Msg(4:1290)-4 */
    /* For write verification of  FENTRYR register */
    FLS_REG_WRITE_VERIFY_INIT(FACIReg_BaseAddress->usFENTRYR,
               LddMode, FLS_FENTRYR_REG_MASK_VAL, FLS_FCUSWITCHMODE_API_ID)
    /* END Msg(4:1290)-4 */

    /* Start : FLS_UT_002*/
    /* Check if mode switch is successful or time out occurs */
    if (Fls_GstFcuVar.usFcuFlashMode == FACIReg_BaseAddress->usFENTRYR)
    {
      /* Mode switch is successful */
      LenStatus = FLS_FCU_OK;
    }
    else if (FLS_FCU_ZERO == LucLoopCount)
    {
      /* Error occurs due to internal error */
      LenStatus = FLS_FCU_ERR_INTERNAL;
    }
    else
    {
      /* No action required */
    }
    /* End : FLS_UT_002*/
  }
  else
  {
    /* The intended mode is already set */
    LenStatus = FLS_FCU_OK;
  }

  return (LenStatus);
}/* End of function Fls_FcuSwitchMode */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name             : Fls_FcuPrepareEnvironment
**
** Service ID                : NA
**
** Description               : This function initialises the FCU RAM, sets the
**                             FACI frequency, resets FCU and initialise
**                             hardware registers to default values.
**
** Sync/Async                : Synchronous
**
** Reentrancy                : NA
**
** Input Parameters          : None
**
** InOut Parameters          : None
**
** Output Parameters         : Fls_FcuStatusType
**
** Return parameter          : LenStatus
**
** Preconditions             : None
**
** Global Variables Used     : Fls_GstFcuVar.ulFcuDfSize
**
** Function(s) invoked       : Fls_FcuSwitchMode,Fls_FcuForcedStop,
**                             Fls_FcuClearStatus,Fls_FcuVerifyChecksum,
**                             Fls_FcuSetFrequency,Fls_FcuInitRam
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_070 */
FUNC(Fls_FcuStatusType, FLS_PRIVATE_CODE) Fls_FcuPrepareEnvironment(void)
{
  Fls_FcuStatusType LenStatus;

  /* Switching to P/E Mode */
  LenStatus = Fls_FcuSwitchMode(FLS_FCU_MODE_PE);

  if (FLS_FCU_OK == LenStatus)
  {
    /* Reset FCU again to clear any possible ECC errors */
    LenStatus = Fls_FcuForcedStop();
  }
  else
  {
    /* No action required */
  }
  #if (FLS_FWCOPY_SUPPORTED == STD_ON)
  if (FLS_FCU_OK == LenStatus)
  {
    /* Switching to USER Mode */
    LenStatus = Fls_FcuSwitchMode(FLS_FCU_MODE_USER);
  }
  else
  {
    /* No action required */
  }

  if (FLS_FCU_OK == LenStatus)
  {
    /* Initialize the FCU code RAM */
    Fls_FcuInitRAM();
    /* Switching to P/E Mode */
    LenStatus = Fls_FcuSwitchMode(FLS_FCU_MODE_PE);
  }
  else
  {
    /* No action required */
  }

  if (FLS_FCU_OK == LenStatus)
  {
    /* Reset FCU again to clear any possible ECC errors */
    LenStatus = Fls_FcuForcedStop();
  }
  else
  {
    /* No action required */
  }
  #endif /* End of #if (FLS_FWCOPY_SUPPORTED == STD_ON) */

  if (FLS_FCU_OK == LenStatus)
  {
    /* Issue Clear Status command */
    Fls_FcuClearStatus();
    /* Switching to USER Mode */
    LenStatus = Fls_FcuSwitchMode(FLS_FCU_MODE_USER);
  }
  else
  {
    /* No action required */
  }

  if (FLS_FCU_OK == LenStatus)
  {
    #if (FLS_FWCOPY_SUPPORTED == STD_ON)
    /* Verify the FCURAM checksum. */
    LenStatus = Fls_FcuVerifyChecksum();
    #else
    LenStatus = FLS_FCU_BUSY;
    #endif /* End of #if (FLS_FWCOPY_SUPPORTED == STD_ON) */
  }
  else
  {
    /* No action required */
  }

  if (FLS_FCU_BUSY == LenStatus)
  {
    /* Implements FLS_ESDD_UD_035 */
    Fls_GstFcuVar.ulFcuDfSize = Fls_FcuGetDFSize();

    if ((uint16)FLS_DF_POOL_SIZE <=
        ((uint16)(Fls_GstFcuVar.ulFcuDfSize >> FLS_FCU_BLOCK_SIZE_2N)))
    {
      /* Configure the FCU frequency */
      LenStatus = Fls_FcuSetFrequency();
    }
    else
    {
      LenStatus = FLS_FCU_ERR_CONFIGURATION;
    }
  }
  else
  {
    /* No action required */
  }
  return (LenStatus);
} /* End of function Fls_FcuPrepareEnvironment */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name             : Fls_FcuForcedStop
**
** Service ID                : NA
**
** Description               : This function issues Forced Stop command and
**                             resets FCU and FACI registers.
**
** Sync/Async                : Synchronous
**
** Reentrancy                : NA
**
** Input Parameters          : None
**
** InOut Parameters          : None
**
** Output Parameters         : Fls_FcuStatusType
**
** Return parameter          : LenStatus
**
** Preconditions             : None
**
** Global Variables Used     : None
**
** Function(s) invoked       : FLS_FCU_DF_ISSUE_BYTE_CMD
**
** Registers Used            : FSTATR
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_063 */
/* Implements AR_PN0072_FR_0051 */

FUNC(Fls_FcuStatusType, FLS_PRIVATE_CODE) Fls_FcuForcedStop(void)
{
  uint32 LulReturnValue;
  Fls_FcuStatusType LenStatus;
  uint32 LulTimeout;

  /* MISRA Violation: START Msg(4:0303)-1 */
  /* Issuing Forced Stop Command */

  FLS_FCU_DF_ISSUE_BYTE_CMD(FLS_FACI_CMD_FORCED_STOP);
  /* END Msg(4:0303)-1 */
  LenStatus = FLS_FCU_BUSY;
  /* Implements FLS_ESDD_UD_015 */
  LulTimeout = FLS_FCU_FRDY_POOL_COUNT;
  /* We need a dummy read as the mode is not changed immediately on */
  /* some devices */
  do
  {
    /* QAC Warning: START Msg(2:2814)-1 */
    LulReturnValue = FACIReg_BaseAddress->ulFSTATR;
    /* END Msg(2:2814)-1 */
    if (FLS_FCU_REGBIT_FSTATR_FRDY ==
                                (FLS_FCU_REGBIT_FSTATR_FRDY & LulReturnValue))
    {
      LenStatus = FLS_FCU_OK;
    }
    else
    {
      /* No action required */
    }
    LulTimeout--;
  } while ((LulTimeout > FLS_FCU_ZERO) && (FLS_FCU_BUSY == LenStatus));

  /* If Time out occurs */
  if (FLS_FCU_ZERO == LulTimeout)
  {
    LenStatus = FLS_FCU_ERR_INTERNAL;
  }
  else
  {
    /* No action required */
  }
  return(LenStatus);

}/* End of function Fls_FcuForcedStop */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name             : Fls_FcuClearStatus
**
** Service ID                : NA
**
** Description               : This function clears (error) status of the
**                             sequencer by issuing the clear status FCU
**                             command.
**
** Sync/Async                : Synchronous
**
** Reentrancy                : NA
**
** Input Parameters          : None
**
** InOut Parameters          : None
**
** Output Parameters         : None
**
** Return parameter          : None
**
** Preconditions             : None
**
** Global Variables Used     : None
**
** Function(s) invoked       : FLS_FCU_DF_ISSUE_BYTE_CMD
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_059 */
/* Implements AR_PN0072_FR_0051 */
FUNC(void, FLS_PRIVATE_CODE) Fls_FcuClearStatus(void)
{

  /* MISRA Violation: START Msg(4:0303)-1 */
  /* Issue Clear Status Command */
  FLS_FCU_DF_ISSUE_BYTE_CMD(FLS_FACI_CMD_CLEARSTAT);
  /* END Msg(4:0303)-1 */

} /* End of function Fls_FcuClearStatus */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#if (FLS_FWCOPY_SUPPORTED == STD_ON)
/*******************************************************************************
** Function Name             : Fls_FcuVerifyChecksum
**
** Service ID                : NA
**
** Description               : This function verify the FCURAM checksum.
**
** Sync/Async                : Synchronous
**
** Reentrancy                : NA
**
** Input Parameters          : None
**
** InOut Parameters          : None
**
** Output Parameters         : Fls_FcuStatusType
**
** Return parameter          : LenStatus
**
** Preconditions             : None
**
** Global Variables Used     : Fls_GstFcuVar.ulFcuChksumEndAddr
**                             Fls_GstFcuVar.ulFcuChksumVal
**
** Function(s) invoked       : FLS_FCU_DF_ISSUE_BYTE_CMD,FLS_DF_READ16
**
** Registers Used            : FCURAME
*******************************************************************************/

#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_076 */
/* Implements AR_PN0072_FR_0051 */
/* Implements EAAR_PN0034_FSR_0002 */
FUNC(Fls_FcuStatusType, FLS_PRIVATE_CODE) Fls_FcuVerifyChecksum(void)
{
  Fls_FcuStatusType LenStatus;
  uint32 LulAddr;
  uint32 LulAddrEnd;
  uint32 LulChkSum;
  LulChkSum = (uint32)(FLS_FCU_NULL);
  /* Check if critical section protection is required */
  /* Implements FLS_ESDD_UD_004 */
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Disable relevant interrupts to protect this critical section */
  FLS_ENTER_CRITICAL_SECTION(FLS_REGISTER_PROTECTION);
  #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */

  /*Writing to FCRME bit of FCURAME register is enabled only when
  FLS_FCU_REGBIT_FCURAME_KEY is written to it.
  However, while reading this register, the key shall not be present.
  Hence for write verification, we pass the actual written value and
  key is not passed as it may lead to erroneous output*/

  /* Activate FCU RAM R/W access */
  /* QAC Warning: START Msg(2:2814)-1 */
  /* QAC Warning: START Msg(2:3892)-8 */
  FLS_REG_WRITE(FACIReg_BaseAddress->usFCURAME,
                   (FLS_FCU_REGBIT_FCURAME_FCRME + FLS_FCU_REGBIT_FCURAME_KEY))
  /* END Msg(2:3892)-8 */
  /* END Msg(2:2814)-1 */
  /* For write verification */
  /* MISRA Violation: START Msg(4:1290)-4 */
  FLS_REG_WRITE_VERIFY_INIT(FACIReg_BaseAddress->usFCURAME,
      FLS_FCU_REGBIT_FCURAME_FCRME, FLS_FCURAME_REG_MASK_VAL, FLS_INIT_API_ID)
  /* END Msg(4:1290)-4 */
  /* Check if critical section protection is required */
  /* Implements FLS_ESDD_UD_004 */
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Enable relevant interrupts to exit this critical section */
  FLS_EXIT_CRITICAL_SECTION(FLS_REGISTER_PROTECTION);
  #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
  /* Implements FLS_ESDD_UD_032 */
  /* Calculate and compare FCU RAM checksum */
  LulAddrEnd = Fls_GstFcuVar.ulFcuChksumEndAddr;
  /* MISRA Violation: START Msg(4:0303)-1 */
  for (LulAddr = FLS_FCU_RAM_ADD; LulAddr < LulAddrEnd; LulAddr +=
                                                        (uint32)(FLS_FCU_TWO))
  {
    LulChkSum += (uint32)(FLS_DF_READ16(LulAddr));
  }
  /* END Msg(4:0303)-1 */
  /* Implements FLS_ESDD_UD_032 */
  /* Check if the calculated and Stored CheckSum are same */
  if (Fls_GstFcuVar.ulFcuChksumVal == LulChkSum)
  {
    LenStatus = FLS_FCU_BUSY;
  }
  else
  {
    LenStatus = FLS_FCU_ERR_INTERNAL;
  }
  /* Implements FLS_ESDD_UD_004 */
  /* Check if critical section protection is required */
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Disable relevant interrupts to protect this critical section */
  FLS_ENTER_CRITICAL_SECTION(FLS_REGISTER_PROTECTION);
  #endif  /* End of #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */

  /*Writing to FCRME bit of FCURAME register is enabled only when
  FLS_FCU_REGBIT_FCURAME_KEY is written to it.
  However, while reading this register, the key shall not be present.
  Hence for write verification, we pass the actual written value and
  key is not passed as it may lead to erroneous output*/

  /* Deactivate FCU RAM access */
  FLS_REG_WRITE(FACIReg_BaseAddress->usFCURAME,
                   (FLS_FCU_REGBIT_FCURAME_RESET + FLS_FCU_REGBIT_FCURAME_KEY))
  /* For write verification */
  /* QAC Warning: START Msg(2:3892)-8 */
  FLS_REG_WRITE_VERIFY_INIT(FACIReg_BaseAddress->usFCURAME,
       FLS_FCU_REGBIT_FCURAME_RESET, FLS_FCURAME_REG_MASK_VAL, FLS_INIT_API_ID)
  /* END Msg(2:3892)-8 */
  /* Check if critical section protection is required */
  /* Implements FLS_ESDD_UD_004 */
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Enable relevant interrupts to exit this critical section */
  FLS_EXIT_CRITICAL_SECTION(FLS_REGISTER_PROTECTION);
  #endif /* End of #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */

  return(LenStatus);

} /*End of function Fls_FcuVerifyChecksum */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif  /* End of #if (FLS_FWCOPY_SUPPORTED == STD_ON) */
/*******************************************************************************
** Function Name             : Fls_FcuGetFWParam
**
** Service ID                : NA
**
** Description               : This function reads the out a firmware parameter
**                             from the Extra area
**
** Sync/Async                : Synchronous
**
** Reentrancy                : NA
**
** Input Parameters          : LulAddress
**
** InOut Parameters          : None
**
** Output Parameters         : None
**
** Return parameter          : LulValue
**
** Preconditions             : None
**
** Global Variables Used     : None
**
** Function(s) invoked       : Fls_FcuSwitchBFlash,FLS_DF_READ32,
**                             Fls_FcuClearCache
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATERAM_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_065 */
/* QAC Warning: START Msg(2:3227)-7*/
FUNC(uint32, FLS_PRIVATE_CODE) Fls_FcuGetFWParam(uint32 LulAddress)
{
  /* END Msg(2:3227)-7*/
  uint32 LulValue;
  #if (FLS_FWCOPY_SUPPORTED == STD_ON)
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Disable relevant interrupts to protect this critical section */
  FLS_ENTER_CRITICAL_SECTION(FLS_CODE_FLASH_DISABLED);
  #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
  /* Activate BFlash */
  Fls_FcuSwitchBFlash(FLS_FCU_ENABLE_BFLASH);
  /* MISRA Violation: START Msg(4:0303)-1 */
  Fls_FcuClearCache();
  /* QAC Warning: START Msg(2:2814)-1 */
  LulValue = FLS_DF_READ32(LulAddress);
  /* END Msg(2:2814)-1 */
  /*  END Msg(4:0303)-1 */
  EXECUTE_SYNCP();
  /* Deactivate BFlash */
  Fls_FcuSwitchBFlash(FLS_FCU_DISABLE_BFLASH);
  Fls_FcuClearCache();
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Disable relevant interrupts to protect this critical section */
  FLS_EXIT_CRITICAL_SECTION(FLS_CODE_FLASH_DISABLED);
  #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
  #else
  LulValue = (*(uint32*)LulAddress);
  #endif /* #if (FLS_FWCOPY_SUPPORTED == STD_ON) */

  return(LulValue);

}/*End of function Fls_FcuGetFWParam */

#define FLS_STOP_SEC_PRIVATERAM_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name             : Fls_FcuGetDFSize
**
** Service ID                : NA
**
** Description               : This function is used to get the Data Flash size
**
** Sync/Async                : Synchronous
**
** Reentrancy                : NA
**
** Input Parameters          : None
**
** InOut Parameters          : None
**
** Output Parameters         : Size of data flash
**
** Return parameter          : LulReturn
**
** Preconditions             : None
**
** Global Variables Used     : None
**
** Function(s) invoked       : Fls_FcuGetFWParam,FLS_DF_READ32
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_064 */
FUNC(uint32, FLS_PRIVATE_CODE) Fls_FcuGetDFSize(void)
{
  uint32 LulReturn;
  uint32 LulData;
  uint32 LulDataAddr;

  /* Entry tells where to find the PRD* information */
  LulDataAddr = Fls_FcuGetFWParam(FLS_FCU_EXTRA3_SCDSADD);
  /* MISRA Violation: START Msg(4:0303)-1 */
  LulData = FLS_DF_READ32(LulDataAddr + FLS_FCU_PRDSEL3_OFFSET);
  /* END Msg(4:0303)-1 */
  /* Lower 16Byte are the DF size in kB. So, multiply accordingly */
  LulData &= FLS_FCU_DF_SIZE_MASK;
  LulReturn = LulData * FLS_FCU_ONE_KB;

  return(LulReturn);
} /*End of function Fls_FcuGetDFSize */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#if (FLS_FWCOPY_SUPPORTED == STD_ON)
/*******************************************************************************
** Function Name             : Fls_FcuInitRAM
**
** Service ID                : NA
**
** Description               : This function copies the firmware to the FCU RAM.
**                             Prepares the parameter structure for the function
**                             to be executed in RAM, calls the function to copy
**                             and execute the code in RAM, saves the checksum
**                             related values for later processing and clears
**                             the cache.
**
** Sync/Async                : Synchronous
**
** Reentrancy                : NA
**
** Input Parameters          : None
**
** InOut Parameters          : None
**
** Output Parameters         : None
**
** Return parameter          : None
**
** Preconditions             : None
**
** Global Variables Used     : None
**
** Function(s) invoked       : Fls_FcuCopytoRam
**
** Registers Used            : FCURAME
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_067 */
/* Implements EAAR_PN0034_FSR_0002,EAAR_PN0034_FSR_0001 */
FUNC(void, FLS_PRIVATE_CODE) Fls_FcuInitRAM(void)
{
  /* Check if critical section protection is required */
  /* Implements FLS_ESDD_UD_004 */
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Disable relevant interrupts to protect this critical section */
  FLS_ENTER_CRITICAL_SECTION(FLS_REGISTER_PROTECTION);
  #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */

  /* Writing to FCRME bit of FCURAME register is enabled only when
  FLS_FCU_REGBIT_FCURAME_KEY is written to it.
  However, while reading this register, the key shall not be present.
  Hence for write verification, we pass the actual written value and
  key is not passed as it may lead to erroneous output */
  /* QAC Warning: START Msg(2:3892)-8 */
  /* QAC Warning: START Msg(2:2814)-1 */
  /* Activate FCU RAM access */
  FLS_REG_WRITE (FACIReg_BaseAddress->usFCURAME,(((FLS_FCU_REGBIT_FCURAME_FCRME
             + FLS_FCU_REGBIT_FCURAME_FRAMTRAN) + FLS_FCU_REGBIT_FCURAME_KEY)))
  /* END Msg(2:2814)-1 */
  /* END Msg(2:3892)-8 */
  /* MISRA Violation: START Msg(4:1290)-4 */
  /* For write verification */
  FLS_REG_WRITE_VERIFY_INIT(FACIReg_BaseAddress->usFCURAME, \
  (FLS_FCU_REGBIT_FCURAME_FCRME + FLS_FCU_REGBIT_FCURAME_FRAMTRAN), \
                                     FLS_FCURAME_REG_MASK_VAL, FLS_INIT_API_ID)
  /* END Msg(4:1290)-4 */
  /* Implements FLS_ESDD_UD_004 */
  /* Check if critical section protection is required */
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Enable relevant interrupts to exit this critical section */
  FLS_EXIT_CRITICAL_SECTION(FLS_REGISTER_PROTECTION);
  #endif /* End of #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */

  /* Invoke the function to copy firmware to FCURAM */
  Fls_FcuCopytoRam();

  /* Check if critical section protection is required */
  /* Implements FLS_ESDD_UD_004 */
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Disable relevant interrupts to protect this critical section */
  FLS_ENTER_CRITICAL_SECTION(FLS_REGISTER_PROTECTION);
  #endif /* End of #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
  /*Writing to FCRME bit of FCURAME register is enabled only when
  FLS_FCU_REGBIT_FCURAME_KEY is written to it.
  However, while reading this register, the key shall not be present.
  Hence for write verification, we pass the actual written value and
  key is not passed as it may lead to erroneous output*/

  /* Deactivate FCU RAM access */
  FLS_REG_WRITE(FACIReg_BaseAddress->usFCURAME,
                   (FLS_FCU_REGBIT_FCURAME_RESET + FLS_FCU_REGBIT_FCURAME_KEY))
  /* MISRA Violation: START Msg(4:1290)-4 */
  /* QAC Warning: START Msg(2:3892)-8 */
  /* For write verification */
  FLS_REG_WRITE_VERIFY_INIT(FACIReg_BaseAddress->usFCURAME, \
    FLS_FCU_REGBIT_FCURAME_RESET, FLS_FCURAME_REG_MASK_VAL, FLS_INIT_API_ID)
  /* QAC Warning: START Msg(2:3892)-8 */
  /* END Msg(4:1290)-4 */
  /* Implements FLS_ESDD_UD_004 */
  /* Check if critical section protection is required */
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Enable relevant interrupts to exit this critical section */
  FLS_EXIT_CRITICAL_SECTION(FLS_REGISTER_PROTECTION);
  #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */

} /*End of function Fls_FcuInitRAM */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* #if (FLS_FWCOPY_SUPPORTED == STD_ON) */
/*******************************************************************************
** Function Name             : Fls_FcuSetFrequency
**
** Service ID                : NA
**
** Description               : This function is used to set the FCU frequency.
**                             FCU frequency, set in MHz is needed.
**                             The function may return an error if the
**                             frequency could not be set.
**
** Sync/Async                : Synchronous
**
** Reentrancy                : NA
**
** Input Parameters          : None
**
** InOut Parameters          : None
**
** Output Parameters         : Fls_FcuStatusType
**
** Return parameter          : LenStatus
**
** Preconditions             : None
**
** Global Variables Used     : None
**
** Function(s) invoked       : Fls_FcuGetFWParam
**
** Registers Used            : FPCKAR
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_072 */
/* Implements EAAR_PN0034_FSR_0001 */
FUNC(Fls_FcuStatusType, FLS_PRIVATE_CODE) Fls_FcuSetFrequency( void)
{
  Fls_FcuStatusType LenStatus;
  uint16 LusFaciFreq;
  uint16 LusCpuFreq;
  uint32 LulFwVal;
  uint32 LulMinFreq;
  uint32 LulMaxFreq;

  LenStatus = FLS_FCU_OK;
  LusCpuFreq = Fls_GstFcuVar.usCpuFrequencyMHz;

  /* Get firmware parameters */
  /* MISRA Violation: START Msg(4:2982)-3 */
  /* FW version is 1 Byte on not word aligned address,
     so we read word aligned and calculate the correct byte */
  LulFwVal  = Fls_FcuGetFWParam(FLS_FCU_EXTRA3_FWVER &
                                               (~FLS_FCU_FWVER_VAL_MASK));
  /*  END Msg(4:2982)-3 */
  LusFaciFreq = ( LusCpuFreq / FLS_FACI_CLK_DIV);

  /* Frequency is 32bit value in Hz. We need to calculate MHz from that */
  LulFwVal  = Fls_FcuGetFWParam(FLS_FCU_EXTRA3_FMIN);
  LulMinFreq     = LulFwVal / FLS_FCU_ONE_MHZ;

  LulFwVal  = Fls_FcuGetFWParam(FLS_FCU_EXTRA3_FMAX);
  LulMaxFreq     = LulFwVal / FLS_FCU_ONE_MHZ;

  if ((LusCpuFreq >= LulMinFreq) && (LusCpuFreq <= LulMaxFreq))
  {
    if ((LusFaciFreq >= FLS_FCU_FMIN) && (LusFaciFreq <= FLS_FCU_FMAX))
    {
      /* Check if critical section protection is required */
      /* Implements FLS_ESDD_UD_004 */
      #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Disable relevant interrupts to protect this critical section */
      FLS_ENTER_CRITICAL_SECTION(FLS_REGISTER_PROTECTION);
      #endif

      /*Writing to FPCKAR register is enabled only when
      FLS_FCU_REGBIT_FPCKAR_KEY is written to it.
      However, while reading this register, the key shall not be present.
      Hence for write verification, we pass the actual written value and
      key is not passed as it may lead to erroneous output*/
      /* QAC Warning: START Msg(2:2814)-1 */
      /* Set frequency */
      FLS_REG_WRITE(FACIReg_BaseAddress->usFPCKAR,
                                     (FLS_FCU_REGBIT_FPCKAR_KEY + LusFaciFreq))
      /* END Msg(2:2814)-1 */
      /* For write verification */
      /* MISRA Violation: START Msg(4:1290)-4 */
      FLS_REG_WRITE_VERIFY_INIT(FACIReg_BaseAddress->usFPCKAR,
                              LusFaciFreq, FLS_16BIT_MASK_VAL, FLS_INIT_API_ID)
      /* END Msg(4:1290)-4 */
      /* Check if critical section protection is required */
      /* Implements FLS_ESDD_UD_004 */
      #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Enable relevant interrupts to exit this critical section */
      FLS_EXIT_CRITICAL_SECTION(FLS_REGISTER_PROTECTION);
      #endif
    }
    else
    {
      LenStatus = FLS_FCU_ERR_CONFIGURATION;
    }
  }
  else
  {
    /* No action required */
  }

  return(LenStatus);
} /*End of function Fls_FcuSetFrequency */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name            : Fls_FcuDataCopy
**
** Service ID               : None
**
** Description              : This function copies the Read data from Temporary
**                            Buffer to Application Buffer.
**
** Sync/Async               : Synchronous
**
** Reentrancy               : NA
**
** Input Parameters         : LulSrcAddr, LulBufferAddr
**
** InOut Parameters         : None
**
** Output Parameters        : None
**
** Return parameter         : LulDFERStatus
**
** Preconditions            : None
**
** Global Variables Used    : Fls_GstVar.GulSrcDestAddress
**
** Function(s) invoked      : FLS_DF_READ32,FLS_DF_WRITE32
**
** Registers Used           : DFERSTR,DFERSTC
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_061 */
/* Implements EAAR_PN0034_FSR_0002,EAAR_PN0034_FSR_0001 */
/* QAC Warning: START Msg(2:3227)-7*/
FUNC(uint32, FLS_PRIVATE_CODE) Fls_FcuDataCopy
(uint32 LulSrcAddr, uint32 LulBufferAddr)
{
  /* END Msg(2:3227)-7*/
  uint32 LulReadData;
  /* Local variable to hold the value of Data Flash error status register */
  uint32 LulDFERStatus;
  /* MISRA Violation : START Msg(4:0303)-1 */
  /* QAC Warning: START Msg(2:2814)-1 */
  /* Reading the data from source address */
  LulReadData = FLS_DF_READ32(LulSrcAddr);
  /* Writing the data to application buffer */
  FLS_DF_WRITE32(LulBufferAddr, LulReadData);
  /* END Msg(4:0303)-1 */
  /* Get the Data Flash error status register value */
  LulDFERStatus = ECCReg_BaseAddress->ulDFERSTR;
  /* END Msg(2:2814)-1 */
  if (FLS_FCU_REGVAL_DFERSTR_NOERR != LulDFERStatus)
  {
    /* Global variable to hold the ECC error occurrence address */
    Fls_GstVar.GulSrcDestAddress = LulSrcAddr;
    /* Clear ECC errors */
    FLS_REG_WRITE(ECCReg_BaseAddress->ucDFERSTC,FLS_FCU_REGBIT_DFERSTC_ERRCLR)
    /* For write verification */
    FLS_REG_WRITE_VERIFY_RUNTIME(ECCReg_BaseAddress->ulDFERSTR,
        FLS_FCU_REGVAL_DFERSTR_NOERR, FLS_08BIT_MASK_VAL,FLS_FCUDATACOPY_API_ID)
  }
  else
  {
    /* No Action Required */
  }
  return(LulDFERStatus);
}/* End of function Fls_FcuDataCopy */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name            : Fls_FcuOffsetDataCopy
**
** Service ID               : None
**
** Description              : This function is used to copy the data from
**                            Temporary Buffer to Application Buffer in case of
**                            Misaligned address or length is input.
**
** Sync/Async               : Synchronous
**
** Reentrancy               : Re-entrant
**
** Input Parameters         : LulSrcAddr, LulBufferAddr, LucOffset
**
** InOut Parameters         : None
**
** Output Parameters        : None
**
** Return parameter         : None
**
** Preconditions            : Read operation address/length are not page
**                            aligned.
**
** Global Variables Used    : None
**
** Function(s) invoked      : FLS_DF_READ8,FLS_DF_READ16,FLS_DF_WRITE8,
**                            FLS_DF_WRITE16
**
** Registers Used           : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_068 */
/* QAC Warning: START Msg(2:3227)-7*/
FUNC(void, FLS_PRIVATE_CODE) Fls_FcuOffsetDataCopy
(uint32 LulSrcAddr, uint32 LulBufferAddr, uint8 LucOffset)
{
  /* END Msg(2:3227)-7*/
  uint8 LucReadData;
  uint16 LusReadData;

  switch (LucOffset)
  {
    /* QAC Warning: START Msg(2:2814)-1 */
    case FLS_ONE:
      /* MISRA Violation: START Msg(4:0303)-1 */
      /* Reading the data from source address */
      LucReadData = FLS_DF_READ8(LulSrcAddr);
      /* Writing the data to application buffer */
      FLS_DF_WRITE8(LulBufferAddr, LucReadData);

    break;
    case FLS_TWO:
      /* Reading the data from source address */
      LusReadData = FLS_DF_READ16(LulSrcAddr);
      /* Writing the data to application buffer */
      FLS_DF_WRITE16(LulBufferAddr, LusReadData);

    break;
    case FLS_THREE:
      /* Reading the data from source address */
      LusReadData = FLS_DF_READ16(LulSrcAddr);
      /* Writing the data to application buffer */
      FLS_DF_WRITE16(LulBufferAddr, LusReadData);
      LulBufferAddr = LulBufferAddr + (uint32)FLS_TWO;
      LulSrcAddr = LulSrcAddr + (uint32)FLS_TWO;
      /* Reading the data from source address */
      LucReadData = FLS_DF_READ8(LulSrcAddr);
      /* Writing the data to application buffer */
      FLS_DF_WRITE8(LulBufferAddr, LucReadData);
      /*END Msg(4:0303)-1 */
    break;
    /* END Msg(2:2814)-1 */
    /* QAC Warning: START Msg(2:2016)-4 */
    default:
    break;
  }
  /* END Msg(2:2016)-4 */
}/* End of function Fls_FcuOffsetDataCopy */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name            : Fls_FcuErasePreCheck
**
** Service ID               : NA
**
** Description              : Function to Check if Erase Job shall be initiated
**
** Sync/Async               : Synchronous
**
** Re-entrancy              : Re-entrant
**
** Input Parameters         : None
**
** InOut Parameters         : None
**
** Output Parameters        : Fls_FcuStatusType
**
** Return parameter         : LenStatus
**
** Preconditions            : None
**
** Global Variables Used    : None
**
** Function(s) invoked      : None
**
** Registers Used           : FSTATR
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_062 */
FUNC(Fls_FcuStatusType, FLS_PRIVATE_CODE) Fls_FcuErasePreCheck(void)
{
  Fls_FcuStatusType LenStatus;
  /* Checking against error bits */
  /* QAC Warning: START Msg(2:2814)-1 */
  if (FLS_FCU_REGBIT_FSTATR_FRDY != (FACIReg_BaseAddress->ulFSTATR &
                                                    FLS_FCU_ERASE_ERROR_CHECK))
  /* END Msg(2:2814)-1 */
  {
    /* Setting the status as Erase error as error bits are set and
    flash sequencer is in command lock state.*/
    LenStatus = FLS_FCU_ERR_ERASE;
  }
  else
  {
    LenStatus = FLS_FCU_OK;
  }

  return(LenStatus);
}
/* End of function Fls_FcuErasePreCheck */
#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name            : Fls_FcuCheckJobStatus
**
** Service ID               : NA
**
** Description              : This function is called from Fls_MainFunction,
**                            when the command is Erase Operation/ Write
**                            operation.This function checks if the FACI is
**                            ready to accept a new command and checks if any
**                            error bits are set after completion of a job.
**
** Sync/Async               : Synchronous
**
** Reentrancy               : NA
**
** Input Parameters         : None
**
** InOut Parameters         : None
**
** Output Parameters        : Fls_FcuStatusType(FLS_FCU_BUSY, FLS_FCU_OK,
**                            FLS_FCU_ERR_WRITE, FLS_FCU_ERR_ERASE)
**
** Return parameter         : LenStatus
**
** Preconditions            : None
**
** Global Variables Used    : Fls_GstVar.GucDFStatus(W),
**                            Fls_GblJobSuspendRequest(R),
**                            Fls_GstVar.GucGenCommand(R)
**
** Function(s) invoked      : Fls_FcuSwitchMode,Fls_ProcessSuspend
**
** Registers Used           : FSTATR
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_057 */
FUNC(Fls_FcuStatusType, FLS_PRIVATE_CODE) Fls_FcuCheckJobStatus(void)
{
  /* Variable to hold the Register value */
  volatile uint32 LulRegValue;
  /* Return variable to store DF Status*/
  Fls_FcuStatusType LenStatus;
  LenStatus = FLS_FCU_BUSY;
  /* Get the register value */
  /* QAC Warning: START Msg(2:2814)-1 */
  LulRegValue = FACIReg_BaseAddress->ulFSTATR;
  /* END Msg(2:2814)-1 */
  /* Check if the Job is completed */
  if (FLS_FCU_REGBIT_FSTATR_FRDY == (FLS_FCU_REGBIT_FSTATR_FRDY & LulRegValue))
  {
    LenStatus = FLS_FCU_OK;
    /* Switching Back to User Mode */
    (void)Fls_FcuSwitchMode(FLS_FCU_MODE_USER);

    #if (FLS_SUSPEND_API == STD_ON)
    if (FLS_TRUE == Fls_GblJobSuspendRequest)
    {
      Fls_ProcessSuspend();
    }
    else
    {
      /* No action required */
    }
    #endif
  }
  /* Check if there is any error(Program/Erasure) */
  else if ((uint32)FLS_ZERO != (FLS_FCU_FSTATR_PE_ERROR & LulRegValue))
  {
    if (FLS_COMMAND_ERASE == Fls_GstVar.GucGenCommand)
    {
      LenStatus = FLS_FCU_ERR_ERASE;
    }
    else
    {
      LenStatus = FLS_FCU_ERR_WRITE;
    }
  }
  /* FCU is busy */
  else
  {
    /* No action required */
  }
  /* Store the DF Status */
  Fls_GstVar.GucDFStatus = LenStatus;

  return(LenStatus);
}/* End of function Fls_FcuCheckJobStatus */
#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name            : Fls_FcuCheckBCJobStatus
**
** Service ID               : NA
**
** Description              : This function is called from Fls_MainFunction,
**                            when the command is Blank Check operation.
**                            This function checks if the FACI is ready to
**                            accept a new command.
**
** Sync/Async               : Synchronous
**
** Reentrancy               : NA
**
** Input Parameters         : None
**
** InOut Parameters         : None
**
** Output Parameters        : Fls_FcuStatusType
**
** Return parameter         : LenStatus
**
** Preconditions            : None
**
** Global Variables Used    : Fls_GstVar.GucDFStatus
**
** Function(s) invoked      : None
**
** Registers Used           : FSTATR
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_056 */
FUNC(Fls_FcuStatusType, FLS_PRIVATE_CODE) Fls_FcuCheckBCJobStatus(void)
{
  /* Variable to hold the Register value */
  volatile uint32 LulRegValue;
  /* Return variable to store DF Status*/
  Fls_FcuStatusType LenStatus;
  /* Get the register value */
  /* QAC Warning: START Msg(2:2814)-1 */
  LulRegValue = FACIReg_BaseAddress->ulFSTATR;
  /* END Msg(2:2814)-1 */
  /* Check if the Job is completed */
  if (FLS_FCU_REGBIT_FSTATR_FRDY == (FLS_FCU_REGBIT_FSTATR_FRDY & LulRegValue))
  {
    LenStatus = FLS_FCU_OK;
  }
  /* FCU is busy */
  else
  {
    LenStatus = FLS_FCU_BUSY;
  }
  /* Store the DF Status */
  Fls_GstVar.GucDFStatus = LenStatus;

  return(LenStatus);
}/* End of function Fls_FcuCheckBCJobStatus */
#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name            : Fls_FcuBlankCheckResult
**
** Service ID               : NA
**
** Description              : This function is to the status of Blank Check
**                            Operation
**
** Sync/Async               : Synchronous
**
** Reentrancy               : NA
**
** Input Parameters         : None
**
** InOut Parameters         : None
**
** Output Parameters        : None
**
** Return parameter         : LenBCStatus
**
** Preconditions            : None
**
** Global Variables Used    : None
**
** Function(s) invoked      : None
**
** Registers Used           : FBCSTAT
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_055 */
FUNC(Fls_FcuStatusType, FLS_PRIVATE_CODE) Fls_FcuBlankCheckResult(void)
{
  /* Variable to hold the Register value */
  volatile uint32 LulRegValue;
  /* Variable to hold the status of Blank Check Job*/
  Fls_FcuStatusType LenBCStatus;

  /* QAC Warning: START Msg(2:2814)-1 */
  /* Get the status of Blank Check Operation */
  LulRegValue = FACIReg_BaseAddress->ucFBCSTAT;
  /* END Msg(2:2814)-1 */

  if ((uint32)FLS_FCU_REGBIT_FBCSTAT_BCST != (LulRegValue &
                                          (uint32)FLS_FCU_REGBIT_FBCSTAT_BCST))
  {
    LenBCStatus = FLS_FCU_OK;
  }
  else
  {
    LenBCStatus = FLS_FCU_ERR_BLANKCHECK;
  }

  return(LenBCStatus);

}/* End of function Fls_FcuBlankCheckResult */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name            : Fls_FcuPerformBlankCheck
**
** Service ID               : NA
**
** Description              : This function performs the blank check operation.
**
** Sync/Async               : Asynchronous
**
** Reentrancy               : NA
**
** Input Parameters         : LulStartAddr,Luscount
**
** InOut Parameters         : None
**
** Output Parameters        : None
**
** Return parameter         : LenStatus
**
** Preconditions            : None
**
** Global Variables Used    : None
**
** Function(s) invoked      : Fls_FcuSwitchMode,FLS_FCU_DF_ISSUE_BYTE_CMD
**
** Registers Used           : FSADDR,FEADDR
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_069 */
/* Implements EAAR_PN0034_FSR_0002,EAAR_PN0034_FSR_0001 */
FUNC(Fls_FcuStatusType, FLS_PRIVATE_CODE) Fls_FcuPerformBlankCheck
(const uint32 LulStartAddr, const uint32 Luscount)
{
  Fls_FcuStatusType LenStatus;
  /* QAC Warning: START Msg(2:3204)-5 */
  uint32 LulEndAddr;
  /* END Msg(2:3204)-5 */
  LulEndAddr = ((LulStartAddr + Luscount) - FLS_FCU_ONE);
  /* Switching to P/E Mode */
  LenStatus = Fls_FcuSwitchMode(FLS_FCU_MODE_PE);
  if (FLS_FCU_OK == LenStatus)
  {
    /* Setting BlankCheck Start and End Address */
    FLS_REG_WRITE(FACIReg_BaseAddress->ulFSADDR,LulStartAddr)
    /* For write verification */
    FLS_REG_WRITE_VERIFY_RUNTIME(FACIReg_BaseAddress->ulFSADDR,LulStartAddr,
                            FLS_32BIT_MASK_VAL,FLS_FCUPERFORMBLANKCHECK_API_ID)
    /* Setting BlankCheck End Address */
    FLS_REG_WRITE(FACIReg_BaseAddress->ulFEADDR,
                                        (LulEndAddr & FLS_FEADDR_REG_MASK_VAL))
    /* For write verification */
    FLS_REG_WRITE_VERIFY_RUNTIME(FACIReg_BaseAddress->ulFEADDR,
        (LulEndAddr & FLS_FEADDR_REG_MASK_VAL),FLS_FEADDR_REG_MASK_VAL,
                                         FLS_FCUPERFORMBLANKCHECK_API_ID)
    /* MISRA Violation: START Msg(4:0303)-1 */
    /* Issuing ERASE Command */
    FLS_FCU_DF_ISSUE_BYTE_CMD(FLS_FACI_CMD_BLANKCHECK);
    /* Issuing Confirmation Command */
    FLS_FCU_DF_ISSUE_BYTE_CMD(FLS_FACI_CMD_EXE);
    /* END Msg(4:0303)-1 */
  }
  else
  {
    /* No action required */
  }

  return(LenStatus);
}/* End of function Fls_FcuPerformBlankCheck */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name            : Fls_FcuResetErrorBits
**
** Service ID               : NA
**
** Description              : This function clears the error bits
**                            (erasure error or program error) by issuing Status
**                            Clear Command
**
** Sync/Async               : Synchronous
**
** Re-entrancy              : Non-Reentrant
**
** Input Parameters         : None
**
** InOut Parameters         : None
**
** Output Parameters        : Std_ReturnType
**
** Return parameter         : LenReturnValue
**
** Preconditions            : None
**
** Global Variables Used    : None
**
** Function(s) invoked      : Fls_FcuSwitchMode,Fls_FcuClearStatus
**
** Registers Used           : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_071 */
FUNC(Std_ReturnType, FLS_PRIVATE_CODE) Fls_FcuResetErrorBits(void)
{
  /* Variable to store return variable */
  Std_ReturnType LenReturnValue = E_OK;
  Fls_FcuStatusType LenStatus;
  /* Switching to P/E Mode */
  LenStatus = Fls_FcuSwitchMode(FLS_FCU_MODE_PE);

  if (FLS_FCU_OK == LenStatus)
  {
    /* Issue Clear Status command */
    Fls_FcuClearStatus();

    /* Switching to USER Mode */
    (void)Fls_FcuSwitchMode(FLS_FCU_MODE_USER);
  }
  else
  {
    LenReturnValue = E_NOT_OK;
  }

  return(LenReturnValue);
} /* End of function Fls_FcuResetErrorBits */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#if (FLS_FWCOPY_SUPPORTED == STD_ON)
/*******************************************************************************
** Function Name            : Fls_FcuCopytoRam
**
** Service ID               : NA
**
** Description              : This function copies the FCU Firmware to the
**                            FCURAM and reads the device specific info.
**                            As BFLASH need to be activated to copy code from
**                            firmware to FCU RAM, this function needs to be
**                            mapped in RAM.
**
** Sync/Async               : Synchronous
**
** Reentrancy               : NA
**
** Input Parameters         : None
**
** InOut Parameters         : None
**
** Output Parameters        : None
**
** Return parameter         : None
**
** Preconditions            : None
**
** Global Variables Used    : Fls_GstFcuVar.ulFcuChksumEndAddr
**                             Fls_GstFcuVar.ulFcuChksumVal
**
** Function(s) invoked      : FLS_DF_WRITE32,FLS_DF_READ32,Fls_FcuSwitchBFlash
**                             Fls_FcuClearCache
**
** Registers Used           : None
*******************************************************************************/
#define FLS_START_SEC_PRIVATERAM_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_060 */
FUNC(void, FLS_PRIVATE_CODE) Fls_FcuCopytoRam(void)
{
  uint32 LulFWSrcAddr;
  uint32 LulRAMDestStartAddr;
  uint32 LulData;
  volatile uint32 LulFWSize;
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Disable relevant interrupts to protect this critical section */
  FLS_ENTER_CRITICAL_SECTION(FLS_CODE_FLASH_DISABLED);
  #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
  /* Activate BFlash */
  Fls_FcuSwitchBFlash(FLS_FCU_ENABLE_BFLASH);
  /* MISRA Violation: START Msg(4:0303)-1 */
  Fls_FcuClearCache();
  LulFWSize = FLS_DF_READ32(FLS_FCU_RAM_ADD_CHKSUM_END);
  /*  END Msg(4:0303)-1 */
  Fls_GstFcuVar.ulFcuChksumEndAddr = LulFWSize << FLS_FCU_TWO;
  /* Read FCU RAM checksum and FCU code size */
  Fls_GstFcuVar.ulFcuChksumEndAddr = Fls_GstFcuVar.ulFcuChksumEndAddr +
                                                              FLS_FCU_RAM_ADD;
  /* MISRA Violation: START Msg(4:0303)-1 */
  Fls_GstFcuVar.ulFcuChksumVal  = FLS_DF_READ32(FLS_FCU_RAM_ADD_CHKSUM);
  /*  END Msg(4:0303)-1 */

  /* Copy firmware to RAM - Initialize the complete RAM */
  LulFWSrcAddr       = FLS_FCU_RAM_SRC_ADD;
  LulRAMDestStartAddr = FLS_FCU_RAM_ADD;

  for (; LulRAMDestStartAddr < (FLS_FCU_RAM_ADD + FLS_FCU_RAM_SIZE);
                                         LulRAMDestStartAddr += FLS_FCU_FOUR )
  {
    /* MISRA Violation: START Msg(4:0303)-1 */
    LulData = FLS_DF_READ32(LulFWSrcAddr);
    FLS_DF_WRITE32(LulRAMDestStartAddr,LulData);
    /*  END Msg(4:0303)-1 */
    LulFWSrcAddr += FLS_FCU_FOUR;
  }
  EXECUTE_SYNCP();
  /* Deactivate BFlash */
  Fls_FcuSwitchBFlash(FLS_FCU_DISABLE_BFLASH);
  Fls_FcuClearCache();
  #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Disable relevant interrupts to protect this critical section */
  FLS_EXIT_CRITICAL_SECTION(FLS_CODE_FLASH_DISABLED);
  #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */

 } /* End of function Fls_FcuCopytoRam */

#define FLS_STOP_SEC_PRIVATERAM_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name            : Fls_FcuSwitchBFlash
**
** Service ID               : NA
**
** Description              : This function is used to select and deselect
**                            FCU firmware storage area
**
** Sync/Async               : Synchronous
**
** Reentrancy               : Non-Reentrant
**
** Input Parameters         : LucMode
**
** InOut Parameters         : None
**
** Output Parameters        : None
**
** Return parameter         : None
**
** Preconditions            : None
**
** Global Variables Used    : None
**
** Function(s) invoked      : EXECUTE_SYNCI
**
** Registers Used           : FCUFAREA
*******************************************************************************/
#define FLS_START_SEC_PRIVATERAM_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_074 */
/* Implements EAAR_PN0034_FSR_0002,EAAR_PN0034_FSR_0001 */
/* QAC Warning: START Msg(2:3227)-7*/
FUNC(void, FLS_PRIVATE_CODE) Fls_FcuSwitchBFlash(uint8 LucMode)
{
  /* END Msg(2:3227)-7*/
  /* MISRA Violation: START Msg(3:3203)-6 */
  volatile uint8 LucModeVal;
  FLS_REG_WRITE(FLS_FCUFAREA,LucMode)
  /* MISRA Violation: START Msg(4:0303)-1 */
  /* MISRA Violation: START Msg(4:4461)-2 */
  /* Dummy read to the register to ensure data reached the register
  (wait one APB access cycle) */
  LucModeVal = FLS_FCUFAREA;
  /*  END Msg(4:0303)-1 */
  /*  END Msg(4:4461)-2 */
  /* END Msg(3:3203)-6 */
  /* For write verification */
  FLS_REG_WRITE_VERIFY_INIT(FLS_FCUFAREA,LucMode,FLS_FCUFAREA_MASK_VAL,
                                                            FLS_INIT_API_ID)
  EXECUTE_SYNCP();
  EXECUTE_SYNCI();

} /* End of function Fls_FcuSwitchBFlash */

#define FLS_STOP_SEC_PRIVATERAM_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name            : Fls_FcuClearCache
**
** Service ID               : NA
**
** Description              : This function clears the cache, depending on the
**                            available core
**
** Sync/Async               : Synchronous
**
** Reentrancy               : NA
**
** Input Parameters         : None
**
** InOut Parameters         : None
**
** Output Parameters        : None
**
** Return parameter         : None
**
** Preconditions            : None
**
** Global Variables Used    : None
**
** Function(s) invoked      : __STSR, __LDSR
**
** Registers Used           : ICCTRL,CDBCR
*******************************************************************************/
#define FLS_START_SEC_PRIVATERAM_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_058 */
/* Implements EAAR_PN0034_FSR_0013 */
FUNC(void, FLS_PRIVATE_CODE) Fls_FcuClearCache(void)
{
  uint32 LulSrVal;
  /* clear instruction cache */
  LulSrVal = STSR (FLS_FCU_SYSTEM_REGISTER_ICCTRL);
  /* set bit 8 (ICHCLR) of system register ICCTRL to 1 to clear instruction
   cache */
  LulSrVal |= FLS_FCU_REGBIT_ICHCLR;
  LDSR(FLS_FCU_SYSTEM_REGISTER_ICCTRL, LulSrVal);
  /* MISRA Violation: START Msg(4:2982)-3 */
  /* Dummy read to system register to complete the operation*/
  LulSrVal = STSR(FLS_FCU_SYSTEM_REGISTER_ICCTRL);
  /*  END Msg(4:2982)-3 */

  /* G3M core -> clear sharing data buffer */
  LulSrVal = STSR(FLS_FCU_SYSTEM_REGISTER_CDBCR);
  /* set bit 1 (CDBCLR) of system register CDBCR to 1 to clear the buffer */
  LulSrVal |= FLS_FCU_TWO;
  LDSR(FLS_FCU_SYSTEM_REGISTER_CDBCR, LulSrVal);
  /* Dummy read to system register to complete the operation*/
  (void)STSR(FLS_FCU_SYSTEM_REGISTER_CDBCR);

  EXECUTE_SYNCI();

} /* End of function Fls_FcuClearCache */
#define FLS_STOP_SEC_PRIVATERAM_CODE
#include "MemMap.h"
#endif /* #if (FLS_FWCOPY_SUPPORTED == STD_ON) */
/*******************************************************************************
** Function Name            : Fls_FcuWritePreCheck
**
** Service ID               : NA
**
** Description              : This Function checks if Write Job shall be
**                            initiated
**
** Sync/Async               : Synchronous
**
** Re-entrancy              : Re-entrant
**
** Input Parameters         : None
**
** InOut Parameters         : None
**
** Output Parameters        : Fls_FcuStatusType
**
** Return parameter         : LenStatus
**
** Preconditions            : None
**
** Global Variables Used    : None
**
** Function(s) invoked      : None
**
** Registers Used           : FSTATR
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_077 */
FUNC(Fls_FcuStatusType, FLS_PRIVATE_CODE) Fls_FcuWritePreCheck(void)
{
  Fls_FcuStatusType LenStatus;
  /* Checking against error bits */
  /* QAC Warning: START Msg(2:2814)-1 */
  if (FLS_FCU_REGBIT_FSTATR_FRDY != (FACIReg_BaseAddress->ulFSTATR &
                                                    FLS_FCU_WRITE_ERROR_CHECK))
  /* END Msg(2:2814)-1 */
  {
    /* Setting the status as Write error as error bits are set and
    flash sequencer is in command lock state.*/
    LenStatus = FLS_FCU_ERR_WRITE;
  }
  else
  {
    LenStatus = FLS_FCU_OK;
  }

  return(LenStatus);
} /* End of function Fls_FcuWritePreCheck */
#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name             : Fls_FcuCheckSequencerStatus
**
** Service ID                : NA
**
** Description               : This function checks the FRDY bit and if
**                             there is a cmd lock based on time out values.

** Sync/Async                : Synchronous
**
** Re-entrancy               : Re-entrant
**
** Input Parameters          : None
**
** InOut Parameters          : None
**
** Output Parameters         : Fls_FcuStatusType
**
** Return parameter          : LenStatus
**
** Preconditions             : None
**
** Global Variables Used     : None
**
** Function(s) invoked       : None
**
** Registers Used            : FSTATR
*******************************************************************************/
#define FLS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_142 */
FUNC(Fls_FcuStatusType, FLS_PRIVATE_CODE) Fls_FcuCheckSequencerStatus(void)
{
  Fls_FcuStatusType LenStatus;
  uint32 LulTimeout;
  boolean LblFrdyCheck;
  /* Flash sequencer 'Command Lock' state */
  boolean LblCmdLockCheck;

  LenStatus = FLS_FCU_ERR_INTERNAL;
  LulTimeout = FLS_FCU_FRDY_POOL_COUNT;
  /* Processing of command in progress in flash sequencer */
  LblFrdyCheck = FLS_FALSE;

  do
  {
    /* QAC Warning: START Msg(2:2814)-1 */
    /* Check if FRDY bit in FSTATR register is set */
    if ((FACIReg_BaseAddress->ulFSTATR & FLS_FCU_REGBIT_FSTATR_FRDY)
                                                           != FLS_FCU_ZERO)
    {
      /* END Msg(2:2814)-1 */
      LblFrdyCheck = FLS_TRUE;
    }
    else
    {
      LulTimeout--;
    }
  } while ((FLS_FALSE == LblFrdyCheck) && (FLS_FCU_ZERO < LulTimeout));

  /* If FRDY bit is set, check for CMDLK bit */
  if (FLS_TRUE == LblFrdyCheck)
  {
    /* QAC Warning: START Msg(2:3892)-8 */
    /* QAC Warning: START Msg(2:2814)-1 */
    /* Check if CMDLK bit in FASTAT register is set */
    if ((FACIReg_BaseAddress->ucFASTAT & FLS_FCU_REGBIT_FASTAT_CMDLK)
                                                              != FLS_ZERO)
    {
      /* END Msg(2:2814)-1 */
      /* END Msg(2:3892)-8 */
      LblCmdLockCheck = FLS_TRUE;
    }
    else
    {
      LblCmdLockCheck = FLS_FALSE;
    }
  }
  else
  {
    /* FLS_FCU_ERR_INTERNAL */
  }

  if ((FLS_TRUE == LblFrdyCheck) && (FLS_FALSE == LblCmdLockCheck))
  {
    LenStatus = FLS_FCU_OK;
  }
  else
  {
    /* FLS_FCU_ERR_INTERNAL */
  }

  return(LenStatus);
} /* End of function Fls_FcuCheckSequencerStatus */

#define FLS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
/*******************************************************************************
**                           End of File                                      **
*******************************************************************************/
