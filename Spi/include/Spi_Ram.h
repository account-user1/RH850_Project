/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi_Ram.h                                                   */
/* $Revision: 365405 $                                                        */
/* $Date: 2017-02-20 15:48:18 +0000 (Mon, 20 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017  Renesas Electronics Corporation                  */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the extern declarations of global RAM variables of SPI  */
/* Driver                                                                     */
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
 * V2.0.0:  06-Feb-2017  : Following changes were made:
 *                         1. Spi_GstCommErrorInfo and Spi_GucBufferIndex are
 *                            added for internal Diagnosis implementation.
 *                         2. As per ARDAAAF-440, extern declaration of global
 *                            variable 'Spi_GusDataAccess' has been split into
 *                            variables 'Spi_GusSynDataAccess' and
 *                            'Spi_GusAsynDataAccess' for Synchronous and
 *                            Asynchronous transmission respectively.
 *                         3. As per ARDAAAF-605, extern declaration for new
 *                            Global Variable 'Spi_GblCSRIMask' to check
 *                            CSRI Mask Status of CSIH hardware units is added.
 *                         4. As per ARDAAAF-1713, extern declarations of
 *                            following variables were updated with volatile
 *                            qualifier
 *                            a). Spi_GstFifoCurrentCommData.
 *                            b). Spi_GstCommErrorInfo.
 *                            c). Spi_GblQueueStatus.
 *                            d). Spi_GaaHighPriorityCommRequest.
 *                            e). Spi_GaaHighPriorityCommActive.
 *                            f). Spi_GaaHighPriorityCommRequestAtIdle.
 *                            g). Spi_GaaHighPrioritySequence.
 *                            h). Spi_GddQueueIndex.
 *                            i). Spi_GblInitiateJobTx.
 *                            j). Spi_GucHwUnitStatus.
 *                            k). Spi_GucBufferIndex.
 *                            l). Spi_GusAllQueueSts.
 *                            m). Spi_GusAsynDataAccess.
 *                            n). Spi_GddDriverStatus.
 *                            o). Spi_GucHWFifoBufferSts.
 *                            p). Spi_GddDmaData.
 *                         5. Updated memclass and memory sections for all the
 *                            variables.
 */
/******************************************************************************/

#ifndef SPI_RAM_H
#define SPI_RAM_H

#include "Spi_LTTypes.h"
#include "Spi_PBTypes.h"

/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3684) Array declared with unknown size.                 */
/* Rule          : MISRA-C:2004 Rule 8.12                                     */
/* Justification : Arrays used are verified in the file which are only        */
/*                 declarations and size is configuration dependent.          */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3684)-1 and                           */
/*                 END Msg(4:3684)-1 tags in the code.                        */

/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message      : (4:0857) Number of macro definitions exceeds 1024 - program */
/*                does not conform strictly to ISO:C90.                       */
/* Rule         : MISRA-C:2004 Rule 1.1                                       */
/* Justification: The program requires these macro definitions and cannot be  */
/*                avoided.                                                    */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(4:0857)-2 and                            */
/*                END Msg(4:0857)-2 tags in the code.                         */
/******************************************************************************/

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR Release version information */
#define SPI_RAM_AR_RELEASE_MAJOR_VERSION   SPI_AR_RELEASE_MAJOR_VERSION
#define SPI_RAM_AR_RELEASE_MINOR_VERSION   SPI_AR_RELEASE_MINOR_VERSION
#define SPI_RAM_AR_RELEASE_REVISION_VERSION SPI_AR_RELEASE_REVISION_VERSION

/* MISRA Violation: START Msg(4:0857)-2 */
/* File version information */
#define SPI_RAM_SW_MAJOR_VERSION  SPI_SW_MAJOR_VERSION
#define SPI_RAM_SW_MINOR_VERSION  SPI_SW_MINOR_VERSION

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
#define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "MemMap.h"

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))

