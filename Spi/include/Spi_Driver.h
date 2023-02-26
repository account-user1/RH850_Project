/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi_Driver.h                                                */
/* $Revision: 365405 $                                                        */
/* $Date: 2017-02-20 15:48:18 +0000 (Mon, 20 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2016  Renesas Electronics Corporation                    */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the extern declarations of global SPI Driver functions  */
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
 * V2.0.0:  08-Jul-2016  : Following changes were made:
 *                         1. As part of Write-verify implementation, added
 *                            APIID as argument for the required functions.
 *                         2. Extern function declaration for the following
 *                            API's added : Spi_StaticInit, Spi_CsihStaticInit,
 *                            Spi_LoopBackSelfTest, Spi_CsihLoopBackSelfTest,
 *                            Spi_EccSelfTest, Spi_EccAllZeroTest,
 *                            Spi_EccAllOneTest, Spi_EccWalkOneTest,
 *                            Spi_EccTwoBitTest, Spi_InitDetCheck,
 *                            Spi_SeqJobChannelInit, Spi_InitiateSyncTransmit,
 *                            Spi_SyncProcessData, Spi_GetCurrentRxData,
 *                            Spi_SetEojAndCsriBits, Spi_SyncRegSettings,
 *                            Spi_CsihTxDataAndErrorProcessing,
 *                            Spi_GetCurrentRxData, Spi_CheckRegEmpty,
 *                            Spi_CheckErrorInt, Spi_ReportErrorInSyncTx,
 *                            Spi_StoreErrorInfo, Spi_AsyncDetCheck,
 *                            Spi_AsyncInDirAccOrFifoMod,
 *                            Spi_ProcessTransmission,
 *                            Spi_ProcessChannelInFifoMod,
 *                            Spi_ProcessChannelInDualOrTxMod,
 *                            Spi_ProcessChannelInDirAccMod,
 *                            Spi_AsyncChannelRegSettings, Spi_GetTxRegValue,
 *                            Spi_FifoWriteData, Spi_CfgRegSettings,
 *                            Spi_ProcessDirectAcessData, Spi_ProcessCsihData,
 *                            Spi_ProcessExtendedData, Spi_ProcessFifoData,
 *                            Spi_CheckAndInvokeTxIsr, Spi_CheckAndInvokeRxIsr
 *                            Spi_ProcessDualBufferData,
 *                            Spi_ProcesSeqInDualOrTxMod,Spi_ChkCancelReqForSeq,
 *                            Spi_ReceiveCsihData and Spi_ReceiveChannelPropSame
 *                         3. Removed function declaration for
 *                            Spi_ProcessChannel.
 *                         4. Removed the function declarations for
 *                            'Spi_HWActivateCS' and 'Spi_HWDeActivateCS' since
 *                            these functions are used only for CSIG hardware.
 *                         5. As per ARDAAAF-521, In Spi_CsihStaticInit API
 *                            the parameter 'LpHWUnitInfo' removed and added
 *                            new parameter 'LddHWUnit'.
 */
/******************************************************************************/

#ifndef SPI_DRIVER_H
#define SPI_DRIVER_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Spi.h"
#include "Spi_PBTypes.h"
#include "Spi_Ram.h"
#if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
#include "SchM_Spi.h"
#endif
/* TRACE [R3, SPI174][R4, SPI174] */
/* TRACE [R3, SPI158][R4, SPI158] */
#include "Dem.h"
/* TRACE [R3, SPI029][R4, SPI029] */
#if (SPI_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR Release version information */
#define SPI_DRIVER_AR_RELEASE_MAJOR_VERSION   SPI_AR_RELEASE_MAJOR_VERSION
#define SPI_DRIVER_AR_RELEASE_MINOR_VERSION   SPI_AR_RELEASE_MINOR_VERSION
#define SPI_DRIVER_AR_RELEASE_REVISION_VERSION \
                                              SPI_AR_RELEASE_REVISION_VERSION

/* File version information */
#define SPI_DRIVER_SW_MAJOR_VERSION  SPI_SW_MAJOR_VERSION
#define SPI_DRIVER_SW_MINOR_VERSION  SPI_SW_MINOR_VERSION


