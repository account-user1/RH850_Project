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
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/MM074A_FordMsg3D3BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg3D3BusHiSpd
 *  Generated at:  Fri May  4 15:09:35 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg3D3BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG3D3BUSHISPD_H
# define _RTE_FORDMSG3D3BUSHISPD_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_FordMsg3D3BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg3D3BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatCtrlCrvtPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatCtrlCrvtRatePrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatCtrlCrvtRateRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatCtrlCrvtRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_HandsOffCnfm_B_Rq, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatCtrlHandsOffDetnTqStimlsReqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatCtrlImgProcrModlAVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatCtrlPahOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatCtrlPahOffsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatCtrlPahPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatCtrlPahRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_LatCtlPrecision_D_Rq, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatCtrlPrcsnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_LatCtlRampType_D_Rq, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatCtrlRampTypPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_LatCtl_D_Rq, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatCtrlReqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatCtrlRingMaxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg3D3Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ImgProcrModlAVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ImgProcrModlAVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg3D3BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg3D3BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg3D3BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordLaneCentrAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordTrfcJamAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehLatCtrlCrvt_Val (0.0F)
# define Rte_InitValue_FordVehLatCtrlCrvtRate_Val (0.0F)
# define Rte_InitValue_FordVehLatCtrlCrvtRateRaw_Val (4096U)
# define Rte_InitValue_FordVehLatCtrlCrvtRaw_Val (1000U)
# define Rte_InitValue_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val (0U)
# define Rte_InitValue_FordVehLatCtrlImgProcrModlAVld_Logl (FALSE)
# define Rte_InitValue_FordVehLatCtrlPah_Val (0.0F)
# define Rte_InitValue_FordVehLatCtrlPahOffs_Val (0.0F)
# define Rte_InitValue_FordVehLatCtrlPahOffsRaw_Val (512U)
# define Rte_InitValue_FordVehLatCtrlPahRaw_Val (1000U)
# define Rte_InitValue_FordVehLatCtrlPrcsn_Val (0U)
# define Rte_InitValue_FordVehLatCtrlRampTyp_Val (0U)
# define Rte_InitValue_FordVehLatCtrlReq_Val (0U)
# define Rte_InitValue_FordVehLatCtrlRingMax_Val (0U)
# define Rte_InitValue_Ford_HandsOffCnfm_B_Rq_Ford_HandsOffCnfm_B_Rq (FALSE)
# define Rte_InitValue_Ford_LatCtlCurv_NoRate_Actl_Ford_LatCtlCurv_NoRate_Actl (4096U)
# define Rte_InitValue_Ford_LatCtlCurv_No_Actl_Ford_LatCtlCurv_No_Actl (1000U)
# define Rte_InitValue_Ford_LatCtlPathOffst_L_Actl_Ford_LatCtlPathOffst_L_Actl (512U)
# define Rte_InitValue_Ford_LatCtlPath_An_Actl_Ford_LatCtlPath_An_Actl (1000U)
# define Rte_InitValue_Ford_LatCtlPrecision_D_Rq_Ford_LatCtlPrecision_D_Rq (0U)
# define Rte_InitValue_Ford_LatCtlRampType_D_Rq_Ford_LatCtlRampType_D_Rq (0U)
# define Rte_InitValue_Ford_LatCtlRng_L_Max_Ford_LatCtlRng_L_Max (0U)
# define Rte_InitValue_Ford_LatCtl_D_Rq_Ford_LatCtl_D_Rq (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D3BusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3D3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D3BusHiSpd_FordCanDtcInhb_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3D3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D3BusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3D3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D3BusHiSpd_FordLaneCentrAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3D3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D3BusHiSpd_FordTrfcJamAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3D3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D3BusHiSpd_Ford_HandsOffCnfm_B_Rq_Ford_HandsOffCnfm_B_Rq(P2VAR(Ford_HandsOffCnfm_B_Rq, AUTOMATIC, RTE_FORDMSG3D3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlCurv_NoRate_Actl_Ford_LatCtlCurv_NoRate_Actl(P2VAR(Ford_LatCtlCurv_NoRate_Actl, AUTOMATIC, RTE_FORDMSG3D3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlCurv_No_Actl_Ford_LatCtlCurv_No_Actl(P2VAR(Ford_LatCtlCurv_No_Actl, AUTOMATIC, RTE_FORDMSG3D3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlPathOffst_L_Actl_Ford_LatCtlPathOffst_L_Actl(P2VAR(Ford_LatCtlPathOffst_L_Actl, AUTOMATIC, RTE_FORDMSG3D3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlPath_An_Actl_Ford_LatCtlPath_An_Actl(P2VAR(Ford_LatCtlPath_An_Actl, AUTOMATIC, RTE_FORDMSG3D3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlPrecision_D_Rq_Ford_LatCtlPrecision_D_Rq(P2VAR(Ford_LatCtlPrecision_D_Rq, AUTOMATIC, RTE_FORDMSG3D3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlRampType_D_Rq_Ford_LatCtlRampType_D_Rq(P2VAR(Ford_LatCtlRampType_D_Rq, AUTOMATIC, RTE_FORDMSG3D3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlRng_L_Max_Ford_LatCtlRng_L_Max(P2VAR(Ford_LatCtlRng_L_Max, AUTOMATIC, RTE_FORDMSG3D3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtl_D_Rq_Ford_LatCtl_D_Rq(P2VAR(Ford_LatCtl_D_Rq, AUTOMATIC, RTE_FORDMSG3D3BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvt_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRate_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRateRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlImgProcrModlAVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPah_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffs_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPahRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPrcsn_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlRampTyp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlReq_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlRingMax_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg3D3BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG3D3BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg3D3BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG3D3BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg3D3BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D3BusHiSpd_FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D3BusHiSpd_FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D3BusHiSpd_FordMsg3D3BusHiSpdMissMsgFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D3BusHiSpd_FordMsg3D3BusHiSpdMissMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg3D3BusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg3D3BusHiSpd_FordCanDtcInhb_Logl
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg3D3BusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordLaneCentrAssiEnad_Logl Rte_Read_FordMsg3D3BusHiSpd_FordLaneCentrAssiEnad_Logl
# define Rte_Read_FordTrfcJamAssiEnad_Logl Rte_Read_FordMsg3D3BusHiSpd_FordTrfcJamAssiEnad_Logl
# define Rte_Read_Ford_HandsOffCnfm_B_Rq_Ford_HandsOffCnfm_B_Rq Rte_Read_FordMsg3D3BusHiSpd_Ford_HandsOffCnfm_B_Rq_Ford_HandsOffCnfm_B_Rq
# define Rte_Read_Ford_LatCtlCurv_NoRate_Actl_Ford_LatCtlCurv_NoRate_Actl Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlCurv_NoRate_Actl_Ford_LatCtlCurv_NoRate_Actl
# define Rte_Read_Ford_LatCtlCurv_No_Actl_Ford_LatCtlCurv_No_Actl Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlCurv_No_Actl_Ford_LatCtlCurv_No_Actl
# define Rte_Read_Ford_LatCtlPathOffst_L_Actl_Ford_LatCtlPathOffst_L_Actl Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlPathOffst_L_Actl_Ford_LatCtlPathOffst_L_Actl
# define Rte_Read_Ford_LatCtlPath_An_Actl_Ford_LatCtlPath_An_Actl Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlPath_An_Actl_Ford_LatCtlPath_An_Actl
# define Rte_Read_Ford_LatCtlPrecision_D_Rq_Ford_LatCtlPrecision_D_Rq Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlPrecision_D_Rq_Ford_LatCtlPrecision_D_Rq
# define Rte_Read_Ford_LatCtlRampType_D_Rq_Ford_LatCtlRampType_D_Rq Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlRampType_D_Rq_Ford_LatCtlRampType_D_Rq
# define Rte_Read_Ford_LatCtlRng_L_Max_Ford_LatCtlRng_L_Max Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtlRng_L_Max_Ford_LatCtlRng_L_Max
# define Rte_Read_Ford_LatCtl_D_Rq_Ford_LatCtl_D_Rq Rte_Read_FordMsg3D3BusHiSpd_Ford_LatCtl_D_Rq_Ford_LatCtl_D_Rq


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehLatCtrlCrvt_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvt_Val
# define Rte_Write_FordVehLatCtrlCrvtRate_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRate_Val
# define Rte_Write_FordVehLatCtrlCrvtRateRaw_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRateRaw_Val
# define Rte_Write_FordVehLatCtrlCrvtRaw_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRaw_Val
# define Rte_Write_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val
# define Rte_Write_FordVehLatCtrlImgProcrModlAVld_Logl Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlImgProcrModlAVld_Logl
# define Rte_Write_FordVehLatCtrlPah_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPah_Val
# define Rte_Write_FordVehLatCtrlPahOffs_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffs_Val
# define Rte_Write_FordVehLatCtrlPahOffsRaw_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsRaw_Val
# define Rte_Write_FordVehLatCtrlPahRaw_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPahRaw_Val
# define Rte_Write_FordVehLatCtrlPrcsn_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlPrcsn_Val
# define Rte_Write_FordVehLatCtrlRampTyp_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlRampTyp_Val
# define Rte_Write_FordVehLatCtrlReq_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlReq_Val
# define Rte_Write_FordVehLatCtrlRingMax_Val Rte_Write_FordMsg3D3BusHiSpd_FordVehLatCtrlRingMax_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg3D3BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg3D3BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg3D3BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd_Val Rte_Prm_FordMsg3D3BusHiSpd_FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd_Val

