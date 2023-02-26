/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_Uart0CfgAndUse.c
 *        Config:  E:/EA4NewTemplate/CM760A_Uart0CfgAndUse_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_Uart0CfgAndUse
 *  Generated at:  Tue Jan  9 14:07:15 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_Uart0CfgAndUse>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * Copyright 2017, 2018 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : CDD_Uart0CfgAndUse.c
 * Module Description: Uart0 Configuration And Use Function
 * Project           : CBD
 * Author            : Krzysztof Byrski
 **********************************************************************************************************************
 * Version Control:
 * %version:          3 %
 * %derived_by:       rzk04c %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                             SCR #
 * --------  -------  --------  ----------------------------------------------------------------------------  ---------
 * 06/06/17  1        KByrski   Initial version                                                               EA4#12170
 * 01/09/18  2        AJM       Modified PEID of DTS Channel Master settings to 1 and updated Uart Receive    EA4#19118
                                function to use DTS reload function 1 & 2
 * 02/09/18  3        AJM       Set UART0 config registers to disbale BER and noise filtering                 EA4#20047
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

#include "Rte_CDD_Uart0CfgAndUse.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "CDD_Uart0CfgAndUse.h"
#include "CDD_Uart0CfgAndUse_private.h"
#include "Os.h"
#include "ImcArbn.h"
#include "DMACH_RegDefns.h"
#include "DMACM_RegDefns.h"
#include "RLN30_RegDefns.h"
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
#define UART0RXMAXBUFSIZE_CNT_U08       (144U)         /* DMA Receive Channel Transfer Count */
#define UART0RXMAXTRFCNT_CNT_U16        (1440U)        /* DMA Receive Channel Maximum Transfer Count */
#define UART0SHIFTVAL_CNT_U08           (16U)          /* Uart0 Shift by word value */


#define UART0TXBUFSIZE_CNT_U08          (80U)          /* TX buffer size (aligned to 16) */


#define RLN30LBRP01BRP_CNT_U08          (4U)           /* Divider = 5 */
#define DTS101CM_CNT_U32                (0x20120000U)  /* PEID = 1, SPID = 4, UM = 1 */
#define DTS100CM_CNT_U32                (0x200E0000U)  /* PEID = 1, SPID = 3, UM = 1 */
#define DTTCT101_CNT_U32                (256U)         /* Destination address count direction = Fixed */
#define DTTC100_CNT_U32                 (9438624U)     /* Transfer count = 1440,  Address reload count = 144 */
#define DTTCT100_CNT_U32                (6720U)        /* Source address count direction = Fixed, Reload function 1 & 2 is enabled */
#define DTRTC100_CNT_U32                (9438624U)     /* Reload transfer count = 1440, Reload address reload count = 144 */

/******************************************** Module Specific Variables **********************************************/
#define CDD_Uart0CfgAndUse_START_SEC_VAR_INIT_128
#include "CDD_Uart0CfgAndUseNonRte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

static VAR(uint8, AUTOMATIC) Uart0GlbTxBuf_M[UART0TXBUFSIZE_CNT_U08] = {0U};

#define CDD_Uart0CfgAndUse_STOP_SEC_VAR_INIT_128
#include "CDD_Uart0CfgAndUseNonRte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define  CDD_Uart0CfgAndUse_DmaWrite_START_SEC_VAR_INIT_128
#include "CDD_Uart0CfgAndUseNonRte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

static VAR(uint8, AUTOMATIC) Uart0GlbRxBuf_M[UART0RXMAXBUFSIZE_CNT_U08] = {0U};

