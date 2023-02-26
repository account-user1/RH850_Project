/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Mcu.c                                                       */
/* $Revision: 504013 $                                                        */
/* $Date: 2017-12-22 10:52:26 +0530 (Fri, 22 Dec 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains API function implementations of MCU Driver              */
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
 * V1.0.0:  14-Aug-2015 : Initial Version.
 * V1.0.1:  02-Feb-2016 : Following changes are made:
 *                        1. As per JIRA ID ARDAAAF-352, Mcu_GetVersionInfo is
 *                           implemented as function.
 *                        2. As per JIRA ID ARDAAAF-329, added critcal sections
 *                           with unique names.
 *                        3. As per JIRA ID ARDAAAF-295, renamed MCU_WDT_RST
 *                           to MCU_WATCHDOG_RESET.
 *                        4. As per JIRA ID ARDAAAF-444, added support for GTM
 *                           CMU Clock Initialization.
 *                        5. MISRA justifications added after Static analysis.
 *                        6. Variable Loopcount is renamed to LucLoopcount
 *                        7. Corrected the code width to 80 columns.
 *                        8. As per JIRA ID ARDAAAF-520 and ARDAAAF-526
 *                           Mcu_InitClock API is updated.
 *                        9. As per JIRA ID ARDAAAF-536, Mcu_SetMode API is
 *                           updated.
 *                        10. Mask added for checking the content of DTMCTL
 *                            register is updated.
 *                        11. Global variable Mcu_GulLastResetRawValue is
 *                            renamed to Mcu_GusLastResetRawValue and
 *                            Mcu_GulLastResetReason to Mcu_GusLastResetReason
 *                            as per the requirement EAAR_PN0084_NR_0035.
 *                        12. Corrected the violation of the requirement
 *                            EAAR_PN0084_NR_0111.
 *                        13. Copyright Information is updated.
 * V1.0.2:  27-Jan-2017 : Following changes are made:
 *                        1. As per JIRA ID ARDAAAF-967, updated the list of
 *                           used registers in the function banner of API's.
 *                        2. As per JIRA ID ARDAAAF-519,added pre-compile switch
 *                           MCU_RAM_SECTOR_SETTING_CONFIGURED for
 *                           Mcu_InitRamSection API and added Local and Global
 *                           RAM Error Initializations in function
 *                           Mcu_ConfigureEcmRamErrors().
 *                        3. As per JIRA ID ARDAAAF-519, added function call
 *                           Mcu_ConfigureEcmRamErrors() in Mcu_Init API when
 *                           the parameter MCU_RAM_SECTOR_SETTING_CONFIGURED is
 *                           configured as FALSE.
 *                        4. As per JIRA ID ARDAAAF-477, added CLMA4 for all
 *                           device variant except P1m-C devices.
 *                        5. As per JIRA ID ARDAAAF-1301, added the inclusion
 *                           of Mcu_RegWrite.h and Macro functions
 *                           MCU_MASKED_CHECK_WRITE_VERIFY_INIT and
 *                           MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME are
 *                           implemented.
 *                        6. As per JIRA ID ARDAAAF-1068, updated the wake up
 *                           condition check in Mcu_SetMode() API for Dem Error
 *                           reporting
 *                        7. As part of JIRA ID ARDAAAF-1066,  Write access to
 *                           IMRm register is done using RH850_SV_MODE_IMR
 *                           macros,to meet the requirement EAAR_PN0034_FR_0067
 *                           and also included "rh850_Types.h".
 *                        8. As per JIRA ID ARDAAAF-1302, added the API
 *                           Mcu_ClmaSelfDiagnosticTest and removed all the
 *                           references to CLMA5.
 *                        9. As per JIRA ID ARDAAAF-1462, added the API
 *                           Mcu_CvmSelfDiagnosticTest,Mcu_CvmNormalModeSetting,
 *                           Mcu_CvmSelfDiagnosticSetting.
 *                        10. As per JIRA ID ARDAAAF-1460, Mcu_EcmResetReason
 *                            API updated to add MCU_ECM_DELAY_TMR_OVF_RST.
 *                        11. As per JIRA ID ARDAAAF-1475, Delay timer overflow
 *                            control register DTMCTL is enabled in Mcu_Init().
 *                        12. As per JIRA ID ARDAAAF-1451, added the API
 *                            Mcu_LockStepSelfDiagnosticTest and Mcu_Init is
 *                            updated to invoke Mcu_LockStepSelfDiagnosticTest.
 *                        13. As per JIRA ID ARDAAAF-1454, added function
 *                            Mcu_ConfigureCvm and updated the switch case in
 *                            Mcu_ResetReasonStore API for the addition of
 *                            cases for Power on reset, Terminal reset and CVM
 *                            reset.
 *                        14. As per JIRA ID ARDAAAF-1452, added the API
 *                            Mcu_EcmErrorInitialNotification and Mcu_Init is
 *                            updated to invoke Mcu_EcmErrorInitialNotification.
 *                        15. As per JIRA ID ARDAAAF-1270, added the UD IDs and
 *                            requirements for achieving traceability.
 *                        16. As per JIRA ID ARDAAAF-777, Justifications added
 *                            for QAC MISRA violations & QAC Warnings
 *                            Msg(4:2880), Msg(4:0400), Msg(2:3204) Msg(3:3203),
 *                            Msg(4:2995), Msg(2:2741), Msg(2:3206),
 *                            Msg(4:2992), Msg(4:2996) and Msg(0:2755).
 *                        17. As per JIRA ID ARDAAAF-1504, added the APIs,
 *                            Mcu_ClearEcmErrorOutput,
 *                            Mcu_EcmClearStatusRegister,
 *                            Mcu_EcmSelfDiagnosticTest,
 *                            Mcu_EcmPseudoErrorTest, Mcu_EcmZeroSelfTest and
 *                            Mcu_EcmOneSelfTest.
 *                        18. As per JIRA ID ARDAAAF-1453, API
 *                            Mcu_EcmReleaseErrorOutPin is added.
 *                        19. As per JIRA ID ARDAAAF-1267, unreachable or bugs
 *                            are pointed by added UT tags. eg : Start Tag
 *                            End MCU_UT_001 to Start Tag MCU_UT_008 and End
 *                            with Tag MCU_UT_001 and End Tag MCU_UT_008
 *                            correspondingly.
 *                        20. As per JIRA ID ARDAAAF-1575, DTMCTL and ECMnEPCFG
 *                            registers updated with MCU_PROTECTEDWRITE32BIT
 *                            macros for protected writing.
 * Ver4.02.00.D_MCU_HF002: 22-Dec-2017 : Related Tickets :
 *                         JIRA #ARDAAAF-3326
 *                       : Modification Info :
 *                         Included P1X_C_Hardware_Defines.h file.
 *                       : Modification Info Ends :
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                      **
*******************************************************************************/
/* Implements EAAR_PN0034_FR_0052, EAAR_PN0034_FR_0021 */
/* Included for Post-build Time Parameters */
#include "Mcu_PBTypes.h"
/* Included for RAM variable declarations */
#include "Mcu_Ram.h"
/* Implements MCU_ESDD_UD_036, MCU016, MCU013, MCU163 */
/* Implements EAAR_PN0034_FR_0064 */
/* Implements MCU166_Conf */
#if (STD_ON == MCU_DEV_ERROR_DETECT)
/* Included for the declaration of Det_ReportError() */
#include "Det.h"
#endif
/* Implements MCU111, MCU109, MCU226 */
/* Included for declaration of the function Dem_ReportErrorStatus() */
#include "Dem.h"

/* Implements MCU_ESDD_UD_031 */
/* Implements EAAR_PN0034_FR_0030 */
#if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
#include "SchM_Mcu.h"
#endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

/* Included for register verification functions declaration */
#include "Mcu_RegWrite.h"
/* Included for module version information */
/* Implements MCU108 */
#include "Mcu.h"
/*Included for rh850_Types functions declaration*/
#include "rh850_Types.h"
#include "P1X_C_Hardware_Defines.h"
/******************************************************************************
**                      Version Information                                  **
*******************************************************************************/
/* Implements MCU110 */
/* AUTOSAR release version information */
#define MCU_C_AR_RELEASE_MAJOR_VERSION     MCU_AR_RELEASE_MAJOR_VERSION_VALUE
#define MCU_C_AR_RELEASE_MINOR_VERSION     MCU_AR_RELEASE_MINOR_VERSION_VALUE
#define MCU_C_AR_RELEASE_REVISION_VERSION  \
                                        MCU_AR_RELEASE_REVISION_VERSION_VALUE

/* File version information */
#define MCU_C_SW_MAJOR_VERSION     1
#define MCU_C_SW_MINOR_VERSION     1

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/

#if (MCU_AR_RELEASE_MAJOR_VERSION != MCU_C_AR_RELEASE_MAJOR_VERSION)
  #error "Mcu.c : Mismatch in Release Major Version"
#endif

#if (MCU_AR_RELEASE_MINOR_VERSION != MCU_C_AR_RELEASE_MINOR_VERSION)
  #error "Mcu.c : Mismatch in Release Minor Version"
#endif

#if (MCU_AR_RELEASE_REVISION_VERSION != MCU_C_AR_RELEASE_REVISION_VERSION)
  #error "Mcu.c : Mismatch in Release Revision Version"
#endif

#if (MCU_SW_MAJOR_VERSION != MCU_C_SW_MAJOR_VERSION)
  #error "Mcu.c : Mismatch in Software Major Version"
#endif

#if (MCU_SW_MINOR_VERSION != MCU_C_SW_MINOR_VERSION)
  #error "Mcu.c : Mismatch in Software Minor Version"
#endif
/*Implements EAAR_PN0034_NR_0026 */
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0303) Cast between a pointer to volatile object and     */
/*                 an integral type.                                          */
/* Rule          : MISRA-C:2004 Rule 11.3                                     */
/*                 REFERENCE - ISO-6.3.4 Semantics                            */
/* Justification : Typecasting is done as per the register size, to access    */
/*                 hardware registers.                                        */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg (4:0303)-1 and                          */
/*                 END Msg (4:0303)-1 tags in the code.                       */
/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0488) Performing pointer arithmetic.                    */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : Pointer arithmetic is used to achieve better throughput.   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg (4:0488)-2 and                          */
/*                 END Msg (4:0488)-2 tags in the code.                       */
/******************************************************************************/
/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0316) Cast from a pointer to void to a pointer to       */
/*                  object.                                                   */
/* Rule          : MISRA-C:2004 Rule 11.4                                     */
/* Justification : Cast is performed between a pointer to void to pointer to  */
/*                 object type to prevent publishing of internal structure.   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg (4:0316)-3 and                          */
/*                 END Msg (4:0316)-3 tags in the code.                       */
/******************************************************************************/
/* 4. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0491) An array subscript operator is being used to      */
/*                 subscript an expression which is not of array type.        */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : This pointer addresses an array element                    */
/* Verification  : It is verified manually and by generation tool             */
/* Reference     : Look for START Msg (4:0491)-4 and END Msg (4:0491)-4       */
/*                 tags in the code.                                          */
/******************************************************************************/
/* 5. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:4464) A constant expression of 'essentially unsigned'   */
/*                 type (unsigned long) is being converted to narrower        */
/*                 unsigned type 'unsigned char' on assignment.               */
/* Rule          : MISRA-C:2004 Rule 10.1                                     */
/* Justification : The register is an 8 bit Register and therefore implicit   */
/*                 conversion will not have any impact.                       */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg (4:4464)-5 and                          */
/*                 END Msg (4:4464)-5 tags in the code.                       */
/******************************************************************************/
/* 6. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3415) Logical operation performed on expression with    */
/*                 possible side effects.                                     */
/* Rule          : NA                                                         */
/* Justification : Logical operation accesses volatile object which is a      */
/*                 register access. All register addresses are generated with */
/*                 volatile qualifier. There is no impact on the functionality*/
/*                 due to this conditional check.                             */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3415)-6 and                           */
/*                 END Msg(4:3415)-6 tags in the code.                        */
/******************************************************************************/
/* 7. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2842) Dereference of an invalid pointer value.          */
/* Rule          : MISRA-C:2004 Rule 20.3,Rule 21.1                           */
/* Justification : This pointer addresses an array element. Index of the      */
/*                 array is received as the function argument and therefore   */
/*                 this cannot be an invalid pointer deference.               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2842)-7  and                          */
/*                 END Msg(4:2842)-7  tags in the code.                       */
/******************************************************************************/
/* 8. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2995) The result of this logical operation is always    */
/*                 'true'.                                                    */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : The result of this logical operation is always true since  */
/*                 this value is dependent on configuration.                  */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2995)-8 and                           */
/*                 END Msg(4:2995)-8 tags in the code.                        */
/******************************************************************************/
/* 9. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:4447) A constant expression of 'essentially unsigned'   */
/*                 type (unsigned char) is being converted to signed type,    */
/*                 'int' on assignment.                                       */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : The variable which is used of unsigned type and it can not */
/*                 be signed type for module implementation.                  */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:4447)-9  and                          */
/*                 END Msg(4:4447)-9  tags in the code.                       */
/******************************************************************************/
/* 10. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:0400)[U] 'CVMDEW' is modified more than once between    */
/*                 sequence points - evaluation order unspecified.            */
/* Rule          : MISRA-C:2004 Rule 1.2 and Rule 12.2                        */
/* Justification : 'CVMDEW' is modified more than once to verify the locking  */
/*                 functionality of CVM as per the requirement.               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0400)-10 and                          */
/*                 END Msg(4:0400)-10 tags in the code.                       */
/******************************************************************************/
/* 11. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2992) The value of this 'if' controlling expression is  */
/*                 always 'false'.                                            */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : The value of this 'if' control expression is false because */
/*                 variable MCU_PLL_UNLOCKED is not used in implementation.   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2992)-11 and                          */
/*                 END Msg(4:2992)-11 tags in the code.                       */
/******************************************************************************/
/* 12. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2996) The result of this logical operation is always    */
/*                 'false'.                                                   */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : The value of this 'if' control expression is false because */
/*                 variable MCU_PLL_UNLOCKED is not used in implementation.   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2996)-12 and                          */
/*                 END Msg(4:2996)-12 tags in the code.                       */
/******************************************************************************/
/* 13. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2880) This code is unreachable.                         */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : This part of code is unreachable, because variable         */
/*                 MCU_PLL_UNLOCKED is not used in implementation.            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2880)-13 and                          */
/*                 END Msg(4:2880)-13 tags in the code.                       */
/******************************************************************************/
/* 14. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2991) The value of this 'if' controlling expression is  */
/*                 always 'true'.                                             */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : The result of this logical operation is always true since  */
/*                 this value is dependent on configuration.                  */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2991)-14 and                          */
/*                 END Msg(4:2991)-14 tags in the code.                       */
/******************************************************************************/
/* 15. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:0489) Increment or decrement operation performed on     */
/*               : pointer.                                                   */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : To have a better readability of the code which will help   */
/*                 for debugging purpose array indexing is not performed.     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg (4:0489)-15 and                         */
/*                 END Msg (4:0489)-15 tags in the code.                      */
/*******************************************************************************
**                      MISRA C QAC Warnings                                  **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/*Message        : (2:4570) The operand of this ~ operator has an             */
/*                 'essential type' which is narrower than type 'int'.        */
/*Rule           : No Rule                                                    */
/*Justification  : To access hardware registers.                              */
/*Verification   : However, part of the code is verified by testing on        */
/*                 target and it is not having any impact.                    */
/* Reference     : Look for START Msg (2:4570)-1 and END Msg (2:4570)-1       */
/*                 tags in the code.                                          */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message       : (2:3204) This variable is only set once and so it could    */
/*                 be declared with the 'const' qualifier.                    */
/* Rule          : No Rule                                                    */
/* Justification : The variable can be set twice if different configurations  */
/*                 are used.Hence it will not declared with 'const' qualifier */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3204)-2 and                           */
/*                 END Msg(2:3204)-2 tags in the code.                        */
/******************************************************************************/
/* 3. QAC Warning:                                                            */
/* Message       : (2:4342) An expression of 'essentially unsigned' type      */
/*                 is being cast to enum type.                                */
/* Rule          : No Rule                                                    */
/* Justification : Typecasting to enum type is done as the return type of the */
/*                 function is of enum type                                   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg (2:4342)-3 and                          */
/*                 END Msg (2:4342)-3 tags in the code.                       */
/******************************************************************************/
/* 4. QAC Warning:                                                            */
/* Message       : (2:3892) The result of this cast is implicitly converted   */
/*                  to another type                                           */
/* Rule          : No Rule                                                    */
/* Justification : This implicit conversion is done to access the data from   */
/*                  the post build configuration                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for MISRA Violation: START Msg (2:3892)-4 and         */
/*                 END Msg (2:3892)-4 tags in the code.                       */
/******************************************************************************/
/* 5. QAC Warning:                                                            */
/* Message       : (2:3227) The value of this function parameter is never     */
/*                 modified. It could be declared with the 'const' type       */
/*                 Qualifier.                                                 */
/* Rule          : No Rule                                                    */
/* Justification : The function parameters of AUTOSAR  and vendor             */
/*                 specific Api's cannot be modified to be made as constant.  */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg (2:3227)-5  and                         */
/*                 END Msg (2:3227)-5  tags in the code.                      */
/******************************************************************************/
/* 6. QAC Warning:                                                            */
/* Message       : (2:2881) The code in 'default' statement of switch case    */
/*                 is unreachable.                                            */
/* Rule          : No Rule                                                    */
/* Justification : Implementation do not demands the codes in 'default'       */
/*                 statement of switch case since all expressions are handled */
/*                 with constant-expression cases                             */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg (2:2881)-6   and                        */
/*                 END Msg (2:2881)-6   tags in the code.                     */
/******************************************************************************/
/* 7. QAC Warning:                                                            */
/* Message       : (2:2016) This 'switch' statement 'default' clause is empty.*/
/* Rule          : No Rule                                                    */
/* Justification : No action is required for default statements. Hence it is  */
/*                 left empty.                                                */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg (2:2016)-7  and                         */
/*                 END Msg (2:2016)-7  tags in the code.                      */
/******************************************************************************/
/* 8. QAC Warning:                                                            */
/* Message       : (2:2814) Possible: Dereference of NULL pointer.            */
/* Rule          : No Rule                                                    */
/* Justification : The Pointers generated using Post Build configurations may */
/*                 not be NULL.                                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg (2:2814)-8  and                         */
/*                 END Msg (2:2814)-8  tags in the code.                      */
/******************************************************************************/
/* 9. QAC Warning:                                                            */
/* Message       : (2:2813) Suspicious: Dereference of NULL pointer.          */
/* Rule          : No Rule                                                    */
/* Justification : The Pointer is assigned address within the switch case and */
/*                 therefore the pointer will not be NULL                     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg (2:2813)-9  and                         */
/*                 END Msg (2:2813)-9  tags in the code.                      */
/******************************************************************************/
/* 10. QAC Warning:                                                           */
/* Message       :(2:0862) #include "MemMap.h" directive is redundant.        */
/* Rule          : No Rule                                                    */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files is done within the code.              */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/
/* 11. QAC Warning:                                                           */
/* Message       : (2:2824) Possible: Arithmetic operation on NULL pointer.   */
/* Rule          : No Rule                                                    */
/* Justification : The Pointers generated using Post Build configurations may */
/*                 not be NULL.                                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for MISRA Violation: START Msg (2:2824)-11 and        */
/*                 END Msg (2:2824)-11 tags in the code.                      */
/******************************************************************************/
/* 12. QAC Warning:                                                           */
/* Message       : (2:3416) Logical operation performed on expression with    */
/*                 possible side effects.                                     */
/* Rule          : No Rule                                                    */
/* Justification : Logical operation accesses volatile object which is a      */
/*                 register access. All register addresses are generated with */
/*                 volatile qualifier. There is no impact on the functionality*/
/*                 due to this conditional check.                             */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3416)-12 and                          */
/*                 END Msg(2:3416)-12 tags in the code.                       */
/******************************************************************************/
/* 13. QAC Warning:                                                           */
/* Message       : (2:2741) This 'if' controlling expression is a constant    */
/*                 expression and its value is 'true'.                        */
/*Rule           : No Rule                                                    */
/* Justification : The value of this 'if' control expression is true because  */
/*                 of the variable updated in pre-compile condition.          */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2741)-13 and                          */
/*                 END Msg(2:2741)-13 tags in the code.                       */
/******************************************************************************/
/* 14. QAC Warning:                                                           */
/* Message       : (2:3206) The parameter 'ApiId' is not used in this         */
/*                 function.                                                  */
/* Rule          : No Rule                                                    */
/* Justification : The parameter 'ApiId' is used in the function to pass the  */
/*                 API SID value to macros.                                   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3206)-14 and                          */
/*                 END Msg(2:3206)-14 tags in the code.                       */
/******************************************************************************/
/* 15. QAC Warning:                                                           */
/* Message       : (0:2755) Analysis time of function has exceeded            */
/*                 the configured maximum: '60000ms'.  Dataflow               */
/*                 analysis continues with the next function.                 */
/* Rule          : No Rule                                                    */
/* Justification : Implementation demands usage of all MCU features so it     */
/*                 takes/exceeds the execution time                           */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(0:2755)-15 and                          */
/*                 END Msg(0:2755)-15 tags in the code.                       */
/******************************************************************************/
/* 16. QAC Warning:                                                           */
/* Message       : (3:3203) The variable 'Parameter' is set but never used.   */
/* Rule          : No Rule                                                    */
/* Justification : Parameter is configuration dependent. Hence cannot be      */
/*                 avoided. However part of this code has no impact on        */
/*                 functionality.                                             */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(3:3203)-16 and                          */
/*                 END Msg(3:3203)-16 tags in the code.                       */
/******************************************************************************/
/**                         Global Data                                       **
*******************************************************************************/
/*******************************************************************************
**             Internal Function Prototypes                                   **
*******************************************************************************/
#define MCU_START_SEC_PRIVATE_CODE
#include "MemMap.h"

STATIC FUNC(Mcu_ResetType, MCU_PRIVATE_CODE) Mcu_EcmResetReason(void);

STATIC FUNC(void, MCU_PRIVATE_CODE) Mcu_WakeupConfigure(void);

STATIC FUNC(void, MCU_PRIVATE_CODE) Mcu_ResetReasonStore(void);

STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_ConfigureEcmRamErrors
                        (CONST(Mcu_ECMInstance, MCU_CONST) McuEcmIndex );

STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_ConfigureCvm(void);

STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_InitialiseDelayTimer(void);

#if (STD_ON == MCU_CLMA_SELFDIAGNOSTIC_TEST)
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_ClmaSelfDiagnosticTest
(CONST(Mcu_CLMAInstance, MCU_CONST) Mcu_ClmaIndex);
#endif

/* Implements MCU_ESDD_UD_075 */
#if (STD_ON == MCU_CVM_SELFDIAGNOSTIC_TEST)
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_CvmSelfDiagnosticTest (void);
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_CvmSelfDiagnosticSetting
                                                                        (void);
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_CvmNormalModeSetting(void);
#endif

#if (STD_ON == MCU_LOCKSTEP_SELFDIAGNOSTIC_TEST)
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE)
                                        Mcu_LockStepSelfDiagnosticTest (void);
#endif /* (STD_ON == MCU_LOCKSTEP_SELFDIAGNOSTIC_TEST) */

STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_EcmClearStatusRegister
                                                        (const uint8 ApiId);

STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_ClearEcmErrorOutput
                                              (const uint8 ApiId);

/* Implements MCU_ESDD_UD_078 */
#if (STD_ON == MCU_ECM_SELFDIAGNOSTIC_TEST)
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_EcmSelfDiagnosticTest(void);
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_EcmPseudoErrorTest(void);
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_EcmZeroSelfTest(void);
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_EcmOneSelfTest(void);
#endif

STATIC FUNC(void, MCU_PRIVATE_CODE) Mcu_EcmErrorInitialNotification (void);