/* Global RAM array for current status of SPI Communication for Direct Access */
extern VAR(Spi_CurrentCommData, SPI_VAR_NOINIT)
            Spi_GstCurrentCommData[SPI_MAX_CSIH_HW_INDEX + SPI_ONE];
#endif

#if (SPI_TX_ONLY_MODE == STD_ON)
/* Global RAM array for current status of SPI Communication for Tx-Only */
extern VAR(Spi_TxOnlyCurrentCommData, SPI_VAR_NOINIT)
                    Spi_GstTxOnlyCurrentCommData[SPI_MAX_NUM_OF_TX_ONLY_CSIH];
#endif

#if (SPI_DUAL_BUFFER_MODE == STD_ON)
/* Global RAM array for current status of SPI Communication for Tx-Only */
extern VAR(Spi_DualBufferCurrentCommData, SPI_VAR_NOINIT)
            Spi_GstDualBufferCurrentCommData[SPI_MAX_NUM_OF_DUAL_BUFFER_CSIH];
#endif

#if (SPI_FIFO_MODE == STD_ON)
extern VAR(volatile Spi_FifoCurrentCommData, SPI_VAR_NOINIT)
                                                     Spi_GstFifoCurrentCommData;
#endif

/* Global variable to store the asynchronous transmission mechanism */
extern VAR(Spi_AsyncModeType, SPI_VAR_NOINIT) Spi_GddAsyncMode;

/* Global variable to store config pointer */
extern P2CONST(Spi_ConfigType, SPI_VAR, SPI_CONFIG_CONST) Spi_GpConfigPtr;

/* Global variable to store first channel structure */
extern P2CONST(Spi_ChannelPBConfigType, SPI_VAR, SPI_CONFIG_CONST)
                                                       Spi_GpFirstChannel;

/* Global variable to store first job structure */
extern P2CONST(Spi_JobConfigType, SPI_VAR, SPI_CONFIG_CONST) Spi_GpFirstJob;

/* Global variable to store first sequence structure */
extern P2CONST(Spi_SequenceConfigType, SPI_VAR, SPI_CONFIG_CONST)
                                                             Spi_GpFirstSeq;

/* Global variable to store first sequence structure */
extern P2CONST(Spi_JobListType, SPI_VAR, SPI_CONFIG_CONST) Spi_GpFirstJobList;

/* If Internal Diagnosis Error Buffer size is Greater than Zero */
 #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
/* Structure Array to store hardware error details */
extern VAR(volatile Spi_CommErrorType, SPI_VAR_NOINIT)
                                Spi_GstCommErrorInfo[SPI_MAX_ERROR_BUFFER_SIZE];
#endif

#if (SPI_DMA_MODE_ENABLE == STD_ON)
/* Global pointer variable for HW group configuration */
extern P2CONST(Spi_DmaUnitConfig, SPI_VAR, SPI_CONFIG_CONST)
                                                           Spi_GpDmaUnitConfig;
#endif

#if (SPI_HW_PRIORITY_ENABLED == STD_ON)
extern VAR(volatile Spi_SequenceType, SPI_VAR_NOINIT)
                        Spi_GaaHighPrioritySequence[SPI_MAX_CSIH_HW_INDEX];
#endif

#define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "MemMap.h"

#define SPI_START_SEC_VAR_NO_INIT_BOOLEAN
#include "MemMap.h"

#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || \
                                            (SPI_LEVEL_DELIVERED == SPI_TWO))
/* Status for on-going synchronous transmission */
extern VAR(boolean, SPI_VAR_NOINIT) Spi_GblSyncTx;
#endif

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
/* Stores the current status of queue */
extern VAR(volatile boolean, SPI_VAR_NOINIT) Spi_GblQueueStatus[SPI_MAX_QUEUE];

/* Stores whether new job transmission is initiated */
extern VAR(volatile boolean, SPI_VAR_NOINIT) Spi_GblInitiateJobTx;
#endif

#if (SPI_HW_PRIORITY_ENABLED == STD_ON)
extern VAR(volatile boolean, SPI_VAR_NOINIT)
                        Spi_GaaHighPriorityCommRequest[SPI_MAX_CSIH_HW_INDEX];
