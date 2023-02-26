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
 *          File:  Rte_FordMsg415BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg415BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG415BUSHISPD_H
# define _RTE_FORDMSG415BUSHISPD_H

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

# include "Rte_FordMsg415BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Ford_LsmcBrkDecel_D_Stat, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtSts_Ford_LsmcBrkDecel_D_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlLoQlyVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdChksBrkModl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdCntrBrkModl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_VehVActlBrk_D_Qf, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdQlyFacBrkModl_Ford_VehVActlBrk_D_Qf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordAbsPrsnt_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb8_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordInvldMsgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordMfgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordMissMsgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
#  define Rte_InitValue_FordAbsPrsnt_Logl (FALSE)
#  define Rte_InitValue_FordCanDtcInhb_Val (1U)
#  define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
#  define Rte_InitValue_FordInvldMsgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordMfgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordMissMsgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordTrlrBackupAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordVehLoSpdMtnCtrlBrkSprtSts_Ford_LsmcBrkDecel_D_Stat (0U)
#  define Rte_InitValue_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val (0U)
#  define Rte_InitValue_FordVehLoSpdMtnCtrlBrkSprtVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSpdBrkModl_Val (0.0F)
#  define Rte_InitValue_FordVehSpdBrkModlLoQlyVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSpdBrkModlRaw_Val (0U)
#  define Rte_InitValue_FordVehSpdBrkModlVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSpdChksBrkModl_Val (0U)
#  define Rte_InitValue_FordVehSpdCntrBrkModl_Val (0U)
#  define Rte_InitValue_FordVehSpdQlyFacBrkModl_Ford_VehVActlBrk_D_Qf (0U)
#  define Rte_InitValue_Ford_LsmcBrkDecel_D_Stat1_Ford_LsmcBrkDecel_D_Stat (0U)
#  define Rte_InitValue_Ford_VehVActlBrk_D_Qf1_Ford_VehVActlBrk_D_Qf (0U)
#  define Rte_InitValue_Ford_VehVActlBrk_No_Cnt_Ford_VehVActlBrk_No_Cnt (0U)
#  define Rte_InitValue_Ford_VehVActlBrk_No_Cs_Ford_VehVActlBrk_No_Cs (0U)
#  define Rte_InitValue_Ford_Veh_V_ActlBrk_Ford_Veh_V_ActlBrk (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg415BusHiSpd_ClrDiagcFlgProxy_Val
#  define Rte_Read_FordMsg415BusHiSpd_ClrDiagcFlgProxy_Val(data) (*(data) = Rte_DiagcMgr_ClrDiagcFlgProxy_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordAbsPrsnt_Logl Rte_Read_FordMsg415BusHiSpd_FordAbsPrsnt_Logl
#  define Rte_Read_FordMsg415BusHiSpd_FordAbsPrsnt_Logl(data) (*(data) = Rte_CustDiag_FordAbsPrsnt_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCanDtcInhb_Val Rte_Read_FordMsg415BusHiSpd_FordCanDtcInhb_Val
#  define Rte_Read_FordMsg415BusHiSpd_FordCanDtcInhb_Val(data) (*(data) = Rte_FordCanDtcInhb_FordCanDtcInhb8_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg415BusHiSpd_FordEpsLifeCycMod_Val
#  define Rte_Read_FordMsg415BusHiSpd_FordEpsLifeCycMod_Val(data) (*(data) = Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordInvldMsgDiagcInhb_Val Rte_Read_FordMsg415BusHiSpd_FordInvldMsgDiagcInhb_Val
#  define Rte_Read_FordMsg415BusHiSpd_FordInvldMsgDiagcInhb_Val(data) (*(data) = Rte_FordMsg415BusHiSpd_FordInvldMsgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMfgDiagcInhb_Val Rte_Read_FordMsg415BusHiSpd_FordMfgDiagcInhb_Val
#  define Rte_Read_FordMsg415BusHiSpd_FordMfgDiagcInhb_Val(data) (*(data) = Rte_FordMsg415BusHiSpd_FordMfgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMissMsgDiagcInhb_Val Rte_Read_FordMsg415BusHiSpd_FordMissMsgDiagcInhb_Val
#  define Rte_Read_FordMsg415BusHiSpd_FordMissMsgDiagcInhb_Val(data) (*(data) = Rte_FordMsg415BusHiSpd_FordMissMsgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrlrBackupAssiEnad_Logl Rte_Read_FordMsg415BusHiSpd_FordTrlrBackupAssiEnad_Logl
#  define Rte_Read_FordMsg415BusHiSpd_FordTrlrBackupAssiEnad_Logl(data) (*(data) = Rte_FordMsg415BusHiSpd_FordTrlrBackupAssiEnad_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_LsmcBrkDecel_D_Stat1_Ford_LsmcBrkDecel_D_Stat Rte_Read_FordMsg415BusHiSpd_Ford_LsmcBrkDecel_D_Stat1_Ford_LsmcBrkDecel_D_Stat
#  define Rte_Read_FordMsg415BusHiSpd_Ford_LsmcBrkDecel_D_Stat1_Ford_LsmcBrkDecel_D_Stat(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_LsmcBrkDecel_D_Stat_9f750b9f, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_VehVActlBrk_D_Qf1_Ford_VehVActlBrk_D_Qf Rte_Read_FordMsg415BusHiSpd_Ford_VehVActlBrk_D_Qf1_Ford_VehVActlBrk_D_Qf
#  define Rte_Read_FordMsg415BusHiSpd_Ford_VehVActlBrk_D_Qf1_Ford_VehVActlBrk_D_Qf(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_VehVActlBrk_D_Qf_9f750b9f, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_VehVActlBrk_No_Cnt_Ford_VehVActlBrk_No_Cnt Rte_Read_FordMsg415BusHiSpd_Ford_VehVActlBrk_No_Cnt_Ford_VehVActlBrk_No_Cnt
#  define Rte_Read_FordMsg415BusHiSpd_Ford_VehVActlBrk_No_Cnt_Ford_VehVActlBrk_No_Cnt(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_VehVActlBrk_No_Cnt_9f750b9f, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_VehVActlBrk_No_Cs_Ford_VehVActlBrk_No_Cs Rte_Read_FordMsg415BusHiSpd_Ford_VehVActlBrk_No_Cs_Ford_VehVActlBrk_No_Cs
#  define Rte_Read_FordMsg415BusHiSpd_Ford_VehVActlBrk_No_Cs_Ford_VehVActlBrk_No_Cs(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_VehVActlBrk_No_Cs_9f750b9f, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_Veh_V_ActlBrk_Ford_Veh_V_ActlBrk Rte_Read_FordMsg415BusHiSpd_Ford_Veh_V_ActlBrk_Ford_Veh_V_ActlBrk
#  define Rte_Read_FordMsg415BusHiSpd_Ford_Veh_V_ActlBrk_Ford_Veh_V_ActlBrk(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_Veh_V_ActlBrk_9f750b9f, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordVehLoSpdMtnCtrlBrkSprtSts_Ford_LsmcBrkDecel_D_Stat Rte_Write_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtSts_Ford_LsmcBrkDecel_D_Stat
#  define Rte_Write_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtSts_Ford_LsmcBrkDecel_D_Stat(data) (Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtSts_Ford_LsmcBrkDecel_D_Stat = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val Rte_Write_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val
#  define Rte_Write_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val(data) (Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLoSpdMtnCtrlBrkSprtVld_Logl Rte_Write_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVld_Logl
#  define Rte_Write_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVld_Logl(data) (Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdBrkModl_Val Rte_Write_FordMsg415BusHiSpd_FordVehSpdBrkModl_Val
#  define Rte_Write_FordMsg415BusHiSpd_FordVehSpdBrkModl_Val(data) (Rte_FordMsg415BusHiSpd_FordVehSpdBrkModl_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdBrkModlLoQlyVld_Logl Rte_Write_FordMsg415BusHiSpd_FordVehSpdBrkModlLoQlyVld_Logl
#  define Rte_Write_FordMsg415BusHiSpd_FordVehSpdBrkModlLoQlyVld_Logl(data) (Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlLoQlyVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdBrkModlRaw_Val Rte_Write_FordMsg415BusHiSpd_FordVehSpdBrkModlRaw_Val
#  define Rte_Write_FordMsg415BusHiSpd_FordVehSpdBrkModlRaw_Val(data) (Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdBrkModlVld_Logl Rte_Write_FordMsg415BusHiSpd_FordVehSpdBrkModlVld_Logl
#  define Rte_Write_FordMsg415BusHiSpd_FordVehSpdBrkModlVld_Logl(data) (Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdChksBrkModl_Val Rte_Write_FordMsg415BusHiSpd_FordVehSpdChksBrkModl_Val
#  define Rte_Write_FordMsg415BusHiSpd_FordVehSpdChksBrkModl_Val(data) (Rte_FordMsg415BusHiSpd_FordVehSpdChksBrkModl_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdCntrBrkModl_Val Rte_Write_FordMsg415BusHiSpd_FordVehSpdCntrBrkModl_Val
#  define Rte_Write_FordMsg415BusHiSpd_FordVehSpdCntrBrkModl_Val(data) (Rte_FordMsg415BusHiSpd_FordVehSpdCntrBrkModl_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdQlyFacBrkModl_Ford_VehVActlBrk_D_Qf Rte_Write_FordMsg415BusHiSpd_FordVehSpdQlyFacBrkModl_Ford_VehVActlBrk_D_Qf
#  define Rte_Write_FordMsg415BusHiSpd_FordVehSpdQlyFacBrkModl_Ford_VehVActlBrk_D_Qf(data) (Rte_FordMsg415BusHiSpd_FordVehSpdQlyFacBrkModl_Ford_VehVActlBrk_D_Qf = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
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
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg415BusHiSpdBrkModlLoQlyVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg415BusHiSpdBrkModlVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg415BusHiSpdBrkModlVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg415BusHiSpdBrkModlVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg415BusHiSpdBrkModlVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg415BusHiSpdBrkModlVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg415BusHiSpdBrkModlVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg415BusHiSpdBrkSprtVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg415BusHiSpdBrkSprtVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg415BusHiSpdBrkSprtVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg415BusHiSpdBrkSprtVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg415BusHiSpdChksBrkModlInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg415BusHiSpdChksBrkModlInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg415BusHiSpdChksBrkModlInvldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg415BusHiSpdChksBrkModlInvldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg415BusHiSpdCntrBrkModlInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg415BusHiSpdCntrBrkModlInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg415BusHiSpdCntrBrkModlInvldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg415BusHiSpdCntrBrkModlInvldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg415BusHiSpdMissMsgFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg415BusHiSpdMissMsgFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg415BusHiSpdMissMsgPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg415BusHiSpdMissMsgPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlLoQlyVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlLoQlyVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlLoQlyVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkSprtVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkSprtVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_ChksBrkModlInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_ChksBrkModlInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_CntrBrkModlInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_CntrBrkModlInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_QlyFacBrkModlInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_QlyFacBrkModlInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_LsmcBrkDecel_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdChksBrkModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdCntrBrkModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_VehVActlBrk_D_Qf, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdQlyFacBrkModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehMsg415Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehMsg415Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlLoQlyVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_FordVehSpdBrkModlPrev() \
  (&Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_BrkModlLoQlyVldFaildRefTi() \
  (&Rte_FordMsg415BusHiSpd_BrkModlLoQlyVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_BrkModlLoQlyVldMissRefTi() \
  (&Rte_FordMsg415BusHiSpd_BrkModlLoQlyVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_BrkModlLoQlyVldPassdRefTi() \
  (&Rte_FordMsg415BusHiSpd_BrkModlLoQlyVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_BrkModlVldFaildRefTi() \
  (&Rte_FordMsg415BusHiSpd_BrkModlVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_BrkModlVldMissRefTi() \
  (&Rte_FordMsg415BusHiSpd_BrkModlVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_BrkModlVldPassdRefTi() \
  (&Rte_FordMsg415BusHiSpd_BrkModlVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_BrkSprtVldMissRefTi() \
  (&Rte_FordMsg415BusHiSpd_BrkSprtVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_BrkSprtVldPassdRefTi() \
  (&Rte_FordMsg415BusHiSpd_BrkSprtVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ChksBrkModlInvldFaildRefTi() \
  (&Rte_FordMsg415BusHiSpd_ChksBrkModlInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ChksBrkModlInvldPassdRefTi() \
  (&Rte_FordMsg415BusHiSpd_ChksBrkModlInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CntrBrkModlInvldFaildRefTi() \
  (&Rte_FordMsg415BusHiSpd_CntrBrkModlInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CntrBrkModlInvldPassdRefTi() \
  (&Rte_FordMsg415BusHiSpd_CntrBrkModlInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgFaildRefTi() \
  (&Rte_FordMsg415BusHiSpd_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgPassdRefTi() \
  (&Rte_FordMsg415BusHiSpd_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_QlyFacBrkModlInvldFaildRefTi() \
  (&Rte_FordMsg415BusHiSpd_QlyFacBrkModlInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_QlyFacBrkModlInvldPassdRefTi() \
  (&Rte_FordMsg415BusHiSpd_QlyFacBrkModlInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdBrkModlRawPrev() \
  (&Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ClrDiagcFlgProxyPrev() \
  (&Rte_FordMsg415BusHiSpd_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtStsPrev() \
  (&Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtStsRawPrev() \
  (&Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdChksBrkModlPrev() \
  (&Rte_FordMsg415BusHiSpd_FordVehSpdChksBrkModlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdCntrBrkModlPrev() \
  (&Rte_FordMsg415BusHiSpd_FordVehSpdCntrBrkModlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdQlyFacBrkModlPrev() \
  (&Rte_FordMsg415BusHiSpd_FordVehSpdQlyFacBrkModlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FirstTranVldFlg() \
  (&Rte_FordMsg415BusHiSpd_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtVldFlg() \
  (&Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtVldPrev() \
  (&Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg415Miss() \
  (&Rte_FordMsg415BusHiSpd_FordVehMsg415Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg415Rxd() \
  (&Rte_FordMsg415BusHiSpd_FordVehMsg415Rxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdBrkModlLoQlyVldPrev() \
  (&Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlLoQlyVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdBrkModlVldPrev() \
  (&Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg415BusHiSpd_START_SEC_CODE
# include "FordMsg415BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg415BusHiSpdInit1 FordMsg415BusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg415BusHiSpdPer1 FordMsg415BusHiSpdPer1
# endif

FUNC(void, FordMsg415BusHiSpd_CODE) FordMsg415BusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg415BusHiSpd_CODE) FordMsg415BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg415BusHiSpd_STOP_SEC_CODE
# include "FordMsg415BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG415BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
