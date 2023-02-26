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
 *          File:  Rte_ImcArbn.h
 *        Config:  C:/Component/AR350A_ImcArbn_Impl/tools/Component.dpa
 *     SW-C Type:  ImcArbn
 *  Generated at:  Wed Jul  5 15:51:22 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <ImcArbn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_IMCARBN_H
# define _RTE_IMCARBN_H

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

# include "Rte_ImcArbn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_ImcArbn
{
  /* PIM Handles section */
  P2VAR(Ary2D_u8_2_2, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrmFltCntr100MilliSec; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary2D_u8_2_2, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrmFltCntr10MilliSec; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary2D_u8_2_2, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrmFltCntr2MilliSec; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ImcEcuComStrtTiRef; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_ImcArbnB, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevRollgCntrRxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_ImcArbnB, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrimSrcResyncCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_ImcArbnB, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrimSrcRollgCntrResync; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary2D_u8_ImcArbnA, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrimSrcRxBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_logl_ImcArbnA, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ResyncOnPrimActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_logl_ImcArbnA, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ResyncOnSecdryActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_3, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u32_ImcArbnA, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RxdSigData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_ImrArbnRxExtdSts2_ImcArbnA, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RxdSigDataExtdSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_ImcArbnRxDataSrc2_ImcArbnB, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RxdSigDataSrc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_ImcArbnB, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SecdrySrcResyncCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_ImcArbnB, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SecdrySrcRollgCntrResync; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary2D_u8_ImcArbnA, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SecdrySrcRxBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_ImcArbnRxDataSrc2_ImcArbnA, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SigGroupDataSrc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_ImcArbnB, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SigGroupMissCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_logl_ImcArbnA, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SigGroupNeverRxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_ImcArbnB, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SigGroupSkipCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary2D_u8_ImcArbnA, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TxBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_ImcArbn, RTE_CONST, RTE_CONST) Rte_Inst_ImcArbn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_ImcArbn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ImcTestSig1_Val (0.0F)
# define Rte_InitValue_ImcTestSig2_Val (0U)
# define Rte_InitValue_ImcTestSig3_Val (0)
# define Rte_InitValue_ImcTestSig4_Val (0U)
# define Rte_InitValue_ImcTestSig5_Val (0)
# define Rte_InitValue_ImcTestSig6_Val (0U)
# define Rte_InitValue_ImcTestSig7_Val (0)
# define Rte_InitValue_ImcTestSig8_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcArbn_ImcTestSig1_Val(P2VAR(float32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcArbn_ImcTestSig2_Val(P2VAR(uint32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcArbn_ImcTestSig3_Val(P2VAR(sint32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcArbn_ImcTestSig4_Val(P2VAR(uint16, AUTOMATIC, RTE_IMCARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcArbn_ImcTestSig5_Val(P2VAR(sint16, AUTOMATIC, RTE_IMCARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcArbn_ImcTestSig6_Val(P2VAR(uint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcArbn_ImcTestSig7_Val(P2VAR(sint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ImcArbn_ImcTestSig8_Logl(P2VAR(boolean, AUTOMATIC, RTE_IMCARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ImcArbn_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ImcArbn_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ImcArbn_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_ImcArbn_ImcArbnEcuIninTiOutThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_ImcArbn_ImcArbnFrmFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_ImcArbn_ImcArbnPer4_IniTiOutChkCmpl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_ImcArbn_ImcArbnPer5_IniTiOutChkCmpl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_ImcArbn_ImcArbnPer6_IniTiOutChkCmpl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_ImcArbn_ImcArbnPer6_IniTiOutChkCmpl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC(void, RTE_CODE) Rte_Enter_ImcArbn_ExclsvAr1DrvrTxRxBuf(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_Exit_ImcArbn_ExclsvAr1DrvrTxRxBuf(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC(void, RTE_CODE) Rte_Enter_ImcArbn_ExclsvAr2SigDataBuf(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_Exit_ImcArbn_ExclsvAr2SigDataBuf(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ImcTestSig1_Val Rte_Read_ImcArbn_ImcTestSig1_Val
# define Rte_Read_ImcTestSig2_Val Rte_Read_ImcArbn_ImcTestSig2_Val
# define Rte_Read_ImcTestSig3_Val Rte_Read_ImcArbn_ImcTestSig3_Val
# define Rte_Read_ImcTestSig4_Val Rte_Read_ImcArbn_ImcTestSig4_Val
# define Rte_Read_ImcTestSig5_Val Rte_Read_ImcArbn_ImcTestSig5_Val
# define Rte_Read_ImcTestSig6_Val Rte_Read_ImcArbn_ImcTestSig6_Val
# define Rte_Read_ImcTestSig7_Val Rte_Read_ImcArbn_ImcTestSig7_Val
# define Rte_Read_ImcTestSig8_Logl Rte_Read_ImcArbn_ImcTestSig8_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_ImcArbn_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_ImcArbn_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_ImcArbn_SetNtcSts_Oper


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

# define Rte_Enter_ExclsvAr1DrvrTxRxBuf Rte_Enter_ImcArbn_ExclsvAr1DrvrTxRxBuf /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
# define Rte_Exit_ExclsvAr1DrvrTxRxBuf Rte_Exit_ImcArbn_ExclsvAr1DrvrTxRxBuf /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */

# define Rte_Enter_ExclsvAr2SigDataBuf Rte_Enter_ImcArbn_ExclsvAr2SigDataBuf /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
# define Rte_Exit_ExclsvAr2SigDataBuf Rte_Exit_ImcArbn_ExclsvAr2SigDataBuf /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_ImcArbnPer4_IniTiOutChkCmpl() \
  Rte_IrvRead_ImcArbn_ImcArbnPer4_IniTiOutChkCmpl()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_ImcArbnPer5_IniTiOutChkCmpl() \
  Rte_IrvRead_ImcArbn_ImcArbnPer5_IniTiOutChkCmpl()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_ImcArbnPer6_IniTiOutChkCmpl() \
  Rte_IrvRead_ImcArbn_ImcArbnPer6_IniTiOutChkCmpl()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_ImcArbnPer6_IniTiOutChkCmpl(data) \
  Rte_IrvWrite_ImcArbn_ImcArbnPer6_IniTiOutChkCmpl(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_ImcArbnEcuIninTiOutThd_Val Rte_Prm_ImcArbn_ImcArbnEcuIninTiOutThd_Val

# define Rte_Prm_ImcArbnFrmFltThd_Val Rte_Prm_ImcArbn_ImcArbnFrmFltThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_ImcEcuComStrtTiRef() (Rte_Inst_ImcArbn->Pim_ImcEcuComStrtTiRef) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_FrmFltCntr100MilliSec() ((P2VAR(uint8, AUTOMATIC, RTE_VAR_NOINIT)) *Rte_Inst_ImcArbn->Pim_FrmFltCntr100MilliSec) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_FrmFltCntr100MilliSec() (Rte_Inst_ImcArbn->Pim_FrmFltCntr100MilliSec) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_FrmFltCntr10MilliSec() ((P2VAR(uint8, AUTOMATIC, RTE_VAR_NOINIT)) *Rte_Inst_ImcArbn->Pim_FrmFltCntr10MilliSec) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_FrmFltCntr10MilliSec() (Rte_Inst_ImcArbn->Pim_FrmFltCntr10MilliSec) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_FrmFltCntr2MilliSec() ((P2VAR(uint8, AUTOMATIC, RTE_VAR_NOINIT)) *Rte_Inst_ImcArbn->Pim_FrmFltCntr2MilliSec) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_FrmFltCntr2MilliSec() (Rte_Inst_ImcArbn->Pim_FrmFltCntr2MilliSec) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PrevRollgCntrRxd() (*Rte_Inst_ImcArbn->Pim_PrevRollgCntrRxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PrevRollgCntrRxd() (Rte_Inst_ImcArbn->Pim_PrevRollgCntrRxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PrimSrcResyncCntr() (*Rte_Inst_ImcArbn->Pim_PrimSrcResyncCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PrimSrcResyncCntr() (Rte_Inst_ImcArbn->Pim_PrimSrcResyncCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PrimSrcRollgCntrResync() (*Rte_Inst_ImcArbn->Pim_PrimSrcRollgCntrResync) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PrimSrcRollgCntrResync() (Rte_Inst_ImcArbn->Pim_PrimSrcRollgCntrResync) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PrimSrcRxBuf() ((P2VAR(uint8, AUTOMATIC, RTE_VAR_NOINIT)) *Rte_Inst_ImcArbn->Pim_PrimSrcRxBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PrimSrcRxBuf() (Rte_Inst_ImcArbn->Pim_PrimSrcRxBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_ResyncOnPrimActv() (*Rte_Inst_ImcArbn->Pim_ResyncOnPrimActv) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_ResyncOnPrimActv() (Rte_Inst_ImcArbn->Pim_ResyncOnPrimActv) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_ResyncOnSecdryActv() (*Rte_Inst_ImcArbn->Pim_ResyncOnSecdryActv) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_ResyncOnSecdryActv() (Rte_Inst_ImcArbn->Pim_ResyncOnSecdryActv) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_RollgCntr() (*Rte_Inst_ImcArbn->Pim_RollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_RollgCntr() (Rte_Inst_ImcArbn->Pim_RollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_RxdSigData() (*Rte_Inst_ImcArbn->Pim_RxdSigData) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_RxdSigData() (Rte_Inst_ImcArbn->Pim_RxdSigData) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_RxdSigDataExtdSts() (*Rte_Inst_ImcArbn->Pim_RxdSigDataExtdSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_RxdSigDataExtdSts() (Rte_Inst_ImcArbn->Pim_RxdSigDataExtdSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_RxdSigDataSrc() (*Rte_Inst_ImcArbn->Pim_RxdSigDataSrc) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_RxdSigDataSrc() (Rte_Inst_ImcArbn->Pim_RxdSigDataSrc) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_SecdrySrcResyncCntr() (*Rte_Inst_ImcArbn->Pim_SecdrySrcResyncCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_SecdrySrcResyncCntr() (Rte_Inst_ImcArbn->Pim_SecdrySrcResyncCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_SecdrySrcRollgCntrResync() (*Rte_Inst_ImcArbn->Pim_SecdrySrcRollgCntrResync) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_SecdrySrcRollgCntrResync() (Rte_Inst_ImcArbn->Pim_SecdrySrcRollgCntrResync) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_SecdrySrcRxBuf() ((P2VAR(uint8, AUTOMATIC, RTE_VAR_NOINIT)) *Rte_Inst_ImcArbn->Pim_SecdrySrcRxBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_SecdrySrcRxBuf() (Rte_Inst_ImcArbn->Pim_SecdrySrcRxBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_SigGroupDataSrc() (*Rte_Inst_ImcArbn->Pim_SigGroupDataSrc) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_SigGroupDataSrc() (Rte_Inst_ImcArbn->Pim_SigGroupDataSrc) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_SigGroupMissCntr() (*Rte_Inst_ImcArbn->Pim_SigGroupMissCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_SigGroupMissCntr() (Rte_Inst_ImcArbn->Pim_SigGroupMissCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_SigGroupNeverRxd() (*Rte_Inst_ImcArbn->Pim_SigGroupNeverRxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_SigGroupNeverRxd() (Rte_Inst_ImcArbn->Pim_SigGroupNeverRxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_SigGroupSkipCntr() (*Rte_Inst_ImcArbn->Pim_SigGroupSkipCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_SigGroupSkipCntr() (Rte_Inst_ImcArbn->Pim_SigGroupSkipCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_TxBuf() ((P2VAR(uint8, AUTOMATIC, RTE_VAR_NOINIT)) *Rte_Inst_ImcArbn->Pim_TxBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_TxBuf() (Rte_Inst_ImcArbn->Pim_TxBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_ImcEcuComStrtTiRef(void)
 *   uint8 *Rte_Pim_FrmFltCntr100MilliSec(void)
 *     Returnvalue: uint8* is of type Ary2D_u8_2_2
 *   uint8 *Rte_Pim_FrmFltCntr10MilliSec(void)
 *     Returnvalue: uint8* is of type Ary2D_u8_2_2
 *   uint8 *Rte_Pim_FrmFltCntr2MilliSec(void)
 *     Returnvalue: uint8* is of type Ary2D_u8_2_2
 *   uint8 *Rte_Pim_PrevRollgCntrRxd(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_ImcArbnB
 *   uint8 *Rte_Pim_PrimSrcResyncCntr(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_ImcArbnB
 *   uint8 *Rte_Pim_PrimSrcRollgCntrResync(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_ImcArbnB
 *   uint8 *Rte_Pim_PrimSrcRxBuf(void)
 *     Returnvalue: uint8* is of type Ary2D_u8_ImcArbnA
 *   boolean *Rte_Pim_ResyncOnPrimActv(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_ImcArbnA
 *   boolean *Rte_Pim_ResyncOnSecdryActv(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_ImcArbnA
 *   uint8 *Rte_Pim_RollgCntr(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_3
 *   uint32 *Rte_Pim_RxdSigData(void)
 *     Returnvalue: uint32* is of type Ary1D_u32_ImcArbnA
 *   ImcArbnRxExtdSts2 *Rte_Pim_RxdSigDataExtdSts(void)
 *     Returnvalue: ImcArbnRxExtdSts2* is of type Ary1D_ImrArbnRxExtdSts2_ImcArbnA
 *   ImcArbnRxDataSrc2 *Rte_Pim_RxdSigDataSrc(void)
 *     Returnvalue: ImcArbnRxDataSrc2* is of type Ary1D_ImcArbnRxDataSrc2_ImcArbnB
 *   uint8 *Rte_Pim_SecdrySrcResyncCntr(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_ImcArbnB
 *   uint8 *Rte_Pim_SecdrySrcRollgCntrResync(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_ImcArbnB
 *   uint8 *Rte_Pim_SecdrySrcRxBuf(void)
 *     Returnvalue: uint8* is of type Ary2D_u8_ImcArbnA
 *   ImcArbnRxDataSrc2 *Rte_Pim_SigGroupDataSrc(void)
 *     Returnvalue: ImcArbnRxDataSrc2* is of type Ary1D_ImcArbnRxDataSrc2_ImcArbnA
 *   uint8 *Rte_Pim_SigGroupMissCntr(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_ImcArbnB
 *   boolean *Rte_Pim_SigGroupNeverRxd(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_ImcArbnA
 *   uint8 *Rte_Pim_SigGroupSkipCntr(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_ImcArbnB
 *   uint8 *Rte_Pim_TxBuf(void)
 *     Returnvalue: uint8* is of type Ary2D_u8_ImcArbnA
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint32 Rte_Prm_ImcArbnEcuIninTiOutThd_Val(void)
 *   uint8 Rte_Prm_ImcArbnFrmFltThd_Val(void)
 *
 *********************************************************************************************************************/


# define ImcArbn_START_SEC_CODE
# include "ImcArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcDataExtdSts_f32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcDataExtdSts_f32>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcDataExtdSts_f32_Oper(uint16 SigId_Arg, float32 *Data_Arg, ImcArbnRxExtdSts1 *Sts_Arg, ImcArbnRxDataSrc1 *DataSrc_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcDataExtdSts_f32_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigImcDataExtdSts_f32_Oper GetSigImcDataExtdSts_f32_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcDataExtdSts_f32_Oper(uint16 SigId_Arg, P2VAR(float32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxExtdSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg, P2VAR(ImcArbnRxDataSrc1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataSrc_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcDataExtdSts_logl_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcDataExtdSts_logl>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcDataExtdSts_logl_Oper(uint16 SigId_Arg, boolean *Data_Arg, ImcArbnRxExtdSts1 *Sts_Arg, ImcArbnRxDataSrc1 *DataSrc_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcDataExtdSts_logl_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigImcDataExtdSts_logl_Oper GetSigImcDataExtdSts_logl_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcDataExtdSts_logl_Oper(uint16 SigId_Arg, P2VAR(boolean, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxExtdSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg, P2VAR(ImcArbnRxDataSrc1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataSrc_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcDataExtdSts_s08_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcDataExtdSts_s08>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcDataExtdSts_s08_Oper(uint16 SigId_Arg, sint8 *Data_Arg, ImcArbnRxExtdSts1 *Sts_Arg, ImcArbnRxDataSrc1 *DataSrc_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcDataExtdSts_s08_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigImcDataExtdSts_s08_Oper GetSigImcDataExtdSts_s08_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcDataExtdSts_s08_Oper(uint16 SigId_Arg, P2VAR(sint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxExtdSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg, P2VAR(ImcArbnRxDataSrc1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataSrc_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcDataExtdSts_s16_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcDataExtdSts_s16>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcDataExtdSts_s16_Oper(uint16 SigId_Arg, sint16 *Data_Arg, ImcArbnRxExtdSts1 *Sts_Arg, ImcArbnRxDataSrc1 *DataSrc_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcDataExtdSts_s16_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigImcDataExtdSts_s16_Oper GetSigImcDataExtdSts_s16_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcDataExtdSts_s16_Oper(uint16 SigId_Arg, P2VAR(sint16, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxExtdSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg, P2VAR(ImcArbnRxDataSrc1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataSrc_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcDataExtdSts_s32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcDataExtdSts_s32>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcDataExtdSts_s32_Oper(uint16 SigId_Arg, sint32 *Data_Arg, ImcArbnRxExtdSts1 *Sts_Arg, ImcArbnRxDataSrc1 *DataSrc_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcDataExtdSts_s32_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigImcDataExtdSts_s32_Oper GetSigImcDataExtdSts_s32_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcDataExtdSts_s32_Oper(uint16 SigId_Arg, P2VAR(sint32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxExtdSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg, P2VAR(ImcArbnRxDataSrc1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataSrc_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcDataExtdSts_u08_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcDataExtdSts_u08>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcDataExtdSts_u08_Oper(uint16 SigId_Arg, uint8 *Data_Arg, ImcArbnRxExtdSts1 *Sts_Arg, ImcArbnRxDataSrc1 *DataSrc_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcDataExtdSts_u08_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigImcDataExtdSts_u08_Oper GetSigImcDataExtdSts_u08_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcDataExtdSts_u08_Oper(uint16 SigId_Arg, P2VAR(uint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxExtdSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg, P2VAR(ImcArbnRxDataSrc1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataSrc_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcDataExtdSts_u16_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcDataExtdSts_u16>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcDataExtdSts_u16_Oper(uint16 SigId_Arg, uint16 *Data_Arg, ImcArbnRxExtdSts1 *Sts_Arg, ImcArbnRxDataSrc1 *DataSrc_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcDataExtdSts_u16_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigImcDataExtdSts_u16_Oper GetSigImcDataExtdSts_u16_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcDataExtdSts_u16_Oper(uint16 SigId_Arg, P2VAR(uint16, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxExtdSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg, P2VAR(ImcArbnRxDataSrc1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataSrc_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcDataExtdSts_u32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcDataExtdSts_u32>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcDataExtdSts_u32_Oper(uint16 SigId_Arg, uint32 *Data_Arg, ImcArbnRxExtdSts1 *Sts_Arg, ImcArbnRxDataSrc1 *DataSrc_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcDataExtdSts_u32_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigImcDataExtdSts_u32_Oper GetSigImcDataExtdSts_u32_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcDataExtdSts_u32_Oper(uint16 SigId_Arg, P2VAR(uint32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxExtdSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg, P2VAR(ImcArbnRxDataSrc1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) DataSrc_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcData_f32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcData_f32>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcData_f32_Oper(uint16 SigId_Arg, float32 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcData_f32_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigImcData_f32_Oper GetSigImcData_f32_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcData_f32_Oper(uint16 SigId_Arg, P2VAR(float32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcData_logl_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcData_logl>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcData_logl_Oper(uint16 SigId_Arg, boolean *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigImcData_logl_Oper GetSigImcData_logl_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcData_logl_Oper(uint16 SigId_Arg, P2VAR(boolean, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcData_s08_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcData_s08>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcData_s08_Oper(uint16 SigId_Arg, sint8 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcData_s08_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigImcData_s08_Oper GetSigImcData_s08_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcData_s08_Oper(uint16 SigId_Arg, P2VAR(sint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcData_s16_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcData_s16>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcData_s16_Oper(uint16 SigId_Arg, sint16 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcData_s16_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigImcData_s16_Oper GetSigImcData_s16_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcData_s16_Oper(uint16 SigId_Arg, P2VAR(sint16, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcData_s32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcData_s32>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcData_s32_Oper(uint16 SigId_Arg, sint32 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcData_s32_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigImcData_s32_Oper GetSigImcData_s32_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcData_s32_Oper(uint16 SigId_Arg, P2VAR(sint32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcData_u08_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcData_u08>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcData_u08_Oper(uint16 SigId_Arg, uint8 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcData_u08_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigImcData_u08_Oper GetSigImcData_u08_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcData_u08_Oper(uint16 SigId_Arg, P2VAR(uint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcData_u16_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcData_u16>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcData_u16_Oper(uint16 SigId_Arg, uint16 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcData_u16_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigImcData_u16_Oper GetSigImcData_u16_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcData_u16_Oper(uint16 SigId_Arg, P2VAR(uint16, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSigImcData_u32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSigImcData_u32>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetSigImcData_u32_Oper(uint16 SigId_Arg, uint32 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetSigImcData_u32_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSigImcData_u32_Oper GetSigImcData_u32_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetSigImcData_u32_Oper(uint16 SigId_Arg, P2VAR(uint32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetTxRateGroup_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetTxRateGroup>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetTxRateGroup_Oper(uint8 RateGroup_Arg, uint8 *Buf_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetTxRateGroup_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetTxRateGroup_Oper GetTxRateGroup_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetTxRateGroup_Oper(uint8 RateGroup_Arg, P2VAR(uint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Buf_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetTxSigGroup_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetTxSigGroup>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetTxSigGroup_Oper(uint8 SigGroupId_Arg, uint8 *Buf_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetTxSigGroup_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetTxSigGroup_Oper GetTxSigGroup_Oper
FUNC(Std_ReturnType, ImcArbn_CODE) GetTxSigGroup_Oper(uint8 SigGroupId_Arg, P2VAR(uint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Buf_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcArbnInit1
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

# define RTE_RUNNABLE_ImcArbnInit1 ImcArbnInit1
FUNC(void, ImcArbn_CODE) ImcArbnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcArbnPer1
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
 *   Std_ReturnType Rte_Read_ImcTestSig1_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ImcTestSig4_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_ImcTestSig5_Val(sint16 *data)
 *   Std_ReturnType Rte_Read_ImcTestSig6_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_ImcTestSig7_Val(sint8 *data)
 *   Std_ReturnType Rte_Read_ImcTestSig8_Logl(boolean *data)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ImcArbnPer1 ImcArbnPer1
FUNC(void, ImcArbn_CODE) ImcArbnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcArbnPer2
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
 *   Std_ReturnType Rte_Read_ImcTestSig2_Val(uint32 *data)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ImcArbnPer2 ImcArbnPer2
FUNC(void, ImcArbn_CODE) ImcArbnPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcArbnPer3
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
 *   Std_ReturnType Rte_Read_ImcTestSig3_Val(sint32 *data)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ImcArbnPer3 ImcArbnPer3
FUNC(void, ImcArbn_CODE) ImcArbnPer3(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcArbnPer4
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_ImcArbnPer4_IniTiOutChkCmpl(void)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ImcArbnPer4 ImcArbnPer4
FUNC(void, ImcArbn_CODE) ImcArbnPer4(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcArbnPer5
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_ImcArbnPer5_IniTiOutChkCmpl(void)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ImcArbnPer5 ImcArbnPer5
FUNC(void, ImcArbn_CODE) ImcArbnPer5(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcArbnPer6
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_ImcArbnPer6_IniTiOutChkCmpl(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_ImcArbnPer6_IniTiOutChkCmpl(boolean data)
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
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Enter_ExclsvAr2SigDataBuf(void)
 *   void Rte_Exit_ExclsvAr2SigDataBuf(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ImcArbnPer6 ImcArbnPer6
FUNC(void, ImcArbn_CODE) ImcArbnPer6(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetRxSigGroup_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetRxSigGroup>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1DrvrTxRxBuf(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SetRxSigGroup_Oper(uint8 SigGroup_Arg, ImcArbnRxDataSrc1 DataSrc_Arg, const uint8 *Buf_Arg)
 *     Argument Buf_Arg: uint8* is of type Ary1D_u8_8
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SetRxSigGroup_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetRxSigGroup_Oper SetRxSigGroup_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, ImcArbn_CODE) SetRxSigGroup_Oper(uint8 SigGroup_Arg, ImcArbnRxDataSrc1 DataSrc_Arg, P2CONST(uint8, AUTOMATIC, RTE_IMCARBN_APPL_DATA) Buf_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, ImcArbn_CODE) SetRxSigGroup_Oper(uint8 SigGroup_Arg, ImcArbnRxDataSrc1 DataSrc_Arg, P2CONST(Ary1D_u8_8, AUTOMATIC, RTE_IMCARBN_APPL_DATA) Buf_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define ImcArbn_STOP_SEC_CODE
# include "ImcArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetSigImcDataExtdSts_f32_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcDataExtdSts_logl_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcDataExtdSts_s08_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcDataExtdSts_s16_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcDataExtdSts_s32_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcDataExtdSts_u08_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcDataExtdSts_u16_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcDataExtdSts_u32_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcData_f32_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcData_s08_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcData_s16_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcData_s32_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcData_u08_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcData_u16_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetSigImcData_u32_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetTxRateGroup_PortIf1_E_NOT_OK (1U)

# define RTE_E_GetTxSigGroup_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetRxSigGroup_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_IMCARBN_H */

#include "Rte_Stubs.h"
