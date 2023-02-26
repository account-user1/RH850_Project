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
 *        Config:  C:/Component/CF067A_FordHwTqCmdOvrlLimr_Impl/tools/Component.dpa
 *     SW-C Type:  FordHwTqCmdOvrlLimr
 *  Generated at:  Fri May  4 13:50:00 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordHwTqCmdOvrlLimr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDHWTQCMDOVRLLIMR_H
# define _RTE_FORDHWTQCMDOVRLLIMR_H

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

# include "Rte_FordHwTqCmdOvrlLimr_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordHwTqCmdOvrlLimr
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LimrDftVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LimrVehSpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LkaTqReqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevDftVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqReqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordHwTqCmdOvrlLimr, RTE_CONST, RTE_CONST) Rte_Inst_FordHwTqCmdOvrlLimr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordHwTqCmdOvrlLimr, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_EcuId_Val (0U)
# define Rte_InitValue_FildVehSpd_Val (100.0F)
# define Rte_InitValue_FordColTqOvrl_Val (0.0F)
# define Rte_InitValue_FordDrvrSteerRcmdnArbnCmd_Val (0U)
# define Rte_InitValue_FordDrvrSteerRcmdnFctCallSts_Logl (FALSE)
# define Rte_InitValue_FordDrvrSteerRcmdnTqReq_Val (0.0F)
# define Rte_InitValue_FordEvasSteerAssiArbnCmd_Val (0U)
# define Rte_InitValue_FordEvasSteerAssiFctCallSts_Logl (FALSE)
# define Rte_InitValue_FordEvasSteerAssiTqReq_Val (0.0F)
# define Rte_InitValue_FordLaneKeepAssiArbnCmd_Val (0U)
# define Rte_InitValue_FordLaneKeepAssiFctCallSts_Logl (FALSE)
# define Rte_InitValue_FordLaneKeepAssiTqReq_Val (0.0F)
# define Rte_InitValue_VehSpdVld_Logl (TRUE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCmdOvrlLimr_EcuId_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDHWTQCMDOVRLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCmdOvrlLimr_FildVehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_FORDHWTQCMDOVRLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnArbnCmd_Val(P2VAR(FordArbnCmd1, AUTOMATIC, RTE_FORDHWTQCMDOVRLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnFctCallSts_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDHWTQCMDOVRLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnTqReq_Val(P2VAR(float32, AUTOMATIC, RTE_FORDHWTQCMDOVRLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCmdOvrlLimr_FordEvasSteerAssiArbnCmd_Val(P2VAR(FordArbnCmd1, AUTOMATIC, RTE_FORDHWTQCMDOVRLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCmdOvrlLimr_FordEvasSteerAssiFctCallSts_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDHWTQCMDOVRLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCmdOvrlLimr_FordEvasSteerAssiTqReq_Val(P2VAR(float32, AUTOMATIC, RTE_FORDHWTQCMDOVRLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCmdOvrlLimr_FordLaneKeepAssiArbnCmd_Val(P2VAR(FordArbnCmd1, AUTOMATIC, RTE_FORDHWTQCMDOVRLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCmdOvrlLimr_FordLaneKeepAssiFctCallSts_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDHWTQCMDOVRLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCmdOvrlLimr_FordLaneKeepAssiTqReq_Val(P2VAR(float32, AUTOMATIC, RTE_FORDHWTQCMDOVRLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCmdOvrlLimr_VehSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDHWTQCMDOVRLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordHwTqCmdOvrlLimr_FordColTqOvrl_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordHwTqCmdOvrlLimr_GetSigImcData_f32_Oper(uint16 SigId_Arg, P2VAR(float32, AUTOMATIC, RTE_FORDHWTQCMDOVRLLIMR_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_FORDHWTQCMDOVRLLIMR_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordHwTqCmdOvrlLimr_GetSigImcData_logl_Oper(uint16 SigId_Arg, P2VAR(boolean, AUTOMATIC, RTE_FORDHWTQCMDOVRLLIMR_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_FORDHWTQCMDOVRLLIMR_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrDftSpdRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrDftSpdRcvrRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u13p3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrCombdBwY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u13p3_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrCombdBwY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u13p3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrCombdTqRateY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u13p3_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrCombdTqRateY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u13p3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrCombdTqSatnY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u13p3_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrCombdTqSatnY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u16_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u13p3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrLkaBwY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u13p3_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrLkaBwY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u13p3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrLkaTqRateY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u13p3_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrLkaTqRateY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u13p3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrLkaTqSatnY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u13p3_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrLkaTqSatnY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrVehSpdBreakPtX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u16_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrVehSpdBreakPtX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(boolean, RTE_CODE) Rte_IrvRead_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnFctCallSts(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnTqReq(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiFctCallSts(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiTqReq(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer1_FildVehSpdVal(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiFctCallSts(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiTqReq(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer1_VehSpdVldVal(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnFctCallSts(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnTqReq(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiFctCallSts(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiTqReq(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer2_FildVehSpdVal(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiFctCallSts(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiTqReq(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer2_VehSpdVldVal(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EcuId_Val Rte_Read_FordHwTqCmdOvrlLimr_EcuId_Val
# define Rte_Read_FildVehSpd_Val Rte_Read_FordHwTqCmdOvrlLimr_FildVehSpd_Val
# define Rte_Read_FordDrvrSteerRcmdnArbnCmd_Val Rte_Read_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnArbnCmd_Val
# define Rte_Read_FordDrvrSteerRcmdnFctCallSts_Logl Rte_Read_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnFctCallSts_Logl
# define Rte_Read_FordDrvrSteerRcmdnTqReq_Val Rte_Read_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnTqReq_Val
# define Rte_Read_FordEvasSteerAssiArbnCmd_Val Rte_Read_FordHwTqCmdOvrlLimr_FordEvasSteerAssiArbnCmd_Val
# define Rte_Read_FordEvasSteerAssiFctCallSts_Logl Rte_Read_FordHwTqCmdOvrlLimr_FordEvasSteerAssiFctCallSts_Logl
# define Rte_Read_FordEvasSteerAssiTqReq_Val Rte_Read_FordHwTqCmdOvrlLimr_FordEvasSteerAssiTqReq_Val
# define Rte_Read_FordLaneKeepAssiArbnCmd_Val Rte_Read_FordHwTqCmdOvrlLimr_FordLaneKeepAssiArbnCmd_Val
# define Rte_Read_FordLaneKeepAssiFctCallSts_Logl Rte_Read_FordHwTqCmdOvrlLimr_FordLaneKeepAssiFctCallSts_Logl
# define Rte_Read_FordLaneKeepAssiTqReq_Val Rte_Read_FordHwTqCmdOvrlLimr_FordLaneKeepAssiTqReq_Val
# define Rte_Read_VehSpdVld_Logl Rte_Read_FordHwTqCmdOvrlLimr_VehSpdVld_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordColTqOvrl_Val Rte_Write_FordHwTqCmdOvrlLimr_FordColTqOvrl_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetSigImcData_f32_Oper Rte_Call_FordHwTqCmdOvrlLimr_GetSigImcData_f32_Oper
# define Rte_Call_GetSigImcData_logl_Oper Rte_Call_FordHwTqCmdOvrlLimr_GetSigImcData_logl_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnFctCallSts() \
  Rte_IrvRead_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnFctCallSts()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnTqReq() \
  Rte_IrvRead_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnTqReq()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiFctCallSts() \
  Rte_IrvRead_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiFctCallSts()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiTqReq() \
  Rte_IrvRead_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiTqReq()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_FildVehSpdVal() \
  Rte_IrvRead_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer1_FildVehSpdVal()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiFctCallSts() \
  Rte_IrvRead_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiFctCallSts()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiTqReq() \
  Rte_IrvRead_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiTqReq()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_VehSpdVldVal() \
  Rte_IrvRead_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer1_VehSpdVldVal()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnFctCallSts(data) \
  Rte_IrvWrite_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnFctCallSts(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnTqReq(data) \
  Rte_IrvWrite_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnTqReq(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiFctCallSts(data) \
  Rte_IrvWrite_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiFctCallSts(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiTqReq(data) \
  Rte_IrvWrite_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiTqReq(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_FildVehSpdVal(data) \
  Rte_IrvWrite_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer2_FildVehSpdVal(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiFctCallSts(data) \
  Rte_IrvWrite_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiFctCallSts(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiTqReq(data) \
  Rte_IrvWrite_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiTqReq(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_VehSpdVldVal(data) \
  Rte_IrvWrite_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrPer2_VehSpdVldVal(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRate_Val Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrDftSpdRate_Val

# define Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRcvrRate_Val Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrDftSpdRcvrRate_Val

# define Rte_Prm_FordHwTqCmdOvrlLimrCombdBwY_Ary1D Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrCombdBwY_Ary1D

# define Rte_Prm_FordHwTqCmdOvrlLimrCombdTqRateY_Ary1D Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrCombdTqRateY_Ary1D

# define Rte_Prm_FordHwTqCmdOvrlLimrCombdTqSatnY_Ary1D Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrCombdTqSatnY_Ary1D

# define Rte_Prm_FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_Ary1D Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_Ary1D

# define Rte_Prm_FordHwTqCmdOvrlLimrLkaBwY_Ary1D Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrLkaBwY_Ary1D

# define Rte_Prm_FordHwTqCmdOvrlLimrLkaTqRateY_Ary1D Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrLkaTqRateY_Ary1D

# define Rte_Prm_FordHwTqCmdOvrlLimrLkaTqSatnY_Ary1D Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrLkaTqSatnY_Ary1D

# define Rte_Prm_FordHwTqCmdOvrlLimrVehSpdBreakPtX_Ary1D Rte_Prm_FordHwTqCmdOvrlLimr_FordHwTqCmdOvrlLimrVehSpdBreakPtX_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_LimrVehSpdPrev() (Rte_Inst_FordHwTqCmdOvrlLimr->Pim_LimrVehSpdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LkaTqReqPrev() (Rte_Inst_FordHwTqCmdOvrlLimr->Pim_LkaTqReqPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevDftVehSpd() (Rte_Inst_FordHwTqCmdOvrlLimr->Pim_PrevDftVehSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevVehSpd() (Rte_Inst_FordHwTqCmdOvrlLimr->Pim_PrevVehSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqReqPrev() (Rte_Inst_FordHwTqCmdOvrlLimr->Pim_TqReqPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LimrDftVehSpd() (Rte_Inst_FordHwTqCmdOvrlLimr->Pim_LimrDftVehSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_LimrVehSpdPrev(void)
 *   float32 *Rte_Pim_LkaTqReqPrev(void)
 *   float32 *Rte_Pim_PrevDftVehSpd(void)
 *   float32 *Rte_Pim_PrevVehSpd(void)
 *   float32 *Rte_Pim_TqReqPrev(void)
 *   boolean *Rte_Pim_LimrDftVehSpd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRate_Val(void)
 *   float32 Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRcvrRate_Val(void)
 *   u13p3 *Rte_Prm_FordHwTqCmdOvrlLimrCombdBwY_Ary1D(void)
 *     Returnvalue: u13p3* is of type Ary1D_u13p3_8
 *   u13p3 *Rte_Prm_FordHwTqCmdOvrlLimrCombdTqRateY_Ary1D(void)
 *     Returnvalue: u13p3* is of type Ary1D_u13p3_8
 *   u13p3 *Rte_Prm_FordHwTqCmdOvrlLimrCombdTqSatnY_Ary1D(void)
 *     Returnvalue: u13p3* is of type Ary1D_u13p3_8
 *   uint16 *Rte_Prm_FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_Ary1D(void)
 *     Returnvalue: uint16* is of type Ary1D_u16_8
 *   u13p3 *Rte_Prm_FordHwTqCmdOvrlLimrLkaBwY_Ary1D(void)
 *     Returnvalue: u13p3* is of type Ary1D_u13p3_8
 *   u13p3 *Rte_Prm_FordHwTqCmdOvrlLimrLkaTqRateY_Ary1D(void)
 *     Returnvalue: u13p3* is of type Ary1D_u13p3_8
 *   u13p3 *Rte_Prm_FordHwTqCmdOvrlLimrLkaTqSatnY_Ary1D(void)
 *     Returnvalue: u13p3* is of type Ary1D_u13p3_8
 *   uint16 *Rte_Prm_FordHwTqCmdOvrlLimrVehSpdBreakPtX_Ary1D(void)
 *     Returnvalue: uint16* is of type Ary1D_u16_8
 *
 *********************************************************************************************************************/


# define FordHwTqCmdOvrlLimr_START_SEC_CODE
# include "FordHwTqCmdOvrlLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordHwTqCmdOvrlLimrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordHwTqCmdOvrlLimrInit1 FordHwTqCmdOvrlLimrInit1
FUNC(void, FordHwTqCmdOvrlLimr_CODE) FordHwTqCmdOvrlLimrInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordHwTqCmdOvrlLimrPer1
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
 *   Std_ReturnType Rte_Read_FordDrvrSteerRcmdnArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiArbnCmd_Val(FordArbnCmd1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordColTqOvrl_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnFctCallSts(void)
 *   float32 Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnTqReq(void)
 *   boolean Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiFctCallSts(void)
 *   float32 Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiTqReq(void)
 *   float32 Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_FildVehSpdVal(void)
 *   boolean Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiFctCallSts(void)
 *   float32 Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiTqReq(void)
 *   boolean Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_VehSpdVldVal(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordHwTqCmdOvrlLimrPer1 FordHwTqCmdOvrlLimrPer1
FUNC(void, FordHwTqCmdOvrlLimr_CODE) FordHwTqCmdOvrlLimrPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordHwTqCmdOvrlLimrPer2
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
 *   Std_ReturnType Rte_Read_FildVehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordDrvrSteerRcmdnFctCallSts_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordDrvrSteerRcmdnTqReq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiFctCallSts_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiTqReq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiFctCallSts_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiTqReq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnFctCallSts(boolean data)
 *   void Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnTqReq(float32 data)
 *   void Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiFctCallSts(boolean data)
 *   void Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiTqReq(float32 data)
 *   void Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_FildVehSpdVal(float32 data)
 *   void Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiFctCallSts(boolean data)
 *   void Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiTqReq(float32 data)
 *   void Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_VehSpdVldVal(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetSigImcData_f32_Oper(uint16 SigId_Arg, float32 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_f32_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetSigImcData_logl_Oper(uint16 SigId_Arg, boolean *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordHwTqCmdOvrlLimrPer2 FordHwTqCmdOvrlLimrPer2
FUNC(void, FordHwTqCmdOvrlLimr_CODE) FordHwTqCmdOvrlLimrPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordHwTqCmdOvrlLimr_STOP_SEC_CODE
# include "FordHwTqCmdOvrlLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetSigImcData_f32_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDHWTQCMDOVRLLIMR_H */

#include "Rte_Stubs.h"
