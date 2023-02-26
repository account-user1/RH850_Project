/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi_Irq.h                                                   */
/* $Revision: 365405 $                                                        */
/* $Date: 2017-02-20 15:48:18 +0000 (Mon, 20 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017  Renesas Electronics Corporation                    */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision for prototypes of Interrupt Service Routines.                    */
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
 * V1.0.0:  03-Aug-2015  : Initial Version
 * V1.0.1:  10-Feb-2016  : As part of P1x-C 4.01.00 release the following
 *                         changes were made:
 *                         1. Copyright information is updated.
 *                         2. The file adapted from P1x.
 * V2.0.0:  17-Feb-2017  : Following changes were made :
 *                         1. As part of ARDAAAF-946, added macro
 *                            'SPI_EIC_EIMK_MASK' and IC register addresses
 *                            were defined for all hardware units to implement
 *                            interrupt consistency checks.
 *                         2. Copyright information is updated.
 */
/******************************************************************************/

#ifndef SPI_IRQ_H
#define SPI_IRQ_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Spi.h"
#include "Spi_Driver.h"
/* Included for interrupt category definitions */
#include "Os.h"
/*******************************************************************************
**                      Version Information                                  **
*******************************************************************************/
/* AUTOSAR Release version information */
#define SPI_IRQ_AR_RELEASE_MAJOR_VERSION   SPI_AR_RELEASE_MAJOR_VERSION
#define SPI_IRQ_AR_RELEASE_MINOR_VERSION   SPI_AR_RELEASE_MINOR_VERSION
#define SPI_IRQ_AR_RELEASE_REVISION_VERSION SPI_AR_RELEASE_REVISION_VERSION

/* File version information */
#define SPI_IRQ_SW_MAJOR_VERSION  SPI_SW_MAJOR_VERSION
#define SPI_IRQ_SW_MINOR_VERSION  SPI_SW_MINOR_VERSION


/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Macro Definitions                                     **
*******************************************************************************/

#if (SPI_INTERRUPT_CONSISTENCY_CHECK == STD_ON)
/* EIC register addresses are defined for all hardware units to implement \
                                             interrupt consistency checks */
#define SPI_INTDMA0_EIC_ADDR     (volatile uint16*)0xfffeea20UL
#define SPI_INTCSIH0_EIC_ADDR    (volatile uint16*)0xffffb0acUL
#define SPI_INTCSIH1_EIC_ADDR    (volatile uint16*)0xffffb0b4UL
#define SPI_INTCSIH2_EIC_ADDR    (volatile uint16*)0xffffb0bcUL
#define SPI_INTCSIH3_EIC_ADDR    (volatile uint16*)0xffffb0c4UL
#define SPI_EIC_EIMK_MASK        (uint16)0x0080U
#endif

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_CSIH0_TIC_CAT2_ISR) || defined (SPI_CSIH0_TIC_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH0_TIC_ISR(void);
#endif

#if (((SPI_CANCEL_API == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
     ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
#if (SPI_CSIH0_TIJC_ISR_API == STD_ON)
/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_CSIH0_TIJC_CAT2_ISR) || defined (SPI_CSIH0_TIJC_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH0_TIJC_ISR(void);
#endif
#endif
#endif

#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_CSIH0_TIR_CAT2_ISR) || defined (SPI_CSIH0_TIR_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH0_TIR_ISR(void);
#endif
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_CSIH0_TIRE_CAT2_ISR) || defined (SPI_CSIH0_TIRE_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH0_TIRE_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_CSIH1_TIC_CAT2_ISR) || defined (SPI_CSIH1_TIC_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH1_TIC_ISR(void);
#endif

#if (((SPI_CANCEL_API == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
     ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
#if (SPI_CSIH1_TIJC_ISR_API == STD_ON)
/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_CSIH1_TIJC_CAT2_ISR) || defined (SPI_CSIH1_TIJC_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH1_TIJC_ISR(void);
#endif
#endif
#endif

#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_CSIH1_TIR_CAT2_ISR) || defined (SPI_CSIH1_TIR_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH1_TIR_ISR(void);
#endif
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_CSIH1_TIRE_CAT2_ISR) || defined (SPI_CSIH1_TIRE_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH1_TIRE_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_CSIH2_TIC_CAT2_ISR) || defined (SPI_CSIH2_TIC_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH2_TIC_ISR(void);
#endif

#if (((SPI_CANCEL_API == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
     ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
#if (SPI_CSIH2_TIJC_ISR_API == STD_ON)
/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_CSIH2_TIJC_CAT2_ISR) || defined (SPI_CSIH2_TIJC_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH2_TIJC_ISR(void);
#endif
#endif
#endif

#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_CSIH2_TIR_CAT2_ISR) || defined (SPI_CSIH2_TIR_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH2_TIR_ISR(void);
#endif
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_CSIH2_TIRE_CAT2_ISR) || defined (SPI_CSIH2_TIRE_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH2_TIRE_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_CSIH3_TIC_CAT2_ISR) || defined (SPI_CSIH3_TIC_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH3_TIC_ISR(void);
#endif

#if (((SPI_CANCEL_API == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
     ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
#if (SPI_CSIH3_TIJC_ISR_API == STD_ON)
/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_CSIH3_TIJC_CAT2_ISR) || defined (SPI_CSIH3_TIJC_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH3_TIJC_ISR(void);
#endif
#endif
#endif

#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_CSIH3_TIR_CAT2_ISR) || defined (SPI_CSIH3_TIR_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH3_TIR_ISR(void);
#endif
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_CSIH3_TIRE_CAT2_ISR) || defined (SPI_CSIH3_TIRE_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_CSIH3_TIRE_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_DMA00_CAT2_ISR) || defined (SPI_DMA00_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA00_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_DMA01_CAT2_ISR) || defined (SPI_DMA01_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA01_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_DMA02_CAT2_ISR) || defined (SPI_DMA02_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA02_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_DMA03_CAT2_ISR) || defined (SPI_DMA03_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA03_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_DMA04_CAT2_ISR) || defined (SPI_DMA04_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA04_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_DMA05_CAT2_ISR) || defined (SPI_DMA05_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA05_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_DMA06_CAT2_ISR) || defined (SPI_DMA06_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA06_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_DMA07_CAT2_ISR) || defined (SPI_DMA07_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA07_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_DMA08_CAT2_ISR) || defined (SPI_DMA08_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA08_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_DMA09_CAT2_ISR) || defined (SPI_DMA09_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA09_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_DMA10_CAT2_ISR) || defined (SPI_DMA10_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA10_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_DMA11_CAT2_ISR) || defined (SPI_DMA11_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA11_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_DMA12_CAT2_ISR) || defined (SPI_DMA12_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA12_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_DMA13_CAT2_ISR) || defined (SPI_DMA13_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA13_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_DMA14_CAT2_ISR) ||  defined (SPI_DMA14_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA14_ISR(void);
#endif

/* Defines the CAT2 interrupt mapping */
#if defined (Os_SPI_DMA15_CAT2_ISR) || defined (SPI_DMA15_CAT2_ISR)
/* Use ISR() macro from Os.h */
/* Defines the CAT1 interrupt mapping */
#else
extern _INTERRUPT_ FUNC(void, SPI_FAST_CODE) SPI_DMA15_ISR(void);
#endif

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif  /* SPI_IRQ_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
