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
 *          File:  Rte_FordMsg202BusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg202BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG202BUSHISPD_H
# define _RTE_FORDMSG202BUSHISPD_H

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

# include "Rte_FordMsg202BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Ford_GearRvrse_D_Actl, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehGearRvsSts_Ford_GearRvrse_D_Actl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdChksEngModl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdCntrEngModl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdEngModl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_VehVActlEng_D_Qf, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModl_Ford_VehVActlEng_D_Qf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_VehVTrlrAid_B_Avail, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvl_Ford_VehVTrlrAid_B_Avail; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvlRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordAbsPrsnt_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordBrkPlsRejctnEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb8_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordInvldMsgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordMfgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordMissMsgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTqSteerCmpEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordTrlrBackupAssiEnad_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
#  define Rte_InitValue_FordAbsPrsnt_Logl (FALSE)
#  define Rte_InitValue_FordBrkOscnRednEnad_Logl (FALSE)
#  define Rte_InitValue_FordCanDtcInhb_Val (1U)
#  define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
#  define Rte_InitValue_FordInvldMsgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordMfgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordMissMsgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordTqSteerCmpEnad_Logl (FALSE)
#  define Rte_InitValue_FordTrlrBackupAssiEnad_Logl (FALSE)
#  define Rte_InitValue_FordVehGearRvsSts_Ford_GearRvrse_D_Actl (7U)
#  define Rte_InitValue_FordVehGearRvsStsRaw_Val (7U)
#  define Rte_InitValue_FordVehGearRvsStsVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSpdChksEngModl_Val (0U)
#  define Rte_InitValue_FordVehSpdCntrEngModl_Val (0U)
#  define Rte_InitValue_FordVehSpdEngModLoQlyVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSpdEngModl_Val (0.0F)
#  define Rte_InitValue_FordVehSpdEngModlRaw_Val (0U)
#  define Rte_InitValue_FordVehSpdEngModlVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSpdQlyFacEngModl_Ford_VehVActlEng_D_Qf (0U)
#  define Rte_InitValue_FordVehTrlrAidAvl_Ford_VehVTrlrAid_B_Avail (FALSE)
#  define Rte_InitValue_FordVehTrlrAidAvlRaw_Val (0U)
#  define Rte_InitValue_FordVehTrlrBackupAssiAvlVld_Logl (FALSE)
#  define Rte_InitValue_Ford_GearRvrse_D_Actl1_Ford_GearRvrse_D_Actl (7U)
#  define Rte_InitValue_Ford_VehVActlEng_D_Qf1_Ford_VehVActlEng_D_Qf (0U)
#  define Rte_InitValue_Ford_VehVActlEng_No_Cnt_Ford_VehVActlEng_No_Cnt (0U)
#  define Rte_InitValue_Ford_VehVActlEng_No_Cs_Ford_VehVActlEng_No_Cs (0U)
#  define Rte_InitValue_Ford_VehVTrlrAid_B_Avail1_Ford_VehVTrlrAid_B_Avail (FALSE)
#  define Rte_InitValue_Ford_Veh_V_ActlEng_Ford_Veh_V_ActlEng (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg202BusHiSpd_ClrDiagcFlgProxy_Val
#  define Rte_Read_FordMsg202BusHiSpd_ClrDiagcFlgProxy_Val(data) (*(data) = Rte_DiagcMgr_ClrDiagcFlgProxy_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordAbsPrsnt_Logl Rte_Read_FordMsg202BusHiSpd_FordAbsPrsnt_Logl
#  define Rte_Read_FordMsg202BusHiSpd_FordAbsPrsnt_Logl(data) (*(data) = Rte_CustDiag_FordAbsPrsnt_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordBrkOscnRednEnad_Logl Rte_Read_FordMsg202BusHiSpd_FordBrkOscnRednEnad_Logl
#  define Rte_Read_FordMsg202BusHiSpd_FordBrkOscnRednEnad_Logl(data) (*(data) = Rte_CustDiag_FordBrkPlsRejctnEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCanDtcInhb_Val Rte_Read_FordMsg202BusHiSpd_FordCanDtcInhb_Val
#  define Rte_Read_FordMsg202BusHiSpd_FordCanDtcInhb_Val(data) (*(data) = Rte_FordCanDtcInhb_FordCanDtcInhb8_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg202BusHiSpd_FordEpsLifeCycMod_Val
#  define Rte_Read_FordMsg202BusHiSpd_FordEpsLifeCycMod_Val(data) (*(data) = Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordInvldMsgDiagcInhb_Val Rte_Read_FordMsg202BusHiSpd_FordInvldMsgDiagcInhb_Val
#  define Rte_Read_FordMsg202BusHiSpd_FordInvldMsgDiagcInhb_Val(data) (*(data) = Rte_FordMsg202BusHiSpd_FordInvldMsgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMfgDiagcInhb_Val Rte_Read_FordMsg202BusHiSpd_FordMfgDiagcInhb_Val
#  define Rte_Read_FordMsg202BusHiSpd_FordMfgDiagcInhb_Val(data) (*(data) = Rte_FordMsg202BusHiSpd_FordMfgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMissMsgDiagcInhb_Val Rte_Read_FordMsg202BusHiSpd_FordMissMsgDiagcInhb_Val
#  define Rte_Read_FordMsg202BusHiSpd_FordMissMsgDiagcInhb_Val(data) (*(data) = Rte_FordMsg202BusHiSpd_FordMissMsgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTqSteerCmpEnad_Logl Rte_Read_FordMsg202BusHiSpd_FordTqSteerCmpEnad_Logl
#  define Rte_Read_FordMsg202BusHiSpd_FordTqSteerCmpEnad_Logl(data) (*(data) = Rte_CustDiag_FordTqSteerCmpEnad_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordTrlrBackupAssiEnad_Logl Rte_Read_FordMsg202BusHiSpd_FordTrlrBackupAssiEnad_Logl
#  define Rte_Read_FordMsg202BusHiSpd_FordTrlrBackupAssiEnad_Logl(data) (*(data) = Rte_FordMsg202BusHiSpd_FordTrlrBackupAssiEnad_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_GearRvrse_D_Actl1_Ford_GearRvrse_D_Actl Rte_Read_FordMsg202BusHiSpd_Ford_GearRvrse_D_Actl1_Ford_GearRvrse_D_Actl
#  define Rte_Read_FordMsg202BusHiSpd_Ford_GearRvrse_D_Actl1_Ford_GearRvrse_D_Actl(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_GearRvrse_D_Actl_2508f61f, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_VehVActlEng_D_Qf1_Ford_VehVActlEng_D_Qf Rte_Read_FordMsg202BusHiSpd_Ford_VehVActlEng_D_Qf1_Ford_VehVActlEng_D_Qf
#  define Rte_Read_FordMsg202BusHiSpd_Ford_VehVActlEng_D_Qf1_Ford_VehVActlEng_D_Qf(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_VehVActlEng_D_Qf_2508f61f, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_VehVActlEng_No_Cnt_Ford_VehVActlEng_No_Cnt Rte_Read_FordMsg202BusHiSpd_Ford_VehVActlEng_No_Cnt_Ford_VehVActlEng_No_Cnt
#  define Rte_Read_FordMsg202BusHiSpd_Ford_VehVActlEng_No_Cnt_Ford_VehVActlEng_No_Cnt(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_VehVActlEng_No_Cnt_2508f61f, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_VehVActlEng_No_Cs_Ford_VehVActlEng_No_Cs Rte_Read_FordMsg202BusHiSpd_Ford_VehVActlEng_No_Cs_Ford_VehVActlEng_No_Cs
#  define Rte_Read_FordMsg202BusHiSpd_Ford_VehVActlEng_No_Cs_Ford_VehVActlEng_No_Cs(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_VehVActlEng_No_Cs_2508f61f, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_VehVTrlrAid_B_Avail1_Ford_VehVTrlrAid_B_Avail Rte_Read_FordMsg202BusHiSpd_Ford_VehVTrlrAid_B_Avail1_Ford_VehVTrlrAid_B_Avail
#  define Rte_Read_FordMsg202BusHiSpd_Ford_VehVTrlrAid_B_Avail1_Ford_VehVTrlrAid_B_Avail(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_VehVTrlrAid_B_Avail_2508f61f, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_Veh_V_ActlEng_Ford_Veh_V_ActlEng Rte_Read_FordMsg202BusHiSpd_Ford_Veh_V_ActlEng_Ford_Veh_V_ActlEng
#  define Rte_Read_FordMsg202BusHiSpd_Ford_Veh_V_ActlEng_Ford_Veh_V_ActlEng(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_Veh_V_ActlEng_2508f61f, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordVehGearRvsSts_Ford_GearRvrse_D_Actl Rte_Write_FordMsg202BusHiSpd_FordVehGearRvsSts_Ford_GearRvrse_D_Actl
#  define Rte_Write_FordMsg202BusHiSpd_FordVehGearRvsSts_Ford_GearRvrse_D_Actl(data) (Rte_FordMsg202BusHiSpd_FordVehGearRvsSts_Ford_GearRvrse_D_Actl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehGearRvsStsRaw_Val Rte_Write_FordMsg202BusHiSpd_FordVehGearRvsStsRaw_Val
#  define Rte_Write_FordMsg202BusHiSpd_FordVehGearRvsStsRaw_Val(data) (Rte_FordMsg202BusHiSpd_FordVehGearRvsStsRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehGearRvsStsVld_Logl Rte_Write_FordMsg202BusHiSpd_FordVehGearRvsStsVld_Logl
#  define Rte_Write_FordMsg202BusHiSpd_FordVehGearRvsStsVld_Logl(data) (Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdChksEngModl_Val Rte_Write_FordMsg202BusHiSpd_FordVehSpdChksEngModl_Val
#  define Rte_Write_FordMsg202BusHiSpd_FordVehSpdChksEngModl_Val(data) (Rte_FordMsg202BusHiSpd_FordVehSpdChksEngModl_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdCntrEngModl_Val Rte_Write_FordMsg202BusHiSpd_FordVehSpdCntrEngModl_Val
#  define Rte_Write_FordMsg202BusHiSpd_FordVehSpdCntrEngModl_Val(data) (Rte_FordMsg202BusHiSpd_FordVehSpdCntrEngModl_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdEngModLoQlyVld_Logl Rte_Write_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVld_Logl
#  define Rte_Write_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVld_Logl(data) (Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdEngModl_Val Rte_Write_FordMsg202BusHiSpd_FordVehSpdEngModl_Val
#  define Rte_Write_FordMsg202BusHiSpd_FordVehSpdEngModl_Val(data) (Rte_FordMsg202BusHiSpd_FordVehSpdEngModl_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdEngModlRaw_Val Rte_Write_FordMsg202BusHiSpd_FordVehSpdEngModlRaw_Val
#  define Rte_Write_FordMsg202BusHiSpd_FordVehSpdEngModlRaw_Val(data) (Rte_FordMsg202BusHiSpd_FordVehSpdEngModlRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdEngModlVld_Logl Rte_Write_FordMsg202BusHiSpd_FordVehSpdEngModlVld_Logl
#  define Rte_Write_FordMsg202BusHiSpd_FordVehSpdEngModlVld_Logl(data) (Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSpdQlyFacEngModl_Ford_VehVActlEng_D_Qf Rte_Write_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModl_Ford_VehVActlEng_D_Qf
#  define Rte_Write_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModl_Ford_VehVActlEng_D_Qf(data) (Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModl_Ford_VehVActlEng_D_Qf = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidAvl_Ford_VehVTrlrAid_B_Avail Rte_Write_FordMsg202BusHiSpd_FordVehTrlrAidAvl_Ford_VehVTrlrAid_B_Avail
#  define Rte_Write_FordMsg202BusHiSpd_FordVehTrlrAidAvl_Ford_VehVTrlrAid_B_Avail(data) (Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvl_Ford_VehVTrlrAid_B_Avail = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrAidAvlRaw_Val Rte_Write_FordMsg202BusHiSpd_FordVehTrlrAidAvlRaw_Val
#  define Rte_Write_FordMsg202BusHiSpd_FordVehTrlrAidAvlRaw_Val(data) (Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvlRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehTrlrBackupAssiAvlVld_Logl Rte_Write_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVld_Logl
#  define Rte_Write_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVld_Logl(data) (Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdEngModLoQlyVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdEngModLoQlyVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdEngModLoQlyVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg202BusHiSpdEngModlVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdEngModlVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg202BusHiSpdEngModlVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdEngModlVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg202BusHiSpdGearRvsStsInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdGearRvsStsInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg202BusHiSpdGearRvsStsInvldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdGearRvsStsInvldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdGearRvsStsVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdGearRvsStsVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdGearRvsStsVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg202BusHiSpdMissMsgPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdMissMsgPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg202BusHiSpdQlyFacEngModInvldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdQlyFacEngModInvldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg202BusHiSpdQlyFacEngModInvldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdQlyFacEngModInvldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModlInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModlInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_GearRvrse_D_Actl, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdChksEngModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdCntrEngModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_VehVActlEng_D_Qf, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvlRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehMsg202Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehMsg202Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_VehVTrlrAid_B_Avail, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_FordVehSpdEngModlPrev() \
  (&Rte_FordMsg202BusHiSpd_FordVehSpdEngModlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehGearRvsStsInvldFaildRefTi() \
  (&Rte_FordMsg202BusHiSpd_FordVehGearRvsStsInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehGearRvsStsInvldPassdRefTi() \
  (&Rte_FordMsg202BusHiSpd_FordVehGearRvsStsInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehGearRvsStsVldFaildRefTi() \
  (&Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehGearRvsStsVldMissRefTi() \
  (&Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehGearRvsStsVldPassdRefTi() \
  (&Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdEngModLoQlyVldFaildRefTi() \
  (&Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdEngModLoQlyVldMissRefTi() \
  (&Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdEngModLoQlyVldPassdRefTi() \
  (&Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdEngModlVldFaildRefTi() \
  (&Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdEngModlVldMissRefTi() \
  (&Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdQlyFacEngModlInvldFaildRefTi() \
  (&Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModlInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdQlyFacEngModlInvldPassdRefTi() \
  (&Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModlInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrBackupAssiAvlVldMissRefTi() \
  (&Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrBackupAssiAvlVldPassdRefTi() \
  (&Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgFaildRefTi() \
  (&Rte_FordMsg202BusHiSpd_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgPassdRefTi() \
  (&Rte_FordMsg202BusHiSpd_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdEngModlRawPrev() \
  (&Rte_FordMsg202BusHiSpd_FordVehSpdEngModlRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ClrDiagcFlgProxyPrev() \
  (&Rte_FordMsg202BusHiSpd_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehGearRvsStsPrev() \
  (&Rte_FordMsg202BusHiSpd_FordVehGearRvsStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehGearRvsStsRawPrev() \
  (&Rte_FordMsg202BusHiSpd_FordVehGearRvsStsRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdChksEngModlPrev() \
  (&Rte_FordMsg202BusHiSpd_FordVehSpdChksEngModlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdCntrEngModlPrev() \
  (&Rte_FordMsg202BusHiSpd_FordVehSpdCntrEngModlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdQlyFacEngModlPrev() \
  (&Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrAidAvlRawPrev() \
  (&Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvlRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FirstTranVldFlg() \
  (&Rte_FordMsg202BusHiSpd_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehGearRvsStsVldPrev() \
  (&Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg202Miss() \
  (&Rte_FordMsg202BusHiSpd_FordVehMsg202Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg202Rxd() \
  (&Rte_FordMsg202BusHiSpd_FordVehMsg202Rxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdEngModLoQlyVldPrev() \
  (&Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSpdEngModlVldPrev() \
  (&Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrAidAvlPrev() \
  (&Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTrlrBackupAssiAvlVldPrev() \
  (&Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg202BusHiSpd_START_SEC_CODE
# include "FordMsg202BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg202BusHiSpdInit1 FordMsg202BusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg202BusHiSpdPer1 FordMsg202BusHiSpdPer1
# endif

FUNC(void, FordMsg202BusHiSpd_CODE) FordMsg202BusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg202BusHiSpd_CODE) FordMsg202BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg202BusHiSpd_STOP_SEC_CODE
# include "FordMsg202BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG202BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
