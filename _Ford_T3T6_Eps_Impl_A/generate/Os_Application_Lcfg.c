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
 *              File: Os_Application_Lcfg.c
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

/* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_APPLICATION_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Application_Cfg.h"
#include "Os_Application_Lcfg.h"
#include "Os_Application.h"

/* Os kernel module dependencies */
#include "Os_Alarm_Lcfg.h"
#include "Os_Alarm.h"
#include "Os_Common.h"
#include "Os_Core_Lcfg.h"
#include "Os_Counter_Lcfg.h"
#include "Os_Counter.h"
#include "Os_Hook_Lcfg.h"
#include "Os_Isr_Lcfg.h"
#include "Os_ScheduleTable_Lcfg.h"
#include "Os_ScheduleTable.h"
#include "Os_ServiceFunction_Lcfg.h"
#include "Os_Task_Lcfg.h"
#include "Os_Timer.h"

/* Os hal dependencies */


/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Dynamic application data: Appl0 */
OS_LOCAL VAR(Os_AppType, OS_VAR_NOINIT) OsCfg_App_Appl0_Dyn;

/*! Dynamic application data: Appl10 */
OS_LOCAL VAR(Os_AppType, OS_VAR_NOINIT) OsCfg_App_Appl10_Dyn;

/*! Dynamic application data: SystemApplication_OsCore_CORE0 */
OS_LOCAL VAR(Os_AppType, OS_VAR_NOINIT) OsCfg_App_SystemApplication_OsCore_CORE0_Dyn;