extern VAR(volatile boolean, SPI_VAR_NOINIT)
                        Spi_GaaHighPriorityCommActive[SPI_MAX_CSIH_HW_INDEX];
extern VAR(volatile boolean, SPI_VAR_NOINIT)
                    Spi_GaaHighPriorityCommRequestAtIdle[SPI_MAX_CSIH_HW_INDEX];
#endif

#if (SPI_FIFO_MODE == STD_ON)
/* Global RAM Variable To Check CSRI Mask Status of CSIH hardware units*/
extern VAR(boolean, SPI_VAR_NOINIT) Spi_GblCSRIMask;
#endif

#define SPI_STOP_SEC_VAR_NO_INIT_BOOLEAN
#include "MemMap.h"

#define SPI_START_SEC_VAR_NO_INIT_8
#include "MemMap.h"

#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
/* Global RAM Variable To Check HWUnit Status of CSIH hardware units*/
extern VAR(volatile uint8, SPI_VAR_NOINIT) Spi_GucHwUnitStatus;
#endif

/* If Internal Diagnosis Error Buffer size is Greater than Zero */
#if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
/* Index to point the Error Info location next to be filled */
extern VAR(volatile uint8, SPI_VAR_NOINIT) Spi_GucBufferIndex;
#endif

#define SPI_STOP_SEC_VAR_NO_INIT_8
#include "MemMap.h"

#define SPI_START_SEC_VAR_INIT_8
#include "MemMap.h"

/* Global variable to store the status of SPI Driver */
/* MISRA Violation: START Msg(4:3684)-1 */
extern VAR(volatile uint8, SPI_VAR) Spi_GucHWFifoBufferSts[];
/* END Msg (4:3684)-1 */

#define SPI_STOP_SEC_VAR_INIT_8
#include "MemMap.h"

#define SPI_START_SEC_VAR_NO_INIT_16
#include "MemMap.h"

/* Global variable to store the status of all queues */
extern VAR(volatile uint16, SPI_VAR_NOINIT) Spi_GusAllQueueSts;

#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_LEVEL_DELIVERED == SPI_ZERO) \
      || (SPI_FIFO_MODE == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON) || \
      (SPI_TX_ONLY_MODE == STD_ON))
extern VAR(uint16, SPI_VAR_NOINIT) Spi_GusSynDataAccess;
extern VAR(volatile uint16, SPI_VAR_NOINIT) Spi_GusAsynDataAccess;
#endif

#if (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON)
/* Global RAM Variable To Check HWUnit Status*/
extern VAR(uint16, SPI_VAR_NOINIT) Spi_GusHwStatus;
#endif

/* Stores the index of the queue */
extern VAR(volatile Spi_JobType, SPI_VAR_NOINIT)
                                               Spi_GddQueueIndex[SPI_MAX_QUEUE];

#define SPI_STOP_SEC_VAR_NO_INIT_16
#include "MemMap.h"

#define SPI_START_SEC_VAR_UNSPECIFIED
#include "MemMap.h"

/* Global variable to store the status of SPI Driver */
extern VAR(volatile Spi_StatusType, SPI_VAR) Spi_GddDriverStatus;
extern VAR(Spi_StatusType, SPI_VAR) Spi_GddSyncDriverStatus;

#define SPI_STOP_SEC_VAR_UNSPECIFIED
#include "MemMap.h"

#define SPI_START_SEC_VAR_INIT_16
#include "MemMap.h"

#if (SPI_DMA_MODE_ENABLE == STD_ON)
extern VAR(uint16, SPI_INIT_DATA) Spi_GddDmaRxData;
extern VAR(volatile Spi_DataType, SPI_INIT_DATA) Spi_GddDmaData;
#endif

#define SPI_STOP_SEC_VAR_INIT_16
/* END Msg(4:0857)-2 */
#include "MemMap.h"
/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#endif /* SPI_RAM_H */
/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