/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
extern FUNC(void, SPI_PRIVATE_CODE) Spi_HWInit(void);
#endif
extern FUNC(void, SPI_PRIVATE_CODE) Spi_SeqJobChannelInit(void);

#if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_ON)
extern FUNC(void, SPI_PRIVATE_CODE) Spi_StaticInit(uint8 LucApId);
#else

extern FUNC(void, SPI_PRIVATE_CODE)Spi_SyncRegSettings
         (P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig);
#endif

extern FUNC(void, SPI_PRIVATE_CODE) Spi_HWDeInit(void);

#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
extern FUNC(void, SPI_PRIVATE_CODE) Spi_HWWriteIB(Spi_ChannelType Channel,
P2CONST(Spi_DataType, AUTOMATIC, SPI_APPL_CONST) LpDataBufferPtr,uint8 LucApId);

extern FUNC(void, SPI_PRIVATE_CODE) Spi_HWReadIB(Spi_ChannelType Channel,
           P2VAR(Spi_DataType, AUTOMATIC, SPI_APPL_CONST) LpDataBufferPtr);
#endif

#if (SPI_IB_CONFIGURED == STD_ON)
extern FUNC(void, SPI_PRIVATE_CODE) Spi_InternalWriteIB(Spi_ChannelType Channel
, P2CONST(Spi_DataType, AUTOMATIC, SPI_APPL_CONST) LpDataBufferPtr,
               uint8 LucApId);
#endif

/* TRACE [R3, SPI029][R4, SPI029] */
#if (SPI_HW_STATUS_API == STD_ON)
extern FUNC(Spi_StatusType, SPI_PRIVATE_CODE) Spi_HWUnitStatus
                                                     (Spi_HWUnitType HWUnit);
#endif

#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
                                            (SPI_DIRECT_ACCESS_MODE == STD_ON)))

extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_CheckRegEmpty
(P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)LpHWUnitInfo ,
 Std_ReturnType LenReturnValue, uint8 Lucflag);

extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE) Spi_InitiateSyncTransmit
                                                   (Spi_SequenceType Sequence);

#if (SPI_CSIH_CONFIGURED == STD_ON)
#if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
extern FUNC(void, SPI_PRIVATE_CODE) Spi_SetEojAndCsriBits(
P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig,
P2VAR(Spi_DataAccess, AUTOMATIC, SPI_PRIVATE_CONST) LpDataAccess,
Spi_NumberOfDataType LddNoOfTxBuffers, Spi_ChannelType LddNoOfChannels,
Spi_HWUnitType LddHWUnit);
#else
extern FUNC(void, SPI_PRIVATE_CODE) Spi_SetEojBit(
P2VAR(Spi_DataAccess, AUTOMATIC, SPI_PRIVATE_CONST) LpDataAccess,
Spi_NumberOfDataType LddNoOfTxBuffers, Spi_ChannelType LddNoOfChannels);
#endif
#endif

 #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) || (SPI_EB_CONFIGURED == STD_ON))
 #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
 extern FUNC(P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA), SPI_PRIVATE_CODE)
 Spi_GetCurrentRxData(uint8 LucChannelBufferType,
                                           Spi_NumberOfDataType LddBufferIndex);
 #else
 extern FUNC(P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA), SPI_PRIVATE_CODE)
  Spi_GetCurrentRxData(Spi_NumberOfDataType LddBufferIndex);
 #endif
 #endif

#if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE) Spi_HWTransmitSyncJob
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig,
                          Spi_SequenceType LddSequenceID, Spi_JobType LddJobID);

extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_SyncProcessData
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig,
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpPBChannelConfig,
Spi_ChannelType LddNoOfChannels,Spi_SequenceType LddSequenceID,
                                                          Spi_JobType LddJobID);

extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_CheckErrorInt
(P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo,
Std_ReturnType LenReturnValue, Spi_SequenceType LddSequenceID,
                             Spi_JobType LddJobID, Spi_HWUnitType LddHWUnit);

#if (SPI_CSIH_CONFIGURED == STD_ON)
extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_CsihTxDataAndErrorProcessing
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig,
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)LpPBChannelConfig,
Spi_DataAccess LunDataAccess2, Spi_SequenceType LddSequenceID,
                                                         Spi_JobType LddJobID);
