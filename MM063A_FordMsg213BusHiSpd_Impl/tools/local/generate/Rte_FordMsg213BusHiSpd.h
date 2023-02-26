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
 *          File:  Rte_FordMsg213BusHiSpd.h
 *        Config:  C:/Users/nz3893/Documents/Synergy/EA4/Working/MM063A_FordMsg213BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg213BusHiSpd
 *  Generated at:  Fri May  4 12:05:22 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg213BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG213BUSHISPD_H
# define _RTE_FORDMSG213BUSHISPD_H

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

# include "Rte_FordMsg213BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg213BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AbsActvVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AbsActvVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehAbsActvPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehAbsEscStsVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgDeniedPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgDisadPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehEscActvPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg213Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg213BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg213BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg213BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordBrkOscnRednEnad_Logl (FALSE)
# define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordEvasSteerAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordLaneCentrAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordLaneDetnWarnEnad_Logl (FALSE)
# define Rte_InitValue_FordLkaEnad_Logl (FALSE)
# define Rte_InitValue_FordTrfcJamAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehAbsActv_Val (0U)
# define Rte_InitValue_FordVehAbsEscStsVld_Logl (FALSE)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgDenied_Val (0U)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgDisad_Val (0U)
# define Rte_InitValue_FordVehEscActv_Val (0U)
# define Rte_InitValue_Ford_AbsActv_B_Actl_Ford_AbsActv_B_Actl (FALSE)
# define Rte_InitValue_Ford_CmbbBrkDis_B_Actl_Ford_CmbbBrkDis_B_Actl (FALSE)
# define Rte_InitValue_Ford_CmbbDeny_B_ActlBrk_Ford_CmbbDeny_B_ActlBrk (FALSE)
# define Rte_InitValue_Ford_StabCtlBrkActv_B_Actl_Ford_StabCtlBrkActv_B_Actl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg213BusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG213BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg213BusHiSpd_FordBrkOscnRednEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG213BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg213BusHiSpd_FordCanDtcInhb_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG213BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg213BusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG213BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg213BusHiSpd_FordEvasSteerAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG213BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg213BusHiSpd_FordLaneCentrAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG213BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg213BusHiSpd_FordLaneDetnWarnEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG213BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg213BusHiSpd_FordLkaEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG213BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg213BusHiSpd_FordTrfcJamAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG213BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg213BusHiSpd_Ford_AbsActv_B_Actl_Ford_AbsActv_B_Actl(P2VAR(Ford_AbsActv_B_Actl, AUTOMATIC, RTE_FORDMSG213BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg213BusHiSpd_Ford_CmbbBrkDis_B_Actl_Ford_CmbbBrkDis_B_Actl(P2VAR(Ford_CmbbBrkDis_B_Actl, AUTOMATIC, RTE_FORDMSG213BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg213BusHiSpd_Ford_CmbbDeny_B_ActlBrk_Ford_CmbbDeny_B_ActlBrk(P2VAR(Ford_CmbbDeny_B_ActlBrk, AUTOMATIC, RTE_FORDMSG213BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg213BusHiSpd_Ford_StabCtlBrkActv_B_Actl_Ford_StabCtlBrkActv_B_Actl(P2VAR(Ford_StabCtlBrkActv_B_Actl, AUTOMATIC, RTE_FORDMSG213BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg213BusHiSpd_FordVehAbsActv_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg213BusHiSpd_FordVehAbsEscStsVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDenied_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDisad_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg213BusHiSpd_FordVehEscActv_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg213BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG213BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg213BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG213BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg213BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg213BusHiSpd_FordMsg213BusHiSpdAbsActvVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg213BusHiSpd_FordMsg213BusHiSpdAbsActvVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg213BusHiSpd_FordMsg213BusHiSpdEvasSteerAssiEnadThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg213BusHiSpd_FordMsg213BusHiSpdMissMsgFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg213BusHiSpd_FordMsg213BusHiSpdMissMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg213BusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordBrkOscnRednEnad_Logl Rte_Read_FordMsg213BusHiSpd_FordBrkOscnRednEnad_Logl
# define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg213BusHiSpd_FordCanDtcInhb_Logl
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg213BusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordEvasSteerAssiEnad_Logl Rte_Read_FordMsg213BusHiSpd_FordEvasSteerAssiEnad_Logl
# define Rte_Read_FordLaneCentrAssiEnad_Logl Rte_Read_FordMsg213BusHiSpd_FordLaneCentrAssiEnad_Logl
# define Rte_Read_FordLaneDetnWarnEnad_Logl Rte_Read_FordMsg213BusHiSpd_FordLaneDetnWarnEnad_Logl
# define Rte_Read_FordLkaEnad_Logl Rte_Read_FordMsg213BusHiSpd_FordLkaEnad_Logl
# define Rte_Read_FordTrfcJamAssiEnad_Logl Rte_Read_FordMsg213BusHiSpd_FordTrfcJamAssiEnad_Logl
# define Rte_Read_Ford_AbsActv_B_Actl_Ford_AbsActv_B_Actl Rte_Read_FordMsg213BusHiSpd_Ford_AbsActv_B_Actl_Ford_AbsActv_B_Actl
# define Rte_Read_Ford_CmbbBrkDis_B_Actl_Ford_CmbbBrkDis_B_Actl Rte_Read_FordMsg213BusHiSpd_Ford_CmbbBrkDis_B_Actl_Ford_CmbbBrkDis_B_Actl
# define Rte_Read_Ford_CmbbDeny_B_ActlBrk_Ford_CmbbDeny_B_ActlBrk Rte_Read_FordMsg213BusHiSpd_Ford_CmbbDeny_B_ActlBrk_Ford_CmbbDeny_B_ActlBrk
# define Rte_Read_Ford_StabCtlBrkActv_B_Actl_Ford_StabCtlBrkActv_B_Actl Rte_Read_FordMsg213BusHiSpd_Ford_StabCtlBrkActv_B_Actl_Ford_StabCtlBrkActv_B_Actl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehAbsActv_Val Rte_Write_FordMsg213BusHiSpd_FordVehAbsActv_Val
# define Rte_Write_FordVehAbsEscStsVld_Logl Rte_Write_FordMsg213BusHiSpd_FordVehAbsEscStsVld_Logl
# define Rte_Write_FordVehCllsnMtgtnByBrkgDenied_Val Rte_Write_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDenied_Val
# define Rte_Write_FordVehCllsnMtgtnByBrkgDisad_Val Rte_Write_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDisad_Val
# define Rte_Write_FordVehEscActv_Val Rte_Write_FordMsg213BusHiSpd_FordVehEscActv_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg213BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg213BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg213BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg213BusHiSpdAbsActvVldFaildThd_Val Rte_Prm_FordMsg213BusHiSpd_FordMsg213BusHiSpdAbsActvVldFaildThd_Val

