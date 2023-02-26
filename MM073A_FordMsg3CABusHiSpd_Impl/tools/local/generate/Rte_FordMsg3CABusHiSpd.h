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
 *          File:  Rte_FordMsg3CABusHiSpd.h
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM073A_FordMsg3CABusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg3CABusHiSpd
 *  Generated at:  Fri May  4 15:08:46 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg3CABusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG3CABUSHISPD_H
# define _RTE_FORDMSG3CABUSHISPD_H

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

# include "Rte_FordMsg3CABusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg3CABusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLaneAssiImgProcgModlAVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLaneDetnWarnIntenPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLaneDetnWarnStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLaneKeepSysCrvtInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLaneKeepSysCrvtInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLaneKeepSysCrvtPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLaneKeepSysCrvtRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLaneKeepSysRampTypPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLaneKeepSysReqdAgInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLaneKeepSysReqdAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLaneKeepSysReqdAgRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLaneKeepSysStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg3CAMiss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LaneAssiImgProcgModlAFaildCrvtTiThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LaneAssiImgProcgModlAFaildReqdAgTiThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LaneAssiImgProcgModlAVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LaneAssiImgProcgModlAVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LaneKeepSysReqdAgInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg3CABusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg3CABusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg3CABusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordLaneDetnWarnEnad_Logl (FALSE)
# define Rte_InitValue_FordLaneKeepAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehLaneAssiImgProcgModlAVld_Logl (FALSE)
# define Rte_InitValue_FordVehLaneDetnWarnInten_Val (0U)
# define Rte_InitValue_FordVehLaneDetnWarnSts_Val (0U)
# define Rte_InitValue_FordVehLaneKeepSysCrvt_Val (0.0F)
# define Rte_InitValue_FordVehLaneKeepSysCrvtRaw_Val (2048U)
# define Rte_InitValue_FordVehLaneKeepSysRampTyp_Val (0U)
# define Rte_InitValue_FordVehLaneKeepSysReqdAg_Val (0.0F)
# define Rte_InitValue_FordVehLaneKeepSysReqdAgRaw_Val (2048U)
# define Rte_InitValue_FordVehLaneKeepSysSts_Val (0U)
# define Rte_InitValue_Ford_LaCurvature_No_Calc_Ford_LaCurvature_No_Calc (0U)
# define Rte_InitValue_Ford_LaRampType_B_Req_Ford_LaRampType_B_Req (FALSE)
# define Rte_InitValue_Ford_LaRefAng_No_Req_Ford_LaRefAng_No_Req (0U)
# define Rte_InitValue_Ford_LdwActvIntns_D_Req_Ford_LdwActvIntns_D_Req (0U)
# define Rte_InitValue_Ford_LdwActvStats_D_Req_Ford_LdwActvStats_D_Req (0U)
# define Rte_InitValue_Ford_LkaActvStats_D2_Req_Ford_LkaActvStats_D2_Req (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CABusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CABusHiSpd_FordCanDtcInhb_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CABusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CABusHiSpd_FordLaneDetnWarnEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CABusHiSpd_FordLaneKeepAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CABusHiSpd_Ford_LaCurvature_No_Calc_Ford_LaCurvature_No_Calc(P2VAR(Ford_LaCurvature_No_Calc, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CABusHiSpd_Ford_LaRampType_B_Req_Ford_LaRampType_B_Req(P2VAR(Ford_LaRampType_B_Req, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CABusHiSpd_Ford_LaRefAng_No_Req_Ford_LaRefAng_No_Req(P2VAR(Ford_LaRefAng_No_Req, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CABusHiSpd_Ford_LdwActvIntns_D_Req_Ford_LdwActvIntns_D_Req(P2VAR(Ford_LdwActvIntns_D_Req, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CABusHiSpd_Ford_LdwActvStats_D_Req_Ford_LdwActvStats_D_Req(P2VAR(Ford_LdwActvStats_D_Req, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3CABusHiSpd_Ford_LkaActvStats_D2_Req_Ford_LkaActvStats_D2_Req(P2VAR(Ford_LkaActvStats_D2_Req, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CABusHiSpd_FordVehLaneAssiImgProcgModlAVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CABusHiSpd_FordVehLaneDetnWarnInten_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CABusHiSpd_FordVehLaneDetnWarnSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvt_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysRampTyp_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAg_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg3CABusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg3CABusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg3CABusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdMissMsgFaildTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdMissMsgPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg3CABusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg3CABusHiSpd_FordCanDtcInhb_Logl
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg3CABusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordLaneDetnWarnEnad_Logl Rte_Read_FordMsg3CABusHiSpd_FordLaneDetnWarnEnad_Logl
# define Rte_Read_FordLaneKeepAssiEnad_Logl Rte_Read_FordMsg3CABusHiSpd_FordLaneKeepAssiEnad_Logl
# define Rte_Read_Ford_LaCurvature_No_Calc_Ford_LaCurvature_No_Calc Rte_Read_FordMsg3CABusHiSpd_Ford_LaCurvature_No_Calc_Ford_LaCurvature_No_Calc
# define Rte_Read_Ford_LaRampType_B_Req_Ford_LaRampType_B_Req Rte_Read_FordMsg3CABusHiSpd_Ford_LaRampType_B_Req_Ford_LaRampType_B_Req
# define Rte_Read_Ford_LaRefAng_No_Req_Ford_LaRefAng_No_Req Rte_Read_FordMsg3CABusHiSpd_Ford_LaRefAng_No_Req_Ford_LaRefAng_No_Req
# define Rte_Read_Ford_LdwActvIntns_D_Req_Ford_LdwActvIntns_D_Req Rte_Read_FordMsg3CABusHiSpd_Ford_LdwActvIntns_D_Req_Ford_LdwActvIntns_D_Req
# define Rte_Read_Ford_LdwActvStats_D_Req_Ford_LdwActvStats_D_Req Rte_Read_FordMsg3CABusHiSpd_Ford_LdwActvStats_D_Req_Ford_LdwActvStats_D_Req
# define Rte_Read_Ford_LkaActvStats_D2_Req_Ford_LkaActvStats_D2_Req Rte_Read_FordMsg3CABusHiSpd_Ford_LkaActvStats_D2_Req_Ford_LkaActvStats_D2_Req


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehLaneAssiImgProcgModlAVld_Logl Rte_Write_FordMsg3CABusHiSpd_FordVehLaneAssiImgProcgModlAVld_Logl
# define Rte_Write_FordVehLaneDetnWarnInten_Val Rte_Write_FordMsg3CABusHiSpd_FordVehLaneDetnWarnInten_Val
# define Rte_Write_FordVehLaneDetnWarnSts_Val Rte_Write_FordMsg3CABusHiSpd_FordVehLaneDetnWarnSts_Val
# define Rte_Write_FordVehLaneKeepSysCrvt_Val Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvt_Val
# define Rte_Write_FordVehLaneKeepSysCrvtRaw_Val Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtRaw_Val
# define Rte_Write_FordVehLaneKeepSysRampTyp_Val Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysRampTyp_Val
# define Rte_Write_FordVehLaneKeepSysReqdAg_Val Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAg_Val
# define Rte_Write_FordVehLaneKeepSysReqdAgRaw_Val Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgRaw_Val
# define Rte_Write_FordVehLaneKeepSysSts_Val Rte_Write_FordMsg3CABusHiSpd_FordVehLaneKeepSysSts_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg3CABusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg3CABusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg3CABusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd_Val Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd_Val

