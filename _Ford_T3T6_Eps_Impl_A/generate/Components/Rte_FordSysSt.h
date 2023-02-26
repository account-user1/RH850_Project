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
 *          File:  Rte_FordSysSt.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordSysSt>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDSYSST_H
# define _RTE_FORDSYSST_H

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

# include "Rte_FordSysSt_Type.h"
# include "Rte_DataHandleType.h"

# include "Rte_Hook.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Ford_EPAS_Failure, RTE_VAR_INIT) Rte_FordSysSt_FordEpsFailr_Ford_EPAS_Failure; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordEpsSysSt1, RTE_VAR_INIT) Rte_FordSysSt_FordEpsSysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordSysSt_FordPwrSplyEnaReq_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_SteMdule_D_Stat, RTE_VAR_INIT) Rte_FordSysSt_FordSteerModlSts_Ford_SteMdule_D_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordSysSt_OperRampRate_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordSysSt_OperScaFctr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordSysSt_SysStReqEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysStReqEnaOvrd_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_PwPckTq_D_Stat, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordVltgOperRamp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordVltgOperScar_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordVltgOperSt1, RTE_VAR_INIT) Rte_FordVltgIf_FordVltgOperSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LoaSt1, RTE_VAR_INIT) Rte_LoaMgr_LoaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_PwrUpSeq_SysStWrmIninCmpl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_EngOnSerlComSrvDft_Logl (FALSE)
#  define Rte_InitValue_FordEpsFailr_Ford_EPAS_Failure (0U)
#  define Rte_InitValue_FordEpsSysSt_Val (0U)
#  define Rte_InitValue_FordPwrSplyEnaReq_Logl (FALSE)
#  define Rte_InitValue_FordSteerModlSts_Ford_SteMdule_D_Stat (0U)
#  define Rte_InitValue_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat (0U)
#  define Rte_InitValue_FordVehSpd_Val (0.0F)
#  define Rte_InitValue_FordVehSpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVltgOperRamp_Val (1.0F)
#  define Rte_InitValue_FordVltgOperScar_Val (1.0F)
#  define Rte_InitValue_FordVltgOperSt_Val (0U)
#  define Rte_InitValue_LoaSt_Val (0U)
#  define Rte_InitValue_OperRampRate_Val (50.0F)
#  define Rte_InitValue_OperScaFctr_Val (1.0F)
#  define Rte_InitValue_SysSt_Val (3U)
#  define Rte_InitValue_SysStReqEna_Logl (FALSE)
#  define Rte_InitValue_SysStReqEnaOvrd_Logl (FALSE)
#  define Rte_InitValue_SysStWrmIninCmpl_Logl (FALSE)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/


# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_EngOnSerlComSrvDft_Logl Rte_Read_FordSysSt_EngOnSerlComSrvDft_Logl
#  define Rte_Read_FordSysSt_EngOnSerlComSrvDft_Logl(data) (*(data) = Rte_CmnMfgSrv_SysStReqEnaOvrd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat Rte_Read_FordSysSt_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat
#  define Rte_Read_FordSysSt_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat(data) (*(data) = Rte_FordMsg167BusHiSpd_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpd_Val Rte_Read_FordSysSt_FordVehSpd_Val
#  define Rte_Read_FordSysSt_FordVehSpd_Val(data) (*(data) = Rte_ImcSigArbn_VehSpdImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpdVld_Logl Rte_Read_FordSysSt_FordVehSpdVld_Logl
#  define Rte_Read_FordSysSt_FordVehSpdVld_Logl(data) (*(data) = Rte_VehSigCdng_VehSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVltgOperRamp_Val Rte_Read_FordSysSt_FordVltgOperRamp_Val
#  define Rte_Read_FordSysSt_FordVltgOperRamp_Val(data) (*(data) = Rte_FordVltgIf_FordVltgOperRamp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVltgOperScar_Val Rte_Read_FordSysSt_FordVltgOperScar_Val
#  define Rte_Read_FordSysSt_FordVltgOperScar_Val(data) (*(data) = Rte_FordVltgIf_FordVltgOperScar_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVltgOperSt_Val Rte_Read_FordSysSt_FordVltgOperSt_Val
#  define Rte_Read_FordSysSt_FordVltgOperSt_Val(data) (*(data) = Rte_FordVltgIf_FordVltgOperSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LoaSt_Val Rte_Read_FordSysSt_LoaSt_Val
#  define Rte_Read_FordSysSt_LoaSt_Val(data) (*(data) = Rte_LoaMgr_LoaSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysSt_Val Rte_Read_FordSysSt_SysSt_Val
#  define Rte_Read_FordSysSt_SysSt_Val(data) (*(data) = Rte_SysStMod_SysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysStReqEnaOvrd_Logl Rte_Read_FordSysSt_SysStReqEnaOvrd_Logl
#  define Rte_Read_FordSysSt_SysStReqEnaOvrd_Logl(data) (*(data) = Rte_CmnMfgSrv_SysStReqEnaOvrd_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysStWrmIninCmpl_Logl Rte_Read_FordSysSt_SysStWrmIninCmpl_Logl
#  define Rte_Read_FordSysSt_SysStWrmIninCmpl_Logl(data) (*(data) = Rte_PwrUpSeq_SysStWrmIninCmpl_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordEpsFailr_Ford_EPAS_Failure Rte_Write_FordSysSt_FordEpsFailr_Ford_EPAS_Failure
#  define Rte_Write_FordSysSt_FordEpsFailr_Ford_EPAS_Failure(data) (Rte_FordSysSt_FordEpsFailr_Ford_EPAS_Failure = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordEpsSysSt_Val Rte_Write_FordSysSt_FordEpsSysSt_Val
#  define Rte_Write_FordSysSt_FordEpsSysSt_Val(data) (Rte_FordSysSt_FordEpsSysSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordPwrSplyEnaReq_Logl Rte_Write_FordSysSt_FordPwrSplyEnaReq_Logl
#  define Rte_Write_FordSysSt_FordPwrSplyEnaReq_Logl(data) (Rte_FordSysSt_FordPwrSplyEnaReq_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordSteerModlSts_Ford_SteMdule_D_Stat Rte_Write_FordSysSt_FordSteerModlSts_Ford_SteMdule_D_Stat
#  define Rte_Write_FordSysSt_FordSteerModlSts_Ford_SteMdule_D_Stat(data) (Rte_FordSysSt_FordSteerModlSts_Ford_SteMdule_D_Stat = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_OperRampRate_Val Rte_Write_FordSysSt_OperRampRate_Val
#  define Rte_Write_FordSysSt_OperRampRate_Val(data) (Rte_FordSysSt_OperRampRate_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_OperScaFctr_Val Rte_Write_FordSysSt_OperScaFctr_Val
#  define Rte_Write_FordSysSt_OperScaFctr_Val(data) (Rte_FordSysSt_OperScaFctr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysStReqEna_Logl Rte_Write_FordSysSt_SysStReqEna_Logl
#  define Rte_Write_FordSysSt_SysStReqEna_Logl(data) (Rte_FordSysSt_SysStReqEna_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_GetGpioMcuEna_Oper(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetGpioMcuEna_Oper IoHwAb_GetGpioMcuEna_Oper
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcQlfrSts10_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcQlfrSts_Oper GetNtcQlfrSts10_Oper


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

#  define Rte_Enter_FordSysStExclusiveArea() /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */

#  define Rte_Exit_FordSysStExclusiveArea() /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_FullAssiRampUpRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FullAssiRampUpRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_InitLimpHomeRamp_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->InitLimpHomeRamp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_InitLimpHomeScar_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->InitLimpHomeScar_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LimdAssiRamp_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->LimdAssiRamp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LimdAssiRampUpRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->LimdAssiRampUpRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LimdAssiRampUpRateFaild_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->LimdAssiRampUpRateFaild_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LimdAssiScar_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->LimdAssiScar_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_NormLimpHomeRamp_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->NormLimpHomeRamp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_NormLimpHomeScar_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->NormLimpHomeScar_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ShtdwnRamp_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->ShtdwnRamp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_FordVltgOperRamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_FordVltgOperScar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_OperRampRatePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_OperScaFctrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_EPAS_Failure, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_FordEpsFailrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordEpsSysSt1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_FordEpsSysStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_SteMdule_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_FordSteerModlStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_SysStReqEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_FordVltgOperRamp() \
  (&Rte_FordSysSt_FordVltgOperRamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVltgOperScar() \
  (&Rte_FordSysSt_FordVltgOperScar) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_OperRampRatePrev() \
  (&Rte_FordSysSt_OperRampRatePrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_OperScaFctrPrev() \
  (&Rte_FordSysSt_OperScaFctrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordEpsFailrPrev() \
  (&Rte_FordSysSt_FordEpsFailrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordEpsSysStPrev() \
  (&Rte_FordSysSt_FordEpsSysStPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordSteerModlStsPrev() \
  (&Rte_FordSysSt_FordSteerModlStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SysStReqEnaPrev() \
  (&Rte_FordSysSt_SysStReqEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordSysSt_START_SEC_CODE
# include "FordSysSt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordSysStInit1 FordSysStInit1
#  define RTE_RUNNABLE_FordSysStPer1 FordSysStPer1
# endif

FUNC(void, FordSysSt_CODE) FordSysStInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordSysSt_CODE) FordSysStPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordSysSt_STOP_SEC_CODE
# include "FordSysSt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetGpio_PortIf1_E_NOT_OK (1U)

#  define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDSYSST_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
