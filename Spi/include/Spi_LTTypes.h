/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi_LTTypes.h                                               */
/* $Revision: 365405 $                                                        */
/* $Date: 2017-02-20 15:48:18 +0000 (Mon, 20 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the type definitions for link time parameters           */
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
* V1.0.1:  03-Feb-2016  : As part of P1x-C 4.01.00 release the following
*                         changes were made:
*                         1. As per ARDAAAF-375, CSIHn Baud Rate Setting
*                            Register size maintain as 16 bits in structure
*                           'Spi_CsihOsRegs.
*                         2. Copyright information is updated.
*                         3. Memory mapping of following variables are updated,
*                            a. Spi_GaaJobResult
*                            b. Spi_GaaSeqResult
*                            c. Spi_GaaSeqQueue
*                            d. Spi_GaaJobQueue
* V2.0.0:  07-Feb-2017  : Following changes were made:
*                         1. As per ARDAAAF-946, added SPI_IB_MODE Macro,
*                            structures and macros required for self test are
*                            added.
*                         2. New macro 'SPI_CSIH_CLR_STS_FLAGS' is added to
*                            access to the register CSIHnSTCR0.
*                         3. The macros 'SPI_LOOPBACK_ENABLE',
*                            'SPI_LOOPBACK_CNTRL2_VALUE',
*                            'SPI_LOOPBACK_CSIH_CNTRL2_VALUE',
*                            'SPI_LOOPBACK_DLS_SETTING',
*                            'SPI_LOOPBACK_CSIH_BRS0_VALUE',
*                            'SPI_LOOPBACK_DATA', 'SPI_LOOPBACK_ERROR' are
*                             added for self test functionality.
*                         4. New macro SPI_OVE_ERR_CLR, SPI_PE_ERR_CLR,
*                            SPI_OFE_ERR_CLR, SPI_DCE_ERR_CLR added to clear
*                            the status bit.
*                         5. Added new element 'pEccBaseAddress' in the
*                            structure STag_Spi_HWUnitInfo.
*                         6. Added usBufferCount to the Spi_FifoCurrentCommData.
*                         7. As part of ARDAAAF-569 fix,
*                            added macros SPI_CTL_32BIT_REG_VAL,
*                            SPI_CTL_16BIT_REG_DEINIT,SPI_CTL_8BIT_REG_MASK
*                            SPI_CTL2_16BIT_REG_DEINIT,
*                            SPI_MCTL0_16BIT_REG_DEINIT,SPI_DMA_DEINIT.
*                         8. To avoid QAC warning macros were updated with
*                            size extension.
*                         9. As part of ARDAAAF-1108, macros
*                            SPI_DMA_HARDWARE_TRIGGER and SPI_DMA_DRS_MLE_MASK
*                            were added.
*                        10. Changed the memory section declaration for
*                            Spi_GaaJobResult and Spi_GaaSeqResult from
*                            SPI_START_SEC_VAR_NO_INIT_8 to
*                            SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED.
*                        11. Copyright information is updated.
*/
/******************************************************************************/

#ifndef SPI_LTTYPES_H
#define SPI_LTTYPES_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Spi.h"
#include "Spi_Cbk.h"
#include "RH850_Types.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR Release version information */
#define SPI_LTTYPES_AR_RELEASE_MAJOR_VERSION   SPI_AR_RELEASE_MAJOR_VERSION
#define SPI_LTTYPES_AR_RELEASE_MINOR_VERSION   SPI_AR_RELEASE_MINOR_VERSION
#define SPI_LTTYPES_AR_RELEASE_REVISION_VERSION SPI_AR_RELEASE_REVISION_VERSION

/* File version information */
#define SPI_LTTYPES_SW_MAJOR_VERSION  SPI_SW_MAJOR_VERSION
#define SPI_LTTYPES_SW_MINOR_VERSION  SPI_SW_MINOR_VERSION

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
/******************************************************************************/

