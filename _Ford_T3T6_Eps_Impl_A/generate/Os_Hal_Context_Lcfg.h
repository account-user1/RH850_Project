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
 *              File: Os_Hal_Context_Lcfg.h
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

#if !defined (OS_HAL_CONTEXT_LCFG_H)                                                 /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_HAL_CONTEXT_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Hal_Context_Types.h"

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

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL dynamic hook context data: Os_CoreInitHook_OsCore_CORE0 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Os_CoreInitHook_OsCore_CORE0_Dyn;

/*! HAL dynamic hook context data: StartupHook_OsCore_CORE0 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_StartupHook_OsCore_CORE0_Dyn;

/*! HAL dynamic hook context data: ShutdownHook_OsCore_CORE0 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_ShutdownHook_OsCore_CORE0_Dyn;

/*! HAL dynamic hook context data: ErrorHook_OsCore_CORE0 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_ErrorHook_OsCore_CORE0_Dyn;

/*! HAL dynamic hook context data: ProtectionHook_OsCore_CORE0 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_ProtectionHook_OsCore_CORE0_Dyn;

/*! HAL dynamic ISR2 level context data: Level1 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore_CORE0_Isr_Level1_Dyn;

/*! HAL dynamic ISR2 level context data: Level2 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore_CORE0_Isr_Level2_Dyn;

/*! HAL dynamic ISR2 level context data: Level3 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore_CORE0_Isr_Level3_Dyn;

/*! HAL dynamic ISR2 level context data: Level4 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore_CORE0_Isr_Level4_Dyn;

/*! HAL dynamic task context data: IdleTask_OsCore_CORE0 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_IdleTask_OsCore_CORE0_Dyn;

/*! HAL dynamic task context data: Task_100ms_Appl10 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_100ms_Appl10_Dyn;

/*! HAL dynamic task context data: Task_10msBsw_Appl10 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_10msBsw_Appl10_Dyn;

/*! HAL dynamic task context data: Task_10ms_Appl10 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_10ms_Appl10_Dyn;

/*! HAL dynamic task context data: Task_2msTmplMonr_Appl10 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_2msTmplMonr_Appl10_Dyn;

/*! HAL dynamic task context data: Task_2ms_Appl10 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_2ms_Appl10_Dyn;

/*! HAL dynamic task context data: Task_4msBsw_Appl10 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_4msBsw_Appl10_Dyn;

/*! HAL dynamic task context data: Task_4ms_Appl10 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_4ms_Appl10_Dyn;

/*! HAL dynamic task context data: Task_5msBsw_Appl10 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_5msBsw_Appl10_Dyn;

/*! HAL dynamic task context data: Task_InitBsw_Appl10 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_InitBsw_Appl10_Dyn;

/*! HAL dynamic task context data: Task_Init_Appl10 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_Init_Appl10_Dyn;

/*! HAL dynamic task context data: Task_PreStart_CORE0 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_PreStart_CORE0_Dyn;

# define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL hook context configuration data: Os_CoreInitHook_OsCore_CORE0 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Os_CoreInitHook_OsCore_CORE0;

/*! HAL hook context configuration data: StartupHook_OsCore_CORE0 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_StartupHook_OsCore_CORE0;

/*! HAL hook context configuration data: ShutdownHook_OsCore_CORE0 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ShutdownHook_OsCore_CORE0;

/*! HAL hook context configuration data: ErrorHook_OsCore_CORE0 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ErrorHook_OsCore_CORE0;

/*! HAL hook context configuration data: ProtectionHook_OsCore_CORE0 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ProtectionHook_OsCore_CORE0;

/*! HAL ISR2 context configuration data: CanIsr_1 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1;

/*! HAL ISR2 context configuration data: CounterIsr_SystemTimer */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CounterIsr_SystemTimer;

/*! HAL ISR2 context configuration data: MCU_ECM_EIC_CAT2_ISR */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_MCU_ECM_EIC_CAT2_ISR;

/*! HAL ISR2 context configuration data: SPI_CSIH0_TIC_CAT2_ISR */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_SPI_CSIH0_TIC_CAT2_ISR;

/*! HAL ISR2 context configuration data: SPI_CSIH0_TIRE_CAT2_ISR */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_SPI_CSIH0_TIRE_CAT2_ISR;

