/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi_Ram.c                                                   */
/* $Revision: 365405 $                                                        */
/* $Date: 2017-02-20 15:48:18 +0000 (Mon, 20 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017  Renesas Electronics Corporation                  */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains global variable definitions of SPI Driver               */
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
 *                         2. MISRA warnings justified/fixed.
 *                         3. The file adapted from P1x.
 * V2.0.0:  07-Jan-2017  : Following changes were made:
 *                         1. Spi_GstCommErrorInfo and Spi_GucBufferIndex are
 *                            added for internal Diagnosis implementation.
 *                         2. As per ARDAAAF-440, declaration of global variable
 *                            'Spi_GusDataAccess' has been split into variables
 *                            'Spi_GusSynDataAccess' and 'Spi_GusAsynDataAccess'
 *                            for Synchronous and Asynchronous transmission
 *                            respectively.
 *                         3. As part of ticket ARDAAAF-778, START and END
 *                            msgs for Msg(2:2022) and Msg(2:3211) are added at
 *                            the respective places.
 *                         4. As part of ticket ARDAAAF-605, new Global Variable
 *                            'Spi_GblCSRIMask' to check CSRI Mask Status of
 *                             CSIH hardware units is added.
 *                         5. As per ARDAAAF-1713, declarations of following
 *                            variables were updated with volatile qualifier
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
 *                         6. Updated memclass and memory sections for all the
 *                            variables.
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* Included for version check macro definitions and type definitions */
#include "Spi.h"
/* Included for macro definitions and structure declarations */
#include "Spi_PBTypes.h"
/* Included for extern declarations of global variables */
#include "Spi_Ram.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define SPI_RAM_C_AR_RELEASE_MAJOR_VERSION SPI_AR_RELEASE_MAJOR_VERSION_VALUE
#define SPI_RAM_C_AR_RELEASE_MINOR_VERSION SPI_AR_RELEASE_MINOR_VERSION_VALUE
#define SPI_RAM_C_AR_RELEASE_REVISION_VERSION \
                                         SPI_AR_RELEASE_REVISION_VERSION_VALUE

/* File version information */
#define SPI_RAM_C_SW_MAJOR_VERSION  SPI_SW_MAJOR_VERSION_VALUE
#define SPI_RAM_C_SW_MINOR_VERSION  SPI_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (SPI_RAM_AR_RELEASE_MAJOR_VERSION != SPI_RAM_C_AR_RELEASE_MAJOR_VERSION)
  #error "Spi_Ram.c : Mismatch in Release Major Version"
#endif

#if (SPI_RAM_AR_RELEASE_MINOR_VERSION != SPI_RAM_C_AR_RELEASE_MINOR_VERSION)
  #error "Spi_Ram.c : Mismatch in Release Minor Version"
#endif

#if (SPI_RAM_AR_RELEASE_REVISION_VERSION != \
                                         SPI_RAM_C_AR_RELEASE_REVISION_VERSION)
  #error "Spi_Ram.c : Mismatch in Release Revision Version"
#endif

#if (SPI_RAM_SW_MAJOR_VERSION != SPI_RAM_C_SW_MAJOR_VERSION)
  #error "Spi_Ram.c : Mismatch in Software Major Version"
#endif

#if (SPI_RAM_SW_MINOR_VERSION != SPI_RAM_C_SW_MINOR_VERSION)
  #error "Spi_Ram.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message      : (4:0857) Number of macro definitions exceeds 1024 - program */
/*                does not conform strictly to ISO:C90.                       */
/* Rule         : MISRA-C:2004 Rule 1.1                                       */
/* Justification: The program requires these macro definitions and cannot be  */
/*                avoided.                                                    */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(4:0857)-1 and                            */
/*                END Msg(4:0857)-1 tags in the code.                         */
/*******************************************************************************
**                         QAC Warnings                                       **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       :(2:0862) #include "MemMap.h" directive is redundant.        */
/* Rule          : NA                                                         */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files within the code is a MISRA violation. */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/

/* 2. QAC Warning:                                                            */
/* Message       :(2:2022) A tentative definition is being used. Is it        */
/*                 appropriate to include an explicit initializer ?           */
/* Rule          : NA                                                         */
/* Justification : The Global RAM variables are defined in this translation   */
/*                 unit and after initializing it is used in the other files. */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2022)-2 and                           */
/*                 END Msg(2:2022)-2 tags in the code.                        */
/******************************************************************************/

