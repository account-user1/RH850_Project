/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi_PBTypes.h                                               */
/* $Revision: 365405 $                                                        */
/* $Date: 2017-02-20 15:48:18 +0000 (Mon, 20 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017  Renesas Electronics Corporation                    */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the type definitions for post-build time parameters     */
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
 * V1.0.0:  03-Aug-2015  : Initial Version.
 * V1.0.1:  10-Feb-2016  : As part of P1x-C 4.01.00 release the following
 *                         changes were made:
 *                         1. Copyright information is updated.
 *                         2. The file adapted from P1x.
 * V2.0.0:  14-Feb-2017  : Following changes were made:
 *                         1. As per ARDAAAF-946, created
 *                            STag_Spi_DataFlag and STag_Spi_JobDetails
 *                            structure.
 *                         2. Since P1H-C supports DMA of DMA_TYPE_TWO only, so
 *                            Removed structure related to DMA_TYPE_ONE.
 *                         3. As part ARDAAAF-1053, Critical section
 *                            protection Macro added.
 *                         4. As part of fixing the ticket ARDAAAF-1108,
 *                            added the parameter blCSRIMasked to
 *                            Spi_GstJobConfig structure.
 *                         5. As part of fixing the ticket ARDAAAF-996, updated
 *                            the memory sections of following global arrays
 *                             a. Spi_GaaSeqStatusBitArray.
 *                             b. Spi_GaaChannelIBWrite.
 *                             c. Spi_GaaChannelIBRead.
 */
/******************************************************************************/

#ifndef SPI_PBTYPES_H
#define SPI_PBTYPES_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Spi.h"
/* Included for Spi type declarations */
#include "Spi_Types.h"
#include "SchM_Spi.h"
#include "Spi_Cbk.h"
#if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
#include "SchM_Spi.h"
#endif

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR Release version information */
#define SPI_PBTYPES_AR_RELEASE_MAJOR_VERSION   SPI_AR_RELEASE_MAJOR_VERSION
#define SPI_PBTYPES_AR_RELEASE_MINOR_VERSION   SPI_AR_RELEASE_MINOR_VERSION
#define SPI_PBTYPES_AR_RELEASE_REVISION_VERSION \
                                              SPI_AR_RELEASE_REVISION_VERSION

/* File version information */
#define SPI_PBTYPES_SW_MAJOR_VERSION  SPI_SW_MAJOR_VERSION
#define SPI_PBTYPES_SW_MINOR_VERSION  SPI_SW_MINOR_VERSION

/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3453) A function could probably be used instead of this */
/*                 function-like macro.                                       */
/* Rule          : MISRA-C:2004 Rule 19.7                                     */
/* Justification : The macros are used to differentiate the SchM functions    */
/*                 for common Autosar R3.2 and R4.0 implementation.           */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3453)-1 and                           */
/*                 END Msg(4:3453)-1 tags in the code.                        */
/******************************************************************************/

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                      SchM Critical Section Protection Macros               **
*******************************************************************************/
/* MISRA Violation: START Msg(4:3453)-1 */
#define SPI_ENTER_CRITICAL_SECTION(Exclusive_Area) \
      SchM_Enter_Spi_##Exclusive_Area()

#define SPI_EXIT_CRITICAL_SECTION(Exclusive_Area) \
      SchM_Exit_Spi_##Exclusive_Area()

/* END Msg(4:3453)-1 */

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/* Definition of chip select type */
typedef enum ETagSpi_CSType
{
  SPI_DISABLE_CS = 0,
  SPI_GPIO_CS,
  SPI_PERIPHERAL_ENGINE_CS
} Spi_CSType;

