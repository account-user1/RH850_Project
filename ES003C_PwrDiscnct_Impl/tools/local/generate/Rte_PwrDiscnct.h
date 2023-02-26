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
 *          File:  Rte_PwrDiscnct.h
 *        Config:  C:/Component/ES003C_PwrDiscnct_Impl/tools/Component.dpa
 *     SW-C Type:  PwrDiscnct
 *  Generated at:  Mon Aug  7 16:05:19 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <PwrDiscnct> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PWRDISCNCT_H
# define _RTE_PWRDISCNCT_H

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

# include "Rte_PwrDiscnct_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_PwrDiscnct
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstRunCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Ntc042PrmByte; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrDiscnctClsdSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrDiscnctFltAtInitErrAcc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(PwrDiscnctSts1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrDiscnctSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrDiscnctTestACmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrDiscnctTestBCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_PwrDiscnct, RTE_CONST, RTE_CONST) Rte_Inst_PwrDiscnct; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_PwrDiscnct, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_BattVltg_Val (0.0F)
# define Rte_InitValue_BattVltgAdcFaild_Logl (FALSE)
# define Rte_InitValue_BattVltgSwd1_Val (0.0F)
# define Rte_InitValue_ChrgPmpDiag_Val (0.0F)
# define Rte_InitValue_ChrgPmpDiagAdcFaild_Logl (FALSE)
# define Rte_InitValue_MotVelMrf_Val (0.0F)
# define Rte_InitValue_PwrDiscnctATestCmpl_Logl (FALSE)
# define Rte_InitValue_PwrDiscnctBTestCmpl_Logl (FALSE)
# define Rte_InitValue_PwrDiscnctClsd_Logl (FALSE)
# define Rte_InitValue_PwrDiscnctSwtDiag_Val (0.0F)
# define Rte_InitValue_StrtUpSt_Val (0U)
# define Rte_InitValue_SysSt_Val (3U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrDiscnct_BattVltg_Val(P2VAR(float32, AUTOMATIC, RTE_PWRDISCNCT_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrDiscnct_BattVltgAdcFaild_Logl(P2VAR(boolean, AUTOMATIC, RTE_PWRDISCNCT_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrDiscnct_BattVltgSwd1_Val(P2VAR(float32, AUTOMATIC, RTE_PWRDISCNCT_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrDiscnct_ChrgPmpDiag_Val(P2VAR(float32, AUTOMATIC, RTE_PWRDISCNCT_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrDiscnct_ChrgPmpDiagAdcFaild_Logl(P2VAR(boolean, AUTOMATIC, RTE_PWRDISCNCT_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrDiscnct_MotVelMrf_Val(P2VAR(float32, AUTOMATIC, RTE_PWRDISCNCT_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrDiscnct_PwrDiscnctSwtDiag_Val(P2VAR(float32, AUTOMATIC, RTE_PWRDISCNCT_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrDiscnct_StrtUpSt_Val(P2VAR(uint8, AUTOMATIC, RTE_PWRDISCNCT_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrDiscnct_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_PWRDISCNCT_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PwrDiscnct_PwrDiscnctATestCmpl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PwrDiscnct_PwrDiscnctBTestCmpl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PwrDiscnct_PwrDiscnctClsd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PwrDiscnct_CnvSnpshtData_f32_Oper(P2VAR(uint32, AUTOMATIC, RTE_PWRDISCNCT_APPL_VAR) SnpshtDataCnvd_Arg, float32 SnpshtData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PwrDiscnct_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrDiscnct_BattVltgSwdMax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctBattVltgExtdNormThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctBattVltgNonExtdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctChrgMinDeltaExtOper_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctChrgMinDeltaNonOper_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctChrgMinDeltaNormOper_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctChrgPmpDiagOpenThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctDeltaSwtClsThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctDeltaVltgClsThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctDeltaVltgOpenThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctMtrMtnThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctSwtDiagOpenThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctFltFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctFltPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctPwrDiscnctRtFltFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_PwrDiscnct_PwrDiscnctPwrDiscnctRtFltPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_BattVltg_Val Rte_Read_PwrDiscnct_BattVltg_Val
# define Rte_Read_BattVltgAdcFaild_Logl Rte_Read_PwrDiscnct_BattVltgAdcFaild_Logl
# define Rte_Read_BattVltgSwd1_Val Rte_Read_PwrDiscnct_BattVltgSwd1_Val
# define Rte_Read_ChrgPmpDiag_Val Rte_Read_PwrDiscnct_ChrgPmpDiag_Val
# define Rte_Read_ChrgPmpDiagAdcFaild_Logl Rte_Read_PwrDiscnct_ChrgPmpDiagAdcFaild_Logl
# define Rte_Read_MotVelMrf_Val Rte_Read_PwrDiscnct_MotVelMrf_Val
# define Rte_Read_PwrDiscnctSwtDiag_Val Rte_Read_PwrDiscnct_PwrDiscnctSwtDiag_Val
# define Rte_Read_StrtUpSt_Val Rte_Read_PwrDiscnct_StrtUpSt_Val
# define Rte_Read_SysSt_Val Rte_Read_PwrDiscnct_SysSt_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PwrDiscnctATestCmpl_Logl Rte_Write_PwrDiscnct_PwrDiscnctATestCmpl_Logl
# define Rte_Write_PwrDiscnctBTestCmpl_Logl Rte_Write_PwrDiscnct_PwrDiscnctBTestCmpl_Logl
# define Rte_Write_PwrDiscnctClsd_Logl Rte_Write_PwrDiscnct_PwrDiscnctClsd_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_CnvSnpshtData_f32_Oper Rte_Call_PwrDiscnct_CnvSnpshtData_f32_Oper
# define Rte_Call_SetNtcStsAndSnpshtData_Oper Rte_Call_PwrDiscnct_SetNtcStsAndSnpshtData_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_BattVltgSwdMax_Val Rte_Prm_PwrDiscnct_BattVltgSwdMax_Val

