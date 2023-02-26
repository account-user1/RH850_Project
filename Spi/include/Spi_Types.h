/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi_Types.h                                                 */
/* $Revision: 365405 $                                                        */
/* $Date: 2017-02-20 15:48:18 +0000 (Mon, 20 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017  Renesas Electronics Corporation                    */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision of Database declaration.                                         */
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
 * V1.0.0:  03-Aug-2015  : Initial Version
 * V1.0.1:  10-Feb-2016  : As part of P1x-C 4.01.00 release the following
 *                         changes were made:
 *                         1. Copyright information is updated.
 *                         2. The file adapted from P1x.
 * V2.0.0:  17-Feb-2017  : Following changes were made:
 *                         1. As part of Write-verify user interface
 *                            implementation, updated the macros for calling
 *                            the error notification function when
 *                            SPI_USE_WV_ERROR_INTERFACE is ON and also added
 *                            macros for writing in to status clear registers.
 *                         2. As part of ARDAAAF-946, structures and macros
 *                            required for self test are added.
 *                         3. Created macros SPI_TX and SPI_RX. Added macro
 *                            definitions, used as an offset value to perform
 *                            the interrupt consistency checks.
 *                         4. Created file Spi_RegWrite.h to move all the macros
 *                            related to register write functionality.
 *                         5. As part of ticket ARDAAAF-487 fix,added the
 *                            macros SPI_TX_ONLY_MODE_SET,
 *                            SPI_DUAL_BUFFER_MODE_SET, SPI_CHECK_BUFFER_MODE.
 *                         6. As a part of ticket ARDAAAF-605,
 *                            macro 'SPI_ONE_TWENTY_EIGHT' is added for 128.
 *                         7. As a part of ticket ARDAAAF-941, following new
 *                            enum tages were added
 *                             a. Spi_JobResultType.
 *                             b. Spi_SeqResultType.
 */
/******************************************************************************/

#ifndef SPI_TYPES_H
#define SPI_TYPES_H

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/

/* Included for pre-compile options */
#include "Spi_Cfg.h"

/* TRACE [R4, SPI272] */
/* TRACE [R4, SPI296] */
/* TRACE [R4, SPI297] */
/* TRACE [R3, SPI174][R4, SPI296] */
/* AUTOSAR standard types */
#include "Std_Types.h"

/*******************************************************************************
**                        Version Information                                 **
*******************************************************************************/

/* AUTOSAR Release version information */
#define SPI_TYPES_AR_RELEASE_MAJOR_VERSION   SPI_AR_RELEASE_MAJOR_VERSION
#define SPI_TYPES_AR_RELEASE_MINOR_VERSION   SPI_AR_RELEASE_MINOR_VERSION
#define SPI_TYPES_AR_RELEASE_REVISION_VERSION \
                                            SPI_AR_RELEASE_REVISION_VERSION

/* File version information */
#define SPI_TYPES_SW_MAJOR_VERSION  SPI_SW_MAJOR_VERSION
#define SPI_TYPES_SW_MINOR_VERSION  SPI_SW_MINOR_VERSION


/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
#define SPI_ZERO                      0x00U
#define SPI_ONE                       0x01U
#define SPI_TWO                       0x02U
#define SPI_THREE                     0x03U
#define SPI_FOUR                      0x04U
#define SPI_FIVE                      0x05U
#define SPI_SIX                       0x06U
#define SPI_SEVEN                     0x07U
#define SPI_EIGHT                     0x08U
#define SPI_NINE                      0x09U
#define SPI_TEN                       0x0AU
#define SPI_ELEVEN                    0x0BU
#define SPI_TWELVE                    0x0CU
#define SPI_THIRTEEN                  0x0DU
#define SPI_FOURTEEN                  0x0EU
#define SPI_FIFTEEN                   0x0FU
#define SPI_SIXTEEN                   0x10U
#define SPI_THIRTY                    0x1EU
#define SPI_ONE_TWENTY_EIGHT          0x80U

#define SPI_ADDRESS_OFFSET_ONE        0X01U
#define SPI_ADDRESS_OFFSET_TWO        0X02U
#define SPI_ADDRESS_OFFSET_THREE      0X03U

