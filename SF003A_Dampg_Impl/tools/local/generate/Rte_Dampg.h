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
 *          File:  Rte_Dampg.h
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/SF003A_Dampg_Impl/tools/Component.dpa
 *     SW-C Type:  Dampg
 *  Generated at:  Mon May 22 10:23:31 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <Dampg> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DAMPG_H
# define _RTE_DAMPG_H

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

# include "Rte_Dampg_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_Dampg
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotVelDampgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwTqBacklshOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevMotVelBacklshOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_QuadDampgHwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_QuadDampgMotVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_QuadDampgScaLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgAssiMechTSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgCoeff1Term; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgCoeff2Term; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgCoeff3Term; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgCoeff4Term; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgHwTqSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgMotVelDampgCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgQuadHwTqBacklsh; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDampgQuadMotVelBacklsh; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_Dampg, RTE_CONST, RTE_CONST) Rte_Inst_Dampg; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_Dampg, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiCmdBas_Val (0.0F)
# define Rte_InitValue_AssiMechT_Val (0.0F)
# define Rte_InitValue_DampgCmdBas_Val (0.0F)
# define Rte_InitValue_DampgCmdBasDi_Logl (FALSE)
# define Rte_InitValue_DampgCmdOvrl_Val (0.0F)
# define Rte_InitValue_DampgCmdSca_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_MotVelCrf_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Dampg_AssiCmdBas_Val(P2VAR(float32, AUTOMATIC, RTE_DAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Dampg_AssiMechT_Val(P2VAR(float32, AUTOMATIC, RTE_DAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Dampg_DampgCmdBasDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_DAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Dampg_DampgCmdOvrl_Val(P2VAR(float32, AUTOMATIC, RTE_DAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Dampg_DampgCmdSca_Val(P2VAR(float32, AUTOMATIC, RTE_DAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Dampg_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_DAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Dampg_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_DAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Dampg_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_DAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Dampg_DampgCmdBas_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dampg_FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_DAMPG_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_Dampg_DampgHydBasCoeff1_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_Dampg_DampgHydBasCoeff2_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_Dampg_DampgHydBasCoeff3_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_Dampg_DampgHydBasCoeff4_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_Dampg_DampgHydOutpLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_Dampg_DampgMotVelLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_Dampg_DampgQuad13Mplr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_Dampg_DampgQuad24Mplr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_Dampg_DampgQuadHwTqBacklsh_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_Dampg_DampgQuadHwTqLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_Dampg_DampgQuadMotVelBacklsh_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_Dampg_DampgQuadMotVelLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_Dampg_DampgQuadScaLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgHwTqX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgHwTqX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgHwTqY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u1p15_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgHwTqY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgHydAssiLim_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgHydAssiLim_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgHydCoeff1ScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgHydCoeff1ScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgHydCoeff2ScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgHydCoeff2ScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgHydCoeff3ScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgHydCoeff3ScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgHydCoeff4ScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgHydCoeff4ScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u12p4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgMotVelX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u12p4_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgMotVelX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u5p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgMotVelY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgMotVelY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s8p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgTScaX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s8p7_14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgTScaX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgTScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_DampgTScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_SysGlbPrmVehSpdBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Dampg_SysGlbPrmVehSpdBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AssiCmdBas_Val Rte_Read_Dampg_AssiCmdBas_Val
# define Rte_Read_AssiMechT_Val Rte_Read_Dampg_AssiMechT_Val
# define Rte_Read_DampgCmdBasDi_Logl Rte_Read_Dampg_DampgCmdBasDi_Logl
# define Rte_Read_DampgCmdOvrl_Val Rte_Read_Dampg_DampgCmdOvrl_Val
# define Rte_Read_DampgCmdSca_Val Rte_Read_Dampg_DampgCmdSca_Val
# define Rte_Read_HwTq_Val Rte_Read_Dampg_HwTq_Val
# define Rte_Read_MotVelCrf_Val Rte_Read_Dampg_MotVelCrf_Val
# define Rte_Read_VehSpd_Val Rte_Read_Dampg_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_DampgCmdBas_Val Rte_Write_Dampg_DampgCmdBas_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_f32_Oper Rte_Call_Dampg_FltInj_f32_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_DampgHydBasCoeff1_Val Rte_Prm_Dampg_DampgHydBasCoeff1_Val

# define Rte_Prm_DampgHydBasCoeff2_Val Rte_Prm_Dampg_DampgHydBasCoeff2_Val

