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
 *              File: Os_Stack_Lcfg.h
 *   Generation Time: 2018-03-29 15:27:23
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

#if !defined (OS_STACK_LCFG_H)                                                       /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_STACK_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Stack_Cfg.h"
# include "Os_Stack_Types.h"

/* Os kernel module dependencies */
# include "Os_Lcfg.h"

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

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_STACK_NTWRAPS_CMNMFGSRV_CALLSVC100_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Non-trusted function stack: NtWrapS_CmnMfgSrv_CallSvc100 */
/* User: [NtWrapS_CmnMfgSrv_CallSvc10] */
extern OS_STACK_DECLARE(OsCfg_Stack_NtWrapS_CmnMfgSrv_CallSvc100_Dyn, OS_CFG_SIZE_NTWRAPS_CMNMFGSRV_CALLSVC100_STACK);

# define OS_STOP_SEC_STACK_NTWRAPS_CMNMFGSRV_CALLSVC100_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_NTWRAPS_NVM_ERASENVBLOCK0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Non-trusted function stack: NtWrapS_NvM_EraseNvBlock0 */
/* User: [NtWrapS_NvM_EraseNvBlock] */
extern OS_STACK_DECLARE(OsCfg_Stack_NtWrapS_NvM_EraseNvBlock0_Dyn, OS_CFG_SIZE_NTWRAPS_NVM_ERASENVBLOCK0_STACK);

# define OS_STOP_SEC_STACK_NTWRAPS_NVM_ERASENVBLOCK0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_NTWRAPS_NVM_GETDATAINDEX0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Non-trusted function stack: NtWrapS_NvM_GetDataIndex0 */
/* User: [NtWrapS_NvM_GetDataIndex] */
extern OS_STACK_DECLARE(OsCfg_Stack_NtWrapS_NvM_GetDataIndex0_Dyn, OS_CFG_SIZE_NTWRAPS_NVM_GETDATAINDEX0_STACK);

# define OS_STOP_SEC_STACK_NTWRAPS_NVM_GETDATAINDEX0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_NTWRAPS_NVM_GETERRORSTATUS0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Non-trusted function stack: NtWrapS_NvM_GetErrorStatus0 */
/* User: [NtWrapS_NvM_GetErrorStatus] */
extern OS_STACK_DECLARE(OsCfg_Stack_NtWrapS_NvM_GetErrorStatus0_Dyn, OS_CFG_SIZE_NTWRAPS_NVM_GETERRORSTATUS0_STACK);

# define OS_STOP_SEC_STACK_NTWRAPS_NVM_GETERRORSTATUS0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_NTWRAPS_NVM_INVALIDATENVBLOCK0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Non-trusted function stack: NtWrapS_NvM_InvalidateNvBlock0 */
/* User: [NtWrapS_NvM_InvalidateNvBlock] */
extern OS_STACK_DECLARE(OsCfg_Stack_NtWrapS_NvM_InvalidateNvBlock0_Dyn, OS_CFG_SIZE_NTWRAPS_NVM_INVALIDATENVBLOCK0_STACK);

# define OS_STOP_SEC_STACK_NTWRAPS_NVM_INVALIDATENVBLOCK0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_NTWRAPS_NVM_READBLOCK0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Non-trusted function stack: NtWrapS_NvM_ReadBlock0 */
/* User: [NtWrapS_NvM_ReadBlock] */
extern OS_STACK_DECLARE(OsCfg_Stack_NtWrapS_NvM_ReadBlock0_Dyn, OS_CFG_SIZE_NTWRAPS_NVM_READBLOCK0_STACK);

# define OS_STOP_SEC_STACK_NTWRAPS_NVM_READBLOCK0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_NTWRAPS_NVM_SETBLOCKPROTECTION0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Non-trusted function stack: NtWrapS_NvM_SetBlockProtection0 */
/* User: [NtWrapS_NvM_SetBlockProtection] */
extern OS_STACK_DECLARE(OsCfg_Stack_NtWrapS_NvM_SetBlockProtection0_Dyn, OS_CFG_SIZE_NTWRAPS_NVM_SETBLOCKPROTECTION0_STACK);