/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0750)  A union type specifier has been define           */
/* Rule          : MISRA-C:2004 Rule 18.4                                     */
/* Justification : To access the lower and higher order byte individually and */
/*                 read/write the values to register.                         */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0750)-2 and                           */
/*                 END Msg(4:0750)-2 tags in the code.                        */
/******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

typedef struct STag_Spi_BitPattern
{
  uinteger btBit0:1;
  uinteger btBit1:1;
  uinteger btBit2:1;
  uinteger btBit3:1;
  uinteger btBit4:1;
  uinteger btBit5:1;
  uinteger btBit6:1;
  uinteger btBit7:1;
} Spi_BitPattern;

/* Macros to avoid hard-coded numbers */

#define SPI_DBTOC_VALUE (uint32)(((uint32)SPI_VENDOR_ID_VALUE << 22U) | \
((uint32)SPI_MODULE_ID_VALUE << 14U) | \
((uint32)SPI_SW_MAJOR_VERSION_VALUE << 8U) | \
((uint32)SPI_SW_MINOR_VERSION_VALUE << 3U))

#define SPI_TRUE                      (uint8)0x01U
#define SPI_FALSE                     (uint8)0x00U
#define SPI_INVALID_DMAUNIT           (uint8)0xFFU
#define SPI_CSIH_BUSY                 (uint32)0x00000080UL
#define SPI_PORT_REG_MASK             (uint32)0xFFFF0000UL
#define SPI_CTL_32BIT_REG_VAL         (uint32)0x00000000UL
#define SPI_CTL_16BIT_REG_DEINIT      (uint16)0x0000U
#define SPI_CTL2_16BIT_REG_DEINIT     (uint16)0xE000U
#define SPI_MCTL0_16BIT_REG_DEINIT    (uint16)0x001FU

/* Mask for 8 bit control Register */
#define SPI_CTLREG_8_BIT_MASK         (uint8)0xE1U
#define SPI_CSIHMCTL1_MASK            (uint32)0x007F007FUL
#define SPI_CSIHMCTL2_MASK            (uint32)0x80FF007FUL
#define SPI_CSIHMRWP0_MASK            (uint32)0x007F007FUL
#define SPI_CSIHTX0W_MASK             (uint32)0xE0FFFFFFUL
#define SPI_CSIHCFG_MASK              (uint32)0xFF0FFFFFUL
/* Mask for CSIHMCTL0 Register */
#define SPI_CSIHMCTL0_MASK            (uint16)0x031FU
/* Mask for CSIHMCTL0 Register */
#define SPI_STCR0_VAL                 (uint16)0x400BU
/* Mask for Baud Rate Settings Register */
#define SPI_CSIHBRS_MASK              (uint16)0x0FFFU
#define SPI_CTLREG_16_BIT_MASK        (uint16)0xFFFFU

/* Mask for 32 bit control Register */
#define SPI_CTLREG_32_BIT_MASK        (uint32)0xFFFFFFFFUL

/* Macro for DMA transmission */
#if (SPI_DMA_MODE_ENABLE == STD_ON)