#define MCU_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#define MCU_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
**             Function Definitions                                           **
*******************************************************************************/
/*******************************************************************************
** Function Name      : Mcu_Init
**
** Service ID         : 0x00
**
** Description        : This service performs initialization of the MCU Driver
**                      component.
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : ConfigPtr - Pointer to MCU Driver Configuration set
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : None
**
** Preconditions      : None
**
** Global Variables   : Mcu_GblDriverStatus, Mcu_GpConfigPtr,Mcu_GpEcmSetting
**
** Function Invoked   : Det_ReportError,Mcu_ResetReasonStore
**                      MCU_ENTER_CRITICAL_SECTION, MCU_EXIT_CRITICAL_SECTION
**                      Mcu_ConfigureEcmRamErrors
**
** Registers Used     : MCU_RESC,MCU_RESF,ECMMnESSTR0,ECMnESSTC0,PCMD1,ECMnPS,
**                      ECMMnESSTR1,ECMnESSTC1,ECMCnESSTR0,ECMCnESSTR1,ECMnEMK2,
**                      ECMCnESSTR2,ECMMnPCMD0,ECMnPCMD1,ECMnPEM,ECMMnECLR,
**                      ECMnESSTC2,MCU_RESFC,ESSTC1,ESSTC2,CVMF,CVMFC,CVMDMASK,
**                      ECMMnESSTR2,CMPTST0,CMPTST1,ECMnEOCCFG,ECMnMICFG0,
**                      ECMnMICFG1,ECMnMICFG2,ECMnNMICFG0,ECMnNMICFG1,CVMDIAG,
**                      ECMnNMICFG2,ECMnIRCFG0,ECMnIRCFG1,ECMnIRCFG2,ECMnEMK0,
**                      ECMnEMK1,ECMnEPCFG,ECMnPE0,ECMnPE1,ECMnPE2,CVMDMASK,
**                      CVMMON,CVMDEW,CVMDE,ECMnDTMCFG0,ECMnDTMCFG1,ECMnDTMCFG2,
**                      ECMnDTMCFG3,ECMnDTMCFG4,ECMnDTMCFG5,MSR_LM5,GTM0CMUCLKEN
**                      GTM0CMUGCLKNUM,GTM0CMUGCLKDEN,CMUCLK0CTRL,CMUCLK1CTRL,
**                      CMUCLK2CTRL,CMUCLK3CTRL,CMUCLK4CTRL,CMUCLK5CTRL,
**                      CMUCLK6CTRL,CMUCLK7CTRL,ECMnDTMCTL,ECMnDTMCMP
*******************************************************************************/
/* Implements MCU_ESDD_UD_001,MCU_ESDD_UD_072 */
/* Implements MCU026, MCU153,MCU127,EAAR_PN0079_FSR_0117,MCU017,MCU018 */
/* Implements MCU116, MCU245, MCU166_Conf */
/* Implements EAAR_PN0034_FR_0025, EAAR_PN0034_FR_0049 */
/* Implements EAAR_PN0034_FR_0064, EAAR_PN0034_FSR_0002 */
/* Implements EAAR_PN0034_FSR_0001, EAAR_PN0079_FSR_0033 */
/* Implements EAAR_PN0079_FR_0103 */
/* QAC Warning: START Msg (2:3227)-5  */
/* QAC Warning: START Msg (0:2755)-15 */
FUNC(void, MCU_PUBLIC_CODE) Mcu_Init
(P2CONST(Mcu_ConfigType, AUTOMATIC, MCU_APPL_CONST) ConfigPtr)
/* END Msg (0:2755)-15 */
/* END Msg (2:3227)-5  */
{
  /* QAC Warning: START Msg (2:3204)-2 */
  P2VAR(volatile uint32, AUTOMATIC, MCU_CONFIG_CONST) LpEcmConfigAddress;
  P2CONST(Mcu_EcmSetting, MCU_VAR, MCU_CONFIG_CONST)  LpEcmSetting;
  VAR(uint32,AUTOMATIC)                               LulDataByte;
  VAR(uint8,AUTOMATIC)                                LucIndex;
  VAR(uint8,AUTOMATIC)                                LucEcmIndex;
  VAR(uint8,AUTOMATIC)                                LucLoopcount;
  VAR(Std_ReturnType,TYPEDEF)                         LenReturnValue;

  /* END Msg (2:3204)-2 */

  /* Initialize with default values */
  LenReturnValue = E_OK;

  /* Implements MCU_ESDD_UD_036*/
  #if (STD_ON == MCU_DEV_ERROR_DETECT)
  /* Report to DET, if the config pointer is NULL pointer */
  if (NULL_PTR == ConfigPtr)
  {
    /* Report to DET */
    (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID,
                           MCU_INIT_SID, MCU_E_PARAM_CONFIG);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action */
  }

  /* Check whether Det reported or not */
  if( E_OK == LenReturnValue)
  #endif /* MCU_DEV_ERROR_DETECT == STD_ON */
  {
    /* Implements MCU_ESDD_UD_036*/
    /* Check if the database is present */
    #if (STD_ON == MCU_DEV_ERROR_DETECT)
    if (MCU_DBTOC_VALUE == (ConfigPtr->ulStartOfDbToc))
    {
    #endif /* MCU_DEV_ERROR_DETECT == STD_ON */
      /* Assign the global pointer with the config pointer */
      Mcu_GpConfigPtr = ConfigPtr;

      /*Clear the ResetReasonStore call Count  */
      Mcu_GucMulRstReasonStoreCall = MCU_ZERO;
      /* Load the Ecm config array start address to global pointer */
      /* MISRA Violation: START Msg (4:0316)-3 */
      /* QAC Warning: START Msg (2:2814)-8  */
      Mcu_GpEcmSetting =
      (P2CONST(Mcu_EcmSetting, MCU_VAR, MCU_CONFIG_CONST))
                                             (Mcu_GpConfigPtr->pEcmSetting);

      /* END Msg (2:2814)-8  */
      /* END Msg (4:0316)-3 */
      /*Configure the ECM Reset*/
      MCU_RESC = Mcu_GpConfigPtr->ucEcmRstConf;

      /*Store the Reset Reason into the buffer*/
      Mcu_ResetReasonStore();

     (void)Mcu_EcmErrorInitialNotification();

     (void)Mcu_ClearEcmErrorOutput(MCU_INIT_SID);

      #if (STD_ON == MCU_LOCKSTEP_SELFDIAGNOSTIC_TEST)
      /* Self diagnostic test of lock step unit */
      LenReturnValue = Mcu_LockStepSelfDiagnosticTest();
      #endif /* (STD_ON == MCU_LOCKSTEP_SELFDIAGNOSTIC_TEST) */

      #if (STD_ON == MCU_ECM_SELFDIAGNOSTIC_TEST)
      if(E_OK == LenReturnValue)
      {
        /* Implements MCU_ESDD_UD_078 */
        /* Self diagnostic test of ECM unit */
        LenReturnValue = Mcu_EcmSelfDiagnosticTest();
      }
      else
      {

      }
      #endif

      /* Implements MCU_ESDD_UD_075 */
      #if (STD_ON == MCU_CVM_SELFDIAGNOSTIC_TEST)
      if(((uint16)MCU_POWER_ON_RESET == Mcu_GusLastResetReason)  &&
                                          (LenReturnValue == E_OK))
      {
        /* Implements EAAR_PN0079_FSR_0080 */
        /* Self diagnostic test of CVM unit */
        LenReturnValue = Mcu_CvmSelfDiagnosticTest();
      }
      else
      {
        /* No action required */
      }
      #endif /* (STD_ON == MCU_CVM_SELFDIAGNOSTIC_TEST) */
      /* MISRA Violation: START Msg(4:2995)-8 */
      /* MISRA Violation: START Msg(4:2991)-14 */
      if(E_OK == LenReturnValue)
      {
      /* END Msg(4:2991)-14 */
      /* END Msg(4:2995)-8 */
        LenReturnValue = Mcu_ConfigureCvm();
      }
      else
      {
        /* No action required */
      }
      /* MISRA Violation: START Msg(4:2995)-8 */
      if(E_OK == LenReturnValue)
      {
        /* END Msg(4:2995)-8 */
        /* Check Dem reported */
        /*Initialize the LucEcmIndex to zero */
        LucEcmIndex = MCU_ZERO;
        do
        {
          /* Mask error out pin for all ECM because it is enabled at power up*/
          /*Initialize the index to zero */
          LucIndex = MCU_ZERO;
          do
          {
            switch (LucIndex)
            {
            case MCU_ZERO:
                /* Load Ecm error mask reg0 configuration value */
                LulDataByte = MCU_ECMEMK0_FULL_MASK;
                /*Update the Ecm error mask reg0 address to Ecm config address*/
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->EMK0;
                break;
            case MCU_ONE:
                /*Load Ecm error mask reg1 configuration value */
                LulDataByte = MCU_ECMEMK1_FULL_MASK;
                /*Update the Ecm error mask reg1 address to Ecm config address*/
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->EMK1;
                break;
            case MCU_TWO:
                /*Load Ecm error mask reg2 configuration value */
                LulDataByte = MCU_ECMEMK2_FULL_MASK;
                /*Update the Ecm error mask reg2 address to Ecm config address*/
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->EMK2;
                break;
            /* MISRA Violation: START Msg (2:2881)-6  */
            /* Start Tag MCU_UT_001 */
            default:
                break;
            /* End Tag MCU_UT_001 */
            /* END Msg (2:2881)-6  */
            /* MISRA Violation: START Msg (2:2016)-7  */
            }
            /* END Msg (2:2016)-7  */
            /*Write the ECM error mask register with protection sequence*/
            LucLoopcount = MCU_LOOPCOUNT;
            /* QAC Warning: START Msg (2:2814)-8  */
            MCU_PROTECTEDWRITE32BIT(*LpEcmConfigAddress, LulDataByte,
              (Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
              (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopcount, LenReturnValue)
            /* END Msg (2:2814)-8  */
            /* Read back the Ecm error mask register*/
            MCU_MASKED_CHECK_WRITE_VERIFY_INIT(LpEcmConfigAddress,LulDataByte,
                                                     MCU_FULL_MASK,MCU_INIT_SID)
            /* Increment the index */
            LucIndex++;
          }while((LucIndex < MCU_THREE) && (E_OK == LenReturnValue));
          /* Increment the LucEcmIndex */
          LucEcmIndex++;
        }while((MCU_NO_OF_ECM_INSTANCES > LucEcmIndex) &&
                                                 (E_OK == LenReturnValue));
      }
      else
      {
        /* No action */
      }
      /* Check Dem reported */
      if (E_OK == LenReturnValue)
      {

        /*Initialize the LucEcmIndex to zero */
        LucEcmIndex = MCU_ZERO;
        do
        {
          /* Load Ecm error pulse config register to select dynamic or
             non-dynamic */
          LucLoopcount = MCU_LOOPCOUNT;
          /* MISRA Violation: START Msg (2:4570)-1 */
          /* Implements MCU_ESDD_UD_023 */
          MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->EPCFG),
            MCU_ECM_ERROUT_MODE,(Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
              (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopcount, LenReturnValue)
          /* Read back the Ecm error pulse config register*/
          MCU_MASKED_CHECK_WRITE_VERIFY_INIT
            (&((Ecm0_BaseAddress[LucEcmIndex]->EPCFG)),
              (uint32)MCU_ECM_ERROUT_MODE, MCU_EPCFG_WV_MASK, MCU_INIT_SID)
          /* END Msg (2:4570)-1 */
          /* Check whether Dem reported or not */
          /* Increment the LucEcmIndex */
          LucEcmIndex++;
        }while((MCU_NO_OF_ECM_INSTANCES > LucEcmIndex)
                                  && (E_OK == LenReturnValue));
      }
      else
      {
        /* No action */
      }
      /* Assign the global ECM pointer to local pointer */
      LpEcmSetting = Mcu_GpEcmSetting;
      /* Check Dem reported */
      if (E_OK == LenReturnValue)
      {
        /*Initialize the LucEcmIndex to zero */
        LucEcmIndex = MCU_ZERO;
        do
        {
          /* Initialize the index value */
          LucIndex = MCU_ZERO;
          do
          {
            switch (LucIndex)
            {
            case MCU_ZERO:
                /* Load Ecm maskable interrupt reg0 configuration value */
                /* QAC Warning: START Msg (2:2814)-8  */
                LulDataByte = (LpEcmSetting->ulEcmMaskInterReg0value &
                                              (~MCU_RAM_MASK0_VALUE));
                /* END Msg (2:2814)-8  */
                /* Update the Ecm MICFG0 address to Ecm config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->MICFG0;
                break;
            case MCU_ONE:
                /* Load Ecm maskable interrupt reg1 configuration value */
                LulDataByte = (LpEcmSetting->ulEcmMaskInterReg1value &
                                            (~MCU_RAM_MASK1_VALUE));
                /* Update the Ecm MICFG1 address to Ecm config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->MICFG1;
                break;
            case MCU_TWO:
                /* Load Ecm maskable interrupt reg2 configuration value */
                LulDataByte = LpEcmSetting->ulEcmMaskInterReg2value;
                /* Update the Ecm MICFG2 address to Ecm config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->MICFG2;
                break;
            case MCU_THREE:
                /* Load Ecm non maskable interrupt reg0 configuration value */
                LulDataByte = LpEcmSetting->ulEcmNonMaskInterReg0value &
                                                  (~MCU_RAM_MASK0_VALUE);
                /* Update the Ecm NMICFG0 address to Ecm config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->NMICFG0;
                break;
            case MCU_FOUR:
                /* Load Ecm non maskable interrupt reg1 configuration value */
                LulDataByte = (LpEcmSetting->ulEcmNonMaskInterReg1value &
                                                      (~MCU_RAM_MASK1_VALUE));
                /* Update the Ecm NMICFG1 address to Ecm config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->NMICFG1;
                break;
            case MCU_FIVE:
                /* Load Ecm non maskable interrupt reg2 configuration value */
                LulDataByte = LpEcmSetting->ulEcmNonMaskInterReg2value;
                /* Update the Ecm NMICFG2 address to Ecm config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->NMICFG2;
                break;
            case MCU_SIX:
                /* Load Ecm internal reset reg0 configuration value */
                LulDataByte = (LpEcmSetting->ulEcmInternalResetReg0value &
                                                    (~MCU_RAM_MASK0_VALUE));
                /* Update the Ecm IRCFG0 address to Ecm config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->IRCFG0;
                break;
            case MCU_SEVEN:
                /* Load Ecm internal reset reg1 configuration value */
                LulDataByte = (LpEcmSetting->ulEcmInternalResetReg1value &
                                                    (~MCU_RAM_MASK1_VALUE));
                /* Update the Ecm IRCFG1 address to Ecm config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->IRCFG1;
                break;
            case MCU_EIGHT:
                /* Load Ecm internal reset reg2 configuration value */
                LulDataByte = LpEcmSetting->ulEcmInternalResetReg2value;
                /* Update the Ecm IRCFG2 address to Ecm config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->IRCFG2;
                break;
            case MCU_NINE:
                /* Load Ecm error mask reg0 configuration value */
                LulDataByte = (LpEcmSetting->ulEcmErrorMaskReg0Value &
                                               (~MCU_RAM_MASK0_VALUE));
                /* Update the Ecm EMK0 address to Ecm config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->EMK0;
                break;
            case MCU_TEN:
                /* Load Ecm error mask reg1 configuration value */
                LulDataByte = (LpEcmSetting->ulEcmErrorMaskReg1Value
                                               &(~MCU_RAM_MASK1_VALUE));
                /* Update the Ecm EMK1 address to Ecm config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->EMK1;
                break;
            case MCU_ELEVEN:
                /* Load Ecm error mask reg2 configuration value */
                LulDataByte = LpEcmSetting->ulEcmErrorMaskReg2Value ;
                /* Update the Ecm EMK2 address to Ecm config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->EMK2;
                break;
            /* MISRA Violation: START Msg (2:2881)-6  */
            /* Start Tag MCU_UT_001 */
            default:
                break;
            /* End Tag MCU_UT_001 */
            /* END Msg (2:2881)-6  */
            /* MISRA Violation: START Msg (2:2016)-7  */
            }
            /* END Msg (2:2016)-7  */
            /*Write the ECM Config registers with protection sequence*/
            LucLoopcount = MCU_LOOPCOUNT;
            /* QAC Warning: START Msg (2:2814)-8  */
            MCU_PROTECTEDWRITE32BIT(*LpEcmConfigAddress, LulDataByte,
              (Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
                  (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopcount,
                                                                 LenReturnValue)
            /* END Msg (2:2814)-8  */
            /* Read back the ECM Config register*/
            MCU_MASKED_CHECK_WRITE_VERIFY_INIT(LpEcmConfigAddress,LulDataByte,
                                                    MCU_FULL_MASK, MCU_INIT_SID)

            /* Increment the index */
            LucIndex++;
          }while((LucIndex < MCU_MAX_ECM_CONFIG_REG) &&
                                            (E_OK == LenReturnValue));
          /* Increment the LucEcmIndex */
          LucEcmIndex++;
        }while((MCU_NO_OF_ECM_INSTANCES > LucEcmIndex) &&
                                            (E_OK == LenReturnValue));
      }
      else
      {
        /* No action */
      }

      /* check whether Dem is reported or not */
      if (E_OK == LenReturnValue)
      {
        LenReturnValue = Mcu_InitialiseDelayTimer();
      }
      else
      {
        /* No action */
      }

      /* check whether Dem is reported or not */
      if (E_OK == LenReturnValue)
      {
        /*Initialize the LucEcmIndex to zero */
        LucEcmIndex = MCU_ZERO;
        do
        {
          /* Initialize the index value */
          LucIndex = MCU_ZERO;
          do
          {
            switch (LucIndex)
            {
            case MCU_ZERO:
                /* Load Ecm Delay Timer reg0 configuration value */
                LulDataByte = LpEcmSetting->ulEcmDelayTimerReg0Value;
                /* Update the Ecm Delay Timer reg0 address to Ecm
                  config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->DTMCFG0;
                break;
            case MCU_ONE:
                /* Load Ecm Delay Timer reg1 configuration value */
                LulDataByte = LpEcmSetting->ulEcmDelayTimerReg1Value;
                /* Update the Ecm Delay Timer reg1 address to Ecm
                  config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->DTMCFG1;
                break;
            case MCU_TWO:
                /* Load Ecm Delay Timer reg2 configuration value */
                LulDataByte = LpEcmSetting->ulEcmDelayTimerReg2Value;
                /* Update the Ecm Delay Timer reg2 address to Ecm
                  config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->DTMCFG2;
                break;
            case MCU_THREE:
                /* Load Ecm Delay Timer reg3 configuration value */
                LulDataByte = LpEcmSetting->ulEcmDelayTimerReg3Value;
                /* Update the Ecm Delay Timer reg3 address to Ecm
                  config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->DTMCFG3;
                break;
            case MCU_FOUR:
                /* Load Ecm Delay Timer reg4 configuration value */
                LulDataByte = LpEcmSetting->ulEcmDelayTimerReg4Value;
                /* Update the Ecm Delay Timer reg4 address to Ecm
                  config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->DTMCFG4;
                break;
            case MCU_FIVE:
                /* Load Ecm Delay Timer reg5 configuration value */
                LulDataByte = LpEcmSetting->ulEcmDelayTimerReg5Value;
                /* Update the Ecm Delay Timer reg5 address to Ecm
                  config address */
                LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->DTMCFG5;
                break;
            /* MISRA Violation: START Msg (2:2881)-6  */
            /* Start Tag MCU_UT_001 */
            default:
                break;
            /* End Tag MCU_UT_001 */
            /* END Msg (2:2881)-6  */
            /* MISRA Violation: START Msg (2:2016)-7  */
            }
            /* END Msg (2:2016)-7  */
            /*Write the ECM Delay Timer config registers with
              protection sequence*/
            LucLoopcount = MCU_LOOPCOUNT;
            /* QAC Warning: START Msg (2:2814)-8  */
            MCU_PROTECTEDWRITE32BIT(*LpEcmConfigAddress,LulDataByte,
             (Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
             (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopcount, LenReturnValue)
            /* END Msg (2:2814)-8  */
            /* Read back the ECM Delay Timer config register*/
            MCU_MASKED_CHECK_WRITE_VERIFY_INIT(LpEcmConfigAddress,LulDataByte,
                                                    MCU_FULL_MASK, MCU_INIT_SID)
            /* Increment the index */
            LucIndex++;
          }while((LucIndex < MCU_ECMDLY_MAX_CONFIG_REG) &&
                                    (E_OK == LenReturnValue));
          /* Increment the LucEcmIndex */
          LucEcmIndex++;
        }while((MCU_NO_OF_ECM_INSTANCES > LucEcmIndex) &&
                                     (E_OK == LenReturnValue));
      }
      else
      {
        /* No action */
      }
      /* Check Dem reported */
      if (E_OK == LenReturnValue)
      {
        /* Check if any ECM error source is configured for MI */
        /* QAC Warning: START Msg (2:2814)-8  */
        if ((MCU_LONG_WORD_ZERO != Mcu_GpEcmSetting->ulEcmMaskInterReg0value)
                                    ||
           (MCU_LONG_WORD_ZERO != Mcu_GpEcmSetting->ulEcmMaskInterReg1value)
                                    ||
           (MCU_LONG_WORD_ZERO != Mcu_GpEcmSetting->ulEcmMaskInterReg2value))
        /* END Msg (2:2814)-8  */
        {
            /*Enable the ECM Maskable Interrupt*/
            MCU_EIC0 = MCU_ECM_MASKABLE_INTP_ENABLE;
        }
        else
        {
          /* No action */
        }
      }
      else
      {
        /* No action */
      }
      #if (STD_OFF == MCU_RAM_SECTOR_SETTING_CONFIGURED)

      if(E_OK == LenReturnValue)
      {
        LucEcmIndex = MCU_ZERO;
        do
        {
          LenReturnValue = Mcu_ConfigureEcmRamErrors(LucEcmIndex);
          LucEcmIndex++;
        }while((MCU_NO_OF_ECM_INSTANCES > LucEcmIndex) &&
                                   (E_OK == LenReturnValue)) ;
      }
      else
      {
        /* No action */
      }
      if(E_OK == LenReturnValue)
      {
      #endif
      #if(STD_ON == MCU_GTM_SUPPORT)
        /* Initialize the CMU registers to zero */
        MCU_GTM_MSR_LM5 = (uint32)MCU_ZERO;
        /* QAC Warning: START Msg(2:3416)-12 */
        MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&MCU_GTM_MSR_LM5, (uint32)MCU_ZERO,
                                MCU_MSR_LMx_WV_MASK, MCU_INIT_SID)
        /* END Msg(2:3416)-12 */

        /* QAC Warning: START Msg (2:2814)-8  */
        GTMBaseAddress->CMUCLKEN = MCU_CMUCLK_DISABLE;
        /* END Msg (2:2814)-8  */
        MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(GTMBaseAddress->CMUCLKEN),
           (uint32)MCU_ZERO, MCU_CMUCLKEN_WV_MASK, MCU_INIT_SID)

        GTMBaseAddress->CMUGCLKNUM = (uint32)MCU_ZERO;
        MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(GTMBaseAddress->CMUGCLKNUM),
        (uint32)MCU_ONE, MCU_CMUGCLKNUM_WV_MASK, MCU_INIT_SID)

        GTMBaseAddress->CMUGCLKDEN = (uint32)MCU_ZERO;
        MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(GTMBaseAddress->CMUGCLKDEN),
           (uint32)MCU_ONE, MCU_CMUGCLKDEN_WV_MASK, MCU_INIT_SID)

        GTMBaseAddress->CMUCLK0CTRL = (uint32)MCU_ZERO;
        MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(GTMBaseAddress->CMUCLK0CTRL),
        (uint32)MCU_ZERO, MCU_CMUCLKxCTRL_WV_MASK, MCU_INIT_SID)

        GTMBaseAddress->CMUCLK1CTRL = (uint32)MCU_ZERO;
        MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(GTMBaseAddress->CMUCLK1CTRL),
        (uint32)MCU_ZERO, MCU_CMUCLKxCTRL_WV_MASK, MCU_INIT_SID)

        GTMBaseAddress->CMUCLK2CTRL = (uint32)MCU_ZERO;
        MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(GTMBaseAddress->CMUCLK2CTRL),
        (uint32)MCU_ZERO, MCU_CMUCLKxCTRL_WV_MASK, MCU_INIT_SID)

        GTMBaseAddress->CMUCLK3CTRL = (uint32)MCU_ZERO;
        MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(GTMBaseAddress->CMUCLK3CTRL),
        (uint32)MCU_ZERO, MCU_CMUCLKxCTRL_WV_MASK, MCU_INIT_SID)

        GTMBaseAddress->CMUCLK4CTRL = (uint32)MCU_ZERO;
        MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(GTMBaseAddress->CMUCLK4CTRL),
        (uint32)MCU_ZERO, MCU_CMUCLKxCTRL_WV_MASK, MCU_INIT_SID)

        GTMBaseAddress->CMUCLK5CTRL = (uint32)MCU_ZERO;
        MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(GTMBaseAddress->CMUCLK5CTRL),
        (uint32)MCU_ZERO, MCU_CMUCLKxCTRL_WV_MASK, MCU_INIT_SID)

        GTMBaseAddress->CMUCLK6CTRL = (uint32)MCU_ZERO;
        MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(GTMBaseAddress->CMUCLK6CTRL),
        (uint32)MCU_ZERO, MCU_CMUCLKxCTRL_WV_MASK, MCU_INIT_SID)

        GTMBaseAddress->CMUCLK7CTRL = (uint32)MCU_ZERO;
        MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(GTMBaseAddress->CMUCLK7CTRL),
        (uint32)MCU_ZERO, MCU_CMUCLKxCTRL_WV_MASK, MCU_INIT_SID)

      #endif
      #if (STD_OFF == MCU_RAM_SECTOR_SETTING_CONFIGURED)
      }
      else
      {
      /* No action required */
      }
      #endif

      /* Implements MCU_ESDD_UD_036*/
      #if (STD_ON == MCU_DEV_ERROR_DETECT)
      if(E_OK == LenReturnValue)
      {
        /* Set the Global Status */
        Mcu_GblDriverStatus = MCU_INITIALIZED;
      }
      else
      {
        /* No action required */
      }
      #endif
      /* Implements MCU_ESDD_UD_036*/
    #if (STD_ON == MCU_DEV_ERROR_DETECT)
    } /* End of ((ConfigPtr->ulStartOfDbToc) == MCU_DBTOC_VALUE) */
    else
    {
      /* Implements MCU_ESDD_UD_043 */
      /* No database flashed. Hence, report to DET */
      (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID, MCU_INIT_SID,
                                               MCU_E_INVALID_DATABASE);
    }
    #endif /* End of (MCU_DEV_ERROR_DETECT == STD_ON) */
  } /* End of (E_OK == LenReturnValue ) */
  /* Implements MCU_ESDD_UD_036*/
  #if (STD_ON == MCU_DEV_ERROR_DETECT)
  else
  {
    /* No action */
  }
  #endif
}

/*******************************************************************************
** Function Name      : Mcu_InitRamSection
**
** Service ID         : 0x01
**
** Description        : This function initializes the RAM section as provided
**                      from the configuration structure.
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : RamSection - Id for RAM section
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Std_ReturnType (E_OK, E_NOT_OK)
**
** Preconditions      : MCU Driver component must be initialized
**
** Global Variables   : Mcu_GblDriverStatus,Mcu_GpEcmSetting
**
** Function Invoked   : Det_ReportError, MCU_ENTER_CRITICAL_SECTION
**                      MCU_EXIT_CRITICAL_SECTION,Mcu_ConfigureEcmRamErrors
**
** Registers Used     : ECMMnESSTR0,ECMnESSTC0,ECMMnESSTR1,ECMnESSTC1,ECMnMICFG0
**                      ECMnNMICFG0,ECMnIRCFG0,ECMnEMK0,ECMnMICFG1,ECMnNMICFG1,
**                      ECMnIRCFG1,ECMnEMK1,ECMnPCMD1,ECMnPS
*******************************************************************************/
/* Implements MCU_ESDD_UD_002, MCU_ESDD_UD_018*/
/* Implements MCU_ESDD_UD_072 */
/* Implements MCU154,EAAR_PN0079_FR_0012,MCU011,MCU017,MCU021, MCU166_Conf */
/* Implements EAAR_PN0034_FR_0030, EAAR_PN0034_FR_0081, EAAR_PN0034_FR_0049 */
/* Implements EAAR_PN0034_FR_0064, EAAR_PN0034_FSR_0001, EAAR_PN0034_FSR_0002 */
/* Implements MCU172_Conf */
#if (STD_ON == MCU_RAM_SECTOR_SETTING_CONFIGURED)
 /* MISRA Violation: START Msg (2:3227)-5  */
FUNC(Std_ReturnType, MCU_PUBLIC_CODE) Mcu_InitRamSection
                                               (Mcu_RamSectionType RamSection)
 /* END Msg (2:3227)-5  */
{
  P2CONST(Mcu_RamSetting, AUTOMATIC, MCU_CONFIG_CONST) LpRamSetting;
  VAR(uint32,AUTOMATIC)                                LulRamStartAddress;
  VAR(uint32,AUTOMATIC)                                LulNoOfByte;
  VAR(uint8,AUTOMATIC)                                 LucDataByte;
  VAR(uint8,AUTOMATIC)                                 LucEcmIndex;
  VAR(uint8,AUTOMATIC)                                 LucLoopcount;
  VAR(Std_ReturnType,TYPEDEF)                          LenReturnValue;
  VAR(boolean,AUTOMATIC)                               LblDemReported;
  LblDemReported = MCU_FALSE;
  /* Initialize return value with E_OK */
  LenReturnValue = E_OK;

  /* Implements MCU_ESDD_UD_036*/
  #if (STD_ON == MCU_DEV_ERROR_DETECT)
  /* Report to DET, if the component is not initialized */
  if (MCU_UNINITIALIZED == Mcu_GblDriverStatus)
  {
    /* Implements MCU125,MCU136 */
    /* Report to DET */
    (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID,
                                        MCU_INITRAMSECTION_SID, MCU_E_UNINIT);
    LenReturnValue = E_NOT_OK;
  }
  /* Report to DET, if RamSetting Id is out of range */
  /* QAC Warning: START Msg (2:2814)-8  */
  else if (RamSection > Mcu_GpConfigPtr->ulMaxRamSetting)
  /* END Msg (2:2814)-8  */
  {
    /* Implements MCU_ESDD_UD_041 */
    /* Report to DET */
    (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID,
                              MCU_INITRAMSECTION_SID, MCU_E_PARAM_RAMSECTION);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Check if any development error occurred */
  if (E_OK == LenReturnValue)
  #endif /* MCU_DEV_ERROR_DETECT == STD_ON */
  {
    /* Get the pointer to the RAM structure */
    /* MISRA Violation: START Msg (4:0316)-3 */
    LpRamSetting = (P2CONST(Mcu_RamSetting, MCU_VAR, MCU_CONFIG_CONST))
                                              (Mcu_GpConfigPtr->pRamSetting);
    /* END Msg (4:0316)-3 */
    /* Get the start address of the RAM section */
    /* MISRA Violation: START Msg (4:0491)-4 */
    /* MISRA Violation: START Msg (2:2824)-11  */
    LulRamStartAddress = LpRamSetting[RamSection].ulRamSectionBaseAddress;
    /* END Msg (2:2824)-11  */
    /* Get the size of RAM section */
    LulNoOfByte = LpRamSetting[RamSection].ulRamSectionSize;
    /* Get initial value */
    LucDataByte = LpRamSetting[RamSection].ucRamDefaultValue;
    /* END Msg (4:0491)-4 */
    while (MCU_LONG_WORD_ZERO != LulNoOfByte)
    {
      /* MISRA Violation: START Msg (4:0303)-1 */
      /* QAC Warning: START Msg (2:2814)-8  */
      *((volatile uint8*)LulRamStartAddress) = LucDataByte;
       MCU_CHECK_WRITE_VERIFY_RUNTIME(((volatile uint8*)LulRamStartAddress),
                                             LucDataByte,MCU_INITRAMSECTION_SID)
      /* END Msg (2:2814)-8  */
      /* END Msg (4:0303)-1 */
      /* Decrement the size */
      LulNoOfByte--;
      /* Increment the pointer of RAM Section address */
      LulRamStartAddress++;
    }

    /*Initialize the LucEcmIndex to zero */
    LucEcmIndex = MCU_ZERO;
    do
    {
      /* Check if any ECM ram error occurred during initialisation */
      if(MCU_LONG_WORD_ZERO != (Ecmm0_BaseAddress[LucEcmIndex]->ESSTR0 &
                                                          MCU_RAM_MASK0_VALUE))
      {
        #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
        MCU_ENTER_CRITICAL_SECTION(MCU_REGISTER_PROTECTION);
        #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

        /* Clear the ECM ram error */
        LucLoopcount = MCU_LOOPCOUNT;
        MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->ESSTC0),
                MCU_RAM_MASK0_VALUE,(Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
                (Ecm0_BaseAddress[LucEcmIndex]->PS),LucLoopcount,LenReturnValue)
        /* Read back the Ecm Source Status Clear Trigger register*/
        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
          (&(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR0),
                     MCU_LONG_WORD_ZERO, MCU_FULL_MASK, MCU_INITRAMSECTION_SID)
        #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
        MCU_EXIT_CRITICAL_SECTION(MCU_REGISTER_PROTECTION);
        #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

      }
      else
      {
       /* No action */
      }
      /* Check whether Dem reported or not */
      if (E_OK == LenReturnValue )
      {
        /* Check if any ECM ram error during initialisation */
        if(MCU_LONG_WORD_ZERO != (Ecmm0_BaseAddress[LucEcmIndex]->ESSTR1 &
                                                        MCU_RAM_MASK1_VALUE))
        {
          #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
          MCU_ENTER_CRITICAL_SECTION(MCU_REGISTER_PROTECTION);
          #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

          /* Clear the ECM ram error */
          LucLoopcount = MCU_LOOPCOUNT;
          MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->ESSTC1),
             MCU_RAM_MASK1_VALUE,(Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
             (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopcount,
                                                                 LenReturnValue)
          /* Read back the Ecm Source Status Clear Trigger register*/
          MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
            (&(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR1),
                     MCU_LONG_WORD_ZERO, MCU_FULL_MASK, MCU_INITRAMSECTION_SID)
          #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
          MCU_EXIT_CRITICAL_SECTION(MCU_REGISTER_PROTECTION);
          #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

        }
        else
        {
          /* No action */
        }
        /* Check whether Dem reported or not */
        if (E_OK == LenReturnValue )
        {
           LenReturnValue = Mcu_ConfigureEcmRamErrors(LucEcmIndex);

        }
        else
        {
          /*Make Dem report flag as true*/
          LblDemReported = MCU_TRUE;
        }
      }
      else
      {
        /*Make Dem report flag as true*/
        LblDemReported = MCU_TRUE;
      }

      /* Increment the LucEcmIndex */
      LucEcmIndex++;
    }while((MCU_NO_OF_ECM_INSTANCES > LucEcmIndex) &&
                                       (MCU_FALSE == LblDemReported));
  }
  /* Implements MCU_ESDD_UD_036*/
  #if (STD_ON == MCU_DEV_ERROR_DETECT)
  else
  {
   /* No action */
  }
  #endif
  return (LenReturnValue);
}
#endif

 #if (STD_ON == MCU_INIT_CLOCK)
/*******************************************************************************
** Function Name      : Mcu_InitClock
**
** Service ID         : 0x02
**
** Description        : This service initializes the PLL and other MCU specific
**                      clock options.
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : ClockSetting - Id for Clock setting
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Std_ReturnType (E_OK, E_NOT_OK)
**
** Preconditions      : MCU Driver component must be initialized
**
** Global Variables   : Mcu_GblDriverStatus, Mcu_GpConfigPtr,
**                      Mcu_GpClockSetting.
**
** Function Invoked   : Det_ReportError, Dem_ReportErrorStatus,
**                      Mcu_ClmaSelfDiagnosticTest.
**
** Registers Used     : CLMA4,GTM0CMUCLK1CTRL,CLMAnCTL0,CLMAnCMPH,CLMAnPCMD,
**                      CLMAnPS,CLMATESTS,CLMATEST,CLMAnCMPL,CLKD0DIV,CLKD0STAT,
**                      CKSC0C,CKSC0S,CLKD1DIV,CLKD1STAT,CLKD2DIV,CLKD2STAT,
**                      CKSC2C,CKSC2S,CLKD3DIV,CLKD3STAT,CKSC3C,CKSC3S,
**                      GTM0GTMIRQMODE,GTM0CMUGCLKNUM,GTM0CMUGCLKDEN,
**                      CMUCLK0CTRL,CMUCLK1CTRL,CMUCLK2CTRL,CMUCLK3CTRL,
**                      CMUCLK4CTRL,CMUCLK5CTRL,CMUCLK6CTRL,CMUCLK7CTRL
*******************************************************************************/
/* Implements MCU_ESDD_UD_003, MCU_ESDD_UD_072,MCU_ESDD_UD_077,MCU_ESDD_UD_019*/
/* Implements MCU210,MCU182_Conf,MCU138,MCU137,MCU155,MCU049,MCU017,MCU019 */
/* Implements EAAR_PN0034_FR_0049, EAAR_PN0034_FR_0064, EAAR_PN0034_FR_0068 */
/* Implements EAAR_PN0034_FSR_0001, EAAR_PN0034_FSR_0002, MCU248, MCU053 */
/* Implements MCU166_Conf, MCU183_Conf, MCU188_Conf, EAAR_PN0079_FR_0004 */
/* Implements EAAR_PN0079_FR_0105 */
/* Implements EAAR_PN0079_FSR_0022, EAAR_PN0079_FSR_0064, EAAR_PN0079_FR_0078 */
 /* QAC Warning: START Msg (2:3227)-5  */
 /* QAC Warning: START Msg (0:2755)-15 */
