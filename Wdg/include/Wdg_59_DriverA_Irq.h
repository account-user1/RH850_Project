/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Wdg_59_DriverA_Irq.h                                        */
/* $Revision: 333161 $                                                        */
/* $Date: 2016-11-23 14:06:37 +0000 (Wed, 23 Nov 2016) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c)    2015-2016 Renesas Electronics Corporation                  */
/*============================================================================*/
/* Purpose:                                                                   */
/* ISR functions of the WDG Driver Component.                                 */
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
 * V1.0.1:  22-Jun-2016    : As per ticket ARDAAAF-985,
 *                           WDG_59_DRIVERA_INTWDT_EIC_ADDR macro is added.
 * V2.0.0:  22-Nov-2016    : The following changes are made :
 *                           1. As per ticket ARDAAAF-976, file adapted from
 *                              P1x.
 *                           2. As per ticket ARDAAAF-1435, Comments added for
 *                              traceability.
 */
/******************************************************************************/
#ifndef WDG_59_DRIVERA_IRQ_H
#define WDG_59_DRIVERA_IRQ_H

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/*
 * Included for module version information from Wdg_59_DriverA.h and macro
 * definitions required for Wdg_59_DriverA_Irq.c
 */
#include "Wdg_59_DriverA_PBTypes.h"
/* Included for global variable visibility for Wdg_59_DriverA_Irq.c */
#include "Wdg_59_DriverA_Ram.h"
/* Implements EAAR_PN0034_FR_0024 */
#if defined (Os_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR) || \
                              defined (WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR)
#include "Os.h"

#endif
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define WDG_59_DRIVERA_IRQ_AR_RELEASE_MAJOR_VERSION \
                                        WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION
#define WDG_59_DRIVERA_IRQ_AR_RELEASE_MINOR_VERSION \
                                        WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION
#define WDG_59_DRIVERA_IRQ_AR_RELEASE_REVISION_VERSION \
                                     WDG_59_DRIVERA_AR_RELEASE_REVISION_VERSION

/* Module Software version information */
#define WDG_59_DRIVERA_IRQ_SW_MAJOR_VERSION    WDG_59_DRIVERA_SW_MAJOR_VERSION
#define WDG_59_DRIVERA_IRQ_SW_MINOR_VERSION    WDG_59_DRIVERA_SW_MINOR_VERSION



/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/

/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#define WDG_59_DRIVERA_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2 interrupt mapping */
#if defined (Os_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR) || \
                              defined (WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, WDG_59_DRIVERA_FAST_CODE)
                                 WDG_59_DRIVERA_TRIGGERFUNCTION_ISR(void);
#endif

#define WDG_59_DRIVERA_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif /* WDG_59_DRIVERA_IRQ_H */

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
