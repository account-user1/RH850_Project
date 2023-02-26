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
 *        Config:  C:/Synery_Projects/Working/EA4/CF111A_FordBlaBoxIfCmp1_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_FordBlaBoxIfCmp1
 *  Generated at:  Mon May  7 11:17:42 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_FordBlaBoxIfCmp1> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_FORDBLABOXIFCMP1_H
# define _RTE_CDD_FORDBLABOXIFCMP1_H

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

# include "Rte_CDD_FordBlaBoxIfCmp1_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_FordBlaBoxIfCmp1
{
  /* PIM Handles section */
  P2VAR(Ary1D_u08_128, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ActvNiblCtrl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u08_256, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LaneAssi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u08_128, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PullDriftCmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PullDriftCmpFctCallSel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary2D_u8p8_12_20, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqOffsTbl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrlrBackAssiFctCallSel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u08_512, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrlrBackupAssi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_FordBlaBoxIfCmp1, RTE_CONST, RTE_CONST) Rte_Inst_CDD_FordBlaBoxIfCmp1; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_FordBlaBoxIfCmp1, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ActvNiblCmpIntSts_Val (0U)
# define Rte_InitValue_EcuId_Val (0U)
# define Rte_InitValue_FordActvNiblCtrlArbnCmd_Val (0U)
# define Rte_InitValue_FordActvNiblCtrlDiagcSts_Val (0U)
# define Rte_InitValue_FordActvNiblCtrlFeatSt_Val (0U)
# define Rte_InitValue_FordActvNiblCtrlSwVers_Val (0U)
# define Rte_InitValue_FordActvNiblCtrlTqReq_Val (0.0F)
# define Rte_InitValue_FordBlaBoxSwVers_Val (0U)
# define Rte_InitValue_FordLaneAssiSwVers_Val (0U)
# define Rte_InitValue_FordLaneDprtrWarnArbnCmd_Val (0U)
# define Rte_InitValue_FordLaneDprtrWarnFeatSt_Val (0U)
# define Rte_InitValue_FordLaneDprtrWarnTqReq_Val (0.0F)
# define Rte_InitValue_FordLaneKeepAssiArbnCmd_Val (0U)
# define Rte_InitValue_FordLaneKeepAssiFeatSt_Val (0U)
# define Rte_InitValue_FordLaneKeepAssiTqReq_Val (0.0F)
# define Rte_InitValue_FordLatCtrlArbnCmd_Val (0U)
# define Rte_InitValue_FordLatCtrlFeatSt_Val (0U)
# define Rte_InitValue_FordLatCtrlTqReq_Val (0.0F)
# define Rte_InitValue_FordPullDriftCmpArbnCmd_Val (0U)
# define Rte_InitValue_FordPullDriftCmpFeatSt_Val (0U)
# define Rte_InitValue_FordPullDriftCmpLrngArbnCmd_Val (0U)
# define Rte_InitValue_FordPullDriftCmpLrngFeatSt_Val (0U)
# define Rte_InitValue_FordPullDriftCmpSwVers_Val (0U)
# define Rte_InitValue_FordPullDriftCmpTqReq_Val (0.0F)
# define Rte_InitValue_FordResrchFctSwVers_Val (0U)
# define Rte_InitValue_FordSrvLaneDprtrWarnDiagcSts_Val (0U)
# define Rte_InitValue_FordSrvPullDriftCmpRstVal_Val (0)
# define Rte_InitValue_FordTrlrBackupAssiSwVers_Val (0U)
# define Rte_InitValue_FordVehBBMsgOutp1HiPart_Val (0U)
# define Rte_InitValue_FordVehBBMsgOutp1LoPart_Val (0U)
# define Rte_InitValue_FordVehBBMsgOutp2HiPart_Val (0U)
# define Rte_InitValue_FordVehBBMsgOutp2LoPart_Val (0U)
# define Rte_InitValue_FordVehBBMsgOutp3HiPart_Val (0U)
# define Rte_InitValue_FordVehBBMsgOutp3LoPart_Val (0U)
# define Rte_InitValue_FordVehBBMsgOutp4HiPart_Val (0U)
# define Rte_InitValue_FordVehBBMsgOutp4LoPart_Val (0U)
# define Rte_InitValue_FordVehLaneAssiAvl_Val (0U)
# define Rte_InitValue_FordVehLaneAssiHandsOff_Val (1U)
# define Rte_InitValue_FordVehLaneAssiRejctn_Val (0U)
# define Rte_InitValue_FordVehLatCtrlLimSts_Val (0U)
# define Rte_InitValue_FordVehLatCtrlSteerSts_Val (0U)
# define Rte_InitValue_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val (0U)
# define Rte_InitValue_FordVehLoSpdMtnCtrlBrkTqReq_Val (0U)
# define Rte_InitValue_FordVehTrfcJamAvdHandsOnConf_Val (0U)
# define Rte_InitValue_FordVehTrlrAgTarCalcn_Val (0U)
# define Rte_InitValue_FordVehTrlrAidAgMax_Val (0U)
# define Rte_InitValue_FordVehTrlrAidAgOffs_Val (0U)
# define Rte_InitValue_FordVehTrlrAidAgWarn_Val (0U)
# define Rte_InitValue_FordVehTrlrAidEnaSts_Val (0U)
# define Rte_InitValue_FordVehTrlrAidHitchToAxle_Val (0U)
# define Rte_InitValue_FordVehTrlrAidMsgTxtReq_Val (0U)
# define Rte_InitValue_FordVehTrlrAidSetUp_Val (0U)
# define Rte_InitValue_FordVehTrlrAidTarIdn_Val (0U)
# define Rte_InitValue_FordVehTrlrAidTrlrIdn_Val (0U)
# define Rte_InitValue_FordVehTrlrHitchLampReq_Val (0U)
# define Rte_InitValue_FordVehVelMaxReqTrlrAid_Val (255U)
# define Rte_InitValue_FordVehVelTrlrAidReq_Val (0U)
# define Rte_InitValue_FordWrSrvActvNiblCmpIntSts_Val (0U)
# define Rte_InitValue_FordWrSrvLaneDprtrWarnIntSts_Val (0U)
# define Rte_InitValue_FordWrSrvLaneKeepAssiIntSts_Val (0U)
# define Rte_InitValue_FordWrSrvLatCtrlIntSts_Val (0U)
# define Rte_InitValue_FordWrSrvPullDriftCmpIntSts_Val (0U)
# define Rte_InitValue_FordWrSrvTrlrBackupAssiIntSts_Val (0U)
# define Rte_InitValue_LaneDprtrWarnIntSts_Val (0U)
# define Rte_InitValue_LaneKeepAssiIntSts_Val (0U)
# define Rte_InitValue_LatCtrlIntSts_Val (0U)
# define Rte_InitValue_PullDriftCmpIntSts_Val (0U)
# define Rte_InitValue_SrvPullDriftCmpAct_Val (0)
# define Rte_InitValue_SrvPullDriftCmpRstVal_Val (0)
# define Rte_InitValue_TrlrBackupAssiIntSts_Val (0U)
# define Rte_InitValue_VehSpd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_EcuId_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlArbnCmd_Val(P2VAR(FordArbnCmd1, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlDiagcSts_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnArbnCmd_Val(P2VAR(FordArbnCmd1, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiArbnCmd_Val(P2VAR(FordArbnCmd1, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_FordLatCtrlArbnCmd_Val(P2VAR(FordArbnCmd1, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpArbnCmd_Val(P2VAR(FordArbnCmd1, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpLrngArbnCmd_Val(P2VAR(FordArbnCmd1, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_FordSrvLaneDprtrWarnDiagcSts_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_FordSrvPullDriftCmpRstVal_Val(P2VAR(s8p7, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvActvNiblCmpIntSts_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneDprtrWarnIntSts_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneKeepAssiIntSts_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvLatCtrlIntSts_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvPullDriftCmpIntSts_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvTrlrBackupAssiIntSts_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp1_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP1_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_ActvNiblCmpIntSts_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlFeatSt_Val(FordFeatSt1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlSwVers_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlTqReq_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordBlaBoxSwVers_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneAssiSwVers_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnFeatSt_Val(FordFeatSt1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnTqReq_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiFeatSt_Val(FordFeatSt1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiTqReq_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordLatCtrlFeatSt_Val(FordFeatSt1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordLatCtrlTqReq_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpFeatSt_Val(FordFeatSt1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpLrngFeatSt_Val(FordFeatSt1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpSwVers_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpTqReq_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordResrchFctSwVers_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordTrlrBackupAssiSwVers_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1HiPart_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1LoPart_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2HiPart_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2LoPart_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3HiPart_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3LoPart_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4HiPart_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4LoPart_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiAvl_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiHandsOff_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiRejctn_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlLimSts_Val(Ford_LatCtlLim_D_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlSteerSts_Val(Ford_LatCtlSte_D_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkTqReq_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrfcJamAvdHandsOnConf_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAgTarCalcn_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgMax_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgOffs_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgWarn_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidEnaSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidHitchToAxle_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidMsgTxtReq_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidSetUp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTarIdn_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTrlrIdn_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrHitchLampReq_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehVelMaxReqTrlrAid_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehVelTrlrAidReq_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_LaneDprtrWarnIntSts_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_LaneKeepAssiIntSts_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_LatCtrlIntSts_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_PullDriftCmpIntSts_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpAct_Val(s8p7 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpRstVal_Val(s8p7 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp1_TrlrBackupAssiIntSts_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_FordBlaBoxIfCmp1_LaneAssi_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_FordBlaBoxIfCmp1_PullDriftCmp_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_FordBlaBoxIfCmp1_SysGlbPrmSysKineRat_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_CDD_FordBlaBoxIfCmp1_AssiMotTqWhlImbRejctnMinX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_CDD_FordBlaBoxIfCmp1_AssiMotTqWhlImbRejctnMinX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s4p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_CDD_FordBlaBoxIfCmp1_AssiMotTqWhlImbRejctnMinY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_CDD_FordBlaBoxIfCmp1_AssiMotTqWhlImbRejctnMinY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_CDD_FordBlaBoxIfCmp1_SysGlbPrmVehSpdBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_CDD_FordBlaBoxIfCmp1_SysGlbPrmVehSpdBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CDD_FordBlaBoxIfCmp1_ActvNiblCtrlDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u08_128, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CDD_FordBlaBoxIfCmp1_ActvNiblCtrlDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CDD_FordBlaBoxIfCmp1_LaneAssiDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u08_256, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CDD_FordBlaBoxIfCmp1_LaneAssiDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CDD_FordBlaBoxIfCmp1_PullDriftCmpDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u08_128, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CDD_FordBlaBoxIfCmp1_PullDriftCmpDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CDD_FordBlaBoxIfCmp1_TrlrBackupAssiDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u08_512, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CDD_FordBlaBoxIfCmp1_TrlrBackupAssiDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EcuId_Val Rte_Read_CDD_FordBlaBoxIfCmp1_EcuId_Val
# define Rte_Read_FordActvNiblCtrlArbnCmd_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlArbnCmd_Val
# define Rte_Read_FordActvNiblCtrlDiagcSts_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlDiagcSts_Val
# define Rte_Read_FordLaneDprtrWarnArbnCmd_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnArbnCmd_Val
# define Rte_Read_FordLaneKeepAssiArbnCmd_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiArbnCmd_Val
# define Rte_Read_FordLatCtrlArbnCmd_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordLatCtrlArbnCmd_Val
# define Rte_Read_FordPullDriftCmpArbnCmd_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpArbnCmd_Val
# define Rte_Read_FordPullDriftCmpLrngArbnCmd_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpLrngArbnCmd_Val
# define Rte_Read_FordSrvLaneDprtrWarnDiagcSts_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordSrvLaneDprtrWarnDiagcSts_Val
# define Rte_Read_FordSrvPullDriftCmpRstVal_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordSrvPullDriftCmpRstVal_Val
# define Rte_Read_FordWrSrvActvNiblCmpIntSts_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvActvNiblCmpIntSts_Val
# define Rte_Read_FordWrSrvLaneDprtrWarnIntSts_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneDprtrWarnIntSts_Val
# define Rte_Read_FordWrSrvLaneKeepAssiIntSts_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneKeepAssiIntSts_Val
# define Rte_Read_FordWrSrvLatCtrlIntSts_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvLatCtrlIntSts_Val
# define Rte_Read_FordWrSrvPullDriftCmpIntSts_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvPullDriftCmpIntSts_Val
# define Rte_Read_FordWrSrvTrlrBackupAssiIntSts_Val Rte_Read_CDD_FordBlaBoxIfCmp1_FordWrSrvTrlrBackupAssiIntSts_Val
# define Rte_Read_VehSpd_Val Rte_Read_CDD_FordBlaBoxIfCmp1_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_ActvNiblCmpIntSts_Val Rte_Write_CDD_FordBlaBoxIfCmp1_ActvNiblCmpIntSts_Val
# define Rte_Write_FordActvNiblCtrlFeatSt_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlFeatSt_Val
# define Rte_Write_FordActvNiblCtrlSwVers_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlSwVers_Val
# define Rte_Write_FordActvNiblCtrlTqReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlTqReq_Val
# define Rte_Write_FordBlaBoxSwVers_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordBlaBoxSwVers_Val
# define Rte_Write_FordLaneAssiSwVers_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneAssiSwVers_Val
# define Rte_Write_FordLaneDprtrWarnFeatSt_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnFeatSt_Val
# define Rte_Write_FordLaneDprtrWarnTqReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnTqReq_Val
# define Rte_Write_FordLaneKeepAssiFeatSt_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiFeatSt_Val
# define Rte_Write_FordLaneKeepAssiTqReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiTqReq_Val
# define Rte_Write_FordLatCtrlFeatSt_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordLatCtrlFeatSt_Val
# define Rte_Write_FordLatCtrlTqReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordLatCtrlTqReq_Val
# define Rte_Write_FordPullDriftCmpFeatSt_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpFeatSt_Val
# define Rte_Write_FordPullDriftCmpLrngFeatSt_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpLrngFeatSt_Val
# define Rte_Write_FordPullDriftCmpSwVers_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpSwVers_Val
# define Rte_Write_FordPullDriftCmpTqReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpTqReq_Val
# define Rte_Write_FordResrchFctSwVers_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordResrchFctSwVers_Val
# define Rte_Write_FordTrlrBackupAssiSwVers_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordTrlrBackupAssiSwVers_Val
# define Rte_Write_FordVehBBMsgOutp1HiPart_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1HiPart_Val
# define Rte_Write_FordVehBBMsgOutp1LoPart_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1LoPart_Val
# define Rte_Write_FordVehBBMsgOutp2HiPart_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2HiPart_Val
# define Rte_Write_FordVehBBMsgOutp2LoPart_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2LoPart_Val
# define Rte_Write_FordVehBBMsgOutp3HiPart_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3HiPart_Val
# define Rte_Write_FordVehBBMsgOutp3LoPart_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3LoPart_Val
# define Rte_Write_FordVehBBMsgOutp4HiPart_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4HiPart_Val
# define Rte_Write_FordVehBBMsgOutp4LoPart_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4LoPart_Val
# define Rte_Write_FordVehLaneAssiAvl_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiAvl_Val
# define Rte_Write_FordVehLaneAssiHandsOff_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiHandsOff_Val
# define Rte_Write_FordVehLaneAssiRejctn_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiRejctn_Val
# define Rte_Write_FordVehLatCtrlLimSts_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlLimSts_Val
# define Rte_Write_FordVehLatCtrlSteerSts_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlSteerSts_Val
# define Rte_Write_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val
# define Rte_Write_FordVehLoSpdMtnCtrlBrkTqReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkTqReq_Val
# define Rte_Write_FordVehTrfcJamAvdHandsOnConf_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrfcJamAvdHandsOnConf_Val
# define Rte_Write_FordVehTrlrAgTarCalcn_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAgTarCalcn_Val
# define Rte_Write_FordVehTrlrAidAgMax_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgMax_Val
# define Rte_Write_FordVehTrlrAidAgOffs_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgOffs_Val
# define Rte_Write_FordVehTrlrAidAgWarn_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgWarn_Val
# define Rte_Write_FordVehTrlrAidEnaSts_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidEnaSts_Val
# define Rte_Write_FordVehTrlrAidHitchToAxle_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidHitchToAxle_Val
# define Rte_Write_FordVehTrlrAidMsgTxtReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidMsgTxtReq_Val
# define Rte_Write_FordVehTrlrAidSetUp_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidSetUp_Val
# define Rte_Write_FordVehTrlrAidTarIdn_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTarIdn_Val
# define Rte_Write_FordVehTrlrAidTrlrIdn_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTrlrIdn_Val
# define Rte_Write_FordVehTrlrHitchLampReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehTrlrHitchLampReq_Val
# define Rte_Write_FordVehVelMaxReqTrlrAid_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehVelMaxReqTrlrAid_Val
# define Rte_Write_FordVehVelTrlrAidReq_Val Rte_Write_CDD_FordBlaBoxIfCmp1_FordVehVelTrlrAidReq_Val
# define Rte_Write_LaneDprtrWarnIntSts_Val Rte_Write_CDD_FordBlaBoxIfCmp1_LaneDprtrWarnIntSts_Val
# define Rte_Write_LaneKeepAssiIntSts_Val Rte_Write_CDD_FordBlaBoxIfCmp1_LaneKeepAssiIntSts_Val
# define Rte_Write_LatCtrlIntSts_Val Rte_Write_CDD_FordBlaBoxIfCmp1_LatCtrlIntSts_Val
# define Rte_Write_PullDriftCmpIntSts_Val Rte_Write_CDD_FordBlaBoxIfCmp1_PullDriftCmpIntSts_Val
# define Rte_Write_SrvPullDriftCmpAct_Val Rte_Write_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpAct_Val
# define Rte_Write_SrvPullDriftCmpRstVal_Val Rte_Write_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpRstVal_Val
# define Rte_Write_TrlrBackupAssiIntSts_Val Rte_Write_CDD_FordBlaBoxIfCmp1_TrlrBackupAssiIntSts_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_ActvNiblCtrl_SetRamBlockStatus Rte_Call_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl_SetRamBlockStatus
# define Rte_Call_LaneAssi_SetRamBlockStatus Rte_Call_CDD_FordBlaBoxIfCmp1_LaneAssi_SetRamBlockStatus
# define Rte_Call_PullDriftCmp_SetRamBlockStatus Rte_Call_CDD_FordBlaBoxIfCmp1_PullDriftCmp_SetRamBlockStatus
# define Rte_Call_TrlrBackupAssi_SetRamBlockStatus Rte_Call_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi_SetRamBlockStatus


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_ActvNiblCtrlDft Rte_CData_CDD_FordBlaBoxIfCmp1_ActvNiblCtrlDft

# define Rte_CData_LaneAssiDft Rte_CData_CDD_FordBlaBoxIfCmp1_LaneAssiDft

# define Rte_CData_PullDriftCmpDft Rte_CData_CDD_FordBlaBoxIfCmp1_PullDriftCmpDft

# define Rte_CData_TrlrBackupAssiDft Rte_CData_CDD_FordBlaBoxIfCmp1_TrlrBackupAssiDft

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_SysGlbPrmSysKineRat_Val Rte_Prm_CDD_FordBlaBoxIfCmp1_SysGlbPrmSysKineRat_Val

# define Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D Rte_Prm_CDD_FordBlaBoxIfCmp1_AssiMotTqWhlImbRejctnMinX_Ary2D

# define Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D Rte_Prm_CDD_FordBlaBoxIfCmp1_AssiMotTqWhlImbRejctnMinY_Ary2D

# define Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D Rte_Prm_CDD_FordBlaBoxIfCmp1_SysGlbPrmVehSpdBilnrSeln_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PullDriftCmpFctCallSel() (Rte_Inst_CDD_FordBlaBoxIfCmp1->Pim_PullDriftCmpFctCallSel) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrlrBackAssiFctCallSel() (Rte_Inst_CDD_FordBlaBoxIfCmp1->Pim_TrlrBackAssiFctCallSel) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_ActvNiblCtrl() (*Rte_Inst_CDD_FordBlaBoxIfCmp1->Pim_ActvNiblCtrl) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_ActvNiblCtrl() (Rte_Inst_CDD_FordBlaBoxIfCmp1->Pim_ActvNiblCtrl) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_LaneAssi() (*Rte_Inst_CDD_FordBlaBoxIfCmp1->Pim_LaneAssi) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_LaneAssi() (Rte_Inst_CDD_FordBlaBoxIfCmp1->Pim_LaneAssi) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PullDriftCmp() (*Rte_Inst_CDD_FordBlaBoxIfCmp1->Pim_PullDriftCmp) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PullDriftCmp() (Rte_Inst_CDD_FordBlaBoxIfCmp1->Pim_PullDriftCmp) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_TqOffsTbl() ((P2VAR(u8p8, AUTOMATIC, RTE_VAR_NOINIT)) *Rte_Inst_CDD_FordBlaBoxIfCmp1->Pim_TqOffsTbl) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_TqOffsTbl() (Rte_Inst_CDD_FordBlaBoxIfCmp1->Pim_TqOffsTbl) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_TrlrBackupAssi() (*Rte_Inst_CDD_FordBlaBoxIfCmp1->Pim_TrlrBackupAssi) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_TrlrBackupAssi() (Rte_Inst_CDD_FordBlaBoxIfCmp1->Pim_TrlrBackupAssi) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




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


# define CDD_FordBlaBoxIfCmp1_START_SEC_CODE
# include "CDD_FordBlaBoxIfCmp1_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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

# define RTE_RUNNABLE_FordBlaBoxIfCmp1Init1 FordBlaBoxIfCmp1Init1
FUNC(void, CDD_FordBlaBoxIfCmp1_CODE) FordBlaBoxIfCmp1Init1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

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

# define RTE_RUNNABLE_FordBlaBoxIfCmp1Per1 FordBlaBoxIfCmp1Per1
FUNC(void, CDD_FordBlaBoxIfCmp1_CODE) FordBlaBoxIfCmp1Per1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

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

# define RTE_RUNNABLE_FordBlaBoxIfCmp1Per2 FordBlaBoxIfCmp1Per2
FUNC(void, CDD_FordBlaBoxIfCmp1_CODE) FordBlaBoxIfCmp1Per2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

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

# define RTE_RUNNABLE_FordClrBlaBoxNvm_Oper FordClrBlaBoxNvm_Oper
FUNC(Std_ReturnType, CDD_FordBlaBoxIfCmp1_CODE) FordClrBlaBoxNvm_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_FordBlaBoxIfCmp1_STOP_SEC_CODE
# include "CDD_FordBlaBoxIfCmp1_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_FordClrBlaBoxNvm_PortIf1_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_FORDBLABOXIFCMP1_H */
