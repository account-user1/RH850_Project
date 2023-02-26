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
 *          File:  Rte_FordMsg3B3BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg3B3BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG3B3BUSHISPD_H
# define _RTE_FORDMSG3B3BUSHISPD_H

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

# include "Rte_FordMsg3B3BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Ford_Ignition_Status, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordVehIgnSts_Ford_Ignition_Status; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordVehIgnStsVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_LifeCycMde_D_Actl, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordVehLifeCycMod_Ford_LifeCycMde_D_Actl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb8_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordInvldMsgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordMfgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordMissMsgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordTrlrBackUpAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
#  define Rte_InitValue_FordCanDtcInhb_Val (1U)
#  define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
#  define Rte_InitValue_FordInvldMsgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordMfgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordMissMsgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordTrlrBackUpAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordVehIgnSts_Ford_Ignition_Status (0U)
#  define Rte_InitValue_FordVehIgnStsVld_Logl (FALSE)
#  define Rte_InitValue_FordVehLifeCycMod_Ford_LifeCycMde_D_Actl (0U)
#  define Rte_InitValue_Ford_Ignition_Status1_Ford_Ignition_Status (0U)
#  define Rte_InitValue_Ford_LifeCycMde_D_Actl1_Ford_LifeCycMde_D_Actl (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg3B3BusHiSpd_ClrDiagcFlgProxy_Val
#  define Rte_Read_FordMsg3B3BusHiSpd_ClrDiagcFlgProxy_Val(data) (*(data) = Rte_DiagcMgr_ClrDiagcFlgProxy_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCanDtcInhb_Val Rte_Read_FordMsg3B3BusHiSpd_FordCanDtcInhb_Val
#  define Rte_Read_FordMsg3B3BusHiSpd_FordCanDtcInhb_Val(data) (*(data) = Rte_FordCanDtcInhb_FordCanDtcInhb8_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg3B3BusHiSpd_FordEpsLifeCycMod_Val
#  define Rte_Read_FordMsg3B3BusHiSpd_FordEpsLifeCycMod_Val(data) (*(data) = Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordInvldMsgDiagcInhb_Val Rte_Read_FordMsg3B3BusHiSpd_FordInvldMsgDiagcInhb_Val
#  define Rte_Read_FordMsg3B3BusHiSpd_FordInvldMsgDiagcInhb_Val(data) (*(data) = Rte_FordMsg3B3BusHiSpd_FordInvldMsgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMfgDiagcInhb_Val Rte_Read_FordMsg3B3BusHiSpd_FordMfgDiagcInhb_Val
#  define Rte_Read_FordMsg3B3BusHiSpd_FordMfgDiagcInhb_Val(data) (*(data) = Rte_FordMsg3B3BusHiSpd_FordMfgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMissMsgDiagcInhb_Val Rte_Read_FordMsg3B3BusHiSpd_FordMissMsgDiagcInhb_Val
#  define Rte_Read_FordMsg3B3BusHiSpd_FordMissMsgDiagcInhb_Val(data) (*(data) = Rte_FordMsg3B3BusHiSpd_FordMissMsgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrlrBackUpAssiEnad_Logl Rte_Read_FordMsg3B3BusHiSpd_FordTrlrBackUpAssiEnad_Logl
#  define Rte_Read_FordMsg3B3BusHiSpd_FordTrlrBackUpAssiEnad_Logl(data) (*(data) = Rte_FordMsg3B3BusHiSpd_FordTrlrBackUpAssiEnad_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_Ignition_Status1_Ford_Ignition_Status Rte_Read_FordMsg3B3BusHiSpd_Ford_Ignition_Status1_Ford_Ignition_Status
#  define Rte_Read_FordMsg3B3BusHiSpd_Ford_Ignition_Status1_Ford_Ignition_Status(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_Ignition_Status_3c341b34, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_LifeCycMde_D_Actl1_Ford_LifeCycMde_D_Actl Rte_Read_FordMsg3B3BusHiSpd_Ford_LifeCycMde_D_Actl1_Ford_LifeCycMde_D_Actl
#  define Rte_Read_FordMsg3B3BusHiSpd_Ford_LifeCycMde_D_Actl1_Ford_LifeCycMde_D_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_LifeCycMde_D_Actl_3c341b34, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordVehIgnSts_Ford_Ignition_Status Rte_Write_FordMsg3B3BusHiSpd_FordVehIgnSts_Ford_Ignition_Status
#  define Rte_Write_FordMsg3B3BusHiSpd_FordVehIgnSts_Ford_Ignition_Status(data) (Rte_FordMsg3B3BusHiSpd_FordVehIgnSts_Ford_Ignition_Status = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehIgnStsVld_Logl Rte_Write_FordMsg3B3BusHiSpd_FordVehIgnStsVld_Logl
#  define Rte_Write_FordMsg3B3BusHiSpd_FordVehIgnStsVld_Logl(data) (Rte_FordMsg3B3BusHiSpd_FordVehIgnStsVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLifeCycMod_Ford_LifeCycMde_D_Actl Rte_Write_FordMsg3B3BusHiSpd_FordVehLifeCycMod_Ford_LifeCycMde_D_Actl
#  define Rte_Write_FordMsg3B3BusHiSpd_FordVehLifeCycMod_Ford_LifeCycMde_D_Actl(data) (Rte_FordMsg3B3BusHiSpd_FordVehLifeCycMod_Ford_LifeCycMde_D_Actl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3B3BusHiSpdIgnStsVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3B3BusHiSpdIgnStsVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3B3BusHiSpdIgnStsVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3B3BusHiSpdInvldSigFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3B3BusHiSpdInvldSigFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3B3BusHiSpdInvldSigPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3B3BusHiSpdInvldSigPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3B3BusHiSpdMissMsgFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3B3BusHiSpdMissMsgFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3B3BusHiSpdMissMsgPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3B3BusHiSpdMissMsgPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehIgnStsInvldSigFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehIgnStsInvldSigPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_IgnStsVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_IgnStsVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_IgnStsVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_Ignition_Status, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehIgnStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_LifeCycMde_D_Actl, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehLifeCycModPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehIgnStsVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehMsg3B3Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehMsg3B3Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_FordVehIgnStsInvldSigFaildRefTi() \
  (&Rte_FordMsg3B3BusHiSpd_FordVehIgnStsInvldSigFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehIgnStsInvldSigPassdRefTi() \
  (&Rte_FordMsg3B3BusHiSpd_FordVehIgnStsInvldSigPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_IgnStsVldFaildRefTi() \
  (&Rte_FordMsg3B3BusHiSpd_IgnStsVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_IgnStsVldMissRefTi() \
  (&Rte_FordMsg3B3BusHiSpd_IgnStsVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_IgnStsVldPassdRefTi() \
  (&Rte_FordMsg3B3BusHiSpd_IgnStsVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgFaildRefTi() \
  (&Rte_FordMsg3B3BusHiSpd_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgPassdRefTi() \
  (&Rte_FordMsg3B3BusHiSpd_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ClrDiagcFlgProxyPrev() \
  (&Rte_FordMsg3B3BusHiSpd_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehIgnStsPrev() \
  (&Rte_FordMsg3B3BusHiSpd_FordVehIgnStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLifeCycModPrev() \
  (&Rte_FordMsg3B3BusHiSpd_FordVehLifeCycModPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FirstTranVldFlg() \
  (&Rte_FordMsg3B3BusHiSpd_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehIgnStsVldPrev() \
  (&Rte_FordMsg3B3BusHiSpd_FordVehIgnStsVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg3B3Miss() \
  (&Rte_FordMsg3B3BusHiSpd_FordVehMsg3B3Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg3B3Rxd() \
  (&Rte_FordMsg3B3BusHiSpd_FordVehMsg3B3Rxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg3B3BusHiSpd_START_SEC_CODE
# include "FordMsg3B3BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg3B3BusHiSpdInit1 FordMsg3B3BusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg3B3BusHiSpdPer1 FordMsg3B3BusHiSpdPer1
# endif

FUNC(void, FordMsg3B3BusHiSpd_CODE) FordMsg3B3BusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg3B3BusHiSpd_CODE) FordMsg3B3BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg3B3BusHiSpd_STOP_SEC_CODE
# include "FordMsg3B3BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG3B3BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
