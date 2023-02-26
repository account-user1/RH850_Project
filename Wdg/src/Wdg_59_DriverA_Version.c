/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Wdg_59_DriverA_Version.c                                    */
/* $Revision: 364549 $                                                        */
/* $Date: 2017-02-18 06:30:45 +0000 (Sat, 18 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2016 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains code for version checking for the modules included by   */
/* Watchdog Driver A                                                          */
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
 * V1.0.0:  07-Aug-2015    : Initial Version
 *
 * V1.0.1:  08-Mar-2016    : The following changes are done as part of P1x-C
 *                           V4.01.00 release.
 *                           1. Alignment in file banner corrected.
 *                           2. Copyright information updated.
 *
 * V2.0.0:  22-Nov-2016    : The following changes are made :
 *                           1. As per ticket ARDAAAF-976, file adapted from
 *                              P1x.
 *                           2. As per ticket ARDAAAF-769, QAC and MISRA
 *                              warnings fixed/Justified.
 */
/******************************************************************************/

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/* Implements WDG099 */
/* Header file inclusion */
#include "Wdg_59_DriverA_Version.h"
/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       : (2:0553)  Translation unit contains no object or           */
/*                 function definitions with external linkage.                */
/* Rule          : NA                                                         */
/* Justification : As per AUTOSAR, file should be required to include.        */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* Implements WDG087,WDG109,WDG174,WDG067,WDG068 */
/* AUTOSAR release version information */
#define WDG_59_DRIVERA_VERSION_C_AR_RELEASE_MAJOR_VERSION \
                                  WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION_VALUE
#define WDG_59_DRIVERA_VERSION_C_AR_RELEASE_MINOR_VERSION \
                                  WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION_VALUE
#define WDG_59_DRIVERA_VERSION_C_AR_RELEASE_REVISION_VERSION \
                               WDG_59_DRIVERA_AR_RELEASE_REVISION_VERSION_VALUE

/* File version information */
#define WDG_59_DRIVERA_VERSION_C_SW_MAJOR_VERSION \
                                          WDG_59_DRIVERA_SW_MAJOR_VERSION_VALUE
#define WDG_59_DRIVERA_VERSION_C_SW_MINOR_VERSION \
                                          WDG_59_DRIVERA_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (WDG_59_DRIVERA_VERSION_AR_RELEASE_MAJOR_VERSION != \
                              WDG_59_DRIVERA_VERSION_C_AR_RELEASE_MAJOR_VERSION)
  #error "Wdg_59_DriverA_Version.c : Mismatch in Release Major Version"
#endif

#if (WDG_59_DRIVERA_VERSION_AR_RELEASE_MINOR_VERSION != \
                              WDG_59_DRIVERA_VERSION_C_AR_RELEASE_MINOR_VERSION)
  #error "Wdg_59_DriverA_Version.c : Mismatch in Release Minor Version"
#endif

#if (WDG_59_DRIVERA_VERSION_AR_RELEASE_REVISION_VERSION != \
                           WDG_59_DRIVERA_VERSION_C_AR_RELEASE_REVISION_VERSION)
  #error "Wdg_59_DriverA_Version.c : Mismatch in Release Revision Version"
#endif

#if (WDG_59_DRIVERA_VERSION_SW_MAJOR_VERSION != \
                                      WDG_59_DRIVERA_VERSION_C_SW_MAJOR_VERSION)
  #error "Wdg_59_DriverA_Version.c : Mismatch in Software Major Version"
#endif

#if (WDG_59_DRIVERA_VERSION_SW_MINOR_VERSION != \
                                      WDG_59_DRIVERA_VERSION_C_SW_MINOR_VERSION)
  #error "Wdg_59_DriverA_Version.c : Mismatch in Software Minor Version"
#endif

/* Implements WDG_ESDD_UD_012 */
/* Implements AR_PN0064_FR_0055 */
#if (STD_ON == WDG_59_DRIVERA_VER_CHECK_EXT)

#if (STD_ON == WDG_59_DRIVERA_DEV_ERROR_DETECT)

#if ((DET_AR_RELEASE_MAJOR_VERSION != WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION) \
 || (DET_AR_RELEASE_MINOR_VERSION != WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Det.h does not match the expected version"
#endif

#endif

#if ((DEM_AR_RELEASE_MAJOR_VERSION != WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION) \
 || (DEM_AR_RELEASE_MINOR_VERSION != WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Dem.h does not match the expected version"
#endif

/* Implements AR_PN0064_FR_0052 */
#if (WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION == STD_ON)
#if ((RTE_AR_RELEASE_MAJOR_VERSION != WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION) \
 || (RTE_AR_RELEASE_MINOR_VERSION != WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Rte.h does not match the expected version"
#endif
#endif

#if ((OS_AR_RELEASE_MAJOR_VERSION != WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION) \
 || (OS_AR_RELEASE_MINOR_VERSION != WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Os.h does not match the expected version"
#endif

#endif /* #if (STD_ON == WDG_59_DRIVERA_VER_CHECK_EXT) */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
