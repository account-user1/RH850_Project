/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Fls.c                                                       */
/* $Revision: 368686 $                                                        */
/* $Date: 2017-02-27 11:49:45 +0000 (Mon, 27 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains API implementations of Fls Driver Component.            */
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
 *                              functionality removed and library related
 *                              functionality are made incorporated to private
 *                              functions.
 *
 * V1.0.2:  27-Feb-2017    : The following changes are made:
 *                           1) W.r.t Jira ARDAAAF-913, Fls_MainFunction API is
 *                              updated.
 *                           2) W.r.t Jira ARDAAAF-548, Fls_Suspend API is
 *                              modified to check current command.
 *                           3) W.r.t Jira ARDAAAF-907, Pre compile switches
 *                              are corrected,removed switch FLS_INTERRUPT_MODE.
 *                           4) W.r.t Jira ARDAAAF-898, Fls_Suspend API is
 *                              modified.
 *                           5) W.r.t Jira ARDAAAF-770, justification for
 *                              QAC Warnings are added.
 *                           6) W.r.t Jira ARDAAAF-1257, DET implementation is
 *                              updated.
 *                           7) W.r.t Jira ARDAAAF-1382,'FLS_UT_001'
 *                              Tag added for the non-covered
 *                              parts of the code.
 *                           8) W.r.t Jira ARDAAAF-1251, updated data type for
 *                              "TargetAddressPtr" in Fls_Read and
 *                              Fls_ReadImmediate APIs.
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* Included for module version information and other types declarations */
#include "Fls.h"
/* Included for the macro declaration of supervisor mode(SV) write enabled
    Registers IMR */
#include "rh850_Types.h"
/* Included prototypes for internal functions of Flash Wrapper Component */
#include "Fls_Internal.h"
/* Included for RAM variable declarations */
#include "Fls_Ram.h"
/* Included for declaration of the function Dem_ReportErrorStatus() */
#include "Dem.h"
/* Included for Prototype Declaration for Callback Notification functions */
#include "Fls_Cbk.h"
#if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
/* Included for the declaration of the critical section protection functions */
#include "SchM_Fls.h"
#endif  /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
#if (FLS_DEV_ERROR_DETECT == STD_ON)
/* Included for the declaration of Det_ReportError() */
#include "Det.h"
#endif /* #if (FLS_DEV_ERROR_DETECT == STD_ON) */
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* Functionality related to R4.0 */
/* AUTOSAR release version information */
#define FLS_C_AR_RELEASE_MAJOR_VERSION     FLS_AR_RELEASE_MAJOR_VERSION_VALUE
#define FLS_C_AR_RELEASE_MINOR_VERSION     FLS_AR_RELEASE_MINOR_VERSION_VALUE
#define FLS_C_AR_RELEASE_REVISION_VERSION  FLS_AR_RELEASE_REVISION_VERSION_VALUE

/* File version information */
#define FLS_C_SW_MAJOR_VERSION      1
#define FLS_C_SW_MINOR_VERSION      0

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/

  /* Functionality related to R4.0 */
  #if (FLS_AR_RELEASE_MAJOR_VERSION != FLS_C_AR_RELEASE_MAJOR_VERSION)
    #error "Fls.c : Mismatch in Release Major Version"
  #endif

#if (FLS_AR_RELEASE_MINOR_VERSION != FLS_C_AR_RELEASE_MINOR_VERSION)
  #error "Fls.c : Mismatch in Release Minor Version"
#endif

#if (FLS_AR_RELEASE_REVISION_VERSION != FLS_C_AR_RELEASE_REVISION_VERSION)
  #error "Fls.c : Mismatch in Release Revision Version"
#endif


#if (FLS_SW_MAJOR_VERSION != FLS_C_SW_MAJOR_VERSION)
  #error "Fls.c : Mismatch in Software Major Version"
#endif

#if (FLS_SW_MINOR_VERSION != FLS_C_SW_MINOR_VERSION)
  #error "Fls.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/

/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/

/******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:4397) An expression which is the result of a ~ or <<    */
/*                 operation has not been cast to its essential type.         */
/* Rule          : MISRA-C:2004 Rule 10.5                                     */
/* Justification : The expression has no reliance on the effects of integral  */
/*                 promotion.                                                 */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:4397)-1 and                           */
/*                 END Msg(4:4397)-1 tags in the code.                        */
/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0310) Casting to different object pointer type.         */
/* Rule          : MISRA-C:2004 Rule 11.4                                     */
/* Justification : This is to get the value to pointer.                       */
/* Verification  : However, this part of the code is verified  manually and   */
/*                 it is not having any impact.                               */
/* Reference     : Look for START Msg(4:0310)-2 and                           */
/*                 END Msg(4:0310)-2 tags in the code.                        */
/******************************************************************************/
/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0306) [I] Cast between a pointer to object and an       */
/*                 integral type.                                             */
/* Rule          : MISRA-C:2004 Rule 3.1 and 11.3                             */
/* Justification : The input addresses specified by the pointers are converted*/
/*                 to addresses for storing into the registers and for        */
/*                 reading purposes.                                          */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0306)-3 and                           */
/*                 END Msg(4:0306)-3 tags in the code.                        */
/******************************************************************************/
/* 4. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2996) The result of this logical operation is always    */
/*                 'false'.                                                   */
/* Rule          : MISRA-C:2004 13.7                                          */
/* Justification : Condition check is for all use cases and the warning is    */
/*                 for only particular configuration.                         */
/* Verification  : However, this part of the code is verified manually and it */
/*                 is not having any impact.                                  */
/* Reference     : Look for START Msg(4:2996)-4 and                           */
/*                 END Msg(4:2996)-4 tags in the code.                        */
/******************************************************************************/
/* 5. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2984) This operation appears to be redundant because a  */
/*                 given constant value can always be used instead.           */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : The result of the operation depends on the configuration   */
/*                 parameters, the value of the result may vary depending on  */
/*                 the configuration used.                                    */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2984)-5 and                           */
/*                 END Msg(4:2984)-5 tags in the code.                        */
/******************************************************************************/
/* 6. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2992) The value of the controlling expression in this   */
/*                 'if' statement is always zero. The contained code is       */
/*                  therefore unreachable.                                    */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : The result of the operation depends on the configuration   */
/*                 parameters, the value of the result may vary depending on  */
/*                 the configuration used.                                    */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2992)-6 and                           */
/*                 END Msg(4:2992)-6 tags in the code.                        */
/******************************************************************************/
/******************************************************************************/
/* 7. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2880) This statement will never be executed             */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : The result of the operation depends on the configuration   */
/*                 parameters, the value of the result may vary depending on  */
/*                 the configuration used.                                    */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2880)-7 and                           */
/*                 END Msg(4:2880)-7 tags in the code.                        */
/******************************************************************************/
/******************************************************************************/
/* 8. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3673) The object addressed by the pointer parameter     */
/*                 'TargetAddressPtr' is not modified and so the pointer could*/
/*                 be of type 'pointer to const'.                             */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : The function parameters of AUTOSAR APIs cannot be modified */
/*                 to be made as constant.                                    */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3673)-8 and                           */
/*                 END Msg(4:3673)-8 tags in the code.                        */
/******************************************************************************/