FUNC(Std_ReturnType, MCU_PUBLIC_CODE) Mcu_InitClock(Mcu_ClockType ClockSetting)
 /* END Msg (0:2755)-15 */
 /* END Msg (2:3227)-5  */
{
  /* QAC Warning: START Msg (3:3203)-16  */
  VAR(Mcu_ClkSettingReg,TYPEDEF)                      LMcuClockReg;
  VAR(uint32,AUTOMATIC)                               LulClkDivider;
  VAR(uint32,AUTOMATIC)                               LulClkSrcClk;
  VAR(uint8,AUTOMATIC)                                LucCount;
  VAR(uint8,AUTOMATIC)                                LucClockIndex;
  /* END Msg (3:3203)-16  */
  /* Implements MCU_ESDD_UD_027 */
  #if (STD_ON == MCU_CLMA0_OPERATION  ||\
       STD_ON == MCU_CLMA1_OPERATION  ||\
       STD_ON == MCU_CLMA2_OPERATION  ||\
       STD_ON == MCU_CLMA3_OPERATION  ||\
       STD_ON == MCU_CLMA4_OPERATION)

  VAR(uint8,AUTOMATIC)                                LucLoopcount;
  #endif
  VAR(Std_ReturnType,TYPEDEF)                         LenReturnValue;

  #if(STD_ON == MCU_GTM_SUPPORT)
  VAR(uint8,AUTOMATIC)                                LucBitShift;
  P2CONST(Mcu_GTMCMUGlobalSetting, MCU_VAR, MCU_CONFIG_CONST)
                                                          LpGTMCMUGlobalSetting;
  VAR(uint8,AUTOMATIC)                                    LucMaxCMUClocks;
  VAR(uint32,AUTOMATIC)                                   LulClkEnable;
  #endif



  #if (STD_ON == MCU_CLMA_SELFDIAGNOSTIC_TEST)
  /* MISRA Violation: START Msg (4:0316)-3 */
  P2CONST(Mcu_CLMASelfDiag, MCU_VAR, MCU_CONFIG_CONST)LpCLMASelfDiag;
  LpCLMASelfDiag =(P2CONST(Mcu_CLMASelfDiag, MCU_VAR, MCU_CONFIG_CONST))
                                          (Mcu_GpConfigPtr->pCLMASelfDiagTest);
  /* END Msg (4:0316)-3 */
  #endif

  /* Initialize to default value */
  LenReturnValue = E_OK;
  #if(STD_ON == MCU_GTM_SUPPORT)
  LulClkEnable = (uint32)MCU_ZERO;
  #endif

  /* Implements MCU_ESDD_UD_036*/
  #if (STD_ON == MCU_DEV_ERROR_DETECT)
  /* Report to DET, if the component is not initialized */
  if (MCU_UNINITIALIZED == Mcu_GblDriverStatus)
  {
    /* Implements MCU125,MCU139 */
    /* Report to DET */
    (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID,
                     MCU_INITCLOCK_SID, MCU_E_UNINIT);
    LenReturnValue = E_NOT_OK;
  }
  /* QAC Warning: START Msg (2:2814)-8  */
  else if (ClockSetting > Mcu_GpConfigPtr->ucMaxClockSetting)
  /* END Msg (2:2814)-8  */
  {
    /* Report to DET, if clock setting Id is invalid */
    (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID,
                     MCU_INITCLOCK_SID, MCU_E_PARAM_CLOCK);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Check if any development error occurred */
  if (E_OK == LenReturnValue )
  #endif /* MCU_DEV_ERROR_DETECT == STD_ON */
  {
    /* Store the pointer to the configured clock structure  */
    /* MISRA Violation: START Msg (4:0316)-3 */
    /* MISRA Violation: START Msg (4:0488)-2 */
    Mcu_GpClockSetting =
    (P2CONST(Mcu_ClockSetting, MCU_VAR, MCU_CONFIG_CONST))
                   (Mcu_GpConfigPtr->pClockSetting) + (ClockSetting);
    /*END Msg (4:0488)-2 */
    /*END Msg (4:0316)-3 */
    #if(STD_ON == MCU_GTM_SUPPORT)
    /* MISRA Violation: START Msg (4:0316)-3 */
    Mcu_GpGTMCMUClockSetting =(P2CONST(Mcu_GTMCMUClockSetting, MCU_VAR,
                   MCU_CONFIG_CONST))(Mcu_GpConfigPtr->pGTMCMUClockSetting);

    LpGTMCMUGlobalSetting = (P2CONST(Mcu_GTMCMUGlobalSetting, MCU_VAR,
                   MCU_CONFIG_CONST))(Mcu_GpConfigPtr->pGTMCMUGlobalSetting);
    /*END Msg (4:0316)-3 */
    #endif
    /* Intialize clock index */
    LucClockIndex = MCU_ZERO;
    do
    {
      switch (LucClockIndex )
      {
      case MCU_ZERO:
          /* Get the value of the selected source clock for System clk 0 */
          /* QAC Warning: START Msg (2:2814)-8  */
          LulClkSrcClk = Mcu_GpClockSetting->ulSysClk0SelectedSrcClock;
          /* END Msg (2:2814)-8  */
          /* Get the value of the divider for System clk 0 */
          /* QAC Warning: START Msg (2:2814)-8  */
          /* MISRA Violation: START Msg (4:0303)-1 */
          LulClkDivider = Mcu_GpClockSetting->ulSysClk0Divider;
          /* END Msg (4:0303)-1 */
          /* END Msg (2:2814)-8  */
          /* QAC Warning: START Msg (2:2814)-8  */
          /* MISRA Violation: START Msg (4:0303)-1 */
          LMcuClockReg.pMcuClkDiv = &MCU_CLKD0DIVL;
          /* END Msg (4:0303)-1 */
          /* END Msg (2:2814)-8  */
          /* QAC Warning: START Msg (2:2814)-8  */
          /* MISRA Violation: START Msg (4:0303)-1 */
          LMcuClockReg.pMcuClkDivStat = &MCU_CLKD0STATL;
          /* END Msg (4:0303)-1 */
          /* END Msg (2:2814)-8  */
          /* QAC Warning: START Msg (2:2814)-8  */
          /* MISRA Violation: START Msg (4:0303)-1 */
          LMcuClockReg.pMcuCkscCtl = &MCU_CKSC0CL;
          /* END Msg (4:0303)-1 */
          /* END Msg (2:2814)-8  */
          /* QAC Warning: START Msg (2:2814)-8  */
          /* MISRA Violation: START Msg (4:0303)-1 */
          LMcuClockReg.pMcuCkscStat = &MCU_CKSC0SL;
          /* END Msg (4:0303)-1 */
          /* END Msg (2:2814)-8  */
          break;
      case MCU_ONE:
          /* QAC Warning: START Msg (2:2814)-8  */
          LulClkDivider = Mcu_GpClockSetting->ulSysClk1Divider;
          /* END Msg (2:2814)-8  */
          /* MISRA Violation: START Msg (4:0303)-1 */
          LMcuClockReg.pMcuClkDiv = &MCU_CLKD1DIVL;
          /* END Msg (4:0303)-1 */
          /* MISRA Violation: START Msg (4:0303)-1 */
          LMcuClockReg.pMcuClkDivStat = &MCU_CLKD1STATL;
          /* END Msg (4:0303)-1 */
          break;
      case MCU_TWO:
          /* Get the value of the selected source clock for extclk 0 */
          /* QAC Warning: START Msg (2:2814)-8  */
          LulClkSrcClk = Mcu_GpClockSetting->ulExtClk0SelectedSrcClock;
          /* END Msg (2:2814)-8  */
          /* Get the value of the divider for extclk 1 */
          LulClkDivider = Mcu_GpClockSetting->ulExtClk0Divider;
          /* MISRA Violation: START Msg (4:0303)-1 */
          LMcuClockReg.pMcuClkDiv = &MCU_CLKD2DIVL;
          /* END Msg (4:0303)-1 */
          /* MISRA Violation: START Msg (4:0303)-1 */
          LMcuClockReg.pMcuClkDivStat = &MCU_CLKD2STATL;
          /* END Msg (4:0303)-1 */
          /* MISRA Violation: START Msg (4:0303)-1 */
          LMcuClockReg.pMcuCkscCtl = &MCU_CKSC2CL;
          /* END Msg (4:0303)-1 */
          /* MISRA Violation: START Msg (4:0303)-1 */
          LMcuClockReg.pMcuCkscStat = &MCU_CKSC2SL;
          /* END Msg (4:0303)-1 */
          break;
      case MCU_THREE:
          /* Get the value of the selected source clock for extclk 1 */
          /* QAC Warning: START Msg (2:2814)-8  */
          LulClkSrcClk = Mcu_GpClockSetting->ulExtClk1SelectedSrcClock;
          /* END Msg (2:2814)-8  */
          /* Get the value of the divider for extclk 1 */
          LulClkDivider = Mcu_GpClockSetting->ulExtClk1Divider;
          /* MISRA Violation: START Msg (4:0303)-1 */
          LMcuClockReg.pMcuClkDiv = &MCU_CLKD3DIVL;
          /* END Msg (4:0303)-1 */
          /* MISRA Violation: START Msg (4:0303)-1 */
          LMcuClockReg.pMcuClkDivStat = &MCU_CLKD3STATL;
          /* END Msg (4:0303)-1 */
          /* MISRA Violation: START Msg (4:0303)-1 */
          LMcuClockReg.pMcuCkscCtl = &MCU_CKSC3CL;
          /* END Msg (4:0303)-1 */
          /* MISRA Violation: START Msg (4:0303)-1 */
          LMcuClockReg.pMcuCkscStat = &MCU_CKSC3SL;
          /* END Msg (4:0303)-1 */
          break;
      /* MISRA Violation: START Msg (2:2881)-6  */
      /* Start Tag MCU_UT_001 */
      default:
          break;
      /* End Tag MCU_UT_001 */
      /* END Msg (2:2881)-6  */
      /* MISRA Violation: START Msg (2:2016)-7  */
      }
      /* END Msg (2:2016)-7  */
       if(MCU_ONE != (LucClockIndex))
       {
         /* Check configured clock is already selected, if no select it */
         /* QAC Warning: START Msg (2:2814)-8  */
         if (LulClkSrcClk != *(LMcuClockReg.pMcuCkscStat))
         /* END Msg (2:2814)-8  */
         {

           /* Load clock selection value in control reg */
           /* QAC Warning: START Msg (2:2814)-8  */
           *(LMcuClockReg.pMcuCkscCtl) = LulClkSrcClk;
           /* END Msg (2:2814)-8  */
           MCU_CHECK_WRITE_VERIFY_RUNTIME((LMcuClockReg.pMcuCkscCtl),
                                                LulClkSrcClk, MCU_INITCLOCK_SID)
           EXECUTE_SYNCP();
           /* Initialize retry count value */
           LucCount = MCU_LOOPCOUNT;
           /* QAC Warning: START Msg (2:2814)-8  */
           /* Check clock selection happened successfully  */
           while (((*(LMcuClockReg.pMcuCkscStat) ) !=
                     LulClkSrcClk )&& (LucCount > MCU_ZERO) )
           /* END Msg (2:2814)-8  */
           {
              LucCount--;
           }

           if (LulClkSrcClk != *(LMcuClockReg.pMcuCkscStat))
           {
            /* Implements MCU_ESDD_UD_037*/
             /* Clock selection failed and report production error */
             Dem_ReportErrorStatus(MCU_E_CLOCK_FAILURE,
                                               DEM_EVENT_STATUS_FAILED);
             /* Set the return value to  E_NOT_OK */
             LenReturnValue = E_NOT_OK;
           }
           else
           {
             /* No action */
           }
         }
         else
         {
           /* No action */
         }
       }
       else
       {
         /* No action */
       }

       /*Check if No Dem error has occurred and clock divisor is synchronized*/
       /* QAC Warning: START Msg (2:2814)-8  */
       if (((uint32)MCU_CLKOUT_SYNC == (*(LMcuClockReg.pMcuClkDivStat) &
                (uint32)MCU_CLKOUT_SYNC)) && (E_OK == LenReturnValue ))
       /* END Msg (2:2814)-8  */
       {
         /* Load clock division value in control reg */
         /* QAC Warning: START Msg (2:2814)-8  */
         *(LMcuClockReg.pMcuClkDiv) = LulClkDivider;
         /* END Msg (2:2814)-8  */
         EXECUTE_SYNCP();
         MCU_CHECK_WRITE_VERIFY_RUNTIME(LMcuClockReg.pMcuClkDiv, LulClkDivider,
                                                              MCU_INITCLOCK_SID)
         /* Initialize retry count value */
         LucCount = MCU_LOOPCOUNT;
         /* Check clock Divider selection happened successfully  */
         while ((((*(LMcuClockReg.pMcuClkDivStat) &
          (uint32)MCU_CLKOUT_ACTIVE_SYNC) != (uint32)MCU_CLKOUT_ACTIVE_SYNC)) &&
                                                  (LucCount > MCU_ZERO))
         {
           /* Decrement the counter */
           LucCount--;
         }
         if ((uint32)MCU_CLKOUT_ACTIVE_SYNC != (*(LMcuClockReg.pMcuClkDivStat) &
                                               (uint32)MCU_CLKOUT_ACTIVE_SYNC))
         {
           /* Implements MCU_ESDD_UD_037*/
           /* Clock division failed and report production error */
           Dem_ReportErrorStatus(MCU_E_CLOCK_FAILURE,
                                               DEM_EVENT_STATUS_FAILED);
           /* Set the return value to  E_NOT_OK */
           LenReturnValue = E_NOT_OK;
         }
         else
         {
           /* No action */
         }
       }
       else
       {
         /* No action */
       }
      /* increment the clock index */
      LucClockIndex++;
    }while ((LucClockIndex < MCU_FOUR) && (E_OK == LenReturnValue ));

    #if (STD_ON == MCU_CLMA0_OPERATION)
    #if (STD_ON == MCU_CLMA_SELFDIAGNOSTIC_TEST)
    if (E_OK == LenReturnValue)
    {
      if(MCU_TRUE == LpCLMASelfDiag->blClma0SelfDiagTest)
      {
        LenReturnValue = Mcu_ClmaSelfDiagnosticTest(MCU_ZERO);
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
    #endif /* (STD_ON == MCU_CLMA_SELFDIAGNOSTIC_TEST) */
    /* Check if No Dem error occurred and Clock monitor CLMA0 is disabled */
    if ((E_OK == LenReturnValue ) &&
       (MCU_ZERO == (uint8)((Clma_BaseAddress[MCU_ZERO]->CTL0) & MCU_ONE)))
    {
      /* Set the Higher threshold value for frequency limit in
         the CLMA0 compare register H*/
      /* MISRA Violation: START Msg (2:3892)-4 */
      Clma_BaseAddress[MCU_ZERO]->CMPH = Mcu_GpClockSetting->usCLMA0CMPH;
      /* Read back the Higher threshold value for frequency limit in
         the CLMA0 compare register H*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(Clma_BaseAddress[MCU_ZERO]->CMPH),
            (uint16)(Mcu_GpClockSetting->usCLMA0CMPH), MCU_CMPH_WV_MASK,
                                                             MCU_INITCLOCK_SID)
        /* END Msg (2:3892)-4 */
      /* Set the Lower threshold value for frequency limit in
         the CLMA0 compare register L*/
      /* MISRA Violation: START Msg (2:3892)-4 */
      Clma_BaseAddress[MCU_ZERO]->CMPL = Mcu_GpClockSetting->usCLMA0CMPL;
      /* Read back the Lower threshold value for frequency limit in
         the CLMA0 compare register L*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(Clma_BaseAddress[MCU_ZERO]->CMPL),
              (uint16)(Mcu_GpClockSetting->usCLMA0CMPL), MCU_CMPL_WV_MASK,
                                                      MCU_INITCLOCK_SID)
      /* END Msg (2:3892)-4 */
      /* Write data to protected CLMA0 control register 0*/
      LucLoopcount = MCU_LOOPCOUNT;
      /* MISRA Violation: START Msg (2:4570)-1 */
      /* MISRA Violation: START Msg (4:4464)-5 */
      /* MISRA Violation: START Msg (2:3892)-4 */
      MCU_PROTECTEDWRITE8BIT ((Clma_BaseAddress[MCU_ZERO]->CTL0),MCU_ONE,
         (Clma_BaseAddress[MCU_ZERO]->PCMD),
                   (Clma_BaseAddress[MCU_ZERO]->PS),LucLoopcount,LenReturnValue)
      /* Read back the Control register*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(Clma_BaseAddress[MCU_ZERO]->CTL0),
                     MCU_ONE, MCU_CTL0_WV_MASK, MCU_INITCLOCK_SID)
      /* END Msg (2:3892)-4 */
      /* END Msg (4:4464)-5 */
      /* END Msg (2:4570)-1 */
    } /* Check if No Dem error occurred and Clock monitor CLMA0 is disabled*/
    else
    {
      /* No action */
    }
    #endif /* (STD_ON == MCU_CLMA0_OPERATION) */

    #if (STD_ON == MCU_CLMA1_OPERATION)
    #if (STD_ON == MCU_CLMA_SELFDIAGNOSTIC_TEST)
    if (E_OK == LenReturnValue)
    {
      if(MCU_TRUE == LpCLMASelfDiag->blClma1SelfDiagTest)
      {
        LenReturnValue = Mcu_ClmaSelfDiagnosticTest(MCU_ONE);
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
    #endif /* (STD_ON == MCU_CLMA_SELFDIAGNOSTIC_TEST) */

    /* Check if No Dem error occurred and Clock monitor CLMA1 is disabled */
    if ((E_OK == LenReturnValue ) &&
       (MCU_ZERO == (uint8)((Clma_BaseAddress[MCU_ONE]->CTL0) & MCU_ONE)))
    {
      /* Set the Higher threshold value for frequency limit in
         the CLMA1 compare register H*/
      /* MISRA Violation: START Msg (2:3892)-4 */
      Clma_BaseAddress[MCU_ONE]->CMPH = Mcu_GpClockSetting->usCLMA1CMPH;

      /* Read back the Higher threshold value for frequency limit in
         the CLMA1 compare register H*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(Clma_BaseAddress[MCU_ONE]->CMPH),
           (uint16)(Mcu_GpClockSetting->usCLMA1CMPH), MCU_CMPH_WV_MASK,
                                                           MCU_INITCLOCK_SID)
      /* END Msg (2:3892)-4 */
      /* Set the Lower threshold value for frequency limit in
         the CLMA1 compare register L*/
      /* MISRA Violation: START Msg (2:3892)-4 */
      Clma_BaseAddress[MCU_ONE]->CMPL = Mcu_GpClockSetting->usCLMA1CMPL;

      /* Read back the Lower threshold value for frequency limit in
         the CLMA1 compare register L*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(Clma_BaseAddress[MCU_ONE]->CMPL),
            (uint16)(Mcu_GpClockSetting->usCLMA1CMPL), MCU_CMPL_WV_MASK,
                                                           MCU_INITCLOCK_SID)
      /* END Msg (2:3892)-4 */
      /* Write data to protected CLMA1 control register 0*/
      LucLoopcount = MCU_LOOPCOUNT;
      /* MISRA Violation: START Msg (2:4570)-1 */
      /* MISRA Violation: START Msg (4:4464)-5 */
      /* MISRA Violation: START Msg (2:3892)-4 */
      MCU_PROTECTEDWRITE8BIT ((Clma_BaseAddress[MCU_ONE]->CTL0),MCU_ONE,
         (Clma_BaseAddress[MCU_ONE]->PCMD),
                    (Clma_BaseAddress[MCU_ONE]->PS),LucLoopcount,LenReturnValue)
      /* Read back the Control register*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(Clma_BaseAddress[MCU_ONE]->CTL0),
                     MCU_ONE, MCU_CTL0_WV_MASK, MCU_INITCLOCK_SID)
      /* END Msg (2:3892)-4 */
      /* END Msg (4:4464)-5 */
      /* END Msg (2:4570)-1 */
    } /* Check if No Dem error occurred and Clock monitor CLMA1 is disabled*/
    else
    {
      /* No action */
    }
    #endif /* (STD_ON == MCU_CLMA1_OPERATION) */

    #if (STD_ON == MCU_CLMA2_OPERATION)
    #if (STD_ON == MCU_CLMA_SELFDIAGNOSTIC_TEST)
    if (E_OK == LenReturnValue)
    {
      if(MCU_TRUE == LpCLMASelfDiag->blClma2SelfDiagTest)
      {
       LenReturnValue = Mcu_ClmaSelfDiagnosticTest(MCU_TWO);
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
    #endif /* (STD_ON == MCU_CLMA_SELFDIAGNOSTIC_TEST) */
    /* Check if No Dem error occurred and Clock monitor CLMA2 is disabled */
    if ((E_OK == LenReturnValue ) &&
       (MCU_ZERO == (uint8)(Clma_BaseAddress[MCU_TWO]->CTL0 & MCU_ONE)))
    {
      /* Set the Higher threshold value for frequency limit in
         the CLMA2 compare register H*/
      /* MISRA Violation: START Msg (2:3892)-4 */
      Clma_BaseAddress[MCU_TWO]->CMPH = Mcu_GpClockSetting->usCLMA2CMPH;
      /* Read back the Higher threshold value for frequency limit in
         the CLMA2 compare register H*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(Clma_BaseAddress[MCU_TWO]->CMPH),
           (uint16)(Mcu_GpClockSetting->usCLMA2CMPH), MCU_CMPH_WV_MASK,
                                                            MCU_INITCLOCK_SID)
      /* END Msg (2:3892)-4 */
      /* Set the Lower threshold value for frequency limit in
         the CLMA2 compare register L*/
      /* MISRA Violation: START Msg (2:3892)-4 */
      Clma_BaseAddress[MCU_TWO]->CMPL = Mcu_GpClockSetting->usCLMA2CMPL;
      /* Read back the Lower threshold value for frequency limit in
         the CLMA2 compare register L*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(Clma_BaseAddress[MCU_TWO]->CMPL),
           (uint16)(Mcu_GpClockSetting->usCLMA2CMPL), MCU_CMPL_WV_MASK,
                                                            MCU_INITCLOCK_SID)
      /* END Msg (2:3892)-4 */
      /* Write data to protected CLMA2 control register 0*/
      LucLoopcount = MCU_LOOPCOUNT;
      /* MISRA Violation: START Msg (2:4570)-1 */
      /* MISRA Violation: START Msg (4:4464)-5 */
      /* MISRA Violation: START Msg (2:3892)-4 */
      MCU_PROTECTEDWRITE8BIT ((Clma_BaseAddress[MCU_TWO]->CTL0),MCU_ONE,
        (Clma_BaseAddress[MCU_TWO]->PCMD),
                  (Clma_BaseAddress[MCU_TWO]->PS), LucLoopcount, LenReturnValue)
      /* Read back the Control register*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(Clma_BaseAddress[MCU_TWO]->CTL0),
                    MCU_ONE, MCU_CTL0_WV_MASK, MCU_INITCLOCK_SID)
      /* END Msg (2:3892)-4 */
      /* END Msg (4:4464)-5 */
      /* END Msg (2:4570)-1 */

    } /* Check if No Dem error occurred and Clock monitor CLMA2 is disabled*/
    else
    {
      /* No action */
    }
    #endif /* (STD_ON == MCU_CLMA2_OPERATION) */

    #if (STD_ON == MCU_CLMA3_OPERATION)
    #if (STD_ON == MCU_CLMA_SELFDIAGNOSTIC_TEST)
    if (E_OK == LenReturnValue)
    {
      if(MCU_TRUE == LpCLMASelfDiag->blClma3SelfDiagTest)
      {
        LenReturnValue = Mcu_ClmaSelfDiagnosticTest(MCU_THREE);
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
    #endif /* (STD_ON == MCU_CLMA_SELFDIAGNOSTIC_TEST) */
    /* Check if No Dem error occurred and Clock monitor CLMA3 is disabled */
    if ((E_OK == LenReturnValue ) &&
       (MCU_ZERO == (uint8)((Clma_BaseAddress[MCU_THREE]->CTL0) & MCU_ONE)))
    {
      /* Set the Higher threshold value for frequency limit in
         the CLMA3 compare register H*/
      /* MISRA Violation: START Msg (2:3892)-4 */
      Clma_BaseAddress[MCU_THREE]->CMPH = Mcu_GpClockSetting->usCLMA3CMPH;
      /* Read back the Higher threshold value for frequency limit in
         the CLMA3 compare register H*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
        (&(Clma_BaseAddress[MCU_THREE]->CMPH),
           (uint16)(Mcu_GpClockSetting->usCLMA3CMPH), MCU_CMPH_WV_MASK,
                                                             MCU_INITCLOCK_SID)
      /* END Msg (2:3892)-4 */
      /* Set the Lower threshold value for frequency limit in
         the CLMA3 compare register L*/
      /* MISRA Violation: START Msg (2:3892)-4 */
      Clma_BaseAddress[MCU_THREE]->CMPL = Mcu_GpClockSetting->usCLMA3CMPL;
      /* Read back the Lower threshold value for frequency limit in
         the CLMA3 compare register L*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
        (&(Clma_BaseAddress[MCU_THREE]->CMPL),
          (uint16)(Mcu_GpClockSetting->usCLMA3CMPL), MCU_CMPL_WV_MASK,
                                                             MCU_INITCLOCK_SID)
      /* Write data to protected CLMA3 control register 0*/
      LucLoopcount = MCU_LOOPCOUNT;
      /* MISRA Violation: START Msg (2:4570)-1 */
      /* MISRA Violation: START Msg (4:4464)-5 */
      MCU_PROTECTEDWRITE8BIT ((Clma_BaseAddress[MCU_THREE]->CTL0),MCU_ONE,
        (Clma_BaseAddress[MCU_THREE]->PCMD),
                (Clma_BaseAddress[MCU_THREE]->PS), LucLoopcount, LenReturnValue)
      /* Read back the Control register*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
        (&(Clma_BaseAddress[MCU_THREE]->CTL0), MCU_ONE,
                                     MCU_CTL0_WV_MASK, MCU_INITCLOCK_SID)

      /* END Msg (4:4464)-5 */
      /* END Msg (2:4570)-1 */
      /* END Msg (2:3892)-4 */
    } /* Check if No Dem error occurred and Clock monitor CLMA3 is disabled*/
    else
    {
      /* No action */
    }
    #endif /* (STD_ON == MCU_CLMA3_OPERATION) */

    #if (STD_ON == MCU_CLMA4_OPERATION)
    #if (STD_ON == MCU_CLMA_SELFDIAGNOSTIC_TEST)
    if (E_OK == LenReturnValue)
    {
      if(MCU_TRUE == LpCLMASelfDiag->blClma4SelfDiagTest)
      {
        LenReturnValue = Mcu_ClmaSelfDiagnosticTest(MCU_FOUR);
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
    #endif /* (STD_ON == MCU_CLMA_SELFDIAGNOSTIC_TEST) */

    /* Check if No Dem error occurred and Clock monitor CLMA4 is disabled */
    if ((E_OK == LenReturnValue ) &&
       (MCU_ZERO == (uint8)((Clma_BaseAddress[MCU_FOUR]->CTL0) & MCU_ONE)))
    {
      /* Set the Higher threshold value for frequency limit in
         the CLMA4 compare register H*/
      /* MISRA Violation: START Msg (2:3892)-4 */
      Clma_BaseAddress[MCU_FOUR]->CMPH = Mcu_GpClockSetting->usCLMA4CMPH;
      /* Read back the Higher threshold value for frequency limit in
         the CLMA4 compare register H*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(Clma_BaseAddress[MCU_FOUR]->CMPH),
           (Mcu_GpClockSetting->usCLMA4CMPH), MCU_CMPH_WV_MASK,
                                                             MCU_INITCLOCK_SID)
      /* Set the Lower threshold value for frequency limit in
         the CLMA4 compare register L*/
      Clma_BaseAddress[MCU_FOUR]->CMPL = Mcu_GpClockSetting->usCLMA4CMPL;
      /* Read back the Lower threshold value for frequency limit in
         the CLMA4 compare register L*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(Clma_BaseAddress[MCU_FOUR]->CMPL),
        (Mcu_GpClockSetting->usCLMA4CMPL), MCU_CMPL_WV_MASK, MCU_INITCLOCK_SID)
      /* END Msg (2:3892)-4 */
      /* Write data to protected CLMA4 control register 0*/
      LucLoopcount = MCU_LOOPCOUNT;
      /* MISRA Violation: START Msg (2:4570)-1 */
      /* MISRA Violation: START Msg (4:4464)-5 */
      /* MISRA Violation: START Msg (2:3892)-4 */
      MCU_PROTECTEDWRITE8BIT ((Clma_BaseAddress[MCU_FOUR]->CTL0),MCU_ONE,
        (Clma_BaseAddress[MCU_FOUR]->PCMD),
                 (Clma_BaseAddress[MCU_FOUR]->PS), LucLoopcount, LenReturnValue)
      /* Read back the Control register*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(Clma_BaseAddress[MCU_FOUR]->CTL0),
                                MCU_ONE, MCU_CTL0_WV_MASK, MCU_INITCLOCK_SID)
      /* END Msg (2:3892)-4 */
      /* END Msg (4:4464)-5 */
      /* END Msg (2:4570)-1 */
    } /* Check if No Dem error occurred and Clock monitor CLMA4 is disabled*/
    else
    {
      /* No action */
    }
    #endif /* (STD_ON == MCU_CLMA4_OPERATION) */


  #if(STD_ON == MCU_GTM_SUPPORT)
  /* QAC Warning: START Msg (2:2814)-8  */
  /* Start Tag MCU_UT_008 */
  LucMaxCMUClocks = LpGTMCMUGlobalSetting->ucMaxCMUClocks;
  /* End Tag MCU_UT_008 */
  /* END Msg (2:2814)-8  */
  /* MISRA Violation: START Msg (2:3892)-4 */
  /* QAC Warning: START Msg (2:2814)-8  */
  GTMBaseAddress->GTMIRQMODE = (uint32)MCU_ZERO;
  /* END Msg (2:2814)-8  */
  /* END Msg (2:3892)-4 */

  MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(GTMBaseAddress->GTMIRQMODE),
  (uint32)MCU_ZERO, MCU_GTMIRQ_WV_MASK, MCU_INITCLOCK_SID)

  GTMBaseAddress->CMUGCLKNUM = LpGTMCMUGlobalSetting->ulCMUGlobalClockNumerator;

  /* Read back Global clock control numerator*/
  MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(GTMBaseAddress->CMUGCLKNUM),
    (uint32)(LpGTMCMUGlobalSetting->ulCMUGlobalClockNumerator),
                                     MCU_CMUGCLKNUM_WV_MASK, MCU_INITCLOCK_SID)
  GTMBaseAddress->CMUGCLKDEN =
                            LpGTMCMUGlobalSetting->ulCMUGlobalClockDenominator;
  /* Read back Global clock control denominator*/
  MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(GTMBaseAddress->CMUGCLKDEN),
    (uint32)(LpGTMCMUGlobalSetting->ulCMUGlobalClockDenominator),
                                     MCU_CMUGCLKDEN_WV_MASK, MCU_INITCLOCK_SID)

  for (LucCount = MCU_ZERO; LucCount < LucMaxCMUClocks; LucCount++)
  {
    /* QAC Warning: START Msg (2:2814)-8  */
    LucClockIndex = Mcu_GpGTMCMUClockSetting->ucCMUClockIndex;
    /* END Msg (2:2814)-8  */
    LucBitShift = LucClockIndex * MCU_TWO;
    switch(LucClockIndex)
    {
    case MCU_ZERO:
        GTMBaseAddress->CMUCLK0CTRL =
                        Mcu_GpGTMCMUClockSetting->ulCMUChannelClkSrcDivider;
        /* Read back Global clock control for clock source 0 */
        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(GTMBaseAddress->CMUCLK0CTRL),
           (uint32)(Mcu_GpGTMCMUClockSetting->ulCMUChannelClkSrcDivider),
                                    MCU_CMUCLKxCTRL_WV_MASK, MCU_INITCLOCK_SID)
        break;
    case MCU_ONE:
        GTMBaseAddress->CMUCLK1CTRL =
                        Mcu_GpGTMCMUClockSetting->ulCMUChannelClkSrcDivider;
        /* Read back Global clock control for clock source 1 */
        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(GTMBaseAddress->CMUCLK1CTRL),
           (uint32)(Mcu_GpGTMCMUClockSetting->ulCMUChannelClkSrcDivider),
                                    MCU_CMUCLKxCTRL_WV_MASK, MCU_INITCLOCK_SID)
        break;
    case MCU_TWO:
        GTMBaseAddress->CMUCLK2CTRL =
                       Mcu_GpGTMCMUClockSetting->ulCMUChannelClkSrcDivider;
        /* Read back Global clock control for clock source 2 */
        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(GTMBaseAddress->CMUCLK2CTRL),
           (uint32)(Mcu_GpGTMCMUClockSetting->ulCMUChannelClkSrcDivider),
                                    MCU_CMUCLKxCTRL_WV_MASK, MCU_INITCLOCK_SID)
        break;
    case MCU_THREE:
        GTMBaseAddress->CMUCLK3CTRL =
                        Mcu_GpGTMCMUClockSetting->ulCMUChannelClkSrcDivider;
        /* Read back Global clock control for clock source 3 */
        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(GTMBaseAddress->CMUCLK3CTRL),
           (uint32)(Mcu_GpGTMCMUClockSetting->ulCMUChannelClkSrcDivider),
                                    MCU_CMUCLKxCTRL_WV_MASK, MCU_INITCLOCK_SID)
        break;
    case MCU_FOUR:
        GTMBaseAddress->CMUCLK4CTRL =
                        Mcu_GpGTMCMUClockSetting->ulCMUChannelClkSrcDivider;
        /* Read back Global clock control for clock source 4 */
        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(GTMBaseAddress->CMUCLK4CTRL),
           (uint32)(Mcu_GpGTMCMUClockSetting->ulCMUChannelClkSrcDivider),
                                    MCU_CMUCLKxCTRL_WV_MASK, MCU_INITCLOCK_SID)
        break;
    case MCU_FIVE:
        GTMBaseAddress->CMUCLK5CTRL =
                        Mcu_GpGTMCMUClockSetting->ulCMUChannelClkSrcDivider;
        /* Read back Global clock control for clock source 5 */
        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(GTMBaseAddress->CMUCLK5CTRL),
           (uint32)(Mcu_GpGTMCMUClockSetting->ulCMUChannelClkSrcDivider),
                                   MCU_CMUCLKxCTRL_WV_MASK, MCU_INITCLOCK_SID)
        break;
    case MCU_SIX:
        GTMBaseAddress->CMUCLK6CTRL =
                        Mcu_GpGTMCMUClockSetting->ulCMUChannelClkSrcDivider;
        /* Read back Global clock control for clock source 6 */
        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(GTMBaseAddress->CMUCLK6CTRL),
          (uint32)(Mcu_GpGTMCMUClockSetting->ulCMUChannelClkSrcDivider),
                                   MCU_CMUCLKxCTRL_WV_MASK, MCU_INITCLOCK_SID)
        break;
    case MCU_SEVEN:
        GTMBaseAddress->CMUCLK7CTRL =
                       Mcu_GpGTMCMUClockSetting->ulCMUChannelClkSrcDivider;
        /* Read back Global clock control for clock source 7 */
        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(GTMBaseAddress->CMUCLK7CTRL),
          (uint32)(Mcu_GpGTMCMUClockSetting->ulCMUChannelClkSrcDivider),
                                   MCU_CMUCLKxCTRL_WV_MASK, MCU_INITCLOCK_SID)
        break;
    /* MISRA Violation: START Msg (2:2881)-6  */
    /* Start Tag MCU_UT_001 */
    default:
        break;
    /* End Tag MCU_UT_001 */
    /* END Msg (2:2881)-6  */
    /* MISRA Violation: START Msg (2:2016)-7  */
    }
    /* END Msg (2:2016)-7  */

    GTMBaseAddress->CMUCLKEN &= ~(MCU_CMU_MASK << LucBitShift);
    LulClkEnable = (LulClkEnable) | ((uint32)MCU_THREE <<LucBitShift);
    GTMBaseAddress->CMUCLKEN |= (MCU_CMUCLK_ENABLE << LucBitShift);
    MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(GTMBaseAddress->CMUCLKEN),
                   (uint32)LulClkEnable, MCU_CMUCLKEN_WV_MASK, MCU_INIT_SID)

    /* MISRA Violation: START Msg (4:0489)-15 */
    Mcu_GpGTMCMUClockSetting++;
    /* END Msg (4:0489)-15 */
  }
  #endif
  }
  #if (STD_ON == MCU_DEV_ERROR_DETECT)
  else
  {
    /* No action */
  }
  #endif
  return (LenReturnValue);
}
#endif /*#if (STD_ON == MCU_INIT_CLOCK)*/

#if ( STD_OFF == MCU_NO_PLL )
/*******************************************************************************
** Function Name      : Mcu_DistributePllClock
**
** Service ID         : 0x03
**
** Description        : This service activates the PLL clock to the MCU clock
**                      distribution.
**
** Sync/Async         : Synchronous.
**
** Reentrancy         : Non-Reentrant.
**
** Input Parameters   : None.
**
** InOut Parameters   : None.
**
** Output Parameters  : None.
**
** Return parameter   : void
**
** Preconditions      : MCU Driver component must be initialized
**
** Global Variables   : Mcu_GblDriverStatus.
**
**
** Function Invoked   : Mcu_GetPllStatus, Det_ReportError.
**
** Registers Used     : None.
**
*******************************************************************************/
/* Implements MCU_ESDD_UD_004,MCU_ESDD_UD_033 */
/* Implements MCU056,MCU122,MCU140,MCU156,MCU180_Conf,MCU205,MCU017,MCU122 */
/* Implements MCU141, MCU142, MCU166_Conf */
/* Implements EAAR_PN0034_FR_0049, EAAR_PN0034_FR_0064 */
FUNC(void, MCU_PUBLIC_CODE) Mcu_DistributePllClock (void)
{
  /* Implements MCU_ESDD_UD_036*/
  #if (STD_ON == MCU_DEV_ERROR_DETECT)
  VAR(Mcu_PllStatusType,TYPEDEF)                   LddPllLockStatus;
  /* Get the PLL status */
  LddPllLockStatus = Mcu_GetPllStatus();
  /* Report to DET, if module is not initialized */
  if (MCU_UNINITIALIZED == Mcu_GblDriverStatus)
  {
    /* Implements MCU125 */
    /* Report to DET */
    (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID,
                                   MCU_DISTRIBUTEPLLCLOCK_SID, MCU_E_UNINIT);

  }
  /* MISRA Violation: START Msg (4:2992)-11 */
  /* MISRA Violation: START Msg (4:2996)-12 */
  /* Get the PLL status and if PLL status is 'UNLOCKED', report to DET */
  else if (MCU_PLL_UNLOCKED == LddPllLockStatus)
  {
  /* END Msg (4:2996)-12 */
  /* END Msg (4:2992)-11 */
    /* Implements MCU_ESDD_UD_042 */
    /* Report to DET */
    /* MISRA Violation: START Msg (4:2880)-13 */
    (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID,
                           MCU_DISTRIBUTEPLLCLOCK_SID, MCU_E_PLL_NOT_LOCKED);
    /* END Msg (4:2880)-13 */
  }
  /* If no DET error, continue */
  else
  #endif /* MCU_DEV_ERROR_DETECT == STD_ON */
  {
    /* No action required */
  }
}
#endif /* ( STD_OFF == MCU_NO_PLL ) */

