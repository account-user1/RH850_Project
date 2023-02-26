/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  ImcArbn.c
 *        Config:  C:/Component/AR350A_ImcArbn_Impl/tools/Component.dpa
 *     SW-C Type:  ImcArbn
 *  Generated at:  Wed Jul  5 15:51:23 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <ImcArbn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name: ImcArbn.c
* Module Description: Implementation of Inter-Micro Communication Arbitration 
* Project           : CBD
* Author            : Akilan Rathakrishnan
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       rzk04c %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 01/15/17  1        AR        Initial Version                                                                  EA4#9291
* 03/17/17  2        JK        Anomaly fix EA4#10556,10600                                           EA4#10576,EA4#10603
* 07/03/17  3        KK        Update AR350 implementation to fix array indexing issue                          EA4#13397
* 11/07/17  4        AJM       Modified array passing and associated array references & anomaly fix EA4#13869   EA4#17164
**********************************************************************************************************************/


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
 * ImcArbnRxDataSrc1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * ImcArbnRxExtdSts1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * ImcArbnRxSts1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * NtcNr1
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * NtcSts1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_ImcArbn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.5]: Cast of a variable pointer to a pointer of a different type is allowed for the purpose of efficient memory copying. */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte Read and writes and functions Det_ReportError and Rte_Call_SetNtcSts */ 
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: There is no appropriate action to take on the return value for function calls: GetRefTmr100MicroSec32bit,GetTiSpan100MicroSec32bit */ 
/* MISRA-C:2004 Rule 12.12 [NXTRDEV 12.12.1]: Cast of a uint32 pointer to a float32 pointer is allowed for the purpose of efficient memory copying in GetSigImcData_f32 and GetSigImcDataExtdSts_f32*/ 

#include "Crc.h"
#include "NxtrDet.h"
#include "ImcArbn.h"
#include "ImcArbn_Cfg.h"
#include "ImcArbn_Private_Cfg.h"

/* Rolling counter related definitions */
#define ROLLGCNTRMAXVAL_CNT_U08                       (32U)
#define ROLLGCNTRMASKVAL_CNT_U08                      (0x1FU)
/* CRC Calc related definitions */
#define CRCCALCINITVAL_CNT_U08                        (0xFFU)
#define NROFDATABYTEFORCRCCALC_CNT_U08                (5U)
/* Byte stuffing */
#define BYTEMASK_CNT_U08                              (0xFFU)
#define SHIFTVALSECONDBYTE_CNT_U08                    (8U)
#define SHIFTVALTHIRDBYTE_CNT_U08                     (16U)
#define SHIFTVALFOURTHBYTE_CNT_U08                    (24U)
/* Signal Group - Frame data positions */
#define STRTBYTEPOSN_CNT_U08                          (0U)
#define SIGGROUPIDPOSN_CNT_U08                        (1U)
#define DATABYTE1POS_CNT_U08                          (2U)
#define DATABYTE2POS_CNT_U08                          (3U)
#define DATABYTE3POS_CNT_U08                          (4U)
#define DATABYTE4POS_CNT_U08                          (5U)
#define CRCPOSN_CNT_U08                               (6U)
#define ENDBYTEPOSN_CNT_U08                           (7U)
/* Frame fault array index definitions */
#define CRCFLT_CNT_U08                                (0x0U)
#define ROLLGCNTRFLT_CNT_U08                          (0x1U)
#define FRMFLTBUFIDXPRIM_CNT_U08                      (0x0U)
#define FRMFLTBUFIDXSECDRY_CNT_U08                    (0x1U)  
/* Parameter bit definitions for NTC 0x3F - Parameter byte */
#define PRIMSRCCRCFLT_CNT_U08                         (0x01U)
#define PRIMSRCROLLGCNTRFLT_CNT_U08                   (0x02U)
#define SECDRYSRCCRCFLT_CNT_U08                       (0x04U)
#define SECDRYSRCROLLGCNTRFLT_CNT_U08                 (0x08U)
/* Message missing time-out threshold counts */
#define MISSTHD2MILLISECRATEGROUP_CNT_U08            (5U)
#define MISSTHD10MILLISECRATEGROUP_CNT_U08           (5U)
#define MISSTHD100MILLISECRATEGROUP_CNT_U08          (2U)

#define RSYNCCNTRTHD_CNT_U08          (3U)
#define SIGGROUPLTCY_CNT_U08          (1U)
#define CHSWTDLY_CNT_U08              (1U)
#define DRIFTINITVAL_CNT_U08          (0xFFU)

/* Milli Seconds to Micro Seconds multiplier */
#define MILLISECTOMICROSECMPLR_CNT_U08 (10U)

/* Rolling counter status enum - private to the component */
typedef enum
{
    ROLLGCNTRVLDNEWDATA,
    ROLLGCNTRVLDOLDDATA,
    ROLLGCNTRINVLD
    
}ImcArbnRxRollgCntrSts1;

/* PIM Array aliases*/
#define PimSigGroupMissCntr_u08                 (*(Ary1D_u8_ImcArbnB*)(Rte_Pim_SigGroupMissCntr())) /* Signal Group missing counter */
#define PimSigGroupNeverRxd_logl                (*(Ary1D_logl_ImcArbnA*)(Rte_Pim_SigGroupNeverRxd())) /* Signal Group Never Received */
#define PimRxdSigData_u32                       (*(Ary1D_u32_ImcArbnA*)(Rte_Pim_RxdSigData())) /* Received Signal Data Buffer */
#define PimRxdSigDataExtdSts_enum               (*(Ary1D_ImrArbnRxExtdSts2_ImcArbnA*)(Rte_Pim_RxdSigDataExtdSts())) /* Received Signal Status Buffer */
#define PimPrevRollgCntrRxd_u08                 (*(Ary1D_u8_ImcArbnB*)(Rte_Pim_PrevRollgCntrRxd())) /* Previous Rolling counter for all Signal Groups */
#define PimRollgCntr_u08                        (*(Ary1D_u8_3*)(Rte_Pim_RollgCntr())) /* Rolling counter for all rate groups */
#define PimTxBuf_u08                            (*(Ary2D_u8_ImcArbnA*)(Rte_Pim_TxBuf())) /* Tx Data Buffer for all Rate Groups */
#define PimSecdrySrcRxBuf_u08                   (*(Ary2D_u8_ImcArbnA*)(Rte_Pim_SecdrySrcRxBuf())) /* Secondary source Rx Data Buffer for all Rate Groups */
#define PimPrimSrcRxBuf_u08                     (*(Ary2D_u8_ImcArbnA*)(Rte_Pim_PrimSrcRxBuf())) /* Primary source Rx Data Buffer for all Rate Groups */
#define PimFrmFltCntr2MilliSec_u08              (*(Ary2D_u8_2_2*)(Rte_Pim_FrmFltCntr2MilliSec())) /*Fault counter for 2ms frames*/
#define PimFrmFltCntr10MilliSec_u08             (*(Ary2D_u8_2_2*)(Rte_Pim_FrmFltCntr10MilliSec())) /*Fault counter for 10ms frames*/
#define PimFrmFltCntr100MilliSec_u08            (*(Ary2D_u8_2_2*)(Rte_Pim_FrmFltCntr100MilliSec())) /*Fault counter for 100ms frames**/
#define PimRxdSigDataSrc_enum                   (*(Ary1D_ImcArbnRxDataSrc2_ImcArbnB*)(Rte_Pim_RxdSigDataSrc())) /* Keeps data source for each signal */
#define PimSigGroupSkipCntr_u08                 (*(Ary1D_u8_ImcArbnB*)(Rte_Pim_SigGroupSkipCntr())) /* Signal Group skip counter */
#define PimSigGroupDataSrc_enum                 (*(Ary1D_ImcArbnRxDataSrc2_ImcArbnA*)(Rte_Pim_SigGroupDataSrc())) /* Keeps data source for each signal group*/
#define PimPrimSrcResyncCntr_u08                (*(Ary1D_u8_ImcArbnB*)(Rte_Pim_PrimSrcResyncCntr())) /* Primary Source Resync counter*/
#define PimSecdrySrcResyncCntr_u08              (*(Ary1D_u8_ImcArbnB*)(Rte_Pim_SecdrySrcResyncCntr())) /* Current Resync Rolling counter for Primary source*/
#define PimPrimSrcRollgCntrResync_u08           (*(Ary1D_u8_ImcArbnB*)(Rte_Pim_PrimSrcRollgCntrResync())) /* Secondary Source Resync counter*/
#define PimSecdrySrcRollgCntrResync_u08         (*(Ary1D_u8_ImcArbnB*)(Rte_Pim_SecdrySrcRollgCntrResync())) /* Current Resync Rolling counter for Secondary source*/
#define PimResyncOnPrimActv_logl                (*(Ary1D_logl_ImcArbnA*)(Rte_Pim_ResyncOnPrimActv())) /* Resync on primary source active */
#define PimResyncOnSecdryActv_logl              (*(Ary1D_logl_ImcArbnA*)(Rte_Pim_ResyncOnSecdryActv())) /* Resync on secondary source active */
#define SETNODETSIGID_CNT_U16                   ((uint16)0xFFFFU)

/* Constant Arrays */
/* Number of signal groups for each rate group */
static const VAR(uint8, IMCARBN_CONST)  NRSIGGROUPINRATEGROUP_CNT_U08[IMCARBN_NROFRATEGROUP_CNT_U08] = {   IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08,
                                                                                                           IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08, 
                                                                                                           IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08
                                                                                                       };
                                                                                                                 
                                                                                                                 
/* Offset to access rolling counter for particular Signal group of each Rate group */                                                                                                                    
static const VAR(uint8, IMCARBN_CONST)  RATEGROUPOFFS_CNT_U08[IMCARBN_NROFRATEGROUP_CNT_U08] = { 0U,
                                                                                                 IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08,
                                                                                                 IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08 + IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08
                                                                                               };

                                                                                                                
/* Function Prototypes */    
static FUNC(void, IMCARBN_APPL_CODE) ImcArbnTx(VAR(uint8, AUTOMATIC) RateGroup_Cnt_T_u08);

static FUNC(void, IMCARBN_APPL_CODE) ImcArbnRx( VAR(Ary2D_u8_2_2, AUTOMATIC) FrmFltCntr_Ary2D_u8,
                                                VAR(uint8, AUTOMATIC) RateGroup_Cnt_T_u08,                                               
                                                VAR(boolean, AUTOMATIC) IniTiOutChkCmpl_Cnt_T_logl);

