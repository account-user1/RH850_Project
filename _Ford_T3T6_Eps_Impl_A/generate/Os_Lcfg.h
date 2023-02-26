/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Os
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Lcfg.h
 *   Generation Time: 2018-04-13 16:37:25
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1601056_D00
 *      Tool Version: DaVinci Configurator (beta) 5.14.21 SP3
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

#if !defined (OS_LCFG_H)                                                             /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Cfg.h"
# include "Os_Types.h"
# include "Os_Types_Lcfg.h"

/* Os kernel module dependencies */

/* Os hal dependencies */
# include "Os_Hal_Lcfg.h"

/* User file includes */
#include "TrustedFunction.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Backward compatibility API defines for trusted function stubs. */
# define Call_Adcf0OutpInin     Os_Call_Adcf0OutpInin
# define Call_ApplXcpWrCmn     Os_Call_ApplXcpWrCmn
# define Call_CritRegInitChk     Os_Call_CritRegInitChk
# define Call_CritRegPerChk     Os_Call_CritRegPerChk
# define Call_DmaRegInin     Os_Call_DmaRegInin
# define Call_DtsClnUp     Os_Call_DtsClnUp
# define Call_DtsInin     Os_Call_DtsInin
# define Call_Fls_MainFunction     Os_Call_Fls_MainFunction
# define Call_IpgInin     Os_Call_IpgInin
# define Call_NvM_MainFunction     Os_Call_NvM_MainFunction
# define Call_Spi_AsyncTransmit     Os_Call_Spi_AsyncTransmit
# define Call_Trusted_EcuM_ShutdownOS     Os_Call_Trusted_EcuM_ShutdownOS
# define Call_Uart0CfgAndUseInin     Os_Call_Uart0CfgAndUseInin
# define Call_Uart1CfgAndUseInin     Os_Call_Uart1CfgAndUseInin


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_Task_100ms_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Task_100ms_Appl10()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_100MS_APPL10_CODE) Os_Task_Task_100ms_Appl10(void);

# define OS_STOP_SEC_Task_100ms_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Task_10msBsw_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Task_10msBsw_Appl10()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_10MSBSW_APPL10_CODE) Os_Task_Task_10msBsw_Appl10(void);

# define OS_STOP_SEC_Task_10msBsw_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Task_10ms_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Task_10ms_Appl10()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_10MS_APPL10_CODE) Os_Task_Task_10ms_Appl10(void);

# define OS_STOP_SEC_Task_10ms_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Task_2msTmplMonr_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Task_2msTmplMonr_Appl10()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_2MSTMPLMONR_APPL10_CODE) Os_Task_Task_2msTmplMonr_Appl10(void);

# define OS_STOP_SEC_Task_2msTmplMonr_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Task_2ms_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Task_2ms_Appl10()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_2MS_APPL10_CODE) Os_Task_Task_2ms_Appl10(void);

# define OS_STOP_SEC_Task_2ms_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Task_4msBsw_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Task_4msBsw_Appl10()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_4MSBSW_APPL10_CODE) Os_Task_Task_4msBsw_Appl10(void);

# define OS_STOP_SEC_Task_4msBsw_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Task_4ms_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Task_4ms_Appl10()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_4MS_APPL10_CODE) Os_Task_Task_4ms_Appl10(void);

# define OS_STOP_SEC_Task_4ms_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Task_5msBsw_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Task_5msBsw_Appl10()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_5MSBSW_APPL10_CODE) Os_Task_Task_5msBsw_Appl10(void);

# define OS_STOP_SEC_Task_5msBsw_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Task_InitBsw_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Task_InitBsw_Appl10()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_INITBSW_APPL10_CODE) Os_Task_Task_InitBsw_Appl10(void);

# define OS_STOP_SEC_Task_InitBsw_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Task_Init_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Task_Init_Appl10()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_INIT_APPL10_CODE) Os_Task_Task_Init_Appl10(void);

# define OS_STOP_SEC_Task_Init_Appl10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Task_PreStart_CORE0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Task_PreStart_CORE0()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_PRESTART_CORE0_CODE) Os_Task_Task_PreStart_CORE0(void);

# define OS_STOP_SEC_Task_PreStart_CORE0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CanIsr_1_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  CanIsr_1()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANISR_1_CODE) Os_Isr_CanIsr_1(void);

# define OS_STOP_SEC_CanIsr_1_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_MCU_ECM_EIC_CAT2_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  MCU_ECM_EIC_CAT2_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_MCU_ECM_EIC_CAT2_ISR_CODE) Os_Isr_MCU_ECM_EIC_CAT2_ISR(void);

