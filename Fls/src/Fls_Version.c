/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Fls_Version.c                                               */
/* $Revision: 367439 $                                                        */
/* $Date: 2017-02-23 11:57:02 +0000 (Thu, 23 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains code for version checking for modules included by FLS   */
/* Driver                                                                     */
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
 * V1.0.1:  23-Feb-2017    : The following changes are made:
 *                           1) W.r.t Jira ARDAAAF-907, Pre compile switches
 *                              are corrected.
 *                           2) W.r.t Jira ARDAAAF-770, QAC Warning (2:0553)
 *                              is justified.
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/*
 * Included for Fls module version information and other modules version
 * information
 */
 /* Implements EAAR_PN0034_FR_0001 */
#include "Fls_Version.h"

/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       : (2:0553) Translation unit contains no object or function   */
/*                 definitions with external linkage.                         */
/* Justification : As per Autosar, file is included and execution statements  */
/*                 are not required for the implementation.                   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* AUTOSAR release version information */
#define FLS_VERSION_C_AR_RELEASE_MAJOR_VERSION \
                                  FLS_AR_RELEASE_MAJOR_VERSION_VALUE
#define FLS_VERSION_C_AR_RELEASE_MINOR_VERSION \
                                  FLS_AR_RELEASE_MINOR_VERSION_VALUE
#define FLS_VERSION_C_AR_RELEASE_REVISION_VERSION \
                               FLS_AR_RELEASE_REVISION_VERSION_VALUE


/* File version information */
#define FLS_VERSION_C_SW_MAJOR_VERSION    FLS_SW_MAJOR_VERSION_VALUE
#define FLS_VERSION_C_SW_MINOR_VERSION    FLS_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
/* Implements FLS364 */


#if (FLS_VERSION_AR_RELEASE_MAJOR_VERSION != \
                              FLS_VERSION_C_AR_RELEASE_MAJOR_VERSION)
  #error "Fls_Version.c : Mismatch in Release Major Version"
#endif
#if (FLS_VERSION_AR_RELEASE_MINOR_VERSION != \
                              FLS_VERSION_C_AR_RELEASE_MINOR_VERSION)
  #error "Fls_Version.c : Mismatch in Release Minor Version"
#endif
#if (FLS_VERSION_AR_RELEASE_REVISION_VERSION != \
                           FLS_VERSION_C_AR_RELEASE_REVISION_VERSION)
  #error "Fls_Version.c : Mismatch in Release Revision Version"
#endif


#if (FLS_VERSION_SW_MAJOR_VERSION != FLS_VERSION_C_SW_MAJOR_VERSION)
  #error "Fls_Version.c : Mismatch in Software Major Version"
#endif
#if (FLS_VERSION_SW_MINOR_VERSION != FLS_VERSION_C_SW_MINOR_VERSION)
  #error "Fls_Version.c : Mismatch in Software Minor Version"
#endif

#if (FLS_VERSION_CHECK_EXT_MODULES == STD_ON)


/* Rte Module Version Check */
#if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
#if ((RTE_AR_RELEASE_MAJOR_VERSION != FLS_AR_RELEASE_MAJOR_VERSION) || \
     (RTE_AR_RELEASE_MINOR_VERSION != FLS_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Rte.h does not match the expected version"
#endif
#endif /* (FLS_CRITICAL_SECTION_PROTECTION == STD_ON) */
/* Det Module Version Check */
#if (FLS_DEV_ERROR_DETECT == STD_ON)
#if ((DET_AR_RELEASE_MAJOR_VERSION != FLS_AR_RELEASE_MAJOR_VERSION) || \
     (DET_AR_RELEASE_MINOR_VERSION != FLS_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Det.h does not match the expected version"
#endif
#endif /* End of FLS_DEV_ERROR_DETECT */
/* Dem Module Version Check */
#if ((DEM_AR_RELEASE_MAJOR_VERSION != FLS_AR_RELEASE_MAJOR_VERSION) || \
     (DEM_AR_RELEASE_MINOR_VERSION != FLS_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Dem.h does not match the expected version"
#endif
/* MemIf Module Version Check */
#if ((MEMIF_AR_RELEASE_MAJOR_VERSION != FLS_AR_RELEASE_MAJOR_VERSION) || \
     (MEMIF_AR_RELEASE_MINOR_VERSION != FLS_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of MemIf.h does not match the expected version"
#endif
/* Os Module Version Check */
#if ((OS_AR_RELEASE_MAJOR_VERSION != FLS_AR_RELEASE_MAJOR_VERSION) || \
     (OS_AR_RELEASE_MINOR_VERSION != FLS_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Os.h does not match the expected version"
#endif

#endif /* End of (FLS_VERSION_CHECK_EXT_MODULES == STD_ON) */

/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/

/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