# define Rte_Prm_FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd_Val Rte_Prm_FordMsg3D3BusHiSpd_FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd_Val

# define Rte_Prm_FordMsg3D3BusHiSpdMissMsgFaildThd_Val Rte_Prm_FordMsg3D3BusHiSpd_FordMsg3D3BusHiSpdMissMsgFaildThd_Val

# define Rte_Prm_FordMsg3D3BusHiSpdMissMsgPassdThd_Val Rte_Prm_FordMsg3D3BusHiSpd_FordMsg3D3BusHiSpdMissMsgPassdThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehLatCtrlCrvtPrev() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_FordVehLatCtrlCrvtPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatCtrlCrvtRatePrev() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_FordVehLatCtrlCrvtRatePrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatCtrlPahOffsPrev() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_FordVehLatCtrlPahOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatCtrlPahPrev() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_FordVehLatCtrlPahPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ImgProcrModlAVldFaildRefTi() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_ImgProcrModlAVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ImgProcrModlAVldPassdRefTi() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_ImgProcrModlAVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatCtrlCrvtRateRawPrev() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_FordVehLatCtrlCrvtRateRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatCtrlCrvtRawPrev() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_FordVehLatCtrlCrvtRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatCtrlPahOffsRawPrev() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_FordVehLatCtrlPahOffsRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatCtrlPahRawPrev() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_FordVehLatCtrlPahRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatCtrlPrcsnPrev() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_FordVehLatCtrlPrcsnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatCtrlRampTypPrev() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_FordVehLatCtrlRampTypPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatCtrlReqPrev() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_FordVehLatCtrlReqPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatCtrlRingMaxPrev() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_FordVehLatCtrlRingMaxPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatCtrlHandsOffDetnTqStimlsReqPrev() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_FordVehLatCtrlHandsOffDetnTqStimlsReqPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatCtrlImgProcrModlAVldPrev() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_FordVehLatCtrlImgProcrModlAVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg3D3Miss() (Rte_Inst_FordMsg3D3BusHiSpd->Pim_FordVehMsg3D3Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordVehLatCtrlCrvtPrev(void)
 *   float32 *Rte_Pim_FordVehLatCtrlCrvtRatePrev(void)
 *   float32 *Rte_Pim_FordVehLatCtrlPahOffsPrev(void)
 *   float32 *Rte_Pim_FordVehLatCtrlPahPrev(void)
 *   uint32 *Rte_Pim_ImgProcrModlAVldFaildRefTi(void)
 *   uint32 *Rte_Pim_ImgProcrModlAVldPassdRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint16 *Rte_Pim_FordVehLatCtrlCrvtRateRawPrev(void)
 *   uint16 *Rte_Pim_FordVehLatCtrlCrvtRawPrev(void)
 *   uint16 *Rte_Pim_FordVehLatCtrlPahOffsRawPrev(void)
 *   uint16 *Rte_Pim_FordVehLatCtrlPahRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   Ford_LatCtlPrecision_D_Rq *Rte_Pim_FordVehLatCtrlPrcsnPrev(void)
 *   Ford_LatCtlRampType_D_Rq *Rte_Pim_FordVehLatCtrlRampTypPrev(void)
 *   Ford_LatCtl_D_Rq *Rte_Pim_FordVehLatCtrlReqPrev(void)
 *   uint8 *Rte_Pim_FordVehLatCtrlRingMaxPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   Ford_HandsOffCnfm_B_Rq *Rte_Pim_FordVehLatCtrlHandsOffDetnTqStimlsReqPrev(void)
 *   boolean *Rte_Pim_FordVehLatCtrlImgProcrModlAVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg3D3Miss(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D3BusHiSpdMissMsgFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D3BusHiSpdMissMsgPassdThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg3D3BusHiSpd_START_SEC_CODE
# include "FordMsg3D3BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3D3BusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordMsg3D3BusHiSpdInit1 FordMsg3D3BusHiSpdInit1
FUNC(void, FordMsg3D3BusHiSpd_CODE) FordMsg3D3BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3D3BusHiSpdPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ClrDiagcFlgProxy_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordLaneCentrAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrfcJamAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_HandsOffCnfm_B_Rq_Ford_HandsOffCnfm_B_Rq(Ford_HandsOffCnfm_B_Rq *data)
 *   Std_ReturnType Rte_Read_Ford_LatCtlCurv_NoRate_Actl_Ford_LatCtlCurv_NoRate_Actl(Ford_LatCtlCurv_NoRate_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_LatCtlCurv_No_Actl_Ford_LatCtlCurv_No_Actl(Ford_LatCtlCurv_No_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_LatCtlPathOffst_L_Actl_Ford_LatCtlPathOffst_L_Actl(Ford_LatCtlPathOffst_L_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_LatCtlPath_An_Actl_Ford_LatCtlPath_An_Actl(Ford_LatCtlPath_An_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_LatCtlPrecision_D_Rq_Ford_LatCtlPrecision_D_Rq(Ford_LatCtlPrecision_D_Rq *data)
 *   Std_ReturnType Rte_Read_Ford_LatCtlRampType_D_Rq_Ford_LatCtlRampType_D_Rq(Ford_LatCtlRampType_D_Rq *data)
 *   Std_ReturnType Rte_Read_Ford_LatCtlRng_L_Max_Ford_LatCtlRng_L_Max(Ford_LatCtlRng_L_Max *data)
 *   Std_ReturnType Rte_Read_Ford_LatCtl_D_Rq_Ford_LatCtl_D_Rq(Ford_LatCtl_D_Rq *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehLatCtrlCrvt_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlCrvtRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlCrvtRateRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlCrvtRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlImgProcrModlAVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlPah_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlPahOffs_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlPahOffsRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlPahRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlPrcsn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlRampTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlRingMax_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordMsg3D3BusHiSpdPer1 FordMsg3D3BusHiSpdPer1
FUNC(void, FordMsg3D3BusHiSpd_CODE) FordMsg3D3BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg3D3BusHiSpd_STOP_SEC_CODE
# include "FordMsg3D3BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG3D3BUSHISPD_H */

#include "Rte_Stubs.h"