# define OS_STOP_SEC_STACK_NTWRAPS_NVM_SETBLOCKPROTECTION0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_NTWRAPS_NVM_SETDATAINDEX0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Non-trusted function stack: NtWrapS_NvM_SetDataIndex0 */
/* User: [NtWrapS_NvM_SetDataIndex] */
extern OS_STACK_DECLARE(OsCfg_Stack_NtWrapS_NvM_SetDataIndex0_Dyn, OS_CFG_SIZE_NTWRAPS_NVM_SETDATAINDEX0_STACK);

# define OS_STOP_SEC_STACK_NTWRAPS_NVM_SETDATAINDEX0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_NTWRAPS_NVM_SETRAMBLOCKSTATUS0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Non-trusted function stack: NtWrapS_NvM_SetRamBlockStatus0 */
/* User: [NtWrapS_NvM_SetRamBlockStatus] */
extern OS_STACK_DECLARE(OsCfg_Stack_NtWrapS_NvM_SetRamBlockStatus0_Dyn, OS_CFG_SIZE_NTWRAPS_NVM_SETRAMBLOCKSTATUS0_STACK);

# define OS_STOP_SEC_STACK_NTWRAPS_NVM_SETRAMBLOCKSTATUS0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_NTWRAPS_NVM_WRITEBLOCK0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Non-trusted function stack: NtWrapS_NvM_WriteBlock0 */
/* User: [NtWrapS_NvM_WriteBlock] */
extern OS_STACK_DECLARE(OsCfg_Stack_NtWrapS_NvM_WriteBlock0_Dyn, OS_CFG_SIZE_NTWRAPS_NVM_WRITEBLOCK0_STACK);

# define OS_STOP_SEC_STACK_NTWRAPS_NVM_WRITEBLOCK0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Non-trusted function stack: NtWrapS_Rte_Call_CopyCalPageReq_Oper0 */
/* User: [NtWrapS_Rte_Call_CopyCalPageReq_Oper] */
extern OS_STACK_DECLARE(OsCfg_Stack_NtWrapS_Rte_Call_CopyCalPageReq_Oper0_Dyn, OS_CFG_SIZE_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER0_STACK);

# define OS_STOP_SEC_STACK_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Non-trusted function stack: NtWrapS_Rte_Call_SetCalPageReq_Oper0 */
/* User: [NtWrapS_Rte_Call_SetCalPageReq_Oper] */
extern OS_STACK_DECLARE(OsCfg_Stack_NtWrapS_Rte_Call_SetCalPageReq_Oper0_Dyn, OS_CFG_SIZE_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER0_STACK);

# define OS_STOP_SEC_STACK_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Non-trusted function stack: NtWrapS_SyncCrc_GetAvlCrcHwUnit0 */
/* User: [NtWrapS_SyncCrc_GetAvlCrcHwUnit] */
extern OS_STACK_DECLARE(OsCfg_Stack_NtWrapS_SyncCrc_GetAvlCrcHwUnit0_Dyn, OS_CFG_SIZE_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT0_STACK);

# define OS_STOP_SEC_STACK_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_NTWRAPS_SYNCCRC_RELSCRCHWUNIT0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Non-trusted function stack: NtWrapS_SyncCrc_RelsCrcHwUnit0 */
/* User: [NtWrapS_SyncCrc_RelsCrcHwUnit] */
extern OS_STACK_DECLARE(OsCfg_Stack_NtWrapS_SyncCrc_RelsCrcHwUnit0_Dyn, OS_CFG_SIZE_NTWRAPS_SYNCCRC_RELSCRCHWUNIT0_STACK);