/* Mask for DTFR Register */
#define SPI_DTFR_MASK                 (uint32)0x000000FFUL
/* Mask for DTCT Register */
#define SPI_DTCT_MASK                 (uint32)0x0C1FFFFFUL
/* Mask for DCEN Register */
#define SPI_DCEN_MASK                 (uint32)0x00000001UL
#define SPI_DMA_DEINIT                (uint32)0x00000000UL
#define SPI_DMA_DCEN_ENABLE           (uint32)0x00000001UL
#define SPI_DMA_DCEN_DISABLE          (uint32)0x00000000UL
#define SPI_DMA_16BIT_RX_SETTINGS     (uint32)0x04004044UL
#define SPI_DMA_16BIT_TX_SETTINGS     (uint32)0x04004104UL
#define SPI_DMA_STR                   (uint32)0x00000001UL
#define SPI_DMA_STR_REQ               (uint32)0xFBFFFFFFUL
#define SPI_DMA_DISABLE               (uint32)0x00000000UL
#define SPI_DMA_DRQ_CLEAR             (uint32)0x00000001UL
#define SPI_DMA_STR_CLEAR             (uint32)0x00000010UL
#define SPI_DMA_FIXED_TX_SETTINGS     (uint32)0x00000040UL
#define SPI_DMA_INV_TX_SETTINGS       (uint32)0xFFFFFFBFUL
#define SPI_DMA_FIXED_RX_SETTINGS     (uint32)0x00000100UL
#define SPI_DMA_INV_RX_SETTINGS       (uint32)0xFFFFFEFFUL
#define SPI_DMA_ONCE                  (uint32)0xFFFFDFFFUL
#define SPI_DMA_TC_CLEAR              (uint32)0x00000010UL
#define SPI_DMA_HARDWARE_TRIGGER      (uint32)0x04000000UL
#define SPI_DMA_DRS_MLE_MASK          (uint32)0xFBFFDFFFUL
#if (SPI_FIFO_MODE == STD_ON)
#define SPI_DMA_BLOCK_SETTINGS        (uint32)0x00000001UL
#endif
#endif

/* Macros to avoid hard-coded numbers */
#define SPI_SET_BTST                  (uint8)0x80U
#define SPI_SET_EDL                   (uint8)0x20U
#define SPI_RESET_EDL                 (uint8)0xDFU
#define SPI_SET_EOJ                   (uint8)0x40U
#define SPI_SET_CIREEOJ               (uint8)0xC0U
#define SPI_SET_PWR                   (uint8)0x80U
#define SPI_CHECK_PWR                 (uint8)0x80U
#define SPI_SET_JOBE                  (uint8)0x02U
#define SPI_SET_DIR_LSB               (uint8)0x04U
#define SPI_RESET_DIR_LSB             (uint8)0xFBU
#define SPI_RESET_PWR                 (uint8)0x7FU
#define SPI_SET_DIRECT_ACCESS         (uint8)0xE1U
#define SPI_SET_MEMORY_ACCESS         (uint8)0xE0U
#define SPI_NO_SEQ_NOTIFICATION       (uint8)0xFFU
#define SPI_NO_JOB_NOTIFICATION       (uint16)0xFFFFU
#define SPI_INT_FLAG_MASK             (uint16)0x1000U
#define SPI_CSIH_CLR_STS_FLAGS        (uint16)0xC10BU
#define SPI_TSF_SET                   (uint32)0x00000080UL
#define SPI_SET_SLIT                  (uint32)0x00010000UL
#define SPI_CLR_STS_FLAGS             (uint16)0xC10BU

/* Macro for clearing pending interrupt */
#define SPI_CLR_INT_REQ               (uint16)0xEFFFU
#define SPI_CSRI_AND_MASK             (uint32)0xFFFFFFEFUL
#define SPI_CSIH_PRE_MASK             (uint16)0xE000U
#define SPI_CSIH_BRS_MASK             (uint16)0x0FFFU
#define SPI_CSRI_FLAG_MASK            (uint8)0x10U

#define SPI_TYPE_UINT8                (uint8)0x00U
#define SPI_TYPE_UINT16               (uint8)0x01U

/* Queue status macros */
#define SPI_QUEUE_EMPTY               (boolean)0
#define SPI_QUEUE_FILLED              (boolean)1

#define SPI_HW_BUSY                   (uint32)0x00000080UL
#define SPI_ERROR_MASK                (uint32)0x0000000BUL
#define SPI_EDL_MASK                  (unit8)0xEFU

#define SPI_DIRECT_ACCESS_MODE_CONFIGURED (uint8)0x00U
#define SPI_FIFO_MODE_CONFIGURED          (uint8)0x01U
#define SPI_DUAL_BUFFER_MODE_CONFIGURED   (uint8)0x02U
#define SPI_TX_ONLY_MODE_CONFIGURED       (uint8)0x03U

