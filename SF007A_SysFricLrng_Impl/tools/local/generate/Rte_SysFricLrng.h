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
 *          File:  Rte_SysFricLrng.h
 *        Config:  C:/_Synergy_Projects/Working/SF007A_SysFricLrng_Impl/tools/Component.dpa
 *     SW-C Type:  SysFricLrng
 *  Generated at:  Fri Oct 13 09:00:46 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <SysFricLrng> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SYSFRICLRNG_H
# define _RTE_SYSFRICLRNG_H

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

# include "Rte_SysFricLrng_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_SysFricLrng
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AssiMechTLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AvrgFricLpFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AvrgFricLpFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AvrgFricLpFil3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AvrgFricLpFil4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_f32_12, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ColTqAry; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ColTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EstimdFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_f32_4, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FilAvrgFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FricChgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(SysFricDataRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FricLrngData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(SysFricLrngOperMod1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FricLrngOperModPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FricLrngRunOneTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(SysFricNonLrngDataRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FricNonLrngData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FricOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FricOffsOutpDi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgAuthyLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_f32_12, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_f32_12, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwVelBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LatALpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevMaxRawAvrgFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_f32_4, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RawAvrgFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RefTmrLrngConstr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_f32_4, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SatnAvrgFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SatnEstimdFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_f32_4, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VehBasLineFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VehSpdLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_SysFricLrng, RTE_CONST, RTE_CONST) Rte_Inst_SysFricLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_SysFricLrng, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiMechT_Val (0.0F)
# define Rte_InitValue_FricLrngCustEna_Logl (TRUE)
# define Rte_InitValue_FricLrngDi_Logl (FALSE)
# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAgAuthy_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwVel_Val (0.0F)
# define Rte_InitValue_MaxLrndFric_Val (0.0F)
# define Rte_InitValue_MotTqCmdCrf_Val (0.0F)
# define Rte_InitValue_SysFricEstimd_Val (0.0F)
# define Rte_InitValue_SysFricOffs_Val (0.0F)
# define Rte_InitValue_SysSatnFricEstimd_Val (0.0F)
# define Rte_InitValue_VehLatA_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdVld_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysFricLrng_AssiMechT_Val(P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysFricLrng_FricLrngCustEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysFricLrng_FricLrngDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysFricLrng_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysFricLrng_HwAgAuthy_Val(P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysFricLrng_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysFricLrng_HwVel_Val(P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysFricLrng_MotTqCmdCrf_Val(P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysFricLrng_VehLatA_Val(P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysFricLrng_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysFricLrng_VehSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SysFricLrng_MaxLrndFric_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SysFricLrng_SysFricEstimd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SysFricLrng_SysFricOffs_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SysFricLrng_SysSatnFricEstimd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SysFricLrng_FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SysFricLrng_FricLrngData_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SysFricLrng_FricNonLrngData_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SysFricLrng_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SysFricLrng_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SysFricLrng_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SysFricLrng_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngAvrgFricFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngBasLineEolFric_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngDataPrepLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngEolFricDifHiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngEolFricDifLoLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngEolFricDifScagFac_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngFricDiagcThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngFricOffs_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngFricOffsHiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngFricOffsLoLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngFricOffsLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngGain_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngHiFricDiagcThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngHwPosnAuthyThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngHwVelConstrLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngHwVelHiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngHwVelLoLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngIgnCycFricChgLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngIgnCycFricOffs_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngLatAHiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngLatALoLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngTHiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngTLoLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngDebStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngHiFricDebStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngRngCntrThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngBasLineFric_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngBasLineFric_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngBasLineHys_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_f32_8_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngBasLineHys_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngBasLineRngCntr_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u16_8_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngBasLineRngCntr_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngFricChgWght_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngFricChgWght_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngFricHysHwAgPt_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngFricHysHwAgPt_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u11p5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngIvsTrsmRatX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u11p5_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngIvsTrsmRatX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u6p10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngIvsTrsmRatY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u6p10_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngIvsTrsmRatY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngMaskVehSpd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_boolean_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngMaskVehSpd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngVehSpd_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_f32_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_SysFricLrng_SysFricLrngVehSpd_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

FUNC_P2CONST(SysFricDataRec1, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_SysFricLrng_FricLrngDataDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC_P2CONST(SysFricNonLrngDataRec1, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_SysFricLrng_FricNonLrngDataDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AssiMechT_Val Rte_Read_SysFricLrng_AssiMechT_Val
# define Rte_Read_FricLrngCustEna_Logl Rte_Read_SysFricLrng_FricLrngCustEna_Logl
# define Rte_Read_FricLrngDi_Logl Rte_Read_SysFricLrng_FricLrngDi_Logl
# define Rte_Read_HwAg_Val Rte_Read_SysFricLrng_HwAg_Val
# define Rte_Read_HwAgAuthy_Val Rte_Read_SysFricLrng_HwAgAuthy_Val
# define Rte_Read_HwTq_Val Rte_Read_SysFricLrng_HwTq_Val
# define Rte_Read_HwVel_Val Rte_Read_SysFricLrng_HwVel_Val
# define Rte_Read_MotTqCmdCrf_Val Rte_Read_SysFricLrng_MotTqCmdCrf_Val
# define Rte_Read_VehLatA_Val Rte_Read_SysFricLrng_VehLatA_Val
# define Rte_Read_VehSpd_Val Rte_Read_SysFricLrng_VehSpd_Val
# define Rte_Read_VehSpdVld_Logl Rte_Read_SysFricLrng_VehSpdVld_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MaxLrndFric_Val Rte_Write_SysFricLrng_MaxLrndFric_Val
# define Rte_Write_SysFricEstimd_Val Rte_Write_SysFricLrng_SysFricEstimd_Val
# define Rte_Write_SysFricOffs_Val Rte_Write_SysFricLrng_SysFricOffs_Val
# define Rte_Write_SysSatnFricEstimd_Val Rte_Write_SysFricLrng_SysSatnFricEstimd_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_f32_Oper Rte_Call_SysFricLrng_FltInj_f32_Oper
# define Rte_Call_FricLrngData_SetRamBlockStatus Rte_Call_SysFricLrng_FricLrngData_SetRamBlockStatus
# define Rte_Call_FricNonLrngData_SetRamBlockStatus Rte_Call_SysFricLrng_FricNonLrngData_SetRamBlockStatus
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_SysFricLrng_GetNtcQlfrSts_Oper
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_SysFricLrng_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_SysFricLrng_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_SysFricLrng_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_FricLrngDataDft Rte_CData_SysFricLrng_FricLrngDataDft

# define Rte_CData_FricNonLrngDataDft Rte_CData_SysFricLrng_FricNonLrngDataDft

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_SysFricLrngAvrgFricFrq_Val Rte_Prm_SysFricLrng_SysFricLrngAvrgFricFrq_Val

# define Rte_Prm_SysFricLrngBasLineEolFric_Val Rte_Prm_SysFricLrng_SysFricLrngBasLineEolFric_Val

# define Rte_Prm_SysFricLrngDataPrepLpFilFrq_Val Rte_Prm_SysFricLrng_SysFricLrngDataPrepLpFilFrq_Val

# define Rte_Prm_SysFricLrngEolFricDifHiLim_Val Rte_Prm_SysFricLrng_SysFricLrngEolFricDifHiLim_Val

# define Rte_Prm_SysFricLrngEolFricDifLoLim_Val Rte_Prm_SysFricLrng_SysFricLrngEolFricDifLoLim_Val

# define Rte_Prm_SysFricLrngEolFricDifScagFac_Val Rte_Prm_SysFricLrng_SysFricLrngEolFricDifScagFac_Val

# define Rte_Prm_SysFricLrngFricDiagcThd_Val Rte_Prm_SysFricLrng_SysFricLrngFricDiagcThd_Val

# define Rte_Prm_SysFricLrngFricOffs_Val Rte_Prm_SysFricLrng_SysFricLrngFricOffs_Val

# define Rte_Prm_SysFricLrngFricOffsHiLim_Val Rte_Prm_SysFricLrng_SysFricLrngFricOffsHiLim_Val

# define Rte_Prm_SysFricLrngFricOffsLoLim_Val Rte_Prm_SysFricLrng_SysFricLrngFricOffsLoLim_Val

# define Rte_Prm_SysFricLrngFricOffsLpFilFrq_Val Rte_Prm_SysFricLrng_SysFricLrngFricOffsLpFilFrq_Val

# define Rte_Prm_SysFricLrngGain_Val Rte_Prm_SysFricLrng_SysFricLrngGain_Val

# define Rte_Prm_SysFricLrngHiFricDiagcThd_Val Rte_Prm_SysFricLrng_SysFricLrngHiFricDiagcThd_Val

# define Rte_Prm_SysFricLrngHwPosnAuthyThd_Val Rte_Prm_SysFricLrng_SysFricLrngHwPosnAuthyThd_Val

# define Rte_Prm_SysFricLrngHwVelConstrLim_Val Rte_Prm_SysFricLrng_SysFricLrngHwVelConstrLim_Val

# define Rte_Prm_SysFricLrngHwVelHiLim_Val Rte_Prm_SysFricLrng_SysFricLrngHwVelHiLim_Val

# define Rte_Prm_SysFricLrngHwVelLoLim_Val Rte_Prm_SysFricLrng_SysFricLrngHwVelLoLim_Val

# define Rte_Prm_SysFricLrngIgnCycFricChgLim_Val Rte_Prm_SysFricLrng_SysFricLrngIgnCycFricChgLim_Val

# define Rte_Prm_SysFricLrngIgnCycFricOffs_Val Rte_Prm_SysFricLrng_SysFricLrngIgnCycFricOffs_Val

# define Rte_Prm_SysFricLrngLatAHiLim_Val Rte_Prm_SysFricLrng_SysFricLrngLatAHiLim_Val

# define Rte_Prm_SysFricLrngLatALoLim_Val Rte_Prm_SysFricLrng_SysFricLrngLatALoLim_Val

# define Rte_Prm_SysFricLrngTHiLim_Val Rte_Prm_SysFricLrng_SysFricLrngTHiLim_Val

# define Rte_Prm_SysFricLrngTLoLim_Val Rte_Prm_SysFricLrng_SysFricLrngTLoLim_Val

# define Rte_Prm_SysFricLrngThd_Val Rte_Prm_SysFricLrng_SysFricLrngThd_Val

# define Rte_Prm_SysFricLrngDebStep_Val Rte_Prm_SysFricLrng_SysFricLrngDebStep_Val

# define Rte_Prm_SysFricLrngHiFricDebStep_Val Rte_Prm_SysFricLrng_SysFricLrngHiFricDebStep_Val

# define Rte_Prm_SysFricLrngRngCntrThd_Val Rte_Prm_SysFricLrng_SysFricLrngRngCntrThd_Val

# define Rte_Prm_SysFricLrngBasLineFric_Ary1D Rte_Prm_SysFricLrng_SysFricLrngBasLineFric_Ary1D

# define Rte_Prm_SysFricLrngBasLineHys_Ary2D Rte_Prm_SysFricLrng_SysFricLrngBasLineHys_Ary2D

# define Rte_Prm_SysFricLrngBasLineRngCntr_Ary2D Rte_Prm_SysFricLrng_SysFricLrngBasLineRngCntr_Ary2D

# define Rte_Prm_SysFricLrngFricChgWght_Ary1D Rte_Prm_SysFricLrng_SysFricLrngFricChgWght_Ary1D

# define Rte_Prm_SysFricLrngFricHysHwAgPt_Ary1D Rte_Prm_SysFricLrng_SysFricLrngFricHysHwAgPt_Ary1D

# define Rte_Prm_SysFricLrngIvsTrsmRatX_Ary1D Rte_Prm_SysFricLrng_SysFricLrngIvsTrsmRatX_Ary1D

# define Rte_Prm_SysFricLrngIvsTrsmRatY_Ary1D Rte_Prm_SysFricLrng_SysFricLrngIvsTrsmRatY_Ary1D

# define Rte_Prm_SysFricLrngMaskVehSpd_Ary1D Rte_Prm_SysFricLrng_SysFricLrngMaskVehSpd_Ary1D

# define Rte_Prm_SysFricLrngVehSpd_Ary2D Rte_Prm_SysFricLrng_SysFricLrngVehSpd_Ary2D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_EstimdFric() (Rte_Inst_SysFricLrng->Pim_EstimdFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FricOffs() (Rte_Inst_SysFricLrng->Pim_FricOffs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevMaxRawAvrgFric() (Rte_Inst_SysFricLrng->Pim_PrevMaxRawAvrgFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SatnEstimdFric() (Rte_Inst_SysFricLrng->Pim_SatnEstimdFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RefTmrLrngConstr() (Rte_Inst_SysFricLrng->Pim_RefTmrLrngConstr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FricLrngOperModPrev() (Rte_Inst_SysFricLrng->Pim_FricLrngOperModPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FricLrngRunOneTi() (Rte_Inst_SysFricLrng->Pim_FricLrngRunOneTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FricOffsOutpDi() (Rte_Inst_SysFricLrng->Pim_FricOffsOutpDi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_ColTqAry() (*Rte_Inst_SysFricLrng->Pim_ColTqAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_ColTqAry() (Rte_Inst_SysFricLrng->Pim_ColTqAry) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_FilAvrgFric() (*Rte_Inst_SysFricLrng->Pim_FilAvrgFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_FilAvrgFric() (Rte_Inst_SysFricLrng->Pim_FilAvrgFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_HwAgBuf() (*Rte_Inst_SysFricLrng->Pim_HwAgBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_HwAgBuf() (Rte_Inst_SysFricLrng->Pim_HwAgBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_HwVelBuf() (*Rte_Inst_SysFricLrng->Pim_HwVelBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_HwVelBuf() (Rte_Inst_SysFricLrng->Pim_HwVelBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_RawAvrgFric() (*Rte_Inst_SysFricLrng->Pim_RawAvrgFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_RawAvrgFric() (Rte_Inst_SysFricLrng->Pim_RawAvrgFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_SatnAvrgFric() (*Rte_Inst_SysFricLrng->Pim_SatnAvrgFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_SatnAvrgFric() (Rte_Inst_SysFricLrng->Pim_SatnAvrgFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_VehBasLineFric() (*Rte_Inst_SysFricLrng->Pim_VehBasLineFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_VehBasLineFric() (Rte_Inst_SysFricLrng->Pim_VehBasLineFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# define Rte_Pim_AssiMechTLpFil() (Rte_Inst_SysFricLrng->Pim_AssiMechTLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AvrgFricLpFil1() (Rte_Inst_SysFricLrng->Pim_AvrgFricLpFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AvrgFricLpFil2() (Rte_Inst_SysFricLrng->Pim_AvrgFricLpFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AvrgFricLpFil3() (Rte_Inst_SysFricLrng->Pim_AvrgFricLpFil3) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AvrgFricLpFil4() (Rte_Inst_SysFricLrng->Pim_AvrgFricLpFil4) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ColTqLpFil() (Rte_Inst_SysFricLrng->Pim_ColTqLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FricChgLpFil() (Rte_Inst_SysFricLrng->Pim_FricChgLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FricLrngData() (Rte_Inst_SysFricLrng->Pim_FricLrngData) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FricNonLrngData() (Rte_Inst_SysFricLrng->Pim_FricNonLrngData) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgAuthyLpFil() (Rte_Inst_SysFricLrng->Pim_HwAgAuthyLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgLpFil() (Rte_Inst_SysFricLrng->Pim_HwAgLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwVelLpFil() (Rte_Inst_SysFricLrng->Pim_HwVelLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LatALpFil() (Rte_Inst_SysFricLrng->Pim_LatALpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_VehSpdLpFil() (Rte_Inst_SysFricLrng->Pim_VehSpdLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_EstimdFric(void)
 *   float32 *Rte_Pim_FricOffs(void)
 *   float32 *Rte_Pim_PrevMaxRawAvrgFric(void)
 *   float32 *Rte_Pim_SatnEstimdFric(void)
 *   uint32 *Rte_Pim_RefTmrLrngConstr(void)
 *   SysFricLrngOperMod1 *Rte_Pim_FricLrngOperModPrev(void)
 *   boolean *Rte_Pim_FricLrngRunOneTi(void)
 *   boolean *Rte_Pim_FricOffsOutpDi(void)
 *   float32 *Rte_Pim_ColTqAry(void)
 *     Returnvalue: float32* is of type Ary1D_f32_12
 *   float32 *Rte_Pim_FilAvrgFric(void)
 *     Returnvalue: float32* is of type Ary1D_f32_4
 *   float32 *Rte_Pim_HwAgBuf(void)
 *     Returnvalue: float32* is of type Ary1D_f32_12
 *   float32 *Rte_Pim_HwVelBuf(void)
 *     Returnvalue: float32* is of type Ary1D_f32_12
 *   float32 *Rte_Pim_RawAvrgFric(void)
 *     Returnvalue: float32* is of type Ary1D_f32_4
 *   float32 *Rte_Pim_SatnAvrgFric(void)
 *     Returnvalue: float32* is of type Ary1D_f32_4
 *   float32 *Rte_Pim_VehBasLineFric(void)
 *     Returnvalue: float32* is of type Ary1D_f32_4
 *   FilLpRec1 *Rte_Pim_AssiMechTLpFil(void)
 *   FilLpRec1 *Rte_Pim_AvrgFricLpFil1(void)
 *   FilLpRec1 *Rte_Pim_AvrgFricLpFil2(void)
 *   FilLpRec1 *Rte_Pim_AvrgFricLpFil3(void)
 *   FilLpRec1 *Rte_Pim_AvrgFricLpFil4(void)
 *   FilLpRec1 *Rte_Pim_ColTqLpFil(void)
 *   FilLpRec1 *Rte_Pim_FricChgLpFil(void)
 *   SysFricDataRec1 *Rte_Pim_FricLrngData(void)
 *   SysFricNonLrngDataRec1 *Rte_Pim_FricNonLrngData(void)
 *   FilLpRec1 *Rte_Pim_HwAgAuthyLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwAgLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwVelLpFil(void)
 *   FilLpRec1 *Rte_Pim_LatALpFil(void)
 *   FilLpRec1 *Rte_Pim_VehSpdLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   SysFricDataRec1 *Rte_CData_FricLrngDataDft(void)
 *   SysFricNonLrngDataRec1 *Rte_CData_FricNonLrngDataDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_SysFricLrngAvrgFricFrq_Val(void)
 *   float32 Rte_Prm_SysFricLrngBasLineEolFric_Val(void)
 *   float32 Rte_Prm_SysFricLrngDataPrepLpFilFrq_Val(void)
 *   float32 Rte_Prm_SysFricLrngEolFricDifHiLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngEolFricDifLoLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngEolFricDifScagFac_Val(void)
 *   float32 Rte_Prm_SysFricLrngFricDiagcThd_Val(void)
 *   float32 Rte_Prm_SysFricLrngFricOffs_Val(void)
 *   float32 Rte_Prm_SysFricLrngFricOffsHiLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngFricOffsLoLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngFricOffsLpFilFrq_Val(void)
 *   float32 Rte_Prm_SysFricLrngGain_Val(void)
 *   float32 Rte_Prm_SysFricLrngHiFricDiagcThd_Val(void)
 *   float32 Rte_Prm_SysFricLrngHwPosnAuthyThd_Val(void)
 *   float32 Rte_Prm_SysFricLrngHwVelConstrLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngHwVelHiLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngHwVelLoLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngIgnCycFricChgLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngIgnCycFricOffs_Val(void)
 *   float32 Rte_Prm_SysFricLrngLatAHiLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngLatALoLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngTHiLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngTLoLim_Val(void)
 *   uint32 Rte_Prm_SysFricLrngThd_Val(void)
 *   uint16 Rte_Prm_SysFricLrngDebStep_Val(void)
 *   uint16 Rte_Prm_SysFricLrngHiFricDebStep_Val(void)
 *   uint16 Rte_Prm_SysFricLrngRngCntrThd_Val(void)
 *   float32 *Rte_Prm_SysFricLrngBasLineFric_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_4
 *   float32 *Rte_Prm_SysFricLrngBasLineHys_Ary2D(void)
 *     Returnvalue: float32* is of type Ary2D_f32_8_4
 *   uint16 *Rte_Prm_SysFricLrngBasLineRngCntr_Ary2D(void)
 *     Returnvalue: uint16* is of type Ary2D_u16_8_3
 *   float32 *Rte_Prm_SysFricLrngFricChgWght_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_4
 *   float32 *Rte_Prm_SysFricLrngFricHysHwAgPt_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_4
 *   u11p5 *Rte_Prm_SysFricLrngIvsTrsmRatX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_10
 *   u6p10 *Rte_Prm_SysFricLrngIvsTrsmRatY_Ary1D(void)
 *     Returnvalue: u6p10* is of type Ary1D_u6p10_10
 *   boolean *Rte_Prm_SysFricLrngMaskVehSpd_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_boolean_4
 *   float32 *Rte_Prm_SysFricLrngVehSpd_Ary2D(void)
 *     Returnvalue: float32* is of type Ary2D_f32_4_2
 *
 *********************************************************************************************************************/


# define SysFricLrng_START_SEC_CODE
# include "SysFricLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClrFricLrngOperMod_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ClrFricLrngOperMod>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ClrFricLrngOperMod_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ClrFricLrngOperMod_Oper ClrFricLrngOperMod_Oper
FUNC(void, SysFricLrng_CODE) ClrFricLrngOperMod_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetFricData_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetFricData>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetFricData_Oper(float32 *FricOffs_Arg, float32 *BasLineFric_Arg, float32 *VehLrndFric_Arg, float32 *Hys_Arg, uint16 *RngCntr_Arg)
 *     Argument BasLineFric_Arg: float32* is of type Ary1D_f32_4
 *     Argument VehLrndFric_Arg: float32* is of type Ary1D_f32_4
 *     Argument Hys_Arg: float32* is of type Ary2D_f32_8_4
 *     Argument RngCntr_Arg: uint16* is of type Ary2D_u16_8_3
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetFricData_Oper GetFricData_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, SysFricLrng_CODE) GetFricData_Oper(P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricOffs_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) BasLineFric_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) VehLrndFric_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) Hys_Arg, P2VAR(uint16, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) RngCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, SysFricLrng_CODE) GetFricData_Oper(P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricOffs_Arg, P2VAR(Ary1D_f32_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) BasLineFric_Arg, P2VAR(Ary1D_f32_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) VehLrndFric_Arg, P2VAR(Ary2D_f32_8_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) Hys_Arg, P2VAR(Ary2D_u16_8_3, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) RngCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetFricLrngData_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetFricLrngData>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetFricLrngData_Oper(boolean *FricLrngEna_Arg, boolean *FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 *FricLrngOperMod_Arg, float32 *EolFric_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetFricLrngData_Oper GetFricLrngData_Oper
FUNC(void, SysFricLrng_CODE) GetFricLrngData_Oper(P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricLrngEna_Arg, P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricLrngOffsOutpEna_Arg, P2VAR(SysFricLrngOperMod1, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricLrngOperMod_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) EolFric_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetFricOffsOutpDi_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetFricOffsOutpDi>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetFricOffsOutpDi_Oper(boolean *FricOffsOutpDi_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetFricOffsOutpDi_Oper GetFricOffsOutpDi_Oper
FUNC(void, SysFricLrng_CODE) GetFricOffsOutpDi_Oper(P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricOffsOutpDi_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: InitFricLrngTbl_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <InitFricLrngTbl>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void InitFricLrngTbl_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_InitFricLrngTbl_Oper InitFricLrngTbl_Oper
FUNC(void, SysFricLrng_CODE) InitFricLrngTbl_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetFricData_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetFricData>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetFricData_Oper(float32 FricOffs_Arg, const float32 *BasLineFric_Arg, const float32 *VehLrndFric_Arg, const float32 *Hys_Arg, const uint16 *RngCntr_Arg)
 *     Argument BasLineFric_Arg: float32* is of type Ary1D_f32_4
 *     Argument VehLrndFric_Arg: float32* is of type Ary1D_f32_4
 *     Argument Hys_Arg: float32* is of type Ary2D_f32_8_4
 *     Argument RngCntr_Arg: uint16* is of type Ary2D_u16_8_3
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetFricData_Oper SetFricData_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, SysFricLrng_CODE) SetFricData_Oper(float32 FricOffs_Arg, P2CONST(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) BasLineFric_Arg, P2CONST(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) VehLrndFric_Arg, P2CONST(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) Hys_Arg, P2CONST(uint16, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) RngCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, SysFricLrng_CODE) SetFricData_Oper(float32 FricOffs_Arg, P2CONST(Ary1D_f32_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) BasLineFric_Arg, P2CONST(Ary1D_f32_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) VehLrndFric_Arg, P2CONST(Ary2D_f32_8_4, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) Hys_Arg, P2CONST(Ary2D_u16_8_3, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) RngCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetFricLrngData_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetFricLrngData>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_FricNonLrngData_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetFricLrngData_Oper(boolean FricLrngEna_Arg, boolean FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 FricLrngOperMod_Arg, float32 EolFric_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetFricLrngData_Oper SetFricLrngData_Oper
FUNC(void, SysFricLrng_CODE) SetFricLrngData_Oper(boolean FricLrngEna_Arg, boolean FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 FricLrngOperMod_Arg, float32 EolFric_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetFricOffsOutpDi_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetFricOffsOutpDi>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetFricOffsOutpDi_Oper(boolean FricOffsOutpDi_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetFricOffsOutpDi_Oper SetFricOffsOutpDi_Oper
FUNC(void, SysFricLrng_CODE) SetFricOffsOutpDi_Oper(boolean FricOffsOutpDi_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SysFricLrngInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SysFricOffs_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_FricLrngData_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SysFricLrngInit1 SysFricLrngInit1
FUNC(void, SysFricLrng_CODE) SysFricLrngInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SysFricLrngPer1
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
 *   Std_ReturnType Rte_Read_AssiMechT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FricLrngCustEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FricLrngDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAuthy_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLatA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MaxLrndFric_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysFricEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysFricOffs_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysSatnFricEstimd_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SysFricLrngPer1 SysFricLrngPer1
FUNC(void, SysFricLrng_CODE) SysFricLrngPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define SysFricLrng_STOP_SEC_CODE
# include "SysFricLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_SYSFRICLRNG_H */

#include "Rte_Stubs.h"
