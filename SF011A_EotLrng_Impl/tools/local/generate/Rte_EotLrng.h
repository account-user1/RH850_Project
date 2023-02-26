/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_EotLrng.h
 *     SW-C Type:  EotLrng
 *  Generated at:  Mon Feb 27 13:15:01 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <EotLrng> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_EOTLRNG_H
# define _RTE_EOTLRNG_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_EotLrng_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_EotLrng
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CcwEotRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CwEotRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(EotNvmDataRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EotNvmData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgOverTrvlCntrNegDi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgOverTrvlCntrPosDi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(MaxHwAgCwAndCcwRec2, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MaxHwAgCwAndCcw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevCcwEot; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevCwEot; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RstLimReq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_EotLrng, RTE_CONST, RTE_CONST) Rte_Inst_EotLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_EotLrng, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAgAuthy_Val (0.0F)
# define Rte_InitValue_HwAgCcwDetd_Logl (FALSE)
# define Rte_InitValue_HwAgCwDetd_Logl (FALSE)
# define Rte_InitValue_HwAgDiDiagSts_Logl (FALSE)
# define Rte_InitValue_HwAgEotCcw_Val (-360.0F)
# define Rte_InitValue_HwAgEotCw_Val (360.0F)
# define Rte_InitValue_HwAgEotSig0Avl_Logl (FALSE)
# define Rte_InitValue_HwAgEotSig0Ccw_Val (0.0F)
# define Rte_InitValue_HwAgEotSig0Cw_Val (0.0F)
# define Rte_InitValue_HwAgEotSig1Avl_Logl (FALSE)
# define Rte_InitValue_HwAgEotSig1Ccw_Val (0.0F)
# define Rte_InitValue_HwAgEotSig1Cw_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_MotVelCrf_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotLrng_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotLrng_HwAgAuthy_Val(P2VAR(float32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotLrng_HwAgDiDiagSts_Logl(P2VAR(boolean, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotLrng_HwAgEotSig0Avl_Logl(P2VAR(boolean, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotLrng_HwAgEotSig0Ccw_Val(P2VAR(float32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotLrng_HwAgEotSig0Cw_Val(P2VAR(float32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotLrng_HwAgEotSig1Avl_Logl(P2VAR(boolean, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotLrng_HwAgEotSig1Ccw_Val(P2VAR(float32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotLrng_HwAgEotSig1Cw_Val(P2VAR(float32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotLrng_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotLrng_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_EotLrng_HwAgCcwDetd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_EotLrng_HwAgCwDetd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_EotLrng_HwAgEotCcw_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_EotLrng_HwAgEotCw_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotLrng_EotNvmData_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotLrng_EotNvmData_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotLrng_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotLrng_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotLrng_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotLrng_MaxHwAgCwAndCcw_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotLrng_MaxHwAgCwAndCcw_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotLrng_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotLrng_EotLrngAuthyStrtLrn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotLrng_EotLrngEntrAndExitHysRngLimr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotLrng_EotLrngHwTqEotLrn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotLrng_EotLrngMotVelEotLrn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotLrng_EotLrngRackTrvlMax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotLrng_EotLrngRackTrvlMin_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotLrng_EotLrngRstAuthyMin_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotLrng_EotProtnRackTrvlLimrRngLimd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_EotLrng_EotLrngEotLrnTmr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_EotLrng_EotLrngHwAgOverTrvlCntThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_EotLrng_EotProtnRackTrvlLimrEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC_P2CONST(EotNvmDataRec1, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_EotLrng_EotNvmDataDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwAg_Val Rte_Read_EotLrng_HwAg_Val
# define Rte_Read_HwAgAuthy_Val Rte_Read_EotLrng_HwAgAuthy_Val
# define Rte_Read_HwAgDiDiagSts_Logl Rte_Read_EotLrng_HwAgDiDiagSts_Logl
# define Rte_Read_HwAgEotSig0Avl_Logl Rte_Read_EotLrng_HwAgEotSig0Avl_Logl
# define Rte_Read_HwAgEotSig0Ccw_Val Rte_Read_EotLrng_HwAgEotSig0Ccw_Val
# define Rte_Read_HwAgEotSig0Cw_Val Rte_Read_EotLrng_HwAgEotSig0Cw_Val
# define Rte_Read_HwAgEotSig1Avl_Logl Rte_Read_EotLrng_HwAgEotSig1Avl_Logl
# define Rte_Read_HwAgEotSig1Ccw_Val Rte_Read_EotLrng_HwAgEotSig1Ccw_Val
# define Rte_Read_HwAgEotSig1Cw_Val Rte_Read_EotLrng_HwAgEotSig1Cw_Val
# define Rte_Read_HwTq_Val Rte_Read_EotLrng_HwTq_Val
# define Rte_Read_MotVelCrf_Val Rte_Read_EotLrng_MotVelCrf_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwAgCcwDetd_Logl Rte_Write_EotLrng_HwAgCcwDetd_Logl
# define Rte_Write_HwAgCwDetd_Logl Rte_Write_EotLrng_HwAgCwDetd_Logl
# define Rte_Write_HwAgEotCcw_Val Rte_Write_EotLrng_HwAgEotCcw_Val
# define Rte_Write_HwAgEotCw_Val Rte_Write_EotLrng_HwAgEotCw_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_EotNvmData_GetErrorStatus Rte_Call_EotLrng_EotNvmData_GetErrorStatus
# define Rte_Call_EotNvmData_SetRamBlockStatus Rte_Call_EotLrng_EotNvmData_SetRamBlockStatus
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_EotLrng_GetNtcQlfrSts_Oper
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_EotLrng_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_EotLrng_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_MaxHwAgCwAndCcw_GetErrorStatus Rte_Call_EotLrng_MaxHwAgCwAndCcw_GetErrorStatus
# define Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus Rte_Call_EotLrng_MaxHwAgCwAndCcw_SetRamBlockStatus
# define Rte_Call_SetNtcSts_Oper Rte_Call_EotLrng_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_EotNvmDataDft Rte_CData_EotLrng_EotNvmDataDft

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_EotLrngAuthyStrtLrn_Val Rte_Prm_EotLrng_EotLrngAuthyStrtLrn_Val

# define Rte_Prm_EotLrngEntrAndExitHysRngLimr_Val Rte_Prm_EotLrng_EotLrngEntrAndExitHysRngLimr_Val

# define Rte_Prm_EotLrngHwTqEotLrn_Val Rte_Prm_EotLrng_EotLrngHwTqEotLrn_Val

# define Rte_Prm_EotLrngMotVelEotLrn_Val Rte_Prm_EotLrng_EotLrngMotVelEotLrn_Val

# define Rte_Prm_EotLrngRackTrvlMax_Val Rte_Prm_EotLrng_EotLrngRackTrvlMax_Val

# define Rte_Prm_EotLrngRackTrvlMin_Val Rte_Prm_EotLrng_EotLrngRackTrvlMin_Val

# define Rte_Prm_EotLrngRstAuthyMin_Val Rte_Prm_EotLrng_EotLrngRstAuthyMin_Val

# define Rte_Prm_EotProtnRackTrvlLimrRngLimd_Val Rte_Prm_EotLrng_EotProtnRackTrvlLimrRngLimd_Val

# define Rte_Prm_EotLrngEotLrnTmr_Val Rte_Prm_EotLrng_EotLrngEotLrnTmr_Val

# define Rte_Prm_EotLrngHwAgOverTrvlCntThd_Val Rte_Prm_EotLrng_EotLrngHwAgOverTrvlCntThd_Val

# define Rte_Prm_EotProtnRackTrvlLimrEna_Logl Rte_Prm_EotLrng_EotProtnRackTrvlLimrEna_Logl

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PrevCcwEot() (Rte_Inst_EotLrng->Pim_PrevCcwEot) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevCwEot() (Rte_Inst_EotLrng->Pim_PrevCwEot) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CcwEotRefTmr() (Rte_Inst_EotLrng->Pim_CcwEotRefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CwEotRefTmr() (Rte_Inst_EotLrng->Pim_CwEotRefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgOverTrvlCntrNegDi() (Rte_Inst_EotLrng->Pim_HwAgOverTrvlCntrNegDi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgOverTrvlCntrPosDi() (Rte_Inst_EotLrng->Pim_HwAgOverTrvlCntrPosDi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RstLimReq() (Rte_Inst_EotLrng->Pim_RstLimReq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_EotNvmData() (Rte_Inst_EotLrng->Pim_EotNvmData) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MaxHwAgCwAndCcw() (Rte_Inst_EotLrng->Pim_MaxHwAgCwAndCcw) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevCcwEot(void)
 *   float32 *Rte_Pim_PrevCwEot(void)
 *   uint32 *Rte_Pim_CcwEotRefTmr(void)
 *   uint32 *Rte_Pim_CwEotRefTmr(void)
 *   boolean *Rte_Pim_HwAgOverTrvlCntrNegDi(void)
 *   boolean *Rte_Pim_HwAgOverTrvlCntrPosDi(void)
 *   boolean *Rte_Pim_RstLimReq(void)
 *   EotNvmDataRec1 *Rte_Pim_EotNvmData(void)
 *   MaxHwAgCwAndCcwRec2 *Rte_Pim_MaxHwAgCwAndCcw(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   EotNvmDataRec1 *Rte_CData_EotNvmDataDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_EotLrngAuthyStrtLrn_Val(void)
 *   float32 Rte_Prm_EotLrngEntrAndExitHysRngLimr_Val(void)
 *   float32 Rte_Prm_EotLrngHwTqEotLrn_Val(void)
 *   float32 Rte_Prm_EotLrngMotVelEotLrn_Val(void)
 *   float32 Rte_Prm_EotLrngRackTrvlMax_Val(void)
 *   float32 Rte_Prm_EotLrngRackTrvlMin_Val(void)
 *   float32 Rte_Prm_EotLrngRstAuthyMin_Val(void)
 *   float32 Rte_Prm_EotProtnRackTrvlLimrRngLimd_Val(void)
 *   uint16 Rte_Prm_EotLrngEotLrnTmr_Val(void)
 *   uint8 Rte_Prm_EotLrngHwAgOverTrvlCntThd_Val(void)
 *   boolean Rte_Prm_EotProtnRackTrvlLimrEna_Logl(void)
 *
 *********************************************************************************************************************/


# define EotLrng_START_SEC_CODE
# include "EotLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: EotLrngInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgCcwDetd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwAgCwDetd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwAgEotCcw_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAgEotCw_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_EotNvmData_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_EotNvmData_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MaxHwAgCwAndCcw_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_EotLrngInit1 EotLrngInit1
FUNC(void, EotLrng_CODE) EotLrngInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: EotLrngPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAuthy_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgDiDiagSts_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgEotSig0Avl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgEotSig0Ccw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotSig0Cw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotSig1Avl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgEotSig1Ccw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotSig1Cw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgCcwDetd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwAgCwDetd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwAgEotCcw_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAgEotCw_Val(float32 data)
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
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_EotNvmData_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_EotNvmData_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_EotLrngPer1 EotLrngPer1
FUNC(void, EotLrng_CODE) EotLrngPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetHwAgOverTrvlCnt_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetHwAgOverTrvlCnt>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetHwAgOverTrvlCnt_Oper(uint8 *HwAgOverTrvlCnt_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetHwAgOverTrvlCnt_Oper GetHwAgOverTrvlCnt_Oper
FUNC(void, EotLrng_CODE) GetHwAgOverTrvlCnt_Oper(P2VAR(uint8, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) HwAgOverTrvlCnt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RstHwAgOverTrvlCnt_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <RstHwAgOverTrvlCnt>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RstHwAgOverTrvlCnt_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RstHwAgOverTrvlCnt_Oper RstHwAgOverTrvlCnt_Oper
FUNC(void, EotLrng_CODE) RstHwAgOverTrvlCnt_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RstMaxHwAgCwAndCcw_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <RstMaxHwAgCwAndCcw>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RstMaxHwAgCwAndCcw_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RstMaxHwAgCwAndCcw_Oper RstMaxHwAgCwAndCcw_Oper
FUNC(void, EotLrng_CODE) RstMaxHwAgCwAndCcw_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RtnMaxHwAgCwAndCcw_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <RtnMaxHwAgCwAndCcw>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RtnMaxHwAgCwAndCcw_Oper(float32 *HwAgCcwMax_Arg, float32 *HwAgCwMax_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RtnMaxHwAgCwAndCcw_Oper RtnMaxHwAgCwAndCcw_Oper
FUNC(void, EotLrng_CODE) RtnMaxHwAgCwAndCcw_Oper(P2VAR(float32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) HwAgCcwMax_Arg, P2VAR(float32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) HwAgCwMax_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SerlComRstEot_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SerlComRstEot>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SerlComRstEot_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SerlComRstEot_Oper SerlComRstEot_Oper
FUNC(void, EotLrng_CODE) SerlComRstEot_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetHwAgOverTrvlCnt_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetHwAgOverTrvlCnt>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetHwAgOverTrvlCnt_Oper(uint8 HwAgOverTrvlCnt_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetHwAgOverTrvlCnt_Oper SetHwAgOverTrvlCnt_Oper
FUNC(void, EotLrng_CODE) SetHwAgOverTrvlCnt_Oper(uint8 HwAgOverTrvlCnt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define EotLrng_STOP_SEC_CODE
# include "EotLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1488221052
#    error "The magic number of the generated file <C:/component/SF011A_EotLrng_Impl/tools/contract/Rte_EotLrng.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1488221052
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_EOTLRNG_H */

#include "Rte_Stubs.h"
