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
 *          File:  Rte_InertiaCmpVel.h
 *        Config:  C:/_Synergy_Projects/Working/SF014A_InertiaCmpVel_Impl/tools/Component.dpa
 *     SW-C Type:  InertiaCmpVel
 *  Generated at:  Fri Aug 18 13:58:24 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <InertiaCmpVel> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_INERTIACMPVEL_H
# define _RTE_INERTIACMPVEL_H

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

# include "Rte_InertiaCmpVel_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_InertiaCmpVel
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DecelGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_NotchFilChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PreScagCmpCmdPrev1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PreScagCmpCmdPrev2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ScaDrvrVelPrev1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ScaDrvrVelPrev2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqSnsrAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqSnsrVelFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilNotchStRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqSnsrVelFilNotchSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dInertiaCmpVelAssiBasdDampgCoeff; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dInertiaCmpVelCalcdInertiaCmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dInertiaCmpVelFilFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dInertiaCmpVelMotVelBasdOutpScag; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dInertiaCmpVelNotScadDrvrVel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dInertiaCmpVelNotchBlndVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dInertiaCmpVelNotchInpVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dInertiaCmpVelNotchOutpVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dInertiaCmpVelRawDecelGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dInertiaCmpVelScadDrvrVel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dInertiaCmpVelTqSnsrVelFildVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_InertiaCmpVel, RTE_CONST, RTE_CONST) Rte_Inst_InertiaCmpVel; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_InertiaCmpVel, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiCmdBas_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_InertiaCmpDecelGainDi_Logl (FALSE)
# define Rte_InitValue_InertiaCmpVelCmd_Val (0.0F)
# define Rte_InitValue_InertiaCmpVelCmdDi_Logl (FALSE)
# define Rte_InitValue_MotVelCrf_Val (0.0F)
# define Rte_InitValue_VehLgtA_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_WhlImbRejctnAmp_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_InertiaCmpVel_AssiCmdBas_Val(P2VAR(float32, AUTOMATIC, RTE_INERTIACMPVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_InertiaCmpVel_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_INERTIACMPVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_InertiaCmpVel_InertiaCmpDecelGainDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_INERTIACMPVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_InertiaCmpVel_InertiaCmpVelCmdDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_INERTIACMPVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_InertiaCmpVel_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_INERTIACMPVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_InertiaCmpVel_VehLgtA_Val(P2VAR(float32, AUTOMATIC, RTE_INERTIACMPVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_InertiaCmpVel_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_INERTIACMPVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_InertiaCmpVel_WhlImbRejctnAmp_Val(P2VAR(float32, AUTOMATIC, RTE_INERTIACMPVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_InertiaCmpVel_InertiaCmpVelCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_InertiaCmpVel_FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_INERTIACMPVEL_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgDecelGain_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgDecelGainFallSlew_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgGainOffThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgGainOnThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelMotInertia_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelTqSnsrVelFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_InertiaCmpVel_SysGlbPrmSysKineRat_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_InertiaCmpVel_SysGlbPrmTorsBarStfn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDecelGainEnaCal_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelAssiBasdDampgCoeffX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelAssiBasdDampgCoeffX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u0p16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u0p16_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u0p16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelAssiBasdDampgRollgY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u0p16_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelAssiBasdDampgRollgY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u0p16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u0p16_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u0p16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u0p16_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelCmdScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u2p14_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelCmdScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u11p5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u11p5_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u13p3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u13p3_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u7p9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgFilFrq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgFilFrq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u7p9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgSpdBlndY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u1p15_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgSpdBlndY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u1p15_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelModWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelModWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelModWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u1p15_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelModWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u12p4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelMotVelBasdOutpScagX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u12p4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelMotVelBasdOutpScagX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelMotVelBasdOutpScagY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u1p15_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelMotVelBasdOutpScagY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelNotchBlndY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u1p15_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelNotchBlndY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelTqSnsrVelSca_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u2p14_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelTqSnsrVelSca_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_SysGlbPrmVehSpdBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_SysGlbPrmVehSpdBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC_P2CONST(FilNotchGainRec1, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_InertiaCmpVel_InertiaCmpVelNotchFilStruct_Rec(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AssiCmdBas_Val Rte_Read_InertiaCmpVel_AssiCmdBas_Val
# define Rte_Read_HwTq_Val Rte_Read_InertiaCmpVel_HwTq_Val
# define Rte_Read_InertiaCmpDecelGainDi_Logl Rte_Read_InertiaCmpVel_InertiaCmpDecelGainDi_Logl
# define Rte_Read_InertiaCmpVelCmdDi_Logl Rte_Read_InertiaCmpVel_InertiaCmpVelCmdDi_Logl
# define Rte_Read_MotVelCrf_Val Rte_Read_InertiaCmpVel_MotVelCrf_Val
# define Rte_Read_VehLgtA_Val Rte_Read_InertiaCmpVel_VehLgtA_Val
# define Rte_Read_VehSpd_Val Rte_Read_InertiaCmpVel_VehSpd_Val
# define Rte_Read_WhlImbRejctnAmp_Val Rte_Read_InertiaCmpVel_WhlImbRejctnAmp_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_InertiaCmpVelCmd_Val Rte_Write_InertiaCmpVel_InertiaCmpVelCmd_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_f32_Oper Rte_Call_InertiaCmpVel_FltInj_f32_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_InertiaCmpVelDampgDecelGain_Val Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgDecelGain_Val

