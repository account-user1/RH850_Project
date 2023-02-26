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
 *          File:  Rte_CDD_Uart0CfgAndUse.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_Uart0CfgAndUse>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_UART0CFGANDUSE_H
# define _RTE_CDD_UART0CFGANDUSE_H

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

# include "Rte_CDD_Uart0CfgAndUse_Type.h"
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

#  define Rte_Enter_ExclsvAr1Uart0DrvrTxRxBuf() SuspendOSInterrupts()  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */

#  define Rte_Exit_ExclsvAr1Uart0DrvrTxRxBuf() ResumeOSInterrupts()  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0DiagcFrmErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0DiagcOvrrunErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0DiagcParErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0DiagcRxMaxDataErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_PrevDmaTrfCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0100MilliSecReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart010MilliSecReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0NrOfPnd100MilliSecFrmCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0NrOfPnd10MilliSecFrmCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0RxPrevLoopDataUnread; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2048_Uart0CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0100MilliSecBufCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2048_Uart0CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart010MilliSecBufCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u8_2048_Uart0CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart02MilliSecBufCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_Uart0DiagcFrmErrCntr() \
  (&Rte_CDD_Uart0CfgAndUse_Uart0DiagcFrmErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uart0DiagcOvrrunErrCntr() \
  (&Rte_CDD_Uart0CfgAndUse_Uart0DiagcOvrrunErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uart0DiagcParErrCntr() \
  (&Rte_CDD_Uart0CfgAndUse_Uart0DiagcParErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uart0DiagcRxMaxDataErrCntr() \
  (&Rte_CDD_Uart0CfgAndUse_Uart0DiagcRxMaxDataErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevDmaTrfCnt() \
  (&Rte_CDD_Uart0CfgAndUse_PrevDmaTrfCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uart0100MilliSecReadCmpl() \
  (&Rte_CDD_Uart0CfgAndUse_Uart0100MilliSecReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uart010MilliSecReadCmpl() \
  (&Rte_CDD_Uart0CfgAndUse_Uart010MilliSecReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uart0NrOfPnd100MilliSecFrmCnt() \
  (&Rte_CDD_Uart0CfgAndUse_Uart0NrOfPnd100MilliSecFrmCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uart0NrOfPnd10MilliSecFrmCnt() \
  (&Rte_CDD_Uart0CfgAndUse_Uart0NrOfPnd10MilliSecFrmCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uart0RxPrevLoopDataUnread() \
  (&Rte_CDD_Uart0CfgAndUse_Uart0RxPrevLoopDataUnread) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_Uart0100MilliSecBufCnt() (&((*RtePim_Uart0100MilliSecBufCnt())[0]))
#  else
#   define Rte_Pim_Uart0100MilliSecBufCnt() RtePim_Uart0100MilliSecBufCnt()
#  endif
#  define RtePim_Uart0100MilliSecBufCnt() \
  (&Rte_CDD_Uart0CfgAndUse_Uart0100MilliSecBufCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_Uart010MilliSecBufCnt() (&((*RtePim_Uart010MilliSecBufCnt())[0]))
#  else
#   define Rte_Pim_Uart010MilliSecBufCnt() RtePim_Uart010MilliSecBufCnt()
#  endif
#  define RtePim_Uart010MilliSecBufCnt() \
  (&Rte_CDD_Uart0CfgAndUse_Uart010MilliSecBufCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_Uart02MilliSecBufCnt() (&((*RtePim_Uart02MilliSecBufCnt())[0]))
#  else
#   define Rte_Pim_Uart02MilliSecBufCnt() RtePim_Uart02MilliSecBufCnt()
#  endif
#  define RtePim_Uart02MilliSecBufCnt() \
  (&Rte_CDD_Uart0CfgAndUse_Uart02MilliSecBufCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_Uart0CfgAndUse_START_SEC_CODE
# include "CDD_Uart0CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Uart0CfgAndUseInit1 Uart0CfgAndUseInit1
#  define RTE_RUNNABLE_Uart0CfgAndUsePer1 Uart0CfgAndUsePer1
#  define RTE_RUNNABLE_Uart0CfgAndUsePer2 Uart0CfgAndUsePer2
#  define RTE_RUNNABLE_Uart0CfgAndUsePer3 Uart0CfgAndUsePer3
#  define RTE_RUNNABLE_Uart0CfgAndUsePer4 Uart0CfgAndUsePer4
# endif

FUNC(void, CDD_Uart0CfgAndUse_CODE) Uart0CfgAndUseInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_Uart0CfgAndUse_CODE) Uart0CfgAndUsePer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_Uart0CfgAndUse_CODE) Uart0CfgAndUsePer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_Uart0CfgAndUse_CODE) Uart0CfgAndUsePer3(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_Uart0CfgAndUse_CODE) Uart0CfgAndUsePer4(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CDD_Uart0CfgAndUse_STOP_SEC_CODE
# include "CDD_Uart0CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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

#endif /* _RTE_CDD_UART0CFGANDUSE_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
