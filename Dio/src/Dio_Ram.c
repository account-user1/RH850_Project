/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Dio_Ram.c                                                   */
/* $Revision: 420351 $                                                        */
/* $Date: 2017-06-14 12:42:40 +0900 (水, 14 6 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* Global RAM variable definitions for Dio Driver                             */
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
 * V1.0.0: 30-Jul-2015 : Initial Version.
 *
 * V1.0.1: 07-Mar-2016 : 1. As per JIRA ARDAAAF-12, INIT_POLICY added for
 *                          Global Data Types
 *                       2. Copyright Information is updated.
 *
 * V1.0.2: 20-Feb-2017 : 1. As per ARDAAAF-768, Added justifications for
 *                          QAC warnings.
 *
 * V1.0.3: 25-May-2017 : 1. As per ARDAAAF-2049,
 *                          PREFIX and INITPOLICY of memory sections are
 *                          changed.
 *
 * V1.0.4: 16-Jun-2017 : As per ARDAAAF-2475,
 *                       a. Updated the QAC justification message for
 *                          Msg(2:3211).
 *                       b. Corrected the alignment in revision history
 *                          banner.
 *                       c. Renamed Dio_SpConfigPtr to Dio_GpConfigPtr.
 */
/******************************************************************************/

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/* Included for module version information and other types declarations */
#include "Dio.h"
/* Included for macro definitions and structure declarations */
#include "Dio_PBTypes.h"
/* Included for RAM variable declarations */
#include "Dio_Ram.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define DIO_RAM_C_AR_RELEASE_MAJOR_VERSION   DIO_AR_RELEASE_MAJOR_VERSION_VALUE
#define DIO_RAM_C_AR_RELEASE_MINOR_VERSION   DIO_AR_RELEASE_MINOR_VERSION_VALUE
#define DIO_RAM_C_AR_RELEASE_REVISION_VERSION \
                                          DIO_AR_RELEASE_REVISION_VERSION_VALUE

/* Module Software version information  */
#define DIO_RAM_C_SW_MAJOR_VERSION  DIO_SW_MAJOR_VERSION_VALUE
#define DIO_RAM_C_SW_MINOR_VERSION  DIO_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (DIO_RAM_AR_RELEASE_MAJOR_VERSION != DIO_RAM_C_AR_RELEASE_MAJOR_VERSION)
  #error "Dio_Ram.c : Mismatch in Release Major Version"
#endif

#if (DIO_RAM_AR_RELEASE_MINOR_VERSION != DIO_RAM_C_AR_RELEASE_MINOR_VERSION)
  #error "Dio_Ram.c : Mismatch in Release Minor Version"
#endif

#if (DIO_RAM_AR_RELEASE_REVISION_VERSION != \
                                         DIO_RAM_C_AR_RELEASE_REVISION_VERSION)
  #error "Dio_Ram.c : Mismatch in Release Revision Version"
#endif

#if (DIO_RAM_SW_MAJOR_VERSION != DIO_RAM_C_SW_MAJOR_VERSION)
  #error "Dio_Ram.c : Mismatch in Software Major Version"
#endif

#if (DIO_RAM_SW_MINOR_VERSION != DIO_RAM_C_SW_MINOR_VERSION)
  #error "Dio_Ram.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                      QAC WARNINGS                                          **
*******************************************************************************/
/******************************************************************************/
/* 1. QAC WARNING:                                                            */
/* Message       :(2:2022) A tentative definition is being used. Is it        */
/*                 appropriate to include an explicit initializer ?           */
/* Rule          : NA                                                         */
/* Justification : The Global RAM variables are defined in this translation   */
/*                 unit and after initializing it is used in the other files. */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2022)-1 and                           */
/*                 END Msg(2:2022)-1 tags in the code.                        */
/******************************************************************************/
/* 2. QAC WARNING:                                                            */
/* Message      : (2:3211) The global identifier is defined here but is not   */
/*                not used in this translation unit.                          */
/* Rule         : No Rule                                                     */
/* Justification: As per AUTOSAR, all global variables extern declaration     */
/*                shall be given in Dio_Ram.h                                 */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(2:3211)-2 and                            */
/*                END Msg(2:3211)-2 tags in the code.                         */
/******************************************************************************/
/* 3. QAC WARNING:                                                            */
/* Message        (2:0862)  "MemMap.h" directive is redundant.                */
/* Rule          : NA                                                         */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files within the code is a QAC Warnings.    */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:0862)-3 and                           */
/*                 END Msg(2:0862)-3 tags in the code.                        */
/******************************************************************************/
/*****************************************************************************/
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/* QAC Warning: START Msg(2:0862)-3 */
#define DIO_59_RENESAS_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
/* QAC Warning: START Msg(2:3211)-2 */
/* Constant data to store the configuration set  */
P2CONST(Dio_ConfigType, DIO_VAR, DIO_APPL_CONST) Dio_GpConfigPtr = NULL_PTR;
#define DIO_59_RENESAS_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
/* END Msg(2:3211)-2 */

#if (DIO_DEV_ERROR_DETECT == STD_ON)
#define DIO_59_RENESAS_START_SEC_VAR_INIT_BOOLEAN
#include "MemMap.h"
/* QAC Warning: START Msg(2:3211)-2 */
/* Variable to store the Dio driver initialization status */
VAR(boolean, DIO_INIT_DATA) Dio_GblDriverStatus = DIO_UNINITIALIZED;
/* END Msg(2:3211)-2 */
#define DIO_59_RENESAS_STOP_SEC_VAR_INIT_BOOLEAN
#include "MemMap.h"
#endif
#define DIO_59_RENESAS_START_SEC_VAR_NO_INIT_16
#include "MemMap.h"

#if (DIO_CHANNELGROUP_CONFIGURED == STD_ON)
/*
 * Global variable to indicate the offset of channel groups starting for the
 * corresponding configuration set in the array Dio_GstChannelGroupData[].
 */
/* QAC Warning: START Msg(2:2022)-1 */
/* QAC Warning: START Msg(2:3211)-2 */
VAR(uint16, DIO_CONFIG_CONST) Dio_GusChannelGroupsOffset;
/* END Msg(2:2022)-1 */
/* END Msg(2:3211)-2 */
#endif

#define DIO_59_RENESAS_STOP_SEC_VAR_NO_INIT_16
#include "MemMap.h"
/* END Msg(2:0862)-3 */
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
