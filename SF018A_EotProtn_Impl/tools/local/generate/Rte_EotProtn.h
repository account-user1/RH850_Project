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
 *          File:  Rte_EotProtn.h
 *        Config:  C:/_Synergy_Projects/Working/SF018A_EotProtn_Impl/tools/Component.dpa
 *     SW-C Type:  EotProtn
 *  Generated at:  Tue Jul 18 15:43:52 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <EotProtn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_EOTPROTN_H
# define _RTE_EOTPROTN_H

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

# include "Rte_EotProtn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_EotProtn
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EotAssiScaLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_NewSoftEndStopSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevEotAssiSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevEotDampg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevImpctPosn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevRackTrvlLimrEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevRackTrvlLimrInin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevSoftEndStopSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnDampg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnDetd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnEntrGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnEotAssiSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnEotGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnExitGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnLimPosn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnRackTrvlLimrDi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_EotProtn, RTE_CONST, RTE_CONST) Rte_Inst_EotProtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_EotProtn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_EotActvCmd_Val (0.0F)
# define Rte_InitValue_EotAssiSca_Val (0.0F)
# define Rte_InitValue_EotDampgCmd_Val (0.0F)
# define Rte_InitValue_EotMotTqLim_Val (0.0F)
# define Rte_InitValue_EotProtnDi_Logl (FALSE)
# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAgAuthy_Val (0.0F)
# define Rte_InitValue_HwAgCcwDetd_Logl (FALSE)
# define Rte_InitValue_HwAgCwDetd_Logl (FALSE)
# define Rte_InitValue_HwAgEotCcw_Val (-360.0F)
# define Rte_InitValue_HwAgEotCw_Val (360.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_MotVelCrf_Val (0.0F)
# define Rte_InitValue_SysMotTqCmdSca_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtn_EotProtnDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_EOTPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtn_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_EOTPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtn_HwAgAuthy_Val(P2VAR(float32, AUTOMATIC, RTE_EOTPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtn_HwAgCcwDetd_Logl(P2VAR(boolean, AUTOMATIC, RTE_EOTPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtn_HwAgCwDetd_Logl(P2VAR(boolean, AUTOMATIC, RTE_EOTPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtn_HwAgEotCcw_Val(P2VAR(float32, AUTOMATIC, RTE_EOTPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtn_HwAgEotCw_Val(P2VAR(float32, AUTOMATIC, RTE_EOTPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtn_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_EOTPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtn_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_EOTPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtn_SysMotTqCmdSca_Val(P2VAR(float32, AUTOMATIC, RTE_EOTPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtn_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_EOTPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_EotProtn_EotActvCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_EotProtn_EotAssiSca_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_EotProtn_EotDampgCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_EotProtn_EotMotTqLim_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnActvRegnBypMaxThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnDampgSlew_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnDeltaTqThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnDftPosn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnEntrGainAuthyThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnEntrStLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnExitStLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnHwAgGain_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnHwAgMax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnHwAgMin_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnHwTqLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnMotSpdIncptSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnMotVelGain_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnPosnRampStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnRackTrvlLimrAuthyThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnRackTrvlLimrAuthyThdLimd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnRackTrvlLimrRng_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnRackTrvlLimrRngLimd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnRackTrvlLimrVehSpdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnSoftEndStopAuthyThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtn_EotProtnSoftEndStopVehSpdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_EotProtn_EotProtnRackTrvlLimrEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_EotProtn_EotProtnRunEotVelImpctAndSoftEndStop_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_EotProtn_EotProtnSoftEndStopEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnDampgVehSpdTbl_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnDampgVehSpdTbl_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnEntrGainVehSpdTbl_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnEntrGainVehSpdTbl_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u12p4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnEntrGainX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u12p4_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnEntrGainX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnEntrGainY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnEntrGainY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u0p16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnExitDampgY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u0p16_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnExitDampgY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u12p4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnHwDegDampgX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u12p4_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnHwDegDampgX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnHwTqScaX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnHwTqScaX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnLoAuthyEntrGainY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnLoAuthyEntrGainY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u12p4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnMotSpdIncptX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u12p4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnMotSpdIncptX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u12p4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnMotSpdIncptY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u12p4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnMotSpdIncptY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u0p16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnNormDampgY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u0p16_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtn_EotProtnNormDampgY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EotProtnDi_Logl Rte_Read_EotProtn_EotProtnDi_Logl
# define Rte_Read_HwAg_Val Rte_Read_EotProtn_HwAg_Val
# define Rte_Read_HwAgAuthy_Val Rte_Read_EotProtn_HwAgAuthy_Val
# define Rte_Read_HwAgCcwDetd_Logl Rte_Read_EotProtn_HwAgCcwDetd_Logl
# define Rte_Read_HwAgCwDetd_Logl Rte_Read_EotProtn_HwAgCwDetd_Logl
# define Rte_Read_HwAgEotCcw_Val Rte_Read_EotProtn_HwAgEotCcw_Val
# define Rte_Read_HwAgEotCw_Val Rte_Read_EotProtn_HwAgEotCw_Val
# define Rte_Read_HwTq_Val Rte_Read_EotProtn_HwTq_Val
# define Rte_Read_MotVelCrf_Val Rte_Read_EotProtn_MotVelCrf_Val
# define Rte_Read_SysMotTqCmdSca_Val Rte_Read_EotProtn_SysMotTqCmdSca_Val
# define Rte_Read_VehSpd_Val Rte_Read_EotProtn_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_EotActvCmd_Val Rte_Write_EotProtn_EotActvCmd_Val
# define Rte_Write_EotAssiSca_Val Rte_Write_EotProtn_EotAssiSca_Val
# define Rte_Write_EotDampgCmd_Val Rte_Write_EotProtn_EotDampgCmd_Val
# define Rte_Write_EotMotTqLim_Val Rte_Write_EotProtn_EotMotTqLim_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_EotProtnActvRegnBypMaxThd_Val Rte_Prm_EotProtn_EotProtnActvRegnBypMaxThd_Val

