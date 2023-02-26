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
 *          File:  Rte_FordMsg3D3BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg3D3BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG3D3BUSHISPD_H
# define _RTE_FORDMSG3D3BUSHISPD_H

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

# include "Rte_FordMsg3D3BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRate_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRateRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlImgProcrModlAVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPah_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPrcsn_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRampTyp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlReq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRingMax_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneCentrAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrfcJamAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

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
#  define Rte_InitValue_FordLaneCentrAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordTrfcJamAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordVehLatCtrlCrvt_Val (0.0F)
#  define Rte_InitValue_FordVehLatCtrlCrvtRate_Val (0.0F)
#  define Rte_InitValue_FordVehLatCtrlCrvtRateRaw_Val (4096U)
#  define Rte_InitValue_FordVehLatCtrlCrvtRaw_Val (1000U)
#  define Rte_InitValue_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val (0U)
#  define Rte_InitValue_FordVehLatCtrlImgProcrModlAVld_Logl (FALSE)
#  define Rte_InitValue_FordVehLatCtrlPah_Val (0.0F)
#  define Rte_InitValue_FordVehLatCtrlPahOffs_Val (0.0F)
#  define Rte_InitValue_FordVehLatCtrlPahOffsRaw_Val (512U)
#  define Rte_InitValue_FordVehLatCtrlPahRaw_Val (1000U)
#  define Rte_InitValue_FordVehLatCtrlPrcsn_Val (0U)
#  define Rte_InitValue_FordVehLatCtrlRampTyp_Val (0U)
#  define Rte_InitValue_FordVehLatCtrlReq_Val (0U)
#  define Rte_InitValue_FordVehLatCtrlRingMax_Val (0U)
#  define Rte_InitValue_Ford_HandsOffCnfm_B_Rq_Ford_HandsOffCnfm_B_Rq (FALSE)
#  define Rte_InitValue_Ford_LatCtlCurv_NoRate_Actl_Ford_LatCtlCurv_NoRate_Actl (4096U)
#  define Rte_InitValue_Ford_LatCtlCurv_No_Actl_Ford_LatCtlCurv_No_Actl (1000U)
#  define Rte_InitValue_Ford_LatCtlPathOffst_L_Actl_Ford_LatCtlPathOffst_L_Actl (512U)
#  define Rte_InitValue_Ford_LatCtlPath_An_Actl_Ford_LatCtlPath_An_Actl (1000U)
#  define Rte_InitValue_Ford_LatCtlPrecision_D_Rq_Ford_LatCtlPrecision_D_Rq (0U)
#  define Rte_InitValue_Ford_LatCtlRampType_D_Rq_Ford_LatCtlRampType_D_Rq (0U)
#  define Rte_InitValue_Ford_LatCtlRng_L_Max_Ford_LatCtlRng_L_Max (0U)
#  define Rte_InitValue_Ford_LatCtl_D_Rq_Ford_LatCtl_D_Rq (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg3D3BusHiSpd_ClrDiagcFlgProxy_Val
#  define Rte_Read_FordMsg3D3BusHiSpd_ClrDiagcFlgProxy_Val(data) (*(data) = Rte_DiagcMgr_ClrDiagcFlgProxy_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg3D3BusHiSpd_FordCanDtcInhb_Logl
#  define Rte_Read_FordMsg3D3BusHiSpd_FordCanDtcInhb_Logl(data) (*(data) = Rte_FordCanDtcInhb_FordCanDtcInhb_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg3D3BusHiSpd_FordEpsLifeCycMod_Val
#  define Rte_Read_FordMsg3D3BusHiSpd_FordEpsLifeCycMod_Val(data) (*(data) = Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordLaneCentrAssiEnad_Logl Rte_Read_FordMsg3D3BusHiSpd_FordLaneCentrAssiEnad_Logl
#  define Rte_Read_FordMsg3D3BusHiSpd_FordLaneCentrAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordLaneCentrAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrfcJamAssiEnad_Logl Rte_Read_FordMsg3D3BusHiSpd_FordTrfcJamAssiEnad_Logl
#  define Rte_Read_FordMsg3D3BusHiSpd_FordTrfcJamAssiEnad_Logl(data) (*(data) = Rte_CustDiag_FordTrfcJamAssiEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_HandsOffCnfm_B_Rq_Ford_HandsOffCnfm_B_Rq Rte_Read_FordMsg3D3BusHiSpd_Ford_HandsOffCnfm_B_Rq_Ford_HandsOffCnfm_B_Rq
#  define Rte_Read_FordMsg3D3BusHiSpd_Ford_HandsOffCnfm_B_Rq_Ford_HandsOffCnfm_B_Rq(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_HandsOffCnfm_B_Rq_5abef978, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_LatCtlCurv_NoRate_Actl_Ford_LatCtlCurv_NoRate_Actl Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlCurv_NoRate_Actl_Ford_LatCtlCurv_NoRate_Actl
#  define Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlCurv_NoRate_Actl_Ford_LatCtlCurv_NoRate_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_LatCtlCurv_NoRate_Actl_5abef978, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_LatCtlCurv_No_Actl_Ford_LatCtlCurv_No_Actl Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlCurv_No_Actl_Ford_LatCtlCurv_No_Actl
#  define Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlCurv_No_Actl_Ford_LatCtlCurv_No_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_LatCtlCurv_No_Actl_5abef978, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_LatCtlPathOffst_L_Actl_Ford_LatCtlPathOffst_L_Actl Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlPathOffst_L_Actl_Ford_LatCtlPathOffst_L_Actl
#  define Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlPathOffst_L_Actl_Ford_LatCtlPathOffst_L_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_LatCtlPathOffst_L_Actl_5abef978, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_LatCtlPath_An_Actl_Ford_LatCtlPath_An_Actl Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlPath_An_Actl_Ford_LatCtlPath_An_Actl
#  define Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlPath_An_Actl_Ford_LatCtlPath_An_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_LatCtlPath_An_Actl_5abef978, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_LatCtlPrecision_D_Rq_Ford_LatCtlPrecision_D_Rq Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlPrecision_D_Rq_Ford_LatCtlPrecision_D_Rq
#  define Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlPrecision_D_Rq_Ford_LatCtlPrecision_D_Rq(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_LatCtlPrecision_D_Rq_5abef978, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_LatCtlRampType_D_Rq_Ford_LatCtlRampType_D_Rq Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlRampType_D_Rq_Ford_LatCtlRampType_D_Rq
#  define Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlRampType_D_Rq_Ford_LatCtlRampType_D_Rq(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_LatCtlRampType_D_Rq_5abef978, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_LatCtlRng_L_Max_Ford_LatCtlRng_L_Max Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlRng_L_Max_Ford_LatCtlRng_L_Max
#  define Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlRng_L_Max_Ford_LatCtlRng_L_Max(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_LatCtlRng_L_Max_5abef978, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_LatCtl_D_Rq_Ford_LatCtl_D_Rq Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtl_D_Rq_Ford_LatCtl_D_Rq
#  define Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtl_D_Rq_Ford_LatCtl_D_Rq(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_LatCtl_D_Rq_5abef978, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordVehLatCtrlCrvt_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvt_Val
#  define Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvt_Val(data) (Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatCtrlCrvtRate_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRate_Val
#  define Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRate_Val(data) (Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRate_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatCtrlCrvtRateRaw_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRateRaw_Val
#  define Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRateRaw_Val(data) (Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRateRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatCtrlCrvtRaw_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRaw_Val
#  define Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRaw_Val(data) (Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val
#  define Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val(data) (Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatCtrlImgProcrModlAVld_Logl Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlImgProcrModlAVld_Logl
#  define Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlImgProcrModlAVld_Logl(data) (Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlImgProcrModlAVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatCtrlPah_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPah_Val
#  define Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPah_Val(data) (Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPah_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatCtrlPahOffs_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffs_Val
#  define Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffs_Val(data) (Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatCtrlPahOffsRaw_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsRaw_Val
#  define Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsRaw_Val(data) (Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatCtrlPahRaw_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPahRaw_Val
#  define Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPahRaw_Val(data) (Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatCtrlPrcsn_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPrcsn_Val
#  define Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPrcsn_Val(data) (Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPrcsn_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatCtrlRampTyp_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlRampTyp_Val
#  define Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlRampTyp_Val(data) (Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRampTyp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatCtrlReq_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlReq_Val
#  define Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlReq_Val(data) (Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlReq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehLatCtrlRingMax_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlRingMax_Val
#  define Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlRingMax_Val(data) (Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRingMax_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D3BusHiSpdMissMsgFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D3BusHiSpdMissMsgFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg3D3BusHiSpdMissMsgPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg3D3BusHiSpdMissMsgPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRatePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_ImgProcrModlAVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_ImgProcrModlAVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRateRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_LatCtlPrecision_D_Rq, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPrcsnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_LatCtlRampType_D_Rq, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRampTypPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_LatCtl_D_Rq, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlReqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRingMaxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_HandsOffCnfm_B_Rq, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlHandsOffDetnTqStimlsReqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlImgProcrModlAVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehMsg3D3Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_FordVehLatCtrlCrvtPrev() \
  (&Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatCtrlCrvtRatePrev() \
  (&Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRatePrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatCtrlPahOffsPrev() \
  (&Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatCtrlPahPrev() \
  (&Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ImgProcrModlAVldFaildRefTi() \
  (&Rte_FordMsg3D3BusHiSpd_ImgProcrModlAVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ImgProcrModlAVldPassdRefTi() \
  (&Rte_FordMsg3D3BusHiSpd_ImgProcrModlAVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgFaildRefTi() \
  (&Rte_FordMsg3D3BusHiSpd_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgPassdRefTi() \
  (&Rte_FordMsg3D3BusHiSpd_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatCtrlCrvtRateRawPrev() \
  (&Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRateRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatCtrlCrvtRawPrev() \
  (&Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatCtrlPahOffsRawPrev() \
  (&Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatCtrlPahRawPrev() \
  (&Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ClrDiagcFlgProxyPrev() \
  (&Rte_FordMsg3D3BusHiSpd_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatCtrlPrcsnPrev() \
  (&Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPrcsnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatCtrlRampTypPrev() \
  (&Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRampTypPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatCtrlReqPrev() \
  (&Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlReqPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatCtrlRingMaxPrev() \
  (&Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRingMaxPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FirstTranVldFlg() \
  (&Rte_FordMsg3D3BusHiSpd_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatCtrlHandsOffDetnTqStimlsReqPrev() \
  (&Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlHandsOffDetnTqStimlsReqPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehLatCtrlImgProcrModlAVldPrev() \
  (&Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlImgProcrModlAVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg3D3Miss() \
  (&Rte_FordMsg3D3BusHiSpd_FordVehMsg3D3Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg3D3BusHiSpd_START_SEC_CODE
# include "FordMsg3D3BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg3D3BusHiSpdInit1 FordMsg3D3BusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg3D3BusHiSpdPer1 FordMsg3D3BusHiSpdPer1
# endif

FUNC(void, FordMsg3D3BusHiSpd_CODE) FordMsg3D3BusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg3D3BusHiSpd_CODE) FordMsg3D3BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg3D3BusHiSpd_STOP_SEC_CODE
# include "FordMsg3D3BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG3D3BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
