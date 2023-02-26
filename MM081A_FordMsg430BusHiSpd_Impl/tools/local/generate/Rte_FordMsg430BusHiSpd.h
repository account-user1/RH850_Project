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
 *          File:  Rte_FordMsg430BusHiSpd.h
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/MM081A_FordMsg430BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg430BusHiSpd
 *  Generated at:  Tue Feb 20 16:31:55 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg430BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG430BUSHISPD_H
# define _RTE_FORDMSG430BUSHISPD_H

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

# include "Rte_FordMsg430BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg430BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg430Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg430Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehOdomPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg430BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg430BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg430BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordCanDtcInhb_Val (1U)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordMfgDiagcInhb_Val (0U)
# define Rte_InitValue_FordMissMsgDiagcInhb_Val (0U)
# define Rte_InitValue_FordVehOdom_Val (0.0F)
# define Rte_InitValue_Ford_OdometerMasterValue_Ford_OdometerMasterValue (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg430BusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG430BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg430BusHiSpd_FordCanDtcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG430BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg430BusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG430BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg430BusHiSpd_FordMfgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG430BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg430BusHiSpd_FordMissMsgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG430BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg430BusHiSpd_Ford_OdometerMasterValue_Ford_OdometerMasterValue(P2VAR(Ford_OdometerMasterValue, AUTOMATIC, RTE_FORDMSG430BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg430BusHiSpd_FordVehOdom_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg430BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG430BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg430BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG430BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg430BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg430BusHiSpd_FordMsg430BusHiSpdMissMsgFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg430BusHiSpd_FordMsg430BusHiSpdMissMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg430BusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordCanDtcInhb_Val Rte_Read_FordMsg430BusHiSpd_FordCanDtcInhb_Val
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg430BusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordMfgDiagcInhb_Val Rte_Read_FordMsg430BusHiSpd_FordMfgDiagcInhb_Val
# define Rte_Read_FordMissMsgDiagcInhb_Val Rte_Read_FordMsg430BusHiSpd_FordMissMsgDiagcInhb_Val
# define Rte_Read_Ford_OdometerMasterValue_Ford_OdometerMasterValue Rte_Read_FordMsg430BusHiSpd_Ford_OdometerMasterValue_Ford_OdometerMasterValue


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehOdom_Val Rte_Write_FordMsg430BusHiSpd_FordVehOdom_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg430BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg430BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg430BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg430BusHiSpdMissMsgFaildThd_Val Rte_Prm_FordMsg430BusHiSpd_FordMsg430BusHiSpdMissMsgFaildThd_Val

# define Rte_Prm_FordMsg430BusHiSpdMissMsgPassdThd_Val Rte_Prm_FordMsg430BusHiSpd_FordMsg430BusHiSpdMissMsgPassdThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehOdomPrev() (Rte_Inst_FordMsg430BusHiSpd->Pim_FordVehOdomPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg430BusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg430BusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg430BusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg430Miss() (Rte_Inst_FordMsg430BusHiSpd->Pim_FordVehMsg430Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg430Rxd() (Rte_Inst_FordMsg430BusHiSpd->Pim_FordVehMsg430Rxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordVehOdomPrev(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   boolean *Rte_Pim_FordVehMsg430Miss(void)
 *   boolean *Rte_Pim_FordVehMsg430Rxd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u16p0 Rte_Prm_FordMsg430BusHiSpdMissMsgFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg430BusHiSpdMissMsgPassdThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg430BusHiSpd_START_SEC_CODE
# include "FordMsg430BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg430BusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg430BusHiSpdInit1 FordMsg430BusHiSpdInit1
FUNC(void, FordMsg430BusHiSpd_CODE) FordMsg430BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg430BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMfgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMissMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_Ford_OdometerMasterValue_Ford_OdometerMasterValue(Ford_OdometerMasterValue *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehOdom_Val(float32 data)
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

# define RTE_RUNNABLE_FordMsg430BusHiSpdPer1 FordMsg430BusHiSpdPer1
FUNC(void, FordMsg430BusHiSpd_CODE) FordMsg430BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg430BusHiSpd_STOP_SEC_CODE
# include "FordMsg430BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG430BUSHISPD_H */

#include "Rte_Stubs.h"
