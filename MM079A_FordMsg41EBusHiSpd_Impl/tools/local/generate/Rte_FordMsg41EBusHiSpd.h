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
 *          File:  Rte_FordMsg41EBusHiSpd.h
 *        Config:  C:/Component/MM079A_FordMsg41EBusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg41EBusHiSpd
 *  Generated at:  Fri Apr 20 17:09:49 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg41EBusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG41EBUSHISPD_H
# define _RTE_FORDMSG41EBUSHISPD_H

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

# include "Rte_FordMsg41EBusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg41EBusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg41EMiss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_SelDrvMdeChassis2_D_Rq, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehPenSelDrvModPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSelDrvModChassisVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSelDrvModChassisVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSelDrvModChassisVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSelDrvModChassisVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_InvldMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_InvldMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg41EBusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg41EBusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg41EBusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordSelDrvModEnad_Logl (FALSE)
# define Rte_InitValue_FordVehPenSelDrvMod_Ford_SelDrvMdeChassis2_D_Rq (0U)
# define Rte_InitValue_FordVehSelDrvModChassisVld_Logl (FALSE)
# define Rte_InitValue_Ford_SelDrvMdeChassis2_D_Rq1_Ford_SelDrvMdeChassis2_D_Rq (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg41EBusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG41EBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg41EBusHiSpd_FordCanDtcInhb_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG41EBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg41EBusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG41EBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg41EBusHiSpd_FordSelDrvModEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG41EBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg41EBusHiSpd_Ford_SelDrvMdeChassis2_D_Rq1_Ford_SelDrvMdeChassis2_D_Rq(P2VAR(Ford_SelDrvMdeChassis2_D_Rq, AUTOMATIC, RTE_FORDMSG41EBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg41EBusHiSpd_FordVehPenSelDrvMod_Ford_SelDrvMdeChassis2_D_Rq(Ford_SelDrvMdeChassis2_D_Rq data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg41EBusHiSpd_FordVehSelDrvModChassisVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg41EBusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG41EBUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg41EBusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG41EBUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg41EBusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg41EBusHiSpd_FordMsg41EBusHiSpdChassisVldMissFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg41EBusHiSpd_FordMsg41EBusHiSpdChassisVldSigFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg41EBusHiSpd_FordMsg41EBusHiSpdChassisVldSigPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg41EBusHiSpd_FordMsg41EBusHiSpdInvldMsgFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg41EBusHiSpd_FordMsg41EBusHiSpdInvldMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg41EBusHiSpd_FordMsg41EBusHiSpdMissMsgFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg41EBusHiSpd_FordMsg41EBusHiSpdMissMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordMsg41EBusHiSpd_SelnDrvgModMapSteerModY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u16_32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordMsg41EBusHiSpd_SelnDrvgModMapSteerModY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordMsg41EBusHiSpd_SelnDrvgModSelDrvModChassis2X_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u16_32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordMsg41EBusHiSpd_SelnDrvgModSelDrvModChassis2X_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg41EBusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg41EBusHiSpd_FordCanDtcInhb_Logl
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg41EBusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordSelDrvModEnad_Logl Rte_Read_FordMsg41EBusHiSpd_FordSelDrvModEnad_Logl
# define Rte_Read_Ford_SelDrvMdeChassis2_D_Rq1_Ford_SelDrvMdeChassis2_D_Rq Rte_Read_FordMsg41EBusHiSpd_Ford_SelDrvMdeChassis2_D_Rq1_Ford_SelDrvMdeChassis2_D_Rq


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehPenSelDrvMod_Ford_SelDrvMdeChassis2_D_Rq Rte_Write_FordMsg41EBusHiSpd_FordVehPenSelDrvMod_Ford_SelDrvMdeChassis2_D_Rq
# define Rte_Write_FordVehSelDrvModChassisVld_Logl Rte_Write_FordMsg41EBusHiSpd_FordVehSelDrvModChassisVld_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg41EBusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg41EBusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg41EBusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg41EBusHiSpdChassisVldMissFaildThd_Val Rte_Prm_FordMsg41EBusHiSpd_FordMsg41EBusHiSpdChassisVldMissFaildThd_Val

# define Rte_Prm_FordMsg41EBusHiSpdChassisVldSigFaildThd_Val Rte_Prm_FordMsg41EBusHiSpd_FordMsg41EBusHiSpdChassisVldSigFaildThd_Val

# define Rte_Prm_FordMsg41EBusHiSpdChassisVldSigPassdThd_Val Rte_Prm_FordMsg41EBusHiSpd_FordMsg41EBusHiSpdChassisVldSigPassdThd_Val

