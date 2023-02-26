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
 *          File:  Rte_FordHwTqCdng.h
 *        Config:  C:/Users/nz4826/Documents/Mrudula/Synergy_working/comp_dev_ea4/CF076A_FordHwTqCdng_Impl/tools/Component.dpa
 *     SW-C Type:  FordHwTqCdng
 *  Generated at:  Thu May  3 17:32:02 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordHwTqCdng> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDHWTQCDNG_H
# define _RTE_FORDHWTQCDNG_H

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

# include "Rte_FordHwTqCdng_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordHwTqCdng
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AppldFinalMotTqVldRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_InpTqRawVldRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dFordHwTqCdngFildBoostCrvAssiTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordHwTqCdng, RTE_CONST, RTE_CONST) Rte_Inst_FordHwTqCdng; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordHwTqCdng, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiCmd_Val (0.0F)
# define Rte_InitValue_AssiCmdBas_Val (0.0F)
# define Rte_InitValue_AvlMotTq_Val (0.0F)
# define Rte_InitValue_EcuId_Val (0U)
# define Rte_InitValue_FordAppldFinalMotTq_Val (0)
# define Rte_InitValue_FordAppldFinalMotTqVld_Logl (FALSE)
# define Rte_InitValue_FordBoostCrvAssiTq_Val (0)
# define Rte_InitValue_FordBoostCrvInpTq_Val (0)
# define Rte_InitValue_FordInpTqRaw_Val (0)
# define Rte_InitValue_FordInpTqRawVld_Logl (FALSE)
# define Rte_InitValue_FordMaxAsscTq_Val (0.0F)
# define Rte_InitValue_FordReqdFinalMotTq_Val (0)
# define Rte_InitValue_FordSumBoostCrvInpTq_Val (0)
# define Rte_InitValue_FordVehSpd_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwTqHysOvrl_Val (0.0F)
# define Rte_InitValue_HwTqOvrl_Val (0.0F)
# define Rte_InitValue_MotTqCmd_Val (0.0F)
# define Rte_InitValue_MotTqCmdPwrLimd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCdng_AssiCmd_Val(P2VAR(float32, AUTOMATIC, RTE_FORDHWTQCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCdng_AssiCmdBas_Val(P2VAR(float32, AUTOMATIC, RTE_FORDHWTQCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCdng_AvlMotTq_Val(P2VAR(float32, AUTOMATIC, RTE_FORDHWTQCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCdng_EcuId_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDHWTQCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCdng_FordVehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_FORDHWTQCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCdng_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_FORDHWTQCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCdng_HwTqHysOvrl_Val(P2VAR(float32, AUTOMATIC, RTE_FORDHWTQCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCdng_HwTqOvrl_Val(P2VAR(float32, AUTOMATIC, RTE_FORDHWTQCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCdng_MotTqCmd_Val(P2VAR(float32, AUTOMATIC, RTE_FORDHWTQCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordHwTqCdng_MotTqCmdPwrLimd_Val(P2VAR(float32, AUTOMATIC, RTE_FORDHWTQCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordHwTqCdng_FordAppldFinalMotTq_Val(s23pm8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordHwTqCdng_FordAppldFinalMotTqVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordHwTqCdng_FordBoostCrvAssiTq_Val(s8p7 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordHwTqCdng_FordBoostCrvInpTq_Val(s5p10 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordHwTqCdng_FordInpTqRaw_Val(s5p10 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordHwTqCdng_FordInpTqRawVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordHwTqCdng_FordMaxAsscTq_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordHwTqCdng_FordReqdFinalMotTq_Val(s23pm8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordHwTqCdng_FordSumBoostCrvInpTq_Val(s5p10 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordHwTqCdng_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_FORDHWTQCDNG_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordHwTqCdng_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDHWTQCDNG_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordHwTqCdng_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDHWTQCDNG_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_FordHwTqCdng_SysGlbPrmSysKineRat_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordHwTqCdng_FordHwTqCdngAppldFinalMotTqVldTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordHwTqCdng_FordHwTqCdngInpTqRawVldTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCdng_PwrLimrStdOperMotEnvlpY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordHwTqCdng_PwrLimrStdOperMotEnvlpY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AssiCmd_Val Rte_Read_FordHwTqCdng_AssiCmd_Val
# define Rte_Read_AssiCmdBas_Val Rte_Read_FordHwTqCdng_AssiCmdBas_Val
# define Rte_Read_AvlMotTq_Val Rte_Read_FordHwTqCdng_AvlMotTq_Val
# define Rte_Read_EcuId_Val Rte_Read_FordHwTqCdng_EcuId_Val
# define Rte_Read_FordVehSpd_Val Rte_Read_FordHwTqCdng_FordVehSpd_Val
# define Rte_Read_HwTq_Val Rte_Read_FordHwTqCdng_HwTq_Val
# define Rte_Read_HwTqHysOvrl_Val Rte_Read_FordHwTqCdng_HwTqHysOvrl_Val
# define Rte_Read_HwTqOvrl_Val Rte_Read_FordHwTqCdng_HwTqOvrl_Val
# define Rte_Read_MotTqCmd_Val Rte_Read_FordHwTqCdng_MotTqCmd_Val
# define Rte_Read_MotTqCmdPwrLimd_Val Rte_Read_FordHwTqCdng_MotTqCmdPwrLimd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordAppldFinalMotTq_Val Rte_Write_FordHwTqCdng_FordAppldFinalMotTq_Val
# define Rte_Write_FordAppldFinalMotTqVld_Logl Rte_Write_FordHwTqCdng_FordAppldFinalMotTqVld_Logl
# define Rte_Write_FordBoostCrvAssiTq_Val Rte_Write_FordHwTqCdng_FordBoostCrvAssiTq_Val
# define Rte_Write_FordBoostCrvInpTq_Val Rte_Write_FordHwTqCdng_FordBoostCrvInpTq_Val
# define Rte_Write_FordInpTqRaw_Val Rte_Write_FordHwTqCdng_FordInpTqRaw_Val
# define Rte_Write_FordInpTqRawVld_Logl Rte_Write_FordHwTqCdng_FordInpTqRawVld_Logl
# define Rte_Write_FordMaxAsscTq_Val Rte_Write_FordHwTqCdng_FordMaxAsscTq_Val
# define Rte_Write_FordReqdFinalMotTq_Val Rte_Write_FordHwTqCdng_FordReqdFinalMotTq_Val
# define Rte_Write_FordSumBoostCrvInpTq_Val Rte_Write_FordHwTqCdng_FordSumBoostCrvInpTq_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_FordHwTqCdng_GetNtcQlfrSts_Oper
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordHwTqCdng_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordHwTqCdng_GetTiSpan100MicroSec32bit_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_SysGlbPrmSysKineRat_Val Rte_Prm_FordHwTqCdng_SysGlbPrmSysKineRat_Val

