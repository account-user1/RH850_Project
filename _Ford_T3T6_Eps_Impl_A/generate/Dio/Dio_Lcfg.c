/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Dio_Lcfg.c                                                  */
/* $Revision: 420096 $                                                        */
/* $Date: 2017-06-13 19:33:35 +0530 (Tue, 13 Jun 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Dio link time configurations                            */
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
 * V1.0.1: 20-Feb-2017 : 1. As per ARDAAAF-768, Added array size for
 *                          Dio_GstChannelGroupData to avoid QAC warning.
 *                       2. As per ARDAAAF-1589, Added justification for
 *                          (2:0553) and (2:0862)
 *
 * V1.0.2: 02-May-2017 : As per ARDAAAF-2049,
 *                       PREFIX and INITPOLICY of memory sections are
 *                       changed.
 *
 * V1.0.3: 16-Jun-2017 : As per ARDAAAF-2475,
 *                       a. Updated the QAC justification message
 *                          for Msg(2:3211).
 *                       b. Corrected the alignment in revision history
 *                          banner.
 */
/******************************************************************************/
/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/* Included for macro definitions and API prototypes */
#include "Dio.h"
#include "Dio_PBTypes.h"
#include "Dio_Cfg.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define DIO_LCFG_C_AR_RELEASE_MAJOR_VERSION     4U
#define DIO_LCFG_C_AR_RELEASE_MINOR_VERSION     0U
#define DIO_LCFG_C_AR_RELEASE_REVISION_VERSION  3U
/* File version information */
#define DIO_LCFG_C_SW_MAJOR_VERSION             1U
#define DIO_LCFG_C_SW_MINOR_VERSION             0U
/*******************************************************************************
**                      QAC Warning                                           **
*******************************************************************************/
/******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message      : (2:3211) The global identifier is defined here but is not   */
/*                 used in this translation unit.                             */
/* Rule          : NA                                                         */
/* Justification : The Global Post Build variables are defined in this        */
/*                 translation unit and is used in the other files.           */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3211)-1 and                           */
/*                 END Msg(2:3211)-1 tags in the code.                        */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message       :(2:0862) "MemMap.h" directive is redundant.                 */
/* Rule          : NA                                                         */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files within the code is a MISRA violation. */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/
/* 3. QAC Warning:                                                            */
/* Message       : (2:0553)  Translation unit contains no object or           */
/*                 function definitions with external linkage.                */
/* Rule          : NA                                                         */
/* Justification : As per AUTOSAR, file should be required to include.        */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/
/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (DIO_PBTYPES_AR_RELEASE_MAJOR_VERSION != \
         DIO_LCFG_C_AR_RELEASE_MAJOR_VERSION)
  #error "Dio_Lcfg.c : Mismatch in Release Major Version"
#endif
#if (DIO_PBTYPES_AR_RELEASE_MINOR_VERSION != \
         DIO_LCFG_C_AR_RELEASE_MINOR_VERSION)
  #error "Dio_Lcfg.c : Mismatch in Release Minor Version"
#endif
#if (DIO_PBTYPES_AR_RELEASE_REVISION_VERSION != \
         DIO_LCFG_C_AR_RELEASE_REVISION_VERSION)
  #error "Dio_Lcfg.c : Mismatch in Release Revision Version"
#endif
#if (DIO_PBTYPES_SW_MAJOR_VERSION != DIO_LCFG_C_SW_MAJOR_VERSION)
  #error "Dio_Lcfg.c : Mismatch in Software Major Version"
#endif
#if (DIO_PBTYPES_SW_MINOR_VERSION != DIO_LCFG_C_SW_MINOR_VERSION)
  #error "Dio_Lcfg.c : Mismatch in Software Minor Version"
#endif
/*******************************************************************************
**                      Global Data Types                                     **
******************************************************************************/
#define DIO_59_RENESAS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"
#define DIO_59_RENESAS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

