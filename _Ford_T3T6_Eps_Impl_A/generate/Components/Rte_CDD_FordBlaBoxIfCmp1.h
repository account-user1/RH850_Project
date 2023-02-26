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
 *          File:  Rte_CDD_FordBlaBoxIfCmp1.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_FordBlaBoxIfCmp1>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_FORDBLABOXIFCMP1_H
# define _RTE_CDD_FORDBLABOXIFCMP1_H

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

# include "Rte_CDD_FordBlaBoxIfCmp1_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_ActvNiblCmpIntSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlFeatSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlSwVers_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordBlaBoxSwVers_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneAssiSwVers_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnFeatSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiFeatSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLatCtrlFeatSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLatCtrlTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpFeatSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpLrngFeatSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpSwVers_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordResrchFctSwVers_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordTrlrBackupAssiSwVers_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1HiPart_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1LoPart_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2HiPart_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2LoPart_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3HiPart_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3LoPart_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4HiPart_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4LoPart_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiAvl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiHandsOff_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiRejctn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_LatCtlLim_D_Stat, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_LatCtlSte_D_Stat, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrfcJamAvdHandsOnConf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAgTarCalcn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgMax_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgWarn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidEnaSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidHitchToAxle_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidMsgTxtReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidSetUp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTarIdn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTrlrIdn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrHitchLampReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehVelMaxReqTrlrAid_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehVelTrlrAidReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_LaneDprtrWarnIntSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_LaneKeepAssiIntSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_LatCtrlIntSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_PullDriftCmpIntSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s8p7, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpAct_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s8p7, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpRstVal_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_TrlrBackupAssiIntSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DualEcuIdn_EcuId_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordArbnCmd1, RTE_VAR_INIT) Rte_FordCmdArbn_FordActvNiblCtrlArbnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlDiagcSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordArbnCmd1, RTE_VAR_INIT) Rte_FordCmdArbn_FordLaneDprtrWarnArbnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordArbnCmd1, RTE_VAR_INIT) Rte_FordCmdArbn_FordLaneKeepAssiArbnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordArbnCmd1, RTE_VAR_INIT) Rte_FordCmdArbn_FordLatCtrlArbnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordArbnCmd1, RTE_VAR_INIT) Rte_FordCmdArbn_FordPullDriftCmpArbnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordArbnCmd1, RTE_VAR_INIT) Rte_FordCmdArbn_FordPullDriftCmpLrngArbnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordSrvLaneDprtrWarnDiagcSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s8p7, RTE_VAR_INIT) Rte_CustDiag_FordSrvPullDriftCmpRstVal_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvActvNiblCmpIntSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneDprtrWarnIntSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneKeepAssiIntSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvLatCtrlIntSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvPullDriftCmpIntSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvTrlrBackupAssiIntSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ActvNiblCmpIntSts_Val (0U)
#  define Rte_InitValue_EcuId_Val (0U)
#  define Rte_InitValue_FordActvNiblCtrlArbnCmd_Val (0U)
#  define Rte_InitValue_FordActvNiblCtrlDiagcSts_Val (0U)
#  define Rte_InitValue_FordActvNiblCtrlFeatSt_Val (0U)
#  define Rte_InitValue_FordActvNiblCtrlSwVers_Val (0U)
#  define Rte_InitValue_FordActvNiblCtrlTqReq_Val (0.0F)
#  define Rte_InitValue_FordBlaBoxSwVers_Val (0U)
#  define Rte_InitValue_FordLaneAssiSwVers_Val (0U)
#  define Rte_InitValue_FordLaneDprtrWarnArbnCmd_Val (0U)
#  define Rte_InitValue_FordLaneDprtrWarnFeatSt_Val (0U)
#  define Rte_InitValue_FordLaneDprtrWarnTqReq_Val (0.0F)
#  define Rte_InitValue_FordLaneKeepAssiArbnCmd_Val (0U)
#  define Rte_InitValue_FordLaneKeepAssiFeatSt_Val (0U)
#  define Rte_InitValue_FordLaneKeepAssiTqReq_Val (0.0F)
#  define Rte_InitValue_FordLatCtrlArbnCmd_Val (0U)
#  define Rte_InitValue_FordLatCtrlFeatSt_Val (0U)
#  define Rte_InitValue_FordLatCtrlTqReq_Val (0.0F)
#  define Rte_InitValue_FordPullDriftCmpArbnCmd_Val (0U)
#  define Rte_InitValue_FordPullDriftCmpFeatSt_Val (0U)
#  define Rte_InitValue_FordPullDriftCmpLrngArbnCmd_Val (0U)
#  define Rte_InitValue_FordPullDriftCmpLrngFeatSt_Val (0U)
#  define Rte_InitValue_FordPullDriftCmpSwVers_Val (0U)
#  define Rte_InitValue_FordPullDriftCmpTqReq_Val (0.0F)
#  define Rte_InitValue_FordResrchFctSwVers_Val (0U)
#  define Rte_InitValue_FordSrvLaneDprtrWarnDiagcSts_Val (0U)
#  define Rte_InitValue_FordSrvPullDriftCmpRstVal_Val (0)
#  define Rte_InitValue_FordTrlrBackupAssiSwVers_Val (0U)
#  define Rte_InitValue_FordVehBBMsgOutp1HiPart_Val (0U)
#  define Rte_InitValue_FordVehBBMsgOutp1LoPart_Val (0U)
#  define Rte_InitValue_FordVehBBMsgOutp2HiPart_Val (0U)
#  define Rte_InitValue_FordVehBBMsgOutp2LoPart_Val (0U)
#  define Rte_InitValue_FordVehBBMsgOutp3HiPart_Val (0U)
#  define Rte_InitValue_FordVehBBMsgOutp3LoPart_Val (0U)
#  define Rte_InitValue_FordVehBBMsgOutp4HiPart_Val (0U)
#  define Rte_InitValue_FordVehBBMsgOutp4LoPart_Val (0U)
#  define Rte_InitValue_FordVehLaneAssiAvl_Val (0U)
#  define Rte_InitValue_FordVehLaneAssiHandsOff_Val (1U)
#  define Rte_InitValue_FordVehLaneAssiRejctn_Val (0U)
#  define Rte_InitValue_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val (0U)
#  define Rte_InitValue_FordVehLoSpdMtnCtrlBrkTqReq_Val (0U)
#  define Rte_InitValue_FordVehTrfcJamAvdHandsOnConf_Val (0U)
#  define Rte_InitValue_FordVehTrlrAgTarCalcn_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidAgMax_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidAgOffs_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidAgWarn_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidEnaSts_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidHitchToAxle_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidMsgTxtReq_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidSetUp_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidTarIdn_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidTrlrIdn_Val (0U)
#  define Rte_InitValue_FordVehTrlrHitchLampReq_Val (0U)
#  define Rte_InitValue_FordVehVelMaxReqTrlrAid_Val (255U)
#  define Rte_InitValue_FordVehVelTrlrAidReq_Val (0U)
#  define Rte_InitValue_FordWrSrvActvNiblCmpIntSts_Val (0U)
#  define Rte_InitValue_FordWrSrvLaneDprtrWarnIntSts_Val (0U)
#  define Rte_InitValue_FordWrSrvLaneKeepAssiIntSts_Val (0U)
#  define Rte_InitValue_FordWrSrvLatCtrlIntSts_Val (0U)
#  define Rte_InitValue_FordWrSrvPullDriftCmpIntSts_Val (0U)
#  define Rte_InitValue_FordWrSrvTrlrBackupAssiIntSts_Val (0U)
#  define Rte_InitValue_LaneDprtrWarnIntSts_Val (0U)
#  define Rte_InitValue_LaneKeepAssiIntSts_Val (0U)
#  define Rte_InitValue_LatCtrlIntSts_Val (0U)
#  define Rte_InitValue_PullDriftCmpIntSts_Val (0U)
#  define Rte_InitValue_SrvPullDriftCmpAct_Val (0)
#  define Rte_InitValue_SrvPullDriftCmpRstVal_Val (0)
#  define Rte_InitValue_TrlrBackupAssiIntSts_Val (0U)
#  define Rte_InitValue_VehSpd_Val (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_EcuId_Val Rte_Read_CDD_FordBlaBoxIfCmp1_EcuId_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_EcuId_Val(data) (*(data) = Rte_DualEcuIdn_EcuId_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordActvNiblCtrlArbnCmd_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlArbnCmd_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlArbnCmd_Val(data) (*(data) = Rte_FordCmdArbn_FordActvNiblCtrlArbnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordActvNiblCtrlDiagcSts_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlDiagcSts_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlDiagcSts_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlDiagcSts_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneDprtrWarnArbnCmd_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnArbnCmd_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnArbnCmd_Val(data) (*(data) = Rte_FordCmdArbn_FordLaneDprtrWarnArbnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneKeepAssiArbnCmd_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiArbnCmd_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiArbnCmd_Val(data) (*(data) = Rte_FordCmdArbn_FordLaneKeepAssiArbnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLatCtrlArbnCmd_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordLatCtrlArbnCmd_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_FordLatCtrlArbnCmd_Val(data) (*(data) = Rte_FordCmdArbn_FordLatCtrlArbnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordPullDriftCmpArbnCmd_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpArbnCmd_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpArbnCmd_Val(data) (*(data) = Rte_FordCmdArbn_FordPullDriftCmpArbnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordPullDriftCmpLrngArbnCmd_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpLrngArbnCmd_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpLrngArbnCmd_Val(data) (*(data) = Rte_FordCmdArbn_FordPullDriftCmpLrngArbnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordSrvLaneDprtrWarnDiagcSts_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordSrvLaneDprtrWarnDiagcSts_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_FordSrvLaneDprtrWarnDiagcSts_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordSrvLaneDprtrWarnDiagcSts_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordSrvPullDriftCmpRstVal_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordSrvPullDriftCmpRstVal_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_FordSrvPullDriftCmpRstVal_Val(data) (*(data) = Rte_CustDiag_FordSrvPullDriftCmpRstVal_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordWrSrvActvNiblCmpIntSts_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvActvNiblCmpIntSts_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvActvNiblCmpIntSts_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvActvNiblCmpIntSts_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordWrSrvLaneDprtrWarnIntSts_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneDprtrWarnIntSts_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneDprtrWarnIntSts_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneDprtrWarnIntSts_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordWrSrvLaneKeepAssiIntSts_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneKeepAssiIntSts_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneKeepAssiIntSts_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneKeepAssiIntSts_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordWrSrvLatCtrlIntSts_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvLatCtrlIntSts_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvLatCtrlIntSts_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvLatCtrlIntSts_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordWrSrvPullDriftCmpIntSts_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvPullDriftCmpIntSts_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvPullDriftCmpIntSts_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvPullDriftCmpIntSts_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordWrSrvTrlrBackupAssiIntSts_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvTrlrBackupAssiIntSts_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvTrlrBackupAssiIntSts_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvTrlrBackupAssiIntSts_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_CDD_FordBlaBoxIfCmp1_VehSpd_Val
#  define Rte_Read_CDD_FordBlaBoxIfCmp1_VehSpd_Val(data) (*(data) = Rte_ImcSigArbn_VehSpdImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_ActvNiblCmpIntSts_Val Rte_Write_CDD_FordBlaBoxIfCmp1_ActvNiblCmpIntSts_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_ActvNiblCmpIntSts_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_ActvNiblCmpIntSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordActvNiblCtrlFeatSt_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlFeatSt_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlFeatSt_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlFeatSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordActvNiblCtrlSwVers_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlSwVers_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlSwVers_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlSwVers_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordActvNiblCtrlTqReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlTqReq_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlTqReq_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlTqReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordBlaBoxSwVers_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordBlaBoxSwVers_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordBlaBoxSwVers_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordBlaBoxSwVers_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordLaneAssiSwVers_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneAssiSwVers_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneAssiSwVers_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordLaneAssiSwVers_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordLaneDprtrWarnFeatSt_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnFeatSt_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnFeatSt_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnFeatSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordLaneDprtrWarnTqReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnTqReq_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnTqReq_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnTqReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordLaneKeepAssiFeatSt_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiFeatSt_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiFeatSt_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiFeatSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordLaneKeepAssiTqReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiTqReq_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiTqReq_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiTqReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordLatCtrlFeatSt_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordLatCtrlFeatSt_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordLatCtrlFeatSt_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordLatCtrlFeatSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordLatCtrlTqReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordLatCtrlTqReq_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordLatCtrlTqReq_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordLatCtrlTqReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordPullDriftCmpFeatSt_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpFeatSt_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpFeatSt_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpFeatSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordPullDriftCmpLrngFeatSt_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpLrngFeatSt_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpLrngFeatSt_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpLrngFeatSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordPullDriftCmpSwVers_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpSwVers_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpSwVers_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpSwVers_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordPullDriftCmpTqReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpTqReq_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpTqReq_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpTqReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordResrchFctSwVers_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordResrchFctSwVers_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordResrchFctSwVers_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordResrchFctSwVers_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordTrlrBackupAssiSwVers_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordTrlrBackupAssiSwVers_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordTrlrBackupAssiSwVers_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordTrlrBackupAssiSwVers_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehBBMsgOutp1HiPart_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1HiPart_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1HiPart_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1HiPart_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehBBMsgOutp1LoPart_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1LoPart_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1LoPart_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1LoPart_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehBBMsgOutp2HiPart_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2HiPart_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2HiPart_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2HiPart_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehBBMsgOutp2LoPart_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2LoPart_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2LoPart_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2LoPart_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehBBMsgOutp3HiPart_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3HiPart_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3HiPart_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3HiPart_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehBBMsgOutp3LoPart_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3LoPart_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3LoPart_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3LoPart_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehBBMsgOutp4HiPart_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4HiPart_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4HiPart_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4HiPart_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehBBMsgOutp4LoPart_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4LoPart_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4LoPart_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4LoPart_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLaneAssiAvl_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiAvl_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiAvl_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiAvl_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLaneAssiHandsOff_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiHandsOff_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiHandsOff_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiHandsOff_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLaneAssiRejctn_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiRejctn_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiRejctn_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiRejctn_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLoSpdMtnCtrlBrkTqReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkTqReq_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkTqReq_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkTqReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrfcJamAvdHandsOnConf_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrfcJamAvdHandsOnConf_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrfcJamAvdHandsOnConf_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehTrfcJamAvdHandsOnConf_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAgTarCalcn_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAgTarCalcn_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAgTarCalcn_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAgTarCalcn_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidAgMax_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgMax_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgMax_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgMax_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidAgOffs_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgOffs_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgOffs_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgOffs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidAgWarn_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgWarn_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgWarn_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgWarn_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidEnaSts_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidEnaSts_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidEnaSts_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidEnaSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidHitchToAxle_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidHitchToAxle_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidHitchToAxle_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidHitchToAxle_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidMsgTxtReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidMsgTxtReq_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidMsgTxtReq_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidMsgTxtReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidSetUp_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidSetUp_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidSetUp_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidSetUp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidTarIdn_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTarIdn_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTarIdn_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTarIdn_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidTrlrIdn_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTrlrIdn_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTrlrIdn_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTrlrIdn_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrHitchLampReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrHitchLampReq_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrHitchLampReq_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrHitchLampReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehVelMaxReqTrlrAid_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehVelMaxReqTrlrAid_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehVelMaxReqTrlrAid_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehVelMaxReqTrlrAid_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehVelTrlrAidReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehVelTrlrAidReq_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehVelTrlrAidReq_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_FordVehVelTrlrAidReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LaneDprtrWarnIntSts_Val Rte_Write_CDD_FordBlaBoxIfCmp1_LaneDprtrWarnIntSts_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_LaneDprtrWarnIntSts_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_LaneDprtrWarnIntSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LaneKeepAssiIntSts_Val Rte_Write_CDD_FordBlaBoxIfCmp1_LaneKeepAssiIntSts_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_LaneKeepAssiIntSts_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_LaneKeepAssiIntSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LatCtrlIntSts_Val Rte_Write_CDD_FordBlaBoxIfCmp1_LatCtrlIntSts_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_LatCtrlIntSts_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_LatCtrlIntSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PullDriftCmpIntSts_Val Rte_Write_CDD_FordBlaBoxIfCmp1_PullDriftCmpIntSts_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_PullDriftCmpIntSts_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_PullDriftCmpIntSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SrvPullDriftCmpAct_Val Rte_Write_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpAct_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpAct_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpAct_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SrvPullDriftCmpRstVal_Val Rte_Write_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpRstVal_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpRstVal_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpRstVal_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_TrlrBackupAssiIntSts_Val Rte_Write_CDD_FordBlaBoxIfCmp1_TrlrBackupAssiIntSts_Val
#  define Rte_Write_CDD_FordBlaBoxIfCmp1_TrlrBackupAssiIntSts_Val(data) (Rte_CDD_FordBlaBoxIfCmp1_TrlrBackupAssiIntSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ActvNiblCtrl_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)4, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_LaneAssi_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)3, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PullDriftCmp_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)6, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_TrlrBackupAssi_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)5, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_ActvNiblCtrlDft() (&(((P2CONST(Rte_Calprm_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP])->ActvNiblCtrlDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_ActvNiblCtrlDft() (&((P2CONST(Rte_Calprm_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP])->ActvNiblCtrlDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_LaneAssiDft() (&(((P2CONST(Rte_Calprm_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP])->LaneAssiDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_LaneAssiDft() (&((P2CONST(Rte_Calprm_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP])->LaneAssiDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_PullDriftCmpDft() (&(((P2CONST(Rte_Calprm_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP])->PullDriftCmpDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_PullDriftCmpDft() (&((P2CONST(Rte_Calprm_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP])->PullDriftCmpDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_CData_TrlrBackupAssiDft() (&(((P2CONST(Rte_Calprm_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP])->TrlrBackupAssiDft[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_CData_TrlrBackupAssiDft() (&((P2CONST(Rte_Calprm_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP])->TrlrBackupAssiDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_SysGlbPrmSysKineRat_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysGlbPrmSysKineRat_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D() ((P2CONST(u8p8, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMinX_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMinX_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D() ((P2CONST(s4p11, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMinY_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMinY_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysGlbPrmVehSpdBilnrSeln_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysGlbPrmVehSpdBilnrSeln_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_PullDriftCmpFctCallSel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_TrlrBackAssiFctCallSel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_128, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_256, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_LaneAssi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_128, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_PullDriftCmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary2D_u8p8_12_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_TqOffsTbl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_512, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_PullDriftCmpFctCallSel() \
  (&Rte_CDD_FordBlaBoxIfCmp1_PullDriftCmpFctCallSel) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TrlrBackAssiFctCallSel() \
  (&Rte_CDD_FordBlaBoxIfCmp1_TrlrBackAssiFctCallSel) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_ActvNiblCtrl() (&((*RtePim_ActvNiblCtrl())[0]))
