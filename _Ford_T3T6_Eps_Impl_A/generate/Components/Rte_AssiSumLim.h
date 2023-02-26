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
 *          File:  Rte_AssiSumLim.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <AssiSumLim>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_ASSISUMLIM_H
# define _RTE_ASSISUMLIM_H

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

# include "Rte_AssiSumLim_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdLimdPreStall_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdLimrMin_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdPreLim_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_SysProtnRednFac_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_StabyCmp_AssiCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_DampgPahSum_DampgCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtnFwl_EotActvCmdLimd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_EotAssiScaCdnd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_EotProtnFwl_EotDampgCmdLimd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_EotMotTqLimCdnd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_HwTqLoaMtgtnEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdLimDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordMotTqCmdOvrl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelMrf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_PinionCentrLrnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_AssiSumLim_PinionCentrLrnEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_PullCmpCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_PwrLimr_PwrLimrRednFac_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_RtnPahFwl_RtnCmdLimd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_StallMotTqLimCdnd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_SysMotTqCmdScaCdnd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_ThermMotTqLimCdnd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_DutyCycThermProtn_ThermRednFac_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_TqLoa_TqLoaCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_TqSteerMtgtnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_VehSpdMotTqLimCdnd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_WhlImbRejctnCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AssiCmd_Val (0.0F)
#  define Rte_InitValue_DampgCmd_Val (0.0F)
#  define Rte_InitValue_EotActvCmd_Val (0.0F)
#  define Rte_InitValue_EotAssiSca_Val (1.0F)
#  define Rte_InitValue_EotDampgCmd_Val (0.0F)
#  define Rte_InitValue_EotMotTqLim_Val (8.8F)
#  define Rte_InitValue_HwTqLoaMtgtnEna_Logl (FALSE)
#  define Rte_InitValue_MotTqCmd_Val (0.0F)
#  define Rte_InitValue_MotTqCmdLimDi_Logl (FALSE)
#  define Rte_InitValue_MotTqCmdLimdPreStall_Val (0.0F)
#  define Rte_InitValue_MotTqCmdLimrMin_Val (8.8F)
#  define Rte_InitValue_MotTqCmdOvrl_Val (0.0F)
#  define Rte_InitValue_MotTqCmdPreLim_Val (0.0F)
#  define Rte_InitValue_MotVelMrf_Val (0.0F)
#  define Rte_InitValue_PinionCentrLrnCmd_Val (0.0F)
#  define Rte_InitValue_PinionCentrLrnEna_Logl (FALSE)
#  define Rte_InitValue_PullCmpCmd_Val (0.0F)
#  define Rte_InitValue_PwrLimrRednFac_Val (0.0F)
#  define Rte_InitValue_RtnCmd_Val (0.0F)
#  define Rte_InitValue_StallMotTqLim_Val (8.8F)
#  define Rte_InitValue_SysMotTqCmdSca_Val (1.0F)
#  define Rte_InitValue_SysProtnRednFac_Val (0.0F)
#  define Rte_InitValue_ThermMotTqLim_Val (8.8F)
#  define Rte_InitValue_ThermRednFac_Val (0.0F)
#  define Rte_InitValue_TqLoaCmd_Val (0.0F)
#  define Rte_InitValue_TqSteerMtgtnCmd_Val (0.0F)
#  define Rte_InitValue_VehSpd_Val (0.0F)
#  define Rte_InitValue_VehSpdMotTqLim_Val (8.8F)
#  define Rte_InitValue_WhlImbRejctnCmd_Val (0.0F)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_AssiSumLim_ProcdManTqCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_AssiSumLim_ProcdManTqCmdEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_AssiCmd_Val Rte_Read_AssiSumLim_AssiCmd_Val
#  define Rte_Read_AssiSumLim_AssiCmd_Val(data) (*(data) = Rte_StabyCmp_AssiCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DampgCmd_Val Rte_Read_AssiSumLim_DampgCmd_Val
#  define Rte_Read_AssiSumLim_DampgCmd_Val(data) (*(data) = Rte_DampgPahSum_DampgCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EotActvCmd_Val Rte_Read_AssiSumLim_EotActvCmd_Val
#  define Rte_Read_AssiSumLim_EotActvCmd_Val(data) (*(data) = Rte_EotProtnFwl_EotActvCmdLimd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EotAssiSca_Val Rte_Read_AssiSumLim_EotAssiSca_Val
#  define Rte_Read_AssiSumLim_EotAssiSca_Val(data) (*(data) = Rte_LimrCdng_EotAssiScaCdnd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EotDampgCmd_Val Rte_Read_AssiSumLim_EotDampgCmd_Val
#  define Rte_Read_AssiSumLim_EotDampgCmd_Val(data) (*(data) = Rte_EotProtnFwl_EotDampgCmdLimd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EotMotTqLim_Val Rte_Read_AssiSumLim_EotMotTqLim_Val
#  define Rte_Read_AssiSumLim_EotMotTqLim_Val(data) (*(data) = Rte_LimrCdng_EotMotTqLimCdnd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqLoaMtgtnEna_Logl Rte_Read_AssiSumLim_HwTqLoaMtgtnEna_Logl
#  define Rte_Read_AssiSumLim_HwTqLoaMtgtnEna_Logl(data) (*(data) = Rte_LoaMgr_HwTqLoaMtgtnEna_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotTqCmdLimDi_Logl Rte_Read_AssiSumLim_MotTqCmdLimDi_Logl
#  define Rte_Read_AssiSumLim_MotTqCmdLimDi_Logl(data) (*(data) = Rte_AssiSumLim_MotTqCmdLimDi_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotTqCmdOvrl_Val Rte_Read_AssiSumLim_MotTqCmdOvrl_Val
#  define Rte_Read_AssiSumLim_MotTqCmdOvrl_Val(data) (*(data) = Rte_FordMotTqCmdOvrlLimr_FordMotTqCmdOvrl_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotVelMrf_Val Rte_Read_AssiSumLim_MotVelMrf_Val
#  define Rte_Read_AssiSumLim_MotVelMrf_Val(data) (*(data) = Rte_CDD_MotVel_MotVelMrf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PinionCentrLrnCmd_Val Rte_Read_AssiSumLim_PinionCentrLrnCmd_Val
#  define Rte_Read_AssiSumLim_PinionCentrLrnCmd_Val(data) (*(data) = Rte_AssiSumLim_PinionCentrLrnCmd_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PinionCentrLrnEna_Logl Rte_Read_AssiSumLim_PinionCentrLrnEna_Logl
#  define Rte_Read_AssiSumLim_PinionCentrLrnEna_Logl(data) (*(data) = Rte_AssiSumLim_PinionCentrLrnEna_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PullCmpCmd_Val Rte_Read_AssiSumLim_PullCmpCmd_Val
#  define Rte_Read_AssiSumLim_PullCmpCmd_Val(data) (*(data) = Rte_AssiSumLim_PullCmpCmd_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PwrLimrRednFac_Val Rte_Read_AssiSumLim_PwrLimrRednFac_Val
#  define Rte_Read_AssiSumLim_PwrLimrRednFac_Val(data) (*(data) = Rte_PwrLimr_PwrLimrRednFac_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_RtnCmd_Val Rte_Read_AssiSumLim_RtnCmd_Val
#  define Rte_Read_AssiSumLim_RtnCmd_Val(data) (*(data) = Rte_RtnPahFwl_RtnCmdLimd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_StallMotTqLim_Val Rte_Read_AssiSumLim_StallMotTqLim_Val
#  define Rte_Read_AssiSumLim_StallMotTqLim_Val(data) (*(data) = Rte_LimrCdng_StallMotTqLimCdnd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysMotTqCmdSca_Val Rte_Read_AssiSumLim_SysMotTqCmdSca_Val
#  define Rte_Read_AssiSumLim_SysMotTqCmdSca_Val(data) (*(data) = Rte_LimrCdng_SysMotTqCmdScaCdnd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ThermMotTqLim_Val Rte_Read_AssiSumLim_ThermMotTqLim_Val
#  define Rte_Read_AssiSumLim_ThermMotTqLim_Val(data) (*(data) = Rte_LimrCdng_ThermMotTqLimCdnd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ThermRednFac_Val Rte_Read_AssiSumLim_ThermRednFac_Val
#  define Rte_Read_AssiSumLim_ThermRednFac_Val(data) (*(data) = Rte_DutyCycThermProtn_ThermRednFac_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TqLoaCmd_Val Rte_Read_AssiSumLim_TqLoaCmd_Val
#  define Rte_Read_AssiSumLim_TqLoaCmd_Val(data) (*(data) = Rte_TqLoa_TqLoaCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TqSteerMtgtnCmd_Val Rte_Read_AssiSumLim_TqSteerMtgtnCmd_Val
#  define Rte_Read_AssiSumLim_TqSteerMtgtnCmd_Val(data) (*(data) = Rte_AssiSumLim_TqSteerMtgtnCmd_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_AssiSumLim_VehSpd_Val
#  define Rte_Read_AssiSumLim_VehSpd_Val(data) (*(data) = Rte_ImcSigArbn_VehSpdImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdMotTqLim_Val Rte_Read_AssiSumLim_VehSpdMotTqLim_Val
#  define Rte_Read_AssiSumLim_VehSpdMotTqLim_Val(data) (*(data) = Rte_LimrCdng_VehSpdMotTqLimCdnd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_WhlImbRejctnCmd_Val Rte_Read_AssiSumLim_WhlImbRejctnCmd_Val
#  define Rte_Read_AssiSumLim_WhlImbRejctnCmd_Val(data) (*(data) = Rte_AssiSumLim_WhlImbRejctnCmd_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_MotTqCmd_Val Rte_Write_AssiSumLim_MotTqCmd_Val
#  define Rte_Write_AssiSumLim_MotTqCmd_Val(data) (Rte_AssiSumLim_MotTqCmd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotTqCmdLimdPreStall_Val Rte_Write_AssiSumLim_MotTqCmdLimdPreStall_Val
#  define Rte_Write_AssiSumLim_MotTqCmdLimdPreStall_Val(data) (Rte_AssiSumLim_MotTqCmdLimdPreStall_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotTqCmdLimrMin_Val Rte_Write_AssiSumLim_MotTqCmdLimrMin_Val
#  define Rte_Write_AssiSumLim_MotTqCmdLimrMin_Val(data) (Rte_AssiSumLim_MotTqCmdLimrMin_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotTqCmdPreLim_Val Rte_Write_AssiSumLim_MotTqCmdPreLim_Val
#  define Rte_Write_AssiSumLim_MotTqCmdPreLim_Val(data) (Rte_AssiSumLim_MotTqCmdPreLim_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysProtnRednFac_Val Rte_Write_AssiSumLim_SysProtnRednFac_Val
#  define Rte_Write_AssiSumLim_SysProtnRednFac_Val(data) (Rte_AssiSumLim_SysProtnRednFac_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcQlfrSts10_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcQlfrSts_Oper GetNtcQlfrSts10_Oper
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
#  define Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmd() \
  Rte_Irv_AssiSumLim_ProcdManTqCmd
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmdEna() \
  Rte_Irv_AssiSumLim_ProcdManTqCmdEna
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmd(data) \
  (Rte_Irv_AssiSumLim_ProcdManTqCmd = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmdEna(data) \
  (Rte_Irv_AssiSumLim_ProcdManTqCmdEna = (data))
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_AssiSumLimMotVelLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimMotVelLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiSumLimPullCmpLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimPullCmpLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiSumLimNtc0x0C4FailStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimNtc0x0C4FailStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiSumLimNtc0x0C4PassStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimNtc0x0C4PassStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiSumLimCmdSumFilActv_Logl() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimCmdSumFilActv_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_AssiSumLimBlndCmdSumFrqLimX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimBlndCmdSumFrqLimX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_AssiSumLimBlndCmdSumFrqLimX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimBlndCmdSumFrqLimX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_AssiSumLimBlndCmdSumFrqLimY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimBlndCmdSumFrqLimY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_AssiSumLimBlndCmdSumFrqLimY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimBlndCmdSumFrqLimY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimHiSpdCmdSumFrqLimX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimHiSpdCmdSumFrqLimX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimHiSpdCmdSumFrqLimY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimHiSpdCmdSumFrqLimY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimLoSpdCmdSumFrqLimX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimLoSpdCmdSumFrqLimX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimLoSpdCmdSumFrqLimY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->AssiSumLimLoSpdCmdSumFrqLimY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiSumLim_CmdSumInpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiSumLim_CmdSumOutpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiSumLim_MotVelFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_CmdSumInpPrev() \
  (&Rte_AssiSumLim_CmdSumInpPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CmdSumOutpPrev() \
  (&Rte_AssiSumLim_CmdSumOutpPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotVelFilLp() \
  (&Rte_AssiSumLim_MotVelFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define AssiSumLim_START_SEC_CODE
# include "AssiSumLim_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_AssiSumLimInit1 AssiSumLimInit1
#  define RTE_RUNNABLE_AssiSumLimPer1 AssiSumLimPer1
#  define RTE_RUNNABLE_SetManTqCmd_Oper SetManTqCmd_Oper
# endif

FUNC(void, AssiSumLim_CODE) AssiSumLimInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, AssiSumLim_CODE) AssiSumLimPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, AssiSumLim_CODE) SetManTqCmd_Oper(float32 ManTqCmd_Arg, boolean ManTqCmdEna_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define AssiSumLim_STOP_SEC_CODE
# include "AssiSumLim_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetManTqCmd_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_ASSISUMLIM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