/* TRACE [R3, SPI063][R4, SPI063] */
/* TRACE [R3, SPI104][R4, SPI104_Conf] */
/* Structure for channel configuration */
typedef struct STag_Spi_ChannelPBConfigType
{
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  /* TRACE [R3, SPI203][R4, SPI203_Conf] */
  /* TRACE [R3, SPI164][R4, SPI164] */
  /* Default value of the channel */
  Spi_DataType ddDefaultData;
  /* Index of the buffer */
  Spi_NumberOfDataType ddBufferIndex;
  /* Number of IB or maximum size of EB */
  /* TRACE [R3, SPI204][R4, SPI204_Conf] */
  /* TRACE [R3, SPI205][R4, SPI205_Conf] */
  Spi_NumberOfDataType ddNoOfBuffers;
  #else
  /* Index of the buffer */
  Spi_NumberOfDataType ddBufferIndex;
  /* Number of IB or maximum size of EB */
  /* TRACE [R3, SPI202][R4, SPI202_Conf] */
  Spi_NumberOfDataType ddNoOfBuffers;
  /* Default value of the channel */
  Spi_DataType ddDefaultData;
  #endif
  uint8 ucDLSSetting;
  /*
   * Type of the data according to data width; SPI_TYPE_UINT8 for uint8,
   * 1 for SPI_TYPE_UINT16 or 2 for SPI_TYPE_UINT32
   */
  uint8 ucDataType;
  /*
   * Channel buffer type - '0' for IB, '1' for EB, >1 for HW Buffer
   * For values greater than 1, the value is 2 + the index
   * of HW Unit (CSIH) in Spi_HWUnitInfo type structure.CSIG does
   * not have hardware buffers
   */
  /* TRACE [R3, SPI201][R4, SPI201_Conf] */
  uint8 ucChannelBufferType;
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) || \
                                   (SPI_HW_PRIORITY_ENABLED == STD_ON))
  /*
   * Value to check if the channel is last channel in the job (0x01) or
   * last channel (0x02) in the sequence
   */
  uint8 ucChannelInfo;
  /* Value of chip select of the corresponding job */
  uint8 ucCSInfo;
  #endif
  /* TRACE [R3, SPI206][R4, SPI206_Conf] */
  /* Data direction - SPI_TRUE for LSB and SPI_FALSE for MSB */
  boolean blDirection;
  /* Value to check if data length is greater than 16 bits */
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  boolean blEDLEnabled;
  #endif
} Spi_ChannelPBConfigType;

/* TRACE [R3, SPI105][R4, SPI105_Conf] */
/* Structure for job configuration */
typedef struct STag_Spi_JobConfigType
{
  /* TRACE [R3, SPI215][R4, SPI215_Conf] */
  /* TRACE [R3, SPI066][R4, SPI066] */
  /* TRACE [R3, SPI009][R4, SPI009] */
  /* TRACE [R3, SPI212][R4, SPI212_Conf] */
  /* TRACE [R4, SPI263] */
  /* Pointer to list of channels */
  /* TRACE [R3, SPI166][R4, SPI166] */
  /* TRACE [R4, SPI368] */
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST)pChannelList;
  /* Address of the port group for chip select */
  P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA)pPortGrpRegAddress;
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* Pointer to callback notification */
  P2FUNC(void, SPI_APPL_CODE, pSpiJobNotification)(void);
  #endif
  /* Initialization value for main control register 1 without SLIT */
  uint32 ulMainCtl1Value;
  /* Mask for the port pin */
  uint32 ulPortPinMask;
  /* Value for configuration register (for both CSIG and CSIH) */
  /* TRACE [R3, SPI213][R4, SPI213_Conf] */
  /* TRACE [R3, SPI211][R4, SPI211_Conf] */
  uint32 ulConfigRegValue;
  #if (SPI_FIFO_MODE == STD_ON)
  /* Total number of buffers in the job */
  Spi_NumberOfDataType ddNoOfBuffers;
  #endif
  /* Value for control register 2 */
  uint16 usCtl2Value;

  /* Value for memory Ctrl Register 0 */
  uint16 usMCtl0Value;

  /* Number of channels in the list */
  /* TRACE [R4, SPI233_Conf] */
  Spi_ChannelType ddNoOfChannels;
  /* Offset of Hardware unit structure */
  /* TRACE [R3, SPI217][R4, SPI217_Conf] */
  /* TRACE [R3, SPI216][R4, SPI216_Conf] */
  Spi_HWUnitType ddHWUnitIndex;

  /*
   * To check if the chip select is using external port pins (GPIO)
   * or using CS_VIA_PERIPHERAL_ENGINE or CS is not at all used
   */
  /* TRACE [R4, SPI239_Conf] */
  Spi_CSType ddCSType;

  /* Loop count for clock to CS */
  uint8 ucClk2CsLoopCnt;

  uint8 ucCSArrayIndex;
  /* Chip Select Index */
  uint8 ucNoOfCS;
  uint8 ucChipSelect;

  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  uint8 ucTxDmaDeviceIndex;
  uint8 ucRxDmaDeviceIndex;
  #endif
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* TRACE [R3, SPI220][R4, SPI220_Conf] */
  /* TRACE [R3, SPI093][R4, SPI093] */
  /* Job priority */
  uint8 ucJobPriority;
  #endif
  /* TRACE [R3, SPI210][R4, SPI210_Conf] */
  /* Polarity of chip select */
  boolean blCsPolarity;
  /* All Channels properties for CSIH are same*/
  boolean blIsChannelPropSame;
  /*
   * Whether the HW Unit is using  DMA mode (SPI_TRUE) or
   * Normal mode (SPI_FALSE) if DMA is enabled
   */
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  boolean blHWUnitDmaMode;
  #if (SPI_FIFO_MODE == STD_ON)
  boolean blCSRIMasked;
  #endif
  #endif
} Spi_JobConfigType;

