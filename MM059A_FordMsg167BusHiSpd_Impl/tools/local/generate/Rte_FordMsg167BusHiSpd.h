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
 *          File:  Rte_FordMsg167BusHiSpd.h
 *        Config:  C:/_Synergy_Projects/Working/MM059A_FordMsg167BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg167BusHiSpd
 *  Generated at:  Tue Feb 20 14:21:06 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg167BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG167BUSHISPD_H
# define _RTE_FORDMSG167BUSHISPD_H

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

# include "Rte_FordMsg167BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg167BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_ElPw_D_StatStrtStop, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehElecPwrStrtStopStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_ElPw_D_Stat, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehElecPwrStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg167Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg167Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehPrpnWhlTqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehPrpnWhlTqRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehPrpnWhlTqSigInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehPrpnWhlTqSigInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehPrpnWhlTqVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_PwPckTq_D_Stat, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehPwrpkTqStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrpnWhlTqVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrpnWhlTqVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrpnWhlTqVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg167BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg167BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg167BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordBrkOscnRednEnad_Logl (FALSE)
# define Rte_InitValue_FordCanDtcInhb_Val (1U)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordInvldMsgDiagcInhb_Val (0U)
# define Rte_InitValue_FordMfgDiagcInhb_Val (0U)
# define Rte_InitValue_FordMissMsgDiagcInhb_Val (0U)
# define Rte_InitValue_FordTqSteerCmpEnad_Logl (FALSE)
# define Rte_InitValue_FordTrlrBackUpAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehElecPwrStrtStopSts_Ford_ElPw_D_StatStrtStop (0U)
# define Rte_InitValue_FordVehElecPwrSts_Ford_ElPw_D_Stat (0U)
# define Rte_InitValue_FordVehPrpnWhlTq_Val (-131072.0F)
# define Rte_InitValue_FordVehPrpnWhlTqRaw_Val (0U)
# define Rte_InitValue_FordVehPrpnWhlTqVld_Logl (FALSE)
# define Rte_InitValue_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat (0U)
# define Rte_InitValue_Ford_ElPw_D_Stat1_Ford_ElPw_D_Stat (0U)
# define Rte_InitValue_Ford_ElPw_D_StatStrtStop1_Ford_ElPw_D_StatStrtStop (0U)
# define Rte_InitValue_Ford_PrplWhlTot2_Tq_Actl_Ford_PrplWhlTot2_Tq_Actl (0U)
# define Rte_InitValue_Ford_PwPckTq_D_Stat1_Ford_PwPckTq_D_Stat (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg167BusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG167BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg167BusHiSpd_FordBrkOscnRednEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG167BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg167BusHiSpd_FordCanDtcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG167BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg167BusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG167BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg167BusHiSpd_FordInvldMsgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG167BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg167BusHiSpd_FordMfgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG167BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg167BusHiSpd_FordMissMsgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG167BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg167BusHiSpd_FordTqSteerCmpEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG167BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg167BusHiSpd_FordTrlrBackUpAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG167BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg167BusHiSpd_Ford_ElPw_D_Stat1_Ford_ElPw_D_Stat(P2VAR(Ford_ElPw_D_Stat, AUTOMATIC, RTE_FORDMSG167BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg167BusHiSpd_Ford_ElPw_D_StatStrtStop1_Ford_ElPw_D_StatStrtStop(P2VAR(Ford_ElPw_D_StatStrtStop, AUTOMATIC, RTE_FORDMSG167BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg167BusHiSpd_Ford_PrplWhlTot2_Tq_Actl_Ford_PrplWhlTot2_Tq_Actl(P2VAR(Ford_PrplWhlTot2_Tq_Actl, AUTOMATIC, RTE_FORDMSG167BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg167BusHiSpd_Ford_PwPckTq_D_Stat1_Ford_PwPckTq_D_Stat(P2VAR(Ford_PwPckTq_D_Stat, AUTOMATIC, RTE_FORDMSG167BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg167BusHiSpd_FordVehElecPwrStrtStopSts_Ford_ElPw_D_StatStrtStop(Ford_ElPw_D_StatStrtStop data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg167BusHiSpd_FordVehElecPwrSts_Ford_ElPw_D_Stat(Ford_ElPw_D_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg167BusHiSpd_FordVehPrpnWhlTq_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg167BusHiSpd_FordVehPrpnWhlTqRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg167BusHiSpd_FordVehPrpnWhlTqVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg167BusHiSpd_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat(Ford_PwPckTq_D_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg167BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG167BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg167BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG167BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg167BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg167BusHiSpd_FordMsg167BusHiSpdMissMsgFaildTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg167BusHiSpd_FordMsg167BusHiSpdMissMsgPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg167BusHiSpd_FordMsg167BusHiSpdPrpnWhlTqFaildTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg167BusHiSpd_FordMsg167BusHiSpdPrpnWhlTqMissTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg167BusHiSpd_FordMsg167BusHiSpdPrpnWhlTqPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg167BusHiSpd_FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg167BusHiSpd_FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg167BusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordBrkOscnRednEnad_Logl Rte_Read_FordMsg167BusHiSpd_FordBrkOscnRednEnad_Logl
# define Rte_Read_FordCanDtcInhb_Val Rte_Read_FordMsg167BusHiSpd_FordCanDtcInhb_Val
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg167BusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordInvldMsgDiagcInhb_Val Rte_Read_FordMsg167BusHiSpd_FordInvldMsgDiagcInhb_Val
# define Rte_Read_FordMfgDiagcInhb_Val Rte_Read_FordMsg167BusHiSpd_FordMfgDiagcInhb_Val
# define Rte_Read_FordMissMsgDiagcInhb_Val Rte_Read_FordMsg167BusHiSpd_FordMissMsgDiagcInhb_Val
# define Rte_Read_FordTqSteerCmpEnad_Logl Rte_Read_FordMsg167BusHiSpd_FordTqSteerCmpEnad_Logl
# define Rte_Read_FordTrlrBackUpAssiEnad_Logl Rte_Read_FordMsg167BusHiSpd_FordTrlrBackUpAssiEnad_Logl
# define Rte_Read_Ford_ElPw_D_Stat1_Ford_ElPw_D_Stat Rte_Read_FordMsg167BusHiSpd_Ford_ElPw_D_Stat1_Ford_ElPw_D_Stat
# define Rte_Read_Ford_ElPw_D_StatStrtStop1_Ford_ElPw_D_StatStrtStop Rte_Read_FordMsg167BusHiSpd_Ford_ElPw_D_StatStrtStop1_Ford_ElPw_D_StatStrtStop
# define Rte_Read_Ford_PrplWhlTot2_Tq_Actl_Ford_PrplWhlTot2_Tq_Actl Rte_Read_FordMsg167BusHiSpd_Ford_PrplWhlTot2_Tq_Actl_Ford_PrplWhlTot2_Tq_Actl
# define Rte_Read_Ford_PwPckTq_D_Stat1_Ford_PwPckTq_D_Stat Rte_Read_FordMsg167BusHiSpd_Ford_PwPckTq_D_Stat1_Ford_PwPckTq_D_Stat


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehElecPwrStrtStopSts_Ford_ElPw_D_StatStrtStop Rte_Write_FordMsg167BusHiSpd_FordVehElecPwrStrtStopSts_Ford_ElPw_D_StatStrtStop
# define Rte_Write_FordVehElecPwrSts_Ford_ElPw_D_Stat Rte_Write_FordMsg167BusHiSpd_FordVehElecPwrSts_Ford_ElPw_D_Stat
# define Rte_Write_FordVehPrpnWhlTq_Val Rte_Write_FordMsg167BusHiSpd_FordVehPrpnWhlTq_Val
# define Rte_Write_FordVehPrpnWhlTqRaw_Val Rte_Write_FordMsg167BusHiSpd_FordVehPrpnWhlTqRaw_Val
# define Rte_Write_FordVehPrpnWhlTqVld_Logl Rte_Write_FordMsg167BusHiSpd_FordVehPrpnWhlTqVld_Logl
# define Rte_Write_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat Rte_Write_FordMsg167BusHiSpd_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg167BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg167BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg167BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg167BusHiSpdMissMsgFaildTiThd_Val Rte_Prm_FordMsg167BusHiSpd_FordMsg167BusHiSpdMissMsgFaildTiThd_Val

