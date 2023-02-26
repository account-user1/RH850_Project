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
 *          File:  Rte_FordMsg47ABusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg47ABusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG47ABUSHISPD_H
# define _RTE_FORDMSG47ABUSHISPD_H

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

# include "Rte_FordMsg47ABusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobPosVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
#  define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
#  define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
#  define Rte_InitValue_FordTrlrBackupAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordVehTrlrAidKnobBtn_Val (0U)
#  define Rte_InitValue_FordVehTrlrAidKnobPosn_Val (0U)
#  define Rte_InitValue_FordVehTrlrBackupAssiKnobPosVld_Logl (FALSE)
#  define Rte_InitValue_FordVehTrlrBackupAssiKnobVld_Logl (FALSE)
#  define Rte_InitValue_Ford_TrlrAidCtl_U_RqDrv_Ford_TrlrAidCtl_U_RqDrv (0U)
#  define Rte_InitValue_Ford_TrlrAidSwtch_D_RqDrv1_Ford_TrlrAidSwtch_D_RqDrv (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg47ABusHiSpd_ClrDiagcFlgProxy_Val
#  define Rte_Read_FordMsg47ABusHiSpd_ClrDiagcFlgProxy_Val(data) (*(data) = Rte_DiagcMgr_ClrDiagcFlgProxy_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg47ABusHiSpd_FordCanDtcInhb_Logl
#  define Rte_Read_FordMsg47ABusHiSpd_FordCanDtcInhb_Logl(data) (*(data) = Rte_FordCanDtcInhb_FordCanDtcInhb_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg47ABusHiSpd_FordEpsLifeCycMod_Val
#  define Rte_Read_FordMsg47ABusHiSpd_FordEpsLifeCycMod_Val(data) (*(data) = Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrlrBackupAssiEnad_Logl Rte_Read_FordMsg47ABusHiSpd_FordTrlrBackupAssiEnad_Logl
#  define Rte_Read_FordMsg47ABusHiSpd_FordTrlrBackupAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordTrlrBackupAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_TrlrAidCtl_U_RqDrv_Ford_TrlrAidCtl_U_RqDrv Rte_Read_FordMsg47ABusHiSpd_Ford_TrlrAidCtl_U_RqDrv_Ford_TrlrAidCtl_U_RqDrv
#  define Rte_Read_FordMsg47ABusHiSpd_Ford_TrlrAidCtl_U_RqDrv_Ford_TrlrAidCtl_U_RqDrv(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_TrlrAidCtl_U_RqDrv_372f28fe, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_TrlrAidSwtch_D_RqDrv1_Ford_TrlrAidSwtch_D_RqDrv Rte_Read_FordMsg47ABusHiSpd_Ford_TrlrAidSwtch_D_RqDrv1_Ford_TrlrAidSwtch_D_RqDrv
#  define Rte_Read_FordMsg47ABusHiSpd_Ford_TrlrAidSwtch_D_RqDrv1_Ford_TrlrAidSwtch_D_RqDrv(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_TrlrAidSwtch_D_RqDrv_372f28fe, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordVehTrlrAidKnobBtn_Val Rte_Write_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtn_Val
#  define Rte_Write_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtn_Val(data) (Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtn_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidKnobPosn_Val Rte_Write_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosn_Val
#  define Rte_Write_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosn_Val(data) (Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosn_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrBackupAssiKnobPosVld_Logl Rte_Write_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobPosVld_Logl
#  define Rte_Write_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobPosVld_Logl(data) (Rte_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobPosVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrBackupAssiKnobVld_Logl Rte_Write_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobVld_Logl
#  define Rte_Write_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobVld_Logl(data) (Rte_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_FordMsg47ABusHiSpdMissMsgFaildTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg47ABusHiSpdMissMsgFaildTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg47ABusHiSpdMissMsgPassdTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg47ABusHiSpdMissMsgPassdTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtnInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtnInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosnInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosnInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobBtnVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobBtnVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobBtnVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobPosVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobPosVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobPosVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_TrlrAidSwtch_D_RqDrv, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FirstTranTrlrAidKnobBtnVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FirstTranTrlrAidKnobPosVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehMsg47Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehMsg47Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobBtnVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobPosVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_FordVehTrlrAidKnobBtnInvldFaildRefTi() \
  (&Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtnInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrAidKnobBtnInvldPassdRefTi() \
  (&Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtnInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrAidKnobPosnInvldFaildRefTi() \
  (&Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosnInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrAidKnobPosnInvldPassdRefTi() \
  (&Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosnInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgFaildRefTi() \
  (&Rte_FordMsg47ABusHiSpd_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgPassdRefTi() \
  (&Rte_FordMsg47ABusHiSpd_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TrlrAidKnobBtnVldFaildRefTi() \
  (&Rte_FordMsg47ABusHiSpd_TrlrAidKnobBtnVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TrlrAidKnobBtnVldMissRefTi() \
  (&Rte_FordMsg47ABusHiSpd_TrlrAidKnobBtnVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TrlrAidKnobBtnVldPassdRefTi() \
  (&Rte_FordMsg47ABusHiSpd_TrlrAidKnobBtnVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TrlrAidKnobPosVldFaildRefTi() \
  (&Rte_FordMsg47ABusHiSpd_TrlrAidKnobPosVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TrlrAidKnobPosVldMissRefTi() \
  (&Rte_FordMsg47ABusHiSpd_TrlrAidKnobPosVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TrlrAidKnobPosVldPassdRefTi() \
  (&Rte_FordMsg47ABusHiSpd_TrlrAidKnobPosVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrAidKnobPosnPrev() \
  (&Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ClrDiagcFlgProxyPrev() \
  (&Rte_FordMsg47ABusHiSpd_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrAidKnobBtnPrev() \
  (&Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FirstTranTrlrAidKnobBtnVldFlg() \
  (&Rte_FordMsg47ABusHiSpd_FirstTranTrlrAidKnobBtnVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FirstTranTrlrAidKnobPosVldFlg() \
  (&Rte_FordMsg47ABusHiSpd_FirstTranTrlrAidKnobPosVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg47Miss() \
  (&Rte_FordMsg47ABusHiSpd_FordVehMsg47Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg47Rxd() \
  (&Rte_FordMsg47ABusHiSpd_FordVehMsg47Rxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TrlrAidKnobBtnVldPrev() \
  (&Rte_FordMsg47ABusHiSpd_TrlrAidKnobBtnVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TrlrAidKnobPosVldPrev() \
  (&Rte_FordMsg47ABusHiSpd_TrlrAidKnobPosVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg47ABusHiSpd_START_SEC_CODE
# include "FordMsg47ABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg47ABusHiSpdInit1 FordMsg47ABusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg47ABusHiSpdPer1 FordMsg47ABusHiSpdPer1
# endif

FUNC(void, FordMsg47ABusHiSpd_CODE) FordMsg47ABusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg47ABusHiSpd_CODE) FordMsg47ABusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg47ABusHiSpd_STOP_SEC_CODE
# include "FordMsg47ABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG47ABUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