/*******************************************************************************
** Function Name      : Mcu_GetPllStatus
**
** Service ID         : 0x04
**
** Description        : This service provides the lock status of the PLL.
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Mcu_PllStatusType
**
** Preconditions      : MCU Driver component must be initialized.
**
** Global Variables   : Mcu_GblDriverStatus.
**
** Function Invoked   : Det_ReportError
**
** Registers Used     : None.
**
*******************************************************************************/
/* Implements MCU_ESDD_UD_005 */
/* Implements MCU132,MCU180_Conf,MCU008,MCU157,MCU206,MCU230,MCU017 */
/* Implements EAAR_PN0034_FR_0049, EAAR_PN0034_FR_0064 */
FUNC(Mcu_PllStatusType, MCU_PUBLIC_CODE) Mcu_GetPllStatus (void)
{
  VAR(Mcu_PllStatusType,TYPEDEF)                   LddPllLockStatus;
  /* Implements MCU_ESDD_UD_036*/
  #if (STD_ON == MCU_DEV_ERROR_DETECT)
  /* Report to DET, if module is not initialized */
  if (MCU_UNINITIALIZED == Mcu_GblDriverStatus)
  {
    /* Implements MCU125 */
    /* Report to DET */
    (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID,
                                           MCU_GETPLLSTATUS_SID, MCU_E_UNINIT);
    /* Set PLL status to undefined */
    LddPllLockStatus = MCU_PLL_STATUS_UNDEFINED;
  }
  else
  #endif /* MCU_DEV_ERROR_DETECT == STD_ON */
  {
    /* Implements MCU_ESDD_UD_033 */
    #if ( STD_ON == MCU_NO_PLL)
    /*Set the Pll Status as Undefined*/
    LddPllLockStatus = MCU_PLL_STATUS_UNDEFINED;
    #else
    /* Set PLL status to locked */
    LddPllLockStatus = MCU_PLL_LOCKED;
    #endif  /* ( STD_ON == MCU_NO_PLL) */
  } /* End of if (MCU_UNINITIALIZED == Mcu_GblDriverStatus) */
  /*Return the PLL Lock Status*/
  return(LddPllLockStatus);
}

/*******************************************************************************
** Function Name      : Mcu_GetResetReason
**
** Service ID         : 0x05
**
** Description        : The function reads the reset type from the hardware.
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Mcu_ResetType
**
** Preconditions      : MCU Driver component must be initialized
**
** Global Variables   : Mcu_GblDriverStatus,Mcu_GusLastResetReason
**
** Function Invoked   : Det_ReportError.
**
** Registers Used     : None.
**
*******************************************************************************/
/* Implements MCU_ESDD_UD_006, MCU186_Conf, EAAR_PN0079_FSR_0016 */
/* Implements MCU133, MCU158, MCU017, MCU052, EAAR_PN0079_FSR_0017 */
/* Implements EAAR_PN0079_FSR_0086 */
FUNC(Mcu_ResetType, MCU_PUBLIC_CODE)Mcu_GetResetReason (void)
{
  VAR(Mcu_ResetType,TYPEDEF)                     LddResetSource;
  /* Implements MCU_ESDD_UD_036*/
  #if (STD_ON == MCU_DEV_ERROR_DETECT)
  /* Report to DET, if module is not initialized */
  if (MCU_UNINITIALIZED == Mcu_GblDriverStatus)
  {
    /* Implements MCU125 */
    /* Report to DET */
    (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID,
                                        MCU_GETRESETREASON_SID, MCU_E_UNINIT);
    /* Set Reset status to undefined */
    LddResetSource = MCU_RESET_UNDEFINED;
  }
  else
  #endif /* MCU_DEV_ERROR_DETECT == STD_ON */
  {
    /* Assign the Saved Reset Reason from global variable */
    /* QAC Warning: START Msg (2:4342)-3 */
    LddResetSource = (Mcu_ResetType)Mcu_GusLastResetReason;
    /* END Msg (2:4342)-3 */
  }
  /*Return the Reset Reason*/
  return (LddResetSource);
}

/*******************************************************************************
** Function Name      : Mcu_GetResetRawValue
**
** Service ID         : 0x06
**
** Description        : The service return reset raw value from the hardware
**                      register
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Mcu_RawResetType
**
** Preconditions      : MCU Driver component must be initialized
**
** Global Variables   : Mcu_GblDriverStatus,Mcu_GusLastResetRawValue
**
** Function Invoked   : Det_ReportError
**
** Registers Used     : None.
**
*******************************************************************************/
/* Implements MCU_ESDD_UD_007 */
/* Implements MCU135,MCU006,MCU159,MCU017 */
FUNC(Mcu_RawResetType, MCU_PUBLIC_CODE) Mcu_GetResetRawValue (void)
{
  VAR(Mcu_RawResetType,AUTOMATIC)          LddResetRawValue;
  /* Implements MCU_ESDD_UD_036*/
  #if (STD_ON == MCU_DEV_ERROR_DETECT)
  /* Report to DET, if module is not initialized */
  if (MCU_UNINITIALIZED == Mcu_GblDriverStatus)
  {
    /* Implements MCU125 */
    /* Report to DET */
    (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID,
                                       MCU_GETRESETRAWVAULE_SID, MCU_E_UNINIT);
    /* Set RESET status to uninitialized */
    LddResetRawValue = MCU_RESET_UNINIT;
  }
  else
  #endif /* MCU_DEV_ERROR_DETECT == STD_ON */
  {
    /* Assign the Saved Reset Raw Value from global variable */
    LddResetRawValue = (Mcu_RawResetType)Mcu_GusLastResetRawValue;
  }
  /*Return the Last Reset Raw Value*/
  return(LddResetRawValue);
}/*End of Mcu_GetResetRawValue() */

/*******************************************************************************
** Function Name      : Mcu_PerformReset
**
** Service ID         : 0x07
**
** Description        : This service provides microcontroller reset by
**                      accessing the Software reset register.
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : None
**
** Preconditions      : MCU Driver component must be initialized
**
** Global Variables   : Mcu_GblDriverStatus
**
** Function Invoked   : Det_ReportError.
**
** Registers Used     : SWSRESA0,SWARESA0.
**
*******************************************************************************/
/* Implements MCU_ESDD_UD_008, EAAR_PN0079_FSR_0013, EAAR_PN0079_FSR_0014 */
/* Implements MCU_ESDD_UD_072,MCU_ESDD_UD_028,MCU_ESDD_UD_030*/
/* Implements MCU145,EAAR_PN0079_FSR_0108,MCU143,MCU144,MCU146,MCU160 */
/* Implements MCU167_Conf, MCU017, MCU055 */
#if (STD_ON == MCU_PERFORM_RESET_API)
FUNC (void, MCU_PUBLIC_CODE) Mcu_PerformReset (void)
{
  #if (STD_OFF == MCU_SW_RESET_CALL_API)
  VAR(uint8,AUTOMATIC)                                LucPerformReset;
  #endif /* MCU_SW_RESET_CALL_API == STD_OFF */
  /* Implements MCU_ESDD_UD_036*/
  #if (STD_ON == MCU_DEV_ERROR_DETECT)
  /* Report to DET, if module is not initialized */
  if (MCU_UNINITIALIZED == Mcu_GblDriverStatus)
  {
    /* Implements MCU125,MCU145 */
    /* Report to DET */
    (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID,
                                         MCU_PERFORMRESET_SID, MCU_E_UNINIT);
  }/* End of if (MCU_UNINITIALIZED == Mcu_GblDriverStatus) */
  else
  #endif /* MCU_DEV_ERROR_DETECT == STD_ON */
  {
    /* Implements MCU_ESDD_UD_030 */
    #if (STD_ON == MCU_SW_RESET_CALL_API)
    /*Call the External function */
    MCU_RESET_CALLOUT();
    #else
    /* QAC Warning: START Msg (2:2814)-8  */
    LucPerformReset = (uint8)Mcu_GpConfigPtr->ucSWRstTrigger;
    /* END Msg (2:2814)-8  */
    switch(LucPerformReset)
    {
    /*Generate the S/W System Reset*/
    /* MISRA Violation: START Msg (4:0303)-1 */
    case MCU_SOFTWARE_SYS_RESET :
        MCU_SWSRESA0 = MCU_ONE;
        break;
    /*Generate the S/W Application Reset*/
    case MCU_SOFTWARE_APPL_RESET :
        MCU_SWARESA0 = MCU_ONE;
        break;
    /* END Msg (4:0303)-1 */
    /* MISRA Violation: START Msg (2:2881)-6  */
    /* Start Tag MCU_UT_001 */
    default:
        break;
    /* End Tag MCU_UT_001 */
    /* END Msg (2:2881)-6  */
    /* MISRA Violation: START Msg (2:2016)-7  */
    }
    /* END Msg (2:2016)-7  */
    #endif /* (MCU_SW_RESET_CALL_API == STD_ON) */
  }
}/* End of Mcu_PerformReset() */
#endif /* MCU_PERFORMRESET_API == STD_ON */

/*******************************************************************************
** Function Name      : Mcu_SetMode
**
** Service ID         : 0x08
**
** Description        : This service activates the MCU power modes.
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : McuMode - Id for power mode setting
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : None
**
** Preconditions      : MCU Driver component must be initialized
**
** Global Variables   : Mcu_GblDriverStatus,Mcu_GpModeSetting
**
** Function Invoked   : Det_ReportError, Mcu_WakeupConfigure,
**                      MCU_ENTER_CRITICAL_SECTION, MCU_EXIT_CRITICAL_SECTION
**
** Registers Used     : EIC0,EIC1,EIC2,EIC3, EIC8,EIC9,EIC32,EIC33,EIC34,EIC35,
**                      EIC36,EIC38,EIC39,EIC41,EIC42,EIC53,EIC54,EIC61,EIC62,
**                      EIC83,EIC87,EIC97,EIC111,EIC114,EIC128,EIC129,EIC130,
**                      EIC131,EIC132,EIC141,EIC142,EIC174,EIC177,EIC184,EIC186,
**                      EIC191,EIC209,EIC211,EIC240,EIC241,EIC242,EIC243,
**                      EIC244,EIC245,IMR0,IMR1,IMR2,IMR3,IMR4,IMR5,IMR6,IMR7,
**                      SWLRESS3,MSR_LM3,SWLRESS4,MSR_LM4,MSR_LM5,MSR_LM6,
**                      MSR_LM7,MSR_LM8,MSR_LM10,MSR_LM11,MSR_LM12
*******************************************************************************/
/* Implements MCU_ESDD_UD_009 */
/* Implements MCU_ESDD_UD_072,MCU_ESDD_UD_039 */
/* Implements MCU161,MCU147,MCU164,MCU049,MCU017,MCU020,MCU123_Conf */
/* Implements EAAR_PN0034_FR_0030, EAAR_PN0034_FSR_0001, EAAR_PN0034_FSR_0002 */
/* MISRA Violation: START Msg (2:3227)-5  */
FUNC(void, MCU_PUBLIC_CODE) Mcu_SetMode (Mcu_ModeType McuMode)
/* END Msg (2:3227)-5  */
{
  P2CONST(Mcu_ModeSetting, MCU_CONST, MCU_CONFIG_CONST)   LpModeSetting;
  VAR(uint16,AUTOMATIC)                                   LusStopModeEnable;
  VAR(uint16,AUTOMATIC)                                   LusWakeupEnable;
  VAR(uint8,AUTOMATIC)                                    LucMode;
  VAR(uint8,AUTOMATIC)                                    LucLoopcount;
  VAR(Std_ReturnType,TYPEDEF)                             LenReturnValue;
  /* Initialize to default value */
  LenReturnValue = E_OK;

  /* Implements MCU_ESDD_UD_036*/
  #if (STD_ON == MCU_DEV_ERROR_DETECT)
  /* Report to DET, if the component is not initialized */
  if (MCU_UNINITIALIZED == Mcu_GblDriverStatus)
  {
    /* Implements MCU125,MCU148 */
    /* Report to DET */
    (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID,
                                      MCU_SETMODE_SID, MCU_E_UNINIT);
    LenReturnValue = E_NOT_OK;
  }
  /* QAC Warning: START Msg (2:2814)-8  */
  else if (McuMode > Mcu_GpConfigPtr->ucMaxModeSetting)
  /* END Msg (2:2814)-8  */
  {
    /* Report to DET, if Mode setting Id is invalid */
    (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID,
                     MCU_SETMODE_SID, MCU_E_PARAM_MODE);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }

  /* Check if any development error occurred */
  if (E_OK == LenReturnValue )
  #endif /* MCU_DEV_ERROR_DETECT == STD_ON */
  {
    /* Store the pointer to the configured mode structure  */
    /* MISRA Violation: START Msg (4:0316)-3 */
    /* MISRA Violation: START Msg (4:0488)-2 */
    /* QAC Warning: START Msg (2:2814)-8  */
    Mcu_GpModeSetting =
    (P2CONST(Mcu_ModeSetting, MCU_VAR, MCU_CONFIG_CONST))
                   (Mcu_GpConfigPtr->pModeSetting) + (McuMode);
    /* END Msg (2:2814)-8  */
    /*END Msg (4:0488)-2 */
    /*END Msg (4:0316)-3 */
    /*Assign mode setting pointer to local pointer*/
    LpModeSetting = Mcu_GpModeSetting;
    /* Get the configured mode */
    /* QAC Warning: START Msg (2:2814)-8  */
    LucMode = LpModeSetting->ucModeType;
    /* END Msg (2:2814)-8  */
    switch(LucMode)
    {
    /*If the selected mode is Halt Mode*/
    case MCU_HALT_MODE:
        /*Mask all the wake up events which are not used and
          release the mask which are  used*/
        Mcu_WakeupConfigure();
        ASM_HALT();
        break;
    /*If the selected mode is module standby Mode*/
    case MCU_MODULE_STANDBY_MODE:
        /*Get the configured stop mode enable value*/
        LusStopModeEnable = LpModeSetting->usStopModeEnable;
        /*Check if Stop mode trigger is enabled in configuration
          for MCAN Domain */
        if(MCU_MCAN_STOP_TRIG_EN ==
                           (uint16)( LusStopModeEnable & MCU_MCAN_STOP_TRIG_EN))
        {
          /* QAC Warning: START Msg(2:3416)-12 */
          /*Check if Reset execution is not being processed in MCAN domain */
          if((uint32)MCU_ZERO == MCU_SWLRESS3)
          {
            /* END Msg(2:3416)-12 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_ENTER_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Stop the output clock of MCAN */
            MCU_MCAN_MSR_LM3 = (uint32)MCU_TARGET_STOP_TRIGGER;
            MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_MCAN_MSR_LM3),
                (uint32)MCU_TARGET_STOP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                               MCU_SETMODE_SID)

            /* Implements MCU_ESDD_UD_031 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_EXIT_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Assign wait time to LucLoopcount*/
            LucLoopcount = MCU_MODULE_STANDBY_WAIT_TIME;
            do
            {
              /*Decrement LucLoopcount */
              LucLoopcount --;
              /* Start Tag MCU_UT_002 */
            }while (((uint32)MCU_TARGET_STOP_MODE_STATUS !=
            (MCU_MCAN_MSR_LM3 & (uint32)MCU_TARGET_STOP_MODE_STATUS)) &&
            (LucLoopcount > MCU_ZERO));
            /* End Tag MCU_UT_002 */
            /*Check if target clock domain is not stopped*/
            /* Start Tag MCU_UT_002 */
            if((uint32)MCU_TARGET_STOP_MODE_STATUS !=
                 (MCU_MCAN_MSR_LM3 & (uint32)MCU_TARGET_STOP_MODE_STATUS))
                /* End Tag MCU_UT_002 */
            {
              /* Module Standby mode failure and report production error */
              Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                     DEM_EVENT_STATUS_FAILED);
              /* Set the return value to  E_NOT_OK */
              LenReturnValue = E_NOT_OK;
            }
            else
            {

            }
          }
          else
          {
            /* No action */
          }
        }
        else
        {
          /* No action */
        }

        /*Check if Stop mode trigger is enabled in configuration
          for FR Domain */
        if((MCU_FR_STOP_TRIG_EN ==
                      (uint16)( LusStopModeEnable & MCU_FR_STOP_TRIG_EN))
                                &&(E_OK == LenReturnValue ))
        {
          /* QAC Warning: START Msg(2:3416)-12 */
          /* Check if Reset execution is not being processed in FR domain */
          if((uint32)MCU_ZERO == MCU_SWLRESS4)
          {
            /* END Msg(2:3416)-12 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_ENTER_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Stop the output clock of FR */
            MCU_FR_MSR_LM4 = (uint32)MCU_TARGET_STOP_TRIGGER;
            /* Read back clock of FR register */
            MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_FR_MSR_LM4),
             (uint32)MCU_TARGET_STOP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                               MCU_SETMODE_SID)

            /* Implements MCU_ESDD_UD_031 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_EXIT_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Assign wait time to LucLoopcount*/
            LucLoopcount = MCU_MODULE_STANDBY_WAIT_TIME;
            do
            {
              /*Decrement LucLoopcount */
              LucLoopcount --;
              /* Start Tag MCU_UT_002 */
            }while (((uint32)MCU_TARGET_STOP_MODE_STATUS !=
            (MCU_FR_MSR_LM4 & (uint32)MCU_TARGET_STOP_MODE_STATUS)) &&
            (LucLoopcount > MCU_ZERO));
            /* End Tag MCU_UT_002 */
            /*Check if target clock domain is not stopped*/
            /* Start Tag MCU_UT_002 */
            if((uint32)MCU_TARGET_STOP_MODE_STATUS !=
                 (MCU_FR_MSR_LM4 & (uint32)MCU_TARGET_STOP_MODE_STATUS))
                /* End Tag MCU_UT_002 */
            {
              /* Module standby mode failure and report production error */
              Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                     DEM_EVENT_STATUS_FAILED);
              /* Set the return value to  E_NOT_OK */
              LenReturnValue = E_NOT_OK;
            }
            else
            {

            }
          }
          else
          {
            /* No action */
          }
        }
        else
        {
          /* No action */
        }
        /*Check if Stop mode trigger is enabled in configuration
          for GTM Domain */
        if((MCU_GTM_STOP_TRIG_ENR ==
               (uint16)( LusStopModeEnable & MCU_GTM_STOP_TRIG_ENR))
                                && (E_OK == LenReturnValue ))
        {
          /* QAC Warning: START Msg(2:3416)-12 */
          /* Check if Reset execution is not being processed in GTM domain */
          if((uint32)MCU_ZERO == MCU_SWLRESS5)
          {
            /* END Msg(2:3416)-12 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_ENTER_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Stop the output clock of GTM */
            MCU_GTM_MSR_LM5 = (uint32)MCU_TARGET_STOP_TRIGGER;
            /* Read back clock of GTM register */
            MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_GTM_MSR_LM5),
              (uint32)MCU_TARGET_STOP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                              MCU_SETMODE_SID)

            /* Implements MCU_ESDD_UD_031 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_EXIT_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Assign wait time to LucLoopcount*/
            LucLoopcount = MCU_MODULE_STANDBY_WAIT_TIME;
            do
            {
              /*Decrement LucLoopcount */
              LucLoopcount --;
              /* Start Tag MCU_UT_002 */
            }while (((uint32)MCU_TARGET_STOP_MODE_STATUS !=
            (MCU_GTM_MSR_LM5 & (uint32)MCU_TARGET_STOP_MODE_STATUS)) &&
            (LucLoopcount > MCU_ZERO));
            /* End Tag MCU_UT_002 */
            /*Check if target clock domain is not stopped*/
            /* Start Tag MCU_UT_002 */
            if((uint32)MCU_TARGET_STOP_MODE_STATUS !=
                 (MCU_GTM_MSR_LM5 & (uint32)MCU_TARGET_STOP_MODE_STATUS))
                /* End Tag MCU_UT_002 */
            {
              /* Module standby mode failure and report production error */
              Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                     DEM_EVENT_STATUS_FAILED);
              /* Set the return value to  E_NOT_OK */
              LenReturnValue = E_NOT_OK;
            }
            else
            {

            }
          }
          else
          {
            /* No action */
          }
        }
        else
        {
          /* No action */
        }
        /*Check if Stop mode trigger is enabled in configuration
          for Ethernet Domain */
        if((MCU_ETH_STOP_TRIG_EN ==
               (uint16)( LusStopModeEnable & MCU_ETH_STOP_TRIG_EN))
                                &&(E_OK == LenReturnValue ))
        {
          /* QAC Warning: START Msg(2:3416)-12 */
          /*Check if Reset execution is not being processed in Ethernet
            Domain*/
          if((uint32)MCU_ZERO == MCU_SWLRESS6)
          {
            /* END Msg(2:3416)-12 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_ENTER_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

           /*Stop the output clock of Ethernet */
            MCU_ETH_MSR_LM6 = (uint32)MCU_TARGET_STOP_TRIGGER;
            /* Read back clock of Ethernet register */
            MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_ETH_MSR_LM6),
                      (uint32)MCU_TARGET_STOP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                               MCU_SETMODE_SID)

            /* Implements MCU_ESDD_UD_031 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_EXIT_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Assign wait time to LucLoopcount*/
            LucLoopcount = MCU_MODULE_STANDBY_WAIT_TIME;
            do
            {
              /*Decrement LucLoopcount */
              LucLoopcount --;
              /* Start Tag MCU_UT_002 */
            }while (((uint32)MCU_TARGET_STOP_MODE_STATUS !=
            (MCU_ETH_MSR_LM6 & (uint32)MCU_TARGET_STOP_MODE_STATUS)) &&
            (LucLoopcount > MCU_ZERO));
            /* End Tag MCU_UT_002 */
            /*Check if target clock domain is not stopped*/
            /* Start Tag MCU_UT_002 */
            if((uint32)MCU_TARGET_STOP_MODE_STATUS !=
                 (MCU_ETH_MSR_LM6 & (uint32)MCU_TARGET_STOP_MODE_STATUS))
                /* End Tag MCU_UT_002 */
            {
              /* Module standby mode failure and report production error */
              Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                     DEM_EVENT_STATUS_FAILED);
              /* Set the return value to  E_NOT_OK */
              LenReturnValue = E_NOT_OK;
            }
            else
            {

            }
          }
          else
          {
            /* No action */
          }
        }
        else
        {
          /* No action */
        }
        /*Check if Stop mode trigger is enabled in configuration
          for RSENT Domain */
        if((MCU_RSENT_STOP_TRIG_EN ==
               (uint16)( LusStopModeEnable & MCU_RSENT_STOP_TRIG_EN))
                                &&(E_OK == LenReturnValue ))
        {
          /* QAC Warning: START Msg(2:3416)-12 */
          /*Check if Reset execution is not being processed in RSENT domain */
          if((uint32)MCU_ZERO == MCU_SWLRESS7)
          {
            /* END Msg(2:3416)-12 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_ENTER_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Stop the output clock of RSENT */
            MCU_RESNT_MSR_LM7 = (uint32)MCU_TARGET_STOP_TRIGGER;
            /* Read back clock of RSENT register */
            MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_RESNT_MSR_LM7),
                       (uint32)MCU_TARGET_STOP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                               MCU_SETMODE_SID)

            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_EXIT_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Assign wait time to LucLoopcount*/
            LucLoopcount = MCU_MODULE_STANDBY_WAIT_TIME;
            do
            {
              /*Decrement LucLoopcount */
              LucLoopcount --;
              /* Start Tag MCU_UT_002 */
            }while (((uint32)MCU_TARGET_STOP_MODE_STATUS !=
            (MCU_RESNT_MSR_LM7 & (uint32)MCU_TARGET_STOP_MODE_STATUS)) &&
            (LucLoopcount > MCU_ZERO));
            /* End Tag MCU_UT_002 */
            /*Check if target clock domain is not stopped*/
            /* Start Tag MCU_UT_002 */
            if((uint32)MCU_TARGET_STOP_MODE_STATUS !=
                 (MCU_RESNT_MSR_LM7 & (uint32)MCU_TARGET_STOP_MODE_STATUS))
                /* End Tag MCU_UT_002 */
            {
              /* Module standby mode failure and report production error */
              Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                  DEM_EVENT_STATUS_FAILED);
              /* Set the return value to  E_NOT_OK */
              LenReturnValue = E_NOT_OK;
            }
            else
            {

            }
          }
          else
          {
            /* No action */
          }
        }
        else
        {
          /* No action */
        }
        /*Check if Stop mode trigger is enabled in configuration
          for USRT Domain */
        if((MCU_USRT_STOP_TRIG_EN ==
              (uint16) ( LusStopModeEnable & MCU_USRT_STOP_TRIG_EN))
                                &&(E_OK == LenReturnValue ))
        {
          /* QAC Warning: START Msg(2:3416)-12 */
          /*Check if Reset execution is not being processed in USRT domain */
          if((uint32)MCU_ZERO == MCU_SWLRESS8)
          {
            /* END Msg(2:3416)-12 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_ENTER_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Stop the output clock of USRT */
            MCU_USRT_MSR_LM8 = (uint32)MCU_TARGET_STOP_TRIGGER;
            /* Read back clock of USRT register */
            MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_USRT_MSR_LM8),
                       (uint32)MCU_TARGET_STOP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                               MCU_SETMODE_SID)

            /* Implements MCU_ESDD_UD_031 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_EXIT_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Assign wait time to LucLoopcount*/
            LucLoopcount = MCU_MODULE_STANDBY_WAIT_TIME;
            do
            {
              /*Decrement LucLoopcount */
              LucLoopcount --;
              /* Start Tag MCU_UT_002 */
            }while (((uint32)MCU_TARGET_STOP_MODE_STATUS !=
            (MCU_USRT_MSR_LM8 & (uint32)MCU_TARGET_STOP_MODE_STATUS)) &&
            (LucLoopcount > MCU_ZERO));
            /* End Tag MCU_UT_002 */
            /*Check if target clock domain is not stopped*/
            /* Start Tag MCU_UT_002 */
            if((uint32)MCU_TARGET_STOP_MODE_STATUS !=
                 (MCU_USRT_MSR_LM8 & (uint32)MCU_TARGET_STOP_MODE_STATUS))
                /* End Tag MCU_UT_002 */
            {
              /* Module standby mode failure and report production error */
              Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                     DEM_EVENT_STATUS_FAILED);
              /* Set the return value to  E_NOT_OK */
              LenReturnValue = E_NOT_OK;
            }
            else
            {

            }
          }
          else
          {
            /* No action */
          }
        }
        else
        {
          /* No action */
        }
        /*Check if Stop mode trigger is enabled in configuration
          for CSIH Domain */
        if((MCU_CSIH_STOP_TRIG_EN ==
               (uint16)( LusStopModeEnable & MCU_CSIH_STOP_TRIG_EN))
                                &&(E_OK == LenReturnValue ))
        {
          /* QAC Warning: START Msg(2:3416)-12 */
          /*Check if Reset execution is not being processed in CSIH domain */
          if((uint32)MCU_ZERO == MCU_SWLRESS10)
          {
            /* END Msg(2:3416)-12 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_ENTER_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Stop the output clock of CSIH */
            MCU_CSIH_MSR_LM10 = (uint32)MCU_TARGET_STOP_TRIGGER;
            /* Read back clock of CSIH register */
            MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_CSIH_MSR_LM10),
                  (uint32)MCU_TARGET_STOP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                               MCU_SETMODE_SID)

            /* Implements MCU_ESDD_UD_031 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_EXIT_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Assign wait time to LucLoopcount*/
            LucLoopcount = MCU_MODULE_STANDBY_WAIT_TIME;
            do
            {
              /*Decrement LucLoopcount */
              LucLoopcount --;
              /* Start Tag MCU_UT_002 */
            }while (((uint32)MCU_TARGET_STOP_MODE_STATUS !=
            (MCU_CSIH_MSR_LM10 & (uint32)MCU_TARGET_STOP_MODE_STATUS)) &&
            (LucLoopcount > MCU_ZERO));
            /* End Tag MCU_UT_002 */
            /*Check if target clock domain is not stopped*/
            /* Start Tag MCU_UT_002 */
            if((uint32)MCU_TARGET_STOP_MODE_STATUS !=
                 (MCU_CSIH_MSR_LM10 & (uint32)MCU_TARGET_STOP_MODE_STATUS))
                /* End Tag MCU_UT_002 */
            {
              /* Module Standby mode failure and report production error */
              Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                     DEM_EVENT_STATUS_FAILED);
              /* Set the return value to  E_NOT_OK */
              LenReturnValue = E_NOT_OK;
            }
            else
            {

            }
          }
          else
          {
            /* No action */
          }
        }
        else
        {
          /* No action */
        }
         /*Check if Stop mode trigger is enabled in configuration
          for RLIN3 Domain */
        if((MCU_RLIN3_STOP_TRIG_EN ==
                         (uint16)( LusStopModeEnable & MCU_RLIN3_STOP_TRIG_EN))
                                                   &&(E_OK == LenReturnValue ))
        {
          /* QAC Warning: START Msg(2:3416)-12 */
          /*Check if Reset execution is not being processed in RLIN3 domain */
          if((uint32)MCU_ZERO == MCU_SWLRESS11)
          {
            /* END Msg(2:3416)-12 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_ENTER_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Stop the output clock of RLIN3 */
            MCU_RLIN3_MSR_LM11 = (uint32)MCU_TARGET_STOP_TRIGGER;
            /* Read back clock of RLIN3 register */
            MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_RLIN3_MSR_LM11),
                       (uint32)MCU_TARGET_STOP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                              MCU_SETMODE_SID)

            /* Implements MCU_ESDD_UD_031 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_EXIT_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Assign wait time to LucLoopcount*/
            LucLoopcount = MCU_MODULE_STANDBY_WAIT_TIME;
            do
            {
              /*Decrement LucLoopcount */
              LucLoopcount --;
              /* Start Tag MCU_UT_002 */
            }while (((uint32)MCU_TARGET_STOP_MODE_STATUS !=
            (MCU_RLIN3_MSR_LM11 & (uint32)MCU_TARGET_STOP_MODE_STATUS)) &&
            (LucLoopcount > MCU_ZERO));
            /* End Tag MCU_UT_002 */
            /*Check if target clock domain is not stopped*/
            /* Start Tag MCU_UT_002 */
            if((uint32)MCU_TARGET_STOP_MODE_STATUS !=
                 (MCU_RLIN3_MSR_LM11 & (uint32)MCU_TARGET_STOP_MODE_STATUS))
                /* End Tag MCU_UT_002 */
            {
              /* Module standby mode failure and report production error */
              Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                  DEM_EVENT_STATUS_FAILED);
              /* Set the return value to  E_NOT_OK */
              LenReturnValue = E_NOT_OK;
            }
            else
            {

            }
          }
          else
          {
            /* No action */
          }
        }
        else
        {
          /* No action */
        }
        /*Check if Stop mode trigger is enabled in configuration
          for ADC Domain */
        if((MCU_ADC_STOP_TRIG_EN ==
               (uint16)( LusStopModeEnable & MCU_ADC_STOP_TRIG_EN))
                                &&(E_OK == LenReturnValue ))
        {
          /* QAC Warning: START Msg(2:3416)-12 */
          /*Check if Reset execution is not being processed in ADC domain */
          if((uint32)MCU_ZERO == MCU_SWLRESS12)
          {
            /* END Msg(2:3416)-12 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_ENTER_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Stop the output clock of ADC */
            MCU_ADC_MSR_LM12 = (uint32)MCU_TARGET_STOP_TRIGGER;
            /* Read back clock of ADC register */
            MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_ADC_MSR_LM12),
                       (uint32)MCU_TARGET_STOP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                               MCU_SETMODE_SID)

            /* Implements MCU_ESDD_UD_031 */
            #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
            MCU_EXIT_CRITICAL_SECTION(MCU_PWR_MODE_PSC_PROTECTION);
            #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

            /*Assign wait time to LucLoopcount*/
            LucLoopcount = MCU_MODULE_STANDBY_WAIT_TIME;
            do
            {
              /*Decrement LucLoopcount */
              LucLoopcount --;
              /* Start Tag MCU_UT_002 */
            }while (((uint32)MCU_TARGET_STOP_MODE_STATUS !=
            (MCU_ADC_MSR_LM12 & (uint32)MCU_TARGET_STOP_MODE_STATUS)) &&
            (LucLoopcount > MCU_ZERO));
            /* End Tag MCU_UT_002 */
            /*Check if target clock domain is not stopped*/
            /* Start Tag MCU_UT_002 */
            if((uint32)MCU_TARGET_STOP_MODE_STATUS !=
                 (MCU_ADC_MSR_LM12 & (uint32)MCU_TARGET_STOP_MODE_STATUS))
                /* End Tag MCU_UT_002 */
            {
              /* Module standby mode failure and report production error */
              Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                  DEM_EVENT_STATUS_FAILED);
              /* Set the return value to  E_NOT_OK */
              LenReturnValue = E_NOT_OK;
            }
            else
            {

            }
          }
          else
          {
            /* No action */
          }
        }
        else
        {
          /* No action */
        }
        /*Mask all the events which are not used and release the mask which
      are used*/
        if(E_OK == LenReturnValue )
        {
          Mcu_WakeupConfigure();
          ASM_HALT();
        }
        else
        {
          /* No action */
        }
        /*Get the configured wakeup enable value*/
        LusWakeupEnable = LpModeSetting->usWakeupEnable;

        /*Check if wakeup up mode trigger is enabled in configuration
          for MCAN Domain */
        if((MCU_MCAN_WAKEUP_TRIG_EN ==
                         (uint16)( LusWakeupEnable & MCU_MCAN_WAKEUP_TRIG_EN))
                         &&(E_OK == LenReturnValue ))
        {
          /* QAC Warning: START Msg(2:3416)-12 */
          /*Check if Reset execution is not being processed in MCAN domain */
          if((uint32)MCU_ZERO == MCU_SWLRESS3)
          {
            /* END Msg(2:3416)-12 */
            /*Enable the output clock of MCAN */
            MCU_MCAN_MSR_LM3 = (uint32)MCU_TARGET_WAKEUP_TRIGGER;
            /* Read back clock of MCAN register */
            MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_MCAN_MSR_LM3),
                 (uint32)MCU_TARGET_WAKEUP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                               MCU_SETMODE_SID)
            /*Assign wait time to LucLoopcount*/
            LucLoopcount = MCU_WAKEUP_WAIT_TIME;
            do
            {
              /*Decrement LucLoopcount */
              LucLoopcount --;
              /* Start Tag MCU_UT_002 */
            }while (((uint32)MCU_TARGET_WAKEUP_STATUS !=
                    (MCU_MCAN_MSR_LM3 & (uint32)MCU_ONE)) &&
                    (LucLoopcount > MCU_ZERO));
            /* End Tag MCU_UT_002 */
            /*Check if target clock domain is enabled*/
            /* Start Tag MCU_UT_002 */
            if((uint32)MCU_TARGET_WAKEUP_STATUS !=
              (MCU_MCAN_MSR_LM3 & (uint32)MCU_ONE))
                /* End Tag MCU_UT_002 */
            {
              /* Module standby mode failure and report production error */
              Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                     DEM_EVENT_STATUS_FAILED);
              /* Set the return value to  E_NOT_OK */
              LenReturnValue = E_NOT_OK;
            }
            else
            {

            }
          }
          else
          {
            /* No action */
          }
        }
        else
        {
          /* No action */
        }
          /*Check if wakeup up mode trigger is enabled in configuration
          for FR Domain */
        if((MCU_FR_WAKEUP_TRIG_EN ==
               (uint16)(LusWakeupEnable & MCU_FR_WAKEUP_TRIG_EN))
                                   &&(E_OK == LenReturnValue ))
        {
          /* QAC Warning: START Msg(2:3416)-12 */
          /*Check if Reset execution is not being processed in FR domain */
          if((uint32)MCU_ZERO == MCU_SWLRESS4)
          {
            /* END Msg(2:3416)-12 */
            /*Enable the output clock of FR */
            MCU_FR_MSR_LM4 = (uint32)MCU_TARGET_WAKEUP_TRIGGER;
            /* Read back clock of FR register */
            MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_FR_MSR_LM4),
                     (uint32)MCU_TARGET_WAKEUP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                               MCU_SETMODE_SID)
            /*Assign wait time to LucLoopcount*/
            LucLoopcount = MCU_WAKEUP_WAIT_TIME;
            do
            {
              /*Decrement LucLoopcount */
              LucLoopcount --;
              /* Start Tag MCU_UT_002 */
            }while (((uint32)MCU_TARGET_WAKEUP_STATUS !=
                    (MCU_FR_MSR_LM4 & (uint32)MCU_ONE)) &&
                    (LucLoopcount > MCU_ZERO));
            /* End Tag MCU_UT_002 */
            /*Check if target clock domain is enabled*/
            /* Start Tag MCU_UT_002 */
            if((uint32)MCU_TARGET_WAKEUP_STATUS !=
              (MCU_FR_MSR_LM4 & (uint32)MCU_ONE))
            /* End Tag MCU_UT_002 */
            {
              /* Module standby mode failure and report production error */
              Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                DEM_EVENT_STATUS_FAILED);
              /* Set the return value to  E_NOT_OK */
              LenReturnValue = E_NOT_OK;
            }
            else
            {
               /* No action */
            }
          }
          else
          {
            /* No action */
          }
        }
        else
        {
          /* No action */
        }

        /*Check if wakeup up mode trigger is enabled in configuration
          for GTM Domain */
        if((MCU_GTM_WAKEUP_TRIG_ENR ==
             (uint16)( LusWakeupEnable & MCU_GTM_WAKEUP_TRIG_ENR))
                                   &&(E_OK == LenReturnValue ))
        {
          /* QAC Warning: START Msg(2:3416)-12 */
          /*Check if Reset execution is not being processed in GTM domain */
          if((uint32)MCU_ZERO == MCU_SWLRESS5)
          {
            /* END Msg(2:3416)-12 */
            /*Enable the output clock of GTM */
            MCU_GTM_MSR_LM5 = (uint32)MCU_TARGET_WAKEUP_TRIGGER;
            /* Read back clock of GTM register */
            MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_GTM_MSR_LM5),
                       (uint32)MCU_TARGET_WAKEUP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                               MCU_SETMODE_SID)
            /*Assign wait time to LucLoopcount*/
            LucLoopcount = MCU_WAKEUP_WAIT_TIME;
            do
            {
              /*Decrement LucLoopcount */
              LucLoopcount --;
              /* Start Tag MCU_UT_002 */
            }while (((uint32)MCU_TARGET_WAKEUP_STATUS !=
                    (MCU_GTM_MSR_LM5 & (uint32)MCU_ONE)) &&
                    (LucLoopcount > MCU_ZERO));
            /* End Tag MCU_UT_002 */
            /*Check if target clock domain is enabled*/
            /* Start Tag MCU_UT_002 */
            if((uint32)MCU_TARGET_WAKEUP_STATUS !=
              (MCU_GTM_MSR_LM5 & (uint32)MCU_ONE))
                /* End Tag MCU_UT_002 */
            {
              /* Module standby mode failure and report production error */
              Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                DEM_EVENT_STATUS_FAILED);
              /* Set the return value to  E_NOT_OK */
              LenReturnValue = E_NOT_OK;
            }
            else
            {

            }
          }
          else
          {
            /* No action */
          }
        }
        else
        {
          /* No action */
        }

        /*Check if wakeup up mode trigger is enabled in configuration
          for Ethernet Domain */
        if((MCU_ETH_WAKEUP_TRIG_EN ==
             (uint16)( LusWakeupEnable & MCU_ETH_WAKEUP_TRIG_EN))
                                   &&(E_OK == LenReturnValue ))
        {
          /* QAC Warning: START Msg(2:3416)-12 */
          /*Check if Reset execution is not being processed in Ethernet
            domain*/
          if((uint32)MCU_ZERO == MCU_SWLRESS6)
          {
            /* END Msg(2:3416)-12 */
            /*Enable the output clock of Ethernet */
            MCU_ETH_MSR_LM6 = (uint32)MCU_TARGET_WAKEUP_TRIGGER;
            /* Read back clock of Ethernet register */
            MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_ETH_MSR_LM6),
                     (uint32)MCU_TARGET_WAKEUP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                               MCU_SETMODE_SID)
            /*Assign wait time to LucLoopcount*/
            LucLoopcount = MCU_WAKEUP_WAIT_TIME;
            do
            {
              /*Decrement LucLoopcount */
              LucLoopcount --;
              /* Start Tag MCU_UT_002 */
            }while (((uint32)MCU_TARGET_WAKEUP_STATUS !=
                    (MCU_ETH_MSR_LM6 & (uint32)MCU_ONE)) &&
                    (LucLoopcount > MCU_ZERO));
            /* End Tag MCU_UT_002 */
            /*Check if target clock domain is enabled*/
            /* Start Tag MCU_UT_002 */
            if((uint32)MCU_TARGET_WAKEUP_STATUS !=
                (MCU_ETH_MSR_LM6 & (uint32)MCU_ONE))
                /* End Tag MCU_UT_002 */
            {
              /* Module standby mode failure and report production error */
              Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                DEM_EVENT_STATUS_FAILED);
              /* Set the return value to  E_NOT_OK */
              LenReturnValue = E_NOT_OK;
            }
            else
            {

            }
          }
          else
          {
            /* No action */
          }
        }
        else
        {
          /* No action */
        }
        /*Check if wakeup up mode trigger is enabled in configuration
          for RSENT Domain */
        if((MCU_RSENT_WAKEUP_TRIG_EN ==
             (uint16)( LusWakeupEnable & MCU_RSENT_WAKEUP_TRIG_EN))
                                   &&(E_OK == LenReturnValue ))
        {
          /* QAC Warning: START Msg(2:3416)-12 */
          /*Check if Reset execution is not being processed in RSENT domain */
          if((uint32)MCU_ZERO == MCU_SWLRESS7)
          {
            /* END Msg(2:3416)-12 */
            /*Enable the output clock of RSENT */
            MCU_RESNT_MSR_LM7 = (uint32)MCU_TARGET_WAKEUP_TRIGGER;
            /* Read back clock of RSENT register */
            MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_RESNT_MSR_LM7),
                     (uint32)MCU_TARGET_WAKEUP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                               MCU_SETMODE_SID)
            /*Assign wait time to LucLoopcount*/
            LucLoopcount = MCU_WAKEUP_WAIT_TIME;
            do
            {
              /*Decrement LucLoopcount */
              LucLoopcount --;
              /* Start Tag MCU_UT_002 */
            }while (((uint32)MCU_TARGET_WAKEUP_STATUS !=
                    (MCU_RESNT_MSR_LM7 & (uint32)MCU_ONE)) &&
                    (LucLoopcount > MCU_ZERO));
            /* End Tag MCU_UT_002 */
            /*Check if target clock domain is enabled*/
            /* Start Tag MCU_UT_002 */
            if((uint32)MCU_TARGET_WAKEUP_STATUS !=
                (MCU_RESNT_MSR_LM7 & (uint32)MCU_ONE))
                /* End Tag MCU_UT_002 */
            {
              /* Module standby mode failure and report production error */
              Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                DEM_EVENT_STATUS_FAILED);
              /* Set the return value to  E_NOT_OK */
              LenReturnValue = E_NOT_OK;
            }
            else
            {

            }
          }
          else
          {
             /* No action */
          }
        }
        else
        {
          /* No action */
        }
        /*Check if wakeup up mode trigger is enabled in configuration
          for HS_USRT Domain */
        if((MCU_USRT_WAKEUP_TRIG_EN ==
             (uint16)( LusWakeupEnable & MCU_USRT_WAKEUP_TRIG_EN))
                                   &&(E_OK == LenReturnValue ))
        {
          /* QAC Warning: START Msg(2:3416)-12 */
          /*Check if Reset execution is not being processed in HS_USRT domain */
          if((uint32)MCU_ZERO == MCU_SWLRESS8)
          {
            /* END Msg(2:3416)-12 */
            /*Enable the output clock of HS_USRT */
            MCU_USRT_MSR_LM8 = (uint32)MCU_TARGET_WAKEUP_TRIGGER;
            /* Read back clock of HS_USRT register */
            MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_USRT_MSR_LM8),
                     (uint32)MCU_TARGET_WAKEUP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                              MCU_SETMODE_SID)
            /*Assign wait time to LucLoopcount*/
            LucLoopcount = MCU_WAKEUP_WAIT_TIME;
            do
            {
              /*Decrement LucLoopcount */
              LucLoopcount --;
            }while (((uint32)MCU_TARGET_WAKEUP_STATUS !=
                    (MCU_USRT_MSR_LM8 & (uint32)MCU_ONE)) &&
                    (LucLoopcount > MCU_ZERO));
            /*Check if target clock domain is enabled*/
            /* Start Tag MCU_UT_002 */
            if((uint32)MCU_TARGET_WAKEUP_STATUS !=
                (MCU_USRT_MSR_LM8 & (uint32)MCU_ONE))
                /* End Tag MCU_UT_002 */
            {
              /* Module standby mode failure and report production error */
              Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                DEM_EVENT_STATUS_FAILED);
              /* Set the return value to  E_NOT_OK */
              LenReturnValue = E_NOT_OK;
            }
            else
            {

            }
          }
          else
          {
            /* No action */
          }
        }
        else
        {
          /* No action */
        }

        /*Check if wakeup up mode trigger is enabled in configuration
          for CSIH Domain */
        if((MCU_CSIH_WAKEUP_TRIG_EN ==
             (uint16)( LusWakeupEnable & MCU_CSIH_WAKEUP_TRIG_EN))
                                   &&(E_OK == LenReturnValue ))
          {
            /* QAC Warning: START Msg(2:3416)-12 */
            /*Check if Reset execution is not being processed in CSIH domain */
            if((uint32)MCU_ZERO == MCU_SWLRESS10)
            {
              /* END Msg(2:3416)-12 */
              /*Enable the output clock of CSIH */
              MCU_CSIH_MSR_LM10 = (uint32)MCU_TARGET_WAKEUP_TRIGGER;
              /* Read back clock of CSIH register */
              MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_CSIH_MSR_LM10),
                     (uint32)MCU_TARGET_WAKEUP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                               MCU_SETMODE_SID)
              /*Assign wait time to LucLoopcount*/
              LucLoopcount = MCU_WAKEUP_WAIT_TIME;
              do
              {
                /*Decrement LucLoopcount */
                LucLoopcount --;
                /* Start Tag MCU_UT_002 */
              }while (((uint32)MCU_TARGET_WAKEUP_STATUS !=
                      (MCU_CSIH_MSR_LM10 & (uint32)MCU_ONE)) &&
                      (LucLoopcount > MCU_ZERO));
              /* End Tag MCU_UT_002 */
              /*Check if target clock domain is enabled*/
              /* Start Tag MCU_UT_002 */
              if((uint32)MCU_TARGET_WAKEUP_STATUS !=
                  (MCU_CSIH_MSR_LM10 & (uint32)MCU_ONE))
                  /* End Tag MCU_UT_002 */
              {
                /* Module standby mode failure and report production error */
                Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                  DEM_EVENT_STATUS_FAILED);
                /* Set the return value to  E_NOT_OK */
                LenReturnValue = E_NOT_OK;
              }
              else
              {

              }
            }
            else
            {
              /* No action */
            }
          }
          else
          {
            /* No action */
          }
          /*Check if wakeup up mode trigger is enabled in configuration
            for RLIN3 Domain */
          if((MCU_RLIN3_WAKEUP_TRIG_EN ==
               (uint16)( LusWakeupEnable & MCU_RLIN3_WAKEUP_TRIG_EN))
                                     &&(E_OK == LenReturnValue ))
          {
            /* QAC Warning: START Msg(2:3416)-12 */
            /*Check if Reset execution is not being processed in RLIN3 domain */
            if((uint32)MCU_ZERO == MCU_SWLRESS11)
            {
              /* END Msg(2:3416)-12 */
              /*Enable the output clock of RLIN3 */
              MCU_RLIN3_MSR_LM11 = (uint32)MCU_TARGET_WAKEUP_TRIGGER;
              /* Read back clock of RLIN3 register */
              MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_RLIN3_MSR_LM11),
                     (uint32)MCU_TARGET_WAKEUP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                             MCU_SETMODE_SID)
              /*Assign wait time to LucLoopcount*/
              LucLoopcount = MCU_WAKEUP_WAIT_TIME;
              do
              {
                /*Decrement LucLoopcount */
                LucLoopcount --;
                /* Start Tag MCU_UT_002 */
              }while (((uint32)MCU_TARGET_WAKEUP_STATUS !=
                      (MCU_RLIN3_MSR_LM11 & (uint32)MCU_ONE)) &&
                      (LucLoopcount > MCU_ZERO));
              /* End Tag MCU_UT_002 */
              /*Check if target clock domain is enabled*/
              /* Start Tag MCU_UT_002 */
              if((uint32)MCU_TARGET_WAKEUP_STATUS !=
                  (MCU_RLIN3_MSR_LM11 & (uint32)MCU_ONE))
                  /* End Tag MCU_UT_002 */
              {
                /* Module standby mode failure and report production error */
                Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                  DEM_EVENT_STATUS_FAILED);
                /* Set the return value to  E_NOT_OK */
                LenReturnValue = E_NOT_OK;
              }
              else
              {


              }
            }
            else
            {
              /* No action */
            }
          }
          else
          {
            /* No action */
          }
          /*Check if wakeup up mode trigger is enabled in configuration
            for ADC Domain */
          if((MCU_ADC_WAKEUP_TRIG_EN ==
               (uint16)( LusWakeupEnable & MCU_ADC_WAKEUP_TRIG_EN))
                                     &&(E_OK == LenReturnValue ))
           {
            /*Check if Reset execution is not being processed in ADC domain */
            /* MISRA Violation: START Msg (2:3416)-8 */
            if((uint32)MCU_ZERO == MCU_SWLRESS12)
            /* END Msg (2:3416)-8 */
            {
              /*Enable the output clock of ADC */
              MCU_ADC_MSR_LM12 = (uint32)MCU_TARGET_WAKEUP_TRIGGER;
              /* Read back clock of ADC register */
              MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(MCU_ADC_MSR_LM12),
                     (uint32)MCU_TARGET_WAKEUP_TRIGGER, MCU_MSR_LMx_WV_MASK,
                                                              MCU_SETMODE_SID)
              /*Assign wait time to LucLoopcount*/
              LucLoopcount = MCU_WAKEUP_WAIT_TIME;
              do
              {
                /*Decrement LucLoopcount */
                LucLoopcount --;
                /* Start Tag MCU_UT_002 */
              }while (((uint32)MCU_TARGET_WAKEUP_STATUS !=
                      (MCU_ADC_MSR_LM12 & (uint32)MCU_ONE)) &&
                      (LucLoopcount > MCU_ZERO));
              /* End Tag MCU_UT_002 */
              /*Check if target clock domain is enabled*/
              /* Start Tag MCU_UT_002 */
              if((uint32)MCU_TARGET_WAKEUP_STATUS !=
                  (MCU_ADC_MSR_LM12 & (uint32)MCU_ONE))
                  /* End Tag MCU_UT_002 */
              {
                /* Module standby mode failure and report production error */
                Dem_ReportErrorStatus(MCU_E_POWERDOWN_MODE_FAILURE,
                                                  DEM_EVENT_STATUS_FAILED);
              }
              else
              {

              }
            }
            else
            {
              /* No action */
            }
          }
          else
          {
            /* No action */
          }
        break;
    /* MISRA Violation: START Msg (2:2881)-6  */
    /* Start Tag MCU_UT_001 */
    default:
        break;
    /* End Tag MCU_UT_001 */
    /* END Msg (2:2881)-6  */
    /* MISRA Violation: START Msg (2:2016)-7  */
    }
    /* END Msg (2:2016)-7  */
  }
  /* Implements MCU_ESDD_UD_036*/
  #if (STD_ON == MCU_DEV_ERROR_DETECT)
  else
  {
    /* No action */
  }
  #endif
}