# define Rte_Prm_DampgHydBasCoeff3_Val Rte_Prm_Dampg_DampgHydBasCoeff3_Val

# define Rte_Prm_DampgHydBasCoeff4_Val Rte_Prm_Dampg_DampgHydBasCoeff4_Val

# define Rte_Prm_DampgHydOutpLim_Val Rte_Prm_Dampg_DampgHydOutpLim_Val

# define Rte_Prm_DampgMotVelLpFilFrq_Val Rte_Prm_Dampg_DampgMotVelLpFilFrq_Val

# define Rte_Prm_DampgQuad13Mplr_Val Rte_Prm_Dampg_DampgQuad13Mplr_Val

# define Rte_Prm_DampgQuad24Mplr_Val Rte_Prm_Dampg_DampgQuad24Mplr_Val

# define Rte_Prm_DampgQuadHwTqBacklsh_Val Rte_Prm_Dampg_DampgQuadHwTqBacklsh_Val

# define Rte_Prm_DampgQuadHwTqLpFilFrq_Val Rte_Prm_Dampg_DampgQuadHwTqLpFilFrq_Val

# define Rte_Prm_DampgQuadMotVelBacklsh_Val Rte_Prm_Dampg_DampgQuadMotVelBacklsh_Val

# define Rte_Prm_DampgQuadMotVelLpFilFrq_Val Rte_Prm_Dampg_DampgQuadMotVelLpFilFrq_Val

# define Rte_Prm_DampgQuadScaLpFilFrq_Val Rte_Prm_Dampg_DampgQuadScaLpFilFrq_Val

# define Rte_Prm_DampgHwTqX_Ary1D Rte_Prm_Dampg_DampgHwTqX_Ary1D

# define Rte_Prm_DampgHwTqY_Ary1D Rte_Prm_Dampg_DampgHwTqY_Ary1D

# define Rte_Prm_DampgHydAssiLim_Ary1D Rte_Prm_Dampg_DampgHydAssiLim_Ary1D

# define Rte_Prm_DampgHydCoeff1ScaY_Ary1D Rte_Prm_Dampg_DampgHydCoeff1ScaY_Ary1D

# define Rte_Prm_DampgHydCoeff2ScaY_Ary1D Rte_Prm_Dampg_DampgHydCoeff2ScaY_Ary1D

# define Rte_Prm_DampgHydCoeff3ScaY_Ary1D Rte_Prm_Dampg_DampgHydCoeff3ScaY_Ary1D

# define Rte_Prm_DampgHydCoeff4ScaY_Ary1D Rte_Prm_Dampg_DampgHydCoeff4ScaY_Ary1D

# define Rte_Prm_DampgMotVelX_Ary2D Rte_Prm_Dampg_DampgMotVelX_Ary2D

# define Rte_Prm_DampgMotVelY_Ary2D Rte_Prm_Dampg_DampgMotVelY_Ary2D

# define Rte_Prm_DampgTScaX_Ary1D Rte_Prm_Dampg_DampgTScaX_Ary1D

# define Rte_Prm_DampgTScaY_Ary1D Rte_Prm_Dampg_DampgTScaY_Ary1D

