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
 *          File:  Rte_SysPrfmncSts.h
 *     SW-C Type:  SysPrfmncSts
 *  Generated at:  Fri Jan 20 12:33:33 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <SysPrfmncSts> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SYSPRFMNCSTS_H
# define _RTE_SYSPRFMNCSTS_H

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

# include "Rte_SysPrfmncSts_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_SysPrfmncSts
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BattVltgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_SysPrfmncSts, RTE_CONST, RTE_CONST) Rte_Inst_SysPrfmncSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_SysPrfmncSts, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_BattVltg_Val (5.0F)
# define Rte_InitValue_BattVltgSt_Val (0U)
# define Rte_InitValue_DutyCycThermProtnMaxOutp_Val (0U)
# define Rte_InitValue_EcuTFild_Val (0.0F)
# define Rte_InitValue_LoaSt_Val (0U)
# define Rte_InitValue_StallMotTqLim_Val (8.8F)
# define Rte_InitValue_SysPrfmncSt_Val (0U)
# define Rte_InitValue_SysSt_Val (3U)
# define Rte_InitValue_ThermDutyCycProtnLoadDptLim_Val (8.8F)
# define Rte_InitValue_ThermDutyCycProtnTDptLim_Val (8.8F)
# define Rte_InitValue_VehSpdVld_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysPrfmncSts_BattVltg_Val(P2VAR(float32, AUTOMATIC, RTE_SYSPRFMNCSTS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysPrfmncSts_DutyCycThermProtnMaxOutp_Val(P2VAR(uint16, AUTOMATIC, RTE_SYSPRFMNCSTS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysPrfmncSts_EcuTFild_Val(P2VAR(float32, AUTOMATIC, RTE_SYSPRFMNCSTS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysPrfmncSts_LoaSt_Val(P2VAR(LoaSt1, AUTOMATIC, RTE_SYSPRFMNCSTS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysPrfmncSts_StallMotTqLim_Val(P2VAR(float32, AUTOMATIC, RTE_SYSPRFMNCSTS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysPrfmncSts_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_SYSPRFMNCSTS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysPrfmncSts_ThermDutyCycProtnLoadDptLim_Val(P2VAR(float32, AUTOMATIC, RTE_SYSPRFMNCSTS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysPrfmncSts_ThermDutyCycProtnTDptLim_Val(P2VAR(float32, AUTOMATIC, RTE_SYSPRFMNCSTS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysPrfmncSts_VehSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_SYSPRFMNCSTS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SysPrfmncSts_BattVltgSt_Val(BattVltgSt1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SysPrfmncSts_SysPrfmncSt_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SysPrfmncSts_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_SYSPRFMNCSTS_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysPrfmncSts_SysPrfmncStsAbsltCtrlTFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysPrfmncSts_SysPrfmncStsAssiStallLimDecThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysPrfmncSts_SysPrfmncStsBattDiagcHiCrit_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysPrfmncSts_SysPrfmncStsBattDiagcHiWarn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysPrfmncSts_SysPrfmncStsBattDiagcLoCrit_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysPrfmncSts_SysPrfmncStsBattDiagcLoWarn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysPrfmncSts_SysPrfmncStsBattVltgFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysPrfmncSts_SysPrfmncStsLoadDptLimDecThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_SysPrfmncSts_SysPrfmncStsTDptLimThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_SysPrfmncSts_SysPrfmncStsDutyCycLvlFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_BattVltg_Val Rte_Read_SysPrfmncSts_BattVltg_Val
# define Rte_Read_DutyCycThermProtnMaxOutp_Val Rte_Read_SysPrfmncSts_DutyCycThermProtnMaxOutp_Val
# define Rte_Read_EcuTFild_Val Rte_Read_SysPrfmncSts_EcuTFild_Val
# define Rte_Read_LoaSt_Val Rte_Read_SysPrfmncSts_LoaSt_Val
# define Rte_Read_StallMotTqLim_Val Rte_Read_SysPrfmncSts_StallMotTqLim_Val
# define Rte_Read_SysSt_Val Rte_Read_SysPrfmncSts_SysSt_Val
# define Rte_Read_ThermDutyCycProtnLoadDptLim_Val Rte_Read_SysPrfmncSts_ThermDutyCycProtnLoadDptLim_Val
# define Rte_Read_ThermDutyCycProtnTDptLim_Val Rte_Read_SysPrfmncSts_ThermDutyCycProtnTDptLim_Val
# define Rte_Read_VehSpdVld_Logl Rte_Read_SysPrfmncSts_VehSpdVld_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_BattVltgSt_Val Rte_Write_SysPrfmncSts_BattVltgSt_Val
# define Rte_Write_SysPrfmncSt_Val Rte_Write_SysPrfmncSts_SysPrfmncSt_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_SysPrfmncSts_GetNtcQlfrSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_SysPrfmncStsAbsltCtrlTFltThd_Val Rte_Prm_SysPrfmncSts_SysPrfmncStsAbsltCtrlTFltThd_Val