/*******************************************************************************
** Function Name        : Mcu_GetRamState.
**
** Service ID           : 0x04.
**
** Description          : This service provides the actual status of the
**                        microcontroller RAM area.
**
** Sync/Async           : Synchronous.
**
** Reentrancy           : Reentrant.
**
** Input Parameters     : None.
**
** InOut Parameters     : None.
**
** Output Parameters    : None.
**
** Return parameter     : Mcu_RamStateType
**                        (MCU_RAMSTATE_INVALID, MCU_RAMSTATE_VALID)
**
** Preconditions        : MCU Driver component must be initialized
**
** Global Variables     : Mcu_GblDriverStatus,Mcu_GblRAMInitStatus.
**
** Functions Invoked    : Det_ReportError, MCU_ENTER_CRITICAL_SECTION,
**                        MCU_EXIT_CRITICAL_SECTION
**
** Registers Used       : None.
**
*******************************************************************************/
/* Implements MCU_ESDD_UD_010,MCU_ESDD_UD_029, EAAR_PN0079_FR_0007 */
/* Implements EAAR_PN0079_FR_0008,EAAR_PN0079_FR_0070,EAAR_PN0079_FR_0071 */
/* Implements MCU181_Conf,MCU207,MCU209,MCU017 */
#if (STD_ON == MCU_GET_RAM_STATE_API)
FUNC(Mcu_RamStateType, MCU_PUBLIC_CODE) Mcu_GetRamState (void)
{
  VAR(Mcu_RamStateType,TYPEDEF)     LddRamStatus;

  LddRamStatus = MCU_RAMSTATE_INVALID;
  /* Implements MCU_ESDD_UD_036*/
  #if (STD_ON == MCU_DEV_ERROR_DETECT)
  /* Report to DET, if the component is not initialized */
  if (MCU_UNINITIALIZED == Mcu_GblDriverStatus)
  {
    /* Implements MCU125,MCU208 */
    /* Report to DET */
    (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID,
                     MCU_GETRAMSTATE_SID, MCU_E_UNINIT);
  }
  /* if no development error occurred */
  else
  #endif /* MCU_DEV_ERROR_DETECT == STD_ON */
  {
    /* Implements MCU_ESDD_UD_031 */
    #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
    MCU_ENTER_CRITICAL_SECTION(MCU_VARIABLE_PROTECTION);
    #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

    /* MISRA Violation: START Msg (2:4342)-3 */
    LddRamStatus = (Mcu_RamStateType)Mcu_GblRAMInitStatus;
    /* END Msg (2:4342)-3 */
    Mcu_GblRAMInitStatus = MCU_ZERO;

    /* Implements MCU_ESDD_UD_031 */
    #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
    MCU_EXIT_CRITICAL_SECTION(MCU_VARIABLE_PROTECTION);
    #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

  }
  return (LddRamStatus);
}
#endif /* (MCU_GET_RAM_STATE_API == STD_ON) */

/*******************************************************************************
** Function Name      : Mcu_GetVersionInfo
**
** Service ID         : 0x09
**
** Description        : This service returns the version information of MCU
**                      module.
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : versioninfo
**
** Return parameter   : None
**
** Preconditions      : None
**
** Global Variables   : None
**
** Function Invoked   : Det_ReportError()
**
** Registers Used     : None
**
*******************************************************************************/
/* Implements MCU_ESDD_UD_016,MCU_ESDD_UD_026 */
/* Implements MCU103,MCU104,MCU162,MCU204, MCU149 */
/* Implements EAAR_PN0034_FR_0051, MCU168_Conf */
#if (STD_ON == MCU_VERSION_INFO_API)
/* MISRA Violation: START Msg (2:3227)-5  */
FUNC(void,MCU_PUBLIC_CODE) Mcu_GetVersionInfo
(P2VAR(Std_VersionInfoType, AUTOMATIC, MCU_APPL_CONST) versioninfo)
/* END Msg (2:3227)-5  */
{

  /* Implements MCU_ESDD_UD_036*/
  #if (STD_ON == MCU_DEV_ERROR_DETECT)
  /* Report to DET, if versioninfo pointer is equal to Null */
  if(NULL_PTR == versioninfo)
  {
    /* Report to DET  */
    (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID,
                                  MCU_GETVERSIONINFO_SID,MCU_E_PARAM_POINTER);
  }
  else
  #endif /*#if(MCU_DEV_ERROR_DETECT == STD_ON) */
  {
    /* Copy the vendor Id */
    versioninfo->vendorID = (uint16)MCU_VENDOR_ID;
    /* Copy the module Id */
    versioninfo->moduleID = (uint16)MCU_MODULE_ID;
    /* Copy Software Major Version */
    versioninfo->sw_major_version = (uint8)MCU_SW_MAJOR_VERSION;
    /* Copy Software Minor Version */
    versioninfo->sw_minor_version = (uint8)MCU_SW_MINOR_VERSION;
    /* Copy Software Patch Version */
    versioninfo->sw_patch_version = (uint8)MCU_SW_PATCH_VERSION;
  }
}
#endif
/*******************************************************************************
** Function Name        : Mcu_EcmReleaseErrorOutPin
**
** Service ID           : 0x0B
**
** Description          : This service will release the errorout pin
**
** Sync/Async           : Synchronous
**
** Reentrancy           : Non-Reentrant
**
** Input Parameters     : None
**
** InOut Parameters     : None
**
** Output Parameters    : None
**
** Return parameter     : None
**
** Preconditions        : MCU Driver component must be initialized
**
** Global Variables     : Mcu_GblDriverStatus,
**
** Functions Invoked    : Det_ReportError, Mcu_ClearEcmErrorOutput
**
** Registers Used       : ECMnEMK2,ECMnPCMD1,ECMnPS
*******************************************************************************/
/* Implements MCU_ESDD_UD_089 */
/* Implements EAAR_PN0079_FSR_0043,MCU017 */
FUNC(void, MCU_PUBLIC_CODE) Mcu_EcmReleaseErrorOutPin(void)
{

  P2CONST(Mcu_EcmSetting, MCU_VAR, MCU_CONFIG_CONST)  LpEcmSetting;
  VAR(uint32, AUTOMATIC) LulEcmMaskValue;
  VAR(uint8,AUTOMATIC) LucEcmIndex;
  VAR(uint8,AUTOMATIC) LucLoopcount;
  VAR(Std_ReturnType,TYPEDEF) LenReturnValue;

  LpEcmSetting = Mcu_GpEcmSetting;

  /* QAC Warning: START Msg (2:2814)-8  */
  LulEcmMaskValue = LpEcmSetting->ulEcmErrorMaskReg2Value;
  LucEcmIndex = MCU_ZERO;
  /* END Msg (2:2814)-8  */

  /* Implements MCU_ESDD_UD_036*/
  #if (MCU_DEV_ERROR_DETECT == STD_ON)
  /* Report to DET, if the component is not initialized */
  if (MCU_UNINITIALIZED == Mcu_GblDriverStatus)
  {
    /* Implements MCU125 */
    /* Report to DET */
    (void)Det_ReportError(MCU_MODULE_ID, MCU_INSTANCE_ID,
                                   MCU_RELEASEERROROUTPIN_SID, MCU_E_UNINIT);
  }
  else
  #endif
  {
    /* Call the function to release pin ERROROUT*/
    (void)Mcu_ClearEcmErrorOutput(MCU_RELEASEERROROUTPIN_SID);
    /* Set the mask value for the error output status pin as per the
       configuration */
    do
    {
      /* Initialize the retry count to config value */
      LucLoopcount = MCU_LOOPCOUNT;
      MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->EMK2),
      (LulEcmMaskValue),(Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
     (Ecm0_BaseAddress[LucEcmIndex]->PS),(LucLoopcount),(LenReturnValue))

     MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
     (&(Ecm0_BaseAddress[LucEcmIndex]->EMK2)), (LulEcmMaskValue),
      MCU_EMK2_WV_MASK, MCU_INIT_SID)

     LucEcmIndex++;
    }while((MCU_NO_OF_ECM_INSTANCES > LucEcmIndex) && (E_OK == LenReturnValue));

  }
}
#define MCU_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"


#define MCU_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name      : Mcu_ResetReasonStore
**
** Service ID         : None
**
** Description        : This service is to store the Reset Reason into the
**                      buffer.
**
** Sync/Async         : Asynchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : none
**
** Return parameter   : none
**
** Preconditions      : None
**
** Global Variables   : Mcu_GusLastResetReason,Mcu_GusLastResetRawValue
**                      Mcu_GucMulRstReasonStoreCall
** Function Invoked   : Mcu_EcmResetReason
**
** Registers Used     : RESF,ECMmnESSTR0,ECMCnESSTR0,ECMnESSTC0,ECMnPCMD1,
**                      ECMnPS,ECMMnESSTR1,ECMnESSTC1,ECMmnESSTR2,ECMnESSTC2,
**                      RESFC
*******************************************************************************/
/* Implements MCU_ESDD_UD_014 */
/* Implements MCU_ESDD_UD_072, EAAR_PN0079_FSR_0003 */
/* Implements MCU005,MCU185_Conf, MCU052, MCU186_Conf */
/* QAC Warning: START Msg (0:2755)-15 */
STATIC FUNC(void, MCU_PRIVATE_CODE) Mcu_ResetReasonStore(void)
{
/* END Msg (0:2755)-15 */
  VAR(Mcu_ResetType,TYPEDEF)                     LddResetSource;
  VAR(uint32,AUTOMATIC)                          LulResfStatus;

  /* Check whether reset reason store api called first time */
  if (MCU_ZERO == Mcu_GucMulRstReasonStoreCall)
  {
    /* Get the resf register status */
    LulResfStatus = MCU_RESF;
    switch (LulResfStatus)
    {
    /* Power On Reset */
    case MCU_POF_RST :
        LddResetSource = MCU_POWER_ON_RESET;
        break;
    /* Power On Reset */
    case MCU_BIST_TER_POF_RST :
        LddResetSource = MCU_POWER_ON_RESET;
        break;
    /* Terminal Reset */
    case MCU_TER_RST :
        LddResetSource = MCU_TERMINAL_RESET;
        break;
    /* Terminal Reset */
    case MCU_BIST_TER_RST :
        LddResetSource = MCU_TERMINAL_RESET;
        break;
    /* Core Voltage Monitor Reset */
    case MCU_CVM_RST :
        LddResetSource = MCU_CVM_RESET;
        break;
     /* Core Voltage Monitor Reset */
    case MCU_BIST_CVM_RST :
        LddResetSource = MCU_CVM_RESET;
        break;
    /* Core Voltage Monitor Reset */
    case MCU_BIST_CVM_TER_RST :
        LddResetSource = MCU_CVM_RESET;
        break;
    /* Software System Reset */
    case MCU_SW_SYS_RST :
        LddResetSource = MCU_SW_SYS_RESET;
        break;
    /* ECM System Reset */
    case MCU_ECM_SYS_RST  :
        LddResetSource = Mcu_EcmResetReason();
        break;
    /* Debugger Reset */
    case MCU_DBGR_RST :
        LddResetSource = MCU_DEBUGGER_RESET;
        break;
    /* Software Application Reset */
    case MCU_SW_APPL_RST :
        LddResetSource = MCU_SW_APPL_RESET;
        break;
    /* ECM Application Reset */
    case MCU_ECM_APPL_RST :
        LddResetSource = Mcu_EcmResetReason();
        break;
    /* Reset is due to unknown source */
    default :
        LddResetSource = MCU_RESET_UNKNOWN;
        break;
    }
    /* Save the Reset Reason to a global variable */
    Mcu_GusLastResetReason = (uint16)LddResetSource;
    /* Save the Reset Raw value to a global variable */
    Mcu_GusLastResetRawValue = (uint16)LulResfStatus;
    /* Clear Reset factor register */
    MCU_RESFC = MCU_RESF_CLEAR;
    /* Set Reset reason call to one */
    Mcu_GucMulRstReasonStoreCall = MCU_ONE;
  }
  else
  {

  } /*End of if (MCU_ZERO == Mcu_GucMulRstReasonStoreCall) */
}

