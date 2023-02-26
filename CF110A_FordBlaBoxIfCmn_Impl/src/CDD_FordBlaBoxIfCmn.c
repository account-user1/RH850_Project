/***********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name: CDD_FordBlaBoxIfCmn.c
* Module Description: This file contains the RTE runnables for the CDD_FordBlaBoxIfCmn component
* Project           : CBD
* Author            : Disha Srivastava
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      nz2610 %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 04/24/18  1        DS       Initial version  							   								    EA4#22950
*
***********************************************************************************************************************/

/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_FordBlaBoxIfCmn.c
 *        Config:  C:/Users/nz2610/Documents/Synergy/Working/CF110A_FordBlaBoxIfCmn_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_FordBlaBoxIfCmn
 *  Generated at:  Sun May  6 22:19:52 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_FordBlaBoxIfCmn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
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
 * s5p10
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
 *********************************************************************************************************************/

#include "Rte_CDD_FordBlaBoxIfCmn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


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
 * s5p10: Integer in interval [-32768...32767]
 * s8p7: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * u8p8: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Ford_StePinCompAnEst_D_Qf: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_Faulty (0U)
 *   Cx1_No_Data_Exists (1U)
 *   Cx2_Degraded (2U)
 *   Cx3_OK (3U)
 * Ford_VehYaw_W_Actl: Enumeration of integer in interval [0...65535] with enumerators
 *   CxFFFE_NoDataExists (65534U)
 *   CxFFFF_Faulty (65535U)
 *   Unit: [rad/s], Factor: 1, Offset: 0
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u8p8 Rte_Prm_FordBlaBoxIfCmnVehSteerRat_Val(void)
 *   uint16 Rte_Prm_FordBlaBoxIfCmnVehWhlBas_Val(void)
 *
 *********************************************************************************************************************/