# define Rte_Prm_InertiaCmpVelDampgDecelGainFallSlew_Val Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgDecelGainFallSlew_Val

# define Rte_Prm_InertiaCmpVelDampgGainOffThd_Val Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgGainOffThd_Val

# define Rte_Prm_InertiaCmpVelDampgGainOnThd_Val Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgGainOnThd_Val

# define Rte_Prm_InertiaCmpVelMotInertia_Val Rte_Prm_InertiaCmpVel_InertiaCmpVelMotInertia_Val

# define Rte_Prm_InertiaCmpVelTqSnsrVelFilFrq_Val Rte_Prm_InertiaCmpVel_InertiaCmpVelTqSnsrVelFilFrq_Val

# define Rte_Prm_SysGlbPrmSysKineRat_Val Rte_Prm_InertiaCmpVel_SysGlbPrmSysKineRat_Val

# define Rte_Prm_SysGlbPrmTorsBarStfn_Val Rte_Prm_InertiaCmpVel_SysGlbPrmTorsBarStfn_Val

# define Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl Rte_Prm_InertiaCmpVel_InertiaCmpVelDecelGainEnaCal_Logl

# define Rte_Prm_InertiaCmpVelAssiBasdDampgCoeffX_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelAssiBasdDampgCoeffX_Ary1D

# define Rte_Prm_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D

# define Rte_Prm_InertiaCmpVelAssiBasdDampgRollgY_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelAssiBasdDampgRollgY_Ary1D

# define Rte_Prm_InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY_Ary1D

# define Rte_Prm_InertiaCmpVelAssiBasdDampgStatY_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelAssiBasdDampgStatY_Ary1D

# define Rte_Prm_InertiaCmpVelCmdScaY_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelCmdScaY_Ary1D

# define Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D

# define Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D

# define Rte_Prm_InertiaCmpVelDampgFilFrq_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgFilFrq_Ary1D

# define Rte_Prm_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D

# define Rte_Prm_InertiaCmpVelDampgSpdBlndY_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgSpdBlndY_Ary1D

# define Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D

# define Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D

# define Rte_Prm_InertiaCmpVelModWhlImbRejctnBlndX_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelModWhlImbRejctnBlndX_Ary1D

# define Rte_Prm_InertiaCmpVelModWhlImbRejctnBlndY_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelModWhlImbRejctnBlndY_Ary1D

# define Rte_Prm_InertiaCmpVelMotVelBasdOutpScagX_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelMotVelBasdOutpScagX_Ary1D

# define Rte_Prm_InertiaCmpVelMotVelBasdOutpScagY_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelMotVelBasdOutpScagY_Ary1D

# define Rte_Prm_InertiaCmpVelNotchBlndY_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelNotchBlndY_Ary1D

# define Rte_Prm_InertiaCmpVelTqSnsrVelSca_Ary1D Rte_Prm_InertiaCmpVel_InertiaCmpVelTqSnsrVelSca_Ary1D

