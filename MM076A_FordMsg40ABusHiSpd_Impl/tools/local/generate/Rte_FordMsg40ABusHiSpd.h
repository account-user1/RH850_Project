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
 *          File:  Rte_FordMsg40ABusHiSpd.h
 *        Config:  C:/_Synergy_Projects/Working/MM076A_FordMsg40ABusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg40ABusHiSpd
 *  Generated at:  Tue Feb 20 15:45:15 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg40ABusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG40ABUSHISPD_H
# define _RTE_FORDMSG40ABUSHISPD_H

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

# include "Rte_FordMsg40ABusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg40ABusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehGlbRealTiPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u08_6, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehIdnNrC100Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u08_6, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehIdnNrC101Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u08_5, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehIdnNrC102Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u08_17, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehIdnNrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg40AMiss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg40ARxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTireCircumPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg40ABusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg40ABusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg40ABusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordCanDtcInhb_Val (1U)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordMfgDiagcInhb_Val (0U)
# define Rte_InitValue_FordMissMsgDiagcInhb_Val (0U)
# define Rte_InitValue_FordVehGlbRealTi_Val (0.1F)
# define Rte_InitValue_FordVehTireCircum_Val (65534.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg40ABusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg40ABusHiSpd_FordCanDtcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg40ABusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg40ABusHiSpd_FordMfgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg40ABusHiSpd_FordMissMsgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg40ABusHiSpd_Ford_VehGGCCData_Ford_VehicleGGCCData(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg40ABusHiSpd_Ford_VehGGCCData_Ford_VehicleGGCCData(P2VAR(Ford_VehicleGGCCData, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg40ABusHiSpd_FordVehGlbRealTi_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg40ABusHiSpd_FordVehIdnNr_Ary1D(P2CONST(uint8, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg40ABusHiSpd_FordVehIdnNr_Ary1D(P2CONST(Ary1D_u08_17, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg40ABusHiSpd_FordVehTireCircum_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg40ABusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg40ABusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg40ABusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg40ABusHiSpd_FordMsg40ABusHiSpdMissMsgFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg40ABusHiSpd_FordMsg40ABusHiSpdMissMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg40ABusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordCanDtcInhb_Val Rte_Read_FordMsg40ABusHiSpd_FordCanDtcInhb_Val
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg40ABusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordMfgDiagcInhb_Val Rte_Read_FordMsg40ABusHiSpd_FordMfgDiagcInhb_Val
# define Rte_Read_FordMissMsgDiagcInhb_Val Rte_Read_FordMsg40ABusHiSpd_FordMissMsgDiagcInhb_Val
# define Rte_Read_Ford_VehGGCCData_Ford_VehicleGGCCData Rte_Read_FordMsg40ABusHiSpd_Ford_VehGGCCData_Ford_VehicleGGCCData


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehGlbRealTi_Val Rte_Write_FordMsg40ABusHiSpd_FordVehGlbRealTi_Val
# define Rte_Write_FordVehIdnNr_Ary1D Rte_Write_FordMsg40ABusHiSpd_FordVehIdnNr_Ary1D
# define Rte_Write_FordVehTireCircum_Val Rte_Write_FordMsg40ABusHiSpd_FordVehTireCircum_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg40ABusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg40ABusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg40ABusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg40ABusHiSpdMissMsgFaildThd_Val Rte_Prm_FordMsg40ABusHiSpd_FordMsg40ABusHiSpdMissMsgFaildThd_Val

# define Rte_Prm_FordMsg40ABusHiSpdMissMsgPassdThd_Val Rte_Prm_FordMsg40ABusHiSpd_FordMsg40ABusHiSpdMissMsgPassdThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehGlbRealTiPrev() (Rte_Inst_FordMsg40ABusHiSpd->Pim_FordVehGlbRealTiPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTireCircumPrev() (Rte_Inst_FordMsg40ABusHiSpd->Pim_FordVehTireCircumPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg40ABusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg40ABusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg40ABusHiSpd->Pim_FordClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg40AMiss() (Rte_Inst_FordMsg40ABusHiSpd->Pim_FordVehMsg40AMiss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg40ARxd() (Rte_Inst_FordMsg40ABusHiSpd->Pim_FordVehMsg40ARxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_FordVehIdnNrC100Prev() (*Rte_Inst_FordMsg40ABusHiSpd->Pim_FordVehIdnNrC100Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_FordVehIdnNrC100Prev() (Rte_Inst_FordMsg40ABusHiSpd->Pim_FordVehIdnNrC100Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_FordVehIdnNrC101Prev() (*Rte_Inst_FordMsg40ABusHiSpd->Pim_FordVehIdnNrC101Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_FordVehIdnNrC101Prev() (Rte_Inst_FordMsg40ABusHiSpd->Pim_FordVehIdnNrC101Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_FordVehIdnNrC102Prev() (*Rte_Inst_FordMsg40ABusHiSpd->Pim_FordVehIdnNrC102Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_FordVehIdnNrC102Prev() (Rte_Inst_FordMsg40ABusHiSpd->Pim_FordVehIdnNrC102Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_FordVehIdnNrPrev() (*Rte_Inst_FordMsg40ABusHiSpd->Pim_FordVehIdnNrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_FordVehIdnNrPrev() (Rte_Inst_FordMsg40ABusHiSpd->Pim_FordVehIdnNrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordVehGlbRealTiPrev(void)
 *   float32 *Rte_Pim_FordVehTireCircumPrev(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint8 *Rte_Pim_FordClrDiagcFlgProxyPrev(void)
 *   boolean *Rte_Pim_FordVehMsg40AMiss(void)
 *   boolean *Rte_Pim_FordVehMsg40ARxd(void)
 *   uint8 *Rte_Pim_FordVehIdnNrC100Prev(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_6
 *   uint8 *Rte_Pim_FordVehIdnNrC101Prev(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_6
 *   uint8 *Rte_Pim_FordVehIdnNrC102Prev(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_5
 *   uint8 *Rte_Pim_FordVehIdnNrPrev(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_17
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u16p0 Rte_Prm_FordMsg40ABusHiSpdMissMsgFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg40ABusHiSpdMissMsgPassdThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg40ABusHiSpd_START_SEC_CODE
# include "FordMsg40ABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg40ABusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg40ABusHiSpdInit1 FordMsg40ABusHiSpdInit1
FUNC(void, FordMsg40ABusHiSpd_CODE) FordMsg40ABusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg40ABusHiSpdPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
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
 *   Std_ReturnType Rte_Read_Ford_VehGGCCData_Ford_VehicleGGCCData(uint8 *data)
 *     Argument data: uint8* is of type Ford_VehicleGGCCData
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehGlbRealTi_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehIdnNr_Ary1D(const uint8 *data)
 *     Argument data: uint8* is of type Ary1D_u08_17
 *   Std_ReturnType Rte_Write_FordVehTireCircum_Val(float32 data)
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

# define RTE_RUNNABLE_FordMsg40ABusHiSpdPer1 FordMsg40ABusHiSpdPer1
FUNC(void, FordMsg40ABusHiSpd_CODE) FordMsg40ABusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg40ABusHiSpd_STOP_SEC_CODE
# include "FordMsg40ABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG40ABUSHISPD_H */

#include "Rte_Stubs.h"
