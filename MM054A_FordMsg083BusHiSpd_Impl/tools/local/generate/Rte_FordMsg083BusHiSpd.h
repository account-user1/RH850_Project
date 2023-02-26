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
 *          File:  Rte_FordMsg083BusHiSpd.h
 *        Config:  E:/EA4NewTemplate/MM054A_FordMsg083BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg083BusHiSpd
 *  Generated at:  Fri May  4 14:22:24 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg083BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG083BUSHISPD_H
# define _RTE_FORDMSG083BUSHISPD_H

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

# include "Rte_FordMsg083BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg083BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg083Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_TurnLghtSwtch_D_Stat, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTurnSigSwtStsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTurnSigVldMissMsgRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTurnSigVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTurnSigVldRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg083BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg083BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg083BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordLaneDetnWarnEnad_Logl (FALSE)
# define Rte_InitValue_FordVehTurnSigSwtStsRaw_Val (0U)
# define Rte_InitValue_FordVehTurnSigVld_Logl (FALSE)
# define Rte_InitValue_Ford_TurnLghtSwtch_D_Stat_Ford_TurnLghtSwtch_D_Stat (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg083BusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG083BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg083BusHiSpd_FordCanDtcInhb_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG083BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg083BusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG083BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg083BusHiSpd_FordLaneDetnWarnEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG083BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg083BusHiSpd_Ford_TurnLghtSwtch_D_Stat_Ford_TurnLghtSwtch_D_Stat(P2VAR(Ford_TurnLghtSwtch_D_Stat, AUTOMATIC, RTE_FORDMSG083BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg083BusHiSpd_FordVehTurnSigSwtStsRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg083BusHiSpd_FordVehTurnSigVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg083BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG083BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg083BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG083BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg083BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg083BusHiSpd_FordMsg083BusHiSpdFordVehTurnSigVldThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg083BusHiSpd_FordMsg083BusHiSpdMissMsgFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg083BusHiSpd_FordMsg083BusHiSpdMissMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg083BusHiSpd_FordMsg083BusHiSpdVehTurnSigVldMissMsgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg083BusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg083BusHiSpd_FordCanDtcInhb_Logl
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg083BusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordLaneDetnWarnEnad_Logl Rte_Read_FordMsg083BusHiSpd_FordLaneDetnWarnEnad_Logl
# define Rte_Read_Ford_TurnLghtSwtch_D_Stat_Ford_TurnLghtSwtch_D_Stat Rte_Read_FordMsg083BusHiSpd_Ford_TurnLghtSwtch_D_Stat_Ford_TurnLghtSwtch_D_Stat


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehTurnSigSwtStsRaw_Val Rte_Write_FordMsg083BusHiSpd_FordVehTurnSigSwtStsRaw_Val
# define Rte_Write_FordVehTurnSigVld_Logl Rte_Write_FordMsg083BusHiSpd_FordVehTurnSigVld_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg083BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg083BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg083BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg083BusHiSpdFordVehTurnSigVldThd_Val Rte_Prm_FordMsg083BusHiSpd_FordMsg083BusHiSpdFordVehTurnSigVldThd_Val

# define Rte_Prm_FordMsg083BusHiSpdMissMsgFaildThd_Val Rte_Prm_FordMsg083BusHiSpd_FordMsg083BusHiSpdMissMsgFaildThd_Val

# define Rte_Prm_FordMsg083BusHiSpdMissMsgPassdThd_Val Rte_Prm_FordMsg083BusHiSpd_FordMsg083BusHiSpdMissMsgPassdThd_Val

# define Rte_Prm_FordMsg083BusHiSpdVehTurnSigVldMissMsgThd_Val Rte_Prm_FordMsg083BusHiSpd_FordMsg083BusHiSpdVehTurnSigVldMissMsgThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehTurnSigVldMissMsgRefTi() (Rte_Inst_FordMsg083BusHiSpd->Pim_FordVehTurnSigVldMissMsgRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTurnSigVldRefTi() (Rte_Inst_FordMsg083BusHiSpd->Pim_FordVehTurnSigVldRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg083BusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg083BusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg083BusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTurnSigSwtStsRawPrev() (Rte_Inst_FordMsg083BusHiSpd->Pim_FordVehTurnSigSwtStsRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg083BusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg083Miss() (Rte_Inst_FordMsg083BusHiSpd->Pim_FordVehMsg083Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTurnSigVldPrev() (Rte_Inst_FordMsg083BusHiSpd->Pim_FordVehTurnSigVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_FordVehTurnSigVldMissMsgRefTi(void)
 *   uint32 *Rte_Pim_FordVehTurnSigVldRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   Ford_TurnLghtSwtch_D_Stat *Rte_Pim_FordVehTurnSigSwtStsRawPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehMsg083Miss(void)
 *   boolean *Rte_Pim_FordVehTurnSigVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg083BusHiSpdFordVehTurnSigVldThd_Val(void)
 *   uint16 Rte_Prm_FordMsg083BusHiSpdMissMsgFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg083BusHiSpdMissMsgPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg083BusHiSpdVehTurnSigVldMissMsgThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg083BusHiSpd_START_SEC_CODE
# include "FordMsg083BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg083BusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg083BusHiSpdInit1 FordMsg083BusHiSpdInit1
FUNC(void, FordMsg083BusHiSpd_CODE) FordMsg083BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg083BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_Ford_TurnLghtSwtch_D_Stat_Ford_TurnLghtSwtch_D_Stat(Ford_TurnLghtSwtch_D_Stat *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehTurnSigSwtStsRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTurnSigVld_Logl(boolean data)
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

# define RTE_RUNNABLE_FordMsg083BusHiSpdPer1 FordMsg083BusHiSpdPer1
FUNC(void, FordMsg083BusHiSpd_CODE) FordMsg083BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg083BusHiSpd_STOP_SEC_CODE
# include "FordMsg083BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG083BUSHISPD_H */

#include "Rte_Stubs.h"
