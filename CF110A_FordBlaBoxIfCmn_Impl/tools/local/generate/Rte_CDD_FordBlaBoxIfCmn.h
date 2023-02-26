/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_CDD_FordBlaBoxIfCmn.h
 *        Config:  C:/Users/nz2610/Documents/Synergy/Working/CF110A_FordBlaBoxIfCmn_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_FordBlaBoxIfCmn
 *  Generated at:  Sun May  6 22:19:52 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_FordBlaBoxIfCmn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_FORDBLABOXIFCMN_H
# define _RTE_CDD_FORDBLABOXIFCMN_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CDD_FordBlaBoxIfCmn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_FordBlaBoxIfCmn
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_FordBlaBoxIfCmn, RTE_CONST, RTE_CONST) Rte_Inst_CDD_FordBlaBoxIfCmn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_FordBlaBoxIfCmn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ActvParkAssiTqFild_Val (0.0F)
# define Rte_InitValue_EcuId_Val (0U)
# define Rte_InitValue_EngTqClass_Val (0U)
# define Rte_InitValue_FildVehSpdVld_Logl (FALSE)
# define Rte_InitValue_FordActvNiblCtrlEnad_Logl (FALSE)
# define Rte_InitValue_FordAppldFinalMotTq_Val (0.0F)
# define Rte_InitValue_FordAppldFinalMotTqVld_Logl (FALSE)
# define Rte_InitValue_FordBoostCrvAssiTq_Val (0)
# define Rte_InitValue_FordBoostCrvInpTq_Val (0)
# define Rte_InitValue_FordBrkPlsRejctnEnad_Logl (FALSE)
# define Rte_InitValue_FordCmpdHwPosn_Val (0.0F)
# define Rte_InitValue_FordCmpdHwPosnQlyFac_Val (1U)
# define Rte_InitValue_FordEvasSteerAssiEnaReq_Val (0U)
# define Rte_InitValue_FordEvasSteerAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordHwVelVld_Logl (FALSE)
# define Rte_InitValue_FordInpTqRaw_Val (0)
# define Rte_InitValue_FordInpTqRawVld_Logl (FALSE)
# define Rte_InitValue_FordLaneCentrAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordLaneDprtrWarnEnad_Logl (FALSE)
# define Rte_InitValue_FordLaneKeepAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordMaxAsscTq_Val (0.0F)
# define Rte_InitValue_FordMsgInp1Vld_Logl (FALSE)
# define Rte_InitValue_FordMsgInp2Vld_Logl (FALSE)
# define Rte_InitValue_FordMsgInp3Vld_Logl (FALSE)
# define Rte_InitValue_FordMsgInp4Vld_Logl (FALSE)
# define Rte_InitValue_FordPullDriftCmpEnad_Logl (FALSE)
# define Rte_InitValue_FordRelHwPosn_Val (0.0F)
# define Rte_InitValue_FordRelHwPosnVld_Logl (FALSE)
# define Rte_InitValue_FordReqdFinalMotTq_Val (0.0F)
# define Rte_InitValue_FordResrchFctEnad_Logl (FALSE)
# define Rte_InitValue_FordTqSteerCmpEnad_Logl (FALSE)
# define Rte_InitValue_FordTrfcJamAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordTrlrAidHitchAgRate_Val (0U)
# define Rte_InitValue_FordTrlrBackupAssi5WhlEnad_Logl (FALSE)
# define Rte_InitValue_FordTrlrBackupAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordTrlrBackupAssiTrigEnad_Logl (FALSE)
# define Rte_InitValue_FordVehAbsActv_Val (0U)
# define Rte_InitValue_FordVehAbsEscStsVld_Logl (FALSE)
# define Rte_InitValue_FordVehAccrPedlPosnStsQlyFacRaw_Val (0U)
# define Rte_InitValue_FordVehAccrPedlPosnStsRaw_Val (0U)
# define Rte_InitValue_FordVehAccrPedlPosnStsVld_Logl (FALSE)
# define Rte_InitValue_FordVehActBrkTqRaw_Val (0U)
# define Rte_InitValue_FordVehBlaBoxInp1HiPart_Val (0U)
# define Rte_InitValue_FordVehBlaBoxInp1LoPart_Val (0U)
# define Rte_InitValue_FordVehBlaBoxInp2HiPart_Val (0U)
# define Rte_InitValue_FordVehBlaBoxInp2LoPart_Val (0U)
# define Rte_InitValue_FordVehBlaBoxInp3HiPart_Val (0U)
# define Rte_InitValue_FordVehBlaBoxInp3LoPart_Val (0U)
# define Rte_InitValue_FordVehBlaBoxInp4HiPart_Val (0U)
# define Rte_InitValue_FordVehBlaBoxInp4LoPart_Val (0U)
# define Rte_InitValue_FordVehBrkPedlAppld_Val (0U)
# define Rte_InitValue_FordVehBrkPedlAppldQlyFac_Val (0U)
# define Rte_InitValue_FordVehBrkPedlVld_Logl (FALSE)
# define Rte_InitValue_FordVehBrkTqVld_Logl (FALSE)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgDenied_Val (0U)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgDisad_Val (0U)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgLatDstRaw_Val (0U)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val (0U)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val (0U)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val (0U)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val (0U)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val (0U)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val (0U)
# define Rte_InitValue_FordVehEngSpdRaw_Val (0U)
# define Rte_InitValue_FordVehEngSpdVld_Logl (FALSE)
# define Rte_InitValue_FordVehEscActv_Val (0U)
# define Rte_InitValue_FordVehEvasSteerAssiImgProcrModlAVld_Logl (FALSE)
# define Rte_InitValue_FordVehEvasSteerAssiReq_Val (0U)
# define Rte_InitValue_FordVehEvasSteerAssiReqVld_Logl (FALSE)
# define Rte_InitValue_FordVehFrntLeWhlCntrDirVld_Logl (FALSE)
# define Rte_InitValue_FordVehFrntLeWhlDirRaw_Val (0U)
# define Rte_InitValue_FordVehFrntLeWhlRollgCntr_Val (0U)
# define Rte_InitValue_FordVehFrntLeWhlSpdRaw_Val (0U)
# define Rte_InitValue_FordVehFrntLeWhlSpdVld_Logl (FALSE)
# define Rte_InitValue_FordVehFrntRiWhlCntrDirVld_Logl (FALSE)
# define Rte_InitValue_FordVehFrntRiWhlDirRaw_Val (0U)
# define Rte_InitValue_FordVehFrntRiWhlRollgCntr_Val (0U)
# define Rte_InitValue_FordVehFrntRiWhlSpdRaw_Val (0U)
# define Rte_InitValue_FordVehFrntRiWhlSpdVld_Logl (FALSE)
# define Rte_InitValue_FordVehGearLvrPosn_Val (0U)
# define Rte_InitValue_FordVehGearLvrPosnVldInt_Logl (FALSE)
# define Rte_InitValue_FordVehGearPosnRaw_Val (0U)
# define Rte_InitValue_FordVehGearRvsStsRaw_Val (0U)
# define Rte_InitValue_FordVehGearRvsStsVld_Logl (FALSE)
# define Rte_InitValue_FordVehIgnSts_Val (0U)
# define Rte_InitValue_FordVehIgnStsVld_Logl (FALSE)
# define Rte_InitValue_FordVehLaneAssiImgProcgModlAVld_Logl (FALSE)
# define Rte_InitValue_FordVehLaneDetnWarnInten_Val (0U)
# define Rte_InitValue_FordVehLaneDetnWarnSts_Val (0U)
# define Rte_InitValue_FordVehLaneKeepSysCrvtRaw_Val (0U)
# define Rte_InitValue_FordVehLaneKeepSysRampTyp_Val (0U)
# define Rte_InitValue_FordVehLaneKeepSysReqdAg_Val (0U)
# define Rte_InitValue_FordVehLaneKeepSysSts_Val (0U)
# define Rte_InitValue_FordVehLatACmpdRaw_Val (0U)
# define Rte_InitValue_FordVehLatACmpdVld_Logl (FALSE)
# define Rte_InitValue_FordVehLatCtrlCrvtRateRaw_Val (0U)
# define Rte_InitValue_FordVehLatCtrlCrvtRaw_Val (0U)
# define Rte_InitValue_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val (0U)
# define Rte_InitValue_FordVehLatCtrlImgProcrModlAVld_Logl (FALSE)
# define Rte_InitValue_FordVehLatCtrlPahOffsRaw_Val (0U)
# define Rte_InitValue_FordVehLatCtrlPahRaw_Val (0U)
# define Rte_InitValue_FordVehLatCtrlPrcsn_Val (0U)
# define Rte_InitValue_FordVehLatCtrlRampTyp_Val (0U)
# define Rte_InitValue_FordVehLatCtrlReq_Val (0U)
# define Rte_InitValue_FordVehLatCtrlRingMax_Val (0U)
# define Rte_InitValue_FordVehLgtACmpdRaw_Val (0U)
# define Rte_InitValue_FordVehLgtACmpdVld_Logl (FALSE)
# define Rte_InitValue_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val (0U)
# define Rte_InitValue_FordVehLoSpdMtnCtrlBrkSprtVld_Logl (FALSE)
# define Rte_InitValue_FordVehParkAidModlStsVld_Logl (FALSE)
# define Rte_InitValue_FordVehParkAidModlSysSt_Val (0U)
# define Rte_InitValue_FordVehPrpnWhlTqRaw_Val (0U)
# define Rte_InitValue_FordVehPrpnWhlTqVld_Logl (FALSE)
# define Rte_InitValue_FordVehReLeWhlCntrDirVld_Logl (FALSE)
# define Rte_InitValue_FordVehReLeWhlDirRaw_Val (0U)
# define Rte_InitValue_FordVehReLeWhlRollgCntr_Val (0U)
# define Rte_InitValue_FordVehReLeWhlSpdRaw_Val (0U)
# define Rte_InitValue_FordVehReLeWhlSpdVld_Logl (FALSE)
# define Rte_InitValue_FordVehReRiWhlCntrDirVld_Logl (FALSE)
# define Rte_InitValue_FordVehReRiWhlDirRaw_Val (0U)
# define Rte_InitValue_FordVehReRiWhlRollgCntr_Val (0U)
# define Rte_InitValue_FordVehReRiWhlSpdRaw_Val (0U)
# define Rte_InitValue_FordVehReRiWhlSpdVld_Logl (FALSE)
# define Rte_InitValue_FordVehSelDrvModChassisVld_Logl (FALSE)
# define Rte_InitValue_FordVehSpd_Val (0.0F)
# define Rte_InitValue_FordVehSpdBrkModlRaw_Val (0U)
# define Rte_InitValue_FordVehSpdOverGndRaw_Val (0U)
# define Rte_InitValue_FordVehSpdOverGndVld_Logl (FALSE)
# define Rte_InitValue_FordVehSteerPinionAgOffsRaw_Val (0U)
# define Rte_InitValue_FordVehSteerPinionAgOffsVld_Logl (FALSE)
# define Rte_InitValue_FordVehSteerPinionOffsStsRaw_Val (0U)
# define Rte_InitValue_FordVehTireCircum_Val (0.0F)
# define Rte_InitValue_FordVehTrlrAgOffsDirRaw_Val (0U)
# define Rte_InitValue_FordVehTrlrAidAcqSts_Val (0U)
# define Rte_InitValue_FordVehTrlrAidAvlRaw_Val (0U)
# define Rte_InitValue_FordVehTrlrAidCnclReq_Val (0U)
# define Rte_InitValue_FordVehTrlrAidCnclReqVld_Logl (FALSE)
# define Rte_InitValue_FordVehTrlrAidHitchAg_Val (0U)
# define Rte_InitValue_FordVehTrlrAidIdnNrRaw_Val (0U)
# define Rte_InitValue_FordVehTrlrAidIdnVal_Val (0U)
# define Rte_InitValue_FordVehTrlrAidKnobBtn_Val (0U)
# define Rte_InitValue_FordVehTrlrAidKnobPosn_Val (0U)
# define Rte_InitValue_FordVehTrlrAidKnobPosnVld_Logl (FALSE)
# define Rte_InitValue_FordVehTrlrAidKnobStsVld_Logl (FALSE)
# define Rte_InitValue_FordVehTrlrAidModReq_Val (0U)
# define Rte_InitValue_FordVehTrlrAidModReqVld_Logl (FALSE)
# define Rte_InitValue_FordVehTrlrAidSetUpRaw_Val (0U)
# define Rte_InitValue_FordVehTrlrAidTrakgSt_Val (0U)
# define Rte_InitValue_FordVehTrlrAidTrakgStVld_Logl (FALSE)
# define Rte_InitValue_FordVehTrlrAidTrlrRvsGuidcSts_Val (0U)
# define Rte_InitValue_FordVehTrlrAxleToBmpRaw_Val (0U)
# define Rte_InitValue_FordVehTrlrBackupAssiAvlVld_Logl (FALSE)
# define Rte_InitValue_FordVehTrlrBackupAssiMeasVld_Logl (FALSE)
# define Rte_InitValue_FordVehTrlrBallToAxle_Val (0U)
# define Rte_InitValue_FordVehTrlrBrkCnctnStsRaw_Val (0U)
# define Rte_InitValue_FordVehTrlrEnaReqRaw_Val (0U)
# define Rte_InitValue_FordVehTrlrHitchAgRateRaw_Val (0U)
# define Rte_InitValue_FordVehTrlrHitchAgVld_Logl (FALSE)
# define Rte_InitValue_FordVehTrlrHitchRateVld_Logl (FALSE)
# define Rte_InitValue_FordVehTrlrHitchYawAgRaw_Val (0U)
# define Rte_InitValue_FordVehTrlrHitchYawSts_Val (0U)
# define Rte_InitValue_FordVehTrlrIdnTypRaw_Val (0U)
# define Rte_InitValue_FordVehTrlrLampCnctnStsRaw_Val (0U)
# define Rte_InitValue_FordVehTrlrRvsCnclReqRaw_Val (0U)
# define Rte_InitValue_FordVehTrlrRvsEnaRaw_Val (0U)
# define Rte_InitValue_FordVehTrlrRvsMsgTxtReqRaw_Val (0U)
# define Rte_InitValue_FordVehTrlrTarVld_Logl (FALSE)
# define Rte_InitValue_FordVehTrlrYawRateQlyFac_Val (0U)
# define Rte_InitValue_FordVehTrlrYawRateRaw_Val (0U)
# define Rte_InitValue_FordVehTrsmDesGearRaw_Val (0U)
# define Rte_InitValue_FordVehTurnSigSwtStsRaw_Val (0U)
# define Rte_InitValue_FordVehTurnSigVld_Logl (FALSE)
# define Rte_InitValue_FordVehVertACmpdRaw_Val (0U)
# define Rte_InitValue_FordVehYawRateCmpdRaw_Val (0U)
# define Rte_InitValue_FordVehYawRateRaw_Val (65534U)
# define Rte_InitValue_FordVehYawRateRawVld_Logl (FALSE)
# define Rte_InitValue_FordVehYawRateVld_Logl (FALSE)
# define Rte_InitValue_FordVehYawStabyRaw_Val (0U)
# define Rte_InitValue_FordVehYawStabyVld_Logl (FALSE)
# define Rte_InitValue_FordYawRateSnsrIdHi_Val (0U)
# define Rte_InitValue_FordYawRateSnsrIdLo_Val (0U)
# define Rte_InitValue_HwVel_Val (0.0F)
# define Rte_InitValue_IntAgCtrlSt_Val (0U)
# define Rte_InitValue_RackToPinionRat_Val (0U)
# define Rte_InitValue_SelnDrvgModSteerModReq_Val (0U)
# define Rte_InitValue_SemiAutParlParkAgCtrlSts1_Val (0U)
# define Rte_InitValue_SemiAutParlParkAgCtrlSts2_Logl (FALSE)
# define Rte_InitValue_SemiAutParlParkAgCtrlSts3_Logl (FALSE)
# define Rte_InitValue_SemiAutParlParkAgCtrlSts4_Logl (FALSE)
# define Rte_InitValue_SemiAutParlParkAgCtrlSts5_Logl (FALSE)
# define Rte_InitValue_TrlrBackupAssiEnaVld_Logl (FALSE)
# define Rte_InitValue_TrlrBackupAssiRvsVld_Logl (FALSE)
# define Rte_InitValue_TrlrBackupAssiYawRateVld_Logl (FALSE)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdVld_Logl (FALSE)
# define Rte_InitValue_VehSteerRat_Val (0U)
# define Rte_InitValue_VehWhlBas_Val (0U)
# define Rte_InitValue_VertAVld_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_ActvParkAssiTqFild_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_EcuId_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_EngTqClass_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FildVehSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordActvNiblCtrlEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordAppldFinalMotTq_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordAppldFinalMotTqVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordBoostCrvAssiTq_Val(P2VAR(s8p7, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordBoostCrvInpTq_Val(P2VAR(s5p10, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordBrkPlsRejctnEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordCmpdHwPosn_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordCmpdHwPosnQlyFac_Val(P2VAR(Ford_StePinCompAnEst_D_Qf, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordEvasSteerAssiEnaReq_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordEvasSteerAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordHwVelVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordInpTqRaw_Val(P2VAR(s5p10, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordInpTqRawVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordLaneCentrAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordLaneDprtrWarnEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordLaneKeepAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordMaxAsscTq_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordMsgInp1Vld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordMsgInp2Vld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordMsgInp3Vld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordMsgInp4Vld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordPullDriftCmpEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordRelHwPosn_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordRelHwPosnVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordReqdFinalMotTq_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordResrchFctEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordTqSteerCmpEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordTrfcJamAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordTrlrAidHitchAgRate_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssi5WhlEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiTrigEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAbsActv_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAbsEscStsVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsQlyFacRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehActBrkTqRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1HiPart_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1LoPart_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2HiPart_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2LoPart_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3HiPart_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3LoPart_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4HiPart_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4LoPart_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppld_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppldQlyFac_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBrkPedlVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBrkTqVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgDenied_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgDisad_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgLatDstRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEngSpdRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEngSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEscActv_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEvasSteerAssiImgProcrModlAVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEvasSteerAssiReq_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEvasSteerAssiReqVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlCntrDirVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlDirRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlSpdRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlCntrDirVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlDirRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlSpdRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearLvrPosn_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearLvrPosnVldInt_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearPosnRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearRvsStsRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearRvsStsVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehIgnSts_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehIgnStsVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneAssiImgProcgModlAVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneDetnWarnInten_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneDetnWarnSts_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneKeepSysCrvtRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneKeepSysRampTyp_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneKeepSysReqdAg_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneKeepSysSts_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatACmpdRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatACmpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlCrvtRateRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlCrvtRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlImgProcrModlAVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlPahOffsRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlPahRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlPrcsn_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlRampTyp_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlReq_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlRingMax_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLgtACmpdRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLgtACmpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLoSpdMtnCtrlBrkSprtVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehParkAidModlStsVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehParkAidModlSysSt_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehPrpnWhlTqRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehPrpnWhlTqVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlCntrDirVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlDirRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlSpdRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlCntrDirVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlDirRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlSpdRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSelDrvModChassisVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSpdBrkModlRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSpdOverGndRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSpdOverGndVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSteerPinionAgOffsRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSteerPinionAgOffsVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSteerPinionOffsStsRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTireCircum_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAgOffsDirRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidAcqSts_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidAvlRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReq_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReqVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidHitchAg_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidIdnNrRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidIdnVal_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobBtn_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobPosn_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobPosnVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobStsVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidModReq_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidModReqVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidSetUpRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidTrakgSt_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidTrakgStVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidTrlrRvsGuidcSts_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAxleToBmpRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrBackupAssiAvlVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrBackupAssiMeasVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrBallToAxle_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrBrkCnctnStsRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrEnaReqRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchAgRateRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchAgVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchRateVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawAgRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawSts_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrIdnTypRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrLampCnctnStsRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsCnclReqRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsEnaRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsMsgTxtReqRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrTarVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateQlyFac_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrsmDesGearRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTurnSigSwtStsRaw_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTurnSigVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehVertACmpdRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawRateCmpdRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawRateRaw_Val(P2VAR(Ford_VehYaw_W_Actl, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawRateRawVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawRateVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawStabyRaw_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawStabyVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdHi_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdLo_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_HwVel_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_IntAgCtrlSt_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_RackToPinionRat_Val(P2VAR(u8p8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_SelnDrvgModSteerModReq_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts1_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts2_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts3_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts4_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts5_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_TrlrBackupAssiEnaVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_TrlrBackupAssiRvsVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_TrlrBackupAssiYawRateVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_VehSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_VehSteerRat_Val(P2VAR(u8p8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_VehWhlBas_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmn_VertAVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u8p8, RTE_CODE) Rte_Prm_CDD_FordBlaBoxIfCmn_FordBlaBoxIfCmnVehSteerRat_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_FordBlaBoxIfCmn_FordBlaBoxIfCmnVehWhlBas_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ActvParkAssiTqFild_Val Rte_Read_CDD_FordBlaBoxIfCmn_ActvParkAssiTqFild_Val
# define Rte_Read_EcuId_Val Rte_Read_CDD_FordBlaBoxIfCmn_EcuId_Val
# define Rte_Read_EngTqClass_Val Rte_Read_CDD_FordBlaBoxIfCmn_EngTqClass_Val
# define Rte_Read_FildVehSpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FildVehSpdVld_Logl
# define Rte_Read_FordActvNiblCtrlEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordActvNiblCtrlEnad_Logl
# define Rte_Read_FordAppldFinalMotTq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordAppldFinalMotTq_Val
# define Rte_Read_FordAppldFinalMotTqVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordAppldFinalMotTqVld_Logl
# define Rte_Read_FordBoostCrvAssiTq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordBoostCrvAssiTq_Val
# define Rte_Read_FordBoostCrvInpTq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordBoostCrvInpTq_Val
# define Rte_Read_FordBrkPlsRejctnEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordBrkPlsRejctnEnad_Logl
# define Rte_Read_FordCmpdHwPosn_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordCmpdHwPosn_Val
# define Rte_Read_FordCmpdHwPosnQlyFac_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordCmpdHwPosnQlyFac_Val
# define Rte_Read_FordEvasSteerAssiEnaReq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordEvasSteerAssiEnaReq_Val
# define Rte_Read_FordEvasSteerAssiEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordEvasSteerAssiEnad_Logl
# define Rte_Read_FordHwVelVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordHwVelVld_Logl
# define Rte_Read_FordInpTqRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordInpTqRaw_Val
# define Rte_Read_FordInpTqRawVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordInpTqRawVld_Logl
# define Rte_Read_FordLaneCentrAssiEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordLaneCentrAssiEnad_Logl
# define Rte_Read_FordLaneDprtrWarnEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordLaneDprtrWarnEnad_Logl
# define Rte_Read_FordLaneKeepAssiEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordLaneKeepAssiEnad_Logl
# define Rte_Read_FordMaxAsscTq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordMaxAsscTq_Val
# define Rte_Read_FordMsgInp1Vld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordMsgInp1Vld_Logl
# define Rte_Read_FordMsgInp2Vld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordMsgInp2Vld_Logl
# define Rte_Read_FordMsgInp3Vld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordMsgInp3Vld_Logl
# define Rte_Read_FordMsgInp4Vld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordMsgInp4Vld_Logl
# define Rte_Read_FordPullDriftCmpEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordPullDriftCmpEnad_Logl
# define Rte_Read_FordRelHwPosn_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordRelHwPosn_Val
# define Rte_Read_FordRelHwPosnVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordRelHwPosnVld_Logl
# define Rte_Read_FordReqdFinalMotTq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordReqdFinalMotTq_Val
# define Rte_Read_FordResrchFctEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordResrchFctEnad_Logl
# define Rte_Read_FordTqSteerCmpEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordTqSteerCmpEnad_Logl
# define Rte_Read_FordTrfcJamAssiEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordTrfcJamAssiEnad_Logl
# define Rte_Read_FordTrlrAidHitchAgRate_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordTrlrAidHitchAgRate_Val
# define Rte_Read_FordTrlrBackupAssi5WhlEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssi5WhlEnad_Logl
# define Rte_Read_FordTrlrBackupAssiEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiEnad_Logl
# define Rte_Read_FordTrlrBackupAssiTrigEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiTrigEnad_Logl
# define Rte_Read_FordVehAbsActv_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAbsActv_Val
# define Rte_Read_FordVehAbsEscStsVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAbsEscStsVld_Logl
# define Rte_Read_FordVehAccrPedlPosnStsQlyFacRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsQlyFacRaw_Val
# define Rte_Read_FordVehAccrPedlPosnStsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsRaw_Val
# define Rte_Read_FordVehAccrPedlPosnStsVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsVld_Logl
# define Rte_Read_FordVehActBrkTqRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehActBrkTqRaw_Val
# define Rte_Read_FordVehBlaBoxInp1HiPart_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1HiPart_Val
# define Rte_Read_FordVehBlaBoxInp1LoPart_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1LoPart_Val
# define Rte_Read_FordVehBlaBoxInp2HiPart_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2HiPart_Val
# define Rte_Read_FordVehBlaBoxInp2LoPart_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2LoPart_Val
# define Rte_Read_FordVehBlaBoxInp3HiPart_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3HiPart_Val
# define Rte_Read_FordVehBlaBoxInp3LoPart_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3LoPart_Val
# define Rte_Read_FordVehBlaBoxInp4HiPart_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4HiPart_Val
# define Rte_Read_FordVehBlaBoxInp4LoPart_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4LoPart_Val
# define Rte_Read_FordVehBrkPedlAppld_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppld_Val
# define Rte_Read_FordVehBrkPedlAppldQlyFac_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppldQlyFac_Val
# define Rte_Read_FordVehBrkPedlVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBrkPedlVld_Logl
# define Rte_Read_FordVehBrkTqVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBrkTqVld_Logl
# define Rte_Read_FordVehCllsnMtgtnByBrkgDenied_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgDenied_Val
# define Rte_Read_FordVehCllsnMtgtnByBrkgDisad_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgDisad_Val
# define Rte_Read_FordVehCllsnMtgtnByBrkgLatDstRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgLatDstRaw_Val
# define Rte_Read_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val
# define Rte_Read_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val
# define Rte_Read_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val
# define Rte_Read_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val
# define Rte_Read_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val
# define Rte_Read_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val
# define Rte_Read_FordVehEngSpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEngSpdRaw_Val
# define Rte_Read_FordVehEngSpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEngSpdVld_Logl
# define Rte_Read_FordVehEscActv_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEscActv_Val
# define Rte_Read_FordVehEvasSteerAssiImgProcrModlAVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEvasSteerAssiImgProcrModlAVld_Logl
# define Rte_Read_FordVehEvasSteerAssiReq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEvasSteerAssiReq_Val
# define Rte_Read_FordVehEvasSteerAssiReqVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEvasSteerAssiReqVld_Logl
# define Rte_Read_FordVehFrntLeWhlCntrDirVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlCntrDirVld_Logl
# define Rte_Read_FordVehFrntLeWhlDirRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlDirRaw_Val
# define Rte_Read_FordVehFrntLeWhlRollgCntr_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlRollgCntr_Val
# define Rte_Read_FordVehFrntLeWhlSpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlSpdRaw_Val
# define Rte_Read_FordVehFrntLeWhlSpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlSpdVld_Logl
# define Rte_Read_FordVehFrntRiWhlCntrDirVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlCntrDirVld_Logl
# define Rte_Read_FordVehFrntRiWhlDirRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlDirRaw_Val
# define Rte_Read_FordVehFrntRiWhlRollgCntr_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlRollgCntr_Val
# define Rte_Read_FordVehFrntRiWhlSpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlSpdRaw_Val
# define Rte_Read_FordVehFrntRiWhlSpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlSpdVld_Logl
# define Rte_Read_FordVehGearLvrPosn_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearLvrPosn_Val
# define Rte_Read_FordVehGearLvrPosnVldInt_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearLvrPosnVldInt_Logl
# define Rte_Read_FordVehGearPosnRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearPosnRaw_Val
# define Rte_Read_FordVehGearRvsStsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearRvsStsRaw_Val
# define Rte_Read_FordVehGearRvsStsVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearRvsStsVld_Logl
# define Rte_Read_FordVehIgnSts_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehIgnSts_Val
# define Rte_Read_FordVehIgnStsVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehIgnStsVld_Logl
# define Rte_Read_FordVehLaneAssiImgProcgModlAVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneAssiImgProcgModlAVld_Logl
# define Rte_Read_FordVehLaneDetnWarnInten_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneDetnWarnInten_Val
# define Rte_Read_FordVehLaneDetnWarnSts_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneDetnWarnSts_Val
# define Rte_Read_FordVehLaneKeepSysCrvtRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneKeepSysCrvtRaw_Val
# define Rte_Read_FordVehLaneKeepSysRampTyp_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneKeepSysRampTyp_Val
# define Rte_Read_FordVehLaneKeepSysReqdAg_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneKeepSysReqdAg_Val
# define Rte_Read_FordVehLaneKeepSysSts_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneKeepSysSts_Val
# define Rte_Read_FordVehLatACmpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatACmpdRaw_Val
# define Rte_Read_FordVehLatACmpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatACmpdVld_Logl
# define Rte_Read_FordVehLatCtrlCrvtRateRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlCrvtRateRaw_Val
# define Rte_Read_FordVehLatCtrlCrvtRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlCrvtRaw_Val
# define Rte_Read_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val
# define Rte_Read_FordVehLatCtrlImgProcrModlAVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlImgProcrModlAVld_Logl
# define Rte_Read_FordVehLatCtrlPahOffsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlPahOffsRaw_Val
# define Rte_Read_FordVehLatCtrlPahRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlPahRaw_Val
# define Rte_Read_FordVehLatCtrlPrcsn_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlPrcsn_Val
# define Rte_Read_FordVehLatCtrlRampTyp_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlRampTyp_Val
# define Rte_Read_FordVehLatCtrlReq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlReq_Val
# define Rte_Read_FordVehLatCtrlRingMax_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlRingMax_Val
# define Rte_Read_FordVehLgtACmpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLgtACmpdRaw_Val
# define Rte_Read_FordVehLgtACmpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLgtACmpdVld_Logl
# define Rte_Read_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val
# define Rte_Read_FordVehLoSpdMtnCtrlBrkSprtVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLoSpdMtnCtrlBrkSprtVld_Logl
# define Rte_Read_FordVehParkAidModlStsVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehParkAidModlStsVld_Logl
# define Rte_Read_FordVehParkAidModlSysSt_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehParkAidModlSysSt_Val
# define Rte_Read_FordVehPrpnWhlTqRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehPrpnWhlTqRaw_Val
# define Rte_Read_FordVehPrpnWhlTqVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehPrpnWhlTqVld_Logl
# define Rte_Read_FordVehReLeWhlCntrDirVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlCntrDirVld_Logl
# define Rte_Read_FordVehReLeWhlDirRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlDirRaw_Val
# define Rte_Read_FordVehReLeWhlRollgCntr_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlRollgCntr_Val
# define Rte_Read_FordVehReLeWhlSpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlSpdRaw_Val
# define Rte_Read_FordVehReLeWhlSpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlSpdVld_Logl
# define Rte_Read_FordVehReRiWhlCntrDirVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlCntrDirVld_Logl
# define Rte_Read_FordVehReRiWhlDirRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlDirRaw_Val
# define Rte_Read_FordVehReRiWhlRollgCntr_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlRollgCntr_Val
# define Rte_Read_FordVehReRiWhlSpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlSpdRaw_Val
# define Rte_Read_FordVehReRiWhlSpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlSpdVld_Logl
# define Rte_Read_FordVehSelDrvModChassisVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSelDrvModChassisVld_Logl
# define Rte_Read_FordVehSpd_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSpd_Val
# define Rte_Read_FordVehSpdBrkModlRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSpdBrkModlRaw_Val
# define Rte_Read_FordVehSpdOverGndRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSpdOverGndRaw_Val
# define Rte_Read_FordVehSpdOverGndVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSpdOverGndVld_Logl
# define Rte_Read_FordVehSteerPinionAgOffsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSteerPinionAgOffsRaw_Val
# define Rte_Read_FordVehSteerPinionAgOffsVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSteerPinionAgOffsVld_Logl
# define Rte_Read_FordVehSteerPinionOffsStsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSteerPinionOffsStsRaw_Val
# define Rte_Read_FordVehTireCircum_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTireCircum_Val
# define Rte_Read_FordVehTrlrAgOffsDirRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAgOffsDirRaw_Val
# define Rte_Read_FordVehTrlrAidAcqSts_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidAcqSts_Val
# define Rte_Read_FordVehTrlrAidAvlRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidAvlRaw_Val
# define Rte_Read_FordVehTrlrAidCnclReq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReq_Val
# define Rte_Read_FordVehTrlrAidCnclReqVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReqVld_Logl
# define Rte_Read_FordVehTrlrAidHitchAg_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidHitchAg_Val
# define Rte_Read_FordVehTrlrAidIdnNrRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidIdnNrRaw_Val
# define Rte_Read_FordVehTrlrAidIdnVal_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidIdnVal_Val
# define Rte_Read_FordVehTrlrAidKnobBtn_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobBtn_Val
# define Rte_Read_FordVehTrlrAidKnobPosn_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobPosn_Val
# define Rte_Read_FordVehTrlrAidKnobPosnVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobPosnVld_Logl
# define Rte_Read_FordVehTrlrAidKnobStsVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobStsVld_Logl
# define Rte_Read_FordVehTrlrAidModReq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidModReq_Val
# define Rte_Read_FordVehTrlrAidModReqVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidModReqVld_Logl
# define Rte_Read_FordVehTrlrAidSetUpRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidSetUpRaw_Val
# define Rte_Read_FordVehTrlrAidTrakgSt_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidTrakgSt_Val
# define Rte_Read_FordVehTrlrAidTrakgStVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidTrakgStVld_Logl
# define Rte_Read_FordVehTrlrAidTrlrRvsGuidcSts_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidTrlrRvsGuidcSts_Val
# define Rte_Read_FordVehTrlrAxleToBmpRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAxleToBmpRaw_Val
# define Rte_Read_FordVehTrlrBackupAssiAvlVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrBackupAssiAvlVld_Logl
# define Rte_Read_FordVehTrlrBackupAssiMeasVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrBackupAssiMeasVld_Logl
# define Rte_Read_FordVehTrlrBallToAxle_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrBallToAxle_Val
# define Rte_Read_FordVehTrlrBrkCnctnStsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrBrkCnctnStsRaw_Val
# define Rte_Read_FordVehTrlrEnaReqRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrEnaReqRaw_Val
# define Rte_Read_FordVehTrlrHitchAgRateRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchAgRateRaw_Val
# define Rte_Read_FordVehTrlrHitchAgVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchAgVld_Logl
# define Rte_Read_FordVehTrlrHitchRateVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchRateVld_Logl
# define Rte_Read_FordVehTrlrHitchYawAgRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawAgRaw_Val
# define Rte_Read_FordVehTrlrHitchYawSts_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawSts_Val
# define Rte_Read_FordVehTrlrIdnTypRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrIdnTypRaw_Val
# define Rte_Read_FordVehTrlrLampCnctnStsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrLampCnctnStsRaw_Val
# define Rte_Read_FordVehTrlrRvsCnclReqRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsCnclReqRaw_Val
# define Rte_Read_FordVehTrlrRvsEnaRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsEnaRaw_Val
# define Rte_Read_FordVehTrlrRvsMsgTxtReqRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsMsgTxtReqRaw_Val
# define Rte_Read_FordVehTrlrTarVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrTarVld_Logl
# define Rte_Read_FordVehTrlrYawRateQlyFac_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateQlyFac_Val
# define Rte_Read_FordVehTrlrYawRateRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateRaw_Val
# define Rte_Read_FordVehTrsmDesGearRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrsmDesGearRaw_Val
# define Rte_Read_FordVehTurnSigSwtStsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTurnSigSwtStsRaw_Val
# define Rte_Read_FordVehTurnSigVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTurnSigVld_Logl
# define Rte_Read_FordVehVertACmpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehVertACmpdRaw_Val
# define Rte_Read_FordVehYawRateCmpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawRateCmpdRaw_Val
# define Rte_Read_FordVehYawRateRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawRateRaw_Val
# define Rte_Read_FordVehYawRateRawVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawRateRawVld_Logl
# define Rte_Read_FordVehYawRateVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawRateVld_Logl
# define Rte_Read_FordVehYawStabyRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawStabyRaw_Val
# define Rte_Read_FordVehYawStabyVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawStabyVld_Logl
# define Rte_Read_FordYawRateSnsrIdHi_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdHi_Val
# define Rte_Read_FordYawRateSnsrIdLo_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdLo_Val
# define Rte_Read_HwVel_Val Rte_Read_CDD_FordBlaBoxIfCmn_HwVel_Val
# define Rte_Read_IntAgCtrlSt_Val Rte_Read_CDD_FordBlaBoxIfCmn_IntAgCtrlSt_Val
# define Rte_Read_RackToPinionRat_Val Rte_Read_CDD_FordBlaBoxIfCmn_RackToPinionRat_Val
# define Rte_Read_SelnDrvgModSteerModReq_Val Rte_Read_CDD_FordBlaBoxIfCmn_SelnDrvgModSteerModReq_Val
# define Rte_Read_SemiAutParlParkAgCtrlSts1_Val Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts1_Val
# define Rte_Read_SemiAutParlParkAgCtrlSts2_Logl Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts2_Logl
# define Rte_Read_SemiAutParlParkAgCtrlSts3_Logl Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts3_Logl
# define Rte_Read_SemiAutParlParkAgCtrlSts4_Logl Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts4_Logl
# define Rte_Read_SemiAutParlParkAgCtrlSts5_Logl Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts5_Logl
# define Rte_Read_TrlrBackupAssiEnaVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_TrlrBackupAssiEnaVld_Logl
# define Rte_Read_TrlrBackupAssiRvsVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_TrlrBackupAssiRvsVld_Logl
# define Rte_Read_TrlrBackupAssiYawRateVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_TrlrBackupAssiYawRateVld_Logl
# define Rte_Read_VehSpd_Val Rte_Read_CDD_FordBlaBoxIfCmn_VehSpd_Val
# define Rte_Read_VehSpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_VehSpdVld_Logl
# define Rte_Read_VehSteerRat_Val Rte_Read_CDD_FordBlaBoxIfCmn_VehSteerRat_Val
# define Rte_Read_VehWhlBas_Val Rte_Read_CDD_FordBlaBoxIfCmn_VehWhlBas_Val
# define Rte_Read_VertAVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_VertAVld_Logl


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordBlaBoxIfCmnVehSteerRat_Val Rte_Prm_CDD_FordBlaBoxIfCmn_FordBlaBoxIfCmnVehSteerRat_Val

# define Rte_Prm_FordBlaBoxIfCmnVehWhlBas_Val Rte_Prm_CDD_FordBlaBoxIfCmn_FordBlaBoxIfCmnVehWhlBas_Val



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


# define CDD_FordBlaBoxIfCmn_START_SEC_CODE
# include "CDD_FordBlaBoxIfCmn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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

# define RTE_RUNNABLE_FordBlaBoxIfCmnInit1 FordBlaBoxIfCmnInit1
FUNC(void, CDD_FordBlaBoxIfCmn_CODE) FordBlaBoxIfCmnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

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

# define RTE_RUNNABLE_FordBlaBoxIfCmnPer1 FordBlaBoxIfCmnPer1
FUNC(void, CDD_FordBlaBoxIfCmn_CODE) FordBlaBoxIfCmnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_FordBlaBoxIfCmn_STOP_SEC_CODE
# include "CDD_FordBlaBoxIfCmn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_FORDBLABOXIFCMN_H */