/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       : (2:3227) The value of this function parameter is never     */
/*                 modified. It could be declared with the 'const' type       */
/*                 Qualifier.                                                 */
/* Justification : The function parameters of AUTOSAR APIs cannot be modified */
/*                 to be made as constant.                                    */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3227)-1 and END Msg(2:3227)-1 tags in */
/*                 the code.                                                  */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message       : (2:2814) Possible: Dereference of NULL pointer.            */
/* Justification : The Pointers generated using Post Build configurations may */
/*                 not be NULL.                                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2814)-2 and END Msg(2:2814)-2 tags in */
/*                 the code.                                                  */
/******************************************************************************/
/* 3. QAC Warning:                                                            */
/* Message       : (2:2016) This 'switch' statement 'default' clause is empty.*/
/* Justification : No action is required for default statements. Hence it is  */
/*                 left empty.                                                */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2016)-3 and END Msg(2:2016)-3 tags in */
/*                 the code.                                                  */
/******************************************************************************/
/* 4. QAC Warning:                                                            */
/* Message       : (2:0862) #include "MemMap.h" directive is redundant.       */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files is done within the code.              */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/
/* 5. QAC Warning:                                                            */
/* Message       : (2:3892) The result of this cast is implicitly converted to*/
/*                 another type.                                              */
/*                 REFERENCE - ISO:C90-6.3.2.1 Semantics                      */
/* Justification : This is to get the value to pointer.                       */
/* Verification  : However, this part of the code is verified  manually and   */
/*                 it is not having any impact.                               */
/* Reference     : Look for START Msg(2:3892)-5 and END Msg(2:3892)-5 tags in */
/*                 the code.                                                  */
/******************************************************************************/
/* 6. QAC Warning:                                                            */
/* Message       : (2:3204) This variable is only set once and so it could    */
/*                 be declared with the 'const' qualifier.                    */
/* Justification : These variables cannot be declared with 'const' qualifier  */
/*                 since these variables are subjected to change in each      */
/*                 cycle of Fls_MainFunction call.                            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any safety impact.                              */
/* Reference     : Look for START Msg(2:3204)-6 and                           */
/*                 END Msg(2:3204)-6 tags in the code.                        */
/******************************************************************************/
/* 7. QAC Warning:                                                            */
/* Message       : Msg(2:1475) Range of possible enum values suggests this    */
/*                 test is always true.                                       */
/* Justification : Value of this variable depends on user input that may make */
/*                 this test false.                                           */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:1475)-7 and END Msg(2:1475)-7 tags    */
/*                 in the code.                                               */
/******************************************************************************/
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
** Function Name             : Fls_Init
**
** Service ID                : 0x00
**
** Description               : This API performs the initialization of the FLS
**                             Driver Component.
**
** Sync/Async                : Synchronous
**
** Reentrancy                : Non Reentrant
**
** Input Parameters          : ConfigPtr
**
** InOut Parameters          : None
**
** Output Parameters         : None
**
** Return parameter          : None
**
** Preconditions             : None
**
** Global Variables Used     : Fls_GenState, Fls_GenJobResult,
**                             Fls_GstVar.GucGenCommand, Fls_GpConfigPtr,
**                             Fls_GstVar.GulRequestedLength,
**                             Fls_GstVar.GulCurrentLength,
**                             Fls_GblFlashEnable, Fls_GblInitStatus,
**                             Fls_GstVar.GucOffset,
**                             Fls_GstVar.GucReadType,Fls_GenCurrentMode
**                             Fls_GblVerifyCompletedJob
**
** Function(s) invoked       : Det_ReportError,Fls_FcuInit,Fls_PreFcuInitCheck,
**                             Fls_SetFHVE,Fls_ClearBackUpData
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_082 */
/* Implements FLS_ESDD_UD_030 */
/* Implements FLS_ESDD_UD_031 */
/* Implements FLS_ESDD_UD_037 */
/* Implements FLS_ESDD_UD_038 */
/* Implements FLS014,FLS249,FLS268,FLS323,FLS015,FLS324,FLS086,FLS191,FLS311 */
/* Implements AR_PN0072_FR_0010,AR_PN0072_FR_0009 */
FUNC(void, FLS_PUBLIC_CODE) Fls_Init
/* QAC Warning: START Msg(2:3227)-1*/
(P2CONST(Fls_ConfigType, AUTOMATIC, FLS_APPL_CONST) ConfigPtr)
{
  /* END Msg(2:3227)-1*/
  /* Implements FLS_ESDD_UD_003 */
  /* Local variable to hold the return value */
  Std_ReturnType LenReturnValue;
   /* Implements FLS_ESDD_UD_043 */
  /* Local variable to hold the ECC status during Fls_PreFcuInitCheck() */
  Fls_FcuStatusType LenECCStatus;
  Fls_GstVar.GucDFStatus = FLS_FCU_ERR_REJECTED;
  LenReturnValue = E_OK;
  /* Check if the Configuration pointer is NULL pointer */
  if (NULL_PTR == ConfigPtr)
  {
    /* Implements FLS_ESDD_UD_035 */
    /* Implements FLS_ESDD_UD_026 */
    /* Report Error to Det */
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                            FLS_INIT_SID, FLS_E_PARAM_CONFIG);
    #endif
    /* Reset return value to E_NOT_OK due to failure */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  if (E_OK == LenReturnValue)
  {
    /* MISRA Violation: START Msg(4:4397)-1 */
    if (FLS_DBTOC_VALUE != (ConfigPtr->ulStartOfDbToc))
    {
      /* END Msg(4:4397)-1 */
      /* Implements FLS_ESDD_UD_035 */
      /* Report Error to DET */
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                             FLS_INIT_SID, FLS_E_INVALID_DATABASE);
      #endif
      /* Reset return value to E_NOT_OK due to failure */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
  }
  else
  {
    /* No action required */
  }
  if (MEMIF_BUSY == Fls_GenState)
  {
    /* Implements FLS_ESDD_UD_035 */
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* Report to DET that the driver is currently busy */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                                  FLS_INIT_SID, FLS_E_BUSY);
    #endif
    /* Reset return value to E_NOT_OK due to failure */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
     /* No action required */
  }
  if (E_OK == LenReturnValue)
  {
    /* Assign the Config pointer value to global pointer */
    Fls_GpConfigPtr  = ConfigPtr;

    /* Verify ECC control register settings */
    LenECCStatus = Fls_PreFcuInitCheck();
    /* Data flash initialization */
    Fls_FcuInit();
    /* Check the Result of Environment Preparation */
    if ((FLS_FCU_OK == Fls_GstVar.GucDFStatus)&&(FLS_FCU_OK == LenECCStatus))
    {
      /* Initialize the global variable offset to zero */
      Fls_GstVar.GucOffset = FLS_ZERO;
      Fls_GstVar.GucReadType = FLS_MISALIGNED_READ;
      /* Set the driver status to idle */
      Fls_GenState = MEMIF_IDLE;
      /* set the job result as OK */
      Fls_GenJobResult = MEMIF_JOB_OK;
      /* Initialize the global variable general command to None */
      Fls_GstVar.GucGenCommand = FLS_COMMAND_NONE;
      /* QAC Warning: START Msg(2:2814)-2 */
      /* Initialize the Driver Mode with configured Default Mode */
      Fls_GenCurrentMode = Fls_GpConfigPtr->ddDefaultMode;
      /* END Msg(2:2814)-2 */
      #if (FLS_TIMEOUT_MONITORING == STD_ON)
      Fls_GulTimeOutCounter = FLS_TIMEOUT_INIT_VALUE;
      #endif /* #if (FLS_TIMEOUT_MONITORING == STD_ON)*/
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      Fls_GblVerifyCompletedJob = FLS_FALSE;
      #endif /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */

      /* Initialize the global variables requested length and current length
      length to zero. */
      Fls_GstVar.GulRequestedLength = (uint32)FLS_ZERO;
      Fls_GstVar.GulCurrentLength = (uint32)FLS_ZERO;
      #if ((FLS_SUSPEND_API == STD_ON) || (FLS_RESUME_API == STD_ON))
      Fls_GblJobSuspended = FLS_FALSE;
      Fls_ClearBackUpData();
      #endif /* End of #if ((FLS_SUSPEND_API == STD_ON) ||
                                                (FLS_RESUME_API == STD_ON)) */
      #if (FLS_SUSPEND_API == STD_ON)
      Fls_GblJobSuspendRequest = FLS_FALSE;
      #endif /* #if (FLS_SUSPEND_API == STD_ON) */
      /* Enable Write/Erase protection settings */
      #if (FLS_FHVE_REGS == SUPPORTED)
      /* Enable the flash memory software protection */
      Fls_SetFHVE(FLS_FLASH_PROTECTION_ON);
      /* Initialize the global variable flash enable to False */
      Fls_GblFlashEnable = FLS_FALSE;
      #endif /* End of #if (FLS_FHVE_REGS == SUPPORTED) */
      /*
      * Set the driver initialization status as completed.
      * This initialization is required only when DET is enabled.
      */
      Fls_GblInitStatus = FLS_INITIALIZED;
    }
    else
    {
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /* Report error to DET if the component is not initialized */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                          FLS_INIT_SID, FLS_E_UNINIT);
      #endif /* #if (FLS_DEV_ERROR_DETECT == STD_ON) */
    }
  }
  else
  {
    /* No action required */
  }
} /* End of API Fls_Init */

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name             : Fls_Erase
**
** Service ID                : 0x01
**
** Description               : This API will erase the one or more complete
**                             flash sectors.
**
** Sync/Async                : Asynchronous
**
** Reentrancy                : Non Reentrant
**
** Input Parameters          : TargetAddress, Length
**
** InOut Parameters          : None
**
** Output Parameters         : None
**
** Return parameter          : Std_ReturnType
**                             E_OK: If Erase command has been accepted.
**                             E_NOT_OK: If Erase command has not been accepted.
**
** Preconditions             : Component must be initialized using Fls_Init().
**
** Global Variables Used     : Fls_GblInitStatus, Fls_GenState,
**                             Fls_GstVar.GucGenCommand, Fls_GenJobResult,
**                             Fls_GstVar.GulJobStartAddress,Fls_GpConfigPtr
**                             Fls_GstVar.GulJobEndAddress,
**                             Fls_GstVar.GulRequestedLength,
**                             Fls_GstVar.GulSrcDestAddress
**
** Function(s) invoked       : Det_ReportError,Fls_InitiateEraseJob
**                             Fls_ProcessJobResult,Fls_SetFHVE,Fls_GetIntReq
**                             Fls_ClearIntReq,Fls_FcuSuspendCheck
**                             Fls_DetErrorCheck
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_053 */
/* Implements FLS145,FLS020,FLS327,FLS220,FLS330,FLS021,FLS218,FLS023,FLS221 */
/* Implements FLS250,FLS328,FLS329 */
/* Implements AR_PN0072_FR_0005 */
FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Erase
        (Fls_AddressType TargetAddress, Fls_LengthType Length)
{
  /* Local variable to hold the DET return value */
  Std_ReturnType LenReturnValue;
  /* Local variable to hold lower bound of FLS accessible data flash */
  uint32 LulLowerTargetAddr;
  /* Local variable to hold upper bound of FLS accessible data flash */
  uint32 LulUpperTargetAddr;
   /* Implements FLS_ESDD_UD_052 */
  /* Invoking function to check whether driver is initialised/busy */
  LenReturnValue = Fls_DetErrorCheck(FLS_ERASE_SID);
  if (E_OK == LenReturnValue)
  {
    /* Lower bound of FLS accessible data flash */
    LulLowerTargetAddr = (uint32)FLS_DF_SECTOR_START_ADDRESS - \
                                                  (uint32)FLS_DF_BASE_ADDRESS;
    /* MISRA Violation: START Msg(4:2984)-5 */
    /* Upper bound of FLS accessible data flash */
    LulUpperTargetAddr = LulLowerTargetAddr + ((uint32)FLS_DF_TOTAL_SIZE - \
                                                               (uint32)FLS_ONE);
    /* END Msg(4:2984)-5 */
    /* Check if the start address is lies within the specified lower and */
    /* upper flash address boundaries. */
    /* MISRA Violation: START Msg(4:2996)-4 */
    if ((LulLowerTargetAddr > TargetAddress) || \
        (LulUpperTargetAddr < TargetAddress) || ((uint32)FLS_ZERO != \
        (TargetAddress & ((uint32)FLS_DF_BLOCK_SIZE - (uint32)FLS_ONE))))
    {
      /* END Msg(4:2996)-4 */
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /* Implements FLS_ESDD_UD_035 */
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                        FLS_ERASE_SID, FLS_E_PARAM_ADDRESS);
      #endif
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* Virtual address is mapped to physical address */
      TargetAddress = TargetAddress + FLS_DF_BASE_ADDRESS;

      #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Disable relevant interrupts to protect this critical section */
      FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
      #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */

      /* Calculate the erase start and end addresses */
      Fls_GstVar.GulJobStartAddress = TargetAddress;
      Fls_GstVar.GulJobEndAddress = (TargetAddress + Length) - \
                                                               (uint32)FLS_ONE;

      #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Enable relevant interrupts to exit this critical section */
      FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
      #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
      /* check if the erase length is greater than 0 and the erase end address*/
      /* is aligned to a flash sector boundary and that it lies within the*/
      /* specified upper flash address boundary.*/
      if (((uint32)FLS_ZERO == Length) || (((Fls_GstVar.GulJobEndAddress - \
          (uint32)FLS_DF_SECTOR_START_ADDRESS) + (uint32)FLS_ONE) > \
          (uint32)FLS_DF_TOTAL_SIZE) || ((uint32)FLS_ZERO !=  \
          ((TargetAddress + Length) & \
                                ((uint32)FLS_DF_BLOCK_SIZE - (uint32)FLS_ONE))))
      {
        #if (FLS_DEV_ERROR_DETECT == STD_ON)
        /* Implements FLS_ESDD_UD_117 */
        /* Report error to DET */
        (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                             FLS_ERASE_SID, FLS_E_PARAM_LENGTH);
        #endif
        /* Reset return value to E_NOT_OK due to failure */
        LenReturnValue = E_NOT_OK;
      }
      else
      {
        /* No action required */
      }
      if (E_OK == LenReturnValue)
      {
        /* MISRA Violation: START Msg(4:2996)-4 */
        /* MISRA Violation: START Msg(4:2992)-6 */
        /* MISRA Violation: START Msg(4:2984)-5 */
        /* Adjusting the End Address to multiples of Block Size */
        /*Start FLS_UT_001 */
        if ((uint32)FLS_ZERO != (Length & ((uint32)FLS_DF_BLOCK_SIZE -
                                                        (uint32)FLS_ONE)))
        {
          /* MISRA Violation: START Msg(4:2880)-7 */
          Length = (Length + ((uint32)FLS_DF_BLOCK_SIZE - (uint32)FLS_ONE)) &
                                  (~((uint32)(FLS_DF_BLOCK_SIZE - FLS_ONE)));
          Fls_GstVar.GulJobEndAddress = (TargetAddress + Length) -
                                                                (uint32)FLS_ONE;
          /* END Msg(4:2880)-7 */
        }
        /*End FLS_UT_001 */
        /* END Msg(4:2984)-5 */
        /* END Msg(4:2992)-6 */
        /* END Msg(4:2996)-4 */
        else
        {
          /* No action required */
        }
        /* Copy the adjusted Job length to Fls_GstVar structure */
        Fls_GstVar.GulRequestedLength = Length;
        #if (FLS_DEV_ERROR_DETECT == STD_ON)
        /* Store the Job address for Fls_InitiateBlankCheckJob() */
        Fls_GstVar.GulSrcDestAddress = Fls_GstVar.GulJobStartAddress;
        #endif /* End of #if (FLS_DEV_ERROR_DETECT == STD_ON) */
        /* Set the command as Erase command */
        Fls_GstVar.GucGenCommand = FLS_COMMAND_ERASE;
        #if (FLS_SUSPEND_API == STD_ON)
        LenReturnValue = Fls_FcuSuspendCheck(FLS_COMMAND_ERASE);
        if (E_OK == LenReturnValue)
        #endif /* #if (FLS_SUSPEND_API == STD_ON) */
        {
          /* Initiate Erase Job */
          LenReturnValue = Fls_InitiateEraseJob();
        }
        #if (FLS_SUSPEND_API == STD_ON)
        else
        {
          #if (FLS_DEV_ERROR_DETECT == STD_ON)
          /* Report to DET if Write/Erase Job is previously suspended */
          (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                FLS_ERASE_SID, FLS_E_BUSY);
          #endif/* #if ((FLS_DEV_ERROR_DETECT == STD_ON)) */
        }
        #endif /* #if ((FLS_SUSPEND_API == STD_ON) */
        /* Check for the status is FLS_FCU_OK */
        if (E_NOT_OK == LenReturnValue)
        {
          Fls_ProcessJobResult(MEMIF_JOB_FAILED);
        }
        else
        {
          /* Set the job result to Job pending */
          Fls_GenJobResult = MEMIF_JOB_PENDING;
          /* Set the driver state as Busy */
          Fls_GenState = MEMIF_BUSY;
        }
      }
     else
      {
        /* No action required */
      }
    }
  }
  else
  {
    /* No action required */
  }
  return(LenReturnValue);
}/* End of API Fls_Erase */

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name             : Fls_Write
**
** Service ID                : 0x02
**
** Description               : This API performs programming of one or more
**                             complete flash pages of the flash device. The
**                             data from input buffer (source address) is
**                             written to the flash pointed by the target offset
**                             .The target address must be aligned to flash page
**                             boundary.
**
** Sync/Async                : Asynchronous
**
** Reentrancy                : Non Reentrant
**
** Input Parameters          : TargetAddress, SourceAddressPtr, Length
**
** InOut Parameters          : None
**
** Output Parameters         : None
**
** Return parameter          : Std_ReturnType
**                             E_OK: if Write command has been accepted.
**                             E_NOT_OK: if Write command has not been accepted.
**
** Preconditions             : Component must be initialized using Fls_Init().
**
** Global Variables Used     : Fls_GblInitStatus,Fls_GpConfigPtr
**                             Fls_GstVar.GucGenCommand, Fls_GenState,
**                             Fls_GenJobResult,Fls_GstVar.GulCurrentLength,
**                             Fls_GstVar.pBufferAddress,
**                             Fls_GstVar.GulRequestedLength
**                             Fls_GstVar.GulJobStartAddress
**                             Fls_GstVar.GulJobEndAddress
**
** Function(s) invoked       : Det_ReportError,Fls_ProcessJobResult,
**                             Fls_InitiateWriteJob,Fls_GetIntReq,
**                             Fls_ClearIntReq,Fls_FcuSuspendCheck,
**                             Fls_DetErrorCheck
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_114 */
/* Implements FLS_ESDD_UD_039 */
/* Implements FLS_ESDD_UD_040 */
/* Implements FLS030,FLS225,FLS066,FLS251,FLS157,FLS334,FLS226,FLS026,FLS331 */
/* Implements FLS332,FLS333,FLS146 */
/* Implements AR_PN0072_FR_0044,AR_PN0072_FR_0006 */
FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Write
/* QAC Warning: START Msg(2:3227)-1*/
(Fls_AddressType TargetAddress,
P2CONST(uint8, AUTOMATIC, FLS_APPL_CONST) SourceAddressPtr,
Fls_LengthType Length)
{
  /* END Msg(2:3227)-1*/
  /* Local variable to hold the DET return value */
  Std_ReturnType LenReturnValue;
  /* Local variable to hold lower bound of FLS accessible data flash */
  uint32 LulLowerTargetAddr;
  /* Local variable to hold upper bound of FLS accessible data flash */
  uint32 LulUpperTargetAddr;
  /* Invoking function to check whether driver is initialised/busy */
  LenReturnValue = Fls_DetErrorCheck(FLS_WRITE_SID);
  if (E_OK == LenReturnValue)
  {
    /* Lower bound of FLS accessible data flash */
    LulLowerTargetAddr = (uint32)FLS_DF_SECTOR_START_ADDRESS - \
                                                  (uint32)FLS_DF_BASE_ADDRESS;
    /* MISRA Violation: START Msg(4:2984)-5 */
    /* Upper bound of FLS accessible data flash */
    LulUpperTargetAddr = LulLowerTargetAddr + ((uint32)FLS_DF_TOTAL_SIZE - \
                                                               (uint32)FLS_ONE);
    /* END Msg(4:2984)-5 */
    /* Check if the write start address is aligned to a flash page boundary*/
    /* and lies within the specified lower and upper flash address*/
    /* boundaries*/
    /* MISRA Violation: START Msg(4:2996)-4 */
    if ((LulLowerTargetAddr > TargetAddress) || \
        (LulUpperTargetAddr < TargetAddress) || ((uint32)FLS_ZERO != \
                 (TargetAddress & ((uint32)FLS_PAGE_SIZE - (uint32)FLS_ONE))))
    {
      /* END Msg(4:2996)-4 */
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /* Implements FLS_ESDD_UD_035 */
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                        FLS_WRITE_SID, FLS_E_PARAM_ADDRESS);
      #endif /* #if (FLS_DEV_ERROR_DETECT == STD_ON) */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* Virtual address is mapped to physical address */
      TargetAddress = TargetAddress + FLS_DF_BASE_ADDRESS;
      #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Disable relevant interrupts to protect this critical section */
      FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
      #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
      /* Get the write start and end address */
      Fls_GstVar.GulJobStartAddress = TargetAddress;
        Fls_GstVar.GulJobEndAddress = (TargetAddress + Length) - \
                                                                (uint32)FLS_ONE;
      /* Set the global variables with length */
      Fls_GstVar.GulCurrentLength = Length;
      /* Set the global variable with application buffer pointer */
      Fls_GstVar.pBufferAddress = SourceAddressPtr;
      #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Enable relevant interrupts to exit this critical section */
      FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
      #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
      /* Implements FLS_ESDD_UD_019 */
      /* Implements FLS_ESDD_UD_018 */
      /* Implements FLS_ESDD_UD_020 */
      /* Check if the write start address is aligned to a flash page boundary */
      /* and lies within the specified lower and upper flash address          */
      /* boundaries.                                                          */
      if (((uint32)FLS_ZERO == Length) || (((TargetAddress + Length) & \
          ((uint32)FLS_PAGE_SIZE - (uint32)FLS_ONE)) != (uint32)FLS_ZERO) || \
          (((Fls_GstVar.GulJobEndAddress -  \
          (uint32)FLS_DF_SECTOR_START_ADDRESS) + (uint32)FLS_ONE) > \
          (uint32)FLS_DF_TOTAL_SIZE))
      {
        #if (FLS_DEV_ERROR_DETECT == STD_ON)
        /* Implements FLS_ESDD_UD_035 */
        /* Report error to DET */
        (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                         FLS_WRITE_SID, FLS_E_PARAM_LENGTH);
        #endif
        /* Set Return Value as E_NOT_OK */
        LenReturnValue = E_NOT_OK;
      }
      else
      {
        /* No action required */
      }
      /* Check whether the application buffer is a null pointer */
      if (NULL_PTR == SourceAddressPtr)
      {
        #if (FLS_DEV_ERROR_DETECT == STD_ON)
        /* Report error to DET */
        (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                              FLS_WRITE_SID, FLS_E_PARAM_DATA);
        #endif
        /* Set Return Value as E_NOT_OK */
        LenReturnValue = E_NOT_OK;
      }
      else
      {
        /* No action required */
      }
      /* Check whether any error is reported to DET */
      if (E_OK == LenReturnValue)
      {
        /* Set the command as Write command */
        Fls_GstVar.GucGenCommand = FLS_COMMAND_WRITE;
        #if (FLS_SUSPEND_API == STD_ON)
        LenReturnValue = Fls_FcuSuspendCheck(FLS_COMMAND_WRITE);
        if (E_OK == LenReturnValue)
        #endif /* End of #if (FLS_SUSPEND_API == STD_ON) */
        {
          /* Initiate Write Job */
          LenReturnValue = Fls_InitiateWriteJob();
        }
        #if (FLS_SUSPEND_API == STD_ON)
        else
        {
          #if (FLS_DEV_ERROR_DETECT == STD_ON)
          /* Report to DET if Write Job is previously suspended */
          (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                FLS_WRITE_SID, FLS_E_BUSY);
          #endif /* #if (FLS_DEV_ERROR_DETECT == STD_ON) */
        }
        #endif /* #if (FLS_SUSPEND_API == STD_ON) */

        /* Check for the status is FLS_FCU_OK */
        if (E_NOT_OK == LenReturnValue)
        {
          Fls_ProcessJobResult(MEMIF_JOB_FAILED);
        }
        else
        {
          /* Set the job result to Job pending */
          Fls_GenJobResult = MEMIF_JOB_PENDING;
          /* Set the driver state as Busy */
          Fls_GenState = MEMIF_BUSY;
        }
      }
      else
      {
        /* No action required */
      }
    }
  }
  else
  {
    /* No action required */
  }
  return(LenReturnValue);
}/* End of API Fls_Write */

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_023 */
#if (FLS_CANCEL_API == STD_ON)
/*******************************************************************************
** Function Name              : Fls_Cancel
**
** Service ID                 : 0x03
**
** Description                : This API cancels the on going job. The driver
**                              state is set to MEMIF_IDLE and the job result to
**                              MEMIF_JOB_CANCELED if a job is currently
**                              being processed.
**
** Sync/Async                 : Synchronous
**
** Reentrancy                 : Non Reentrant
**
** Input Parameters           : None
**
** InOut Parameters           : None
**
** Output Parameters          : None
**
** Return parameter           : None
**
** Preconditions              : Component must be initialized using Fls_Init().
**
** Global Variables Used      : Fls_GblInitStatus,Fls_GstVar.GucGenCommand,
**                              Fls_GenJobResult,Fls_GblJobSuspended
**                              Fls_GenState, Fls_GpConfigPtr
**
** Function(s) invoked        : Det_ReportError,Fls_ProcessCancel
**                              Fls_GpConfigPtr->pJobErrorNotificationPointer,
**                              Fls_RestoreIntReq,Fls_ClearBackUpData
**
** Registers Used             : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_047 */
/* Implements FLS356,FLS147,FLS033,FLS252,FLS335,FLS336 */
/* Implements AR_PN0072_FR_0011 */
FUNC(void, FLS_PUBLIC_CODE)Fls_Cancel(void)
{
  /* Local variable to hold the FLS command to be cancelled */
  Fls_CommandType LenCmdToCancel;
  /* Implements FLS_ESDD_UD_035 */
  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                          FLS_CANCEL_SID, FLS_E_UNINIT);
    #endif
  }
  else
  {
    /* Cancel Job only if the job is on going */
    #if ((FLS_SUSPEND_API == STD_ON) || (FLS_RESUME_API == STD_ON))
    if ((MEMIF_JOB_PENDING == Fls_GenJobResult)  ||
                 (FLS_COMMAND_NONE != Fls_GstBackUpVar.GucGenCommand))
    #else
    if (MEMIF_JOB_PENDING == Fls_GenJobResult)
    #endif /* #if ((FLS_SUSPEND_API == STD_ON) || (FLS_RESUME_API == STD_ON)) */
    {
      #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Disable relevant interrupts to protect this critical section */
      FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
      #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
      /* Determine the FLS command to be cancelled */
      #if ((FLS_SUSPEND_API == STD_ON) || (FLS_RESUME_API == STD_ON))
      if (FLS_COMMAND_NONE != Fls_GstBackUpVar.GucGenCommand)
      {
        LenCmdToCancel = Fls_GstBackUpVar.GucGenCommand;
      }
      else
      #endif /* #if ((FLS_SUSPEND_API == STD_ON) || \
                                          (FLS_RESUME_API == STD_ON))) */
      {
        LenCmdToCancel = Fls_GstVar.GucGenCommand;
      }
      switch (LenCmdToCancel)
      {
        case FLS_COMMAND_ERASE:
        case FLS_COMMAND_WRITE:
        case FLS_COMMAND_BLANKCHECK:
          /* Call Fls_ProcessCancel to Stop the FCU processing */
          Fls_ProcessCancel();
          /* Set the Driver State to IDLE */
          Fls_GenState = MEMIF_IDLE;
          if (FLS_FCU_CANCELED == Fls_GstVar.GucDFStatus)
          {
            /* Set the Job Result to MEMIF_JOB_CANCELED */
            Fls_GenJobResult = MEMIF_JOB_CANCELED;
          }
          else
          {
            Dem_ReportErrorStatus(FLS_E_HW_FAILURE,DEM_EVENT_STATUS_FAILED);
            /* Set the Job Result to MEMIF_JOB_FAILED */
            Fls_GenJobResult = MEMIF_JOB_FAILED;
          }
        break;
        case FLS_COMMAND_READ:
        case FLS_COMMAND_COMPARE:
        case FLS_COMMAND_READ_IMM:
          /* Set the Driver State to IDLE */
          Fls_GenState = MEMIF_IDLE;
          /* Set the Job Result to MEMIF_JOB_CANCELED */
          Fls_GenJobResult = MEMIF_JOB_CANCELED;
        break;
        /* QAC Warning: START Msg(2:2016)-3 */
        default:
          /* No action required */
        break;
      }
      /* END Msg(2:2016)-3 */
      /* Clear the Command Variable */
      Fls_GstVar.GucGenCommand = FLS_COMMAND_NONE;
      #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Enable relevant interrupts to exit this critical section */
      FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
      #endif /* End of #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
      #if (FLS_JOB_NOTIF_CONFIG == STD_ON)
      /* If job ended with error and call the JOB end call back function */
      Fls_CallJobNotification();
      #endif /* End of #if (FLS_JOB_NOTIF_CONFIG == STD_ON) */
      #if ((FLS_SUSPEND_API == STD_ON) || (FLS_RESUME_API == STD_ON))
      /* Clear any Suspended Job */
      Fls_GblJobSuspended = FLS_FALSE;
      Fls_ClearBackUpData();
      #endif /* End of #if ((FLS_SUSPEND_API == STD_ON) || \
                                                 (FLS_RESUME_API == STD_ON)) */
    }
    else
    {
      /* No action required */
    }
  }
} /* End of API Fls_Cancel */
#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* End of #if (FLS_CANCEL_API == STD_ON) */
/* Implements FLS_ESDD_UD_025 */
#if (FLS_GET_STATUS_API == STD_ON)
/*******************************************************************************
** Function Name             : Fls_GetStatus
**
** Service ID                : 0x04
**
** Description               : This API Returns the FLS module state
**                             synchronously.
**
** Sync/Async                : Synchronous
**
** Reentrancy                : Reentrant
**
** Input Parameters          : None
**
** InOut Parameters          : None
**
** Output Parameters         : None
**
** Return parameter          : MemIf_StatusType
**
** Preconditions             : Component must be initialized using Fls_Init().
**
** Global Variables Used     : Fls_GblInitStatus,Fls_GenState
**
** Function(s) invoked       : Det_ReportError
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_080 */
/* Implements FLS357,FLS253,FLS034 */
FUNC(MemIf_StatusType, FLS_PUBLIC_CODE)Fls_GetStatus(void)
{
  /* Local variable to hold the driver status */
  MemIf_StatusType LenStatus;
  /* Implements FLS_ESDD_UD_035 */
  /* Local variable to hold the DET return value */
  Std_ReturnType LenReturnValue;
  /* Set local variable with the default return value */
  LenStatus = MEMIF_UNINIT;
  /* Set local variable with the default DET return value */
  LenReturnValue = E_OK;
  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                            FLS_GET_STATUS_SID, FLS_E_UNINIT);
    #endif
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Check whether any error reported to DET */
  if (E_OK == LenReturnValue)
  {
    /* Read the current state of the driver */
    LenStatus = Fls_GenState;
  }
  else
  {
    /* No action required */
  }
  /* return the current state of the driver */
  return(LenStatus);
} /* End of API Fls_GetStatus */

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* End of #if (FLS_GET_STATUS_API == STD_ON) */
/* Implements FLS_ESDD_UD_029 */
#if (FLS_GET_JOB_RESULT_API == STD_ON)
/*******************************************************************************
** Function Name             : Fls_GetJobResult
**
** Service ID                : 0x05
**
** Description               : This API returns the result of the last job.
**                             All erase, write, read and compare jobs share the
**                             same job result. Every new job accepted by the
**                             flash driver  overwrites the job result with
**                             MEMIF_JOB_PENDING.
**
** Sync/Async                : Synchronous
**
** Reentrancy                : Reentrant
**
** Input Parameters          : None
**
** InOut Parameters          : None
**
** Output Parameters         : None
**
** Return parameter          : MemIf_JobResultType
**
** Preconditions             : Component must be initialized using Fls_Init().
**
** Global Variables Used     : Fls_GblInitStatus, Fls_GenJobResult
**
** Function(s) invoked       : Det_ReportError
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_078 */
/* Implements FLS254,FLS358,FLS035 */
/* Implements AR_PN0072_FR_0013 */
FUNC(MemIf_JobResultType, FLS_PUBLIC_CODE)Fls_GetJobResult(void)
{
  /* Local variable to hold the job result */
  MemIf_JobResultType LenJobResult;
  /* Declare the variable to hold the DET return value */
  Std_ReturnType LenReturnValue;
  /* Set local variable with the default value */
  LenJobResult = MEMIF_JOB_FAILED;
  /* Set the default DET return value */
  LenReturnValue = E_OK;
  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    /* Implements FLS_ESDD_UD_119 */
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                         FLS_GET_JOB_RESULT_SID, FLS_E_UNINIT);
    #endif
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Check whether any error reported to DET */
  if (E_OK == LenReturnValue)
  {
    /* Read the job status */
    LenJobResult = Fls_GenJobResult;
  }
  else
  {
    /* No action required */
  }
  /* Return the job result */
  return(LenJobResult);
} /* End of API Fls_GetJobResult */

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* End of #if (FLS_GET_JOB_RESULT_API == STD_ON)*/
/*******************************************************************************
** Function Name             : Fls_MainFunction
**
** Service ID                : 0x06
**
** Description               : This API performs the job processing of erase,
**                             write, read and compare jobs. This API is called
**                             cyclically until the job is processed completely.
**
** Sync/Async                : NA
**
** Reentrancy                : Non Reentrant
**
** Input Parameters          : None
**
** InOut Parameters          : None
**
** Output Parameters         : None
**
** Return parameter          : None
**
** Preconditions             : Component must be initialized using Fls_Init().
**
** Global Variables Used     : Fls_GblInitStatus,Fls_GstVar.GucGenCommand,
**                             Fls_GenState,Fls_GstVar.GucDFStatus,
**                             Fls_GblTimeOutMonitor
**
** Function(s) invoked       : Det_ReportError, Fls_MainErase, Fls_MainWrite
**                             Fls_MainBlankCheck, Fls_MainRead, Fls_MainCompare
**                             Fls_MainReadImm, Fls_TimeOutCheckAndProcessing
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_089 */
/* Implements FLS105,FLS022,FLS345,FLS359,FLS346,FLS104,FLS055,FLS235,FLS196 */
/* Implements FLS154,FLS037,FLS272,FLS117,FLS039,FLS200,FLS362,FLS360,FLS056 */
FUNC(void, FLS_PUBLIC_CODE)Fls_MainFunction(void)
{

  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* Implements FLS_ESDD_UD_035 */
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                           FLS_MAINFUNCTION_SID, FLS_E_UNINIT);
    #endif /* #if (FLS_DEV_ERROR_DETECT == STD_ON) */
  }
  else
  {
    /* Check if any job is being processed */
    if (MEMIF_BUSY == Fls_GenState)
    {
      /* Implements FLS_ESDD_UD_028 */
      #if (FLS_TIMEOUT_MONITORING == STD_ON)
      if (FLS_TRUE == Fls_GblTimeOutMonitor)
      {
        Fls_TimeOutCheckAndProcessing();
      }
      else
      {
        /* No action Required */
      }
      #endif /* #if (FLS_TIMEOUT_MONITORING == STD_ON) */

      switch (Fls_GstVar.GucGenCommand)
      {
        case FLS_COMMAND_ERASE :

           Fls_MainErase();
        break;

        case FLS_COMMAND_WRITE :

          Fls_MainWrite();
        break;

        case FLS_COMMAND_BLANKCHECK :

          Fls_MainBlankCheck();
        break;

        case FLS_COMMAND_READ :
          Fls_MainRead();
        break;
        /* Implements FLS_ESDD_UD_005 */
        #if (FLS_COMPARE_API == STD_ON)
        case FLS_COMMAND_COMPARE :
          Fls_MainCompare();
        break;
        #endif /* #if (FLS_COMPARE_API == STD_ON) */
        /* Implements FLS_ESDD_UD_006 */
        #if (FLS_READIMMEDIATE_API == STD_ON)
        case FLS_COMMAND_READ_IMM :
          Fls_MainReadImm();
        break;
        #endif /* #if (FLS_READIMMEDIATE_API == STD_ON) */
        /* QAC Warning: START Msg(2:2016)-3 */
        default:
          /* No action required */
        break;
      }
      /* END Msg(2:2016)-3 */
    }
    else
    {
      /* No action required */
    }
  }
} /* End of API Fls_MainFunction */

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
/*******************************************************************************
** Function Name             : Fls_Read
**
** Service ID                : 0x07
**
** Description               : This API performs the reading of the flash memory
**                             The data from flash memory (source address) is
**                             read to the data buffer (Target address) of the
**                             application.
**
** Sync/Async                : Asynchronous
**
** Reentrancy                : Non Reentrant
**
** Input Parameters          : SourceAddress, Length
**
** InOut Parameters          : None
**
** Output Parameters         : TargetAddressPtr
**
** Return parameter          : Std_ReturnType
**                             E_OK: if Read command has been accepted.
**                             E_NOT_OK: if Read command has not been accepted.
**
** Preconditions             : Component must be initialized using Fls_Init().
**
** Global Variables Used     : Fls_GblInitStatus,Fls_GstVar.pTempBufferAddress,
**                             Fls_GstVar.GulReadAddress,
**                             Fls_GstVar.pBufferAddress, Fls_GulTempBuffer
**                             Fls_GstVar.GulRequestedLength,
**                             Fls_GstVar.GulCurrentLength,
**                             Fls_GstVar.GucGenCommand, Fls_GenState,
**                             Fls_GenJobResult,Fls_GstVar.GucOffset
**
**  Function(s) invoked      : Det_ReportError,Fls_DetErrorCheck
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_103 */
/* Implements FLS099,FLS339,FLS337,FLS100,FLS240,FLS236,FLS098,FLS338,FLS239 */
/* Implements FLS158,FLS097 */
FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Read
/* MISRA Violation: START Msg(4:3673)-8 */
/* QAC Warning: START Msg(2:3227)-1*/
(Fls_AddressType SourceAddress,
P2VAR(uint8, AUTOMATIC, FLS_APPL_DATA) TargetAddressPtr,
Fls_LengthType Length)
{
  /* END Msg(2:3227)-1*/
  /* END Msg(4:3673)-8 */
  /* QAC Warning: START Msg(2:3204)-6 */
  Std_ReturnType LenReturnValue;
  /* END Msg(2:3204)-6 */
  /* Local variable to hold lower bound of FLS accessible data flash */
  uint32 LulLowerSourceAddr;
  /* Local variable to hold upper bound of FLS accessible data flash */
  uint32 LulUpperSourceAddr;
  /* Invoking function to check whether driver is initialised/busy */
  LenReturnValue = Fls_DetErrorCheck(FLS_READ_SID);
  if (E_OK == LenReturnValue)
  {
    /* Lower bound of FLS accessible data flash */
    LulLowerSourceAddr =(uint32)FLS_DF_SECTOR_START_ADDRESS - \
                                                  (uint32)FLS_DF_BASE_ADDRESS;
    /* MISRA Violation: START Msg(4:2984)-5 */
    /* Upper bound of FLS accessible data flash */
    LulUpperSourceAddr = LulLowerSourceAddr + ((uint32)FLS_DF_TOTAL_SIZE - \
                                                               (uint32)FLS_ONE);
    /* END Msg(4:2984)-5 */
    /* Check if the read start address is lies within the specified lower and
     * upper flash address boundaries.
     */
    /* MISRA Violation: START Msg(4:2996)-4 */
    if ((LulLowerSourceAddr > SourceAddress) || \
                                         (LulUpperSourceAddr < SourceAddress))
    {
      /* END Msg(4:2996)-4 */
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /* Implements FLS_ESDD_UD_035 */
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                            FLS_READ_SID, FLS_E_PARAM_ADDRESS);
      #endif
      /* Reset return value to E_NOT_OK due to failure */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* Virtual address is mapped to physical address */
      SourceAddress = SourceAddress + FLS_DF_BASE_ADDRESS;
      #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Disable relevant interrupts to protect this critical section */
      FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
      #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
      /* Global variable to hold the read start address */
      Fls_GstVar.GulReadAddress = SourceAddress;
      #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Enable relevant interrupts to exit this critical section */
      FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
      #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
      /* Check if the read length is greater than 0 and that the read end */
      /* address (read start address + length) lies within the specified upper*/
      /* flash address boundary.*/
      if (((uint32)FLS_ZERO == Length) || (((Fls_GstVar.GulReadAddress - \
          (uint32)FLS_DF_SECTOR_START_ADDRESS) + Length) > \
        (uint32)FLS_DF_TOTAL_SIZE))
      {
        #if (FLS_DEV_ERROR_DETECT == STD_ON)
        /* Implements FLS_ESDD_UD_035 */
        /* Report error to DET */
        (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                              FLS_READ_SID, FLS_E_PARAM_LENGTH);
        #endif
        /* Set Return Value as E_NOT_OK */
        LenReturnValue = E_NOT_OK;
      }
      else
      {
        /* No action required */
      }
      /* Check whether the target address pointer is a null pointer */
      if (NULL_PTR == TargetAddressPtr)
      {
        /* Implements FLS_ESDD_UD_035 */
        #if (FLS_DEV_ERROR_DETECT == STD_ON)
        /* Report error to DET */
        (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                                FLS_READ_SID, FLS_E_PARAM_DATA);
        #endif
        /* Set Return Value as E_NOT_OK */
        LenReturnValue = E_NOT_OK;
      }
      else
      {
        /* No action required */
      }
      /* Check whether any error is reported to DET */
      if (E_OK == LenReturnValue)
      {
        #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* Disable relevant interrupts to protect this critical section */
        FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
        #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
        /* Set the global variable with length of bytes to be processed */
        Fls_GstVar.GulRequestedLength = Length;
        /* Implements FLS_ESDD_UD_021 */
        /* Get the offset value by masking the source address with page size */
        Fls_GstVar.GucOffset = (uint8)(SourceAddress &
                                          (FLS_PAGE_SIZE - FLS_ONE));
        /* Check whether offset value is not zero */
        if (FLS_ZERO != Fls_GstVar.GucOffset)
        {
          /*
          * Round off the source address value to the page boundary by
          * subtracting the offset value.
          */
          Fls_GstVar.GulReadAddress = SourceAddress -
                                                     Fls_GstVar.GucOffset;
          /* Increment the length with offset value */
          Length = Length + Fls_GstVar.GucOffset;
        }
        else
        {
          /* No action required */
        }
        /* Check whether length is not aligned to the page boundary */
        if ((uint32)FLS_ZERO != (Length & (FLS_PAGE_SIZE - FLS_ONE)))
        {
          /* Implements FLS_ESDD_UD_021 */
          /* Round off the length value to the page boundary */
          Length = Length + ((uint32)FLS_PAGE_SIZE -
                             (Length & (FLS_PAGE_SIZE - FLS_ONE)));
        }
        else
        {
          /* No action required */
        }
        /* MISRA Violation: START Msg(4:0310)-2 */
        /* QAC Warning: START Msg(2:3892)-5 */
        Fls_GstVar.pTempBufferAddress = (const uint8 *) &
                                               Fls_GulTempBuffer[FLS_ZERO];
        /* END Msg(4:0310)-2 */
        /* END Msg(2:3892)-5 */
        /* Initialize the global variable with target address and length */
        Fls_GstVar.pBufferAddress = TargetAddressPtr;
        /* Set the current length of bytes to be processed */
        Fls_GstVar.GulCurrentLength = Length;
        /* Set the command for Read operation */
        Fls_GstVar.GucGenCommand = FLS_COMMAND_READ;
        /* set the driver state to busy */
        Fls_GenState = MEMIF_BUSY;
        /* set the job result as pending */
        Fls_GenJobResult = MEMIF_JOB_PENDING;
        #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* Enable relevant interrupts to exit this critical section */
        FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
        #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
      }
      else
      {
        /* No action required */
      }
    }
  }
  else
  {
    /* No action required */
  }
  return(LenReturnValue);
} /* End of API Fls_Read */
#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_005 */
#if (FLS_COMPARE_API == STD_ON)
/*******************************************************************************
** Function Name             : Fls_Compare
**
** Service ID                : 0x08
**
** Description               : This API Fls_Compare shall compare the contents
**                             of an area of flash memory with that of an
**                             application data buffer.
**
** Sync/Async                : Asynchronous
**
** Reentrancy                : Non Reentrant
**
** Input Parameters          : SourceAddress, TargetAddressPtr, Length
**
** InOut Parameters          : None
**
** Output Parameters         : None
**
** Return parameter          : Std_ReturnType
**                             E_OK: if Compare command has been accepted.
**                             E_NOT_OK: if Compare command has not been
**                             accepted.
**
** Preconditions             : Component must be initialized using Fls_Init().
**
** Global Variables Used     : Fls_GblInitStatus, Fls_GenState,
**                             Fls_GstVar.GulSrcDestAddress,
**                             Fls_GstVar.pBufferAddress, Fls_GulTempBuffer,
**                             Fls_GstVar.GulRequestedLength,
**                             Fls_GstVar.GulCurrentLength,
**                             Fls_GstVar.GucGenCommand,Fls_GenJobResult,
**                             Fls_GstVar.GucOffset,
**                             Fls_GstVar.pTempBufferAddress
**
** Function(s) invoked       : Det_ReportError
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_049 */
/* Implements FLS257,FLS151,FLS152,FLS241,FLS153,FLS341,FLS343,FLS244,FLS150 */
/* Implements FLS273,FLS342,FLS344 */
FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_Compare
/* QAC Warning: START Msg(2:3227)-1*/
(Fls_AddressType SourceAddress,
P2CONST(uint8, AUTOMATIC, FLS_APPL_CONST) TargetAddressPtr,
Fls_LengthType Length)
{
  /* END Msg(2:3227)-1*/
  /* Local variable to hold the DET return value */
  /* QAC Warning: START Msg(2:3204)-6 */
  Std_ReturnType LenReturnValue;
    /* END Msg(2:3204)-6 */
  /* Local variable to hold lower bound of FLS accessible data flash */
  uint32 LulLowerSourceAddr;
  /* Local variable to hold upper bound of FLS accessible data flash */
  uint32 LulUpperSourceAddr;
  /* Invoking function to check whether driver is initialised/busy */
  LenReturnValue = Fls_DetErrorCheck(FLS_COMPARE_SID);
  if (E_OK == LenReturnValue)
  {
    /* Virtual address is mapped to physical address */
    LulLowerSourceAddr =(uint32)FLS_DF_SECTOR_START_ADDRESS -  \
                                                  (uint32)FLS_DF_BASE_ADDRESS;
    /* MISRA Violation: START Msg(4:2984)-5 */
    /* Upper bound of FLS accessible data flash */
    LulUpperSourceAddr = LulLowerSourceAddr + ((uint32)FLS_DF_TOTAL_SIZE - \
                                                               (uint32)FLS_ONE);
    /* END Msg(4:2984)-5 */
    /* Check if the compare start address lies within the specified lower*/
    /* and upper flash address boundaries.*/
    /* MISRA Violation: START Msg(4:2996)-4 */
    if ((LulLowerSourceAddr > SourceAddress) || \
                                         (LulUpperSourceAddr < SourceAddress))
    {
      /* END Msg(4:2996)-4 */
      /* Implements FLS_ESDD_UD_035 */
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                          FLS_COMPARE_SID, FLS_E_PARAM_ADDRESS);
      #endif
      /* Reset return value to E_NOT_OK due to failure */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* Virtual address is mapped to physical address */
      SourceAddress = SourceAddress + FLS_DF_BASE_ADDRESS;
      /* Initialize the global variable with the source address */
      Fls_GstVar.GulReadAddress = SourceAddress;
      /* Check if the compare length is greater than zero and that the */
      /* compare end address (compare start address + length) lies */
      /* within the specified upper flash address boundary. */
      if (((uint32)FLS_ZERO == Length) || (((Fls_GstVar.GulReadAddress - \
          (uint32)FLS_DF_SECTOR_START_ADDRESS) + Length)
                                                  > (uint32)FLS_DF_TOTAL_SIZE))
      {
        /* Implements FLS_ESDD_UD_035 */
        #if (FLS_DEV_ERROR_DETECT == STD_ON)
        /* Report error to DET */
        (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                           FLS_COMPARE_SID, FLS_E_PARAM_LENGTH);
        #endif
        /* Set Return Value as E_NOT_OK */
        LenReturnValue = E_NOT_OK;
      }
      else
      {
        /* No action required */
      }
      /* Check whether the target address pointer is a null pointer */
      if (NULL_PTR == TargetAddressPtr)
      {
        /* Implements FLS_ESDD_UD_035 */
        #if (FLS_DEV_ERROR_DETECT == STD_ON)
        /* Report error to DET */
        (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                             FLS_COMPARE_SID, FLS_E_PARAM_DATA);
        #endif
        /* Set Return Value as E_NOT_OK */
        LenReturnValue = E_NOT_OK;
      }
      else
      {
        /* No action required */
      }
      /* Check whether any error is reported to DET */
      if (E_OK == LenReturnValue)
      {
        #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* Disable relevant interrupts to protect this critical section */
        FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
        #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
        /* Set the global variable with length of bytes to be processed */
        Fls_GstVar.GulRequestedLength = Length;
        /* Implements FLS_ESDD_UD_021 */
        /* Get the offset value by masking the source address with page size */
        Fls_GstVar.GucOffset = (uint8)(SourceAddress &
                                          (FLS_PAGE_SIZE - FLS_ONE));
        /* Check whether offset value is not zero */
        if (FLS_ZERO != Fls_GstVar.GucOffset)
        {
          /*
          * Round off the source address value to the page boundary by
          * subtracting the offset value.
          */
          Fls_GstVar.GulReadAddress = SourceAddress -
                                                     Fls_GstVar.GucOffset;
          /* Increment the length with offset value */
          Length = Length + Fls_GstVar.GucOffset;
        }
        else
        {
          /* No action required */
        }
        /* Implements FLS_ESDD_UD_021 */
        /* Check whether length is not aligned to the page boundary */
        if ((uint32)FLS_ZERO != (Length & (FLS_PAGE_SIZE - FLS_ONE)))
        {
          /* Implements FLS_ESDD_UD_021 */
          /* Round off the length value to the page boundary */
          Length = Length + ((uint32)FLS_PAGE_SIZE -
                             (Length & (FLS_PAGE_SIZE - FLS_ONE)));
        }
        else
        {
          /* No action required */
        }
        /* MISRA Violation: START Msg(4:0310)-2 */
        /* QAC Warning: START Msg(2:3892)-5 */
        Fls_GstVar.pTempBufferAddress =
                                     (const uint8*)&Fls_GulTempBuffer[FLS_ZERO];
        /* END Msg(4:0310)-2 */
        /* END Msg(2:3892)-5 */
        /* Initialize the global variable with target address and length */
        Fls_GstVar.pBufferAddress = TargetAddressPtr;
        /* Set the current length of bytes to be processed */
        Fls_GstVar.GulCurrentLength = Length;
        /* Set the command as compare command */
        Fls_GstVar.GucGenCommand = FLS_COMMAND_COMPARE;
        /* set the driver state to busy */
        Fls_GenState = MEMIF_BUSY;
        /* set the job result as pending */
        Fls_GenJobResult = MEMIF_JOB_PENDING;
        #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* Enable relevant interrupts to exit this critical section */
        FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
        #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
      }

      else
      {
        /* No action required */
      }
    }
  }
  else
  {
    /* No action required */
  }

  return(LenReturnValue);
} /* End of API Fls_Compare */

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* #if (FLS_COMPARE_API == STD_ON) */
/* Implements FLS_ESDD_UD_024 */
#if (FLS_SET_MODE_API == STD_ON)
/*******************************************************************************
** Function Name             : Fls_SetMode
**
** Service ID                : 0x09
**
** Description               : This API sets the flash driver operation mode.
**
** Sync/Async                : Synchronous
**
** Reentrancy                : NA
**
** Input Parameters          : Mode
**
** InOut Parameters          : None
**
** Output Parameters         : None
**
** Return parameter          : None
**
** Preconditions             : None
**
** Global Variables Used     : Fls_GblInitStatus,Fls_GenState,Fls_GenCurrentMode
**
** Function(s) invoked       : Det_ReportError
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_111 */
/* Implements FLS_ESDD_UD_034 */
/* Implements FLS156,FLS258 */
/* Implements AR_PN0072_FR_0020 */

