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
 *          File:  Rte_AssiSumLim.h
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/SF004B_AssiSumLim_Impl/tools/Component.dpa
 *     SW-C Type:  AssiSumLim
 *  Generated at:  Mon Jun 12 13:13:18 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <AssiSumLim> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_ASSISUMLIM_H
# define _RTE_ASSISUMLIM_H

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

# include "Rte_AssiSumLim_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_AssiSumLim
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CmdSumInpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CmdSumOutpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotVelFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_AssiSumLim, RTE_CONST, RTE_CONST) Rte_Inst_AssiSumLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_AssiSumLim, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiCmd_Val (0.0F)
# define Rte_InitValue_DampgCmd_Val (0.0F)
# define Rte_InitValue_EotActvCmd_Val (0.0F)
# define Rte_InitValue_EotAssiSca_Val (1.0F)
# define Rte_InitValue_EotDampgCmd_Val (0.0F)
# define Rte_InitValue_EotMotTqLim_Val (8.8F)
# define Rte_InitValue_HwTqLoaMtgtnEna_Logl (FALSE)
# define Rte_InitValue_MotTqCmd_Val (0.0F)
# define Rte_InitValue_MotTqCmdLimDi_Logl (FALSE)
# define Rte_InitValue_MotTqCmdLimdPreStall_Val (0.0F)
# define Rte_InitValue_MotTqCmdLimrMin_Val (8.8F)
# define Rte_InitValue_MotTqCmdOvrl_Val (0.0F)
# define Rte_InitValue_MotTqCmdPreLim_Val (0.0F)
# define Rte_InitValue_MotVelMrf_Val (0.0F)
# define Rte_InitValue_PinionCentrLrnCmd_Val (0.0F)
# define Rte_InitValue_PinionCentrLrnEna_Logl (FALSE)
# define Rte_InitValue_PullCmpCmd_Val (0.0F)
# define Rte_InitValue_PwrLimrRednFac_Val (0.0F)
# define Rte_InitValue_RtnCmd_Val (0.0F)
# define Rte_InitValue_StallMotTqLim_Val (8.8F)
# define Rte_InitValue_SysMotTqCmdSca_Val (1.0F)
# define Rte_InitValue_SysProtnRednFac_Val (0.0F)
# define Rte_InitValue_ThermMotTqLim_Val (8.8F)
# define Rte_InitValue_ThermRednFac_Val (0.0F)
# define Rte_InitValue_TqLoaCmd_Val (0.0F)
# define Rte_InitValue_TqSteerMtgtnCmd_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdMotTqLim_Val (8.8F)
# define Rte_InitValue_WhlImbRejctnCmd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_AssiCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_DampgCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_EotActvCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_EotAssiSca_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_EotDampgCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_EotMotTqLim_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_HwTqLoaMtgtnEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_MotTqCmdLimDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_MotTqCmdOvrl_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_MotVelMrf_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_PinionCentrLrnCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_PinionCentrLrnEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_PullCmpCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_PwrLimrRednFac_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_RtnCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_StallMotTqLim_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_SysMotTqCmdSca_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_ThermMotTqLim_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_ThermRednFac_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_TqLoaCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_TqSteerMtgtnCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_VehSpdMotTqLim_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiSumLim_WhlImbRejctnCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AssiSumLim_MotTqCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AssiSumLim_MotTqCmdLimdPreStall_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AssiSumLim_MotTqCmdLimrMin_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AssiSumLim_MotTqCmdPreLim_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AssiSumLim_SysProtnRednFac_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AssiSumLim_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_ASSISUMLIM_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AssiSumLim_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimMotVelLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimPullCmpLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimNtc0x0C4FailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimNtc0x0C4PassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimCmdSumFilActv_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u10p6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimBlndCmdSumFrqLimX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u10p6_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimBlndCmdSumFrqLimX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u10p6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimBlndCmdSumFrqLimY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u10p6_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimBlndCmdSumFrqLimY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u11p5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimHiSpdCmdSumFrqLimX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u11p5_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimHiSpdCmdSumFrqLimX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u10p6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimHiSpdCmdSumFrqLimY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u10p6_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimHiSpdCmdSumFrqLimY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u11p5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimLoSpdCmdSumFrqLimX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u11p5_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimLoSpdCmdSumFrqLimX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u10p6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimLoSpdCmdSumFrqLimY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u10p6_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiSumLim_AssiSumLimLoSpdCmdSumFrqLimY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(float32, RTE_CODE) Rte_IrvRead_AssiSumLim_AssiSumLimPer1_ProcdManTqCmd(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_AssiSumLim_AssiSumLimPer1_ProcdManTqCmdEna(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_AssiSumLim_SetManTqCmd_Oper_ProcdManTqCmd(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_AssiSumLim_SetManTqCmd_Oper_ProcdManTqCmdEna(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AssiCmd_Val Rte_Read_AssiSumLim_AssiCmd_Val
# define Rte_Read_DampgCmd_Val Rte_Read_AssiSumLim_DampgCmd_Val
# define Rte_Read_EotActvCmd_Val Rte_Read_AssiSumLim_EotActvCmd_Val
# define Rte_Read_EotAssiSca_Val Rte_Read_AssiSumLim_EotAssiSca_Val
# define Rte_Read_EotDampgCmd_Val Rte_Read_AssiSumLim_EotDampgCmd_Val
# define Rte_Read_EotMotTqLim_Val Rte_Read_AssiSumLim_EotMotTqLim_Val
# define Rte_Read_HwTqLoaMtgtnEna_Logl Rte_Read_AssiSumLim_HwTqLoaMtgtnEna_Logl
# define Rte_Read_MotTqCmdLimDi_Logl Rte_Read_AssiSumLim_MotTqCmdLimDi_Logl
# define Rte_Read_MotTqCmdOvrl_Val Rte_Read_AssiSumLim_MotTqCmdOvrl_Val
# define Rte_Read_MotVelMrf_Val Rte_Read_AssiSumLim_MotVelMrf_Val
# define Rte_Read_PinionCentrLrnCmd_Val Rte_Read_AssiSumLim_PinionCentrLrnCmd_Val
# define Rte_Read_PinionCentrLrnEna_Logl Rte_Read_AssiSumLim_PinionCentrLrnEna_Logl
# define Rte_Read_PullCmpCmd_Val Rte_Read_AssiSumLim_PullCmpCmd_Val
# define Rte_Read_PwrLimrRednFac_Val Rte_Read_AssiSumLim_PwrLimrRednFac_Val
# define Rte_Read_RtnCmd_Val Rte_Read_AssiSumLim_RtnCmd_Val
# define Rte_Read_StallMotTqLim_Val Rte_Read_AssiSumLim_StallMotTqLim_Val
# define Rte_Read_SysMotTqCmdSca_Val Rte_Read_AssiSumLim_SysMotTqCmdSca_Val
# define Rte_Read_ThermMotTqLim_Val Rte_Read_AssiSumLim_ThermMotTqLim_Val
# define Rte_Read_ThermRednFac_Val Rte_Read_AssiSumLim_ThermRednFac_Val
# define Rte_Read_TqLoaCmd_Val Rte_Read_AssiSumLim_TqLoaCmd_Val
# define Rte_Read_TqSteerMtgtnCmd_Val Rte_Read_AssiSumLim_TqSteerMtgtnCmd_Val
# define Rte_Read_VehSpd_Val Rte_Read_AssiSumLim_VehSpd_Val
# define Rte_Read_VehSpdMotTqLim_Val Rte_Read_AssiSumLim_VehSpdMotTqLim_Val
# define Rte_Read_WhlImbRejctnCmd_Val Rte_Read_AssiSumLim_WhlImbRejctnCmd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotTqCmd_Val Rte_Write_AssiSumLim_MotTqCmd_Val
# define Rte_Write_MotTqCmdLimdPreStall_Val Rte_Write_AssiSumLim_MotTqCmdLimdPreStall_Val
# define Rte_Write_MotTqCmdLimrMin_Val Rte_Write_AssiSumLim_MotTqCmdLimrMin_Val
# define Rte_Write_MotTqCmdPreLim_Val Rte_Write_AssiSumLim_MotTqCmdPreLim_Val
# define Rte_Write_SysProtnRednFac_Val Rte_Write_AssiSumLim_SysProtnRednFac_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_AssiSumLim_GetNtcQlfrSts_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_AssiSumLim_SetNtcSts_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmd() \
  Rte_IrvRead_AssiSumLim_AssiSumLimPer1_ProcdManTqCmd()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmdEna() \
  Rte_IrvRead_AssiSumLim_AssiSumLimPer1_ProcdManTqCmdEna()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmd(data) \
  Rte_IrvWrite_AssiSumLim_SetManTqCmd_Oper_ProcdManTqCmd(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmdEna(data) \
  Rte_IrvWrite_AssiSumLim_SetManTqCmd_Oper_ProcdManTqCmdEna(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_AssiSumLimMotVelLpFilFrq_Val Rte_Prm_AssiSumLim_AssiSumLimMotVelLpFilFrq_Val

# define Rte_Prm_AssiSumLimPullCmpLim_Val Rte_Prm_AssiSumLim_AssiSumLimPullCmpLim_Val

# define Rte_Prm_AssiSumLimNtc0x0C4FailStep_Val Rte_Prm_AssiSumLim_AssiSumLimNtc0x0C4FailStep_Val

# define Rte_Prm_AssiSumLimNtc0x0C4PassStep_Val Rte_Prm_AssiSumLim_AssiSumLimNtc0x0C4PassStep_Val

# define Rte_Prm_AssiSumLimCmdSumFilActv_Logl Rte_Prm_AssiSumLim_AssiSumLimCmdSumFilActv_Logl

# define Rte_Prm_AssiSumLimBlndCmdSumFrqLimX_Ary1D Rte_Prm_AssiSumLim_AssiSumLimBlndCmdSumFrqLimX_Ary1D

# define Rte_Prm_AssiSumLimBlndCmdSumFrqLimY_Ary1D Rte_Prm_AssiSumLim_AssiSumLimBlndCmdSumFrqLimY_Ary1D

# define Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimX_Ary1D Rte_Prm_AssiSumLim_AssiSumLimHiSpdCmdSumFrqLimX_Ary1D

# define Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimY_Ary1D Rte_Prm_AssiSumLim_AssiSumLimHiSpdCmdSumFrqLimY_Ary1D

# define Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimX_Ary1D Rte_Prm_AssiSumLim_AssiSumLimLoSpdCmdSumFrqLimX_Ary1D

# define Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimY_Ary1D Rte_Prm_AssiSumLim_AssiSumLimLoSpdCmdSumFrqLimY_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_CmdSumInpPrev() (Rte_Inst_AssiSumLim->Pim_CmdSumInpPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CmdSumOutpPrev() (Rte_Inst_AssiSumLim->Pim_CmdSumOutpPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotVelFilLp() (Rte_Inst_AssiSumLim->Pim_MotVelFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_CmdSumInpPrev(void)
 *   float32 *Rte_Pim_CmdSumOutpPrev(void)
 *   FilLpRec1 *Rte_Pim_MotVelFilLp(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_AssiSumLimMotVelLpFilFrq_Val(void)
 *   float32 Rte_Prm_AssiSumLimPullCmpLim_Val(void)
 *   uint16 Rte_Prm_AssiSumLimNtc0x0C4FailStep_Val(void)
 *   uint16 Rte_Prm_AssiSumLimNtc0x0C4PassStep_Val(void)
 *   boolean Rte_Prm_AssiSumLimCmdSumFilActv_Logl(void)
 *   u10p6 *Rte_Prm_AssiSumLimBlndCmdSumFrqLimX_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_2
 *   u10p6 *Rte_Prm_AssiSumLimBlndCmdSumFrqLimY_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_2
 *   u11p5 *Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_8
 *   u10p6 *Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimY_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_8
 *   u11p5 *Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_8
 *   u10p6 *Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimY_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_8
 *
 *********************************************************************************************************************/


# define AssiSumLim_START_SEC_CODE
# include "AssiSumLim_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiSumLimInit1
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
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_AssiSumLimInit1 AssiSumLimInit1
FUNC(void, AssiSumLim_CODE) AssiSumLimInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiSumLimPer1
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
 *   Std_ReturnType Rte_Read_AssiCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DampgCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotActvCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotAssiSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotDampgCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqLoaMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotTqCmdLimDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotTqCmdOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionCentrLrnCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionCentrLrnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_PullCmpCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PwrLimrRednFac_Val(float32 *data)
 *   Std_ReturnType Rte_Read_RtnCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_StallMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ThermMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ThermRednFac_Val(float32 *data)
 *   Std_ReturnType Rte_Read_TqLoaCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_TqSteerMtgtnCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotTqCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqCmdLimdPreStall_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqCmdLimrMin_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqCmdPreLim_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysProtnRednFac_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmd(void)
 *   boolean Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmdEna(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_AssiSumLimPer1 AssiSumLimPer1
FUNC(void, AssiSumLim_CODE) AssiSumLimPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetManTqCmd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetManTqCmd>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmd(float32 data)
 *   void Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmdEna(boolean data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SetManTqCmd_Oper(float32 ManTqCmd_Arg, boolean ManTqCmdEna_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SetManTqCmd_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetManTqCmd_Oper SetManTqCmd_Oper
FUNC(Std_ReturnType, AssiSumLim_CODE) SetManTqCmd_Oper(float32 ManTqCmd_Arg, boolean ManTqCmdEna_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define AssiSumLim_STOP_SEC_CODE
# include "AssiSumLim_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetManTqCmd_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_ASSISUMLIM_H */

#include "Rte_Stubs.h"