extern FUNC(void, SPI_PRIVATE_CODE)Spi_GetCsihRxData
(P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)LpPBChannelConfig,
P2VAR(Spi_DataAndErrorFlag, AUTOMATIC, SPI_CONFIG_DATA) LpDataAndDemFlag,
Spi_SequenceType LddSequenceID, Spi_JobType LddJobID, Spi_HWUnitType LddHWUnit);
#endif

#else

extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE) Spi_HWTransmitSyncJob
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig);

extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_SyncProcessData
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig,
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpPBChannelConfig,
Spi_ChannelType LddNoOfChannels );

extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_CheckErrorInt
(P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo,
Std_ReturnType LenReturnValue);

#if (SPI_CSIH_CONFIGURED == STD_ON)
extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_CsihTxDataAndErrorProcessing
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig,
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)LpPBChannelConfig,
Spi_DataAccess LunDataAccess2);

extern FUNC(void, SPI_PRIVATE_CODE)Spi_GetCsihRxData
(P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)LpPBChannelConfig,
 P2VAR(Spi_DataAndErrorFlag, AUTOMATIC, SPI_CONFIG_DATA) LpDataAndDemFlag,
 Spi_HWUnitType LddHWUnit);

#endif
#endif
#endif

#if (SPI_DMA_MODE_ENABLE == STD_ON)
extern FUNC(void, SPI_PRIVATE_CODE) Spi_TxDmaConfig
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig,
 P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpTxData,
 Spi_NumberOfDataType LddNoOfBuffers);

extern FUNC(void, SPI_PRIVATE_CODE) Spi_RxDmaConfig
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig,
 P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpRxData,
 Spi_NumberOfDataType LddNoOfBuffers);

#endif

 /* If Internal Diagnosis Error Buffer size is Greater than Zero */
#if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
/* Function to store Hardware Error Details */
extern FUNC(void, SPI_PRIVATE_CODE) Spi_StoreErrorInfo (
         P2CONST(Spi_CommErrorType, AUTOMATIC, SPI_APPL_CONST) LpErrorDetails );
#endif
#if ((SPI_INTERNAL_DIAG_BUFF == STD_ON) &&  \
    ((SPI_LEVEL_DELIVERED == SPI_ZERO) ||   \
     ((SPI_LEVEL_DELIVERED == SPI_TWO) && (SPI_DIRECT_ACCESS_MODE == STD_ON))))
/* Function to report error in Synchronous Transmission*/
extern FUNC(void, SPI_PRIVATE_CODE) Spi_ReportErrorInSyncTx
        (Spi_SequenceType LddSequenceID, Spi_JobType LddJobID,
                                                      Spi_HWUnitType LddHWUnit);
#endif

/* Internal APIs for enhanced (Synchronous/Asynchronous) SPI Handler/Driver */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
       (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
               (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

extern FUNC(void, SPI_PRIVATE_CODE) Spi_InitiateJobTx
                                                 (Spi_JobType LddJobListIndex);

extern FUNC(void, SPI_PRIVATE_CODE) Spi_ProcessSequence
                   (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);
#endif

#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
extern FUNC(void, SPI_PRIVATE_CODE)Spi_AsyncInDirAccOrFifoMod
                                                    (Spi_SequenceType Sequence);
extern FUNC(void, SPI_PRIVATE_CODE) Spi_ProcessTransmission
(Spi_SequenceType Sequence, boolean LblInitiateTx, uint8 LucQueueIndex,
uint8 LucHWMemoryMode, Spi_JobType LddLowestQueueIndex);
#endif

#if ((((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) && \
        (SPI_CANCEL_API == STD_ON)) || (SPI_HW_PRIORITY_ENABLED == STD_ON))
extern FUNC(void, SPI_PRIVATE_CODE) Spi_HWCancel(uint8 LucIndex, uint8 LucApId);
#endif

#if ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
     (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
             (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
extern FUNC(void, SPI_PRIVATE_CODE) Spi_HWMainFunction_Handling(void);
#endif

#if ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
     (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
             (SPI_DUAL_BUFFER_MODE == STD_ON)))
extern FUNC(void, SPI_PRIVATE_CODE) Spi_CheckAndInvokeTxIsr
(P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo,
Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);
#endif

#if ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
     (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_TX_ONLY_MODE == STD_ON)))
