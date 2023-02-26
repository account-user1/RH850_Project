/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_Uart1CfgAndUse.c
 *        Config:  E:/EA4NewTemplate/CM765A_Uart1CfgAndUse_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_Uart1CfgAndUse
 *  Generated at:  Fri Feb  9 07:54:53 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_Uart1CfgAndUse>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * Copyright 2017, 2018 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : CDD_Uart1CfgAndUse.c
 * Module Description: Uart1 Configuration And Use Function
 * Project           : CBD
 * Author            : Krzysztof Byrski
 **********************************************************************************************************************
 * Version Control:
 * %version:          3 %
 * %derived_by:       rzk04c %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                             SCR #
 * --------  -------  --------  ----------------------------------------------------------------------------  ---------
 * 06/13/17  1        KByrski   Initial version                                                               EA4#12174
 * 01/09/18  2        AJM       Modified PEID of DTS Channel Master settings to 1 and updated Uart Receive    EA4#19119
                                function to use DTS reload function 1 & 2
 * 02/09/18  3        AJM       Set UART1 as secondary and also corrected the error settings for UART         EA4#20047,EA4#20471
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * Ary1D_u8_8
 *   OBSOLETE
 *
 * ImcArbnRxDataSrc1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_CDD_Uart1CfgAndUse.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "CDD_Uart1CfgAndUse.h"
#include "CDD_Uart1CfgAndUse_private.h"
#include "Os.h"
#include "ImcArbn.h"
#include "DMACH_RegDefns.h"
#include "DMACM_RegDefns.h"
#include "RLN31_RegDefns.h"
#include "SYSCTL_RegDefns.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.1]: Cast of a register address to an integer type is required for writing a register address to a register. */
/* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.2]: Cast of a variable address to an integer type is required for writing a variable address to a register. */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/
#define ROLLGCNTCHK_CNT_U08             (255U)         /* Byte Count */
#define DATABYTE0_CNT_U08               (0U)           /* Data Byte 0 */
#define DATABYTE1_CNT_U08               (1U)           /* Data Byte 1 */
#define DATABYTE2_CNT_U08               (2U)           /* Data Byte 2 */
#define DATABYTE3_CNT_U08               (3U)           /* Data Byte 3 */
#define DATABYTE4_CNT_U08               (4U)           /* Data Byte 4 */
#define DATABYTE5_CNT_U08               (5U)           /* Data Byte 5 */
#define DATABYTE6_CNT_U08               (6U)           /* Data Byte 6 */
#define DATABYTE7_CNT_U08               (7U)           /* Data Byte 7 */
#define DATABYTE8_CNT_U08               (8U)           /* Data Byte 8 */
#define MASKLOWR16BITOFUINT32_CNT_U16   (65535U)       /* Mask Lower 16 bits of a Uint32 */
#define MAXSIGGROUPFORTX_CNT_U08        (9U)           /* Maximum Signal Group For Transmit */
#define TWO_CNT_U08                     (2U)           /* Value of Two */
#define UART1RXMAXBUFSIZE_CNT_U08       (144U)         /* DMA Receive Channel Transfer Count */
#define UART1RXMAXTRFCNT_CNT_U16        (1440U)        /* DMA Receive Channel Maximum Transfer Count */
#define UART1SHIFTVAL_CNT_U08           (16U)          /* Uart1 Shift by word value */


#define UART1TXBUFSIZE_CNT_U08          (80U)          /* TX buffer size (aligned to 16) */


#define RLN31LBRP01BRP_CNT_U08          (4U)           /* Divider = 5 */
#define DTS103CM_CNT_U32                (0x20120000U)  /* PEID = 1, SPID = 4, UM =1 */
#define DTS102CM_CNT_U32                (0x200E0000U)  /* PEID = 1, SPID = 3, UM =1 */
#define DTTCT103_CNT_U32                (256U)         /* Destination address count direction = Fixed */
#define DTTC102_CNT_U32                 (9438624U)     /* Transfer count = 1440,  Address reload count = 144 */
#define DTTCT102_CNT_U32                (6720U)        /* Source address count direction = Fixed, Reload function 2 is enabled */
#define DTRTC102_CNT_U32                (9438624U)     /* Reload transfer count = 1440, Reload address reload count = 144 */

