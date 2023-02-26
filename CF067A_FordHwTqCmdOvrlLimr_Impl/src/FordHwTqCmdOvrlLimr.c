/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordHwTqCmdOvrlLimr.c
 *        Config:  C:/Component/CF067A_FordHwTqCmdOvrlLimr_Impl/tools/Component.dpa
 *     SW-C Type:  FordHwTqCmdOvrlLimr
 *  Generated at:  Fri May  4 13:50:00 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordHwTqCmdOvrlLimr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordHwTqCmdOvrlLimr.c
* Module Description: Implementation of Ford Handwheel Torque Command Overlay Limiter component
* Project           : CBD   
* Author            : Jayakrishnan Thundathil
***********************************************************************************************************************
* Version Control:
* %version          : 1 %
* %derived_by       : czmgrw %
*----------------------------------------------------------------------------------------------------------------------
*   Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  ---------- --------------------------------------------------------------------------- -----------
* 05/4/18      1         JK     Initial Version of CF067A                                                  EA4#13431
**********************************************************************************************************************/
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
 * FordArbnCmd1
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
 * u13p3
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_FordHwTqCmdOvrlLimr.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "ArchGlbPrm.h"
#include "NxtrMath.h"
#include "NxtrIntrpn.h"
#include "NxtrFixdPt.h"
#include "ImcArbn.h"

 /* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for function calls: Rte_Read, Rte_Write, Rte_IrvWrite*/ 