# define Rte_Prm_EotProtnDampgSlew_Val Rte_Prm_EotProtn_EotProtnDampgSlew_Val

# define Rte_Prm_EotProtnDeltaTqThd_Val Rte_Prm_EotProtn_EotProtnDeltaTqThd_Val

# define Rte_Prm_EotProtnDftPosn_Val Rte_Prm_EotProtn_EotProtnDftPosn_Val

# define Rte_Prm_EotProtnEntrGainAuthyThd_Val Rte_Prm_EotProtn_EotProtnEntrGainAuthyThd_Val

# define Rte_Prm_EotProtnEntrStLpFilFrq_Val Rte_Prm_EotProtn_EotProtnEntrStLpFilFrq_Val

# define Rte_Prm_EotProtnExitStLpFilFrq_Val Rte_Prm_EotProtn_EotProtnExitStLpFilFrq_Val

# define Rte_Prm_EotProtnHwAgGain_Val Rte_Prm_EotProtn_EotProtnHwAgGain_Val

# define Rte_Prm_EotProtnHwAgMax_Val Rte_Prm_EotProtn_EotProtnHwAgMax_Val

# define Rte_Prm_EotProtnHwAgMin_Val Rte_Prm_EotProtn_EotProtnHwAgMin_Val

# define Rte_Prm_EotProtnHwTqLpFilFrq_Val Rte_Prm_EotProtn_EotProtnHwTqLpFilFrq_Val

# define Rte_Prm_EotProtnMotSpdIncptSca_Val Rte_Prm_EotProtn_EotProtnMotSpdIncptSca_Val

# define Rte_Prm_EotProtnMotVelGain_Val Rte_Prm_EotProtn_EotProtnMotVelGain_Val

# define Rte_Prm_EotProtnPosnRampStep_Val Rte_Prm_EotProtn_EotProtnPosnRampStep_Val

# define Rte_Prm_EotProtnRackTrvlLimrAuthyThd_Val Rte_Prm_EotProtn_EotProtnRackTrvlLimrAuthyThd_Val

# define Rte_Prm_EotProtnRackTrvlLimrAuthyThdLimd_Val Rte_Prm_EotProtn_EotProtnRackTrvlLimrAuthyThdLimd_Val

# define Rte_Prm_EotProtnRackTrvlLimrRng_Val Rte_Prm_EotProtn_EotProtnRackTrvlLimrRng_Val

# define Rte_Prm_EotProtnRackTrvlLimrRngLimd_Val Rte_Prm_EotProtn_EotProtnRackTrvlLimrRngLimd_Val

# define Rte_Prm_EotProtnRackTrvlLimrVehSpdThd_Val Rte_Prm_EotProtn_EotProtnRackTrvlLimrVehSpdThd_Val

# define Rte_Prm_EotProtnSoftEndStopAuthyThd_Val Rte_Prm_EotProtn_EotProtnSoftEndStopAuthyThd_Val

# define Rte_Prm_EotProtnSoftEndStopVehSpdThd_Val Rte_Prm_EotProtn_EotProtnSoftEndStopVehSpdThd_Val

# define Rte_Prm_EotProtnRackTrvlLimrEna_Logl Rte_Prm_EotProtn_EotProtnRackTrvlLimrEna_Logl

# define Rte_Prm_EotProtnRunEotVelImpctAndSoftEndStop_Logl Rte_Prm_EotProtn_EotProtnRunEotVelImpctAndSoftEndStop_Logl

