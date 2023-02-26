/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Wdg_Hardware.h                                              */
/* $Revision: 330043 $                                                        */
/* $Date: 2016-11-17 12:56:08 +0530 (Thu, 17 Nov 2016) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains P1x-C hardware specific declarations.                   */
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
 * V1.0.0:  07-Aug-2015 : Initial Version
 *
 * V1.0.1:  03-Mar-2016 : As part of V4.01.00 release,
 *                      1.added the support for devices R7F701371 and R7F701374.
 *                      2.As per ticket ARDAAAF-12, renamed the memory section.
 *
 * V1.0.2:  29-Aug-2016 : As per the Jira-ARDAAAF-815, typedef declarations for
 *                        structure is followed as per the coding guidelines.
 *
 */
/******************************************************************************/
#ifndef WDG_59_HARDWARE_H
#define WDG_59_HARDWARE_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "P1X_C_Hardware.h"
#include "Compiler.h"
/*******************************************************************************
**                      Defines                                               **
*******************************************************************************/
/* Total number of WDTA units supported by P1x-C R7F701373 device */
#define WDTA_INSTANCES        1U
#define WDG_59_DEVICE_VARIANT R7F701373
/* Wdg structure defined for P1x-C R7F701373 device */
#define WDG_59_DRIVERA_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
extern CONSTP2VAR(volatile T_WDTA0, WDG_59_DRIVERA_CONST,
WDG_59_DRIVERA_CONFIG_CONST)Wdta_BaseAddress[WDTA_INSTANCES];
#define WDG_59_DRIVERA_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
#endif  /* WDG_59_HARDWARE_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