# define OS_STOP_SEC_MCU_ECM_EIC_CAT2_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_SPI_CSIH0_TIC_CAT2_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  SPI_CSIH0_TIC_CAT2_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_SPI_CSIH0_TIC_CAT2_ISR_CODE) Os_Isr_SPI_CSIH0_TIC_CAT2_ISR(void);

# define OS_STOP_SEC_SPI_CSIH0_TIC_CAT2_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_SPI_CSIH0_TIRE_CAT2_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  SPI_CSIH0_TIRE_CAT2_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_SPI_CSIH0_TIRE_CAT2_ISR_CODE) Os_Isr_SPI_CSIH0_TIRE_CAT2_ISR(void);

# define OS_STOP_SEC_SPI_CSIH0_TIRE_CAT2_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Os_Call_Adcf0OutpInin
 *********************************************************************************************************************/
/*! \brief        Packing part of call stub for service functions.
 *  \details      This function performs the packing. It's signature is identical to the configured function.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *
 *  \note         Can be inlined.
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_Adcf0OutpInin
(
  void
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Os_Call_ApplXcpWrCmn
 *********************************************************************************************************************/
/*! \brief        Packing part of call stub for service functions.
 *  \details      This function performs the packing. It's signature is identical to the configured function.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *
 *  \note         Can be inlined.
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_ApplXcpWrCmn
(
  MTABYTEPTR Arg1,
  vuint8 Arg2,
  const BYTEPTR Arg3
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Os_Call_CritRegInitChk
 *********************************************************************************************************************/
/*! \brief        Packing part of call stub for service functions.
 *  \details      This function performs the packing. It's signature is identical to the configured function.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *
 *  \note         Can be inlined.
 *********************************************************************************************************************/