static FUNC(ImcArbnRxRollgCntrSts1, IMCARBN_APPL_CODE) RxFrmVldChk( P2VAR(uint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataBuf_Cnt_T_u08,
                                                                    P2VAR(uint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) FrmFltCntr_Cnt_T_u08,
                                                                    VAR(ImcArbnRxDataSrc1, AUTOMATIC) SigGroupDataSrc_Cnt_T_enum,
                                                                    VAR(uint8, AUTOMATIC) RateGroup_Cnt_T_u08,
                                                                    VAR(uint8, AUTOMATIC) SigGroup_Cnt_T_u08,
                                                                    VAR(boolean, AUTOMATIC) PrimSrcOnlySigGroup_Cnt_T_logl,
                                                                    VAR(boolean, AUTOMATIC) IniTiOutChkCmpl_Cnt_T_logl);                                                         
                                                    
static FUNC(ImcArbnRxRollgCntrSts1, IMCARBN_APPL_CODE)  VldtRollgCntr(  VAR(ImcArbnRxDataSrc1, AUTOMATIC) SigGroupDataSrc_Cnt_T_enum,
                                                                        VAR(uint8, AUTOMATIC) RateGroup_Cnt_T_u08,
                                                                        VAR(uint8, AUTOMATIC) SigGroup_Cnt_T_u08,
                                                                        VAR(uint8, AUTOMATIC) PrsntRollgCntr_Cnt_T_u08);
                                                        
static FUNC(ImcArbnRxRollgCntrSts1, AP_IMCARBR_APPL_CODE) VldtRollgCntrAlg( VAR(ImcArbnRxDataSrc1, AUTOMATIC) SigGroupDataSrc_Cnt_T_enum,
                                                                            VAR(uint8, AUTOMATIC) RateGroup_Cnt_T_u08,
                                                                            VAR(uint8, AUTOMATIC) SigGroup_Cnt_T_u08,
                                                                            VAR(uint8, AUTOMATIC) PrsntRollgCntr_Cnt_T_u08);
                                                        
static FUNC(uint32, IMCARBN_APPL_CODE) CreatSigGroupData(SigGroupRec1 const* SigGroup_T_rec);

static FUNC(void, IMCARBN_APPL_CODE)  DecodSigGroupData(   SigGroupRec1 const* SigGroup_T_rec,
                                                           VAR(uint32, AUTOMATIC) SigGroupRxData_Uls_T_u32, 
                                                           VAR(ImcArbnRxExtdSts1, AUTOMATIC) RxSigExtdSts1_Cnt_T_enum,
                                                           VAR(ImcArbnRxDataSrc1, AUTOMATIC) RxDataSrc_Cnt_T_enum);

static FUNC(boolean, AP_IMCARBR_APPL_CODE)  RollgCntrSeqChk( VAR(uint8, AUTOMATIC) PrsntRollgCntr_Cnt_T_u08,
                                                             VAR(uint8, AUTOMATIC) AntcptdRollCntr_Cnt_T_u08, 
                                                             VAR(uint8, AUTOMATIC) UpprDriftLim_Cnt_T_u08,
                                                             VAR(uint8, AUTOMATIC) LwrDriftLim_Cnt_T_u08);

static FUNC(uint8, IMCARBN_APPL_CODE) GetImcFltParamByte(void);

static FUNC(ImcArbnRxSts1, IMCARBN_APPL_CODE)  GetImcSigSts(VAR(ImcArbnRxExtdSts1, AUTOMATIC) SigExtdSts_Cnt_T_enum);

static FUNC(ImcArbnRxExtdSts1, IMCARBN_APPL_CODE)  EvlSigGroupNeverRxdMissSts(VAR(uint8, AUTOMATIC) RateGroup_Cnt_T_u08,VAR(uint8, AUTOMATIC) SigGroup_Cnt_T_u08);

static FUNC(void, IMCARBN_APPL_CODE)  OvrdSigStsDurgStrtUp(VAR(uint8, AUTOMATIC) SigGroup_Cnt_T_u08,VAR(boolean, AUTOMATIC) IniTiOutChkCmpl_Cnt_T_logl);

static FUNC(boolean, IMCARBN_APPL_CODE)  NoDataRxd( VAR(uint8, AUTOMATIC) StrtByte_Cnt_T_u08,VAR(uint8, AUTOMATIC) EndByte_Cnt_T_u08);

static FUNC(void, IMCARBN_APPL_CODE) NoDataHndlg(   VAR(ImcArbnRxExtdSts1, AUTOMATIC) RxSigExtdSts1_Cnt_T_enum,
                                                    VAR(ImcArbnRxDataSrc1, AUTOMATIC) RxDataSrc_Cnt_T_enum,
                                                    VAR(uint8, AUTOMATIC) RateGroup_Cnt_T_u08, 
                                                    VAR(uint8, AUTOMATIC) SigGroup_Cnt_T_u08, 
                                                    VAR(boolean, AUTOMATIC) PrimSrcNoDataRxd_Cnt_T_logl,
                                                    VAR(boolean, AUTOMATIC) SecdrySrcNoDataRxd_Cnt_T_logl);
                                                    
static FUNC(void, IMCARBN_APPL_CODE) ImcChResyncHndlg( VAR(ImcArbnRxDataSrc1, AUTOMATIC)  SigGroupDataSrc_Cnt_T_enum,
                                                       VAR(uint8, AUTOMATIC) SigGroup_Cnt_T_u08,
                                                       VAR(uint8, AUTOMATIC) PrsntRollgCntr_Cnt_T_u08);

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
 * ImcArbnRxExtdSts1: Integer in interval [0...255]
 * ImcArbnRxExtdSts2: Integer in interval [0...255]
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * sint16: Integer in interval [-32768...32767] (standard type)
 * sint32: Integer in interval [-2147483648...2147483647] (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * ImcArbnRxSts1: Enumeration of integer in interval [0...255] with enumerators
 *   IMCARBNRXSTS_NODATA (0U)
 *   IMCARBNRXSTS_VLD (1U)
 *   IMCARBNRXSTS_INVLD (2U)
 * NtcNr1: Enumeration of integer in interval [0...65535] with enumerators
 *   NTCNR_0X001 (1U)
 *   NTCNR_0X002 (2U)
 *   NTCNR_0X003 (3U)
 *   NTCNR_0X004 (4U)
 *   NTCNR_0X005 (5U)
 *   NTCNR_0X006 (6U)
 *   NTCNR_0X007 (7U)
 *   NTCNR_0X008 (8U)
 *   NTCNR_0X009 (9U)
 *   NTCNR_0X00A (10U)
 *   NTCNR_0X00B (11U)
 *   NTCNR_0X00C (12U)
 *   NTCNR_0X00D (13U)
 *   NTCNR_0X00E (14U)
 *   NTCNR_0X00F (15U)
 *   NTCNR_0X010 (16U)
 *   NTCNR_0X011 (17U)
 *   NTCNR_0X012 (18U)
 *   NTCNR_0X013 (19U)
 *   NTCNR_0X014 (20U)
 *   NTCNR_0X015 (21U)
 *   NTCNR_0X016 (22U)
 *   NTCNR_0X017 (23U)
 *   NTCNR_0X018 (24U)
 *   NTCNR_0X019 (25U)
 *   NTCNR_0X01A (26U)
 *   NTCNR_0X01B (27U)
 *   NTCNR_0X01C (28U)
 *   NTCNR_0X01D (29U)
 *   NTCNR_0X01E (30U)
 *   NTCNR_0X01F (31U)
 *   NTCNR_0X020 (32U)
 *   NTCNR_0X021 (33U)
 *   NTCNR_0X022 (34U)
 *   NTCNR_0X023 (35U)
 *   NTCNR_0X024 (36U)
 *   NTCNR_0X025 (37U)
 *   NTCNR_0X026 (38U)
 *   NTCNR_0X027 (39U)
 *   NTCNR_0X028 (40U)
 *   NTCNR_0X029 (41U)
 *   NTCNR_0X02A (42U)
 *   NTCNR_0X02B (43U)
 *   NTCNR_0X02C (44U)
 *   NTCNR_0X02D (45U)
 *   NTCNR_0X02E (46U)
 *   NTCNR_0X02F (47U)
 *   NTCNR_0X030 (48U)
 *   NTCNR_0X031 (49U)
 *   NTCNR_0X032 (50U)
 *   NTCNR_0X033 (51U)
 *   NTCNR_0X034 (52U)
 *   NTCNR_0X035 (53U)
 *   NTCNR_0X036 (54U)
 *   NTCNR_0X037 (55U)
 *   NTCNR_0X038 (56U)
 *   NTCNR_0X039 (57U)
 *   NTCNR_0X03A (58U)
 *   NTCNR_0X03B (59U)
 *   NTCNR_0X03C (60U)
 *   NTCNR_0X03D (61U)
 *   NTCNR_0X03E (62U)
 *   NTCNR_0X03F (63U)
 *   NTCNR_0X040 (64U)
 *   NTCNR_0X041 (65U)
 *   NTCNR_0X042 (66U)
 *   NTCNR_0X043 (67U)
 *   NTCNR_0X044 (68U)
 *   NTCNR_0X045 (69U)
 *   NTCNR_0X046 (70U)
 *   NTCNR_0X047 (71U)
 *   NTCNR_0X048 (72U)
 *   NTCNR_0X049 (73U)
 *   NTCNR_0X04A (74U)
 *   NTCNR_0X04B (75U)
 *   NTCNR_0X04C (76U)
 *   NTCNR_0X04D (77U)
 *   NTCNR_0X04E (78U)
 *   NTCNR_0X04F (79U)
 *   NTCNR_0X050 (80U)
 *   NTCNR_0X051 (81U)
 *   NTCNR_0X052 (82U)
 *   NTCNR_0X053 (83U)
 *   NTCNR_0X054 (84U)
 *   NTCNR_0X055 (85U)
 *   NTCNR_0X056 (86U)
 *   NTCNR_0X057 (87U)
 *   NTCNR_0X058 (88U)
 *   NTCNR_0X059 (89U)
 *   NTCNR_0X05A (90U)
 *   NTCNR_0X05B (91U)
 *   NTCNR_0X05C (92U)
 *   NTCNR_0X05D (93U)
 *   NTCNR_0X05E (94U)
 *   NTCNR_0X05F (95U)
 *   NTCNR_0X060 (96U)
 *   NTCNR_0X061 (97U)
 *   NTCNR_0X062 (98U)
 *   NTCNR_0X063 (99U)
 *   NTCNR_0X064 (100U)
 *   NTCNR_0X065 (101U)
 *   NTCNR_0X066 (102U)
 *   NTCNR_0X067 (103U)
 *   NTCNR_0X068 (104U)
 *   NTCNR_0X069 (105U)
 *   NTCNR_0X06A (106U)
 *   NTCNR_0X06B (107U)
 *   NTCNR_0X06C (108U)
 *   NTCNR_0X06D (109U)
 *   NTCNR_0X06E (110U)
 *   NTCNR_0X06F (111U)
 *   NTCNR_0X070 (112U)
 *   NTCNR_0X071 (113U)
 *   NTCNR_0X072 (114U)
 *   NTCNR_0X073 (115U)
 *   NTCNR_0X074 (116U)
 *   NTCNR_0X075 (117U)
 *   NTCNR_0X076 (118U)
 *   NTCNR_0X077 (119U)
 *   NTCNR_0X078 (120U)
 *   NTCNR_0X079 (121U)
 *   NTCNR_0X07A (122U)
 *   NTCNR_0X07B (123U)
 *   NTCNR_0X07C (124U)
 *   NTCNR_0X07D (125U)
 *   NTCNR_0X07E (126U)
 *   NTCNR_0X07F (127U)
 *   NTCNR_0X080 (128U)
 *   NTCNR_0X081 (129U)
 *   NTCNR_0X082 (130U)
 *   NTCNR_0X083 (131U)
 *   NTCNR_0X084 (132U)
 *   NTCNR_0X085 (133U)
 *   NTCNR_0X086 (134U)
 *   NTCNR_0X087 (135U)
 *   NTCNR_0X088 (136U)
 *   NTCNR_0X089 (137U)
 *   NTCNR_0X08A (138U)
 *   NTCNR_0X08B (139U)
 *   NTCNR_0X08C (140U)
 *   NTCNR_0X08D (141U)
 *   NTCNR_0X08E (142U)
 *   NTCNR_0X08F (143U)
 *   NTCNR_0X090 (144U)
 *   NTCNR_0X091 (145U)
 *   NTCNR_0X092 (146U)
 *   NTCNR_0X093 (147U)
 *   NTCNR_0X094 (148U)
 *   NTCNR_0X095 (149U)
 *   NTCNR_0X096 (150U)
 *   NTCNR_0X097 (151U)
 *   NTCNR_0X098 (152U)
 *   NTCNR_0X099 (153U)
 *   NTCNR_0X09A (154U)
 *   NTCNR_0X09B (155U)
 *   NTCNR_0X09C (156U)
 *   NTCNR_0X09D (157U)
 *   NTCNR_0X09E (158U)
 *   NTCNR_0X09F (159U)
 *   NTCNR_0X0A0 (160U)
 *   NTCNR_0X0A1 (161U)
 *   NTCNR_0X0A2 (162U)
 *   NTCNR_0X0A3 (163U)
 *   NTCNR_0X0A4 (164U)
 *   NTCNR_0X0A5 (165U)
 *   NTCNR_0X0A6 (166U)
 *   NTCNR_0X0A7 (167U)
 *   NTCNR_0X0A8 (168U)
 *   NTCNR_0X0A9 (169U)
 *   NTCNR_0X0AA (170U)
 *   NTCNR_0X0AB (171U)
 *   NTCNR_0X0AC (172U)
 *   NTCNR_0X0AD (173U)
 *   NTCNR_0X0AE (174U)
 *   NTCNR_0X0AF (175U)
 *   NTCNR_0X0B0 (176U)
 *   NTCNR_0X0B1 (177U)
 *   NTCNR_0X0B2 (178U)
 *   NTCNR_0X0B3 (179U)
 *   NTCNR_0X0B4 (180U)
 *   NTCNR_0X0B5 (181U)
 *   NTCNR_0X0B6 (182U)
 *   NTCNR_0X0B7 (183U)
 *   NTCNR_0X0B8 (184U)
 *   NTCNR_0X0B9 (185U)
 *   NTCNR_0X0BA (186U)
 *   NTCNR_0X0BB (187U)
 *   NTCNR_0X0BC (188U)
 *   NTCNR_0X0BD (189U)
 *   NTCNR_0X0BE (190U)
 *   NTCNR_0X0BF (191U)
 *   NTCNR_0X0C0 (192U)
 *   NTCNR_0X0C1 (193U)
 *   NTCNR_0X0C2 (194U)
 *   NTCNR_0X0C3 (195U)
 *   NTCNR_0X0C4 (196U)
 *   NTCNR_0X0C5 (197U)
 *   NTCNR_0X0C6 (198U)
 *   NTCNR_0X0C7 (199U)
 *   NTCNR_0X0C8 (200U)
 *   NTCNR_0X0C9 (201U)
 *   NTCNR_0X0CA (202U)
 *   NTCNR_0X0CB (203U)
 *   NTCNR_0X0CC (204U)
 *   NTCNR_0X0CD (205U)
 *   NTCNR_0X0CE (206U)
 *   NTCNR_0X0CF (207U)
 *   NTCNR_0X0D0 (208U)
 *   NTCNR_0X0D1 (209U)
 *   NTCNR_0X0D2 (210U)
 *   NTCNR_0X0D3 (211U)
 *   NTCNR_0X0D4 (212U)
 *   NTCNR_0X0D5 (213U)
 *   NTCNR_0X0D6 (214U)
 *   NTCNR_0X0D7 (215U)
 *   NTCNR_0X0D8 (216U)
 *   NTCNR_0X0D9 (217U)
 *   NTCNR_0X0DA (218U)
 *   NTCNR_0X0DB (219U)
 *   NTCNR_0X0DC (220U)
 *   NTCNR_0X0DD (221U)
 *   NTCNR_0X0DE (222U)
 *   NTCNR_0X0DF (223U)
 *   NTCNR_0X0E0 (224U)
 *   NTCNR_0X0E1 (225U)
 *   NTCNR_0X0E2 (226U)
 *   NTCNR_0X0E3 (227U)
 *   NTCNR_0X0E4 (228U)
 *   NTCNR_0X0E5 (229U)
 *   NTCNR_0X0E6 (230U)
 *   NTCNR_0X0E7 (231U)
 *   NTCNR_0X0E8 (232U)
 *   NTCNR_0X0E9 (233U)
 *   NTCNR_0X0EA (234U)
 *   NTCNR_0X0EB (235U)
 *   NTCNR_0X0EC (236U)
 *   NTCNR_0X0ED (237U)
 *   NTCNR_0X0EE (238U)
 *   NTCNR_0X0EF (239U)
 *   NTCNR_0X0F0 (240U)
 *   NTCNR_0X0F1 (241U)
 *   NTCNR_0X0F2 (242U)
 *   NTCNR_0X0F3 (243U)
 *   NTCNR_0X0F4 (244U)
 *   NTCNR_0X0F5 (245U)
 *   NTCNR_0X0F6 (246U)
 *   NTCNR_0X0F7 (247U)
 *   NTCNR_0X0F8 (248U)
 *   NTCNR_0X0F9 (249U)
 *   NTCNR_0X0FA (250U)
 *   NTCNR_0X0FB (251U)
 *   NTCNR_0X0FC (252U)
 *   NTCNR_0X0FD (253U)
 *   NTCNR_0X0FE (254U)
 *   NTCNR_0X0FF (255U)
 *   NTCNR_0X100 (256U)
 *   NTCNR_0X101 (257U)
 *   NTCNR_0X102 (258U)
 *   NTCNR_0X103 (259U)
 *   NTCNR_0X104 (260U)
 *   NTCNR_0X105 (261U)
 *   NTCNR_0X106 (262U)
 *   NTCNR_0X107 (263U)
 *   NTCNR_0X108 (264U)
 *   NTCNR_0X109 (265U)
 *   NTCNR_0X10A (266U)
 *   NTCNR_0X10B (267U)
 *   NTCNR_0X10C (268U)
 *   NTCNR_0X10D (269U)
 *   NTCNR_0X10E (270U)
 *   NTCNR_0X10F (271U)
 *   NTCNR_0X110 (272U)
 *   NTCNR_0X111 (273U)
 *   NTCNR_0X112 (274U)
 *   NTCNR_0X113 (275U)
 *   NTCNR_0X114 (276U)
 *   NTCNR_0X115 (277U)
 *   NTCNR_0X116 (278U)
 *   NTCNR_0X117 (279U)
 *   NTCNR_0X118 (280U)
 *   NTCNR_0X119 (281U)
 *   NTCNR_0X11A (282U)
 *   NTCNR_0X11B (283U)
 *   NTCNR_0X11C (284U)
 *   NTCNR_0X11D (285U)
 *   NTCNR_0X11E (286U)
 *   NTCNR_0X11F (287U)
 *   NTCNR_0X120 (288U)
 *   NTCNR_0X121 (289U)
 *   NTCNR_0X122 (290U)
 *   NTCNR_0X123 (291U)
 *   NTCNR_0X124 (292U)
 *   NTCNR_0X125 (293U)
 *   NTCNR_0X126 (294U)
 *   NTCNR_0X127 (295U)
 *   NTCNR_0X128 (296U)
 *   NTCNR_0X129 (297U)
 *   NTCNR_0X12A (298U)
 *   NTCNR_0X12B (299U)
 *   NTCNR_0X12C (300U)
 *   NTCNR_0X12D (301U)
 *   NTCNR_0X12E (302U)
 *   NTCNR_0X12F (303U)
 *   NTCNR_0X130 (304U)
 *   NTCNR_0X131 (305U)
 *   NTCNR_0X132 (306U)
 *   NTCNR_0X133 (307U)
 *   NTCNR_0X134 (308U)
 *   NTCNR_0X135 (309U)
 *   NTCNR_0X136 (310U)
 *   NTCNR_0X137 (311U)
 *   NTCNR_0X138 (312U)
 *   NTCNR_0X139 (313U)
 *   NTCNR_0X13A (314U)
 *   NTCNR_0X13B (315U)
 *   NTCNR_0X13C (316U)
 *   NTCNR_0X13D (317U)
 *   NTCNR_0X13E (318U)
 *   NTCNR_0X13F (319U)
 *   NTCNR_0X140 (320U)
 *   NTCNR_0X141 (321U)
 *   NTCNR_0X142 (322U)
 *   NTCNR_0X143 (323U)
 *   NTCNR_0X144 (324U)
 *   NTCNR_0X145 (325U)
 *   NTCNR_0X146 (326U)
 *   NTCNR_0X147 (327U)
 *   NTCNR_0X148 (328U)
 *   NTCNR_0X149 (329U)
 *   NTCNR_0X14A (330U)
 *   NTCNR_0X14B (331U)
 *   NTCNR_0X14C (332U)
 *   NTCNR_0X14D (333U)
 *   NTCNR_0X14E (334U)
 *   NTCNR_0X14F (335U)
 *   NTCNR_0X150 (336U)
 *   NTCNR_0X151 (337U)
 *   NTCNR_0X152 (338U)
 *   NTCNR_0X153 (339U)
 *   NTCNR_0X154 (340U)
 *   NTCNR_0X155 (341U)
 *   NTCNR_0X156 (342U)
 *   NTCNR_0X157 (343U)
 *   NTCNR_0X158 (344U)
 *   NTCNR_0X159 (345U)
 *   NTCNR_0X15A (346U)
 *   NTCNR_0X15B (347U)
 *   NTCNR_0X15C (348U)
 *   NTCNR_0X15D (349U)
 *   NTCNR_0X15E (350U)
 *   NTCNR_0X15F (351U)
 *   NTCNR_0X160 (352U)
 *   NTCNR_0X161 (353U)
 *   NTCNR_0X162 (354U)
 *   NTCNR_0X163 (355U)
 *   NTCNR_0X164 (356U)
 *   NTCNR_0X165 (357U)
 *   NTCNR_0X166 (358U)
 *   NTCNR_0X167 (359U)
 *   NTCNR_0X168 (360U)
 *   NTCNR_0X169 (361U)
 *   NTCNR_0X16A (362U)
 *   NTCNR_0X16B (363U)
 *   NTCNR_0X16C (364U)
 *   NTCNR_0X16D (365U)
 *   NTCNR_0X16E (366U)
 *   NTCNR_0X16F (367U)
 *   NTCNR_0X170 (368U)
 *   NTCNR_0X171 (369U)
 *   NTCNR_0X172 (370U)
 *   NTCNR_0X173 (371U)
 *   NTCNR_0X174 (372U)
 *   NTCNR_0X175 (373U)
 *   NTCNR_0X176 (374U)
 *   NTCNR_0X177 (375U)
 *   NTCNR_0X178 (376U)
 *   NTCNR_0X179 (377U)
 *   NTCNR_0X17A (378U)
 *   NTCNR_0X17B (379U)
 *   NTCNR_0X17C (380U)
 *   NTCNR_0X17D (381U)
 *   NTCNR_0X17E (382U)
 *   NTCNR_0X17F (383U)
 *   NTCNR_0X180 (384U)
 *   NTCNR_0X181 (385U)
 *   NTCNR_0X182 (386U)
 *   NTCNR_0X183 (387U)
 *   NTCNR_0X184 (388U)
 *   NTCNR_0X185 (389U)
 *   NTCNR_0X186 (390U)
 *   NTCNR_0X187 (391U)
 *   NTCNR_0X188 (392U)
 *   NTCNR_0X189 (393U)
 *   NTCNR_0X18A (394U)
 *   NTCNR_0X18B (395U)
 *   NTCNR_0X18C (396U)
 *   NTCNR_0X18D (397U)
 *   NTCNR_0X18E (398U)
 *   NTCNR_0X18F (399U)
 *   NTCNR_0X190 (400U)
 *   NTCNR_0X191 (401U)
 *   NTCNR_0X192 (402U)
 *   NTCNR_0X193 (403U)
 *   NTCNR_0X194 (404U)
 *   NTCNR_0X195 (405U)
 *   NTCNR_0X196 (406U)
 *   NTCNR_0X197 (407U)
 *   NTCNR_0X198 (408U)
 *   NTCNR_0X199 (409U)
 *   NTCNR_0X19A (410U)
 *   NTCNR_0X19B (411U)
 *   NTCNR_0X19C (412U)
 *   NTCNR_0X19D (413U)
 *   NTCNR_0X19E (414U)
 *   NTCNR_0X19F (415U)
 *   NTCNR_0X1A0 (416U)
 *   NTCNR_0X1A1 (417U)
 *   NTCNR_0X1A2 (418U)
 *   NTCNR_0X1A3 (419U)
 *   NTCNR_0X1A4 (420U)
 *   NTCNR_0X1A5 (421U)
 *   NTCNR_0X1A6 (422U)
 *   NTCNR_0X1A7 (423U)
 *   NTCNR_0X1A8 (424U)
 *   NTCNR_0X1A9 (425U)
 *   NTCNR_0X1AA (426U)
 *   NTCNR_0X1AB (427U)
 *   NTCNR_0X1AC (428U)
 *   NTCNR_0X1AD (429U)
 *   NTCNR_0X1AE (430U)
 *   NTCNR_0X1AF (431U)
 *   NTCNR_0X1B0 (432U)
 *   NTCNR_0X1B1 (433U)
 *   NTCNR_0X1B2 (434U)
 *   NTCNR_0X1B3 (435U)
 *   NTCNR_0X1B4 (436U)
 *   NTCNR_0X1B5 (437U)
 *   NTCNR_0X1B6 (438U)
 *   NTCNR_0X1B7 (439U)
 *   NTCNR_0X1B8 (440U)
 *   NTCNR_0X1B9 (441U)
 *   NTCNR_0X1BA (442U)
 *   NTCNR_0X1BB (443U)
 *   NTCNR_0X1BC (444U)
 *   NTCNR_0X1BD (445U)
 *   NTCNR_0X1BE (446U)
 *   NTCNR_0X1BF (447U)
 *   NTCNR_0X1C0 (448U)
 *   NTCNR_0X1C1 (449U)
 *   NTCNR_0X1C2 (450U)
 *   NTCNR_0X1C3 (451U)
 *   NTCNR_0X1C4 (452U)
 *   NTCNR_0X1C5 (453U)
 *   NTCNR_0X1C6 (454U)
 *   NTCNR_0X1C7 (455U)
 *   NTCNR_0X1C8 (456U)
 *   NTCNR_0X1C9 (457U)
 *   NTCNR_0X1CA (458U)
 *   NTCNR_0X1CB (459U)
 *   NTCNR_0X1CC (460U)
 *   NTCNR_0X1CD (461U)
 *   NTCNR_0X1CE (462U)
 *   NTCNR_0X1CF (463U)
 *   NTCNR_0X1D0 (464U)
 *   NTCNR_0X1D1 (465U)
 *   NTCNR_0X1D2 (466U)
 *   NTCNR_0X1D3 (467U)
 *   NTCNR_0X1D4 (468U)
 *   NTCNR_0X1D5 (469U)
 *   NTCNR_0X1D6 (470U)
 *   NTCNR_0X1D7 (471U)
 *   NTCNR_0X1D8 (472U)
 *   NTCNR_0X1D9 (473U)
 *   NTCNR_0X1DA (474U)
 *   NTCNR_0X1DB (475U)
 *   NTCNR_0X1DC (476U)
 *   NTCNR_0X1DD (477U)
 *   NTCNR_0X1DE (478U)
 *   NTCNR_0X1DF (479U)
 *   NTCNR_0X1E0 (480U)
 *   NTCNR_0X1E1 (481U)
 *   NTCNR_0X1E2 (482U)
 *   NTCNR_0X1E3 (483U)
 *   NTCNR_0X1E4 (484U)
 *   NTCNR_0X1E5 (485U)
 *   NTCNR_0X1E6 (486U)
 *   NTCNR_0X1E7 (487U)
 *   NTCNR_0X1E8 (488U)
 *   NTCNR_0X1E9 (489U)
 *   NTCNR_0X1EA (490U)
 *   NTCNR_0X1EB (491U)
 *   NTCNR_0X1EC (492U)
 *   NTCNR_0X1ED (493U)
 *   NTCNR_0X1EE (494U)
 *   NTCNR_0X1EF (495U)
 *   NTCNR_0X1F0 (496U)
 *   NTCNR_0X1F1 (497U)
 *   NTCNR_0X1F2 (498U)
 *   NTCNR_0X1F3 (499U)
 *   NTCNR_0X1F4 (500U)
 *   NTCNR_0X1F5 (501U)
 *   NTCNR_0X1F6 (502U)
 *   NTCNR_0X1F7 (503U)
 *   NTCNR_0X1F8 (504U)
 *   NTCNR_0X1F9 (505U)
 *   NTCNR_0X1FA (506U)
 *   NTCNR_0X1FB (507U)
 *   NTCNR_0X1FC (508U)
 *   NTCNR_0X1FD (509U)
 *   NTCNR_0X1FE (510U)
 *   NTCNR_0X1FF (511U)
 * NtcSts1: Enumeration of integer in interval [0...255] with enumerators
 *   NTCSTS_PASSD (0U)
 *   NTCSTS_FAILD (1U)
 *   NTCSTS_PREPASSD (2U)
 *   NTCSTS_PREFAILD (3U)
 *
 * Array Types:
 * ============
 * Ary1D_ImcArbnRxDataSrc2_ImcArbnA: Array with 65535 element(s) of type ImcArbnRxDataSrc2
 * Ary1D_ImcArbnRxDataSrc2_ImcArbnB: Array with 65535 element(s) of type ImcArbnRxDataSrc2
 * Ary1D_ImrArbnRxExtdSts2_ImcArbnA: Array with 65535 element(s) of type ImcArbnRxExtdSts2
 * Ary1D_logl_ImcArbnA: Array with 65535 element(s) of type boolean
 * Ary1D_u32_ImcArbnA: Array with 65535 element(s) of type uint32
 * Ary1D_u8_2: Array with 2 element(s) of type uint8
 * Ary1D_u8_3: Array with 3 element(s) of type uint8
 * Ary1D_u8_8: Array with 8 element(s) of type uint8
 * Ary1D_u8_ImcArbnA: Array with 8 element(s) of type uint8
 * Ary1D_u8_ImcArbnB: Array with 65535 element(s) of type uint8
 * Ary2D_u8_2_2: Array with 2 element(s) of type Ary1D_u8_2
 * Ary2D_u8_ImcArbnA: Array with 65535 element(s) of type Ary1D_u8_ImcArbnA
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_ImcEcuComStrtTiRef(void)
 *   uint8 *Rte_Pim_FrmFltCntr100MilliSec(void)
 *     Returnvalue: uint8* is of type Ary2D_u8_2_2
 *   uint8 *Rte_Pim_FrmFltCntr10MilliSec(void)
 *     Returnvalue: uint8* is of type Ary2D_u8_2_2
 *   uint8 *Rte_Pim_FrmFltCntr2MilliSec(void)
 *     Returnvalue: uint8* is of type Ary2D_u8_2_2
 *   uint8 *Rte_Pim_PrevRollgCntrRxd(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_ImcArbnB
 *   uint8 *Rte_Pim_PrimSrcResyncCntr(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_ImcArbnB
 *   uint8 *Rte_Pim_PrimSrcRollgCntrResync(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_ImcArbnB
 *   uint8 *Rte_Pim_PrimSrcRxBuf(void)
 *     Returnvalue: uint8* is of type Ary2D_u8_ImcArbnA
 *   boolean *Rte_Pim_ResyncOnPrimActv(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_ImcArbnA
 *   boolean *Rte_Pim_ResyncOnSecdryActv(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_ImcArbnA
 *   uint8 *Rte_Pim_RollgCntr(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_3
 *   uint32 *Rte_Pim_RxdSigData(void)
 *     Returnvalue: uint32* is of type Ary1D_u32_ImcArbnA
 *   ImcArbnRxExtdSts2 *Rte_Pim_RxdSigDataExtdSts(void)
 *     Returnvalue: ImcArbnRxExtdSts2* is of type Ary1D_ImrArbnRxExtdSts2_ImcArbnA
 *   ImcArbnRxDataSrc2 *Rte_Pim_RxdSigDataSrc(void)
 *     Returnvalue: ImcArbnRxDataSrc2* is of type Ary1D_ImcArbnRxDataSrc2_ImcArbnB
 *   uint8 *Rte_Pim_SecdrySrcResyncCntr(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_ImcArbnB
 *   uint8 *Rte_Pim_SecdrySrcRollgCntrResync(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_ImcArbnB
 *   uint8 *Rte_Pim_SecdrySrcRxBuf(void)
 *     Returnvalue: uint8* is of type Ary2D_u8_ImcArbnA
 *   ImcArbnRxDataSrc2 *Rte_Pim_SigGroupDataSrc(void)
 *     Returnvalue: ImcArbnRxDataSrc2* is of type Ary1D_ImcArbnRxDataSrc2_ImcArbnA
 *   uint8 *Rte_Pim_SigGroupMissCntr(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_ImcArbnB
 *   boolean *Rte_Pim_SigGroupNeverRxd(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_ImcArbnA
 *   uint8 *Rte_Pim_SigGroupSkipCntr(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_ImcArbnB
 *   uint8 *Rte_Pim_TxBuf(void)
 *     Returnvalue: uint8* is of type Ary2D_u8_ImcArbnA
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint32 Rte_Prm_ImcArbnEcuIninTiOutThd_Val(void)
 *   uint8 Rte_Prm_ImcArbnFrmFltThd_Val(void)
 *
 *********************************************************************************************************************/


#define ImcArbn_START_SEC_CODE
#include "ImcArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcDataExtdSts_f32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcDataExtdSts_f32>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcDataExtdSts_f32_Oper(uint16 SigId_Arg, float32 *Data_Arg, ImcArbnRxExtdSts1 *Sts_Arg, ImcArbnRxDataSrc1 *DataSrc_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcDataExtdSts_f32_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcDataExtdSts_f32_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcDataExtdSts_f32_Oper(uint16 SigId_Arg, P2VAR(float32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxExtdSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg, P2VAR(ImcArbnRxDataSrc1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataSrc_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcDataExtdSts_f32_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08; 

    if(( SigId_Arg < IMCARBN_TOTALNROFSIG_CNT_U16) && 
        (Data_Arg != NULL_PTR) &&
        (Sts_Arg != NULL_PTR) &&
        (DataSrc_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Read Signal data, Status, Data Source from respective buffers */
        *Data_Arg = *((float32*)&PimRxdSigData_u32[SigId_Arg]);
        *Sts_Arg = PimRxdSigDataExtdSts_enum[SigId_Arg];
        *DataSrc_Arg = PimRxdSigDataSrc_enum[SigId_Arg];
        Rte_Exit_ExclsvAr2SigDataBuf();
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;        
        #if (NXTRDET_IMCARBN == STD_ON)
        if(SigId_Arg != SETNODETSIGID_CNT_U16)
        {
            (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 0U, 0U);            
        }
        #endif         
    }
    
    return(ErrCod_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcDataExtdSts_logl_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcDataExtdSts_logl>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcDataExtdSts_logl_Oper(uint16 SigId_Arg, boolean *Data_Arg, ImcArbnRxExtdSts1 *Sts_Arg, ImcArbnRxDataSrc1 *DataSrc_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcDataExtdSts_logl_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcDataExtdSts_logl_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcDataExtdSts_logl_Oper(uint16 SigId_Arg, P2VAR(boolean, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxExtdSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg, P2VAR(ImcArbnRxDataSrc1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataSrc_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcDataExtdSts_logl_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08; 

    if(( SigId_Arg < IMCARBN_TOTALNROFSIG_CNT_U16) && 
        (Data_Arg != NULL_PTR) &&
        (Sts_Arg != NULL_PTR) &&
        (DataSrc_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Read Signal data, Status, Data Source from respective buffers */
        *Data_Arg = (boolean)PimRxdSigData_u32[SigId_Arg];
        *Sts_Arg = PimRxdSigDataExtdSts_enum[SigId_Arg];
        *DataSrc_Arg = PimRxdSigDataSrc_enum[SigId_Arg];
        Rte_Exit_ExclsvAr2SigDataBuf();
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;        
        #if (NXTRDET_IMCARBN == STD_ON)
        if(SigId_Arg != SETNODETSIGID_CNT_U16)
        {
            (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 1U, 0U);
        }
        #endif
    }
    
    return(ErrCod_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcDataExtdSts_s08_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcDataExtdSts_s08>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcDataExtdSts_s08_Oper(uint16 SigId_Arg, sint8 *Data_Arg, ImcArbnRxExtdSts1 *Sts_Arg, ImcArbnRxDataSrc1 *DataSrc_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcDataExtdSts_s08_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcDataExtdSts_s08_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcDataExtdSts_s08_Oper(uint16 SigId_Arg, P2VAR(sint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxExtdSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg, P2VAR(ImcArbnRxDataSrc1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataSrc_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcDataExtdSts_s08_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08; 

    if(( SigId_Arg < IMCARBN_TOTALNROFSIG_CNT_U16) && 
        (Data_Arg != NULL_PTR) &&
        (Sts_Arg != NULL_PTR) &&
        (DataSrc_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Read Signal data, Status, Data Source from respective buffers */
        *Data_Arg = (sint8)PimRxdSigData_u32[SigId_Arg];
        *Sts_Arg = PimRxdSigDataExtdSts_enum[SigId_Arg];
        *DataSrc_Arg = PimRxdSigDataSrc_enum[SigId_Arg];
        Rte_Exit_ExclsvAr2SigDataBuf();
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;        
        #if (NXTRDET_IMCARBN == STD_ON)
        if(SigId_Arg != SETNODETSIGID_CNT_U16)
        {
            (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 2U, 0U);
        }
        #endif
    }
    
    return(ErrCod_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcDataExtdSts_s16_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcDataExtdSts_s16>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcDataExtdSts_s16_Oper(uint16 SigId_Arg, sint16 *Data_Arg, ImcArbnRxExtdSts1 *Sts_Arg, ImcArbnRxDataSrc1 *DataSrc_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcDataExtdSts_s16_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcDataExtdSts_s16_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcDataExtdSts_s16_Oper(uint16 SigId_Arg, P2VAR(sint16, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxExtdSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg, P2VAR(ImcArbnRxDataSrc1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataSrc_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcDataExtdSts_s16_Oper (returns application error)
 *********************************************************************************************************************/

    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08; 

    if(( SigId_Arg < IMCARBN_TOTALNROFSIG_CNT_U16) && 
        (Data_Arg != NULL_PTR) &&
        (Sts_Arg != NULL_PTR) &&
        (DataSrc_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Read Signal data, Status, Data Source from respective buffers */
        *Data_Arg = (sint16)PimRxdSigData_u32[SigId_Arg];
        *Sts_Arg = PimRxdSigDataExtdSts_enum[SigId_Arg];
        *DataSrc_Arg = PimRxdSigDataSrc_enum[SigId_Arg];
        Rte_Exit_ExclsvAr2SigDataBuf();
        
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;        
        #if (NXTRDET_IMCARBN == STD_ON)
        if(SigId_Arg != SETNODETSIGID_CNT_U16)
        {
            (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 3U, 0U);
        }
        #endif
    }
    
    return(ErrCod_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcDataExtdSts_s32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcDataExtdSts_s32>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcDataExtdSts_s32_Oper(uint16 SigId_Arg, sint32 *Data_Arg, ImcArbnRxExtdSts1 *Sts_Arg, ImcArbnRxDataSrc1 *DataSrc_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcDataExtdSts_s32_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcDataExtdSts_s32_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcDataExtdSts_s32_Oper(uint16 SigId_Arg, P2VAR(sint32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxExtdSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg, P2VAR(ImcArbnRxDataSrc1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataSrc_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcDataExtdSts_s32_Oper (returns application error)
 *********************************************************************************************************************/


    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08; 

    if(( SigId_Arg < IMCARBN_TOTALNROFSIG_CNT_U16) && 
        (Data_Arg != NULL_PTR) &&
        (Sts_Arg != NULL_PTR) &&
        (DataSrc_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Read Signal data, Status, Data Source from respective buffers */
        *Data_Arg = (sint32)PimRxdSigData_u32[SigId_Arg];
        *Sts_Arg = PimRxdSigDataExtdSts_enum[SigId_Arg];
        *DataSrc_Arg = PimRxdSigDataSrc_enum[SigId_Arg];
        Rte_Exit_ExclsvAr2SigDataBuf();
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;        
        #if (NXTRDET_IMCARBN == STD_ON)
        if(SigId_Arg != SETNODETSIGID_CNT_U16)
        {
            (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 4U, 0U);
        }
        #endif
    }
    
    return(ErrCod_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcDataExtdSts_u08_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcDataExtdSts_u08>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcDataExtdSts_u08_Oper(uint16 SigId_Arg, uint8 *Data_Arg, ImcArbnRxExtdSts1 *Sts_Arg, ImcArbnRxDataSrc1 *DataSrc_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcDataExtdSts_u08_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcDataExtdSts_u08_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcDataExtdSts_u08_Oper(uint16 SigId_Arg, P2VAR(uint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxExtdSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg, P2VAR(ImcArbnRxDataSrc1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataSrc_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcDataExtdSts_u08_Oper (returns application error)
 *********************************************************************************************************************/

    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08; 

    if(( SigId_Arg < IMCARBN_TOTALNROFSIG_CNT_U16) && 
        (Data_Arg != NULL_PTR) &&
        (Sts_Arg != NULL_PTR) &&
        (DataSrc_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Read Signal data, Status, Data Source from respective buffers */
        *Data_Arg = (uint8)PimRxdSigData_u32[SigId_Arg];
        *Sts_Arg = PimRxdSigDataExtdSts_enum[SigId_Arg];
        *DataSrc_Arg = PimRxdSigDataSrc_enum[SigId_Arg];
        Rte_Exit_ExclsvAr2SigDataBuf();
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;        
        #if (NXTRDET_IMCARBN == STD_ON)
        if(SigId_Arg != SETNODETSIGID_CNT_U16)
        {
            (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 5U, 0U);
        }
        #endif
    }
    
    return(ErrCod_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcDataExtdSts_u16_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcDataExtdSts_u16>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcDataExtdSts_u16_Oper(uint16 SigId_Arg, uint16 *Data_Arg, ImcArbnRxExtdSts1 *Sts_Arg, ImcArbnRxDataSrc1 *DataSrc_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcDataExtdSts_u16_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcDataExtdSts_u16_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcDataExtdSts_u16_Oper(uint16 SigId_Arg, P2VAR(uint16, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxExtdSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg, P2VAR(ImcArbnRxDataSrc1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataSrc_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcDataExtdSts_u16_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08; 

    if(( SigId_Arg < IMCARBN_TOTALNROFSIG_CNT_U16) && 
        (Data_Arg != NULL_PTR) &&
        (Sts_Arg != NULL_PTR) &&
        (DataSrc_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Read Signal data, Status, Data Source from respective buffers */
        *Data_Arg = (uint16)PimRxdSigData_u32[SigId_Arg];
        *Sts_Arg = PimRxdSigDataExtdSts_enum[SigId_Arg];
        *DataSrc_Arg = PimRxdSigDataSrc_enum[SigId_Arg];
        Rte_Exit_ExclsvAr2SigDataBuf();
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;        
        #if (NXTRDET_IMCARBN == STD_ON)
        if(SigId_Arg != SETNODETSIGID_CNT_U16)
        {
            (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 6U, 0U);
        }
        #endif
    }
    
    return(ErrCod_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcDataExtdSts_u32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcDataExtdSts_u32>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcDataExtdSts_u32_Oper(uint16 SigId_Arg, uint32 *Data_Arg, ImcArbnRxExtdSts1 *Sts_Arg, ImcArbnRxDataSrc1 *DataSrc_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcDataExtdSts_u32_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcDataExtdSts_u32_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcDataExtdSts_u32_Oper(uint16 SigId_Arg, P2VAR(uint32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxExtdSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg, P2VAR(ImcArbnRxDataSrc1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataSrc_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcDataExtdSts_u32_Oper (returns application error)
 *********************************************************************************************************************/

    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08; 

    if(( SigId_Arg < IMCARBN_TOTALNROFSIG_CNT_U16) && 
        (Data_Arg != NULL_PTR) &&
        (Sts_Arg != NULL_PTR) &&
        (DataSrc_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Read Signal data, Status, Data Source from respective buffers */
        *Data_Arg = (uint32)PimRxdSigData_u32[SigId_Arg];
        *Sts_Arg = PimRxdSigDataExtdSts_enum[SigId_Arg];
        *DataSrc_Arg = PimRxdSigDataSrc_enum[SigId_Arg];
        Rte_Exit_ExclsvAr2SigDataBuf();
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;        
        #if (NXTRDET_IMCARBN == STD_ON)
        if(SigId_Arg != SETNODETSIGID_CNT_U16)
        {
            (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 7U, 0U);
        }
        #endif
    }
    
    return(ErrCod_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcData_f32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcData_f32>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcData_f32_Oper(uint16 SigId_Arg, float32 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcData_f32_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcData_f32_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcData_f32_Oper(uint16 SigId_Arg, P2VAR(float32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcData_f32_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08; 

    if(( SigId_Arg < IMCARBN_TOTALNROFSIG_CNT_U16) && 
        (Data_Arg != NULL_PTR) &&
        (Sts_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Read Signal data and map Extended Signal Status from respective buffers. 
        Convert Extended Signal Status to basic Signal status before returning it.*/
        *Data_Arg = *((float32*)&PimRxdSigData_u32[SigId_Arg]);
        *Sts_Arg = GetImcSigSts(PimRxdSigDataExtdSts_enum[SigId_Arg]);
        Rte_Exit_ExclsvAr2SigDataBuf();
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;        
        #if (NXTRDET_IMCARBN == STD_ON)
        if(SigId_Arg != SETNODETSIGID_CNT_U16)
        {
            (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 8U, 0U);
        }
        #endif
    }
    
    return(ErrCod_Cnt_T_u08);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcData_logl_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcData_logl>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcData_logl_Oper(uint16 SigId_Arg, boolean *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcData_logl_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcData_logl_Oper(uint16 SigId_Arg, P2VAR(boolean, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcData_logl_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08; 
    
    if(( SigId_Arg < IMCARBN_TOTALNROFSIG_CNT_U16) && 
        (Data_Arg != NULL_PTR) &&
        (Sts_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Read Signal data and map Extended Signal Status from respective buffers. 
        Convert Extended Signal Status to basic Signal status before returning it.*/        
        *Data_Arg = (boolean)PimRxdSigData_u32[SigId_Arg];
        *Sts_Arg = GetImcSigSts(PimRxdSigDataExtdSts_enum[SigId_Arg]);
        Rte_Exit_ExclsvAr2SigDataBuf();
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;        
        #if (NXTRDET_IMCARBN == STD_ON)
        if(SigId_Arg != SETNODETSIGID_CNT_U16)
        {
            (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 9U, 0U);
        }
        #endif
    }
    
    return(ErrCod_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcData_s08_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcData_s08>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcData_s08_Oper(uint16 SigId_Arg, sint8 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcData_s08_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcData_s08_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcData_s08_Oper(uint16 SigId_Arg, P2VAR(sint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcData_s08_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08; 

    if(( SigId_Arg < IMCARBN_TOTALNROFSIG_CNT_U16) && 
        (Data_Arg != NULL_PTR) &&
        (Sts_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Read Signal data and map Extended Signal Status from respective buffers. 
        Convert Extended Signal Status to basic Signal status before returning it.*/
        *Data_Arg = (sint8)PimRxdSigData_u32[SigId_Arg];
        *Sts_Arg = GetImcSigSts(PimRxdSigDataExtdSts_enum[SigId_Arg]);
        Rte_Exit_ExclsvAr2SigDataBuf();
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;        
        #if (NXTRDET_IMCARBN == STD_ON)
        if(SigId_Arg != SETNODETSIGID_CNT_U16)
        {
            (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 10U, 0U);
        }
        #endif
    }
    
    return(ErrCod_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcData_s16_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcData_s16>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcData_s16_Oper(uint16 SigId_Arg, sint16 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcData_s16_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcData_s16_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcData_s16_Oper(uint16 SigId_Arg, P2VAR(sint16, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcData_s16_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08; 

    if(( SigId_Arg < IMCARBN_TOTALNROFSIG_CNT_U16) && 
        (Data_Arg != NULL_PTR) &&
        (Sts_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Read Signal data and map Extended Signal Status from respective buffers. 
        Convert Extended Signal Status to basic Signal status before returning it.*/
        *Data_Arg = (sint16)PimRxdSigData_u32[SigId_Arg];
        *Sts_Arg = GetImcSigSts(PimRxdSigDataExtdSts_enum[SigId_Arg]);
        Rte_Exit_ExclsvAr2SigDataBuf();
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;        
        #if (NXTRDET_IMCARBN == STD_ON)
        if(SigId_Arg != SETNODETSIGID_CNT_U16)
        {
            (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 11U, 0U);
        }
        #endif
    }
    
    return(ErrCod_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcData_s32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcData_s32>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcData_s32_Oper(uint16 SigId_Arg, sint32 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcData_s32_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcData_s32_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcData_s32_Oper(uint16 SigId_Arg, P2VAR(sint32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcData_s32_Oper (returns application error)
 *********************************************************************************************************************/

    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08; 
   
    if(( SigId_Arg < IMCARBN_TOTALNROFSIG_CNT_U16) && 
        (Data_Arg != NULL_PTR) &&
        (Sts_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Read Signal data and map Extended Signal Status from respective buffers. 
        Convert Extended Signal Status to basic Signal status before returning it.*/
        *Data_Arg = (sint32)PimRxdSigData_u32[SigId_Arg];
        *Sts_Arg = GetImcSigSts(PimRxdSigDataExtdSts_enum[SigId_Arg]);
        Rte_Exit_ExclsvAr2SigDataBuf();
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;        
        #if (NXTRDET_IMCARBN == STD_ON)
        if(SigId_Arg != SETNODETSIGID_CNT_U16)
        {
            (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 12U, 0U);
        }
        #endif
    }
    
    return(ErrCod_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcData_u08_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcData_u08>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcData_u08_Oper(uint16 SigId_Arg, uint8 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcData_u08_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcData_u08_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcData_u08_Oper(uint16 SigId_Arg, P2VAR(uint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcData_u08_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08; 
    
    if(( SigId_Arg < IMCARBN_TOTALNROFSIG_CNT_U16) && 
        (Data_Arg != NULL_PTR) &&
        (Sts_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Read Signal data and map Extended Signal Status from respective buffers. 
        Convert Extended Signal Status to basic Signal status before returning it.*/
        *Data_Arg = (uint8)PimRxdSigData_u32[SigId_Arg];
        *Sts_Arg = GetImcSigSts(PimRxdSigDataExtdSts_enum[SigId_Arg]);
        Rte_Exit_ExclsvAr2SigDataBuf();
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;        
        #if (NXTRDET_IMCARBN == STD_ON)
        if(SigId_Arg != SETNODETSIGID_CNT_U16)
        {
            (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 13U, 0U);
        }
        #endif
    }
    
    return(ErrCod_Cnt_T_u08);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcData_u16_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcData_u16>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcData_u16_Oper(uint16 SigId_Arg, uint16 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcData_u16_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcData_u16_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcData_u16_Oper(uint16 SigId_Arg, P2VAR(uint16, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcData_u16_Oper (returns application error)
 *********************************************************************************************************************/

    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08; 
    
    if(( SigId_Arg < IMCARBN_TOTALNROFSIG_CNT_U16) && 
        (Data_Arg != NULL_PTR) &&
        (Sts_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Read Signal data and map Extended Signal Status from respective buffers. 
        Convert Extended Signal Status to basic Signal status before returning it.*/
        *Data_Arg = (uint16)PimRxdSigData_u32[SigId_Arg];
        *Sts_Arg = GetImcSigSts(PimRxdSigDataExtdSts_enum[SigId_Arg]);
        Rte_Exit_ExclsvAr2SigDataBuf();
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;        
        #if (NXTRDET_IMCARBN == STD_ON)
        if(SigId_Arg != SETNODETSIGID_CNT_U16)
        {
            (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 14U, 0U);
        }
        #endif
    }
    
    return(ErrCod_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcData_u32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcData_u32>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcData_u32_Oper(uint16 SigId_Arg, uint32 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcData_u32_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcData_u32_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcData_u32_Oper(uint16 SigId_Arg, P2VAR(uint32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSigImcData_u32_Oper (returns application error)
 *********************************************************************************************************************/

    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08; 
    
    if(( SigId_Arg < IMCARBN_TOTALNROFSIG_CNT_U16) && 
        (Data_Arg != NULL_PTR) &&
        (Sts_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Read Signal data and map Extended Signal Status from respective buffers. 
        Convert Extended Signal Status to basic Signal status before returning it.*/
        *Data_Arg = (uint32)PimRxdSigData_u32[SigId_Arg];
        *Sts_Arg = GetImcSigSts(PimRxdSigDataExtdSts_enum[SigId_Arg]);
        Rte_Exit_ExclsvAr2SigDataBuf();
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;        
        #if (NXTRDET_IMCARBN == STD_ON)
        if(SigId_Arg != SETNODETSIGID_CNT_U16)
        {
            (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 15U, 0U);
        }
        #endif
    }
    
    return(ErrCod_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetTxRateGroup_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetTxRateGroup>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetTxRateGroup_Oper(uint8 RateGroup_Arg, uint8 *Buf_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetTxRateGroup_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetTxRateGroup_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetTxRateGroup_Oper(uint8 RateGroup_Arg, P2VAR(uint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Buf_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetTxRateGroup_Oper (returns application error)
 *********************************************************************************************************************/

    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) FrmIdx_Cnt_T_u08;    
    VAR(uint8, AUTOMATIC) SigGroup_Cnt_T_u08;

    
    /* Check validity of arguments */    
    if((((RateGroup_Arg == IMCARBN_RATEGROUPID2MILLISEC_CNT_U08) && (NRSIGGROUPINRATEGROUP_CNT_U08[IMCARBN_RATEGROUPID2MILLISEC_CNT_U08] != 0U)) ||
        ((RateGroup_Arg == IMCARBN_RATEGROUPID10MILLISEC_CNT_U08)&& (NRSIGGROUPINRATEGROUP_CNT_U08[IMCARBN_RATEGROUPID10MILLISEC_CNT_U08] != 0U)) ||
        ((RateGroup_Arg == IMCARBN_RATEGROUPID100MILLISEC_CNT_U08) && (NRSIGGROUPINRATEGROUP_CNT_U08[IMCARBN_RATEGROUPID100MILLISEC_CNT_U08] != 0U))) &&
        (Buf_Arg != NULL_PTR))
    {
        Rte_Enter_ExclsvAr1DrvrTxRxBuf();
        /* Copy all signal group data of particular rate group */
        for(SigGroup_Cnt_T_u08 = RATEGROUPOFFS_CNT_U08[RateGroup_Arg] ;  SigGroup_Cnt_T_u08 < ( RATEGROUPOFFS_CNT_U08[RateGroup_Arg] + NRSIGGROUPINRATEGROUP_CNT_U08[RateGroup_Arg]); SigGroup_Cnt_T_u08++)
        {
            for(FrmIdx_Cnt_T_u08 = 0U;  FrmIdx_Cnt_T_u08 < IMCARBN_FRMSIZE_CNT_U08; FrmIdx_Cnt_T_u08++)
            {
                Buf_Arg[((SigGroup_Cnt_T_u08-RATEGROUPOFFS_CNT_U08[RateGroup_Arg])*IMCARBN_FRMSIZE_CNT_U08)+FrmIdx_Cnt_T_u08] = PimTxBuf_u08[SigGroup_Cnt_T_u08][FrmIdx_Cnt_T_u08];
            }                        
        }        
        Rte_Exit_ExclsvAr1DrvrTxRxBuf();
        ErrCod_Cnt_T_u08 = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;
        #if (NXTRDET_IMCARBN == STD_ON)
        (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 16U, 0U);
        #endif         
    }
    return (ErrCod_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetTxSigGroup_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetTxSigGroup>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetTxSigGroup_Oper(uint8 SigGroupId_Arg, uint8 *Buf_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetTxSigGroup_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetTxSigGroup_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) GetTxSigGroup_Oper(uint8 SigGroupId_Arg, P2VAR(uint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Buf_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetTxSigGroup_Oper (returns application error)
 *********************************************************************************************************************/

    VAR(Std_ReturnType, AUTOMATIC) ErrCod_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) FrmIdx_Cnt_T_u08;
    
    /* Check validity of arguments */
    if((SigGroupId_Arg < IMCARBN_TOTALNROFSIGGROUP_CNT_U08) && (Buf_Arg != NULL_PTR))
    {   
        Rte_Enter_ExclsvAr1DrvrTxRxBuf();
        /* Copy respective Signal Group data */
        for(FrmIdx_Cnt_T_u08 = 0U; FrmIdx_Cnt_T_u08 < IMCARBN_FRMSIZE_CNT_U08;  FrmIdx_Cnt_T_u08++)
        {
            Buf_Arg[FrmIdx_Cnt_T_u08] = PimTxBuf_u08[SigGroupId_Arg][FrmIdx_Cnt_T_u08];
        }
        Rte_Exit_ExclsvAr1DrvrTxRxBuf();
        ErrCod_Cnt_T_u08  = E_OK;
    }
    else
    {
        ErrCod_Cnt_T_u08 = E_NOT_OK;
        #if (NXTRDET_IMCARBN == STD_ON)
        (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 17U, 0U);
        #endif          
    }
    
    return (ErrCod_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcArbnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcArbnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ImcArbn_CODE) ImcArbnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcArbnInit1
 *********************************************************************************************************************/

   VAR(uint16, AUTOMATIC) SigIdx_Cnt_T_u16;
   VAR(uint8, AUTOMATIC) SigGroupIdx_Cnt_T_u08;
   
  (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_ImcEcuComStrtTiRef());
    
   /* Signal Group level status arrays initialization */ 
   for(SigGroupIdx_Cnt_T_u08 = 0U; SigGroupIdx_Cnt_T_u08 < IMCARBN_TOTALNROFSIGGROUP_CNT_U08; SigGroupIdx_Cnt_T_u08++)
   {
        PimSigGroupNeverRxd_logl[SigGroupIdx_Cnt_T_u08] = TRUE;
        PimSigGroupDataSrc_enum[SigGroupIdx_Cnt_T_u08] = IMCARBNRXDATASRC_NOSRC; /* Assume no source as the current data source */
        PimPrimSrcRollgCntrResync_u08[SigGroupIdx_Cnt_T_u08] = ROLLGCNTRMAXVAL_CNT_U08;
        PimSecdrySrcRollgCntrResync_u08[SigGroupIdx_Cnt_T_u08] = ROLLGCNTRMAXVAL_CNT_U08;
   } 
    /* Individual Signal initialization - Signal status to "Starting" and Signal Source as No Source */           
    for (SigIdx_Cnt_T_u16 = 0U; SigIdx_Cnt_T_u16 < IMCARBN_TOTALNROFSIG_CNT_U16; SigIdx_Cnt_T_u16++)
    {  
        PimRxdSigDataExtdSts_enum[SigIdx_Cnt_T_u16] = IMCARBNRXEXTDSTS_STRTG;  
        PimRxdSigDataSrc_enum[SigIdx_Cnt_T_u16] = IMCARBNRXDATASRC_NOSRC;        
    }   
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcArbnPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ImcTestSig1_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ImcTestSig4_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_ImcTestSig5_Val(sint16 *data)
 *   Std_ReturnType Rte_Read_ImcTestSig6_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_ImcTestSig7_Val(sint8 *data)
 *   Std_ReturnType Rte_Read_ImcTestSig8_Logl(boolean *data)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcArbnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ImcArbn_CODE) ImcArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcArbnPer1
 *********************************************************************************************************************/

#if (IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08 != 0)
    ImcArbnTx(IMCARBN_RATEGROUPID2MILLISEC_CNT_U08);
#endif


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcArbnPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ImcTestSig2_Val(uint32 *data)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcArbnPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ImcArbn_CODE) ImcArbnPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcArbnPer2
 *********************************************************************************************************************/
#if (IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08 != 0)   
    ImcArbnTx(IMCARBN_RATEGROUPID10MILLISEC_CNT_U08);
#endif


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcArbnPer3
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ImcTestSig3_Val(sint32 *data)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcArbnPer3_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ImcArbn_CODE) ImcArbnPer3(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcArbnPer3
 *********************************************************************************************************************/
#if (IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08 != 0)  
    ImcArbnTx(IMCARBN_RATEGROUPID100MILLISEC_CNT_U08);
#endif


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcArbnPer4
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_ImcArbnPer4_IniTiOutChkCmpl(void)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcArbnPer4_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ImcArbn_CODE) ImcArbnPer4(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcArbnPer4
 *********************************************************************************************************************/

#if (IMCARBN_NROF2MILLISECRATEGROUP_CNT_U08 != 0)  
    
    VAR(boolean, AUTOMATIC) IniTiOutChkCmpl_Cnt_T_logl;
    
    IniTiOutChkCmpl_Cnt_T_logl =  Rte_IrvRead_ImcArbnPer4_IniTiOutChkCmpl();                
    
    /* Update 2ms receive signals */ 
    ImcArbnRx(PimFrmFltCntr2MilliSec_u08, IMCARBN_RATEGROUPID2MILLISEC_CNT_U08,  IniTiOutChkCmpl_Cnt_T_logl);
   
#endif



/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcArbnPer5
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_ImcArbnPer5_IniTiOutChkCmpl(void)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcArbnPer5_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ImcArbn_CODE) ImcArbnPer5(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcArbnPer5
 *********************************************************************************************************************/
#if (IMCARBN_NROF10MILLISECRATEGROUP_CNT_U08 != 0)  
 /* Update 10ms receive signals */

    VAR(boolean, AUTOMATIC) IniTiOutChkCmpl_Cnt_T_logl;
    
    IniTiOutChkCmpl_Cnt_T_logl =  Rte_IrvRead_ImcArbnPer5_IniTiOutChkCmpl();                
    
    /* Update 10ms receive signals */ 
    ImcArbnRx(PimFrmFltCntr10MilliSec_u08, IMCARBN_RATEGROUPID10MILLISEC_CNT_U08,   IniTiOutChkCmpl_Cnt_T_logl); 
    
#endif
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcArbnPer6
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_ImcArbnPer6_IniTiOutChkCmpl(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_ImcArbnPer6_IniTiOutChkCmpl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcArbnPer6_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ImcArbn_CODE) ImcArbnPer6(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcArbnPer6
 *********************************************************************************************************************/

    VAR(uint32, AUTOMATIC)  ElpdIniTi_Cnt_T_u32;    
    VAR(uint8, AUTOMATIC)   FrmFltTyp_Cnt_T_u08;
    VAR(boolean, AUTOMATIC) IniTiOutChkCmpl_Cnt_T_logl;    

    /* Check initial receive time-out got over or not */
    if(Rte_IrvRead_ImcArbnPer6_IniTiOutChkCmpl() == FALSE)
    {
        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_ImcEcuComStrtTiRef(), &ElpdIniTi_Cnt_T_u32);

        /* Initial ECU Comm Time not yet elapsed */
        if(ElpdIniTi_Cnt_T_u32 >= (Rte_Prm_ImcArbnEcuIninTiOutThd_Val() * MILLISECTOMICROSECMPLR_CNT_U08))
        {          
              Rte_IrvWrite_ImcArbnPer6_IniTiOutChkCmpl(TRUE);     
        }     
    }

#if (IMCARBN_NROF100MILLISECRATEGROUP_CNT_U08 != 0)      
    /* 100ms receive cycle arbiter signals update */
    IniTiOutChkCmpl_Cnt_T_logl =  Rte_IrvRead_ImcArbnPer6_IniTiOutChkCmpl();                
    
    /* Update 100ms receive signals */ 
    ImcArbnRx(PimFrmFltCntr100MilliSec_u08,IMCARBN_RATEGROUPID100MILLISEC_CNT_U08, IniTiOutChkCmpl_Cnt_T_logl); 
#endif

   
    /* Log / Clear NTC after Initial time-out completed */
    if(IniTiOutChkCmpl_Cnt_T_logl != FALSE)
    {
        /* Get parameter byte value */
        FrmFltTyp_Cnt_T_u08 = GetImcFltParamByte();

        /* Frame faults are within threshold limit. Clear NTC */
        if(FrmFltTyp_Cnt_T_u08 == 0U)
        {
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X03F,0x0u, NTCSTS_PASSD,0U);  
        }
        else 
        {
            /* Frame faults exceeded threshold limit */
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X03F,FrmFltTyp_Cnt_T_u08, NTCSTS_FAILD,0U);
        }
    }
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetRxSigGroup_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetRxSigGroup>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SetRxSigGroup_Oper(uint8 SigGroup_Arg, ImcArbnRxDataSrc1 DataSrc_Arg, const uint8 *Buf_Arg)
 *     Argument Buf_Arg: uint8* is of type Ary1D_u8_8
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SetRxSigGroup_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetRxSigGroup_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, ImcArbn_CODE) SetRxSigGroup_Oper(uint8 SigGroup_Arg, ImcArbnRxDataSrc1 DataSrc_Arg, P2CONST(uint8, AUTOMATIC, RTE_IMCARBN_APPL_DATA) Buf_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetRxSigGroup_Oper (returns application error)
 *********************************************************************************************************************/

    VAR(Std_ReturnType, AUTOMATIC)   ErrCod_Cnt_T_u08;
    VAR(uint8, AUTOMATIC)   FrmIdx_Cnt_T_u08;

    /* Check validity of arguments */
    if((SigGroup_Arg < IMCARBN_TOTALNROFSIGGROUP_CNT_U08) && (Buf_Arg != NULL_PTR))
    {        
        PimSigGroupNeverRxd_logl[SigGroup_Arg] = FALSE;

        switch(DataSrc_Arg)
        {
            case IMCARBNRXDATASRC_PRIM:
                Rte_Enter_ExclsvAr1DrvrTxRxBuf();
                /* Copy respective Signal Group data */
                for(FrmIdx_Cnt_T_u08 = 0U; FrmIdx_Cnt_T_u08 < IMCARBN_FRMSIZE_CNT_U08;  FrmIdx_Cnt_T_u08++)
                {                    
                    PimPrimSrcRxBuf_u08[SigGroup_Arg][FrmIdx_Cnt_T_u08] = Buf_Arg[FrmIdx_Cnt_T_u08];
                    
                } 
                Rte_Exit_ExclsvAr1DrvrTxRxBuf();

                ErrCod_Cnt_T_u08  = E_OK;                  
            break;
            case IMCARBNRXDATASRC_SECDRY:
                Rte_Enter_ExclsvAr1DrvrTxRxBuf();
                /* Copy respective Signal Group data */
                for(FrmIdx_Cnt_T_u08 = 0U; FrmIdx_Cnt_T_u08 < IMCARBN_FRMSIZE_CNT_U08;  FrmIdx_Cnt_T_u08++)
                {                    
                    PimSecdrySrcRxBuf_u08[SigGroup_Arg][FrmIdx_Cnt_T_u08] = Buf_Arg[FrmIdx_Cnt_T_u08];

                }
                Rte_Exit_ExclsvAr1DrvrTxRxBuf();
                ErrCod_Cnt_T_u08  = E_OK;   
                
            break;
            default:
                /* Control should never reach here */
                ErrCod_Cnt_T_u08  = E_NOT_OK;   
                #if (NXTRDET_IMCARBN == STD_ON)
                (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 18U, 0U);
                #endif                   
            break;
        }
    }
    else
    {
        ErrCod_Cnt_T_u08  = E_NOT_OK;  
        #if (NXTRDET_IMCARBN == STD_ON)
        (void)Det_ReportError(NXTRDET_IMCARBNMODID_CNT_U16, 0U, 18U, 1U);
        #endif           
    }  

    return (ErrCod_Cnt_T_u08);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define ImcArbn_STOP_SEC_CODE
#include "ImcArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************************************************
  * Name        :   ImcArbnTx
  * Description :   Prepares Tx data for particular Rate group
  * Inputs      :   RateGroup_Cnt_T_u08
  * Outputs     :   void
  * Usage Notes :   None
******************************************************************************************************************/
static FUNC(void, IMCARBN_APPL_CODE) ImcArbnTx(VAR(uint8, AUTOMATIC) RateGroup_Cnt_T_u08 )
{
    VAR(uint32, AUTOMATIC)  SigGroupData_Uls_T_u32;  
    VAR(uint8, AUTOMATIC)  SigGroupBuf_Uls_T_u08[IMCARBN_FRMSIZE_CNT_U08] = {0U};
    VAR(uint8, AUTOMATIC)  FrmIdx_Cnt_T_u08;
    VAR(uint8, AUTOMATIC)  SigGroup_Cnt_T_u08;
    VAR(uint8, AUTOMATIC)  RollgCntr_Cnt_T_u08;
    VAR(uint8, AUTOMATIC)  PatIdn_Cnt_T_u08;

    /* Increment rolling counter for the Rate Group - Allow rolling counter only upto (not including) ROLLGCNTRMAXVAL_CNT_U08  */
    if((PimRollgCntr_u08[RateGroup_Cnt_T_u08] + 1U) ==  ROLLGCNTRMAXVAL_CNT_U08)
    {
        PimRollgCntr_u08[RateGroup_Cnt_T_u08] = 0U;         
    }
    else
    {
        PimRollgCntr_u08[RateGroup_Cnt_T_u08] = (PimRollgCntr_u08[RateGroup_Cnt_T_u08] + 1U);
    }
    
    /* Load Rolling counter and Pattern ID to local variables */
    RollgCntr_Cnt_T_u08 = PimRollgCntr_u08[RateGroup_Cnt_T_u08];
 
    PatIdn_Cnt_T_u08 = IMCARBN_PATIDN_CNT_U08;
    
    /* Fill rolling counter */
    SigGroupBuf_Uls_T_u08[STRTBYTEPOSN_CNT_U08] = (RollgCntr_Cnt_T_u08 | PatIdn_Cnt_T_u08);  
    
    for(SigGroup_Cnt_T_u08 = RATEGROUPOFFS_CNT_U08[RateGroup_Cnt_T_u08]; SigGroup_Cnt_T_u08 < ( RATEGROUPOFFS_CNT_U08[RateGroup_Cnt_T_u08] + NRSIGGROUPINRATEGROUP_CNT_U08[RateGroup_Cnt_T_u08] ); SigGroup_Cnt_T_u08++)
    {    
        /* Fill signal group */
        SigGroupBuf_Uls_T_u08[SIGGROUPIDPOSN_CNT_U08] = SIGGROUPCONFIG_REC[SigGroup_Cnt_T_u08].SigGroupId_u08;        
        /* Get 4 byte compiled signal data */
        SigGroupData_Uls_T_u32 = CreatSigGroupData(&SIGGROUPCONFIG_REC[SigGroup_Cnt_T_u08]);
      
        /* Fill signal group buffer with the collected data */
        SigGroupBuf_Uls_T_u08[DATABYTE1POS_CNT_U08] = (uint8)(SigGroupData_Uls_T_u32 >> SHIFTVALFOURTHBYTE_CNT_U08);
        SigGroupBuf_Uls_T_u08[DATABYTE2POS_CNT_U08] = (uint8)((SigGroupData_Uls_T_u32 >> SHIFTVALTHIRDBYTE_CNT_U08) & BYTEMASK_CNT_U08);
        SigGroupBuf_Uls_T_u08[DATABYTE3POS_CNT_U08] = (uint8)((SigGroupData_Uls_T_u32 >> SHIFTVALSECONDBYTE_CNT_U08)  & BYTEMASK_CNT_U08);
        SigGroupBuf_Uls_T_u08[DATABYTE4POS_CNT_U08] = (uint8)(SigGroupData_Uls_T_u32 & BYTEMASK_CNT_U08);

        /* Calculate CRC for bytes 1 to 5 and update the same at byte 6*/
        SigGroupBuf_Uls_T_u08[CRCPOSN_CNT_U08] = Crc_CalculateCRC8(&SigGroupBuf_Uls_T_u08[SIGGROUPIDPOSN_CNT_U08],NROFDATABYTEFORCRCCALC_CNT_U08,CRCCALCINITVAL_CNT_U08,TRUE); 
        

        /* Update compliments of Rolling counter and Pattern Id*/
        SigGroupBuf_Uls_T_u08[ENDBYTEPOSN_CNT_U08] = ((((uint8)(~RollgCntr_Cnt_T_u08) & ROLLGCNTRMASKVAL_CNT_U08)) | IMCARBN_PATIDNIVS_CNT_U08);

        /* Copy to transmit buffer */
        /****************** To be kept under exclusive area*/
        Rte_Enter_ExclsvAr1DrvrTxRxBuf();
        for(FrmIdx_Cnt_T_u08 = 0U; FrmIdx_Cnt_T_u08 < IMCARBN_FRMSIZE_CNT_U08; FrmIdx_Cnt_T_u08++)
        {            
            PimTxBuf_u08[SigGroup_Cnt_T_u08][FrmIdx_Cnt_T_u08] = SigGroupBuf_Uls_T_u08[FrmIdx_Cnt_T_u08];
        }    
        Rte_Exit_ExclsvAr1DrvrTxRxBuf();
        /****************** To be kept under exclusive area */
    }    
}
/*****************************************************************************************************************
  * Name        :   ImcArbnRx
  * Description :   Receives Signal Group data for all Signal Groups configured under particular Rate Group
  * Inputs      :   FrmFltCntr_Ary2D_u8, RateGroup_Cnt_T_u08, IniTiOutChkCmpl_Cnt_T_logl
  * Outputs     :   void
  * Usage Notes :   None
******************************************************************************************************************/
static FUNC(void, IMCARBN_APPL_CODE) ImcArbnRx(VAR(Ary2D_u8_2_2, AUTOMATIC) FrmFltCntr_Ary2D_u8,
                                               VAR(uint8, AUTOMATIC) RateGroup_Cnt_T_u08,                                               
                                               VAR(boolean, AUTOMATIC) IniTiOutChkCmpl_Cnt_T_logl)
 
{     
    VAR(uint32, AUTOMATIC)  SigGroupRxData_Uls_T_u32;
    VAR(ImcArbnRxDataSrc1, AUTOMATIC) RxDataSrc_Cnt_T_enum;    
    VAR(ImcArbnRxExtdSts1, AUTOMATIC) RxSigExtdSts1_Cnt_T_enum;   
    VAR(ImcArbnRxRollgCntrSts1, AUTOMATIC) FrmSts_Cnt_T_enum;
    VAR(uint8, AUTOMATIC)   PrimSrcRxSigGroupBuf_Uls_T_u08[IMCARBN_FRMSIZE_CNT_U08] = {0U};
    VAR(uint8, AUTOMATIC)   SecdrySrcRxSigGroupBuf_Uls_T_u08[IMCARBN_FRMSIZE_CNT_U08] = {0U};
    VAR(uint8, AUTOMATIC)   FrmIdx_Cnt_T_u08; 
    VAR(uint8, AUTOMATIC)   SigGroup_Cnt_T_u08;
    VAR(boolean, AUTOMATIC) PrimSrcOnlySigGroup_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) PrimSrcNoDataRxd_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) SecdrySrcNoDataRxd_Cnt_T_logl;
  
    for(SigGroup_Cnt_T_u08 = RATEGROUPOFFS_CNT_U08[RateGroup_Cnt_T_u08]; SigGroup_Cnt_T_u08 < (RATEGROUPOFFS_CNT_U08[RateGroup_Cnt_T_u08]+NRSIGGROUPINRATEGROUP_CNT_U08[RateGroup_Cnt_T_u08]); SigGroup_Cnt_T_u08++)
    { 
        /* Assume signal status as invalid */
        RxSigExtdSts1_Cnt_T_enum = IMCARBNRXEXTDSTS_DATAINVLD;
        
        /* Set Receive data source as No Source */
        RxDataSrc_Cnt_T_enum = IMCARBNRXDATASRC_NOSRC;

        /************ To be kept under exclusive area ***********/  
        /* Copy Signal Group data to local buffer and clear Rx buffer for the particular signal group */
        Rte_Enter_ExclsvAr1DrvrTxRxBuf();        
        /* Copy the Rx frame buffer content to local buffer for further processing */  
        for (FrmIdx_Cnt_T_u08 = 0U; FrmIdx_Cnt_T_u08 < IMCARBN_FRMSIZE_CNT_U08;FrmIdx_Cnt_T_u08++)
        {   
            /* Copy frame content to local buffer */
            PrimSrcRxSigGroupBuf_Uls_T_u08[FrmIdx_Cnt_T_u08] = PimPrimSrcRxBuf_u08[SigGroup_Cnt_T_u08][FrmIdx_Cnt_T_u08];
        }
        PimPrimSrcRxBuf_u08[SigGroup_Cnt_T_u08][STRTBYTEPOSN_CNT_U08] = 0U;
        PimPrimSrcRxBuf_u08[SigGroup_Cnt_T_u08][ENDBYTEPOSN_CNT_U08] = 0U;
       
        /* Copy the Rx frame buffer content to local buffer for further processing */            
        for (FrmIdx_Cnt_T_u08 = 0U; FrmIdx_Cnt_T_u08 < IMCARBN_FRMSIZE_CNT_U08;FrmIdx_Cnt_T_u08++)
        {
            /* Copy frame content to local buffer */
            SecdrySrcRxSigGroupBuf_Uls_T_u08[FrmIdx_Cnt_T_u08] = PimSecdrySrcRxBuf_u08[SigGroup_Cnt_T_u08][FrmIdx_Cnt_T_u08];
        }  
        PimSecdrySrcRxBuf_u08[SigGroup_Cnt_T_u08][STRTBYTEPOSN_CNT_U08] = 0U;
        PimSecdrySrcRxBuf_u08[SigGroup_Cnt_T_u08][ENDBYTEPOSN_CNT_U08] = 0U;  
        
        Rte_Exit_ExclsvAr1DrvrTxRxBuf();        
        /************ To be kept under exclusive area ***********/ 
        
        /*Get Status of data reception*/
        PrimSrcNoDataRxd_Cnt_T_logl   = NoDataRxd(PrimSrcRxSigGroupBuf_Uls_T_u08[STRTBYTEPOSN_CNT_U08],PrimSrcRxSigGroupBuf_Uls_T_u08[ENDBYTEPOSN_CNT_U08]);
        SecdrySrcNoDataRxd_Cnt_T_logl = NoDataRxd(SecdrySrcRxSigGroupBuf_Uls_T_u08[STRTBYTEPOSN_CNT_U08],SecdrySrcRxSigGroupBuf_Uls_T_u08[ENDBYTEPOSN_CNT_U08]);
        
        if((SecdrySrcNoDataRxd_Cnt_T_logl == FALSE) && (SIGGROUPCONFIG_REC[SigGroup_Cnt_T_u08].PrimSrcOnlySigGroup_logl == FALSE))
            /* No Data received on Secondary source OR the Signal Group is configured as Primary Source only */
        {
            /* Clear Primary source only frame flag - both IMC Channels are available */
            PrimSrcOnlySigGroup_Cnt_T_logl = FALSE;
        }
        else
        {
             /* Set Primary source only frame flag */           
            PrimSrcOnlySigGroup_Cnt_T_logl = TRUE;
        }
        /* Signal Group received on Primary source */
        if(PrimSrcNoDataRxd_Cnt_T_logl != TRUE)
        {
            /* Clear missing counter as the message is received */
            PimSigGroupMissCntr_u08[SigGroup_Cnt_T_u08] = 0U;

            /* Validate current signal group data received on Primary source path */
            FrmSts_Cnt_T_enum = RxFrmVldChk(&PrimSrcRxSigGroupBuf_Uls_T_u08[0], 
                                            &FrmFltCntr_Ary2D_u8[FRMFLTBUFIDXPRIM_CNT_U08][0],
                                            IMCARBNRXDATASRC_PRIM,         
                                            RateGroup_Cnt_T_u08,
                                            SigGroup_Cnt_T_u08,
                                            PrimSrcOnlySigGroup_Cnt_T_logl,
                                            IniTiOutChkCmpl_Cnt_T_logl);
              

            /* Signal Group received via Primary source good to process */
            if(FrmSts_Cnt_T_enum == ROLLGCNTRVLDNEWDATA)
            {
                /* Set Signal Source as Primary */
                RxDataSrc_Cnt_T_enum = IMCARBNRXDATASRC_PRIM;  
                /* Set Signal Group Source as Primary */
                PimSigGroupDataSrc_enum[SigGroup_Cnt_T_u08] = IMCARBNRXDATASRC_PRIM;
                /* Update Previous Rolling Counter value */
                PimPrevRollgCntrRxd_u08[SigGroup_Cnt_T_u08] = (PrimSrcRxSigGroupBuf_Uls_T_u08[STRTBYTEPOSN_CNT_U08] & ROLLGCNTRMASKVAL_CNT_U08);

                /* Set Signal status */
                if(PrimSrcOnlySigGroup_Cnt_T_logl == FALSE)
                {
                    /* Set Data Valid with back-up when Signal data available on Secondary source as well */
                    RxSigExtdSts1_Cnt_T_enum = IMCARBNRXEXTDSTS_DATAVLDWITHBACKUP;
                }
                else
                {
                    RxSigExtdSts1_Cnt_T_enum = IMCARBNRXEXTDSTS_DATAVLDWITHNOBACKUP;
                }                     
  
                /* Combine received Signal data into an uint32 */
                SigGroupRxData_Uls_T_u32 = (((uint32)PrimSrcRxSigGroupBuf_Uls_T_u08[DATABYTE1POS_CNT_U08]) << SHIFTVALFOURTHBYTE_CNT_U08);
                SigGroupRxData_Uls_T_u32 |= (((uint32)PrimSrcRxSigGroupBuf_Uls_T_u08[DATABYTE2POS_CNT_U08]) << SHIFTVALTHIRDBYTE_CNT_U08);
                SigGroupRxData_Uls_T_u32 |= (((uint32)PrimSrcRxSigGroupBuf_Uls_T_u08[DATABYTE3POS_CNT_U08]) << SHIFTVALSECONDBYTE_CNT_U08);
                SigGroupRxData_Uls_T_u32 |= ((uint32)PrimSrcRxSigGroupBuf_Uls_T_u08[DATABYTE4POS_CNT_U08]);
                /* Decode received Signal Group data according to Signal Group configuration and 
                fill Signal data, Extended Status, Signal source buffers */
                DecodSigGroupData( &SIGGROUPCONFIG_REC[SigGroup_Cnt_T_u08],
                                        SigGroupRxData_Uls_T_u32,
                                        RxSigExtdSts1_Cnt_T_enum,
                                        RxDataSrc_Cnt_T_enum);

            }
            /* Rolling counter valid but old data received on Primary source */
            else if(FrmSts_Cnt_T_enum == ROLLGCNTRVLDOLDDATA)
            {
                /* Set Signal Status as previous */
                RxSigExtdSts1_Cnt_T_enum = IMCARBNRXEXTDSTS_PREVDATA;
            }
            /* Rolling counter invalid */
            else
            {
                /* Set Signal status as invalid */
                RxSigExtdSts1_Cnt_T_enum = IMCARBNRXEXTDSTS_DATAINVLD;
            }
                
        }
        /* Check whether message received on Secondary source path */ 
        if((RxDataSrc_Cnt_T_enum == IMCARBNRXDATASRC_NOSRC) && 
           (PrimSrcOnlySigGroup_Cnt_T_logl == FALSE))
        {
            /* Clear missing counter as the message is received */
            PimSigGroupMissCntr_u08[SigGroup_Cnt_T_u08] = 0U;       

            /* Validate current signal group on Secondary source path */  
            FrmSts_Cnt_T_enum = RxFrmVldChk(&SecdrySrcRxSigGroupBuf_Uls_T_u08[0],
                                            &FrmFltCntr_Ary2D_u8[FRMFLTBUFIDXSECDRY_CNT_U08][0],  
                                            IMCARBNRXDATASRC_SECDRY,          
                                            RateGroup_Cnt_T_u08,
                                            SigGroup_Cnt_T_u08,
                                            PrimSrcOnlySigGroup_Cnt_T_logl,
                                            IniTiOutChkCmpl_Cnt_T_logl);
                                                  
                                                
            /* Signal Group received via Secondary source good to process */                                     
            if(FrmSts_Cnt_T_enum == ROLLGCNTRVLDNEWDATA)
            {
                /* Set data source as Secondary source  */
                RxDataSrc_Cnt_T_enum = IMCARBNRXDATASRC_SECDRY;
                /* Update Signal Group data source */
                PimSigGroupDataSrc_enum[SigGroup_Cnt_T_u08] = IMCARBNRXDATASRC_SECDRY;
                /* Update previous rolling counter */
                PimPrevRollgCntrRxd_u08[SigGroup_Cnt_T_u08] = (SecdrySrcRxSigGroupBuf_Uls_T_u08[STRTBYTEPOSN_CNT_U08] & ROLLGCNTRMASKVAL_CNT_U08);

                /* Set Signal Status as valid with no back up */
                RxSigExtdSts1_Cnt_T_enum = IMCARBNRXEXTDSTS_DATAVLDWITHNOBACKUP;  
                /* Pack received data in an uint32 */
                SigGroupRxData_Uls_T_u32 = (((uint32)SecdrySrcRxSigGroupBuf_Uls_T_u08[DATABYTE1POS_CNT_U08]) << SHIFTVALFOURTHBYTE_CNT_U08);
                SigGroupRxData_Uls_T_u32 |= (((uint32)SecdrySrcRxSigGroupBuf_Uls_T_u08[DATABYTE2POS_CNT_U08]) << SHIFTVALTHIRDBYTE_CNT_U08);
                SigGroupRxData_Uls_T_u32 |= (((uint32)SecdrySrcRxSigGroupBuf_Uls_T_u08[DATABYTE3POS_CNT_U08]) << SHIFTVALSECONDBYTE_CNT_U08);
                SigGroupRxData_Uls_T_u32 |= ((uint32)SecdrySrcRxSigGroupBuf_Uls_T_u08[DATABYTE4POS_CNT_U08]);
                /* Decode received Signal Group data according to Signal Group configuration and 
                fill Signal data, Extended Status, Signal source buffers */
                DecodSigGroupData( &SIGGROUPCONFIG_REC[SigGroup_Cnt_T_u08],
                                        SigGroupRxData_Uls_T_u32,
                                        RxSigExtdSts1_Cnt_T_enum,
                                        RxDataSrc_Cnt_T_enum);

                
            }
            /* Rolling counter valid but old data received on Secondary source */
            else if(FrmSts_Cnt_T_enum == ROLLGCNTRVLDOLDDATA)
            {
                /* Set Signal Status as previous */
                RxSigExtdSts1_Cnt_T_enum = IMCARBNRXEXTDSTS_PREVDATA;
            }
            /* Rolling counter invalid */
            else
            {
                /* Set Signal status as invalid */
                RxSigExtdSts1_Cnt_T_enum = IMCARBNRXEXTDSTS_DATAINVLD;
            }   
            
        }
        /* Handling No data cases */
        NoDataHndlg(RxSigExtdSts1_Cnt_T_enum,
                    RxDataSrc_Cnt_T_enum,
                    RateGroup_Cnt_T_u08, 
                    SigGroup_Cnt_T_u08, 
                    PrimSrcNoDataRxd_Cnt_T_logl,
                    SecdrySrcNoDataRxd_Cnt_T_logl);
                    
        /* Over-ride signal status during start-up */
        OvrdSigStsDurgStrtUp(SigGroup_Cnt_T_u08,IniTiOutChkCmpl_Cnt_T_logl);       
    }  
}
/*****************************************************************************************************************
  * Name        :   NoDataHndlg
  * Description :   Handles No data and Invalid Signal Group data cases
  * Inputs      :   RxSigExtdSts1_Cnt_T_enum, RxDataSrc_Cnt_T_enum, RateGroup_Cnt_T_u08, SigGroup_Cnt_T_u08, 
                    PrimSrcNoDataRxd_Cnt_T_logl, SecdrySrcNoDataRxd_Cnt_T_logl
  * Outputs     :   void
  * Usage Notes :   None
******************************************************************************************************************/
static FUNC(void, IMCARBN_APPL_CODE) NoDataHndlg(   VAR(ImcArbnRxExtdSts1, AUTOMATIC) RxSigExtdSts1_Cnt_T_enum,
                                                    VAR(ImcArbnRxDataSrc1, AUTOMATIC) RxDataSrc_Cnt_T_enum,
                                                    VAR(uint8, AUTOMATIC) RateGroup_Cnt_T_u08, 
                                                    VAR(uint8, AUTOMATIC) SigGroup_Cnt_T_u08, 
                                                    VAR(boolean, AUTOMATIC) PrimSrcNoDataRxd_Cnt_T_logl,
                                                    VAR(boolean, AUTOMATIC) SecdrySrcNoDataRxd_Cnt_T_logl)
{
    VAR(uint8, AUTOMATIC) SigIdx_Cnt_T_u16;
    
    /* Signal Group not received in both Secondary source and Primary source */
    if((PrimSrcNoDataRxd_Cnt_T_logl == TRUE) &&
       (SecdrySrcNoDataRxd_Cnt_T_logl == TRUE))                    
    {
        RxSigExtdSts1_Cnt_T_enum = EvlSigGroupNeverRxdMissSts(RateGroup_Cnt_T_u08,SigGroup_Cnt_T_u08);
        
        /* Rolling counter handling*/ 
        /* Update Skip counter as the No data received on both channels */
        PimSigGroupSkipCntr_u08[SigGroup_Cnt_T_u08] = ((PimSigGroupSkipCntr_u08[SigGroup_Cnt_T_u08] + 1U)%ROLLGCNTRMAXVAL_CNT_U08);  
        /* Clear any Resync ongoing on both Primary and Secondary sources */
        PimPrimSrcResyncCntr_u08[SigGroup_Cnt_T_u08] = 0U;
        PimSecdrySrcResyncCntr_u08[SigGroup_Cnt_T_u08] = 0U;
        PimPrimSrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] = ROLLGCNTRMAXVAL_CNT_U08;
        PimSecdrySrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] = ROLLGCNTRMAXVAL_CNT_U08; 
        PimResyncOnPrimActv_logl[SigGroup_Cnt_T_u08] = FALSE;
        PimResyncOnSecdryActv_logl[SigGroup_Cnt_T_u08] = FALSE;
    }
    
    /* No valid data source found for the signal group */
    if(RxDataSrc_Cnt_T_enum == IMCARBNRXDATASRC_NOSRC)
    {
        /* No valid data reception either on Secondary source or Primary source. Update Signal Status*/           
        for (SigIdx_Cnt_T_u16 = 0U; SigIdx_Cnt_T_u16 < SIGGROUPCONFIG_REC[SigGroup_Cnt_T_u08].NrOfSig_u08; SigIdx_Cnt_T_u16++)
        {
            /* Exclusive area not required since we update only one piece of data */
            PimRxdSigDataExtdSts_enum[SIGGROUPCONFIG_REC[SigGroup_Cnt_T_u08].SigPrm[SigIdx_Cnt_T_u16].SigId_u16] = RxSigExtdSts1_Cnt_T_enum;
            /* Retain last source. No need to change signal source */
        }
    }
}

/*****************************************************************************************************************
  * Name        :   OvrdSigStsDurgStrtUp
  * Description :   Over-ride signal status during start-up
  * Inputs      :   SigGroup_Cnt_T_u08, IniTiOutChkCmpl_Cnt_T_logl
  * Outputs     :   void
  * Usage Notes :   None
******************************************************************************************************************/
static FUNC(void, IMCARBN_APPL_CODE)  OvrdSigStsDurgStrtUp(VAR(uint8, AUTOMATIC) SigGroup_Cnt_T_u08,VAR(boolean, AUTOMATIC) IniTiOutChkCmpl_Cnt_T_logl)
{
    VAR(uint16, AUTOMATIC)   SigIdx_Cnt_T_u16;
    /* Initial time-out not completed */
    if(IniTiOutChkCmpl_Cnt_T_logl == FALSE) 
    {
        /* Set Signal status to "Starting" */           
        for (SigIdx_Cnt_T_u16 = 0U; SigIdx_Cnt_T_u16 < SIGGROUPCONFIG_REC[SigGroup_Cnt_T_u08].NrOfSig_u08; SigIdx_Cnt_T_u16++)
        {  
            PimRxdSigDataExtdSts_enum[SIGGROUPCONFIG_REC[SigGroup_Cnt_T_u08].SigPrm[SigIdx_Cnt_T_u16].SigId_u16] = IMCARBNRXEXTDSTS_STRTG;                
        }
    } 
}
 /*****************************************************************************************************************
  * Name        :   EvlSigGroupNeverRxdMissSts
  * Description :   Evaluate Never-Received, Missing Status
  * Inputs      :   RateGroup_Cnt_T_u08, SigGroup_Cnt_T_u08
  * Outputs     :   RxSigExtdSts1_Cnt_T_enum
  * Usage Notes :   None
******************************************************************************************************************/       
static FUNC(ImcArbnRxExtdSts1, IMCARBN_APPL_CODE)  EvlSigGroupNeverRxdMissSts(VAR(uint8, AUTOMATIC) RateGroup_Cnt_T_u08,VAR(uint8, AUTOMATIC) SigGroup_Cnt_T_u08)
{
 /* Missing message threshold counts */                                                                                                    
    static const VAR(uint8, IMCARBN_CONST)  MISSSIGGROUPTIOUT_CNT_U08[IMCARBN_NROFRATEGROUP_CNT_U08] = { MISSTHD2MILLISECRATEGROUP_CNT_U08,
                                                                                                         MISSTHD10MILLISECRATEGROUP_CNT_U08, 
                                                                                                         MISSTHD100MILLISECRATEGROUP_CNT_U08
                                                                                                       };     
    VAR(ImcArbnRxExtdSts1, AUTOMATIC) RxSigExtdSts1_Cnt_T_enum;
    
    /* Check whether the Signal Group never recevied */
    if(PimSigGroupNeverRxd_logl[SigGroup_Cnt_T_u08] == TRUE)
    {
        RxSigExtdSts1_Cnt_T_enum = IMCARBNRXEXTDSTS_NEVERRXD;
    }
    /* Signal Group is missing */
    else
    {
        /* Increment Signal Group Missing counter */
        PimSigGroupMissCntr_u08[SigGroup_Cnt_T_u08]++;
        
        /* If missing counter exceeds threshold, set Signal status as Missing */
        if(PimSigGroupMissCntr_u08[SigGroup_Cnt_T_u08] >= MISSSIGGROUPTIOUT_CNT_U08[RateGroup_Cnt_T_u08])
        {
            RxSigExtdSts1_Cnt_T_enum = IMCARBNRXEXTDSTS_MISS;
            PimSigGroupMissCntr_u08[SigGroup_Cnt_T_u08] = MISSSIGGROUPTIOUT_CNT_U08[RateGroup_Cnt_T_u08];
        }
        else
        {
            /* else maintain signal status as Previous */
            RxSigExtdSts1_Cnt_T_enum = IMCARBNRXEXTDSTS_PREVDATA;
        }
    }
    return(RxSigExtdSts1_Cnt_T_enum);
}

/*****************************************************************************************************************
  * Name        :   RxFrmVldChk
  * Description :   Checks Validity of Received signal group data
  * Inputs      :   DataBuf_Cnt_T_u08, FrmFltCntr_Cnt_T_u08, SigGroupDataSrc_Cnt_T_enum, RateGroup_Cnt_T_u08,
                    SigGroup_Cnt_T_u08, PrimSrcOnlySigGroup_Cnt_T_logl, IniTiOutChkCmpl_Cnt_T_logl
  * Outputs     :   FrmSts_Cnt_T_enum
  * Usage Notes :   None
******************************************************************************************************************/ 
static FUNC(ImcArbnRxRollgCntrSts1, IMCARBN_APPL_CODE) RxFrmVldChk( P2VAR(uint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataBuf_Cnt_T_u08,
                                                                    P2VAR(uint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) FrmFltCntr_Cnt_T_u08,
                                                                    VAR(ImcArbnRxDataSrc1, AUTOMATIC) SigGroupDataSrc_Cnt_T_enum,
                                                                    VAR(uint8, AUTOMATIC) RateGroup_Cnt_T_u08,
                                                                    VAR(uint8, AUTOMATIC) SigGroup_Cnt_T_u08,
                                                                    VAR(boolean, AUTOMATIC) PrimSrcOnlySigGroup_Cnt_T_logl,
                                                                    VAR(boolean, AUTOMATIC) IniTiOutChkCmpl_Cnt_T_logl)
                                                                                                     
{
    VAR(ImcArbnRxRollgCntrSts1, AUTOMATIC) FrmSts_Cnt_T_enum = ROLLGCNTRINVLD; /* Assume frame is not valid */
    
    /* Check Validity of CRC */
    /* Frame fault counters to be incremented only if initial time-out completed */
    if(Crc_CalculateCRC8(&DataBuf_Cnt_T_u08[SIGGROUPIDPOSN_CNT_U08],NROFDATABYTEFORCRCCALC_CNT_U08,CRCCALCINITVAL_CNT_U08,TRUE) != DataBuf_Cnt_T_u08[CRCPOSN_CNT_U08]) 
    {
        if((IniTiOutChkCmpl_Cnt_T_logl == TRUE) && (FrmFltCntr_Cnt_T_u08[CRCFLT_CNT_U08] < Rte_Prm_ImcArbnFrmFltThd_Val()))
        {
            /* Increment CRC frame fault count */
            (FrmFltCntr_Cnt_T_u08[CRCFLT_CNT_U08])++;
        }
        
        /* Rolling counter related handling */
        /* 1) Frame skip required following cases:
            a) when CRC failed for both primary and secondary source 
            b) when CRC failed for a Signal Group which is available only on Primary source path 
        */       
        if((SigGroupDataSrc_Cnt_T_enum == IMCARBNRXDATASRC_SECDRY) || (PrimSrcOnlySigGroup_Cnt_T_logl == TRUE)) 
        {
            PimSigGroupSkipCntr_u08[SigGroup_Cnt_T_u08] = ((PimSigGroupSkipCntr_u08[SigGroup_Cnt_T_u08] + 1U)%ROLLGCNTRMAXVAL_CNT_U08); 
        }
        
        /* Got CRC fault on Primary source - abort Resync process */
        if(SigGroupDataSrc_Cnt_T_enum == IMCARBNRXDATASRC_PRIM)
        {
            
            PimPrimSrcResyncCntr_u08[SigGroup_Cnt_T_u08] = 0U;
            PimPrimSrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] = ROLLGCNTRMAXVAL_CNT_U08;
            PimResyncOnPrimActv_logl[SigGroup_Cnt_T_u08] = FALSE;
        }
        /* Got CRC fault on Secondary source - abort Resync process */
        if(SigGroupDataSrc_Cnt_T_enum == IMCARBNRXDATASRC_SECDRY)
        {
            PimSecdrySrcResyncCntr_u08[SigGroup_Cnt_T_u08] = 0U;
            PimSecdrySrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] = ROLLGCNTRMAXVAL_CNT_U08;    
            PimResyncOnSecdryActv_logl[SigGroup_Cnt_T_u08] = FALSE;
        }


    }    
    /* Check Validity of Rolling counter */
    else                           
    {
        FrmSts_Cnt_T_enum = VldtRollgCntr( SigGroupDataSrc_Cnt_T_enum,
                            RateGroup_Cnt_T_u08, 
                            SigGroup_Cnt_T_u08,
                            (DataBuf_Cnt_T_u08[STRTBYTEPOSN_CNT_U08] & ROLLGCNTRMASKVAL_CNT_U08));

        /* If Valid new data is not received */                        
        if( FrmSts_Cnt_T_enum != ROLLGCNTRVLDNEWDATA)
        {
            /* Update frame fault counters if init time-out completed*/
            if(IniTiOutChkCmpl_Cnt_T_logl == TRUE) 
            {
                /* Check whether Rolling Counter error occurred */
                if(FrmSts_Cnt_T_enum  == ROLLGCNTRINVLD)
                {
                    if((FrmFltCntr_Cnt_T_u08[ROLLGCNTRFLT_CNT_U08] < Rte_Prm_ImcArbnFrmFltThd_Val()))
                    {
                        /* Increment Rolling counter fault count */
                        (FrmFltCntr_Cnt_T_u08[ROLLGCNTRFLT_CNT_U08])++;     
                    }
                }
                else
                {
                    if(FrmFltCntr_Cnt_T_u08[ROLLGCNTRFLT_CNT_U08] > 0U)
                    {
                        /* Decrement Rolling counter fault count */
                        (FrmFltCntr_Cnt_T_u08[ROLLGCNTRFLT_CNT_U08])--;  
                    }
                }
            }
            
            /*When PrimSrcOnlySigGroup_Cnt_T_logl is FALSE (both Primary and secondary available), 
            Primary source Rolling counter faults shall not be accounted. It will happen when secondary source path is evaluated*/
            if((PrimSrcOnlySigGroup_Cnt_T_logl == TRUE) || (SigGroupDataSrc_Cnt_T_enum == IMCARBNRXDATASRC_SECDRY) )
            {
                PimSigGroupSkipCntr_u08[SigGroup_Cnt_T_u08] = ((PimSigGroupSkipCntr_u08[SigGroup_Cnt_T_u08] + 1U)%ROLLGCNTRMAXVAL_CNT_U08);
                
            }  
            /* Imc Channel Resync handling */            
            ImcChResyncHndlg(SigGroupDataSrc_Cnt_T_enum,SigGroup_Cnt_T_u08,(DataBuf_Cnt_T_u08[STRTBYTEPOSN_CNT_U08] & ROLLGCNTRMASKVAL_CNT_U08));
            
        }    
        else
        {
            /* Frame valid */
            /* Clear Skip counter */
            PimSigGroupSkipCntr_u08[SigGroup_Cnt_T_u08] = 0U;   

            /* Abort Resync process on Primary source only if current source is Primary source.
               Resync shall not be aborted when the source is secondary as switch to Primary shall happen 
               any time valid data sequence received on Primary source */            
            if(SigGroupDataSrc_Cnt_T_enum == IMCARBNRXDATASRC_PRIM) 
            /* If Frame valid declared for Secondary source, dont abort Resync on Primary. 
               Because, if new sequence received on Primary with valid Rolling counter sequence, switch to primary*/
            {
                PimPrimSrcResyncCntr_u08[SigGroup_Cnt_T_u08] = 0U; 
                PimPrimSrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] = ROLLGCNTRMAXVAL_CNT_U08;
                PimResyncOnPrimActv_logl[SigGroup_Cnt_T_u08] = FALSE;
                
            }
            /* Irrespective of Primary or Secondary, if valid frame received, abort Secondary source resync process */
            PimSecdrySrcResyncCntr_u08[SigGroup_Cnt_T_u08] = 0U; 
            PimSecdrySrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] = ROLLGCNTRMAXVAL_CNT_U08;
            PimResyncOnSecdryActv_logl[SigGroup_Cnt_T_u08] = FALSE;
            
            /* Decrement CRC frame faults */
            if(FrmFltCntr_Cnt_T_u08[ROLLGCNTRFLT_CNT_U08] > 0U)
            {
                (FrmFltCntr_Cnt_T_u08[ROLLGCNTRFLT_CNT_U08])--;
            } 
            /* Decrement Rolling counter frame faults */
            if(FrmFltCntr_Cnt_T_u08[CRCFLT_CNT_U08] > 0U)
            {
                (FrmFltCntr_Cnt_T_u08[CRCFLT_CNT_U08])--;
            }
       }
    }

   return(FrmSts_Cnt_T_enum);         
}

/*****************************************************************************************************************
  * Name        :   ImcChResyncHndlg
  * Description :   Checks Validity of Received signal group data
  * Inputs      :   SigGroupDataSrc_Cnt_T_enum, SigGroup_Cnt_T_u08, PrsntRollgCntr_Cnt_T_u08
  * Outputs     :   void
  * Usage Notes :   None
******************************************************************************************************************/ 
static FUNC(void, IMCARBN_APPL_CODE) ImcChResyncHndlg( VAR(ImcArbnRxDataSrc1, AUTOMATIC)  SigGroupDataSrc_Cnt_T_enum,
                                                       VAR(uint8, AUTOMATIC) SigGroup_Cnt_T_u08,
                                                       VAR(uint8, AUTOMATIC) PrsntRollgCntr_Cnt_T_u08)
{
    /* Resync mechanism:
      If Rolling counter check failed (New Rolling counter value not falling in the tolerance band)
        a) Upon detecting first failure update Resync rolling counter value and increment Resync counter
        b) During subsequent Rolling counter fault, check whether new Rolling counter value is next to the value stored in a).
            if yes - store the new Rolling counter value and update Resync counter
            if no - clear the Resync counter to start fresh Resync cycle and update Resync Rolling counter with ROLLGCNTRMAXVAL_CNT_U08
    */
    if((SigGroupDataSrc_Cnt_T_enum == IMCARBNRXDATASRC_PRIM) && (PimResyncOnSecdryActv_logl[SigGroup_Cnt_T_u08] == FALSE))
        /* Resync process on Primary Source shall start on following cases:
          1) Primary Rolling counter validation failed
          2) Resync is not in progress on Secondary
          3) Secondary is currently active (due to fault on Primary). Primary is coming back but with out-of-sync Rolling counter. Trying to Resync on Primary
          4) Secondary and Primary recovering (Hence, give priority to Resync on Primary)
          5) Secondary is completely dead
        */
    {
        if(PimPrimSrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] == ROLLGCNTRMAXVAL_CNT_U08) /* First Resync */
        {
            /* Increment Primary Resync counter */
            PimPrimSrcResyncCntr_u08[SigGroup_Cnt_T_u08]++;
            /* Update Resync Rolling counter value with new Rolling counter */
            PimPrimSrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] = PrsntRollgCntr_Cnt_T_u08;
            /* Set Resync active on Primary source */
            PimResyncOnPrimActv_logl[SigGroup_Cnt_T_u08] = TRUE;
        }
        else
        {
            /* Check whether newly received Rolling counter value is next to the previous Resync Rolling counter value */
            if(((PimPrimSrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] + 1U)%ROLLGCNTRMAXVAL_CNT_U08) == PrsntRollgCntr_Cnt_T_u08)
            {
                /* Increment Resync counter */
                PimPrimSrcResyncCntr_u08[SigGroup_Cnt_T_u08]++;
                /* Update Resync Rolling counter value */
                PimPrimSrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] = PrsntRollgCntr_Cnt_T_u08;
            }
            else
            {
                /* Rolling counter is not exactly one frame away from previously received rolling counter during resync process.
                Abort Resync process and restart(if possible) */
                PimPrimSrcResyncCntr_u08[SigGroup_Cnt_T_u08] = 0U;
                PimPrimSrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] = ROLLGCNTRMAXVAL_CNT_U08;
                PimResyncOnPrimActv_logl[SigGroup_Cnt_T_u08] = FALSE;
            }                
        }
    }      
    
    if((SigGroupDataSrc_Cnt_T_enum == IMCARBNRXDATASRC_SECDRY)  && (PimResyncOnPrimActv_logl[SigGroup_Cnt_T_u08] == FALSE))
        /* 
          1) Primary and Secondary Rolling counter validation failed and tried to Resync on Primary
          2) Resync is not in progress on Primary
          3) Primary and Secondary was dead and  Secondary is coming back but with out-of-sync Rolling counter. Trying to Resync on Secondary
          4) Secondary is currently active as Primary is completely dead. Rolling counter fault on Secondary
        */        
    {
        if(PimSecdrySrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] == ROLLGCNTRMAXVAL_CNT_U08) /* First Resync */
        {
            /* Increment Secondary Resync counter */
            PimSecdrySrcResyncCntr_u08[SigGroup_Cnt_T_u08]++;
            /* Update Resync Rolling counter value with new Rolling counter */
            PimSecdrySrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] = PrsntRollgCntr_Cnt_T_u08;
            /* Set Resync active on Secondary source */
            PimResyncOnSecdryActv_logl[SigGroup_Cnt_T_u08] = TRUE;
        }
        else
        {
            /* Check whether newly received Rolling counter value is next to the previous Resync Rolling counter value */
            if(((PimSecdrySrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] + 1U)%ROLLGCNTRMAXVAL_CNT_U08) == PrsntRollgCntr_Cnt_T_u08)
            {
                /* Increment Resync counter */
                PimSecdrySrcResyncCntr_u08[SigGroup_Cnt_T_u08]++;
                /* Update Resync Rolling counter value */
                PimSecdrySrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] = PrsntRollgCntr_Cnt_T_u08;
            }
            else
            {
                /* Rolling counter is not exactly one frame away from previously received rolling counter during resync process.
                Abort Resync process and restart(if possible) */
                PimSecdrySrcResyncCntr_u08[SigGroup_Cnt_T_u08] = 0U;
                PimSecdrySrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] = ROLLGCNTRMAXVAL_CNT_U08;
                PimResyncOnSecdryActv_logl[SigGroup_Cnt_T_u08] = FALSE;
            }                
        }
    }
}

/*****************************************************************************************************************
  * Name        :   VldtRollgCntr
  * Description :   Validates rolling counter 
  * Inputs      :   SigGroupDataSrc_Cnt_T_enum, RateGroup_Cnt_T_u08, SigGroup_Cnt_T_u08, PrsntRollgCntr_Cnt_T_u08
  * Outputs     :   RollgCntrSts_Cnt_T_enum
  * Usage Notes :   None
******************************************************************************************************************/                                                        
static FUNC(ImcArbnRxRollgCntrSts1, IMCARBN_APPL_CODE)  VldtRollgCntr( VAR(ImcArbnRxDataSrc1, AUTOMATIC) SigGroupDataSrc_Cnt_T_enum,
                                                                       VAR(uint8, AUTOMATIC) RateGroup_Cnt_T_u08,
                                                                       VAR(uint8, AUTOMATIC) SigGroup_Cnt_T_u08,
                                                                       VAR(uint8, AUTOMATIC) PrsntRollgCntr_Cnt_T_u08)
                                                           
{
    VAR(ImcArbnRxRollgCntrSts1, AUTOMATIC) RollgCntrSts_Cnt_T_enum; 
    
    /* Resynchronization required on Primary source path*/
    if((PimPrimSrcResyncCntr_u08[SigGroup_Cnt_T_u08] > RSYNCCNTRTHD_CNT_U08) &&
       (SigGroupDataSrc_Cnt_T_enum ==  IMCARBNRXDATASRC_PRIM) &&
       (PimResyncOnPrimActv_logl[SigGroup_Cnt_T_u08] == TRUE))   
    {
        /* Declare data as valid on Primary source */
        RollgCntrSts_Cnt_T_enum = ROLLGCNTRVLDNEWDATA;
        /* Clear running Resync process on Primary source */
        PimPrimSrcResyncCntr_u08[SigGroup_Cnt_T_u08] = 0U;
        PimPrimSrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] = ROLLGCNTRMAXVAL_CNT_U08;
        PimResyncOnPrimActv_logl[SigGroup_Cnt_T_u08] = FALSE;
        
    }
    /* Resynchronization required on secondary source path*/
    else if ((PimSecdrySrcResyncCntr_u08[SigGroup_Cnt_T_u08] > RSYNCCNTRTHD_CNT_U08) &&
              (SigGroupDataSrc_Cnt_T_enum == IMCARBNRXDATASRC_SECDRY ) &&
              (PimResyncOnSecdryActv_logl[SigGroup_Cnt_T_u08] == TRUE))   
    {
        /* Declare data as valid on Secondary source */
        RollgCntrSts_Cnt_T_enum = ROLLGCNTRVLDNEWDATA;   
        /* Clear running Resync process on Secondary source */        
        PimSecdrySrcResyncCntr_u08[SigGroup_Cnt_T_u08] = 0U;
        PimSecdrySrcRollgCntrResync_u08[SigGroup_Cnt_T_u08] = ROLLGCNTRMAXVAL_CNT_U08; 
        PimResyncOnSecdryActv_logl[SigGroup_Cnt_T_u08] = FALSE;       
    }

    else
    {
        /* None of the resync process completed - check validity of Rolling Counter value using Rolling counter algorithm*/
        RollgCntrSts_Cnt_T_enum = VldtRollgCntrAlg(SigGroupDataSrc_Cnt_T_enum, RateGroup_Cnt_T_u08, SigGroup_Cnt_T_u08,  PrsntRollgCntr_Cnt_T_u08);
        
    }
    return (RollgCntrSts_Cnt_T_enum);
}
    
/*****************************************************************************************************************
  * Name        :   VldtRollgCntrAlg
  * Description :   Validates rolling counter 
  * Inputs      :   SigGroupDataSrc_Cnt_T_enum, RateGroup_Cnt_T_u08, SigGroup_Cnt_T_u08, PrsntRollgCntr_Cnt_T_u08
  * Outputs     :   RollgCntrSts_Cnt_T_enum
  * Usage Notes :   None
******************************************************************************************************************/       
static FUNC(ImcArbnRxRollgCntrSts1, AP_IMCARBR_APPL_CODE) VldtRollgCntrAlg( VAR(ImcArbnRxDataSrc1, AUTOMATIC) SigGroupDataSrc_Cnt_T_enum,
                                                                            VAR(uint8, AUTOMATIC) RateGroup_Cnt_T_u08,
                                                                            VAR(uint8, AUTOMATIC) SigGroup_Cnt_T_u08,                                                            
                                                                            VAR(uint8, AUTOMATIC) PrsntRollgCntr_Cnt_T_u08)
{
    VAR(ImcArbnRxRollgCntrSts1, AUTOMATIC) RollgCntrSts_Cnt_T_enum;    
    VAR(uint8, AUTOMATIC) AntcptdRollCntr_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) UpprDriftLim_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) LwrDriftLim_Cnt_T_u08;

    /* Calculate anticipated rolling counter value */
    AntcptdRollCntr_Cnt_T_u08 = (( PimPrevRollgCntrRxd_u08[SigGroup_Cnt_T_u08] + PimSigGroupSkipCntr_u08[SigGroup_Cnt_T_u08] + 1U)%ROLLGCNTRMAXVAL_CNT_U08); 

    /* Check whether the Signal Group was last received  on the same source */
    if((PimSigGroupDataSrc_enum[SigGroup_Cnt_T_u08] == SigGroupDataSrc_Cnt_T_enum) && 
        (PimSigGroupDataSrc_enum[SigGroup_Cnt_T_u08] != IMCARBNRXDATASRC_NOSRC))
    {        
        /* Calculate how much anticipated rolling counter value allowed to drift on the upper side */
        UpprDriftLim_Cnt_T_u08 = SIGGROUPLTCY_CNT_U08;
        
        /* Calculate how much anticipated rolling counter value allowed to drift on the lower side */
        if(PimSigGroupSkipCntr_u08[SigGroup_Cnt_T_u08] < SIGGROUPLTCY_CNT_U08)
        {
            LwrDriftLim_Cnt_T_u08 = PimSigGroupSkipCntr_u08[SigGroup_Cnt_T_u08];            
        }
        else
        {
            LwrDriftLim_Cnt_T_u08 = SIGGROUPLTCY_CNT_U08;               
        }         
        
        /* Check whether present rolling counter value falls within the range */
        if(RollgCntrSeqChk(PrsntRollgCntr_Cnt_T_u08, 
                           AntcptdRollCntr_Cnt_T_u08, 
                           UpprDriftLim_Cnt_T_u08, LwrDriftLim_Cnt_T_u08) == TRUE)
        {
            /* Data valid, RC valid, no RC error */
            RollgCntrSts_Cnt_T_enum = ROLLGCNTRVLDNEWDATA;            
            
        }
        else
        {
            /* Data invalid, RC invalid, RC error */
            RollgCntrSts_Cnt_T_enum = ROLLGCNTRINVLD;         
            
        }
    }
    /* Signal Group received on a different source */
    else if(PimSigGroupDataSrc_enum[SigGroup_Cnt_T_u08] != IMCARBNRXDATASRC_NOSRC)
    {

        /* Calculate how much anticipated rolling counter value allowed to drift on the upper side */
        UpprDriftLim_Cnt_T_u08 = SIGGROUPLTCY_CNT_U08 + CHSWTDLY_CNT_U08;
        
        /* Calculate how much anticipated rolling counter value allowed to drift on the lower side */        
        if(PimSigGroupSkipCntr_u08[SigGroup_Cnt_T_u08] < (SIGGROUPLTCY_CNT_U08 + CHSWTDLY_CNT_U08))
        {
            LwrDriftLim_Cnt_T_u08 = PimSigGroupSkipCntr_u08[SigGroup_Cnt_T_u08];    
        }
        else
        {
            LwrDriftLim_Cnt_T_u08 = SIGGROUPLTCY_CNT_U08 + CHSWTDLY_CNT_U08;
        } 
        /* Check whether present rolling counter value falls within the range */
        if(RollgCntrSeqChk(PrsntRollgCntr_Cnt_T_u08, 
                           AntcptdRollCntr_Cnt_T_u08, 
                           UpprDriftLim_Cnt_T_u08, LwrDriftLim_Cnt_T_u08) == TRUE)       
        {
            /* Data valid, RC valid, no RC error */
            RollgCntrSts_Cnt_T_enum = ROLLGCNTRVLDNEWDATA; 
        }        
        else if(RollgCntrSeqChk(PrsntRollgCntr_Cnt_T_u08, 
                                AntcptdRollCntr_Cnt_T_u08, 
                                UpprDriftLim_Cnt_T_u08, 
                                SIGGROUPLTCY_CNT_U08 + CHSWTDLY_CNT_U08) == TRUE)        
        {
             /* Data invalid, RC invalid, but no RC error  due to channel switch.
                This case handles cases where one channel lags with respect to other.
                Since this is inherent system limitation, no Rolling counter error reported back */          
            RollgCntrSts_Cnt_T_enum = ROLLGCNTRVLDOLDDATA;        
            
        }
        else
        {
            /* Data invalid, RC invalid, RC error */
            RollgCntrSts_Cnt_T_enum = ROLLGCNTRINVLD; 
        }

    }
    else
    {
        /* Initial condition, assume Data valid, RC valid, no RC error */
        RollgCntrSts_Cnt_T_enum = ROLLGCNTRVLDNEWDATA;        
    }
    return( RollgCntrSts_Cnt_T_enum);


}

/*****************************************************************************************************************
  * Name        :   RollgCntrSeqChk
  * Description :   Checks validity of presently received rolling counter against Anticipated rolling counter
  * Inputs      :   PrsntRollgCntr_Cnt_T_u08, AntcptdRollCntr_Cnt_T_u08, UpprDriftLim_Cnt_T_u08, LwrDriftLim_Cnt_T_u08
  * Outputs     :   RollgCntrVld_Cnt_T_logl
  * Usage Notes :   None
******************************************************************************************************************/                                                       
static FUNC(boolean, AP_IMCARBR_APPL_CODE)  RollgCntrSeqChk( VAR(uint8, AUTOMATIC) PrsntRollgCntr_Cnt_T_u08,
                                                             VAR(uint8, AUTOMATIC) AntcptdRollCntr_Cnt_T_u08, 
                                                             VAR(uint8, AUTOMATIC) UpprDriftLim_Cnt_T_u08,
                                                             VAR(uint8, AUTOMATIC) LwrDriftLim_Cnt_T_u08)
{

    VAR(boolean, AUTOMATIC)  RollgCntrVld_Cnt_T_logl = FALSE;
    VAR(uint8, AUTOMATIC)  NormDiffUppr_T_u08 = DRIFTINITVAL_CNT_U08;
    VAR(uint8, AUTOMATIC)  OvfDiffUppr_T_u08= DRIFTINITVAL_CNT_U08;
    VAR(uint8, AUTOMATIC)  NormDiffLowr_T_u08 = DRIFTINITVAL_CNT_U08;
    VAR(uint8, AUTOMATIC)  OvfDiffLowr_T_u08 = DRIFTINITVAL_CNT_U08;    
    
    /* If Present Rolling counter is greater than or equal to Anticipated Rolling counter 
    calculate, upper side normal difference and lower side overflow difference */
    if(PrsntRollgCntr_Cnt_T_u08 >= AntcptdRollCntr_Cnt_T_u08)
    {
        NormDiffUppr_T_u08 = PrsntRollgCntr_Cnt_T_u08 - AntcptdRollCntr_Cnt_T_u08;
        OvfDiffLowr_T_u08 = (ROLLGCNTRMAXVAL_CNT_U08 + AntcptdRollCntr_Cnt_T_u08) - PrsntRollgCntr_Cnt_T_u08;
        
    }
    else /*(PrsntRollgCntr_Cnt_T_u08 < AntcptdRollCntr_Cnt_T_u08)*/
    {
     /* If Present Rolling counter is less than Anticipated Rolling counter 
        calculate, lower side normal difference and upper side overflow difference */       
        NormDiffLowr_T_u08 = AntcptdRollCntr_Cnt_T_u08 - PrsntRollgCntr_Cnt_T_u08;
        OvfDiffUppr_T_u08 = (ROLLGCNTRMAXVAL_CNT_U08 + PrsntRollgCntr_Cnt_T_u08) - AntcptdRollCntr_Cnt_T_u08;
        
    }
    
    /* Check whether any of the calculated drift values are falling within the range of lower and upper drift limits */
    if((NormDiffUppr_T_u08 <= UpprDriftLim_Cnt_T_u08) || (OvfDiffUppr_T_u08 <= UpprDriftLim_Cnt_T_u08) || 
       (OvfDiffLowr_T_u08 <= LwrDriftLim_Cnt_T_u08) || (NormDiffLowr_T_u08 <= LwrDriftLim_Cnt_T_u08))
    {
        /* Declare Rolling counter as valid */
        RollgCntrVld_Cnt_T_logl = TRUE;   
    }    
       
    return (RollgCntrVld_Cnt_T_logl);
}

/*****************************************************************************************************************
  * Name        :   CreatSigGroupData
  * Description :   Composes data to be transmitted for given signal group
  * Inputs      :   SigGroup_T_rec
  * Outputs     :   RetData_Uls_T_u32
  * Usage Notes :   None
******************************************************************************************************************/
static FUNC(uint32, IMCARBN_APPL_CODE) CreatSigGroupData(SigGroupRec1 const* SigGroup_T_rec) 
{
    VAR(uint32, AUTOMATIC) SigVal_Uls_T_u32;
    VAR(uint32, AUTOMATIC) RetData_Uls_T_u32 = 0U;   
    VAR(uint16, AUTOMATIC)  SigIdx_Cnt_T_u16; 
    
    for(SigIdx_Cnt_T_u16 = 0U; SigIdx_Cnt_T_u16 < SigGroup_T_rec->NrOfSig_u08; SigIdx_Cnt_T_u16++)
    {
        /* Get signal value from source */
        SigVal_Uls_T_u32 = SigGroup_T_rec->SigPrm[SigIdx_Cnt_T_u16].GetSigValOper();
        /* Take-out required bits alone and fit in given position of uint32 */
        RetData_Uls_T_u32 |= ((SigVal_Uls_T_u32 & (SigGroup_T_rec->SigPrm[SigIdx_Cnt_T_u16].DestBitMask_u32)) << (SigGroup_T_rec->SigPrm[SigIdx_Cnt_T_u16].StrtLocn_u08));
    }
    return(RetData_Uls_T_u32);

}
/*****************************************************************************************************************
  * Name        :   DecodSigGroupData
  * Description :   Decode received data for given Signal Group
  * Inputs      :   SigGroup_T_rec, SigGroupRxData_Uls_T_u32, RxSigExtdSts1_Cnt_T_enum, RxDataSrc_Cnt_T_enum
  * Outputs     :   void
  * Usage Notes :   None
******************************************************************************************************************/
static FUNC(void, IMCARBN_APPL_CODE)  DecodSigGroupData(SigGroupRec1 const* SigGroup_T_rec,
                                                        VAR(uint32, AUTOMATIC) SigGroupRxData_Uls_T_u32, 
                                                        VAR(ImcArbnRxExtdSts1, AUTOMATIC) RxSigExtdSts1_Cnt_T_enum,
                                                        VAR(ImcArbnRxDataSrc1, AUTOMATIC) RxDataSrc_Cnt_T_enum)
{
    VAR(uint16, AUTOMATIC)  SigIdx_Cnt_T_u16;
    VAR(uint32, AUTOMATIC)  RxSigData_Uls_T_u32;

    for(SigIdx_Cnt_T_u16 = 0U; SigIdx_Cnt_T_u16 < SigGroup_T_rec->NrOfSig_u08; SigIdx_Cnt_T_u16++)
    {
        /* Take-out required bits alone from uint32 */
        RxSigData_Uls_T_u32 = ((SigGroupRxData_Uls_T_u32) & ((SigGroup_T_rec->SigPrm[SigIdx_Cnt_T_u16].DestBitMask_u32) << (SigGroup_T_rec->SigPrm[SigIdx_Cnt_T_u16].StrtLocn_u08)));
        /* Shift to the right */
        RxSigData_Uls_T_u32 = ((RxSigData_Uls_T_u32) >> (SigGroup_T_rec->SigPrm[SigIdx_Cnt_T_u16].StrtLocn_u08));
        /************ To be kept under exclusive area ***********/
        Rte_Enter_ExclsvAr2SigDataBuf();
        /* Update Signal data buffer */
        PimRxdSigData_u32[SigGroup_T_rec->SigPrm[SigIdx_Cnt_T_u16].SigId_u16] = RxSigData_Uls_T_u32;
        /* Update Signal Status buffer */
        PimRxdSigDataExtdSts_enum[SigGroup_T_rec->SigPrm[SigIdx_Cnt_T_u16].SigId_u16] = RxSigExtdSts1_Cnt_T_enum;
        /* Update data source */
        PimRxdSigDataSrc_enum[SigGroup_T_rec->SigPrm[SigIdx_Cnt_T_u16].SigId_u16] = RxDataSrc_Cnt_T_enum;
        Rte_Exit_ExclsvAr2SigDataBuf();
        /************ To be kept under exclusive area ***********/
    }
}

/*****************************************************************************************************************
  * Name        :   GetImcSigSts
  * Description :   Provides reduced version of Signal Status (ImcArbnRxSts1) based on Extended Signal Status (SigExtdSts_Cnt_T_enum)
  * Inputs      :   SigExtdSts_Cnt_T_enum
  * Outputs     :   RetSts_Cnt_T_enum
  * Usage Notes :   None
******************************************************************************************************************/
static FUNC(ImcArbnRxSts1, IMCARBN_APPL_CODE)  GetImcSigSts(VAR(ImcArbnRxExtdSts1, AUTOMATIC) SigExtdSts_Cnt_T_enum)
{
    VAR(ImcArbnRxSts1,AUTOMATIC) RetSts_Cnt_T_enum;
 
    switch(SigExtdSts_Cnt_T_enum)
    {
        /* Map extended status "starting" to "no data" */
        case IMCARBNRXEXTDSTS_STRTG:
            RetSts_Cnt_T_enum = IMCARBNRXSTS_NODATA;
        break;
        /* Map extended status "data valid with back-up and data valid with no back-up to "data valid"*/
        case IMCARBNRXEXTDSTS_DATAVLDWITHBACKUP:
        case IMCARBNRXEXTDSTS_DATAVLDWITHNOBACKUP:
            RetSts_Cnt_T_enum = IMCARBNRXSTS_VLD;
        break;
        /* Map extended status "never received", "missing", "data invalid", "previous data"  to "data invalid" */
        /*         
        case IMCARBNRXEXTDSTS_NEVERRXD:
        case IMCARBNRXEXTDSTS_MISS:
        case IMCARBNRXEXTDSTS_DATAINVLD:
        case IMCARBNRXEXTDSTS_PREVDATA:*/
        default:
            RetSts_Cnt_T_enum = IMCARBNRXSTS_INVLD;
        break;      
    }
    return (RetSts_Cnt_T_enum);
    
}

/*****************************************************************************************************************
  * Name        :   GetImcFltParamByte
  * Description :   Calculates parameter byte to be set for Imc fault (NTCNR_0X03F)
  * Inputs      :   void
  * Outputs     :   FltBitMask_Cnt_T_u08
  * Usage Notes :   None
******************************************************************************************************************/
static FUNC(uint8, IMCARBN_APPL_CODE) GetImcFltParamByte(void)
{

    VAR(uint8, AUTOMATIC) FltBitMask_Cnt_T_u08 = 0U;
    
    /* Check if CRC fault on any of the Rate Group received on Primary source exceeds Frame fault Threshold */
    if((PimFrmFltCntr2MilliSec_u08[FRMFLTBUFIDXPRIM_CNT_U08][CRCFLT_CNT_U08] >= Rte_Prm_ImcArbnFrmFltThd_Val()) ||
       (PimFrmFltCntr10MilliSec_u08[FRMFLTBUFIDXPRIM_CNT_U08][CRCFLT_CNT_U08] >= Rte_Prm_ImcArbnFrmFltThd_Val())||
       (PimFrmFltCntr100MilliSec_u08[FRMFLTBUFIDXPRIM_CNT_U08][CRCFLT_CNT_U08] >= Rte_Prm_ImcArbnFrmFltThd_Val()))
   {
        /* CRC fault occurred in Primary source path */
        FltBitMask_Cnt_T_u08 |= PRIMSRCCRCFLT_CNT_U08;
   }
    /* Check if Rolling counter fault on any of the Rate Group received on Primary source exceeds Frame fault Threshold */
    if((PimFrmFltCntr2MilliSec_u08[FRMFLTBUFIDXPRIM_CNT_U08][ROLLGCNTRFLT_CNT_U08] >= Rte_Prm_ImcArbnFrmFltThd_Val()) ||
       (PimFrmFltCntr10MilliSec_u08[FRMFLTBUFIDXPRIM_CNT_U08][ROLLGCNTRFLT_CNT_U08] >= Rte_Prm_ImcArbnFrmFltThd_Val())||
       (PimFrmFltCntr100MilliSec_u08[FRMFLTBUFIDXPRIM_CNT_U08][ROLLGCNTRFLT_CNT_U08] >= Rte_Prm_ImcArbnFrmFltThd_Val()))
   {
        /* Rolling counter fault occurred in Primary source path */
        FltBitMask_Cnt_T_u08 |= PRIMSRCROLLGCNTRFLT_CNT_U08;
   } 
    /* Check if CRC fault on any of the Rate Group received on Secondary source exceeds Frame fault Threshold */
    if((PimFrmFltCntr2MilliSec_u08[FRMFLTBUFIDXSECDRY_CNT_U08][CRCFLT_CNT_U08] >= Rte_Prm_ImcArbnFrmFltThd_Val()) ||
       (PimFrmFltCntr10MilliSec_u08[FRMFLTBUFIDXSECDRY_CNT_U08][CRCFLT_CNT_U08] >= Rte_Prm_ImcArbnFrmFltThd_Val())||
       (PimFrmFltCntr100MilliSec_u08[FRMFLTBUFIDXSECDRY_CNT_U08][CRCFLT_CNT_U08] >= Rte_Prm_ImcArbnFrmFltThd_Val()))
   {
        /* CRC fault occurred in Secondary source path */
        FltBitMask_Cnt_T_u08 |= SECDRYSRCCRCFLT_CNT_U08;
   }  
    /* Check if Rolling counter fault on any of the Rate Group received on Secondary source exceeds Frame fault Threshold */
    if((PimFrmFltCntr2MilliSec_u08[FRMFLTBUFIDXSECDRY_CNT_U08][ROLLGCNTRFLT_CNT_U08] >= Rte_Prm_ImcArbnFrmFltThd_Val()) ||
       (PimFrmFltCntr10MilliSec_u08[FRMFLTBUFIDXSECDRY_CNT_U08][ROLLGCNTRFLT_CNT_U08] >= Rte_Prm_ImcArbnFrmFltThd_Val())||
       (PimFrmFltCntr100MilliSec_u08[FRMFLTBUFIDXSECDRY_CNT_U08][ROLLGCNTRFLT_CNT_U08] >= Rte_Prm_ImcArbnFrmFltThd_Val()))
   {
        /* Rolling counter fault occurred in Secondary source path */
        FltBitMask_Cnt_T_u08 |= SECDRYSRCROLLGCNTRFLT_CNT_U08;
   }   

   return (FltBitMask_Cnt_T_u08);

}

/*****************************************************************************************************************
  * Name        :   NoDataRxd
  * Description :   Calculates parameter byte to be set for Imc fault (NTCNR_0X03F)
  * Inputs      :   StrtByte_Cnt_T_u08, EndByte_Cnt_T_u08
  * Outputs     :   RetVal_Cnt_T_logl
  * Usage Notes :   None
******************************************************************************************************************/
static FUNC(boolean, IMCARBN_APPL_CODE)  NoDataRxd( VAR(uint8, AUTOMATIC) StrtByte_Cnt_T_u08,VAR(uint8, AUTOMATIC) EndByte_Cnt_T_u08)
{
    VAR(boolean, AUTOMATIC)   RetVal_Cnt_T_logl; 
    
    RetVal_Cnt_T_logl = TRUE; /* Assume No data received */

    /* Check Start byte and end byte Pattern IDs are matching */
    if(((StrtByte_Cnt_T_u08& IMCARBN_PATIDMASKVAL_CNT_U08) == IMCARBN_PATIDN_CNT_U08) &&
       ((EndByte_Cnt_T_u08 & IMCARBN_PATIDMASKVAL_CNT_U08) == IMCARBN_PATIDNIVS_CNT_U08))    
    {
        /* Data Received */
        RetVal_Cnt_T_logl = FALSE;
    }

    return (RetVal_Cnt_T_logl);    
}


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