# define OS_STOP_SEC_STACK_NTWRAPS_SYNCCRC_RELSCRCHWUNIT0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_ERROR_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Core error stack: OsCore_CORE0_Error */
/* User: [ErrorHook_OsCore_CORE0, OsCore_CORE0] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Error_Dyn, OS_CFG_SIZE_OSCORE_CORE0_ERROR_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_ERROR_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_ISR_LEVEL1_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared ISR level stack: OsCore_CORE0_Isr_Level1 */
/* User: [CanIsr_1] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Isr_Level1_Dyn, OS_CFG_SIZE_OSCORE_CORE0_ISR_LEVEL1_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_ISR_LEVEL1_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_ISR_LEVEL2_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared ISR level stack: OsCore_CORE0_Isr_Level2 */
/* User: [SPI_CSIH0_TIC_CAT2_ISR, SPI_CSIH0_TIRE_CAT2_ISR] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Isr_Level2_Dyn, OS_CFG_SIZE_OSCORE_CORE0_ISR_LEVEL2_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_ISR_LEVEL2_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_ISR_LEVEL3_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared ISR level stack: OsCore_CORE0_Isr_Level3 */
/* User: [CounterIsr_SystemTimer] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Isr_Level3_Dyn, OS_CFG_SIZE_OSCORE_CORE0_ISR_LEVEL3_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_ISR_LEVEL3_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_ISR_LEVEL4_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared ISR level stack: OsCore_CORE0_Isr_Level4 */
/* User: [MCU_ECM_EIC_CAT2_ISR] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Isr_Level4_Dyn, OS_CFG_SIZE_OSCORE_CORE0_ISR_LEVEL4_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_ISR_LEVEL4_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_KERNEL_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Core kernel stack: OsCore_CORE0_Kernel */
/* User: [OsCore_CORE0, Os_CoreInitHook_OsCore_CORE0] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Kernel_Dyn, OS_CFG_SIZE_OSCORE_CORE0_KERNEL_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_KERNEL_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_PROTECTION_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Core protection stack: OsCore_CORE0_Protection */
/* User: [OsCore_CORE0, ProtectionHook_OsCore_CORE0] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Protection_Dyn, OS_CFG_SIZE_OSCORE_CORE0_PROTECTION_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_PROTECTION_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_SHUTDOWN_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Core shutdown stack: OsCore_CORE0_Shutdown */
/* User: [OsCore_CORE0, ShutdownHook_OsCore_CORE0] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Shutdown_Dyn, OS_CFG_SIZE_OSCORE_CORE0_SHUTDOWN_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_SHUTDOWN_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_STARTUP_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Core startup stack: OsCore_CORE0_Startup */
/* User: [OsCore_CORE0, StartupHook_OsCore_CORE0] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Startup_Dyn, OS_CFG_SIZE_OSCORE_CORE0_STARTUP_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_STARTUP_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_TASK_PRIO0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore_CORE0_Task_Prio0 */
/* User: [Task_PreStart_CORE0] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Task_Prio0_Dyn, OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO0_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_TASK_PRIO0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_TASK_PRIO1_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore_CORE0_Task_Prio1 */
/* User: [Task_Init_Appl10] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Task_Prio1_Dyn, OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO1_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_TASK_PRIO1_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_TASK_PRIO10_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore_CORE0_Task_Prio10 */
/* User: [Task_100ms_Appl10] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Task_Prio10_Dyn, OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO10_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_TASK_PRIO10_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_TASK_PRIO11_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore_CORE0_Task_Prio11 */
/* User: [IdleTask_OsCore_CORE0] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Task_Prio11_Dyn, OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO11_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_TASK_PRIO11_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_TASK_PRIO2_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore_CORE0_Task_Prio2 */
/* User: [Task_InitBsw_Appl10] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Task_Prio2_Dyn, OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO2_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_TASK_PRIO2_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_TASK_PRIO3_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore_CORE0_Task_Prio3 */
/* User: [Task_4msBsw_Appl10] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Task_Prio3_Dyn, OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO3_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_TASK_PRIO3_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_TASK_PRIO4_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore_CORE0_Task_Prio4 */
/* User: [Task_2msTmplMonr_Appl10] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Task_Prio4_Dyn, OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO4_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_TASK_PRIO4_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_TASK_PRIO5_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore_CORE0_Task_Prio5 */
/* User: [Task_2ms_Appl10] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Task_Prio5_Dyn, OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO5_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_TASK_PRIO5_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_TASK_PRIO6_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore_CORE0_Task_Prio6 */
/* User: [Task_4ms_Appl10] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Task_Prio6_Dyn, OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO6_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_TASK_PRIO6_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_TASK_PRIO7_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore_CORE0_Task_Prio7 */
/* User: [Task_10ms_Appl10] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Task_Prio7_Dyn, OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO7_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_TASK_PRIO7_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_TASK_PRIO8_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore_CORE0_Task_Prio8 */
/* User: [Task_5msBsw_Appl10] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Task_Prio8_Dyn, OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO8_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_TASK_PRIO8_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_STACK_OSCORE_CORE0_TASK_PRIO9_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore_CORE0_Task_Prio9 */
/* User: [Task_10msBsw_Appl10] */
extern OS_STACK_DECLARE(OsCfg_Stack_OsCore_CORE0_Task_Prio9_Dyn, OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO9_STACK);