/*******************************************************************************
** Function Name      : Mcu_EcmResetReason
**
** Service ID         : None
**
** Description        : This service is to check the Ecm Reset sources.
**
** Sync/Async         : Asynchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : none
**
** Return parameter   : Mcu_ResetType
**
** Preconditions      : None
**
** Global Variables   : None
**
** Function Invoked   : MCU_PROTECTEDWRITE32BIT
**
** Registers Used     : RESF,ECMmnESSTR0,ECMCnESSTR0,ECMnESSTC0,ECMnPCMD1,
**                      ECMnPS,ECMMnESSTR1,ECMnESSTC1,ECMmnESSTR2,ECMnESSTC2
*******************************************************************************/
/* Implements MCU_ESDD_UD_013, MCU052, MCU186_Conf, EAAR_PN0079_FSR_0003 */
/* Implements EAAR_PN0079_FSR_0016, EAAR_PN0079_FSR_0017 */
/* Implements EAAR_PN0079_FSR_0086 */
/* MISRA Violation: START Msg (0:2755)-11 */
STATIC FUNC(Mcu_ResetType, MCU_PRIVATE_CODE) Mcu_EcmResetReason(void)
/* END Msg (0:2755)-11 */
{
  VAR(Mcu_ResetType,TYPEDEF)             LddResetSource;
  VAR(uint32,AUTOMATIC)                  LulEcmStatusData;
  VAR(uint8,AUTOMATIC)                   LucLoopCount;
  VAR(uint8,AUTOMATIC)                   LucLoopcount;
  VAR(uint8,AUTOMATIC)                   LucEcmIndex;
  VAR(boolean,AUTOMATIC)                 LblDemReported;
  VAR(Std_ReturnType,TYPEDEF)            LenReturnValue;
  VAR(uint8,AUTOMATIC)                   LucGetPeId;
  VAR(uint8,AUTOMATIC)                   LucLoopBreak;
  /* Initialize with default values */
  LddResetSource = MCU_RESET_UNKNOWN;
  LblDemReported = MCU_FALSE;
  /*Initialize the LucEcmIndex to zero */
  LucEcmIndex = MCU_ZERO;
  do
  {
    /*Check If any reset has occured in the ECM Master and Checker Registers */
    /* QAC Warning: START Msg (2:2814)-8  */
    /* MISRA Violation: START Msg (2:3892)-4 */
    if (((uint32)MCU_ZERO != (Mcu_GpEcmSetting->ulEcmInternalResetReg0value &
          Ecmm0_BaseAddress[LucEcmIndex]->ESSTR0)) &&
         ((uint32)MCU_ZERO != (Mcu_GpEcmSetting->ulEcmInternalResetReg0value &
            Ecmc0_BaseAddress[LucEcmIndex]->ESSTR0)))
    /* END Msg (2:3892)-4 */
    /* END Msg (2:2814)-8  */
    {
      /* Get only internal reset enabled Ecm error status data  */
      LulEcmStatusData = (uint32)(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR0 &
                            Mcu_GpEcmSetting->ulEcmInternalResetReg0value);

     LucLoopBreak = MCU_ZERO;
     LucLoopCount = MCU_ZERO;

     while(((LucLoopCount < MCU_THIRTYTWO) && (LucLoopBreak == MCU_ZERO)))
     {
      if( (uint32)MCU_ONE == (uint32)((LulEcmStatusData >> LucLoopCount) &
                                                              (uint32)MCU_ONE))
       {
         LucLoopBreak = MCU_ONE;
       }
       else
       {
        LucLoopCount++;
       }
     }
      /* Check which reset occured under ECM master */
      switch (LucLoopCount)
      {
      case MCU_ZERO:
          LddResetSource = MCU_WATCHDOG_RESET;
          break;
      case MCU_ONE:
          LddResetSource = MCU_LOCK_STEP_CORE_RST;
          break;
      case MCU_TWO:
          LddResetSource = MCU_PBUS_FSS_RST;
          break;
      case MCU_THREE:
          LddResetSource = MCU_BUS_BRIDGE_ERROR_RST;
          break;
      case MCU_FOUR:
          LddResetSource = MCU_SAFETY_MECH_COMP_RST;
          break;
      case MCU_SIX:
          LddResetSource = MCU_TEMPERATURE_SENSOR_RST;
          break;
      case MCU_EIGHT:
          LddResetSource = MCU_CLMA0_RST;
          break;
      case MCU_NINE:
          LddResetSource = MCU_CLMA2_RST;
          break;
      case MCU_TEN:
         /* MISRA Violation: START Msg (4:4447)-9  */
         /* QAC Warning: START Msg(2:3892)-4 */
          GETPEID(LucGetPeId)
          /* END Msg(2:3892)-4 */
          /* END Msg(4:4447)-9  */
          /* Start Tag MCU_UT_003 */
          if(MCU_ONE == LucGetPeId)
          {
            LddResetSource = MCU_CLMA3_RST;
          }
          /* End Tag MCU_UT_003 */
          else
          {
            LddResetSource = MCU_CLMA4_RST;
          }
          break;
      case MCU_TWELVE:
          LddResetSource = MCU_CLMA1_RST;
          break;
      case MCU_SIXTEEN:
          LddResetSource = MCU_LRAM_ECC_DED_RST;
          break;
      case MCU_SEVENTEEN:
          LddResetSource = MCU_GRAM_ECC_DED_RST;
          break;
      case MCU_EIGHTEEN:
          LddResetSource = MCU_CACHE_RAM_EDC_RST;
          break;
      case MCU_NINETEEN:
          LddResetSource = MCU_CODE_FLS_ECC_DED_RST;
          break;
      case MCU_TWENTY:
          LddResetSource = MCU_DATA_FLS_ECC_DED_RST;
          break;
      case MCU_TWENTYONE:
          LddResetSource = MCU_CSIH_RAM_ECC_DED_RST;
          break;
      case MCU_TWENTYTWO:
          LddResetSource = MCU_CAN_RAM_ECC_DED_RST;
          break;
      case MCU_TWENTYTHREE:
          LddResetSource = MCU_ETH_RAM_ECC_DED_RST;
          break;
      case MCU_TWENTYFOUR:
          LddResetSource = MCU_FR_RAM_ECC_DED_RST;
          break;
      case MCU_TWENTYFIVE:
          LddResetSource = MCU_GTM_RAM_ECC_DED_RST;
          break;
      case MCU_TWENTYEIGHT:
          LddResetSource = MCU_BUS_ECC_DED_RST;
          break;
      case MCU_TWENTYNINE:
          LddResetSource = MCU_BUS_ECC_SED_RST;
          break;
      default:
          LddResetSource = MCU_RESET_UNKNOWN;
          break;
      }
      /* Clear the particular reset occured */
      LucLoopcount = MCU_LOOPCOUNT;
      MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->ESSTC0),
                LulEcmStatusData,(Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
                (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopcount,
                                                                 LenReturnValue)
      /* Read back the Ecm error pulse register*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
        (&(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR0),(uint32)MCU_LONG_WORD_ZERO,
        (uint32)MCU_FULL_MASK, MCU_ECMRESETREASON_SID)
      /* Check whether Dem reported or not */
      if (E_NOT_OK == LenReturnValue )
      {
        /* Set Dem error reported flag */
        LblDemReported = MCU_TRUE;
      }
      else
      {
        /* No action */
      }
    }
    else
    {
      /* No action */
    }
    /*Check If any reset has occured in the ECM Registers */
    /* QAC Warning: START Msg (2:2814)-8  */
    if (((Mcu_GpEcmSetting->ulEcmInternalResetReg1value &
                Ecmm0_BaseAddress[LucEcmIndex]->ESSTR1)!= (uint32)MCU_ZERO) &&
        ((Mcu_GpEcmSetting->ulEcmInternalResetReg1value &
                Ecmc0_BaseAddress[LucEcmIndex]->ESSTR1)!= (uint32)MCU_ZERO) &&
                        (MCU_FALSE == LblDemReported ))
    /* END Msg (2:2814)-8  */
    {
      /* Get only internal reset enabled Ecm eror status data  */
      LulEcmStatusData = (uint32)(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR1 &
                            Mcu_GpEcmSetting->ulEcmInternalResetReg1value);

     LucLoopBreak = MCU_ZERO;
     LucLoopCount = MCU_ZERO;

     while(((LucLoopCount < MCU_THIRTYTWO) && (LucLoopBreak == MCU_ZERO)))
     {
      if( (uint32)MCU_ONE == (uint32)((LulEcmStatusData >> LucLoopCount) &
                                                              (uint32)MCU_ONE))
       {
         LucLoopBreak = MCU_ONE;
       }
       else
       {
        LucLoopCount++;
       }
     }
      /*Add the value(0x20) to check the ECM error status register 1*/
      LucLoopCount = LucLoopCount + MCU_THIRTYTWO;
      /* Check which reset occured under ECM master */
      switch (LucLoopCount)
      {
      case MCU_THIRTYTWO:
          LddResetSource = MCU_LRAM_ADDR_OVF_RST;
          break;
      case MCU_THIRTYTHREE:
          LddResetSource = MCU_GRAM_ADDR_OVF_RST;
          break;
      case MCU_THIRTYFIVE:
          LddResetSource = MCU_CODE_FLS_ADDR_OVF_RST;
          break;
      case MCU_THIRTYSIX:
          LddResetSource = MCU_DATA_FLS_ADDR_OVF_RST;
          break;
      case MCU_THIRTYSEVEN:
          LddResetSource = MCU_PERI_RAM_ECC_ADDR_OVF_RST;
          break;
      case MCU_FORTY:
          LddResetSource = MCU_DTS_RAM_ECC_DED_RST;
          break;
      case MCU_FORTYONE:
          LddResetSource = MCU_DTS_RAM_ECC_SED_RST;
          break;
      case MCU_FORTYEIGHT:
          LddResetSource = MCU_LRAM_ECC_SED_RST;
          break;
      case MCU_FORTYNINE:
          LddResetSource = MCU_GRAM_ECC_SED_RST;
          break;
      case MCU_FIFTYONE:
          LddResetSource = MCU_CODE_FLS_ECC_SED_RST;
          break;
      case MCU_FIFTYTWO:
          LddResetSource = MCU_DATA_FLS_ECC_SED_RST;
          break;
      case MCU_FIFTYTHREE:
          LddResetSource = MCU_CSIH_RAM_ECC_SED_RST;
          break;
      case MCU_FIFTYFOUR:
          LddResetSource = MCU_CAN_RAM_ECC_SED_RST;
          break;
      case MCU_FIFTYFIVE:
          LddResetSource = MCU_ETH_RAM_ECC_SED_RST;
          break;
      case MCU_FIFTYSIX:
          LddResetSource = MCU_FR_RAM_ECC_SED_RST;
          break;
      case MCU_FIFTYSEVEN:
          LddResetSource = MCU_GTM_RAM_ECC_SED_RST;
          break;
      default:
          LddResetSource = MCU_RESET_UNKNOWN;
          break;
      }
      /* Clear the particular reset occured */
      LucLoopcount = MCU_LOOPCOUNT;
      MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->ESSTC1),
        LulEcmStatusData,(Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
              (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopcount, LenReturnValue)
      /* Read back the ECM register*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
        (&(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR1),(uint32)MCU_LONG_WORD_ZERO,
                                 (uint32)MCU_FULL_MASK, MCU_ECMRESETREASON_SID)
      /* Check whether Dem reported or not */
      if (E_NOT_OK == LenReturnValue )
      {
        /* Set Dem error reported flag */
        LblDemReported = MCU_TRUE;
      }
      else
      {
        /* No action */
      }
    }
    else
    {
      /* No action */
    }
    /*Check If any reset has occured in the ECM Registers */
    /* QAC Warning: START Msg (2:2814)-8  */
    if (((Mcu_GpEcmSetting->ulEcmInternalResetReg2value &
                Ecmm0_BaseAddress[LucEcmIndex]->ESSTR2)!= (uint32)MCU_ZERO) &&
        ((Mcu_GpEcmSetting->ulEcmInternalResetReg2value &
                Ecmc0_BaseAddress[LucEcmIndex]->ESSTR2)!= (uint32)MCU_ZERO) &&
                        (MCU_FALSE == LblDemReported ))
    /* END Msg (2:2814)-8  */
    {
      /* Get only internal reset enabled Ecm eror status data  */
      LulEcmStatusData = (uint32)(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR2 &
                            Mcu_GpEcmSetting->ulEcmInternalResetReg2value);

      LucLoopBreak = MCU_ZERO;
      LucLoopCount = MCU_ZERO;
     while(((LucLoopCount < MCU_THIRTYTWO) && (LucLoopBreak == MCU_ZERO)))
     {
      if( (uint32)MCU_ONE == (uint32)((LulEcmStatusData >> LucLoopCount) &
                                                              (uint32)MCU_ONE))
       {
         LucLoopBreak = MCU_ONE;
       }
       else
       {
        LucLoopCount++;
       }
     }
      /*Add the value(0x40) to check the ECM error status register 2*/
      LucLoopCount = LucLoopCount + MCU_SIXTYFOUR;
      /* Check which reset occured under ECM master */
      switch (LucLoopCount)
      {
      case MCU_SIXTYFOUR:
          LddResetSource = MCU_PE_GUARD_RST;
          break;
      case MCU_SIXTYFIVE:
          LddResetSource = MCU_GRAM_GUARD_RST;
          break;
      case MCU_SIXTYSIX:
          LddResetSource = MCU_MEMC_GUARD_RST;
          break;
      case MCU_SIXTYSEVEN:
          LddResetSource = MCU_SLAVE_GUARD_RST;
          break;
      case MCU_SEVENTYTWO:
          LddResetSource = MCU_CODE_FLS_PE_UNMAP_ACCESS_RST;
          break;
      case MCU_SEVENTYTHREE:
          LddResetSource = MCU_GRAM_PE_UNMAP_ACCESS_RST;
          break;
      case MCU_SEVENTYFOUR:
          LddResetSource = MCU_LPB_PE_UNMAP_ACCESS_RST;
          break;
      case MCU_SEVENTYFIVE:
          LddResetSource = MCU_PBUS_UNMAP_ACCESS_RST;
          break;
      case MCU_SEVENTYSIX:
          LddResetSource = MCU_HBUS_UNMAP_ACCESS_RST;
          break;
      case MCU_SEVENTYSEVEN:
          LddResetSource = MCU_CODE_FLS_GVCI_UNMAP_ACCESS_RST;
          break;
      case MCU_SEVENTYEIGHT:
          LddResetSource = MCU_GRAM_FLS_GVCI_UNMAP_ACCESS_RST;
          break;
      case MCU_SEVENTYNINE:
          LddResetSource = MCU_RES_HBUS_UNMAP_ACCESS_RST;
          break;
      case MCU_EIGHTY:
          LddResetSource = MCU_DMA_TRANSFER_RST;
          break;
      case MCU_EIGHTYONE:
          LddResetSource = MCU_DMA_UNMAPPED_RST;
          break;
      case MCU_EIGHTYTWO:
          LddResetSource = MCU_FLS_SEQUENCE_RST;
          break;
      case MCU_EIGHTYTHREE:
          LddResetSource = MCU_FLS_FACI_RST;
          break;
      case MCU_EIGHTYFOUR:
          LddResetSource = MCU_ADC_PARITY_RST;
          break;
      case MCU_EIGHTYSEVEN:
          LddResetSource = MCU_PE_UNINTEN_EN_DIS_RST;
          break;
      case MCU_EIGHTYEIGHT:
          LddResetSource = MCU_UNINTEN_DEACT_USR_RST;
          break;
      case MCU_EIGHTYNINE:
          LddResetSource = MCU_UNINTEN_ACT_CFP_MODE_RST;
          break;
      case MCU_NINETY:
          LddResetSource = MCU_UNINTEN_DEBUG_EN_DET_RST;
          break;
      case MCU_NINETYONE:
          LddResetSource = MCU_UNINTEN_ACT_TESTMODE_RST;
          break;
      case MCU_NINETYTWO:
          LddResetSource = MCU_ECM_COMP_RST;
          break;
      case MCU_NINETYTHREE:
          LddResetSource = MCU_ECM_DELAY_TMR_OVF_RST;
          break;
      default:
          LddResetSource = MCU_RESET_UNKNOWN;
          break;
      }
      /* Clear the particular reset occured */
      LucLoopcount = MCU_LOOPCOUNT;
      MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->ESSTC2),
        LulEcmStatusData,(Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
              (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopcount, LenReturnValue)
      /* Read back the ECM register*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
        (&(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR2), (uint32)MCU_LONG_WORD_ZERO,
                                  (uint32)MCU_FULL_MASK, MCU_ECMRESETREASON_SID)
      /* Check whether Dem reported or not */
      /* Start Tag MCU_UT_005 */
      if (E_NOT_OK == LenReturnValue )
      {
        /* Set Dem error reported flag */
        LblDemReported = MCU_TRUE;
      }
      /* End Tag MCU_UT_005 */
      else
      {
        /* No action */
      }
    }
    else
    {
      /* No action */
    }
  /* Increment the LucEcmIndex */
  LucEcmIndex++;
  }while((MCU_NO_OF_ECM_INSTANCES > LucEcmIndex) &&
                                    (MCU_FALSE == LblDemReported));

  return (LddResetSource);
}

/*******************************************************************************
** Function Name      : Mcu_WakeupConfigure
**
** Service ID         : None
**
** Description        : This service is to mask all wakeup events and unmask
                        the events which are used.
**
** Sync/Async         : Asynchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : none
**
** Return parameter   : none
**
** Preconditions      : None
**
** Global Variables   : Mcu_GpModeSetting
**
** Function Invoked   : None
**
** Registers Used     : EIC0,EIC1,EIC2,EIC3, EIC8,EIC9,EIC32,EIC33,EIC34,EIC35,
**                      EIC36,EIC38,EIC39,EIC41,EIC42,EIC53,EIC54,EIC61,EIC62,
**                      EIC83,EIC87,EIC97,EIC111,EIC114,EIC128,EIC129,EIC130,
**                      EIC131,EIC132,EIC141,EIC142,EIC174,EIC177,EIC184,EIC186,
**                      EIC191,EIC209,EIC211,EIC240,EIC241,EIC242,EIC243,
**                      EIC244,EIC245,IMR0,IMR1,IMR2,IMR3,IMR4,IMR5,IMR6,IMR7,
**                      SWLRESS3,MSR_LM3,SWLRESS4,MSR_LM4,MSR_LM5,MSR_LM6,
**                      MSR_LM7,MSR_LM8,MSR_LM10,MSR_LM11,MSR_LM12
**
*******************************************************************************/
/* Implements MCU_ESDD_UD_015 */
/* Implements MCU_ESDD_UD_072 */
/* Implements EAAR_PN0034_FR_0067 */
STATIC FUNC(void, MCU_PRIVATE_CODE) Mcu_WakeupConfigure(void)
{
  P2CONST(Mcu_ModeSetting, MCU_CONST, MCU_CONFIG_CONST)   LpModeSetting;

  /*Assign global Mode setting pointer to local pointer*/
  LpModeSetting = Mcu_GpModeSetting;
  /*Mask the ECM Maskable Interrupt(WUF02)*/
  MCU_EIC0 = MCU_WAKEUP_INTP_MASK;
  /*Mask the IPIR_CH1 Interrupt(WUF03)*/
  MCU_EIC1 = MCU_WAKEUP_INTP_MASK;
  /*Mask the IPIR_CH4 Interrupt(WUF04)*/
  MCU_EIC2 = MCU_WAKEUP_INTP_MASK;
  /*Mask the ICUMC Interrupt(WUF05)*/
  MCU_EIC3 = MCU_WAKEUP_INTP_MASK;
  /*Mask the WDTA 75% interrupt(WUF06)*/
  MCU_EIC8 = MCU_WAKEUP_INTP_MASK;
  /*Mask the Software interrupt 0(WUF07)*/
  MCU_EIC9 = MCU_WAKEUP_INTP_MASK;
  /*Mask the External interrupt0 (WUF08)*/
  MCU_EIC32 = MCU_WAKEUP_INTP_MASK;
  /*Mask the External interrupt1 (WUF09)*/
  MCU_EIC33 = MCU_WAKEUP_INTP_MASK;
  /*Mask the External interrupt2 (WUF10)*/
  MCU_EIC34 = MCU_WAKEUP_INTP_MASK;
  /*Mask the External interrupt3 (WUF11)*/
  MCU_EIC35 = MCU_WAKEUP_INTP_MASK;
  /*Mask the External interrupt4 (WUF12)*/
  MCU_EIC36 = MCU_WAKEUP_INTP_MASK;
  /*Mask the Temp Measurement End interrupt (WUF13)*/
  MCU_EIC38 = MCU_WAKEUP_INTP_MASK;
  /*Mask the state machine change interrupt (WUF14)*/
  MCU_EIC39 = MCU_WAKEUP_INTP_MASK;
  /*Mask the STM 0 interrupt (WUF15)*/
  MCU_EIC41 = MCU_WAKEUP_INTP_MASK;
  /*Mask the STM 1 interrupt (WUF16)*/
  MCU_EIC42 = MCU_WAKEUP_INTP_MASK;
  /*Mask the TIM shared interrupt 0(WUF17)*/
  MCU_EIC53 = MCU_WAKEUP_INTP_MASK;
  /*Mask the TIM shared interrupt 2(WUF18)*/
  MCU_EIC54 = MCU_WAKEUP_INTP_MASK;
  /*Mask the MCS channel 0 interrupt(WUF19)*/
  MCU_EIC61 = MCU_WAKEUP_INTP_MASK;
  /*Mask the MCS channel 2 interrupt(WUF20)*/
  MCU_EIC62 = MCU_WAKEUP_INTP_MASK;
  /*Mask the Adc Trigger group interrupt(WUF21)*/
  MCU_EIC83 = MCU_WAKEUP_INTP_MASK;
  /*Mask the CSIH0 Transmission interrupt(WUF22)*/
  MCU_EIC87 = MCU_WAKEUP_INTP_MASK;
  /*Mask the CSIH1 Transmission interrupt(WUF23)*/
  MCU_EIC91 = MCU_WAKEUP_INTP_MASK;
  /*Mask the RLIN30 receive interrupt(WUF24)*/
  MCU_EIC111 = MCU_WAKEUP_INTP_MASK;
  /*Mask the RLIN31 receive interrupt(WUF25)*/
  MCU_EIC114 = MCU_WAKEUP_INTP_MASK;
  /*Mask the External interrupt5 (WUF26)*/
  MCU_EIC128 = MCU_WAKEUP_INTP_MASK;
  /*Mask the External interrupt6 (WUF27)*/
  MCU_EIC129 = MCU_WAKEUP_INTP_MASK;
  /*Mask the External interrupt7 (WUF28)*/
  MCU_EIC130 = MCU_WAKEUP_INTP_MASK;
  /*Mask the External interrupt8 (WUF29)*/
  MCU_EIC131 = MCU_WAKEUP_INTP_MASK;
  /*Mask the External interrupt9 (WUF30)*/
  MCU_EIC132 = MCU_WAKEUP_INTP_MASK;
  /*Mask the TIM shared interrupt 1(WUF31)*/
  MCU_EIC141 = MCU_WAKEUP_INTP_MASK;
  /*Mask the TIM shared interrupt 3(WUF32)*/
  MCU_EIC142 = MCU_WAKEUP_INTP_MASK;
  /*Mask the MTTCAN0 interrupt(WUF33)*/
  MCU_EIC174 = MCU_WAKEUP_INTP_MASK;
  /*Mask the MCAN0 interrupt(WUF34)*/
  MCU_EIC177 = MCU_WAKEUP_INTP_MASK;
  /*Mask the Ethernet interrupt(WUF35)*/
  MCU_EIC184 = MCU_WAKEUP_INTP_MASK;
  /*Mask the Flexray 0 interrupt(WUF36)*/
  MCU_EIC186 = MCU_WAKEUP_INTP_MASK;
  /*Mask the Flexray 1 interrupt(WUF37)*/
  MCU_EIC197 = MCU_WAKEUP_INTP_MASK;
  /*Mask the RSENT 0 receive interrupt(WUF38)*/
  MCU_EIC209 = MCU_WAKEUP_INTP_MASK;
  /*Mask the RSENT 1 receive interrupt(WUF39)*/
  MCU_EIC211 = MCU_WAKEUP_INTP_MASK;
  /*Mask the RLIN30 RXD interrupt(WUF40)*/
  MCU_EIC240 = MCU_WAKEUP_INTP_MASK;
  /*Mask the RLIN31 RXD interrupt(WUF41)*/
  MCU_EIC241 = MCU_WAKEUP_INTP_MASK;
  /*Mask the MTTCAN0 CRXD interrupt(WUF42)*/
  MCU_EIC242 = MCU_WAKEUP_INTP_MASK;
  /*Mask the MCAN0 CRXD interrupt(WUF43)*/
  MCU_EIC243 = MCU_WAKEUP_INTP_MASK;
  /*Mask the FR0 FLXRXDA interrupt(WUF44)*/
  MCU_EIC244 = MCU_WAKEUP_INTP_MASK;
  /*Mask the FR1 FLXRXDA interrupt(WUF45)*/
  MCU_EIC245 = MCU_WAKEUP_INTP_MASK;
  /*Unmask the interrupt of events which are used for wake up*/
  /* QAC Warning: START Msg (2:2814)-8  */
  RH850_SV_MODE_IMR_WRITE_ONLY(32,&MCU_IMR0,
                                        (~(LpModeSetting->ulImr0MaskValue)));
  /* END Msg (2:2814)-8  */
  RH850_SV_MODE_IMR_WRITE_ONLY(32,&MCU_IMR1,
                                        (~(LpModeSetting->ulImr1MaskValue)));
  RH850_SV_MODE_IMR_WRITE_ONLY(32,&MCU_IMR2,
                                        (~(LpModeSetting->ulImr2MaskValue)));
  RH850_SV_MODE_IMR_WRITE_ONLY(32,&MCU_IMR3,
                                        (~(LpModeSetting->ulImr3MaskValue)));
  RH850_SV_MODE_IMR_WRITE_ONLY(32,&MCU_IMR4,
                                        (~(LpModeSetting->ulImr4MaskValue)));
  RH850_SV_MODE_IMR_WRITE_ONLY(32,&MCU_IMR5,
                                        (~(LpModeSetting->ulImr5MaskValue)));
  RH850_SV_MODE_IMR_WRITE_ONLY(32,&MCU_IMR6,
                                        (~(LpModeSetting->ulImr6MaskValue)));
  RH850_SV_MODE_IMR_WRITE_ONLY(32,&MCU_IMR7,
                                        (~(LpModeSetting->ulImr7MaskValue)));
}

/*******************************************************************************
** Function Name      : Mcu_ConfigureEcmRamErrors
**
** Service ID         : 0x0D
**
** Description        : This service configure ECM errors of RAM.
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variables   : Mcu_GpEcmSetting
**
** Function Invoked   : Mcu_ConfigureEcmRamErrorsSetting
**
** Registers Used     : ECMnMICFG0,ECMnNMICFG0,ECMnIRCFG0,ECMnEMK0,ECMnMICFG1
**                      ECMnNMICFG1,ECMnIRCFG1,ECMnEMK1,ECMnPCMD1,ECMnPS
*******************************************************************************/
/* Implements MCU_ESDD_UD_017 */
/* Implements EAAR_PN0079_FR_0012, EAAR_PN0079_FSR_0042, EAAR_PN0034_FR_0023 */
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_ConfigureEcmRamErrors
                         (CONST(Mcu_ECMInstance, MCU_CONST) McuEcmIndex)
{


  P2CONST(Mcu_EcmSetting, AUTOMATIC, MCU_CONFIG_CONST) LpEcmSetting;
  VAR(uint32,AUTOMATIC)                                LulDataByte;
  VAR(boolean,AUTOMATIC)                               LblEcmErrorflag;
  VAR(boolean,AUTOMATIC)                               LblDemReported;
  uint8 LucIndex;

  Std_ReturnType LenReturnValue;

  P2VAR(volatile uint32, AUTOMATIC, MCU_CONFIG_CONST)  LpEcmConfigAddress;
  VAR(uint8,AUTOMATIC)                                 LucLoopcount;

  LblDemReported = MCU_FALSE;
    /* Initialize the index value */
  LucIndex = MCU_ZERO;
  LpEcmSetting = Mcu_GpEcmSetting;
  LenReturnValue = E_OK;
  /* MISRA Violation: START Msg (4:0303)-1 */
  LpEcmConfigAddress = ((volatile uint32*) MCU_LONG_WORD_ZERO);
  /* END Msg (4:0303)-1 */
  do
  {
    /*Initialize the ECM error flag as true*/
    LblEcmErrorflag = MCU_TRUE;

    switch (LucIndex)
    {
    case MCU_ZERO:
        /* ECM maskable interrupt(Reg0) configuration for RAM */
        /* QAC Warning: START Msg (2:2814)-8  */
        if(MCU_LONG_WORD_ZERO != (LpEcmSetting->ulEcmMaskInterReg0value &
                                                          MCU_RAM_MASK0_VALUE))
        /* END Msg (2:2814)-8  */
         {
           /* Update the Ecm config address to maskable interrupt
             config reg0 */
           LpEcmConfigAddress = &Ecm0_BaseAddress[McuEcmIndex]->MICFG0;
           /* Load the configured MI value to LulDataByte */
           LulDataByte = LpEcmSetting->ulEcmMaskInterReg0value;
         }
         else
         {
           /*Update the ECM error flag as false*/
           LblEcmErrorflag = MCU_FALSE;
         }
        break;
    case MCU_ONE:
        /* ECM Non maskable interupt(Reg0) configuration for RAM */
        if(MCU_LONG_WORD_ZERO != (LpEcmSetting->ulEcmNonMaskInterReg0value &
                                                          MCU_RAM_MASK0_VALUE))
        {
          /* Update the Ecm config address to non-maskable interrupt
            config reg0 */
          LpEcmConfigAddress = &Ecm0_BaseAddress[McuEcmIndex]->NMICFG0;
          /* Load the configured NMI value to LulDataByte */
          LulDataByte = LpEcmSetting->ulEcmNonMaskInterReg0value;
        }
        else
        {
          /*Update the ECM error flag as false*/
          LblEcmErrorflag = MCU_FALSE;
        }
        break;
    case MCU_TWO:
        /* ECM Internal reset(Reg0) configuration for RAM */
        if (MCU_LONG_WORD_ZERO != (LpEcmSetting->ulEcmInternalResetReg0value &
                                                         MCU_RAM_MASK0_VALUE))
        {
          /*Update the Ecm config address to internal reset config reg0*/
          LpEcmConfigAddress = &Ecm0_BaseAddress[McuEcmIndex]->IRCFG0;
          /* Load the configured Internal reset value to LulDataByte */
          LulDataByte = LpEcmSetting->ulEcmInternalResetReg0value;
        }
        else
        {
          /*Update the ECM error flag as false*/
          LblEcmErrorflag = MCU_FALSE;
        }
        break;
    case MCU_THREE:
        /* ECM error mask(Reg0) configuration for RAM */
        if(MCU_LONG_WORD_ZERO != (LpEcmSetting->ulEcmErrorMaskReg0Value &
                                                          MCU_RAM_MASK0_VALUE))
        {
          /* Update the Ecm config address to error mask config reg0 */
          LpEcmConfigAddress = &Ecm0_BaseAddress[McuEcmIndex]->EMK0;
          /* Load the configured Error Mask value to LulDataByte */
          LulDataByte = LpEcmSetting->ulEcmErrorMaskReg0Value;
        }
        else
        {
          /*Update the ECM error flag as false*/
          LblEcmErrorflag = MCU_FALSE;
        }
        break;
    case MCU_FOUR:
        /* ECM maskable interrupt(Reg1) configuration for RAM */
        if(MCU_LONG_WORD_ZERO != (LpEcmSetting->ulEcmMaskInterReg1value &
                                                          MCU_RAM_MASK1_VALUE))
        {
          /* Update the Ecm config address to maskable interrupt
             config reg1 */
          LpEcmConfigAddress = &Ecm0_BaseAddress[McuEcmIndex]->MICFG1;
          /* Load the configured MI value to LulDataByte */
          LulDataByte = LpEcmSetting->ulEcmMaskInterReg1value;
        }
        else
        {
          /*Update the ECM error flag as false*/
          LblEcmErrorflag = MCU_FALSE;
        }
        break;
    case MCU_FIVE:
        /* ECM Non maskable interupt(Reg1) configuration for RAM */
        if(MCU_LONG_WORD_ZERO != (LpEcmSetting->ulEcmNonMaskInterReg1value &
                                                         MCU_RAM_MASK1_VALUE))
        {
          /* Update the Ecm config address to non-maskable interrupt
             config reg1 */
          LpEcmConfigAddress = &Ecm0_BaseAddress[McuEcmIndex]->NMICFG1;
          /* Load the configured NMI value to LulDataByte */
          LulDataByte = LpEcmSetting->ulEcmNonMaskInterReg1value;
        }
        else
        {
          /*Update the ECM error flag as false */
          LblEcmErrorflag = MCU_FALSE;
        }
        break;
    case MCU_SIX:
        /* ECM Internal reset(Reg1) configuration for RAM */
        if (MCU_LONG_WORD_ZERO != (LpEcmSetting->ulEcmInternalResetReg1value &
                                                       MCU_RAM_MASK1_VALUE))
        {
          /*Update the Ecm config address to internal reset config reg1*/
          LpEcmConfigAddress = &Ecm0_BaseAddress[McuEcmIndex]->IRCFG1;
          /* Load the configured Internal reset value to LulDataByte */
          LulDataByte = LpEcmSetting->ulEcmInternalResetReg1value;
        }
        else
        {
          /*Update the ECM error flag as false*/
          LblEcmErrorflag = MCU_FALSE;
        }
        break;
    case MCU_SEVEN:
        /* ECM error mask(Reg1) configuration for RAM */
        if (MCU_LONG_WORD_ZERO != (LpEcmSetting->ulEcmErrorMaskReg1Value &
                                                          MCU_RAM_MASK1_VALUE))
        {
          /* Update the Ecm config address to error mask config reg1 */
          LpEcmConfigAddress = &Ecm0_BaseAddress[McuEcmIndex]->EMK1;
          /* Load the configured Error Mask value to LulDataByte */
          LulDataByte = LpEcmSetting->ulEcmErrorMaskReg1Value;
        }
        else
        {
          /*Update the ECM error flag as false*/
          LblEcmErrorflag = MCU_FALSE;
        }
        break;
    /* MISRA Violation: START Msg (2:2881)-6  */
    /* Start Tag MCU_UT_001 */
    default:
        break;
    /* End Tag MCU_UT_001 */
    /* END Msg (2:2881)-6  */
    /* MISRA Violation: START Msg (2:2016)-7  */
    }
    /* END Msg (2:2016)-7  */

    /*Check if ECM error flag is true or not*/
    if(MCU_TRUE == LblEcmErrorflag )
    {
      /*Write the configured values into the ECM Registers*/
      LucLoopcount = MCU_LOOPCOUNT;
      /* MISRA Violation: START Msg (2:2813)-9  */
      MCU_PROTECTEDWRITE32BIT (*LpEcmConfigAddress,LulDataByte,
        (Ecm0_BaseAddress[McuEcmIndex]->PCMD1),
              (Ecm0_BaseAddress[McuEcmIndex]->PS), LucLoopcount, LenReturnValue)
     /* END Msg (2:2813)-9  */
      /* Read back the ECM register*/
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(LpEcmConfigAddress,
         (uint32)LulDataByte, (uint32)MCU_FULL_MASK, MCU_CONFIGUREECMRAMERR_SID)
      /* Check whether Dem reported or not */
      if (E_NOT_OK == LenReturnValue)
      {
        LblDemReported = MCU_TRUE;
      }
      else
      {
        /* No action */
      }
    }
    else
    {
      /* No action */
    }
    /* Increment the Index value */
    LucIndex++;
   }while((LucIndex < MCU_EIGHT) && (MCU_FALSE == LblDemReported));

  return (LenReturnValue);
}