# define Rte_Prm_FordHwTqCdngAppldFinalMotTqVldTiThd_Val Rte_Prm_FordHwTqCdng_FordHwTqCdngAppldFinalMotTqVldTiThd_Val

# define Rte_Prm_FordHwTqCdngInpTqRawVldTiThd_Val Rte_Prm_FordHwTqCdng_FordHwTqCdngInpTqRawVldTiThd_Val

# define Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D Rte_Prm_FordHwTqCdng_PwrLimrStdOperMotEnvlpY_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dFordHwTqCdngFildBoostCrvAssiTq() (Rte_Inst_FordHwTqCdng->Pim_dFordHwTqCdngFildBoostCrvAssiTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AppldFinalMotTqVldRefTi() (Rte_Inst_FordHwTqCdng->Pim_AppldFinalMotTqVldRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_InpTqRawVldRefTi() (Rte_Inst_FordHwTqCdng->Pim_InpTqRawVldRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dFordHwTqCdngFildBoostCrvAssiTq(void)
 *   uint32 *Rte_Pim_AppldFinalMotTqVldRefTi(void)
 *   uint32 *Rte_Pim_InpTqRawVldRefTi(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_SysGlbPrmSysKineRat_Val(void)
 *   u16p0 Rte_Prm_FordHwTqCdngAppldFinalMotTqVldTiThd_Val(void)
 *   u16p0 Rte_Prm_FordHwTqCdngInpTqRawVldTiThd_Val(void)
 *   u4p12 *Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_6
 *
 *********************************************************************************************************************/


# define FordHwTqCdng_START_SEC_CODE
# include "FordHwTqCdng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordHwTqCdngInit1
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

# define RTE_RUNNABLE_FordHwTqCdngInit1 FordHwTqCdngInit1
FUNC(void, FordHwTqCdng_CODE) FordHwTqCdngInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordHwTqCdngPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AssiCmdBas_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AvlMotTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EcuId_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqHysOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqOvrl_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordBoostCrvAssiTq_Val(s8p7 data)
 *   Std_ReturnType Rte_Write_FordBoostCrvInpTq_Val(s5p10 data)
 *   Std_ReturnType Rte_Write_FordInpTqRaw_Val(s5p10 data)
 *   Std_ReturnType Rte_Write_FordInpTqRawVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordMaxAsscTq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordSumBoostCrvInpTq_Val(s5p10 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordHwTqCdngPer1 FordHwTqCdngPer1
FUNC(void, FordHwTqCdng_CODE) FordHwTqCdngPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordHwTqCdngPer2
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
 *   Std_ReturnType Rte_Read_AssiCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EcuId_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotTqCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdPwrLimd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordAppldFinalMotTq_Val(s23pm8 data)
 *   Std_ReturnType Rte_Write_FordAppldFinalMotTqVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordReqdFinalMotTq_Val(s23pm8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordHwTqCdngPer2 FordHwTqCdngPer2
FUNC(void, FordHwTqCdng_CODE) FordHwTqCdngPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordHwTqCdng_STOP_SEC_CODE
# include "FordHwTqCdng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDHWTQCDNG_H */

#include "Rte_Stubs.h"
