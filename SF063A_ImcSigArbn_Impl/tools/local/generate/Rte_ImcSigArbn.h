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
 *          File:  Rte_ImcSigArbn.h
 *        Config:  E:/EA4NewTemplate/SF063A_ImcSigArbn_Impl/tools/Component.dpa
 *     SW-C Type:  ImcSigArbn
 *  Generated at:  Wed Aug 16 17:13:37 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <ImcSigArbn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_IMCSIGARBN_H
# define _RTE_IMCSIGARBN_H

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

# include "Rte_ImcSigArbn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_ImcSigArbn
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ArbnErrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ArbnFltPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ArbnFltRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgTarLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgTarOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotVelCrfOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PosnServoIntgtrLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PosnServoIntgtrOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PullCmpLongTermCmpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PullCmpLongTermIntgtrStOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PullCmpShoTermCmpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PullCmpShoTermIntgtrStOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SysStLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SysStRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrakgIntgtrSt1LpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrakgIntgtrSt1Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrakgIntgtrSt2LpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrakgIntgtrSt2Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VehSpdLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VehSpdOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_ImcSigArbn, RTE_CONST, RTE_CONST) Rte_Inst_ImcSigArbn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_ImcSigArbn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_EcuIdn_Val (0U)
# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAgImcCorrd_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwTqImcCorrd_Val (0.0F)
# define Rte_InitValue_ImcSysSt_Val (3U)
# define Rte_InitValue_ImcSysStVld_Logl (FALSE)
# define Rte_InitValue_MotVelCrf_Val (0.0F)
# define Rte_InitValue_MotVelCrfImcCorrd_Val (0.0F)
# define Rte_InitValue_PosnServoHwAg_Val (0.0F)
# define Rte_InitValue_PosnServoHwAgImcCorrd_Val (0.0F)
# define Rte_InitValue_PosnServoIntgtrOffs_Val (0.0F)
# define Rte_InitValue_PosnServoIntgtrSt_Val (0.0F)
# define Rte_InitValue_PosnTrakgArbnFltMtgtnEna_Logl (FALSE)
# define Rte_InitValue_PosnTrakgIntgtrSt1_Val (0.0F)
# define Rte_InitValue_PosnTrakgIntgtrSt1Offs_Val (0.0F)
# define Rte_InitValue_PosnTrakgIntgtrSt2_Val (0.0F)
# define Rte_InitValue_PosnTrakgIntgtrSt2Offs_Val (0.0F)
# define Rte_InitValue_PullCmpLongTermIntgtrSt_Val (0.0F)
# define Rte_InitValue_PullCmpLongTermIntgtrStOffs_Val (0.0F)
# define Rte_InitValue_PullCmpShoTermIntgtrSt_Val (0.0F)
# define Rte_InitValue_PullCmpShoTermIntgtrStOffs_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdImcCorrd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcSigArbn_EcuIdn_Val(P2VAR(uint8, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcSigArbn_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcSigArbn_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcSigArbn_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcSigArbn_PosnServoHwAg_Val(P2VAR(float32, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcSigArbn_PosnServoIntgtrSt_Val(P2VAR(float32, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcSigArbn_PosnTrakgIntgtrSt1_Val(P2VAR(float32, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcSigArbn_PosnTrakgIntgtrSt2_Val(P2VAR(float32, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcSigArbn_PullCmpLongTermIntgtrSt_Val(P2VAR(float32, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcSigArbn_PullCmpShoTermIntgtrSt_Val(P2VAR(float32, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcSigArbn_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ImcSigArbn_HwAgImcCorrd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ImcSigArbn_HwTqImcCorrd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ImcSigArbn_ImcSysSt_Val(SysSt1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ImcSigArbn_ImcSysStVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ImcSigArbn_MotVelCrfImcCorrd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ImcSigArbn_PosnServoHwAgImcCorrd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ImcSigArbn_PosnServoIntgtrOffs_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ImcSigArbn_PosnTrakgArbnFltMtgtnEna_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ImcSigArbn_PosnTrakgIntgtrSt1Offs_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ImcSigArbn_PosnTrakgIntgtrSt2Offs_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ImcSigArbn_PullCmpLongTermIntgtrStOffs_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ImcSigArbn_PullCmpShoTermIntgtrStOffs_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ImcSigArbn_VehSpdImcCorrd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ImcSigArbn_GetImcSigData_f32_Oper(uint16 SigId_Arg, P2VAR(float32, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ImcSigArbn_GetImcSigData_logl_Oper(uint16 SigId_Arg, P2VAR(boolean, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ImcSigArbn_GetImcSigData_u08_Oper(uint16 SigId_Arg, P2VAR(uint8, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ImcSigArbn_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ImcSigArbn_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_IMCSIGARBN_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ImcSigArbn_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnArbnFltTmr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnHwAgArbnLpFil_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnHwAgArbnOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnHwAgTarArbnLpFil_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnHwAgTarArbnOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnHwTqArbnLpFil_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnHwTqArbnOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnMotVelArbnLpFil_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnMotVelArbnOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnPosnServoArbnOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnPosnServoIntgtrStArbnLpFil_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnPosnTrakg1ArbnOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnPosnTrakg2ArbnOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnPullCmpLongTermArbnOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnPullCmpShoTermArbnOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnSysStTmr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnTrakgIntgtrSt1ArbnLpFil_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnTrakgIntgtrSt2ArbnLpFil_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnVehSpdArbnLpFil_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnVehSpdArbnOffsLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnHwAgArbnEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnHwAgTarArbnEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnHwTqArbnEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnMotVelArbnEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnPosnServoIntgtrStArbnEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnPullCmpLongTermIntgtrStArbnEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnPullCmpShoTermIntgtrStArbnEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnTrakgIntgtrSt1ArbnEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnTrakgIntgtrSt2ArbnEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_ImcSigArbn_ImcSigArbnVehSpdArbnEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_ImcSigArbn_ImcSigArbnPer1_HwAgOffs(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_ImcSigArbn_ImcSigArbnPer1_HwAgTarOffs(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_ImcSigArbn_ImcSigArbnPer1_HwTqOffs(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(SysSt1, RTE_CODE) Rte_IrvRead_ImcSigArbn_ImcSigArbnPer1_ImcSysSt10MilliSec(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_ImcSigArbn_ImcSigArbnPer1_ImcSysStVld10MilliSec(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_ImcSigArbn_ImcSigArbnPer1_MotVelCrfOffs(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_ImcSigArbn_ImcSigArbnPer1_VehSpdOffs(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_ImcSigArbn_ImcSigArbnPer2_HwAgOffs(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_ImcSigArbn_ImcSigArbnPer2_HwAgTarOffs(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_ImcSigArbn_ImcSigArbnPer2_HwTqOffs(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_ImcSigArbn_ImcSigArbnPer2_ImcSysSt10MilliSec(SysSt1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_ImcSigArbn_ImcSigArbnPer2_ImcSysStVld10MilliSec(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_ImcSigArbn_ImcSigArbnPer2_MotVelCrfOffs(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_ImcSigArbn_ImcSigArbnPer2_VehSpdOffs(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EcuIdn_Val Rte_Read_ImcSigArbn_EcuIdn_Val
# define Rte_Read_HwAg_Val Rte_Read_ImcSigArbn_HwAg_Val
# define Rte_Read_HwTq_Val Rte_Read_ImcSigArbn_HwTq_Val
# define Rte_Read_MotVelCrf_Val Rte_Read_ImcSigArbn_MotVelCrf_Val
# define Rte_Read_PosnServoHwAg_Val Rte_Read_ImcSigArbn_PosnServoHwAg_Val
# define Rte_Read_PosnServoIntgtrSt_Val Rte_Read_ImcSigArbn_PosnServoIntgtrSt_Val
# define Rte_Read_PosnTrakgIntgtrSt1_Val Rte_Read_ImcSigArbn_PosnTrakgIntgtrSt1_Val
# define Rte_Read_PosnTrakgIntgtrSt2_Val Rte_Read_ImcSigArbn_PosnTrakgIntgtrSt2_Val
# define Rte_Read_PullCmpLongTermIntgtrSt_Val Rte_Read_ImcSigArbn_PullCmpLongTermIntgtrSt_Val
# define Rte_Read_PullCmpShoTermIntgtrSt_Val Rte_Read_ImcSigArbn_PullCmpShoTermIntgtrSt_Val
# define Rte_Read_VehSpd_Val Rte_Read_ImcSigArbn_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwAgImcCorrd_Val Rte_Write_ImcSigArbn_HwAgImcCorrd_Val
# define Rte_Write_HwTqImcCorrd_Val Rte_Write_ImcSigArbn_HwTqImcCorrd_Val
# define Rte_Write_ImcSysSt_Val Rte_Write_ImcSigArbn_ImcSysSt_Val
# define Rte_Write_ImcSysStVld_Logl Rte_Write_ImcSigArbn_ImcSysStVld_Logl
# define Rte_Write_MotVelCrfImcCorrd_Val Rte_Write_ImcSigArbn_MotVelCrfImcCorrd_Val
# define Rte_Write_PosnServoHwAgImcCorrd_Val Rte_Write_ImcSigArbn_PosnServoHwAgImcCorrd_Val
# define Rte_Write_PosnServoIntgtrOffs_Val Rte_Write_ImcSigArbn_PosnServoIntgtrOffs_Val
# define Rte_Write_PosnTrakgArbnFltMtgtnEna_Logl Rte_Write_ImcSigArbn_PosnTrakgArbnFltMtgtnEna_Logl
# define Rte_Write_PosnTrakgIntgtrSt1Offs_Val Rte_Write_ImcSigArbn_PosnTrakgIntgtrSt1Offs_Val
# define Rte_Write_PosnTrakgIntgtrSt2Offs_Val Rte_Write_ImcSigArbn_PosnTrakgIntgtrSt2Offs_Val
# define Rte_Write_PullCmpLongTermIntgtrStOffs_Val Rte_Write_ImcSigArbn_PullCmpLongTermIntgtrStOffs_Val
# define Rte_Write_PullCmpShoTermIntgtrStOffs_Val Rte_Write_ImcSigArbn_PullCmpShoTermIntgtrStOffs_Val
# define Rte_Write_VehSpdImcCorrd_Val Rte_Write_ImcSigArbn_VehSpdImcCorrd_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetImcSigData_f32_Oper Rte_Call_ImcSigArbn_GetImcSigData_f32_Oper
# define Rte_Call_GetImcSigData_logl_Oper Rte_Call_ImcSigArbn_GetImcSigData_logl_Oper
# define Rte_Call_GetImcSigData_u08_Oper Rte_Call_ImcSigArbn_GetImcSigData_u08_Oper
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_ImcSigArbn_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_ImcSigArbn_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_ImcSigArbn_SetNtcSts_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_ImcSigArbnPer1_HwAgOffs() \
  Rte_IrvRead_ImcSigArbn_ImcSigArbnPer1_HwAgOffs()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_ImcSigArbnPer1_HwAgTarOffs() \
  Rte_IrvRead_ImcSigArbn_ImcSigArbnPer1_HwAgTarOffs()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_ImcSigArbnPer1_HwTqOffs() \
  Rte_IrvRead_ImcSigArbn_ImcSigArbnPer1_HwTqOffs()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_ImcSigArbnPer1_ImcSysSt10MilliSec() \
  Rte_IrvRead_ImcSigArbn_ImcSigArbnPer1_ImcSysSt10MilliSec()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_ImcSigArbnPer1_ImcSysStVld10MilliSec() \
  Rte_IrvRead_ImcSigArbn_ImcSigArbnPer1_ImcSysStVld10MilliSec()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_ImcSigArbnPer1_MotVelCrfOffs() \
  Rte_IrvRead_ImcSigArbn_ImcSigArbnPer1_MotVelCrfOffs()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_ImcSigArbnPer1_VehSpdOffs() \
  Rte_IrvRead_ImcSigArbn_ImcSigArbnPer1_VehSpdOffs()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_ImcSigArbnPer2_HwAgOffs(data) \
  Rte_IrvWrite_ImcSigArbn_ImcSigArbnPer2_HwAgOffs(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_ImcSigArbnPer2_HwAgTarOffs(data) \
  Rte_IrvWrite_ImcSigArbn_ImcSigArbnPer2_HwAgTarOffs(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_ImcSigArbnPer2_HwTqOffs(data) \
  Rte_IrvWrite_ImcSigArbn_ImcSigArbnPer2_HwTqOffs(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_ImcSigArbnPer2_ImcSysSt10MilliSec(data) \
  Rte_IrvWrite_ImcSigArbn_ImcSigArbnPer2_ImcSysSt10MilliSec(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_ImcSigArbnPer2_ImcSysStVld10MilliSec(data) \
  Rte_IrvWrite_ImcSigArbn_ImcSigArbnPer2_ImcSysStVld10MilliSec(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_ImcSigArbnPer2_MotVelCrfOffs(data) \
  Rte_IrvWrite_ImcSigArbn_ImcSigArbnPer2_MotVelCrfOffs(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_ImcSigArbnPer2_VehSpdOffs(data) \
  Rte_IrvWrite_ImcSigArbn_ImcSigArbnPer2_VehSpdOffs(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_ImcSigArbnArbnFltTmr_Val Rte_Prm_ImcSigArbn_ImcSigArbnArbnFltTmr_Val

# define Rte_Prm_ImcSigArbnHwAgArbnLpFil_Val Rte_Prm_ImcSigArbn_ImcSigArbnHwAgArbnLpFil_Val

# define Rte_Prm_ImcSigArbnHwAgArbnOffsLim_Val Rte_Prm_ImcSigArbn_ImcSigArbnHwAgArbnOffsLim_Val

# define Rte_Prm_ImcSigArbnHwAgTarArbnLpFil_Val Rte_Prm_ImcSigArbn_ImcSigArbnHwAgTarArbnLpFil_Val

# define Rte_Prm_ImcSigArbnHwAgTarArbnOffsLim_Val Rte_Prm_ImcSigArbn_ImcSigArbnHwAgTarArbnOffsLim_Val

# define Rte_Prm_ImcSigArbnHwTqArbnLpFil_Val Rte_Prm_ImcSigArbn_ImcSigArbnHwTqArbnLpFil_Val

# define Rte_Prm_ImcSigArbnHwTqArbnOffsLim_Val Rte_Prm_ImcSigArbn_ImcSigArbnHwTqArbnOffsLim_Val

# define Rte_Prm_ImcSigArbnMotVelArbnLpFil_Val Rte_Prm_ImcSigArbn_ImcSigArbnMotVelArbnLpFil_Val

# define Rte_Prm_ImcSigArbnMotVelArbnOffsLim_Val Rte_Prm_ImcSigArbn_ImcSigArbnMotVelArbnOffsLim_Val

# define Rte_Prm_ImcSigArbnPosnServoArbnOffsLim_Val Rte_Prm_ImcSigArbn_ImcSigArbnPosnServoArbnOffsLim_Val

# define Rte_Prm_ImcSigArbnPosnServoIntgtrStArbnLpFil_Val Rte_Prm_ImcSigArbn_ImcSigArbnPosnServoIntgtrStArbnLpFil_Val

# define Rte_Prm_ImcSigArbnPosnTrakg1ArbnOffsLim_Val Rte_Prm_ImcSigArbn_ImcSigArbnPosnTrakg1ArbnOffsLim_Val

# define Rte_Prm_ImcSigArbnPosnTrakg2ArbnOffsLim_Val Rte_Prm_ImcSigArbn_ImcSigArbnPosnTrakg2ArbnOffsLim_Val

# define Rte_Prm_ImcSigArbnPullCmpLongTermArbnOffsLim_Val Rte_Prm_ImcSigArbn_ImcSigArbnPullCmpLongTermArbnOffsLim_Val

# define Rte_Prm_ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil_Val Rte_Prm_ImcSigArbn_ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil_Val

# define Rte_Prm_ImcSigArbnPullCmpShoTermArbnOffsLim_Val Rte_Prm_ImcSigArbn_ImcSigArbnPullCmpShoTermArbnOffsLim_Val

# define Rte_Prm_ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil_Val Rte_Prm_ImcSigArbn_ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil_Val

# define Rte_Prm_ImcSigArbnSysStTmr_Val Rte_Prm_ImcSigArbn_ImcSigArbnSysStTmr_Val

# define Rte_Prm_ImcSigArbnTrakgIntgtrSt1ArbnLpFil_Val Rte_Prm_ImcSigArbn_ImcSigArbnTrakgIntgtrSt1ArbnLpFil_Val

# define Rte_Prm_ImcSigArbnTrakgIntgtrSt2ArbnLpFil_Val Rte_Prm_ImcSigArbn_ImcSigArbnTrakgIntgtrSt2ArbnLpFil_Val

# define Rte_Prm_ImcSigArbnVehSpdArbnLpFil_Val Rte_Prm_ImcSigArbn_ImcSigArbnVehSpdArbnLpFil_Val

# define Rte_Prm_ImcSigArbnVehSpdArbnOffsLim_Val Rte_Prm_ImcSigArbn_ImcSigArbnVehSpdArbnOffsLim_Val

# define Rte_Prm_ImcSigArbnHwAgArbnEna_Logl Rte_Prm_ImcSigArbn_ImcSigArbnHwAgArbnEna_Logl

# define Rte_Prm_ImcSigArbnHwAgTarArbnEna_Logl Rte_Prm_ImcSigArbn_ImcSigArbnHwAgTarArbnEna_Logl

# define Rte_Prm_ImcSigArbnHwTqArbnEna_Logl Rte_Prm_ImcSigArbn_ImcSigArbnHwTqArbnEna_Logl

# define Rte_Prm_ImcSigArbnMotVelArbnEna_Logl Rte_Prm_ImcSigArbn_ImcSigArbnMotVelArbnEna_Logl

# define Rte_Prm_ImcSigArbnPosnServoIntgtrStArbnEna_Logl Rte_Prm_ImcSigArbn_ImcSigArbnPosnServoIntgtrStArbnEna_Logl

# define Rte_Prm_ImcSigArbnPullCmpLongTermIntgtrStArbnEna_Logl Rte_Prm_ImcSigArbn_ImcSigArbnPullCmpLongTermIntgtrStArbnEna_Logl

# define Rte_Prm_ImcSigArbnPullCmpShoTermIntgtrStArbnEna_Logl Rte_Prm_ImcSigArbn_ImcSigArbnPullCmpShoTermIntgtrStArbnEna_Logl

# define Rte_Prm_ImcSigArbnTrakgIntgtrSt1ArbnEna_Logl Rte_Prm_ImcSigArbn_ImcSigArbnTrakgIntgtrSt1ArbnEna_Logl

# define Rte_Prm_ImcSigArbnTrakgIntgtrSt2ArbnEna_Logl Rte_Prm_ImcSigArbn_ImcSigArbnTrakgIntgtrSt2ArbnEna_Logl

# define Rte_Prm_ImcSigArbnVehSpdArbnEna_Logl Rte_Prm_ImcSigArbn_ImcSigArbnVehSpdArbnEna_Logl

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwAgOffsPrev() (Rte_Inst_ImcSigArbn->Pim_HwAgOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgTarOffsPrev() (Rte_Inst_ImcSigArbn->Pim_HwAgTarOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqOffsPrev() (Rte_Inst_ImcSigArbn->Pim_HwTqOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotVelCrfOffsPrev() (Rte_Inst_ImcSigArbn->Pim_MotVelCrfOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PosnServoIntgtrOffsPrev() (Rte_Inst_ImcSigArbn->Pim_PosnServoIntgtrOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PullCmpLongTermIntgtrStOffsPrev() (Rte_Inst_ImcSigArbn->Pim_PullCmpLongTermIntgtrStOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PullCmpShoTermIntgtrStOffsPrev() (Rte_Inst_ImcSigArbn->Pim_PullCmpShoTermIntgtrStOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrakgIntgtrSt1Offs() (Rte_Inst_ImcSigArbn->Pim_TrakgIntgtrSt1Offs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrakgIntgtrSt2Offs() (Rte_Inst_ImcSigArbn->Pim_TrakgIntgtrSt2Offs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_VehSpdOffsPrev() (Rte_Inst_ImcSigArbn->Pim_VehSpdOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ArbnFltRefTiEnaLrng() (Rte_Inst_ImcSigArbn->Pim_ArbnFltRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SysStRefTiEnaLrng() (Rte_Inst_ImcSigArbn->Pim_SysStRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ArbnErrPrev() (Rte_Inst_ImcSigArbn->Pim_ArbnErrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ArbnFltPrev() (Rte_Inst_ImcSigArbn->Pim_ArbnFltPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SysStLrngEnaPrev() (Rte_Inst_ImcSigArbn->Pim_SysStLrngEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgLpFil() (Rte_Inst_ImcSigArbn->Pim_HwAgLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgTarLpFil() (Rte_Inst_ImcSigArbn->Pim_HwAgTarLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqLpFil() (Rte_Inst_ImcSigArbn->Pim_HwTqLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotVelLpFil() (Rte_Inst_ImcSigArbn->Pim_MotVelLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PosnServoIntgtrLpFil() (Rte_Inst_ImcSigArbn->Pim_PosnServoIntgtrLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PullCmpLongTermCmpLpFil() (Rte_Inst_ImcSigArbn->Pim_PullCmpLongTermCmpLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PullCmpShoTermCmpLpFil() (Rte_Inst_ImcSigArbn->Pim_PullCmpShoTermCmpLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrakgIntgtrSt1LpFil() (Rte_Inst_ImcSigArbn->Pim_TrakgIntgtrSt1LpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrakgIntgtrSt2LpFil() (Rte_Inst_ImcSigArbn->Pim_TrakgIntgtrSt2LpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_VehSpdLpFil() (Rte_Inst_ImcSigArbn->Pim_VehSpdLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwAgOffsPrev(void)
 *   float32 *Rte_Pim_HwAgTarOffsPrev(void)
 *   float32 *Rte_Pim_HwTqOffsPrev(void)
 *   float32 *Rte_Pim_MotVelCrfOffsPrev(void)
 *   float32 *Rte_Pim_PosnServoIntgtrOffsPrev(void)
 *   float32 *Rte_Pim_PullCmpLongTermIntgtrStOffsPrev(void)
 *   float32 *Rte_Pim_PullCmpShoTermIntgtrStOffsPrev(void)
 *   float32 *Rte_Pim_TrakgIntgtrSt1Offs(void)
 *   float32 *Rte_Pim_TrakgIntgtrSt2Offs(void)
 *   float32 *Rte_Pim_VehSpdOffsPrev(void)
 *   uint32 *Rte_Pim_ArbnFltRefTiEnaLrng(void)
 *   uint32 *Rte_Pim_SysStRefTiEnaLrng(void)
 *   boolean *Rte_Pim_ArbnErrPrev(void)
 *   boolean *Rte_Pim_ArbnFltPrev(void)
 *   boolean *Rte_Pim_SysStLrngEnaPrev(void)
 *   FilLpRec1 *Rte_Pim_HwAgLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwAgTarLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqLpFil(void)
 *   FilLpRec1 *Rte_Pim_MotVelLpFil(void)
 *   FilLpRec1 *Rte_Pim_PosnServoIntgtrLpFil(void)
 *   FilLpRec1 *Rte_Pim_PullCmpLongTermCmpLpFil(void)
 *   FilLpRec1 *Rte_Pim_PullCmpShoTermCmpLpFil(void)
 *   FilLpRec1 *Rte_Pim_TrakgIntgtrSt1LpFil(void)
 *   FilLpRec1 *Rte_Pim_TrakgIntgtrSt2LpFil(void)
 *   FilLpRec1 *Rte_Pim_VehSpdLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_ImcSigArbnArbnFltTmr_Val(void)
 *   float32 Rte_Prm_ImcSigArbnHwAgArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnHwAgArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnHwAgTarArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnHwAgTarArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnHwTqArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnHwTqArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnMotVelArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnMotVelArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnPosnServoArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnPosnServoIntgtrStArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnPosnTrakg1ArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnPosnTrakg2ArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnPullCmpLongTermArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnPullCmpShoTermArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnSysStTmr_Val(void)
 *   float32 Rte_Prm_ImcSigArbnTrakgIntgtrSt1ArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnTrakgIntgtrSt2ArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnVehSpdArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnVehSpdArbnOffsLim_Val(void)
 *   boolean Rte_Prm_ImcSigArbnHwAgArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnHwAgTarArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnHwTqArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnMotVelArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnPosnServoIntgtrStArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnPullCmpLongTermIntgtrStArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnPullCmpShoTermIntgtrStArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnTrakgIntgtrSt1ArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnTrakgIntgtrSt2ArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnVehSpdArbnEna_Logl(void)
 *
 *********************************************************************************************************************/


# define ImcSigArbn_START_SEC_CODE
# include "ImcSigArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcSigArbnInit1
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

# define RTE_RUNNABLE_ImcSigArbnInit1 ImcSigArbnInit1
FUNC(void, ImcSigArbn_CODE) ImcSigArbnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcSigArbnPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnServoHwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgImcCorrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqImcCorrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_ImcSysSt_Val(SysSt1 data)
 *   Std_ReturnType Rte_Write_ImcSysStVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotVelCrfImcCorrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_PosnServoHwAgImcCorrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehSpdImcCorrd_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_ImcSigArbnPer1_HwAgOffs(void)
 *   float32 Rte_IrvRead_ImcSigArbnPer1_HwAgTarOffs(void)
 *   float32 Rte_IrvRead_ImcSigArbnPer1_HwTqOffs(void)
 *   SysSt1 Rte_IrvRead_ImcSigArbnPer1_ImcSysSt10MilliSec(void)
 *   boolean Rte_IrvRead_ImcSigArbnPer1_ImcSysStVld10MilliSec(void)
 *   float32 Rte_IrvRead_ImcSigArbnPer1_MotVelCrfOffs(void)
 *   float32 Rte_IrvRead_ImcSigArbnPer1_VehSpdOffs(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetImcSigData_u08_Oper(uint16 SigId_Arg, uint8 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_u08_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ImcSigArbnPer1 ImcSigArbnPer1
FUNC(void, ImcSigArbn_CODE) ImcSigArbnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcSigArbnPer2
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
 *   Std_ReturnType Rte_Read_EcuIdn_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnServoHwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnServoIntgtrSt_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnTrakgIntgtrSt1_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnTrakgIntgtrSt2_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PullCmpLongTermIntgtrSt_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PullCmpShoTermIntgtrSt_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PosnServoIntgtrOffs_Val(float32 data)
 *   Std_ReturnType Rte_Write_PosnTrakgArbnFltMtgtnEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_PosnTrakgIntgtrSt1Offs_Val(float32 data)
 *   Std_ReturnType Rte_Write_PosnTrakgIntgtrSt2Offs_Val(float32 data)
 *   Std_ReturnType Rte_Write_PullCmpLongTermIntgtrStOffs_Val(float32 data)
 *   Std_ReturnType Rte_Write_PullCmpShoTermIntgtrStOffs_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_ImcSigArbnPer2_HwAgOffs(float32 data)
 *   void Rte_IrvWrite_ImcSigArbnPer2_HwAgTarOffs(float32 data)
 *   void Rte_IrvWrite_ImcSigArbnPer2_HwTqOffs(float32 data)
 *   void Rte_IrvWrite_ImcSigArbnPer2_ImcSysSt10MilliSec(SysSt1 data)
 *   void Rte_IrvWrite_ImcSigArbnPer2_ImcSysStVld10MilliSec(boolean data)
 *   void Rte_IrvWrite_ImcSigArbnPer2_MotVelCrfOffs(float32 data)
 *   void Rte_IrvWrite_ImcSigArbnPer2_VehSpdOffs(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetImcSigData_f32_Oper(uint16 SigId_Arg, float32 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_f32_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetImcSigData_logl_Oper(uint16 SigId_Arg, boolean *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetImcSigData_u08_Oper(uint16 SigId_Arg, uint8 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_u08_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ImcSigArbnPer2 ImcSigArbnPer2
FUNC(void, ImcSigArbn_CODE) ImcSigArbnPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define ImcSigArbn_STOP_SEC_CODE
# include "ImcSigArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetSigImcData_f32_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcData_u08_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_IMCSIGARBN_H */

#include "Rte_Stubs.h"
