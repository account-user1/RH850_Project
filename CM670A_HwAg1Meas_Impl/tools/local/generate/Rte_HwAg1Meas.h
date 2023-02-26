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
 *          File:  Rte_HwAg1Meas.h
 *        Config:  C:/Users/nz3893/Documents/Synergy/EA4/Working/CM670A_HwAg1Meas_Impl/tools/Component.dpa
 *     SW-C Type:  HwAg1Meas
 *  Generated at:  Fri Aug 18 08:36:38 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwAg1Meas> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWAG1MEAS_H
# define _RTE_HWAG1MEAS_H

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

# include "Rte_HwAg1Meas_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_HwAg1Meas
{
  /* PIM Handles section */
  P2VAR(Boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1IfFltLtch; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1InitStepSeqNrCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1LtchClr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(HwAgOffsRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1PrevHwAg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1PrevRollCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1PrevStepSeqNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1RawDataAvlStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1Snsr0ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1Snsr0IdErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1Snsr0IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1Snsr0NoMsgErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1Snsr1ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1Snsr1IdErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1Snsr1IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1Snsr1NoMsgErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAg1SnsrTrigNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(SigQlfr1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAg1Qlfr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAg1Snsr0Raw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAg1Snsr0TestOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAg1Snsr1Raw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAg1Snsr1TestOk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAg1MeasSnsr0Abs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAg1MeasSnsr0CS; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAg1MeasSnsr0FRXD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAg1MeasSnsr0Rel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAg1MeasSnsr1Abs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAg1MeasSnsr1CS; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAg1MeasSnsr1FRXD; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAg1MeasSnsr1Rel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_HwAg1Meas, RTE_CONST, RTE_CONST) Rte_Inst_HwAg1Meas; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_HwAg1Meas, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwAg1_Val (0.0F)
# define Rte_InitValue_HwAg1Polarity_Val (1)
# define Rte_InitValue_HwAg1Qlfr_Val (0U)
# define Rte_InitValue_HwAg1RollgCntr_Val (0U)
# define Rte_InitValue_HwAg1SnsrTyp_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAg1Meas_HwAg1Polarity_Val(P2VAR(sint8, AUTOMATIC, RTE_HWAG1MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAg1Meas_HwAg1SnsrTyp_Val(P2VAR(HwAgSnsrTyp1, AUTOMATIC, RTE_HWAG1MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAg1Meas_HwAg1_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAg1Meas_HwAg1Qlfr_Val(SigQlfr1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAg1Meas_HwAg1RollgCntr_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_HWAG1MEAS_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_GetRefTmr1MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_HWAG1MEAS_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_HWAG1MEAS_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_HwAg1IfFltLtch_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_HWAG1MEAS_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_HwAg1IfFltLtch_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_HwAg1Offs_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_HWAG1MEAS_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_HwAg1Offs_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_IoHwAb_SetFctPrphlHwAg1_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwAg1Meas_HwAg1MeasHwAg1IfFltFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwAg1Meas_HwAg1MeasHwAg1IfFltPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwAg1Meas_HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwAg1Meas_HwAg1MeasHwAg1Snsr0PrtclFltPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwAg1Meas_HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwAg1Meas_HwAg1MeasHwAg1Snsr1PrtclFltPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_HwAg1Meas_HwAg1MeasVrnrErrThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAg1Meas_HwAg1MeasSnsr0Rev_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u08_22, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAg1Meas_HwAg1MeasSnsr0Rev_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAg1Meas_HwAg1MeasSnsr1Rev_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u08_22, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAg1Meas_HwAg1MeasSnsr1Rev_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(sint16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAg1Meas_HwAg1MeasStep_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s16_22, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HwAg1Meas_HwAg1MeasStep_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, RTE_CODE) Rte_IrvWrite_HwAg1Meas_HwAg1MeasPer2_HwAg1Snsr0Raw(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_HwAg1Meas_HwAg1MeasPer2_HwAg1Snsr0TestOk(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_HwAg1Meas_HwAg1MeasPer3_HwAg1Snsr1Raw(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_HwAg1Meas_HwAg1MeasPer3_HwAg1Snsr1TestOk(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_IrvRead_HwAg1Meas_HwAg1MeasPer4_HwAg1Snsr0Raw(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_HwAg1Meas_HwAg1MeasPer4_HwAg1Snsr0TestOk(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_IrvRead_HwAg1Meas_HwAg1MeasPer4_HwAg1Snsr1Raw(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_HwAg1Meas_HwAg1MeasPer4_HwAg1Snsr1TestOk(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwAg1Polarity_Val Rte_Read_HwAg1Meas_HwAg1Polarity_Val
# define Rte_Read_HwAg1SnsrTyp_Val Rte_Read_HwAg1Meas_HwAg1SnsrTyp_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwAg1_Val Rte_Write_HwAg1Meas_HwAg1_Val
# define Rte_Write_HwAg1Qlfr_Val Rte_Write_HwAg1Meas_HwAg1Qlfr_Val
# define Rte_Write_HwAg1RollgCntr_Val Rte_Write_HwAg1Meas_HwAg1RollgCntr_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_HwAg1Meas_GetNtcQlfrSts_Oper
# define Rte_Call_GetRefTmr1MicroSec32bit_Oper Rte_Call_HwAg1Meas_GetRefTmr1MicroSec32bit_Oper
# define Rte_Call_GetTiSpan1MicroSec32bit_Oper Rte_Call_HwAg1Meas_GetTiSpan1MicroSec32bit_Oper
# define Rte_Call_HwAg1IfFltLtch_GetErrorStatus Rte_Call_HwAg1Meas_HwAg1IfFltLtch_GetErrorStatus
# define Rte_Call_HwAg1IfFltLtch_SetRamBlockStatus Rte_Call_HwAg1Meas_HwAg1IfFltLtch_SetRamBlockStatus
# define Rte_Call_HwAg1Offs_GetErrorStatus Rte_Call_HwAg1Meas_HwAg1Offs_GetErrorStatus
# define Rte_Call_HwAg1Offs_SetRamBlockStatus Rte_Call_HwAg1Meas_HwAg1Offs_SetRamBlockStatus
# define Rte_Call_IoHwAb_SetFctPrphlHwAg1_Oper Rte_Call_HwAg1Meas_IoHwAb_SetFctPrphlHwAg1_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_HwAg1Meas_SetNtcSts_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0Raw(data) \
  Rte_IrvWrite_HwAg1Meas_HwAg1MeasPer2_HwAg1Snsr0Raw(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0TestOk(data) \
  Rte_IrvWrite_HwAg1Meas_HwAg1MeasPer2_HwAg1Snsr0TestOk(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1Raw(data) \
  Rte_IrvWrite_HwAg1Meas_HwAg1MeasPer3_HwAg1Snsr1Raw(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1TestOk(data) \
  Rte_IrvWrite_HwAg1Meas_HwAg1MeasPer3_HwAg1Snsr1TestOk(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0Raw() \
  Rte_IrvRead_HwAg1Meas_HwAg1MeasPer4_HwAg1Snsr0Raw()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0TestOk() \
  Rte_IrvRead_HwAg1Meas_HwAg1MeasPer4_HwAg1Snsr0TestOk()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1Raw() \
  Rte_IrvRead_HwAg1Meas_HwAg1MeasPer4_HwAg1Snsr1Raw()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1TestOk() \
  Rte_IrvRead_HwAg1Meas_HwAg1MeasPer4_HwAg1Snsr1TestOk()
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HwAg1MeasHwAg1IfFltFailStep_Val Rte_Prm_HwAg1Meas_HwAg1MeasHwAg1IfFltFailStep_Val

# define Rte_Prm_HwAg1MeasHwAg1IfFltPassStep_Val Rte_Prm_HwAg1Meas_HwAg1MeasHwAg1IfFltPassStep_Val

# define Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val Rte_Prm_HwAg1Meas_HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val

# define Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltPassStep_Val Rte_Prm_HwAg1Meas_HwAg1MeasHwAg1Snsr0PrtclFltPassStep_Val

# define Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val Rte_Prm_HwAg1Meas_HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val

# define Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltPassStep_Val Rte_Prm_HwAg1Meas_HwAg1MeasHwAg1Snsr1PrtclFltPassStep_Val

# define Rte_Prm_HwAg1MeasVrnrErrThd_Val Rte_Prm_HwAg1Meas_HwAg1MeasVrnrErrThd_Val

# define Rte_Prm_HwAg1MeasSnsr0Rev_Ary1D Rte_Prm_HwAg1Meas_HwAg1MeasSnsr0Rev_Ary1D

# define Rte_Prm_HwAg1MeasSnsr1Rev_Ary1D Rte_Prm_HwAg1Meas_HwAg1MeasSnsr1Rev_Ary1D

# define Rte_Prm_HwAg1MeasStep_Ary1D Rte_Prm_HwAg1Meas_HwAg1MeasStep_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwAg1PrevHwAg1() (Rte_Inst_HwAg1Meas->Pim_HwAg1PrevHwAg1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwAg1() (Rte_Inst_HwAg1Meas->Pim_PrevHwAg1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAg1MeasSnsr0Abs() (Rte_Inst_HwAg1Meas->Pim_dHwAg1MeasSnsr0Abs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAg1MeasSnsr0Rel() (Rte_Inst_HwAg1Meas->Pim_dHwAg1MeasSnsr0Rel) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAg1MeasSnsr1Abs() (Rte_Inst_HwAg1Meas->Pim_dHwAg1MeasSnsr1Abs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAg1MeasSnsr1Rel() (Rte_Inst_HwAg1Meas->Pim_dHwAg1MeasSnsr1Rel) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg1RawDataAvlStrtTi() (Rte_Inst_HwAg1Meas->Pim_HwAg1RawDataAvlStrtTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAg1MeasSnsr0CS() (Rte_Inst_HwAg1Meas->Pim_dHwAg1MeasSnsr0CS) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAg1MeasSnsr0FRXD() (Rte_Inst_HwAg1Meas->Pim_dHwAg1MeasSnsr0FRXD) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAg1MeasSnsr1CS() (Rte_Inst_HwAg1Meas->Pim_dHwAg1MeasSnsr1CS) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAg1MeasSnsr1FRXD() (Rte_Inst_HwAg1Meas->Pim_dHwAg1MeasSnsr1FRXD) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwAg1Snsr0Raw() (Rte_Inst_HwAg1Meas->Pim_PrevHwAg1Snsr0Raw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwAg1Snsr1Raw() (Rte_Inst_HwAg1Meas->Pim_PrevHwAg1Snsr1Raw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg1PrevRollCnt() (Rte_Inst_HwAg1Meas->Pim_HwAg1PrevRollCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg1PrevStepSeqNr() (Rte_Inst_HwAg1Meas->Pim_HwAg1PrevStepSeqNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg1Snsr0ComStsErrCntr() (Rte_Inst_HwAg1Meas->Pim_HwAg1Snsr0ComStsErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg1Snsr0IdErrCntr() (Rte_Inst_HwAg1Meas->Pim_HwAg1Snsr0IdErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg1Snsr0IntSnsrErrCntr() (Rte_Inst_HwAg1Meas->Pim_HwAg1Snsr0IntSnsrErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg1Snsr0NoMsgErrCntr() (Rte_Inst_HwAg1Meas->Pim_HwAg1Snsr0NoMsgErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg1Snsr1ComStsErrCntr() (Rte_Inst_HwAg1Meas->Pim_HwAg1Snsr1ComStsErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg1Snsr1IdErrCntr() (Rte_Inst_HwAg1Meas->Pim_HwAg1Snsr1IdErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg1Snsr1IntSnsrErrCntr() (Rte_Inst_HwAg1Meas->Pim_HwAg1Snsr1IntSnsrErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg1Snsr1NoMsgErrCntr() (Rte_Inst_HwAg1Meas->Pim_HwAg1Snsr1NoMsgErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg1SnsrTrigNr() (Rte_Inst_HwAg1Meas->Pim_HwAg1SnsrTrigNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwAg1Qlfr() (Rte_Inst_HwAg1Meas->Pim_PrevHwAg1Qlfr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwAg1Snsr0TestOk() (Rte_Inst_HwAg1Meas->Pim_PrevHwAg1Snsr0TestOk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwAg1Snsr1TestOk() (Rte_Inst_HwAg1Meas->Pim_PrevHwAg1Snsr1TestOk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg1IfFltLtch() (Rte_Inst_HwAg1Meas->Pim_HwAg1IfFltLtch) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg1InitStepSeqNrCmpl() (Rte_Inst_HwAg1Meas->Pim_HwAg1InitStepSeqNrCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg1LtchClr() (Rte_Inst_HwAg1Meas->Pim_HwAg1LtchClr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAg1Offs() (Rte_Inst_HwAg1Meas->Pim_HwAg1Offs) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwAg1PrevHwAg1(void)
 *   float32 *Rte_Pim_PrevHwAg1(void)
 *   float32 *Rte_Pim_dHwAg1MeasSnsr0Abs(void)
 *   float32 *Rte_Pim_dHwAg1MeasSnsr0Rel(void)
 *   float32 *Rte_Pim_dHwAg1MeasSnsr1Abs(void)
 *   float32 *Rte_Pim_dHwAg1MeasSnsr1Rel(void)
 *   uint32 *Rte_Pim_HwAg1RawDataAvlStrtTi(void)
 *   uint32 *Rte_Pim_dHwAg1MeasSnsr0CS(void)
 *   uint32 *Rte_Pim_dHwAg1MeasSnsr0FRXD(void)
 *   uint32 *Rte_Pim_dHwAg1MeasSnsr1CS(void)
 *   uint32 *Rte_Pim_dHwAg1MeasSnsr1FRXD(void)
 *   uint16 *Rte_Pim_PrevHwAg1Snsr0Raw(void)
 *   uint16 *Rte_Pim_PrevHwAg1Snsr1Raw(void)
 *   uint8 *Rte_Pim_HwAg1PrevRollCnt(void)
 *   uint8 *Rte_Pim_HwAg1PrevStepSeqNr(void)
 *   uint8 *Rte_Pim_HwAg1Snsr0ComStsErrCntr(void)
 *   uint8 *Rte_Pim_HwAg1Snsr0IdErrCntr(void)
 *   uint8 *Rte_Pim_HwAg1Snsr0IntSnsrErrCntr(void)
 *   uint8 *Rte_Pim_HwAg1Snsr0NoMsgErrCntr(void)
 *   uint8 *Rte_Pim_HwAg1Snsr1ComStsErrCntr(void)
 *   uint8 *Rte_Pim_HwAg1Snsr1IdErrCntr(void)
 *   uint8 *Rte_Pim_HwAg1Snsr1IntSnsrErrCntr(void)
 *   uint8 *Rte_Pim_HwAg1Snsr1NoMsgErrCntr(void)
 *   uint8 *Rte_Pim_HwAg1SnsrTrigNr(void)
 *   SigQlfr1 *Rte_Pim_PrevHwAg1Qlfr(void)
 *   uint8 *Rte_Pim_PrevHwAg1Snsr0TestOk(void)
 *   uint8 *Rte_Pim_PrevHwAg1Snsr1TestOk(void)
 *   Boolean *Rte_Pim_HwAg1IfFltLtch(void)
 *   boolean *Rte_Pim_HwAg1InitStepSeqNrCmpl(void)
 *   boolean *Rte_Pim_HwAg1LtchClr(void)
 *   HwAgOffsRec1 *Rte_Pim_HwAg1Offs(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_HwAg1MeasHwAg1IfFltFailStep_Val(void)
 *   uint16 Rte_Prm_HwAg1MeasHwAg1IfFltPassStep_Val(void)
 *   uint16 Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val(void)
 *   uint16 Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltPassStep_Val(void)
 *   uint16 Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val(void)
 *   uint16 Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltPassStep_Val(void)
 *   uint8 Rte_Prm_HwAg1MeasVrnrErrThd_Val(void)
 *   uint8 *Rte_Prm_HwAg1MeasSnsr0Rev_Ary1D(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_22
 *   uint8 *Rte_Prm_HwAg1MeasSnsr1Rev_Ary1D(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_22
 *   sint16 *Rte_Prm_HwAg1MeasStep_Ary1D(void)
 *     Returnvalue: sint16* is of type Ary1D_s16_22
 *
 *********************************************************************************************************************/


# define HwAg1Meas_START_SEC_CODE
# include "HwAg1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1AutTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg1AutTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAg1Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg1AutTrim_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg1AutTrim_Oper HwAg1AutTrim_Oper
FUNC(void, HwAg1Meas_CODE) HwAg1AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1ClrLtch_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg1ClrLtch>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAg1IfFltLtch_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg1ClrLtch_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg1ClrLtch_Oper HwAg1ClrLtch_Oper
FUNC(void, HwAg1Meas_CODE) HwAg1ClrLtch_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1ClrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg1ClrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAg1Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg1ClrTrim_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg1ClrTrim_Oper HwAg1ClrTrim_Oper
FUNC(void, HwAg1Meas_CODE) HwAg1ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1MeasInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwAg1SnsrTyp_Val(HwAgSnsrTyp1 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPrphlHwAg1_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAg1IfFltLtch_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_HwAg1IfFltLtch_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_HwAg1Offs_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_HwAg1Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg1MeasInit1 HwAg1MeasInit1
FUNC(void, HwAg1Meas_CODE) HwAg1MeasInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1MeasPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg1MeasPer1 HwAg1MeasPer1
FUNC(void, HwAg1Meas_CODE) HwAg1MeasPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1MeasPer2
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
 *   Std_ReturnType Rte_Read_HwAg1SnsrTyp_Val(HwAgSnsrTyp1 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0Raw(uint16 data)
 *   void Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0TestOk(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg1MeasPer2 HwAg1MeasPer2
FUNC(void, HwAg1Meas_CODE) HwAg1MeasPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1MeasPer3
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
 *   Std_ReturnType Rte_Read_HwAg1SnsrTyp_Val(HwAgSnsrTyp1 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1Raw(uint16 data)
 *   void Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1TestOk(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg1MeasPer3 HwAg1MeasPer3
FUNC(void, HwAg1Meas_CODE) HwAg1MeasPer3(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1MeasPer4
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
 *   Std_ReturnType Rte_Read_HwAg1Polarity_Val(sint8 *data)
 *   Std_ReturnType Rte_Read_HwAg1SnsrTyp_Val(HwAgSnsrTyp1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAg1_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAg1Qlfr_Val(SigQlfr1 data)
 *   Std_ReturnType Rte_Write_HwAg1RollgCntr_Val(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint16 Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0Raw(void)
 *   uint8 Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0TestOk(void)
 *   uint16 Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1Raw(void)
 *   uint8 Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1TestOk(void)
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

# define RTE_RUNNABLE_HwAg1MeasPer4 HwAg1MeasPer4
FUNC(void, HwAg1Meas_CODE) HwAg1MeasPer4(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1MeasPer5
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg1MeasPer5 HwAg1MeasPer5
FUNC(void, HwAg1Meas_CODE) HwAg1MeasPer5(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1ReadTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg1ReadTrim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg1ReadTrim_Oper(float32 *HwAgReadTrimData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg1ReadTrim_Oper HwAg1ReadTrim_Oper
FUNC(void, HwAg1Meas_CODE) HwAg1ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_HWAG1MEAS_APPL_VAR) HwAgReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1TrimPrfmdSts_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg1TrimPrfmdSts>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg1TrimPrfmdSts_Oper(boolean *HwAgOffsTrimPrfmdStsData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg1TrimPrfmdSts_Oper HwAg1TrimPrfmdSts_Oper
FUNC(void, HwAg1Meas_CODE) HwAg1TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_HWAG1MEAS_APPL_VAR) HwAgOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1WrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg1WrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAg1Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg1WrTrim_Oper(float32 HwAgWrOffsTrimData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAg1WrTrim_Oper HwAg1WrTrim_Oper
FUNC(void, HwAg1Meas_CODE) HwAg1WrTrim_Oper(float32 HwAgWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HwAg1Meas_STOP_SEC_CODE
# include "HwAg1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# define RTE_E_SetFctPeriph_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_HWAG1MEAS_H */

#include "Rte_Stubs.h"