# define Rte_Prm_PwrDiscnctBattVltgExtdNormThd_Val Rte_Prm_PwrDiscnct_PwrDiscnctBattVltgExtdNormThd_Val

# define Rte_Prm_PwrDiscnctBattVltgNonExtdThd_Val Rte_Prm_PwrDiscnct_PwrDiscnctBattVltgNonExtdThd_Val

# define Rte_Prm_PwrDiscnctChrgMinDeltaExtOper_Val Rte_Prm_PwrDiscnct_PwrDiscnctChrgMinDeltaExtOper_Val

# define Rte_Prm_PwrDiscnctChrgMinDeltaNonOper_Val Rte_Prm_PwrDiscnct_PwrDiscnctChrgMinDeltaNonOper_Val

# define Rte_Prm_PwrDiscnctChrgMinDeltaNormOper_Val Rte_Prm_PwrDiscnct_PwrDiscnctChrgMinDeltaNormOper_Val

# define Rte_Prm_PwrDiscnctChrgPmpDiagOpenThd_Val Rte_Prm_PwrDiscnct_PwrDiscnctChrgPmpDiagOpenThd_Val

# define Rte_Prm_PwrDiscnctDeltaSwtClsThd_Val Rte_Prm_PwrDiscnct_PwrDiscnctDeltaSwtClsThd_Val

# define Rte_Prm_PwrDiscnctDeltaVltgClsThd_Val Rte_Prm_PwrDiscnct_PwrDiscnctDeltaVltgClsThd_Val

# define Rte_Prm_PwrDiscnctDeltaVltgOpenThd_Val Rte_Prm_PwrDiscnct_PwrDiscnctDeltaVltgOpenThd_Val

# define Rte_Prm_PwrDiscnctMtrMtnThd_Val Rte_Prm_PwrDiscnct_PwrDiscnctMtrMtnThd_Val

# define Rte_Prm_PwrDiscnctSwtDiagOpenThd_Val Rte_Prm_PwrDiscnct_PwrDiscnctSwtDiagOpenThd_Val

# define Rte_Prm_PwrDiscnctFltFailStep_Val Rte_Prm_PwrDiscnct_PwrDiscnctFltFailStep_Val

# define Rte_Prm_PwrDiscnctFltPassStep_Val Rte_Prm_PwrDiscnct_PwrDiscnctFltPassStep_Val

# define Rte_Prm_PwrDiscnctFltThd_Val Rte_Prm_PwrDiscnct_PwrDiscnctFltThd_Val

# define Rte_Prm_PwrDiscnctPwrDiscnctRtFltFailStep_Val Rte_Prm_PwrDiscnct_PwrDiscnctPwrDiscnctRtFltFailStep_Val