#if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) || \
(SPI_LEVEL_DELIVERED == SPI_ZERO)))
#define SPI_IB_MODE STD_ON
#else
#define SPI_IB_MODE STD_OFF
#endif

#define SPI_OVE_ERR                       (uint32)0x00000001UL
#define SPI_PE_ERR                        (uint32)0x00000002UL
#define SPI_DCE_ERR                       (uint32)0x00000008UL
#define SPI_OFE_ERR                       (uint32)0x00004000UL

#define SPI_OVE_ERR_CLR                  (uint32)0x00000001UL
#define SPI_PE_ERR_CLR                   (uint32)0x00000002UL
#define SPI_DCE_ERR_CLR                  (uint32)0x00000008UL
#define SPI_OFE_ERR_CLR                  (uint32)0x00004000UL

#define SPI_PARITY_DCC_ERR                (uint32)0x0000000AUL
#define SPI_PARITY_DCC_ERR_CLR            (uint16)0xFFF5U
#define SPI_OVRFLW_OVRRUN_ERR             (uint32)0x00004001UL
#define SPI_OVRFLW_OVRRUN_ERR_CLR         (uint16)0xBFFEU

/* Macro for clearing pending interrupts */
#define SPI_CLEAR_PENDING_INTR_MASK       (uint16)0xEFFFU

/* Macro for Relocating interrupt vector table */
#define SPI_RELOC_INTR_VECT_MASK          (uint16)0x004FU
#define SPI_DLS_MASK                      (uint8) 0xF0U
#define SPI_NO_JOB                        (Spi_JobType)0xFFFF
#define SPI_NO_SEQ                        (Spi_SequenceType)0xFFFF
#define SPI_SET_JOBE                      (uint8)0x02U

/* Macro for select baud rate register */
#define SPI_CSIH_BRS_SELECT_MASK          (uint32)0xC0000000UL

/* Received data status macros */
#define SPI_RX_DATA_NORMAL                    (boolean)0
#define SPI_RX_DATA_QUEUED                    (boolean)1

#define SPI_LOOPBACK_ENABLE               (uint32)0x00000048UL
#define SPI_LOOPBACK_DLS_SETTING          (uint32)0x08000000UL
#define SPI_LOOPBACK_CNTRL2_VALUE         (uint16)0x2640U
#define SPI_LOOPBACK_CSIH_CNTRL2_VALUE    (uint16)0x2000U
#define SPI_LOOPBACK_CSIH_BRS0_VALUE      (uint16)0x0640U
#define SPI_LOOPBACK_DATA                 (uint8)0xA5U
#define SPI_LOOPBACK_ERROR                (uint8)0xFFU

/* Macros for Extended FIFO Transmission */
#define SPI_FIFO_BUFFER_EMPTY         (uint8)0x0U
#define SPI_FIFO_BUFFER_FULL          (uint8)0x1U
#define SPI_FIFO_BUFFER_UNINIT        (uint8)0x2U

#define SPI_FIFO_TX_INDEX             (uint8)0x0U
#define SPI_FIFO_RX_INDEX             (uint8)0x1U
#define SPI_FIFO_SIZE                 (uint8)0x80U

#if (SPI_CSIH_CONFIGURED == STD_ON)
#if (SPI_ECC_SELFTEST == SPI_ONE || SPI_ECC_SELFTEST == SPI_TWO)
#define SET_EC1EDIC_EC2EDIC          0x18U
#define SET_TMC_BITS                 0x8093U
#define SET_TEST_DISABLE             0x8000U
#define CTL_ERR_FLAG                 (uint32)0x6UL
#define CTL_1BIT_ERR_FLAG            (uint32)0x2UL
#define CTL_2BIT_ERR_FLAG            (uint32)0x4UL
#define CTL_1BIT_ERRCLR_FLAG         (uint32)0x200UL
#define CTL_2BIT_ERRCLR_FLAG         (uint32)0x400UL
#define CTL_ERRCLR_FLAG              (uint32)0x600UL
#define RAM_INITIALIZE               0x0U
#define TRC_ERDB_INITIALIZE          0x0U
#define ALL_ZERO_PATTERN             0x0U
#define ALL_ONE_PATTERN              0xFFFFFFFFU
#define TWO_BIT_PATTERN              0x3U
#define ECC_CTL_ECEMF_SET            0x1UL
#define ECC_CTL_ECER1F_ECER2F_CLEAR  0xFFFFFFF9UL
#define SPI_DATAWORDLENGTH           0x20U
#endif
#endif

