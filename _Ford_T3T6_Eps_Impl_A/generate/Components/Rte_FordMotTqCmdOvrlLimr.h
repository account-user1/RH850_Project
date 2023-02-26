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
 *          File:  Rte_FordMotTqCmdOvrlLimr.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMotTqCmdOvrlLimr>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMOTTQCMDOVRLLIMR_H
# define _RTE_FORDMOTTQCMDOVRLLIMR_H

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

# include "Rte_FordMotTqCmdOvrlLimr_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordMotTqCmdOvrl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DualEcuIdn_EcuId_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwTqImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordArbnCmd1, RTE_VAR_INIT) Rte_FordCmdArbn_FordActvNiblCtrlArbnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordActvNiblCtrlFctCallSts_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordArbnCmd1, RTE_VAR_INIT) Rte_FordCmdArbn_FordLaneDprtrWarnArbnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordLaneDprtrWarnFctCallSts_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordArbnCmd1, RTE_VAR_INIT) Rte_FordCmdArbn_FordLatCtrlArbnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordLatCtrlFctCallSts_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLatCtrlTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordArbnCmd1, RTE_VAR_INIT) Rte_FordCmdArbn_FordPullDriftCmpArbnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordPullDriftCmpFctCallSts_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordArbnCmd1, RTE_VAR_INIT) Rte_FordCmdArbn_FordSteerTqDstbcRejctnArbnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordSteerTqDstbcRejctnFctCallSts_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwVel_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_EcuId_Val (0U)
#  define Rte_InitValue_FildHwTq_Val (0.0F)
#  define Rte_InitValue_FildVehSpd_Val (0.0F)
#  define Rte_InitValue_FordActvNiblCtrlArbnCmd_Val (0U)
#  define Rte_InitValue_FordActvNiblCtrlFctCallSts_Logl (FALSE)
#  define Rte_InitValue_FordActvNiblCtrlTqReq_Val (0.0F)
#  define Rte_InitValue_FordLaneDprtrWarnArbnCmd_Val (0U)
#  define Rte_InitValue_FordLaneDprtrWarnFctCallSts_Logl (FALSE)
#  define Rte_InitValue_FordLaneDprtrWarnTqReq_Val (0.0F)
#  define Rte_InitValue_FordLatCtrlArbnCmd_Val (0U)
#  define Rte_InitValue_FordLatCtrlFctCallSts_Logl (FALSE)
#  define Rte_InitValue_FordLatCtrlTqReq_Val (0.0F)
#  define Rte_InitValue_FordMotTqCmdOvrl_Val (0.0F)
#  define Rte_InitValue_FordPullDriftCmpArbnCmd_Val (0U)
#  define Rte_InitValue_FordPullDriftCmpFctCallSts_Logl (FALSE)
#  define Rte_InitValue_FordPullDriftCmpTqReq_Val (0.0F)
#  define Rte_InitValue_FordSteerTqDstbcRejctnArbnCmd_Val (0U)
#  define Rte_InitValue_FordSteerTqDstbcRejctnFctCallSts_Logl (FALSE)
#  define Rte_InitValue_FordSteerTqDstbcRejctnTqReq_Val (0.0F)
#  define Rte_InitValue_HwVel_Val (0.0F)
#  define Rte_InitValue_VehSpdVld_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_EcuId_Val Rte_Read_FordMotTqCmdOvrlLimr_EcuId_Val
#  define Rte_Read_FordMotTqCmdOvrlLimr_EcuId_Val(data) (*(data) = Rte_DualEcuIdn_EcuId_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FildHwTq_Val Rte_Read_FordMotTqCmdOvrlLimr_FildHwTq_Val
#  define Rte_Read_FordMotTqCmdOvrlLimr_FildHwTq_Val(data) (*(data) = Rte_ImcSigArbn_HwTqImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FildVehSpd_Val Rte_Read_FordMotTqCmdOvrlLimr_FildVehSpd_Val
#  define Rte_Read_FordMotTqCmdOvrlLimr_FildVehSpd_Val(data) (*(data) = Rte_ImcSigArbn_VehSpdImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordActvNiblCtrlArbnCmd_Val Rte_Read_FordMotTqCmdOvrlLimr_FordActvNiblCtrlArbnCmd_Val
#  define Rte_Read_FordMotTqCmdOvrlLimr_FordActvNiblCtrlArbnCmd_Val(data) (*(data) = Rte_FordCmdArbn_FordActvNiblCtrlArbnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordActvNiblCtrlFctCallSts_Logl Rte_Read_FordMotTqCmdOvrlLimr_FordActvNiblCtrlFctCallSts_Logl
#  define Rte_Read_FordMotTqCmdOvrlLimr_FordActvNiblCtrlFctCallSts_Logl(data) (*(data) = Rte_FordMotTqCmdOvrlLimr_FordActvNiblCtrlFctCallSts_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordActvNiblCtrlTqReq_Val Rte_Read_FordMotTqCmdOvrlLimr_FordActvNiblCtrlTqReq_Val
#  define Rte_Read_FordMotTqCmdOvrlLimr_FordActvNiblCtrlTqReq_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlTqReq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneDprtrWarnArbnCmd_Val Rte_Read_FordMotTqCmdOvrlLimr_FordLaneDprtrWarnArbnCmd_Val
#  define Rte_Read_FordMotTqCmdOvrlLimr_FordLaneDprtrWarnArbnCmd_Val(data) (*(data) = Rte_FordCmdArbn_FordLaneDprtrWarnArbnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneDprtrWarnFctCallSts_Logl Rte_Read_FordMotTqCmdOvrlLimr_FordLaneDprtrWarnFctCallSts_Logl
#  define Rte_Read_FordMotTqCmdOvrlLimr_FordLaneDprtrWarnFctCallSts_Logl(data) (*(data) = Rte_FordMotTqCmdOvrlLimr_FordLaneDprtrWarnFctCallSts_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneDprtrWarnTqReq_Val Rte_Read_FordMotTqCmdOvrlLimr_FordLaneDprtrWarnTqReq_Val
#  define Rte_Read_FordMotTqCmdOvrlLimr_FordLaneDprtrWarnTqReq_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnTqReq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLatCtrlArbnCmd_Val Rte_Read_FordMotTqCmdOvrlLimr_FordLatCtrlArbnCmd_Val
#  define Rte_Read_FordMotTqCmdOvrlLimr_FordLatCtrlArbnCmd_Val(data) (*(data) = Rte_FordCmdArbn_FordLatCtrlArbnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLatCtrlFctCallSts_Logl Rte_Read_FordMotTqCmdOvrlLimr_FordLatCtrlFctCallSts_Logl
#  define Rte_Read_FordMotTqCmdOvrlLimr_FordLatCtrlFctCallSts_Logl(data) (*(data) = Rte_FordMotTqCmdOvrlLimr_FordLatCtrlFctCallSts_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLatCtrlTqReq_Val Rte_Read_FordMotTqCmdOvrlLimr_FordLatCtrlTqReq_Val
#  define Rte_Read_FordMotTqCmdOvrlLimr_FordLatCtrlTqReq_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordLatCtrlTqReq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordPullDriftCmpArbnCmd_Val Rte_Read_FordMotTqCmdOvrlLimr_FordPullDriftCmpArbnCmd_Val
#  define Rte_Read_FordMotTqCmdOvrlLimr_FordPullDriftCmpArbnCmd_Val(data) (*(data) = Rte_FordCmdArbn_FordPullDriftCmpArbnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordPullDriftCmpFctCallSts_Logl Rte_Read_FordMotTqCmdOvrlLimr_FordPullDriftCmpFctCallSts_Logl
#  define Rte_Read_FordMotTqCmdOvrlLimr_FordPullDriftCmpFctCallSts_Logl(data) (*(data) = Rte_FordMotTqCmdOvrlLimr_FordPullDriftCmpFctCallSts_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordPullDriftCmpTqReq_Val Rte_Read_FordMotTqCmdOvrlLimr_FordPullDriftCmpTqReq_Val
#  define Rte_Read_FordMotTqCmdOvrlLimr_FordPullDriftCmpTqReq_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpTqReq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordSteerTqDstbcRejctnArbnCmd_Val Rte_Read_FordMotTqCmdOvrlLimr_FordSteerTqDstbcRejctnArbnCmd_Val
#  define Rte_Read_FordMotTqCmdOvrlLimr_FordSteerTqDstbcRejctnArbnCmd_Val(data) (*(data) = Rte_FordCmdArbn_FordSteerTqDstbcRejctnArbnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordSteerTqDstbcRejctnFctCallSts_Logl Rte_Read_FordMotTqCmdOvrlLimr_FordSteerTqDstbcRejctnFctCallSts_Logl
#  define Rte_Read_FordMotTqCmdOvrlLimr_FordSteerTqDstbcRejctnFctCallSts_Logl(data) (*(data) = Rte_FordMotTqCmdOvrlLimr_FordSteerTqDstbcRejctnFctCallSts_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordSteerTqDstbcRejctnTqReq_Val Rte_Read_FordMotTqCmdOvrlLimr_FordSteerTqDstbcRejctnTqReq_Val
#  define Rte_Read_FordMotTqCmdOvrlLimr_FordSteerTqDstbcRejctnTqReq_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnTqReq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwVel_Val Rte_Read_FordMotTqCmdOvrlLimr_HwVel_Val
#  define Rte_Read_FordMotTqCmdOvrlLimr_HwVel_Val(data) (*(data) = Rte_HwAgSysArbn_HwVel_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdVld_Logl Rte_Read_FordMotTqCmdOvrlLimr_VehSpdVld_Logl
#  define Rte_Read_FordMotTqCmdOvrlLimr_VehSpdVld_Logl(data) (*(data) = Rte_VehSigCdng_VehSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordMotTqCmdOvrl_Val Rte_Write_FordMotTqCmdOvrlLimr_FordMotTqCmdOvrl_Val
#  define Rte_Write_FordMotTqCmdOvrlLimr_FordMotTqCmdOvrl_Val(data) (Rte_FordMotTqCmdOvrlLimr_FordMotTqCmdOvrl_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_GetSigImcData_f32_Oper(arg1, arg2, arg3) (RTE_E_UNCONNECTED) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