# define Rte_Prm_PwrDiscnctPwrDiscnctRtFltPassStep_Val Rte_Prm_PwrDiscnct_PwrDiscnctPwrDiscnctRtFltPassStep_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PwrDiscnctFltAtInitErrAcc() (Rte_Inst_PwrDiscnct->Pim_PwrDiscnctFltAtInitErrAcc) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Ntc042PrmByte() (Rte_Inst_PwrDiscnct->Pim_Ntc042PrmByte) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PwrDiscnctSt() (Rte_Inst_PwrDiscnct->Pim_PwrDiscnctSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstRunCmpl() (Rte_Inst_PwrDiscnct->Pim_FirstRunCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PwrDiscnctClsdSts() (Rte_Inst_PwrDiscnct->Pim_PwrDiscnctClsdSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PwrDiscnctTestACmpl() (Rte_Inst_PwrDiscnct->Pim_PwrDiscnctTestACmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PwrDiscnctTestBCmpl() (Rte_Inst_PwrDiscnct->Pim_PwrDiscnctTestBCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint16 *Rte_Pim_PwrDiscnctFltAtInitErrAcc(void)
 *   uint8 *Rte_Pim_Ntc042PrmByte(void)
 *   PwrDiscnctSts1 *Rte_Pim_PwrDiscnctSt(void)
 *   boolean *Rte_Pim_FirstRunCmpl(void)
 *   boolean *Rte_Pim_PwrDiscnctClsdSts(void)
 *   boolean *Rte_Pim_PwrDiscnctTestACmpl(void)
 *   boolean *Rte_Pim_PwrDiscnctTestBCmpl(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_BattVltgSwdMax_Val(void)
 *   float32 Rte_Prm_PwrDiscnctBattVltgExtdNormThd_Val(void)
 *   float32 Rte_Prm_PwrDiscnctBattVltgNonExtdThd_Val(void)
 *   float32 Rte_Prm_PwrDiscnctChrgMinDeltaExtOper_Val(void)
 *   float32 Rte_Prm_PwrDiscnctChrgMinDeltaNonOper_Val(void)
 *   float32 Rte_Prm_PwrDiscnctChrgMinDeltaNormOper_Val(void)
 *   float32 Rte_Prm_PwrDiscnctChrgPmpDiagOpenThd_Val(void)
 *   float32 Rte_Prm_PwrDiscnctDeltaSwtClsThd_Val(void)
 *   float32 Rte_Prm_PwrDiscnctDeltaVltgClsThd_Val(void)
 *   float32 Rte_Prm_PwrDiscnctDeltaVltgOpenThd_Val(void)
 *   float32 Rte_Prm_PwrDiscnctMtrMtnThd_Val(void)
 *   float32 Rte_Prm_PwrDiscnctSwtDiagOpenThd_Val(void)
 *   uint16 Rte_Prm_PwrDiscnctFltFailStep_Val(void)
 *   uint16 Rte_Prm_PwrDiscnctFltPassStep_Val(void)
 *   uint16 Rte_Prm_PwrDiscnctFltThd_Val(void)
 *   uint16 Rte_Prm_PwrDiscnctPwrDiscnctRtFltFailStep_Val(void)
 *   uint16 Rte_Prm_PwrDiscnctPwrDiscnctRtFltPassStep_Val(void)
 *
 *********************************************************************************************************************/


# define PwrDiscnct_START_SEC_CODE
# include "PwrDiscnct_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrDiscnctInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PwrDiscnctInit1 PwrDiscnctInit1
FUNC(void, PwrDiscnct_CODE) PwrDiscnctInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrDiscnctPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_BattVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_BattVltgAdcFaild_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_BattVltgSwd1_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ChrgPmpDiag_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ChrgPmpDiagAdcFaild_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PwrDiscnctSwtDiag_Val(float32 *data)
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PwrDiscnctATestCmpl_Logl(boolean data)
 *   Std_ReturnType Rte_Write_PwrDiscnctBTestCmpl_Logl(boolean data)
 *   Std_ReturnType Rte_Write_PwrDiscnctClsd_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CnvSnpshtData_f32_Oper(uint32 *SnpshtDataCnvd_Arg, float32 SnpshtData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PwrDiscnctPer1 PwrDiscnctPer1
FUNC(void, PwrDiscnct_CODE) PwrDiscnctPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define PwrDiscnct_STOP_SEC_CODE
# include "PwrDiscnct_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_PWRDISCNCT_H */

#include "Rte_Stubs.h"