/* Structure for main hardware user registers */
typedef struct STag_Spi_MainUserRegs
{
  uint8  volatile ucMainCTL0;
  uint8  volatile ucReserved1;
  uint16 volatile usReserved2;
  uint32 volatile ulMainSTR0;
  uint16 volatile usMainSTCR0;
} Spi_MainUserRegs;

/* Structure for main hardware OS registers */
typedef struct STag_Spi_MainOsRegs
{
  uint32 volatile ulMainCTL1;
  uint16 volatile usMainCTL2;
} Spi_MainOsRegs;

#if (SPI_CSIH_CONFIGURED == STD_ON)
/* Structure for CSIH hardware user registers */
typedef struct STag_Spi_CsihUserRegs
{
#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) || \
(SPI_FIFO_MODE == STD_ON))
  uint32 volatile ulCSIHMCTL1;
  uint32 volatile ulCSIHMCTL2;
#endif
  uint32 volatile ulCSIHTX0W;
  uint16 volatile usCSIHTX0H;
  uint16 volatile usReserved1;
  uint32 volatile ulCSIHRX0W;
  uint16 volatile usCSIHRX0H;
  uint16 volatile usReserved2;
#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) || \
(SPI_FIFO_MODE == STD_ON))
  uint32 volatile ulCSIHMRWP0;
#endif
} Spi_CsihUserRegs;

/* Structure for CSIH Baudrate registers */
typedef struct STag_Spi_CsihBrsRegs
{
  uint16 volatile usCSIHBRS;
  uint16 volatile usReserved1;
}Spi_CsihBrsRegs;

/* Structure for CSIH hardware OS registers */
typedef struct STag_Spi_CsihOsRegs
{
#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) || \
(SPI_FIFO_MODE == STD_ON))
  uint16 volatile usCSIHMCTL0;
  uint16 volatile usReserved4;
#endif
  uint32 volatile ulCSIHCFG[SPI_EIGHT];
  uint32 volatile usReserved1;
  Spi_CsihBrsRegs volatile stCSIHBRS[SPI_FOUR];
} Spi_CsihOsRegs;

/* Structure for  hardware ECC registers */
#if (SPI_ECC_SELFTEST == SPI_ONE || SPI_ECC_SELFTEST == SPI_TWO)
typedef struct STag_Spi_TrcReg
{
  uint8 volatile  ucSynd;
  uint8 volatile  ucHord;
  uint8 volatile  ucEcrd;
  uint8 volatile  ucErdb;
}Spi_EccTrcReg;

typedef struct STag_Spi_EccRegs
{
  uint32  volatile ulEccCTL;
  uint16 volatile usEccTmc;
  uint16 volatile usReserved1;
  Spi_EccTrcReg stEccTrc;
  uint32 volatile ulEccTed;
} Spi_EccRegs;
#endif
#endif

