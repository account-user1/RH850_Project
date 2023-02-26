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
 *          File:  Rte_CDD_MotAg5Meas.h
 *        Config:  C:/_EA4SynWrkgCpy/ES242A_MotAg5Meas_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_MotAg5Meas
 *  Generated at:  Mon Oct 16 11:03:35 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_MotAg5Meas> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTAG5MEAS_H
# define _RTE_CDD_MOTAG5MEAS_H

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

# include "Rte_CDD_MotAg5Meas_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_MotAg5Meas
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5CosMaxLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5CosMinLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(MotAgEolPrmRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5EolPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5NvmFltEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5PrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(MotAgRtPrmRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5RtPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5SinMaxLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5SinMinLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(MotAgStVariRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5StVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u0p16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevMotAg5Mecl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotAg5MeasAmpVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_MotAg5Meas, RTE_CONST, RTE_CONST) Rte_Inst_CDD_MotAg5Meas; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_MotAg5Meas, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_MotAg5Cos_Val (1.65F)
# define Rte_InitValue_MotAg5CosAdcFaild_Logl (FALSE)
# define Rte_InitValue_MotAg5CosRtAmpRecpr_Val (1.0F)
# define Rte_InitValue_MotAg5CosRtOffs_Val (2.5F)
# define Rte_InitValue_MotAg5MeclQlfr_Val (0U)
# define Rte_InitValue_MotAg5MeclRollgCntr_Val (0U)
# define Rte_InitValue_MotAg5RawMecl_Val (0U)
# define Rte_InitValue_MotAg5Sin_Val (1.65F)
# define Rte_InitValue_MotAg5SinAdcFaild_Logl (FALSE)
# define Rte_InitValue_MotAg5SinRtAmpRecpr_Val (1.0F)
# define Rte_InitValue_MotAg5SinRtOffs_Val (2.5F)
# define Rte_InitValue_MotVelMrf_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotAg5Meas_MotAg5Cos_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotAg5Meas_MotAg5CosAdcFaild_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotAg5Meas_MotAg5RawMecl_Val(P2VAR(u0p16, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotAg5Meas_MotAg5Sin_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotAg5Meas_MotAg5SinAdcFaild_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotAg5Meas_MotVelMrf_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotAg5Meas_MotAg5CosRtAmpRecpr_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotAg5Meas_MotAg5CosRtOffs_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotAg5Meas_MotAg5MeclQlfr_Val(SigQlfr1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotAg5Meas_MotAg5MeclRollgCntr_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotAg5Meas_MotAg5SinRtAmpRecpr_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotAg5Meas_MotAg5SinRtOffs_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg5Meas_CnvSnpshtData_f32_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_VAR) SnpshtDataCnvd_Arg, float32 SnpshtData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg5Meas_CnvSnpshtData_logl_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_VAR) SnpshtDataCnvd_Arg, boolean SnpshtData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg5Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, P2VAR(SigQlfr1, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_VAR) NtcQlfr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg5Meas_MotAg5EolPrm_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg5Meas_MotAg5EolPrm_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg5Meas_MotAg5StVari_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg5Meas_MotAg5StVari_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg5Meas_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotAg5Meas_MotAg5MeasAmpSqdMaxThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotAg5Meas_MotAg5MeasAmpSqdMinThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotAg5Meas_MotAg5MeasLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotAg5Meas_MotAg5MeasRtAmpRecprLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotAg5Meas_MotAg5MeasRtFilEnaThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotAg5Meas_MotAg5MeasRtMotVelFilEnaThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotAg5Meas_MotAg5MeasRtOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotAg5Meas_MotAg5MeasRtToNomRatLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u0p16, RTE_CODE) Rte_Prm_CDD_MotAg5Meas_MotAg5MeasOffs_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvRead_CDD_MotAg5Meas_MotAg5MeasPer1_MotAg5RtVari(P2VAR(MotAgRtPrmRec1, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_CDD_MotAg5Meas_MotAg5MeasPer1_MotAg5PrtclOk(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_CDD_MotAg5Meas_MotAg5MeasPer3_MotAg5PrtclOk(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_CDD_MotAg5Meas_MotAg5MeasPer3_MotAg5RtVari(P2CONST(MotAgRtPrmRec1, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_MotAg5Cos_Val Rte_Read_CDD_MotAg5Meas_MotAg5Cos_Val
# define Rte_Read_MotAg5CosAdcFaild_Logl Rte_Read_CDD_MotAg5Meas_MotAg5CosAdcFaild_Logl
# define Rte_Read_MotAg5RawMecl_Val Rte_Read_CDD_MotAg5Meas_MotAg5RawMecl_Val
# define Rte_Read_MotAg5Sin_Val Rte_Read_CDD_MotAg5Meas_MotAg5Sin_Val
# define Rte_Read_MotAg5SinAdcFaild_Logl Rte_Read_CDD_MotAg5Meas_MotAg5SinAdcFaild_Logl
# define Rte_Read_MotVelMrf_Val Rte_Read_CDD_MotAg5Meas_MotVelMrf_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotAg5CosRtAmpRecpr_Val Rte_Write_CDD_MotAg5Meas_MotAg5CosRtAmpRecpr_Val
# define Rte_Write_MotAg5CosRtOffs_Val Rte_Write_CDD_MotAg5Meas_MotAg5CosRtOffs_Val
# define Rte_Write_MotAg5MeclQlfr_Val Rte_Write_CDD_MotAg5Meas_MotAg5MeclQlfr_Val
# define Rte_Write_MotAg5MeclRollgCntr_Val Rte_Write_CDD_MotAg5Meas_MotAg5MeclRollgCntr_Val
# define Rte_Write_MotAg5SinRtAmpRecpr_Val Rte_Write_CDD_MotAg5Meas_MotAg5SinRtAmpRecpr_Val
# define Rte_Write_MotAg5SinRtOffs_Val Rte_Write_CDD_MotAg5Meas_MotAg5SinRtOffs_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_CnvSnpshtData_f32_Oper Rte_Call_CDD_MotAg5Meas_CnvSnpshtData_f32_Oper
# define Rte_Call_CnvSnpshtData_logl_Oper Rte_Call_CDD_MotAg5Meas_CnvSnpshtData_logl_Oper
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_CDD_MotAg5Meas_GetNtcQlfrSts_Oper
# define Rte_Call_MotAg5EolPrm_GetErrorStatus Rte_Call_CDD_MotAg5Meas_MotAg5EolPrm_GetErrorStatus
# define Rte_Call_MotAg5EolPrm_SetRamBlockStatus Rte_Call_CDD_MotAg5Meas_MotAg5EolPrm_SetRamBlockStatus
# define Rte_Call_MotAg5StVari_GetErrorStatus Rte_Call_CDD_MotAg5Meas_MotAg5StVari_GetErrorStatus
# define Rte_Call_MotAg5StVari_SetRamBlockStatus Rte_Call_CDD_MotAg5Meas_MotAg5StVari_SetRamBlockStatus
# define Rte_Call_SetNtcStsAndSnpshtData_Oper Rte_Call_CDD_MotAg5Meas_SetNtcStsAndSnpshtData_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_MotAg5MeasPer1_MotAg5RtVari(data) \
  Rte_IrvRead_CDD_MotAg5Meas_MotAg5MeasPer1_MotAg5RtVari(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_MotAg5MeasPer1_MotAg5PrtclOk(data) \
  Rte_IrvWrite_CDD_MotAg5Meas_MotAg5MeasPer1_MotAg5PrtclOk(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_MotAg5MeasPer3_MotAg5PrtclOk() \
  Rte_IrvRead_CDD_MotAg5Meas_MotAg5MeasPer3_MotAg5PrtclOk()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_MotAg5MeasPer3_MotAg5RtVari(data) \
  Rte_IrvWrite_CDD_MotAg5Meas_MotAg5MeasPer3_MotAg5RtVari(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_MotAg5MeasAmpSqdMaxThd_Val Rte_Prm_CDD_MotAg5Meas_MotAg5MeasAmpSqdMaxThd_Val

# define Rte_Prm_MotAg5MeasAmpSqdMinThd_Val Rte_Prm_CDD_MotAg5Meas_MotAg5MeasAmpSqdMinThd_Val

# define Rte_Prm_MotAg5MeasLpFilFrq_Val Rte_Prm_CDD_MotAg5Meas_MotAg5MeasLpFilFrq_Val

# define Rte_Prm_MotAg5MeasRtAmpRecprLim_Val Rte_Prm_CDD_MotAg5Meas_MotAg5MeasRtAmpRecprLim_Val

# define Rte_Prm_MotAg5MeasRtFilEnaThd_Val Rte_Prm_CDD_MotAg5Meas_MotAg5MeasRtFilEnaThd_Val

# define Rte_Prm_MotAg5MeasRtMotVelFilEnaThd_Val Rte_Prm_CDD_MotAg5Meas_MotAg5MeasRtMotVelFilEnaThd_Val

# define Rte_Prm_MotAg5MeasRtOffsLim_Val Rte_Prm_CDD_MotAg5Meas_MotAg5MeasRtOffsLim_Val

# define Rte_Prm_MotAg5MeasRtToNomRatLim_Val Rte_Prm_CDD_MotAg5Meas_MotAg5MeasRtToNomRatLim_Val

# define Rte_Prm_MotAg5MeasOffs_Val Rte_Prm_CDD_MotAg5Meas_MotAg5MeasOffs_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dMotAg5MeasAmpVal() (Rte_Inst_CDD_MotAg5Meas->Pim_dMotAg5MeasAmpVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevMotAg5Mecl() (Rte_Inst_CDD_MotAg5Meas->Pim_PrevMotAg5Mecl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5PrevRollgCntr() (Rte_Inst_CDD_MotAg5Meas->Pim_MotAg5PrevRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5NvmFltEna() (Rte_Inst_CDD_MotAg5Meas->Pim_MotAg5NvmFltEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5CosMaxLpFil() (Rte_Inst_CDD_MotAg5Meas->Pim_MotAg5CosMaxLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5CosMinLpFil() (Rte_Inst_CDD_MotAg5Meas->Pim_MotAg5CosMinLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5EolPrm() (Rte_Inst_CDD_MotAg5Meas->Pim_MotAg5EolPrm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5RtPrm() (Rte_Inst_CDD_MotAg5Meas->Pim_MotAg5RtPrm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5SinMaxLpFil() (Rte_Inst_CDD_MotAg5Meas->Pim_MotAg5SinMaxLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5SinMinLpFil() (Rte_Inst_CDD_MotAg5Meas->Pim_MotAg5SinMinLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5StVari() (Rte_Inst_CDD_MotAg5Meas->Pim_MotAg5StVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotAg5MeasAmpVal(void)
 *   u0p16 *Rte_Pim_PrevMotAg5Mecl(void)
 *   uint8 *Rte_Pim_MotAg5PrevRollgCntr(void)
 *   boolean *Rte_Pim_MotAg5NvmFltEna(void)
 *   FilLpRec1 *Rte_Pim_MotAg5CosMaxLpFil(void)
 *   FilLpRec1 *Rte_Pim_MotAg5CosMinLpFil(void)
 *   MotAgEolPrmRec1 *Rte_Pim_MotAg5EolPrm(void)
 *   MotAgRtPrmRec1 *Rte_Pim_MotAg5RtPrm(void)
 *   FilLpRec1 *Rte_Pim_MotAg5SinMaxLpFil(void)
 *   FilLpRec1 *Rte_Pim_MotAg5SinMinLpFil(void)
 *   MotAgStVariRec1 *Rte_Pim_MotAg5StVari(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotAg5MeasAmpSqdMaxThd_Val(void)
 *   float32 Rte_Prm_MotAg5MeasAmpSqdMinThd_Val(void)
 *   float32 Rte_Prm_MotAg5MeasLpFilFrq_Val(void)
 *   float32 Rte_Prm_MotAg5MeasRtAmpRecprLim_Val(void)
 *   float32 Rte_Prm_MotAg5MeasRtFilEnaThd_Val(void)
 *   float32 Rte_Prm_MotAg5MeasRtMotVelFilEnaThd_Val(void)
 *   float32 Rte_Prm_MotAg5MeasRtOffsLim_Val(void)
 *   float32 Rte_Prm_MotAg5MeasRtToNomRatLim_Val(void)
 *   u0p16 Rte_Prm_MotAg5MeasOffs_Val(void)
 *
 *********************************************************************************************************************/


# define CDD_MotAg5Meas_START_SEC_CODE
# include "CDD_MotAg5Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg5EolPrmRead_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <MotAg5EolPrmRead>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void MotAg5EolPrmRead_Oper(MotAgEolPrmRec1 *MotAgEolPrmData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotAg5EolPrmRead_Oper MotAg5EolPrmRead_Oper
FUNC(void, CDD_MotAg5Meas_CODE) MotAg5EolPrmRead_Oper(P2VAR(MotAgEolPrmRec1, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_VAR) MotAgEolPrmData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg5EolPrmWr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <MotAg5EolPrmWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotAg5EolPrm_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void MotAg5EolPrmWr_Oper(const MotAgEolPrmRec1 *MotAgEolPrmData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotAg5EolPrmWr_Oper MotAg5EolPrmWr_Oper
FUNC(void, CDD_MotAg5Meas_CODE) MotAg5EolPrmWr_Oper(P2CONST(MotAgEolPrmRec1, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_DATA) MotAgEolPrmData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg5MeasInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotAg5EolPrm_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotAg5StVari_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotAg5MeasInit1 MotAg5MeasInit1
FUNC(void, CDD_MotAg5Meas_CODE) MotAg5MeasInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg5MeasPer1
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
 *   Std_ReturnType Rte_Read_MotAg5Cos_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAg5CosAdcFaild_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotAg5Sin_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAg5SinAdcFaild_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotAg5CosRtAmpRecpr_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotAg5CosRtOffs_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotAg5MeclQlfr_Val(SigQlfr1 data)
 *   Std_ReturnType Rte_Write_MotAg5MeclRollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_MotAg5SinRtAmpRecpr_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotAg5SinRtOffs_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   void Rte_IrvRead_MotAg5MeasPer1_MotAg5RtVari(MotAgRtPrmRec1 *data)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_MotAg5MeasPer1_MotAg5PrtclOk(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CnvSnpshtData_f32_Oper(uint32 *SnpshtDataCnvd_Arg, float32 SnpshtData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CnvSnpshtData_logl_Oper(uint32 *SnpshtDataCnvd_Arg, boolean SnpshtData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts1_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotAg5MeasPer1 MotAg5MeasPer1
FUNC(void, CDD_MotAg5Meas_CODE) MotAg5MeasPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg5MeasPer3
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
 *   Std_ReturnType Rte_Read_MotAg5Cos_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAg5RawMecl_Val(u0p16 *data)
 *   Std_ReturnType Rte_Read_MotAg5Sin_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_MotAg5MeasPer3_MotAg5PrtclOk(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_MotAg5MeasPer3_MotAg5RtVari(MotAgRtPrmRec1 *data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotAg5StVari_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotAg5MeasPer3 MotAg5MeasPer3
FUNC(void, CDD_MotAg5Meas_CODE) MotAg5MeasPer3(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_MotAg5Meas_STOP_SEC_CODE
# include "CDD_MotAg5Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts1_PortIf1_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# define RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_MOTAG5MEAS_H */

#include "Rte_Stubs.h"