/* TRACE [R3, SPI106][R4, SPI106_Conf] */
/* TRACE [R3, SPI064]][R4, SPI064]] */
/* Structure for sequence configuration */
typedef struct STag_Spi_SequenceConfigType
{
  #if (SPI_LEVEL_DELIVERED != SPI_ZERO)
  /* TRACE [R3, SPI193][R4, SPI193] */
  /* Pointer to start sequence callback notification */
  P2FUNC(void, SPI_APPL_CODE, pSpiSeqEndNotification)(void);
  #endif
  /* TRACE [R4, SPI265] */
  #if ((SPI_SYNC_SEQ_ENDNOTIFICATION_ENABLED == STD_ON) && \
                           ((SPI_LEVEL_DELIVERED == SPI_ZERO) || \
                           (SPI_LEVEL_DELIVERED == SPI_TWO)))
  /* Pointer to start sequence callback notification */
  P2FUNC(void, SPI_APPL_CODE, pSpiSyncSeqEndNotification)(void);
  #endif
  #if (SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON)
  /* Pointer to start sequence callback notification */
  P2FUNC(void, SPI_APPL_CODE, pSpiSeqStartNotification)(void);
  #endif
  /* Number of jobs in the list */
  Spi_JobType ddNoOfJobs;
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) || \
       (SPI_FIFO_MODE == STD_ON))
  /* Total number of buffers in the sequence */
  Spi_NumberOfDataType ddNoOfBuffers;
  #endif
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  Spi_NumberOfDataType ddNxtNotifyIndex;
  #endif
  /* Index of job list of the first job */
  Spi_JobType ddJobListIndex;
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* Index of the status byte value (ROM area) */
  uint16 usStsValueStartByteIdx;
  /* Index of the status byte RAM area */
  uint16 usStsCheckByteIdx;
  /* Index of start byte of RAM area from which status has to be updated */
  uint16 usStsUpdateStartByteIdx ;
  #endif
  /* HW Unit details of jobs in the sequence */
  uint16 usHWListIndex;
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* Number of status byte value */
  uint8 ucNoOfStsByteValue;
  /* Status byte mask value */
  uint8 ucStsByteMask;
  #endif
  /* TRACE [R3, SPI125][R4, SPI125] */
  /* TRACE [R3, SPI126][R4, SPI126] */
  #if ((SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON) && \
       ((SPI_LEVEL_DELIVERED == SPI_ONE) || \
        (SPI_LEVEL_DELIVERED == SPI_TWO)))
  /* Sequence to be interrupted or not */
  boolean blInterruptibleSequence;
  #endif
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  /*
   * Whether the sequence is high priority; If sequence is high priority, the
   * value is SPI_TRUE
   */
  boolean blIsHighPriority;
  #endif
} Spi_SequenceConfigType;

