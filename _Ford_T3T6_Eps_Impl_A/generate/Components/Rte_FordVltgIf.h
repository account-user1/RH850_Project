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
 *          File:  Rte_FordVltgIf.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordVltgIf>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDVLTGIF_H
# define _RTE_FORDVLTGIF_H

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

# include "Rte_FordVltgIf_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordEpsCurr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordVltgIf_FordEpsCurrVal_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordEpsVltg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordVltgIf_FordEpsVltgVal_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordVltgIf_FordFeatThdSts_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordVltgIf_FordInhbBattVltgDiagc_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordMaxBattCurr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordMinBattVltg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordVltgOperRamp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordVltgOperScar_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordVltgOperSt1, RTE_VAR_INIT) Rte_FordVltgIf_FordVltgOperSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ElecPwrCns_SplyCurrEstim_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_BattVltg_BrdgVltg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordActvParkAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordEpsSysSt1, RTE_VAR_INIT) Rte_FordSysSt_FordEpsSysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordEvasSteerAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneCentrAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneDprtrWarnEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneKeepAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCdng_FordMaxAsscTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordStrtStopSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrfcJamAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordVltgIf_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_ElPw_D_Stat, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehElecPwrSts_Ford_ElPw_D_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_Ignition_Status, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordVehIgnSts_Ford_Ignition_Status; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_PwPckTq_D_Stat, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_BattRtnCurr_Val (0.0F)
#  define Rte_InitValue_BattVltg_Val (6.0F)
#  define Rte_InitValue_FordActvParkAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordEpsCurr_Val (140.75F)
#  define Rte_InitValue_FordEpsCurrVal_Logl (FALSE)
#  define Rte_InitValue_FordEpsSysSt_Val (0U)
#  define Rte_InitValue_FordEpsVltg_Val (18.75F)
#  define Rte_InitValue_FordEpsVltgVal_Logl (FALSE)
#  define Rte_InitValue_FordEvasSteerAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordFeatThdSts_Logl (FALSE)
#  define Rte_InitValue_FordInhbBattVltgDiagc_Logl (FALSE)
#  define Rte_InitValue_FordLaneCentrAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordLaneDprtrWarnEnad_Logl (FALSE)
#  define Rte_InitValue_FordLaneKeepAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordMaxAsscTq_Val (0.0F)
#  define Rte_InitValue_FordMaxBattCurr_Val (0.0F)
#  define Rte_InitValue_FordMinBattVltg_Val (0.0F)
#  define Rte_InitValue_FordStrtStopSt_Val (0.0F)
#  define Rte_InitValue_FordSysSt_Val (3U)
#  define Rte_InitValue_FordTrfcJamAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordTrlrBackupAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordVehElecPwrSts_Ford_ElPw_D_Stat (0U)
#  define Rte_InitValue_FordVehIgnStsQly_Ford_Ignition_Status (0U)
#  define Rte_InitValue_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat (0U)
#  define Rte_InitValue_FordVehSpd_Val (0.0F)
#  define Rte_InitValue_FordVehSpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVltgOperRamp_Val (50.0F)
#  define Rte_InitValue_FordVltgOperScar_Val (0.0F)
#  define Rte_InitValue_FordVltgOperSt_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_BattRtnCurr_Val Rte_Read_FordVltgIf_BattRtnCurr_Val
#  define Rte_Read_FordVltgIf_BattRtnCurr_Val(data) (*(data) = Rte_ElecPwrCns_SplyCurrEstim_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_BattVltg_Val Rte_Read_FordVltgIf_BattVltg_Val
#  define Rte_Read_FordVltgIf_BattVltg_Val(data) (*(data) = Rte_BattVltg_BrdgVltg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordActvParkAssiEnad_Logl Rte_Read_FordVltgIf_FordActvParkAssiEnad_Logl
#  define Rte_Read_FordVltgIf_FordActvParkAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordActvParkAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsSysSt_Val Rte_Read_FordVltgIf_FordEpsSysSt_Val
#  define Rte_Read_FordVltgIf_FordEpsSysSt_Val(data) (*(data) = Rte_FordSysSt_FordEpsSysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEvasSteerAssiEnad_Logl Rte_Read_FordVltgIf_FordEvasSteerAssiEnad_Logl
#  define Rte_Read_FordVltgIf_FordEvasSteerAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordEvasSteerAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneCentrAssiEnad_Logl Rte_Read_FordVltgIf_FordLaneCentrAssiEnad_Logl
#  define Rte_Read_FordVltgIf_FordLaneCentrAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordLaneCentrAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneDprtrWarnEnad_Logl Rte_Read_FordVltgIf_FordLaneDprtrWarnEnad_Logl
#  define Rte_Read_FordVltgIf_FordLaneDprtrWarnEnad_Logl(data) (*(data) = Rte_CustDiag_FordLaneDprtrWarnEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneKeepAssiEnad_Logl Rte_Read_FordVltgIf_FordLaneKeepAssiEnad_Logl
#  define Rte_Read_FordVltgIf_FordLaneKeepAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordLaneKeepAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMaxAsscTq_Val Rte_Read_FordVltgIf_FordMaxAsscTq_Val
#  define Rte_Read_FordVltgIf_FordMaxAsscTq_Val(data) (*(data) = Rte_FordHwTqCdng_FordMaxAsscTq_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordStrtStopSt_Val Rte_Read_FordVltgIf_FordStrtStopSt_Val
#  define Rte_Read_FordVltgIf_FordStrtStopSt_Val(data) (*(data) = Rte_FordVltgIf_FordStrtStopSt_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordSysSt_Val Rte_Read_FordVltgIf_FordSysSt_Val
#  define Rte_Read_FordVltgIf_FordSysSt_Val(data) (*(data) = Rte_SysStMod_SysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrfcJamAssiEnad_Logl Rte_Read_FordVltgIf_FordTrfcJamAssiEnad_Logl
#  define Rte_Read_FordVltgIf_FordTrfcJamAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordTrfcJamAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrlrBackupAssiEnad_Logl Rte_Read_FordVltgIf_FordTrlrBackupAssiEnad_Logl
#  define Rte_Read_FordVltgIf_FordTrlrBackupAssiEnad_Logl(data) (*(data) = Rte_FordVltgIf_FordTrlrBackupAssiEnad_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehElecPwrSts_Ford_ElPw_D_Stat Rte_Read_FordVltgIf_FordVehElecPwrSts_Ford_ElPw_D_Stat
#  define Rte_Read_FordVltgIf_FordVehElecPwrSts_Ford_ElPw_D_Stat(data) (*(data) = Rte_FordMsg167BusHiSpd_FordVehElecPwrSts_Ford_ElPw_D_Stat, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehIgnStsQly_Ford_Ignition_Status Rte_Read_FordVltgIf_FordVehIgnStsQly_Ford_Ignition_Status
#  define Rte_Read_FordVltgIf_FordVehIgnStsQly_Ford_Ignition_Status(data) (*(data) = Rte_FordMsg3B3BusHiSpd_FordVehIgnSts_Ford_Ignition_Status, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat Rte_Read_FordVltgIf_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat
#  define Rte_Read_FordVltgIf_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat(data) (*(data) = Rte_FordMsg167BusHiSpd_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpd_Val Rte_Read_FordVltgIf_FordVehSpd_Val
#  define Rte_Read_FordVltgIf_FordVehSpd_Val(data) (*(data) = Rte_ImcSigArbn_VehSpdImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpdVld_Logl Rte_Read_FordVltgIf_FordVehSpdVld_Logl
#  define Rte_Read_FordVltgIf_FordVehSpdVld_Logl(data) (*(data) = Rte_VehSigCdng_VehSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordEpsCurr_Val Rte_Write_FordVltgIf_FordEpsCurr_Val
#  define Rte_Write_FordVltgIf_FordEpsCurr_Val(data) (Rte_FordVltgIf_FordEpsCurr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordEpsCurrVal_Logl Rte_Write_FordVltgIf_FordEpsCurrVal_Logl
#  define Rte_Write_FordVltgIf_FordEpsCurrVal_Logl(data) (Rte_FordVltgIf_FordEpsCurrVal_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordEpsVltg_Val Rte_Write_FordVltgIf_FordEpsVltg_Val
#  define Rte_Write_FordVltgIf_FordEpsVltg_Val(data) (Rte_FordVltgIf_FordEpsVltg_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordEpsVltgVal_Logl Rte_Write_FordVltgIf_FordEpsVltgVal_Logl
#  define Rte_Write_FordVltgIf_FordEpsVltgVal_Logl(data) (Rte_FordVltgIf_FordEpsVltgVal_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordFeatThdSts_Logl Rte_Write_FordVltgIf_FordFeatThdSts_Logl
#  define Rte_Write_FordVltgIf_FordFeatThdSts_Logl(data) (Rte_FordVltgIf_FordFeatThdSts_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordInhbBattVltgDiagc_Logl Rte_Write_FordVltgIf_FordInhbBattVltgDiagc_Logl
#  define Rte_Write_FordVltgIf_FordInhbBattVltgDiagc_Logl(data) (Rte_FordVltgIf_FordInhbBattVltgDiagc_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordMaxBattCurr_Val Rte_Write_FordVltgIf_FordMaxBattCurr_Val
#  define Rte_Write_FordVltgIf_FordMaxBattCurr_Val(data) (Rte_FordVltgIf_FordMaxBattCurr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordMinBattVltg_Val Rte_Write_FordVltgIf_FordMinBattVltg_Val
#  define Rte_Write_FordVltgIf_FordMinBattVltg_Val(data) (Rte_FordVltgIf_FordMinBattVltg_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVltgOperRamp_Val Rte_Write_FordVltgIf_FordVltgOperRamp_Val
#  define Rte_Write_FordVltgIf_FordVltgOperRamp_Val(data) (Rte_FordVltgIf_FordVltgOperRamp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVltgOperScar_Val Rte_Write_FordVltgIf_FordVltgOperScar_Val
#  define Rte_Write_FordVltgIf_FordVltgOperScar_Val(data) (Rte_FordVltgIf_FordVltgOperScar_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVltgOperSt_Val Rte_Write_FordVltgIf_FordVltgOperSt_Val
#  define Rte_Write_FordVltgIf_FordVltgOperSt_Val(data) (Rte_FordVltgIf_FordVltgOperSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IMCARBN_APPL_CODE) GetSigImcData_f32_Oper(uint16 SigId_Arg, P2VAR(float32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetSigImcData_f32_Oper GetSigImcData_f32_Oper
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_FordVltgIfActvParkAssiAsscTqMin_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfActvParkAssiAsscTqMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfEPSBattVltgDifThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfEPSBattVltgDifThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfEpsBattCurrLim_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfEpsBattCurrLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfEpsCurrLim_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfEpsCurrLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfEvasSteerAssiTqMin_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfEvasSteerAssiTqMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfHiVltgAssiRampDwnRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfHiVltgAssiRampDwnRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfHiVltgAssiRampUpRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfHiVltgAssiRampUpRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfHiVltgNoAssiRampDwnRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfHiVltgNoAssiRampDwnRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfHiVltgThdHi_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfHiVltgThdHi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfHiVltgThdLo_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfHiVltgThdLo_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLaneCentrAssiTqMin_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLaneCentrAssiTqMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLaneDprtrWarnAsscTqMin_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLaneDprtrWarnAsscTqMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLkaAsscTqMin_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLkaAsscTqMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLoVltgAssiRampDwnRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLoVltgAssiRampDwnRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLoVltgAssiRampUpRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLoVltgAssiRampUpRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLoVltgAssiScar_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLoVltgAssiScar_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLoVltgNoAssiRampDwnRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLoVltgNoAssiRampDwnRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLoVltgThdHi_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLoVltgThdHi_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLoVltgThdLo_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLoVltgThdLo_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLoVltgThdMid_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLoVltgThdMid_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLoVltgTqScaDwnRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLoVltgTqScaDwnRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLoVltgTqScaUpRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLoVltgTqScaUpRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLoVltgTqScagFac_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLoVltgTqScagFac_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfTrfcJamAsscTqMin_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfTrfcJamAsscTqMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfTrlrBackupAssiTqMin_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfTrlrBackupAssiTqMin_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfVehBattCircR_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfVehBattCircR_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfHiVltgNoAssiRcvrTiMax_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfHiVltgNoAssiRcvrTiMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfHiVltgRcvrTiMax_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfHiVltgRcvrTiMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLoVltgInhbTiMax_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLoVltgInhbTiMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLoVltgRcvrTiMax_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLoVltgRcvrTiMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLoVltgThdMidToLoTiMax_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLoVltgThdMidToLoTiMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfFeatThdStsTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfFeatThdStsTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfHiVltgInhbTiMax_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfHiVltgInhbTiMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfInhbBattVltgDiagcTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfInhbBattVltgDiagcTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordVltgIfLoVltgNoAssiRcvrTiMax_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordVltgIfLoVltgNoAssiRcvrTiMax_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_MaxEpsBattCurrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_MinBattVltgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_PrevVltgOperRamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_PrevVltgOperScar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_FeatThdStsRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiVltgInhbRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiVltgNoAssiRcvrRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiVltgRcvrRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiVltgRcvrTiMaxRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_InhbBattVltgDiagcRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgInhbRefTi1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgInhbRefTi2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgInhbRefTi3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgNoAssiRcvrRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgRcvrRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgRcvrTiMaxRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgThdMidToLoRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgThdMidToLoRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiToLoChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiToMidChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoToHiChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoToMidChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_MidToHiChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_MidToLoChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_MaxEpsBattCurrPrev() \
  (&Rte_FordVltgIf_MaxEpsBattCurrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MinBattVltgPrev() \
  (&Rte_FordVltgIf_MinBattVltgPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevVltgOperRamp() \
  (&Rte_FordVltgIf_PrevVltgOperRamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevVltgOperScar() \
  (&Rte_FordVltgIf_PrevVltgOperScar) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FeatThdStsRefTi() \
  (&Rte_FordVltgIf_FeatThdStsRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HiVltgInhbRefTi() \
  (&Rte_FordVltgIf_HiVltgInhbRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HiVltgNoAssiRcvrRefTi() \
  (&Rte_FordVltgIf_HiVltgNoAssiRcvrRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HiVltgRcvrRefTi() \
  (&Rte_FordVltgIf_HiVltgRcvrRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HiVltgRcvrTiMaxRefTi() \
  (&Rte_FordVltgIf_HiVltgRcvrTiMaxRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_InhbBattVltgDiagcRefTi() \
  (&Rte_FordVltgIf_InhbBattVltgDiagcRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LoVltgInhbRefTi1() \
  (&Rte_FordVltgIf_LoVltgInhbRefTi1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LoVltgInhbRefTi2() \
  (&Rte_FordVltgIf_LoVltgInhbRefTi2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LoVltgInhbRefTi3() \
  (&Rte_FordVltgIf_LoVltgInhbRefTi3) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LoVltgNoAssiRcvrRefTi() \
  (&Rte_FordVltgIf_LoVltgNoAssiRcvrRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LoVltgRcvrRefTi() \
  (&Rte_FordVltgIf_LoVltgRcvrRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LoVltgRcvrTiMaxRefTi() \
  (&Rte_FordVltgIf_LoVltgRcvrTiMaxRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LoVltgThdMidToLoRefTi() \
  (&Rte_FordVltgIf_LoVltgThdMidToLoRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LoVltgThdMidToLoRefTmr() \
  (&Rte_FordVltgIf_LoVltgThdMidToLoRefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HiToLoChk() \
  (&Rte_FordVltgIf_HiToLoChk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HiToMidChk() \
  (&Rte_FordVltgIf_HiToMidChk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LoToHiChk() \
  (&Rte_FordVltgIf_LoToHiChk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LoToMidChk() \
  (&Rte_FordVltgIf_LoToMidChk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MidToHiChk() \
  (&Rte_FordVltgIf_MidToHiChk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MidToLoChk() \
  (&Rte_FordVltgIf_MidToLoChk) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordVltgIf_START_SEC_CODE
# include "FordVltgIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordVltgIfInit1 FordVltgIfInit1
#  define RTE_RUNNABLE_FordVltgIfPer1 FordVltgIfPer1
# endif

FUNC(void, FordVltgIf_CODE) FordVltgIfInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordVltgIf_CODE) FordVltgIfPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordVltgIf_STOP_SEC_CODE
# include "FordVltgIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetSigImcData_f32_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDVLTGIF_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
