/*===========================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                      */
/* Module       = Mcu_Debug.h                                                */
/* $Revision: 368218 $                                                       */
/* $Date: 2017-02-24 14:26:03 +0000 (Fri, 24 Feb 2017) $                     */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright(c) 2015 Renesas Electronics Corporation                         */
/*===========================================================================*/
/* Purpose:                                                                  */
/* Provision of global variables for debugging purpose.                      */
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
 */
/*****************************************************************************/
#ifndef MCU_DEBUG_H
#define MCU_DEBUG_H

/******************************************************************************
**                     Include Section                                       **
******************************************************************************/
/* Included for macro definitions and structure declarations */
#include "Mcu_PBTypes.h"
/*
 * Since all the debug variables will be available in Mcu_Ram.h it
 * is included.
 */
 /* Implements  MCU203 */
#include "Mcu_Ram.h"

/******************************************************************************
**                        Version Information                                **
******************************************************************************/
/* AUTOSAR release version information */
#define MCU_DEBUG_AR_RELEASE_MAJOR_VERSION MCU_AR_RELEASE_MAJOR_VERSION
#define MCU_DEBUG_AR_RELEASE_MINOR_VERSION MCU_AR_RELEASE_MINOR_VERSION
#define MCU_DEBUG_AR_RELEASE_REVISION_VERSION MCU_AR_RELEASE_REVISION_VERSION

/* Module Software version information */
#define MCU_DEBUG_SW_MAJOR_VERSION   MCU_SW_MAJOR_VERSION
#define MCU_DEBUG_SW_MINOR_VERSION   MCU_SW_MINOR_VERSION

/******************************************************************************
**                      Global Data Types                                    **
******************************************************************************/

/******************************************************************************
**                      Function Prototypes                                  **
******************************************************************************/

#endif /* MCU_DEBUG_H */

/******************************************************************************
**                          End Of File                                      **
******************************************************************************/
