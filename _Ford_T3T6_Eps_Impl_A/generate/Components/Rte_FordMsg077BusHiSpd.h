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
 *          File:  Rte_FordMsg077BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg077BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG077BUSHISPD_H
# define _RTE_FORDMSG077BUSHISPD_H

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

# include "Rte_FordMsg077BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLatACmpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLatACmpdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLatACmpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLgtACmpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehSpdOverGnd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordBrkPlsRejctnEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordClrDiagcFlgProxy_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordEvasSteerAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneCentrAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneKeepAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordPullDriftCmpEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTqSteerCmpEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrfcJamAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_FordBrkOscnRednEnad_Logl (FALSE)
#  define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
#  define Rte_InitValue_FordClrDiagcFlgProxy_Logl (FALSE)
#  define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
#  define Rte_InitValue_FordEvasSteerAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordLaneCentrAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordLaneKeepAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordPullDriftCmpEnad_Logl (FALSE)
#  define Rte_InitValue_FordTqSteerCmpEnad_Logl (FALSE)
#  define Rte_InitValue_FordTrfcJamAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordTrlrBackUpAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordVehLatACmpd_Val (17.835F)
#  define Rte_InitValue_FordVehLatACmpdRaw_Val (1022U)
#  define Rte_InitValue_FordVehLatACmpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehLgtACmpd_Val (17.835F)
#  define Rte_InitValue_FordVehLgtACmpdRaw_Val (1022U)
#  define Rte_InitValue_FordVehLgtACmpdVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSpdOverGnd_Val (0.0F)
#  define Rte_InitValue_FordVehSpdOverGndRaw_Val (0U)
#  define Rte_InitValue_FordVehSpdOverGndVld_Logl (FALSE)
#  define Rte_InitValue_FordVehYawRateCmpd_Val (74.92659F)
#  define Rte_InitValue_FordVehYawRateCmpdRaw_Val (4094U)
#  define Rte_InitValue_FordVehYawRateCmpdVld_Logl (FALSE)
#  define Rte_InitValue_Ford_VehLatComp_A_Actl_Ford_VehLatComp_A_Actl (1022U)
#  define Rte_InitValue_Ford_VehLongComp_A_Actl_Ford_VehLongComp_A_Actl (1022U)
#  define Rte_InitValue_Ford_VehOverGnd_V_Est_Ford_VehOverGnd_V_Est (0U)
#  define Rte_InitValue_Ford_VehYawComp_W_Actl_Ford_VehYawComp_W_Actl (4094U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_FordBrkOscnRednEnad_Logl Rte_Read_FordMsg077BusHiSpd_FordBrkOscnRednEnad_Logl
#  define Rte_Read_FordMsg077BusHiSpd_FordBrkOscnRednEnad_Logl(data) (*(data) = Rte_CustDiag_FordBrkPlsRejctnEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg077BusHiSpd_FordCanDtcInhb_Logl
#  define Rte_Read_FordMsg077BusHiSpd_FordCanDtcInhb_Logl(data) (*(data) = Rte_FordCanDtcInhb_FordCanDtcInhb_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordClrDiagcFlgProxy_Logl Rte_Read_FordMsg077BusHiSpd_FordClrDiagcFlgProxy_Logl
#  define Rte_Read_FordMsg077BusHiSpd_FordClrDiagcFlgProxy_Logl(data) (*(data) = Rte_FordMsg077BusHiSpd_FordClrDiagcFlgProxy_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg077BusHiSpd_FordEpsLifeCycMod_Val
#  define Rte_Read_FordMsg077BusHiSpd_FordEpsLifeCycMod_Val(data) (*(data) = Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEvasSteerAssiEnad_Logl Rte_Read_FordMsg077BusHiSpd_FordEvasSteerAssiEnad_Logl
#  define Rte_Read_FordMsg077BusHiSpd_FordEvasSteerAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordEvasSteerAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneCentrAssiEnad_Logl Rte_Read_FordMsg077BusHiSpd_FordLaneCentrAssiEnad_Logl
#  define Rte_Read_FordMsg077BusHiSpd_FordLaneCentrAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordLaneCentrAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneKeepAssiEnad_Logl Rte_Read_FordMsg077BusHiSpd_FordLaneKeepAssiEnad_Logl
#  define Rte_Read_FordMsg077BusHiSpd_FordLaneKeepAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordLaneKeepAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordPullDriftCmpEnad_Logl Rte_Read_FordMsg077BusHiSpd_FordPullDriftCmpEnad_Logl
#  define Rte_Read_FordMsg077BusHiSpd_FordPullDriftCmpEnad_Logl(data) (*(data) = Rte_CustDiag_FordPullDriftCmpEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTqSteerCmpEnad_Logl Rte_Read_FordMsg077BusHiSpd_FordTqSteerCmpEnad_Logl
#  define Rte_Read_FordMsg077BusHiSpd_FordTqSteerCmpEnad_Logl(data) (*(data) = Rte_CustDiag_FordTqSteerCmpEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrfcJamAssiEnad_Logl Rte_Read_FordMsg077BusHiSpd_FordTrfcJamAssiEnad_Logl
#  define Rte_Read_FordMsg077BusHiSpd_FordTrfcJamAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordTrfcJamAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrlrBackUpAssiEnad_Logl Rte_Read_FordMsg077BusHiSpd_FordTrlrBackUpAssiEnad_Logl
#  define Rte_Read_FordMsg077BusHiSpd_FordTrlrBackUpAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordTrlrBackupAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_VehLatComp_A_Actl_Ford_VehLatComp_A_Actl Rte_Read_FordMsg077BusHiSpd_Ford_VehLatComp_A_Actl_Ford_VehLatComp_A_Actl
#  define Rte_Read_FordMsg077BusHiSpd_Ford_VehLatComp_A_Actl_Ford_VehLatComp_A_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_VehLatComp_A_Actl_470bb112, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_VehLongComp_A_Actl_Ford_VehLongComp_A_Actl Rte_Read_FordMsg077BusHiSpd_Ford_VehLongComp_A_Actl_Ford_VehLongComp_A_Actl
#  define Rte_Read_FordMsg077BusHiSpd_Ford_VehLongComp_A_Actl_Ford_VehLongComp_A_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_VehLongComp_A_Actl_470bb112, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_VehOverGnd_V_Est_Ford_VehOverGnd_V_Est Rte_Read_FordMsg077BusHiSpd_Ford_VehOverGnd_V_Est_Ford_VehOverGnd_V_Est
#  define Rte_Read_FordMsg077BusHiSpd_Ford_VehOverGnd_V_Est_Ford_VehOverGnd_V_Est(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_VehOverGnd_V_Est_470bb112, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_VehYawComp_W_Actl_Ford_VehYawComp_W_Actl Rte_Read_FordMsg077BusHiSpd_Ford_VehYawComp_W_Actl_Ford_VehYawComp_W_Actl
#  define Rte_Read_FordMsg077BusHiSpd_Ford_VehYawComp_W_Actl_Ford_VehYawComp_W_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_VehYawComp_W_Actl_470bb112, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordVehLatACmpd_Val Rte_Write_FordMsg077BusHiSpd_FordVehLatACmpd_Val
#  define Rte_Write_FordMsg077BusHiSpd_FordVehLatACmpd_Val(data) (Rte_FordMsg077BusHiSpd_FordVehLatACmpd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatACmpdRaw_Val Rte_Write_FordMsg077BusHiSpd_FordVehLatACmpdRaw_Val
#  define Rte_Write_FordMsg077BusHiSpd_FordVehLatACmpdRaw_Val(data) (Rte_FordMsg077BusHiSpd_FordVehLatACmpdRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatACmpdVld_Logl Rte_Write_FordMsg077BusHiSpd_FordVehLatACmpdVld_Logl
#  define Rte_Write_FordMsg077BusHiSpd_FordVehLatACmpdVld_Logl(data) (Rte_FordMsg077BusHiSpd_FordVehLatACmpdVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLgtACmpd_Val Rte_Write_FordMsg077BusHiSpd_FordVehLgtACmpd_Val
#  define Rte_Write_FordMsg077BusHiSpd_FordVehLgtACmpd_Val(data) (Rte_FordMsg077BusHiSpd_FordVehLgtACmpd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLgtACmpdRaw_Val Rte_Write_FordMsg077BusHiSpd_FordVehLgtACmpdRaw_Val
#  define Rte_Write_FordMsg077BusHiSpd_FordVehLgtACmpdRaw_Val(data) (Rte_FordMsg077BusHiSpd_FordVehLgtACmpdRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLgtACmpdVld_Logl Rte_Write_FordMsg077BusHiSpd_FordVehLgtACmpdVld_Logl
#  define Rte_Write_FordMsg077BusHiSpd_FordVehLgtACmpdVld_Logl(data) (Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdOverGnd_Val Rte_Write_FordMsg077BusHiSpd_FordVehSpdOverGnd_Val
#  define Rte_Write_FordMsg077BusHiSpd_FordVehSpdOverGnd_Val(data) (Rte_FordMsg077BusHiSpd_FordVehSpdOverGnd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdOverGndRaw_Val Rte_Write_FordMsg077BusHiSpd_FordVehSpdOverGndRaw_Val
#  define Rte_Write_FordMsg077BusHiSpd_FordVehSpdOverGndRaw_Val(data) (Rte_FordMsg077BusHiSpd_FordVehSpdOverGndRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdOverGndVld_Logl Rte_Write_FordMsg077BusHiSpd_FordVehSpdOverGndVld_Logl
#  define Rte_Write_FordMsg077BusHiSpd_FordVehSpdOverGndVld_Logl(data) (Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehYawRateCmpd_Val Rte_Write_FordMsg077BusHiSpd_FordVehYawRateCmpd_Val
#  define Rte_Write_FordMsg077BusHiSpd_FordVehYawRateCmpd_Val(data) (Rte_FordMsg077BusHiSpd_FordVehYawRateCmpd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehYawRateCmpdRaw_Val Rte_Write_FordMsg077BusHiSpd_FordVehYawRateCmpdRaw_Val
#  define Rte_Write_FordMsg077BusHiSpd_FordVehYawRateCmpdRaw_Val(data) (Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehYawRateCmpdVld_Logl Rte_Write_FordMsg077BusHiSpd_FordVehYawRateCmpdVld_Logl
#  define Rte_Write_FordMsg077BusHiSpd_FordVehYawRateCmpdVld_Logl(data) (Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_FordMsg077BusHiSpdCanDtcInhbThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdCanDtcInhbThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdLatACmpdInvldSigFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdLatACmpdInvldSigFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdLatACmpdInvldSigPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdLatACmpdInvldSigPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdLatACmpdVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdLatACmpdVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdLgtACmpdVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdLgtACmpdVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdMissMsgFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdMissMsgFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdMissMsgPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdMissMsgPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdOverGndInvldSigFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdOverGndInvldSigFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdOverGndInvldSigPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdOverGndInvldSigPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdVehLatACmpdVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdVehLatACmpdVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdVehLatACmpdVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdVehLatACmpdVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdVehLgtACmpdVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdVehLgtACmpdVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdVehLgtACmpdVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdVehLgtACmpdVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdVehSpdOverGndVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdVehSpdOverGndVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdVehSpdOverGndVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdVehSpdOverGndVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdVehSpdOverGndVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdVehSpdOverGndVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg077BusHiSpdYawRateCmpdVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg077BusHiSpdYawRateCmpdVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_CanDtcInhbRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_DiagcClrProxyFlgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehMsg77Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_FordVehLatACmpdPrev() \
  (&Rte_FordMsg077BusHiSpd_FordVehLatACmpdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLgtACmpdPrev() \
  (&Rte_FordMsg077BusHiSpd_FordVehLgtACmpdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdOverGndPrev() \
  (&Rte_FordMsg077BusHiSpd_FordVehSpdOverGndPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehYawRateCmpdPrev() \
  (&Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CanDtcInhbRefTi() \
  (&Rte_FordMsg077BusHiSpd_CanDtcInhbRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatACmpdInvldFaildRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehLatACmpdInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatACmpdInvldPassdRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehLatACmpdInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatACmpdVldFaildRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehLatACmpdVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatACmpdVldMissRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehLatACmpdVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatACmpdVldPassdRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehLatACmpdVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLgtACmpdInvldFaildRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehLgtACmpdInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLgtACmpdInvldPassdRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehLgtACmpdInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLgtACmpdVldFaildRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLgtACmpdVldMissRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLgtACmpdVldPassdRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdOverGndInvldFaildRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehSpdOverGndInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdOverGndInvldPassdRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehSpdOverGndInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdOverGndVldFaildRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdOverGndVldMissRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdOverGndVldPassdRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehYawRateCmpdInvldFaildRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehYawRateCmpdInvldPassdRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehYawRateCmpdVldFaildRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehYawRateCmpdVldMissRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehYawRateCmpdVldPassdRefTi() \
  (&Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgFaildRefTi() \
  (&Rte_FordMsg077BusHiSpd_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgPassdRefTi() \
  (&Rte_FordMsg077BusHiSpd_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatACmpdRawPrev() \
  (&Rte_FordMsg077BusHiSpd_FordVehLatACmpdRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLgtACmpdRawPrev() \
  (&Rte_FordMsg077BusHiSpd_FordVehLgtACmpdRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdOverGndRawPrev() \
  (&Rte_FordMsg077BusHiSpd_FordVehSpdOverGndRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehYawRateCmpdRawPrev() \
  (&Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DiagcClrProxyFlgPrev() \
  (&Rte_FordMsg077BusHiSpd_DiagcClrProxyFlgPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FirstTranVldFlg() \
  (&Rte_FordMsg077BusHiSpd_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatACmpdVldPrev() \
  (&Rte_FordMsg077BusHiSpd_FordVehLatACmpdVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLgtACmpdVldPrev() \
  (&Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg77Miss() \
  (&Rte_FordMsg077BusHiSpd_FordVehMsg77Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdOverGndVldPrev() \
  (&Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehYawRateCmpdVldPrev() \
  (&Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg077BusHiSpd_START_SEC_CODE
# include "FordMsg077BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg077BusHiSpdInit1 FordMsg077BusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg077BusHiSpdPer1 FordMsg077BusHiSpdPer1
# endif

FUNC(void, FordMsg077BusHiSpd_CODE) FordMsg077BusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg077BusHiSpd_CODE) FordMsg077BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg077BusHiSpd_STOP_SEC_CODE
# include "FordMsg077BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG077BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
