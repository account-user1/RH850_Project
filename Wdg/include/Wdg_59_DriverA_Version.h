/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Wdg_59_DriverA_Version.h                                    */
/* $Revision: 333161 $                                                        */
/* $Date: 2016-11-23 14:06:37 +0000 (Wed, 23 Nov 2016) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2016 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains macros required for checking release versions of        */
/* modules included by Watchdog Driver.                                       */
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
 *                           2. As per ticket ARDAAAF-1435, Comments added for
 *                              traceability.
 */
/******************************************************************************/
#ifndef WDG_59_DRIVERA_VERSION_H
#define WDG_59_DRIVERA_VERSION_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* Included for module version information */
#include "Wdg_59_DriverA.h"

#if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT )
/* DET module version information is required only when DET is enabled */
/* Implements EAAR_PN0034_FR_0064 */
#include "Det.h"
#endif
/* Implements WDG080 */
/* DEM module version information is required */
#include "Dem.h"

/* Implements AR_PN0064_FR_0052 */
#if (STD_ON  == WDG_59_DRIVERA_CRITICAL_SECTION_PROTECTION )
/*
 * RTE module version information is required only when critical section
 * protection is enabled
 */
#include "Rte.h"
#endif

/* OS module version information is required */
#include "Os.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define WDG_59_DRIVERA_VERSION_AR_RELEASE_MAJOR_VERSION \
                                        WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION
#define WDG_59_DRIVERA_VERSION_AR_RELEASE_MINOR_VERSION \
                                        WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION
#define WDG_59_DRIVERA_VERSION_AR_RELEASE_REVISION_VERSION \
                                     WDG_59_DRIVERA_AR_RELEASE_REVISION_VERSION

/* Included Files Autosar Specification Version */
#if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT )
#define WDG_59_DRIVERA_DET_AR_MAJOR_VERSION  2
#define WDG_59_DRIVERA_DET_AR_MINOR_VERSION  2
#endif

#define WDG_59_DRIVERA_DEM_AR_MAJOR_VERSION  3
#define WDG_59_DRIVERA_DEM_AR_MINOR_VERSION  3

#define WDG_59_DRIVERA_OS_AR_MAJOR_VERSION  3
#define WDG_59_DRIVERA_OS_AR_MINOR_VERSION  2

/* Module Software version information */
#define WDG_59_DRIVERA_VERSION_SW_MAJOR_VERSION  WDG_59_DRIVERA_SW_MAJOR_VERSION
#define WDG_59_DRIVERA_VERSION_SW_MINOR_VERSION  WDG_59_DRIVERA_SW_MINOR_VERSION

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

#endif /* WDG_59_DRIVERA_VERSION_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