/* QAC Warning: START Msg(2:3227)-1*/
FUNC(void, FLS_PUBLIC_CODE) Fls_SetMode(MemIf_ModeType LenMode)
{
  /* END Msg(2:3227)-1*/
  /* Local variable to hold the DET return value */
  Std_ReturnType LenReturnValue;
  /* Invoking function to check whether driver is initialised/busy */
  LenReturnValue = Fls_DetErrorCheck(FLS_SET_MODE_SID);
  /* Set the Mode if no DET is reported */
  if (E_OK == LenReturnValue)
  {
    /* QAC Warning: START Msg(2:1475)-7*/
    /* Check LenMode has a value within the range */
    if (LenMode <= MEMIF_MODE_FAST)
    /* END Msg(2:1475)-7*/
    {
      Fls_GenCurrentMode = LenMode;
    }
    else
    {
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                         FLS_SET_MODE_SID, FLS_E_PARAM_CONFIG);
      #endif
    }
  }
  else
  {
    /* No action required */
  }
}/* End of API Fls_SetMode */

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* #if (FLS_SET_MODE_API == STD_ON) */
/* Implements FLS_ESDD_UD_022 */
/* Implements FLS_ESDD_UD_027 */
#if (FLS_VERSION_INFO_API == STD_ON)
/*******************************************************************************
** Function Name             : Fls_GetVersionInfo
**
** Service ID                : 0x10
**
** Description               : This API returns the version information of
**                             this module.
**
** Sync/Async                : Synchronous
**
** Reentrancy                : Reentrant
**
** Input Parameters          : None
**
** InOut Parameters          : None
**
** Output Parameters         : VersioninfoPtr - Pointer to where to store the
**                             version information of this module.
**
** Return parameter          : None
**
** Preconditions             : None
**
** Global Variables Used     : None
**
** Function(s) invoked       : Det_ReportError
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_081 */
/* Implements FLS259,FLS363,FLS311 */
FUNC(void, FLS_PUBLIC_CODE) Fls_GetVersionInfo
/* QAC Warning: START Msg(2:3227)-1*/
(P2VAR(Std_VersionInfoType, AUTOMATIC, FLS_APPL_DATA)versioninfo)
{
  /* END Msg(2:3227)-1*/

  /* Check if parameter passed is equal to Null pointer */
  if (NULL_PTR == versioninfo)
  {
    /* Implements FLS_ESDD_UD_035 */
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* Report to DET  */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                 FLS_GET_VERSION_INFO_SID, FLS_E_PARAM_POINTER);
    #endif
  }
  else
  {
    /* QAC Warning: START Msg(2:2814)-2 */
    /* Copy the vendor Id */
    versioninfo->vendorID = (uint16)FLS_VENDOR_ID;
    /* END Msg(2:2814)-2 */
    /* Copy the module Id */
    versioninfo->moduleID = (uint16)FLS_MODULE_ID;
    /* Copy Software Major Version */
    versioninfo->sw_major_version = FLS_SW_MAJOR_VERSION;
    /* Copy Software Minor Version */
    versioninfo->sw_minor_version = FLS_SW_MINOR_VERSION;
    /* Copy Software Patch Version */
    versioninfo->sw_patch_version = FLS_SW_PATCH_VERSION;
  }
}/* End of API Fls_GetVersionInfo */
#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* #if (FLS_VERSION_INFO_API == STD_ON) */
/* Implements FLS_ESDD_UD_006 */
#if (FLS_READIMMEDIATE_API == STD_ON)
/*******************************************************************************
** Function Name             : Fls_ReadImmediate
**
** Service ID                : 0x11
**
** Description               : This API performs the reading of the flash
**                             memory. The data from flash memory
**                             (source address) is read to the data buffer
**                             (Target address) of application without
**                             performing blank check before read.
**
** Sync/Async                : Asynchronous
**
** Reentrancy                : Non Reentrant
**
** Input Parameters          : SourceAddress, Length
**
** InOut Parameters          : None
**
** Output Parameters         : TargetAddressPtr
**
** Return parameter          : Std_ReturnType
**                             E_OK: if Read command has been accepted.
**                             E_NOT_OK: if Read command has not been accepted.
**
** Preconditions             : Component must be initialized using Fls_Init().
**
** Global Variables Used     : Fls_GblInitStatus, Fls_GstVar.GulReadAddress,
**                             Fls_GstVar.pBufferAddress,
**                             Fls_GstVar.GulCurrentLength,
**                             Fls_GstVar.GucGenCommand, Fls_GenState,
**                             Fls_GenJobResult,
**                             Fls_GstVar.GucReadType
**
**  Function(s) invoked      : Det_ReportError,Fls_ReadMisAlignHandler
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_105 */
/* Implements AR_PN0072_FR_0041 */
FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_ReadImmediate
/* QAC Warning: START Msg(2:3227)-1*/
/* MISRA Violation: START Msg(4:3673)-8 */
(Fls_AddressType SourceAddress,
P2VAR(uint8, AUTOMATIC, FLS_APPL_DATA) TargetAddressPtr,
Fls_LengthType Length)
{
  /* END Msg(4:3673)-8 */
  /* END Msg(2:3227)-1*/
  /* Local variable to hold the DET return value */
  /* QAC Warning: START Msg(2:3204)-6 */
  Std_ReturnType LenReturnValue;
  /* END Msg(2:3204)-6 */
  /* Local variable to hold lower bound of FLS accessible data flash */
  uint32 LulLowerSourceAddr;
  /* Local variable to hold upper bound of FLS accessible data flash */
  uint32 LulUpperSourceAddr;
  /* Invoking function to check whether driver is initialised/busy */
  LenReturnValue = Fls_DetErrorCheck(FLS_READ_IMM_SID);
  if (E_OK == LenReturnValue)
  {
    /* Lower bound of FLS accessible data flash */
    LulLowerSourceAddr =(uint32)FLS_DF_SECTOR_START_ADDRESS -  \
                                                  (uint32)FLS_DF_BASE_ADDRESS;
    /* MISRA Violation: START Msg(4:2984)-5 */
    /* Upper bound of FLS accessible data flash */
    LulUpperSourceAddr = LulLowerSourceAddr + ((uint32)FLS_DF_TOTAL_SIZE - \
                                                               (uint32)FLS_ONE);
    /* END Msg(4:2984)-5 */
    /* Check if the read start address is lies within the specified lower and
    * upper flash address boundaries.
    */
    /* MISRA Violation: START Msg(4:2996)-4 */
    if ((LulLowerSourceAddr > SourceAddress) || \
                                         (LulUpperSourceAddr < SourceAddress))
    {
      /* END Msg(4:2996)-4 */
      /* Implements FLS_ESDD_UD_035 */
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                        FLS_READ_IMM_SID, FLS_E_PARAM_ADDRESS);
      #endif
      /* Set Return Value as E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* Virtual address is mapped to physical address */
      SourceAddress = SourceAddress + FLS_DF_BASE_ADDRESS;
      #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Disable relevant interrupts to protect this critical section */
      FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
      #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
      /* Local variable to hold the read start address */
      Fls_GstVar.GulReadAddress = SourceAddress;

      #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Enable relevant interrupts to exit this critical section */
      FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
      #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
      /* Check if the read length is greater than 0 and that the read end */
      /* address (read start address + length) lies within the specified upper*/
      /* flash address boundary.*/
      if (((uint32)FLS_ZERO == Length) || (((Fls_GstVar.GulReadAddress - \
          (uint32)FLS_DF_SECTOR_START_ADDRESS) + Length) > \
                                                     (uint32)FLS_DF_TOTAL_SIZE))
      {
        /* Implements FLS_ESDD_UD_035 */
        #if (FLS_DEV_ERROR_DETECT == STD_ON)
        /* Report error to DET */
        (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                          FLS_READ_IMM_SID, FLS_E_PARAM_LENGTH);
        #endif
        /* Set Return Value as E_NOT_OK */
        LenReturnValue = E_NOT_OK;
      }
      else
      {
        /* No action required */
      }
      /* Check whether the target address pointer is a null pointer */
      if (NULL_PTR == TargetAddressPtr)
      {
        /* Implements FLS_ESDD_UD_035 */
        #if (FLS_DEV_ERROR_DETECT == STD_ON)
        /* Report error to DET */
        (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                            FLS_READ_IMM_SID, FLS_E_PARAM_DATA);
        #endif
        /* Set Return Value as E_NOT_OK */
        LenReturnValue = E_NOT_OK;
      }
      else
      {
        /* No action required */
      }
      /* Check whether any error is reported to DET */
      if (E_OK == LenReturnValue)
      {
        /* MISRA Violation: START Msg(4:0306)-3 */
        /* Adjust the Source Address and Length if Mis-Aligned */
        Length = Fls_ReadMisAlignHandler(SourceAddress,
                                    (uint32)TargetAddressPtr, Length);
        /* END Msg(4:0306)-3 */
        #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* Disable relevant interrupts to protect this critical section */
        FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
        #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
        /* Initialize the global variable with target address and length */
        Fls_GstVar.pBufferAddress = TargetAddressPtr;
        /* Set the current length of bytes to be processed */
        Fls_GstVar.GulCurrentLength = Length;
        /* Set the command to Read Immediate */
        Fls_GstVar.GucGenCommand = FLS_COMMAND_READ_IMM;
        /* set the driver state to busy */
        Fls_GenState = MEMIF_BUSY;
        /* set the job result as pending */
        Fls_GenJobResult = MEMIF_JOB_PENDING;
        #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* Enable relevant interrupts to exit this critical section */
        FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
        #endif /* #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
      }
      else
      {
        /* No action required */
      }
    }
  }
  else
  {
    /* No action required */
  }
  return(LenReturnValue);
} /* End of API Fls_ReadImmediate */

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* #if (FLS_READIMMEDIATE_API == STD_ON) */
/* Implements FLS_ESDD_UD_007 */
#if (FLS_BLANKCHECK_API == STD_ON)
/*******************************************************************************
** Function Name             : Fls_BlankCheck
**
** Service ID                : 0x12
**
** Description               : This API performs the blank check of flash
**                             memory.
**
** Sync/Async                : Asynchronous
**
** Re-entrancy               : Non Re-entrant
**
** Input Parameters          : TargetAddress, Length
**
** InOut Parameters          : None
**
** Output Parameters         : None
**
** Return parameter          : Std_ReturnType
**                             E_OK: if Read command has been accepted.
**                             E_NOT_OK: if Read command has not been accepted.
**
** Preconditions             : Component must be initialized using Fls_Init().
**
** Global Variables Used     : Fls_GblInitStatus,
**                             Fls_GstVar.GulRequestedLength
**                             Fls_GstVar.GulSrcDestAddress,
**                             Fls_GstVar.GucGenCommand,Fls_GenState,
**                             Fls_GenJobResult
**
**  Function(s) invoked      : Det_ReportError,Fls_InitiateBlankCheckJob,
**                             Fls_ProcessJobResult,Fls_SetFHVE
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_045 */
/* Implements AR_PN0072_FR_0040 */
FUNC(Std_ReturnType, FLS_PUBLIC_CODE) Fls_BlankCheck
/* QAC Warning: START Msg(2:3227)-1 */
(Fls_AddressType TargetAddress, Fls_LengthType Length)
{
  /* END Msg(2:3227)-1*/
  /* Local variable to hold the DET return value */
  Std_ReturnType LenReturnValue;
  /* Local variable to hold lower bound of FLS accessible data flash */
  uint32 LulLowerTargetAddr;
  /* Local variable to hold upper bound of FLS accessible data flash */
  uint32 LulUpperTargetAddr;
  /* Invoking function to check whether driver is initialised/busy */
  LenReturnValue = Fls_DetErrorCheck(FLS_BLANK_CHECK_SID);
  if (E_OK == LenReturnValue)
  {
    /* Lower bound of FLS accessible data flash */
    LulLowerTargetAddr =(uint32)FLS_DF_SECTOR_START_ADDRESS -  \
                                                  (uint32)FLS_DF_BASE_ADDRESS;
    /* MISRA Violation: START Msg(4:2984)-5 */
    /* Upper bound of FLS accessible data flash */
    LulUpperTargetAddr = LulLowerTargetAddr + ((uint32)FLS_DF_TOTAL_SIZE - \
                                                               (uint32)FLS_ONE);
    /* END Msg(4:2984)-5 */
    /* Check if the start address is lies within the specified lower and
    * upper flash address boundaries.
    */
    /* MISRA Violation: START Msg(4:2996)-4 */
    if ((LulLowerTargetAddr > TargetAddress) ||
                                         (LulUpperTargetAddr < TargetAddress))
    {
      /* END Msg(4:2996)-4 */
      #if (FLS_DEV_ERROR_DETECT == STD_ON)
      /* Implements FLS_ESDD_UD_035 */
      /* Report error to DET */
      (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                      FLS_BLANK_CHECK_SID, FLS_E_PARAM_ADDRESS);
      #endif /* #if (FLS_DEV_ERROR_DETECT == STD_ON) */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* Virtual address is mapped to physical address */
      TargetAddress = TargetAddress + FLS_DF_BASE_ADDRESS;
      /* Set the global variable with length */
      Fls_GstVar.GulRequestedLength = Length;
      /* Local variable to hold the blank check start address */
      Fls_GstVar.GulSrcDestAddress = TargetAddress;
      /* Check if the length is greater than 0 and that the end address */
      /* (start address + length) lies within the specified upper flash */
      /* address boundary. */
      if (((uint32)FLS_ZERO == Length) || (((TargetAddress - \
         (uint32)FLS_DF_SECTOR_START_ADDRESS) + Length) > \
                                                     (uint32)FLS_DF_TOTAL_SIZE))
      {
        #if (FLS_DEV_ERROR_DETECT == STD_ON)
        /* Report error to DET */
        (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                    FLS_BLANK_CHECK_SID, FLS_E_PARAM_LENGTH);
        #endif
        /* Set Return Value as E_NOT_OK */
        LenReturnValue = E_NOT_OK;
      }
      else
      {
        /* No action required */
      }
      /* Check whether any error is reported to DET */
      if (E_OK == LenReturnValue)
      {
        #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* Disable relevant interrupts to protect this critical section */
        FLS_ENTER_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
        #endif /* End of #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
        /* Set the command as blank check command */
        Fls_GstVar.GucGenCommand = FLS_COMMAND_BLANKCHECK;
        /* Set the job result to Job pending */
        Fls_GenJobResult = MEMIF_JOB_PENDING;
        /* Set the driver state as Busy */
        Fls_GenState = MEMIF_BUSY;
        #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
        /* Enable relevant interrupts to exit this critical section */
        FLS_EXIT_CRITICAL_SECTION(FLS_DRIVERSTATE_DATA_PROTECTION);
        #endif /* End of #if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
        #if (FLS_FHVE_REGS == SUPPORTED)
        if (FLS_FALSE == Fls_GblFlashEnable)
        {
          /* Disable the flash memory software protection */
          Fls_SetFHVE(FLS_FLASH_PROTECTION_OFF);
          Fls_GblFlashEnable = FLS_TRUE;
        }
        else
        {
          /* No action required */
        }
        #endif /* End of #if (FLS_FHVE_REGS == SUPPORTED) */
        /* Initiate blank check Job */
        LenReturnValue = Fls_InitiateBlankCheckJob();
        /* Check for the status is FLS_FCU_OK */
        if (E_NOT_OK == LenReturnValue)
        {
          Fls_ProcessJobResult(MEMIF_JOB_FAILED);
        }
        else
        {
        /* No action required */
        }
      }
     else
      {
        /* No action required */
      }
    }
  }
  else
  {
    /* No action required */
  }
  return(LenReturnValue);
} /* End of API Fls_BlankCheck */
#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* #if (FLS_BLANKCHECK_API == STD_ON) */