# define Rte_Prm_EotProtnSoftEndStopEna_Logl Rte_Prm_EotProtn_EotProtnSoftEndStopEna_Logl

# define Rte_Prm_EotProtnDampgVehSpdTbl_Ary1D Rte_Prm_EotProtn_EotProtnDampgVehSpdTbl_Ary1D

# define Rte_Prm_EotProtnEntrGainVehSpdTbl_Ary1D Rte_Prm_EotProtn_EotProtnEntrGainVehSpdTbl_Ary1D

# define Rte_Prm_EotProtnEntrGainX_Ary2D Rte_Prm_EotProtn_EotProtnEntrGainX_Ary2D

# define Rte_Prm_EotProtnEntrGainY_Ary2D Rte_Prm_EotProtn_EotProtnEntrGainY_Ary2D

# define Rte_Prm_EotProtnExitDampgY_Ary2D Rte_Prm_EotProtn_EotProtnExitDampgY_Ary2D

# define Rte_Prm_EotProtnHwDegDampgX_Ary2D Rte_Prm_EotProtn_EotProtnHwDegDampgX_Ary2D

# define Rte_Prm_EotProtnHwTqScaX_Ary1D Rte_Prm_EotProtn_EotProtnHwTqScaX_Ary1D

# define Rte_Prm_EotProtnLoAuthyEntrGainY_Ary2D Rte_Prm_EotProtn_EotProtnLoAuthyEntrGainY_Ary2D

# define Rte_Prm_EotProtnMotSpdIncptX_Ary1D Rte_Prm_EotProtn_EotProtnMotSpdIncptX_Ary1D

# define Rte_Prm_EotProtnMotSpdIncptY_Ary1D Rte_Prm_EotProtn_EotProtnMotSpdIncptY_Ary1D

