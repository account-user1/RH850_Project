/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Wdg_59_DriverA_Ram.h                                        */
/* $Revision: 364141 $                                                        */
/* $Date: 2017-02-17 09:13:29 +0000 (Fri, 17 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* Global RAM variable definitions for Watchdog Driver are declared.          */
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
 * V1.0.1:  03-Mar-2016    : The following changes are made:
 *                           1. As per ticket ARDAAAF-12, memory sections
 *                              updated.
 *                           2. Copyright information updated.
 * V1.0.2:  17-Feb-2017      The following changes are made:
 *                           1. As per ARDAAAF-1714,variable
 *                              Wdg_59_DriverA_GusTiggerCounter and
 *                              Wdg_59_DriverA_GddDriverState declared volatile.
 *                           2. As per ARDAAAF-469,variable
 *                              Wdg_59_DriverA_GusTiggerCounter is changed to
 *                              Wdg_59_DriverA_GulTiggerCounter.
 */
/******************************************************************************/
#ifndef WDG_59_DRIVERA_RAM_H
#define WDG_59_DRIVERA_RAM_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define WDG_59_DRIVERA_RAM_AR_RELEASE_MAJOR_VERSION \
                                        WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION
#define WDG_59_DRIVERA_RAM_AR_RELEASE_MINOR_VERSION \
                                        WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION
#define WDG_59_DRIVERA_RAM_AR_RELEASE_REVISION_VERSION \
                                     WDG_59_DRIVERA_AR_RELEASE_REVISION_VERSION

/* Module Software version information */
#define WDG_59_DRIVERA_RAM_SW_MAJOR_VERSION    WDG_59_DRIVERA_SW_MAJOR_VERSION
#define WDG_59_DRIVERA_RAM_SW_MINOR_VERSION    WDG_59_DRIVERA_SW_MINOR_VERSION

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
#if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT )

#define WDG_59_DRIVERA_START_SEC_VAR_INIT_8
#include "MemMap.h"

/* Global variable to store the driver state */
extern VAR(volatile Wdg_59_DriverA_StatusType, WDG_59_DRIVERA_INIT_DATA)
                          Wdg_59_DriverA_GddDriverState;

#define WDG_59_DRIVERA_STOP_SEC_VAR_INIT_8
#include "MemMap.h"

#endif

#define WDG_59_DRIVERA_START_SEC_VAR_INIT_8
#include "MemMap.h"

/* Global variable to store the current watchdog driver mode */
extern VAR(WdgIf_ModeType,
                      WDG_59_DRIVERA_INIT_DATA) Wdg_59_DriverA_GddCurrentMode;

#define WDG_59_DRIVERA_STOP_SEC_VAR_INIT_8
#include "MemMap.h"

#define WDG_59_DRIVERA_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

/* Global variable to store pointer to Configuration */
extern P2CONST(Wdg_59_DriverA_ConfigType, AUTOMATIC,
                        WDG_59_DRIVERA_INIT_DATA)Wdg_59_DriverA_GpConfigPtr;

#define WDG_59_DRIVERA_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#define WDG_59_DRIVERA_START_SEC_VAR_INIT_32
#include "MemMap.h"

/* Global variable to store the trigger counter value */
extern VAR(volatile uint32,
                      WDG_59_DRIVERA_INIT_DATA) Wdg_59_DriverA_GulTiggerCounter;

#define WDG_59_DRIVERA_STOP_SEC_VAR_INIT_32
#include "MemMap.h"

/*******************************************************************************
**                      Global Function Prototypes                            **
*******************************************************************************/

#endif /* WDG_59_DRIVERA_RAM_H */

/*******************************************************************************
**                          End Of File                                       **
*******************************************************************************/