/*! HAL task context configuration data: IdleTask_OsCore_CORE0 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_IdleTask_OsCore_CORE0;

/*! HAL task context configuration data: Task_100ms_Appl10 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_100ms_Appl10;

/*! HAL task context configuration data: Task_10msBsw_Appl10 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_10msBsw_Appl10;

/*! HAL task context configuration data: Task_10ms_Appl10 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_10ms_Appl10;

/*! HAL task context configuration data: Task_2msTmplMonr_Appl10 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_2msTmplMonr_Appl10;

/*! HAL task context configuration data: Task_2ms_Appl10 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_2ms_Appl10;

/*! HAL task context configuration data: Task_4msBsw_Appl10 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_4msBsw_Appl10;

/*! HAL task context configuration data: Task_4ms_Appl10 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_4ms_Appl10;

/*! HAL task context configuration data: Task_5msBsw_Appl10 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_5msBsw_Appl10;

/*! HAL task context configuration data: Task_InitBsw_Appl10 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_InitBsw_Appl10;

/*! HAL task context configuration data: Task_Init_Appl10 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_Init_Appl10;

/*! HAL task context configuration data: Task_PreStart_CORE0 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_PreStart_CORE0;

/*! HAL service function context configuration data: NtWrapS_CmnMfgSrv_CallSvc10 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_CmnMfgSrv_CallSvc10;

/*! HAL service function stack configuration data: NtWrapS_CmnMfgSrv_CallSvc100 */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_CmnMfgSrv_CallSvc100;

/*! HAL service function context configuration data: NtWrapS_NvM_EraseNvBlock */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_EraseNvBlock;

/*! HAL service function stack configuration data: NtWrapS_NvM_EraseNvBlock0 */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_EraseNvBlock0;

/*! HAL service function context configuration data: NtWrapS_NvM_GetDataIndex */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_GetDataIndex;

/*! HAL service function stack configuration data: NtWrapS_NvM_GetDataIndex0 */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_GetDataIndex0;

/*! HAL service function context configuration data: NtWrapS_NvM_GetErrorStatus */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_GetErrorStatus;

/*! HAL service function stack configuration data: NtWrapS_NvM_GetErrorStatus0 */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_GetErrorStatus0;

/*! HAL service function context configuration data: NtWrapS_NvM_InvalidateNvBlock */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_InvalidateNvBlock;

/*! HAL service function stack configuration data: NtWrapS_NvM_InvalidateNvBlock0 */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_InvalidateNvBlock0;

/*! HAL service function context configuration data: NtWrapS_NvM_ReadBlock */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_ReadBlock;

/*! HAL service function stack configuration data: NtWrapS_NvM_ReadBlock0 */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_ReadBlock0;

/*! HAL service function context configuration data: NtWrapS_NvM_SetBlockProtection */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_SetBlockProtection;

/*! HAL service function stack configuration data: NtWrapS_NvM_SetBlockProtection0 */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_SetBlockProtection0;

/*! HAL service function context configuration data: NtWrapS_NvM_SetDataIndex */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_SetDataIndex;

/*! HAL service function stack configuration data: NtWrapS_NvM_SetDataIndex0 */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_SetDataIndex0;

/*! HAL service function context configuration data: NtWrapS_NvM_SetRamBlockStatus */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_SetRamBlockStatus;

/*! HAL service function stack configuration data: NtWrapS_NvM_SetRamBlockStatus0 */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_SetRamBlockStatus0;

/*! HAL service function context configuration data: NtWrapS_NvM_WriteBlock */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_WriteBlock;

/*! HAL service function stack configuration data: NtWrapS_NvM_WriteBlock0 */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_WriteBlock0;

/*! HAL service function context configuration data: NtWrapS_Rte_Call_CopyCalPageReq_Oper */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_Rte_Call_CopyCalPageReq_Oper;

/*! HAL service function stack configuration data: NtWrapS_Rte_Call_CopyCalPageReq_Oper0 */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_Rte_Call_CopyCalPageReq_Oper0;

/*! HAL service function context configuration data: NtWrapS_Rte_Call_SetCalPageReq_Oper */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_Rte_Call_SetCalPageReq_Oper;

/*! HAL service function stack configuration data: NtWrapS_Rte_Call_SetCalPageReq_Oper0 */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_Rte_Call_SetCalPageReq_Oper0;

/*! HAL service function context configuration data: NtWrapS_SyncCrc_GetAvlCrcHwUnit */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_SyncCrc_GetAvlCrcHwUnit;

/*! HAL service function stack configuration data: NtWrapS_SyncCrc_GetAvlCrcHwUnit0 */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_SyncCrc_GetAvlCrcHwUnit0;

/*! HAL service function context configuration data: NtWrapS_SyncCrc_RelsCrcHwUnit */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_SyncCrc_RelsCrcHwUnit;

/*! HAL service function stack configuration data: NtWrapS_SyncCrc_RelsCrcHwUnit0 */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_SyncCrc_RelsCrcHwUnit0;

/*! HAL kernel stack configuration data: OsCore_CORE0_Kernel */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_OsCore_CORE0_Kernel;

# define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_HAL_CONTEXT_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Context_Lcfg.h
 *********************************************************************************************************************/