FUNC(uint8, OS_CODE) Os_Call_CritRegInitChk
(
  void
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Os_Call_CritRegPerChk
 *********************************************************************************************************************/
/*! \brief        Packing part of call stub for service functions.
 *  \details      This function performs the packing. It's signature is identical to the configured function.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *
 *  \note         Can be inlined.
 *********************************************************************************************************************/
FUNC(uint8, OS_CODE) Os_Call_CritRegPerChk
(
  void
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Os_Call_DmaRegInin
 *********************************************************************************************************************/
/*! \brief        Packing part of call stub for service functions.
 *  \details      This function performs the packing. It's signature is identical to the configured function.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *
 *  \note         Can be inlined.
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_DmaRegInin
(
  void
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Os_Call_DtsClnUp
 *********************************************************************************************************************/
/*! \brief        Packing part of call stub for service functions.
 *  \details      This function performs the packing. It's signature is identical to the configured function.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *
 *  \note         Can be inlined.
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_DtsClnUp
(
  void
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Os_Call_DtsInin
 *********************************************************************************************************************/
/*! \brief        Packing part of call stub for service functions.
 *  \details      This function performs the packing. It's signature is identical to the configured function.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *
 *  \note         Can be inlined.
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_DtsInin
(
  uint32 Arg1,
  uint32 Arg2
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Os_Call_Fls_MainFunction
 *********************************************************************************************************************/
/*! \brief        Packing part of call stub for service functions.
 *  \details      This function performs the packing. It's signature is identical to the configured function.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *
 *  \note         Can be inlined.
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_Fls_MainFunction
(
  void
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Os_Call_IpgInin
 *********************************************************************************************************************/
/*! \brief        Packing part of call stub for service functions.
 *  \details      This function performs the packing. It's signature is identical to the configured function.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *
 *  \note         Can be inlined.
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_IpgInin
(
  void
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Os_Call_NvM_MainFunction
 *********************************************************************************************************************/
/*! \brief        Packing part of call stub for service functions.
 *  \details      This function performs the packing. It's signature is identical to the configured function.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *
 *  \note         Can be inlined.
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_NvM_MainFunction
(
  void
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Os_Call_Spi_AsyncTransmit
 *********************************************************************************************************************/
/*! \brief        Packing part of call stub for service functions.
 *  \details      This function performs the packing. It's signature is identical to the configured function.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *
 *  \note         Can be inlined.
 *********************************************************************************************************************/
FUNC(Std_ReturnType, OS_CODE) Os_Call_Spi_AsyncTransmit
(
  Spi_SequenceType Arg1
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Os_Call_Trusted_EcuM_ShutdownOS
 *********************************************************************************************************************/
/*! \brief        Packing part of call stub for service functions.
 *  \details      This function performs the packing. It's signature is identical to the configured function.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *
 *  \note         Can be inlined.
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_Trusted_EcuM_ShutdownOS
(
  Std_ReturnType Arg1
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Os_Call_Uart0CfgAndUseInin
 *********************************************************************************************************************/
/*! \brief        Packing part of call stub for service functions.
 *  \details      This function performs the packing. It's signature is identical to the configured function.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *
 *  \note         Can be inlined.
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_Uart0CfgAndUseInin
(
  void
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Os_Call_Uart1CfgAndUseInin
 *********************************************************************************************************************/
/*! \brief        Packing part of call stub for service functions.
 *  \details      This function performs the packing. It's signature is identical to the configured function.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          -
 *
 *  \note         Can be inlined.
 *********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Call_Uart1CfgAndUseInin
(
  void
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_NtWrapS_CmnMfgSrv_CallSvc10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  NONTRUSTED_NtWrapS_CmnMfgSrv_CallSvc10
 *********************************************************************************************************************/
FUNC(void, OS_NTWRAPS_CMNMFGSRV_CALLSVC10_CODE) NONTRUSTED_NtWrapS_CmnMfgSrv_CallSvc10
(
  Os_NonTrustedFunctionIndexType FunctionIndex,
  Os_NonTrustedFunctionParameterRefType FunctionParams
);

# define OS_STOP_SEC_NtWrapS_CmnMfgSrv_CallSvc10_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_NtWrapS_NvM_EraseNvBlock_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  NONTRUSTED_NtWrapS_NvM_EraseNvBlock
 *********************************************************************************************************************/
FUNC(void, OS_NTWRAPS_NVM_ERASENVBLOCK_CODE) NONTRUSTED_NtWrapS_NvM_EraseNvBlock
(
  Os_NonTrustedFunctionIndexType FunctionIndex,
  Os_NonTrustedFunctionParameterRefType FunctionParams
);

# define OS_STOP_SEC_NtWrapS_NvM_EraseNvBlock_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_NtWrapS_NvM_GetDataIndex_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  NONTRUSTED_NtWrapS_NvM_GetDataIndex
 *********************************************************************************************************************/
FUNC(void, OS_NTWRAPS_NVM_GETDATAINDEX_CODE) NONTRUSTED_NtWrapS_NvM_GetDataIndex
(
  Os_NonTrustedFunctionIndexType FunctionIndex,
  Os_NonTrustedFunctionParameterRefType FunctionParams
);

# define OS_STOP_SEC_NtWrapS_NvM_GetDataIndex_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_NtWrapS_NvM_GetErrorStatus_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  NONTRUSTED_NtWrapS_NvM_GetErrorStatus
 *********************************************************************************************************************/
FUNC(void, OS_NTWRAPS_NVM_GETERRORSTATUS_CODE) NONTRUSTED_NtWrapS_NvM_GetErrorStatus
(
  Os_NonTrustedFunctionIndexType FunctionIndex,
  Os_NonTrustedFunctionParameterRefType FunctionParams
);

# define OS_STOP_SEC_NtWrapS_NvM_GetErrorStatus_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_NtWrapS_NvM_InvalidateNvBlock_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  NONTRUSTED_NtWrapS_NvM_InvalidateNvBlock
 *********************************************************************************************************************/
FUNC(void, OS_NTWRAPS_NVM_INVALIDATENVBLOCK_CODE) NONTRUSTED_NtWrapS_NvM_InvalidateNvBlock
(
  Os_NonTrustedFunctionIndexType FunctionIndex,
  Os_NonTrustedFunctionParameterRefType FunctionParams
);

# define OS_STOP_SEC_NtWrapS_NvM_InvalidateNvBlock_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_NtWrapS_NvM_ReadBlock_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  NONTRUSTED_NtWrapS_NvM_ReadBlock
 *********************************************************************************************************************/
FUNC(void, OS_NTWRAPS_NVM_READBLOCK_CODE) NONTRUSTED_NtWrapS_NvM_ReadBlock
(
  Os_NonTrustedFunctionIndexType FunctionIndex,
  Os_NonTrustedFunctionParameterRefType FunctionParams
);

# define OS_STOP_SEC_NtWrapS_NvM_ReadBlock_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_NtWrapS_NvM_SetBlockProtection_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  NONTRUSTED_NtWrapS_NvM_SetBlockProtection
 *********************************************************************************************************************/
FUNC(void, OS_NTWRAPS_NVM_SETBLOCKPROTECTION_CODE) NONTRUSTED_NtWrapS_NvM_SetBlockProtection
(
  Os_NonTrustedFunctionIndexType FunctionIndex,
  Os_NonTrustedFunctionParameterRefType FunctionParams
);

# define OS_STOP_SEC_NtWrapS_NvM_SetBlockProtection_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_NtWrapS_NvM_SetDataIndex_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  NONTRUSTED_NtWrapS_NvM_SetDataIndex
 *********************************************************************************************************************/
FUNC(void, OS_NTWRAPS_NVM_SETDATAINDEX_CODE) NONTRUSTED_NtWrapS_NvM_SetDataIndex
(
  Os_NonTrustedFunctionIndexType FunctionIndex,
  Os_NonTrustedFunctionParameterRefType FunctionParams
);

# define OS_STOP_SEC_NtWrapS_NvM_SetDataIndex_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_NtWrapS_NvM_SetRamBlockStatus_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  NONTRUSTED_NtWrapS_NvM_SetRamBlockStatus
 *********************************************************************************************************************/
FUNC(void, OS_NTWRAPS_NVM_SETRAMBLOCKSTATUS_CODE) NONTRUSTED_NtWrapS_NvM_SetRamBlockStatus
(
  Os_NonTrustedFunctionIndexType FunctionIndex,
  Os_NonTrustedFunctionParameterRefType FunctionParams
);

# define OS_STOP_SEC_NtWrapS_NvM_SetRamBlockStatus_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_NtWrapS_NvM_WriteBlock_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  NONTRUSTED_NtWrapS_NvM_WriteBlock
 *********************************************************************************************************************/
FUNC(void, OS_NTWRAPS_NVM_WRITEBLOCK_CODE) NONTRUSTED_NtWrapS_NvM_WriteBlock
(
  Os_NonTrustedFunctionIndexType FunctionIndex,
  Os_NonTrustedFunctionParameterRefType FunctionParams
);

# define OS_STOP_SEC_NtWrapS_NvM_WriteBlock_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_NtWrapS_Rte_Call_CopyCalPageReq_Oper_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  NONTRUSTED_NtWrapS_Rte_Call_CopyCalPageReq_Oper
 *********************************************************************************************************************/
FUNC(void, OS_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER_CODE) NONTRUSTED_NtWrapS_Rte_Call_CopyCalPageReq_Oper
(
  Os_NonTrustedFunctionIndexType FunctionIndex,
  Os_NonTrustedFunctionParameterRefType FunctionParams
);

# define OS_STOP_SEC_NtWrapS_Rte_Call_CopyCalPageReq_Oper_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_NtWrapS_Rte_Call_SetCalPageReq_Oper_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  NONTRUSTED_NtWrapS_Rte_Call_SetCalPageReq_Oper
 *********************************************************************************************************************/
FUNC(void, OS_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER_CODE) NONTRUSTED_NtWrapS_Rte_Call_SetCalPageReq_Oper
(
  Os_NonTrustedFunctionIndexType FunctionIndex,
  Os_NonTrustedFunctionParameterRefType FunctionParams
);

# define OS_STOP_SEC_NtWrapS_Rte_Call_SetCalPageReq_Oper_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_NtWrapS_SyncCrc_GetAvlCrcHwUnit_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  NONTRUSTED_NtWrapS_SyncCrc_GetAvlCrcHwUnit
 *********************************************************************************************************************/
FUNC(void, OS_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT_CODE) NONTRUSTED_NtWrapS_SyncCrc_GetAvlCrcHwUnit
(
  Os_NonTrustedFunctionIndexType FunctionIndex,
  Os_NonTrustedFunctionParameterRefType FunctionParams
);

# define OS_STOP_SEC_NtWrapS_SyncCrc_GetAvlCrcHwUnit_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_NtWrapS_SyncCrc_RelsCrcHwUnit_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  NONTRUSTED_NtWrapS_SyncCrc_RelsCrcHwUnit
 *********************************************************************************************************************/
FUNC(void, OS_NTWRAPS_SYNCCRC_RELSCRCHWUNIT_CODE) NONTRUSTED_NtWrapS_SyncCrc_RelsCrcHwUnit
(
  Os_NonTrustedFunctionIndexType FunctionIndex,
  Os_NonTrustedFunctionParameterRefType FunctionParams
);

# define OS_STOP_SEC_NtWrapS_SyncCrc_RelsCrcHwUnit_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#endif /* OS_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Lcfg.h
 *********************************************************************************************************************/
