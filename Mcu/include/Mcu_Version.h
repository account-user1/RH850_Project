/*===========================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                      */
/* Module       = Mcu_Version.h                                              */
/* $Revision: 331759 $                                                       */
/* $Date: 2016-11-21 04:40:34 +0000 (Mon, 21 Nov 2016) $                     */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright(c) 2015-2016 Renesas Electronics Corporation                    */
/*===========================================================================*/
/* Purpose:                                                                  */
/* This file contains macros required for checking versions of modules       */
/* included by MCU Driver                                                    */
/*                                                                           */
/*===========================================================================*/
/*                                                                           */
/* Unless otherwise agreed upon in writing between your company and          */
/* Renesas Electronics Corporation the following shall apply!                */
/*                                                                           */
/* Warranty Disclaimer                                                       */
/*                                                                           */
/* There is no warranty of any kind whatsoever granted by Renesas. Any       */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed*/
/* or implied, including but not limited to those for non-infringement of    */
/* intellectual property, merchantability and/or fitness for the particular  */
/* purpose.                                                                  */
/*                                                                           */
/* Renesas shall not have any obligation to maintain, service or provide bug */
/* fixes for the supplied Product(s) and/or the Application.                 */
/*                                                                           */
/* Each User is solely responsible for determining the appropriateness of    */
/* using the Product(s) and assumes all risks associated with its exercise   */
/* of rights under this Agreement, including, but not limited to the risks   */
/* and costs of program errors, compliance with applicable laws, damage to   */
/* or loss of data, programs or equipment, and unavailability or             */
/* interruption of operations.                                               */
/*                                                                           */
/* Limitation of Liability                                                   */
/*                                                                           */
/* In no event shall Renesas be liable to the User for any incidental,       */
/* consequential, indirect, or punitive damage (including but not limited    */
/* to lost profits) regardless of whether such liability is based on breach  */
/* of contract, tort, strict liability, breach of warranties, failure of     */
/* essential purpose or otherwise and even if advised of the possibility of  */
/* such damages. Renesas shall not be liable for any services or products    */
/* provided by third party vendors, developers or consultants identified or  */
/* referred to the User by Renesas in connection with the Product(s) and/or  */
/* the Application.                                                          */
/*                                                                           */
/*===========================================================================*/
/* Environment:                                                              */
/*              Devices:        P1x-C                                        */
/*===========================================================================*/

/******************************************************************************
**                      Revision Control History                             **
******************************************************************************/
/*
 * V1.0.0:  14-Aug-2015 : Initial Version.
 * V1.0.1:  25-Oct-2016 : As per JIRA ID ARDAAAF-1270,added UD IDs and
 *                           Requirements for traceability improvement.
 */
/*****************************************************************************/
#ifndef MCU_VERSION_H
#define MCU_VERSION_H

/******************************************************************************
**                      Include Section                                      **
******************************************************************************/
/* Included for module version information */
#include "Mcu.h"

/*Included for DEM module version information */
#include "Dem.h"

/* Implements MCU_ESDD_UD_036*/
/* DET module version information is required only when DET is enabled */
#if (MCU_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif

/* OS module version information is required */
#include "Os.h"

/******************************************************************************
**                      Version Information                                  **
******************************************************************************/
/* AUTOSAR specification version information */

#define MCU_VERSION_AR_RELEASE_MAJOR_VERSION    MCU_AR_RELEASE_MAJOR_VERSION
#define MCU_VERSION_AR_RELEASE_MINOR_VERSION    MCU_AR_RELEASE_MINOR_VERSION
#define MCU_VERSION_AR_RELEASE_REVISION_VERSION    \
                                                MCU_AR_RELEASE_REVISION_VERSION

/* File version information */
#define MCU_VERSION_SW_MAJOR_VERSION            MCU_SW_MAJOR_VERSION
#define MCU_VERSION_SW_MINOR_VERSION            MCU_SW_MINOR_VERSION

/******************************************************************************
**                      Global Symbols                                       **
******************************************************************************/

/******************************************************************************
**                      Global Data Types                                    **
******************************************************************************/

/******************************************************************************
**                      Function Prototypes                                  **
******************************************************************************/

#endif /* MCU_VERSION_H */

/******************************************************************************
**                      End of File                                          **
******************************************************************************/
