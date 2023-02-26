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
 *          File:  Rte_FordHwTqCmdOvrlLimr.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordHwTqCmdOvrlLimr>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDHWTQCMDOVRLLIMR_H
# define _RTE_FORDHWTQCMDOVRLLIMR_H

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

# include "Rte_FordHwTqCmdOvrlLimr_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordColTqOvrl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DualEcuIdn_EcuId_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordArbnCmd1, RTE_VAR_INIT) Rte_FordCmdArbn_FordDrvrSteerRcmdnArbnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnFctCallSts_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordArbnCmd1, RTE_VAR_INIT) Rte_FordCmdArbn_FordEvasSteerAssiArbnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordEvasSteerAssiFctCallSts_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordArbnCmd1, RTE_VAR_INIT) Rte_FordCmdArbn_FordLaneKeepAssiArbnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordLaneKeepAssiFctCallSts_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiTqReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_EcuId_Val (0U)
#  define Rte_InitValue_FildVehSpd_Val (0.0F)
#  define Rte_InitValue_FordColTqOvrl_Val (0.0F)
#  define Rte_InitValue_FordDrvrSteerRcmdnArbnCmd_Val (0U)
#  define Rte_InitValue_FordDrvrSteerRcmdnFctCallSts_Logl (FALSE)
#  define Rte_InitValue_FordDrvrSteerRcmdnTqReq_Val (0.0F)
#  define Rte_InitValue_FordEvasSteerAssiArbnCmd_Val (0U)
#  define Rte_InitValue_FordEvasSteerAssiFctCallSts_Logl (FALSE)
#  define Rte_InitValue_FordEvasSteerAssiTqReq_Val (0.0F)
#  define Rte_InitValue_FordLaneKeepAssiArbnCmd_Val (0U)
#  define Rte_InitValue_FordLaneKeepAssiFctCallSts_Logl (FALSE)
#  define Rte_InitValue_FordLaneKeepAssiTqReq_Val (0.0F)
#  define Rte_InitValue_VehSpdVld_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_EcuId_Val Rte_Read_FordHwTqCmdOvrlLimr_EcuId_Val
#  define Rte_Read_FordHwTqCmdOvrlLimr_EcuId_Val(data) (*(data) = Rte_DualEcuIdn_EcuId_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FildVehSpd_Val Rte_Read_FordHwTqCmdOvrlLimr_FildVehSpd_Val
#  define Rte_Read_FordHwTqCmdOvrlLimr_FildVehSpd_Val(data) (*(data) = Rte_ImcSigArbn_VehSpdImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordDrvrSteerRcmdnArbnCmd_Val Rte_Read_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnArbnCmd_Val
#  define Rte_Read_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnArbnCmd_Val(data) (*(data) = Rte_FordCmdArbn_FordDrvrSteerRcmdnArbnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordDrvrSteerRcmdnFctCallSts_Logl Rte_Read_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnFctCallSts_Logl
#  define Rte_Read_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnFctCallSts_Logl(data) (*(data) = Rte_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnFctCallSts_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordDrvrSteerRcmdnTqReq_Val Rte_Read_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnTqReq_Val
#  define Rte_Read_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnTqReq_Val(data) (*(data) = Rte_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnTqReq_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEvasSteerAssiArbnCmd_Val Rte_Read_FordHwTqCmdOvrlLimr_FordEvasSteerAssiArbnCmd_Val
#  define Rte_Read_FordHwTqCmdOvrlLimr_FordEvasSteerAssiArbnCmd_Val(data) (*(data) = Rte_FordCmdArbn_FordEvasSteerAssiArbnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEvasSteerAssiFctCallSts_Logl Rte_Read_FordHwTqCmdOvrlLimr_FordEvasSteerAssiFctCallSts_Logl
#  define Rte_Read_FordHwTqCmdOvrlLimr_FordEvasSteerAssiFctCallSts_Logl(data) (*(data) = Rte_FordHwTqCmdOvrlLimr_FordEvasSteerAssiFctCallSts_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEvasSteerAssiTqReq_Val Rte_Read_FordHwTqCmdOvrlLimr_FordEvasSteerAssiTqReq_Val
#  define Rte_Read_FordHwTqCmdOvrlLimr_FordEvasSteerAssiTqReq_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiTqReq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneKeepAssiArbnCmd_Val Rte_Read_FordHwTqCmdOvrlLimr_FordLaneKeepAssiArbnCmd_Val
#  define Rte_Read_FordHwTqCmdOvrlLimr_FordLaneKeepAssiArbnCmd_Val(data) (*(data) = Rte_FordCmdArbn_FordLaneKeepAssiArbnCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneKeepAssiFctCallSts_Logl Rte_Read_FordHwTqCmdOvrlLimr_FordLaneKeepAssiFctCallSts_Logl
#  define Rte_Read_FordHwTqCmdOvrlLimr_FordLaneKeepAssiFctCallSts_Logl(data) (*(data) = Rte_FordHwTqCmdOvrlLimr_FordLaneKeepAssiFctCallSts_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneKeepAssiTqReq_Val Rte_Read_FordHwTqCmdOvrlLimr_FordLaneKeepAssiTqReq_Val
#  define Rte_Read_FordHwTqCmdOvrlLimr_FordLaneKeepAssiTqReq_Val(data) (*(data) = Rte_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiTqReq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdVld_Logl Rte_Read_FordHwTqCmdOvrlLimr_VehSpdVld_Logl
#  define Rte_Read_FordHwTqCmdOvrlLimr_VehSpdVld_Logl(data) (*(data) = Rte_VehSigCdng_VehSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordColTqOvrl_Val Rte_Write_FordHwTqCmdOvrlLimr_FordColTqOvrl_Val
#  define Rte_Write_FordHwTqCmdOvrlLimr_FordColTqOvrl_Val(data) (Rte_FordHwTqCmdOvrlLimr_FordColTqOvrl_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IMCARBN_APPL_CODE) GetSigImcData_f32_Oper(uint16 SigId_Arg, P2VAR(float32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetSigImcData_f32_Oper GetSigImcData_f32_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrDftSpdRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRcvrRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrDftSpdRcvrRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordHwTqCmdOvrlLimrCombdBwY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrCombdBwY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordHwTqCmdOvrlLimrCombdBwY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrCombdBwY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordHwTqCmdOvrlLimrCombdTqRateY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrCombdTqRateY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordHwTqCmdOvrlLimrCombdTqRateY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrCombdTqRateY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordHwTqCmdOvrlLimrCombdTqSatnY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrCombdTqSatnY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordHwTqCmdOvrlLimrCombdTqSatnY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrCombdTqSatnY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordHwTqCmdOvrlLimrLkaBwY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrLkaBwY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordHwTqCmdOvrlLimrLkaBwY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrLkaBwY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordHwTqCmdOvrlLimrLkaTqRateY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrLkaTqRateY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordHwTqCmdOvrlLimrLkaTqRateY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrLkaTqRateY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordHwTqCmdOvrlLimrLkaTqSatnY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrLkaTqSatnY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordHwTqCmdOvrlLimrLkaTqSatnY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrLkaTqSatnY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_FordHwTqCmdOvrlLimrVehSpdBreakPtX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrVehSpdBreakPtX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_FordHwTqCmdOvrlLimrVehSpdBreakPtX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCmdOvrlLimrVehSpdBreakPtX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_LimrVehSpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_LkaTqReqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_PrevDftVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_PrevVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_TqReqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_LimrDftVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_LimrVehSpdPrev() \
  (&Rte_FordHwTqCmdOvrlLimr_LimrVehSpdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LkaTqReqPrev() \
  (&Rte_FordHwTqCmdOvrlLimr_LkaTqReqPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevDftVehSpd() \
  (&Rte_FordHwTqCmdOvrlLimr_PrevDftVehSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevVehSpd() \
  (&Rte_FordHwTqCmdOvrlLimr_PrevVehSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TqReqPrev() \
  (&Rte_FordHwTqCmdOvrlLimr_TqReqPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LimrDftVehSpd() \
  (&Rte_FordHwTqCmdOvrlLimr_LimrDftVehSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordHwTqCmdOvrlLimr_START_SEC_CODE
# include "FordHwTqCmdOvrlLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordHwTqCmdOvrlLimrInit1 FordHwTqCmdOvrlLimrInit1
#  define RTE_RUNNABLE_FordHwTqCmdOvrlLimrPer1 FordHwTqCmdOvrlLimrPer1
# endif

FUNC(void, FordHwTqCmdOvrlLimr_CODE) FordHwTqCmdOvrlLimrInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordHwTqCmdOvrlLimr_CODE) FordHwTqCmdOvrlLimrPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordHwTqCmdOvrlLimr_STOP_SEC_CODE
# include "FordHwTqCmdOvrlLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetSigImcData_f32_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDHWTQCMDOVRLLIMR_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