# define OS_STOP_SEC_STACK_OSCORE_CORE0_TASK_PRIO9_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Stack configuration data: NtWrapS_CmnMfgSrv_CallSvc100 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_NtWrapS_CmnMfgSrv_CallSvc100;

/*! Stack configuration data: NtWrapS_NvM_EraseNvBlock0 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_NtWrapS_NvM_EraseNvBlock0;

/*! Stack configuration data: NtWrapS_NvM_GetDataIndex0 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_NtWrapS_NvM_GetDataIndex0;

/*! Stack configuration data: NtWrapS_NvM_GetErrorStatus0 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_NtWrapS_NvM_GetErrorStatus0;

/*! Stack configuration data: NtWrapS_NvM_InvalidateNvBlock0 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_NtWrapS_NvM_InvalidateNvBlock0;

/*! Stack configuration data: NtWrapS_NvM_ReadBlock0 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_NtWrapS_NvM_ReadBlock0;

/*! Stack configuration data: NtWrapS_NvM_SetBlockProtection0 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_NtWrapS_NvM_SetBlockProtection0;

/*! Stack configuration data: NtWrapS_NvM_SetDataIndex0 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_NtWrapS_NvM_SetDataIndex0;

/*! Stack configuration data: NtWrapS_NvM_SetRamBlockStatus0 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_NtWrapS_NvM_SetRamBlockStatus0;

/*! Stack configuration data: NtWrapS_NvM_WriteBlock0 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_NtWrapS_NvM_WriteBlock0;

/*! Stack configuration data: NtWrapS_Rte_Call_CopyCalPageReq_Oper0 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_NtWrapS_Rte_Call_CopyCalPageReq_Oper0;

/*! Stack configuration data: NtWrapS_Rte_Call_SetCalPageReq_Oper0 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_NtWrapS_Rte_Call_SetCalPageReq_Oper0;

/*! Stack configuration data: NtWrapS_SyncCrc_GetAvlCrcHwUnit0 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_NtWrapS_SyncCrc_GetAvlCrcHwUnit0;

/*! Stack configuration data: NtWrapS_SyncCrc_RelsCrcHwUnit0 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_NtWrapS_SyncCrc_RelsCrcHwUnit0;

/*! Stack configuration data: OsCore_CORE0_Error */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Error;

/*! Stack configuration data: OsCore_CORE0_Isr_Level1 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Isr_Level1;

/*! Stack configuration data: OsCore_CORE0_Isr_Level2 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Isr_Level2;

/*! Stack configuration data: OsCore_CORE0_Isr_Level3 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Isr_Level3;

/*! Stack configuration data: OsCore_CORE0_Isr_Level4 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Isr_Level4;

/*! Stack configuration data: OsCore_CORE0_Kernel */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Kernel;

/*! Stack configuration data: OsCore_CORE0_Protection */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Protection;

/*! Stack configuration data: OsCore_CORE0_Shutdown */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Shutdown;

/*! Stack configuration data: OsCore_CORE0_Startup */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Startup;

/*! Stack configuration data: OsCore_CORE0_Task_Prio0 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Task_Prio0;

/*! Stack configuration data: OsCore_CORE0_Task_Prio1 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Task_Prio1;

/*! Stack configuration data: OsCore_CORE0_Task_Prio10 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Task_Prio10;

/*! Stack configuration data: OsCore_CORE0_Task_Prio11 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Task_Prio11;

/*! Stack configuration data: OsCore_CORE0_Task_Prio2 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Task_Prio2;

/*! Stack configuration data: OsCore_CORE0_Task_Prio3 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Task_Prio3;

/*! Stack configuration data: OsCore_CORE0_Task_Prio4 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Task_Prio4;

/*! Stack configuration data: OsCore_CORE0_Task_Prio5 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Task_Prio5;

/*! Stack configuration data: OsCore_CORE0_Task_Prio6 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Task_Prio6;

/*! Stack configuration data: OsCore_CORE0_Task_Prio7 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Task_Prio7;

/*! Stack configuration data: OsCore_CORE0_Task_Prio8 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Task_Prio8;

/*! Stack configuration data: OsCore_CORE0_Task_Prio9 */
extern CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore_CORE0_Task_Prio9;

# define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_STACK_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Stack_Lcfg.h
 *********************************************************************************************************************/