#if (FLS_SUSPEND_API == STD_ON)
/*******************************************************************************
** Function Name            : Fls_Suspend
**
** Service ID               : 0x13
**
** Description              : This API performs the suspend of the on going
**                            job. This function shall return E_NOT_OK,
**                            if the suspend request is rejected.
**
** Sync/Async               : Asynchronous
**
** Re-entrancy              : Non Re-entrant
**
** Input Parameters         : None
**
** InOut Parameters         : None
**
** Output Parameters        : Std_ReturnType
**
** Return parameter         : LenReturnValue
**
** Preconditions            : Component must be initialized using Fls_Init().
**
** Global Variables Used    : Fls_GblInitStatus(R),Fls_GenState(R),
**                            Fls_GstVar.GucDFStatus(W),Fls_GblJobSuspended(R),
**                            Fls_GblJobSuspendRequest(W)
**
** Function(s) invoked      : Det_ReportError
**
** Registers Used           : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_112 */
/* Implements AR_PN0072_FR_0045 */
FUNC(Std_ReturnType , FLS_PUBLIC_CODE) Fls_Suspend(void)
{
  /* Declare the variable to store the return value */
  Std_ReturnType LenReturnValue;
  LenReturnValue = E_OK;
  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* Implements FLS_ESDD_UD_035 */
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                                 FLS_SUSPEND_SID, FLS_E_UNINIT);
    #endif
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Check whether any error reported to DET */
  if (E_OK == LenReturnValue)
  /* #if (FLS_DEV_ERROR_DETECT == STD_ON) */
  {
    if ((FLS_COMMAND_ERASE == Fls_GstVar.GucGenCommand) || \
                              (FLS_COMMAND_WRITE ==Fls_GstVar.GucGenCommand))
    {
      /* Check if the driver state is not Idle */
      if ((MEMIF_BUSY == Fls_GenState) && (FLS_FALSE == Fls_GblJobSuspended))
      {
        Fls_GblJobSuspendRequest = FLS_TRUE;
      }
      else
      {
        Fls_GstVar.GucDFStatus = FLS_FCU_ERR_REJECTED;
        LenReturnValue = E_NOT_OK;
      }
    }
    else
    {
      LenReturnValue = E_NOT_OK;
    }
  }
  else
  {
    /* No action required */
  }
  return(LenReturnValue);
} /* End of API Fls_Suspend */

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* #if (FLS_SUSPEND_API == STD_ON) */

