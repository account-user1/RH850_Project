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
 *          File:  Rte_FordSysSt.h
 *        Config:  E:/EA4NewTemplate/CF052A_FordSysSt_Impl/tools/Component.dpa
 *     SW-C Type:  FordSysSt
 *  Generated at:  Tue Feb 13 11:21:13 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordSysSt> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDSYSST_H
# define _RTE_FORDSYSST_H

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

# include "Rte_FordSysSt_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordSysSt
{
  /* PIM Handles section */
  P2VAR(Ford_EPAS_Failure, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordEpsFailrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FordEpsSysSt1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordEpsSysStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_SteMdule_D_Stat, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordSteerModlStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVltgOperRamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVltgOperScar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_OperRampRatePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_OperScaFctrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SysStReqEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordSysSt, RTE_CONST, RTE_CONST) Rte_Inst_FordSysSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordSysSt, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_EngOnSerlComSrvDft_Logl (FALSE)
# define Rte_InitValue_FordEpsFailr_Ford_EPAS_Failure (0U)
# define Rte_InitValue_FordEpsSysSt_Val (0U)
# define Rte_InitValue_FordPwrSplyEnaReq_Logl (FALSE)
# define Rte_InitValue_FordSteerModlSts_Ford_SteMdule_D_Stat (0U)
# define Rte_InitValue_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat (0U)
# define Rte_InitValue_FordVehSpd_Val (0.0F)
# define Rte_InitValue_FordVehSpdVld_Logl (FALSE)
# define Rte_InitValue_FordVltgOperRamp_Val (1.0F)
# define Rte_InitValue_FordVltgOperScar_Val (1.0F)
# define Rte_InitValue_FordVltgOperSt_Val (0U)
# define Rte_InitValue_LoaSt_Val (0U)
# define Rte_InitValue_OperRampRate_Val (50.0F)
# define Rte_InitValue_OperScaFctr_Val (1.0F)
# define Rte_InitValue_SysSt_Val (3U)
# define Rte_InitValue_SysStReqEna_Logl (FALSE)
# define Rte_InitValue_SysStReqEnaOvrd_Logl (FALSE)
# define Rte_InitValue_SysStWrmIninCmpl_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordSysSt_EngOnSerlComSrvDft_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDSYSST_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordSysSt_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat(P2VAR(Ford_PwPckTq_D_Stat, AUTOMATIC, RTE_FORDSYSST_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordSysSt_FordVehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_FORDSYSST_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordSysSt_FordVehSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDSYSST_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordSysSt_FordVltgOperRamp_Val(P2VAR(float32, AUTOMATIC, RTE_FORDSYSST_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordSysSt_FordVltgOperScar_Val(P2VAR(float32, AUTOMATIC, RTE_FORDSYSST_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordSysSt_FordVltgOperSt_Val(P2VAR(FordVltgOperSt1, AUTOMATIC, RTE_FORDSYSST_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordSysSt_LoaSt_Val(P2VAR(LoaSt1, AUTOMATIC, RTE_FORDSYSST_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordSysSt_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_FORDSYSST_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordSysSt_SysStReqEnaOvrd_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDSYSST_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordSysSt_SysStWrmIninCmpl_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDSYSST_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordSysSt_FordEpsFailr_Ford_EPAS_Failure(Ford_EPAS_Failure data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordSysSt_FordEpsSysSt_Val(FordEpsSysSt1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordSysSt_FordPwrSplyEnaReq_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordSysSt_FordSteerModlSts_Ford_SteMdule_D_Stat(Ford_SteMdule_D_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordSysSt_OperRampRate_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordSysSt_OperScaFctr_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordSysSt_SysStReqEna_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordSysSt_GetGpioMcuEna_Oper(P2VAR(boolean, AUTOMATIC, RTE_FORDSYSST_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordSysSt_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_FORDSYSST_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_FordSysSt_FullAssiRampUpRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_FordSysSt_InitLimpHomeRamp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_FordSysSt_InitLimpHomeScar_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_FordSysSt_LimdAssiRamp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_FordSysSt_LimdAssiRampUpRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_FordSysSt_LimdAssiRampUpRateFaild_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_FordSysSt_LimdAssiScar_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_FordSysSt_NormLimpHomeRamp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_FordSysSt_NormLimpHomeScar_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_FordSysSt_ShtdwnRamp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC(void, RTE_CODE) Rte_Enter_FordSysSt_FordSysStExclusiveArea(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_Exit_FordSysSt_FordSysStExclusiveArea(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EngOnSerlComSrvDft_Logl Rte_Read_FordSysSt_EngOnSerlComSrvDft_Logl
# define Rte_Read_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat Rte_Read_FordSysSt_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat
# define Rte_Read_FordVehSpd_Val Rte_Read_FordSysSt_FordVehSpd_Val
# define Rte_Read_FordVehSpdVld_Logl Rte_Read_FordSysSt_FordVehSpdVld_Logl
# define Rte_Read_FordVltgOperRamp_Val Rte_Read_FordSysSt_FordVltgOperRamp_Val
# define Rte_Read_FordVltgOperScar_Val Rte_Read_FordSysSt_FordVltgOperScar_Val
# define Rte_Read_FordVltgOperSt_Val Rte_Read_FordSysSt_FordVltgOperSt_Val
# define Rte_Read_LoaSt_Val Rte_Read_FordSysSt_LoaSt_Val
# define Rte_Read_SysSt_Val Rte_Read_FordSysSt_SysSt_Val
# define Rte_Read_SysStReqEnaOvrd_Logl Rte_Read_FordSysSt_SysStReqEnaOvrd_Logl
# define Rte_Read_SysStWrmIninCmpl_Logl Rte_Read_FordSysSt_SysStWrmIninCmpl_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordEpsFailr_Ford_EPAS_Failure Rte_Write_FordSysSt_FordEpsFailr_Ford_EPAS_Failure
# define Rte_Write_FordEpsSysSt_Val Rte_Write_FordSysSt_FordEpsSysSt_Val
# define Rte_Write_FordPwrSplyEnaReq_Logl Rte_Write_FordSysSt_FordPwrSplyEnaReq_Logl
# define Rte_Write_FordSteerModlSts_Ford_SteMdule_D_Stat Rte_Write_FordSysSt_FordSteerModlSts_Ford_SteMdule_D_Stat
# define Rte_Write_OperRampRate_Val Rte_Write_FordSysSt_OperRampRate_Val
# define Rte_Write_OperScaFctr_Val Rte_Write_FordSysSt_OperScaFctr_Val
# define Rte_Write_SysStReqEna_Logl Rte_Write_FordSysSt_SysStReqEna_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetGpioMcuEna_Oper Rte_Call_FordSysSt_GetGpioMcuEna_Oper
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_FordSysSt_GetNtcQlfrSts_Oper


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

# define Rte_Enter_FordSysStExclusiveArea Rte_Enter_FordSysSt_FordSysStExclusiveArea /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
# define Rte_Exit_FordSysStExclusiveArea Rte_Exit_FordSysSt_FordSysStExclusiveArea /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FullAssiRampUpRate_Val Rte_Prm_FordSysSt_FullAssiRampUpRate_Val

# define Rte_Prm_InitLimpHomeRamp_Val Rte_Prm_FordSysSt_InitLimpHomeRamp_Val

# define Rte_Prm_InitLimpHomeScar_Val Rte_Prm_FordSysSt_InitLimpHomeScar_Val

# define Rte_Prm_LimdAssiRamp_Val Rte_Prm_FordSysSt_LimdAssiRamp_Val

# define Rte_Prm_LimdAssiRampUpRate_Val Rte_Prm_FordSysSt_LimdAssiRampUpRate_Val

# define Rte_Prm_LimdAssiRampUpRateFaild_Val Rte_Prm_FordSysSt_LimdAssiRampUpRateFaild_Val

# define Rte_Prm_LimdAssiScar_Val Rte_Prm_FordSysSt_LimdAssiScar_Val

# define Rte_Prm_NormLimpHomeRamp_Val Rte_Prm_FordSysSt_NormLimpHomeRamp_Val

# define Rte_Prm_NormLimpHomeScar_Val Rte_Prm_FordSysSt_NormLimpHomeScar_Val

# define Rte_Prm_ShtdwnRamp_Val Rte_Prm_FordSysSt_ShtdwnRamp_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVltgOperRamp() (Rte_Inst_FordSysSt->Pim_FordVltgOperRamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVltgOperScar() (Rte_Inst_FordSysSt->Pim_FordVltgOperScar) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_OperRampRatePrev() (Rte_Inst_FordSysSt->Pim_OperRampRatePrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_OperScaFctrPrev() (Rte_Inst_FordSysSt->Pim_OperScaFctrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordEpsFailrPrev() (Rte_Inst_FordSysSt->Pim_FordEpsFailrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordEpsSysStPrev() (Rte_Inst_FordSysSt->Pim_FordEpsSysStPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordSteerModlStsPrev() (Rte_Inst_FordSysSt->Pim_FordSteerModlStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SysStReqEnaPrev() (Rte_Inst_FordSysSt->Pim_SysStReqEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordVltgOperRamp(void)
 *   float32 *Rte_Pim_FordVltgOperScar(void)
 *   float32 *Rte_Pim_OperRampRatePrev(void)
 *   float32 *Rte_Pim_OperScaFctrPrev(void)
 *   Ford_EPAS_Failure *Rte_Pim_FordEpsFailrPrev(void)
 *   FordEpsSysSt1 *Rte_Pim_FordEpsSysStPrev(void)
 *   Ford_SteMdule_D_Stat *Rte_Pim_FordSteerModlStsPrev(void)
 *   boolean *Rte_Pim_SysStReqEnaPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_FullAssiRampUpRate_Val(void)
 *   float32 Rte_Prm_InitLimpHomeRamp_Val(void)
 *   float32 Rte_Prm_InitLimpHomeScar_Val(void)
 *   float32 Rte_Prm_LimdAssiRamp_Val(void)
 *   float32 Rte_Prm_LimdAssiRampUpRate_Val(void)
 *   float32 Rte_Prm_LimdAssiRampUpRateFaild_Val(void)
 *   float32 Rte_Prm_LimdAssiScar_Val(void)
 *   float32 Rte_Prm_NormLimpHomeRamp_Val(void)
 *   float32 Rte_Prm_NormLimpHomeScar_Val(void)
 *   float32 Rte_Prm_ShtdwnRamp_Val(void)
 *
 *********************************************************************************************************************/


# define FordSysSt_START_SEC_CODE
# include "FordSysSt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordSysStInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordSysStInit1 FordSysStInit1
FUNC(void, FordSysSt_CODE) FordSysStInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordSysStPer1
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
 *   Std_ReturnType Rte_Read_EngOnSerlComSrvDft_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat(Ford_PwPckTq_D_Stat *data)
 *   Std_ReturnType Rte_Read_FordVehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVltgOperRamp_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVltgOperScar_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVltgOperSt_Val(FordVltgOperSt1 *data)
 *   Std_ReturnType Rte_Read_LoaSt_Val(LoaSt1 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_SysStReqEnaOvrd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysStWrmIninCmpl_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordEpsFailr_Ford_EPAS_Failure(Ford_EPAS_Failure data)
 *   Std_ReturnType Rte_Write_FordEpsSysSt_Val(FordEpsSysSt1 data)
 *   Std_ReturnType Rte_Write_FordPwrSplyEnaReq_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordSteerModlSts_Ford_SteMdule_D_Stat(Ford_SteMdule_D_Stat data)
 *   Std_ReturnType Rte_Write_OperRampRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_OperScaFctr_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysStReqEna_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetGpioMcuEna_Oper(boolean *PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_FordSysStExclusiveArea(void)
 *   void Rte_Exit_FordSysStExclusiveArea(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordSysStPer1 FordSysStPer1
FUNC(void, FordSysSt_CODE) FordSysStPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordSysSt_STOP_SEC_CODE
# include "FordSysSt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetGpio_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDSYSST_H */
#include "Rte_Stubs.h"