/* Structure for hardware unit information */
typedef struct STag_Spi_HWUnitInfo
{
  /* User Base address of common registers */
  P2VAR(Spi_MainUserRegs, AUTOMATIC, SPI_CONFIG_DATA)pHwMainUserBaseAddress;
  /* OS Base address of common registers */
  P2VAR(Spi_MainOsRegs, AUTOMATIC, SPI_CONFIG_DATA)pHwMainOsBaseAddress;

#if (SPI_ECC_SELFTEST == SPI_ONE || SPI_ECC_SELFTEST == SPI_TWO)
  P2VAR(Spi_EccRegs, AUTOMATIC, SPI_CONFIG_DATA)pEccBaseAddress;
#endif
  P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA)pHwUserBufferAddress;
  P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA)pHwOsBufferAddress;
  /* Address for receive interrupt control registers (TIR) */
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA)pRxIntCntlAddress;
  /* Address for transmit interrupt control registers (TIC) */
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA)pTxIntCntlAddress;
  /* Address for transmit interrupt control registers (TIRE) */
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA)pErrorIntCntlAddress;
#if ((((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) && \
(SPI_CANCEL_API == STD_ON)) || (SPI_HW_PRIORITY_ENABLED == STD_ON))
  /* Address for transmit cancel interrupt control registers (TIJC) */
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA)pTxCancelIntCntlAddress;
  /* Address for transmit cancel IMR registers (TIJC) */
  P2VAR(volatile uint32, AUTOMATIC, SPI_CONFIG_DATA)pTxCancelImrAddress;
#endif
#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* Address for receive IMR registers (TIR) */
  P2VAR(volatile uint32, AUTOMATIC, SPI_CONFIG_DATA)pRxImrAddress;
  /* Address for transmit IMR registers (TIC) */
  P2VAR(volatile uint32, AUTOMATIC, SPI_CONFIG_DATA)pTxImrAddress;
  /* Address for error IMR registers (TIRE) */
  P2VAR(volatile uint32, AUTOMATIC, SPI_CONFIG_DATA)pErrorImrAddress;
  /* Mask for receive IMR register */
  uint32 ulRxImrMask;
  /* Mask for transmit IMR register */
  uint32 ulTxImrMask;
  /* Mask for error IMR register */
  uint32 ulErrorImrMask;
#endif
#if ((((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) && \
(SPI_CANCEL_API == STD_ON)) || (SPI_HW_PRIORITY_ENABLED == STD_ON))
  /* Mask for transmit cancel IMR register */
  uint32 ulTxCancelImrMask;
#endif
  /* Hardware unit Configured */
  uint8 ucHWUnit;
/* Whether the HW Unit is synchronous (SPI_TRUE) or
asynchronous (SPI_FALSE) */
/* TRACE [R3, SPI238_Conf][R4, SPI238_Conf] */
#if (SPI_LEVEL_DELIVERED == SPI_TWO)
  boolean blIsSynchronous;
#endif
} Spi_HWUnitInfo;

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
/* Structure for storing current status of SPI communication */
typedef struct STag_Spi_CurrentCommData
{
  /* Pointer to current data to be received */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) pCurrentRxData;
  /* Pointer to next data to be transmitted */
  P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) pNextTxData;
  /* Pointer to the current channel list to be transmitted */
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) pCurrentTxChannelList;
  /* Pointer to the current channel list to be received */
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) pCurrentRxChannelList;

  /* TRACE [R3, SPI165][R4, SPI165] */
  /* Number of buffers yet to be transmitted */
  Spi_NumberOfDataType ddNoOfTxBuffers;
  /* Number of buffers yet to be received */
  Spi_NumberOfDataType ddNoOfRxBuffers;
  /* Number of channels yet to be transmitted */
  Spi_ChannelType ddNoOfTxChannels;
  /* Number of channels yet to be received */
  Spi_ChannelType ddNoOfRxChannels;
  /* Index of the current hardware unit */
  Spi_HWUnitType ddHWUnitIndex;
#if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  /* Tx data status of on-going transmission */
  boolean  blTxEDL;
  /* Rx data status of on-going transmission */
  boolean  blRxEDL;
#endif
} Spi_CurrentCommData;
#endif

