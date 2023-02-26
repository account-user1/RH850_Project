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
 *          File:  Rte_FordMsg167BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg167BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG167BUSHISPD_H
# define _RTE_FORDMSG167BUSHISPD_H

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

# include "Rte_FordMsg167BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Ford_ElPw_D_StatStrtStop, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehElecPwrStrtStopSts_Ford_ElPw_D_StatStrtStop; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_ElPw_D_Stat, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehElecPwrSts_Ford_ElPw_D_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_PwPckTq_D_Stat, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordBrkPlsRejctnEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb8_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordInvldMsgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordMfgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordMissMsgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTqSteerCmpEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordTrlrBackUpAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
#  define Rte_InitValue_FordBrkOscnRednEnad_Logl (FALSE)
#  define Rte_InitValue_FordCanDtcInhb_Val (1U)
#  define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
#  define Rte_InitValue_FordInvldMsgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordMfgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordMissMsgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordTqSteerCmpEnad_Logl (FALSE)
#  define Rte_InitValue_FordTrlrBackUpAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordVehElecPwrStrtStopSts_Ford_ElPw_D_StatStrtStop (0U)
#  define Rte_InitValue_FordVehElecPwrSts_Ford_ElPw_D_Stat (0U)
#  define Rte_InitValue_FordVehPrpnWhlTq_Val (-131072.0F)
#  define Rte_InitValue_FordVehPrpnWhlTqRaw_Val (0U)
#  define Rte_InitValue_FordVehPrpnWhlTqVld_Logl (FALSE)
#  define Rte_InitValue_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat (0U)
#  define Rte_InitValue_Ford_ElPw_D_Stat1_Ford_ElPw_D_Stat (0U)
#  define Rte_InitValue_Ford_ElPw_D_StatStrtStop1_Ford_ElPw_D_StatStrtStop (0U)
#  define Rte_InitValue_Ford_PrplWhlTot2_Tq_Actl_Ford_PrplWhlTot2_Tq_Actl (0U)
#  define Rte_InitValue_Ford_PwPckTq_D_Stat1_Ford_PwPckTq_D_Stat (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg167BusHiSpd_ClrDiagcFlgProxy_Val
#  define Rte_Read_FordMsg167BusHiSpd_ClrDiagcFlgProxy_Val(data) (*(data) = Rte_DiagcMgr_ClrDiagcFlgProxy_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordBrkOscnRednEnad_Logl Rte_Read_FordMsg167BusHiSpd_FordBrkOscnRednEnad_Logl
#  define Rte_Read_FordMsg167BusHiSpd_FordBrkOscnRednEnad_Logl(data) (*(data) = Rte_CustDiag_FordBrkPlsRejctnEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCanDtcInhb_Val Rte_Read_FordMsg167BusHiSpd_FordCanDtcInhb_Val
#  define Rte_Read_FordMsg167BusHiSpd_FordCanDtcInhb_Val(data) (*(data) = Rte_FordCanDtcInhb_FordCanDtcInhb8_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg167BusHiSpd_FordEpsLifeCycMod_Val
#  define Rte_Read_FordMsg167BusHiSpd_FordEpsLifeCycMod_Val(data) (*(data) = Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordInvldMsgDiagcInhb_Val Rte_Read_FordMsg167BusHiSpd_FordInvldMsgDiagcInhb_Val
#  define Rte_Read_FordMsg167BusHiSpd_FordInvldMsgDiagcInhb_Val(data) (*(data) = Rte_FordMsg167BusHiSpd_FordInvldMsgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMfgDiagcInhb_Val Rte_Read_FordMsg167BusHiSpd_FordMfgDiagcInhb_Val
#  define Rte_Read_FordMsg167BusHiSpd_FordMfgDiagcInhb_Val(data) (*(data) = Rte_FordMsg167BusHiSpd_FordMfgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMissMsgDiagcInhb_Val Rte_Read_FordMsg167BusHiSpd_FordMissMsgDiagcInhb_Val
#  define Rte_Read_FordMsg167BusHiSpd_FordMissMsgDiagcInhb_Val(data) (*(data) = Rte_FordMsg167BusHiSpd_FordMissMsgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTqSteerCmpEnad_Logl Rte_Read_FordMsg167BusHiSpd_FordTqSteerCmpEnad_Logl
#  define Rte_Read_FordMsg167BusHiSpd_FordTqSteerCmpEnad_Logl(data) (*(data) = Rte_CustDiag_FordTqSteerCmpEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrlrBackUpAssiEnad_Logl Rte_Read_FordMsg167BusHiSpd_FordTrlrBackUpAssiEnad_Logl
#  define Rte_Read_FordMsg167BusHiSpd_FordTrlrBackUpAssiEnad_Logl(data) (*(data) = Rte_FordMsg167BusHiSpd_FordTrlrBackUpAssiEnad_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_ElPw_D_Stat1_Ford_ElPw_D_Stat Rte_Read_FordMsg167BusHiSpd_Ford_ElPw_D_Stat1_Ford_ElPw_D_Stat
#  define Rte_Read_FordMsg167BusHiSpd_Ford_ElPw_D_Stat1_Ford_ElPw_D_Stat(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_ElPw_D_Stat_e6deed9e, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_ElPw_D_StatStrtStop1_Ford_ElPw_D_StatStrtStop Rte_Read_FordMsg167BusHiSpd_Ford_ElPw_D_StatStrtStop1_Ford_ElPw_D_StatStrtStop
#  define Rte_Read_FordMsg167BusHiSpd_Ford_ElPw_D_StatStrtStop1_Ford_ElPw_D_StatStrtStop(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_ElPw_D_StatStrtStop_e6deed9e, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_PrplWhlTot2_Tq_Actl_Ford_PrplWhlTot2_Tq_Actl Rte_Read_FordMsg167BusHiSpd_Ford_PrplWhlTot2_Tq_Actl_Ford_PrplWhlTot2_Tq_Actl
#  define Rte_Read_FordMsg167BusHiSpd_Ford_PrplWhlTot2_Tq_Actl_Ford_PrplWhlTot2_Tq_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_PrplWhlTot2_Tq_Actl_e6deed9e, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_PwPckTq_D_Stat1_Ford_PwPckTq_D_Stat Rte_Read_FordMsg167BusHiSpd_Ford_PwPckTq_D_Stat1_Ford_PwPckTq_D_Stat
#  define Rte_Read_FordMsg167BusHiSpd_Ford_PwPckTq_D_Stat1_Ford_PwPckTq_D_Stat(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_PwPckTq_D_Stat_e6deed9e, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordVehElecPwrStrtStopSts_Ford_ElPw_D_StatStrtStop Rte_Write_FordMsg167BusHiSpd_FordVehElecPwrStrtStopSts_Ford_ElPw_D_StatStrtStop
#  define Rte_Write_FordMsg167BusHiSpd_FordVehElecPwrStrtStopSts_Ford_ElPw_D_StatStrtStop(data) (Rte_FordMsg167BusHiSpd_FordVehElecPwrStrtStopSts_Ford_ElPw_D_StatStrtStop = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehElecPwrSts_Ford_ElPw_D_Stat Rte_Write_FordMsg167BusHiSpd_FordVehElecPwrSts_Ford_ElPw_D_Stat
#  define Rte_Write_FordMsg167BusHiSpd_FordVehElecPwrSts_Ford_ElPw_D_Stat(data) (Rte_FordMsg167BusHiSpd_FordVehElecPwrSts_Ford_ElPw_D_Stat = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehPrpnWhlTq_Val Rte_Write_FordMsg167BusHiSpd_FordVehPrpnWhlTq_Val
#  define Rte_Write_FordMsg167BusHiSpd_FordVehPrpnWhlTq_Val(data) (Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehPrpnWhlTqRaw_Val Rte_Write_FordMsg167BusHiSpd_FordVehPrpnWhlTqRaw_Val
#  define Rte_Write_FordMsg167BusHiSpd_FordVehPrpnWhlTqRaw_Val(data) (Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehPrpnWhlTqVld_Logl Rte_Write_FordMsg167BusHiSpd_FordVehPrpnWhlTqVld_Logl
#  define Rte_Write_FordMsg167BusHiSpd_FordVehPrpnWhlTqVld_Logl(data) (Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat Rte_Write_FordMsg167BusHiSpd_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat
#  define Rte_Write_FordMsg167BusHiSpd_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat(data) (Rte_FordMsg167BusHiSpd_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_FordMsg167BusHiSpdMissMsgFaildTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg167BusHiSpdMissMsgFaildTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg167BusHiSpdMissMsgPassdTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg167BusHiSpdMissMsgPassdTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqFaildTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg167BusHiSpdPrpnWhlTqFaildTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqMissTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg167BusHiSpdPrpnWhlTqMissTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqPassdTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg167BusHiSpdPrpnWhlTqPassdTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqSigInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqSigInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_PrpnWhlTqVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_PrpnWhlTqVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_PrpnWhlTqVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_ElPw_D_StatStrtStop, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehElecPwrStrtStopStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_ElPw_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehElecPwrStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_PwPckTq_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPwrpkTqStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehMsg167Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehMsg167Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_FordVehPrpnWhlTqPrev() \
  (&Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehPrpnWhlTqSigInvldFaildRefTi() \
  (&Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqSigInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehPrpnWhlTqSigInvldPassdRefTi() \
  (&Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqSigInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgFaildRefTi() \
  (&Rte_FordMsg167BusHiSpd_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgPassdRefTi() \
  (&Rte_FordMsg167BusHiSpd_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrpnWhlTqVldFaildRefTi() \
  (&Rte_FordMsg167BusHiSpd_PrpnWhlTqVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrpnWhlTqVldMissRefTi() \
  (&Rte_FordMsg167BusHiSpd_PrpnWhlTqVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrpnWhlTqVldPassdRefTi() \
  (&Rte_FordMsg167BusHiSpd_PrpnWhlTqVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehPrpnWhlTqRawPrev() \
  (&Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ClrDiagcFlgProxyPrev() \
  (&Rte_FordMsg167BusHiSpd_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehElecPwrStrtStopStsPrev() \
  (&Rte_FordMsg167BusHiSpd_FordVehElecPwrStrtStopStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehElecPwrStsPrev() \
  (&Rte_FordMsg167BusHiSpd_FordVehElecPwrStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehPwrpkTqStsPrev() \
  (&Rte_FordMsg167BusHiSpd_FordVehPwrpkTqStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FirstTranVldFlg() \
  (&Rte_FordMsg167BusHiSpd_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg167Miss() \
  (&Rte_FordMsg167BusHiSpd_FordVehMsg167Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg167Rxd() \
  (&Rte_FordMsg167BusHiSpd_FordVehMsg167Rxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehPrpnWhlTqVldPrev() \
  (&Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg167BusHiSpd_START_SEC_CODE
# include "FordMsg167BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg167BusHiSpdInit1 FordMsg167BusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg167BusHiSpdPer1 FordMsg167BusHiSpdPer1
# endif

FUNC(void, FordMsg167BusHiSpd_CODE) FordMsg167BusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg167BusHiSpd_CODE) FordMsg167BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg167BusHiSpd_STOP_SEC_CODE
# include "FordMsg167BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG167BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