#define SPI_DMAUNIT_ZERO                      0x00U
#define SPI_DMAUNIT_ONE                       0x01U
#define SPI_DMAUNIT_TWO                       0x02U
#define SPI_DMAUNIT_THREE                     0x03U
#define SPI_DMAUNIT_FOUR                      0x04U
#define SPI_DMAUNIT_FIVE                      0x05U
#define SPI_DMAUNIT_SIX                       0x06U
#define SPI_DMAUNIT_SEVEN                     0x07U
#define SPI_DMAUNIT_EIGHT                     0x08U
#define SPI_DMAUNIT_NINE                      0x09U
#define SPI_DMAUNIT_TEN                       0x0AU
#define SPI_DMAUNIT_ELEVEN                    0x0BU
#define SPI_DMAUNIT_TWELVE                    0x0CU
#define SPI_DMAUNIT_THIRTEEN                  0x0DU
#define SPI_DMAUNIT_FOURTEEN                  0x0EU
#define SPI_DMAUNIT_FIFTEEN                   0x0FU

#define SPI_TRUE                      (uint8)0x01U
#define SPI_FALSE                     (uint8)0x00U

#define SPI_POLLING_MODE              (Spi_AsyncModeType)0
#define SPI_INTERRUPT_MODE            (Spi_AsyncModeType)1

#define SPI_HIGH_DATA_MASK            0xFFFF0000ul
#define SPI_LOW_DATA_MASK             0x0000FFFFul

#define SPI_DMA_TYPE_ONE              0x01U
#define SPI_DMA_TYPE_TWO              0x02U

#define SPI_TX          (uint8)0x00U
#define SPI_RX          (uint8)0x01U

#define SPI_TX_ONLY_MODE_SET          0x200U
#define SPI_DUAL_BUFFER_MODE_SET      0x100U
#define SPI_CHECK_BUFFER_MODE         0x300U

/*******************************************************************************
**                      SPI TYPE DEFINITION                                   **
*******************************************************************************/

/* Definition of status type */
/* TRACE [R3, SPI061][R4, SPI061] */
typedef enum ETagSpi_StatusType
{
  /* TRACE [R3, SPI011][R4, SPI011] */
  /* TRACE [R4, SPI348] */
  /* TRACE [R4, SPI346] */
  /* TRACE [R4, SPI367] */
  SPI_UNINIT = 0,
  SPI_IDLE,
  SPI_BUSY
} Spi_StatusType;

#if (SPI_SELF_TEST_API == STD_ON)
/* Declaration of Self test return types */
typedef enum ETagSpi_ReturnStatus
{
  SPI_SELFTEST_INVALID_MODE = 0,
  SPI_SELFTEST_DRIVERBUSY,
  SPI_SELFTEST_PASS,
  SPI_SELFTEST_FAILED
} Spi_ReturnStatus;
#endif

/* Definition of Job Result type */
/* TRACE [R3, SPI062][R4, SPI062] */
/* TRACE [R3, SPI012][R4, SPI012] */
/* TRACE [R4, SPI261] */
typedef enum ETagSpi_JobResultType
{
  SPI_JOB_OK = 0,
  SPI_JOB_PENDING,
  SPI_JOB_FAILED ,
  SPI_JOB_QUEUED
} Spi_JobResultType;

/* Definition of Sequence Result type */
/* TRACE [R3, SPI017][R4, SPI017] */
/* TRACE [R3, SPI019][R4, SPI019] */
/* TRACE [R4, SPI351] */
typedef enum ETagSpi_SeqResultType
{
  SPI_SEQ_OK = 0,
  SPI_SEQ_PENDING,
  SPI_SEQ_FAILED,
  SPI_SEQ_CANCELLED
} Spi_SeqResultType;


/* TRACE [R4, SPI355] */
/* Definition of type for application data buffer elements */
#if (SPI_8BIT_DATA_WIDTH == STD_ON)
typedef uint8 Spi_DataType;
#elif (SPI_16BIT_DATA_WIDTH == STD_ON)
typedef uint16 Spi_DataType;
#else
typedef uint32 Spi_DataType;
#endif

/* Definition of type for number of data elements */
typedef uint16 Spi_NumberOfDataType;

/* Definition of type for channel ID */
/* TRACE [R4, SPI356] */
typedef uint8 Spi_ChannelType;

/* Definition of type for job ID */
/* TRACE [R3, SPI167][R4, SPI167] */
/* TRACE [R4, SPI357] */
typedef uint16 Spi_JobType;

/* Definition of type for sequence ID */
typedef uint8 Spi_SequenceType;

/* Definition of type for hardware unit ID */
/* TRACE [R3, SPI169][R4, SPI169] */
/* TRACE [R4, SPI359] */
typedef uint8 Spi_HWUnitType;

/* Definition of type for asynchronous mode */
typedef uint8 Spi_AsyncModeType;

/* Definition of type for self test */
typedef uint8 Spi_SelfTestType;
/*******************************************************************************
**                      Structure declarations                                **
*******************************************************************************/

