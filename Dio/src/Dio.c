/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Dio.c                                                       */
/* $Revision: 422710 $                                                        */
/* $Date: 2017-06-16 19:43:45 +0900 (金, 16 6 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains API implementations of Dio Driver Component.            */
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
 * V1.0.0: 30-Jul-2015 :  Initial Version.
 *
 * V1.0.1: 28-Feb-2016 : 1. As per JIRA ARDAAAF-352, Dio_GetVersionInfo is
 *                          implemented as public API.
 *                       2. As per JIRA ARDAAAF-472,  column width in
 *                          function Dio_WriteChannelGroup &
 *                          Dio_ReadChannelGroup corrected.
 *                       3. As per JIRA ARDAAAF-329, critical section
 *                          protection added
 *                       4. As per JIRA ARDAAAF-518, QAC Warning fixed in
 *                          Dio_MaskedWritePort
 *                       5. Copyright Information is updated.
 *
 * V2.0.0: 20-Feb-2017 : 1. As per ARDAAAF-1253,
 *                          a. Adapted Ecode from P1x
 *                          b. Renamed Variable U16pindirection to
 *                             LulPortModeLevel
 *                       2. As per ARDAAAF-1017,Added macro functions
 *                          DIO_CHECK_WRITE_VERIFY_RUNTIME and
 *                          DIO_WRITE_REG_ONLY.
 *                       3. As per ARDAAAF-768, Added justification for
 *                          QAC warnings.
 *                       4. As per ARDAAAF-1103, Corrected Det check for
 *                          Global pointer Dio_SpConfigPtr in all APIs.
 *                       5. As per ARDAAAF-1335, Added Requirement IDs and
 *                          DIO_ESDD_UD_xxx tags.
 *                       6. As per ARDAAAF-1341, Added ulModeMask in
 *                          Dio_writePort API.
 *
 * V2.0.1: 19-Apr-2017 : 1. As per ARDAAAF-2049,
 *                          PREFIX and INITPOLICY of memory sections are
 *                          changed.
 *                       2. As per ARDAAAF-2357, Corrected function banner of
 *                          Dio_GetVersionInfo API
 *
 * V2.0.2: 16-Jun-2017 : 1. As per ARDAAAF-2475,
 *                          a. Added access direction(Read/Write) for global
 *                             variables in the function banner of all API's.
 *                          b. Added one space between if and opening
 *                             parenthesis and added a space after comma in
 *                             the argument list of the macro
 *                             DIO_CHECK_WRITE_VERIFY_RUNTIME inside the
 *                             Dio_FlipChannel API to correct the style format.
 *                          c. Corrected the alignment in Dio_WritePort API and
 *                             in revision history banner.
 *                          d. Renamed Dio_SpConfigPtr to Dio_GpConfigPtr.
 *                          e. Requirement IDs EAAR_PN0061_FR_0018 and
 *                             EAAR_PN0061_FR_0020 renamed as per new
 *                             MRS tag 1.7.
 *                          f. Unwanted QAC messages removed.
 *                       2. As per ARDAAAF-2510, UT Tag "DIO_UT_001" added for
 *                          the uncovered parts of the code.
 */
/******************************************************************************/
/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/* Implements EAAR_PN0034_NR_0044 */
/* Implements  EAAR_PN0034_NR_0029, EAAR_PN0034_NR_0045, EAAR_PN0034_NR_0018 */
/* Implements  EAAR_PN0034_FR_0001, EAAR_PN0034_FR_0065 */
/* Implements EAAR_PN0034_FR_0053 , DIO117 , DIO169, DIO161, DIO162 */
/* Included for macro definitions and API prototypes */
#include "Dio.h"
#include "Dem.h"
/* Included for RAM variable declarations */
#include "Dio_Ram.h"
/* Implements DIO_ESDD_UD_003 */
/* Implements DIO_TSDD_003 */
#if (DIO_DEV_ERROR_DETECT == STD_ON)
/* Included for declaration of the function Det_ReportError() */
/* Implements DIO194 */
#include "Det.h"
#endif
/* Implements DIO_ESDD_UD_012 */
/* Implements DIO_TSDD_003 */
/* Implements EAAR_PN0061_FR_0024 */
#if (DIO_CRITICAL_SECTION_PROTECTION == STD_ON)
/* Included for the declaration of the critical section protection functions */
#include "SchM_Dio.h"
#endif

/* Implements  EAAR_PN0034_NR_0056 */
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* Implements DIO106 */
/* AUTOSAR release version information */
#define DIO_C_AR_RELEASE_MAJOR_VERSION     DIO_AR_RELEASE_MAJOR_VERSION_VALUE
#define DIO_C_AR_RELEASE_MINOR_VERSION     DIO_AR_RELEASE_MINOR_VERSION_VALUE
#define DIO_C_AR_RELEASE_REVISION_VERSION  DIO_AR_RELEASE_REVISION_VERSION_VALUE

/* Software version information */
#define DIO_C_SW_MAJOR_VERSION    1
#define DIO_C_SW_MINOR_VERSION    0
/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (DIO_AR_RELEASE_MAJOR_VERSION != DIO_C_AR_RELEASE_MAJOR_VERSION)
  #error "Dio.c : Mismatch in Release Major Version"
#endif

#if (DIO_AR_RELEASE_MINOR_VERSION != DIO_C_AR_RELEASE_MINOR_VERSION)
  #error "Dio.c : Mismatch in Release Minor Version"
#endif

#if (DIO_AR_RELEASE_REVISION_VERSION != DIO_C_AR_RELEASE_REVISION_VERSION)
  #error "Dio.c : Mismatch in Release Revision Version"
#endif

#if (DIO_SW_MAJOR_VERSION != DIO_C_SW_MAJOR_VERSION)
  #error "Dio.c : Mismatch in Software Major Version"
#endif

#if (DIO_SW_MINOR_VERSION != DIO_C_SW_MINOR_VERSION)
  #error "Dio.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/
/* Implements EAAR_PN0034_NR_0026 */
/******************************************************************************/
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/******************************************************************************/
/* 1.  MISRA C Rule Violations:                                               */
/*Message        : (4:0488) Performing Pointer arithmetic.                    */
/*Rule           : MISRA-C:2004 Rule 17.4                                     */
/*Justification  : This pointer is to get the Port register addresses for     */
/*                 the required port                                          */
/*Verification   : However, part of the code is verified manually             */
/*                 and it is not having any impact.                           */
/*Reference      : Look for START Msg(4:0488)-1 and                           */
/*                 END Msg(4:0488)-1  tags in the code.                       */
/******************************************************************************/
/* 2.  MISRA C Rule Violations:                                               */
/* Message       : (4:0759) An object of union type has been defined.         */
/* Rule          : MISRA-C:2004 Rule 18.4                                     */
/* Justification : Data access of larger data types is used to achieve        */
/*                 better throughput.                                         */
/* Verification  : However, part of the code is verified manually and         */
/*                 it is not having any impact.                               */
/* Reference     : Look for START Msg(4:0759)-2 and                           */
/*                 END Msg(4:0759)-2 tags in the code.                        */
/******************************************************************************/
/* 3.  MISRA C Rule Violations:                                               */
/* Message       : (4:0491) Array subscripting applied to an object of        */
/*                 pointer type.                                              */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/*                 REFERENCE - ISO:C90-6.3.2.1 Semantics                      */
/* Justification : Pointer to the configuration array is used and verified    */
/*                 when accessing the parameter value.                        */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0491)-3 and                           */
/*                 END Msg(4:0491)-3 tags in the code.                        */
/******************************************************************************/
/* 4. MISRA C Rule Violations:                                                */
/* Message       : Msg(4:0303) [I] Cast between a pointer to volatile         */
/*                 object and an integral type.                               */
/* Rule          : MISRA-C:2004 Rule 11.3                                     */
/*                 REFERENCE - ISO-6.3.4 Semantics                            */
/* Justification : Typecasting is done as per the register size, to access    */
/*                 hardware registers.                                        */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0303)-4 and                           */
/*                 END Msg(4:0303)-4 tags in the code.                        */
/******************************************************************************/
/* 5. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0306) Cast between a pointer to object and an integral  */
/*                  type.                                                     */
/* Rule          : MISRA-C:2004 Rule 11.3                                     */
/* Justification : The difference between two addresses are calculated after  */
/*                 typecasting the pointer to the integer.                    */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0306)-5 and                           */
/*                 END Msg(4:0306)-5 tags in the code.                        */
/******************************************************************************/
/* 6. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0492) Array subscripting applied to a function parameter*/
/*                 declared as a pointer.                                     */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : Subscripting cannot be applied on the array since size can */
/*                 grow based on configuration done by user i.e. multi        */
/*                 configuration                                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0492)-6 and                           */
/*                 END Msg(4:0492)-6 tags in the code.                        */
/******************************************************************************/
/* 7. MISRA C RULE VIOLATION:                                                 */
/* Message       : Msg(4:0310) Casting to different object pointer type.      */
/* Rule          : MISRA-C:2004 Rule 11.4                                     */
/*                 REFERENCE - ISO-6.3.4 Cast Operators                       */
/* Justification : DMA structure base address are Passing through DMACTL,     */
/*                 Since it is Typecast                                       */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0310)-7 and                           */
/*                 END Msg(4:0310)-7 tags in the code.                        */
/******************************************************************************/
/* 8.  MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2982)This assignment is redundant. The value of this    */
/*                 object is never used before being modified.                */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : The variable needs to be initialized before using it.      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2982)-8 and                           */
/*                 END Msg(4:2982)-8 tags in the code.                        */
/******************************************************************************/
/* 9. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2992) The value of this 'if' controlling expression is  */
/*                 always 'false'.                                            */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : The value of this 'if' control expression is false because */
/*                 of the variable updated in pre-compile condition. The      */
/*                 variable can be configured at pre-compile for true value   */
/*                 in If condition                                            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2992)-9 and                           */
/*                 END Msg(4:2992)-9 tags in the code.                        */
/******************************************************************************/
/* 10. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2996) The result of this logical operation is always    */
/*                 'false'.                                                   */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : Since e-num type is used it is not possible to provide     */
/*                 out of range value but as per AUTOSAR all the input        */
/*                 parameters of an API have to be verified.                  */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2996)-10 and                          */
/*                 END Msg(4:2996)-10 tags in the code.                       */
/******************************************************************************/
/*******************************************************************************
**                       QAC Warnings                                         **
*******************************************************************************/
/******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       : (2:3227) The value of this function parameter is never     */
/*                 modified. It could be declared with the 'const' type       */
/*                 Qualifier.                                                 */
/* Rule          : NA                                                         */
/* Justification : The function parameters of AUTOSAR APIs and Vendor specific*/
/*                 APIs cannot be modified to be made as constant.            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3227)-1 and                           */
/*                 END Msg(2:3227)-1 tags in the code.                        */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message       : (2:3892) The result of this cast is implicitly converted   */
/*                 to another type.                                           */
/* Rule          : NA                                                         */
/* Justification : To access the various sized registers using the base       */
/*                 address, typecasting is done.                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3892)-2 and                           */
/*                 END Msg(2:3892)-2 tags in the code.                        */
/******************************************************************************/
/* 3. QAC Warning:                                                            */
/* Message       : (2:1252) Suffixed integer constant implicitly converted to */
/*                 different integer type.                                    */
/* Rule          : NA                                                         */
/* Justification : The result of this logical operation is always true since  */
/*                 this value is dependent on configuration.                  */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:1252)-3 and                           */
/*                 END Msg(2:1252)-3 tags in the code.                        */
/******************************************************************************/
/* 4. QAC Warning:                                                            */
/* Message       :(2:0862) #include MemMap.h directive is redundant.          */
/* Rule          : NA                                                         */
/* Justification : As per requirement [MEMMAP003], the inclusion of the memory*/
/*                 mapping header files within the code is a QAC Warning.     */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/
/* 5. QAC Warning:                                                            */
/* Message       : (2:2814) Possible: Dereference of NULL pointer.            */
/* Rule          : NA                                                         */
/* Justification : The Pointers are generated using Post Build configurations,*/
/*                 these pointers are pointed to specific parameters.         */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2814)-5 and END Msg(2:2814)-5 tags in */
/*                 the code.                                                  */
/******************************************************************************/
/* 6. QAC Warning:                                                            */
/* Message       : (2:2824) Possible: Arithmetic operation on NULL pointer.   */
/* Rule          : NA                                                         */
/* Justification : The Pointers are generated using Post Build configurations.*/
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2824)-6 and                           */
/*                 END Msg(2:2824)-6 tags in the code.                        */
/******************************************************************************/
/* 7. QAC Warning:                                                            */
/* Message       : (2:2922) Left shift operation on expression of unsigned    */
/*                 type results in loss of high order bits.                   */
/* Rule          : NA                                                         */
/* Justification : Left shift is done as part of masking to load the Lower    */
/*                 Order bits into the Higher Order bits.                     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2922)-7 and                           */
/*                 END Msg(2:2922)-7 tags in the code.                        */
/******************************************************************************/
/* 8. QAC Warning:                                                            */
/* Message       : (2:3204) The variable is only set once and so it could be  */
/*                 declared with the 'const' qualifier.                       */
/* Rule          : NA                                                         */
/* Justification : The variable is set more than once when                    */
/*                 DIO_CHANNELGROUP_CONFIGURED, DIO_CHANNEL_CONFIGURED        */
/*                 switches are enabled.Hence cannot be declared with 'const' */
/*                 qualifier.                                                 */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3204)-8 and                           */
/*                 END Msg(2:3204)-8 tags in the code.                        */
/******************************************************************************/
/* 9. QAC Warning:                                                            */
/* Message       : (2:3206) The parameter is not used in this function.       */
/* Rule          : NA                                                         */
/* Justification : The parameter is used in this function when                */
/*                 DIO_CHANNELGROUP_CONFIGURED and DIO_CHANNEL_CONFIGURED     */
/*                 switches are enabled.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3206)-9 and                           */
/*                 END Msg(2:3206)-9 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/
/* Implements EAAR_PN0034_NR_0020 */
/*******************************************************************************
** Function Name         : Dio_Init
**
** Service ID            : 0x10
**
** Description           : This service initialize the DIO driver.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Non Re-entrant
**
** Input Parameters      : ConfigPtr Pointer to the configuration
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : None
**
** Global Variables Used : Dio_GblDriverStatus(Write), Dio_GpConfigPtr(Write)
**                         Dio_GusChannelGroupsOffset(Write)
**
** Functions Invoked     : Det_ReportError
**
** Registers Used        : None
*******************************************************************************/

