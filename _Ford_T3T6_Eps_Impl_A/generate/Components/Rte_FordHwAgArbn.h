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
 *          File:  Rte_FordHwAgArbn.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordHwAgArbn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDHWAGARBN_H
# define _RTE_FORDHWAGARBN_H

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

# include "Rte_FordHwAgArbn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_StePinCompAnEst_D_Qf, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosnQlyFac_Ford_StePinCompAnEst_D_Qf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosnQlyFac8_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosntoSerlCom_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwAgArbn_FordHwVelVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwAgArbn_FordPosnOffsVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordRelHwPosn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwAgArbn_FordRelHwPosnVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordRelHwPosntoSerlCom_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordAbsPrsnt_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdEngModl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwTqImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint32, RTE_VAR_INIT) Rte_CDD_MotAgCmp_MotAgCumvAlgndMrf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgNotCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwAgArbn_FordSteerAgClrFlg_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_StePinOffst_D_Stat, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwAgCorrln_HwAgIdptSig_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_FordAbsPrsnt_Logl (FALSE)
#  define Rte_InitValue_FordCmpdHwPosn_Val (0.0F)
#  define Rte_InitValue_FordCmpdHwPosnQlyFac_Ford_StePinCompAnEst_D_Qf (1U)
#  define Rte_InitValue_FordCmpdHwPosnQlyFac8_Val (1U)
#  define Rte_InitValue_FordCmpdHwPosntoSerlCom_Val (0.0F)
#  define Rte_InitValue_FordEngVehSpd_Val (0.0F)
#  define Rte_InitValue_FordHwVelVld_Logl (FALSE)
#  define Rte_InitValue_FordInpTq_Val (0.0F)
#  define Rte_InitValue_FordMotVelVld_Logl (FALSE)
#  define Rte_InitValue_FordPosnOffsVld_Logl (FALSE)
#  define Rte_InitValue_FordRelHwPosn_Val (0.0F)
#  define Rte_InitValue_FordRelHwPosnVld_Logl (FALSE)
#  define Rte_InitValue_FordRelHwPosntoSerlCom_Val (0.0F)
#  define Rte_InitValue_FordSnsrInp_Val (0.0F)
#  define Rte_InitValue_FordSteerAgClrFlg_Logl (FALSE)
#  define Rte_InitValue_FordSteerPinionOffs_Val (0.0F)
#  define Rte_InitValue_FordSteerPinionOffsSts_Ford_StePinOffst_D_Stat (0U)
#  define Rte_InitValue_FordVehSteerPinionAgOffsVld_Logl (FALSE)
#  define Rte_InitValue_HwAgIdptSig_Val (2U)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_FordHwAgArbn_FordSnsrOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_FordAbsPrsnt_Logl Rte_Read_FordHwAgArbn_FordAbsPrsnt_Logl
#  define Rte_Read_FordHwAgArbn_FordAbsPrsnt_Logl(data) (*(data) = Rte_CustDiag_FordAbsPrsnt_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEngVehSpd_Val Rte_Read_FordHwAgArbn_FordEngVehSpd_Val
#  define Rte_Read_FordHwAgArbn_FordEngVehSpd_Val(data) (*(data) = Rte_FordMsg202BusHiSpd_FordVehSpdEngModl_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordInpTq_Val Rte_Read_FordHwAgArbn_FordInpTq_Val
#  define Rte_Read_FordHwAgArbn_FordInpTq_Val(data) (*(data) = Rte_ImcSigArbn_HwTqImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMotPosn_Val Rte_Read_FordHwAgArbn_FordMotPosn_Val
#  define Rte_Read_FordHwAgArbn_FordMotPosn_Val(data) (*(data) = Rte_CDD_MotAgCmp_MotAgCumvAlgndMrf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMotVelVld_Logl Rte_Read_FordHwAgArbn_FordMotVelVld_Logl
#  define Rte_Read_FordHwAgArbn_FordMotVelVld_Logl(data) (*(data) = Rte_CDD_MotVel_MotVelVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordSnsrInp_Val Rte_Read_FordHwAgArbn_FordSnsrInp_Val
#  define Rte_Read_FordHwAgArbn_FordSnsrInp_Val(data) (*(data) = Rte_HwAgSysArbn_HwAgNotCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordSteerAgClrFlg_Logl Rte_Read_FordHwAgArbn_FordSteerAgClrFlg_Logl
#  define Rte_Read_FordHwAgArbn_FordSteerAgClrFlg_Logl(data) (*(data) = Rte_FordHwAgArbn_FordSteerAgClrFlg_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordSteerPinionOffs_Val Rte_Read_FordHwAgArbn_FordSteerPinionOffs_Val
#  define Rte_Read_FordHwAgArbn_FordSteerPinionOffs_Val(data) (*(data) = Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffs_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordSteerPinionOffsSts_Ford_StePinOffst_D_Stat Rte_Read_FordHwAgArbn_FordSteerPinionOffsSts_Ford_StePinOffst_D_Stat
#  define Rte_Read_FordHwAgArbn_FordSteerPinionOffsSts_Ford_StePinOffst_D_Stat(data) (*(data) = Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSteerPinionAgOffsVld_Logl Rte_Read_FordHwAgArbn_FordVehSteerPinionAgOffsVld_Logl
#  define Rte_Read_FordHwAgArbn_FordVehSteerPinionAgOffsVld_Logl(data) (*(data) = Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAgIdptSig_Val Rte_Read_FordHwAgArbn_HwAgIdptSig_Val
#  define Rte_Read_FordHwAgArbn_HwAgIdptSig_Val(data) (*(data) = Rte_HwAgCorrln_HwAgIdptSig_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordCmpdHwPosn_Val Rte_Write_FordHwAgArbn_FordCmpdHwPosn_Val
#  define Rte_Write_FordHwAgArbn_FordCmpdHwPosn_Val(data) (Rte_FordHwAgArbn_FordCmpdHwPosn_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordCmpdHwPosnQlyFac_Ford_StePinCompAnEst_D_Qf Rte_Write_FordHwAgArbn_FordCmpdHwPosnQlyFac_Ford_StePinCompAnEst_D_Qf
#  define Rte_Write_FordHwAgArbn_FordCmpdHwPosnQlyFac_Ford_StePinCompAnEst_D_Qf(data) (Rte_FordHwAgArbn_FordCmpdHwPosnQlyFac_Ford_StePinCompAnEst_D_Qf = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordCmpdHwPosnQlyFac8_Val Rte_Write_FordHwAgArbn_FordCmpdHwPosnQlyFac8_Val
#  define Rte_Write_FordHwAgArbn_FordCmpdHwPosnQlyFac8_Val(data) (Rte_FordHwAgArbn_FordCmpdHwPosnQlyFac8_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordCmpdHwPosntoSerlCom_Val Rte_Write_FordHwAgArbn_FordCmpdHwPosntoSerlCom_Val
#  define Rte_Write_FordHwAgArbn_FordCmpdHwPosntoSerlCom_Val(data) (Rte_FordHwAgArbn_FordCmpdHwPosntoSerlCom_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordHwVelVld_Logl Rte_Write_FordHwAgArbn_FordHwVelVld_Logl
#  define Rte_Write_FordHwAgArbn_FordHwVelVld_Logl(data) (Rte_FordHwAgArbn_FordHwVelVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordPosnOffsVld_Logl Rte_Write_FordHwAgArbn_FordPosnOffsVld_Logl
#  define Rte_Write_FordHwAgArbn_FordPosnOffsVld_Logl(data) (Rte_FordHwAgArbn_FordPosnOffsVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordRelHwPosn_Val Rte_Write_FordHwAgArbn_FordRelHwPosn_Val
#  define Rte_Write_FordHwAgArbn_FordRelHwPosn_Val(data) (Rte_FordHwAgArbn_FordRelHwPosn_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordRelHwPosnVld_Logl Rte_Write_FordHwAgArbn_FordRelHwPosnVld_Logl
#  define Rte_Write_FordHwAgArbn_FordRelHwPosnVld_Logl(data) (Rte_FordHwAgArbn_FordRelHwPosnVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordRelHwPosntoSerlCom_Val Rte_Write_FordHwAgArbn_FordRelHwPosntoSerlCom_Val
#  define Rte_Write_FordHwAgArbn_FordRelHwPosntoSerlCom_Val(data) (Rte_FordHwAgArbn_FordRelHwPosntoSerlCom_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_GetGpioMcuEna_Oper(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetGpioMcuEna_Oper IoHwAb_GetGpioMcuEna_Oper
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcActv10_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcActv_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcActv_Oper GetNtcActv10_Oper
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVMPROXY_APPL_VAR) ErrorStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_NonAbsOffs_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)40, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_NonAbsOffs_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)40, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_NonAbsOffsVldFlg_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)39, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_NonAbsOffsVldFlg_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)39, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PrevIgnCycVal_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)38, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_PrevIgnCycVal_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)38, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_FordHwAgArbnInit1_FordSnsrOutp(data) \
  (Rte_Irv_FordHwAgArbn_FordSnsrOutp = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_FordHwAgArbnPer1_FordSnsrOutp() \
  Rte_Irv_FordHwAgArbn_FordSnsrOutp
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  define Rte_CData_PrevIgnCycValDft() (((P2CONST(Rte_Calprm_FordHwAgArbn_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_FordHwAgArbn_DEFAULT_RTE_CDATA_GROUP])->PrevIgnCycValDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_FordHwAgArbnPhyRackTrvlThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwAgArbnPhyRackTrvlThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysGlbPrmSysKineRat_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysGlbPrmSysKineRat_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordHwAgArbnMotVelVldFlgRcvrTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwAgArbnMotVelVldFlgRcvrTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordHwAgArbnNonAbsCentrNotDetdTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwAgArbnNonAbsCentrNotDetdTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordHwAgArbnRelPosnVldFlgRcvryTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwAgArbnRelPosnVldFlgRcvryTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_FordCmpdHwPosnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_NonAbsOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_PrevIgnCycVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_RelHwPosnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_MotVelVldTrueTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_NonAbsCentrNotDetdTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_RelPosnVldFlgRcvryTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_StePinCompAnEst_D_Qf, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_FordCmpdHwPosnQlyFacPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_StePinOffst_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_FordSteerPinionOffsStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_NoDataExistFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_NonAbsOffsVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_RelHwPosnVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_RelPosnLossFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_FordCmpdHwPosnPrev() \
  (&Rte_FordHwAgArbn_FordCmpdHwPosnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_NonAbsOffs() \
  (&Rte_FordHwAgArbn_NonAbsOffs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevIgnCycVal() \
  (&Rte_FordHwAgArbn_PrevIgnCycVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RelHwPosnPrev() \
  (&Rte_FordHwAgArbn_RelHwPosnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotVelVldTrueTi() \
  (&Rte_FordHwAgArbn_MotVelVldTrueTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_NonAbsCentrNotDetdTi() \
  (&Rte_FordHwAgArbn_NonAbsCentrNotDetdTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RelPosnVldFlgRcvryTi() \
  (&Rte_FordHwAgArbn_RelPosnVldFlgRcvryTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordCmpdHwPosnQlyFacPrev() \
  (&Rte_FordHwAgArbn_FordCmpdHwPosnQlyFacPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordSteerPinionOffsStsPrev() \
  (&Rte_FordHwAgArbn_FordSteerPinionOffsStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FirstTranVldFlg() \
  (&Rte_FordHwAgArbn_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_NoDataExistFlg() \
  (&Rte_FordHwAgArbn_NoDataExistFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_NonAbsOffsVldFlg() \
  (&Rte_FordHwAgArbn_NonAbsOffsVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RelHwPosnVld() \
  (&Rte_FordHwAgArbn_RelHwPosnVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RelPosnLossFlg() \
  (&Rte_FordHwAgArbn_RelPosnLossFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordHwAgArbn_START_SEC_CODE
# include "FordHwAgArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordHwAgArbnInit1 FordHwAgArbnInit1
#  define RTE_RUNNABLE_FordHwAgArbnPer1 FordHwAgArbnPer1
# endif

FUNC(void, FordHwAgArbn_CODE) FordHwAgArbnInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordHwAgArbn_CODE) FordHwAgArbnPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordHwAgArbn_STOP_SEC_CODE
# include "FordHwAgArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetGpio_PortIf1_E_NOT_OK (1U)

#  define RTE_E_GetNtcActv_PortIf1_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDHWAGARBN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