/* 3. QAC Warning:                                                            */
/* Message       :(2:3211) Cast between a pointer to volatile object and      */
/*                 an integral type.                                          */
/* Rule          : NA                                                         */
/* Justification : The Global Post Build variables are defined in this        */
/*                 translation unit and is used in the other files.           */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3211)-3 and                           */
/*                 END Msg(2:3211)-3 tags in the code.                        */
/******************************************************************************/

#define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "MemMap.h"

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))

/* Global RAM array for current status of SPI Communication for Direct Access */
/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
VAR(Spi_CurrentCommData, SPI_VAR_NOINIT)
            Spi_GstCurrentCommData[SPI_MAX_CSIH_HW_INDEX + SPI_ONE];
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */
#endif

#if (SPI_TX_ONLY_MODE == STD_ON)
/* Global RAM array for current status of SPI Communication for Tx-Only */
/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
VAR(Spi_TxOnlyCurrentCommData, SPI_VAR_NOINIT)
                    Spi_GstTxOnlyCurrentCommData[SPI_MAX_NUM_OF_TX_ONLY_CSIH];
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */
#endif

#if (SPI_DUAL_BUFFER_MODE == STD_ON)
/* Global RAM array for current status of SPI Communication for Tx-Only */
/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
VAR(Spi_DualBufferCurrentCommData, SPI_VAR_NOINIT)
            Spi_GstDualBufferCurrentCommData[SPI_MAX_NUM_OF_DUAL_BUFFER_CSIH];
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */
#endif

#if (SPI_FIFO_MODE == STD_ON)
/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
VAR(volatile Spi_FifoCurrentCommData, SPI_VAR_NOINIT)
                                                     Spi_GstFifoCurrentCommData;
/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
#endif

/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
/* Global variable to store the asynchronous transmission mechanism */
VAR(Spi_AsyncModeType, SPI_VAR_NOINIT) Spi_GddAsyncMode;
/* END Msg(2:3211)-3 */
/* END Msg(2:2022)-2 */

/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
/* Global variable to store config pointer */
P2CONST(Spi_ConfigType, SPI_VAR, SPI_CONFIG_CONST) Spi_GpConfigPtr;
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */

/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
/* Global variable to store first channel structure */
P2CONST(Spi_ChannelPBConfigType, SPI_VAR, SPI_CONFIG_CONST)
                                                       Spi_GpFirstChannel;
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */

/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
/* Global variable to store first job structure */
P2CONST(Spi_JobConfigType, SPI_VAR, SPI_CONFIG_CONST) Spi_GpFirstJob;
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */

/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
/* Global variable to store first sequence structure */
P2CONST(Spi_SequenceConfigType, SPI_VAR, SPI_CONFIG_CONST) Spi_GpFirstSeq;
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */

/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
/* Global variable to store first sequence structure */
P2CONST(Spi_JobListType, SPI_VAR, SPI_CONFIG_CONST) Spi_GpFirstJobList;
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */

/* If Internal Diagnosis Error Buffer size is Greater than Zero */
#if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
/* Structure Array to store hardware error details */
VAR(volatile Spi_CommErrorType, SPI_VAR_NOINIT)
                                Spi_GstCommErrorInfo[SPI_MAX_ERROR_BUFFER_SIZE];
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */
#endif

#if (SPI_DMA_MODE_ENABLE == STD_ON)
/* START Msg(2:2022)-2 */
/* Global pointer variable for HW group configuration */
P2CONST(Spi_DmaUnitConfig, SPI_VAR, SPI_CONFIG_CONST) Spi_GpDmaUnitConfig;
/* END Msg(2:2022)-2 */
#endif

#if (SPI_HW_PRIORITY_ENABLED == STD_ON)
/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
VAR(volatile Spi_SequenceType, SPI_VAR_NOINIT)
                        Spi_GaaHighPrioritySequence[SPI_MAX_CSIH_HW_INDEX];
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */
#endif

#define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "MemMap.h"

#define SPI_START_SEC_VAR_NO_INIT_BOOLEAN
#include "MemMap.h"

#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || \
                                            (SPI_LEVEL_DELIVERED == SPI_TWO))
/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
/* Status for on-going synchronous transmission */
VAR(boolean, SPI_VAR_NOINIT) Spi_GblSyncTx;
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */
#endif

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
/* Stores the current status of queue */
VAR(volatile boolean, SPI_VAR_NOINIT) Spi_GblQueueStatus[SPI_MAX_QUEUE];

/* Stores whether new job transmission is initiated */
VAR(volatile boolean, SPI_VAR_NOINIT) Spi_GblInitiateJobTx;
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */
#endif