#if (STD_ON == MCU_CLMA_SELFDIAGNOSTIC_TEST)
/******************************************************************************
** Function Name      : Mcu_ClmaSelfDiagnosticTest
**
** Service ID         : None
**
** Description        : This service is to check CLMA self diagnostic test
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : none
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variables   : None
**
** Function Invoked   : Dem_ReportErrorStatus
**
** Registers Used     : CLMAnCTL0,CLMAnCMPH,CLMAnPCMD,CLMAnPS,CLMATESTS,
**                      CLMATEST
******************************************************************************/
/* Implements MCU049, EAAR_PN0079_FSR_0064 */
/* Implements MCU_ESDD_UD_077, EAAR_PN0079_FSR_0022, MCU_ESDD_UD_071 */
/* Implements EAAR_PN0079_FSR_0081,EAAR_PN0079_FSR_0083,EAAR_PN0079_FSR_0084 */
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_ClmaSelfDiagnosticTest
                              (CONST(Mcu_CLMAInstance, MCU_CONST) Mcu_ClmaIndex)
{

  VAR(Std_ReturnType, AUTOMATIC) LenReturnValue;
  VAR(uint32, AUTOMATIC)LulClmaXTestValue;
  VAR(uint8, AUTOMATIC) LucClmaDiagIndex;
  VAR(uint32, AUTOMATIC) LulClmaCount;
  VAR(uint8, AUTOMATIC)LucLoopcount;

  P2CONST(Mcu_CLMASelfDiag, MCU_VAR, MCU_CONFIG_CONST)LpCLMASelfDiag;
  P2CONST(Mcu_CLMASelfDiag, MCU_VAR, MCU_CONFIG_CONST) LpClmaSelfDiagConfigPtr;

  /* MISRA Violation: START Msg (4:0316)-3 */
  /* QAC Warning: START Msg (2:2814)-8  */
  LpCLMASelfDiag =
    (P2CONST(Mcu_CLMASelfDiag, MCU_VAR, MCU_CONFIG_CONST))
                                           (Mcu_GpConfigPtr->pCLMASelfDiagTest);
  /* END Msg (2:2814)-8 */
  /* END Msg (4:0316)-3 */

  /* Initialize Clock monitor index */
  LucClmaDiagIndex = MCU_ZERO;
  /* Initialize the return value */
  LenReturnValue = E_OK;

  LpClmaSelfDiagConfigPtr = LpCLMASelfDiag;

  LulClmaXTestValue = (uint32)MCU_ZERO;

  switch(Mcu_ClmaIndex)
  {
  /* QAC Warning: START Msg (2:2814)-8  */
  case MCU_ZERO:
      LulClmaCount = LpClmaSelfDiagConfigPtr->ulClma0DelayCount;
      break;
  case MCU_ONE:
      LulClmaCount = LpClmaSelfDiagConfigPtr->ulClma1DelayCount;
      break;
  case MCU_TWO:
      LulClmaCount = LpClmaSelfDiagConfigPtr->ulClma2DelayCount;
      break;
  case MCU_THREE:
      LulClmaCount = LpClmaSelfDiagConfigPtr->ulClma3DelayCount;
      break;
  case MCU_FOUR :
      LulClmaCount = LpClmaSelfDiagConfigPtr->ulClma4DelayCount;
    /* END Msg (2:2814)-8  */
      break;
  /* MISRA Violation: START Msg (2:2881)-6  */
  /* Start Tag MCU_UT_001 */
  default:
      break;
  /* End Tag MCU_UT_001 */
  /* END Msg (2:2881)-6  */
  /* MISRA Violation: START Msg (2:2016)-7  */
  }
  /* END Msg (2:2016)-7  */
  do
  {
    switch (LucClmaDiagIndex)
    {
    case MCU_ZERO:
        /* MISRA Violation: START Msg (4:2842)-7  */
        /* MISRA Violation: START Msg (2:3892)-4 */
        if(MCU_ZERO == (uint8)(Clma_BaseAddress[Mcu_ClmaIndex]->CTL0 & MCU_ONE))
        {
          /* Set the Higher threshold value for frequency limit to zero in
          * the compare register to generate error
          */
          Clma_BaseAddress[Mcu_ClmaIndex]->CMPH = (uint16)MCU_ZERO;
          MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
          &(Clma_BaseAddress[Mcu_ClmaIndex]->CMPH), (uint16)MCU_ZERO,
                                          MCU_CMPH_WV_MASK, MCU_INITCLOCK_SID)
          /* END Msg (2:3892)-4 */
          /* END Msg (4:2842)-7  */
          /* Update return variable as E_OK */
          LenReturnValue = E_OK;
        }
        else
        {
            LenReturnValue = E_NOT_OK;
        }
        /* Set the value to enable the Self testing for CLMAn.
        */
        LulClmaXTestValue = (uint32)(CLMA_SELF_TEST_VALUE << Mcu_ClmaIndex);
        break;

    case MCU_ONE:
        /* Check the clock monitor status bit for error detection */
        /* MISRA Violation: START Msg (2:3892)-4 */
        if (((uint32)MCU_CLMATESTS & ((uint32)MCU_ONE << Mcu_ClmaIndex)) ==
            (uint32)MCU_ZERO)
        {
        /* END Msg (2:3892)-4 */
                /* Mask the error notification to ECM. */
                LulClmaXTestValue = (LulClmaXTestValue | (uint32)MCU_FOUR);
        }
        else
        {
            LenReturnValue = E_NOT_OK;
        }
        break;

    case MCU_TWO:
        /* Initialize the retry count to config value */
        LucLoopcount = MCU_LOOPCOUNT;
        /* Write data to protected CLMA0 control register */
        /* MISRA Violation: START Msg (2:3892)-4 */
        /* MISRA Violation: START Msg (4:4464)-5 */
        /* MISRA Violation: START Msg (4:2842)-7  */
        MCU_PROTECTEDWRITE8BIT ((Clma_BaseAddress[Mcu_ClmaIndex]->CTL0),
        (MCU_ONE),(Clma_BaseAddress[Mcu_ClmaIndex]->PCMD),
        (Clma_BaseAddress[Mcu_ClmaIndex]->PS),LucLoopcount,LenReturnValue)
        /* END Msg (4:2842)-7  */
        /* END Msg (4:4464)-5 */

        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&
                                    (Clma_BaseAddress[MCU_ZERO]->CTL0),
                    (MCU_ONE), MCU_CTL0_WV_MASK, MCU_INITCLOCK_SID)
        /* END Msg (2:3892)-4 */
        if(E_OK == LenReturnValue)
        {

          /* wait for sampling cycles to set corresponding error status */
          do
          {
            LulClmaCount--;
          /* MISRA Violation: START Msg (2:3892)-4 */
            /* Start Tag MCU_UT_006 */
          }while((((uint32)MCU_CLMATESTS & ((uint32)MCU_ONE << Mcu_ClmaIndex))!=
           ((uint32)MCU_ONE << Mcu_ClmaIndex)) &&
                                            ((uint32)LulClmaCount > MCU_ZERO));
          /* End Tag MCU_UT_006 */
          /* END Msg (2:3892)-4 */
          /* Check the clock monitor status bit for error detection */
          /* MISRA Violation: START Msg (2:3892)-4 */
          if (((uint32)MCU_CLMATESTS & ((uint32)MCU_ONE << Mcu_ClmaIndex))!=
                                       ((uint32)MCU_ONE << Mcu_ClmaIndex))

          /* END Msg (2:3892)-4 */
          {
            /* Implements MCU_ESDD_UD_087 */
            /* Self Diagnostic test for CLMA is failed.*/
            Dem_ReportErrorStatus(MCU_E_CLM_SELFDIAG_FAILURE,
                                       DEM_EVENT_STATUS_FAILED);
            LenReturnValue = E_NOT_OK;
          }
          else
          {
            /* Set the value to clear the error generated by self-diagnosis */
            LulClmaXTestValue = (MCU_CLMATEST | (uint32)MCU_ONE);
          }
        }
        else
        {
           /* No action required */
        }
        break;

    case MCU_THREE:
        /*Set the value to terminate self-diagnosis by writing zero */
        LulClmaXTestValue = (uint32)MCU_ZERO;
        break;
    /* MISRA Violation: START Msg (2:2881)-6  */
    /* Start Tag MCU_UT_001 */
    default:
        break;
    /* End Tag MCU_UT_001 */
    /* END Msg (2:2881)-6  */
    /* MISRA Violation: START Msg (2:2016)-7  */
    }
    /* END Msg (2:2016)-7  */
    if(E_OK == LenReturnValue)
    {
      MCU_CLMATEST = LulClmaXTestValue;
      /* QAC Warning: START Msg(2:3416)-12 */
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&MCU_CLMATEST, LulClmaXTestValue,
                                       MCU_CLMATEST_WV_MASK, MCU_INITCLOCK_SID)
      /* Increase the index */
      LucClmaDiagIndex++;
      /* END Msg(2:3416)-12 */
    }
    else
    {
      /* No action required */
    }
  }while ((LucClmaDiagIndex < MCU_FOUR) && (E_OK == LenReturnValue));

  return (LenReturnValue);
}
#endif /* (STD_ON == MCU_CLMA_SELFDIAGNOSTIC_TEST) */

#if (STD_ON == MCU_CVM_SELFDIAGNOSTIC_TEST)
/******************************************************************************
** Function Name      : Mcu_CvmSelfDiagnosticTest
**
** Service ID         : None
**
** Description        : This service is to check CVM self diagnostic test
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : none
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variables   : Mcu_GpConfigPtr
**
** Function Invoked   : Mcu_CvmSelfDiagnosticSetting
**
** Registers Used     : CVMFC, CVMF, CVMDMASK, CVMDIAG, CVMMON
******************************************************************************/
/* Implements MCU_ESDD_UD_081, MCU_ESDD_UD_072 */
/* Implements MCU_ESDD_UD_075, EAAR_PN0079_FSR_0072, EAAR_PN0079_FSR_0074 */
/* Implements EAAR_PN0079_FSR_0103 */
/* Implements EAAR_PN0079_FSR_0080, MCU152, EAAR_PN0034_FSR_0011 */
/* Implements EAAR_PN0079_FSR_0079, EAAR_PN0079_FSR_0073, EAAR_PN0034_FR_0018 */
/* Implements EAAR_PN0034_FSR_0012, EAAR_PN0034_NR_0020  */
/* QAC Warning: START Msg (0:2755)-15 */
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_CvmSelfDiagnosticTest (void)
{
/* END Msg(0:2755)-15 */
  VAR(Std_ReturnType, AUTOMATIC) LenReturnValue;
  VAR(uint8, AUTOMATIC) LucLoopCount;

  /* Initialize the loop count value */
  LucLoopCount = MCU_LOOPCOUNT;

  /* Check if CVM output mask is configured */
  /* QAC Warning: START Msg (2:2814)-8  */
  if (MCU_CVM_DIAG_MASK == (Mcu_GpConfigPtr->ucCvmDiagMask))
  /* END Msg (2:2814)-8  */
  {
    /* Clear all the error flags before starting the self diagnostic testing */
    /* QAC Warning: START Msg(2:3416)-12 */
    if(MCU_ZERO != MCU_CVMF)
    /* END Msg (2:3416)-12 */
    {
      do
      {
        /* Write the value to the CVM factor clear register  */
        MCU_CVMFC = MCU_CVM_FACTOR_CLEAR;
        LucLoopCount--;
      /* QAC Warning: START Msg(2:3416)-12 */
      /* Start Tag MCU_UT_007 */
      }while((MCU_ZERO != MCU_CVMF) && (LucLoopCount > MCU_ZERO));
      /* End Tag MCU_UT_007 */
      /* END Msg (2:3416)-12 */

      /* Register Write Verify */
     MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(MCU_CVMF), (uint32)MCU_ZERO,
      (uint32)MCU_CVMF_MASK, MCU_INIT_SID)
    }
    else
    {
      /* No action required */
    }
    /* QAC Warning: START Msg(2:3416)-12 */
    if(MCU_ZERO == MCU_CVMF)
    /* END Msg (2:3416)-12 */
    {
      /* Mask CVMOUT output in self diagnosis mode */
      MCU_CVMDMASK = MCU_ONE;
      /* MISRA Violation: START Msg (2:3892)-4 */
      /* Register Write Verify */
      MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(MCU_CVMDMASK), MCU_ONE,
      MCU_CVMDMASK_WV_MASK, MCU_INIT_SID)
      /* END Msg (2:3892)-4 */
      /* Generate CVM low and high voltage error condition using DIAG registers
       * and check the status registers accordingly
       */
      /* Setting Cvm Self Diagonistic related registers  */
      LenReturnValue = Mcu_CvmSelfDiagnosticSetting();
    }
    else
    {
      LenReturnValue = E_NOT_OK;
    }
  }
  else
  {
    /* Clear all the error flags before starting the self diagnostic testing */

    /* MISRA Violation: START Msg (4:3415)-6 */
    /* QAC Warning: START Msg(2:3416)-12 */
    if((MCU_ZERO != MCU_CVMF) && (MCU_ONE != MCU_CVMMON))
    /* END Msg (2:3416)-12 */
     /* END Msg (4:3415)-6 */
    {
      do
      {
        /* Write the value to the CVM factor clear register  */
        MCU_CVMFC = MCU_CVM_FACTOR_CLEAR;
        LucLoopCount--;
      /* MISRA Violation: START Msg (4:3415)-6 */
      /* QAC Warning: START Msg(2:3416)-12 */
      /* Start Tag MCU_UT_007 */
      }while ((MCU_ZERO != MCU_CVMF) && (MCU_ONE != MCU_CVMMON) &&
                                            (LucLoopCount > MCU_ZERO));
      /* End Tag MCU_UT_007 */
      /* END Msg (2:3416)-12 */
      /* END Msg (4:3415)-6 */
      /* MISRA Violation: START Msg (2:3892)-4 */
      /* Register Write Verify */
      MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(MCU_CVMMON), (uint8)MCU_ONE,
      MCU_CVMMON_WV_MASK, MCU_INIT_SID)

      MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(MCU_CVMF), (uint8)MCU_ZERO,
       MCU_CVMF_MASK, MCU_INIT_SID)
      /* END Msg (2:3892)-4 */
    }
    else
    {
      /* No action */
    }
    /* MISRA Violation: START Msg (4:3415)-6 */
    /* QAC Warning: START Msg(2:3416)-12 */
    if((MCU_ZERO == MCU_CVMF) && (MCU_ONE == MCU_CVMMON))
    /* END Msg (2:3416)-12 */
    /* END Msg (4:3415)-6 */
    {
       /* Generate CVM low and high voltage error condition using DIAG registers
        * and check the status registers accordingly
       */
      /* Setting Cvm Self Diagonistic related registers  */
      LenReturnValue = Mcu_CvmSelfDiagnosticSetting();
    }
    else
    {
     LenReturnValue = E_NOT_OK;
    }
  }
  return (LenReturnValue);
}
#endif /* (STD_ON == MCU_CVM_SELFDIAGNOSTIC_TEST) */

/* Implements MCU_ESDD_UD_075 */
#if (STD_ON == MCU_CVM_SELFDIAGNOSTIC_TEST)
/******************************************************************************
** Function Name      : Mcu_CvmSelfDiagnosticSetting
**
** Service ID         : None
**
** Description        : This service is to set CVM self Diagnostic Test
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : none
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variables   : Mcu_GpConfigPtr
**
** Function Invoked   : Dem_ReportErrorStatus, Mcu_CvmNormalModeSetting
**
** Registers Used     : CVMFC, CVMF, CVMDMASK, CVMDIAG, CVMMON
******************************************************************************/
/* Implements MCU_ESDD_UD_080, MCU_ESDD_UD_072 */
/* Implements MCU152,EAAR_PN0034_FSR_0011, MCU017, MCU166, MCU049 */
/* Implements EAAR_PN0079_FSR_0116 */
/* Implements EAAR_PN0034_FR_0018, EAAR_PN0034_FSR_0012, EAAR_PN0034_NR_0020 */
/* Implements MCU_ESDD_UD_035 */
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_CvmSelfDiagnosticSetting(void)
{
  VAR(Std_ReturnType, AUTOMATIC) LenReturnValue;
  VAR(Std_ReturnType, AUTOMATIC) LenReturnValue1;
  VAR(uint16, AUTOMATIC) LusLoopCount;

  /* Initialize the return value */
  LenReturnValue1 = E_OK;

  /* Forcibly generation of high voltage and low voltage error */
  MCU_CVMDIAG = MCU_TWELVE;
  /* Register Write Verify */
  /* MISRA Violation: START Msg (2:3892)-4 */
  MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(MCU_CVMDIAG), MCU_TWELVE,
                                       MCU_CVMDIAG_WV_MASK, MCU_INIT_SID)
  /* END Msg (2:3892)-4 */
  /* check error status register until idle wait time 16 us */
  LusLoopCount = MCU_CVM_DELAY_CNT;

  /* QAC Warning: START Msg (2:2814)-8  */
  if (MCU_CVM_DIAG_MASK == (Mcu_GpConfigPtr->ucCvmDiagMask))
  /* END Msg (2:2814)-8  */
  {
    do
    {
      LusLoopCount--;
    /* QAC Warning: START Msg(2:3416)-12 */
    }while((MCU_CVMF != MCU_CVM_MASK_ERROR_CHECK) &&
                                             ((uint16)MCU_ZERO < LusLoopCount));
    /* Check the status of CVM Error in Factor register  */
    if (MCU_CVMF != MCU_CVM_MASK_ERROR_CHECK)
    /* END Msg(2:3416)-12 */
    {
      /* Self Diagnostic test for CVM is failed.*/
      /* Implements MCU_ESDD_UD_086 */
      Dem_ReportErrorStatus(MCU_E_CVM_SELFDIAG_FAILURE,
      DEM_EVENT_STATUS_FAILED);
      /* Set LenReturnValue to E_NOT_OK */
      LenReturnValue1 = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    /* Disable diagnosis mode or enable normal mode*/
    LenReturnValue = Mcu_CvmNormalModeSetting();
  }
  else
  {
    do
    {
      LusLoopCount--;
    /* QAC Warning: START Msg(2:3416)-12 */
    }while((MCU_CVMF != MCU_CVM_UNMASKED_ERROR_CHECK) &&
                                          ((uint16)MCU_ZERO < LusLoopCount));

    /* Check the status of CVM Error in Factor register  */
    /* MISRA Violation: START Msg (4:3415)-6 */
    if ((MCU_CVMF != MCU_CVM_UNMASKED_ERROR_CHECK) && (MCU_ZERO != MCU_CVMMON))
    /* END Msg(4:3415)-6 */
    /* END Msg(2:3416)-12 */
    {
      /* Self Diagnostic test for CVM is failed.*/
      /* Implements MCU_ESDD_UD_086 */
      Dem_ReportErrorStatus(MCU_E_CVM_SELFDIAG_FAILURE,
      DEM_EVENT_STATUS_FAILED);
      /* Set LenReturnValue to E_NOT_OK */
      LenReturnValue1 = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    /* Disable diagnosis mode or enable normal mode*/
    LenReturnValue = Mcu_CvmNormalModeSetting();
  }
  LenReturnValue = (LenReturnValue | LenReturnValue1);
  return (LenReturnValue);
}
#endif /*(STD_ON == MCU_CVM_SELFDIAGNOSTIC_TEST) */

/* Implements MCU_ESDD_UD_075 */
#if (STD_ON == MCU_CVM_SELFDIAGNOSTIC_TEST)
/******************************************************************************
** Function Name      : Mcu_CvmNormalModeSetting
**
** Service ID         : None
**
** Description        : This service is used to do set normal functionality
**                      from CVM Diagnostic Mode.
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : none
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variables   : None
**
** Function Invoked   : None
**
** Registers Used     : CVMFC, CVMF, CVMDMASK, CVMDIAG, CVMMON
******************************************************************************/
/* Implements MCU_ESDD_UD_082,MCU_ESDD_UD_080 */
/* Implements MCU_ESDD_UD_072 */
/* Implements MCU152, EAAR_PN0034_FSR_0011, EAAR_PN0079_FSR_0023 */
/* Implements EAAR_PN0079_FSR_0024, EAAR_PN0034_FR_0018, EAAR_PN0034_FSR_0012 */

STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_CvmNormalModeSetting(void)
{
  VAR(Std_ReturnType, AUTOMATIC) LenReturnValue;
  VAR(uint8, AUTOMATIC) LucLoopCount;
  LenReturnValue = E_OK;

  /* Disable diagnosis mode or enable normal mode*/
  MCU_CVMDIAG = MCU_ZERO;
  /* Register Write Verify */
  /* MISRA Violation: START Msg (2:3892)-4 */
  MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(MCU_CVMDIAG), MCU_ZERO,
      MCU_CVMDIAG_WV_MASK, MCU_INIT_SID)
   /* END Msg (2:3892)-4 */
  /* Initialize the loop count value */
  LucLoopCount = MCU_LOOPCOUNT;
  /* Wait for idle time after shifting to normal mode*/
  /* QAC Warning: START Msg (2:2814)-8  */
  if (MCU_CVM_DIAG_MASK == (Mcu_GpConfigPtr->ucCvmDiagMask))
  /* END Msg (2:2814)-8  */
  {
    do
    {
      /* Write the value to the CVM factor clear register  */
      MCU_CVMFC =  MCU_THREE;
      LucLoopCount--;

    /* QAC Warning: START Msg(2:3416)-12 */
    }while ((MCU_ZERO != MCU_CVMF) && (LucLoopCount > MCU_ZERO));
    /* END Msg(2:3416)-12 */


    MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(MCU_CVMF), (uint32)MCU_ZERO,
                                           (uint32)MCU_CVMF_MASK, MCU_INIT_SID)

    /* QAC Warning: START Msg(2:3416)-12 */
    if(MCU_ZERO == MCU_CVMF)
    /* END Msg(2:3416)-12 */
    {
      /* Write the value to unmask CVMOUT output in diagnosis mode */
      MCU_CVMDMASK = MCU_ZERO;
      /* Register Write Verify */
      /* MISRA Violation: START Msg (2:3892)-4 */
      MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(MCU_CVMDMASK), MCU_ZERO,
                                       MCU_CVMDMASK_WV_MASK, MCU_INIT_SID)
      /* END Msg (2:3892)-4 */
    }
    else
    {
      LenReturnValue = E_NOT_OK;
    }
  }
  else
  {
    do
    {
      /* Write the value to the CVM factor clear register  */
      MCU_CVMFC =  MCU_CVM_FACTOR_CLEAR;
      LucLoopCount--;

    /* MISRA Violation: START Msg (4:3415)-6 */
    /* QAC Warning: START Msg(2:3416)-12 */
    }while ((MCU_ZERO != MCU_CVMF) && (MCU_ONE != MCU_CVMMON) &&
                                                    (LucLoopCount > MCU_ZERO));
    /* END Msg(2:3416)-12 */
    /* END Msg(4:3415)-6 */

    /* Register Write Verify */
    /* MISRA Violation: START Msg (2:3892)-4 */
    MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(MCU_CVMF), MCU_ZERO,
                                           MCU_CVMF_MASK, MCU_INIT_SID)

    MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(MCU_CVMMON), MCU_ONE,
                                           MCU_CVMMON_WV_MASK, MCU_INIT_SID)
     /* END Msg (2:3892)-4 */
    /* MISRA Violation: START Msg (4:3415)-6 */
    /* QAC Warning: START Msg(2:3416)-12 */
    if((MCU_ZERO != MCU_CVMF) && (MCU_ONE != MCU_CVMMON))
    /* END Msg(2:3416)-12 */
    /* END Msg(4:3415)-6 */
    {
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action */
    }
  }
  return (LenReturnValue);
}
#endif

#if (STD_ON == MCU_LOCKSTEP_SELFDIAGNOSTIC_TEST)
/******************************************************************************
** Function Name      : Mcu_LockStepSelfDiagnosticTest
**
** Service ID         : None
**
** Description        : This service is to check Lock Step self diagnostic test
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : none
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variables   : None
**
** Function Invoked   : Dem_ReportErrorStatus, MCU_ENTER_CRITICAL_SECTION
**                      MCU_EXIT_CRITICAL_SECTION
**
** Registers Used     : CMPTST0,CMPTST1,ECMMnESSTR0,ECMnESSTC0,ECMnPCMD1,
**                      ECMnPS
******************************************************************************/

/* Implements MCU_ESDD_UD_083,MCU_ESDD_UD_072,MCU049 */
/* Implements EAAR_PN0034_FR_0030 */
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE)
Mcu_LockStepSelfDiagnosticTest (void)
{
  VAR(uint8,AUTOMATIC)                   LucEcmIndex;
  VAR(Std_ReturnType,TYPEDEF)            LenReturnValue;
  VAR(uint8,AUTOMATIC)                   LucLoopCount;

  /* Write the arbitrary value to register CMPTST0 */
  MCU_CMPTST0 = MCU_LOCKSTEP_DUMMY_VALUE;
  /* Write the arbitrary value to register CMPTST1 */
  MCU_CMPTST1 = (~MCU_LOCKSTEP_DUMMY_VALUE);

  /* Read the MCU_CMPTST0 value so that different values will be given
  * to master and checker core, As a result lock step error status will be set
  */
  Mcu_GulTestCompValue = MCU_CMPTST0;

  /* Dummy operation on variable */
  Mcu_GulTestCompValue++;
  /* MISRA Violation: START Msg (4:4447)-9  */
  /* QAC Warning: START Msg(2:3892)-4 */
  /* Get the currently operating core */
  GETPEID(LucEcmIndex)
  /* Start Tag MCU_UT_003 */
  if(MCU_ZERO < LucEcmIndex)
  {
    LucEcmIndex--;
  }
  /* End Tag MCU_UT_003 */
  else
  {
    /* Do Nothing */
  }
  /* END Msg(2:3892)-4 */
  /* END Msg(4:4447)-9  */
  LucLoopCount = MCU_LOOPCOUNT;
  /* check lock step compare error status */
  do
  {
    LucLoopCount--;
  } while (((uint32)MCU_ZERO == ((Ecmm0_BaseAddress[LucEcmIndex]->ESSTR0)
                             & (uint32)MCU_TWO)) && (LucLoopCount > MCU_ZERO));

  if ((uint32)MCU_TWO == ((Ecmm0_BaseAddress[LucEcmIndex]->ESSTR0)
                                                            & (uint32)MCU_TWO))
  {
    /* Implements MCU_ESDD_UD_031 */
    /* Implements EAAR_PN0034_FR_0013,EAAR_PN0034_FR_0061 */
   #if (MCU_CRITICAL_SECTION_PROTECTION == STD_ON)
   MCU_ENTER_CRITICAL_SECTION(MCU_REGISTER_PROTECTION);
   #endif /* (MCU_CRITICAL_SECTION_PROTECTION == STD_ON) */

   /* Initialize the retry count to config value */
  LucLoopCount = MCU_LOOPCOUNT;

  /* Clear the ECM lock step compare error */
  MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->ESSTC0),
              ((uint32)MCU_TWO),(Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
              (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopCount, LenReturnValue)

  /* Read back the Ecm error pulse register*/
    MCU_MASKED_CHECK_WRITE_VERIFY_INIT
      (&(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR0),
                     (uint32)MCU_ZERO, MCU_FULL_MASK, MCU_INIT_SID)

  /* Implements MCU_ESDD_UD_031 */
  /* Implements EAAR_PN0034_FR_0013,EAAR_PN0034_FR_0061 */
  #if (MCU_CRITICAL_SECTION_PROTECTION == STD_ON)
  MCU_EXIT_CRITICAL_SECTION(MCU_REGISTER_PROTECTION);
  #endif /* (MCU_CRITICAL_SECTION_PROTECTION == STD_ON) */
  }
  else
  {
    /* Implements MCU_ESDD_UD_085 */
    Dem_ReportErrorStatus(MCU_E_LOCKSTEP_SELFDIAG_FAILURE,
    DEM_EVENT_STATUS_FAILED);
    LenReturnValue = E_NOT_OK;
  }
  return (LenReturnValue);
}
#endif /* (STD_ON == MCU_LOCKSTEP_SELFDIAGNOSTIC_TEST) */

/*******************************************************************************
** Function Name      : Mcu_ClearEcmErrorOutput
**
** Service ID         : None
**
** Description        : This service is used to make error out put as inactive
**                      during the ECM self diagnostic function call
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : none
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variables   : None
**
** Function Invoked   : MCU_PROTECTEDWRITE32BIT, Mcu_EcmClearStatusRegister
**                      MCU_REG_WRITE_VERIFY
**
** Registers Used       : ECMnEMK2,ECMnPCMD1,ECMnPS
******************************************************************************/
/* Implements MCU_ESDD_UD_088,MCU_ESDD_UD_072 */
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_ClearEcmErrorOutput
                                                        (const uint8 ApiId)
{
  VAR(Std_ReturnType, AUTOMATIC) LenReturnValue;
  VAR(Std_ReturnType, AUTOMATIC) LenReturnValue1;
  VAR(uint8, AUTOMATIC) LucLoopcount;
  VAR(uint8, AUTOMATIC) LucIndex;
  VAR(uint32, AUTOMATIC) LulEcmMaskValue;
  VAR(uint8,AUTOMATIC)  LucEcmIndex;

  LenReturnValue1 = E_OK;
  LenReturnValue= Mcu_EcmClearStatusRegister(ApiId);

  if(E_OK == LenReturnValue)
  {
    LucEcmIndex = MCU_ZERO;
    do
    {
      LucIndex = MCU_ZERO;
      do
      {
        switch (LucIndex)
        {
        case MCU_ZERO:
          /* Disable Error Output by setting the ECMIE029 bit of the
           * ECMEMK2 register to disabled.
           */
          LulEcmMaskValue = (Ecm0_BaseAddress[LucEcmIndex]->EMK2 |
                             MCU_ECMEMK228_MASK_VALUE);

          LucLoopcount = MCU_LOOPCOUNT;
          /* Updated write protect register */
          MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->EMK2),
          (LulEcmMaskValue),(Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
          (Ecm0_BaseAddress[LucEcmIndex]->PS),(LucLoopcount),(LenReturnValue1))

          MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
          (&Ecm0_BaseAddress[LucEcmIndex]->EMK2),(uint32)LulEcmMaskValue,
          MCU_EMK2_WV_MASK, ApiId)

        break;

        case MCU_ONE:
          /* Set the output level from the error pin to the inactive
          * (high) level
          */
          Ecm0_BaseAddress[LucEcmIndex]->PEM = (uint32)MCU_THREE;

          MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
          (&Ecm0_BaseAddress[LucEcmIndex]->PEM),((uint32)MCU_THREE),
           MCU_PEM_WV_MASK, ApiId)
          /* Initialize the retry count to config value */
          LucLoopcount = MCU_LOOPCOUNT;
          MCU_PROTECTEDWRITE32BIT((Ecmm0_BaseAddress[LucEcmIndex]->ECLR),
          MCU_ONE, (Ecmm0_BaseAddress[LucEcmIndex]->PCMD0),
          (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopcount,LenReturnValue1)

        break;

        case MCU_TWO:
        /* Initialize the retry count to config value */
        LucLoopcount = MCU_LOOPCOUNT;
        MCU_PROTECTEDWRITE32BIT((Ecmc0_BaseAddress[LucEcmIndex]->ECLR),
        MCU_ONE, (Ecmc0_BaseAddress[LucEcmIndex]->PCMD0),
        (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopcount,LenReturnValue1)
        break;
        /* MISRA Violation: START Msg (2:2016)-7  */
        /* MISRA Violation: START Msg (2:2881)-6  */
        /* Start Tag MCU_UT_001 */
        default:
            break;
        /* End Tag MCU_UT_001 */
        }
        /* Increment switch case count */
        LucIndex++;
        /* END Msg (2:2881)-6  */
        /* END Msg (2:2016)-7  */
      }while ((MCU_THREE > LucIndex) && (E_OK == LenReturnValue1));
      LucEcmIndex++;
    }while((MCU_NO_OF_ECM_INSTANCES > LucEcmIndex) &&
                                                  (E_OK == LenReturnValue1));

    if(E_OK == LenReturnValue1)
    {
      /* To check the error output pin is in high level for each ECM */
      LucEcmIndex = MCU_ZERO;
      do
      {
        LucLoopcount = MCU_THIRTY;
        do
        {
          LucLoopcount--;
        }while((LucLoopcount > MCU_ZERO) &&
        (MCU_ERROROUT_STATUS != (Ecmm0_BaseAddress[LucEcmIndex]->ESSTR2)));


        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
          ((&Ecmm0_BaseAddress[LucEcmIndex]->ESSTR2),
                     (uint32)MCU_ERROROUT_STATUS, (uint32)MCU_FULL_MASK, ApiId)

        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
          ((&Ecmc0_BaseAddress[LucEcmIndex]->ESSTR2),
                     (uint32)MCU_ERROROUT_STATUS, (uint32)MCU_FULL_MASK, ApiId)

        if((MCU_ERROROUT_STATUS == Ecmm0_BaseAddress[LucEcmIndex]->ESSTR2) &&
           (MCU_ERROROUT_STATUS == Ecmc0_BaseAddress[LucEcmIndex]->ESSTR2))
        {
          /* No action required */
        }
        else
        {
          LenReturnValue1 = E_NOT_OK;
        }
        Ecm0_BaseAddress[LucEcmIndex]->PEM = (uint32)MCU_ZERO;

        #if (STD_ON == MCU_ECM_SELFDIAGNOSTIC_TEST)

        LucLoopcount = MCU_LOOPCOUNT;
        MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->EMK2),
        (MCU_ECMEMK228_UNMASK_VALUE),(Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
        (Ecm0_BaseAddress[LucEcmIndex]->PS),LucLoopcount,LenReturnValue)

        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
        (&Ecm0_BaseAddress[LucEcmIndex]->EMK2),(MCU_ECMEMK228_UNMASK_VALUE),
        MCU_EMK2_WV_MASK, ApiId)

        #endif
       /* MISRA Violation: START Msg(4:2995)-8 */
        LucEcmIndex++;
        /* Start Tag MCU_UT_005 */
      }while((MCU_NO_OF_ECM_INSTANCES > LucEcmIndex) &&
             (E_OK == LenReturnValue) && (E_OK == LenReturnValue1));
      /* End Tag MCU_UT_005 */
      /* END Msg(4:2995)-8 */
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
  LenReturnValue = (LenReturnValue | LenReturnValue1);
  return(LenReturnValue);
}

