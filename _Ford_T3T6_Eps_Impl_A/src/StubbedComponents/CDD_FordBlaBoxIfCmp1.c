/* TODO Stub file remove later */
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_FordBlaBoxIfCmp1.c
 *        Config:  C:/Synery_Projects/Working/EA4/CF111A_FordBlaBoxIfCmp1_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_FordBlaBoxIfCmp1
 *  Generated at:  Mon May  7 11:17:43 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_FordBlaBoxIfCmp1>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name  : CDD_FordBlaBoxIfCmp1.c
* Module Description: Implementation of CF111A
* Project           : CBD
* Author            : Anu Keechery
***********************************************************************************************************************
* Version Control:
* %version          : 1 %
* %derived_by       : nz2728 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/27/18  1        AK        Initial Version                                                                 EA4#22951
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
 * FordFeatSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Ford_LatCtlLim_D_Stat
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Ford_LatCtlSte_D_Stat
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * s4p11
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * s8p7
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * u8p8
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u9p7
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_CDD_FordBlaBoxIfCmp1.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "fih_interfaces.h"
#include "NxtrFixdPt.h"

#define ECUID1_CNT_U08 (1U)
#define TQOFFSMINLIM_HWNM_F32	(0.0F)
#define TQOFFSMAXLIM_HWNM_F32	(230.0F)

#define PimActvNiblCtrl_u08     (*(Ary1D_u08_128 *)(Rte_Pim_ActvNiblCtrl()))
#define PimPullDriftCmp_u08     (*(Ary1D_u08_128 *)(Rte_Pim_PullDriftCmp()))
#define PimLaneAssi_u08      	(*(Ary1D_u08_256 *)(Rte_Pim_LaneAssi()))