# define Rte_Prm_FordMsg167BusHiSpdMissMsgPassdTiThd_Val Rte_Prm_FordMsg167BusHiSpd_FordMsg167BusHiSpdMissMsgPassdTiThd_Val

# define Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqFaildTiThd_Val Rte_Prm_FordMsg167BusHiSpd_FordMsg167BusHiSpdPrpnWhlTqFaildTiThd_Val

# define Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqMissTiThd_Val Rte_Prm_FordMsg167BusHiSpd_FordMsg167BusHiSpdPrpnWhlTqMissTiThd_Val

# define Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqPassdTiThd_Val Rte_Prm_FordMsg167BusHiSpd_FordMsg167BusHiSpdPrpnWhlTqPassdTiThd_Val

# define Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd_Val Rte_Prm_FordMsg167BusHiSpd_FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd_Val

# define Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd_Val Rte_Prm_FordMsg167BusHiSpd_FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehPrpnWhlTqPrev() (Rte_Inst_FordMsg167BusHiSpd->Pim_FordVehPrpnWhlTqPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehPrpnWhlTqSigInvldFaildRefTi() (Rte_Inst_FordMsg167BusHiSpd->Pim_FordVehPrpnWhlTqSigInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehPrpnWhlTqSigInvldPassdRefTi() (Rte_Inst_FordMsg167BusHiSpd->Pim_FordVehPrpnWhlTqSigInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg167BusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg167BusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrpnWhlTqVldFaildRefTi() (Rte_Inst_FordMsg167BusHiSpd->Pim_PrpnWhlTqVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrpnWhlTqVldMissRefTi() (Rte_Inst_FordMsg167BusHiSpd->Pim_PrpnWhlTqVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrpnWhlTqVldPassdRefTi() (Rte_Inst_FordMsg167BusHiSpd->Pim_PrpnWhlTqVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehPrpnWhlTqRawPrev() (Rte_Inst_FordMsg167BusHiSpd->Pim_FordVehPrpnWhlTqRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg167BusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehElecPwrStrtStopStsPrev() (Rte_Inst_FordMsg167BusHiSpd->Pim_FordVehElecPwrStrtStopStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehElecPwrStsPrev() (Rte_Inst_FordMsg167BusHiSpd->Pim_FordVehElecPwrStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehPwrpkTqStsPrev() (Rte_Inst_FordMsg167BusHiSpd->Pim_FordVehPwrpkTqStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg167BusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg167Miss() (Rte_Inst_FordMsg167BusHiSpd->Pim_FordVehMsg167Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg167Rxd() (Rte_Inst_FordMsg167BusHiSpd->Pim_FordVehMsg167Rxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehPrpnWhlTqVldPrev() (Rte_Inst_FordMsg167BusHiSpd->Pim_FordVehPrpnWhlTqVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordVehPrpnWhlTqPrev(void)
 *   uint32 *Rte_Pim_FordVehPrpnWhlTqSigInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehPrpnWhlTqSigInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint32 *Rte_Pim_PrpnWhlTqVldFaildRefTi(void)
 *   uint32 *Rte_Pim_PrpnWhlTqVldMissRefTi(void)
 *   uint32 *Rte_Pim_PrpnWhlTqVldPassdRefTi(void)
 *   uint16 *Rte_Pim_FordVehPrpnWhlTqRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   Ford_ElPw_D_StatStrtStop *Rte_Pim_FordVehElecPwrStrtStopStsPrev(void)
 *   Ford_ElPw_D_Stat *Rte_Pim_FordVehElecPwrStsPrev(void)
 *   Ford_PwPckTq_D_Stat *Rte_Pim_FordVehPwrpkTqStsPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehMsg167Miss(void)
 *   boolean *Rte_Pim_FordVehMsg167Rxd(void)
 *   boolean *Rte_Pim_FordVehPrpnWhlTqVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg167BusHiSpdMissMsgFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg167BusHiSpdMissMsgPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqMissTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg167BusHiSpd_START_SEC_CODE