/******************************************** Module Specific Variables **********************************************/
#define CDD_Uart1CfgAndUse_START_SEC_VAR_INIT_128
#include "CDD_Uart1CfgAndUseNonRte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

static VAR(uint8, AUTOMATIC) Uart1GlbTxBuf_M[UART1TXBUFSIZE_CNT_U08] = {0U};

#define CDD_Uart1CfgAndUse_STOP_SEC_VAR_INIT_128
#include "CDD_Uart1CfgAndUseNonRte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define  CDD_Uart1CfgAndUse_DmaWrite_START_SEC_VAR_INIT_128
#include "CDD_Uart1CfgAndUseNonRte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

static VAR(uint8, AUTOMATIC) Uart1GlbRxBuf_M[UART1RXMAXBUFSIZE_CNT_U08] = {0U};

#define CDD_Uart1CfgAndUse_DmaWrite_STOP_SEC_VAR_INIT_128
#include "CDD_Uart1CfgAndUseNonRte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/********************************************* Local Function Prototypes *********************************************/
static FUNC(uint8, CDD_Uart1CfgAndUse_CODE) RollOverAdd(uint8 Input1_Cnt_T_u08, uint8 Input2_Cnt_T_u08);
static FUNC(void,  CDD_Uart1CfgAndUse_CODE) UpdDtsTxReg(uint8 Uart1GlbTx_Cnt_T_u08);
static FUNC(void,  CDD_Uart1CfgAndUse_CODE) Uart1Diagc(uint8 Uart1RxDataCntr_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * ImcArbnRxDataSrc1: Integer in interval [0...255]
 * ImcArbnRxDataSrc2: Integer in interval [0...255]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_u8_2048_Uart1CfgAndUse: Array with 2048 element(s) of type uint8
 * Ary1D_u8_8: Array with 8 element(s) of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_Uart1DiagcFrmErrCntr(void)
 *   uint32 *Rte_Pim_Uart1DiagcOvrrunErrCntr(void)
 *   uint32 *Rte_Pim_Uart1DiagcParErrCntr(void)
 *   uint32 *Rte_Pim_Uart1DiagcRxMaxDataErrCntr(void)
 *   uint16 *Rte_Pim_PrevDmaTrfCnt(void)
 *   uint8 *Rte_Pim_Uart1100MilliSecReadCmpl(void)
 *   uint8 *Rte_Pim_Uart110MilliSecReadCmpl(void)
 *   uint8 *Rte_Pim_Uart1NrOfPnd100MilliSecFrmCnt(void)
 *   uint8 *Rte_Pim_Uart1NrOfPnd10MilliSecFrmCnt(void)
 *   uint8 *Rte_Pim_Uart1RxPrevLoopDataUnread(void)
 *   uint8 *Rte_Pim_Uart1100MilliSecBufCnt(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2048_Uart1CfgAndUse
 *   uint8 *Rte_Pim_Uart110MilliSecBufCnt(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2048_Uart1CfgAndUse
 *   uint8 *Rte_Pim_Uart12MilliSecBufCnt(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2048_Uart1CfgAndUse
 *
 *********************************************************************************************************************/


#define CDD_Uart1CfgAndUse_START_SEC_CODE
#include "CDD_Uart1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Uart1CfgAndUseInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart1CfgAndUseInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUseInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart1CfgAndUseInit1
 *********************************************************************************************************************/

    MSR_LM11_MS_LM11     = MS_LM11_RLIN3_IS_OPERATING;           /* RLIN3 Clock Supply Enabled */

    RLN31LCUC_OM0        = OM0_LIN_RESET_MODE_IS_CAUSED;         /* LIN Reset Mode */

    RLN31LMD_LRDNFS      = LRDNFS_THE_NOISE_FILTER_IS_DISABLED;  /* Noise Filter disabled */
    RLN31LMD_LMD         = LMD_UART_MODE;                        /* UART Mode Enabled */

    RLN31LBFC_UTPS       = UTPS_TRANSMIT_DATA_NORMAL_OUTPUT;     /* Normal Data Output */
    RLN31LBFC_URPS       = URPS_RECEPTION_DATA_NORMAL_OUTPUT;    /* Reception data normal output */
    RLN31LBFC_UPS        = UPS_ODD_PARITY;                       /* Odd Parity */
    RLN31LBFC_USBLS      = USBLS_STOP_BIT_2_BITS;                /* 2 Stop Bits */
    RLN31LBFC_UBOS       = UBOS_LSB_FIRST;                       /* LSB first */
    RLN31LBFC_UBLS       = UBLS_UART_8_BITS_COMMUNICATION;       /* 8 bit communication */

    RLN31LUOR1_UTIGTS    = UTIGTS_INTERRUPT_AT_THE_START;        /* Interrupt at the start of Tx */

    RLN31LEDE_FERE       = FERE_ENABLES_FRAMING_ERROR_DETECTION; /* Framing error detection enabled */
    RLN31LEDE_OERE       = OERE_ENABLES_OVERRUN_ERROR_DETECTION; /* Overrun error detection enabled */
    RLN31LEDE_BERE       = BERE_DISABLES_BIT_ERROR_DETECTION;    /* Bit error detection disabled */

    RLN31LDFC_MDL        = MDL_1_DATA;                           /* Data Length to 1 Byte */

    RLN31LWBR_NSPB       = NSPB_8_SAMPLING;                      /* 8 bit Sampling */
    RLN31LWBR_LPRS       = LPRS_1_1;                             /* 1/1 Pre-Scalar */

    RLN31LBRP01_BRP      = RLN31LBRP01BRP_CNT_U08;               /* L = 4 (L+1 Scalar) */

    RLN31LCUC_OM0        = OM0_LIN_RESET_MODE_IS_CANCELED;       /* Release from LIN Reset Mode */

    RLN31LUOER_UROE      = UROE_ENABLES_RECEPTION;               /* Enables Reception */
    RLN31LUOER_UTOE      = UTOE_ENABLES_TRANSMISSION;            /* Enables Transmission */

    Call_Uart1CfgAndUseInin();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Uart1CfgAndUsePer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetRxSigGroup_Oper(uint8 SigGroup_Arg, ImcArbnRxDataSrc1 DataSrc_Arg, const uint8 *Buf_Arg)
 *     Argument Buf_Arg: uint8* is of type Ary1D_u8_8
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetRxSigGroup_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart1CfgAndUsePer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUsePer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart1CfgAndUsePer1
 *********************************************************************************************************************/

    VAR(uint8,  AUTOMATIC) Uart1RxDataCntr_Cnt_T_u08;
    VAR(uint8,   AUTOMATIC) Uart1RxIdxMax_Cnt_T_u08;
    VAR(uint8,   AUTOMATIC) Uart1RxIdx_Cnt_T_u08;
    VAR(uint8,   AUTOMATIC) ImcDataBuf_Cnt_T_u08[8];
    VAR(boolean, AUTOMATIC) Uart1RxSetBreakLoop_Cnt_T_logl = FALSE;
    VAR(uint32, AUTOMATIC) RegReadDMASSDTTC102_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) CurrDmaTrfCnt_Cnt_T_u16;
    VAR(uint8, AUTOMATIC) Uart1RxProcIdx_Cnt_T_u08;
    
    RegReadDMASSDTTC102_Cnt_T_u32 = DTTC102;
    CurrDmaTrfCnt_Cnt_T_u16 = (uint16)(RegReadDMASSDTTC102_Cnt_T_u32 & (uint32)MASKLOWR16BITOFUINT32_CNT_U16);
    Uart1RxProcIdx_Cnt_T_u08 =  UART1RXMAXBUFSIZE_CNT_U08 - (uint8)(RegReadDMASSDTTC102_Cnt_T_u32 >> UART1SHIFTVAL_CNT_U08);
    
    if(*Rte_Pim_PrevDmaTrfCnt() > CurrDmaTrfCnt_Cnt_T_u16 )
    {
        Uart1RxDataCntr_Cnt_T_u08 = (uint8)(*Rte_Pim_PrevDmaTrfCnt() - CurrDmaTrfCnt_Cnt_T_u16) ;
    }
    else if (CurrDmaTrfCnt_Cnt_T_u16 > *Rte_Pim_PrevDmaTrfCnt())
    {
        Uart1RxDataCntr_Cnt_T_u08 = (uint8)(UART1RXMAXTRFCNT_CNT_U16 - (CurrDmaTrfCnt_Cnt_T_u16 - *Rte_Pim_PrevDmaTrfCnt())) ;
    }
    else
    {
        Uart1RxDataCntr_Cnt_T_u08 = 0U;
    }

    Uart1Diagc(Uart1RxDataCntr_Cnt_T_u08);

    *Rte_Pim_PrevDmaTrfCnt() = CurrDmaTrfCnt_Cnt_T_u16;
    if (Uart1RxDataCntr_Cnt_T_u08 > 0)
    {
        Uart1RxIdxMax_Cnt_T_u08 = Uart1RxDataCntr_Cnt_T_u08 + *Rte_Pim_Uart1RxPrevLoopDataUnread();

        /* Clear */
        *Rte_Pim_Uart1RxPrevLoopDataUnread() = 0U;
        if(Uart1RxIdxMax_Cnt_T_u08 > Uart1RxProcIdx_Cnt_T_u08)
        {
            Uart1RxProcIdx_Cnt_T_u08 = UART1RXMAXBUFSIZE_CNT_U08 - ((Uart1RxIdxMax_Cnt_T_u08 - Uart1RxProcIdx_Cnt_T_u08));
        }
        else
        {
            Uart1RxProcIdx_Cnt_T_u08 = (Uart1RxProcIdx_Cnt_T_u08 - Uart1RxIdxMax_Cnt_T_u08);
        }
        Uart1RxIdx_Cnt_T_u08 = 0U;

        while((Uart1RxIdx_Cnt_T_u08 < Uart1RxIdxMax_Cnt_T_u08) && (Uart1RxSetBreakLoop_Cnt_T_logl == FALSE))
        {
            if ((Uart1GlbRxBuf_M[Uart1RxProcIdx_Cnt_T_u08] & IMCARBN_PATIDMASKVAL_CNT_U08) == IMCARBN_PATIDN_CNT_U08)
            {
                if ((Uart1RxIdxMax_Cnt_T_u08 - Uart1RxIdx_Cnt_T_u08) < IMCARBN_FRMSIZE_CNT_U08)
                {
                    Uart1RxSetBreakLoop_Cnt_T_logl = TRUE;
                    *Rte_Pim_Uart1RxPrevLoopDataUnread() = Uart1RxIdxMax_Cnt_T_u08 - Uart1RxIdx_Cnt_T_u08;
                }
                else if ((Uart1GlbRxBuf_M[Uart1RxProcIdx_Cnt_T_u08] ^ Uart1GlbRxBuf_M[RollOverAdd(Uart1RxProcIdx_Cnt_T_u08, DATABYTE7_CNT_U08)])
                        == ROLLGCNTCHK_CNT_U08)
                {
                    ImcDataBuf_Cnt_T_u08[DATABYTE0_CNT_U08] = Uart1GlbRxBuf_M[RollOverAdd(DATABYTE0_CNT_U08, Uart1RxProcIdx_Cnt_T_u08)];
                    ImcDataBuf_Cnt_T_u08[DATABYTE1_CNT_U08] = Uart1GlbRxBuf_M[RollOverAdd(DATABYTE1_CNT_U08, Uart1RxProcIdx_Cnt_T_u08)];
                    ImcDataBuf_Cnt_T_u08[DATABYTE2_CNT_U08] = Uart1GlbRxBuf_M[RollOverAdd(DATABYTE2_CNT_U08, Uart1RxProcIdx_Cnt_T_u08)];
                    ImcDataBuf_Cnt_T_u08[DATABYTE3_CNT_U08] = Uart1GlbRxBuf_M[RollOverAdd(DATABYTE3_CNT_U08, Uart1RxProcIdx_Cnt_T_u08)];
                    ImcDataBuf_Cnt_T_u08[DATABYTE4_CNT_U08] = Uart1GlbRxBuf_M[RollOverAdd(DATABYTE4_CNT_U08, Uart1RxProcIdx_Cnt_T_u08)];
                    ImcDataBuf_Cnt_T_u08[DATABYTE5_CNT_U08] = Uart1GlbRxBuf_M[RollOverAdd(DATABYTE5_CNT_U08, Uart1RxProcIdx_Cnt_T_u08)];
                    ImcDataBuf_Cnt_T_u08[DATABYTE6_CNT_U08] = Uart1GlbRxBuf_M[RollOverAdd(DATABYTE6_CNT_U08, Uart1RxProcIdx_Cnt_T_u08)];
                    ImcDataBuf_Cnt_T_u08[DATABYTE7_CNT_U08] = Uart1GlbRxBuf_M[RollOverAdd(DATABYTE7_CNT_U08, Uart1RxProcIdx_Cnt_T_u08)];

                    (void) Rte_Call_SetRxSigGroup_Oper(ImcDataBuf_Cnt_T_u08[DATABYTE1_CNT_U08], IMCARBNRXDATASRC_SECDRY, ImcDataBuf_Cnt_T_u08);
                    Uart1RxProcIdx_Cnt_T_u08 = RollOverAdd(Uart1RxProcIdx_Cnt_T_u08, DATABYTE8_CNT_U08);

                    Uart1RxIdx_Cnt_T_u08 += (IMCARBN_FRMSIZE_CNT_U08 - 1U);
                }
                else
                {
                    Uart1RxProcIdx_Cnt_T_u08 = RollOverAdd(Uart1RxProcIdx_Cnt_T_u08, 1U);
                }
            }
            else
            {
                Uart1RxProcIdx_Cnt_T_u08 = RollOverAdd(Uart1RxProcIdx_Cnt_T_u08, 1U);
            }

            Uart1RxIdx_Cnt_T_u08 = RollOverAdd(Uart1RxIdx_Cnt_T_u08, 1U);
        }
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Uart1CfgAndUsePer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTxRateGroup_Oper(uint8 RateGroup_Arg, uint8 *Buf_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetTxRateGroup_PortIf1_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1Uart1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1Uart1DrvrTxRxBuf(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart1CfgAndUsePer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUsePer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart1CfgAndUsePer2
 *********************************************************************************************************************/

    VAR(Std_ReturnType, AUTOMATIC) Uart12MilliSecReadCmpl_Cnt_T_enum;
    VAR(uint8,          AUTOMATIC) Uart1TxSigGroup_Cnt_T_u08;
    VAR(uint8,          AUTOMATIC) Uart1TxEmptyFrm_Cnt_T_u08;
    VAR(uint8,          AUTOMATIC) Uart1TxSigByte_Cnt_T_u08;
    VAR(uint8,          AUTOMATIC) Uart1TxByteUsed_Cnt_T_u08 = 0U;
    VAR(uint8,          AUTOMATIC) Uart1GlbTx_Cnt_T_u08 = 0U;

#if (IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08 != 0U)
    /* GetTxRateGroup */
    Uart12MilliSecReadCmpl_Cnt_T_enum = Rte_Call_GetTxRateGroup_Oper(IMCARBN_RATEGROUPID2MILLISEC_CNT_U08, Rte_Pim_Uart12MilliSecBufCnt());

    if (Uart12MilliSecReadCmpl_Cnt_T_enum == E_OK)
    {
        /* Copy all 2ms signals group data to global buffer */
        for (Uart1TxSigGroup_Cnt_T_u08 = 0U; Uart1TxSigGroup_Cnt_T_u08 < (IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08 * IMCARBN_FRMSIZE_CNT_U08);
                Uart1TxSigGroup_Cnt_T_u08++)
        {
            Uart1GlbTxBuf_M[Uart1TxByteUsed_Cnt_T_u08] = Rte_Pim_Uart12MilliSecBufCnt()[Uart1TxByteUsed_Cnt_T_u08];

            Uart1TxByteUsed_Cnt_T_u08++;

        }
        Uart1GlbTx_Cnt_T_u08 = IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08;
    }
#endif

#if (IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08 != 0U)
    if (*Rte_Pim_Uart110MilliSecReadCmpl() == E_OK)
    {
        Uart1TxEmptyFrm_Cnt_T_u08 = MAXSIGGROUPFORTX_CNT_U08 - Uart1GlbTx_Cnt_T_u08;

        if (*Rte_Pim_Uart1NrOfPnd10MilliSecFrmCnt() <= Uart1TxEmptyFrm_Cnt_T_u08)
        {
            Uart1TxEmptyFrm_Cnt_T_u08 = *Rte_Pim_Uart1NrOfPnd10MilliSecFrmCnt();
            *Rte_Pim_Uart110MilliSecReadCmpl() = E_NOT_OK;
        }

        /* Copy possible 10ms signals group data to global buffer */
        for (Uart1TxSigGroup_Cnt_T_u08 = 0U; Uart1TxSigGroup_Cnt_T_u08 < Uart1TxEmptyFrm_Cnt_T_u08; Uart1TxSigGroup_Cnt_T_u08++)
        {
            /* Enter Exclusive Area */
            Rte_Enter_ExclsvAr1Uart1DrvrTxRxBuf();
            for (Uart1TxSigByte_Cnt_T_u08 = 0U; Uart1TxSigByte_Cnt_T_u08 < IMCARBN_FRMSIZE_CNT_U08; Uart1TxSigByte_Cnt_T_u08++)
            {
                Uart1GlbTxBuf_M[Uart1TxByteUsed_Cnt_T_u08] = Rte_Pim_Uart110MilliSecBufCnt()[((IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08
                        - *Rte_Pim_Uart1NrOfPnd10MilliSecFrmCnt()) * IMCARBN_FRMSIZE_CNT_U08) + Uart1TxSigByte_Cnt_T_u08];

                Uart1TxByteUsed_Cnt_T_u08++;
            }
            /* Exit Exclusive Area */
            Rte_Exit_ExclsvAr1Uart1DrvrTxRxBuf();

            (*Rte_Pim_Uart1NrOfPnd10MilliSecFrmCnt())--;
        }

        Uart1GlbTx_Cnt_T_u08 += Uart1TxEmptyFrm_Cnt_T_u08;
    }
#endif

#if (IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08 != 0U)
    if (*Rte_Pim_Uart1100MilliSecReadCmpl() == E_OK)
    {
        Uart1TxEmptyFrm_Cnt_T_u08 = MAXSIGGROUPFORTX_CNT_U08 - Uart1GlbTx_Cnt_T_u08;

        if (*Rte_Pim_Uart1NrOfPnd100MilliSecFrmCnt() <= Uart1TxEmptyFrm_Cnt_T_u08)
        {
            Uart1TxEmptyFrm_Cnt_T_u08 = *Rte_Pim_Uart1NrOfPnd100MilliSecFrmCnt();
            *Rte_Pim_Uart1100MilliSecReadCmpl() = E_NOT_OK;
        }

        /* Copy possible 100ms signals group data to global buffer */
        for (Uart1TxSigGroup_Cnt_T_u08 = 0U; Uart1TxSigGroup_Cnt_T_u08 < Uart1TxEmptyFrm_Cnt_T_u08; Uart1TxSigGroup_Cnt_T_u08++)
        {
            /* Enter Exclusive Area */
            Rte_Enter_ExclsvAr1Uart1DrvrTxRxBuf();

            for (Uart1TxSigByte_Cnt_T_u08 = 0U; Uart1TxSigByte_Cnt_T_u08 < IMCARBN_FRMSIZE_CNT_U08; Uart1TxSigByte_Cnt_T_u08++)
            {
                Uart1GlbTxBuf_M[Uart1TxByteUsed_Cnt_T_u08] = Rte_Pim_Uart1100MilliSecBufCnt()[((IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08
                        - *Rte_Pim_Uart1NrOfPnd100MilliSecFrmCnt()) * IMCARBN_FRMSIZE_CNT_U08) + Uart1TxSigByte_Cnt_T_u08];

                Uart1TxByteUsed_Cnt_T_u08++;
            }
            /* Exit Exclusive Area */
            Rte_Exit_ExclsvAr1Uart1DrvrTxRxBuf();

            (*Rte_Pim_Uart1NrOfPnd100MilliSecFrmCnt())--;
        }

        Uart1GlbTx_Cnt_T_u08 += Uart1TxEmptyFrm_Cnt_T_u08;
    }
#endif

    UpdDtsTxReg(Uart1GlbTx_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Uart1CfgAndUsePer3
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTxRateGroup_Oper(uint8 RateGroup_Arg, uint8 *Buf_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetTxRateGroup_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart1CfgAndUsePer3_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUsePer3(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart1CfgAndUsePer3
 *********************************************************************************************************************/

#if (IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08 != 0U)
    *Rte_Pim_Uart110MilliSecReadCmpl() = Rte_Call_GetTxRateGroup_Oper(IMCARBN_RATEGROUPID10MILLISEC_CNT_U08, Rte_Pim_Uart110MilliSecBufCnt());
    *Rte_Pim_Uart1NrOfPnd10MilliSecFrmCnt() = IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08;
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Uart1CfgAndUsePer4
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTxRateGroup_Oper(uint8 RateGroup_Arg, uint8 *Buf_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetTxRateGroup_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart1CfgAndUsePer4_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUsePer4(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart1CfgAndUsePer4
 *********************************************************************************************************************/

#if (IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08 != 0U)
    *Rte_Pim_Uart1100MilliSecReadCmpl() = Rte_Call_GetTxRateGroup_Oper(IMCARBN_RATEGROUPID100MILLISEC_CNT_U08, Rte_Pim_Uart1100MilliSecBufCnt());
    *Rte_Pim_Uart1NrOfPnd100MilliSecFrmCnt() = IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08;
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_Uart1CfgAndUse_STOP_SEC_CODE
#include "CDD_Uart1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define CDD_Uart1CfgAndUse_START_SEC_CODE
#include "CDD_Uart1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Name:        Uart1CfgAndUseInin
 * Description: DMA Register Initialization
 * Inputs:      None
 * Outputs:     None
 * Usage Notes: To be configured as a trusted function because it needs to run in supervisor mode
 *********************************************************************************************************************/
FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUseInin(void)
{
    /* The DTS Channel Master settings needs to be configured in SUPERVISOR Mode. */
    DTS103CM        = DTS103CM_CNT_U32;

    DTFSL103_REQEN  = REQEN_REQUEST_NOT_USED;          /* DMA Transfer Request Enable */
    DTSA103         = (uint32) &Uart1GlbTxBuf_M[0];    /* Source address */
    DTDA103         = (uint32) &RLN31LUTDR;            /* Destination Address Register */
    DTTC103         = 0U;                              /* Transfer Count */
    DTTCT103        = DTTCT103_CNT_U32;                /* Fixed Destination address count */
    DTFSC103_DRQC   = DRQC_TRANSFER_REQUEST_CLEAR;     /* DMA Transfer request clear */
    DTFSL103_REQEN  = REQEN_REQUEST_USED;              /* DMA Transfer Request Enable */

    /* The DTS Channel Master settings needs to be configured in SUPERVISOR Mode. */
    DTS102CM        = DTS102CM_CNT_U32;

    DTFSL102_REQEN  = REQEN_REQUEST_NOT_USED;          /* DMA Transfer Request Enable */
    DTSA102         = (uint32) &RLN31LURDR;            /* Source address */
    DTDA102         = (uint32) &Uart1GlbRxBuf_M[0];    /* Destination Address Register */
    DTTC102         = DTTC102_CNT_U32;                 /* Transfer Count = 144 and Address reload count = 144 */
    DTTCT102        = DTTCT102_CNT_U32;                /* Fixed Source Address and Reload Fcn Enabled */
    DTRSA102        = (uint32) &RLN31LURDR;            /* Reload Source address */
    DTRDA102        = (uint32) &Uart1GlbRxBuf_M[0];    /* Reload Destination Address Register */
    DTRTC102       |= DTRTC102_CNT_U32;                /* Update only the upper 16 bits of the 32 bit  register to a value of 144 */
    DTFSC102_DRQC   = DRQC_TRANSFER_REQUEST_CLEAR;     /* DMA transfer Request clear */
    DTFSL102_REQEN  = REQEN_REQUEST_USED;              /* DMA Transfer Request Enable */
}

/**********************************************************************************************************************
 * Name:        RollOverAdd
 * Description: Roll Over Additive
 * Inputs:      Input1
 *              Input2
 * Outputs:     Output
 * Usage Notes: Called from Uart1CfgAndUsePer1
 *********************************************************************************************************************/
static FUNC(uint8, CDD_Uart1CfgAndUse_CODE) RollOverAdd(uint8 Input1_Cnt_T_u08, uint8 Input2_Cnt_T_u08)
{
    VAR(uint8, AUTOMATIC) Output_Cnt_T_u08;

    Output_Cnt_T_u08 = (Input1_Cnt_T_u08 + Input2_Cnt_T_u08) % (TWO_CNT_U08 * IMCARBN_FRMSIZE_CNT_U08 * MAXSIGGROUPFORTX_CNT_U08);

    return Output_Cnt_T_u08;
}

/**********************************************************************************************************************
 * Name:        UpdDtsTxReg
 * Description: Update Data Transfer Service Transmit Register
 * Inputs:      Uart1GlbTxCnt
 * Outputs:     None
 * Usage Notes: Called from Uart1CfgAndUsePer2
 *********************************************************************************************************************/
static FUNC(void, CDD_Uart1CfgAndUse_CODE) UpdDtsTxReg(uint8 Uart1GlbTx_Cnt_T_u08)
{
    if ((Uart1GlbTx_Cnt_T_u08 > 0U) && (RLN31LST_UTS == FALSE))
    {
        DTFSL103_REQEN = REQEN_REQUEST_NOT_USED;
        DTFSC103_DRQC  = DRQC_TRANSFER_REQUEST_CLEAR;
        DTSA103        = (uint32) &Uart1GlbTxBuf_M[0];
        DTDA103        = (uint32) &RLN31LUTDR;
        DTTC103        = ((uint32) Uart1GlbTx_Cnt_T_u08) * ((uint32) IMCARBN_FRMSIZE_CNT_U08);
        DTFSL103_REQEN = REQEN_REQUEST_USED;
        DTFSS103_DRQS  = DRQS_TRANSFER_REQUEST_SET;
    }
}

/**********************************************************************************************************************
 * Name:        Uart1Diagc
 * Description: Performs Diagnostic checks for the UART1 reception
 * Inputs:      None
 * Outputs:     None
 * Usage Notes: Called from Uart1CfgAndUsePer1
 *********************************************************************************************************************/
static FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1Diagc(uint8 Uart1RxDataCntr_Cnt_T_u08)
{
    /* Check if the max number of bytes have been received. */
    if (Uart1RxDataCntr_Cnt_T_u08 >= UART1RXMAXBUFSIZE_CNT_U08)
    {
        (*Rte_Pim_Uart1DiagcRxMaxDataErrCntr())++;
    }

    /* Overrun Error */
    if (RLN31LEST_OER == TRUE)
    {
        RLN31LEST_OER = FALSE;
        (*Rte_Pim_Uart1DiagcOvrrunErrCntr())++;
    }

    /* Parity Error */
    if (RLN31LEST_UPER == TRUE)
    {
        RLN31LEST_UPER = FALSE;
        (*Rte_Pim_Uart1DiagcParErrCntr())++;
    }

    /* Framing Error */
    if (RLN31LEST_FER == TRUE)
    {
        RLN31LEST_FER = FALSE;
        (*Rte_Pim_Uart1DiagcFrmErrCntr())++;
    }

}

#define CDD_Uart1CfgAndUse_STOP_SEC_CODE
#include "CDD_Uart1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