/*******************************************************************************
** Function Name      : Mcu_EcmClearStatusRegister
**
** Service ID         : None
**
** Description        : This service is used to do clear the status
**                      register of ECM
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : none
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variables   : None
**
** Function Invoked   : MCU_PROTECTEDWRITE32BIT
**                      MCU_REG_WRITE_VERIFY
**
** Registers Used     : ECMMnESSTR0,ECMMnESSTR1,ECMMnESSTR2,ECMCnESSTR0,
**                      ECMCnESSTR1,ECMCnESSTR2,ECMnESSTC1,ECMnESSTC2,ECMnESSTC0
*******************************************************************************/
/* Implements MCU_ESDD_UD_090,MCU_ESDD_UD_072 */
/* QAC Warning: START Msg (2:3206)-14 */
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_EcmClearStatusRegister
                                                           (const uint8 ApiId)
{
/* END Msg(2:3206)-14 */
  VAR(Std_ReturnType, AUTOMATIC) LenReturnValue;
  VAR(uint8, AUTOMATIC) LucLoopCount;
  VAR(uint8,AUTOMATIC)  LucEcmIndex;
  LenReturnValue = E_OK;

  LucEcmIndex = MCU_ZERO;
  do
  {
    /* Clear the status register */
    if (((uint32)MCU_ZERO != (Ecmm0_BaseAddress[LucEcmIndex]->ESSTR0)) &&
        ((uint32)MCU_ZERO != (Ecmc0_BaseAddress[LucEcmIndex]->ESSTR0)))
    {
      /* Initialize the retry count to config value */
      LucLoopCount = MCU_LOOPCOUNT;

      /* Clear the ECM lock step compare error */
      MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->ESSTC0),
                               MCU_ERROR_STATUS_CLEAR,
                              (Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
                              (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopCount,
                               LenReturnValue)

      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
        (&(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR0),(uint32)MCU_LONG_WORD_ZERO,
                                          (uint32)MCU_FULL_MASK,ApiId)
      MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
        (&(Ecmc0_BaseAddress[LucEcmIndex]->ESSTR0),(uint32)MCU_LONG_WORD_ZERO,
                                            (uint32)MCU_FULL_MASK,ApiId)
    }
    else
    {
      /* No action required */
    }
    if(E_OK == LenReturnValue)
    {
      if (((uint32)MCU_ZERO != (Ecmm0_BaseAddress[LucEcmIndex]->ESSTR1)) &&
          ((uint32)MCU_ZERO != (Ecmc0_BaseAddress[LucEcmIndex]->ESSTR1)))
      {
        /* Initialize the retry count to config value */
        LucLoopCount = MCU_LOOPCOUNT;

        /* Clear the ECM lock step compare error */
        MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->ESSTC1),
                               MCU_ERROR_STATUS_CLEAR,
                              (Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
                              (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopCount,
                              LenReturnValue)

        /* Read back the ECM register*/
        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
         (&(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR1),(uint32)MCU_LONG_WORD_ZERO,
                                           (uint32)MCU_FULL_MASK,ApiId)
        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
         (&(Ecmc0_BaseAddress[LucEcmIndex]->ESSTR1),(uint32)MCU_LONG_WORD_ZERO,
                                          (uint32)MCU_FULL_MASK,ApiId)
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
    if(E_OK == LenReturnValue)
    {
      if (((uint32)MCU_ZERO != (Ecmm0_BaseAddress[LucEcmIndex]->ESSTR2)) &&
          ((uint32)MCU_ZERO != (Ecmc0_BaseAddress[LucEcmIndex]->ESSTR2)) &&
          (MCU_ERROROUT_STATUS != (Ecmm0_BaseAddress[LucEcmIndex]->ESSTR2 &
                                    MCU_ERROROUT_STATUS)) &&
          (MCU_ERROROUT_STATUS != (Ecmc0_BaseAddress[LucEcmIndex]->ESSTR2 &
                                    MCU_ERROROUT_STATUS)))
      {
        /* Initialize the retry count to config value */
        LucLoopCount = MCU_LOOPCOUNT;

        /* Clear the ECM lock step compare error */
        MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->ESSTC2),
                                 MCU_ERROR_STATUS_CLEAR,
                                (Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
                                (Ecm0_BaseAddress[LucEcmIndex]->PS),
                                 LucLoopCount,LenReturnValue)

        /* Read back the ECM register*/
        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
         (&(Ecmm0_BaseAddress[LucEcmIndex]->ESSTR2),(uint32)MCU_LONG_WORD_ZERO,
                                           (uint32)MCU_FULL_MASK,ApiId)

        MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
         (&(Ecmc0_BaseAddress[LucEcmIndex]->ESSTR2),(uint32)MCU_LONG_WORD_ZERO,
                                           (uint32)MCU_FULL_MASK,ApiId)
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
    LucEcmIndex++;
  }while((MCU_NO_OF_ECM_INSTANCES > LucEcmIndex) && (E_OK == LenReturnValue));

  return LenReturnValue;
}

/* Implements MCU_ESDD_UD_078 */
#if (STD_ON == MCU_ECM_SELFDIAGNOSTIC_TEST)
/******************************************************************************
** Function Name      : Mcu_EcmSelfDiagnosticTest
**
** Service ID         : None
**
** Description        : This service is to check Ecm self diagnostic test
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : none
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variables   : None
**
** Function Invoked   : MCU_PROTECTEDWRITE32BIT,Mcu_EcmPseudoErrorTest,
**                      Mcu_EcmZeroSelfTest, Mcu_EcmOneSelfTest
**                      MCU_REG_WRITE_VERIFY
**
** Registers Used     : ECMnEOCCFG,ECMnMICFG0,ECMnMICFG1,ECMnMICFG2,ECMnNMICFG0,
**                      ECMnNMICFG1,ECMnNMICFG2,ECMnIRCFG0,ECMnIRCFG1,ECMnIRCFG2
**                      ECMnEMK0,ECMnPCMD1,ECMnPS,ECMnEPCFG,ECMnPE0,ECMnPE1,
**                      ECMnPE2,ECMCnESSTR0,ECMCnESSTR1,ECMCnESSTR2,ECMnPCMD1,
******************************************************************************/
/* Implements MCU_ESDD_UD_072, MCU_ESDD_UD_091 */
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_EcmSelfDiagnosticTest(void)
{
  VAR(Std_ReturnType, AUTOMATIC) LenReturnValue;
  VAR(uint32,AUTOMATIC) LulDataByte;
  VAR(uint8, AUTOMATIC) LucLoopcount;
  VAR(uint8, AUTOMATIC) LucEcmIndex;

  VAR(uint8, AUTOMATIC) LucIndex;
  P2VAR(volatile uint32, AUTOMATIC, MCU_CONFIG_CONST) LpEcmConfigAddress;

  /*Initialize the index to zero */
  LucEcmIndex = MCU_ZERO;

  /* Mask error out pin for all ECM because it is enabled at power up*/
  do
  {
    if((uint32)(Ecm0_BaseAddress[LucEcmIndex]->EOCCFG & MCU_EOCFG_MASK) ==
                                                              (uint32)MCU_ZERO)
    {
    /* Initialize the index value */
      LucIndex = MCU_ZERO;
      do
      {

        switch (LucIndex)
        {
        case MCU_ZERO:
            /* Update the Ecm MICFG0 address to Ecm config address */
            LulDataByte = (uint32)MCU_ZERO;
            LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->MICFG0;
            break;
        case MCU_ONE:
            /* Update the Ecm MICFG1 address to Ecm config address */
            LulDataByte = (uint32)MCU_ZERO;
            LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->MICFG1;
            break;
        case MCU_TWO:
            /* Update the Ecm MICFG2 address to Ecm config address */
            LulDataByte = (uint32)MCU_ZERO;
            LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->MICFG2;
            break;
        case MCU_THREE:
            /* Update the Ecm NMICFG0 address to Ecm config address */
            LulDataByte = (uint32)MCU_ZERO;
            LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->NMICFG0;
            break;
        case MCU_FOUR:
            /* Update the Ecm NMICFG1 address to Ecm config address */
            LulDataByte = (uint32)MCU_ZERO;
            LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->NMICFG1;
            break;
        case MCU_FIVE:
            /* Update the Ecm NMICFG2 address to Ecm config address */
            LulDataByte = (uint32)MCU_ZERO;
            LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->NMICFG2;
            break;
        case MCU_SIX:
            /* Update the Ecm IRCFG0 address to Ecm config address */
            LulDataByte = (uint32)MCU_ZERO;
            LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->IRCFG0;
            break;
        case MCU_SEVEN:
            /* Update the Ecm IRCFG1 address to Ecm config address */
            LulDataByte = (uint32)MCU_ZERO;
            LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->IRCFG1;
            break;
        case MCU_EIGHT:
            LulDataByte = (uint32)MCU_ZERO;
            LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->IRCFG2;
            break;
        case MCU_NINE:
            /* Update the Ecm EMK0 address to Ecm config address */
            LulDataByte = MCU_ECMEMK0_FULL_MASK;
            LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->EMK0;
            break;
        case MCU_TEN:
            /* Update the Ecm EMK1 address to Ecm config address */
            LulDataByte = MCU_ECMEMK1_FULL_MASK;
            LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->EMK1;
            break;
        case MCU_ELEVEN:
            /* Update the Ecm EMK2 address to Ecm config address */
            LulDataByte = MCU_ECMEMK228_UNMASK_VALUE;
            LpEcmConfigAddress = &Ecm0_BaseAddress[LucEcmIndex]->EMK2;
            break;
            /* MISRA Violation: START Msg (2:2016)-7  */
            /* MISRA Violation: START Msg (2:2881)-6  */
        /* Start Tag MCU_UT_001 */
        default:
           break;
       /* End Tag MCU_UT_001 */
        }
        /*Write the ECM Config registers with protection sequence*/
        /* END Msg (2:2881)-6  */
        /* END Msg (2:2016)-7  */
        LucLoopcount = MCU_LOOPCOUNT;
        /* QAC Warning: START Msg (2:2814)-8  */
        MCU_PROTECTEDWRITE32BIT(*LpEcmConfigAddress, LulDataByte,
                            (Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
                            (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopcount,
                                                             LenReturnValue)
        /* Read back the ECM Config register*/
        MCU_MASKED_CHECK_WRITE_VERIFY_INIT(LpEcmConfigAddress,LulDataByte,
                                                MCU_FULL_MASK, MCU_INIT_SID)

       /* END Msg (2:2814)-8  */
       LucIndex++;
      }while((LucIndex < MCU_MAX_ECM_CONFIG_REG)
                                                 && (E_OK == LenReturnValue));
    }
    else
    {
      LenReturnValue = E_NOT_OK;
    }

    if (E_OK == LenReturnValue)
    {
      LucLoopcount = MCU_LOOPCOUNT;

      MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->EPCFG),
      MCU_ECM_STATIC_MODE,(Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
      (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopcount, LenReturnValue)

      MCU_MASKED_CHECK_WRITE_VERIFY_INIT
      (&((Ecm0_BaseAddress[LucEcmIndex]->EPCFG)),
      (uint32)MCU_ECM_STATIC_MODE, MCU_EPCFG_WV_MASK, MCU_INIT_SID)

    }
    else
    {
      /* No action required */
    }
    LucEcmIndex++;
  }while((MCU_NO_OF_ECM_INSTANCES > LucEcmIndex) && (E_OK == LenReturnValue));

  if (E_OK == LenReturnValue)
  {
    LenReturnValue = Mcu_EcmPseudoErrorTest();
  }
  else
  {
    /* Self Diagnostic test for ECM is failed.*/
      Dem_ReportErrorStatus(MCU_E_ECM_SELFDIAG_FAILURE,
      DEM_EVENT_STATUS_FAILED);

    /* Set LenReturnValue to E_NOT_OK */
      LenReturnValue = E_NOT_OK;
  }
  return(LenReturnValue);
}

/******************************************************************************
** Function Name      : Mcu_EcmPseudoErrorTest
**
** Service ID         : None
**
** Description        : This service is used for the Self diagnostic test of
**                      ECM0 and ECM1
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : none
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variables   : None
**
** Function Invoked   : Dem_ReportErrorStatus, Mcu_ClearEcmErrorOutput
**
** Registers Used     : ECMnPE0,ECMnPE1,ECMnPE2,ECMCnESSTR0,ECMCnESSTR1,
**                      ECMCnESSTR2,ECMnPCMD1
******************************************************************************/
/* Implements MCU_ESDD_UD_072, MCU_ESDD_UD_092 */
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_EcmPseudoErrorTest(void)

{
  VAR(Std_ReturnType,TYPEDEF) LenReturnValue;
  LenReturnValue = Mcu_EcmZeroSelfTest();

  if(E_OK == LenReturnValue)
  {
    /* QAC Warning: START Msg(2:2741)-13 */
    if(MCU_TWO == (uint8)MCU_NO_OF_ECM_INSTANCES)
    {
     /* END Msg(2:2741)-13 */
      LenReturnValue = Mcu_EcmOneSelfTest();
    }
    else
    {
      /* No action */
    }
  }
  else
  {
    /* No action */
  }
  return LenReturnValue;
}
/******************************************************************************
** Function Name      : Mcu_EcmZeroSelfTest
**
** Service ID         : None
**
** Description        : This service is used for the Self diagnostic test of
**                      ECM0
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : none
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variables   : None
**
** Function Invoked   : Dem_ReportErrorStatus, Mcu_ClearEcmErrorOutput
**
** Registers Used     : ECMnPE0,ECMnPE1,ECMnPE2,ECMCnESSTR0,ECMCnESSTR1,
**                      ECMCnESSTR2,ECMnPCMD1
******************************************************************************/
/* Implements MCU_ESDD_UD_072, MCU_ESDD_UD_084, MCU_ESDD_UD_093 */
/* Implements MCU049 */
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_EcmZeroSelfTest(void)
{
  VAR(uint8, AUTOMATIC) LucIndex;
  VAR(Std_ReturnType,TYPEDEF) LenReturnValue;
  VAR(uint8,AUTOMATIC) LucLoopcount;

  LucIndex = MCU_ZERO;
  do
  {
    switch (LucIndex)
    {
    case MCU_ZERO:
        /* Generate the Error using Pseudo Error Register */
        MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[MCU_ECM_ZERO]->PE0),
        MCU_ECM_PSEUDO_ERR_REG0, (Ecm0_BaseAddress[MCU_ECM_ZERO]->PCMD1),
        (Ecm0_BaseAddress[MCU_ECM_ZERO]->PS), LucLoopcount,LenReturnValue)
    break;

    case MCU_ONE:
        /* Generate the Error using Pseudo Error Register */
        MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[MCU_ECM_ZERO]->PE1),
        MCU_ECM_PSEUDO_ERR_REG1,(Ecm0_BaseAddress[MCU_ECM_ZERO]->PCMD1),
        (Ecm0_BaseAddress[MCU_ECM_ZERO]->PS), LucLoopcount, LenReturnValue)
    break;
    case MCU_TWO:
        /* Generate the Error using Pseudo Error Register */
        MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[MCU_ECM_ZERO]->PE2),
        MCU_ECM_PSEUDO_ERR_REG2,(Ecm0_BaseAddress[MCU_ECM_ZERO]->PCMD1),
        (Ecm0_BaseAddress[MCU_ECM_ZERO]->PS), LucLoopcount, LenReturnValue)
    break;
    /* MISRA Violation: START Msg (2:2016)-7  */
    /* MISRA Violation: START Msg (2:2881)-6  */
    /* Start Tag MCU_UT_001 */
    default:
        break;
    /* End Tag MCU_UT_001 */
    }
    LucIndex++;
    /* END Msg (2:2881)-6  */
    /* END Msg (2:2016)-7  */
  }while((MCU_THREE > LucIndex) && (E_OK == LenReturnValue));

  if (E_OK == LenReturnValue)
  {
  /* Check if error out status bit is set */
 if(((MCU_ECM_ERROR_REG0_VALUE) ==
                                (Ecmm0_BaseAddress[MCU_ECM_ZERO]->ESSTR0)) &&
      ((MCU_ECM_ERROR_REG0_VALUE) ==
                                (Ecmc0_BaseAddress[MCU_ECM_ZERO]->ESSTR0)) &&
      ((MCU_ECM_ERROR_REG1_VALUE) ==
                                (Ecmm0_BaseAddress[MCU_ECM_ZERO]->ESSTR1)) &&
      ((MCU_ECM_ERROR_REG1_VALUE) ==
                                (Ecmc0_BaseAddress[MCU_ECM_ZERO]->ESSTR1)) &&
      ((MCU_ECM_ERROR_REG2_VALUE) ==
                                (Ecmm0_BaseAddress[MCU_ECM_ZERO]->ESSTR2)) &&
      ((MCU_ECM_ERROR_REG2_VALUE) ==
                                (Ecmc0_BaseAddress[MCU_ECM_ZERO]->ESSTR2)))
    {
      LenReturnValue = Mcu_ClearEcmErrorOutput(MCU_INIT_SID);
    }
    else
    {
     /* Self Diagnostic test for ECM is failed.*/
      Dem_ReportErrorStatus(MCU_E_ECM_SELFDIAG_FAILURE,
      DEM_EVENT_STATUS_FAILED);

      /* Set LenReturnValue to E_NOT_OK */
        LenReturnValue = E_NOT_OK;
    }
  }
  else
  {
    /* No action required */
  }
  return LenReturnValue;
}
/******************************************************************************
** Function Name      : Mcu_EcmOneSelfTest
**
** Service ID         : None
**
** Description        : This service is used for the Self diagnostic test of
**                      ECM1
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : none
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variables   : None
**
** Function Invoked   : Dem_ReportErrorStatus, Mcu_ClearEcmErrorOutput
**
** Registers Used     : ECMnPE0,ECMnPE1,ECMnPE2,ECMCnESSTR0,ECMCnESSTR1,
**                      ECMCnESSTR2,ECMnPCMD1
******************************************************************************/
/* Implements MCU_ESDD_UD_072, MCU_ESDD_UD_084,MCU_ESDD_UD_094 */
/* Implements MCU049 */
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_EcmOneSelfTest(void)
{
  VAR(uint8, AUTOMATIC) LucIndex;
  VAR(Std_ReturnType,TYPEDEF) LenReturnValue;
  VAR(uint8,AUTOMATIC) LucLoopcount;

  LucIndex = MCU_ZERO;
  do
  {
    switch (LucIndex)
    {
    case MCU_ZERO:
        /* Generate the Error using Pseudo Error Register */
        MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[MCU_ECM_ONE]->PE0),
        MCU_ECM_PSEUDO_ERR_REG0,(Ecm0_BaseAddress[MCU_ECM_ONE]->PCMD1),
        (Ecm0_BaseAddress[MCU_ECM_ONE]->PS), LucLoopcount,LenReturnValue)
    break;

    case MCU_ONE:
        /* Generate the Error using Pseudo Error Register */
        MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[MCU_ECM_ONE]->PE1),
        MCU_ECM_PSEUDO_ERR_REG1,(Ecm0_BaseAddress[MCU_ECM_ONE]->PCMD1),
        (Ecm0_BaseAddress[MCU_ECM_ONE]->PS), LucLoopcount, LenReturnValue)
    break;
    case MCU_TWO:
        /* Generate the Error using Pseudo Error Register */
        MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[MCU_ECM_ONE]->PE2),
        MCU_ECM_PSEUDO_ERR_REG2,(Ecm0_BaseAddress[MCU_ECM_ONE]->PCMD1),
        (Ecm0_BaseAddress[MCU_ECM_ONE]->PS), LucLoopcount, LenReturnValue)
    break;
    /* MISRA Violation: START Msg (2:2016)-7  */
    /* MISRA Violation: START Msg (2:2881)-6  */
    /* Start Tag MCU_UT_001 */
    default:
    break;
    /* End Tag MCU_UT_001 */
    }
    LucIndex++;
    /* END Msg (2:2881)-6  */
    /* END Msg (2:2016)-7  */
  }while((MCU_THREE > LucIndex) && (E_OK == LenReturnValue));

  if (E_OK == LenReturnValue)
  {
  /* Check if error out status bit is set */
   if(((MCU_ECM_ERROR_REG0_VALUE) ==
                                (Ecmm0_BaseAddress[MCU_ECM_ONE]->ESSTR0)) &&
      ((MCU_ECM_ERROR_REG0_VALUE) ==
                                (Ecmc0_BaseAddress[MCU_ECM_ONE]->ESSTR0)) &&
      ((MCU_ECM_ERROR_REG1_VALUE) ==
                                (Ecmm0_BaseAddress[MCU_ECM_ONE]->ESSTR1)) &&
      ((MCU_ECM_ERROR_REG1_VALUE) ==
                                (Ecmc0_BaseAddress[MCU_ECM_ONE]->ESSTR1)) &&
      ((MCU_ECM_ERROR_REG2_VALUE) ==
                                (Ecmm0_BaseAddress[MCU_ECM_ONE]->ESSTR2)) &&
      ((MCU_ECM_ERROR_REG2_VALUE) ==
                                (Ecmc0_BaseAddress[MCU_ECM_ONE]->ESSTR2)))
    {
      LenReturnValue = Mcu_ClearEcmErrorOutput(MCU_INIT_SID);
    }
    else
    {
     /* Self Diagnostic test for ECM is failed.*/
      Dem_ReportErrorStatus(MCU_E_ECM_SELFDIAG_FAILURE,
      DEM_EVENT_STATUS_FAILED);

      /* Set LenReturnValue to E_NOT_OK */
      LenReturnValue = E_NOT_OK;
    }
  }
  else
  {
    /* No action required */
  }
  return LenReturnValue;
}
#endif

/******************************************************************************
** Function Name      : Mcu_EcmErrorInitialNotification
**
** Service ID         : None
**
** Description        : This service is used to notify upper layer if any
**                      error is present before initialisation.
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : None
**
** Preconditions      : None
**
** Global Variables   : Mcu_GpConfigPtr, Mcu_GpEcmSetting
**
** Function Invoked   : None
**
** Registers Used     : ECMmnESSTR0,ECMmnESSTR1,ECMmnESSTR2
**
******************************************************************************/
/* Implements MCU_ESDD_UD_072, MCU_ESDD_UD_096 */
/* Implements EAAR_PN0079_FSR_0102 */
STATIC FUNC(void, MCU_PRIVATE_CODE) Mcu_EcmErrorInitialNotification(void)
{
  P2CONST(Mcu_InitErrorNotification, MCU_VAR, MCU_CONFIG_CONST)
                                                            LpEcmInitNotfyFunc;
  VAR(uint32, AUTOMATIC) LulEcmErrorMask;
  VAR(uint8, AUTOMATIC) LucTotalErrorSrcCnt;
  VAR(uint8, AUTOMATIC) LucLoopIndx;
  VAR(uint8, AUTOMATIC) LucEcmIndex;

  /* QAC Warning: START Msg (2:2814)-8  */
  /* Get the total ECM Initial errors count */
  LucTotalErrorSrcCnt = Mcu_GpEcmSetting->ucEcmInitErrorCount;

  if((NULL_PTR != Mcu_GpConfigPtr->pErrorInitNotification)&&
                                             (MCU_ZERO != LucTotalErrorSrcCnt))
  {
    /* END Msg (2:2814)-8  */
    /* MISRA Violation: START Msg (4:0316)-3 */
    LpEcmInitNotfyFunc = (P2CONST(Mcu_InitErrorNotification, MCU_VAR,
                  MCU_CONFIG_CONST)) (Mcu_GpConfigPtr->pErrorInitNotification);

   /* END Msg (4:0316)-3 */
    LucEcmIndex = MCU_ZERO;
    do
    {
     for(LucLoopIndx= MCU_ZERO; LucLoopIndx < LucTotalErrorSrcCnt;
                                                                  LucLoopIndx++)
     {
       /* MISRA Violation: START Msg (4:0491)-4 */
       LulEcmErrorMask = LpEcmInitNotfyFunc[LucLoopIndx].ulEcmErrorSrcMask;

       /* Check if errors occurred for Configured ECM error sources*/
       if((LulEcmErrorMask == ((Ecmm0_BaseAddress[LucEcmIndex]->ESSTR0 |
                Ecmc0_BaseAddress[LucEcmIndex]->ESSTR0) & LulEcmErrorMask)) &&
               (MCU_ZERO == LpEcmInitNotfyFunc[LucLoopIndx].ucEcmRegIndx) &&
               (NULL_PTR != LpEcmInitNotfyFunc[LucLoopIndx].pInitNotifyFuncPtr))
        {
          LpEcmInitNotfyFunc[LucLoopIndx].pInitNotifyFuncPtr();
        }
        else
        {
         /* No action required */
        }
       if((LulEcmErrorMask == ((Ecmm0_BaseAddress[LucEcmIndex]->ESSTR1 |
                Ecmc0_BaseAddress[LucEcmIndex]->ESSTR1) & LulEcmErrorMask)) &&
               (MCU_ONE == LpEcmInitNotfyFunc[LucLoopIndx].ucEcmRegIndx) &&
               (NULL_PTR != LpEcmInitNotfyFunc[LucLoopIndx].pInitNotifyFuncPtr))
        {
          LpEcmInitNotfyFunc[LucLoopIndx].pInitNotifyFuncPtr();
        }
        else
        {
         /* No action required */
        }
       if((LulEcmErrorMask == ((Ecmm0_BaseAddress[LucEcmIndex]->ESSTR2 |
                Ecmc0_BaseAddress[LucEcmIndex]->ESSTR2) & LulEcmErrorMask)) &&
               (MCU_TWO == LpEcmInitNotfyFunc[LucLoopIndx].ucEcmRegIndx) &&
               (NULL_PTR != LpEcmInitNotfyFunc[LucLoopIndx].pInitNotifyFuncPtr))
        {
          LpEcmInitNotfyFunc[LucLoopIndx].pInitNotifyFuncPtr();
          /* END Msg (4:0491)-4 */
        }
        else
        {
         /* No action required */
        }
     }
     LucEcmIndex++;
    }while(MCU_NO_OF_ECM_INSTANCES > LucEcmIndex);
  }
  else
  {
    /* No action required */
  }
}
/*******************************************************************************
** Function Name      : Mcu_ConfigureCvm
**
** Service ID         : None
**
** Description        : This service configure CVM of Mcu Module
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : None
**
** Preconditions      : None
**
** Global Variables   : Mcu_GpConfigPtr
**
** Function Invoked   : MCU_MASKED_CHECK_WRITE_VERIFY_INIT
**
** Registers Used     : CVMDEW,CVMDE,CVMFC,CVMF
*******************************************************************************/
/* Implements MCU_ESDD_UD_072, MCU_ESDD_UD_095 */
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_ConfigureCvm(void)
{

  VAR(uint8, AUTOMATIC) LucLoopCount;
  uint8 LucCVMCtlValue;
  Std_ReturnType LenReturnValue;

  /* Initialize to default values */
  LenReturnValue = E_OK;
  if( (uint16)MCU_POWER_ON_RESET == Mcu_GusLastResetReason)
  {
    /* QAC Warning: START Msg(2:2814)-8  */
    /* Get the configured CVM control value  */
    LucCVMCtlValue = Mcu_GpConfigPtr->ucCvmIndicationReg;
    MCU_CVMDEW = LucCVMCtlValue;
    /* END Msg(2:2814)-8  */
    MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&MCU_CVMDE, (uint32)LucCVMCtlValue,
    (uint32)MCU_CVMDE_WV_MASK, MCU_INIT_SID)

    /* Implements MCU_ESDD_UD_075 */
    /*To verify Self Diag locking functionality */
    #if (STD_ON == MCU_CVM_SELFDIAGNOSTIC_TEST)

    if(MCU_CVM_DIAG_LOCK_MASK ==
                             (uint8)(LucCVMCtlValue & MCU_CVM_DIAG_LOCK_MASK))
    {
    /* MISRA Violation: START Msg(4:0400)-10 */
      MCU_CVMDEW = (MCU_CVMDEW & MCU_TWENTYSEVEN);

      if(MCU_FOUR != (uint8)(MCU_CVMDE & MCU_FOUR))
      {
        /* END Msg(4:0400)-10  */
        /* Implements MCU_ESDD_UD_086 */
        Dem_ReportErrorStatus(MCU_E_CVM_SELFDIAG_FAILURE,
        DEM_EVENT_STATUS_FAILED);
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
    #endif
  }
  else
  {
    /* No action required */
  }

  /* Initialize the loop count value */
  LucLoopCount = MCU_LOOPCOUNT;
  /* QAC Warning: START Msg(2:3416)-12 */
  if(MCU_ZERO != MCU_CVMF)
  {
    do
    {
      /* Write the value to the CVM factor clear register  */
      MCU_CVMFC = MCU_CVM_FACTOR_CLEAR;
      LucLoopCount--;
    /* Start Tag MCU_UT_007 */
    }while((MCU_ZERO != MCU_CVMF) && (MCU_ZERO < LucLoopCount));
    MCU_MASKED_CHECK_WRITE_VERIFY_INIT(&(MCU_CVMF), (uint32)MCU_ZERO,
                                        (uint32)MCU_CVMF_MASK, MCU_INIT_SID)
    if(MCU_ZERO != MCU_CVMF)
    {
     /* END Msg(2:3416)-12 */
      LenReturnValue = E_NOT_OK;
    }
    /* End Tag MCU_UT_007 */
    else
    {
      /* No action required */
    }
  }
  else
  {
    /* No action required */
  }
  return LenReturnValue;
}

/*******************************************************************************
** Function Name      : Mcu_InitialiseDelayTimer
**
** Service ID         : None
**
** Description        : This service Initialise Delay Timer of Mcu Module
**
** Sync/Async         : Synchronous
**
** Reentrancy         : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : LenReturnValue
**
** Preconditions      : None
**
** Global Variables   : None
**
** Function Invoked   : MCU_MASKED_CHECK_WRITE_VERIFY_INIT,
**                      MCU_EXIT_CRITICAL_SECTION
**
** Registers Used     : ECMnDTMCTL,ECMmnPCMD0,ECMnPS,ECMnDTMCMP
*******************************************************************************/
/* Implements MCU_ESDD_UD_072, MCU_ESDD_UD_097 */
/* Implements EAAR_PN0079_FSR_0033 */
STATIC FUNC(Std_ReturnType, MCU_PRIVATE_CODE) Mcu_InitialiseDelayTimer(void)
{

VAR(uint8,AUTOMATIC)         LucEcmIndex;
VAR(uint8,AUTOMATIC)         LucLoopcount;
VAR(uint8,AUTOMATIC)         LucEcmStatusCount;
VAR(Std_ReturnType,TYPEDEF)  LenReturnValue;

 /*Initialize the LucEcmIndex to zero */
 LucEcmIndex = MCU_ZERO;
 do
 {
   /*Check if the bits DTMSTA, DTMSTACNTCLK are (1,1)*/
  if(MCU_ECM_DELAY_TIMER_START_STS == ((Ecm0_BaseAddress[LucEcmIndex]->DTMCTL) &
                                                MCU_ECM_DELAY_TIMER_START_STS))
   {
     /* Implements MCU_ESDD_UD_031 */
     #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
     MCU_ENTER_CRITICAL_SECTION(MCU_REGISTER_PROTECTION);
     #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

     /* Stop ECM delay timer  and initialize the counter to zero
     * using cntrl reg */
     LucLoopcount = MCU_LOOPCOUNT;
     MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->DTMCTL),
       MCU_ECM_DELAY_TIMER_STOP,(Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
       (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopcount, LenReturnValue)

     if (E_OK == LenReturnValue)
     {
       /* wait until status bit becomes zero*/
       LucLoopcount = MCU_LOOPCOUNT;
       do
       {
         LucLoopcount = LucLoopcount - MCU_ONE;
         /* Start Tag MCU_UT_004 */
       }while(((Ecm0_BaseAddress[LucEcmIndex]->DTMCTL) !=
             MCU_ECM_DELAY_TIMER_STOP_STS) && (LucLoopcount > MCU_ZERO));
       /* End Tag MCU_UT_004 */
       /* Read back the control register*/
       MCU_MASKED_CHECK_WRITE_VERIFY_INIT
       (&((Ecm0_BaseAddress[LucEcmIndex]->DTMCTL)),
          MCU_ECM_DELAY_TIMER_STOP_STS, MCU_DTMCTL_WV_MASK, MCU_INIT_SID)

       /* Restart ECM delay timer using control reg */
       LucLoopcount = MCU_LOOPCOUNT;
       MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->DTMCTL),
         MCU_ECM_DELAY_TIMER_START,(Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
         (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopcount, LenReturnValue)
     }
     else
     {
       /* No action */
     }

     /* Check whether Dem reported or not */
     if (E_OK == LenReturnValue)
     {
       /* wait until status bit becomes one*/
       LucLoopcount = MCU_LOOPCOUNT;
       do
       {
         LucLoopcount = LucLoopcount - MCU_ONE;
         /* Start Tag MCU_UT_004 */
       }while(((Ecm0_BaseAddress[LucEcmIndex]->DTMCTL) !=
           MCU_ECM_DELAY_TIMER_START_STS) && (LucLoopcount > MCU_ZERO));
       /* End Tag MCU_UT_004 */
       /* Read back the control register*/
       MCU_MASKED_CHECK_WRITE_VERIFY_INIT
       (&((Ecm0_BaseAddress[LucEcmIndex]->DTMCTL)),
       MCU_ECM_DELAY_TIMER_START_STS, MCU_DTMCTL_WV_MASK, MCU_INIT_SID)

       /* Implements MCU_ESDD_UD_031 */
       #if (STD_ON == MCU_CRITICAL_SECTION_PROTECTION)
       MCU_EXIT_CRITICAL_SECTION(MCU_REGISTER_PROTECTION);
       #endif /* (STD_ON == MCU_CRITICAL_SECTION_PROTECTION) */

       LucEcmStatusCount = MCU_LOOPCOUNT;
       do
       {
         /*Decrement the status count*/
         LucEcmStatusCount--;
         /* Start Tag MCU_UT_004 */
       }while(((uint32)((Ecm0_BaseAddress[LucEcmIndex]->DTMCTL) &
        (uint32)MCU_TWO)!= (uint32)MCU_ZERO ) &&
                                        (LucEcmStatusCount > MCU_ZERO));
       /* End Tag MCU_UT_004 */
     }
     else
     {
       /* No action */
     } /* End of if(E_NOT_OK == LenReturnValue )*/
   }/*End of Check if bits DTMSTA,DTMSTACNTCLK are (0,0)or(1,1)*/
   else
   {
     /* Start ECM delay timer using control reg */
     LucLoopcount = MCU_LOOPCOUNT;
     MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->DTMCTL),
       MCU_ECM_DELAY_TIMER_START,(Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
      (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopcount, LenReturnValue)

     if (E_OK == LenReturnValue)
     {
       /* wait until status bit becomes one*/
       LucLoopcount = MCU_LOOPCOUNT;
       do
       {
          LucLoopcount = LucLoopcount - MCU_ONE;
          /* Start Tag MCU_UT_004 */
       }while(((Ecm0_BaseAddress[LucEcmIndex]->DTMCTL) !=
          MCU_ECM_DELAY_TIMER_START_STS) && (LucLoopcount > MCU_ZERO));
       /* End Tag MCU_UT_004 */
        /* Read back the control register*/
        MCU_MASKED_CHECK_WRITE_VERIFY_INIT
       (&((Ecm0_BaseAddress[LucEcmIndex]->DTMCTL)),
         MCU_ECM_DELAY_TIMER_START_STS, MCU_DTMCTL_WV_MASK, MCU_INIT_SID)
     }
     else
     {
       /* No action */
     }
   }
   /* Increment the LucEcmIndex */
   LucEcmIndex++;
 }while((MCU_NO_OF_ECM_INSTANCES > LucEcmIndex) &&
                                        (E_OK == LenReturnValue));

  if (E_OK == LenReturnValue)
  {
    /*Initialize the LucEcmIndex to zero */
    LucEcmIndex = MCU_ZERO;
    do
    {
      /*Check if setting of ECMDTMCMP is not executed */
      if(MCU_ECMDLY_TIMER_COMP_STS != ((Ecm0_BaseAddress[LucEcmIndex]->DTMCMP) &
                                                    MCU_ECMDLY_TIMER_COMP_STS))
      {
        /* Implements MCU_ESDD_UD_024 */
        /* Load configured ECM delay timer value */
        LucLoopcount = MCU_LOOPCOUNT;
        MCU_PROTECTEDWRITE32BIT((Ecm0_BaseAddress[LucEcmIndex]->DTMCMP),
          MCU_ECM_DLYTIMER_VALUE,(Ecm0_BaseAddress[LucEcmIndex]->PCMD1),
          (Ecm0_BaseAddress[LucEcmIndex]->PS), LucLoopcount, LenReturnValue)
        /* Read back the ECMDTMCMP register*/
        MCU_MASKED_CHECK_WRITE_VERIFY_INIT
          (&((Ecm0_BaseAddress[LucEcmIndex]->DTMCMP)),
                      MCU_ECM_DLYTIMER_VALUE, MCU_DTMCMP_MASK, MCU_INIT_SID)

      } /* End of Check if setting of ECMDTMCMP is on execution */
      else
      {
        /* No action */
      }
      /* Increment the LucEcmIndex */
      LucEcmIndex++;
      /* Start Tag MCU_UT_005 */
    }while((MCU_NO_OF_ECM_INSTANCES > LucEcmIndex) &&
                                          (E_OK == LenReturnValue));
    /* End Tag MCU_UT_005 */
  }
  else
  {
    /* No action */
  }
 return LenReturnValue;
}

#define MCU_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
