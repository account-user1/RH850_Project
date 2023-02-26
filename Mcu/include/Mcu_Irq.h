/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Mcu_Irq.h                                                   */
/* $Revision: 368218 $                                                        */
/* $Date: 2017-02-24 14:26:03 +0000 (Fri, 24 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2016 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* ISR functions of the MCU Driver Component.                                 */
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
/*              Devices:        P1x                                           */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  14-Aug-2015 : Initial Version.
 * V1.0.1:  17-Feb-2016 : As part of P1x-C 4.01.00 release, following changes
 *                        are made:
 *                        1. As per JIRA ID ARDAAAF-376, removed
 *                           _Interrupt_ keyword from MCU_FEINT_ISR.
 *                        2. Copyright Information is updated.
 */
/******************************************************************************/
#ifndef MCU_IRQ_H
#define MCU_IRQ_H

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/* Implements EAAR_PN0034_FR_0024 */
/* Included for interrupt category definitions */
#include "Os.h"
/*******************************************************************************
**                        Version Information                                 **
*******************************************************************************/
/* AUTOSAR specification version information */

#define MCU_IRQ_AR_RELEASE_MAJOR_VERSION    MCU_AR_RELEASE_MAJOR_VERSION
#define MCU_IRQ_AR_RELEASE_MINOR_VERSION    MCU_AR_RELEASE_MINOR_VERSION
#define MCU_IRQ_AR_RELEASE_REVISION_VERSION    \
                                               MCU_AR_RELEASE_REVISION_VERSION



/* File version information */
#define MCU_IRQ_SW_MAJOR_VERSION     MCU_SW_MAJOR_VERSION
#define MCU_IRQ_SW_MINOR_VERSION     MCU_SW_MINOR_VERSION

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/

/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#define MCU_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2 interrupt mapping */
#if defined (Os_MCU_FEINT_CAT2_ISR) || defined (MCU_FEINT_CAT2_ISR)
 /* Use ISR() macro from Os.h */
 /* Defines the CAT1 interrupt mapping */
#else
extern FUNC(void, MCU_FAST_CODE) MCU_FEINT_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_MCU_ECM_EIC_CAT2_ISR) || defined (MCU_ECM_EIC_CAT2_ISR)
 /* Use ISR() macro from Os.h */
 /* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, MCU_FAST_CODE) MCU_ECM_EIC_ISR(void);
#endif

#define MCU_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif /* MCU_IRQ_H */

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