#if (SPI_FIFO_MODE == STD_ON)
/* Structure for storing current status of SPI communication for FIFO mode */
typedef struct STag_Spi_FifoCurrentCommData
{
  /* Pointer to current data received */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) pCurrentRxData;
  /* Pointer to next data to be transmitted */
  P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) pNextTxData;
  /* Pointer to the current RX channel list */
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) pCurrentRxChannelList;
  /* Pointer to the next TX channel list */
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) pCurrentTxChannelList;
  /* Number of buffers yet to be transmitted */
  Spi_NumberOfDataType ddNoOfTxBuffers;
  /* Number of buffers yet to be received */
  Spi_NumberOfDataType ddNoOfRxBuffers;
#if (SPI_DMA_MODE_ENABLE == STD_ON)
  /* Job Index */
  Spi_JobType ddJobIndex;
#endif
  /* Number of RX channels */
  Spi_ChannelType ddNoOfRxChannels;
  /* Number of TX channels */
  Spi_ChannelType ddNoOfTxChannels;
#if (SPI_DMA_MODE_ENABLE == STD_ON)
  /* Index of current DMA HW unit */
  uint8 ucDmaDeviceIndex;
#endif
  uint16 usBufferCount;
} Spi_FifoCurrentCommData;
#endif

#if (SPI_TX_ONLY_MODE == STD_ON)
/* Structure for storing current status of SPI communication */
typedef struct STag_Spi_TxOnlyCurrentCommData
{
  /* Pointer to current data to be received */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) pCurrentRxData;
  /* Pointer to current notification index array */
  P2CONST(Spi_NumberOfDataType, AUTOMATIC, SPI_CONFIG_DATA) pCurrentNotifyIdx;
  /* Number of buffers yet to be transmitted */
  Spi_NumberOfDataType ddNoOfBuffers;
  /* Number of buffers received */
  Spi_NumberOfDataType ddNoOfBuffersRcvd;
  /* Number of buffers next job notification */
  P2CONST(Spi_NumberOfDataType, AUTOMATIC, SPI_CONFIG_DATA)
  ddNoOfNxtNotifyBuffersIdx;
  /* TRACE [R4, SPI234_Conf] */
  /* Index of first channel of the sequence */
  Spi_ChannelType ddChannelIndex;
} Spi_TxOnlyCurrentCommData;
#endif

#if (SPI_DUAL_BUFFER_MODE == STD_ON)
/* Structure for storing current status of SPI communication */
typedef struct STag_Spi_DualBufferCurrentCommData
{
  /* Number of buffers to be transmitted */
  Spi_NumberOfDataType ddNoOfBuffers;
  /* Number of buffers transmitted */
  Spi_NumberOfDataType ddNoOfBuffersTxtd;
  /* Number of buffers next job notification */
  P2CONST(Spi_NumberOfDataType, AUTOMATIC, SPI_CONFIG_DATA)
  ddNoOfNxtNotifyBuffersIdx;
} Spi_DualBufferCurrentCommData;
#endif

#if (SPI_CANCEL_API == STD_ON)
/* Structure of processing sequence */
typedef struct STag_Spi_SeqProcessType
{
  /* Position of the cancel byte */
  uint8 ucCancelOffset;
  /* Mask for cancel byte */
  uint8 ucCancelMask;
} Spi_SeqProcessType;
#endif

#if ((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ONE) || \
(SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO))
/* Structure for storing external buffer attributes */
typedef struct STag_Spi_EBData
{
  /* Pointer to external buffer source data */
  P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA)pSrcPtr;
  /* Pointer to external buffer destination data */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA)pDestPtr;
  /* Length of external buffer */
  Spi_NumberOfDataType ddEBLength;
} Spi_EBData;
#endif

/* MISRA Violation: START Msg(4:0750)-2 */
/* Structure for Data access */
typedef union UTag_Spi_DataAccess
/* END Msg (4:0750)-2 */
{
  struct
  {
    /* Values for first 16-bits */
    uint16 usRegData1;
    /* Values for second 8-bits */
    uint8 ucRegData2;
    /* Value for next 8-bits */
    uint8 ucRegData3;
  } Tst_ByteAccess;

  uint32 ulRegData;

  uint16 usRegData5[SPI_TWO];

  uint8 ucRegData4[SPI_FOUR];
} Spi_DataAccess;

