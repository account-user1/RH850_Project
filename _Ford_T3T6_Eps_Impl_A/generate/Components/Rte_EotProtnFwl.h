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
 *          File:  Rte_EotProtnFwl.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <EotProtnFwl>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_EOTPROTNFWL_H
# define _RTE_EOTPROTNFWL_H

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

# include "Rte_EotProtnFwl_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_EotProtnFwl_EotActvCmdLimd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtnFwl_EotDampgCmdLimd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtn_EotActvCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtn_EotDampgCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_EotProtnDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwAgImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MfgEnaSt1, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgEnaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_MotVelCrfImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAgConf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_EotActvCmd_Val (0.0F)
#  define Rte_InitValue_EotActvCmdLimd_Val (0.0F)
#  define Rte_InitValue_EotDampgCmd_Val (0.0F)
#  define Rte_InitValue_EotDampgCmdLimd_Val (0.0F)
#  define Rte_InitValue_EotProtnDi_Logl (FALSE)
#  define Rte_InitValue_HwAg_Val (0.0F)
#  define Rte_InitValue_MfgEnaSt_Val (0U)
#  define Rte_InitValue_MotVelCrf_Val (0.0F)
#  define Rte_InitValue_PinionAgConf_Val (0.0F)
#  define Rte_InitValue_VehSpd_Val (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_EotActvCmd_Val Rte_Read_EotProtnFwl_EotActvCmd_Val
#  define Rte_Read_EotProtnFwl_EotActvCmd_Val(data) (*(data) = Rte_EotProtn_EotActvCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EotDampgCmd_Val Rte_Read_EotProtnFwl_EotDampgCmd_Val
#  define Rte_Read_EotProtnFwl_EotDampgCmd_Val(data) (*(data) = Rte_EotProtn_EotDampgCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EotProtnDi_Logl Rte_Read_EotProtnFwl_EotProtnDi_Logl
#  define Rte_Read_EotProtnFwl_EotProtnDi_Logl(data) (*(data) = Rte_CmnMfgSrv_EotProtnDi_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAg_Val Rte_Read_EotProtnFwl_HwAg_Val
#  define Rte_Read_EotProtnFwl_HwAg_Val(data) (*(data) = Rte_ImcSigArbn_HwAgImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MfgEnaSt_Val Rte_Read_EotProtnFwl_MfgEnaSt_Val
#  define Rte_Read_EotProtnFwl_MfgEnaSt_Val(data) (*(data) = Rte_CmnMfgSrv_MfgEnaSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotVelCrf_Val Rte_Read_EotProtnFwl_MotVelCrf_Val
#  define Rte_Read_EotProtnFwl_MotVelCrf_Val(data) (*(data) = Rte_ImcSigArbn_MotVelCrfImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PinionAgConf_Val Rte_Read_EotProtnFwl_PinionAgConf_Val
#  define Rte_Read_EotProtnFwl_PinionAgConf_Val(data) (*(data) = Rte_HwAgSysArbn_PinionAgConf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_EotProtnFwl_VehSpd_Val
#  define Rte_Read_EotProtnFwl_VehSpd_Val(data) (*(data) = Rte_ImcSigArbn_VehSpdImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_EotActvCmdLimd_Val Rte_Write_EotProtnFwl_EotActvCmdLimd_Val
#  define Rte_Write_EotProtnFwl_EotActvCmdLimd_Val(data) (Rte_EotProtnFwl_EotActvCmdLimd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_EotDampgCmdLimd_Val Rte_Write_EotProtnFwl_EotDampgCmdLimd_Val
#  define Rte_Write_EotProtnFwl_EotDampgCmdLimd_Val(data) (Rte_EotProtnFwl_EotDampgCmdLimd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_EotProtnFwlInactvLim_Val() (((P2CONST(Rte_Calprm_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnFwlInactvLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_EotProtnHwAgMin_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnHwAgMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_EotProtnRackTrvlLimrRng_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnRackTrvlLimrRng_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_EotProtnSoftEndStopAuthyThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnSoftEndStopAuthyThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_EotProtnFwlActvCmdLowrBnd_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnFwlActvCmdLowrBnd_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_EotProtnFwlActvCmdLowrBnd_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnFwlActvCmdLowrBnd_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_EotProtnFwlActvCmdUpprBnd_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnFwlActvCmdUpprBnd_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_EotProtnFwlActvCmdUpprBnd_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnFwlActvCmdUpprBnd_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_EotProtnFwlEotDampgActvBndX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnFwlEotDampgActvBndX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_EotProtnFwlEotDampgActvBndX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnFwlEotDampgActvBndX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_EotProtnFwlEotDampgActvBndY_Ary2D() ((P2CONST(s7p8, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnFwlEotDampgActvBndY_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_EotProtnFwlEotDampgActvBndY_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnFwlEotDampgActvBndY_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_EotProtnFwlVehSpd_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnFwlVehSpd_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_EotProtnFwlVehSpd_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnFwlVehSpd_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_EotProtnHwDegDampgX_Ary2D() ((P2CONST(u12p4, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnHwDegDampgX_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_EotProtnHwDegDampgX_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnHwDegDampgX_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdActvLowrBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdActvUpprBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgActvLowrBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgActvUpprBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgFwX0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdMod; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgMod; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdOverActvLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdOverInactvLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgOverActvLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgOverInactvLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlPinionAgConfSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_dEotProtnFwlEotActvCmdActvLowrBnd() \
  (&Rte_EotProtnFwl_dEotProtnFwlEotActvCmdActvLowrBnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dEotProtnFwlEotActvCmdActvUpprBnd() \
  (&Rte_EotProtnFwl_dEotProtnFwlEotActvCmdActvUpprBnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dEotProtnFwlEotDampgActvLowrBnd() \
  (&Rte_EotProtnFwl_dEotProtnFwlEotDampgActvLowrBnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dEotProtnFwlEotDampgActvUpprBnd() \
  (&Rte_EotProtnFwl_dEotProtnFwlEotDampgActvUpprBnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dEotProtnFwlEotDampgFwX0() \
  (&Rte_EotProtnFwl_dEotProtnFwlEotDampgFwX0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dEotProtnFwlEotActvCmdMod() \
  (&Rte_EotProtnFwl_dEotProtnFwlEotActvCmdMod) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dEotProtnFwlEotDampgMod() \
  (&Rte_EotProtnFwl_dEotProtnFwlEotDampgMod) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dEotProtnFwlEotActvCmdOverActvLim() \
  (&Rte_EotProtnFwl_dEotProtnFwlEotActvCmdOverActvLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dEotProtnFwlEotActvCmdOverInactvLim() \
  (&Rte_EotProtnFwl_dEotProtnFwlEotActvCmdOverInactvLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dEotProtnFwlEotDampgOverActvLim() \
  (&Rte_EotProtnFwl_dEotProtnFwlEotDampgOverActvLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dEotProtnFwlEotDampgOverInactvLim() \
  (&Rte_EotProtnFwl_dEotProtnFwlEotDampgOverInactvLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dEotProtnFwlPinionAgConfSts() \
  (&Rte_EotProtnFwl_dEotProtnFwlPinionAgConfSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define EotProtnFwl_START_SEC_CODE
# include "EotProtnFwl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_EotProtnFwlInit1 EotProtnFwlInit1
#  define RTE_RUNNABLE_EotProtnFwlPer1 EotProtnFwlPer1
# endif

FUNC(void, EotProtnFwl_CODE) EotProtnFwlInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, EotProtnFwl_CODE) EotProtnFwlPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define EotProtnFwl_STOP_SEC_CODE
# include "EotProtnFwl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_EOTPROTNFWL_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