#if (SPI_HW_PRIORITY_ENABLED == STD_ON)
/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
VAR(volatile boolean, SPI_VAR_NOINIT)
                        Spi_GaaHighPriorityCommRequest[SPI_MAX_CSIH_HW_INDEX];
VAR(volatile boolean, SPI_VAR_NOINIT)
                        Spi_GaaHighPriorityCommActive[SPI_MAX_CSIH_HW_INDEX];
VAR(volatile boolean, SPI_VAR_NOINIT)
                    Spi_GaaHighPriorityCommRequestAtIdle[SPI_MAX_CSIH_HW_INDEX];
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */
#endif

#if(SPI_FIFO_MODE == STD_ON)
/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
/* Global RAM Variable To Check CSRI Mask Status of CSIH hardware units*/
VAR(boolean, SPI_VAR_NOINIT) Spi_GblCSRIMask;
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */
#endif

#define SPI_STOP_SEC_VAR_NO_INIT_BOOLEAN
#include "MemMap.h"

#define SPI_START_SEC_VAR_NO_INIT_8
#include "MemMap.h"

#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
/* Global RAM Variable To Check HWUnit Status of CSIH hardware units*/
VAR(volatile uint8, SPI_VAR_NOINIT) Spi_GucHwUnitStatus;
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */
#endif

/* If Internal Diagnosis Error Buffer size is Greater than Zero */
#if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
/* Index to point the Error Info location next to be filled */
VAR(volatile uint8, SPI_VAR_NOINIT) Spi_GucBufferIndex;
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */
#endif

#define SPI_STOP_SEC_VAR_NO_INIT_8
#include "MemMap.h"

#define SPI_START_SEC_VAR_INIT_8
#include "MemMap.h"

/* START Msg(2:3211)-3 */
/* Global variable to store the status of SPI Driver */
VAR(volatile uint8, SPI_VAR) Spi_GucHWFifoBufferSts[SPI_TWO] =
                            {SPI_FIFO_BUFFER_UNINIT, SPI_FIFO_BUFFER_UNINIT};
/* END Msg(2:3211)-3 */

#define SPI_STOP_SEC_VAR_INIT_8
#include "MemMap.h"

#define SPI_START_SEC_VAR_NO_INIT_16
/* MISRA Violation: START Msg(4:0857)-1 */
#include "MemMap.h"
/* END Msg(4:0857)-1 */
/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
/* Global variable to store the status of all queues */
VAR(volatile uint16, SPI_VAR_NOINIT) Spi_GusAllQueueSts;
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */

#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_LEVEL_DELIVERED == SPI_ZERO) \
      || (SPI_FIFO_MODE == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON) || \
      (SPI_TX_ONLY_MODE == STD_ON))
/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
VAR(uint16, SPI_VAR_NOINIT) Spi_GusSynDataAccess;
VAR(volatile uint16, SPI_VAR_NOINIT) Spi_GusAsynDataAccess;
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */
#endif

#if (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON)
/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
/* Global RAM Variable To Check HW Unit Status*/
VAR(uint16, SPI_VAR_NOINIT) Spi_GusHwStatus;
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */
#endif

/* START Msg(2:2022)-2 */
/* START Msg(2:3211)-3 */
/* Stores the index of the queue */
VAR(volatile Spi_JobType, SPI_VAR_NOINIT) Spi_GddQueueIndex[SPI_MAX_QUEUE];
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-3 */

#define SPI_STOP_SEC_VAR_NO_INIT_16
#include "MemMap.h"

#define SPI_START_SEC_VAR_UNSPECIFIED
#include "MemMap.h"

/* Global variable to store the status of SPI Driver */
/* START Msg(2:3211)-3 */
VAR(volatile Spi_StatusType, SPI_VAR) Spi_GddDriverStatus = SPI_UNINIT;
VAR(Spi_StatusType, SPI_VAR) Spi_GddSyncDriverStatus = SPI_UNINIT;
/* END Msg(2:3211)-3 */

#define SPI_STOP_SEC_VAR_UNSPECIFIED
#include "MemMap.h"

#define SPI_START_SEC_VAR_INIT_16
#include "MemMap.h"

#if (SPI_DMA_MODE_ENABLE == STD_ON)
/* START Msg(2:3211)-3 */
VAR(uint16, SPI_VAR) Spi_GddDmaRxData = SPI_ZERO;
VAR(volatile Spi_DataType, SPI_VAR) Spi_GddDmaData = SPI_ZERO;
/* END Msg(2:3211)-3 */
#endif

#define SPI_STOP_SEC_VAR_INIT_16
#include "MemMap.h"

/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
