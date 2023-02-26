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
 *          File:  Rte_BattVltgCorrln.h
 *        Config:  C:/_Synergy_Projects/Working/ES259B_BattVltgCorrln_Impl/tools/Component.dpa
 *     SW-C Type:  BattVltgCorrln
 *  Generated at:  Wed Oct 25 08:02:48 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <BattVltgCorrln> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BATTVLTGCORRLN_H
# define _RTE_BATTVLTGCORRLN_H

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

# include "Rte_BattVltgCorrln_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_BattVltgCorrln
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dBattVltgCorrlnBattVltgAndSwd1Ok; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dBattVltgCorrlnBattVltgRngOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dBattVltgCorrlnBattVltgSwd1RngOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(SigQlfr1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dBattVltgCorrlnNtc0x03CQlfrSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(SigQlfr1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dBattVltgCorrlnNtc0x044QlfrSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_BattVltgCorrln, RTE_CONST, RTE_CONST) Rte_Inst_BattVltgCorrln; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_BattVltgCorrln, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_BattSwdVltgCorrlnSts_Val (2U)
# define Rte_InitValue_BattVltg_Val (0.0F)
# define Rte_InitValue_BattVltgAdcFaild_Logl (FALSE)
# define Rte_InitValue_BattVltgCorrlnIdptSig_Val (2U)
# define Rte_InitValue_BattVltgSwd1_Val (0.0F)
# define Rte_InitValue_BattVltgSwd1AdcFaild_Logl (FALSE)
# define Rte_InitValue_DftBrdgVltgActv_Logl (FALSE)
# define Rte_InitValue_DiagcStsIvtr1Inactv_Logl (FALSE)
# define Rte_InitValue_InhbBattVltgDiagc_Logl (FALSE)
# define Rte_InitValue_StrtUpSt_Val (0U)
# define Rte_InitValue_SwdVltgLimd_Logl (FALSE)
# define Rte_InitValue_SysSt_Val (3U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BattVltgCorrln_BattVltg_Val(P2VAR(float32, AUTOMATIC, RTE_BATTVLTGCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BattVltgCorrln_BattVltgAdcFaild_Logl(P2VAR(boolean, AUTOMATIC, RTE_BATTVLTGCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BattVltgCorrln_BattVltgSwd1_Val(P2VAR(float32, AUTOMATIC, RTE_BATTVLTGCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BattVltgCorrln_BattVltgSwd1AdcFaild_Logl(P2VAR(boolean, AUTOMATIC, RTE_BATTVLTGCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BattVltgCorrln_DiagcStsIvtr1Inactv_Logl(P2VAR(boolean, AUTOMATIC, RTE_BATTVLTGCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BattVltgCorrln_InhbBattVltgDiagc_Logl(P2VAR(boolean, AUTOMATIC, RTE_BATTVLTGCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BattVltgCorrln_StrtUpSt_Val(P2VAR(uint8, AUTOMATIC, RTE_BATTVLTGCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BattVltgCorrln_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_BATTVLTGCORRLN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_BattVltgCorrln_BattSwdVltgCorrlnSts_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_BattVltgCorrln_BattVltgCorrlnIdptSig_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_BattVltgCorrln_DftBrdgVltgActv_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_BattVltgCorrln_SwdVltgLimd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_BattVltgCorrln_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_BATTVLTGCORRLN_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_BattVltgCorrln_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnAllwdVltgDif_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnBattLoVltg_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnBattOverVltg_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnBattUnderVltg_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnRcvrlBattLoVltg_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnRcvrlBattOverVltg_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnRcvrlBattUnderVltg_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnSwdMax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnSysMinVltg_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnNtc0x03C0x044FailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnNtc0x03C0x044PassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnNtc0x0B0FailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnNtc0x0B0PassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnNtc0x0B1FailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnNtc0x0B1PassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnNtc0x0B5FailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_BattVltgCorrln_BattVltgCorrlnNtc0x0B5PassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_BattVltg_Val Rte_Read_BattVltgCorrln_BattVltg_Val
# define Rte_Read_BattVltgAdcFaild_Logl Rte_Read_BattVltgCorrln_BattVltgAdcFaild_Logl
# define Rte_Read_BattVltgSwd1_Val Rte_Read_BattVltgCorrln_BattVltgSwd1_Val
# define Rte_Read_BattVltgSwd1AdcFaild_Logl Rte_Read_BattVltgCorrln_BattVltgSwd1AdcFaild_Logl
# define Rte_Read_DiagcStsIvtr1Inactv_Logl Rte_Read_BattVltgCorrln_DiagcStsIvtr1Inactv_Logl
# define Rte_Read_InhbBattVltgDiagc_Logl Rte_Read_BattVltgCorrln_InhbBattVltgDiagc_Logl
# define Rte_Read_StrtUpSt_Val Rte_Read_BattVltgCorrln_StrtUpSt_Val
# define Rte_Read_SysSt_Val Rte_Read_BattVltgCorrln_SysSt_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_BattSwdVltgCorrlnSts_Val Rte_Write_BattVltgCorrln_BattSwdVltgCorrlnSts_Val
# define Rte_Write_BattVltgCorrlnIdptSig_Val Rte_Write_BattVltgCorrln_BattVltgCorrlnIdptSig_Val
# define Rte_Write_DftBrdgVltgActv_Logl Rte_Write_BattVltgCorrln_DftBrdgVltgActv_Logl
# define Rte_Write_SwdVltgLimd_Logl Rte_Write_BattVltgCorrln_SwdVltgLimd_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_BattVltgCorrln_GetNtcQlfrSts_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_BattVltgCorrln_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_BattVltgCorrlnAllwdVltgDif_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnAllwdVltgDif_Val

# define Rte_Prm_BattVltgCorrlnBattLoVltg_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnBattLoVltg_Val

# define Rte_Prm_BattVltgCorrlnBattOverVltg_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnBattOverVltg_Val

# define Rte_Prm_BattVltgCorrlnBattUnderVltg_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnBattUnderVltg_Val

# define Rte_Prm_BattVltgCorrlnRcvrlBattLoVltg_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnRcvrlBattLoVltg_Val

# define Rte_Prm_BattVltgCorrlnRcvrlBattOverVltg_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnRcvrlBattOverVltg_Val

# define Rte_Prm_BattVltgCorrlnRcvrlBattUnderVltg_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnRcvrlBattUnderVltg_Val

# define Rte_Prm_BattVltgCorrlnSwdMax_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnSwdMax_Val

# define Rte_Prm_BattVltgCorrlnSysMinVltg_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnSysMinVltg_Val

# define Rte_Prm_BattVltgCorrlnNtc0x03C0x044FailStep_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnNtc0x03C0x044FailStep_Val

# define Rte_Prm_BattVltgCorrlnNtc0x03C0x044PassStep_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnNtc0x03C0x044PassStep_Val

# define Rte_Prm_BattVltgCorrlnNtc0x0B0FailStep_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnNtc0x0B0FailStep_Val

# define Rte_Prm_BattVltgCorrlnNtc0x0B0PassStep_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnNtc0x0B0PassStep_Val

# define Rte_Prm_BattVltgCorrlnNtc0x0B1FailStep_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnNtc0x0B1FailStep_Val

# define Rte_Prm_BattVltgCorrlnNtc0x0B1PassStep_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnNtc0x0B1PassStep_Val

# define Rte_Prm_BattVltgCorrlnNtc0x0B5FailStep_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnNtc0x0B5FailStep_Val

# define Rte_Prm_BattVltgCorrlnNtc0x0B5PassStep_Val Rte_Prm_BattVltgCorrln_BattVltgCorrlnNtc0x0B5PassStep_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dBattVltgCorrlnBattVltgRngOk() (Rte_Inst_BattVltgCorrln->Pim_dBattVltgCorrlnBattVltgRngOk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dBattVltgCorrlnBattVltgSwd1RngOk() (Rte_Inst_BattVltgCorrln->Pim_dBattVltgCorrlnBattVltgSwd1RngOk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dBattVltgCorrlnNtc0x03CQlfrSts() (Rte_Inst_BattVltgCorrln->Pim_dBattVltgCorrlnNtc0x03CQlfrSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dBattVltgCorrlnNtc0x044QlfrSts() (Rte_Inst_BattVltgCorrln->Pim_dBattVltgCorrlnNtc0x044QlfrSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dBattVltgCorrlnBattVltgAndSwd1Ok() (Rte_Inst_BattVltgCorrln->Pim_dBattVltgCorrlnBattVltgAndSwd1Ok) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_dBattVltgCorrlnBattVltgRngOk(void)
 *   uint8 *Rte_Pim_dBattVltgCorrlnBattVltgSwd1RngOk(void)
 *   SigQlfr1 *Rte_Pim_dBattVltgCorrlnNtc0x03CQlfrSts(void)
 *   SigQlfr1 *Rte_Pim_dBattVltgCorrlnNtc0x044QlfrSts(void)
 *   boolean *Rte_Pim_dBattVltgCorrlnBattVltgAndSwd1Ok(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_BattVltgCorrlnAllwdVltgDif_Val(void)
 *   float32 Rte_Prm_BattVltgCorrlnBattLoVltg_Val(void)
 *   float32 Rte_Prm_BattVltgCorrlnBattOverVltg_Val(void)
 *   float32 Rte_Prm_BattVltgCorrlnBattUnderVltg_Val(void)
 *   float32 Rte_Prm_BattVltgCorrlnRcvrlBattLoVltg_Val(void)
 *   float32 Rte_Prm_BattVltgCorrlnRcvrlBattOverVltg_Val(void)
 *   float32 Rte_Prm_BattVltgCorrlnRcvrlBattUnderVltg_Val(void)
 *   float32 Rte_Prm_BattVltgCorrlnSwdMax_Val(void)
 *   float32 Rte_Prm_BattVltgCorrlnSysMinVltg_Val(void)
 *   uint16 Rte_Prm_BattVltgCorrlnNtc0x03C0x044FailStep_Val(void)
 *   uint16 Rte_Prm_BattVltgCorrlnNtc0x03C0x044PassStep_Val(void)
 *   uint16 Rte_Prm_BattVltgCorrlnNtc0x0B0FailStep_Val(void)
 *   uint16 Rte_Prm_BattVltgCorrlnNtc0x0B0PassStep_Val(void)
 *   uint16 Rte_Prm_BattVltgCorrlnNtc0x0B1FailStep_Val(void)
 *   uint16 Rte_Prm_BattVltgCorrlnNtc0x0B1PassStep_Val(void)
 *   uint16 Rte_Prm_BattVltgCorrlnNtc0x0B5FailStep_Val(void)
 *   uint16 Rte_Prm_BattVltgCorrlnNtc0x0B5PassStep_Val(void)
 *
 *********************************************************************************************************************/


# define BattVltgCorrln_START_SEC_CODE
# include "BattVltgCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: BattVltgCorrlnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_BattVltgCorrlnInit1 BattVltgCorrlnInit1
FUNC(void, BattVltgCorrln_CODE) BattVltgCorrlnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: BattVltgCorrlnPer1
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
 *   Std_ReturnType Rte_Read_BattVltgSwd1AdcFaild_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_InhbBattVltgDiagc_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_BattSwdVltgCorrlnSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_BattVltgCorrlnIdptSig_Val(uint8 data)
 *   Std_ReturnType Rte_Write_DftBrdgVltgActv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SwdVltgLimd_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_BattVltgCorrlnPer1 BattVltgCorrlnPer1
FUNC(void, BattVltgCorrln_CODE) BattVltgCorrlnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define BattVltgCorrln_STOP_SEC_CODE
# include "BattVltgCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_BATTVLTGCORRLN_H */

#include "Rte_Stubs.h"