# define Rte_Prm_FordMsg41EBusHiSpdInvldMsgFaildThd_Val Rte_Prm_FordMsg41EBusHiSpd_FordMsg41EBusHiSpdInvldMsgFaildThd_Val

# define Rte_Prm_FordMsg41EBusHiSpdInvldMsgPassdThd_Val Rte_Prm_FordMsg41EBusHiSpd_FordMsg41EBusHiSpdInvldMsgPassdThd_Val

# define Rte_Prm_FordMsg41EBusHiSpdMissMsgFaildThd_Val Rte_Prm_FordMsg41EBusHiSpd_FordMsg41EBusHiSpdMissMsgFaildThd_Val

# define Rte_Prm_FordMsg41EBusHiSpdMissMsgPassdThd_Val Rte_Prm_FordMsg41EBusHiSpd_FordMsg41EBusHiSpdMissMsgPassdThd_Val

# define Rte_Prm_SelnDrvgModMapSteerModY_Ary1D Rte_Prm_FordMsg41EBusHiSpd_SelnDrvgModMapSteerModY_Ary1D

# define Rte_Prm_SelnDrvgModSelDrvModChassis2X_Ary1D Rte_Prm_FordMsg41EBusHiSpd_SelnDrvgModSelDrvModChassis2X_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehSelDrvModChassisVldFaildRefTi() (Rte_Inst_FordMsg41EBusHiSpd->Pim_FordVehSelDrvModChassisVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSelDrvModChassisVldMissRefTi() (Rte_Inst_FordMsg41EBusHiSpd->Pim_FordVehSelDrvModChassisVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSelDrvModChassisVldPassdRefTi() (Rte_Inst_FordMsg41EBusHiSpd->Pim_FordVehSelDrvModChassisVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_InvldMsgFaildRefTi() (Rte_Inst_FordMsg41EBusHiSpd->Pim_InvldMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_InvldMsgPassdRefTi() (Rte_Inst_FordMsg41EBusHiSpd->Pim_InvldMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg41EBusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg41EBusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg41EBusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehPenSelDrvModPrev() (Rte_Inst_FordMsg41EBusHiSpd->Pim_FordVehPenSelDrvModPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg41EBusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg41EMiss() (Rte_Inst_FordMsg41EBusHiSpd->Pim_FordVehMsg41EMiss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSelDrvModChassisVldPrev() (Rte_Inst_FordMsg41EBusHiSpd->Pim_FordVehSelDrvModChassisVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_FordVehSelDrvModChassisVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehSelDrvModChassisVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehSelDrvModChassisVldPassdRefTi(void)
 *   uint32 *Rte_Pim_InvldMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_InvldMsgPassdRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   Ford_SelDrvMdeChassis2_D_Rq *Rte_Pim_FordVehPenSelDrvModPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehMsg41EMiss(void)
 *   boolean *Rte_Pim_FordVehSelDrvModChassisVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u16p0 Rte_Prm_FordMsg41EBusHiSpdChassisVldMissFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg41EBusHiSpdChassisVldSigFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg41EBusHiSpdChassisVldSigPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg41EBusHiSpdInvldMsgFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg41EBusHiSpdInvldMsgPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg41EBusHiSpdMissMsgFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg41EBusHiSpdMissMsgPassdThd_Val(void)
 *   uint16 *Rte_Prm_SelnDrvgModMapSteerModY_Ary1D(void)
 *     Returnvalue: uint16* is of type Ary1D_u16_32
 *   uint16 *Rte_Prm_SelnDrvgModSelDrvModChassis2X_Ary1D(void)
 *     Returnvalue: uint16* is of type Ary1D_u16_32
 *
 *********************************************************************************************************************/


# define FordMsg41EBusHiSpd_START_SEC_CODE
# include "FordMsg41EBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg41EBusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg41EBusHiSpdInit1 FordMsg41EBusHiSpdInit1
FUNC(void, FordMsg41EBusHiSpd_CODE) FordMsg41EBusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg41EBusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordSelDrvModEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_SelDrvMdeChassis2_D_Rq1_Ford_SelDrvMdeChassis2_D_Rq(Ford_SelDrvMdeChassis2_D_Rq *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehPenSelDrvMod_Ford_SelDrvMdeChassis2_D_Rq(Ford_SelDrvMdeChassis2_D_Rq data)
 *   Std_ReturnType Rte_Write_FordVehSelDrvModChassisVld_Logl(boolean data)
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

# define RTE_RUNNABLE_FordMsg41EBusHiSpdPer1 FordMsg41EBusHiSpdPer1
FUNC(void, FordMsg41EBusHiSpd_CODE) FordMsg41EBusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg41EBusHiSpd_STOP_SEC_CODE
# include "FordMsg41EBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG41EBUSHISPD_H */

#include "Rte_Stubs.h"
