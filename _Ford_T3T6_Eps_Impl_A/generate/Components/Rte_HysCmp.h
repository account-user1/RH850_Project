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
 *          File:  Rte_HysCmp.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HysCmp>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HYSCMP_H
# define _RTE_HYSCMP_H

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

# include "Rte_HysCmp_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_HysCmp_HysCmpCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Assi_AssiCmdBas_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_AssiMechT_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwTqImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordColTqOvrl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_HysCmpCmdDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_SysFricOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HysCmp_WhlImbRejctnAmp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AssiCmdBas_Val (0.0F)
#  define Rte_InitValue_AssiMechT_Val (0.0F)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_HwTqOvrl_Val (0.0F)
#  define Rte_InitValue_HysCmpCmd_Val (0.0F)
#  define Rte_InitValue_HysCmpCmdDi_Logl (FALSE)
#  define Rte_InitValue_SysFricOffs_Val (0.0F)
#  define Rte_InitValue_VehSpd_Val (0.0F)
#  define Rte_InitValue_WhlImbRejctnAmp_Val (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_AssiCmdBas_Val Rte_Read_HysCmp_AssiCmdBas_Val
#  define Rte_Read_HysCmp_AssiCmdBas_Val(data) (*(data) = Rte_Assi_AssiCmdBas_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_AssiMechT_Val Rte_Read_HysCmp_AssiMechT_Val
#  define Rte_Read_HysCmp_AssiMechT_Val(data) (*(data) = Rte_TEstimn_AssiMechT_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_HysCmp_HwTq_Val
#  define Rte_Read_HysCmp_HwTq_Val(data) (*(data) = Rte_ImcSigArbn_HwTqImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqOvrl_Val Rte_Read_HysCmp_HwTqOvrl_Val
#  define Rte_Read_HysCmp_HwTqOvrl_Val(data) (*(data) = Rte_FordHwTqCmdOvrlLimr_FordColTqOvrl_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HysCmpCmdDi_Logl Rte_Read_HysCmp_HysCmpCmdDi_Logl
#  define Rte_Read_HysCmp_HysCmpCmdDi_Logl(data) (*(data) = Rte_CmnMfgSrv_HysCmpCmdDi_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysFricOffs_Val Rte_Read_HysCmp_SysFricOffs_Val
#  define Rte_Read_HysCmp_SysFricOffs_Val(data) (*(data) = Rte_SysFricLrng_SysFricOffs_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_HysCmp_VehSpd_Val
#  define Rte_Read_HysCmp_VehSpd_Val(data) (*(data) = Rte_ImcSigArbn_VehSpdImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlImbRejctnAmp_Val Rte_Read_HysCmp_WhlImbRejctnAmp_Val
#  define Rte_Read_HysCmp_WhlImbRejctnAmp_Val(data) (*(data) = Rte_HysCmp_WhlImbRejctnAmp_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_HysCmpCmd_Val Rte_Write_HysCmp_HysCmpCmd_Val
#  define Rte_Write_HysCmp_HysCmpCmd_Val(data) (Rte_HysCmp_HysCmpCmd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_FLTINJ_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_FLTINJ_APPL_CODE) FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_FLTINJ_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_FltInj_f32_Oper(arg1, arg2) (FltInj_f32_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_HysCmpAssiCmdLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpAssiCmdLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpFinalOutpLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFinalOutpLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpHwTqLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpOutpLim_Val() (((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpOutpLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpRevGain_Val() (((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRevGain_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysGlbPrmSysTqRat_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysGlbPrmSysTqRat_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpAssiInpLim_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpAssiInpLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpEffLossY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpEffLossY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpEffLossY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpEffLossY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpEffOffsY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpEffOffsY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpEffOffsY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpEffOffsY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpFricTScaX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricTScaX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpFricTScaX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricTScaX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpFricTScaY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricTScaY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpFricTScaY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricTScaY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpFricWhlImbRejctnBlndX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnBlndX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpFricWhlImbRejctnBlndX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnBlndX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpFricWhlImbRejctnBlndY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnBlndY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpFricWhlImbRejctnBlndY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnBlndY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpFricWhlImbRejctnOffY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnOffY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpFricWhlImbRejctnOffY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnOffY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpFricWhlImbRejctnOnY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnOnY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpFricWhlImbRejctnOnY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnOnY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpHwTqScaX_Ary2D() ((P2CONST(u4p12, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqScaX_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpHwTqScaX_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqScaX_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpHwTqScaY_Ary2D() ((P2CONST(u4p12, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqScaY_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpHwTqScaY_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqScaY_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpHysSatnY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHysSatnY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpHysSatnY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHysSatnY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpNegHysCmpScaX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpScaX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpNegHysCmpScaX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpScaX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpNegHysCmpScaY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpScaY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpNegHysCmpScaY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpScaY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpNegHysCmpX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpNegHysCmpX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpNegHysCmpY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpNegHysCmpY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpRiseX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRiseX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpRiseX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRiseX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_HysCmpRiseY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRiseY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_HysCmpRiseY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRiseY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_PrevAssiCmdFildVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_PrevHwTqFildVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_PrevRiseX; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_PrevRiseY; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpAssiCmdFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpEffCmpTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpHwTqFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpNegAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpPosAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpRawVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpRiseYFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_AssiCmdLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_FinalOutpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_PrevAssiCmdFildVal() \
  (&Rte_HysCmp_PrevAssiCmdFildVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHwTqFildVal() \
  (&Rte_HysCmp_PrevHwTqFildVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevRiseX() \
  (&Rte_HysCmp_PrevRiseX) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevRiseY() \
  (&Rte_HysCmp_PrevRiseY) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHysCmpAssiCmdFild() \
  (&Rte_HysCmp_dHysCmpAssiCmdFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHysCmpAvl() \
  (&Rte_HysCmp_dHysCmpAvl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHysCmpEffCmpTq() \
  (&Rte_HysCmp_dHysCmpEffCmpTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHysCmpFric() \
  (&Rte_HysCmp_dHysCmpFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHysCmpHwTqFild() \
  (&Rte_HysCmp_dHysCmpHwTqFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHysCmpNegAvl() \
  (&Rte_HysCmp_dHysCmpNegAvl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHysCmpPosAvl() \
  (&Rte_HysCmp_dHysCmpPosAvl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHysCmpRawVal() \
  (&Rte_HysCmp_dHysCmpRawVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dHysCmpRiseYFac() \
  (&Rte_HysCmp_dHysCmpRiseYFac) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AssiCmdLpFil() \
  (&Rte_HysCmp_AssiCmdLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FinalOutpLpFil() \
  (&Rte_HysCmp_FinalOutpLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqLpFil() \
  (&Rte_HysCmp_HwTqLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define HysCmp_START_SEC_CODE
# include "HysCmp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_HysCmpInit1 HysCmpInit1
#  define RTE_RUNNABLE_HysCmpPer1 HysCmpPer1
# endif

FUNC(void, HysCmp_CODE) HysCmpInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HysCmp_CODE) HysCmpPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define HysCmp_STOP_SEC_CODE
# include "HysCmp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_HYSCMP_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