/* MISRA-C:2004 Rule 19.1  [NXTRDEV 19.1.1] : AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define IMCFILDVEHSPDDFTVAL_KPH_F32          (100.0F)   
#define SPDDIFTHD_KPH_F32                    (10.0F)
#define TQREQDFTVAL_HWNWTMTR_F32             (0.0F)
#define ECUID2_CNT_U08                       ((uint8)2U)
#define ECUIDINVLD_CNT_U08                   ((uint8)3U)
#define FORDMOTTQOVRLMAXVAL_MOTNWTMTR_F32    (8.0F)
#define FORDMOTTQOVRLMINVAL_MOTNWTMTR_F32    (-8.0F)

#define PrmFordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_u16  (*(const Ary1D_u16_8 *)      (Rte_Prm_FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_Ary1D()))
#define PrmFordHwTqCmdOvrlLimrCombdTqRateY_u13p3       (*(const Ary1D_u13p3_8 *)    (Rte_Prm_FordHwTqCmdOvrlLimrCombdTqRateY_Ary1D()))
#define PrmFordHwTqCmdOvrlLimrCombdTqSatnY_u13p3       (*(const Ary1D_u13p3_8 *)    (Rte_Prm_FordHwTqCmdOvrlLimrCombdTqSatnY_Ary1D()))
#define PrmFordHwTqCmdOvrlLimrCombdBwY_u13p3           (*(const Ary1D_u13p3_8 *)    (Rte_Prm_FordHwTqCmdOvrlLimrCombdBwY_Ary1D()))

#define PrmFordHwTqCmdOvrlLimrVehSpdBreakPtX_u16       (*(const Ary1D_u16_8 *)      (Rte_Prm_FordHwTqCmdOvrlLimrVehSpdBreakPtX_Ary1D()))
#define PrmFordHwTqCmdOvrlLimrLkaTqSatnY_u13p3         (*(const Ary1D_u13p3_8 *)    (Rte_Prm_FordHwTqCmdOvrlLimrLkaTqSatnY_Ary1D()))
#define PrmFordHwTqCmdOvrlLimrLkaBwY_u13p3             (*(const Ary1D_u13p3_8 *)    (Rte_Prm_FordHwTqCmdOvrlLimrLkaBwY_Ary1D()))
#define PrmFordHwTqCmdOvrlLimrLkaTqRateY_u13p3         (*(const Ary1D_u13p3_8 *)    (Rte_Prm_FordHwTqCmdOvrlLimrLkaTqRateY_Ary1D()))

static FUNC(float32, FordHwTqCmdOvrlLimr_CODE) CalcnLimrVehSpd(VAR(float32, AUTOMATIC) FildVehSpd_Kph_T_f32,
                                                               VAR(boolean, AUTOMATIC) VehSpdVld_Cnt_T_logl);
static FUNC(float32, FordHwTqCmdOvrlLimr_CODE) SigCond(VAR(float32, AUTOMATIC) TqReq_HwNwtMtr_T_f32,
                                                       VAR(FordArbnCmd1, AUTOMATIC) ArbnCmd_Cnt_T_enum,
                                                       VAR(boolean, AUTOMATIC) FctCallSts_Cnt_T_logl);
static FUNC(void, FordHwTqCmdOvrlLimr_CODE) ImcSigf32Procs(VAR(uint16, AUTOMATIC) ImcSigConst_Cnt_T_u16,
                                                           P2VAR(float32, AUTOMATIC,FordHwTqCmdOvrlLimr_CODE) ImcData_Uls_T_f32,
                                                           P2VAR(boolean, AUTOMATIC,FordHwTqCmdOvrlLimr_CODE) ImcSigRtn_Cnt_T_logl);
static FUNC(void, FordHwTqCmdOvrlLimr_CODE) ImcSigloglProcs(VAR(uint16, AUTOMATIC) ImcSigConst_Cnt_T_u16,
                                                           P2VAR(boolean, AUTOMATIC,FordHwTqCmdOvrlLimr_CODE) ImcData_Uls_T_f32,
                                                           P2VAR(boolean, AUTOMATIC,FordHwTqCmdOvrlLimr_CODE) ImcSigRtn_Cnt_T_logl);
static FUNC(void, FordHwTqCmdOvrlLimr_CODE) TqReqAndCallStsProcs(VAR(float32, AUTOMATIC) ImcTqReq_HwNwtMtr_T_f32,
                                                                 VAR(boolean, AUTOMATIC) ImcCallSts_Cnt_T_logl,
                                                                 VAR(boolean, AUTOMATIC) ImcTqReqRtn_Cnt_T_logl,
                                                                 VAR(boolean, AUTOMATIC) ImcCallStsRtn_Cnt_T_logl,
                                                                 P2VAR(float32, AUTOMATIC,FordHwTqCmdOvrlLimr_CODE) TqReq_HwNwtMtr_T_f32,
                                                                 P2VAR(boolean, AUTOMATIC,FordHwTqCmdOvrlLimr_CODE) CallSts_Cnt_T_logl); 
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
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * u13p3: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * FordArbnCmd1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_PASSIVE (0U)
 *   Cx3_ACTIVE (3U)
 *   Cx5_LOCKED (5U)
 *   Cx99_DONT_CARE (99U)
 * ImcArbnRxSts1: Enumeration of integer in interval [0...255] with enumerators
 *   IMCARBNRXSTS_NODATA (0U)
 *   IMCARBNRXSTS_VLD (1U)
 *   IMCARBNRXSTS_INVLD (2U)
 *
 * Array Types:
 * ============
 * Ary1D_u13p3_8: Array with 8 element(s) of type u13p3
 * Ary1D_u16_8: Array with 8 element(s) of type uint16
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_LimrVehSpdPrev(void)
 *   float32 *Rte_Pim_LkaTqReqPrev(void)
 *   float32 *Rte_Pim_PrevDftVehSpd(void)
 *   float32 *Rte_Pim_PrevVehSpd(void)
 *   float32 *Rte_Pim_TqReqPrev(void)
 *   boolean *Rte_Pim_LimrDftVehSpd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRate_Val(void)
 *   float32 Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRcvrRate_Val(void)
 *   u13p3 *Rte_Prm_FordHwTqCmdOvrlLimrCombdBwY_Ary1D(void)
 *     Returnvalue: u13p3* is of type Ary1D_u13p3_8
 *   u13p3 *Rte_Prm_FordHwTqCmdOvrlLimrCombdTqRateY_Ary1D(void)
 *     Returnvalue: u13p3* is of type Ary1D_u13p3_8
 *   u13p3 *Rte_Prm_FordHwTqCmdOvrlLimrCombdTqSatnY_Ary1D(void)
 *     Returnvalue: u13p3* is of type Ary1D_u13p3_8
 *   uint16 *Rte_Prm_FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_Ary1D(void)
 *     Returnvalue: uint16* is of type Ary1D_u16_8
 *   u13p3 *Rte_Prm_FordHwTqCmdOvrlLimrLkaBwY_Ary1D(void)
 *     Returnvalue: u13p3* is of type Ary1D_u13p3_8
 *   u13p3 *Rte_Prm_FordHwTqCmdOvrlLimrLkaTqRateY_Ary1D(void)
 *     Returnvalue: u13p3* is of type Ary1D_u13p3_8
 *   u13p3 *Rte_Prm_FordHwTqCmdOvrlLimrLkaTqSatnY_Ary1D(void)
 *     Returnvalue: u13p3* is of type Ary1D_u13p3_8
 *   uint16 *Rte_Prm_FordHwTqCmdOvrlLimrVehSpdBreakPtX_Ary1D(void)
 *     Returnvalue: uint16* is of type Ary1D_u16_8
 *
 *********************************************************************************************************************/