/* Structure for job configuration */
typedef struct STag_Spi_JobListType
{
  /* Job Index */
  /* TRACE [R3, SPI219][R4, SPI219_Conf] */
  Spi_JobType ddJobIndex;
  /* Index of sequence in which the job is configured */
  /* TRACE [R3, SPI168][R4, SPI168] */
  /* TRACE [R4, SPI358] */
  Spi_SequenceType ddSequenceIndex;
  /* Counter for number of repeated jobs */
  uint8 ucJobCount;
  /* Flag to know if this is last job in the sequence */
  boolean blIsLastJob;
} Spi_JobListType;

/*******************************************************************************
** Structure for DMAC Registers, which are used to read or write              **
** the status or configured values for proper working of the DMAC             **
*******************************************************************************/
#if (SPI_DMA_MODE_ENABLE == STD_ON)
typedef struct STag_Spi_DmaRegs
{
  /* Source Address Register */
  uint32 volatile ulDSAn;
  /* Destination Address Register */
  uint32 volatile ulDDAn;
  /* Transfer Count Register */
  uint32 volatile ulDTCn;
  /* Transfer Control Register */
  uint32 volatile ulDTCTn;
  /* Reload Source Address Register */
  uint32 volatile ulDRSAn;
  /* Reload Destination Address Register */
  uint32 volatile ulDRDAn;
  /* Reload Transfer Count Register */
  uint32 volatile ulDRTCn;
  /* Transfer Count Compare Register */
  uint32 volatile ulDTCCn;
  /* Channel Operation Enable Setting Register */
  uint32 volatile ulDCENn;
  /* Transfer Status Register */
  uint32 volatile ulDCSTn;
  /* Transfer Status Set Register */
  uint32 volatile ulDCSTSn;
  /* Transfer Status Clear Register */
  uint32 volatile ulDCSTCn;
  /* Trigger factor Setting Register */
  uint32 volatile ulDTFRn;
  /* Transfer Request Status Register */
  uint32 volatile ulDTFRRQn;
  /* Transfer Request Clear Register*/
  uint32 volatile ulDTFRRQCn;
} Spi_DmaAddrRegs;
#endif

/* Structure for DMA channel configuration */
#if (SPI_DMA_MODE_ENABLE == STD_ON)
typedef struct STag_Spi_DmaUnitConfig
{
  /* Address for DMA control registers */
  P2VAR(Spi_DmaAddrRegs, AUTOMATIC, SPI_CONFIG_DATA)pDmaCntlRegBase;
  /* Address for DMA interrupt control registers */
  P2VAR(volatile uint32, AUTOMATIC, SPI_CONFIG_DATA)pDmaImrIntCntlReg;
  /* Clear the Pending interrupts */
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA)pDmaIntCntlReg;
  #if (SPI_DMA_TYPE_USED == SPI_DMA_TYPE_ONE)
  /* Address for DTFR control registers */
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA)pDmaDTFRRegAddr;
  #endif
  /* Tx Register address */
  volatile uint32 ulTxRxRegAddress;
  /* DTFRRQClear Register address for corresponding channel Address */
  P2VAR(volatile uint32, AUTOMATIC, SPI_CONFIG_DATA)pDtfrDrqcRegAddress;
    /* DTFR register value */
  uint16 usDmaDtfrRegValue;
  /* Mask for IMR register */
  uint32 ulDmaImrMask;
  /* will be 0 if Tx channel, 1 if Rx channel */
  boolean blComDmaChannel;
} Spi_DmaUnitConfig;
#endif