# define Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D Rte_Prm_InertiaCmpVel_SysGlbPrmVehSpdBilnrSeln_Ary1D

# define Rte_Prm_InertiaCmpVelNotchFilStruct_Rec Rte_Prm_InertiaCmpVel_InertiaCmpVelNotchFilStruct_Rec

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_DecelGain() (Rte_Inst_InertiaCmpVel->Pim_DecelGain) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PreScagCmpCmdPrev1() (Rte_Inst_InertiaCmpVel->Pim_PreScagCmpCmdPrev1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PreScagCmpCmdPrev2() (Rte_Inst_InertiaCmpVel->Pim_PreScagCmpCmdPrev2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ScaDrvrVelPrev1() (Rte_Inst_InertiaCmpVel->Pim_ScaDrvrVelPrev1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ScaDrvrVelPrev2() (Rte_Inst_InertiaCmpVel->Pim_ScaDrvrVelPrev2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqSnsrAgPrev() (Rte_Inst_InertiaCmpVel->Pim_TqSnsrAgPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dInertiaCmpVelAssiBasdDampgCoeff() (Rte_Inst_InertiaCmpVel->Pim_dInertiaCmpVelAssiBasdDampgCoeff) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dInertiaCmpVelCalcdInertiaCmp() (Rte_Inst_InertiaCmpVel->Pim_dInertiaCmpVelCalcdInertiaCmp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dInertiaCmpVelFilFrq() (Rte_Inst_InertiaCmpVel->Pim_dInertiaCmpVelFilFrq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dInertiaCmpVelMotVelBasdOutpScag() (Rte_Inst_InertiaCmpVel->Pim_dInertiaCmpVelMotVelBasdOutpScag) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dInertiaCmpVelNotScadDrvrVel() (Rte_Inst_InertiaCmpVel->Pim_dInertiaCmpVelNotScadDrvrVel) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dInertiaCmpVelNotchBlndVal() (Rte_Inst_InertiaCmpVel->Pim_dInertiaCmpVelNotchBlndVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dInertiaCmpVelNotchInpVal() (Rte_Inst_InertiaCmpVel->Pim_dInertiaCmpVelNotchInpVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dInertiaCmpVelNotchOutpVal() (Rte_Inst_InertiaCmpVel->Pim_dInertiaCmpVelNotchOutpVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dInertiaCmpVelRawDecelGain() (Rte_Inst_InertiaCmpVel->Pim_dInertiaCmpVelRawDecelGain) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dInertiaCmpVelScadDrvrVel() (Rte_Inst_InertiaCmpVel->Pim_dInertiaCmpVelScadDrvrVel) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dInertiaCmpVelTqSnsrVelFildVal() (Rte_Inst_InertiaCmpVel->Pim_dInertiaCmpVelTqSnsrVelFildVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_NotchFilChk() (Rte_Inst_InertiaCmpVel->Pim_NotchFilChk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqSnsrVelFil() (Rte_Inst_InertiaCmpVel->Pim_TqSnsrVelFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqSnsrVelFilNotchSt() (Rte_Inst_InertiaCmpVel->Pim_TqSnsrVelFilNotchSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_DecelGain(void)
 *   float32 *Rte_Pim_PreScagCmpCmdPrev1(void)
 *   float32 *Rte_Pim_PreScagCmpCmdPrev2(void)
 *   float32 *Rte_Pim_ScaDrvrVelPrev1(void)
 *   float32 *Rte_Pim_ScaDrvrVelPrev2(void)
 *   float32 *Rte_Pim_TqSnsrAgPrev(void)
 *   float32 *Rte_Pim_dInertiaCmpVelAssiBasdDampgCoeff(void)
 *   float32 *Rte_Pim_dInertiaCmpVelCalcdInertiaCmp(void)
 *   float32 *Rte_Pim_dInertiaCmpVelFilFrq(void)
 *   float32 *Rte_Pim_dInertiaCmpVelMotVelBasdOutpScag(void)
 *   float32 *Rte_Pim_dInertiaCmpVelNotScadDrvrVel(void)
 *   float32 *Rte_Pim_dInertiaCmpVelNotchBlndVal(void)
 *   float32 *Rte_Pim_dInertiaCmpVelNotchInpVal(void)
 *   float32 *Rte_Pim_dInertiaCmpVelNotchOutpVal(void)
 *   float32 *Rte_Pim_dInertiaCmpVelRawDecelGain(void)
 *   float32 *Rte_Pim_dInertiaCmpVelScadDrvrVel(void)
 *   float32 *Rte_Pim_dInertiaCmpVelTqSnsrVelFildVal(void)
 *   boolean *Rte_Pim_NotchFilChk(void)
 *   FilLpRec1 *Rte_Pim_TqSnsrVelFil(void)
 *   FilNotchStRec1 *Rte_Pim_TqSnsrVelFilNotchSt(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_InertiaCmpVelDampgDecelGain_Val(void)
 *   float32 Rte_Prm_InertiaCmpVelDampgDecelGainFallSlew_Val(void)
 *   float32 Rte_Prm_InertiaCmpVelDampgGainOffThd_Val(void)
 *   float32 Rte_Prm_InertiaCmpVelDampgGainOnThd_Val(void)
 *   float32 Rte_Prm_InertiaCmpVelMotInertia_Val(void)
 *   float32 Rte_Prm_InertiaCmpVelTqSnsrVelFilFrq_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysKineRat_Val(void)
 *   float32 Rte_Prm_SysGlbPrmTorsBarStfn_Val(void)
 *   boolean Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl(void)
 *   u4p12 *Rte_Prm_InertiaCmpVelAssiBasdDampgCoeffX_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_10
 *   u0p16 *Rte_Prm_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D(void)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_10
 *   u0p16 *Rte_Prm_InertiaCmpVelAssiBasdDampgRollgY_Ary1D(void)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_10
 *   u0p16 *Rte_Prm_InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY_Ary1D(void)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_10
 *   u0p16 *Rte_Prm_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_10
 *   u2p14 *Rte_Prm_InertiaCmpVelCmdScaY_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_12
 *   u11p5 *Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_6
 *   u13p3 *Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D(void)
 *     Returnvalue: u13p3* is of type Ary1D_u13p3_6
 *   u7p9 *Rte_Prm_InertiaCmpVelDampgFilFrq_Ary1D(void)
 *     Returnvalue: u7p9* is of type Ary1D_u7p9_12
 *   u7p9 *Rte_Prm_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void)
 *     Returnvalue: u7p9* is of type Ary1D_u7p9_12
 *   u1p15 *Rte_Prm_InertiaCmpVelDampgSpdBlndY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_12
 *   u4p12 *Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_5
 *   u1p15 *Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_5
 *   u4p12 *Rte_Prm_InertiaCmpVelModWhlImbRejctnBlndX_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_2
 *   u1p15 *Rte_Prm_InertiaCmpVelModWhlImbRejctnBlndY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_2
 *   u12p4 *Rte_Prm_InertiaCmpVelMotVelBasdOutpScagX_Ary1D(void)
 *     Returnvalue: u12p4* is of type Ary1D_u12p4_2
 *   u1p15 *Rte_Prm_InertiaCmpVelMotVelBasdOutpScagY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_2
 *   u1p15 *Rte_Prm_InertiaCmpVelNotchBlndY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_12
 *   u2p14 *Rte_Prm_InertiaCmpVelTqSnsrVelSca_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_12
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *   FilNotchGainRec1 *Rte_Prm_InertiaCmpVelNotchFilStruct_Rec(void)
 *
 *********************************************************************************************************************/


# define InertiaCmpVel_START_SEC_CODE
# include "InertiaCmpVel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: InertiaCmpVelInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_InertiaCmpVelInit1 InertiaCmpVelInit1
FUNC(void, InertiaCmpVel_CODE) InertiaCmpVelInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: InertiaCmpVelPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AssiCmdBas_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_InertiaCmpDecelGainDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_InertiaCmpVelCmdDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLgtA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnAmp_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_InertiaCmpVelCmd_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_InertiaCmpVelPer1 InertiaCmpVelPer1
FUNC(void, InertiaCmpVel_CODE) InertiaCmpVelPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define InertiaCmpVel_STOP_SEC_CODE
# include "InertiaCmpVel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_INERTIACMPVEL_H */

#include "Rte_Stubs.h"
