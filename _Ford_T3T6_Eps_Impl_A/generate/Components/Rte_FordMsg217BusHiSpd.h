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
 *          File:  Rte_FordMsg217BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg217BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG217BUSHISPD_H
# define _RTE_FORDMSG217BUSHISPD_H

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

# include "Rte_FordMsg217BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordAbsPrsnt_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordActvNiblCtrlEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordBrkPlsRejctnEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb8_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordInvldMsgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordMfgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordMissMsgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTqSteerCmpEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
#  define Rte_InitValue_FordAbsPrsnt_Logl (FALSE)
#  define Rte_InitValue_FordActvNiblCtrlEnad_Logl (FALSE)
#  define Rte_InitValue_FordBrkOscnRednEnad_Logl (FALSE)
#  define Rte_InitValue_FordCanDtcInhb_Val (1U)
#  define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
#  define Rte_InitValue_FordInvldMsgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordMfgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordMissMsgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordTqSteerCmpEnad_Logl (FALSE)
#  define Rte_InitValue_FordTrlrBackupAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordVehFrntLeWhlSpd_Val (0.0F)
#  define Rte_InitValue_FordVehFrntLeWhlSpdRaw_Val (0U)
#  define Rte_InitValue_FordVehFrntLeWhlSpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehFrntRiWhlSpd_Val (0.0F)
#  define Rte_InitValue_FordVehFrntRiWhlSpdRaw_Val (0U)
#  define Rte_InitValue_FordVehFrntRiWhlSpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehReLeWhlSpd_Val (0.0F)
#  define Rte_InitValue_FordVehReLeWhlSpdRaw_Val (0U)
#  define Rte_InitValue_FordVehReLeWhlSpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehReRiWhlSpd_Val (0.0F)
#  define Rte_InitValue_FordVehReRiWhlSpdRaw_Val (0U)
#  define Rte_InitValue_FordVehReRiWhlSpdVld_Logl (FALSE)
#  define Rte_InitValue_Ford_WhlFl_W_Meas_Ford_WhlFl_W_Meas (0U)
#  define Rte_InitValue_Ford_WhlFr_W_Meas_Ford_WhlFr_W_Meas (0U)
#  define Rte_InitValue_Ford_WhlRl_W_Meas_Ford_WhlRl_W_Meas (0U)
#  define Rte_InitValue_Ford_WhlRr_W_Meas_Ford_WhlRr_W_Meas (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg217BusHiSpd_ClrDiagcFlgProxy_Val
#  define Rte_Read_FordMsg217BusHiSpd_ClrDiagcFlgProxy_Val(data) (*(data) = Rte_DiagcMgr_ClrDiagcFlgProxy_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordAbsPrsnt_Logl Rte_Read_FordMsg217BusHiSpd_FordAbsPrsnt_Logl
#  define Rte_Read_FordMsg217BusHiSpd_FordAbsPrsnt_Logl(data) (*(data) = Rte_CustDiag_FordAbsPrsnt_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordActvNiblCtrlEnad_Logl Rte_Read_FordMsg217BusHiSpd_FordActvNiblCtrlEnad_Logl
#  define Rte_Read_FordMsg217BusHiSpd_FordActvNiblCtrlEnad_Logl(data) (*(data) = Rte_CustDiag_FordActvNiblCtrlEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordBrkOscnRednEnad_Logl Rte_Read_FordMsg217BusHiSpd_FordBrkOscnRednEnad_Logl
#  define Rte_Read_FordMsg217BusHiSpd_FordBrkOscnRednEnad_Logl(data) (*(data) = Rte_CustDiag_FordBrkPlsRejctnEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCanDtcInhb_Val Rte_Read_FordMsg217BusHiSpd_FordCanDtcInhb_Val
#  define Rte_Read_FordMsg217BusHiSpd_FordCanDtcInhb_Val(data) (*(data) = Rte_FordCanDtcInhb_FordCanDtcInhb8_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg217BusHiSpd_FordEpsLifeCycMod_Val
#  define Rte_Read_FordMsg217BusHiSpd_FordEpsLifeCycMod_Val(data) (*(data) = Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordInvldMsgDiagcInhb_Val Rte_Read_FordMsg217BusHiSpd_FordInvldMsgDiagcInhb_Val
#  define Rte_Read_FordMsg217BusHiSpd_FordInvldMsgDiagcInhb_Val(data) (*(data) = Rte_FordMsg217BusHiSpd_FordInvldMsgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMfgDiagcInhb_Val Rte_Read_FordMsg217BusHiSpd_FordMfgDiagcInhb_Val
#  define Rte_Read_FordMsg217BusHiSpd_FordMfgDiagcInhb_Val(data) (*(data) = Rte_FordMsg217BusHiSpd_FordMfgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMissMsgDiagcInhb_Val Rte_Read_FordMsg217BusHiSpd_FordMissMsgDiagcInhb_Val
#  define Rte_Read_FordMsg217BusHiSpd_FordMissMsgDiagcInhb_Val(data) (*(data) = Rte_FordMsg217BusHiSpd_FordMissMsgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTqSteerCmpEnad_Logl Rte_Read_FordMsg217BusHiSpd_FordTqSteerCmpEnad_Logl
#  define Rte_Read_FordMsg217BusHiSpd_FordTqSteerCmpEnad_Logl(data) (*(data) = Rte_CustDiag_FordTqSteerCmpEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrlrBackupAssiEnad_Logl Rte_Read_FordMsg217BusHiSpd_FordTrlrBackupAssiEnad_Logl
#  define Rte_Read_FordMsg217BusHiSpd_FordTrlrBackupAssiEnad_Logl(data) (*(data) = Rte_FordMsg217BusHiSpd_FordTrlrBackupAssiEnad_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_WhlFl_W_Meas_Ford_WhlFl_W_Meas Rte_Read_FordMsg217BusHiSpd_Ford_WhlFl_W_Meas_Ford_WhlFl_W_Meas
#  define Rte_Read_FordMsg217BusHiSpd_Ford_WhlFl_W_Meas_Ford_WhlFl_W_Meas(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_WhlFl_W_Meas_5a620481, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_WhlFr_W_Meas_Ford_WhlFr_W_Meas Rte_Read_FordMsg217BusHiSpd_Ford_WhlFr_W_Meas_Ford_WhlFr_W_Meas
#  define Rte_Read_FordMsg217BusHiSpd_Ford_WhlFr_W_Meas_Ford_WhlFr_W_Meas(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_WhlFr_W_Meas_5a620481, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_WhlRl_W_Meas_Ford_WhlRl_W_Meas Rte_Read_FordMsg217BusHiSpd_Ford_WhlRl_W_Meas_Ford_WhlRl_W_Meas
#  define Rte_Read_FordMsg217BusHiSpd_Ford_WhlRl_W_Meas_Ford_WhlRl_W_Meas(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_WhlRl_W_Meas_5a620481, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_WhlRr_W_Meas_Ford_WhlRr_W_Meas Rte_Read_FordMsg217BusHiSpd_Ford_WhlRr_W_Meas_Ford_WhlRr_W_Meas
#  define Rte_Read_FordMsg217BusHiSpd_Ford_WhlRr_W_Meas_Ford_WhlRr_W_Meas(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_WhlRr_W_Meas_5a620481, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordVehFrntLeWhlSpd_Val Rte_Write_FordMsg217BusHiSpd_FordVehFrntLeWhlSpd_Val
#  define Rte_Write_FordMsg217BusHiSpd_FordVehFrntLeWhlSpd_Val(data) (Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehFrntLeWhlSpdRaw_Val Rte_Write_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdRaw_Val
#  define Rte_Write_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdRaw_Val(data) (Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehFrntLeWhlSpdVld_Logl Rte_Write_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVld_Logl
#  define Rte_Write_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVld_Logl(data) (Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehFrntRiWhlSpd_Val Rte_Write_FordMsg217BusHiSpd_FordVehFrntRiWhlSpd_Val
#  define Rte_Write_FordMsg217BusHiSpd_FordVehFrntRiWhlSpd_Val(data) (Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehFrntRiWhlSpdRaw_Val Rte_Write_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdRaw_Val
#  define Rte_Write_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdRaw_Val(data) (Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehFrntRiWhlSpdVld_Logl Rte_Write_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVld_Logl
#  define Rte_Write_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVld_Logl(data) (Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehReLeWhlSpd_Val Rte_Write_FordMsg217BusHiSpd_FordVehReLeWhlSpd_Val
#  define Rte_Write_FordMsg217BusHiSpd_FordVehReLeWhlSpd_Val(data) (Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehReLeWhlSpdRaw_Val Rte_Write_FordMsg217BusHiSpd_FordVehReLeWhlSpdRaw_Val
#  define Rte_Write_FordMsg217BusHiSpd_FordVehReLeWhlSpdRaw_Val(data) (Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehReLeWhlSpdVld_Logl Rte_Write_FordMsg217BusHiSpd_FordVehReLeWhlSpdVld_Logl
#  define Rte_Write_FordMsg217BusHiSpd_FordVehReLeWhlSpdVld_Logl(data) (Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehReRiWhlSpd_Val Rte_Write_FordMsg217BusHiSpd_FordVehReRiWhlSpd_Val
#  define Rte_Write_FordMsg217BusHiSpd_FordVehReRiWhlSpd_Val(data) (Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehReRiWhlSpdRaw_Val Rte_Write_FordMsg217BusHiSpd_FordVehReRiWhlSpdRaw_Val
#  define Rte_Write_FordMsg217BusHiSpd_FordVehReRiWhlSpdRaw_Val(data) (Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehReRiWhlSpdVld_Logl Rte_Write_FordMsg217BusHiSpd_FordVehReRiWhlSpdVld_Logl
#  define Rte_Write_FordMsg217BusHiSpd_FordVehReRiWhlSpdVld_Logl(data) (Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdFrntLeWhlVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdFrntLeWhlVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdFrntLeWhlVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdFrntRiWhlVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdFrntRiWhlVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdFrntRiWhlVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdMissMsgFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdMissMsgFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdMissMsgPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdMissMsgPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdReLeWhlVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdReLeWhlVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdReLeWhlVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdReLeWhlVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdReLeWhlVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdReLeWhlVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdReRiWhlVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdReRiWhlVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdReRiWhlVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdReRiWhlVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg217BusHiSpdReRiWhlVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg217BusHiSpdReRiWhlVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehMsg217Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehMsg217Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_FordVehFrntLeWhlSpdPrev() \
  (&Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehFrntRiWhlSpdPrev() \
  (&Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehReLeWhlSpdPrev() \
  (&Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehReRiWhlSpdPrev() \
  (&Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehFrntLeWhlSpdInvldFaildRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehFrntLeWhlSpdInvldPassdRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehFrntLeWhlSpdVldFaildRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehFrntLeWhlSpdVldMissRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehFrntLeWhlSpdVldPassdRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehFrntRiWhlSpdInvldFaildRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehFrntRiWhlSpdInvldPassdRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehFrntRiWhlSpdVldFaildRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehFrntRiWhlSpdVldMissRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehFrntRiWhlSpdVldPassdRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehReLeWhlSpdInvldFaildRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehReLeWhlSpdInvldPassdRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehReLeWhlSpdVldFaildRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehReLeWhlSpdVldMissRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehReLeWhlSpdVldPassdRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehReRiWhlSpdInvldFaildRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehReRiWhlSpdInvldPassdRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehReRiWhlSpdVldFaildRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehReRiWhlSpdVldMissRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehReRiWhlSpdVldPassdRefTi() \
  (&Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgFaildRefTi() \
  (&Rte_FordMsg217BusHiSpd_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgPassdRefTi() \
  (&Rte_FordMsg217BusHiSpd_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehFrntLeWhlSpdRawPrev() \
  (&Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehFrntRiWhlSpdRawPrev() \
  (&Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehReLeWhlSpdRawPrev() \
  (&Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehReRiWhlSpdRawPrev() \
  (&Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ClrDiagcFlgProxyPrev() \
  (&Rte_FordMsg217BusHiSpd_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehFrntLeWhlSpdVldPrev() \
  (&Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehFrntRiWhlSpdVldPrev() \
  (&Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg217Miss() \
  (&Rte_FordMsg217BusHiSpd_FordVehMsg217Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg217Rxd() \
  (&Rte_FordMsg217BusHiSpd_FordVehMsg217Rxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehReLeWhlSpdVldPrev() \
  (&Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehReRiWhlSpdVldPrev() \
  (&Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg217BusHiSpd_START_SEC_CODE
# include "FordMsg217BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg217BusHiSpdInit1 FordMsg217BusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg217BusHiSpdPer1 FordMsg217BusHiSpdPer1
# endif

FUNC(void, FordMsg217BusHiSpd_CODE) FordMsg217BusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg217BusHiSpd_CODE) FordMsg217BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg217BusHiSpd_STOP_SEC_CODE
# include "FordMsg217BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG217BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