# include "FordMsg167BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg167BusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg167BusHiSpdInit1 FordMsg167BusHiSpdInit1
FUNC(void, FordMsg167BusHiSpd_CODE) FordMsg167BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg167BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordInvldMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMfgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMissMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordTqSteerCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackUpAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_ElPw_D_Stat1_Ford_ElPw_D_Stat(Ford_ElPw_D_Stat *data)
 *   Std_ReturnType Rte_Read_Ford_ElPw_D_StatStrtStop1_Ford_ElPw_D_StatStrtStop(Ford_ElPw_D_StatStrtStop *data)
 *   Std_ReturnType Rte_Read_Ford_PrplWhlTot2_Tq_Actl_Ford_PrplWhlTot2_Tq_Actl(Ford_PrplWhlTot2_Tq_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_PwPckTq_D_Stat1_Ford_PwPckTq_D_Stat(Ford_PwPckTq_D_Stat *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehElecPwrStrtStopSts_Ford_ElPw_D_StatStrtStop(Ford_ElPw_D_StatStrtStop data)
 *   Std_ReturnType Rte_Write_FordVehElecPwrSts_Ford_ElPw_D_Stat(Ford_ElPw_D_Stat data)
 *   Std_ReturnType Rte_Write_FordVehPrpnWhlTq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehPrpnWhlTqRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehPrpnWhlTqVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat(Ford_PwPckTq_D_Stat data)
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

# define RTE_RUNNABLE_FordMsg167BusHiSpdPer1 FordMsg167BusHiSpdPer1
FUNC(void, FordMsg167BusHiSpd_CODE) FordMsg167BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg167BusHiSpd_STOP_SEC_CODE
# include "FordMsg167BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG167BUSHISPD_H */

#include "Rte_Stubs.h"