/* TRACE [R3, SPI010][R4, SPI010] */
/* TRACE [R3, SPI008][R4, SPI008] */
/* TRACE [R4, SPI359] */
/* TRACE [R4, SPI344] */
/* TRACE [R3, SPI225][R4, SPI225_Conf] */
/* Data Structure for SPI Handler/Driver initialization */
typedef struct STag_Spi_ConfigType
{
  /* Database start value */
  uint32 ulStartOfDbToc;
  /* Pointer to first Channel configuration */
  P2CONST(void, AUTOMATIC, SPI_CONFIG_CONST) pFirstChannel;
  /* Pointer to first Job configuration */
  P2CONST(void, AUTOMATIC, SPI_CONFIG_CONST) pFirstJob;
  /* Pointer to first Sequence configuration */
  P2CONST(void, AUTOMATIC, SPI_CONFIG_CONST) pFirstSeq;
  /* Pointer to the job list array */
  P2CONST(void, AUTOMATIC, SPI_CONFIG_CONST) pJobList;
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  /* Pointer to the structure of DMA configuration array */
  P2CONST(void, AUTOMATIC, SPI_CONFIG_DATA) pDMAConfiguration;
  /* Pointer to DMA to SPI Hardware Unit mapping array */
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_DATA) pDmaSpiHWUnitMap;
  #endif
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  /* Pointer to job notify index */
  P2CONST(Spi_NumberOfDataType, AUTOMATIC, SPI_CONFIG_DATA) pJobNotifyIndex;
  #endif
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* Pointer to the status array */
  P2VAR(uint8, AUTOMATIC, SPI_CONFIG_DATA) pStatusArray;
  /* Pointer to the status byte value */
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_CONST) pStsValueArray;
  #endif
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* Pointer to the chipselect array */
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_DATA) pCSArray;
  #endif
  #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && ((SPI_FIFO_MODE == STD_ON) || \
        (SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) || \
          (SPI_LEVEL_DELIVERED == SPI_ZERO)))
  /* Pointer to the internal Read buffer  */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) pChannelIBRead;
  #endif
  #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && ((SPI_FIFO_MODE == STD_ON) || \
            (SPI_DIRECT_ACCESS_MODE == STD_ON)  || \
                               (SPI_HW_PRIORITY_ENABLED == STD_ON) || \
                                           (SPI_LEVEL_DELIVERED == SPI_ZERO)))
  /* Pointer to the internal Write buffer  */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) pChannelIBWrite;
  #endif
  #if((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON))
  Spi_JobType ddDirectAccessQueueSize;
  #endif
  #if((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  /*
   * Hardware unit queue index of CSIH HW units with Tx-only or DB mode
   * If CSIG/Direct access/FIFO mode/Not used, Value = 0xFF
   */
  Spi_SequenceType aaHWUnitQueueIndex[SPI_MAX_CSIH_HW_INDEX];
  /*
   * Data structure index of CSIH HW units with Tx-only or DB mode
   * If CSIG/Direct access/FIFO mode/Not used, Value = 0xFF
   */
  Spi_HWUnitType aaHWUnitCurrentCommDataIndex[SPI_MAX_CSIH_HW_INDEX];
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  /*
   * High priority job queue index of CSIH HW units
   * If Direct access/FIFO mode/Not used, Value = 0xFF
   */
  /* TRACE [R3, SPI059][R4, SPI059] */
  Spi_JobType aaHighprioirtyJobQueueIndex[SPI_MAX_CSIH_HW_INDEX];
  #endif
  #endif
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* Configured memory mode for all CSIH HW units */
  uint8 aaHWMemoryMode[SPI_MAX_CSIH_HW_INDEX];
  /*
   * The index of HW Unit (CSIH) in Spi_HWUnitInfo type structure
   * Value = 0xFF, if particular CSIH hardware unit is not used
   */
  Spi_HWUnitType aaHWUnitInfoIndex[SPI_MAX_CSIH_HW_INDEX];
  #endif
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /*
   * Hardware unit number info. If CSIG, value = 0xFF
   * For CSIH0 = 0, CSIH1 = 1, ....
   */
  Spi_HWUnitType aaHWUnitNumber[SPI_MAX_CSIH_HW_INDEX];
  /* Configured chip select for all CSIH HW units */
  uint8 aaChipSelect[SPI_MAX_CSIH_HW_INDEX];
  #endif
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* Number of status bytes */
  uint8 ucNoofStatusByte;
  #endif
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  /* Max number of DMA channel Ids configured in corresponding configuration */
  uint8 ucMaxDmaChannels;
  #endif
} Spi_ConfigType;


#endif /* SPI_TYPES_H */

/*******************************************************************************
**                          End Of File                                       **
*******************************************************************************/