#  else
#   define Rte_Pim_ActvNiblCtrl() RtePim_ActvNiblCtrl()
#  endif
#  define RtePim_ActvNiblCtrl() \
  (&Rte_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_LaneAssi() (&((*RtePim_LaneAssi())[0]))
#  else
#   define Rte_Pim_LaneAssi() RtePim_LaneAssi()
#  endif
#  define RtePim_LaneAssi() \
  (&Rte_CDD_FordBlaBoxIfCmp1_LaneAssi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_PullDriftCmp() (&((*RtePim_PullDriftCmp())[0]))
#  else
#   define Rte_Pim_PullDriftCmp() RtePim_PullDriftCmp()
#  endif
#  define RtePim_PullDriftCmp() \
  (&Rte_CDD_FordBlaBoxIfCmp1_PullDriftCmp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_TqOffsTbl() ((P2VAR(u8p8, AUTOMATIC, RTE_VAR_NOINIT)) &((*RtePim_TqOffsTbl())[0][0]))
#  else
#   define Rte_Pim_TqOffsTbl() RtePim_TqOffsTbl()
#  endif
#  define RtePim_TqOffsTbl() \
  (&Rte_CDD_FordBlaBoxIfCmp1_TqOffsTbl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_TrlrBackupAssi() (&((*RtePim_TrlrBackupAssi())[0]))
#  else
#   define Rte_Pim_TrlrBackupAssi() RtePim_TrlrBackupAssi()
#  endif
#  define RtePim_TrlrBackupAssi() \
  (&Rte_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_FordBlaBoxIfCmp1_START_SEC_CODE
# include "CDD_FordBlaBoxIfCmp1_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordBlaBoxIfCmp1Init1 FordBlaBoxIfCmp1Init1
#  define RTE_RUNNABLE_FordBlaBoxIfCmp1Per1 FordBlaBoxIfCmp1Per1
#  define RTE_RUNNABLE_FordBlaBoxIfCmp1Per2 FordBlaBoxIfCmp1Per2
#  define RTE_RUNNABLE_FordClrBlaBoxNvm_Oper FordClrBlaBoxNvm_Oper
# endif

FUNC(void, CDD_FordBlaBoxIfCmp1_CODE) FordBlaBoxIfCmp1Init1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_FordBlaBoxIfCmp1_CODE) FordBlaBoxIfCmp1Per1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_FordBlaBoxIfCmp1_CODE) FordBlaBoxIfCmp1Per2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, CDD_FordBlaBoxIfCmp1_CODE) FordClrBlaBoxNvm_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_FordBlaBoxIfCmp1_STOP_SEC_CODE
# include "CDD_FordBlaBoxIfCmp1_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_FordClrBlaBoxNvm_PortIf1_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_FORDBLABOXIFCMP1_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
