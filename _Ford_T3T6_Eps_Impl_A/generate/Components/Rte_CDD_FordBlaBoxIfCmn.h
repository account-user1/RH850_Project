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
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_FordBlaBoxIfCmn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_FORDBLABOXIFCMN_H
# define _RTE_CDD_FORDBLABOXIFCMN_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CDD_FordBlaBoxIfCmn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_ActvParkAssiTqFild_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DualEcuIdn_EcuId_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CustDiag_FordEngTqClass_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FildVehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordActvNiblCtrlEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s23pm8, RTE_VAR_INIT) Rte_FordHwTqCdng_FordAppldFinalMotTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCdng_FordAppldFinalMotTqVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s8p7, RTE_VAR_INIT) Rte_FordHwTqCdng_FordBoostCrvAssiTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s5p10, RTE_VAR_INIT) Rte_FordHwTqCdng_FordBoostCrvInpTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordBrkPlsRejctnEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosnQlyFac8_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordEvasSteerAssiEnaReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordEvasSteerAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwAgArbn_FordHwVelVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s5p10, RTE_VAR_INIT) Rte_FordHwTqCdng_FordInpTqRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCdng_FordInpTqRawVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneCentrAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneDprtrWarnEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneKeepAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCdng_FordMaxAsscTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordMsgInp1Vld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordMsgInp2Vld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordMsgInp3Vld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordMsgInp4Vld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordPullDriftCmpEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordRelHwPosn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwAgArbn_FordRelHwPosnVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s23pm8, RTE_VAR_INIT) Rte_FordHwTqCdng_FordReqdFinalMotTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordResrchFctEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTqSteerCmpEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrfcJamAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordTrlrAidHitchAgRate_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssi5WhlEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiTrigEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg213BusHiSpd_FordVehAbsActv_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg213BusHiSpd_FordVehAbsEscStsVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsQlyFacRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg07DBusHiSpd_FordVehActBrkTqRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1HiPart_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1LoPart_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2HiPart_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2LoPart_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3HiPart_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3LoPart_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4HiPart_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4LoPart_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppld_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppldQlyFac_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBrkPedlVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg07DBusHiSpd_FordVehBrkTqVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDenied_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDisad_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehEngSpdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehEngSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg213BusHiSpd_FordVehEscActv_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiImgProcrModlAVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlCntrDirVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlDirRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlRollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlCntrDirVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlDirRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlRollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehGearLvrPosn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnVldInt_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehGearPosnRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehIgnSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordVehIgnStsVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneAssiImgProcgModlAVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnInten_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysRampTyp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLatACmpdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLatACmpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRateRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlImgProcrModlAVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPrcsn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRampTyp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRingMax_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehParkAidModlStsVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehParkAidModlSysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehReLeWhlCntrDirVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehReLeWhlDirRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehReLeWhlRollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehReRiWhlCntrDirVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehReRiWhlDirRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehReRiWhlRollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg41EBusHiSpd_FordVehSelDrvModChassisVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordVehTireCircum_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAgOffsDirRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidAcqSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvlRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReqVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidIdnNrRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidIdnVal_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobPosnVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobStsVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidModReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg215BusHiSpd_FordVehTrlrAidModReqVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidSetUpRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrakgSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrakgStVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrlrRvsGuidcSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAxleToBmpRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrBackupAssiMeasVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrBallToAxle_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrBrkCnctnStsRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrEnaReqRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchAgRateRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchRateVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawAgRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrIdnTypRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrLampCnctnStsRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsCnclReqRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsEnaRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsMsgTxtReqRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrTarVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateQlyFac_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrsmDesGearRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg083BusHiSpd_FordVehTurnSigSwtStsRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg083BusHiSpd_FordVehTurnSigVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg07DBusHiSpd_FordVehVertACmpdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_VehYaw_W_Actl, RTE_VAR_INIT) Rte_FordMsg091BusHiSpd_FordVehYawRateRaw_Ford_VehYaw_W_Actl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg091BusHiSpd_FordVehYawRateRawVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehYawRateVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg4B0BusHiSpd_FordVehYawStabyRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg4B0BusHiSpd_FordVehYawStabyVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdHi_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdLo_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwVel_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_IntAgCtrlSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u8p8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_RackToPinionRat_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SelnDrvgModSteerModReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts1_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts2_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts3_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts4_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts5_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_TrlrBackupAssiEnaVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_TrlrBackupAssiRvsVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_TrlrBackupAssiYawRateVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u8p8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_VehSteerRat_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_VehWhlBas_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_VertAVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ActvParkAssiTqFild_Val (0.0F)
#  define Rte_InitValue_EcuId_Val (0U)
#  define Rte_InitValue_EngTqClass_Val (2U)
#  define Rte_InitValue_FildVehSpdVld_Logl (FALSE)
#  define Rte_InitValue_FordActvNiblCtrlEnad_Logl (FALSE)
#  define Rte_InitValue_FordAppldFinalMotTq_Val (0)
#  define Rte_InitValue_FordAppldFinalMotTqVld_Logl (FALSE)
#  define Rte_InitValue_FordBoostCrvAssiTq_Val (0)
#  define Rte_InitValue_FordBoostCrvInpTq_Val (0)
#  define Rte_InitValue_FordBrkPlsRejctnEnad_Logl (FALSE)
#  define Rte_InitValue_FordCmpdHwPosn_Val (0.0F)
#  define Rte_InitValue_FordCmpdHwPosnQlyFac_Val (1U)
#  define Rte_InitValue_FordEvasSteerAssiEnaReq_Val (0U)
#  define Rte_InitValue_FordEvasSteerAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordHwVelVld_Logl (FALSE)
#  define Rte_InitValue_FordInpTqRaw_Val (0)
#  define Rte_InitValue_FordInpTqRawVld_Logl (FALSE)
#  define Rte_InitValue_FordLaneCentrAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordLaneDprtrWarnEnad_Logl (FALSE)
#  define Rte_InitValue_FordLaneKeepAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordMaxAsscTq_Val (0.0F)
#  define Rte_InitValue_FordMsgInp1Vld_Logl (FALSE)
#  define Rte_InitValue_FordMsgInp2Vld_Logl (FALSE)
#  define Rte_InitValue_FordMsgInp3Vld_Logl (FALSE)
#  define Rte_InitValue_FordMsgInp4Vld_Logl (FALSE)
#  define Rte_InitValue_FordPullDriftCmpEnad_Logl (FALSE)
#  define Rte_InitValue_FordRelHwPosn_Val (0.0F)
#  define Rte_InitValue_FordRelHwPosnVld_Logl (FALSE)
#  define Rte_InitValue_FordReqdFinalMotTq_Val (0)
#  define Rte_InitValue_FordResrchFctEnad_Logl (FALSE)
#  define Rte_InitValue_FordTqSteerCmpEnad_Logl (FALSE)
#  define Rte_InitValue_FordTrfcJamAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordTrlrAidHitchAgRate_Val (0U)
#  define Rte_InitValue_FordTrlrBackupAssi5WhlEnad_Logl (FALSE)
#  define Rte_InitValue_FordTrlrBackupAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordTrlrBackupAssiTrigEnad_Logl (FALSE)
#  define Rte_InitValue_FordVehAbsActv_Val (0U)
#  define Rte_InitValue_FordVehAbsEscStsVld_Logl (FALSE)
#  define Rte_InitValue_FordVehAccrPedlPosnStsQlyFacRaw_Val (0U)
#  define Rte_InitValue_FordVehAccrPedlPosnStsRaw_Val (0U)
#  define Rte_InitValue_FordVehAccrPedlPosnStsVld_Logl (FALSE)
#  define Rte_InitValue_FordVehActBrkTqRaw_Val (0U)
#  define Rte_InitValue_FordVehBlaBoxInp1HiPart_Val (0U)
#  define Rte_InitValue_FordVehBlaBoxInp1LoPart_Val (0U)
#  define Rte_InitValue_FordVehBlaBoxInp2HiPart_Val (0U)
#  define Rte_InitValue_FordVehBlaBoxInp2LoPart_Val (0U)
#  define Rte_InitValue_FordVehBlaBoxInp3HiPart_Val (0U)
#  define Rte_InitValue_FordVehBlaBoxInp3LoPart_Val (0U)
#  define Rte_InitValue_FordVehBlaBoxInp4HiPart_Val (0U)
#  define Rte_InitValue_FordVehBlaBoxInp4LoPart_Val (0U)
#  define Rte_InitValue_FordVehBrkPedlAppld_Val (0U)
#  define Rte_InitValue_FordVehBrkPedlAppldQlyFac_Val (0U)
#  define Rte_InitValue_FordVehBrkPedlVld_Logl (FALSE)
#  define Rte_InitValue_FordVehBrkTqVld_Logl (FALSE)
#  define Rte_InitValue_FordVehCllsnMtgtnByBrkgDenied_Val (0U)
#  define Rte_InitValue_FordVehCllsnMtgtnByBrkgDisad_Val (0U)
#  define Rte_InitValue_FordVehCllsnMtgtnByBrkgLatDstRaw_Val (0U)
#  define Rte_InitValue_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val (0U)
#  define Rte_InitValue_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val (0U)
#  define Rte_InitValue_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val (0U)
#  define Rte_InitValue_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val (0U)
#  define Rte_InitValue_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val (0U)
#  define Rte_InitValue_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val (0U)
#  define Rte_InitValue_FordVehEngSpdRaw_Val (0U)
#  define Rte_InitValue_FordVehEngSpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehEscActv_Val (0U)
#  define Rte_InitValue_FordVehEvasSteerAssiImgProcrModlAVld_Logl (FALSE)
#  define Rte_InitValue_FordVehEvasSteerAssiReq_Val (0U)
#  define Rte_InitValue_FordVehEvasSteerAssiReqVld_Logl (FALSE)
#  define Rte_InitValue_FordVehFrntLeWhlCntrDirVld_Logl (FALSE)
#  define Rte_InitValue_FordVehFrntLeWhlDirRaw_Val (0U)
#  define Rte_InitValue_FordVehFrntLeWhlRollgCntr_Val (0U)
#  define Rte_InitValue_FordVehFrntLeWhlSpdRaw_Val (0U)
#  define Rte_InitValue_FordVehFrntLeWhlSpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehFrntRiWhlCntrDirVld_Logl (FALSE)
#  define Rte_InitValue_FordVehFrntRiWhlDirRaw_Val (0U)
#  define Rte_InitValue_FordVehFrntRiWhlRollgCntr_Val (0U)
#  define Rte_InitValue_FordVehFrntRiWhlSpdRaw_Val (0U)
#  define Rte_InitValue_FordVehFrntRiWhlSpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehGearLvrPosn_Val (0U)
#  define Rte_InitValue_FordVehGearLvrPosnVldInt_Logl (FALSE)
#  define Rte_InitValue_FordVehGearPosnRaw_Val (0U)
#  define Rte_InitValue_FordVehGearRvsStsRaw_Val (0U)
#  define Rte_InitValue_FordVehGearRvsStsVld_Logl (FALSE)
#  define Rte_InitValue_FordVehIgnSts_Val (0U)
#  define Rte_InitValue_FordVehIgnStsVld_Logl (FALSE)
#  define Rte_InitValue_FordVehLaneAssiImgProcgModlAVld_Logl (FALSE)
#  define Rte_InitValue_FordVehLaneDetnWarnInten_Val (0U)
#  define Rte_InitValue_FordVehLaneDetnWarnSts_Val (0U)
#  define Rte_InitValue_FordVehLaneKeepSysCrvtRaw_Val (0U)
#  define Rte_InitValue_FordVehLaneKeepSysRampTyp_Val (0U)
#  define Rte_InitValue_FordVehLaneKeepSysReqdAgRaw_Val (0U)
#  define Rte_InitValue_FordVehLaneKeepSysSts_Val (0U)
#  define Rte_InitValue_FordVehLatACmpdRaw_Val (0U)
#  define Rte_InitValue_FordVehLatACmpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehLatCtrlCrvtRateRaw_Val (0U)
#  define Rte_InitValue_FordVehLatCtrlCrvtRaw_Val (0U)
#  define Rte_InitValue_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val (0U)
#  define Rte_InitValue_FordVehLatCtrlImgProcrModlAVld_Logl (FALSE)
#  define Rte_InitValue_FordVehLatCtrlPahOffsRaw_Val (0U)
#  define Rte_InitValue_FordVehLatCtrlPahRaw_Val (0U)
#  define Rte_InitValue_FordVehLatCtrlPrcsn_Val (0U)
#  define Rte_InitValue_FordVehLatCtrlRampTyp_Val (0U)
#  define Rte_InitValue_FordVehLatCtrlReq_Val (0U)
#  define Rte_InitValue_FordVehLatCtrlRingMax_Val (0U)
#  define Rte_InitValue_FordVehLgtACmpdRaw_Val (0U)
#  define Rte_InitValue_FordVehLgtACmpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val (0U)
#  define Rte_InitValue_FordVehLoSpdMtnCtrlBrkSprtVld_Logl (FALSE)
#  define Rte_InitValue_FordVehParkAidModlStsVld_Logl (FALSE)
#  define Rte_InitValue_FordVehParkAidModlSysSt_Val (0U)
#  define Rte_InitValue_FordVehPrpnWhlTqRaw_Val (0U)
#  define Rte_InitValue_FordVehPrpnWhlTqVld_Logl (FALSE)
#  define Rte_InitValue_FordVehReLeWhlCntrDirVld_Logl (FALSE)
#  define Rte_InitValue_FordVehReLeWhlDirRaw_Val (0U)
#  define Rte_InitValue_FordVehReLeWhlRollgCntr_Val (0U)
#  define Rte_InitValue_FordVehReLeWhlSpdRaw_Val (0U)
#  define Rte_InitValue_FordVehReLeWhlSpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehReRiWhlCntrDirVld_Logl (FALSE)
#  define Rte_InitValue_FordVehReRiWhlDirRaw_Val (0U)
#  define Rte_InitValue_FordVehReRiWhlRollgCntr_Val (0U)
#  define Rte_InitValue_FordVehReRiWhlSpdRaw_Val (0U)
#  define Rte_InitValue_FordVehReRiWhlSpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSelDrvModChassisVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSpd_Val (0.0F)
#  define Rte_InitValue_FordVehSpdBrkModlRaw_Val (0U)
#  define Rte_InitValue_FordVehSpdOverGndRaw_Val (0U)
#  define Rte_InitValue_FordVehSpdOverGndVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSteerPinionAgOffsRaw_Val (0U)
#  define Rte_InitValue_FordVehSteerPinionAgOffsVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSteerPinionOffsStsRaw_Val (0U)
#  define Rte_InitValue_FordVehTireCircum_Val (0.0F)
#  define Rte_InitValue_FordVehTrlrAgOffsDirRaw_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidAcqSts_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidAvlRaw_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidCnclReq_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidCnclReqVld_Logl (FALSE)
#  define Rte_InitValue_FordVehTrlrAidHitchAg_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidIdnNrRaw_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidIdnVal_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidKnobBtn_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidKnobPosn_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidKnobPosnVld_Logl (FALSE)
#  define Rte_InitValue_FordVehTrlrAidKnobStsVld_Logl (FALSE)
#  define Rte_InitValue_FordVehTrlrAidModReq_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidModReqVld_Logl (FALSE)
#  define Rte_InitValue_FordVehTrlrAidSetUpRaw_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidTrakgSt_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidTrakgStVld_Logl (FALSE)
#  define Rte_InitValue_FordVehTrlrAidTrlrRvsGuidcSts_Val (0U)
#  define Rte_InitValue_FordVehTrlrAxleToBmpRaw_Val (0U)
#  define Rte_InitValue_FordVehTrlrBackupAssiAvlVld_Logl (FALSE)
#  define Rte_InitValue_FordVehTrlrBackupAssiMeasVld_Logl (FALSE)
#  define Rte_InitValue_FordVehTrlrBallToAxle_Val (0U)
#  define Rte_InitValue_FordVehTrlrBrkCnctnStsRaw_Val (0U)
#  define Rte_InitValue_FordVehTrlrEnaReqRaw_Val (0U)
#  define Rte_InitValue_FordVehTrlrHitchAgRateRaw_Val (0U)
#  define Rte_InitValue_FordVehTrlrHitchAgVld_Logl (FALSE)
#  define Rte_InitValue_FordVehTrlrHitchRateVld_Logl (FALSE)
#  define Rte_InitValue_FordVehTrlrHitchYawAgRaw_Val (0U)
#  define Rte_InitValue_FordVehTrlrHitchYawSts_Val (0U)
#  define Rte_InitValue_FordVehTrlrIdnTypRaw_Val (0U)
#  define Rte_InitValue_FordVehTrlrLampCnctnStsRaw_Val (0U)
#  define Rte_InitValue_FordVehTrlrRvsCnclReqRaw_Val (0U)
#  define Rte_InitValue_FordVehTrlrRvsEnaRaw_Val (0U)
#  define Rte_InitValue_FordVehTrlrRvsMsgTxtReqRaw_Val (0U)
#  define Rte_InitValue_FordVehTrlrTarVld_Logl (FALSE)
#  define Rte_InitValue_FordVehTrlrYawRateQlyFac_Val (0U)
#  define Rte_InitValue_FordVehTrlrYawRateRaw_Val (0U)
#  define Rte_InitValue_FordVehTrsmDesGearRaw_Val (0U)
#  define Rte_InitValue_FordVehTurnSigSwtStsRaw_Val (0U)
#  define Rte_InitValue_FordVehTurnSigVld_Logl (FALSE)
#  define Rte_InitValue_FordVehVertACmpdRaw_Val (0U)
#  define Rte_InitValue_FordVehYawRateCmpdRaw_Val (0U)
#  define Rte_InitValue_FordVehYawRateRawVld_Logl (FALSE)
#  define Rte_InitValue_FordVehYawRateVld_Logl (FALSE)
#  define Rte_InitValue_FordVehYawStabyRaw_Val (0U)
#  define Rte_InitValue_FordVehYawStabyVld_Logl (FALSE)
#  define Rte_InitValue_FordYawRateSnsrIdHi_Val (0U)
#  define Rte_InitValue_FordYawRateSnsrIdLo_Val (0U)
#  define Rte_InitValue_HwVel_Val (0.0F)
#  define Rte_InitValue_IntAgCtrlSt_Val (0U)
#  define Rte_InitValue_RackToPinionRat_Val (0U)
#  define Rte_InitValue_SelnDrvgModSteerModReq_Val (0U)
#  define Rte_InitValue_SemiAutParlParkAgCtrlSts1_Val (0U)
#  define Rte_InitValue_SemiAutParlParkAgCtrlSts2_Logl (FALSE)
#  define Rte_InitValue_SemiAutParlParkAgCtrlSts3_Logl (FALSE)
#  define Rte_InitValue_SemiAutParlParkAgCtrlSts4_Logl (FALSE)
#  define Rte_InitValue_SemiAutParlParkAgCtrlSts5_Logl (FALSE)
#  define Rte_InitValue_TrlrBackupAssiEnaVld_Logl (FALSE)
#  define Rte_InitValue_TrlrBackupAssiRvsVld_Logl (FALSE)
#  define Rte_InitValue_TrlrBackupAssiYawRateVld_Logl (FALSE)
#  define Rte_InitValue_VehSpd_Val (0.0F)
#  define Rte_InitValue_VehSpdVld_Logl (FALSE)
#  define Rte_InitValue_VehSteerRat_Val (0U)
#  define Rte_InitValue_VehWhlBas_Val (0U)
#  define Rte_InitValue_VertAVld_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ActvParkAssiTqFild_Val Rte_Read_CDD_FordBlaBoxIfCmn_ActvParkAssiTqFild_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_ActvParkAssiTqFild_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_ActvParkAssiTqFild_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EcuId_Val Rte_Read_CDD_FordBlaBoxIfCmn_EcuId_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_EcuId_Val(data) (*(data) = Rte_DualEcuIdn_EcuId_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EngTqClass_Val Rte_Read_CDD_FordBlaBoxIfCmn_EngTqClass_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_EngTqClass_Val(data) (*(data) = Rte_CustDiag_FordEngTqClass_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FildVehSpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FildVehSpdVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FildVehSpdVld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FildVehSpdVld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordActvNiblCtrlEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordActvNiblCtrlEnad_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordActvNiblCtrlEnad_Logl(data) (*(data) = Rte_CustDiag_FordActvNiblCtrlEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordAppldFinalMotTq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordAppldFinalMotTq_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordAppldFinalMotTq_Val(data) (*(data) = Rte_FordHwTqCdng_FordAppldFinalMotTq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordAppldFinalMotTqVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordAppldFinalMotTqVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordAppldFinalMotTqVld_Logl(data) (*(data) = Rte_FordHwTqCdng_FordAppldFinalMotTqVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordBoostCrvAssiTq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordBoostCrvAssiTq_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordBoostCrvAssiTq_Val(data) (*(data) = Rte_FordHwTqCdng_FordBoostCrvAssiTq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordBoostCrvInpTq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordBoostCrvInpTq_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordBoostCrvInpTq_Val(data) (*(data) = Rte_FordHwTqCdng_FordBoostCrvInpTq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordBrkPlsRejctnEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordBrkPlsRejctnEnad_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordBrkPlsRejctnEnad_Logl(data) (*(data) = Rte_CustDiag_FordBrkPlsRejctnEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCmpdHwPosn_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordCmpdHwPosn_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordCmpdHwPosn_Val(data) (*(data) = Rte_FordHwAgArbn_FordCmpdHwPosn_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCmpdHwPosnQlyFac_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordCmpdHwPosnQlyFac_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordCmpdHwPosnQlyFac_Val(data) (*(data) = Rte_FordHwAgArbn_FordCmpdHwPosnQlyFac8_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEvasSteerAssiEnaReq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordEvasSteerAssiEnaReq_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordEvasSteerAssiEnaReq_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordEvasSteerAssiEnaReq_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEvasSteerAssiEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordEvasSteerAssiEnad_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordEvasSteerAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordEvasSteerAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordHwVelVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordHwVelVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordHwVelVld_Logl(data) (*(data) = Rte_FordHwAgArbn_FordHwVelVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordInpTqRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordInpTqRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordInpTqRaw_Val(data) (*(data) = Rte_FordHwTqCdng_FordInpTqRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordInpTqRawVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordInpTqRawVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordInpTqRawVld_Logl(data) (*(data) = Rte_FordHwTqCdng_FordInpTqRawVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneCentrAssiEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordLaneCentrAssiEnad_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordLaneCentrAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordLaneCentrAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneDprtrWarnEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordLaneDprtrWarnEnad_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordLaneDprtrWarnEnad_Logl(data) (*(data) = Rte_CustDiag_FordLaneDprtrWarnEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneKeepAssiEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordLaneKeepAssiEnad_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordLaneKeepAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordLaneKeepAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMaxAsscTq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordMaxAsscTq_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordMaxAsscTq_Val(data) (*(data) = Rte_FordHwTqCdng_FordMaxAsscTq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMsgInp1Vld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordMsgInp1Vld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordMsgInp1Vld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordMsgInp1Vld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMsgInp2Vld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordMsgInp2Vld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordMsgInp2Vld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordMsgInp2Vld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMsgInp3Vld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordMsgInp3Vld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordMsgInp3Vld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordMsgInp3Vld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMsgInp4Vld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordMsgInp4Vld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordMsgInp4Vld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordMsgInp4Vld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordPullDriftCmpEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordPullDriftCmpEnad_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordPullDriftCmpEnad_Logl(data) (*(data) = Rte_CustDiag_FordPullDriftCmpEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordRelHwPosn_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordRelHwPosn_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordRelHwPosn_Val(data) (*(data) = Rte_FordHwAgArbn_FordRelHwPosn_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordRelHwPosnVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordRelHwPosnVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordRelHwPosnVld_Logl(data) (*(data) = Rte_FordHwAgArbn_FordRelHwPosnVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordReqdFinalMotTq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordReqdFinalMotTq_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordReqdFinalMotTq_Val(data) (*(data) = Rte_FordHwTqCdng_FordReqdFinalMotTq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordResrchFctEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordResrchFctEnad_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordResrchFctEnad_Logl(data) (*(data) = Rte_CustDiag_FordResrchFctEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTqSteerCmpEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordTqSteerCmpEnad_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordTqSteerCmpEnad_Logl(data) (*(data) = Rte_CustDiag_FordTqSteerCmpEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrfcJamAssiEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordTrfcJamAssiEnad_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordTrfcJamAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordTrfcJamAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrlrAidHitchAgRate_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordTrlrAidHitchAgRate_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordTrlrAidHitchAgRate_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordTrlrAidHitchAgRate_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrlrBackupAssi5WhlEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssi5WhlEnad_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssi5WhlEnad_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssi5WhlEnad_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrlrBackupAssiEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiEnad_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiEnad_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiEnad_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrlrBackupAssiTrigEnad_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiTrigEnad_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiTrigEnad_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiTrigEnad_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehAbsActv_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAbsActv_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAbsActv_Val(data) (*(data) = Rte_FordMsg213BusHiSpd_FordVehAbsActv_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehAbsEscStsVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAbsEscStsVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAbsEscStsVld_Logl(data) (*(data) = Rte_FordMsg213BusHiSpd_FordVehAbsEscStsVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehAccrPedlPosnStsQlyFacRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsQlyFacRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsQlyFacRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsQlyFacRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehAccrPedlPosnStsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehAccrPedlPosnStsVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsVld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsVld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehActBrkTqRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehActBrkTqRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehActBrkTqRaw_Val(data) (*(data) = Rte_FordMsg07DBusHiSpd_FordVehActBrkTqRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehBlaBoxInp1HiPart_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1HiPart_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1HiPart_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1HiPart_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehBlaBoxInp1LoPart_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1LoPart_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1LoPart_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1LoPart_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehBlaBoxInp2HiPart_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2HiPart_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2HiPart_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2HiPart_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehBlaBoxInp2LoPart_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2LoPart_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2LoPart_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2LoPart_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehBlaBoxInp3HiPart_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3HiPart_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3HiPart_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3HiPart_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehBlaBoxInp3LoPart_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3LoPart_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3LoPart_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3LoPart_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehBlaBoxInp4HiPart_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4HiPart_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4HiPart_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4HiPart_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehBlaBoxInp4LoPart_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4LoPart_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4LoPart_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4LoPart_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehBrkPedlAppld_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppld_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppld_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppld_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehBrkPedlAppldQlyFac_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppldQlyFac_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppldQlyFac_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppldQlyFac_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehBrkPedlVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBrkPedlVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBrkPedlVld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehBrkPedlVld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehBrkTqVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBrkTqVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehBrkTqVld_Logl(data) (*(data) = Rte_FordMsg07DBusHiSpd_FordVehBrkTqVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehCllsnMtgtnByBrkgDenied_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgDenied_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgDenied_Val(data) (*(data) = Rte_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDenied_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehCllsnMtgtnByBrkgDisad_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgDisad_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgDisad_Val(data) (*(data) = Rte_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDisad_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehCllsnMtgtnByBrkgLatDstRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgLatDstRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgLatDstRaw_Val(data) (*(data) = Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val(data) (*(data) = Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val(data) (*(data) = Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val(data) (*(data) = Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val(data) (*(data) = Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val(data) (*(data) = Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val(data) (*(data) = Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehEngSpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEngSpdRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEngSpdRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehEngSpdRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehEngSpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEngSpdVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEngSpdVld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehEngSpdVld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehEscActv_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEscActv_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEscActv_Val(data) (*(data) = Rte_FordMsg213BusHiSpd_FordVehEscActv_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehEvasSteerAssiImgProcrModlAVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEvasSteerAssiImgProcrModlAVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEvasSteerAssiImgProcrModlAVld_Logl(data) (*(data) = Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiImgProcrModlAVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehEvasSteerAssiReq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEvasSteerAssiReq_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEvasSteerAssiReq_Val(data) (*(data) = Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehEvasSteerAssiReqVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEvasSteerAssiReqVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehEvasSteerAssiReqVld_Logl(data) (*(data) = Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehFrntLeWhlCntrDirVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlCntrDirVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlCntrDirVld_Logl(data) (*(data) = Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlCntrDirVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehFrntLeWhlDirRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlDirRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlDirRaw_Val(data) (*(data) = Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlDirRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehFrntLeWhlRollgCntr_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlRollgCntr_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlRollgCntr_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlRollgCntr_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehFrntLeWhlSpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlSpdRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlSpdRaw_Val(data) (*(data) = Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehFrntLeWhlSpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlSpdVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlSpdVld_Logl(data) (*(data) = Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehFrntRiWhlCntrDirVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlCntrDirVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlCntrDirVld_Logl(data) (*(data) = Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlCntrDirVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehFrntRiWhlDirRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlDirRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlDirRaw_Val(data) (*(data) = Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlDirRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehFrntRiWhlRollgCntr_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlRollgCntr_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlRollgCntr_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlRollgCntr_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehFrntRiWhlSpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlSpdRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlSpdRaw_Val(data) (*(data) = Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehFrntRiWhlSpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlSpdVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlSpdVld_Logl(data) (*(data) = Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehGearLvrPosn_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearLvrPosn_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearLvrPosn_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehGearLvrPosn_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehGearLvrPosnVldInt_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearLvrPosnVldInt_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearLvrPosnVldInt_Logl(data) (*(data) = Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnVldInt_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehGearPosnRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearPosnRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearPosnRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehGearPosnRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehGearRvsStsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearRvsStsRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearRvsStsRaw_Val(data) (*(data) = Rte_FordMsg202BusHiSpd_FordVehGearRvsStsRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehGearRvsStsVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearRvsStsVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehGearRvsStsVld_Logl(data) (*(data) = Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehIgnSts_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehIgnSts_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehIgnSts_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehIgnSts_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehIgnStsVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehIgnStsVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehIgnStsVld_Logl(data) (*(data) = Rte_FordMsg3B3BusHiSpd_FordVehIgnStsVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLaneAssiImgProcgModlAVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneAssiImgProcgModlAVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneAssiImgProcgModlAVld_Logl(data) (*(data) = Rte_FordMsg3CABusHiSpd_FordVehLaneAssiImgProcgModlAVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLaneDetnWarnInten_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneDetnWarnInten_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneDetnWarnInten_Val(data) (*(data) = Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnInten_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLaneDetnWarnSts_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneDetnWarnSts_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneDetnWarnSts_Val(data) (*(data) = Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnSts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLaneKeepSysCrvtRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneKeepSysCrvtRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneKeepSysCrvtRaw_Val(data) (*(data) = Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLaneKeepSysRampTyp_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneKeepSysRampTyp_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneKeepSysRampTyp_Val(data) (*(data) = Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysRampTyp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLaneKeepSysReqdAgRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneKeepSysReqdAgRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneKeepSysReqdAgRaw_Val(data) (*(data) = Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLaneKeepSysSts_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneKeepSysSts_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLaneKeepSysSts_Val(data) (*(data) = Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysSts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLatACmpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatACmpdRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatACmpdRaw_Val(data) (*(data) = Rte_FordMsg077BusHiSpd_FordVehLatACmpdRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLatACmpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatACmpdVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatACmpdVld_Logl(data) (*(data) = Rte_FordMsg077BusHiSpd_FordVehLatACmpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLatCtrlCrvtRateRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlCrvtRateRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlCrvtRateRaw_Val(data) (*(data) = Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRateRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLatCtrlCrvtRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlCrvtRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlCrvtRaw_Val(data) (*(data) = Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val(data) (*(data) = Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLatCtrlImgProcrModlAVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlImgProcrModlAVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlImgProcrModlAVld_Logl(data) (*(data) = Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlImgProcrModlAVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLatCtrlPahOffsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlPahOffsRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlPahOffsRaw_Val(data) (*(data) = Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLatCtrlPahRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlPahRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlPahRaw_Val(data) (*(data) = Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLatCtrlPrcsn_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlPrcsn_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlPrcsn_Val(data) (*(data) = Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPrcsn_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLatCtrlRampTyp_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlRampTyp_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlRampTyp_Val(data) (*(data) = Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRampTyp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLatCtrlReq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlReq_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlReq_Val(data) (*(data) = Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlReq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLatCtrlRingMax_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlRingMax_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLatCtrlRingMax_Val(data) (*(data) = Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRingMax_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLgtACmpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLgtACmpdRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLgtACmpdRaw_Val(data) (*(data) = Rte_FordMsg077BusHiSpd_FordVehLgtACmpdRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLgtACmpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLgtACmpdVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLgtACmpdVld_Logl(data) (*(data) = Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val(data) (*(data) = Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLoSpdMtnCtrlBrkSprtVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLoSpdMtnCtrlBrkSprtVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehLoSpdMtnCtrlBrkSprtVld_Logl(data) (*(data) = Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehParkAidModlStsVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehParkAidModlStsVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehParkAidModlStsVld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehParkAidModlStsVld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehParkAidModlSysSt_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehParkAidModlSysSt_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehParkAidModlSysSt_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehParkAidModlSysSt_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehPrpnWhlTqRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehPrpnWhlTqRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehPrpnWhlTqRaw_Val(data) (*(data) = Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehPrpnWhlTqVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehPrpnWhlTqVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehPrpnWhlTqVld_Logl(data) (*(data) = Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehReLeWhlCntrDirVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlCntrDirVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlCntrDirVld_Logl(data) (*(data) = Rte_FordMsg216BusHiSpd_FordVehReLeWhlCntrDirVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehReLeWhlDirRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlDirRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlDirRaw_Val(data) (*(data) = Rte_FordMsg216BusHiSpd_FordVehReLeWhlDirRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehReLeWhlRollgCntr_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlRollgCntr_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlRollgCntr_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehReLeWhlRollgCntr_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehReLeWhlSpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlSpdRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlSpdRaw_Val(data) (*(data) = Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehReLeWhlSpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlSpdVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReLeWhlSpdVld_Logl(data) (*(data) = Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehReRiWhlCntrDirVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlCntrDirVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlCntrDirVld_Logl(data) (*(data) = Rte_FordMsg216BusHiSpd_FordVehReRiWhlCntrDirVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehReRiWhlDirRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlDirRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlDirRaw_Val(data) (*(data) = Rte_FordMsg216BusHiSpd_FordVehReRiWhlDirRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehReRiWhlRollgCntr_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlRollgCntr_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlRollgCntr_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehReRiWhlRollgCntr_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehReRiWhlSpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlSpdRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlSpdRaw_Val(data) (*(data) = Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehReRiWhlSpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlSpdVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehReRiWhlSpdVld_Logl(data) (*(data) = Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSelDrvModChassisVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSelDrvModChassisVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSelDrvModChassisVld_Logl(data) (*(data) = Rte_FordMsg41EBusHiSpd_FordVehSelDrvModChassisVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpd_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSpd_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSpd_Val(data) (*(data) = Rte_FordVehSpdArbn_FordVehSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpdBrkModlRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSpdBrkModlRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSpdBrkModlRaw_Val(data) (*(data) = Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpdOverGndRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSpdOverGndRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSpdOverGndRaw_Val(data) (*(data) = Rte_FordMsg077BusHiSpd_FordVehSpdOverGndRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpdOverGndVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSpdOverGndVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSpdOverGndVld_Logl(data) (*(data) = Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSteerPinionAgOffsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSteerPinionAgOffsRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSteerPinionAgOffsRaw_Val(data) (*(data) = Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSteerPinionAgOffsVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSteerPinionAgOffsVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSteerPinionAgOffsVld_Logl(data) (*(data) = Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSteerPinionOffsStsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSteerPinionOffsStsRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehSteerPinionOffsStsRaw_Val(data) (*(data) = Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTireCircum_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTireCircum_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTireCircum_Val(data) (*(data) = Rte_FordMsg40ABusHiSpd_FordVehTireCircum_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAgOffsDirRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAgOffsDirRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAgOffsDirRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAgOffsDirRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidAcqSts_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidAcqSts_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidAcqSts_Val(data) (*(data) = Rte_FordMsg459BusHiSpd_FordVehTrlrAidAcqSts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidAvlRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidAvlRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidAvlRaw_Val(data) (*(data) = Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvlRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidCnclReq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReq_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReq_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReq_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidCnclReqVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReqVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReqVld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReqVld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidHitchAg_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidHitchAg_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidHitchAg_Val(data) (*(data) = Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidIdnNrRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidIdnNrRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidIdnNrRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidIdnNrRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidIdnVal_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidIdnVal_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidIdnVal_Val(data) (*(data) = Rte_FordMsg459BusHiSpd_FordVehTrlrAidIdnVal_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidKnobBtn_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobBtn_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobBtn_Val(data) (*(data) = Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtn_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidKnobPosn_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobPosn_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobPosn_Val(data) (*(data) = Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosn_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidKnobPosnVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobPosnVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobPosnVld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobPosnVld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidKnobStsVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobStsVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobStsVld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobStsVld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidModReq_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidModReq_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidModReq_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidModReq_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidModReqVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidModReqVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidModReqVld_Logl(data) (*(data) = Rte_FordMsg215BusHiSpd_FordVehTrlrAidModReqVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidSetUpRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidSetUpRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidSetUpRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidSetUpRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidTrakgSt_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidTrakgSt_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidTrakgSt_Val(data) (*(data) = Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrakgSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidTrakgStVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidTrakgStVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidTrakgStVld_Logl(data) (*(data) = Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrakgStVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAidTrlrRvsGuidcSts_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidTrlrRvsGuidcSts_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAidTrlrRvsGuidcSts_Val(data) (*(data) = Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrlrRvsGuidcSts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrAxleToBmpRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAxleToBmpRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrAxleToBmpRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAxleToBmpRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrBackupAssiAvlVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrBackupAssiAvlVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrBackupAssiAvlVld_Logl(data) (*(data) = Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrBackupAssiMeasVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrBackupAssiMeasVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrBackupAssiMeasVld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrBackupAssiMeasVld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrBallToAxle_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrBallToAxle_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrBallToAxle_Val(data) (*(data) = Rte_FordMsg459BusHiSpd_FordVehTrlrBallToAxle_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrBrkCnctnStsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrBrkCnctnStsRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrBrkCnctnStsRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrBrkCnctnStsRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrEnaReqRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrEnaReqRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrEnaReqRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrEnaReqRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrHitchAgRateRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchAgRateRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchAgRateRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchAgRateRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrHitchAgVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchAgVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchAgVld_Logl(data) (*(data) = Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrHitchRateVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchRateVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchRateVld_Logl(data) (*(data) = Rte_FordMsg459BusHiSpd_FordVehTrlrHitchRateVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrHitchYawAgRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawAgRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawAgRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawAgRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrHitchYawSts_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawSts_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawSts_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawSts_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrIdnTypRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrIdnTypRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrIdnTypRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrIdnTypRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrLampCnctnStsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrLampCnctnStsRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrLampCnctnStsRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrLampCnctnStsRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrRvsCnclReqRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsCnclReqRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsCnclReqRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsCnclReqRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrRvsEnaRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsEnaRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsEnaRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsEnaRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrRvsMsgTxtReqRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsMsgTxtReqRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsMsgTxtReqRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsMsgTxtReqRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrTarVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrTarVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrTarVld_Logl(data) (*(data) = Rte_FordMsg459BusHiSpd_FordVehTrlrTarVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrYawRateQlyFac_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateQlyFac_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateQlyFac_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateQlyFac_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrlrYawRateRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTrsmDesGearRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrsmDesGearRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTrsmDesGearRaw_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehTrsmDesGearRaw_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTurnSigSwtStsRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTurnSigSwtStsRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTurnSigSwtStsRaw_Val(data) (*(data) = Rte_FordMsg083BusHiSpd_FordVehTurnSigSwtStsRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehTurnSigVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTurnSigVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehTurnSigVld_Logl(data) (*(data) = Rte_FordMsg083BusHiSpd_FordVehTurnSigVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehVertACmpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehVertACmpdRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehVertACmpdRaw_Val(data) (*(data) = Rte_FordMsg07DBusHiSpd_FordVehVertACmpdRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehYawRateCmpdRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawRateCmpdRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawRateCmpdRaw_Val(data) (*(data) = Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehYawRateRaw_Ford_VehYaw_W_Actl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawRateRaw_Ford_VehYaw_W_Actl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawRateRaw_Ford_VehYaw_W_Actl(data) (*(data) = Rte_FordMsg091BusHiSpd_FordVehYawRateRaw_Ford_VehYaw_W_Actl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehYawRateRawVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawRateRawVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawRateRawVld_Logl(data) (*(data) = Rte_FordMsg091BusHiSpd_FordVehYawRateRawVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehYawRateVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawRateVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawRateVld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordVehYawRateVld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehYawStabyRaw_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawStabyRaw_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawStabyRaw_Val(data) (*(data) = Rte_FordMsg4B0BusHiSpd_FordVehYawStabyRaw_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehYawStabyVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawStabyVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordVehYawStabyVld_Logl(data) (*(data) = Rte_FordMsg4B0BusHiSpd_FordVehYawStabyVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordYawRateSnsrIdHi_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdHi_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdHi_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdHi_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordYawRateSnsrIdLo_Val Rte_Read_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdLo_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdLo_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdLo_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwVel_Val Rte_Read_CDD_FordBlaBoxIfCmn_HwVel_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_HwVel_Val(data) (*(data) = Rte_HwAgSysArbn_HwVel_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_IntAgCtrlSt_Val Rte_Read_CDD_FordBlaBoxIfCmn_IntAgCtrlSt_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_IntAgCtrlSt_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_IntAgCtrlSt_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RackToPinionRat_Val Rte_Read_CDD_FordBlaBoxIfCmn_RackToPinionRat_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_RackToPinionRat_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_RackToPinionRat_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SelnDrvgModSteerModReq_Val Rte_Read_CDD_FordBlaBoxIfCmn_SelnDrvgModSteerModReq_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_SelnDrvgModSteerModReq_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_SelnDrvgModSteerModReq_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SemiAutParlParkAgCtrlSts1_Val Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts1_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts1_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts1_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SemiAutParlParkAgCtrlSts2_Logl Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts2_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts2_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts2_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SemiAutParlParkAgCtrlSts3_Logl Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts3_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts3_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts3_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SemiAutParlParkAgCtrlSts4_Logl Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts4_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts4_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts4_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SemiAutParlParkAgCtrlSts5_Logl Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts5_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts5_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts5_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TrlrBackupAssiEnaVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_TrlrBackupAssiEnaVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_TrlrBackupAssiEnaVld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_TrlrBackupAssiEnaVld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TrlrBackupAssiRvsVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_TrlrBackupAssiRvsVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_TrlrBackupAssiRvsVld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_TrlrBackupAssiRvsVld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TrlrBackupAssiYawRateVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_TrlrBackupAssiYawRateVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_TrlrBackupAssiYawRateVld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_TrlrBackupAssiYawRateVld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_CDD_FordBlaBoxIfCmn_VehSpd_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_VehSpd_Val(data) (*(data) = Rte_ImcSigArbn_VehSpdImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_VehSpdVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_VehSpdVld_Logl(data) (*(data) = Rte_VehSigCdng_VehSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSteerRat_Val Rte_Read_CDD_FordBlaBoxIfCmn_VehSteerRat_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_VehSteerRat_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_VehSteerRat_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehWhlBas_Val Rte_Read_CDD_FordBlaBoxIfCmn_VehWhlBas_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmn_VehWhlBas_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_VehWhlBas_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VertAVld_Logl Rte_Read_CDD_FordBlaBoxIfCmn_VertAVld_Logl
#  define Rte_Read_CDD_FordBlaBoxIfCmn_VertAVld_Logl(data) (*(data) = Rte_CDD_FordBlaBoxIfCmn_VertAVld_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_FordBlaBoxIfCmnVehSteerRat_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordBlaBoxIfCmnVehSteerRat_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordBlaBoxIfCmnVehWhlBas_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordBlaBoxIfCmnVehWhlBas_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# endif /* !defined(RTE_CORE) */


# define CDD_FordBlaBoxIfCmn_START_SEC_CODE
# include "CDD_FordBlaBoxIfCmn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordBlaBoxIfCmnInit1 FordBlaBoxIfCmnInit1
#  define RTE_RUNNABLE_FordBlaBoxIfCmnPer1 FordBlaBoxIfCmnPer1
# endif

FUNC(void, CDD_FordBlaBoxIfCmn_CODE) FordBlaBoxIfCmnInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_FordBlaBoxIfCmn_CODE) FordBlaBoxIfCmnPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CDD_FordBlaBoxIfCmn_STOP_SEC_CODE
# include "CDD_FordBlaBoxIfCmn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_FORDBLABOXIFCMN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