#  define Rte_Prm_FordMotTqCmdOvrlLimrDftSpdRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrDftSpdRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrDftSpdRcvrRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrDftSpdRcvrRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrHwVelLoPassFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrHwVelLoPassFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordMotTqCmdOvrlLimrLatCtrlBwY_Val() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrLatCtrlBwY_Val[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordMotTqCmdOvrlLimrLatCtrlBwY_Val() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrLatCtrlBwY_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordMotTqCmdOvrlLimrLatCtrlTqRateY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrLatCtrlTqRateY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordMotTqCmdOvrlLimrLatCtrlTqRateY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrLatCtrlTqRateY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordMotTqCmdOvrlLimrLatCtrlTqSatnY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrLatCtrlTqSatnY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordMotTqCmdOvrlLimrLatCtrlTqSatnY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrLatCtrlTqSatnY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordMotTqCmdOvrlLimrPullDriftCmpTqRateY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrPullDriftCmpTqRateY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordMotTqCmdOvrlLimrPullDriftCmpTqRateY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrPullDriftCmpTqRateY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX_Ary2D() ((P2CONST(sint16, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY_Ary2D() ((P2CONST(sint16, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_DftVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_PrevAmpLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_PrevDftVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_PrevLimdTqReq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_PrevLimrVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_PrevTqTrend; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqElpdTiVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqTmrVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqElpdTiVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqTmrVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqTmrFlgVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqTmrFlgVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LimrDftVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_HwVelFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_DftVehSpd() \
  (&Rte_FordMotTqCmdOvrlLimr_DftVehSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevAmpLim() \
  (&Rte_FordMotTqCmdOvrlLimr_PrevAmpLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevDftVehSpd() \
  (&Rte_FordMotTqCmdOvrlLimr_PrevDftVehSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevLimdTqReq() \
  (&Rte_FordMotTqCmdOvrlLimr_PrevLimdTqReq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevLimrVehSpd() \
  (&Rte_FordMotTqCmdOvrlLimr_PrevLimrVehSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevTqTrend() \
  (&Rte_FordMotTqCmdOvrlLimr_PrevTqTrend) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ActvNiblCtrlLoFrqElpdTiVari() \
  (&Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqElpdTiVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ActvNiblCtrlLoFrqTmrVari() \
  (&Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqTmrVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LaneDprtrWarnLoFrqElpdTiVari() \
  (&Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqElpdTiVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LaneDprtrWarnLoFrqTmrVari() \
  (&Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqTmrVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ActvNiblCtrlLoFrqFlt() \
  (&Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqFlt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ActvNiblCtrlLoFrqSt() \
  (&Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LaneDprtrWarnLoFrqFlt() \
  (&Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqFlt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LaneDprtrWarnLoFrqSt() \
  (&Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ActvNiblCtrlLoFrqTmrFlgVari() \
  (&Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqTmrFlgVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LaneDprtrWarnLoFrqTmrFlgVari() \
  (&Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqTmrFlgVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LimrDftVehSpd() \
  (&Rte_FordMotTqCmdOvrlLimr_LimrDftVehSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwVelFil() \
  (&Rte_FordMotTqCmdOvrlLimr_HwVelFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMotTqCmdOvrlLimr_START_SEC_CODE
# include "FordMotTqCmdOvrlLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMotTqCmdOvrlLimrInit1 FordMotTqCmdOvrlLimrInit1
#  define RTE_RUNNABLE_FordMotTqCmdOvrlLimrPer1 FordMotTqCmdOvrlLimrPer1
# endif

FUNC(void, FordMotTqCmdOvrlLimr_CODE) FordMotTqCmdOvrlLimrInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMotTqCmdOvrlLimr_CODE) FordMotTqCmdOvrlLimrPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMotTqCmdOvrlLimr_STOP_SEC_CODE
# include "FordMotTqCmdOvrlLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetSigImcData_f32_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMOTTQCMDOVRLLIMR_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