#define DIO_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* QAC Warning: START Msg(2:3227)-1 */
/* Implementation Of Dio_Init API */
/* Implements DIO_ESDD_UD_048 , DIO_ESDD_UD_022, DIO_ESDD_UD_038 */
/* Implements DIO171,DIO165, DIO167, DIO166, DIO164, DIO187, DIO176, DIO140  */
/* Implements EAAR_PN0034_FR_0025, EAAR_PN0034_FR_0063,EAAR_PN0034_FR_0049 */
/* Implements EAAR_PN0034_NR_0069, DIO179, DIO066 */

FUNC(void, DIO_PUBLIC_CODE) Dio_Init
(P2CONST(Dio_ConfigType, DIO_VAR, DIO_APPL_CONST) ConfigPtr)
{
  /* END Msg(2:3227)-1 */
  /* Implements DIO_TSDD_003 */
  /* Implements DIO_ESDD_UD_003 */
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  /* Report Error to DET, if the config pointer value is NULL */
  if (NULL_PTR == ConfigPtr)
  {
    /* Report Error to DET */
    /* Implements DIO_ESDD_UD_027 */
    /* Implements EAAR_PN0034_FR_0064 */
    (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID, DIO_INIT_SID,
     DIO_E_PARAM_CONFIG);
  }
  else
  #endif
  /* (DIO_DEV_ERROR_DETECT == STD_ON) */
  {
    /* Check whether the existing database is correct */
    /* QAC Warning: START Msg(2:2814)-5 */
    if (DIO_DBTOC_VALUE == (ConfigPtr->ulStartOfDbToc))
    {
      /* Initialize the configuration global pointer */
      /* Implements DIO_ESDD_UD_042 */
      Dio_GpConfigPtr = ConfigPtr;
      #if (DIO_CHANNELGROUP_CONFIGURED == STD_ON)
      /* Initialize the config pointer value to global pointer */
      /* Implements DIO_ESDD_UD_040 */
      Dio_GusChannelGroupsOffset = ConfigPtr->usNoofChannelGroups;
      #endif
      #if (DIO_DEV_ERROR_DETECT == STD_ON)
      /* Set the state of DIO Driver as initialized */
      /* Implements DIO_ESDD_UD_041 , DIO_ESDD_UD_002,DIO_ESDD_UD_043 */
      Dio_GblDriverStatus = DIO_INITIALIZED;
      #endif
    }
    else
    {
      #if (DIO_DEV_ERROR_DETECT == STD_ON)
      /* Report Error to DET */
      /* Implements DIO_ESDD_UD_028 */
      /* Implements EAAR_PN0034_FR_0064 */
      (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID, DIO_INIT_SID,
      DIO_E_INVALID_DATABASE);
      #endif
    } /* End of Check to check database */
    /* END Msg(2:2814)-5 */
  }
}
#define DIO_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements EAAR_PN0034_NR_0020 */
/*******************************************************************************
** Function Name         : Dio_ReadPort
**
** Service ID            : 0x02
**
** Description           : This service returns the level of all channels of
**                         given Port.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Re-entrant
**
** Input Parameters      : PortId
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : Returns the value of physical level of the channels
**                         that form the Port.
**
** Preconditions         : DIO Driver must be initialized.
**
** Global Variables Used : Dio_GblDriverStatus(Read), Dio_GpConfigPtr(Read)
**
** Functions Invoked     : Det_ReportError
**
** Registers Used        : PPRn, JPPRn
*******************************************************************************/
#define DIO_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements DIO_ESDD_UD_044 */
/* Implementation Of Dio_ReadPort API */
/* Implements DIO_ESDD_UD_049 */
/* Implements DIO171, DIO053, DIO026, DIO118, DIO186, DIO013, DIO012, DIO135*/
/* Implements DIO104, DIO103, DIO060, DIO051, DIO075, DIO183, DIO024,  DIO140 */
/* Implements DIO031, DIO070, DIO005, DIO177, EAAR_PN0034_NR_0002,  DIO179 */
/* Implements EAAR_PN0034_FR_0049, EAAR_PN0034_FR_0081, DIO066 */
/* Implements EAAR_PN0034_NR_0069, EAAR_PN0034_FR_0018 */
/* QAC Warning: START Msg(2:3227)-1 */
FUNC(Dio_PortLevelType, DIO_PUBLIC_CODE) Dio_ReadPort(Dio_PortType PortId)
{
  /* END Msg(2:3227)-1 */
  /* Implements DIO_ESDD_UD_023 */
  P2CONST(Dio_PortGroup, DIO_VAR, DIO_PRIVATE_CONST) LpPortGroup;
  P2VAR(uint32 volatile, AUTOMATIC, DIO_PRIVATE_DATA) LpPortAddress;
  /* Implements DIO_ESDD_UD_045 */
  Dio_PortLevelType LddPortLevel;
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  Std_ReturnType LenDetErrFlag;
  #endif
  /* Initialize the return value to 0 */
  /* Implements DIO_ESDD_UD_002 */
  /* MISRA Violation: START Msg(4:2982)-8 */
  LddPortLevel = DIO_ZERO;
  /* END Msg(4:2982)-8 */
  /* Check whether DIO_DEV_ERROR_DETECT is enabled */
  /* Implements DIO_ESDD_UD_003 */
  /* Implements DIO_ESDD_UD_041 , DIO_ESDD_UD_002 */
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  LenDetErrFlag = E_NOT_OK;
  if (DIO_UNINITIALIZED == Dio_GblDriverStatus)
  {
    /* Report Error to DET */
    /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_030*/
    /* Implements EAAR_PN0034_FR_0064 */
    (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                                DIO_READ_PORT_SID, DIO_E_UNINIT);
  }
  else
  #endif
  {
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    /* Check whether the Port Id is out of range */
    /* Implements DIO_ESDD_UD_013 */
    /* QAC Warning: START Msg(2:2814)-5 */
    if (PortId >= Dio_GpConfigPtr->usNoofPorts)
    {
      /* END Msg(2:2814)-5 */
      /* Report Error to DET */
      /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_031*/
      (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                      DIO_READ_PORT_SID, DIO_E_PARAM_INVALID_PORT_ID);
      LenDetErrFlag = E_OK;
    }
    else
    {
      /* No action required */
    }
    /* Check if no DET error was reported */
    if (E_NOT_OK == LenDetErrFlag)
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
    {
      /* MISRA C Rule Violations: START Msg(4:0491)-3 */
      /* Get the pointer to the required Port */
      /* Implements DIO_ESDD_UD_042 */
      /* QAC Warning: START Msg(2:2814)-5 */
      LpPortGroup = &(Dio_GpConfigPtr->pPortGroup[PortId]);
      /* END Msg(2:2814)-5 */
      /* END Msg(4:0491)-3 */
      /* MISRA C Rule Violations: START Msg(4:0303)-4 */
      /* QAC Warning: START Msg(2:2814)-5 */
      /* Get the PSRn or JPSRn address for the required port */
      LpPortAddress = (volatile uint32 *)(*(LpPortGroup->pPortAddress));
      /* END Msg(4:0303)-4 */
      /* END Msg(2:2814)-5 */
      /* Implements DIO_ESDD_UD_002 */
      /* Implements EAAR_PN0061_FR_0004 */
      if (DIO_NORMALPORT == LpPortGroup->ucPortType)
      {
        /*
         * Read the port value from PPR register by adding offset to
         * PSR register address of Normal Port
        */
        /* MISRA C Rule Violations: START Msg(4:0488)-1*/
        /* QAC Warning: START Msg(2:3892)-2 */
        /* QAC Warning: START Msg(2:2824)-6 */
        /* Implements DIO_ESDD_UD_045 , DIO_ESDD_UD_001 */
        LddPortLevel = (Dio_PortLevelType)
                                   (*(LpPortAddress + DIO_PPR_OFFSET_NONJTAG));
        /* END Msg(2:3892)-2 */
        /* END Msg(2:2824)-6 */
      }
      /* Check if the required port is JTAG port */
      /* Implements DIO_ESDD_UD_002 */
      else if (DIO_JTAGPORT == LpPortGroup->ucPortType)
      {
        /*
         * Read the port value from JPPR register by adding offset to
         * PSR register address of JTAG Port
         */
        /* QAC Warning: START Msg(2:3892)-2 */
        /* Implements DIO_ESDD_UD_045 , DIO_ESDD_UD_001 */
        LddPortLevel = (Dio_PortLevelType)
                                       (*(LpPortAddress + DIO_PPR_OFFSET_JTAG));
        /* END Msg(2:3892)-2 */
        /* END Msg(4:0488)-1 */
      }
      else
      {
        LddPortLevel = (Dio_PortLevelType)(*(LpPortAddress));
      }
    }
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    else
    {
      /* No action required */
    }
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
  }
  /* Return the Port Level */
  return(LddPortLevel);
}
#define DIO_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements EAAR_PN0034_NR_0020 */
/*******************************************************************************
** Function Name         : Dio_WritePort
**
** Service ID            : 0x03
**
** Description           : This service writes the specified level to all the
**                         channels in given Port.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Re-entrant
**
** Input Parameters      : PortId and Level.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : DIO Driver must be initialized.
**
** Global Variables Used : Dio_GblDriverStatus(Read), Dio_GpConfigPtr(Read)
**
** Functions Invoked     : Det_ReportError, DIO_ENTER_CRITICAL_SECTION,
**                         DIO_EXIT_CRITICAL_SECTION, DIO_WRITE_REG_ONLY,
**                         DIO_CHECK_WRITE_VERIFY_RUNTIME.
**
** Registers Used        : PSRn, JPSRn, PMSRn, JPMSRn.
*******************************************************************************/
#define DIO_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implementation of the Dio_WritePort API */
/* Implements DIO_ESDD_UD_044, DIO_ESDD_UD_006, DIO_ESDD_UD_050*/
/* Implements DIO171, DIO053, DIO004, DIO007, DIO119, DIO018, DIO020, DIO183 */
/* Implements DIO005, DIO060, DIO075, DIO070, DIO051, DIO186, DIO103,  DIO14 */
/* Implements DIO108, DIO105, DIO035, DIO034, DIO026, DIO136, DIO024, DIO066 */
/* Implements EAAR_PN0034_FR_0023, EAAR_PN0034_FSR_0001, EAAR_PN0034_FR_0013 */
/* Implements EAAR_PN0034_FSR_0003, EAAR_PN0034_FSR_0004, EAAR_PN0034_FR_0052*/
/* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0081, EAAR_PN0034_NR_0002 */
/* Implements EAAR_PN0034_NR_0069, EAAR_PN0034_FR_0018, DIO067 */
/* QAC Warning: START Msg(2:3227)-1 */
FUNC(void, DIO_PUBLIC_CODE) Dio_WritePort
(Dio_PortType PortId, Dio_PortLevelType Level)
{
  /* END Msg(2:3227)-1 */
  /* Implements DIO_ESDD_UD_023 */
  P2CONST(Dio_PortGroup, DIO_VAR, DIO_PRIVATE_CONST) LpPortGroup;
  P2VAR(uint32 volatile, AUTOMATIC, DIO_PRIVATE_DATA) LpPortAddress;
  uint32 LulPortModeLevel;
  /* Implements DIO_ESDD_UD_003 */
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  /* Declare the variable to store the DET return value */
  Std_ReturnType LenDetErrFlag;
  LenDetErrFlag = E_NOT_OK;
  #endif
  /* Implements DIO_ESDD_UD_003 */
  /* Check whether DIO_DEV_ERROR_DETECT is enabled */
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  /* Implements DIO_ESDD_UD_041 , DIO_ESDD_UD_002 */
  /* Implements EAAR_PN0034_FR_0064 */
  if (DIO_UNINITIALIZED == Dio_GblDriverStatus)
  {
    /* Report Error to DET */
    /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_030*/
    (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                                DIO_WRITE_PORT_SID, DIO_E_UNINIT);
  }
  else
  #endif
  /* (DIO_DEV_ERROR_DETECT == STD_ON) */
  {
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    /* Check whether the Port Id is out of range */
    /* Implements DIO_ESDD_UD_013 */
    /* QAC Warning: START Msg(2:2814)-5 */
    if (PortId >= Dio_GpConfigPtr->usNoofPorts)
    {
      /* END Msg(2:2814)-5 */
      /* Report Error to DET */
      /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_031*/
      /* Implements EAAR_PN0034_FR_0064 */
      (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                               DIO_WRITE_PORT_SID, DIO_E_PARAM_INVALID_PORT_ID);
      LenDetErrFlag = E_OK;
    }
    else
    {
      /* No action required */
    }
    /* Check whether the PortType is INPUT port */
    if (E_NOT_OK == LenDetErrFlag)
    {
      /* Get the pointer to the required Port */
      /* Implements DIO_ESDD_UD_042 */
      /* MISRA Violation: START Msg(4:0491)-3 */
      LpPortGroup = &(Dio_GpConfigPtr->pPortGroup[PortId]);
      /* END Msg(4:0491)-3 */
      /* Implements DIO_ESDD_UD_002 */
      /* Implements EAAR_PN0061_FR_0004 */
      /* QAC Warning: START Msg(2:2814)-5 */
      if (DIO_INPUTPORT == LpPortGroup->ucPortType)
      {
        /* END Msg(2:2814)-5 */
        /* Report Error to DET */
        /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_031*/
        (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                               DIO_WRITE_PORT_SID, DIO_E_PARAM_INVALID_PORT_ID);
        LenDetErrFlag = E_OK;
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
    if (E_NOT_OK == LenDetErrFlag)
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
    {
      /* Check whether DIO_DEV_ERROR_DETECT is disabled */
      #if (DIO_DEV_ERROR_DETECT == STD_OFF)
      /* Get the pointer to the required Port */
      /* Implements DIO_ESDD_UD_042 */
      /* QAC Warning: START Msg(2:2814)-5 */
      /* MISRA Violation: START Msg(4:0491)-3 */
      LpPortGroup = &(Dio_GpConfigPtr->pPortGroup[PortId]);
      /* END Msg(2:2814)-5 */
      /* END Msg(4:0491)-3 */
      #endif
      /* (DIO_DEV_ERROR_DETECT == STD_OFF) */
      /* MISRA C Rule Violations: START Msg(4:0488)-1*/
      /* Get the PSRn or JPSRn address for the required port */
      /* MISRA C Rule Violations: START Msg(4:0303)-4 */
      /* QAC Warning: START Msg(2:2814)-5 */
      LpPortAddress =(volatile uint32 *)(*(LpPortGroup->pPortAddress));
      /* END Msg(2:2814)-5 */
      /* END Msg(4:0303)-4 */
      /* Implements DIO_ESDD_UD_012 */
      /* Implements EAAR_PN0061_FR_0001 */
      /*
       * Write the Port value using 32-bit PSR register
       * Enable upper 16-bits using mask to effectively write to lower 16-bits
       */
      /* Implements EAAR_PN0061_FR_0024 */
      #if (DIO_CRITICAL_SECTION_PROTECTION == STD_ON)
      DIO_ENTER_CRITICAL_SECTION(DIO_REGISTER_PROTECTION);
      #endif
      /* Implements DIO_ESDD_UD_002 */
      /* Implements EAAR_PN0061_FR_0004 */
      if (DIO_JTAGPORT == LpPortGroup->ucPortType)
      {
        /* Implements DIO_ESDD_UD_001 */
        /* QAC Warning: START Msg(2:3892)-2 */
        /* QAC Warning: START Msg(2:2824)-6 */
        LulPortModeLevel = (uint32)(*(LpPortAddress+DIO_PMSR_OFFSET_JTAG))|
                                                     (LpPortGroup->ulModeMask);
        /* END Msg(2:2824)-6 */
      }
      /* Implements DIO_ESDD_UD_002 */
      else if (DIO_NORMALPORT == LpPortGroup->ucPortType)
      {
        /* Implements DIO_ESDD_UD_001 */
        LulPortModeLevel = (uint32)(*(LpPortAddress+DIO_PMSR_OFFSET_NONJTAG))|
                                                     (LpPortGroup->ulModeMask);
        /* END Msg(4:0488)-1 */
      }
      else
      {   /* Implements DIO_ESDD_UD_002 */
        LulPortModeLevel = (uint32)DIO_ZERO;
      }
      /* If the requested channel is an output Channel */
      /* Implements DIO_ESDD_UD_002 */
      if ((uint32)DIO_ZERO != (~LulPortModeLevel))
      {
        /*
         * Write the Port value using 32-bit PSR register
         * Enable upper 16-bits using mask to effectively write to lower 16-bits
         */
        /* Implements DIO_ESDD_UD_002 , DIO_ESDD_UD_016 , DIO_ESDD_UD_017 */
        /* Implements DIO_ESDD_UD_035 */
        /* QAC Warning: START Msg(2:2922)-7 */
        DIO_WRITE_REG_ONLY(LpPortAddress,
             ((uint32)(Level | ((~(LulPortModeLevel)) << DIO_SHIFT_SIXTEEN))))
        /* END Msg(2:2922)-7 */
        /* END Msg(2:3892)-2 */
        /* Implements EAAR_PN0034_FSR_0002 */
        DIO_CHECK_WRITE_VERIFY_RUNTIME(LpPortAddress,
         (Level & (~LulPortModeLevel)), (~LulPortModeLevel), DIO_WRITE_PORT_SID)
      }
      else
      {
        /* No action required */
      }
      /* Implements DIO_ESDD_UD_012 */
      /* Implements EAAR_PN0061_FR_0024 */
      #if (DIO_CRITICAL_SECTION_PROTECTION == STD_ON)
      DIO_EXIT_CRITICAL_SECTION(DIO_REGISTER_PROTECTION);
      #endif
    }
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    else
    {
      /* No action required */
    }
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
  }
}
#define DIO_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements EAAR_PN0034_NR_0020 */
/*******************************************************************************
** Function Name         : Dio_ReadChannel
**
** Service ID            : 0x00
**
** Description           : This service returns the value of the specified
**                         DIO Channel.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Re-entrant
**
** Input Parameters      : ChannelId
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : Dio_LevelType - STD_HIGH/STD_LOW depending on the
**                         physical level of the Pin
**
** Preconditions         : DIO Driver must be initialized.
**
** Global Variables Used : Dio_GblDriverStatus(Read), Dio_GpConfigPtr(Read)
**
** Functions Invoked     : Det_ReportError
**
** Registers Used        : PPRn, JPPRn.
*******************************************************************************/
#define DIO_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* QAC Warning: START Msg(2:3227)-1 */
/* Implementation of the Dio_ReadChannel API */
/* Implements DIO_ESDD_UD_051 */
/* Implements DIO_ESDD_UD_046, DIO_ESDD_UD_047, DIO_ESDD_UD_019 */
/* Implements DIO171 ,DIO128, DIO060, DIO023, DIO182, DIO118, DIO013, DIO089 */
/* Implements DIO011, DIO133, DIO185, DIO005, DIO026, DIO103, DIO015, DIO017 */
/* Implements DIO027, DIO051, DIO083, DIO084, DIO074, DIO175, DIO140, DIO179 */
/* Implements EAAR_PN0034_FR_0049, EAAR_PN0061_FR_0002, EAAR_PN0034_FR_0052 */
/* Implements EAAR_PN0034_NR_0069, DIO066, EAAR_PN0034_FR_0018, DIO180 */
/* QAC Warning: START Msg(2:3206)-9 */
FUNC(Dio_LevelType, DIO_PUBLIC_CODE) Dio_ReadChannel(Dio_ChannelType ChannelId)
{
  /* END Msg(2:3227)-1 */
  /* END Msg(2:3206)-9 */
  /* Implements DIO_ESDD_UD_011 , DIO_ESDD_UD_039 */
  #if (DIO_CHANNEL_CONFIGURED == STD_ON)
  /* Implements DIO_ESDD_UD_023 */
  P2CONST(Dio_PortGroup, DIO_VAR, DIO_PRIVATE_CONST) LpPortGroup;
  /* Implements DIO_ESDD_UD_025 */
  P2CONST(Dio_PortChannel, DIO_VAR, DIO_PRIVATE_CONST) LpPortChannel;
  volatile P2VAR(uint32 , AUTOMATIC, DIO_PRIVATE_DATA) LpPortAddress;
  /* QAC Warning: START Msg(2:3204)-8 */
  Dio_PortLevelType LddPortLevel;
  #endif
  /* Implements DIO_ESDD_UD_047 */
  Dio_LevelType LddLevel;
  /* END Msg(2:3204)-8 */
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  /* Declare the variable to store the DET return value */
  Std_ReturnType LenDetErrFlag;
  /* MISRA Violation: START Msg(4:2982)-8 */
  LenDetErrFlag = E_NOT_OK;
  /* END Msg(4:2982)-8 */
  #endif
  /* Initialize the return value to STD_LOW */
  LddLevel = STD_LOW;
  #if (DIO_CHANNEL_CONFIGURED == STD_ON)
  /* MISRA Violation: START Msg(4:2982)-8 */
  LddPortLevel = STD_LOW;
  /* END Msg(4:2982)-8 */
  #endif
  /* Check whether DIO_DEV_ERROR_DETECT is enabled */
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  /* Implements DIO_ESDD_UD_041 , DIO_ESDD_UD_002 */
  /* Implements EAAR_PN0034_FR_0064 */
  if (DIO_UNINITIALIZED == Dio_GblDriverStatus)
  {
    /* Report Error to DET */
    (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                                DIO_READ_CHANNEL_SID, DIO_E_UNINIT);
  }
  else
  #endif
  /* (DIO_DEV_ERROR_DETECT == STD_ON) */
  {
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    /* Implements DIO_ESDD_UD_011 */
    #if (DIO_CHANNEL_CONFIGURED == STD_ON)
    /* Check whether the Channel Id is out of range */
    /* Implements DIO_ESDD_UD_007 */
    /* Implements EAAR_PN0034_FR_0064 */
    /* QAC Warning: START Msg(2:2814)-5 */
    if (ChannelId >= Dio_GpConfigPtr->usNoofChannels)
    #endif
    {
      /* END Msg(2:2814)-5 */
      /* Report Error to DET */
      /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_034 */
      (void) Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                        DIO_READ_CHANNEL_SID, DIO_E_PARAM_INVALID_CHANNEL_ID);
      LenDetErrFlag = E_OK;
    }
    #if (DIO_CHANNEL_CONFIGURED == STD_ON)
    else
    #endif
    {
      /* No action required */
    }
    /* MISRA C Rule Violations: START Msg(4:2992)-9 */
    /* MISRA C Rule Violations: START Msg(4:2996)-10 */
    if (E_NOT_OK == LenDetErrFlag)
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
    {
      /* END Msg(4:2992)-9 */
      /* END Msg(4:2996)-10 */
      /* Check if atleast one Channel is configured */
      #if (DIO_CHANNEL_CONFIGURED == STD_ON)
      /* MISRA C Rule Violations: START Msg(4:0491)-3 */
      /* QAC Warning: START Msg(2:2814)-5 */
      /* Get the pointer to the required Port */
      /* Implements DIO_ESDD_UD_042 */
      LpPortChannel = &(Dio_GpConfigPtr->pPortChannel[ChannelId]);
      /* Get the pointer to the required Port */
      /* Implements DIO_ESDD_UD_042 */
      LpPortGroup = &(Dio_GpConfigPtr->pPortGroup[LpPortChannel->ucPortIndex]);
      /* END Msg(4:0491)-3 */
      /* MISRA C Rule Violations: START Msg(4:0303)-4 */
      /* Get the PSRn or JPSRn address for the required port */
      LpPortAddress = (volatile uint32 *)(*(LpPortGroup->pPortAddress));
      /* Implements DIO_ESDD_UD_002 */
      /* END Msg(4:0303)-4 */
      /* END Msg(2:2814)-5 */
      /* Check if the required port is JTAG port */
      if (DIO_JTAGPORT == LpPortGroup->ucPortType)
      {
        /* MISRA C Rule Violations: START Msg(4:0488)-1*/
        /*
         * Read the port value from PPR register by adding offset to
         * PSR register address of Numeric/Alphabetic/ Analog Port
         */
        /* Implements DIO_ESDD_UD_045, DIO_ESDD_UD_001 */
        /* QAC Warning: START Msg(2:3892)-2 */
        /* QAC Warning: START Msg(2:2824)-6 */
        LddPortLevel = (Dio_PortLevelType)
                                   (*(LpPortAddress + DIO_PPR_OFFSET_JTAG));
        /* END Msg(2:2824)-6 */
      }
      /* Implements DIO_ESDD_UD_002 */
      else if (DIO_NORMALPORT == LpPortGroup->ucPortType)
      {
        /*
         * Read the port value from PPR register by adding offset to
         * PSR register address of Numeric/Alphabetic/Analog Port
         */
        /*
         * Read the port value from PPR register by adding offset to
         * PSR register address of Numeric/Alphabetic/ Analog Port
         */
        /* Implements  DIO_ESDD_UD_001 */
        LddPortLevel = (Dio_PortLevelType)
                                   (*(LpPortAddress + DIO_PPR_OFFSET_NONJTAG));
        /* END Msg(2:3892)-2 */
        /* END Msg(4:0488)-1 */
      }
      else
      {
        /* Implements DIO_ESDD_UD_045 */
        LddPortLevel = (Dio_PortLevelType)(*(LpPortAddress));
      }
      /*
       * Mask the port level value for required Channel bit position and
       * clear other bit positions
       */
      LddPortLevel = LddPortLevel & (LpPortChannel->usMask);
      /* Check whether value is not equal to zero */
      /* Implements DIO_ESDD_UD_002 */
      if (DIO_ZERO  != LddPortLevel)
      {
        /* Set the return value to STD_HIGH */
        LddLevel = STD_HIGH;
      }
      else
      {
        /* No action required */
      }
      #endif
      /* (DIO_CHANNEL_CONFIGURED == STD_ON) */
    }
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    else
    {
      /* No action required */
    }
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
  }
  /* Return the Channel Level */
  return LddLevel;
}
#define DIO_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements EAAR_PN0034_NR_0020 */
/*******************************************************************************
** Function Name         : Dio_WriteChannel
**
** Service ID            : 0x01
**
** Description           : This service writes the given value into the
**                         specified DIO Channel.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Re-entrant
**
** Input Parameters      : ChannelId and Level.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : DIO Driver must be initialized.
**
** Global Variables Used : Dio_GblDriverStatus(Read), Dio_GpConfigPtr(Read)
**
** Functions Invoked     : Det_ReportError, DIO_ENTER_CRITICAL_SECTION,
**                         DIO_EXIT_CRITICAL_SECTION, DIO_WRITE_REG_ONLY,
**                         DIO_CHECK_WRITE_VERIFY_RUNTIME.
**
** Registers Used        : PSRn, JPSRn, PMSRn, JPMSRn.
*******************************************************************************/
#define DIO_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
 /* Implementation of the Dio_WriteChannel API */
 /* Implements DIO_ESDD_UD_052 */
 /* Implements DIO_ESDD_UD_046, DIO_ESDD_UD_019, DIO_ESDD_UD_039 */
 /* Implements DIO171, DIO128, DIO060, DIO006, DIO134, DIO182, DIO051*/
 /* Implements DIO023, DIO015, DIO017, DIO119, DIO079, DIO089,DIO066  */
 /* Implements DIO070, DIO074, DIO005, DIO026, DIO028, DIO029, DIO175, DIO067*/
 /* Implements EAAR_PN0061_FR_0006, EAAR_PN0034_FR_0049, EAAR_PN0034_FSR_0001 */
 /* Implements EAAR_PN0034_FSR_0003, EAAR_PN0034_FSR_0004, EAAR_PN0034_FR_0013*/
 /* Implements EAAR_PN0034_NR_0069, EAAR_PN0034_FR_0018 */
 /* QAC Warning: START Msg(2:3227)-1 */
 /* QAC Warning: START Msg(2:3206)-9 */
FUNC(void, DIO_PUBLIC_CODE) Dio_WriteChannel
(Dio_ChannelType ChannelId, Dio_LevelType Level)
{
  /* END Msg(2:3227)-1 */
  /* END Msg(2:3206)-9 */
  /* Implements DIO_ESDD_UD_011 */
  #if (DIO_CHANNEL_CONFIGURED == STD_ON)
  /* Implements DIO_ESDD_UD_023 */
  P2CONST(Dio_PortGroup, DIO_VAR, DIO_PRIVATE_CONST) LpPortGroup;
  /* Implements DIO_ESDD_UD_025 */
  P2CONST(Dio_PortChannel, DIO_VAR, DIO_PRIVATE_CONST) LpPortChannel;
  volatile P2VAR(uint32, AUTOMATIC, DIO_PRIVATE_DATA) LpPortAddress;
  uint32 LulPortModeLevel;
  /* MISRA C Rule Violations: START Msg(4:0759)-2 */
  /* Implements DIO_ESDD_UD_024 */
  Dio_PortData LunPSRContent;
  /* END Msg(4:0759)-2 */
  #endif
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  /* Declare the variable to store the DET return value */
  Std_ReturnType LenDetErrFlag;
  /* MISRA Violation: START Msg(4:2982)-8 */
  LenDetErrFlag = E_NOT_OK;
  /* END Msg(4:2982)-8 */
  #endif
  /* Check whether DIO_DEV_ERROR_DETECT is enabled */
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  /* Implements DIO_ESDD_UD_041 , DIO_ESDD_UD_002 */
  if (DIO_UNINITIALIZED == Dio_GblDriverStatus)
  {
    /* Report Error to DET */
    /* Implements EAAR_PN0034_FR_0064 */
    (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                                DIO_WRITE_CHANNEL_SID, DIO_E_UNINIT);
  }
  else
  #endif
  /* (DIO_DEV_ERROR_DETECT == STD_ON) */
  {
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    /* Implements DIO_ESDD_UD_011 */
    #if (DIO_CHANNEL_CONFIGURED == STD_ON)
    /* Check whether the Channel Id is out of range */
    LunPSRContent.ulLongWord = ((uint32)DIO_ZERO);
    /* Implements DIO_ESDD_UD_007 */
    /* QAC Warning: START Msg(2:2814)-5 */
    if (ChannelId >= Dio_GpConfigPtr->usNoofChannels)
    #endif
    {
      /* END Msg(2:2814)-5 */
      /* Report Error to DET */
      /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_034 */
      (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                    DIO_WRITE_CHANNEL_SID, DIO_E_PARAM_INVALID_CHANNEL_ID);
      LenDetErrFlag = E_OK;
    }
    #if (DIO_CHANNEL_CONFIGURED == STD_ON)
    else
    #endif
    {
      /* No action required */
    }
    #if (DIO_CHANNEL_CONFIGURED == STD_ON)
    if (E_NOT_OK == LenDetErrFlag)
    {
      /* Get the pointer to the Port Channel */
      /* Implements DIO_ESDD_UD_042 */
      /* MISRA Violation: START Msg(4:0491)-3 */
      /* QAC Warning: START Msg(2:2814)-5 */
      LpPortChannel = &(Dio_GpConfigPtr->pPortChannel[ChannelId]);
      /* Get the pointer to port group to which the channel belongs */
      /* Implements DIO_ESDD_UD_042 */
      LpPortGroup = &(Dio_GpConfigPtr->pPortGroup[LpPortChannel->ucPortIndex]);
      /* END Msg(4:0491)-3 */
      /* END Msg(2:2814)-5 */
      /* Check if the required port is INPUT port */
      /* Implements DIO_ESDD_UD_002 */
      /* QAC Warning: START Msg(2:2814)-5 */
      if (DIO_INPUTPORT == LpPortGroup->ucPortType)
      {
        /* END Msg(2:2814)-5 */
        /* Report Error to DET */
        /* Implements EAAR_PN0034_FR_0064 */
        (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                    DIO_WRITE_CHANNEL_SID, DIO_E_PARAM_INVALID_PORT_ID);
        LenDetErrFlag = E_OK;
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
    #endif
    /* MISRA C Rule Violations: START Msg(4:2992)-9 */
    /* MISRA C Rule Violations: START Msg(4:2996)-10 */
    if (E_NOT_OK == LenDetErrFlag)
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
    {
      /* END Msg(4:2992)-9 */
      /* END Msg(4:2996)-10 */
      /* Check if atleast one Channel is configured */
      #if (DIO_CHANNEL_CONFIGURED == STD_ON)
      /* Check whether DIO_DEV_ERROR_DETECT is disabled */
      #if (DIO_DEV_ERROR_DETECT == STD_OFF)
      /* MISRA C Rule Violations: START Msg(4:0491)-3 */
      /* QAC Warning: START Msg(2:2814)-5 */
      /* Get the pointer to the required Port */
      /* Implements DIO_ESDD_UD_042 */
      LpPortChannel = &(Dio_GpConfigPtr->pPortChannel[ChannelId]);
      /* Get the pointer to the required Port */
      /* Implements DIO_ESDD_UD_042 */
      LpPortGroup = &(Dio_GpConfigPtr->pPortGroup[LpPortChannel->ucPortIndex]);
      /* END Msg(4:0491)-3 */
      #endif
      /* (DIO_DEV_ERROR_DETECT == STD_OFF) */
      /* Get the PSRn or JPSRn address for the required port */
      /* MISRA C Rule Violations: START Msg(4:0303)-4 */
      LpPortAddress =(volatile uint32 *)(*(LpPortGroup->pPortAddress));
      /* END Msg(4:0303)-4 */
      /* END Msg(2:2814)-5 */
      /* Implements DIO_ESDD_UD_012 */
      /* Implements EAAR_PN0061_FR_0024 */
      #if (DIO_CRITICAL_SECTION_PROTECTION == STD_ON)
        DIO_ENTER_CRITICAL_SECTION(DIO_REGISTER_PROTECTION);
      #endif
       /* Implements DIO_ESDD_UD_002 */
      if (DIO_JTAGPORT == LpPortGroup->ucPortType)
      {
        /* Get the mask value for the Channel */
        /* Implements DIO_ESDD_UD_001 */
        /* QAC Warning: START Msg(2:3892)-2 */
        /* QAC Warning: START Msg(2:2824)-6 */
        /* MISRA C Rule Violations: START Msg(4:0488)-1*/
        LulPortModeLevel = (uint32)(*(LpPortAddress + DIO_PMSR_OFFSET_JTAG))\
                             & LpPortChannel->usMask ;
        /* END Msg(2:2824)-6 */
      }
         /* Implements DIO_ESDD_UD_002 */
      else if (DIO_NORMALPORT == LpPortGroup->ucPortType)
      {
        /* Implements DIO_ESDD_UD_001 */
        LulPortModeLevel = (uint32)(*(LpPortAddress + DIO_PMSR_OFFSET_NONJTAG))\
                             & LpPortChannel->usMask ;
        /* END Msg(2:3892)-2 */
        /* END Msg(4:0488)-1 */
      }
      else
      {
        /* Implements DIO_ESDD_UD_002 */
        LulPortModeLevel = (uint32)DIO_ZERO;
      }
      /* If the specified channel is configured as an output channel */
      if ((uint32)DIO_ZERO == LulPortModeLevel)
      {
        /*
         * Enable appropriate Channel position by writing
         * upper 16bits of PSR register
         */
        LunPSRContent.Tst_WordValue.usMSWord = LpPortChannel->usMask;
        /* Check if the input level value is ZERO */
        if (STD_LOW == Level)
        {
          /*
           * Make the Channel value as ZERO by writing
           * lower 16-bits of PSR register
           */
          /* Implements DIO_ESDD_UD_002 */
          LunPSRContent.Tst_WordValue.usLSWord = DIO_ZERO;
        }
        else
        {
          /*
           * Make the Channel value as ONE by writing
           * lower 16-bits of PSR register
           */
          LunPSRContent.Tst_WordValue.usLSWord = LpPortChannel->usMask;
        }

        /* Load 32 bit value to PSR register */
        /* Implements DIO_ESDD_UD_016 ,DIO_ESDD_UD_017 ,DIO_ESDD_UD_035 */
        /* Implements EAAR_PN0034_FSR_0002 */
        DIO_WRITE_REG_ONLY(LpPortAddress, LunPSRContent.ulLongWord)

        DIO_CHECK_WRITE_VERIFY_RUNTIME(LpPortAddress,
        (LunPSRContent.ulLongWord & LpPortChannel->usMask),
                                 (LpPortChannel->usMask), DIO_WRITE_CHANNEL_SID)
      }
      else
      {
        /* No action required */
      }
      /* Implements DIO_ESDD_UD_012 */
      /* Implements EAAR_PN0061_FR_0024 */
      #if (DIO_CRITICAL_SECTION_PROTECTION == STD_ON)
      DIO_EXIT_CRITICAL_SECTION(DIO_REGISTER_PROTECTION);
      #endif
      #endif
      /* (DIO_CHANNEL_CONFIGURED == STD_ON) */
    }
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    else
    {
      /* No action required */
    }
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
  }
}
#define DIO_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements EAAR_PN0034_NR_0020 */
/*******************************************************************************
** Function Name         : Dio_FlipChannel
**
** Service ID            : 0x11
**
** Description           : This service flip the level of a channel and return
**                         the level of the channel after flip.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Re-entrant
**
** Input Parameters      : ChannelId
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : Dio_LevelType - STD_HIGH/STD_LOW depending on the
**                         physical level of the Pin.
**
** Preconditions         : DIO Driver must be initialized.
**
** Global Variables Used : Dio_GblDriverStatus(Read), Dio_GpConfigPtr(Read)
**
** Functions Invoked     : Det_ReportError, DIO_ENTER_CRITICAL_SECTION,
**                         DIO_EXIT_CRITICAL_SECTION,
**                         DIO_CHECK_WRITE_VERIFY_RUNTIME, DIO_WRITE_REG_ONLY.
**
** Registers Used        : PNOTn, JPNOTn, PPRn, JPPRn, PMSRn, JPMSRn.
*******************************************************************************/
/* Implements DIO_ESDD_UD_010 */
#if (DIO_FLIP_CHANNEL_API == STD_ON)
#define DIO_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Implementation Of Dio_FlipChannel API */
/* Implements DIO_ESDD_UD_053, DIO_ESDD_UD_009, DIO_ESDD_UD_046 */
/* Implements DIO171, DIO128, DIO005, DIO119, DIO153_Conf, DIO026, DIO191 */
/* Implements DIO089, DIO193, DIO190, DIO192, DIO175,  DIO140, DIO066, DIO067 */
/* Implements EAAR_PN0034_FR_0049, EAAR_PN0034_FSR_0001, EAAR_PN0034_FR_0013 */
/* Implements EAAR_PN0034_FSR_0003, EAAR_PN0034_FSR_0004, EAAR_PN0034_FR_0030 */
/* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0081, EAAR_PN0034_NR_0002 */
/* Implements EAAR_PN0034_NR_0069, EAAR_PN0034_FR_0018 */

/* QAC Warning: START Msg(2:3227)-1 */
FUNC(Dio_LevelType, DIO_PUBLIC_CODE) Dio_FlipChannel(Dio_ChannelType ChannelId)
{
  /* END Msg(2:3227)-1 */
  /* Implements DIO_ESDD_UD_011 */
  #if (DIO_CHANNEL_CONFIGURED == STD_ON)
  /* Implements DIO_ESDD_UD_023 */
  P2CONST(Dio_PortGroup, DIO_VAR, DIO_PRIVATE_CONST) LpPortGroup;
  /* Implements DIO_ESDD_UD_025 */
  P2CONST(Dio_PortChannel, DIO_VAR, DIO_PRIVATE_CONST) LpPortChannel;
  P2VAR(uint32 volatile, AUTOMATIC, DIO_PRIVATE_DATA) LpPortAddress;
  Dio_PortLevelType LddPortLevel;
  VAR(uint32, AUTOMATIC)LulPortModeLevel;
  #endif
  /* Implements DIO_ESDD_UD_047 */
  Dio_LevelType LddLevel;
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  /* Declare the variable to store the DET return value */
  Std_ReturnType LenDetErrFlag;
  LenDetErrFlag = E_NOT_OK;
  #endif
  /* Initialize the return value to STD_LOW */
  LddLevel = STD_LOW;
  /* Implements DIO_ESDD_UD_011*/
  #if (DIO_CHANNEL_CONFIGURED == STD_ON)
  LddPortLevel = STD_LOW;
  #endif
  /* Check whether DIO_DEV_ERROR_DETECT is enabled */
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  #if (DIO_CHANNEL_CONFIGURED == STD_ON)
  /* Implements DIO_ESDD_UD_041 ,DIO_ESDD_UD_002 */
  if (DIO_UNINITIALIZED == Dio_GblDriverStatus)
  {
    /* Report Error to DET */
    (void) Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                               DIO_FLIP_CHANNEL_SID, DIO_E_UNINIT);
  }
  else
  #endif
  /* (DIO_CHANNEL_CONFIGURED == STD_ON) */
  #endif
  /* (DIO_DEV_ERROR_DETECT == STD_ON) */
  {
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    #if (DIO_CHANNEL_CONFIGURED == STD_ON)
    /* Check whether the Channel Id is out of range */
    /* Implements DIO_ESDD_UD_007 */
    /* QAC Warning: START Msg(2:2814)-5 */
    if (ChannelId >= Dio_GpConfigPtr->usNoofChannels)
    #endif
    {
      /* END Msg(2:2814)-5 */
      /* Report Error to DET */
      /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_034 */
      (void) Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                        DIO_FLIP_CHANNEL_SID, DIO_E_PARAM_INVALID_CHANNEL_ID);
      LenDetErrFlag = E_OK;
    }
    /* Implements DIO_ESDD_UD_011 */
    #if (DIO_CHANNEL_CONFIGURED == STD_ON)
    else
    #endif
    {
      /* No action required */
    }
    #if (DIO_CHANNEL_CONFIGURED == STD_ON)
    if (E_NOT_OK == LenDetErrFlag)
    {
      /* Get the pointer to the Port Channel */
      /* Implements DIO_ESDD_UD_042 */
      /* MISRA C Rule Violations: START Msg(4:0491)-3 */
      LpPortChannel = &(Dio_GpConfigPtr->pPortChannel[ChannelId]);
      /* Get the pointer to port group to which the channel belongs */
      /* QAC Warning: START Msg(2:2814)-5 */
      LpPortGroup = &(Dio_GpConfigPtr->pPortGroup[LpPortChannel->ucPortIndex]);
      /* END Msg(2:2814)-5 */
      /* Check if the required port is INPUT port */
      /* Implements DIO_ESDD_UD_002 */
      /* QAC Warning: START Msg(2:2814)-5 */
      if (DIO_INPUTPORT == LpPortGroup->ucPortType)
      {
        /* END Msg(2:2814)-5 */
        /* Report Error to DET */
        /* Implements EAAR_PN0034_FR_0064 */
        (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                    DIO_FLIP_CHANNEL_SID, DIO_E_PARAM_INVALID_PORT_ID);
        LenDetErrFlag = E_OK;
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
    #endif
    if (E_NOT_OK == LenDetErrFlag)
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
    {
      /* Check if atleast one Channel is configured */
      /* Implements DIO_ESDD_UD_011 */
      #if (DIO_CHANNEL_CONFIGURED == STD_ON)
      /* Check whether DIO_DEV_ERROR_DETECT is enabled */
      #if (DIO_DEV_ERROR_DETECT == STD_OFF)
      /* Get the pointer to the required Port */
      /* Implements DIO_ESDD_UD_041 */
      /* QAC Warning: START Msg(2:2814)-5 */
      LpPortChannel = &(Dio_GpConfigPtr->pPortChannel[ChannelId]);
      /* Get the pointer to the required Port */
      /* Implements DIO_ESDD_UD_042 */
      LpPortGroup = &(Dio_GpConfigPtr->pPortGroup[LpPortChannel->ucPortIndex]);
      /* END Msg(4:0491)-3 */
      #endif
      /* MISRA C Rule Violations: START Msg(4:0303)-4 */
      /* Get the PSRn or JPSRn address for the required port */
      LpPortAddress =(volatile uint32 *)(*(LpPortGroup->pPortAddress));
      /* END Msg(4:0303)-4 */
      /* END Msg(2:2814)-5 */
      /* Implements EAAR_PN0061_FR_0024 */
      #if (DIO_CRITICAL_SECTION_PROTECTION == STD_ON)
      DIO_ENTER_CRITICAL_SECTION(DIO_REGISTER_PROTECTION);
      #endif
      /* Check if the required port is JTAG port */
      /* Implements DIO_ESDD_UD_002 */
      /* Check if the required port is JTAG port */
      /* Implements DIO_ESDD_UD_002 */
      if (DIO_JTAGPORT == LpPortGroup->ucPortType)
      {
        /* MISRA C Rule Violations: START Msg(4:0488)-1 */
        /* QAC Warning: START Msg(2:3892)-2 */
        /* QAC Warning: START Msg(2:2824)-6 */
        /* Implements DIO_ESDD_UD_001 */
        LulPortModeLevel = (uint32) (*(LpPortAddress + DIO_PMSR_OFFSET_JTAG) &
                                                (LpPortChannel->usMask));
        /* END Msg(2:2824)-6 */
        /* Implements DIO_ESDD_UD_002 */
        if (DIO_OUTPUT_MODE == LulPortModeLevel)
        {
          /*
           * Read the value of corresponding channel from PPR register
           */
          /* Implements DIO_ESDD_UD_001 */
          /* Implements DIO_ESDD_UD_016 , DIO_ESDD_UD_017 , DIO_ESDD_UD_035 */
          LddPortLevel = (Dio_PortLevelType)
                                      (*(LpPortAddress + DIO_PPR_OFFSET_JTAG));
          /* Mask Channelbit position in PNOT register */
          /* MISRA Violation: START Msg(4:0310)-7 */
          DIO_WRITE_REG_ONLY((volatile uint8 *)
           (LpPortAddress + DIO_PNOT_OFFSET_JTAG),
                                            (uint8)(LpPortChannel->usMask))
          /* For Register Write Verify */
          /* Implements EAAR_PN0034_FSR_0002 */
          DIO_CHECK_WRITE_VERIFY_RUNTIME(LpPortAddress,
          (uint8)((LpPortChannel->usMask)& (uint8)(~LddPortLevel)),
          (LpPortChannel->usMask), DIO_FLIP_CHANNEL_SID)
          /* END Msg(4:0310)-7 */
        }
        else
        {
          /* Do Nothing */
        }
        /*
         * Read the port value from PPR register by adding offset to
         * PSR register address for JTAG Port
         */
        /* Implements DIO_ESDD_UD_045 , DIO_ESDD_UD_001 */
        LddPortLevel = (Dio_PortLevelType)
                                     (*(LpPortAddress + DIO_PPR_OFFSET_JTAG));
      }
      /* Implements DIO_ESDD_UD_002 */
      else if (DIO_NORMALPORT == LpPortGroup->ucPortType)
      {
        /* Implements DIO_ESDD_UD_001 */
        LulPortModeLevel = (uint32)
        (*(LpPortAddress + DIO_PMSR_OFFSET_NONJTAG) & (LpPortChannel->usMask));
        /* To check channel is output channel*/
        if (DIO_OUTPUT_MODE == LulPortModeLevel)
        {
          /*
           * Write the PNOT register by adding offset to PSR register address
          */
          /* Implements DIO_ESDD_UD_001 */
          /* Implements DIO_ESDD_UD_016 , DIO_ESDD_UD_017 , DIO_ESDD_UD_035 */
          LddPortLevel = (Dio_PortLevelType)
                                   (*(LpPortAddress + DIO_PPR_OFFSET_NONJTAG));
          /* MISRA Violation: START Msg(4:0310)-7 */
          DIO_WRITE_REG_ONLY((volatile uint16 *)
          (LpPortAddress + DIO_PNOT_OFFSET_JTAG),
                                              (uint16)(LpPortChannel->usMask))
          /* For Register Write Verify */
          /* Implements EAAR_PN0034_FSR_0002 */
          DIO_CHECK_WRITE_VERIFY_RUNTIME(LpPortAddress,
          (uint16)((uint16)(LpPortChannel->usMask) & (uint16)(~LddPortLevel)),
                         (uint16)(LpPortChannel->usMask), DIO_FLIP_CHANNEL_SID)
          /* END Msg(4:0310)-7 */
        }
        else
        {
          /* Do Nothing */
        }
        /*
         * Read the port value from PPR register by adding offset to
         * PSR register address
         */
        /* Implements DIO_ESDD_UD_045 */
        LddPortLevel = (Dio_PortLevelType)
                                   (*(LpPortAddress + DIO_PPR_OFFSET_NONJTAG));
        /* END Msg(4:0488)-1 */
        /* END Msg(2:3892)-2 */
      }
      else
      {
        /* No Action Required */
      }
      /* Implements DIO_ESDD_UD_012 */
      /* Implements EAAR_PN0061_FR_0024 */
      #if (DIO_CRITICAL_SECTION_PROTECTION == STD_ON)
        DIO_EXIT_CRITICAL_SECTION(DIO_REGISTER_PROTECTION);
      #endif
      /*
       * Mask the port value for required Channel bit position and
       * clear other bit positions
       */
      LddPortLevel = LddPortLevel & (LpPortChannel->usMask);
      /* Check whether value is not equal to zero */
      /* Implements DIO_ESDD_UD_002 */
      if (DIO_ZERO != LddPortLevel)
      {
        /* Set the return value to STD_HIGH */
        LddLevel = STD_HIGH;
      }
      else
      {
        /* No action required */
      }
      #endif
      /* (DIO_CHANNEL_CONFIGURED == STD_ON) */
    }
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    else
    {
      /* No action required */
    }
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
  }
  /* Return the Channel Level */
  return(LddLevel);
}
#define DIO_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif
/* #if (DIO_FLIP_CHANNEL_API == STD_ON) */
/* Implements EAAR_PN0034_NR_0020 */
/*******************************************************************************
** Function Name         : Dio_ReadChannelGroup
**
** Service ID            : 0x04
**
** Description           : This service returns the value of the ChannelGroup
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Re-entrant
**
** Input Parameters      : ChannelGroupIdPtr
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : Returns the value of physical level of the Channels
**                         that form the ChannelGroup
**
** Preconditions         : DIO Driver must be initialized.
**
** Global Variables Used : Dio_GblDriverStatus(Read), Dio_GpConfigPtr(Read)
**                         Dio_GusChannelGroupsOffset(Read)
**
** Functions Invoked     : Det_ReportError
**
** Registers Used        : PPRn, JPPRn
*******************************************************************************/
#define DIO_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Implementation of the Dio_ReadChannelGroup API */
/* Implements DIO_ESDD_UD_054 */
/* Implements DIO171, DIO128, DIO056, DIO060, DIO021, DIO092, DIO093, DIO118 */
/* Implements DIO137, DIO014, DIO024, DIO184, DIO022, DIO051, DIO084*/
/* Implements DIO114, DIO005, DIO026, DIO037, DIO083, DIO186, DIO178, DIO188 */
/* Implements EAAR_PN0034_FR_0049, EAAR_PN0061_FR_0002, EAAR_PN0034_FR_0081 */
/* Implements EAAR_PN0034_NR_0069, DIO066, EAAR_PN0034_FR_0018  */
/* QAC Warning: START Msg(2:3227)-1 */
/* QAC Warning: START Msg(2:3206)-9 */
FUNC(Dio_PortLevelType, DIO_PUBLIC_CODE) Dio_ReadChannelGroup
(P2CONST(Dio_ChannelGroupType, DIO_VAR, DIO_CONFIG_CONST) ChannelGroupIdPtr)
{
  /* END Msg(2:3227)-1 */
  /* END Msg(2:3206)-9 */
  /* Implements DIO_ESDD_UD_008 , DIO_ESDD_UD_014 , DIO_ESDD_UD_015 */
  /* Implements DIO_ESDD_UD_036 */
  #if (DIO_CHANNELGROUP_CONFIGURED == STD_ON)
  /* Implements DIO_ESDD_UD_023 , DIO_ESDD_UD_037 */
  P2CONST(Dio_PortGroup, DIO_VAR, DIO_PRIVATE_CONST) LpPortGroup;
  /* Implements DIO_ESDD_UD_021 */
  P2CONST(Dio_ChannelGroupType, DIO_VAR, DIO_PRIVATE_CONST) LpChannelGroupPtr;
  volatile P2VAR(uint32, AUTOMATIC, DIO_PRIVATE_DATA) LpPortAddress;
  #endif
  /* Implements DIO_ESDD_UD_045 */
  /* QAC Warning: START Msg(2:3204)-8 */
  Dio_PortLevelType LddPortLevel;
  /* END Msg(2:3204)-8 */
  /* Implements DIO_ESDD_UD_008 */
  #if (DIO_CHANNELGROUP_CONFIGURED == STD_ON)
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  uint32 LulChGrpPtrValue;
  /* Declare the variable to store the DET return value */
  Std_ReturnType LenDetErrFlag;
  LenDetErrFlag = E_NOT_OK;
  /* QAC Warning: START Msg(2:3892)-2 */
  /* MISRA Violation: START Msg(4:2982)-8 */
  LulChGrpPtrValue = DIO_ZERO;
  LpChannelGroupPtr = NULL_PTR;
  #endif
  /* (DIO_DEV_ERROR_DETECT == STD_ON) */
  #endif
  /* (DIO_CHANNELGROUP_CONFIGURED == STD_ON) */
  /* Set the return value to 0 */
  LddPortLevel = DIO_ZERO;
  /* END Msg(4:2982)-8 */
  /* Check if atleast one ChannelGroup is configured */
  /* Implements DIO_ESDD_UD_008 */
  #if (DIO_CHANNELGROUP_CONFIGURED == STD_ON)
  /* Check whether DIO_DEV_ERROR_DETECT is enabled */
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  /* Implements DIO_ESDD_UD_041 , DIO_ESDD_UD_002 */
  if (DIO_UNINITIALIZED == Dio_GblDriverStatus)
  {
    /* Report Error to DET */
    /* Implements EAAR_PN0034_FR_0064 */
    (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                                DIO_READ_CHANNEL_GROUP_SID, DIO_E_UNINIT);
  }
  else
  #endif
  /* (DIO_DEV_ERROR_DETECT == STD_ON) */
  #endif
  /* (DIO_CHANNELGROUP_CONFIGURED == STD_ON) */
  {
    #if (DIO_CHANNELGROUP_CONFIGURED == STD_ON)
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    /* Check whether ChannelGroupIdPtr is NULL_PTR */
    if (NULL_PTR == ChannelGroupIdPtr)
    {
      /* Report Error to DET */
      /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_029 */
      (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                         DIO_READ_CHANNEL_GROUP_SID, DIO_E_PARAM_POINTER);
      LenDetErrFlag = E_OK;
    }
    else
    {
      /* MISRA Violation: START Msg(4:0306)-5 */
      LulChGrpPtrValue = (((uint32)(ChannelGroupIdPtr)) -
                          ((uint32)(&Dio_GstChannelGroupData[DIO_ZERO])));
      /* END Msg(4:0306)-5 */
      /* Implements DIO_ESDD_UD_002 */
      if ( DIO_ZERO != LulChGrpPtrValue)
      {
        /* QAC Warning: START Msg(2:1252)-3 */
        /*Implements DIO_ESDD_UD_002 */
        /* Start DIO_UT_001 */
        if ((DIO_ZERO != (LulChGrpPtrValue &
                          ((uint32)(DIO_SIZE_OF_CHGRP_STRUCT - DIO_ONE)))) ||
                             (DIO_NO_OF_CHGRP_PER_CFGSET <=
                               (LulChGrpPtrValue / DIO_SIZE_OF_CHGRP_STRUCT)))
        {
          /* End DIO_UT_001 */
          /* END Msg(2:1252)-3 */
          /* Report Error to DET */
          /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_032 */
          (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                  DIO_READ_CHANNEL_GROUP_SID, DIO_E_PARAM_INVALID_GROUP);
          LenDetErrFlag = E_OK;
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
      if (E_NOT_OK == LenDetErrFlag)
      {
        /* Get the pointer to corresponding index in the array
         * Dio_GstChannelGroupData
         */
        /* Implements DIO_ESDD_UD_040 */
        /* MISRA Violation: START Msg(4:0492)-6 */
        LpChannelGroupPtr = &ChannelGroupIdPtr[Dio_GusChannelGroupsOffset];
      }
      else
      {
        /* No action required */
      }
    }
    #elif (DIO_DEV_ERROR_DETECT == STD_OFF)
    /* Get the pointer to corresponding index in the
     * array Dio_GstChannelGroupData
     */
    /* Implements DIO_ESDD_UD_040 */
    /* QAC Warning: START Msg(2:2824)-6 */
    LpChannelGroupPtr = &ChannelGroupIdPtr[Dio_GusChannelGroupsOffset];
    /* END Msg(4:0492)-6 */
    /* END Msg(2:2824)-6 */
    #endif
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    if (E_NOT_OK == LenDetErrFlag)
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
    {
      /* MISRA C Rule Violations: START Msg(4:0491)-3 */
      /* Get the Port Address in which the Channel is configured */
      /* Implements DIO_ESDD_UD_042 */
      /* QAC Warning: START Msg(2:2814)-5 */
      LpPortGroup = \
                &(Dio_GpConfigPtr->pPortGroup[LpChannelGroupPtr->ucPortIndex]);
      /* END Msg(4:0491)-3 */
      /* MISRA C Rule Violations: START Msg(4:0488)-1*/
      /* Get the PSRn or JPSRn address for the required port */
      /* MISRA C Rule Violations: START Msg(4:0303)-4 */
      LpPortAddress =(volatile uint32 *)(*(LpPortGroup->pPortAddress));
      /* END Msg(2:2814)-5 */
      /* END Msg(4:0303)-4 */
      /* Check if the required port is JTAG port */
      /* Implements DIO_ESDD_UD_002 */
      if (DIO_JTAGPORT == LpPortGroup->ucPortType)
      {
        /* Read the port value from PPR register by adding offset to
         * PSR register address of Numeric/Alphabetic/ Analog Port
         */
        /* Implements DIO_ESDD_UD_045 */
        /* QAC Warning: START Msg(2:2824)-6 */
        LddPortLevel = (Dio_PortLevelType)
                                   (*(LpPortAddress + DIO_PPR_OFFSET_JTAG));
        /* END Msg(2:2824)-6 */
      }
      /* Implements DIO_ESDD_UD_002 */
      else if (DIO_NORMALPORT == LpPortGroup->ucPortType)
      {
        /* Implements DIO_ESDD_UD_045 , DIO_ESDD_UD_001 */
        LddPortLevel =
                 (Dio_PortLevelType)(*(LpPortAddress + DIO_PPR_OFFSET_NONJTAG));
        /* END Msg(4:0488)-1 */
        /* END Msg(2:3892)-2 */
      }
      else
      {
        /* Read the port value from PSR register  */
        LddPortLevel = (Dio_PortLevelType)(*(LpPortAddress));
      }
      /*
       * Mask the port value for required ChannelGroup related bit positions
       * and clear other bit positions
       */
      LddPortLevel =
                (Dio_PortLevelType)(LddPortLevel & (LpChannelGroupPtr->usMask));

      /* Rotate right to get the corresponding ChannelGroup value */
      LddPortLevel =
             (Dio_PortLevelType)(LddPortLevel >> (LpChannelGroupPtr->ucOffset));
    }
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    else
    {
      /* No action required */
    }
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
    #else
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    /* Report Error to DET */
    /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_032 */
    /* Implements EAAR_PN0034_FR_0064 */
    (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                         DIO_READ_CHANNEL_GROUP_SID, DIO_E_PARAM_INVALID_GROUP);
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
    #endif
    /* (DIO_CHANNELGROUP_CONFIGURED == STD_ON) */
  }
  /* Return the ChannelGroup Level */
  return(LddPortLevel);
}
#define DIO_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements EAAR_PN0034_NR_0020 */
/*******************************************************************************
** Function Name         : Dio_WriteChannelGroup
**
** Service ID            : 0x05
**
** Description           : This service writes specified level to the
**                         ChannelGroup
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Re-entrant
**
** Input Parameters      : ChannelGroupIdPtr and Level.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : DIO Driver must be initialized.
**
** Global Variables Used : Dio_GblDriverStatus(Read), Dio_GpConfigPtr(Read)
**                         Dio_GusChannelGroupsOffset(Read)
**
** Functions Invoked     : Det_ReportError, DIO_ENTER_CRITICAL_SECTION,
**                         DIO_EXIT_CRITICAL_SECTION, DIO_WRITE_REG_ONLY,
**                         DIO_CHECK_WRITE_VERIFY_RUNTIME.
**
** Registers Used        : PSRn, JPSRn, PMSRn, JPMSRn.
*******************************************************************************/
#define DIO_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Implementation of the Dio_WriteChannelGroup API */
/* Implements DIO_ESDD_UD_055 */
/* Implements DIO171, DIO128, DIO056, DIO060, DIO008, DIO090, DIO066 */
/* Implements DIO138, DIO005, DIO114, DIO026, DIO039, DIO040, DIO186 */
/* Implements DIO091, DIO070, DIO119, DIO051, DIO184, DIO024,  DIO140, DIO067 */
/* Implements EAAR_PN0034_FR_0049, EAAR_PN0034_FSR_0001, EAAR_PN0034_FR_0013 */
/* Implements EAAR_PN0034_FSR_0003, EAAR_PN0034_FSR_0004 */
/* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0030 */
/* Implements EAAR_PN0034_NR_0069, EAAR_PN0034_FR_0018 */
/* QAC Warning: START Msg(2:3206)-9 */
/* QAC Warning: START Msg(2:3227)-1 */
FUNC(void, DIO_PUBLIC_CODE) Dio_WriteChannelGroup
(P2CONST(Dio_ChannelGroupType, DIO_VAR, DIO_CONFIG_CONST) ChannelGroupIdPtr,
 Dio_PortLevelType Level)
{
  /* END Msg(2:3206)-9 */
  /* END Msg(2:3227)-1 */
  /* Implements DIO_ESDD_UD_008 , DIO_ESDD_UD_014 ,DIO_ESDD_UD_015 */
  /* Implements DIO_ESDD_UD_036 */
  #if (DIO_CHANNELGROUP_CONFIGURED == STD_ON)
  /* Implements DIO_ESDD_UD_023 */
  P2CONST(Dio_PortGroup, DIO_VAR, DIO_PRIVATE_CONST) LpPortGroup;
  /* Implements DIO_ESDD_UD_021 */
  P2CONST(Dio_ChannelGroupType, DIO_VAR, DIO_PRIVATE_CONST) LpChannelGroupPtr;
  volatile P2VAR(uint32, AUTOMATIC, DIO_PRIVATE_DATA) LpPortAddress;
  /* MISRA C Rule Violations: START Msg(4:0759)-2 */
  Dio_PortData LunPSRContent = {DIO_LONG_WORD_VALUE};
  /* END Msg(4:0759)-2 */
  uint32 LulPortModeLevel;
  /* Implements DIO_ESDD_UD_003 */
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  /* Declare the variable to store the DET return value */
  uint32 LulChGrpPtrValue;
  Std_ReturnType LenDetErrFlag;
  LenDetErrFlag = E_NOT_OK;
  LpChannelGroupPtr = NULL_PTR;
  /* QAC Warning: START Msg(2:3892)-2 */
  /* MISRA Violation: START Msg(4:2982)-8 */
  LulChGrpPtrValue = DIO_ZERO;
  /* END Msg(4:2982)-8 */
  /* END Msg(2:3892)-2 */
  #endif
  /* (DIO_DEV_ERROR_DETECT == STD_ON) */
  #endif
  /* (DIO_CHANNELGROUP_CONFIGURED == STD_ON) */
  /* Check if atleast one ChannelGroup is configured */
  /* Implements DIO_ESDD_UD_008 */
  #if (DIO_CHANNELGROUP_CONFIGURED == STD_ON)
  /* Check whether DIO_DEV_ERROR_DETECT is enabled */
  /* Implements DIO_ESDD_UD_003 */
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  if (DIO_UNINITIALIZED == Dio_GblDriverStatus)
  {
    /* Report Error to DET */
    /* Implements EAAR_PN0034_FR_0064 */
    (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                                DIO_WRITE_CHANNEL_GROUP_SID, DIO_E_UNINIT);
  }
  else
  #endif
  /*(DIO_DEV_ERROR_DETECT == STD_ON) */
  #endif
  /*(DIO_CHANNELGROUP_CONFIGURED == STD_ON) */
  {
    #if (DIO_CHANNELGROUP_CONFIGURED == STD_ON)
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    /* Check whether LpChannelGroupPtr is NULL_PTR */
    if (NULL_PTR == ChannelGroupIdPtr)
    {
      /* Report Error to DET */
      /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_029 */
      (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                      DIO_WRITE_CHANNEL_GROUP_SID, DIO_E_PARAM_POINTER);
      LenDetErrFlag = E_OK;
    }
    else
    {
      /* MISRA Violation: START Msg(4:0306)-5 */
      /* QAC Warning: START Msg(2:3892)-2 */
      LulChGrpPtrValue = (((uint32)(ChannelGroupIdPtr)) -
                        ((uint32)(&Dio_GstChannelGroupData[DIO_ZERO])));
      /* END Msg(4:0306)-5 */
      /* Implements DIO_ESDD_UD_002 */
      if ( DIO_ZERO != LulChGrpPtrValue)
      {
        /* Implements DIO_ESDD_UD_002 */
        /* QAC Warning: START Msg(2:1252)-3 */
        /* Start DIO_UT_001 */
        if ((DIO_ZERO != (LulChGrpPtrValue &
                   ((uint32)(DIO_SIZE_OF_CHGRP_STRUCT - DIO_ONE)))) ||
                      (DIO_NO_OF_CHGRP_PER_CFGSET <=
                        (LulChGrpPtrValue / DIO_SIZE_OF_CHGRP_STRUCT)))
        {
          /* End DIO_UT_001 */
          /* END Msg(2:1252)-3 */
          /* END Msg(2:3892)-2 */
          /* Report Error to DET */
          /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_032 , DIO_ESDD_UD_033 */
          (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                 DIO_WRITE_CHANNEL_GROUP_SID, DIO_E_PARAM_INVALID_GROUP);
          LenDetErrFlag = E_OK;
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
      if (E_NOT_OK == LenDetErrFlag)
      {
        /* Implements DIO_ESDD_UD_040 */
        /* MISRA Violation: START Msg(4:0492)-6 */
        LpChannelGroupPtr = &ChannelGroupIdPtr[Dio_GusChannelGroupsOffset];
      }
      else
      {
        /* No action required */
      }
    }
    #elif (DIO_DEV_ERROR_DETECT == STD_OFF)
    /* Implements DIO_TSDD_003 */
    /* Get the pointer to corresponding index in the
     * array Dio_GstChannelGroupData
     */
    /* Implements DIO_ESDD_UD_040 */
    /* QAC Warning: START Msg(2:2824)-6 */
    LpChannelGroupPtr = &ChannelGroupIdPtr[Dio_GusChannelGroupsOffset];
    /* END Msg(4:0492)-6 */
    /* END Msg(2:2824)-6 */
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
    /* Implements DIO_ESDD_UD_003 */
    /* Implements DIO_TSDD_003 */
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    if (E_NOT_OK == LenDetErrFlag)
    {
      /* MISRA C Rule Violations: START Msg(4:0491)-3 */
      /* QAC Warning: START Msg(2:2814)-5 */
      /* Get the Port Address in which the Channel is configured */
      /* Implements DIO_ESDD_UD_042 */
      LpPortGroup = \
                &(Dio_GpConfigPtr->pPortGroup[ChannelGroupIdPtr->ucPortIndex]);
      /* END Msg(4:0491)-3 */
      /* Check if the required port is not INPUT port */
      /* Implements DIO_ESDD_UD_002 */
      if (DIO_INPUTPORT == LpPortGroup->ucPortType)
      {
        /* END Msg(2:2814)-5 */
        /* Report Error to DET */
        /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_031*/
        /* Implements EAAR_PN0034_FR_0064 */
        (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                  DIO_WRITE_CHANNEL_GROUP_SID, DIO_E_PARAM_INVALID_PORT_ID);
        LenDetErrFlag = E_OK;
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
    if (E_NOT_OK == LenDetErrFlag)
    #endif
    {
      /* Check whether DIO_DEV_ERROR_DETECT is disabled */
      /* Implements DIO_ESDD_UD_003 */
      #if (DIO_DEV_ERROR_DETECT == STD_OFF)
      /* QAC Warning: START Msg(2:2814)-5 */
      /* MISRA C Rule Violations: START Msg(4:0491)-3 */
      /* Get the pointer to port group to which the channel belongs */
      /* Implements DIO_ESDD_UD_042 */
      LpPortGroup = \
                &(Dio_GpConfigPtr->pPortGroup[ChannelGroupIdPtr->ucPortIndex]);
      #endif
      /* END Msg(4:0491)-3 */
      /* Get the PSRn or JPSRn address for the required port */
      /* MISRA C Rule Violations: START Msg(4:0303)-4 */
      LpPortAddress =(volatile uint32 *)(*(LpPortGroup->pPortAddress));
      /* END Msg(4:0303)-4 */
      /* END Msg(2:2814)-5 */
      /* Implements DIO_ESDD_UD_012 */
      /* Implements EAAR_PN0061_FR_0024 */
      #if (DIO_CRITICAL_SECTION_PROTECTION == STD_ON)
      DIO_ENTER_CRITICAL_SECTION(DIO_REGISTER_PROTECTION);
      #endif
      /* Implements DIO_ESDD_UD_002 */
      if (DIO_JTAGPORT == LpPortGroup->ucPortType)
      {
        /* Implements DIO_ESDD_UD_001 */
        /* QAC Warning: START Msg(2:3892)-2 */
        /* QAC Warning: START Msg(2:2824)-6 */
        /* MISRA C Rule Violations: START Msg(4:0488)-1*/
        LulPortModeLevel = (uint32)(~(*(LpPortAddress + DIO_PMSR_OFFSET_JTAG)))\
                   & (~(LpPortGroup->ulModeMask) & ChannelGroupIdPtr->usMask);
        /* END Msg(2:2824)-6 */
      }
      /* Implements DIO_ESDD_UD_002 */
      else if (DIO_NORMALPORT == LpPortGroup->ucPortType)
      {
        /* Implements DIO_ESDD_UD_001 */
        LulPortModeLevel = (uint32)
                    (~(*(LpPortAddress + DIO_PMSR_OFFSET_NONJTAG))) \
                    & (~(LpPortGroup->ulModeMask) & ChannelGroupIdPtr->usMask);
        /* END Msg(2:3892)-2 */
        /* END Msg(4:0488)-1 */
      }
      else
      {
        LulPortModeLevel = (uint32)DIO_ZERO;
      }
      /*Load 32 bit value to PSR register*/
      if ((uint32)DIO_ZERO != LulPortModeLevel)
      {
        /* QAC Warning: START Msg(2:2814)-5 */
        /* Rotate left the input level to get the value to be written to port */
        Level = Level << (LpChannelGroupPtr->ucOffset);
        /* END Msg(2:2814)-5 */
        /*
         * Enable appropriate ChannelGroup related positions
         * by writing upper 16-bits of PSR register
         */
        LunPSRContent.Tst_WordValue.usMSWord = (uint16)
                                                   (ChannelGroupIdPtr->usMask);
        /* Write the Level value to lower 16-bits of PSR register*/
        LunPSRContent.Tst_WordValue.usLSWord = Level;
        /* Reg Write Verify     */
        /* Implements DIO_ESDD_UD_002 */
        /* Implements DIO_ESDD_UD_016 , DIO_ESDD_UD_017 , DIO_ESDD_UD_035 */
        DIO_WRITE_REG_ONLY(LpPortAddress, LunPSRContent.ulLongWord)
        /* Implements EAAR_PN0034_FSR_0002 */
        DIO_CHECK_WRITE_VERIFY_RUNTIME(LpPortAddress,
         ((uint32)Level & ((uint32)(LulPortModeLevel
                & ((uint32)(LpChannelGroupPtr->usMask))))),
                ((((uint32)LpChannelGroupPtr->usMask) & LulPortModeLevel)),
                                                  DIO_WRITE_CHANNEL_GROUP_SID)
      }
      else
      {
        /* No action required */
      }
      #if (DIO_CRITICAL_SECTION_PROTECTION == STD_ON)
      DIO_EXIT_CRITICAL_SECTION(DIO_REGISTER_PROTECTION);
      #endif
    }
    /* Implements DIO_ESDD_UD_003 */
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    else
    {
      /* No action required */
    }
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
    #else
    /* Implements DIO_ESDD_UD_003 */
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    /* Report Error to DET */
    /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_032 , DIO_ESDD_UD_033 */
    (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                      DIO_WRITE_CHANNEL_GROUP_SID, DIO_E_PARAM_INVALID_GROUP);
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON)*/
    #endif
    /* (DIO_CHANNELGROUP_CONFIGURED == STD_ON) */
  }
}
#define DIO_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements EAAR_PN0034_NR_0020 */
/*******************************************************************************
** Function Name         : Dio_MaskedWritePort
**
** Service ID            : 0x13
**
** Description           : This service writes the specified level to all the
**                         channels that are Masked in given Port.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Re-entrant
**
** Input Parameters      : PortId, Mask and Level.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : None
**
** Global Variables Used : Dio_GblDriverStatus(Read), Dio_GpConfigPtr(Read)
**
** Functions Invoked     : Det_ReportError, DIO_ENTER_CRITICAL_SECTION,
**                         DIO_EXIT_CRITICAL_SECTION, DIO_WRITE_REG_ONLY,
**                         DIO_CHECK_WRITE_VERIFY_RUNTIME.
**
** Registers Used        : PSRn, JPSRn, PMSRn, JPMSRn.
*******************************************************************************/
 /* Implements DIO_ESDD_UD_005 */
 /* Implements EAAR_PN0061_FR_00018 */
#if (DIO_MASKED_WRITE_PORT_API == STD_ON )
#define DIO_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implementation of the Dio_MaskedWritePort interface */
/* Implements DIO_ESDD_UD_056 */
/* Implements DIO171, DIO053, DIO060, DIO064, DIO070, DIO119, DIO026 */
/* Implements DIO103, DIO183, DIO020, DIO005, DIO051, DIO109, DIO179, DIO067 */
/* Implements EAAR_PN0061_FR_0015, EAAR_PN0061_FR_0001, EAAR_PN0061_FR_0022 */
/* Implements EAAR_PN0034_FR_0049, EAAR_PN0034_FSR_0001, EAAR_PN0034_FR_0013*/
/* Implements EAAR_PN0034_FSR_0003, EAAR_PN0034_FSR_0004, EAAR_PN0034_FR_0030*/
/* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0081, EAAR_PN0034_NR_0001 */
/* Implements EAAR_PN0034_NR_0069, DIO066, EAAR_PN0034_FR_0018  */
/* QAC Warning: START Msg(2:3227)-1 */
FUNC(void, DIO_PUBLIC_CODE) Dio_MaskedWritePort
(Dio_PortType PortId, Dio_PortLevelType Level, Dio_PortLevelType  Mask)
{
  /* END Msg(2:3227)-1 */
  /* Implements DIO_ESDD_UD_023 , DIO_ESDD_UD_018 */
  P2CONST(Dio_PortGroup, DIO_VAR, DIO_PRIVATE_CONST) LpPortGroup;
  P2VAR(uint32 volatile, AUTOMATIC, DIO_PRIVATE_DATA) LpPortAddress;
  uint32 LulPortModeLevel;
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  /* Declare the variable to store the DET return value */
  Std_ReturnType LenDetErrFlag;
  LenDetErrFlag = E_NOT_OK;
  #endif
  /* Check whether DIO_DEV_ERROR_DETECT is enabled */
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  /* Implements DIO_ESDD_UD_041 , DIO_ESDD_UD_002 */
  if (DIO_UNINITIALIZED == Dio_GblDriverStatus)
  {
    /* Implements EAAR_PN0034_FR_0064 */
    (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                      DIO_MASKED_WRITE_PORT_SID, DIO_E_UNINIT);
  }
  else
  #endif
  /* (DIO_DEV_ERROR_DETECT == STD_ON) */
  {
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    /* QAC Warning: START Msg(2:2814)-5 */
    /* Check whether the Port Id is out of range */
    if (PortId >= Dio_GpConfigPtr->usNoofPorts)
    {
      /* END Msg(2:2814)-5 */
      /* Report Error to DET */
      /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_030*/
      /* Implements EAAR_PN0034_FR_0064 */
      (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                      DIO_MASKED_WRITE_PORT_SID, DIO_E_PARAM_INVALID_PORT_ID);
      LenDetErrFlag = E_OK;
    }
    else
    {
      /* Get the pointer to the required Port */
      /* Implements DIO_ESDD_UD_042 */
      /* MISRA Violation: START Msg(4:0491)-3 */
      LpPortGroup = &(Dio_GpConfigPtr->pPortGroup[PortId]);
      /* END Msg(4:0491)-3 */
      /* Implements DIO_ESDD_UD_002 */
      /* QAC Warning: START Msg(2:2814)-5 */
      if (DIO_INPUTPORT == LpPortGroup->ucPortType)
      {
        /* END Msg(2:2814)-5 */
        /* Report Error to DET */
        /* Implements DIO_ESDD_UD_020 , DIO_ESDD_UD_030*/
        /* Implements EAAR_PN0034_FR_0064 */
        (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                      DIO_MASKED_WRITE_PORT_SID, DIO_E_PARAM_INVALID_PORT_ID);
        LenDetErrFlag = E_OK;
      }
      else
      {
        /* No action required */
      }
    }
    if (E_NOT_OK == LenDetErrFlag)
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
    {
      /* MISRA Violation: START Msg(4:0491)-3 */
      /* Check whether DIO_DEV_ERROR_DETECT is disabled */
      #if (DIO_DEV_ERROR_DETECT == STD_OFF)
      /* Get the pointer to the required Port */
      /* Implements DIO_ESDD_UD_042 */
      /* QAC Warning: START Msg(2:2814)-5 */
      LpPortGroup = &(Dio_GpConfigPtr->pPortGroup[PortId]);
      /* END Msg(4:0491)-3 */
      #endif
      /* Get the PSRn or JPSRn address for the required port */
      /* MISRA C Rule Violations: START Msg(4:0303)-4 */
      LpPortAddress =(volatile uint32 *)(*(LpPortGroup->pPortAddress));
      /* END Msg(4:0303)-4 */
      /* END Msg(2:2814)-5 */
      /* Implements EAAR_PN0061_FR_0024 */
      #if (DIO_CRITICAL_SECTION_PROTECTION == STD_ON)
      DIO_ENTER_CRITICAL_SECTION(DIO_REGISTER_PROTECTION);
      #endif
      /* Implements DIO_ESDD_UD_002 */
      /* QAC Warning: START Msg(2:3892)-2 */
      if (DIO_JTAGPORT == LpPortGroup->ucPortType)
      {
        /* Implements DIO_ESDD_UD_001 */
        /* QAC Warning: START Msg(2:2824)-6 */
        /* MISRA C Rule Violations: START Msg(4:0488)-1*/
        LulPortModeLevel =(uint32)(*(LpPortAddress+DIO_PMSR_OFFSET_JTAG))|
                                                     (LpPortGroup->ulModeMask);
        /* END Msg(2:2824)-6 */
      }
      /* Implements DIO_ESDD_UD_002 */
      else if (DIO_NORMALPORT == LpPortGroup->ucPortType)
      {
        LulPortModeLevel =(uint32)(*(LpPortAddress+DIO_PMSR_OFFSET_NONJTAG))|
                                                    (LpPortGroup->ulModeMask);
        /* END Msg(4:0488)-1 */
      }
      /* END Msg(2:3892)-2 */
      else
      {
        LulPortModeLevel = (uint32)DIO_ZERO;
      }
      /* Check if the channels which are configured as output */
      if ((uint32)DIO_ZERO != (~LulPortModeLevel))
      {
        /* Implements DIO_ESDD_UD_002 */
        /* Implements DIO_ESDD_UD_016 , DIO_ESDD_UD_017 , DIO_ESDD_UD_035 */
        /*   Reg Write Verify */
        /* QAC Warning: START Msg(2:3892)-2 */
        DIO_WRITE_REG_ONLY(LpPortAddress, (Level |
                ((uint32)((~(LulPortModeLevel)) & Mask) << DIO_SHIFT_SIXTEEN)))
        /* END Msg(2:3892)-2 */
        /* Implements EAAR_PN0034_FSR_0002 */
        DIO_CHECK_WRITE_VERIFY_RUNTIME(LpPortAddress,
                            (Level & ((~LulPortModeLevel) & Mask)),
                    ((~LulPortModeLevel) & Mask), DIO_MASKED_WRITE_PORT_SID)
      }
      else
      {
        /* No action required */
      }
      /* Implements DIO_ESDD_UD_012 */
      /* Implements EAAR_PN0061_FR_0024 */
      #if (DIO_CRITICAL_SECTION_PROTECTION == STD_ON)
      DIO_EXIT_CRITICAL_SECTION(DIO_REGISTER_PROTECTION);
      #endif
    }
    #if (DIO_DEV_ERROR_DETECT == STD_ON)
    else
    {
      /* No action required */
    }
    #endif
    /* (DIO_DEV_ERROR_DETECT == STD_ON) */
  }
}
#define DIO_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif
/* (DIO_MASKED_WRITE_PORT_API == STD_ON) */

/* Implements EAAR_PN0034_NR_0020 */
/*******************************************************************************
** Function Name         : Dio_GetVersionInfo
**
** Service ID            : 0x12
**
** Description           : This API returns the version information of Dio
**                         driver component.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Re-entrant
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Preconditions         : None
**
** Global Variables Used : None
**
** Function(s) invoked   : Det_ReportError.
**
** Registers Used        : None
*******************************************************************************/
/* Implements DIO_TSDD_003 */
/* Implements DIO_ESDD_UD_004 */
#if (DIO_VERSION_INFO_API == STD_ON)
#define DIO_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implementation of the Dio_GetVersionInfo API */
/* Implements DIO_ESDD_UD_026 */
/* Implements DIO171, DIO106, DIO139, DIO143_Conf, EAAR_PN0034_NR_0001 */
/* Implements DIO123, DIO126, DIO124, DIO189, EAAR_PN0034_FR_0017,  DIO179 */
/* Implements EAAR_PN0034_NR_0069, DIO066, EAAR_PN0034_FR_0051  */
/* QAC Warning: START Msg(2:3227)-1 */
FUNC(void, DIO_PUBLIC_CODE)Dio_GetVersionInfo
(P2VAR(Std_VersionInfoType, AUTOMATIC, DIO_APPL_DATA)versioninfo)
{
  /* END Msg(2:3227)-1 */
  #if (DIO_DEV_ERROR_DETECT == STD_ON)
  /* Check if parameter passed is equal to Null pointer */
  if (NULL_PTR == versioninfo)
  {
    /* Report to DET  */
    /* Implements EAAR_PN0034_FR_0064 */
    (void)Det_ReportError(DIO_MODULE_ID, DIO_INSTANCE_ID,
                           DIO_GET_VERSION_INFO_SID,DIO_E_PARAM_POINTER);
  }
  else
  #endif
  /* (DIO_DEV_ERROR_DETECT == STD_ON) */
  {
    /* Copy the vendor Id */
    /* QAC Warning: START Msg(2:2814)-5 */
    (versioninfo)->vendorID = (uint16)DIO_VENDOR_ID;
    /* END Msg(2:2814)-5 */
    /* Copy the module Id */
    (versioninfo)->moduleID = (uint16)DIO_MODULE_ID;
    /* Copy Software Major Version */
    (versioninfo)->sw_major_version = DIO_SW_MAJOR_VERSION;
    /* Copy Software Minor Version */
    (versioninfo)->sw_minor_version = DIO_SW_MINOR_VERSION;
    /* Copy Software Patch Version */
    (versioninfo)->sw_patch_version = DIO_SW_PATCH_VERSION;
  }
}
#define DIO_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif
/* #if (DIO_VERSION_INFO_API == STD_ON) */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
