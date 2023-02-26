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
 *          File:  Rte_CDD_Uart1CfgAndUse.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_Uart1CfgAndUse>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_UART1CFGANDUSE_H
# define _RTE_CDD_UART1CFGANDUSE_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CDD_Uart1CfgAndUse_Type.h"
# include "Rte_DataHandleType.h"

# include "Rte_Hook.h"


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/


# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IMCARBN_APPL_CODE) GetTxRateGroup_Oper(uint8 RateGroup_Arg, P2VAR(uint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Buf_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTxRateGroup_Oper GetTxRateGroup_Oper
#  define RTE_START_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_IMCARBN_APPL_CODE) SetRxSigGroup_Oper(uint8 SigGroup_Arg, ImcArbnRxDataSrc1 DataSrc_Arg, P2CONST(uint8, AUTOMATIC, RTE_IMCARBN_APPL_DATA) Buf_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(Std_ReturnType, RTE_IMCARBN_APPL_CODE) SetRxSigGroup_Oper(uint8 SigGroup_Arg, ImcArbnRxDataSrc1 DataSrc_Arg, P2CONST(Ary1D_u08_8, AUTOMATIC, RTE_IMCARBN_APPL_DATA) Buf_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetRxSigGroup_Oper SetRxSigGroup_Oper


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

#  define Rte_Enter_ExclsvAr1Uart1DrvrTxRxBuf() SuspendOSInterrupts()  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */

#  define Rte_Exit_ExclsvAr1Uart1DrvrTxRxBuf() ResumeOSInterrupts()  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1DiagcFrmErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1DiagcOvrrunErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1DiagcParErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1DiagcRxMaxDataErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_PrevDmaTrfCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1100MilliSecReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart110MilliSecReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1NrOfPnd100MilliSecFrmCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1NrOfPnd10MilliSecFrmCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1RxPrevLoopDataUnread; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2048_Uart1CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1100MilliSecBufCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2048_Uart1CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart110MilliSecBufCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2048_Uart1CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart12MilliSecBufCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_Uart1DiagcFrmErrCntr() \
  (&Rte_CDD_Uart1CfgAndUse_Uart1DiagcFrmErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uart1DiagcOvrrunErrCntr() \
  (&Rte_CDD_Uart1CfgAndUse_Uart1DiagcOvrrunErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uart1DiagcParErrCntr() \
  (&Rte_CDD_Uart1CfgAndUse_Uart1DiagcParErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uart1DiagcRxMaxDataErrCntr() \
  (&Rte_CDD_Uart1CfgAndUse_Uart1DiagcRxMaxDataErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevDmaTrfCnt() \
  (&Rte_CDD_Uart1CfgAndUse_PrevDmaTrfCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uart1100MilliSecReadCmpl() \
  (&Rte_CDD_Uart1CfgAndUse_Uart1100MilliSecReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uart110MilliSecReadCmpl() \
  (&Rte_CDD_Uart1CfgAndUse_Uart110MilliSecReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uart1NrOfPnd100MilliSecFrmCnt() \
  (&Rte_CDD_Uart1CfgAndUse_Uart1NrOfPnd100MilliSecFrmCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uart1NrOfPnd10MilliSecFrmCnt() \
  (&Rte_CDD_Uart1CfgAndUse_Uart1NrOfPnd10MilliSecFrmCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uart1RxPrevLoopDataUnread() \
  (&Rte_CDD_Uart1CfgAndUse_Uart1RxPrevLoopDataUnread) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_Uart1100MilliSecBufCnt() (&((*RtePim_Uart1100MilliSecBufCnt())[0]))
#  else
#   define Rte_Pim_Uart1100MilliSecBufCnt() RtePim_Uart1100MilliSecBufCnt()
#  endif
#  define RtePim_Uart1100MilliSecBufCnt() \
  (&Rte_CDD_Uart1CfgAndUse_Uart1100MilliSecBufCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_Uart110MilliSecBufCnt() (&((*RtePim_Uart110MilliSecBufCnt())[0]))
#  else
#   define Rte_Pim_Uart110MilliSecBufCnt() RtePim_Uart110MilliSecBufCnt()
#  endif
#  define RtePim_Uart110MilliSecBufCnt() \
  (&Rte_CDD_Uart1CfgAndUse_Uart110MilliSecBufCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_Uart12MilliSecBufCnt() (&((*RtePim_Uart12MilliSecBufCnt())[0]))
#  else
#   define Rte_Pim_Uart12MilliSecBufCnt() RtePim_Uart12MilliSecBufCnt()
#  endif
#  define RtePim_Uart12MilliSecBufCnt() \
  (&Rte_CDD_Uart1CfgAndUse_Uart12MilliSecBufCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_Uart1CfgAndUse_START_SEC_CODE
# include "CDD_Uart1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Uart1CfgAndUseInit1 Uart1CfgAndUseInit1
#  define RTE_RUNNABLE_Uart1CfgAndUsePer1 Uart1CfgAndUsePer1
#  define RTE_RUNNABLE_Uart1CfgAndUsePer2 Uart1CfgAndUsePer2
#  define RTE_RUNNABLE_Uart1CfgAndUsePer3 Uart1CfgAndUsePer3
#  define RTE_RUNNABLE_Uart1CfgAndUsePer4 Uart1CfgAndUsePer4
# endif

FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUseInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUsePer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUsePer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUsePer3(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUsePer4(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CDD_Uart1CfgAndUse_STOP_SEC_CODE
# include "CDD_Uart1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetTxRateGroup_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetRxSigGroup_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_UART1CFGANDUSE_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
