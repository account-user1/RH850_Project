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
 *          File:  Rte_FordMsg3D7BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg3D7BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG3D7BUSHISPD_H
# define _RTE_FORDMSG3D7BUSHISPD_H

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

# include "Rte_FordMsg3D7BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiEnadReqRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiImgProcrModlAVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordEvasSteerAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
#  define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
#  define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
#  define Rte_InitValue_FordEvasSteerAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordVehCllsnMtgtnByBrkgLatDstRaw_Val (510U)
#  define Rte_InitValue_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val (1022U)
#  define Rte_InitValue_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val (0U)
#  define Rte_InitValue_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val (0U)
#  define Rte_InitValue_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val (510U)
#  define Rte_InitValue_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val (1022U)
#  define Rte_InitValue_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val (126U)
#  define Rte_InitValue_FordVehEvasSteerAssiEnadReqRaw_Val (0U)
#  define Rte_InitValue_FordVehEvasSteerAssiImgProcrModlAVld_Logl (FALSE)
#  define Rte_InitValue_Ford_CmbbObjClass_D_Stat1_Ford_CmbbObjClass_D_Stat (0U)
#  define Rte_InitValue_Ford_CmbbObjColl_T_Actl_Ford_CmbbObjColl_T_Actl (126U)
#  define Rte_InitValue_Ford_CmbbObjConfdnc_D_Stat1_Ford_CmbbObjConfdnc_D_Stat (0U)
#  define Rte_InitValue_Ford_CmbbObjDistLat_L_Actl_Ford_CmbbObjDistLat_L_Actl (510U)
#  define Rte_InitValue_Ford_CmbbObjDistLong_L_Actl_Ford_CmbbObjDistLong_L_Actl (1022U)
#  define Rte_InitValue_Ford_CmbbObjRelLat_V_Actl_Ford_CmbbObjRelLat_V_Actl (510U)
#  define Rte_InitValue_Ford_CmbbObjRelLong_V_Actl_Ford_CmbbObjRelLong_V_Actl (1022U)
#  define Rte_InitValue_Ford_EsaEnbl_D2_Rq1_Ford_EsaEnbl_D2_Rq (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg3D7BusHiSpd_ClrDiagcFlgProxy_Val
#  define Rte_Read_FordMsg3D7BusHiSpd_ClrDiagcFlgProxy_Val(data) (*(data) = Rte_DiagcMgr_ClrDiagcFlgProxy_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg3D7BusHiSpd_FordCanDtcInhb_Logl
#  define Rte_Read_FordMsg3D7BusHiSpd_FordCanDtcInhb_Logl(data) (*(data) = Rte_FordCanDtcInhb_FordCanDtcInhb_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg3D7BusHiSpd_FordEpsLifeCycMod_Val
#  define Rte_Read_FordMsg3D7BusHiSpd_FordEpsLifeCycMod_Val(data) (*(data) = Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEvasSteerAssiEnad_Logl Rte_Read_FordMsg3D7BusHiSpd_FordEvasSteerAssiEnad_Logl
#  define Rte_Read_FordMsg3D7BusHiSpd_FordEvasSteerAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordEvasSteerAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_CmbbObjClass_D_Stat1_Ford_CmbbObjClass_D_Stat Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjClass_D_Stat1_Ford_CmbbObjClass_D_Stat
#  define Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjClass_D_Stat1_Ford_CmbbObjClass_D_Stat(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_CmbbObjClass_D_Stat_dafea5bb, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_CmbbObjColl_T_Actl_Ford_CmbbObjColl_T_Actl Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjColl_T_Actl_Ford_CmbbObjColl_T_Actl
#  define Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjColl_T_Actl_Ford_CmbbObjColl_T_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_CmbbObjColl_T_Actl_dafea5bb, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_CmbbObjConfdnc_D_Stat1_Ford_CmbbObjConfdnc_D_Stat Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjConfdnc_D_Stat1_Ford_CmbbObjConfdnc_D_Stat
#  define Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjConfdnc_D_Stat1_Ford_CmbbObjConfdnc_D_Stat(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_CmbbObjConfdnc_D_Stat_dafea5bb, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_CmbbObjDistLat_L_Actl_Ford_CmbbObjDistLat_L_Actl Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjDistLat_L_Actl_Ford_CmbbObjDistLat_L_Actl
#  define Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjDistLat_L_Actl_Ford_CmbbObjDistLat_L_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_CmbbObjDistLat_L_Actl_dafea5bb, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_CmbbObjDistLong_L_Actl_Ford_CmbbObjDistLong_L_Actl Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjDistLong_L_Actl_Ford_CmbbObjDistLong_L_Actl
#  define Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjDistLong_L_Actl_Ford_CmbbObjDistLong_L_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_CmbbObjDistLong_L_Actl_dafea5bb, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_CmbbObjRelLat_V_Actl_Ford_CmbbObjRelLat_V_Actl Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjRelLat_V_Actl_Ford_CmbbObjRelLat_V_Actl
#  define Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjRelLat_V_Actl_Ford_CmbbObjRelLat_V_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_CmbbObjRelLat_V_Actl_dafea5bb, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_CmbbObjRelLong_V_Actl_Ford_CmbbObjRelLong_V_Actl Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjRelLong_V_Actl_Ford_CmbbObjRelLong_V_Actl
#  define Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjRelLong_V_Actl_Ford_CmbbObjRelLong_V_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_CmbbObjRelLong_V_Actl_dafea5bb, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_EsaEnbl_D2_Rq1_Ford_EsaEnbl_D2_Rq Rte_Read_FordMsg3D7BusHiSpd_Ford_EsaEnbl_D2_Rq1_Ford_EsaEnbl_D2_Rq
#  define Rte_Read_FordMsg3D7BusHiSpd_Ford_EsaEnbl_D2_Rq1_Ford_EsaEnbl_D2_Rq(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_EsaEnbl_D2_Rq_dafea5bb, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordVehCllsnMtgtnByBrkgLatDstRaw_Val Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstRaw_Val
#  define Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstRaw_Val(data) (Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val
#  define Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val(data) (Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val
#  define Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val(data) (Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val
#  define Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val(data) (Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val
#  define Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val(data) (Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val
#  define Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val(data) (Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val
#  define Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val(data) (Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehEvasSteerAssiEnadReqRaw_Val Rte_Write_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiEnadReqRaw_Val
#  define Rte_Write_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiEnadReqRaw_Val(data) (Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiEnadReqRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehEvasSteerAssiImgProcrModlAVld_Logl Rte_Write_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiImgProcrModlAVld_Logl
#  define Rte_Write_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiImgProcrModlAVld_Logl(data) (Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiImgProcrModlAVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_FordMsg3D7BusHiSpdImgProcrModlAVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdImgProcrModlAVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdLatDstInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdLatDstInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdLatDstInvldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdLatDstInvldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdLatDstRawVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdLatDstRawVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdLgtDstInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdLgtDstInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdLgtDstInvldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdLgtDstInvldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdLgtDstRawVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdLgtDstRawVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdMissMsgFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdMissMsgFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdMissMsgPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdMissMsgPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdRelLatVelInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdRelLatVelInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdRelLatVelInvldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdRelLatVelInvldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_EvasSteerAssiImgProcrModlAVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_ImgProcrModlAVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_LatDstRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_LgtDstRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_RelLatVelRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_RelLgtVelRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_TiToCllsnRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiEnadReqRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiImgProcrModlAVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehMsg3D7Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_EvasSteerAssiImgProcrModlAVldPassdRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_EvasSteerAssiImgProcrModlAVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ImgProcrModlAVldMissRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_ImgProcrModlAVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LatDstRawVldFaildRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_LatDstRawVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LgtDstRawVldFaildRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_LgtDstRawVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgFaildRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgPassdRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RelLatVelRawVldFaildRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_RelLatVelRawVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RelLgtVelRawVldFaildRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_RelLgtVelRawVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TiToCllsnRawVldFaildRefTi() \
  (&Rte_FordMsg3D7BusHiSpd_TiToCllsnRawVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstRawPrev() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstRawPrev() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelRawPrev() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ClrDiagcFlgProxyPrev() \
  (&Rte_FordMsg3D7BusHiSpd_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehEvasSteerAssiEnadReqRawPrev() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiEnadReqRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FirstTranVldFlg() \
  (&Rte_FordMsg3D7BusHiSpd_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehEvasSteerAssiImgProcrModlAVldPrev() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiImgProcrModlAVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg3D7Miss() \
  (&Rte_FordMsg3D7BusHiSpd_FordVehMsg3D7Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg3D7BusHiSpd_START_SEC_CODE
# include "FordMsg3D7BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg3D7BusHiSpdInit1 FordMsg3D7BusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg3D7BusHiSpdPer1 FordMsg3D7BusHiSpdPer1
# endif

FUNC(void, FordMsg3D7BusHiSpd_CODE) FordMsg3D7BusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg3D7BusHiSpd_CODE) FordMsg3D7BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg3D7BusHiSpd_STOP_SEC_CODE
# include "FordMsg3D7BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG3D7BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