#define CDD_Uart0CfgAndUse_DmaWrite_STOP_SEC_VAR_INIT_128
#include "CDD_Uart0CfgAndUseNonRte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/********************************************* Local Function Prototypes *********************************************/
static FUNC(uint8, CDD_Uart0CfgAndUse_CODE) RollOverAdd(uint8 Input1_Cnt_T_u08, uint8 Input2_Cnt_T_u08);
static FUNC(void,  CDD_Uart0CfgAndUse_CODE) UpdDtsTxReg(uint8 Uart0GlbTx_Cnt_T_u08);
static FUNC(void,  CDD_Uart0CfgAndUse_CODE) Uart0Diagc(uint8 Uart0RxDataCntr_Cnt_T_u08);

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
 * Ary1D_u8_2048_Uart0CfgAndUse: Array with 2048 element(s) of type uint8
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
 *   uint32 *Rte_Pim_Uart0DiagcBitErrCntr(void)
 *   uint32 *Rte_Pim_Uart0DiagcFrmErrCntr(void)
 *   uint32 *Rte_Pim_Uart0DiagcOvrrunErrCntr(void)
 *   uint32 *Rte_Pim_Uart0DiagcParErrCntr(void)
 *   uint32 *Rte_Pim_Uart0DiagcRxMaxDataErrCntr(void)
 *   uint16 *Rte_Pim_PrevDmaTrfCnt(void)
 *   uint8 *Rte_Pim_Uart0100MilliSecReadCmpl(void)
 *   uint8 *Rte_Pim_Uart010MilliSecReadCmpl(void)
 *   uint8 *Rte_Pim_Uart0NrOfPnd100MilliSecFrmCnt(void)
 *   uint8 *Rte_Pim_Uart0NrOfPnd10MilliSecFrmCnt(void)
 *   uint8 *Rte_Pim_Uart0RxPrevLoopDataUnread(void)
 *   uint8 *Rte_Pim_Uart0100MilliSecBufCnt(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2048_Uart0CfgAndUse
 *   uint8 *Rte_Pim_Uart010MilliSecBufCnt(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2048_Uart0CfgAndUse
 *   uint8 *Rte_Pim_Uart02MilliSecBufCnt(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2048_Uart0CfgAndUse
 *
 *********************************************************************************************************************/


#define CDD_Uart0CfgAndUse_START_SEC_CODE
#include "CDD_Uart0CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Uart0CfgAndUseInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart0CfgAndUseInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_Uart0CfgAndUse_CODE) Uart0CfgAndUseInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart0CfgAndUseInit1
 *********************************************************************************************************************/

    MSR_LM11_MS_LM11     = MS_LM11_RLIN3_IS_OPERATING;           /* RLIN3 Clock Supply Enabled */

    RLN30LCUC_OM0        = OM0_LIN_RESET_MODE_IS_CAUSED;         /* LIN Reset Mode */

    RLN30LMD_LRDNFS      = LRDNFS_THE_NOISE_FILTER_IS_DISABLED;  /* Noise Filter disabled */
    RLN30LMD_LMD         = LMD_UART_MODE;                        /* UART Mode Enabled */

    RLN30LBFC_UTPS       = UTPS_TRANSMIT_DATA_NORMAL_OUTPUT;     /* Normal Data Output */
    RLN30LBFC_URPS       = URPS_RECEPTION_DATA_NORMAL_OUTPUT;    /* Reception data normal output */
    RLN30LBFC_UPS        = UPS_ODD_PARITY;                       /* Odd Parity */
    RLN30LBFC_USBLS      = USBLS_STOP_BIT_2_BITS;                /* 2 Stop Bits */
    RLN30LBFC_UBOS       = UBOS_LSB_FIRST;                       /* LSB first */
    RLN30LBFC_UBLS       = UBLS_UART_8_BITS_COMMUNICATION;       /* 8 bit communication */

    RLN30LUOR1_UTIGTS    = UTIGTS_INTERRUPT_AT_THE_START;        /* Interrupt at the start of Tx */

    RLN30LEDE_FERE       = FERE_ENABLES_FRAMING_ERROR_DETECTION; /* Framing error detection enabled */
    RLN30LEDE_OERE       = OERE_ENABLES_OVERRUN_ERROR_DETECTION; /* Overrun error detection enabled */
    RLN30LEDE_BERE       = BERE_DISABLES_BIT_ERROR_DETECTION;    /* Bit error detection disabled */

    RLN30LDFC_MDL        = MDL_1_DATA;                           /* Data Length to 1 Byte */

    RLN30LWBR_NSPB       = NSPB_8_SAMPLING;                      /* 8 bit Sampling */
    RLN30LWBR_LPRS       = LPRS_1_1;                             /* 1/1 Pre-Scalar */

    RLN30LBRP01_BRP      = RLN30LBRP01BRP_CNT_U08;               /* L = 4 (L+1 Scalar) */

    RLN30LCUC_OM0        = OM0_LIN_RESET_MODE_IS_CANCELED;       /* Release from LIN Reset Mode */

    RLN30LUOER_UROE      = UROE_ENABLES_RECEPTION;               /* Enables Reception */
    RLN30LUOER_UTOE      = UTOE_ENABLES_TRANSMISSION;            /* Enables Transmission */

    Call_Uart0CfgAndUseInin();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Uart0CfgAndUsePer1
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
 * Symbol: Uart0CfgAndUsePer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_Uart0CfgAndUse_CODE) Uart0CfgAndUsePer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart0CfgAndUsePer1
 *********************************************************************************************************************/

    VAR(uint8, AUTOMATIC) Uart0RxDataCntr_Cnt_T_u08;
    VAR(uint8,   AUTOMATIC) Uart0RxIdxMax_Cnt_T_u08;
    VAR(uint8,   AUTOMATIC) Uart0RxIdx_Cnt_T_u08;
    VAR(uint8,   AUTOMATIC) ImcDataBuf_Cnt_T_u08[8];
    VAR(boolean, AUTOMATIC) Uart0RxSetBreakLoop_Cnt_T_logl = FALSE;
    VAR(uint32, AUTOMATIC) RegReadDMASSDTTC100_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) CurrDmaTrfCnt_Cnt_T_u16;
    VAR(uint8, AUTOMATIC) Uart0RxProcIdx_Cnt_T_u08;
    
    RegReadDMASSDTTC100_Cnt_T_u32 = DTTC100;
    CurrDmaTrfCnt_Cnt_T_u16 = (uint16)(RegReadDMASSDTTC100_Cnt_T_u32 & (uint32)MASKLOWR16BITOFUINT32_CNT_U16);
    Uart0RxProcIdx_Cnt_T_u08 =  UART0RXMAXBUFSIZE_CNT_U08 - (uint8)(RegReadDMASSDTTC100_Cnt_T_u32 >> UART0SHIFTVAL_CNT_U08);
    
    if(*Rte_Pim_PrevDmaTrfCnt() > CurrDmaTrfCnt_Cnt_T_u16 )
    {
        Uart0RxDataCntr_Cnt_T_u08 = (uint8)(*Rte_Pim_PrevDmaTrfCnt() - CurrDmaTrfCnt_Cnt_T_u16) ;
    }
    else if (CurrDmaTrfCnt_Cnt_T_u16 > *Rte_Pim_PrevDmaTrfCnt())
    {
        Uart0RxDataCntr_Cnt_T_u08 = (uint8)(UART0RXMAXTRFCNT_CNT_U16 - (CurrDmaTrfCnt_Cnt_T_u16 - *Rte_Pim_PrevDmaTrfCnt())) ;
    }
    else
    {
        Uart0RxDataCntr_Cnt_T_u08 = 0U;
    }

    Uart0Diagc(Uart0RxDataCntr_Cnt_T_u08);

    *Rte_Pim_PrevDmaTrfCnt() = CurrDmaTrfCnt_Cnt_T_u16;

    if (Uart0RxDataCntr_Cnt_T_u08 > 0U)
    {
        Uart0RxIdxMax_Cnt_T_u08 = Uart0RxDataCntr_Cnt_T_u08 + *Rte_Pim_Uart0RxPrevLoopDataUnread();

        /* Clear */
        *Rte_Pim_Uart0RxPrevLoopDataUnread() = 0U;
        if(Uart0RxIdxMax_Cnt_T_u08 > Uart0RxProcIdx_Cnt_T_u08)
        {
            Uart0RxProcIdx_Cnt_T_u08 = UART0RXMAXBUFSIZE_CNT_U08 - ((Uart0RxIdxMax_Cnt_T_u08 - Uart0RxProcIdx_Cnt_T_u08));
        }
        else
        {
            Uart0RxProcIdx_Cnt_T_u08 = (Uart0RxProcIdx_Cnt_T_u08 - Uart0RxIdxMax_Cnt_T_u08);
        }
        Uart0RxIdx_Cnt_T_u08 = 0U;

        while ((Uart0RxIdx_Cnt_T_u08 < Uart0RxIdxMax_Cnt_T_u08) && (Uart0RxSetBreakLoop_Cnt_T_logl == FALSE))
        {
            if ((Uart0GlbRxBuf_M[Uart0RxProcIdx_Cnt_T_u08] & IMCARBN_PATIDMASKVAL_CNT_U08) == IMCARBN_PATIDN_CNT_U08)
            {
                if ((Uart0RxIdxMax_Cnt_T_u08 - Uart0RxIdx_Cnt_T_u08) < IMCARBN_FRMSIZE_CNT_U08)
                {
                    Uart0RxSetBreakLoop_Cnt_T_logl = TRUE;
                    *Rte_Pim_Uart0RxPrevLoopDataUnread() = Uart0RxIdxMax_Cnt_T_u08 - Uart0RxIdx_Cnt_T_u08;
                }
                else if ((Uart0GlbRxBuf_M[Uart0RxProcIdx_Cnt_T_u08] ^ Uart0GlbRxBuf_M[RollOverAdd(Uart0RxProcIdx_Cnt_T_u08, DATABYTE7_CNT_U08)])
                        == ROLLGCNTCHK_CNT_U08)
                {
                    ImcDataBuf_Cnt_T_u08[DATABYTE0_CNT_U08] = Uart0GlbRxBuf_M[RollOverAdd(DATABYTE0_CNT_U08, Uart0RxProcIdx_Cnt_T_u08)];
                    ImcDataBuf_Cnt_T_u08[DATABYTE1_CNT_U08] = Uart0GlbRxBuf_M[RollOverAdd(DATABYTE1_CNT_U08, Uart0RxProcIdx_Cnt_T_u08)];
                    ImcDataBuf_Cnt_T_u08[DATABYTE2_CNT_U08] = Uart0GlbRxBuf_M[RollOverAdd(DATABYTE2_CNT_U08, Uart0RxProcIdx_Cnt_T_u08)];
                    ImcDataBuf_Cnt_T_u08[DATABYTE3_CNT_U08] = Uart0GlbRxBuf_M[RollOverAdd(DATABYTE3_CNT_U08, Uart0RxProcIdx_Cnt_T_u08)];
                    ImcDataBuf_Cnt_T_u08[DATABYTE4_CNT_U08] = Uart0GlbRxBuf_M[RollOverAdd(DATABYTE4_CNT_U08, Uart0RxProcIdx_Cnt_T_u08)];
                    ImcDataBuf_Cnt_T_u08[DATABYTE5_CNT_U08] = Uart0GlbRxBuf_M[RollOverAdd(DATABYTE5_CNT_U08, Uart0RxProcIdx_Cnt_T_u08)];
                    ImcDataBuf_Cnt_T_u08[DATABYTE6_CNT_U08] = Uart0GlbRxBuf_M[RollOverAdd(DATABYTE6_CNT_U08, Uart0RxProcIdx_Cnt_T_u08)];
                    ImcDataBuf_Cnt_T_u08[DATABYTE7_CNT_U08] = Uart0GlbRxBuf_M[RollOverAdd(DATABYTE7_CNT_U08, Uart0RxProcIdx_Cnt_T_u08)];

                    (void) Rte_Call_SetRxSigGroup_Oper(ImcDataBuf_Cnt_T_u08[DATABYTE1_CNT_U08], IMCARBNRXDATASRC_PRIM, ImcDataBuf_Cnt_T_u08);

                    Uart0RxProcIdx_Cnt_T_u08 = RollOverAdd(Uart0RxProcIdx_Cnt_T_u08, DATABYTE8_CNT_U08);

                    Uart0RxIdx_Cnt_T_u08 += (IMCARBN_FRMSIZE_CNT_U08 - 1U);
                }
                else
                {
                    Uart0RxProcIdx_Cnt_T_u08 = RollOverAdd(Uart0RxProcIdx_Cnt_T_u08, 1U);
                }
            }
            else
            {
                Uart0RxProcIdx_Cnt_T_u08 = RollOverAdd(Uart0RxProcIdx_Cnt_T_u08, 1U);
            }

            Uart0RxIdx_Cnt_T_u08 = RollOverAdd(Uart0RxIdx_Cnt_T_u08, 1U);
        }
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Uart0CfgAndUsePer2
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
 *   void Rte_Enter_ExclsvAr1Uart0DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1Uart0DrvrTxRxBuf(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart0CfgAndUsePer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_Uart0CfgAndUse_CODE) Uart0CfgAndUsePer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart0CfgAndUsePer2
 *********************************************************************************************************************/

    VAR(Std_ReturnType, AUTOMATIC) Uart02MilliSecReadCmpl_Cnt_T_enum;
    VAR(uint8,          AUTOMATIC) Uart0TxSigGroup_Cnt_T_u08;
    VAR(uint8,          AUTOMATIC) Uart0TxEmptyFrm_Cnt_T_u08;
    VAR(uint8,          AUTOMATIC) Uart0TxSigByte_Cnt_T_u08;
    VAR(uint8,          AUTOMATIC) Uart0TxByteUsed_Cnt_T_u08 = 0U;
    VAR(uint8,          AUTOMATIC) Uart0GlbTx_Cnt_T_u08 = 0U;

#if (IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08 != 0U)
    /* GetTxRateGroup */
    Uart02MilliSecReadCmpl_Cnt_T_enum = Rte_Call_GetTxRateGroup_Oper(IMCARBN_RATEGROUPID2MILLISEC_CNT_U08, Rte_Pim_Uart02MilliSecBufCnt());

    if (Uart02MilliSecReadCmpl_Cnt_T_enum == E_OK)
    {
        /* Copy all 2ms signals group data to global buffer */
        for (Uart0TxSigGroup_Cnt_T_u08 = 0U; Uart0TxSigGroup_Cnt_T_u08 < (IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08 * IMCARBN_FRMSIZE_CNT_U08);
                Uart0TxSigGroup_Cnt_T_u08++)
        {
            Uart0GlbTxBuf_M[Uart0TxByteUsed_Cnt_T_u08] = Rte_Pim_Uart02MilliSecBufCnt()[Uart0TxByteUsed_Cnt_T_u08];

            Uart0TxByteUsed_Cnt_T_u08++;
        }

        Uart0GlbTx_Cnt_T_u08 = IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08;
    }
#endif

#if (IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08 != 0U)
    if (*Rte_Pim_Uart010MilliSecReadCmpl() == E_OK)
    {
        Uart0TxEmptyFrm_Cnt_T_u08 = MAXSIGGROUPFORTX_CNT_U08 - Uart0GlbTx_Cnt_T_u08;

        if (*Rte_Pim_Uart0NrOfPnd10MilliSecFrmCnt() <= Uart0TxEmptyFrm_Cnt_T_u08)
        {
            Uart0TxEmptyFrm_Cnt_T_u08 = *Rte_Pim_Uart0NrOfPnd10MilliSecFrmCnt();
            *Rte_Pim_Uart010MilliSecReadCmpl() = E_NOT_OK;
        }

        /* Copy possible 10ms signals group data to global buffer */
        for (Uart0TxSigGroup_Cnt_T_u08 = 0U; Uart0TxSigGroup_Cnt_T_u08 < Uart0TxEmptyFrm_Cnt_T_u08; Uart0TxSigGroup_Cnt_T_u08++)
        {
            /* Enter Exclusive Area */
            Rte_Enter_ExclsvAr1Uart0DrvrTxRxBuf();
            for (Uart0TxSigByte_Cnt_T_u08 = 0U; Uart0TxSigByte_Cnt_T_u08 < IMCARBN_FRMSIZE_CNT_U08; Uart0TxSigByte_Cnt_T_u08++)
            {
                Uart0GlbTxBuf_M[Uart0TxByteUsed_Cnt_T_u08] = Rte_Pim_Uart010MilliSecBufCnt()[((IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08
                        - *Rte_Pim_Uart0NrOfPnd10MilliSecFrmCnt()) * IMCARBN_FRMSIZE_CNT_U08) + Uart0TxSigByte_Cnt_T_u08];

                Uart0TxByteUsed_Cnt_T_u08++;
            }
            /* Exit Exclusive Area */
            Rte_Exit_ExclsvAr1Uart0DrvrTxRxBuf();

            (*Rte_Pim_Uart0NrOfPnd10MilliSecFrmCnt())--;
        }

        Uart0GlbTx_Cnt_T_u08 += Uart0TxEmptyFrm_Cnt_T_u08;
    }
#endif

#if (IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08 != 0U)
    if (*Rte_Pim_Uart0100MilliSecReadCmpl() == E_OK)
    {
        Uart0TxEmptyFrm_Cnt_T_u08 = MAXSIGGROUPFORTX_CNT_U08 - Uart0GlbTx_Cnt_T_u08;

        if (*Rte_Pim_Uart0NrOfPnd100MilliSecFrmCnt() <= Uart0TxEmptyFrm_Cnt_T_u08)
        {
            Uart0TxEmptyFrm_Cnt_T_u08 = *Rte_Pim_Uart0NrOfPnd100MilliSecFrmCnt();
            *Rte_Pim_Uart0100MilliSecReadCmpl() = E_NOT_OK;
        }

        /* Copy possible 100ms signals group data to global buffer */
        for (Uart0TxSigGroup_Cnt_T_u08 = 0U; Uart0TxSigGroup_Cnt_T_u08 < Uart0TxEmptyFrm_Cnt_T_u08; Uart0TxSigGroup_Cnt_T_u08++)
        {
            /* Enter Exclusive Area */
            Rte_Enter_ExclsvAr1Uart0DrvrTxRxBuf();
            for (Uart0TxSigByte_Cnt_T_u08 = 0U; Uart0TxSigByte_Cnt_T_u08 < IMCARBN_FRMSIZE_CNT_U08; Uart0TxSigByte_Cnt_T_u08++)
            {
                Uart0GlbTxBuf_M[Uart0TxByteUsed_Cnt_T_u08] = Rte_Pim_Uart0100MilliSecBufCnt()[((IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08
                        - *Rte_Pim_Uart0NrOfPnd100MilliSecFrmCnt()) * IMCARBN_FRMSIZE_CNT_U08) + Uart0TxSigByte_Cnt_T_u08];

                Uart0TxByteUsed_Cnt_T_u08++;
            }
            /* Exit Exclusive Area */
            Rte_Exit_ExclsvAr1Uart0DrvrTxRxBuf();

            (*Rte_Pim_Uart0NrOfPnd100MilliSecFrmCnt())--;
        }

        Uart0GlbTx_Cnt_T_u08 += Uart0TxEmptyFrm_Cnt_T_u08;
    }
#endif

    UpdDtsTxReg(Uart0GlbTx_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Uart0CfgAndUsePer3
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
 * Symbol: Uart0CfgAndUsePer3_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_Uart0CfgAndUse_CODE) Uart0CfgAndUsePer3(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart0CfgAndUsePer3
 *********************************************************************************************************************/

#if (IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08 != 0U)
    *Rte_Pim_Uart010MilliSecReadCmpl() = Rte_Call_GetTxRateGroup_Oper(IMCARBN_RATEGROUPID10MILLISEC_CNT_U08, Rte_Pim_Uart010MilliSecBufCnt());
    *Rte_Pim_Uart0NrOfPnd10MilliSecFrmCnt() = IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08;
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Uart0CfgAndUsePer4
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
 * Symbol: Uart0CfgAndUsePer4_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_Uart0CfgAndUse_CODE) Uart0CfgAndUsePer4(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Uart0CfgAndUsePer4
 *********************************************************************************************************************/

#if (IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08 != 0U)
    *Rte_Pim_Uart0100MilliSecReadCmpl() = Rte_Call_GetTxRateGroup_Oper(IMCARBN_RATEGROUPID100MILLISEC_CNT_U08, Rte_Pim_Uart0100MilliSecBufCnt());
    *Rte_Pim_Uart0NrOfPnd100MilliSecFrmCnt() = IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08;
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_Uart0CfgAndUse_STOP_SEC_CODE
#include "CDD_Uart0CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define CDD_Uart0CfgAndUse_START_SEC_CODE
#include "CDD_Uart0CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Name:        Uart0CfgAndUseInin
 * Description: DMA Register Initialization
 * Inputs:      None
 * Outputs:     None
 * Usage Notes: To be configured as a trusted function because it needs to run in supervisor mode
 *********************************************************************************************************************/
FUNC(void, CDD_Uart0CfgAndUse_CODE) Uart0CfgAndUseInin(void)
{
    /* The DTS Channel Master settings needs to be configured in SUPERVISOR Mode. */
    DTS101CM        = DTS101CM_CNT_U32;

    DTFSL101_REQEN  = REQEN_REQUEST_NOT_USED;          /* DMA Transfer Request Enable */
    DTSA101         = (uint32) &Uart0GlbTxBuf_M[0];    /* Source address */
    DTDA101         = (uint32) &RLN30LUTDR;            /* Destination Address Register */
    DTTC101         = 0U;                              /* Transfer Count */
    DTTCT101        = DTTCT101_CNT_U32;                /* Fixed Destination address count */
    DTFSC101_DRQC   = DRQC_TRANSFER_REQUEST_CLEAR;     /* DMA Transfer request clear */
    DTFSL101_REQEN  = REQEN_REQUEST_USED;              /* DMA Transfer Request Enable */

    /* The DTS Channel Master settings needs to be configured in SUPERVISOR Mode. */
    DTS100CM        = DTS100CM_CNT_U32;

    DTFSL100_REQEN  = REQEN_REQUEST_NOT_USED;          /* DMA Transfer Request Enable */
    DTSA100         = (uint32) &RLN30LURDR;            /* Source address */
    DTDA100         = (uint32) &Uart0GlbRxBuf_M[0];    /* Destination Address Register */
    DTTC100         = DTTC100_CNT_U32;                 /* Transfer Count = 144 and Address reload count = 144 */
    DTTCT100        = DTTCT100_CNT_U32;                /* Fixed Source Address and Reload Fcn 1 & 2 Enabled */
    DTRSA100        = (uint32) &RLN30LURDR;            /* Reload Source address */
    DTRDA100        = (uint32) &Uart0GlbRxBuf_M[0];    /* Reload Destination Address Register */
    DTRTC100       |= DTRTC100_CNT_U32;                /* Update only the upper 16 bits of the 32 bit  register to a value of 144 */
    DTFSC100_DRQC   = DRQC_TRANSFER_REQUEST_CLEAR;     /* DMA transfer Request clear */
    DTFSL100_REQEN  = REQEN_REQUEST_USED;              /* DMA Transfer Request Enable */
}

/**********************************************************************************************************************
 * Name:        RollOverAdd
 * Description: Roll Over Additive
 * Inputs:      Input1
 *              Input2
 * Outputs:     Output
 * Usage Notes: Called from Uart0CfgAndUsePer1
 *********************************************************************************************************************/
static FUNC(uint8, CDD_Uart0CfgAndUse_CODE) RollOverAdd(uint8 Input1_Cnt_T_u08, uint8 Input2_Cnt_T_u08)
{
    VAR(uint8, AUTOMATIC) Output_Cnt_T_u08;

    Output_Cnt_T_u08 = (Input1_Cnt_T_u08 + Input2_Cnt_T_u08) % (TWO_CNT_U08 * IMCARBN_FRMSIZE_CNT_U08 * MAXSIGGROUPFORTX_CNT_U08);

    return Output_Cnt_T_u08;
}

/**********************************************************************************************************************
 * Name:        UpdDtsTxReg
 * Description: Update Data Transfer Service Transmit Register
 * Inputs:      Uart0GlbTxCnt
 * Outputs:     None
 * Usage Notes: Called from Uart0CfgAndUsePer2
 *********************************************************************************************************************/
static FUNC(void, CDD_Uart0CfgAndUse_CODE) UpdDtsTxReg(uint8 Uart0GlbTx_Cnt_T_u08)
{
    if ((Uart0GlbTx_Cnt_T_u08 > 0U) && (RLN30LST_UTS == FALSE))
    {
        DTFSL101_REQEN = REQEN_REQUEST_NOT_USED;
        DTFSC101_DRQC  = DRQC_TRANSFER_REQUEST_CLEAR;
        DTSA101        = (uint32) &Uart0GlbTxBuf_M[0];
        DTDA101        = (uint32) &RLN30LUTDR;
        DTTC101        = ((uint32) Uart0GlbTx_Cnt_T_u08) * ((uint32) IMCARBN_FRMSIZE_CNT_U08);
        DTFSL101_REQEN = REQEN_REQUEST_USED;
        DTFSS101_DRQS  = DRQS_TRANSFER_REQUEST_SET;
    }
}

/**********************************************************************************************************************
 * Name:        Uart0Diagc
 * Description: Performs Diagnostic checks for the UART0 reception
 * Inputs:      None
 * Outputs:     None
 * Usage Notes: Called from Uart0CfgAndUsePer1
 *********************************************************************************************************************/
static FUNC(void, CDD_Uart0CfgAndUse_CODE) Uart0Diagc(uint8 Uart0RxDataCntr_Cnt_T_u08)
{
    /* Check if the max number of bytes have been received. */
    if (Uart0RxDataCntr_Cnt_T_u08 >= UART0RXMAXBUFSIZE_CNT_U08)
    {
        (*Rte_Pim_Uart0DiagcRxMaxDataErrCntr())++;
    }

    /* Overrun Error */
    if (RLN30LEST_OER == TRUE)
    {
        RLN30LEST_OER = FALSE;
        (*Rte_Pim_Uart0DiagcOvrrunErrCntr())++;
    }

    /* Parity Error */
    if (RLN30LEST_UPER == TRUE)
    {
        RLN30LEST_UPER = FALSE;
        (*Rte_Pim_Uart0DiagcParErrCntr())++;
    }

    /* Framing Error */
    if (RLN30LEST_FER == TRUE)
    {
        RLN30LEST_FER = FALSE;
        (*Rte_Pim_Uart0DiagcFrmErrCntr())++;
    }
}

#define CDD_Uart0CfgAndUse_STOP_SEC_CODE
#include "CDD_Uart0CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