#define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for application alarms: Appl0 */
OS_LOCAL CONST(Os_AlarmConfigRefType, OS_CONST) OsCfg_App_Appl0_AlarmRefs[OS_CFG_NUM_APP_APPL0_ALARMS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application counters: Appl0 */
OS_LOCAL CONST(Os_CounterConfigRefType, OS_CONST) OsCfg_App_Appl0_CounterRefs[OS_CFG_NUM_APP_APPL0_COUNTERS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application hooks: Appl0 */
OS_LOCAL CONST(Os_HookConfigRefType, OS_CONST) OsCfg_App_Appl0_HookRefs[OS_CFG_NUM_APP_APPL0_HOOKS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application ISRs: Appl0 */
OS_LOCAL CONST(Os_IsrConfigRefType, OS_CONST) OsCfg_App_Appl0_IsrRefs[OS_CFG_NUM_APP_APPL0_ISRS + 1] =
{
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_MCU_ECM_EIC_CAT2_ISR),
  NULL_PTR
};

/*! Object reference table for application category 1 (EXTERNAL) ISRs: Appl0 */
OS_LOCAL CONST(Os_IsrCat1ConfigRefType, OS_CONST) OsCfg_App_Appl0_Cat1IsrRefs[OS_CFG_NUM_APP_APPL0_CAT1ISRS + 1] =
{
  (Os_IsrCat1ConfigRefType) &OsCfg_Cat1Isr_MotCtrlMgrIrq,
  (Os_IsrCat1ConfigRefType) &OsCfg_Cat1Isr_WDG_59_DRIVERA_TRIGGERFUNCTION_ISR,
  NULL_PTR
};

/*! Object reference table for application schedule tables: Appl0 */
OS_LOCAL CONST(Os_SchTConfigRefType, OS_CONST) OsCfg_App_Appl0_SchTRefs[OS_CFG_NUM_APP_APPL0_SCHTS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application tasks: Appl0 */
OS_LOCAL CONST(Os_TaskConfigRefType, OS_CONST) OsCfg_App_Appl0_TaskRefs[OS_CFG_NUM_APP_APPL0_TASKS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application trusted functions: Appl0 */
OS_LOCAL CONST(Os_ServiceConfigRefType, OS_CONST) OsCfg_App_Appl0_ServiceRefs[OS_CFG_NUM_APP_APPL0_SERVICES + 1] =
{
  OS_SERVICE_CASTCONFIG_TF_2_SERVICE(OsCfg_Service_Adcf0OutpInin),
  OS_SERVICE_CASTCONFIG_TF_2_SERVICE(OsCfg_Service_ApplXcpWrCmn),
  OS_SERVICE_CASTCONFIG_TF_2_SERVICE(OsCfg_Service_CritRegInitChk),
  OS_SERVICE_CASTCONFIG_TF_2_SERVICE(OsCfg_Service_CritRegPerChk),
  OS_SERVICE_CASTCONFIG_TF_2_SERVICE(OsCfg_Service_DmaRegInin),
  OS_SERVICE_CASTCONFIG_TF_2_SERVICE(OsCfg_Service_DtsClnUp),
  OS_SERVICE_CASTCONFIG_TF_2_SERVICE(OsCfg_Service_DtsInin),
  OS_SERVICE_CASTCONFIG_TF_2_SERVICE(OsCfg_Service_Fls_MainFunction),
  OS_SERVICE_CASTCONFIG_TF_2_SERVICE(OsCfg_Service_IpgInin),
  OS_SERVICE_CASTCONFIG_TF_2_SERVICE(OsCfg_Service_NvM_MainFunction),
  OS_SERVICE_CASTCONFIG_TF_2_SERVICE(OsCfg_Service_Spi_AsyncTransmit),
  OS_SERVICE_CASTCONFIG_TF_2_SERVICE(OsCfg_Service_Trusted_EcuM_ShutdownOS),
  OS_SERVICE_CASTCONFIG_TF_2_SERVICE(OsCfg_Service_Uart0CfgAndUseInin),
  OS_SERVICE_CASTCONFIG_TF_2_SERVICE(OsCfg_Service_Uart1CfgAndUseInin),
  NULL_PTR
};

/*! Application configuration data: Appl0 */
CONST(Os_AppConfigType, OS_CONST) OsCfg_App_Appl0 =
{
  /* .Dyn                  = */ &OsCfg_App_Appl0_Dyn,
  /* .Core                 = */ &OsCfg_Core_OsCore_CORE0,
  /* .AccessRightId        = */ OS_APPID2MASK(Appl0),
  /* .TaskRefs             = */ OsCfg_App_Appl0_TaskRefs,
  /* .TaskCount            = */ OS_CFG_NUM_APP_APPL0_TASKS,
  /* .IsrCat2Refs          = */ OsCfg_App_Appl0_IsrRefs,
  /* .IsrCat2Count         = */ OS_CFG_NUM_APP_APPL0_ISRS,
  /* .IsrCat1Refs          = */ OsCfg_App_Appl0_Cat1IsrRefs,
  /* .IsrCat1Count         = */ OS_CFG_NUM_APP_APPL0_CAT1ISRS,
  /* .CounterRefs          = */ OsCfg_App_Appl0_CounterRefs,
  /* .CounterCount         = */ OS_CFG_NUM_APP_APPL0_COUNTERS,
  /* .AlarmRefs            = */ OsCfg_App_Appl0_AlarmRefs,
  /* .AlarmCount           = */ OS_CFG_NUM_APP_APPL0_ALARMS,
  /* .SchTRefs             = */ OsCfg_App_Appl0_SchTRefs,
  /* .SchTCount            = */ OS_CFG_NUM_APP_APPL0_SCHTS,
  /* .ServiceFunctions     = */ OsCfg_App_Appl0_ServiceRefs,
  /* .ServiceFunctionCount = */ OS_CFG_NUM_APP_APPL0_SERVICES,
  /* .StartupHookRef       = */ NULL_PTR,
  /* .ShutdownHookRef      = */ NULL_PTR,
  /* .ErrorHookRef         = */ NULL_PTR,
  /* .HookRefs             = */ OsCfg_App_Appl0_HookRefs,
  /* .HookCount            = */ OS_CFG_NUM_APP_APPL0_HOOKS,
  /* .RestartTask          = */ NULL_PTR,
  /* .IsTrusted            = */ TRUE,
  /* .IsPriveleged         = */ TRUE,
  /* .HasTimingProtectionDelay = */ FALSE,
  /* .Id                   = */ Appl0
};

/*! Object reference table for application alarms: Appl10 */
OS_LOCAL CONST(Os_AlarmConfigRefType, OS_CONST) OsCfg_App_Appl10_AlarmRefs[OS_CFG_NUM_APP_APPL10_ALARMS + 1] =
{
  OS_ALARM_CASTCONFIG_ALARMACTIVATETASK_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Task_10msBsw_Appl10_0_10ms),
  OS_ALARM_CASTCONFIG_ALARMACTIVATETASK_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Task_4msBsw_Appl10_0_4ms),
  OS_ALARM_CASTCONFIG_ALARMACTIVATETASK_2_ALARM(OsCfg_Alarm_Rte_Al_TE_CanTp_CanTp_MainFunction),
  OS_ALARM_CASTCONFIG_ALARMACTIVATETASK_2_ALARM(OsCfg_Alarm_Rte_Al_TE_Task_100ms_Appl10_0_100ms),
  OS_ALARM_CASTCONFIG_ALARMACTIVATETASK_2_ALARM(OsCfg_Alarm_Rte_Al_TE_Task_10ms_Appl10_0_10ms),
  OS_ALARM_CASTCONFIG_ALARMACTIVATETASK_2_ALARM(OsCfg_Alarm_Rte_Al_TE_Task_2msTmplMonr_Appl10_0_2ms),
  OS_ALARM_CASTCONFIG_ALARMACTIVATETASK_2_ALARM(OsCfg_Alarm_Rte_Al_TE_Task_2ms_Appl10_0_2ms),
  OS_ALARM_CASTCONFIG_ALARMACTIVATETASK_2_ALARM(OsCfg_Alarm_Rte_Al_TE_Task_4ms_Appl10_0_4ms),
  NULL_PTR
};

/*! Object reference table for application counters: Appl10 */
OS_LOCAL CONST(Os_CounterConfigRefType, OS_CONST) OsCfg_App_Appl10_CounterRefs[OS_CFG_NUM_APP_APPL10_COUNTERS + 1] =
{
  OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_OsCounter),
  NULL_PTR
};

/*! Object reference table for application hooks: Appl10 */
OS_LOCAL CONST(Os_HookConfigRefType, OS_CONST) OsCfg_App_Appl10_HookRefs[OS_CFG_NUM_APP_APPL10_HOOKS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application ISRs: Appl10 */
OS_LOCAL CONST(Os_IsrConfigRefType, OS_CONST) OsCfg_App_Appl10_IsrRefs[OS_CFG_NUM_APP_APPL10_ISRS + 1] =
{
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_1),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_SPI_CSIH0_TIC_CAT2_ISR),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_SPI_CSIH0_TIRE_CAT2_ISR),
  NULL_PTR
};

