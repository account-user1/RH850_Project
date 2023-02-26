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
 *          File:  Rte_Rtn.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <Rtn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_RTN_H
# define _RTE_RTN_H

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

# include "Rte_Rtn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Rtn_RtnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_TEstimn_AssiMechT_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwAgImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAgConf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Rtn_HwAgRtnOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwTqImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwVel_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_RtnCmdDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordActvRtnEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Rtn_RtnCmdSca_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Rtn_RtnCmdScaServo_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AssiMechT_Val (0.0F)
#  define Rte_InitValue_HwAg_Val (0.0F)
#  define Rte_InitValue_HwAgAuthySca_Val (0.0F)
#  define Rte_InitValue_HwAgRtnOffs_Val (0.0F)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_HwVel_Val (0.0F)
#  define Rte_InitValue_RtnCmd_Val (0.0F)
#  define Rte_InitValue_RtnCmdDi_Logl (FALSE)
#  define Rte_InitValue_RtnCmdDiagcDi_Logl (TRUE)
#  define Rte_InitValue_RtnCmdSca_Val (1.0F)
#  define Rte_InitValue_RtnCmdScaServo_Val (1.0F)
#  define Rte_InitValue_VehSpd_Val (0.0F)
#  define Rte_InitValue_VehSpdVld_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_AssiMechT_Val Rte_Read_Rtn_AssiMechT_Val
#  define Rte_Read_Rtn_AssiMechT_Val(data) (*(data) = Rte_TEstimn_AssiMechT_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAg_Val Rte_Read_Rtn_HwAg_Val
#  define Rte_Read_Rtn_HwAg_Val(data) (*(data) = Rte_ImcSigArbn_HwAgImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgAuthySca_Val Rte_Read_Rtn_HwAgAuthySca_Val
#  define Rte_Read_Rtn_HwAgAuthySca_Val(data) (*(data) = Rte_HwAgSysArbn_PinionAgConf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgRtnOffs_Val Rte_Read_Rtn_HwAgRtnOffs_Val
#  define Rte_Read_Rtn_HwAgRtnOffs_Val(data) (*(data) = Rte_Rtn_HwAgRtnOffs_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_Rtn_HwTq_Val
#  define Rte_Read_Rtn_HwTq_Val(data) (*(data) = Rte_ImcSigArbn_HwTqImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwVel_Val Rte_Read_Rtn_HwVel_Val
#  define Rte_Read_Rtn_HwVel_Val(data) (*(data) = Rte_HwAgSysArbn_HwVel_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RtnCmdDi_Logl Rte_Read_Rtn_RtnCmdDi_Logl
#  define Rte_Read_Rtn_RtnCmdDi_Logl(data) (*(data) = Rte_CmnMfgSrv_RtnCmdDi_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RtnCmdDiagcDi_Logl Rte_Read_Rtn_RtnCmdDiagcDi_Logl
#  define Rte_Read_Rtn_RtnCmdDiagcDi_Logl(data) (*(data) = Rte_CustDiag_FordActvRtnEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RtnCmdSca_Val Rte_Read_Rtn_RtnCmdSca_Val
#  define Rte_Read_Rtn_RtnCmdSca_Val(data) (*(data) = Rte_Rtn_RtnCmdSca_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RtnCmdScaServo_Val Rte_Read_Rtn_RtnCmdScaServo_Val
#  define Rte_Read_Rtn_RtnCmdScaServo_Val(data) (*(data) = Rte_Rtn_RtnCmdScaServo_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_Rtn_VehSpd_Val
#  define Rte_Read_Rtn_VehSpd_Val(data) (*(data) = Rte_ImcSigArbn_VehSpdImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdVld_Logl Rte_Read_Rtn_VehSpdVld_Logl
#  define Rte_Read_Rtn_VehSpdVld_Logl(data) (*(data) = Rte_VehSigCdng_VehSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RtnCmd_Val Rte_Write_Rtn_RtnCmd_Val
#  define Rte_Write_Rtn_RtnCmd_Val(data) (Rte_Rtn_RtnCmd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_RtnHwAuthySlew_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAuthySlew_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_RtnOffsRng_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnOffsRng_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_RtnOffsSlew_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnOffsSlew_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_RtnHwAgOffsCalcdX_Ary2D() ((P2CONST(u12p4, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAgOffsCalcdX_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_RtnHwAgOffsCalcdX_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAgOffsCalcdX_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_RtnHwAgOffsCalcdY_Ary2D() ((P2CONST(u5p11, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAgOffsCalcdY_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_RtnHwAgOffsCalcdY_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAgOffsCalcdY_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_RtnHwAuthyScaX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAuthyScaX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_RtnHwAuthyScaX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAuthyScaX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_RtnHwAuthyScaY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAuthyScaY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_RtnHwAuthyScaY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAuthyScaY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_RtnScaTqX_Ary2D() ((P2CONST(u8p8, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaTqX_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_RtnScaTqX_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaTqX_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_RtnScaTqY_Ary2D() ((P2CONST(u8p8, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaTqY_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_RtnScaTqY_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaTqY_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_RtnScaVelX_Ary2D() ((P2CONST(u7p9, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaVelX_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_RtnScaVelX_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaVelX_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_RtnScaVelY_Ary2D() ((P2CONST(u8p8, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaVelY_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_RtnScaVelY_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaVelY_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_RtnTScaX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnTScaX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_RtnTScaX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnTScaX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_RtnTScaY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnTScaY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_RtnTScaY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnTScaY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_RtnVehSpdSeln_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnVehSpdSeln_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_RtnVehSpdSeln_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnVehSpdSeln_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_PrevHwAgAuthy; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_PrevHwAgOffsLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnAbsltHwAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnAssiMechTRtnSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnBascRtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnHwAgAuthySca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnHwAgRtnCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnHwTqRtnSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnHwVelRtnSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_PrevHwAgAuthy() \
  (&Rte_Rtn_PrevHwAgAuthy) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHwAgOffsLimd() \
  (&Rte_Rtn_PrevHwAgOffsLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRtnAbsltHwAg() \
  (&Rte_Rtn_dRtnAbsltHwAg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRtnAssiMechTRtnSca() \
  (&Rte_Rtn_dRtnAssiMechTRtnSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRtnBascRtn() \
  (&Rte_Rtn_dRtnBascRtn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRtnHwAgAuthySca() \
  (&Rte_Rtn_dRtnHwAgAuthySca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRtnHwAgRtnCmd() \
  (&Rte_Rtn_dRtnHwAgRtnCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRtnHwTqRtnSca() \
  (&Rte_Rtn_dRtnHwTqRtnSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRtnHwVelRtnSca() \
  (&Rte_Rtn_dRtnHwVelRtnSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define Rtn_START_SEC_CODE
# include "Rtn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_RtnInit1 RtnInit1
#  define RTE_RUNNABLE_RtnPer1 RtnPer1
# endif

FUNC(void, Rtn_CODE) RtnInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, Rtn_CODE) RtnPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define Rtn_STOP_SEC_CODE
# include "Rtn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_RTN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