#if (SPI_DMA_MODE_ENABLE == STD_ON)
/* MISRA Violation: START Msg(4:0750)-2 */
/* Structure for DMA address */
typedef union UTag_Spi_DmaAddr
/* END Msg (4:0750)-2 */
{
  Spi_DataType volatile *pDmaRegAddr;

  struct
  {
    /* Lower DMA address */
    volatile uint16 usDmaRegAddrLow;
    /* Higher DMA address */
    volatile uint16 usDmaRegAddrHigh;
  } Tst_DmaAddr;
} Spi_DmaAddr;
#endif

/*******************************************************************************
**                       Extern declarations for Global Data                  **
*******************************************************************************/

/* TRACE [R3, SPI092][R4, SPI275] */
#define SPI_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

#if (SPI_CANCEL_API == STD_ON)
/* MISRA Violation: START Msg(4:3864)-1 */
/* Declaration for SPI Sequence Callback functions Configuration */
extern CONST(Spi_SeqProcessType, SPI_CONST) Spi_GstSeqProcess[];
/* END Msg (4:3864)-1 */
#endif

/* MISRA Violation: START Msg(4:3864)-1 */
/* Declaration for HW unit configuration */
extern CONST(Spi_HWUnitInfo, SPI_CONST) Spi_GstHWUnitInfo[];
/* END Msg (4:3864)-1 */
#define SPI_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

#define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "MemMap.h"

/* MISRA Violation: START Msg(4:3864)-1 */
/* Global RAM Area for Job result */
extern VAR(Spi_JobResultType, SPI_CONFIG_DATA) Spi_GaaJobResult[];

/* Global RAM Area for Sequence result */
extern VAR(Spi_SeqResultType, SPI_CONFIG_DATA) Spi_GaaSeqResult[];
/* END Msg (4:3864)-1 */

#if ((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ONE) || \
(SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global RAM array for storing external buffer attributes */
extern VAR(Spi_EBData, SPI_VAR_NOINIT) Spi_GaaChannelEBData[];
/* END Msg (4:3864)-1 */
#endif

#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global RAM area for sequence queue for Dual buffer mode and Tx Only mode */
extern VAR(Spi_SequenceType, SPI_VAR_NOINIT) Spi_GaaSeqQueue[];
/* END Msg (4:3864)-1 */
#endif

#define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "MemMap.h"

#define SPI_START_SEC_VAR_NO_INIT_16
#include "MemMap.h"

#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
(SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
(SPI_HW_PRIORITY_ENABLED == STD_ON))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global RAM area for job queue for both direct access mode and FIFO mode */
extern VAR(Spi_JobType, SPI_VAR_NOINIT) Spi_GaaJobQueue[];
/* END Msg (4:3864)-1 */
#endif

#define SPI_STOP_SEC_VAR_NO_INIT_16
#include "MemMap.h"

#define SPI_START_SEC_VAR_NO_INIT_8
#include "MemMap.h"

#if (SPI_CANCEL_API == STD_ON)
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global RAM bit array for cancel status of sequences */
extern VAR(uint8, SPI_VAR_NOINIT) Spi_GaaSeqCancel[];
/* Global RAM byte array for current HW Unit of the sequence */
extern VAR(uint8, SPI_VAR_NOINIT) Spi_GaaSeqCurrentHWUnit[];
/* END Msg (4:3864)-1 */
#endif

#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
/* MISRA Violation: START Msg(4:3864)-1 */
/* Global RAM area to count repeated jobs */
extern VAR(uint8, SPI_VAR_NOINIT) Spi_GaaJobCount[];
/* END Msg (4:3864)-1 */
#endif

#define SPI_STOP_SEC_VAR_NO_INIT_8
#include "MemMap.h"

/*******************************************************************************
**                      Global Function Prototypes                            **
*******************************************************************************/

#endif /* SPI_LTTYPES_H */

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