# define Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D Rte_Prm_Dampg_SysGlbPrmVehSpdBilnrSeln_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PrevHwTqBacklshOutp() (Rte_Inst_Dampg->Pim_PrevHwTqBacklshOutp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevMotVelBacklshOutp() (Rte_Inst_Dampg->Pim_PrevMotVelBacklshOutp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgAssiMechTSca() (Rte_Inst_Dampg->Pim_dDampgAssiMechTSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgCoeff1Term() (Rte_Inst_Dampg->Pim_dDampgCoeff1Term) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgCoeff2Term() (Rte_Inst_Dampg->Pim_dDampgCoeff2Term) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgCoeff3Term() (Rte_Inst_Dampg->Pim_dDampgCoeff3Term) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgCoeff4Term() (Rte_Inst_Dampg->Pim_dDampgCoeff4Term) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgHwTqSca() (Rte_Inst_Dampg->Pim_dDampgHwTqSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgMotVelDampgCmd() (Rte_Inst_Dampg->Pim_dDampgMotVelDampgCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgQuadHwTqBacklsh() (Rte_Inst_Dampg->Pim_dDampgQuadHwTqBacklsh) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDampgQuadMotVelBacklsh() (Rte_Inst_Dampg->Pim_dDampgQuadMotVelBacklsh) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotVelDampgLpFil() (Rte_Inst_Dampg->Pim_MotVelDampgLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_QuadDampgHwTqLpFil() (Rte_Inst_Dampg->Pim_QuadDampgHwTqLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_QuadDampgMotVelLpFil() (Rte_Inst_Dampg->Pim_QuadDampgMotVelLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_QuadDampgScaLpFil() (Rte_Inst_Dampg->Pim_QuadDampgScaLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevHwTqBacklshOutp(void)
 *   float32 *Rte_Pim_PrevMotVelBacklshOutp(void)
 *   float32 *Rte_Pim_dDampgAssiMechTSca(void)
 *   float32 *Rte_Pim_dDampgCoeff1Term(void)
 *   float32 *Rte_Pim_dDampgCoeff2Term(void)
 *   float32 *Rte_Pim_dDampgCoeff3Term(void)
 *   float32 *Rte_Pim_dDampgCoeff4Term(void)
 *   float32 *Rte_Pim_dDampgHwTqSca(void)
 *   float32 *Rte_Pim_dDampgMotVelDampgCmd(void)
 *   float32 *Rte_Pim_dDampgQuadHwTqBacklsh(void)
 *   float32 *Rte_Pim_dDampgQuadMotVelBacklsh(void)
 *   FilLpRec1 *Rte_Pim_MotVelDampgLpFil(void)
 *   FilLpRec1 *Rte_Pim_QuadDampgHwTqLpFil(void)
 *   FilLpRec1 *Rte_Pim_QuadDampgMotVelLpFil(void)
 *   FilLpRec1 *Rte_Pim_QuadDampgScaLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_DampgHydBasCoeff1_Val(void)
 *   float32 Rte_Prm_DampgHydBasCoeff2_Val(void)
 *   float32 Rte_Prm_DampgHydBasCoeff3_Val(void)
 *   float32 Rte_Prm_DampgHydBasCoeff4_Val(void)
 *   float32 Rte_Prm_DampgHydOutpLim_Val(void)
 *   float32 Rte_Prm_DampgMotVelLpFilFrq_Val(void)
 *   float32 Rte_Prm_DampgQuad13Mplr_Val(void)
 *   float32 Rte_Prm_DampgQuad24Mplr_Val(void)
 *   float32 Rte_Prm_DampgQuadHwTqBacklsh_Val(void)
 *   float32 Rte_Prm_DampgQuadHwTqLpFilFrq_Val(void)
 *   float32 Rte_Prm_DampgQuadMotVelBacklsh_Val(void)
 *   float32 Rte_Prm_DampgQuadMotVelLpFilFrq_Val(void)
 *   float32 Rte_Prm_DampgQuadScaLpFilFrq_Val(void)
 *   u8p8 *Rte_Prm_DampgHwTqX_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_2
 *   u1p15 *Rte_Prm_DampgHwTqY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_2
 *   u4p12 *Rte_Prm_DampgHydAssiLim_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u4p12 *Rte_Prm_DampgHydCoeff1ScaY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u4p12 *Rte_Prm_DampgHydCoeff2ScaY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u4p12 *Rte_Prm_DampgHydCoeff3ScaY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u4p12 *Rte_Prm_DampgHydCoeff4ScaY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u12p4 *Rte_Prm_DampgMotVelX_Ary2D(void)
 *     Returnvalue: u12p4* is of type Ary2D_u12p4_12_13
 *   u5p11 *Rte_Prm_DampgMotVelY_Ary2D(void)
 *     Returnvalue: u5p11* is of type Ary2D_u5p11_12_13
 *   s8p7 *Rte_Prm_DampgTScaX_Ary1D(void)
 *     Returnvalue: s8p7* is of type Ary1D_s8p7_14
 *   u4p12 *Rte_Prm_DampgTScaY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_14
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *
 *********************************************************************************************************************/


# define Dampg_START_SEC_CODE
# include "Dampg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: DampgInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DampgInit1 DampgInit1
FUNC(void, Dampg_CODE) DampgInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DampgPer1
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
 *   Std_ReturnType Rte_Read_AssiMechT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DampgCmdBasDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DampgCmdOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DampgCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DampgCmdBas_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DampgPer1 DampgPer1
FUNC(void, Dampg_CODE) DampgPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define Dampg_STOP_SEC_CODE
# include "Dampg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DAMPG_H */

#include "Rte_Stubs.h"