# define Rte_Prm_SysPrfmncStsAssiStallLimDecThd_Val Rte_Prm_SysPrfmncSts_SysPrfmncStsAssiStallLimDecThd_Val

# define Rte_Prm_SysPrfmncStsBattDiagcHiCrit_Val Rte_Prm_SysPrfmncSts_SysPrfmncStsBattDiagcHiCrit_Val

# define Rte_Prm_SysPrfmncStsBattDiagcHiWarn_Val Rte_Prm_SysPrfmncSts_SysPrfmncStsBattDiagcHiWarn_Val

# define Rte_Prm_SysPrfmncStsBattDiagcLoCrit_Val Rte_Prm_SysPrfmncSts_SysPrfmncStsBattDiagcLoCrit_Val

# define Rte_Prm_SysPrfmncStsBattDiagcLoWarn_Val Rte_Prm_SysPrfmncSts_SysPrfmncStsBattDiagcLoWarn_Val

# define Rte_Prm_SysPrfmncStsBattVltgFilFrq_Val Rte_Prm_SysPrfmncSts_SysPrfmncStsBattVltgFilFrq_Val

# define Rte_Prm_SysPrfmncStsLoadDptLimDecThd_Val Rte_Prm_SysPrfmncSts_SysPrfmncStsLoadDptLimDecThd_Val

# define Rte_Prm_SysPrfmncStsTDptLimThd_Val Rte_Prm_SysPrfmncSts_SysPrfmncStsTDptLimThd_Val

# define Rte_Prm_SysPrfmncStsDutyCycLvlFltThd_Val Rte_Prm_SysPrfmncSts_SysPrfmncStsDutyCycLvlFltThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_BattVltgLpFil() (Rte_Inst_SysPrfmncSts->Pim_BattVltgLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   FilLpRec1 *Rte_Pim_BattVltgLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_SysPrfmncStsAbsltCtrlTFltThd_Val(void)
 *   float32 Rte_Prm_SysPrfmncStsAssiStallLimDecThd_Val(void)
 *   float32 Rte_Prm_SysPrfmncStsBattDiagcHiCrit_Val(void)
 *   float32 Rte_Prm_SysPrfmncStsBattDiagcHiWarn_Val(void)
 *   float32 Rte_Prm_SysPrfmncStsBattDiagcLoCrit_Val(void)
 *   float32 Rte_Prm_SysPrfmncStsBattDiagcLoWarn_Val(void)
 *   float32 Rte_Prm_SysPrfmncStsBattVltgFilFrq_Val(void)
 *   float32 Rte_Prm_SysPrfmncStsLoadDptLimDecThd_Val(void)
 *   float32 Rte_Prm_SysPrfmncStsTDptLimThd_Val(void)
 *   u16p0 Rte_Prm_SysPrfmncStsDutyCycLvlFltThd_Val(void)
 *
 *********************************************************************************************************************/


# define SysPrfmncSts_START_SEC_CODE
# include "SysPrfmncSts_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: SysPrfmncStsInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SysPrfmncStsInit1 SysPrfmncStsInit1
FUNC(void, SysPrfmncSts_CODE) SysPrfmncStsInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SysPrfmncStsPer1
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
 *   Std_ReturnType Rte_Read_DutyCycThermProtnMaxOutp_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LoaSt_Val(LoaSt1 *data)
 *   Std_ReturnType Rte_Read_StallMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_ThermDutyCycProtnLoadDptLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ThermDutyCycProtnTDptLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_BattVltgSt_Val(BattVltgSt1 data)
 *   Std_ReturnType Rte_Write_SysPrfmncSt_Val(uint16 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SysPrfmncStsPer1 SysPrfmncStsPer1
FUNC(void, SysPrfmncSts_CODE) SysPrfmncStsPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define SysPrfmncSts_STOP_SEC_CODE
# include "SysPrfmncSts_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1484938586
#    error "The magic number of the generated file <C:/Component/SF059A_SysPrfmncSts_Impl/tools/contract/Rte_SysPrfmncSts.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1484938586
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_SYSPRFMNCSTS_H */
