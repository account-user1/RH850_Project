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
 *          File:  Rte_PwrLimr.h
 *        Config:  C:/_Synergy_Projects/Working/ses_dev_ea4/SF019B_PwrLimr_Impl/tools/Component.dpa
 *     SW-C Type:  PwrLimr
 *  Generated at:  Mon Oct  9 09:11:58 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <PwrLimr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PWRLIMR_H
# define _RTE_PWRLIMR_H

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

# include "Rte_PwrLimr_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_PwrLimr
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BrdgVltgRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LimdAssiLoVltgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_OutpVelOffsRateLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RefTmrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqLimLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPwrLimrFildMotVel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPwrLimrLimDif; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPwrLimrMinStdOperLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPwrLimrMotEnvlpSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPwrLimrMotTqCmdIvtrLoaSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPwrLimrOutpVelOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPwrLimrSpdAdj; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPwrLimrTLimMaxCurr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPwrLimrTqEnvlpLim1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPwrLimrTqEnvlpLim4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPwrLimrTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPwrLimrTqLim1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPwrLimrTqLim4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_PwrLimr, RTE_CONST, RTE_CONST) Rte_Inst_PwrLimr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_PwrLimr, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AltFltActv_Logl (FALSE)
# define Rte_InitValue_BrdgVltg_Val (6.0F)
# define Rte_InitValue_DualEcuFltMtgtnSca_Val (0.5F)
# define Rte_InitValue_MotAndThermProtnLoaMod_Val (0U)
# define Rte_InitValue_MotBackEmfConEstimd_Val (0.025F)
# define Rte_InitValue_MotTqCmdMrf_Val (0.0F)
# define Rte_InitValue_MotTqCmdPwrLimd_Val (0.0F)
# define Rte_InitValue_MotVelMrf_Val (0.0F)
# define Rte_InitValue_PwrLimrRednFac_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrLimr_AltFltActv_Logl(P2VAR(boolean, AUTOMATIC, RTE_PWRLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrLimr_BrdgVltg_Val(P2VAR(float32, AUTOMATIC, RTE_PWRLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrLimr_DualEcuFltMtgtnSca_Val(P2VAR(float32, AUTOMATIC, RTE_PWRLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrLimr_MotAndThermProtnLoaMod_Val(P2VAR(uint8, AUTOMATIC, RTE_PWRLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrLimr_MotBackEmfConEstimd_Val(P2VAR(float32, AUTOMATIC, RTE_PWRLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrLimr_MotTqCmdMrf_Val(P2VAR(float32, AUTOMATIC, RTE_PWRLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrLimr_MotVelMrf_Val(P2VAR(float32, AUTOMATIC, RTE_PWRLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PwrLimr_MotTqCmdPwrLimd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PwrLimr_PwrLimrRednFac_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PwrLimr_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_PWRLIMR_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PwrLimr_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_PWRLIMR_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PwrLimr_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrAssiRednLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrBackEmfConStdT_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrBrdgVltgAdjSlew_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrBrdgVltgAltFltAdj_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrFilAssiRednThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrLoVoltAssiRcvrThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrMotVelLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrSpdAdjSlewDec_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrSpdAdjSlewInc_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrLoVoltAssiRcvrTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrSpdAdjSlewEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s11p4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrMotEnvlpX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s11p4_14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrMotEnvlpX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u5p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrMotEnvlpY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u5p11_14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrMotEnvlpY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u11p5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrStdOperMotEnvlpX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u11p5_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrStdOperMotEnvlpX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrStdOperMotEnvlpY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrStdOperMotEnvlpY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u5p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrVltgDptMotVelOffsX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u5p11_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrVltgDptMotVelOffsX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u11p5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrVltgDptMotVelOffsY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u11p5_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PwrLimr_PwrLimrVltgDptMotVelOffsY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, RTE_CODE) Rte_IrvWrite_PwrLimr_PwrLimrPer1_MinStdOperLim(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_PwrLimr_PwrLimrPer1_MotEnvlpSpd(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_PwrLimr_PwrLimrPer1_TqEnvlpLim1(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_PwrLimr_PwrLimrPer2_MinStdOperLim(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_PwrLimr_PwrLimrPer2_MotEnvlpSpd(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_PwrLimr_PwrLimrPer2_TqEnvlpLim1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AltFltActv_Logl Rte_Read_PwrLimr_AltFltActv_Logl
# define Rte_Read_BrdgVltg_Val Rte_Read_PwrLimr_BrdgVltg_Val
# define Rte_Read_DualEcuFltMtgtnSca_Val Rte_Read_PwrLimr_DualEcuFltMtgtnSca_Val
# define Rte_Read_MotAndThermProtnLoaMod_Val Rte_Read_PwrLimr_MotAndThermProtnLoaMod_Val
# define Rte_Read_MotBackEmfConEstimd_Val Rte_Read_PwrLimr_MotBackEmfConEstimd_Val
# define Rte_Read_MotTqCmdMrf_Val Rte_Read_PwrLimr_MotTqCmdMrf_Val
# define Rte_Read_MotVelMrf_Val Rte_Read_PwrLimr_MotVelMrf_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotTqCmdPwrLimd_Val Rte_Write_PwrLimr_MotTqCmdPwrLimd_Val
# define Rte_Write_PwrLimrRednFac_Val Rte_Write_PwrLimr_PwrLimrRednFac_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_PwrLimr_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_PwrLimr_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_PwrLimr_SetNtcSts_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_PwrLimrPer1_MinStdOperLim(data) \
  Rte_IrvWrite_PwrLimr_PwrLimrPer1_MinStdOperLim(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_PwrLimrPer1_MotEnvlpSpd(data) \
  Rte_IrvWrite_PwrLimr_PwrLimrPer1_MotEnvlpSpd(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_PwrLimrPer1_TqEnvlpLim1(data) \
  Rte_IrvWrite_PwrLimr_PwrLimrPer1_TqEnvlpLim1(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_PwrLimrPer2_MinStdOperLim() \
  Rte_IrvRead_PwrLimr_PwrLimrPer2_MinStdOperLim()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_PwrLimrPer2_MotEnvlpSpd() \
  Rte_IrvRead_PwrLimr_PwrLimrPer2_MotEnvlpSpd()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_PwrLimrPer2_TqEnvlpLim1() \
  Rte_IrvRead_PwrLimr_PwrLimrPer2_TqEnvlpLim1()
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_PwrLimrAssiRednLpFilFrq_Val Rte_Prm_PwrLimr_PwrLimrAssiRednLpFilFrq_Val

# define Rte_Prm_PwrLimrBackEmfConStdT_Val Rte_Prm_PwrLimr_PwrLimrBackEmfConStdT_Val

# define Rte_Prm_PwrLimrBrdgVltgAdjSlew_Val Rte_Prm_PwrLimr_PwrLimrBrdgVltgAdjSlew_Val

# define Rte_Prm_PwrLimrBrdgVltgAltFltAdj_Val Rte_Prm_PwrLimr_PwrLimrBrdgVltgAltFltAdj_Val

# define Rte_Prm_PwrLimrFilAssiRednThd_Val Rte_Prm_PwrLimr_PwrLimrFilAssiRednThd_Val

# define Rte_Prm_PwrLimrLoVoltAssiRcvrThd_Val Rte_Prm_PwrLimr_PwrLimrLoVoltAssiRcvrThd_Val

# define Rte_Prm_PwrLimrMotVelLpFilFrq_Val Rte_Prm_PwrLimr_PwrLimrMotVelLpFilFrq_Val

# define Rte_Prm_PwrLimrSpdAdjSlewDec_Val Rte_Prm_PwrLimr_PwrLimrSpdAdjSlewDec_Val

# define Rte_Prm_PwrLimrSpdAdjSlewInc_Val Rte_Prm_PwrLimr_PwrLimrSpdAdjSlewInc_Val

# define Rte_Prm_PwrLimrLoVoltAssiRcvrTi_Val Rte_Prm_PwrLimr_PwrLimrLoVoltAssiRcvrTi_Val

# define Rte_Prm_PwrLimrSpdAdjSlewEna_Logl Rte_Prm_PwrLimr_PwrLimrSpdAdjSlewEna_Logl

# define Rte_Prm_PwrLimrMotEnvlpX_Ary1D Rte_Prm_PwrLimr_PwrLimrMotEnvlpX_Ary1D

# define Rte_Prm_PwrLimrMotEnvlpY_Ary1D Rte_Prm_PwrLimr_PwrLimrMotEnvlpY_Ary1D

# define Rte_Prm_PwrLimrStdOperMotEnvlpX_Ary1D Rte_Prm_PwrLimr_PwrLimrStdOperMotEnvlpX_Ary1D

# define Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D Rte_Prm_PwrLimr_PwrLimrStdOperMotEnvlpY_Ary1D

# define Rte_Prm_PwrLimrVltgDptMotVelOffsX_Ary1D Rte_Prm_PwrLimr_PwrLimrVltgDptMotVelOffsX_Ary1D

# define Rte_Prm_PwrLimrVltgDptMotVelOffsY_Ary1D Rte_Prm_PwrLimr_PwrLimrVltgDptMotVelOffsY_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_BrdgVltgRateLim() (Rte_Inst_PwrLimr->Pim_BrdgVltgRateLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_OutpVelOffsRateLimd() (Rte_Inst_PwrLimr->Pim_OutpVelOffsRateLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPwrLimrFildMotVel() (Rte_Inst_PwrLimr->Pim_dPwrLimrFildMotVel) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPwrLimrLimDif() (Rte_Inst_PwrLimr->Pim_dPwrLimrLimDif) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPwrLimrMinStdOperLim() (Rte_Inst_PwrLimr->Pim_dPwrLimrMinStdOperLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPwrLimrMotEnvlpSpd() (Rte_Inst_PwrLimr->Pim_dPwrLimrMotEnvlpSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPwrLimrMotTqCmdIvtrLoaSca() (Rte_Inst_PwrLimr->Pim_dPwrLimrMotTqCmdIvtrLoaSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPwrLimrOutpVelOffs() (Rte_Inst_PwrLimr->Pim_dPwrLimrOutpVelOffs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPwrLimrSpdAdj() (Rte_Inst_PwrLimr->Pim_dPwrLimrSpdAdj) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPwrLimrTLimMaxCurr() (Rte_Inst_PwrLimr->Pim_dPwrLimrTLimMaxCurr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPwrLimrTqEnvlpLim1() (Rte_Inst_PwrLimr->Pim_dPwrLimrTqEnvlpLim1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPwrLimrTqEnvlpLim4() (Rte_Inst_PwrLimr->Pim_dPwrLimrTqEnvlpLim4) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPwrLimrTqLim() (Rte_Inst_PwrLimr->Pim_dPwrLimrTqLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPwrLimrTqLim1() (Rte_Inst_PwrLimr->Pim_dPwrLimrTqLim1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPwrLimrTqLim4() (Rte_Inst_PwrLimr->Pim_dPwrLimrTqLim4) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RefTmr() (Rte_Inst_PwrLimr->Pim_RefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RefTmrPrev() (Rte_Inst_PwrLimr->Pim_RefTmrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LimdAssiLoVltgPrev() (Rte_Inst_PwrLimr->Pim_LimdAssiLoVltgPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotVelLpFil() (Rte_Inst_PwrLimr->Pim_MotVelLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqLimLpFil() (Rte_Inst_PwrLimr->Pim_TqLimLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_BrdgVltgRateLim(void)
 *   float32 *Rte_Pim_OutpVelOffsRateLimd(void)
 *   float32 *Rte_Pim_dPwrLimrFildMotVel(void)
 *   float32 *Rte_Pim_dPwrLimrLimDif(void)
 *   float32 *Rte_Pim_dPwrLimrMinStdOperLim(void)
 *   float32 *Rte_Pim_dPwrLimrMotEnvlpSpd(void)
 *   float32 *Rte_Pim_dPwrLimrMotTqCmdIvtrLoaSca(void)
 *   float32 *Rte_Pim_dPwrLimrOutpVelOffs(void)
 *   float32 *Rte_Pim_dPwrLimrSpdAdj(void)
 *   float32 *Rte_Pim_dPwrLimrTLimMaxCurr(void)
 *   float32 *Rte_Pim_dPwrLimrTqEnvlpLim1(void)
 *   float32 *Rte_Pim_dPwrLimrTqEnvlpLim4(void)
 *   float32 *Rte_Pim_dPwrLimrTqLim(void)
 *   float32 *Rte_Pim_dPwrLimrTqLim1(void)
 *   float32 *Rte_Pim_dPwrLimrTqLim4(void)
 *   uint32 *Rte_Pim_RefTmr(void)
 *   uint32 *Rte_Pim_RefTmrPrev(void)
 *   boolean *Rte_Pim_LimdAssiLoVltgPrev(void)
 *   FilLpRec1 *Rte_Pim_MotVelLpFil(void)
 *   FilLpRec1 *Rte_Pim_TqLimLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_PwrLimrAssiRednLpFilFrq_Val(void)
 *   float32 Rte_Prm_PwrLimrBackEmfConStdT_Val(void)
 *   float32 Rte_Prm_PwrLimrBrdgVltgAdjSlew_Val(void)
 *   float32 Rte_Prm_PwrLimrBrdgVltgAltFltAdj_Val(void)
 *   float32 Rte_Prm_PwrLimrFilAssiRednThd_Val(void)
 *   float32 Rte_Prm_PwrLimrLoVoltAssiRcvrThd_Val(void)
 *   float32 Rte_Prm_PwrLimrMotVelLpFilFrq_Val(void)
 *   float32 Rte_Prm_PwrLimrSpdAdjSlewDec_Val(void)
 *   float32 Rte_Prm_PwrLimrSpdAdjSlewInc_Val(void)
 *   uint16 Rte_Prm_PwrLimrLoVoltAssiRcvrTi_Val(void)
 *   boolean Rte_Prm_PwrLimrSpdAdjSlewEna_Logl(void)
 *   s11p4 *Rte_Prm_PwrLimrMotEnvlpX_Ary1D(void)
 *     Returnvalue: s11p4* is of type Ary1D_s11p4_14
 *   u5p11 *Rte_Prm_PwrLimrMotEnvlpY_Ary1D(void)
 *     Returnvalue: u5p11* is of type Ary1D_u5p11_14
 *   u11p5 *Rte_Prm_PwrLimrStdOperMotEnvlpX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_6
 *   u4p12 *Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_6
 *   u5p11 *Rte_Prm_PwrLimrVltgDptMotVelOffsX_Ary1D(void)
 *     Returnvalue: u5p11* is of type Ary1D_u5p11_10
 *   u11p5 *Rte_Prm_PwrLimrVltgDptMotVelOffsY_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_10
 *
 *********************************************************************************************************************/


# define PwrLimr_START_SEC_CODE
# include "PwrLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrLimrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PwrLimrInit1 PwrLimrInit1
FUNC(void, PwrLimr_CODE) PwrLimrInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrLimrPer1
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
 *   Std_ReturnType Rte_Read_AltFltActv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DualEcuFltMtgtnSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotBackEmfConEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdMrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotTqCmdPwrLimd_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_PwrLimrPer1_MinStdOperLim(float32 data)
 *   void Rte_IrvWrite_PwrLimrPer1_MotEnvlpSpd(float32 data)
 *   void Rte_IrvWrite_PwrLimrPer1_TqEnvlpLim1(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PwrLimrPer1 PwrLimrPer1
FUNC(void, PwrLimr_CODE) PwrLimrPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrLimrPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdMrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PwrLimrRednFac_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_PwrLimrPer2_MinStdOperLim(void)
 *   float32 Rte_IrvRead_PwrLimrPer2_MotEnvlpSpd(void)
 *   float32 Rte_IrvRead_PwrLimrPer2_TqEnvlpLim1(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PwrLimrPer2 PwrLimrPer2
FUNC(void, PwrLimr_CODE) PwrLimrPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define PwrLimr_STOP_SEC_CODE
# include "PwrLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_PWRLIMR_H */

#include "Rte_Stubs.h"