/*! Object reference table for application category 1 (EXTERNAL) ISRs: Appl10 */
OS_LOCAL CONST(Os_IsrCat1ConfigRefType, OS_CONST) OsCfg_App_Appl10_Cat1IsrRefs[OS_CFG_NUM_APP_APPL10_CAT1ISRS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application schedule tables: Appl10 */
OS_LOCAL CONST(Os_SchTConfigRefType, OS_CONST) OsCfg_App_Appl10_SchTRefs[OS_CFG_NUM_APP_APPL10_SCHTS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application tasks: Appl10 */
OS_LOCAL CONST(Os_TaskConfigRefType, OS_CONST) OsCfg_App_Appl10_TaskRefs[OS_CFG_NUM_APP_APPL10_TASKS + 1] =
{
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_100ms_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_10msBsw_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_10ms_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_2msTmplMonr_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_2ms_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_4msBsw_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_4ms_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_5msBsw_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_InitBsw_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_Init_Appl10),
  NULL_PTR
};

/*! Object reference table for application trusted functions: Appl10 */
OS_LOCAL CONST(Os_ServiceConfigRefType, OS_CONST) OsCfg_App_Appl10_ServiceRefs[OS_CFG_NUM_APP_APPL10_SERVICES + 1] =
{
  OS_SERVICE_CASTCONFIG_NTF_2_SERVICE(OsCfg_Service_NtWrapS_CmnMfgSrv_CallSvc10),
  OS_SERVICE_CASTCONFIG_NTF_2_SERVICE(OsCfg_Service_NtWrapS_NvM_EraseNvBlock),
  OS_SERVICE_CASTCONFIG_NTF_2_SERVICE(OsCfg_Service_NtWrapS_NvM_GetDataIndex),
  OS_SERVICE_CASTCONFIG_NTF_2_SERVICE(OsCfg_Service_NtWrapS_NvM_GetErrorStatus),
  OS_SERVICE_CASTCONFIG_NTF_2_SERVICE(OsCfg_Service_NtWrapS_NvM_InvalidateNvBlock),
  OS_SERVICE_CASTCONFIG_NTF_2_SERVICE(OsCfg_Service_NtWrapS_NvM_ReadBlock),
  OS_SERVICE_CASTCONFIG_NTF_2_SERVICE(OsCfg_Service_NtWrapS_NvM_SetBlockProtection),
  OS_SERVICE_CASTCONFIG_NTF_2_SERVICE(OsCfg_Service_NtWrapS_NvM_SetDataIndex),
  OS_SERVICE_CASTCONFIG_NTF_2_SERVICE(OsCfg_Service_NtWrapS_NvM_SetRamBlockStatus),
  OS_SERVICE_CASTCONFIG_NTF_2_SERVICE(OsCfg_Service_NtWrapS_NvM_WriteBlock),
  OS_SERVICE_CASTCONFIG_NTF_2_SERVICE(OsCfg_Service_NtWrapS_Rte_Call_CopyCalPageReq_Oper),
  OS_SERVICE_CASTCONFIG_NTF_2_SERVICE(OsCfg_Service_NtWrapS_Rte_Call_SetCalPageReq_Oper),
  OS_SERVICE_CASTCONFIG_NTF_2_SERVICE(OsCfg_Service_NtWrapS_SyncCrc_GetAvlCrcHwUnit),
  OS_SERVICE_CASTCONFIG_NTF_2_SERVICE(OsCfg_Service_NtWrapS_SyncCrc_RelsCrcHwUnit),
  NULL_PTR
};

/*! Application configuration data: Appl10 */
CONST(Os_AppConfigType, OS_CONST) OsCfg_App_Appl10 =
{
  /* .Dyn                  = */ &OsCfg_App_Appl10_Dyn,
  /* .Core                 = */ &OsCfg_Core_OsCore_CORE0,
  /* .AccessRightId        = */ OS_APPID2MASK(Appl10),
  /* .TaskRefs             = */ OsCfg_App_Appl10_TaskRefs,
  /* .TaskCount            = */ OS_CFG_NUM_APP_APPL10_TASKS,
  /* .IsrCat2Refs          = */ OsCfg_App_Appl10_IsrRefs,
  /* .IsrCat2Count         = */ OS_CFG_NUM_APP_APPL10_ISRS,
  /* .IsrCat1Refs          = */ OsCfg_App_Appl10_Cat1IsrRefs,
  /* .IsrCat1Count         = */ OS_CFG_NUM_APP_APPL10_CAT1ISRS,
  /* .CounterRefs          = */ OsCfg_App_Appl10_CounterRefs,
  /* .CounterCount         = */ OS_CFG_NUM_APP_APPL10_COUNTERS,
  /* .AlarmRefs            = */ OsCfg_App_Appl10_AlarmRefs,
  /* .AlarmCount           = */ OS_CFG_NUM_APP_APPL10_ALARMS,
  /* .SchTRefs             = */ OsCfg_App_Appl10_SchTRefs,
  /* .SchTCount            = */ OS_CFG_NUM_APP_APPL10_SCHTS,
  /* .ServiceFunctions     = */ OsCfg_App_Appl10_ServiceRefs,
  /* .ServiceFunctionCount = */ OS_CFG_NUM_APP_APPL10_SERVICES,
  /* .StartupHookRef       = */ NULL_PTR,
  /* .ShutdownHookRef      = */ NULL_PTR,
  /* .ErrorHookRef         = */ NULL_PTR,
  /* .HookRefs             = */ OsCfg_App_Appl10_HookRefs,
  /* .HookCount            = */ OS_CFG_NUM_APP_APPL10_HOOKS,
  /* .RestartTask          = */ NULL_PTR,
  /* .IsTrusted            = */ FALSE,
  /* .IsPriveleged         = */ FALSE,
  /* .HasTimingProtectionDelay = */ FALSE,
  /* .Id                   = */ Appl10
};

/*! Object reference table for application alarms: SystemApplication_OsCore_CORE0 */
OS_LOCAL CONST(Os_AlarmConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0_AlarmRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_ALARMS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application counters: SystemApplication_OsCore_CORE0 */
OS_LOCAL CONST(Os_CounterConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0_CounterRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_COUNTERS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application hooks: SystemApplication_OsCore_CORE0 */
OS_LOCAL CONST(Os_HookConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0_HookRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_HOOKS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application ISRs: SystemApplication_OsCore_CORE0 */
OS_LOCAL CONST(Os_IsrConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0_IsrRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_ISRS + 1] =
{
  OS_TIMER_CASTCONFIG_TIMEREISR_2_ISR(OsCfg_Isr_CounterIsr_SystemTimer),
  NULL_PTR
};

/*! Object reference table for application category 1 (EXTERNAL) ISRs: SystemApplication_OsCore_CORE0 */
OS_LOCAL CONST(Os_IsrCat1ConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0_Cat1IsrRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_CAT1ISRS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application schedule tables: SystemApplication_OsCore_CORE0 */
OS_LOCAL CONST(Os_SchTConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0_SchTRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_SCHTS + 1] =
{
  NULL_PTR
};

/*! Object reference table for application tasks: SystemApplication_OsCore_CORE0 */
OS_LOCAL CONST(Os_TaskConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0_TaskRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_TASKS + 1] =
{
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_IdleTask_OsCore_CORE0),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_PreStart_CORE0),
  NULL_PTR
};

/*! Object reference table for application trusted functions: SystemApplication_OsCore_CORE0 */
OS_LOCAL CONST(Os_ServiceConfigRefType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0_ServiceRefs[OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_SERVICES + 1] =
{
  NULL_PTR
};

/*! Application configuration data: SystemApplication_OsCore_CORE0 */
CONST(Os_AppConfigType, OS_CONST) OsCfg_App_SystemApplication_OsCore_CORE0 =
{
  /* .Dyn                  = */ &OsCfg_App_SystemApplication_OsCore_CORE0_Dyn,
  /* .Core                 = */ &OsCfg_Core_OsCore_CORE0,
  /* .AccessRightId        = */ OS_APPID2MASK(SystemApplication_OsCore_CORE0),
  /* .TaskRefs             = */ OsCfg_App_SystemApplication_OsCore_CORE0_TaskRefs,
  /* .TaskCount            = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_TASKS,
  /* .IsrCat2Refs          = */ OsCfg_App_SystemApplication_OsCore_CORE0_IsrRefs,
  /* .IsrCat2Count         = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_ISRS,
  /* .IsrCat1Refs          = */ OsCfg_App_SystemApplication_OsCore_CORE0_Cat1IsrRefs,
  /* .IsrCat1Count         = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_CAT1ISRS,
  /* .CounterRefs          = */ OsCfg_App_SystemApplication_OsCore_CORE0_CounterRefs,
  /* .CounterCount         = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_COUNTERS,
  /* .AlarmRefs            = */ OsCfg_App_SystemApplication_OsCore_CORE0_AlarmRefs,
  /* .AlarmCount           = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_ALARMS,
  /* .SchTRefs             = */ OsCfg_App_SystemApplication_OsCore_CORE0_SchTRefs,
  /* .SchTCount            = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_SCHTS,
  /* .ServiceFunctions     = */ OsCfg_App_SystemApplication_OsCore_CORE0_ServiceRefs,
  /* .ServiceFunctionCount = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_SERVICES,
  /* .StartupHookRef       = */ NULL_PTR,
  /* .ShutdownHookRef      = */ NULL_PTR,
  /* .ErrorHookRef         = */ NULL_PTR,
  /* .HookRefs             = */ OsCfg_App_SystemApplication_OsCore_CORE0_HookRefs,
  /* .HookCount            = */ OS_CFG_NUM_APP_SYSTEMAPPLICATION_OSCORE_CORE0_HOOKS,
  /* .RestartTask          = */ NULL_PTR,
  /* .IsTrusted            = */ TRUE,
  /* .IsPriveleged         = */ TRUE,
  /* .HasTimingProtectionDelay = */ FALSE,
  /* .Id                   = */ SystemApplication_OsCore_CORE0
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for applications. */
CONSTP2CONST(Os_AppConfigType, OS_CONST, OS_CONST) OsCfg_AppRefs[OS_APPID_COUNT + 1] =
{
  &OsCfg_App_Appl0,
  &OsCfg_App_Appl10,
  &OsCfg_App_SystemApplication_OsCore_CORE0,
  NULL_PTR
};

#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE: Os_Application_Lcfg.c
 *********************************************************************************************************************/