#if (FLS_RESUME_API == STD_ON)
/*******************************************************************************
** Function Name             : Fls_Resume
**
** Service ID                : 0x14
**
** Description               : This API resumes the suspended job.
**
** Sync/Async                : Synchronous
**
** Re-entrancy               : Non Re-entrant
**
** Input Parameters          : None
**
** InOut Parameters          : None
**
** Output Parameters         : None
**
** Return parameter          : None
**
** Preconditions             : Component must be initialized using Fls_Init().
**
** Global Variables Used     : Fls_GblInitStatus,Fls_GenState,
**                             Fls_GblJobSuspended,Fls_GenState,
**                             Fls_GstVar.GucDFStatus
**
**  Function(s) invoked      : Det_ReportError,Fls_ProcessResume
**
** Registers Used            : None
*******************************************************************************/
#define FLS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements FLS_ESDD_UD_017 */
/* Implements FLS_ESDD_UD_109 */
/* Implements AR_PN0072_FR_0046 */
FUNC(void, FLS_PUBLIC_CODE) Fls_Resume(void)
{
  /* Declare the variable to store the DET return value */
  Std_ReturnType LenReturnValue = E_OK;

  /* Check if the module is initialized */
  if (FLS_UNINITIALIZED == Fls_GblInitStatus)
  {
    #if (FLS_DEV_ERROR_DETECT == STD_ON)
    /* Implements FLS_ESDD_UD_035 */
    /* Report error to DET that module is not initialized */
    (void)Det_ReportError(FLS_MODULE_ID, FLS_INSTANCE_ID,
                                                 FLS_RESUME_SID, FLS_E_UNINIT);
    #endif
    /* Set Return Value as E_NOT_OK */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Check whether any error reported to DET */
  if (E_OK == LenReturnValue)
  {
    /* Check if currently the Driver is in Idle State */
    if ((FLS_TRUE == Fls_GblJobSuspended) && \
                                        (MEMIF_IDLE == Fls_GenState))
    {

      Fls_ProcessResume();
    }
    else
    {
      Fls_GstVar.GucDFStatus = FLS_FCU_ERR_REJECTED;
    }
  }
  else
  {
    /* No action required */
  }
} /* End of API Fls_Resume */

#define FLS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* #if (FLS_RESUME_API == STD_ON) */
/*******************************************************************************
**                           End of File                                      **
*******************************************************************************/