# define Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd_Val Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd_Val

# define Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd_Val Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd_Val

# define Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd_Val Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd_Val

# define Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd_Val Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd_Val

# define Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd_Val Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd_Val

# define Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd_Val Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd_Val

# define Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd_Val Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd_Val

# define Rte_Prm_FordMsg3CABusHiSpdMissMsgFaildTiThd_Val Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdMissMsgFaildTiThd_Val

# define Rte_Prm_FordMsg3CABusHiSpdMissMsgPassdTiThd_Val Rte_Prm_FordMsg3CABusHiSpd_FordMsg3CABusHiSpdMissMsgPassdTiThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehLaneKeepSysCrvtPrev() (Rte_Inst_FordMsg3CABusHiSpd->Pim_FordVehLaneKeepSysCrvtPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLaneKeepSysReqdAgPrev() (Rte_Inst_FordMsg3CABusHiSpd->Pim_FordVehLaneKeepSysReqdAgPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLaneKeepSysCrvtInvldFaildRefTi() (Rte_Inst_FordMsg3CABusHiSpd->Pim_FordVehLaneKeepSysCrvtInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLaneKeepSysCrvtInvldPassdRefTi() (Rte_Inst_FordMsg3CABusHiSpd->Pim_FordVehLaneKeepSysCrvtInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLaneKeepSysReqdAgInvldPassdRefTi() (Rte_Inst_FordMsg3CABusHiSpd->Pim_FordVehLaneKeepSysReqdAgInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LaneAssiImgProcgModlAFaildCrvtTiThd() (Rte_Inst_FordMsg3CABusHiSpd->Pim_LaneAssiImgProcgModlAFaildCrvtTiThd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LaneAssiImgProcgModlAFaildReqdAgTiThd() (Rte_Inst_FordMsg3CABusHiSpd->Pim_LaneAssiImgProcgModlAFaildReqdAgTiThd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LaneAssiImgProcgModlAVldMissRefTi() (Rte_Inst_FordMsg3CABusHiSpd->Pim_LaneAssiImgProcgModlAVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LaneAssiImgProcgModlAVldPassdRefTi() (Rte_Inst_FordMsg3CABusHiSpd->Pim_LaneAssiImgProcgModlAVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LaneKeepSysReqdAgInvldFaildRefTi() (Rte_Inst_FordMsg3CABusHiSpd->Pim_LaneKeepSysReqdAgInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg3CABusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg3CABusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLaneKeepSysCrvtRawPrev() (Rte_Inst_FordMsg3CABusHiSpd->Pim_FordVehLaneKeepSysCrvtRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLaneKeepSysReqdAgRawPrev() (Rte_Inst_FordMsg3CABusHiSpd->Pim_FordVehLaneKeepSysReqdAgRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg3CABusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLaneDetnWarnIntenPrev() (Rte_Inst_FordMsg3CABusHiSpd->Pim_FordVehLaneDetnWarnIntenPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLaneDetnWarnStsPrev() (Rte_Inst_FordMsg3CABusHiSpd->Pim_FordVehLaneDetnWarnStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLaneKeepSysRampTypPrev() (Rte_Inst_FordMsg3CABusHiSpd->Pim_FordVehLaneKeepSysRampTypPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLaneKeepSysStsPrev() (Rte_Inst_FordMsg3CABusHiSpd->Pim_FordVehLaneKeepSysStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg3CABusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLaneAssiImgProcgModlAVldPrev() (Rte_Inst_FordMsg3CABusHiSpd->Pim_FordVehLaneAssiImgProcgModlAVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg3CAMiss() (Rte_Inst_FordMsg3CABusHiSpd->Pim_FordVehMsg3CAMiss) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordVehLaneKeepSysCrvtPrev(void)
 *   float32 *Rte_Pim_FordVehLaneKeepSysReqdAgPrev(void)
 *   uint32 *Rte_Pim_FordVehLaneKeepSysCrvtInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehLaneKeepSysCrvtInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehLaneKeepSysReqdAgInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_LaneAssiImgProcgModlAFaildCrvtTiThd(void)
 *   uint32 *Rte_Pim_LaneAssiImgProcgModlAFaildReqdAgTiThd(void)
 *   uint32 *Rte_Pim_LaneAssiImgProcgModlAVldMissRefTi(void)
 *   uint32 *Rte_Pim_LaneAssiImgProcgModlAVldPassdRefTi(void)
 *   uint32 *Rte_Pim_LaneKeepSysReqdAgInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint16 *Rte_Pim_FordVehLaneKeepSysCrvtRawPrev(void)
 *   uint16 *Rte_Pim_FordVehLaneKeepSysReqdAgRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   uint8 *Rte_Pim_FordVehLaneDetnWarnIntenPrev(void)
 *   uint8 *Rte_Pim_FordVehLaneDetnWarnStsPrev(void)
 *   uint8 *Rte_Pim_FordVehLaneKeepSysRampTypPrev(void)
 *   uint8 *Rte_Pim_FordVehLaneKeepSysStsPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehLaneAssiImgProcgModlAVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg3CAMiss(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdMissMsgFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdMissMsgPassdTiThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg3CABusHiSpd_START_SEC_CODE
# include "FordMsg3CABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3CABusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg3CABusHiSpdInit1 FordMsg3CABusHiSpdInit1
FUNC(void, FordMsg3CABusHiSpd_CODE) FordMsg3CABusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3CABusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordLaneDetnWarnEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_LaCurvature_No_Calc_Ford_LaCurvature_No_Calc(Ford_LaCurvature_No_Calc *data)
 *   Std_ReturnType Rte_Read_Ford_LaRampType_B_Req_Ford_LaRampType_B_Req(Ford_LaRampType_B_Req *data)
 *   Std_ReturnType Rte_Read_Ford_LaRefAng_No_Req_Ford_LaRefAng_No_Req(Ford_LaRefAng_No_Req *data)
 *   Std_ReturnType Rte_Read_Ford_LdwActvIntns_D_Req_Ford_LdwActvIntns_D_Req(Ford_LdwActvIntns_D_Req *data)
 *   Std_ReturnType Rte_Read_Ford_LdwActvStats_D_Req_Ford_LdwActvStats_D_Req(Ford_LdwActvStats_D_Req *data)
 *   Std_ReturnType Rte_Read_Ford_LkaActvStats_D2_Req_Ford_LkaActvStats_D2_Req(Ford_LkaActvStats_D2_Req *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehLaneAssiImgProcgModlAVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehLaneDetnWarnInten_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLaneDetnWarnSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLaneKeepSysCrvt_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehLaneKeepSysCrvtRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehLaneKeepSysRampTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLaneKeepSysReqdAg_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehLaneKeepSysReqdAgRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehLaneKeepSysSts_Val(uint8 data)
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

# define RTE_RUNNABLE_FordMsg3CABusHiSpdPer1 FordMsg3CABusHiSpdPer1
FUNC(void, FordMsg3CABusHiSpd_CODE) FordMsg3CABusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg3CABusHiSpd_STOP_SEC_CODE
# include "FordMsg3CABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG3CABUSHISPD_H */

#include "Rte_Stubs.h"