# define Rte_Prm_FordMsg213BusHiSpdAbsActvVldPassdThd_Val Rte_Prm_FordMsg213BusHiSpd_FordMsg213BusHiSpdAbsActvVldPassdThd_Val

# define Rte_Prm_FordMsg213BusHiSpdEvasSteerAssiEnadThd_Val Rte_Prm_FordMsg213BusHiSpd_FordMsg213BusHiSpdEvasSteerAssiEnadThd_Val

# define Rte_Prm_FordMsg213BusHiSpdMissMsgFaildThd_Val Rte_Prm_FordMsg213BusHiSpd_FordMsg213BusHiSpdMissMsgFaildThd_Val

# define Rte_Prm_FordMsg213BusHiSpdMissMsgPassdThd_Val Rte_Prm_FordMsg213BusHiSpd_FordMsg213BusHiSpdMissMsgPassdThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_AbsActvVldFaildRefTi() (Rte_Inst_FordMsg213BusHiSpd->Pim_AbsActvVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AbsActvVldPassdRefTi() (Rte_Inst_FordMsg213BusHiSpd->Pim_AbsActvVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg213BusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg213BusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg213BusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehAbsActvPrev() (Rte_Inst_FordMsg213BusHiSpd->Pim_FordVehAbsActvPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgDeniedPrev() (Rte_Inst_FordMsg213BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgDeniedPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgDisadPrev() (Rte_Inst_FordMsg213BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgDisadPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehEscActvPrev() (Rte_Inst_FordMsg213BusHiSpd->Pim_FordVehEscActvPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg213BusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehAbsEscStsVldPrev() (Rte_Inst_FordMsg213BusHiSpd->Pim_FordVehAbsEscStsVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg213Miss() (Rte_Inst_FordMsg213BusHiSpd->Pim_FordVehMsg213Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_AbsActvVldFaildRefTi(void)
 *   uint32 *Rte_Pim_AbsActvVldPassdRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   uint8 *Rte_Pim_FordVehAbsActvPrev(void)
 *   uint8 *Rte_Pim_FordVehCllsnMtgtnByBrkgDeniedPrev(void)
 *   uint8 *Rte_Pim_FordVehCllsnMtgtnByBrkgDisadPrev(void)
 *   uint8 *Rte_Pim_FordVehEscActvPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehAbsEscStsVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg213Miss(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg213BusHiSpdAbsActvVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg213BusHiSpdAbsActvVldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg213BusHiSpdEvasSteerAssiEnadThd_Val(void)
 *   uint16 Rte_Prm_FordMsg213BusHiSpdMissMsgFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg213BusHiSpdMissMsgPassdThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg213BusHiSpd_START_SEC_CODE
# include "FordMsg213BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg213BusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg213BusHiSpdInit1 FordMsg213BusHiSpdInit1
FUNC(void, FordMsg213BusHiSpd_CODE) FordMsg213BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg213BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordBrkOscnRednEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneCentrAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneDetnWarnEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLkaEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrfcJamAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_AbsActv_B_Actl_Ford_AbsActv_B_Actl(Ford_AbsActv_B_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_CmbbBrkDis_B_Actl_Ford_CmbbBrkDis_B_Actl(Ford_CmbbBrkDis_B_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_CmbbDeny_B_ActlBrk_Ford_CmbbDeny_B_ActlBrk(Ford_CmbbDeny_B_ActlBrk *data)
 *   Std_ReturnType Rte_Read_Ford_StabCtlBrkActv_B_Actl_Ford_StabCtlBrkActv_B_Actl(Ford_StabCtlBrkActv_B_Actl *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehAbsActv_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehAbsEscStsVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehCllsnMtgtnByBrkgDenied_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehCllsnMtgtnByBrkgDisad_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehEscActv_Val(uint8 data)
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

# define RTE_RUNNABLE_FordMsg213BusHiSpdPer1 FordMsg213BusHiSpdPer1
FUNC(void, FordMsg213BusHiSpd_CODE) FordMsg213BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg213BusHiSpd_STOP_SEC_CODE
# include "FordMsg213BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG213BUSHISPD_H */

#include "Rte_Stubs.h"
