/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Fls_Version.h                                               */
/* $Revision: 367439 $                                                        */
/* $Date: 2017-02-23 11:57:02 +0000 (Thu, 23 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains macros required for checking versions of modules        */
/* included by FLS Driver                                                     */
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
 * V1.0.2:  23-Feb-2017    : The following changes are made:
 *                           1) W.r.t Jira ARDAAAF-907, Pre compile switches
 *                              are corrected.
*/
/******************************************************************************/
#ifndef FLS_VERSION_H
#define FLS_VERSION_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* Included for version information macros */
#include "Fls.h"
#if (FLS_DEV_ERROR_DETECT == STD_ON)
/* DET module version information is required only when DET is enabled */
#include "Det.h"
#endif
/* DEM module version information*/
#include "Dem.h"

#if (FLS_CRITICAL_SECTION_PROTECTION == STD_ON)
/*
 * RTE module version information is required only when critical section
 * protection is enabled
 */
#include "Rte.h"

#endif
/* Memif module version information*/
#if (FLS_VERSION_CHECK_EXT_MODULES == STD_ON)
#include "MemIf.h"
#endif
/* Os module version information*/
#include "Os.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* AUTOSAR Release version information */
#define FLS_VERSION_AR_RELEASE_MAJOR_VERSION      FLS_AR_RELEASE_MAJOR_VERSION
#define FLS_VERSION_AR_RELEASE_MINOR_VERSION      FLS_AR_RELEASE_MINOR_VERSION
#define FLS_VERSION_AR_RELEASE_REVISION_VERSION   \
                                               FLS_AR_RELEASE_REVISION_VERSION

/* Module Software version information */
#define FLS_VERSION_SW_MAJOR_VERSION   FLS_SW_MAJOR_VERSION
#define FLS_VERSION_SW_MINOR_VERSION   FLS_SW_MINOR_VERSION

#endif /* FLS_VERSION_H  */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