typedef struct STag_Spi_JobDetails
{
  P2CONST(Spi_JobListType, TYPEDEF, SPI_CONFIG_CONST) pReqJobList;
  Spi_JobType ddJobCount;
  Spi_JobType ddCntrForJobsReq;
  Spi_JobType ddLowestQueueIndex;
  Spi_JobType ddReqJobListIndex;
  #if (SPI_INTERRUPTIBLE_SEQ_ALLOWED == STD_ON)
  Spi_JobType ddJobListIndex;
  Spi_JobType ddCntrForJobsOnGoing;
  #endif
}Spi_JobDetails;

typedef struct STag_Spi_DataFlag
{
  Spi_DataType ddData;
  Std_ReturnType ddReturnValue;
}Spi_DataAndErrorFlag;
/*******************************************************************************
**                      Global Declarations                                   **
*******************************************************************************/

/* TRACE [R3, SPI092][R4, SPI275] */
#define SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

/* MISRA Violation: START Msg(4:3864)-1 */
/* Global array of Channel structure array */
extern CONST(Spi_ChannelPBConfigType, SPI_CONST) Spi_GstChannelConfig[];

/* Global array of Job structure array */
extern CONST(Spi_JobConfigType, SPI_CONST) Spi_GstJobConfig[];

/* Global array of Sequence structure array */
extern CONST(Spi_SequenceConfigType, SPI_CONST) Spi_GstSeqConfig[];

/* Global array of Channel list */
extern CONST(Spi_ChannelType, SPI_CONST) Spi_GaaChannelList[];

/* Global array of Job list */
extern CONST(Spi_JobListType, SPI_CONST) Spi_GstJobList[];
/* END Msg (4:3864)-1 */

#if (SPI_DMA_MODE_ENABLE == STD_ON)
/* MISRA Violation: START Msg(4:3864)-1 */
/* Declaration for DMA unit configuration */
extern CONST(Spi_DmaUnitConfig, SPI_CONST) Spi_GstDmaUnitConfig[];

/* Global array for DMA mapping to the SPI HW Unit instance */
extern CONST(uint8, SPI_CONST) Spi_GaaDmaHwUnitList[];
/* END Msg (4:3864)-1 */
#endif

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Sequence status value array */
extern CONST(uint8, SPI_CONST)Spi_GaaSeqStatusValue[];
/* END Msg (4:3864)-1 */
#endif

#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global array of job notification index */
extern CONST(Spi_NumberOfDataType, SPI_CONST) Spi_GaaNxtNotifyBuffer[];
/* END Msg (4:3864)-1 */
#endif

#if (SPI_CSIH_CONFIGURED == STD_ON)
/* MISRA Violation: START Msg(4:3864)-1 */
extern CONST(uint8, SPI_CONST) Spi_GaaCsIndex[];
/* END Msg (4:3864)-1 */
#endif

#define SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

#define SPI_START_SEC_VAR_NO_INIT_8
#include "MemMap.h"

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global RAM bit array for status of sequences */
extern VAR(uint8, SPI_VAR_NOINIT) Spi_GaaSeqStatusBitArray[];
/* END Msg (4:3864)-1 */
#endif

#define SPI_STOP_SEC_VAR_NO_INIT_8
#include "MemMap.h"

#define SPI_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
    ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) \
                                                  || (SPI_FIFO_MODE == STD_ON)))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global array for internal read buffer data of channels */
extern VAR(Spi_DataType, SPI_VAR) Spi_GaaChannelIBRead[];
/* END Msg (4:3864)-1 */
#endif

#if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
    ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) \
                                        || (SPI_HW_PRIORITY_ENABLED == STD_ON)))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global array for internal write buffer data of channels */
extern VAR(Spi_DataType, SPI_VAR) Spi_GaaChannelIBWrite[];
/* END Msg (4:3864)-1 */
#endif

#define SPI_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

/*******************************************************************************
**                      Global Function Prototypes                            **
*******************************************************************************/

#endif /* SPI_PBTYPES_H */

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
