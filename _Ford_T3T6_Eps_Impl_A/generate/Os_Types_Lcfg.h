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
 *              File: Os_Types_Lcfg.h
 *   Generation Time: 2018-03-11 13:21:31
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

#if !defined (OS_TYPES_LCFG_H)                                                       /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_TYPES_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */

/* Os kernel module dependencies */

/* Os hal dependencies */

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/*! OS-Application identifier. */
typedef enum
{
  Appl0 = 0,
  Appl10 = 1,
  SystemApplication_OsCore_CORE0 = 2,
  OS_APPID_COUNT = 3,
  INVALID_OSAPPLICATION = OS_APPID_COUNT
} ApplicationType;

/*! Trusted function identifier. */
typedef enum
{
  Os_ServiceCallee_Adcf0OutpInin = 0,
  Os_ServiceCallee_ApplXcpWrCmn = 1,
  Os_ServiceCallee_CritRegInitChk = 2,
  Os_ServiceCallee_CritRegPerChk = 3,
  Os_ServiceCallee_DmaRegInin = 4,
  Os_ServiceCallee_DtsClnUp = 5,
  Os_ServiceCallee_DtsInin = 6,
  Os_ServiceCallee_Fls_MainFunction = 7,
  Os_ServiceCallee_IpgInin = 8,
  Os_ServiceCallee_NvM_MainFunction = 9,
  Os_ServiceCallee_Spi_AsyncTransmit = 10,
  Os_ServiceCallee_Trusted_EcuM_ShutdownOS = 11,
  Os_ServiceCallee_Uart0CfgAndUseInin = 12,
  Os_ServiceCallee_Uart1CfgAndUseInin = 13,
  OS_TRUSTEDFUNCTIONID_COUNT = 14
} TrustedFunctionIndexType;

/*! Non-Trusted function identifier. */
typedef enum
{
  NtWrapS_CmnMfgSrv_CallSvc10 = 0,
  NtWrapS_NvM_EraseNvBlock = 1,
  NtWrapS_NvM_GetDataIndex = 2,
  NtWrapS_NvM_GetErrorStatus = 3,
  NtWrapS_NvM_InvalidateNvBlock = 4,
  NtWrapS_NvM_ReadBlock = 5,
  NtWrapS_NvM_SetBlockProtection = 6,
  NtWrapS_NvM_SetDataIndex = 7,
  NtWrapS_NvM_SetRamBlockStatus = 8,
  NtWrapS_NvM_WriteBlock = 9,
  NtWrapS_Rte_Call_CopyCalPageReq_Oper = 10,
  NtWrapS_Rte_Call_SetCalPageReq_Oper = 11,
  NtWrapS_SyncCrc_GetAvlCrcHwUnit = 12,
  NtWrapS_SyncCrc_RelsCrcHwUnit = 13,
  OS_NONTRUSTEDFUNCTIONID_COUNT = 14
} Os_NonTrustedFunctionIndexType;

/*! Task identifier. */
typedef enum
{
  IdleTask_OsCore_CORE0 = 0,
  Task_100ms_Appl10 = 1,
  Task_10msBsw_Appl10 = 2,
  Task_10ms_Appl10 = 3,
  Task_2msTmplMonr_Appl10 = 4,
  Task_2ms_Appl10 = 5,
  Task_4msBsw_Appl10 = 6,
  Task_4ms_Appl10 = 7,
  Task_5msBsw_Appl10 = 8,
  Task_InitBsw_Appl10 = 9,
  Task_Init_Appl10 = 10,
  Task_PreStart_CORE0 = 11,
  OS_TASKID_COUNT = 12,
  INVALID_TASK = OS_TASKID_COUNT
} TaskType;

/*! Category 2 ISR identifier. */
typedef enum
{
  CanIsr_1 = 0,
  CounterIsr_SystemTimer = 1,
  MCU_ECM_EIC_CAT2_ISR = 2,
  SPI_CSIH0_TIC_CAT2_ISR = 3,
  SPI_CSIH0_TIRE_CAT2_ISR = 4,
  OS_ISRID_COUNT = 5,
  INVALID_ISR = OS_ISRID_COUNT
} ISRType;

/*! Alarm identifier. */
typedef enum
{
  Rte_Al_TE2_Task_10msBsw_Appl10_0_10ms = 0,
  Rte_Al_TE2_Task_4msBsw_Appl10_0_4ms = 1,
  Rte_Al_TE_CanTp_CanTp_MainFunction = 2,
  Rte_Al_TE_Task_100ms_Appl10_0_100ms = 3,
  Rte_Al_TE_Task_10ms_Appl10_0_10ms = 4,
  Rte_Al_TE_Task_2msTmplMonr_Appl10_0_2ms = 5,
  Rte_Al_TE_Task_2ms_Appl10_0_2ms = 6,
  Rte_Al_TE_Task_4ms_Appl10_0_4ms = 7,
  OS_ALARMID_COUNT = 8
} AlarmType;

/*! Counter identifier. */
typedef enum
{
  OsCounter = 0,
  OS_COUNTERID_COUNT = 1
} CounterType;

/*! ScheduleTable identifier. */
typedef enum
{
  OS_SCHTID_COUNT = 0
} ScheduleTableType;

/*! Resource identifier. */
typedef enum
{
  InitResource = 0,
  OsResource = 1,
  SHUTDOWN_ONGOING = 2,
  OS_RESOURCEID_COUNT = 3
} ResourceType;

/*! Spinlock identifier. */
typedef enum
{
  OS_SPINLOCKID_COUNT = 0,
  INVALID_SPINLOCK = OS_SPINLOCKID_COUNT
} SpinlockIdType;

/*! Peripheral identifier. */
typedef enum
{
  InterruptController = 0,
  OS_PERIPHERALID_COUNT = 1
} Os_PeripheralIdType;

/*! Trace thread identifier (Tasks and ISRs inclusive system objects). */
typedef enum
{
  OS_TRACE_THREADID_COUNT = 0,
  OS_TRACE_INVALID_THREAD = OS_TRACE_THREADID_COUNT + 1
} Os_TraceThreadIdType;

/*! Trace spinlock identifier (All spinlocks inclusive system objects). */
typedef enum
{
  OS_TRACE_NUMBER_OF_CONFIGURED_SPINLOCKS = OS_SPINLOCKID_COUNT,
  OS_TRACE_NUMBER_OF_ALL_SPINLOCKS = OS_SPINLOCKID_COUNT + 0,
  OS_TRACE_INVALID_SPINLOCK = OS_TRACE_NUMBER_OF_ALL_SPINLOCKS + 1
} Os_TraceSpinlockIdType;


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_TYPES_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Types_Lcfg.h
 *********************************************************************************************************************/