extern FUNC(void, SPI_PRIVATE_CODE) Spi_CheckAndInvokeRxIsr
(P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo,
Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);

#endif

#if (SPI_LEVEL_DELIVERED == SPI_TWO)
extern FUNC(void, SPI_PRIVATE_CODE) Spi_HWDisableInterrupts(void);
#endif

#if (SPI_LOOPBACK_SELFTEST == SPI_ONE || SPI_LOOPBACK_SELFTEST == SPI_TWO)
extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE) Spi_LoopBackSelfTest(void);


#if (SPI_CSIH_CONFIGURED == STD_ON)
extern FUNC(uint8, SPI_PRIVATE_CODE)Spi_CsihLoopBackSelfTest
(P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)LpHWUnitInfo,
                                                   Spi_HWUnitType LddHWUnit);
#endif

#endif

#if (SPI_CSIH_CONFIGURED == STD_ON)
#if (SPI_ECC_SELFTEST == SPI_ONE || SPI_ECC_SELFTEST == SPI_TWO)
extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE) Spi_EccSelfTest(void);
extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_EccAllZeroTest
                                                   (Spi_HWUnitType LddHWUnit);
extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_EccAllOneTest
                                                   (Spi_HWUnitType LddHWUnit);
extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_EccWalkOneTest
                                                   (Spi_HWUnitType LddHWUnit);
extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_EccTwoBitTest
                                                   (Spi_HWUnitType LddHWUnit);

#endif
#endif

#if (SPI_DEV_ERROR_DETECT == STD_ON)
extern FUNC(boolean, SPI_PRIVATE_CODE) Spi_InitDetCheck
                 (P2CONST(Spi_ConfigType, AUTOMATIC, SPI_APPL_CONST) ConfigPtr);
extern FUNC(Std_ReturnType, SPI_PRIVATE_CODE) Spi_AsyncDetCheck
                                                    (Spi_SequenceType Sequence);
#endif

#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
     (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
               (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

extern FUNC(void, SPI_PRIVATE_CODE) Spi_AsyncChannelRegSettings
(Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);

#endif

#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
  ((SPI_HWUNIT_ASYNCHRONOUS == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON))\
                                        || (SPI_FIFO_MODE == STD_ON))
extern FUNC(void, SPI_PRIVATE_CODE)Spi_CfgRegSettings(
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpPBChannelConfig,
P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig,
Spi_HWUnitType LddHWUnit);
#endif

#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                                        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON))|| \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
extern FUNC(void, SPI_PRIVATE_CODE) Spi_ProcessChannelInDirAccMod
(Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);

#if ((SPI_8BIT_DATA_WIDTH == STD_OFF) && (SPI_16BIT_DATA_WIDTH == STD_OFF))
extern FUNC(void, SPI_PRIVATE_CODE)Spi_GetTxRegValue(
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)LpPBChannelConfig,
P2VAR(Spi_DataAccess, AUTOMATIC, SPI_PRIVATE_CONST)LpDataAccess,
P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData,
Spi_DataType LddData);
#endif

#endif
#if (SPI_FIFO_MODE == STD_ON)
extern FUNC(void, SPI_PRIVATE_CODE) Spi_ProcessChannelInFifoMod
(Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);
#endif

#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

extern FUNC(void, SPI_PRIVATE_CODE) Spi_ProcessChannelInDualOrTxMod
(Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);

extern FUNC(void, SPI_PRIVATE_CODE)Spi_ProcesSeqInDualOrTxMod(
P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_CONFIG_CONST) LpHWUnitInfo,
Spi_HWUnitType LddHWUnit);

#if (SPI_CANCEL_API == STD_ON)
extern FUNC(uint8, SPI_PRIVATE_CODE)Spi_ChkCancelReqForSeq(
          Spi_HWUnitType LddHWUnitNumber, Spi_SequenceType LddLowestQueueIndex);
#endif
#endif