#define CDD_FordBlaBoxIfCmn_START_SEC_CODE
#include "CDD_FordBlaBoxIfCmn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordBlaBoxIfCmnInit1
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
 *   Std_ReturnType Rte_Read_ActvParkAssiTqFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EcuId_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_EngTqClass_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FildVehSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordActvNiblCtrlEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordAppldFinalMotTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordAppldFinalMotTqVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordBoostCrvAssiTq_Val(s8p7 *data)
 *   Std_ReturnType Rte_Read_FordBoostCrvInpTq_Val(s5p10 *data)
 *   Std_ReturnType Rte_Read_FordBrkPlsRejctnEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordCmpdHwPosn_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordCmpdHwPosnQlyFac_Val(Ford_StePinCompAnEst_D_Qf *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiEnaReq_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordHwVelVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordInpTqRaw_Val(s5p10 *data)
 *   Std_ReturnType Rte_Read_FordInpTqRawVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneCentrAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneDprtrWarnEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordMaxAsscTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordMsgInp1Vld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordMsgInp2Vld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordMsgInp3Vld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordMsgInp4Vld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordRelHwPosn_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordRelHwPosnVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordReqdFinalMotTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordResrchFctEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTqSteerCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrfcJamAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrAidHitchAgRate_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackupAssi5WhlEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackupAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackupAssiTrigEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehAbsActv_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehAbsEscStsVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehAccrPedlPosnStsQlyFacRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehAccrPedlPosnStsRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehAccrPedlPosnStsVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehActBrkTqRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehBlaBoxInp1HiPart_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordVehBlaBoxInp1LoPart_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordVehBlaBoxInp2HiPart_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordVehBlaBoxInp2LoPart_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordVehBlaBoxInp3HiPart_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordVehBlaBoxInp3LoPart_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordVehBlaBoxInp4HiPart_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordVehBlaBoxInp4LoPart_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordVehBrkPedlAppld_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehBrkPedlAppldQlyFac_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehBrkPedlVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehBrkTqVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgDenied_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgDisad_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgLatDstRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehEngSpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehEngSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehEscActv_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehEvasSteerAssiImgProcrModlAVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehEvasSteerAssiReq_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehEvasSteerAssiReqVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehFrntLeWhlCntrDirVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehFrntLeWhlDirRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehFrntLeWhlRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehFrntLeWhlSpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehFrntLeWhlSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehFrntRiWhlCntrDirVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehFrntRiWhlDirRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehFrntRiWhlRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehFrntRiWhlSpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehFrntRiWhlSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehGearLvrPosn_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehGearLvrPosnVldInt_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehGearPosnRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehGearRvsStsRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehGearRvsStsVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehIgnSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehIgnStsVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehLaneAssiImgProcgModlAVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehLaneDetnWarnInten_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLaneDetnWarnSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLaneKeepSysCrvtRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehLaneKeepSysRampTyp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLaneKeepSysReqdAg_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehLaneKeepSysSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLatACmpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehLatACmpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlCrvtRateRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlCrvtRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlImgProcrModlAVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlPahOffsRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlPahRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlPrcsn_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlRampTyp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlReq_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlRingMax_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLgtACmpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehLgtACmpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLoSpdMtnCtrlBrkSprtVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehParkAidModlStsVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehParkAidModlSysSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehPrpnWhlTqRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehPrpnWhlTqVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehReLeWhlCntrDirVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehReLeWhlDirRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehReLeWhlRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehReLeWhlSpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehReLeWhlSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehReRiWhlCntrDirVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehReRiWhlDirRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehReRiWhlRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehReRiWhlSpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehReRiWhlSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehSelDrvModChassisVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehSpdBrkModlRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehSpdOverGndRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehSpdOverGndVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehSteerPinionAgOffsRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehSteerPinionAgOffsVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehSteerPinionOffsStsRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTireCircum_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAgOffsDirRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidAcqSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidAvlRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidCnclReq_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidCnclReqVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidHitchAg_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidIdnNrRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidIdnVal_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidKnobBtn_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidKnobPosn_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidKnobPosnVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidKnobStsVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidModReq_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidModReqVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidSetUpRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidTrakgSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidTrakgStVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidTrlrRvsGuidcSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAxleToBmpRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrBackupAssiAvlVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrBackupAssiMeasVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrBallToAxle_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrBrkCnctnStsRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrEnaReqRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrHitchAgRateRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrHitchAgVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrHitchRateVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrHitchYawAgRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrHitchYawSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrIdnTypRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrLampCnctnStsRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrRvsCnclReqRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrRvsEnaRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrRvsMsgTxtReqRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrTarVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrYawRateQlyFac_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrYawRateRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehTrsmDesGearRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTurnSigSwtStsRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTurnSigVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehVertACmpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehYawRateCmpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehYawRateRaw_Val(Ford_VehYaw_W_Actl *data)
 *   Std_ReturnType Rte_Read_FordVehYawRateRawVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehYawRateVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehYawStabyRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehYawStabyVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordYawRateSnsrIdHi_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordYawRateSnsrIdLo_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_IntAgCtrlSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_RackToPinionRat_Val(u8p8 *data)
 *   Std_ReturnType Rte_Read_SelnDrvgModSteerModReq_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SemiAutParlParkAgCtrlSts1_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SemiAutParlParkAgCtrlSts2_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SemiAutParlParkAgCtrlSts3_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SemiAutParlParkAgCtrlSts4_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SemiAutParlParkAgCtrlSts5_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_TrlrBackupAssiEnaVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_TrlrBackupAssiRvsVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_TrlrBackupAssiYawRateVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSteerRat_Val(u8p8 *data)
 *   Std_ReturnType Rte_Read_VehWhlBas_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_VertAVld_Logl(boolean *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordBlaBoxIfCmnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_FordBlaBoxIfCmn_CODE) FordBlaBoxIfCmnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordBlaBoxIfCmnInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordBlaBoxIfCmnPer1
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
 *   Std_ReturnType Rte_Read_ActvParkAssiTqFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EcuId_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_EngTqClass_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FildVehSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordActvNiblCtrlEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordAppldFinalMotTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordAppldFinalMotTqVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordBoostCrvAssiTq_Val(s8p7 *data)
 *   Std_ReturnType Rte_Read_FordBoostCrvInpTq_Val(s5p10 *data)
 *   Std_ReturnType Rte_Read_FordBrkPlsRejctnEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordCmpdHwPosn_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordCmpdHwPosnQlyFac_Val(Ford_StePinCompAnEst_D_Qf *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiEnaReq_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordHwVelVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordInpTqRaw_Val(s5p10 *data)
 *   Std_ReturnType Rte_Read_FordInpTqRawVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneCentrAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneDprtrWarnEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordMaxAsscTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordMsgInp1Vld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordMsgInp2Vld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordMsgInp3Vld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordMsgInp4Vld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordRelHwPosn_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordRelHwPosnVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordReqdFinalMotTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordResrchFctEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTqSteerCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrfcJamAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrAidHitchAgRate_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackupAssi5WhlEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackupAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackupAssiTrigEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehAbsActv_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehAbsEscStsVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehAccrPedlPosnStsQlyFacRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehAccrPedlPosnStsRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehAccrPedlPosnStsVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehActBrkTqRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehBlaBoxInp1HiPart_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordVehBlaBoxInp1LoPart_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordVehBlaBoxInp2HiPart_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordVehBlaBoxInp2LoPart_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordVehBlaBoxInp3HiPart_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordVehBlaBoxInp3LoPart_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordVehBlaBoxInp4HiPart_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordVehBlaBoxInp4LoPart_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordVehBrkPedlAppld_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehBrkPedlAppldQlyFac_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehBrkPedlVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehBrkTqVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgDenied_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgDisad_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgLatDstRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehEngSpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehEngSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehEscActv_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehEvasSteerAssiImgProcrModlAVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehEvasSteerAssiReq_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehEvasSteerAssiReqVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehFrntLeWhlCntrDirVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehFrntLeWhlDirRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehFrntLeWhlRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehFrntLeWhlSpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehFrntLeWhlSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehFrntRiWhlCntrDirVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehFrntRiWhlDirRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehFrntRiWhlRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehFrntRiWhlSpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehFrntRiWhlSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehGearLvrPosn_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehGearLvrPosnVldInt_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehGearPosnRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehGearRvsStsRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehGearRvsStsVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehIgnSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehIgnStsVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehLaneAssiImgProcgModlAVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehLaneDetnWarnInten_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLaneDetnWarnSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLaneKeepSysCrvtRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehLaneKeepSysRampTyp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLaneKeepSysReqdAg_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehLaneKeepSysSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLatACmpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehLatACmpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlCrvtRateRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlCrvtRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlImgProcrModlAVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlPahOffsRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlPahRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlPrcsn_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlRampTyp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlReq_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLatCtrlRingMax_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLgtACmpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehLgtACmpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehLoSpdMtnCtrlBrkSprtVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehParkAidModlStsVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehParkAidModlSysSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehPrpnWhlTqRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehPrpnWhlTqVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehReLeWhlCntrDirVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehReLeWhlDirRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehReLeWhlRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehReLeWhlSpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehReLeWhlSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehReRiWhlCntrDirVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehReRiWhlDirRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehReRiWhlRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehReRiWhlSpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehReRiWhlSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehSelDrvModChassisVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehSpdBrkModlRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehSpdOverGndRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehSpdOverGndVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehSteerPinionAgOffsRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehSteerPinionAgOffsVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehSteerPinionOffsStsRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTireCircum_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAgOffsDirRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidAcqSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidAvlRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidCnclReq_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidCnclReqVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidHitchAg_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidIdnNrRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidIdnVal_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidKnobBtn_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidKnobPosn_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidKnobPosnVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidKnobStsVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidModReq_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidModReqVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidSetUpRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidTrakgSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidTrakgStVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAidTrlrRvsGuidcSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrAxleToBmpRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrBackupAssiAvlVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrBackupAssiMeasVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrBallToAxle_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrBrkCnctnStsRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrEnaReqRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrHitchAgRateRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrHitchAgVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrHitchRateVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrHitchYawAgRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrHitchYawSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrIdnTypRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrLampCnctnStsRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrRvsCnclReqRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrRvsEnaRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrRvsMsgTxtReqRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrTarVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrYawRateQlyFac_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTrlrYawRateRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehTrsmDesGearRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTurnSigSwtStsRaw_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehTurnSigVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehVertACmpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehYawRateCmpdRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehYawRateRaw_Val(Ford_VehYaw_W_Actl *data)
 *   Std_ReturnType Rte_Read_FordVehYawRateRawVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehYawRateVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehYawStabyRaw_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordVehYawStabyVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordYawRateSnsrIdHi_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordYawRateSnsrIdLo_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_IntAgCtrlSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_RackToPinionRat_Val(u8p8 *data)
 *   Std_ReturnType Rte_Read_SelnDrvgModSteerModReq_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SemiAutParlParkAgCtrlSts1_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SemiAutParlParkAgCtrlSts2_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SemiAutParlParkAgCtrlSts3_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SemiAutParlParkAgCtrlSts4_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SemiAutParlParkAgCtrlSts5_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_TrlrBackupAssiEnaVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_TrlrBackupAssiRvsVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_TrlrBackupAssiYawRateVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSteerRat_Val(u8p8 *data)
 *   Std_ReturnType Rte_Read_VehWhlBas_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_VertAVld_Logl(boolean *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordBlaBoxIfCmnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_FordBlaBoxIfCmn_CODE) FordBlaBoxIfCmnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordBlaBoxIfCmnPer1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_FordBlaBoxIfCmn_STOP_SEC_CODE
#include "CDD_FordBlaBoxIfCmn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