# define Rte_Prm_EotProtnNormDampgY_Ary2D Rte_Prm_EotProtn_EotProtnNormDampgY_Ary2D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PrevEotAssiSca() (Rte_Inst_EotProtn->Pim_PrevEotAssiSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevEotDampg() (Rte_Inst_EotProtn->Pim_PrevEotDampg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevImpctPosn() (Rte_Inst_EotProtn->Pim_PrevImpctPosn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnDampg() (Rte_Inst_EotProtn->Pim_dEotProtnDampg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnEntrGain() (Rte_Inst_EotProtn->Pim_dEotProtnEntrGain) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnEotAssiSca() (Rte_Inst_EotProtn->Pim_dEotProtnEotAssiSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnEotGain() (Rte_Inst_EotProtn->Pim_dEotProtnEotGain) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnExitGain() (Rte_Inst_EotProtn->Pim_dEotProtnExitGain) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnLimPosn() (Rte_Inst_EotProtn->Pim_dEotProtnLimPosn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_NewSoftEndStopSt() (Rte_Inst_EotProtn->Pim_NewSoftEndStopSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevSoftEndStopSt() (Rte_Inst_EotProtn->Pim_PrevSoftEndStopSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevRackTrvlLimrEna() (Rte_Inst_EotProtn->Pim_PrevRackTrvlLimrEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevRackTrvlLimrInin() (Rte_Inst_EotProtn->Pim_PrevRackTrvlLimrInin) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnDetd() (Rte_Inst_EotProtn->Pim_dEotProtnDetd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnRackTrvlLimrDi() (Rte_Inst_EotProtn->Pim_dEotProtnRackTrvlLimrDi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_EotAssiScaLpFil() (Rte_Inst_EotProtn->Pim_EotAssiScaLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqLpFil() (Rte_Inst_EotProtn->Pim_HwTqLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevEotAssiSca(void)
 *   float32 *Rte_Pim_PrevEotDampg(void)
 *   float32 *Rte_Pim_PrevImpctPosn(void)
 *   float32 *Rte_Pim_dEotProtnDampg(void)
 *   float32 *Rte_Pim_dEotProtnEntrGain(void)
 *   float32 *Rte_Pim_dEotProtnEotAssiSca(void)
 *   float32 *Rte_Pim_dEotProtnEotGain(void)
 *   float32 *Rte_Pim_dEotProtnExitGain(void)
 *   float32 *Rte_Pim_dEotProtnLimPosn(void)
 *   uint8 *Rte_Pim_NewSoftEndStopSt(void)
 *   uint8 *Rte_Pim_PrevSoftEndStopSt(void)
 *   boolean *Rte_Pim_PrevRackTrvlLimrEna(void)
 *   boolean *Rte_Pim_PrevRackTrvlLimrInin(void)
 *   boolean *Rte_Pim_dEotProtnDetd(void)
 *   boolean *Rte_Pim_dEotProtnRackTrvlLimrDi(void)
 *   FilLpRec1 *Rte_Pim_EotAssiScaLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_EotProtnActvRegnBypMaxThd_Val(void)
 *   float32 Rte_Prm_EotProtnDampgSlew_Val(void)
 *   float32 Rte_Prm_EotProtnDeltaTqThd_Val(void)
 *   float32 Rte_Prm_EotProtnDftPosn_Val(void)
 *   float32 Rte_Prm_EotProtnEntrGainAuthyThd_Val(void)
 *   float32 Rte_Prm_EotProtnEntrStLpFilFrq_Val(void)
 *   float32 Rte_Prm_EotProtnExitStLpFilFrq_Val(void)
 *   float32 Rte_Prm_EotProtnHwAgGain_Val(void)
 *   float32 Rte_Prm_EotProtnHwAgMax_Val(void)
 *   float32 Rte_Prm_EotProtnHwAgMin_Val(void)
 *   float32 Rte_Prm_EotProtnHwTqLpFilFrq_Val(void)
 *   float32 Rte_Prm_EotProtnMotSpdIncptSca_Val(void)
 *   float32 Rte_Prm_EotProtnMotVelGain_Val(void)
 *   float32 Rte_Prm_EotProtnPosnRampStep_Val(void)
 *   float32 Rte_Prm_EotProtnRackTrvlLimrAuthyThd_Val(void)
 *   float32 Rte_Prm_EotProtnRackTrvlLimrAuthyThdLimd_Val(void)
 *   float32 Rte_Prm_EotProtnRackTrvlLimrRng_Val(void)
 *   float32 Rte_Prm_EotProtnRackTrvlLimrRngLimd_Val(void)
 *   float32 Rte_Prm_EotProtnRackTrvlLimrVehSpdThd_Val(void)
 *   float32 Rte_Prm_EotProtnSoftEndStopAuthyThd_Val(void)
 *   float32 Rte_Prm_EotProtnSoftEndStopVehSpdThd_Val(void)
 *   boolean Rte_Prm_EotProtnRackTrvlLimrEna_Logl(void)
 *   boolean Rte_Prm_EotProtnRunEotVelImpctAndSoftEndStop_Logl(void)
 *   boolean Rte_Prm_EotProtnSoftEndStopEna_Logl(void)
 *   u9p7 *Rte_Prm_EotProtnDampgVehSpdTbl_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *   u9p7 *Rte_Prm_EotProtnEntrGainVehSpdTbl_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_5
 *   u12p4 *Rte_Prm_EotProtnEntrGainX_Ary2D(void)
 *     Returnvalue: u12p4* is of type Ary2D_u12p4_5_4
 *   u1p15 *Rte_Prm_EotProtnEntrGainY_Ary2D(void)
 *     Returnvalue: u1p15* is of type Ary2D_u1p15_5_4
 *   u0p16 *Rte_Prm_EotProtnExitDampgY_Ary2D(void)
 *     Returnvalue: u0p16* is of type Ary2D_u0p16_4_2
 *   u12p4 *Rte_Prm_EotProtnHwDegDampgX_Ary2D(void)
 *     Returnvalue: u12p4* is of type Ary2D_u12p4_4_2
 *   u4p12 *Rte_Prm_EotProtnHwTqScaX_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_2
 *   u1p15 *Rte_Prm_EotProtnLoAuthyEntrGainY_Ary2D(void)
 *     Returnvalue: u1p15* is of type Ary2D_u1p15_5_4
 *   u12p4 *Rte_Prm_EotProtnMotSpdIncptX_Ary1D(void)
 *     Returnvalue: u12p4* is of type Ary1D_u12p4_2
 *   u12p4 *Rte_Prm_EotProtnMotSpdIncptY_Ary1D(void)
 *     Returnvalue: u12p4* is of type Ary1D_u12p4_2
 *   u0p16 *Rte_Prm_EotProtnNormDampgY_Ary2D(void)
 *     Returnvalue: u0p16* is of type Ary2D_u0p16_4_2
 *
 *********************************************************************************************************************/


# define EotProtn_START_SEC_CODE
# include "EotProtn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: EotProtnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_EotProtnInit1 EotProtnInit1
FUNC(void, EotProtn_CODE) EotProtnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: EotProtnPer1
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
 *   Std_ReturnType Rte_Read_EotProtnDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAuthy_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgCcwDetd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgCwDetd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgEotCcw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_EotActvCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_EotAssiSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_EotDampgCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_EotMotTqLim_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_EotProtnPer1 EotProtnPer1
FUNC(void, EotProtn_CODE) EotProtnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define EotProtn_STOP_SEC_CODE
# include "EotProtn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_EOTPROTN_H */

#include "Rte_Stubs.h"
