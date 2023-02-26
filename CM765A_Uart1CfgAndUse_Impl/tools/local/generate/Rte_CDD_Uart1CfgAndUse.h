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
 *        Config:  E:/EA4NewTemplate/CM765A_Uart1CfgAndUse_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_Uart1CfgAndUse
 *  Generated at:  Fri Feb  9 07:54:53 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_Uart1CfgAndUse> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_UART1CFGANDUSE_H
# define _RTE_CDD_UART1CFGANDUSE_H

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

# include "Rte_CDD_Uart1CfgAndUse_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_Uart1CfgAndUse
{
  /* PIM Handles section */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevDmaTrfCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_2048_Uart1CfgAndUse, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Uart1100MilliSecBufCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Uart1100MilliSecReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_2048_Uart1CfgAndUse, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Uart110MilliSecBufCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Uart110MilliSecReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_2048_Uart1CfgAndUse, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Uart12MilliSecBufCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Uart1DiagcFrmErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Uart1DiagcOvrrunErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Uart1DiagcParErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Uart1DiagcRxMaxDataErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Uart1NrOfPnd100MilliSecFrmCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Uart1NrOfPnd10MilliSecFrmCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Uart1RxPrevLoopDataUnread; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_Uart1CfgAndUse, RTE_CONST, RTE_CONST) Rte_Inst_CDD_Uart1CfgAndUse; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_Uart1CfgAndUse, TYPEDEF, RTE_CONST) Rte_Instance;


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_Uart1CfgAndUse_GetTxRateGroup_Oper(uint8 RateGroup_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_UART1CFGANDUSE_APPL_VAR) Buf_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_Uart1CfgAndUse_SetRxSigGroup_Oper(uint8 SigGroup_Arg, ImcArbnRxDataSrc1 DataSrc_Arg, P2CONST(uint8, AUTOMATIC, RTE_CDD_UART1CFGANDUSE_APPL_DATA) Buf_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_Uart1CfgAndUse_SetRxSigGroup_Oper(uint8 SigGroup_Arg, ImcArbnRxDataSrc1 DataSrc_Arg, P2CONST(Ary1D_u8_8, AUTOMATIC, RTE_CDD_UART1CFGANDUSE_APPL_DATA) Buf_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

FUNC(void, RTE_CODE) Rte_Enter_CDD_Uart1CfgAndUse_ExclsvAr1Uart1DrvrTxRxBuf(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_Exit_CDD_Uart1CfgAndUse_ExclsvAr1Uart1DrvrTxRxBuf(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetTxRateGroup_Oper Rte_Call_CDD_Uart1CfgAndUse_GetTxRateGroup_Oper
# define Rte_Call_SetRxSigGroup_Oper Rte_Call_CDD_Uart1CfgAndUse_SetRxSigGroup_Oper


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

# define Rte_Enter_ExclsvAr1Uart1DrvrTxRxBuf Rte_Enter_CDD_Uart1CfgAndUse_ExclsvAr1Uart1DrvrTxRxBuf /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
# define Rte_Exit_ExclsvAr1Uart1DrvrTxRxBuf Rte_Exit_CDD_Uart1CfgAndUse_ExclsvAr1Uart1DrvrTxRxBuf /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_Uart1DiagcFrmErrCntr() (Rte_Inst_CDD_Uart1CfgAndUse->Pim_Uart1DiagcFrmErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Uart1DiagcOvrrunErrCntr() (Rte_Inst_CDD_Uart1CfgAndUse->Pim_Uart1DiagcOvrrunErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Uart1DiagcParErrCntr() (Rte_Inst_CDD_Uart1CfgAndUse->Pim_Uart1DiagcParErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Uart1DiagcRxMaxDataErrCntr() (Rte_Inst_CDD_Uart1CfgAndUse->Pim_Uart1DiagcRxMaxDataErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevDmaTrfCnt() (Rte_Inst_CDD_Uart1CfgAndUse->Pim_PrevDmaTrfCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Uart1100MilliSecReadCmpl() (Rte_Inst_CDD_Uart1CfgAndUse->Pim_Uart1100MilliSecReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Uart110MilliSecReadCmpl() (Rte_Inst_CDD_Uart1CfgAndUse->Pim_Uart110MilliSecReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Uart1NrOfPnd100MilliSecFrmCnt() (Rte_Inst_CDD_Uart1CfgAndUse->Pim_Uart1NrOfPnd100MilliSecFrmCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Uart1NrOfPnd10MilliSecFrmCnt() (Rte_Inst_CDD_Uart1CfgAndUse->Pim_Uart1NrOfPnd10MilliSecFrmCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Uart1RxPrevLoopDataUnread() (Rte_Inst_CDD_Uart1CfgAndUse->Pim_Uart1RxPrevLoopDataUnread) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_Uart1100MilliSecBufCnt() (*Rte_Inst_CDD_Uart1CfgAndUse->Pim_Uart1100MilliSecBufCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_Uart1100MilliSecBufCnt() (Rte_Inst_CDD_Uart1CfgAndUse->Pim_Uart1100MilliSecBufCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_Uart110MilliSecBufCnt() (*Rte_Inst_CDD_Uart1CfgAndUse->Pim_Uart110MilliSecBufCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_Uart110MilliSecBufCnt() (Rte_Inst_CDD_Uart1CfgAndUse->Pim_Uart110MilliSecBufCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_Uart12MilliSecBufCnt() (*Rte_Inst_CDD_Uart1CfgAndUse->Pim_Uart12MilliSecBufCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_Uart12MilliSecBufCnt() (Rte_Inst_CDD_Uart1CfgAndUse->Pim_Uart12MilliSecBufCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_Uart1DiagcFrmErrCntr(void)
 *   uint32 *Rte_Pim_Uart1DiagcOvrrunErrCntr(void)
 *   uint32 *Rte_Pim_Uart1DiagcParErrCntr(void)
 *   uint32 *Rte_Pim_Uart1DiagcRxMaxDataErrCntr(void)
 *   uint16 *Rte_Pim_PrevDmaTrfCnt(void)
 *   uint8 *Rte_Pim_Uart1100MilliSecReadCmpl(void)
 *   uint8 *Rte_Pim_Uart110MilliSecReadCmpl(void)
 *   uint8 *Rte_Pim_Uart1NrOfPnd100MilliSecFrmCnt(void)
 *   uint8 *Rte_Pim_Uart1NrOfPnd10MilliSecFrmCnt(void)
 *   uint8 *Rte_Pim_Uart1RxPrevLoopDataUnread(void)
 *   uint8 *Rte_Pim_Uart1100MilliSecBufCnt(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2048_Uart1CfgAndUse
 *   uint8 *Rte_Pim_Uart110MilliSecBufCnt(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2048_Uart1CfgAndUse
 *   uint8 *Rte_Pim_Uart12MilliSecBufCnt(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2048_Uart1CfgAndUse
 *
 *********************************************************************************************************************/


# define CDD_Uart1CfgAndUse_START_SEC_CODE
# include "CDD_Uart1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: Uart1CfgAndUseInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Uart1CfgAndUseInit1 Uart1CfgAndUseInit1
FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUseInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Uart1CfgAndUsePer1
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
 *   Std_ReturnType Rte_Call_SetRxSigGroup_Oper(uint8 SigGroup_Arg, ImcArbnRxDataSrc1 DataSrc_Arg, const uint8 *Buf_Arg)
 *     Argument Buf_Arg: uint8* is of type Ary1D_u8_8
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetRxSigGroup_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Uart1CfgAndUsePer1 Uart1CfgAndUsePer1
FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUsePer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Uart1CfgAndUsePer2
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
 *   Std_ReturnType Rte_Call_GetTxRateGroup_Oper(uint8 RateGroup_Arg, uint8 *Buf_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetTxRateGroup_PortIf1_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExclsvAr1Uart1DrvrTxRxBuf(void)
 *   void Rte_Exit_ExclsvAr1Uart1DrvrTxRxBuf(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Uart1CfgAndUsePer2 Uart1CfgAndUsePer2
FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUsePer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Uart1CfgAndUsePer3
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTxRateGroup_Oper(uint8 RateGroup_Arg, uint8 *Buf_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetTxRateGroup_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Uart1CfgAndUsePer3 Uart1CfgAndUsePer3
FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUsePer3(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Uart1CfgAndUsePer4
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
 *   Std_ReturnType Rte_Call_GetTxRateGroup_Oper(uint8 RateGroup_Arg, uint8 *Buf_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetTxRateGroup_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Uart1CfgAndUsePer4 Uart1CfgAndUsePer4
FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUsePer4(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_Uart1CfgAndUse_STOP_SEC_CODE
# include "CDD_Uart1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetTxRateGroup_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetRxSigGroup_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_UART1CFGANDUSE_H */

#include "Rte_Stubs.h"