#if(SPI_CSIH_CONFIGURED == STD_ON)
#if ((SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_ON) ||\
    ((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                                      (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
    (SPI_FIFO_MODE == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON) || \
                                      (SPI_TX_ONLY_MODE == STD_ON))
extern FUNC(void, SPI_PRIVATE_CODE)Spi_CsihStaticInit
(P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList,
Spi_JobType LddNoOfJobs, Spi_HWUnitType LddHWUnitNumber,
                        Spi_HWUnitType LddHWUnit, uint8 LucApId );
#endif
#endif

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
      (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON))
extern FUNC(void, SPI_FAST_CODE) Spi_TransmitISR
     (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);
#endif

#if (((SPI_CANCEL_API == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
    ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
extern FUNC(void, SPI_FAST_CODE) Spi_TransmitCancelISR
                 (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);
#endif

#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_TX_ONLY_MODE == STD_ON))
extern FUNC(void, SPI_FAST_CODE) Spi_ReceiveISR
      (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);
#endif

#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                    (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                                        (SPI_HW_PRIORITY_ENABLED == STD_ON))
#if (SPI_HW_PRIORITY_ENABLED == STD_ON)
extern FUNC(void, SPI_FAST_CODE)Spi_ReceiveChannelPropSame(
P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData,
Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode,Spi_HWUnitType LddHWUnitNumber);
#else
extern FUNC(void, SPI_FAST_CODE)Spi_ReceiveChannelPropSame(
P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData,
Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);
#endif

extern FUNC(void, SPI_FAST_CODE)Spi_ProcessDirectAcessData
  (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);

extern FUNC(void, SPI_FAST_CODE)Spi_ReceiveDirectAcessData
                              (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);

#if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
extern FUNC(void, SPI_FAST_CODE)Spi_ProcessExtendedData
(Spi_HWUnitType LddHWUnit,
P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig,
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpPBChannelConfig,
P2CONST(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData,
P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpNextTxData );
#endif

#if (SPI_CSIH_CONFIGURED == STD_ON)
#if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
extern FUNC(void, SPI_FAST_CODE)Spi_ProcessCsihData(Spi_HWUnitType LddHWUnit,
P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig,
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpPBChannelConfig,
P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData,
Spi_DataType LddData);

extern FUNC(void, SPI_FAST_CODE)Spi_ReceiveCsihData(
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpPBChannelConfig,
P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_CONST)LpCurrentCommData,
Spi_HWUnitType LddHWUnit);
#else
extern FUNC(void, SPI_FAST_CODE)Spi_ReceiveCsihData(
P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_CONST)LpCurrentCommData,
Spi_HWUnitType LddHWUnit);

extern FUNC(void, SPI_FAST_CODE)Spi_ProcessCsihData(Spi_HWUnitType LddHWUnit,
P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig,
P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData,
Spi_DataType LddData);
#endif
#endif
 #endif

 #if (SPI_DUAL_BUFFER_MODE == STD_ON)
extern FUNC(void, SPI_FAST_CODE)Spi_ProcessDualBufferData
                             (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);
#endif

#if (SPI_FIFO_MODE == STD_ON)
 extern FUNC(void, SPI_FAST_CODE)Spi_ProcessFifoData(Spi_HWUnitType LddHWUnit,
                                              uint8 LucHWMemoryMode);

extern FUNC(void, SPI_PRIVATE_CODE) Spi_FifoWriteData
(P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList,
 Spi_ChannelType LddNoOfChannels, Spi_NumberOfDataType LddNoOfBuffers,
 P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpNextTxData,
 Spi_HWUnitType LddHWUnit);

extern FUNC(void, SPI_FAST_CODE) Spi_FifoReadData
(P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)LpPBChannelConfig,
P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentRxData,
Spi_NumberOfDataType LddNoOfBuffers, Spi_HWUnitType LddHWUnit);
#endif

#if (SPI_DMA_MODE_ENABLE == STD_ON)
extern FUNC(void, SPI_FAST_CODE) Spi_DmaISR(uint8 LucDmaUnit);
#endif

#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
       (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
               (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
extern FUNC(void, SPI_FAST_CODE) Spi_ComErrorISR
                 (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode);
#endif

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif /* SPI_DRIVER_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
