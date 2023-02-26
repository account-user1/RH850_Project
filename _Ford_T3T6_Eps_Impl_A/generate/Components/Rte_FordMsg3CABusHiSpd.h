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
 *          File:  Rte_FordMsg3CABusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg3CABusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG3CABUSHISPD_H
# define _RTE_FORDMSG3CABUSHISPD_H

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

# include "Rte_FordMsg3CABusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneAssiImgProcgModlAVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnInten_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysRampTyp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysSts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneDprtrWarnEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneKeepAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

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
#  define Rte_InitValue_FordLaneDetnWarnEnad_Logl (FALSE)
#  define Rte_InitValue_FordLaneKeepAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordVehLaneAssiImgProcgModlAVld_Logl (FALSE)
#  define Rte_InitValue_FordVehLaneDetnWarnInten_Val (0U)
#  define Rte_InitValue_FordVehLaneDetnWarnSts_Val (0U)
#  define Rte_InitValue_FordVehLaneKeepSysCrvt_Val (0.0F)
#  define Rte_InitValue_FordVehLaneKeepSysCrvtRaw_Val (2048U)
#  define Rte_InitValue_FordVehLaneKeepSysRampTyp_Val (0U)
#  define Rte_InitValue_FordVehLaneKeepSysReqdAg_Val (0.0F)
#  define Rte_InitValue_FordVehLaneKeepSysReqdAgRaw_Val (2048U)
#  define Rte_InitValue_FordVehLaneKeepSysSts_Val (0U)
#  define Rte_InitValue_Ford_LaCurvature_No_Calc_Ford_LaCurvature_No_Calc (0U)
#  define Rte_InitValue_Ford_LaRampType_B_Req_Ford_LaRampType_B_Req (FALSE)
#  define Rte_InitValue_Ford_LaRefAng_No_Req_Ford_LaRefAng_No_Req (0U)
#  define Rte_InitValue_Ford_LdwActvIntns_D_Req_Ford_LdwActvIntns_D_Req (0U)
#  define Rte_InitValue_Ford_LdwActvStats_D_Req_Ford_LdwActvStats_D_Req (0U)
#  define Rte_InitValue_Ford_LkaActvStats_D2_Req_Ford_LkaActvStats_D2_Req (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg3CABusHiSpd_ClrDiagcFlgProxy_Val
#  define Rte_Read_FordMsg3CABusHiSpd_ClrDiagcFlgProxy_Val(data) (*(data) = Rte_DiagcMgr_ClrDiagcFlgProxy_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg3CABusHiSpd_FordCanDtcInhb_Logl
#  define Rte_Read_FordMsg3CABusHiSpd_FordCanDtcInhb_Logl(data) (*(data) = Rte_FordCanDtcInhb_FordCanDtcInhb_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg3CABusHiSpd_FordEpsLifeCycMod_Val
#  define Rte_Read_FordMsg3CABusHiSpd_FordEpsLifeCycMod_Val(data) (*(data) = Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneDetnWarnEnad_Logl Rte_Read_FordMsg3CABusHiSpd_FordLaneDetnWarnEnad_Logl
#  define Rte_Read_FordMsg3CABusHiSpd_FordLaneDetnWarnEnad_Logl(data) (*(data) = Rte_CustDiag_FordLaneDprtrWarnEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneKeepAssiEnad_Logl Rte_Read_FordMsg3CABusHiSpd_FordLaneKeepAssiEnad_Logl
#  define Rte_Read_FordMsg3CABusHiSpd_FordLaneKeepAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordLaneKeepAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_LaCurvature_No_Calc_Ford_LaCurvature_No_Calc Rte_Read_FordMsg3CABusHiSpd_Ford_LaCurvature_No_Calc_Ford_LaCurvature_No_Calc
#  define Rte_Read_FordMsg3CABusHiSpd_Ford_LaCurvature_No_Calc_Ford_LaCurvature_No_Calc(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_LaCurvature_No_Calc_d64ac390, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_LaRampType_B_Req_Ford_LaRampType_B_Req Rte_Read_FordMsg3CABusHiSpd_Ford_LaRampType_B_Req_Ford_LaRampType_B_Req
#  define Rte_Read_FordMsg3CABusHiSpd_Ford_LaRampType_B_Req_Ford_LaRampType_B_Req(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_LaRampType_B_Req_d64ac390, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_LaRefAng_No_Req_Ford_LaRefAng_No_Req Rte_Read_FordMsg3CABusHiSpd_Ford_LaRefAng_No_Req_Ford_LaRefAng_No_Req
#  define Rte_Read_FordMsg3CABusHiSpd_Ford_LaRefAng_No_Req_Ford_LaRefAng_No_Req(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_LaRefAng_No_Req_d64ac390, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_LdwActvIntns_D_Req_Ford_LdwActvIntns_D_Req Rte_Read_FordMsg3CABusHiSpd_Ford_LdwActvIntns_D_Req_Ford_LdwActvIntns_D_Req
#  define Rte_Read_FordMsg3CABusHiSpd_Ford_LdwActvIntns_D_Req_Ford_LdwActvIntns_D_Req(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_LdwActvIntns_D_Req_d64ac390, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_LdwActvStats_D_Req_Ford_LdwActvStats_D_Req Rte_Read_FordMsg3CABusHiSpd_Ford_LdwActvStats_D_Req_Ford_LdwActvStats_D_Req
#  define Rte_Read_FordMsg3CABusHiSpd_Ford_LdwActvStats_D_Req_Ford_LdwActvStats_D_Req(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_LdwActvStats_D_Req_d64ac390, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_LkaActvStats_D2_Req_Ford_LkaActvStats_D2_Req Rte_Read_FordMsg3CABusHiSpd_Ford_LkaActvStats_D2_Req_Ford_LkaActvStats_D2_Req
#  define Rte_Read_FordMsg3CABusHiSpd_Ford_LkaActvStats_D2_Req_Ford_LkaActvStats_D2_Req(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_LkaActvStats_D2_Req_d64ac390, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordVehLaneAssiImgProcgModlAVld_Logl Rte_Write_FordMsg3CABusHiSpd_FordVehLaneAssiImgProcgModlAVld_Logl
#  define Rte_Write_FordMsg3CABusHiSpd_FordVehLaneAssiImgProcgModlAVld_Logl(data) (Rte_FordMsg3CABusHiSpd_FordVehLaneAssiImgProcgModlAVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLaneDetnWarnInten_Val Rte_Write_FordMsg3CABusHiSpd_FordVehLaneDetnWarnInten_Val
#  define Rte_Write_FordMsg3CABusHiSpd_FordVehLaneDetnWarnInten_Val(data) (Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnInten_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLaneDetnWarnSts_Val Rte_Write_FordMsg3CABusHiSpd_FordVehLaneDetnWarnSts_Val
#  define Rte_Write_FordMsg3CABusHiSpd_FordVehLaneDetnWarnSts_Val(data) (Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLaneKeepSysCrvt_Val Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvt_Val
#  define Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvt_Val(data) (Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLaneKeepSysCrvtRaw_Val Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtRaw_Val
#  define Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtRaw_Val(data) (Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLaneKeepSysRampTyp_Val Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysRampTyp_Val
#  define Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysRampTyp_Val(data) (Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysRampTyp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLaneKeepSysReqdAg_Val Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAg_Val
#  define Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAg_Val(data) (Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAg_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLaneKeepSysReqdAgRaw_Val Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgRaw_Val
#  define Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgRaw_Val(data) (Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLaneKeepSysSts_Val Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysSts_Val
#  define Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysSts_Val(data) (Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysSts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3CABusHiSpdMissMsgFaildTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3CABusHiSpdMissMsgFaildTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3CABusHiSpdMissMsgPassdTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3CABusHiSpdMissMsgPassdTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_LaneAssiImgProcgModlAFaildCrvtTiThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_LaneAssiImgProcgModlAFaildReqdAgTiThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_LaneAssiImgProcgModlAVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_LaneAssiImgProcgModlAVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_LaneKeepSysReqdAgInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnIntenPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysRampTypPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneAssiImgProcgModlAVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehMsg3CAMiss; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_FordVehLaneKeepSysCrvtPrev() \
  (&Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLaneKeepSysReqdAgPrev() \
  (&Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLaneKeepSysCrvtInvldFaildRefTi() \
  (&Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLaneKeepSysCrvtInvldPassdRefTi() \
  (&Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLaneKeepSysReqdAgInvldPassdRefTi() \
  (&Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LaneAssiImgProcgModlAFaildCrvtTiThd() \
  (&Rte_FordMsg3CABusHiSpd_LaneAssiImgProcgModlAFaildCrvtTiThd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LaneAssiImgProcgModlAFaildReqdAgTiThd() \
  (&Rte_FordMsg3CABusHiSpd_LaneAssiImgProcgModlAFaildReqdAgTiThd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LaneAssiImgProcgModlAVldMissRefTi() \
  (&Rte_FordMsg3CABusHiSpd_LaneAssiImgProcgModlAVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LaneAssiImgProcgModlAVldPassdRefTi() \
  (&Rte_FordMsg3CABusHiSpd_LaneAssiImgProcgModlAVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LaneKeepSysReqdAgInvldFaildRefTi() \
  (&Rte_FordMsg3CABusHiSpd_LaneKeepSysReqdAgInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgFaildRefTi() \
  (&Rte_FordMsg3CABusHiSpd_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgPassdRefTi() \
  (&Rte_FordMsg3CABusHiSpd_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLaneKeepSysCrvtRawPrev() \
  (&Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLaneKeepSysReqdAgRawPrev() \
  (&Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ClrDiagcFlgProxyPrev() \
  (&Rte_FordMsg3CABusHiSpd_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLaneDetnWarnIntenPrev() \
  (&Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnIntenPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLaneDetnWarnStsPrev() \
  (&Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLaneKeepSysRampTypPrev() \
  (&Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysRampTypPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLaneKeepSysStsPrev() \
  (&Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FirstTranVldFlg() \
  (&Rte_FordMsg3CABusHiSpd_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLaneAssiImgProcgModlAVldPrev() \
  (&Rte_FordMsg3CABusHiSpd_FordVehLaneAssiImgProcgModlAVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg3CAMiss() \
  (&Rte_FordMsg3CABusHiSpd_FordVehMsg3CAMiss) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg3CABusHiSpd_START_SEC_CODE
# include "FordMsg3CABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg3CABusHiSpdInit1 FordMsg3CABusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg3CABusHiSpdPer1 FordMsg3CABusHiSpdPer1
# endif

FUNC(void, FordMsg3CABusHiSpd_CODE) FordMsg3CABusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg3CABusHiSpd_CODE) FordMsg3CABusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg3CABusHiSpd_STOP_SEC_CODE
# include "FordMsg3CABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG3CABUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