#define AssiMotTqWhlImbRejctnMinX_u8p8		(*(const Ary2D_u8p8_12_20 *)(Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D()))
#define AssiMotTqWhlImbRejctnMinY_s4p11		(*(const Ary2D_s4p11_12_20 *)(Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D()))
#define PimTqOffsTbl_u8p8					(*(Ary2D_u8p8_12_20*)(Rte_Pim_TqOffsTbl()))		

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
 * Boolean: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * s4p11: Integer in interval [-32768...32767]
 * s8p7: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * FordArbnCmd1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_PASSIVE (0U)
 *   Cx3_ACTIVE (3U)
 *   Cx5_LOCKED (5U)
 *   Cx99_DONT_CARE (99U)
 * FordFeatSt1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_PASSIVE (0U)
 *   Cx1_ACTIVATION_REQUEST (1U)
 *   Cx2_RAMP_IN_REQUEST (2U)
 *   Cx3_ACTIVE (3U)
 *   Cx4_RAMP_OUT_REQUEST (4U)
 *   Cx5_LOCKED (5U)
 * Ford_LatCtlLim_D_Stat: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_LimitNotReached (0U)
 *   Cx1_LimitClose (1U)
 *   Cx2_LimitReached (2U)
 *   Cx3_LimitWithDriverActive (3U)
 * Ford_LatCtlSte_D_Stat: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_Unavailable (0U)
 *   Cx1_Available (1U)
 *   Cx2_ContLatControlInProgress (2U)
 *   Cx3_RampOut (3U)
 *   Cx4_Denied (4U)
 *   Cx5_NotUsed1 (5U)
 *   Cx6_NotUsed2 (6U)
 *   Cx7_NotUsed3 (7U)
 *
 * Array Types:
 * ============
 * Ary1D_s4p11_20: Array with 20 element(s) of type s4p11
 * Ary1D_u08_128: Array with 128 element(s) of type uint8
 * Ary1D_u08_256: Array with 256 element(s) of type uint8
 * Ary1D_u08_512: Array with 512 element(s) of type uint8
 * Ary1D_u8p8_20: Array with 20 element(s) of type u8p8
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 * Ary2D_s4p11_12_20: Array with 12 element(s) of type Ary1D_s4p11_20
 * Ary2D_u8p8_12_20: Array with 12 element(s) of type Ary1D_u8p8_20
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   boolean *Rte_Pim_PullDriftCmpFctCallSel(void)
 *   boolean *Rte_Pim_TrlrBackAssiFctCallSel(void)
 *   uint8 *Rte_Pim_ActvNiblCtrl(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_128
 *   uint8 *Rte_Pim_LaneAssi(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_256
 *   uint8 *Rte_Pim_PullDriftCmp(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_128
 *   u8p8 *Rte_Pim_TqOffsTbl(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_12_20
 *   uint8 *Rte_Pim_TrlrBackupAssi(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_512
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   uint8 *Rte_CData_ActvNiblCtrlDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_128
 *   uint8 *Rte_CData_LaneAssiDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_256
 *   uint8 *Rte_CData_PullDriftCmpDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_128
 *   uint8 *Rte_CData_TrlrBackupAssiDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_512
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_SysGlbPrmSysKineRat_Val(void)
 *   u8p8 *Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_12_20
 *   s4p11 *Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D(void)
 *     Returnvalue: s4p11* is of type Ary2D_s4p11_12_20
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *
 *********************************************************************************************************************/


#define CDD_FordBlaBoxIfCmp1_START_SEC_CODE
#include "CDD_FordBlaBoxIfCmp1_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordBlaBoxIfCmp1Init1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EcuId_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordActvNiblCtrlArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordActvNiblCtrlDiagcSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordLaneDprtrWarnArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordLatCtrlArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpLrngArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordSrvLaneDprtrWarnDiagcSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordSrvPullDriftCmpRstVal_Val(s8p7 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvActvNiblCmpIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvLaneDprtrWarnIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvLaneKeepAssiIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvLatCtrlIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvPullDriftCmpIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvTrlrBackupAssiIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ActvNiblCmpIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordActvNiblCtrlFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordActvNiblCtrlSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordActvNiblCtrlTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordBlaBoxSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordLaneAssiSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordLaneDprtrWarnFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordLaneDprtrWarnTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordLaneKeepAssiFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordLaneKeepAssiTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordLatCtrlFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordLatCtrlTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpLrngFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordResrchFctSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordTrlrBackupAssiSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp1HiPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp1LoPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp2HiPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp2LoPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp3HiPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp3LoPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp4HiPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp4LoPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehLaneAssiAvl_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLaneAssiHandsOff_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLaneAssiRejctn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlLimSts_Val(Ford_LatCtlLim_D_Stat data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlSteerSts_Val(Ford_LatCtlSte_D_Stat data)
 *   Std_ReturnType Rte_Write_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLoSpdMtnCtrlBrkTqReq_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehTrfcJamAvdHandsOnConf_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAgTarCalcn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidAgMax_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidAgOffs_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidAgWarn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidEnaSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidHitchToAxle_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidMsgTxtReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidSetUp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidTarIdn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidTrlrIdn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrHitchLampReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehVelMaxReqTrlrAid_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehVelTrlrAidReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LaneDprtrWarnIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LaneKeepAssiIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LatCtrlIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_PullDriftCmpIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_SrvPullDriftCmpAct_Val(s8p7 data)
 *   Std_ReturnType Rte_Write_SrvPullDriftCmpRstVal_Val(s8p7 data)
 *   Std_ReturnType Rte_Write_TrlrBackupAssiIntSts_Val(uint32 data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ActvNiblCtrl_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_LaneAssi_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_PullDriftCmp_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_TrlrBackupAssi_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordBlaBoxIfCmp1Init1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_FordBlaBoxIfCmp1_CODE) FordBlaBoxIfCmp1Init1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordBlaBoxIfCmp1Init1
 *********************************************************************************************************************/
VAR(uint8, AUTOMATIC) EcuId_Cnt_T_u08;
VAR(uint16, AUTOMATIC) RowIdx_Cnt_T_u16;
VAR(uint16, AUTOMATIC) ColIdx_Cnt_T_u16;
VAR(float32, AUTOMATIC) TqOffs_HwNm_T_f32;

(void)Rte_Read_EcuId_Val(&EcuId_Cnt_T_u08);

if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
{
	for( RowIdx_Cnt_T_u16 = 0U; RowIdx_Cnt_T_u16 < TblSize_m(PimTqOffsTbl_u8p8); RowIdx_Cnt_T_u16++ )
	{
		for( ColIdx_Cnt_T_u16 = 0U; ColIdx_Cnt_T_u16 < TblSize_m(PimTqOffsTbl_u8p8[0]); ColIdx_Cnt_T_u16++ )
		{
			TqOffs_HwNm_T_f32 = FixdToFloat_f32_s16(AssiMotTqWhlImbRejctnMinY_s4p11[RowIdx_Cnt_T_u16][ColIdx_Cnt_T_u16], NXTRFIXDPT_P11TOFLOAT_ULS_F32) * Rte_Prm_SysGlbPrmSysKineRat_Val();
			TqOffs_HwNm_T_f32 = Lim_f32(TqOffs_HwNm_T_f32, TQOFFSMINLIM_HWNM_F32, TQOFFSMAXLIM_HWNM_F32);
			TqOffs_HwNm_T_f32 += FixdToFloat_f32_u16(AssiMotTqWhlImbRejctnMinX_u8p8[RowIdx_Cnt_T_u16][ColIdx_Cnt_T_u16], NXTRFIXDPT_P8TOFLOAT_ULS_F32);
			PimTqOffsTbl_u8p8[RowIdx_Cnt_T_u16][ColIdx_Cnt_T_u16] = FloatToFixd_u16_f32(TqOffs_HwNm_T_f32, NXTRFIXDPT_FLOATTOP8_ULS_F32);
		}
	}
	
	(void) Rte_Call_ActvNiblCtrl_SetRamBlockStatus(TRUE);
	(void) Rte_Call_LaneAssi_SetRamBlockStatus(TRUE);
	(void) Rte_Call_PullDriftCmp_SetRamBlockStatus(TRUE);

	FIH_ANC_init();
	FIH_PDC_init();
	FIH_LA_init();
	FIH_SW_init();
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordBlaBoxIfCmp1Per1
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
 *   Std_ReturnType Rte_Read_FordActvNiblCtrlArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordActvNiblCtrlDiagcSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordLaneDprtrWarnArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordLatCtrlArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpLrngArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordSrvLaneDprtrWarnDiagcSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordSrvPullDriftCmpRstVal_Val(s8p7 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvActvNiblCmpIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvLaneDprtrWarnIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvLaneKeepAssiIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvLatCtrlIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvPullDriftCmpIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvTrlrBackupAssiIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ActvNiblCmpIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordActvNiblCtrlFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordActvNiblCtrlSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordActvNiblCtrlTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordBlaBoxSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordLaneAssiSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordLaneDprtrWarnFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordLaneDprtrWarnTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordLaneKeepAssiFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordLaneKeepAssiTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordLatCtrlFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordLatCtrlTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpLrngFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordResrchFctSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordTrlrBackupAssiSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp1HiPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp1LoPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp2HiPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp2LoPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp3HiPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp3LoPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp4HiPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp4LoPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehLaneAssiAvl_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLaneAssiHandsOff_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLaneAssiRejctn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlLimSts_Val(Ford_LatCtlLim_D_Stat data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlSteerSts_Val(Ford_LatCtlSte_D_Stat data)
 *   Std_ReturnType Rte_Write_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLoSpdMtnCtrlBrkTqReq_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehTrfcJamAvdHandsOnConf_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAgTarCalcn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidAgMax_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidAgOffs_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidAgWarn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidEnaSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidHitchToAxle_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidMsgTxtReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidSetUp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidTarIdn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidTrlrIdn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrHitchLampReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehVelMaxReqTrlrAid_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehVelTrlrAidReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LaneDprtrWarnIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LaneKeepAssiIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LatCtrlIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_PullDriftCmpIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_SrvPullDriftCmpAct_Val(s8p7 data)
 *   Std_ReturnType Rte_Write_SrvPullDriftCmpRstVal_Val(s8p7 data)
 *   Std_ReturnType Rte_Write_TrlrBackupAssiIntSts_Val(uint32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordBlaBoxIfCmp1Per1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_FordBlaBoxIfCmp1_CODE) FordBlaBoxIfCmp1Per1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordBlaBoxIfCmp1Per1
 *********************************************************************************************************************/
VAR(uint8, AUTOMATIC) EcuId_Cnt_T_u08;
(void)Rte_Read_EcuId_Val(&EcuId_Cnt_T_u08);

if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
{
	/* Called every 4ms*/
	FIH_ANC_function();
	FIH_LA_function();
	
	if(*Rte_Pim_PullDriftCmpFctCallSel() == FALSE)
	{
		*Rte_Pim_PullDriftCmpFctCallSel() = TRUE;
	}
	else
	{
		/*Called every 8ms*/
		FIH_PDC_function();
		*Rte_Pim_PullDriftCmpFctCallSel() = FALSE;
	}
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordBlaBoxIfCmp1Per2
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
 *   Std_ReturnType Rte_Read_EcuId_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordActvNiblCtrlArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordActvNiblCtrlDiagcSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordLaneDprtrWarnArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordLatCtrlArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpLrngArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordSrvLaneDprtrWarnDiagcSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordSrvPullDriftCmpRstVal_Val(s8p7 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvActvNiblCmpIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvLaneDprtrWarnIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvLaneKeepAssiIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvLatCtrlIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvPullDriftCmpIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvTrlrBackupAssiIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ActvNiblCmpIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordActvNiblCtrlFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordActvNiblCtrlSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordActvNiblCtrlTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordBlaBoxSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordLaneAssiSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordLaneDprtrWarnFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordLaneDprtrWarnTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordLaneKeepAssiFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordLaneKeepAssiTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordLatCtrlFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordLatCtrlTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpLrngFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordResrchFctSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordTrlrBackupAssiSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp1HiPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp1LoPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp2HiPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp2LoPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp3HiPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp3LoPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp4HiPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehBBMsgOutp4LoPart_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordVehLaneAssiAvl_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLaneAssiHandsOff_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLaneAssiRejctn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlLimSts_Val(Ford_LatCtlLim_D_Stat data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlSteerSts_Val(Ford_LatCtlSte_D_Stat data)
 *   Std_ReturnType Rte_Write_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLoSpdMtnCtrlBrkTqReq_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehTrfcJamAvdHandsOnConf_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAgTarCalcn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidAgMax_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidAgOffs_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidAgWarn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidEnaSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidHitchToAxle_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidMsgTxtReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidSetUp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidTarIdn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidTrlrIdn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrHitchLampReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehVelMaxReqTrlrAid_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehVelTrlrAidReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LaneDprtrWarnIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LaneKeepAssiIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_LatCtrlIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_PullDriftCmpIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_SrvPullDriftCmpAct_Val(s8p7 data)
 *   Std_ReturnType Rte_Write_SrvPullDriftCmpRstVal_Val(s8p7 data)
 *   Std_ReturnType Rte_Write_TrlrBackupAssiIntSts_Val(uint32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordBlaBoxIfCmp1Per2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_FordBlaBoxIfCmp1_CODE) FordBlaBoxIfCmp1Per2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordBlaBoxIfCmp1Per2
 *********************************************************************************************************************/
VAR(uint8, AUTOMATIC) EcuId_Cnt_T_u08;
(void)Rte_Read_EcuId_Val(&EcuId_Cnt_T_u08);
 
if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
{
	if(*Rte_Pim_TrlrBackAssiFctCallSel() == FALSE)
	{
		*Rte_Pim_TrlrBackAssiFctCallSel() = TRUE;
	}
	else
	{
		/*Called every 20ms*/
		*Rte_Pim_TrlrBackAssiFctCallSel() = FALSE;
	}
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordClrBlaBoxNvm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <FordClrBlaBoxNvm>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ActvNiblCtrl_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_LaneAssi_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_PullDriftCmp_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_TrlrBackupAssi_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType FordClrBlaBoxNvm_Oper(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_FordClrBlaBoxNvm_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordClrBlaBoxNvm_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CDD_FordBlaBoxIfCmp1_CODE) FordClrBlaBoxNvm_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordClrBlaBoxNvm_Oper (returns application error)
 *********************************************************************************************************************/
VAR(uint16, AUTOMATIC) ColIdx_Cnt_T_u16;

/*Clear all NVM blocks*/
for(ColIdx_Cnt_T_u16 = 0U; ColIdx_Cnt_T_u16 < (uint16)TblSize_m(PimActvNiblCtrl_u08); ColIdx_Cnt_T_u16++)
{
	PimActvNiblCtrl_u08[ColIdx_Cnt_T_u16] = 0;
}
for(ColIdx_Cnt_T_u16 = 0U; ColIdx_Cnt_T_u16 < (uint16)TblSize_m(PimLaneAssi_u08); ColIdx_Cnt_T_u16++)
{
	PimLaneAssi_u08[ColIdx_Cnt_T_u16] = 0;
}
for(ColIdx_Cnt_T_u16 = 0U; ColIdx_Cnt_T_u16 < (uint16)TblSize_m(PimPullDriftCmp_u08); ColIdx_Cnt_T_u16++)
{
	PimPullDriftCmp_u08[ColIdx_Cnt_T_u16] = 0;
}

(void) Rte_Call_ActvNiblCtrl_SetRamBlockStatus(TRUE);
(void) Rte_Call_LaneAssi_SetRamBlockStatus(TRUE);
(void) Rte_Call_PullDriftCmp_SetRamBlockStatus(TRUE);

return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_FordBlaBoxIfCmp1_STOP_SEC_CODE
#include "CDD_FordBlaBoxIfCmp1_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