#define FordHwTqCmdOvrlLimr_START_SEC_CODE
#include "FordHwTqCmdOvrlLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordHwTqCmdOvrlLimrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordHwTqCmdOvrlLimrInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordHwTqCmdOvrlLimr_CODE) FordHwTqCmdOvrlLimrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordHwTqCmdOvrlLimrInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordHwTqCmdOvrlLimrPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_FordDrvrSteerRcmdnArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiArbnCmd_Val(FordArbnCmd1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordColTqOvrl_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnFctCallSts(void)
 *   float32 Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnTqReq(void)
 *   boolean Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiFctCallSts(void)
 *   float32 Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiTqReq(void)
 *   float32 Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_FildVehSpdVal(void)
 *   boolean Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiFctCallSts(void)
 *   float32 Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiTqReq(void)
 *   boolean Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_VehSpdVldVal(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordHwTqCmdOvrlLimrPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordHwTqCmdOvrlLimr_CODE) FordHwTqCmdOvrlLimrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordHwTqCmdOvrlLimrPer1
 *********************************************************************************************************************/
    VAR(float32, AUTOMATIC) LimrVehSpd_Kph_T_f32;
    VAR(FordArbnCmd1, AUTOMATIC) FordDrvrSteerRcmdnArbnCmd_Cnt_T_enum;
    VAR(FordArbnCmd1, AUTOMATIC) FordEvasSteerAssiArbnCmd_Cnt_T_enum;
    VAR(FordArbnCmd1, AUTOMATIC) FordLaneKeepAssiArbnCmd_Cnt_T_enum;
    VAR(float32, AUTOMATIC) LkaCdngTqReq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) DsrCdngTqReq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) EsaCdngTqReq_HwNwtMtr_T_f32;
    VAR(uint16, AUTOMATIC) LimrVehSpd_Kph_T_u13p3;
    VAR(float32, AUTOMATIC) LimrLkaTqSatn_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) LimrLkaMaxTqRate_HwNwtMtrPerSec_T_f32;
    VAR(float32, AUTOMATIC) LimrLkaBw_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) LimdLkaCdngTqReq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) RateLimdLkaBw_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) LkaLimdTqReq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) CombLimrTqSatn_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) CombLimrMaxTqRate_HwNwtMtrPerSec_T_f32;
    VAR(float32, AUTOMATIC) CombLimrBw_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) CombTqReq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) LimdCombTqReq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) RateLimdCombBw_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) FordColTqOvrl_HwNwtMtr_T_f32;
    VAR(boolean, AUTOMATIC) FordDsrFctCallSts_Cnt_T_logl;
    VAR(float32, AUTOMATIC) FordDsrTqReq_HwNwtMtr_T_f32;
    VAR(boolean, AUTOMATIC) FordEsaFctCallSts_Cnt_T_logl;
    VAR(float32, AUTOMATIC) FordEsaTqReq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) FildVehSpd_Kph_T_f32;
    VAR(boolean, AUTOMATIC) FordLkaFctCallSts_Cnt_T_logl;
    VAR(float32, AUTOMATIC) FordLkaTqReq_HwNwtMtr_T_f32;
    VAR(boolean, AUTOMATIC) VehSpdVld_Cnt_T_logl;   

    (void)Rte_Read_FordDrvrSteerRcmdnArbnCmd_Val(&FordDrvrSteerRcmdnArbnCmd_Cnt_T_enum);
    (void)Rte_Read_FordEvasSteerAssiArbnCmd_Val(&FordEvasSteerAssiArbnCmd_Cnt_T_enum);
    (void)Rte_Read_FordLaneKeepAssiArbnCmd_Val(&FordLaneKeepAssiArbnCmd_Cnt_T_enum);
 
    FordDsrFctCallSts_Cnt_T_logl = Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnFctCallSts();
    FordDsrTqReq_HwNwtMtr_T_f32  = Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnTqReq();
    FordEsaFctCallSts_Cnt_T_logl = Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiFctCallSts();
    FordEsaTqReq_HwNwtMtr_T_f32  = Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiTqReq();
    FildVehSpd_Kph_T_f32         = Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_FildVehSpdVal();
    FordLkaFctCallSts_Cnt_T_logl = Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiFctCallSts();
    FordLkaTqReq_HwNwtMtr_T_f32  = Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiTqReq();
    VehSpdVld_Cnt_T_logl         = Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_VehSpdVldVal();
 
    /*** Start of CalcnLimrVehSpd ***/
    LimrVehSpd_Kph_T_f32 = CalcnLimrVehSpd(FildVehSpd_Kph_T_f32,VehSpdVld_Cnt_T_logl);

    LkaCdngTqReq_HwNwtMtr_T_f32 = SigCond(FordLkaTqReq_HwNwtMtr_T_f32,FordLaneKeepAssiArbnCmd_Cnt_T_enum,FordLkaFctCallSts_Cnt_T_logl);
    DsrCdngTqReq_HwNwtMtr_T_f32 = SigCond(FordDsrTqReq_HwNwtMtr_T_f32,FordDrvrSteerRcmdnArbnCmd_Cnt_T_enum,FordDsrFctCallSts_Cnt_T_logl);
    EsaCdngTqReq_HwNwtMtr_T_f32 = SigCond(FordEsaTqReq_HwNwtMtr_T_f32,FordEvasSteerAssiArbnCmd_Cnt_T_enum,FordEsaFctCallSts_Cnt_T_logl);

    /*** Start of LatCtrlTqShapeLimr ***/
    LimrVehSpd_Kph_T_u13p3 =  FloatToFixd_u16_f32(LimrVehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP3_ULS_F32);
    LimrLkaTqSatn_HwNwtMtr_T_f32 = FixdToFloat_f32_u16(LnrIntrpn_u16_u16VariXu16VariY(PrmFordHwTqCmdOvrlLimrVehSpdBreakPtX_u16,
                                                                                      PrmFordHwTqCmdOvrlLimrLkaTqSatnY_u13p3,
                                                                                      (uint16)TblSize_m(PrmFordHwTqCmdOvrlLimrVehSpdBreakPtX_u16),
                                                                                      LimrVehSpd_Kph_T_u13p3), NXTRFIXDPT_P3TOFLOAT_ULS_F32);

    LimrLkaMaxTqRate_HwNwtMtrPerSec_T_f32 = FixdToFloat_f32_u16(LnrIntrpn_u16_u16VariXu16VariY(PrmFordHwTqCmdOvrlLimrVehSpdBreakPtX_u16,
                                                                                               PrmFordHwTqCmdOvrlLimrLkaTqRateY_u13p3,
                                                                                               (uint16)TblSize_m(PrmFordHwTqCmdOvrlLimrVehSpdBreakPtX_u16),
                                                                                               LimrVehSpd_Kph_T_u13p3), NXTRFIXDPT_P3TOFLOAT_ULS_F32);
                                                                                      
    LimrLkaBw_HwNwtMtr_T_f32 = FixdToFloat_f32_u16(LnrIntrpn_u16_u16VariXu16VariY(PrmFordHwTqCmdOvrlLimrVehSpdBreakPtX_u16,
                                                                                  PrmFordHwTqCmdOvrlLimrLkaBwY_u13p3,
                                                                                  (uint16)TblSize_m(PrmFordHwTqCmdOvrlLimrVehSpdBreakPtX_u16),
                                                                                  LimrVehSpd_Kph_T_u13p3), NXTRFIXDPT_P3TOFLOAT_ULS_F32);
    
    LimdLkaCdngTqReq_HwNwtMtr_T_f32 = Lim_f32(LkaCdngTqReq_HwNwtMtr_T_f32,-LimrLkaTqSatn_HwNwtMtr_T_f32,LimrLkaTqSatn_HwNwtMtr_T_f32);
    
    RateLimdLkaBw_HwNwtMtr_T_f32 = Lim_f32( LimdLkaCdngTqReq_HwNwtMtr_T_f32,
                                           (*Rte_Pim_LkaTqReqPrev() + (-LimrLkaMaxTqRate_HwNwtMtrPerSec_T_f32 * ARCHGLBPRM_4MILLISEC_SEC_F32)),
                                           (*Rte_Pim_LkaTqReqPrev() + (LimrLkaMaxTqRate_HwNwtMtrPerSec_T_f32 * ARCHGLBPRM_4MILLISEC_SEC_F32)) );
                                           
    *Rte_Pim_LkaTqReqPrev() = RateLimdLkaBw_HwNwtMtr_T_f32;
    
    LkaLimdTqReq_HwNwtMtr_T_f32 = Lim_f32(LkaCdngTqReq_HwNwtMtr_T_f32,(RateLimdLkaBw_HwNwtMtr_T_f32 - LimrLkaBw_HwNwtMtr_T_f32),(RateLimdLkaBw_HwNwtMtr_T_f32 + LimrLkaBw_HwNwtMtr_T_f32));
    /*** End of LatCtrlTqShapeLimr ***/
    
    /*** Start of CombdTqShapeLimr ***/
    CombLimrTqSatn_HwNwtMtr_T_f32 = FixdToFloat_f32_u16(LnrIntrpn_u16_u16VariXu16VariY(PrmFordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_u16,
                                                                                          PrmFordHwTqCmdOvrlLimrCombdTqSatnY_u13p3,
                                                                                         (uint16)TblSize_m(PrmFordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_u16),
                                                                                          LimrVehSpd_Kph_T_u13p3), NXTRFIXDPT_P3TOFLOAT_ULS_F32);

    CombLimrMaxTqRate_HwNwtMtrPerSec_T_f32 = FixdToFloat_f32_u16(LnrIntrpn_u16_u16VariXu16VariY(PrmFordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_u16,
                                                                                                   PrmFordHwTqCmdOvrlLimrCombdTqRateY_u13p3,
                                                                                                   (uint16)TblSize_m(PrmFordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_u16),
                                                                                                   LimrVehSpd_Kph_T_u13p3), NXTRFIXDPT_P3TOFLOAT_ULS_F32);
                                                                                      
    CombLimrBw_HwNwtMtr_T_f32 = FixdToFloat_f32_u16(LnrIntrpn_u16_u16VariXu16VariY(PrmFordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_u16,
                                                                                      PrmFordHwTqCmdOvrlLimrCombdBwY_u13p3,
                                                                                      (uint16)TblSize_m(PrmFordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_u16),
                                                                                      LimrVehSpd_Kph_T_u13p3), NXTRFIXDPT_P3TOFLOAT_ULS_F32);
    
    CombTqReq_HwNwtMtr_T_f32 = (LkaLimdTqReq_HwNwtMtr_T_f32 + DsrCdngTqReq_HwNwtMtr_T_f32 + EsaCdngTqReq_HwNwtMtr_T_f32);
    
    LimdCombTqReq_HwNwtMtr_T_f32 = Lim_f32(CombTqReq_HwNwtMtr_T_f32,-CombLimrTqSatn_HwNwtMtr_T_f32,CombLimrTqSatn_HwNwtMtr_T_f32);
    
    RateLimdCombBw_HwNwtMtr_T_f32 = Lim_f32( LimdCombTqReq_HwNwtMtr_T_f32,
                                             (*Rte_Pim_TqReqPrev() + (-CombLimrMaxTqRate_HwNwtMtrPerSec_T_f32 * ARCHGLBPRM_4MILLISEC_SEC_F32)),
                                             (*Rte_Pim_TqReqPrev() + (CombLimrMaxTqRate_HwNwtMtrPerSec_T_f32 * ARCHGLBPRM_4MILLISEC_SEC_F32)) );
                                             
    *Rte_Pim_TqReqPrev() = RateLimdCombBw_HwNwtMtr_T_f32;
    
    FordColTqOvrl_HwNwtMtr_T_f32 = Lim_f32(CombTqReq_HwNwtMtr_T_f32,(RateLimdCombBw_HwNwtMtr_T_f32 - CombLimrBw_HwNwtMtr_T_f32),(CombLimrBw_HwNwtMtr_T_f32 + RateLimdCombBw_HwNwtMtr_T_f32));
    /*** End of CombdTqShapeLimr ***/

    FordColTqOvrl_HwNwtMtr_T_f32 = Lim_f32(FordColTqOvrl_HwNwtMtr_T_f32,FORDMOTTQOVRLMINVAL_MOTNWTMTR_F32,FORDMOTTQOVRLMAXVAL_MOTNWTMTR_F32);

    (void)Rte_Write_FordColTqOvrl_Val(FordColTqOvrl_HwNwtMtr_T_f32);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordHwTqCmdOvrlLimrPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EcuId_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FildVehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordDrvrSteerRcmdnFctCallSts_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordDrvrSteerRcmdnTqReq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiFctCallSts_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiTqReq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiFctCallSts_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiTqReq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnFctCallSts(boolean data)
 *   void Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnTqReq(float32 data)
 *   void Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiFctCallSts(boolean data)
 *   void Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiTqReq(float32 data)
 *   void Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_FildVehSpdVal(float32 data)
 *   void Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiFctCallSts(boolean data)
 *   void Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiTqReq(float32 data)
 *   void Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_VehSpdVldVal(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetSigImcData_f32_Oper(uint16 SigId_Arg, float32 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_f32_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetSigImcData_logl_Oper(uint16 SigId_Arg, boolean *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordHwTqCmdOvrlLimrPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordHwTqCmdOvrlLimr_CODE) FordHwTqCmdOvrlLimrPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordHwTqCmdOvrlLimrPer2
 *********************************************************************************************************************/
    VAR(uint8, AUTOMATIC) EcuId_Cnt_T_u08;
    VAR(boolean, AUTOMATIC) ImcFildVehSpdRtn_Cnt_T_logl = FALSE;
    VAR(float32, AUTOMATIC) ImcFildVehSpd_Kph_T_f32;

    VAR(boolean, AUTOMATIC) ImcFordLkaTqReqRtn_Cnt_T_logl = FALSE;
    VAR(float32, AUTOMATIC) ImcFordLkaTqReq_HwNwtMtr_T_f32;

    VAR(boolean, AUTOMATIC) ImcFordDsrTqReqRtn_Cnt_T_logl = FALSE;
    VAR(float32, AUTOMATIC) ImcFordDsrTqReq_HwNwtMtr_T_f32;

    VAR(boolean, AUTOMATIC) ImcFordEsaTqReqRtn_Cnt_T_logl = FALSE;
    VAR(float32, AUTOMATIC) ImcFordEsaTqReq_HwNwtMtr_T_f32;

    VAR(boolean, AUTOMATIC) ImcVehSpdVldRtn_Cnt_T_logl = FALSE;
    VAR(boolean, AUTOMATIC) ImcVehSpdVldSig_Cnt_T_logl;

    VAR(boolean, AUTOMATIC) ImcFordLkaFctCallStsRtn_Cnt_T_logl = FALSE;
    VAR(boolean, AUTOMATIC) ImcFordLkaFctCallSts_Cnt_T_logl;

    VAR(boolean, AUTOMATIC) ImcFordDsrFctCallStsRtn_Cnt_T_logl = FALSE;
    VAR(boolean, AUTOMATIC) ImcFordDsrFctCallSts_Cnt_T_logl;

    VAR(boolean, AUTOMATIC) ImcFordEsaFctCallStsRtn_Cnt_T_logl = FALSE;
    VAR(boolean, AUTOMATIC) ImcFordEsaFctCallSts_Cnt_T_logl;

    VAR(float32, AUTOMATIC) FordLkaTqReq_HwNwtMtr_T_f32 = 0.0F;
    VAR(boolean, AUTOMATIC) FordLkaFctCallSts_Cnt_T_logl = TRUE;
    VAR(float32, AUTOMATIC) FordDsrTqReq_HwNwtMtr_T_f32 = 0.0F;
    VAR(boolean, AUTOMATIC) FordDsrFctCallSts_Cnt_T_logl = TRUE;
    VAR(float32, AUTOMATIC) FordEsaTqReq_HwNwtMtr_T_f32 = 0.0F;
    VAR(boolean, AUTOMATIC) FordEsaFctCallSts_Cnt_T_logl = TRUE;
    VAR(float32, AUTOMATIC) FildVehSpd_Kph_T_f32; 
    VAR(boolean, AUTOMATIC) VehSpdVld_Cnt_T_logl;

    (void)Rte_Read_EcuId_Val(&EcuId_Cnt_T_u08);

    if(EcuId_Cnt_T_u08 == ECUID2_CNT_U08)
    {
        /* EcuId2 */
        ImcSigf32Procs(IMCARBN_FORDHWTQCMDOVRLLIMRFILDVEHSPD_CNT_U16,&ImcFildVehSpd_Kph_T_f32,&ImcFildVehSpdRtn_Cnt_T_logl);
        ImcSigf32Procs(IMCARBN_FORDHWTQCMDOVRLLIMRLKATQREQ_CNT_U16,&ImcFordLkaTqReq_HwNwtMtr_T_f32,&ImcFordLkaTqReqRtn_Cnt_T_logl);
        ImcSigf32Procs(IMCARBN_FORDHWTQCMDOVRLLIMRDSRTQREQ_CNT_U16,&ImcFordDsrTqReq_HwNwtMtr_T_f32,&ImcFordDsrTqReqRtn_Cnt_T_logl);
        ImcSigf32Procs(IMCARBN_FORDHWTQCMDOVRLLIMRESATQREQ_CNT_U16,&ImcFordEsaTqReq_HwNwtMtr_T_f32,&ImcFordEsaTqReqRtn_Cnt_T_logl);

        ImcSigloglProcs(IMCARBN_FORDHWTQCMDOVRLLIMRVEHSPDVLD_CNT_U16,&ImcVehSpdVldSig_Cnt_T_logl,&ImcVehSpdVldRtn_Cnt_T_logl);
        ImcSigloglProcs(IMCARBN_FORDHWTQCMDOVRLLIMRLKAFCTCALLSTS_CNT_U16,&ImcFordLkaFctCallSts_Cnt_T_logl,&ImcFordLkaFctCallStsRtn_Cnt_T_logl);
        ImcSigloglProcs(IMCARBN_FORDHWTQCMDOVRLLIMRDSRFCTCALLSTS_CNT_U16,&ImcFordDsrFctCallSts_Cnt_T_logl,&ImcFordDsrFctCallStsRtn_Cnt_T_logl);
        ImcSigloglProcs(IMCARBN_FORDHWTQCMDOVRLLIMRESAFCTCALLSTS_CNT_U16,&ImcFordEsaFctCallSts_Cnt_T_logl,&ImcFordEsaFctCallStsRtn_Cnt_T_logl);

        /* Lka TqReq and Call Sts processing */
        TqReqAndCallStsProcs(ImcFordLkaTqReq_HwNwtMtr_T_f32,
                             ImcFordLkaFctCallSts_Cnt_T_logl,
                             ImcFordLkaTqReqRtn_Cnt_T_logl,
                             ImcFordLkaFctCallStsRtn_Cnt_T_logl,
                             &FordLkaTqReq_HwNwtMtr_T_f32,
                             &FordLkaFctCallSts_Cnt_T_logl);
    
        /* Dsr TqReq and Call Sts processing */
        TqReqAndCallStsProcs(ImcFordDsrTqReq_HwNwtMtr_T_f32,
                             ImcFordDsrFctCallSts_Cnt_T_logl,
                             ImcFordDsrTqReqRtn_Cnt_T_logl,
                             ImcFordDsrFctCallStsRtn_Cnt_T_logl,
                             &FordDsrTqReq_HwNwtMtr_T_f32,
                             &FordDsrFctCallSts_Cnt_T_logl);
        
        /* Esa TqReq and Call Sts processing */
        TqReqAndCallStsProcs(ImcFordEsaTqReq_HwNwtMtr_T_f32,
                             ImcFordEsaFctCallSts_Cnt_T_logl,
                             ImcFordEsaTqReqRtn_Cnt_T_logl,
                             ImcFordEsaFctCallStsRtn_Cnt_T_logl,
                             &FordEsaTqReq_HwNwtMtr_T_f32,
                             &FordEsaFctCallSts_Cnt_T_logl);

        FildVehSpd_Kph_T_f32 = ImcFildVehSpd_Kph_T_f32;
        VehSpdVld_Cnt_T_logl = ImcVehSpdVldSig_Cnt_T_logl;
    }
    else if(EcuId_Cnt_T_u08 == ECUIDINVLD_CNT_U08)
    {
        /* EcuIdInvld */
        FildVehSpd_Kph_T_f32 = IMCFILDVEHSPDDFTVAL_KPH_F32;
        VehSpdVld_Cnt_T_logl = FALSE;
    }
    else
    {
        /* EcuId1 */
        (void)Rte_Read_FildVehSpd_Val(&FildVehSpd_Kph_T_f32);
        (void)Rte_Read_FordDrvrSteerRcmdnFctCallSts_Logl(&FordDsrFctCallSts_Cnt_T_logl);
        (void)Rte_Read_FordDrvrSteerRcmdnTqReq_Val(&FordDsrTqReq_HwNwtMtr_T_f32);
        (void)Rte_Read_FordEvasSteerAssiFctCallSts_Logl(&FordEsaFctCallSts_Cnt_T_logl);
        (void)Rte_Read_FordEvasSteerAssiTqReq_Val(&FordEsaTqReq_HwNwtMtr_T_f32);
        (void)Rte_Read_FordLaneKeepAssiFctCallSts_Logl(&FordLkaFctCallSts_Cnt_T_logl);
        (void)Rte_Read_FordLaneKeepAssiTqReq_Val(&FordLkaTqReq_HwNwtMtr_T_f32);
        (void)Rte_Read_VehSpdVld_Logl(&VehSpdVld_Cnt_T_logl);
    }

    (void)Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnFctCallSts(FordDsrFctCallSts_Cnt_T_logl);
    (void)Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnTqReq(FordDsrTqReq_HwNwtMtr_T_f32);
    (void)Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiFctCallSts(FordEsaFctCallSts_Cnt_T_logl);
    (void)Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiTqReq(FordEsaTqReq_HwNwtMtr_T_f32);
    (void)Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_FildVehSpdVal(FildVehSpd_Kph_T_f32);
    (void)Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiFctCallSts(FordLkaFctCallSts_Cnt_T_logl);
    (void)Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiTqReq(FordLkaTqReq_HwNwtMtr_T_f32);
    (void)Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_VehSpdVldVal(VehSpdVld_Cnt_T_logl);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordHwTqCmdOvrlLimr_STOP_SEC_CODE
#include "FordHwTqCmdOvrlLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*************************************************************************************************************************
* Name         : CalcnLimrVehSpd
* Description  : Implements the 'CalcnLimrVehSpd' block in FDD FordHwTqCmdOvrlLimr/FordHwTqCmdOvrlLimrPer1/CalcnLimrVehSpd
* Inputs       : FildVehSpd_Kph_T_f32, VehSpdVld_Cnt_T_logl
* Outputs      : LimrVehSpd_Kph_T_f32
* Usage Notes  : None
**************************************************************************************************************************/
static FUNC(float32, FordHwTqCmdOvrlLimr_CODE) CalcnLimrVehSpd(VAR(float32, AUTOMATIC) FildVehSpd_Kph_T_f32,
                                                               VAR(boolean, AUTOMATIC) VehSpdVld_Cnt_T_logl)
{
    VAR(float32, AUTOMATIC) LimrVehSpd_Kph_T_f32;
    VAR(float32, AUTOMATIC) LimrVehSpdRateLimd_Kph_T_f32;

    if((*Rte_Pim_LimrDftVehSpd() == FALSE)&&(VehSpdVld_Cnt_T_logl == TRUE)) 
    {
        /* PassThru */
        LimrVehSpd_Kph_T_f32 = FildVehSpd_Kph_T_f32;
    }
    else if(VehSpdVld_Cnt_T_logl == FALSE)
    {
        /* RampLimrVehSpd */
        *Rte_Pim_LimrDftVehSpd() = TRUE;
        LimrVehSpd_Kph_T_f32 = Lim_f32(  *Rte_Pim_LimrVehSpdPrev(),
                                        (*Rte_Pim_PrevDftVehSpd() + (-Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRate_Val() * ARCHGLBPRM_4MILLISEC_SEC_F32)),
                                        (*Rte_Pim_PrevDftVehSpd() + (Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRate_Val() * ARCHGLBPRM_4MILLISEC_SEC_F32)) );
        *Rte_Pim_PrevDftVehSpd() = LimrVehSpd_Kph_T_f32;
    }
    else
    {
        /* RateLimrVehSpd */
        LimrVehSpdRateLimd_Kph_T_f32 = Lim_f32( FildVehSpd_Kph_T_f32,
                                        (*Rte_Pim_PrevVehSpd() + (-Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRcvrRate_Val() * ARCHGLBPRM_4MILLISEC_SEC_F32)),
                                        (*Rte_Pim_PrevVehSpd() + (Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRcvrRate_Val() * ARCHGLBPRM_4MILLISEC_SEC_F32)) );
        *Rte_Pim_PrevVehSpd() = LimrVehSpdRateLimd_Kph_T_f32;
        
        if(Abslt_f32_f32(FildVehSpd_Kph_T_f32 - LimrVehSpdRateLimd_Kph_T_f32) < SPDDIFTHD_KPH_F32)
        {
            LimrVehSpd_Kph_T_f32 = FildVehSpd_Kph_T_f32;
            *Rte_Pim_LimrDftVehSpd() = FALSE;
        }
        else
        {
            LimrVehSpd_Kph_T_f32 = LimrVehSpdRateLimd_Kph_T_f32;
            *Rte_Pim_LimrDftVehSpd() = TRUE;
        }
    }

    *Rte_Pim_LimrVehSpdPrev() = LimrVehSpd_Kph_T_f32;
    return(LimrVehSpd_Kph_T_f32);
}
/*****************************************************************************************************************
* Name         : SigCond
* Description  : Implements the 'SigCond' block in FDD FordHwTqCmdOvrlLimr/FordHwTqCmdOvrlLimrPer1/SigCond
* Inputs       : TqReq_HwNwtMtr_T_f32, ArbnCmd_Cnt_T_enum,FctCallSts_Cnt_T_logl
* Outputs      : CdngTqReq_HwNwtMtr_T_f32
* Usage Notes  : None
****************************************************************************************************************/
static FUNC(float32, FordHwTqCmdOvrlLimr_CODE) SigCond(VAR(float32, AUTOMATIC) TqReq_HwNwtMtr_T_f32,
                                                       VAR(FordArbnCmd1, AUTOMATIC) ArbnCmd_Cnt_T_enum,
                                                       VAR(boolean, AUTOMATIC) FctCallSts_Cnt_T_logl)
{
    VAR(float32, AUTOMATIC) CdngTqReq_HwNwtMtr_T_f32;

    if((ArbnCmd_Cnt_T_enum == Cx5_LOCKED)||(FctCallSts_Cnt_T_logl == TRUE))
    {
        CdngTqReq_HwNwtMtr_T_f32 = TQREQDFTVAL_HWNWTMTR_F32;
    }
    else
    {
        CdngTqReq_HwNwtMtr_T_f32 = TqReq_HwNwtMtr_T_f32;
    }

    return(CdngTqReq_HwNwtMtr_T_f32);
}
/*****************************************************************************************************************
* Name         : ImcSigf32Procs
* Description  : 
* Inputs       : ImcSigRtn_Cnt_T_logl, ImcSigConst_Cnt_T_u16,ImcData_Uls_T_f32
* Outputs      : *ImcData_Uls_T_f32, *ImcSigRtn_Cnt_T_logl
* Usage Notes  : None
****************************************************************************************************************/
static FUNC(void, FordHwTqCmdOvrlLimr_CODE) ImcSigf32Procs(VAR(uint16, AUTOMATIC) ImcSigConst_Cnt_T_u16,
                                                           P2VAR(float32, AUTOMATIC,FordHwTqCmdOvrlLimr_CODE) ImcData_Uls_T_f32,
                                                           P2VAR(boolean, AUTOMATIC,FordHwTqCmdOvrlLimr_CODE) ImcSigRtn_Cnt_T_logl)
{
    VAR(Std_ReturnType, AUTOMATIC) ImcSigRtn_Cnt_T_enum;
    VAR(ImcArbnRxSts1, AUTOMATIC) ImcSigSts_Cnt_T_enum;
    
    ImcSigRtn_Cnt_T_enum = Rte_Call_GetSigImcData_f32_Oper(ImcSigConst_Cnt_T_u16,
                                                           ImcData_Uls_T_f32,
                                                           &ImcSigSts_Cnt_T_enum);
    if(ImcSigRtn_Cnt_T_enum != E_NOT_OK)
    {
        *ImcSigRtn_Cnt_T_logl = TRUE;
    }
}
/*****************************************************************************************************************
* Name         : ImcSigloglProcs
* Description  : 
* Inputs       : ImcSigRtn_Cnt_T_logl, ImcSigConst_Cnt_T_u16,ImcData_Uls_T_f32
* Outputs      : *ImcData_Uls_T_f32, *ImcSigRtn_Cnt_T_logl
* Usage Notes  : None
****************************************************************************************************************/
static FUNC(void, FordHwTqCmdOvrlLimr_CODE) ImcSigloglProcs(VAR(uint16, AUTOMATIC) ImcSigConst_Cnt_T_u16,
                                                           P2VAR(boolean, AUTOMATIC,FordHwTqCmdOvrlLimr_CODE) ImcData_Uls_T_f32,
                                                           P2VAR(boolean, AUTOMATIC,FordHwTqCmdOvrlLimr_CODE) ImcSigRtn_Cnt_T_logl)
{
    VAR(Std_ReturnType, AUTOMATIC) ImcSigRtn_Cnt_T_enum;
    VAR(ImcArbnRxSts1, AUTOMATIC) ImcSigSts_Cnt_T_enum;
    
    ImcSigRtn_Cnt_T_enum = Rte_Call_GetSigImcData_logl_Oper(ImcSigConst_Cnt_T_u16,
                                                           ImcData_Uls_T_f32,
                                                           &ImcSigSts_Cnt_T_enum);
    if(ImcSigRtn_Cnt_T_enum != E_NOT_OK)
    {
        *ImcSigRtn_Cnt_T_logl = TRUE;
    }
}
/*****************************************************************************************************************
* Name         : TqReqAndCallStsProcs
* Description  : 
* Inputs       : ImcTqReq_HwNwtMtr_T_f32, ImcCallSts_Cnt_T_logl,ImcTqReqRtn_Cnt_T_logl,ImcCallStsRtn_Cnt_T_logl
* Outputs      : TqReq_HwNwtMtr_T_f32,CallSts_Cnt_T_logl
* Usage Notes  : None
****************************************************************************************************************/
static FUNC(void, FordHwTqCmdOvrlLimr_CODE) TqReqAndCallStsProcs(VAR(float32, AUTOMATIC) ImcTqReq_HwNwtMtr_T_f32,
                                                                 VAR(boolean, AUTOMATIC) ImcCallSts_Cnt_T_logl,
                                                                 VAR(boolean, AUTOMATIC) ImcTqReqRtn_Cnt_T_logl,
                                                                 VAR(boolean, AUTOMATIC) ImcCallStsRtn_Cnt_T_logl,
                                                                 P2VAR(float32, AUTOMATIC,FordHwTqCmdOvrlLimr_CODE) TqReq_HwNwtMtr_T_f32,
                                                                 P2VAR(boolean, AUTOMATIC,FordHwTqCmdOvrlLimr_CODE) CallSts_Cnt_T_logl)
{
    if(ImcTqReqRtn_Cnt_T_logl == TRUE) 
    {
        *TqReq_HwNwtMtr_T_f32 = ImcTqReq_HwNwtMtr_T_f32;
    }

    if(ImcCallStsRtn_Cnt_T_logl == TRUE)
    {
        *CallSts_Cnt_T_logl = ImcCallSts_Cnt_T_logl;
    }
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
