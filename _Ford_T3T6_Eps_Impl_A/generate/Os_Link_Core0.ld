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
 *              File: Os_Link_Core0.ld
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

/*******  CODE sections  *********************************************************************************************/

#if defined ( OS_LINK_INTVEC_CODE )
.OS_INTVEC_CORE0_CODE ALIGN(512) :> .
_OS_INTVEC_CORE0_CODE_START = ADDR(.OS_INTVEC_CORE0_CODE);
_OS_INTVEC_CORE0_CODE_END = ENDADDR(.OS_INTVEC_CORE0_CODE);
#endif

#if defined ( OS_LINK_EXCVEC_CODE )
.OS_EXCVEC_CORE0_CODE ALIGN(512) :> .
_OS_EXCVEC_CORE0_CODE_START = ADDR(.OS_EXCVEC_CORE0_CODE);
_OS_EXCVEC_CORE0_CODE_END = ENDADDR(.OS_EXCVEC_CORE0_CODE);
#endif

#if defined ( OS_LINK_CALLOUT_CODE )
.OS_CanIsr_1_CODE ALIGN(4) :> .
_OS_CanIsr_1_CODE_START = ADDR(.OS_CanIsr_1_CODE);
_OS_CanIsr_1_CODE_END = ENDADDR(.OS_CanIsr_1_CODE);
.OS_MCU_ECM_EIC_CAT2_ISR_CODE ALIGN(4) :> .
_OS_MCU_ECM_EIC_CAT2_ISR_CODE_START = ADDR(.OS_MCU_ECM_EIC_CAT2_ISR_CODE);
_OS_MCU_ECM_EIC_CAT2_ISR_CODE_END = ENDADDR(.OS_MCU_ECM_EIC_CAT2_ISR_CODE);
.OS_NtWrapS_CmnMfgSrv_CallSvc10_CODE ALIGN(4) :> .
_OS_NtWrapS_CmnMfgSrv_CallSvc10_CODE_START = ADDR(.OS_NtWrapS_CmnMfgSrv_CallSvc10_CODE);
_OS_NtWrapS_CmnMfgSrv_CallSvc10_CODE_END = ENDADDR(.OS_NtWrapS_CmnMfgSrv_CallSvc10_CODE);
.OS_NtWrapS_NvM_EraseNvBlock_CODE ALIGN(4) :> .
_OS_NtWrapS_NvM_EraseNvBlock_CODE_START = ADDR(.OS_NtWrapS_NvM_EraseNvBlock_CODE);
_OS_NtWrapS_NvM_EraseNvBlock_CODE_END = ENDADDR(.OS_NtWrapS_NvM_EraseNvBlock_CODE);
.OS_NtWrapS_NvM_GetDataIndex_CODE ALIGN(4) :> .
_OS_NtWrapS_NvM_GetDataIndex_CODE_START = ADDR(.OS_NtWrapS_NvM_GetDataIndex_CODE);
_OS_NtWrapS_NvM_GetDataIndex_CODE_END = ENDADDR(.OS_NtWrapS_NvM_GetDataIndex_CODE);
.OS_NtWrapS_NvM_GetErrorStatus_CODE ALIGN(4) :> .
_OS_NtWrapS_NvM_GetErrorStatus_CODE_START = ADDR(.OS_NtWrapS_NvM_GetErrorStatus_CODE);
_OS_NtWrapS_NvM_GetErrorStatus_CODE_END = ENDADDR(.OS_NtWrapS_NvM_GetErrorStatus_CODE);
.OS_NtWrapS_NvM_InvalidateNvBlock_CODE ALIGN(4) :> .
_OS_NtWrapS_NvM_InvalidateNvBlock_CODE_START = ADDR(.OS_NtWrapS_NvM_InvalidateNvBlock_CODE);
_OS_NtWrapS_NvM_InvalidateNvBlock_CODE_END = ENDADDR(.OS_NtWrapS_NvM_InvalidateNvBlock_CODE);
.OS_NtWrapS_NvM_ReadBlock_CODE ALIGN(4) :> .
_OS_NtWrapS_NvM_ReadBlock_CODE_START = ADDR(.OS_NtWrapS_NvM_ReadBlock_CODE);
_OS_NtWrapS_NvM_ReadBlock_CODE_END = ENDADDR(.OS_NtWrapS_NvM_ReadBlock_CODE);
.OS_NtWrapS_NvM_SetBlockProtection_CODE ALIGN(4) :> .
_OS_NtWrapS_NvM_SetBlockProtection_CODE_START = ADDR(.OS_NtWrapS_NvM_SetBlockProtection_CODE);
_OS_NtWrapS_NvM_SetBlockProtection_CODE_END = ENDADDR(.OS_NtWrapS_NvM_SetBlockProtection_CODE);
.OS_NtWrapS_NvM_SetDataIndex_CODE ALIGN(4) :> .
_OS_NtWrapS_NvM_SetDataIndex_CODE_START = ADDR(.OS_NtWrapS_NvM_SetDataIndex_CODE);
_OS_NtWrapS_NvM_SetDataIndex_CODE_END = ENDADDR(.OS_NtWrapS_NvM_SetDataIndex_CODE);
.OS_NtWrapS_NvM_SetRamBlockStatus_CODE ALIGN(4) :> .
_OS_NtWrapS_NvM_SetRamBlockStatus_CODE_START = ADDR(.OS_NtWrapS_NvM_SetRamBlockStatus_CODE);
_OS_NtWrapS_NvM_SetRamBlockStatus_CODE_END = ENDADDR(.OS_NtWrapS_NvM_SetRamBlockStatus_CODE);
.OS_NtWrapS_NvM_WriteBlock_CODE ALIGN(4) :> .
_OS_NtWrapS_NvM_WriteBlock_CODE_START = ADDR(.OS_NtWrapS_NvM_WriteBlock_CODE);
_OS_NtWrapS_NvM_WriteBlock_CODE_END = ENDADDR(.OS_NtWrapS_NvM_WriteBlock_CODE);
.OS_NtWrapS_Rte_Call_CopyCalPageReq_Oper_CODE ALIGN(4) :> .
_OS_NtWrapS_Rte_Call_CopyCalPageReq_Oper_CODE_START = ADDR(.OS_NtWrapS_Rte_Call_CopyCalPageReq_Oper_CODE);
_OS_NtWrapS_Rte_Call_CopyCalPageReq_Oper_CODE_END = ENDADDR(.OS_NtWrapS_Rte_Call_CopyCalPageReq_Oper_CODE);
.OS_NtWrapS_Rte_Call_SetCalPageReq_Oper_CODE ALIGN(4) :> .
_OS_NtWrapS_Rte_Call_SetCalPageReq_Oper_CODE_START = ADDR(.OS_NtWrapS_Rte_Call_SetCalPageReq_Oper_CODE);
_OS_NtWrapS_Rte_Call_SetCalPageReq_Oper_CODE_END = ENDADDR(.OS_NtWrapS_Rte_Call_SetCalPageReq_Oper_CODE);
.OS_NtWrapS_SyncCrc_GetAvlCrcHwUnit_CODE ALIGN(4) :> .
_OS_NtWrapS_SyncCrc_GetAvlCrcHwUnit_CODE_START = ADDR(.OS_NtWrapS_SyncCrc_GetAvlCrcHwUnit_CODE);
_OS_NtWrapS_SyncCrc_GetAvlCrcHwUnit_CODE_END = ENDADDR(.OS_NtWrapS_SyncCrc_GetAvlCrcHwUnit_CODE);
.OS_NtWrapS_SyncCrc_RelsCrcHwUnit_CODE ALIGN(4) :> .
_OS_NtWrapS_SyncCrc_RelsCrcHwUnit_CODE_START = ADDR(.OS_NtWrapS_SyncCrc_RelsCrcHwUnit_CODE);
_OS_NtWrapS_SyncCrc_RelsCrcHwUnit_CODE_END = ENDADDR(.OS_NtWrapS_SyncCrc_RelsCrcHwUnit_CODE);
.OS_SPI_CSIH0_TIC_CAT2_ISR_CODE ALIGN(4) :> .
_OS_SPI_CSIH0_TIC_CAT2_ISR_CODE_START = ADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_CODE);
_OS_SPI_CSIH0_TIC_CAT2_ISR_CODE_END = ENDADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_CODE);
.OS_SPI_CSIH0_TIRE_CAT2_ISR_CODE ALIGN(4) :> .
_OS_SPI_CSIH0_TIRE_CAT2_ISR_CODE_START = ADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_CODE);
_OS_SPI_CSIH0_TIRE_CAT2_ISR_CODE_END = ENDADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_CODE);
.OS_Task_100ms_Appl10_CODE ALIGN(4) :> .
_OS_Task_100ms_Appl10_CODE_START = ADDR(.OS_Task_100ms_Appl10_CODE);
_OS_Task_100ms_Appl10_CODE_END = ENDADDR(.OS_Task_100ms_Appl10_CODE);
.OS_Task_10msBsw_Appl10_CODE ALIGN(4) :> .
_OS_Task_10msBsw_Appl10_CODE_START = ADDR(.OS_Task_10msBsw_Appl10_CODE);
_OS_Task_10msBsw_Appl10_CODE_END = ENDADDR(.OS_Task_10msBsw_Appl10_CODE);
.OS_Task_10ms_Appl10_CODE ALIGN(4) :> .
_OS_Task_10ms_Appl10_CODE_START = ADDR(.OS_Task_10ms_Appl10_CODE);
_OS_Task_10ms_Appl10_CODE_END = ENDADDR(.OS_Task_10ms_Appl10_CODE);
.OS_Task_2msTmplMonr_Appl10_CODE ALIGN(4) :> .
_OS_Task_2msTmplMonr_Appl10_CODE_START = ADDR(.OS_Task_2msTmplMonr_Appl10_CODE);
_OS_Task_2msTmplMonr_Appl10_CODE_END = ENDADDR(.OS_Task_2msTmplMonr_Appl10_CODE);
.OS_Task_2ms_Appl10_CODE ALIGN(4) :> .
_OS_Task_2ms_Appl10_CODE_START = ADDR(.OS_Task_2ms_Appl10_CODE);
_OS_Task_2ms_Appl10_CODE_END = ENDADDR(.OS_Task_2ms_Appl10_CODE);
.OS_Task_4msBsw_Appl10_CODE ALIGN(4) :> .
_OS_Task_4msBsw_Appl10_CODE_START = ADDR(.OS_Task_4msBsw_Appl10_CODE);
_OS_Task_4msBsw_Appl10_CODE_END = ENDADDR(.OS_Task_4msBsw_Appl10_CODE);
.OS_Task_4ms_Appl10_CODE ALIGN(4) :> .
_OS_Task_4ms_Appl10_CODE_START = ADDR(.OS_Task_4ms_Appl10_CODE);
_OS_Task_4ms_Appl10_CODE_END = ENDADDR(.OS_Task_4ms_Appl10_CODE);
.OS_Task_5msBsw_Appl10_CODE ALIGN(4) :> .
_OS_Task_5msBsw_Appl10_CODE_START = ADDR(.OS_Task_5msBsw_Appl10_CODE);
_OS_Task_5msBsw_Appl10_CODE_END = ENDADDR(.OS_Task_5msBsw_Appl10_CODE);
.OS_Task_InitBsw_Appl10_CODE ALIGN(4) :> .
_OS_Task_InitBsw_Appl10_CODE_START = ADDR(.OS_Task_InitBsw_Appl10_CODE);
_OS_Task_InitBsw_Appl10_CODE_END = ENDADDR(.OS_Task_InitBsw_Appl10_CODE);
.OS_Task_Init_Appl10_CODE ALIGN(4) :> .
_OS_Task_Init_Appl10_CODE_START = ADDR(.OS_Task_Init_Appl10_CODE);
_OS_Task_Init_Appl10_CODE_END = ENDADDR(.OS_Task_Init_Appl10_CODE);
.OS_Task_PreStart_CORE0_CODE ALIGN(4) :> .
_OS_Task_PreStart_CORE0_CODE_START = ADDR(.OS_Task_PreStart_CORE0_CODE);
_OS_Task_PreStart_CORE0_CODE_END = ENDADDR(.OS_Task_PreStart_CORE0_CODE);
#endif

#ifdef OS_LINK_INTVEC_CODE
# undef OS_LINK_INTVEC_CODE
#endif

#ifdef OS_LINK_EXCVEC_CODE
# undef OS_LINK_EXCVEC_CODE
#endif

#ifdef OS_LINK_CALLOUT_CODE
# undef OS_LINK_CALLOUT_CODE
#endif


/*******  CONST sections  ********************************************************************************************/

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_KERNEL ) || defined ( OS_LINK_CONST_KERNEL_FAR )
.OS_CORE0_CONST ALIGN(4) :> .
_OS_CORE0_CONST_START = ADDR(.OS_CORE0_CONST);
_OS_CORE0_CONST_END = ENDADDR(.OS_CORE0_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_KERNEL ) || defined ( OS_LINK_CONST_KERNEL_NEAR )
.OS_CORE0_CONST_FAST ALIGN(4) :> .
_OS_CORE0_CONST_FAST_START = ADDR(.OS_CORE0_CONST_FAST);
_OS_CORE0_CONST_FAST_END = ENDADDR(.OS_CORE0_CONST_FAST);
#endif

#if defined ( OS_LINK_INTVEC_CONST )
.OS_INTVEC_CORE0_CONST ALIGN(4) :> .
_OS_INTVEC_CORE0_CONST_START = ADDR(.OS_INTVEC_CORE0_CONST);
_OS_INTVEC_CORE0_CONST_END = ENDADDR(.OS_INTVEC_CORE0_CONST);
#endif

#if defined ( OS_LINK_EXCVEC_CONST )
.OS_EXCVEC_CORE0_CONST ALIGN(4) :> .
_OS_EXCVEC_CORE0_CONST_START = ADDR(.OS_EXCVEC_CORE0_CONST);
_OS_EXCVEC_CORE0_CONST_END = ENDADDR(.OS_EXCVEC_CORE0_CONST);
#endif


#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_APPL0 ) || defined ( OS_LINK_CONST_APP_APPL0_FAR )
.OS_Appl0_CONST ALIGN(4) :> .
_OS_Appl0_CONST_START = ADDR(.OS_Appl0_CONST);
_OS_Appl0_CONST_END = ENDADDR(.OS_Appl0_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_APPL0 ) || defined ( OS_LINK_CONST_APP_APPL0_NEAR )
.OS_Appl0_CONST_FAST ALIGN(4) :> .
_OS_Appl0_CONST_FAST_START = ADDR(.OS_Appl0_CONST_FAST);
_OS_Appl0_CONST_FAST_END = ENDADDR(.OS_Appl0_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_APP_APPL0
# undef OS_LINK_CONST_APP_APPL0
#endif

#ifdef OS_LINK_CONST_APP_APPL0_FAR
# undef OS_LINK_CONST_APP_APPL0_FAR
#endif

#ifdef OS_LINK_CONST_APP_APPL0_NEAR
# undef OS_LINK_CONST_APP_APPL0_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_APPL10 ) || defined ( OS_LINK_CONST_APP_APPL10_FAR )
.OS_Appl10_CONST ALIGN(4) :> .
_OS_Appl10_CONST_START = ADDR(.OS_Appl10_CONST);
_OS_Appl10_CONST_END = ENDADDR(.OS_Appl10_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_APPL10 ) || defined ( OS_LINK_CONST_APP_APPL10_NEAR )
.OS_Appl10_CONST_FAST ALIGN(4) :> .
_OS_Appl10_CONST_FAST_START = ADDR(.OS_Appl10_CONST_FAST);
_OS_Appl10_CONST_FAST_END = ENDADDR(.OS_Appl10_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_APP_APPL10
# undef OS_LINK_CONST_APP_APPL10
#endif

#ifdef OS_LINK_CONST_APP_APPL10_FAR
# undef OS_LINK_CONST_APP_APPL10_FAR
#endif

#ifdef OS_LINK_CONST_APP_APPL10_NEAR
# undef OS_LINK_CONST_APP_APPL10_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR )
.OS_SystemApplication_OsCore_CORE0_CONST ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_CONST_START = ADDR(.OS_SystemApplication_OsCore_CORE0_CONST);
_OS_SystemApplication_OsCore_CORE0_CONST_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR )
.OS_SystemApplication_OsCore_CORE0_CONST_FAST ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_CONST_FAST_START = ADDR(.OS_SystemApplication_OsCore_CORE0_CONST_FAST);
_OS_SystemApplication_OsCore_CORE0_CONST_FAST_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0
# undef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0
#endif

#ifdef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR
# undef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR
#endif

#ifdef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR
# undef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0_FAR )
.OS_IdleTask_OsCore_CORE0_CONST ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_CONST_START = ADDR(.OS_IdleTask_OsCore_CORE0_CONST);
_OS_IdleTask_OsCore_CORE0_CONST_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0_NEAR )
.OS_IdleTask_OsCore_CORE0_CONST_FAST ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_CONST_FAST_START = ADDR(.OS_IdleTask_OsCore_CORE0_CONST_FAST);
_OS_IdleTask_OsCore_CORE0_CONST_FAST_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0
# undef OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0
#endif

#ifdef OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0_FAR
# undef OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0_FAR
#endif

#ifdef OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0_NEAR
# undef OS_LINK_CONST_TASK_IDLETASK_OSCORE_CORE0_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_100MS_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_100MS_APPL10_FAR )
.OS_Task_100ms_Appl10_CONST ALIGN(4) :> .
_OS_Task_100ms_Appl10_CONST_START = ADDR(.OS_Task_100ms_Appl10_CONST);
_OS_Task_100ms_Appl10_CONST_END = ENDADDR(.OS_Task_100ms_Appl10_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_100MS_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_100MS_APPL10_NEAR )
.OS_Task_100ms_Appl10_CONST_FAST ALIGN(4) :> .
_OS_Task_100ms_Appl10_CONST_FAST_START = ADDR(.OS_Task_100ms_Appl10_CONST_FAST);
_OS_Task_100ms_Appl10_CONST_FAST_END = ENDADDR(.OS_Task_100ms_Appl10_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_TASK_TASK_100MS_APPL10
# undef OS_LINK_CONST_TASK_TASK_100MS_APPL10
#endif

#ifdef OS_LINK_CONST_TASK_TASK_100MS_APPL10_FAR
# undef OS_LINK_CONST_TASK_TASK_100MS_APPL10_FAR
#endif

#ifdef OS_LINK_CONST_TASK_TASK_100MS_APPL10_NEAR
# undef OS_LINK_CONST_TASK_TASK_100MS_APPL10_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_10MSBSW_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_10MSBSW_APPL10_FAR )
.OS_Task_10msBsw_Appl10_CONST ALIGN(4) :> .
_OS_Task_10msBsw_Appl10_CONST_START = ADDR(.OS_Task_10msBsw_Appl10_CONST);
_OS_Task_10msBsw_Appl10_CONST_END = ENDADDR(.OS_Task_10msBsw_Appl10_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_10MSBSW_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_10MSBSW_APPL10_NEAR )
.OS_Task_10msBsw_Appl10_CONST_FAST ALIGN(4) :> .
_OS_Task_10msBsw_Appl10_CONST_FAST_START = ADDR(.OS_Task_10msBsw_Appl10_CONST_FAST);
_OS_Task_10msBsw_Appl10_CONST_FAST_END = ENDADDR(.OS_Task_10msBsw_Appl10_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_TASK_TASK_10MSBSW_APPL10
# undef OS_LINK_CONST_TASK_TASK_10MSBSW_APPL10
#endif

#ifdef OS_LINK_CONST_TASK_TASK_10MSBSW_APPL10_FAR
# undef OS_LINK_CONST_TASK_TASK_10MSBSW_APPL10_FAR
#endif

#ifdef OS_LINK_CONST_TASK_TASK_10MSBSW_APPL10_NEAR
# undef OS_LINK_CONST_TASK_TASK_10MSBSW_APPL10_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_10MS_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_10MS_APPL10_FAR )
.OS_Task_10ms_Appl10_CONST ALIGN(4) :> .
_OS_Task_10ms_Appl10_CONST_START = ADDR(.OS_Task_10ms_Appl10_CONST);
_OS_Task_10ms_Appl10_CONST_END = ENDADDR(.OS_Task_10ms_Appl10_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_10MS_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_10MS_APPL10_NEAR )
.OS_Task_10ms_Appl10_CONST_FAST ALIGN(4) :> .
_OS_Task_10ms_Appl10_CONST_FAST_START = ADDR(.OS_Task_10ms_Appl10_CONST_FAST);
_OS_Task_10ms_Appl10_CONST_FAST_END = ENDADDR(.OS_Task_10ms_Appl10_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_TASK_TASK_10MS_APPL10
# undef OS_LINK_CONST_TASK_TASK_10MS_APPL10
#endif

#ifdef OS_LINK_CONST_TASK_TASK_10MS_APPL10_FAR
# undef OS_LINK_CONST_TASK_TASK_10MS_APPL10_FAR
#endif

#ifdef OS_LINK_CONST_TASK_TASK_10MS_APPL10_NEAR
# undef OS_LINK_CONST_TASK_TASK_10MS_APPL10_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_2MSTMPLMONR_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_2MSTMPLMONR_APPL10_FAR )
.OS_Task_2msTmplMonr_Appl10_CONST ALIGN(4) :> .
_OS_Task_2msTmplMonr_Appl10_CONST_START = ADDR(.OS_Task_2msTmplMonr_Appl10_CONST);
_OS_Task_2msTmplMonr_Appl10_CONST_END = ENDADDR(.OS_Task_2msTmplMonr_Appl10_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_2MSTMPLMONR_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_2MSTMPLMONR_APPL10_NEAR )
.OS_Task_2msTmplMonr_Appl10_CONST_FAST ALIGN(4) :> .
_OS_Task_2msTmplMonr_Appl10_CONST_FAST_START = ADDR(.OS_Task_2msTmplMonr_Appl10_CONST_FAST);
_OS_Task_2msTmplMonr_Appl10_CONST_FAST_END = ENDADDR(.OS_Task_2msTmplMonr_Appl10_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_TASK_TASK_2MSTMPLMONR_APPL10
# undef OS_LINK_CONST_TASK_TASK_2MSTMPLMONR_APPL10
#endif

#ifdef OS_LINK_CONST_TASK_TASK_2MSTMPLMONR_APPL10_FAR
# undef OS_LINK_CONST_TASK_TASK_2MSTMPLMONR_APPL10_FAR
#endif

#ifdef OS_LINK_CONST_TASK_TASK_2MSTMPLMONR_APPL10_NEAR
# undef OS_LINK_CONST_TASK_TASK_2MSTMPLMONR_APPL10_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_2MS_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_2MS_APPL10_FAR )
.OS_Task_2ms_Appl10_CONST ALIGN(4) :> .
_OS_Task_2ms_Appl10_CONST_START = ADDR(.OS_Task_2ms_Appl10_CONST);
_OS_Task_2ms_Appl10_CONST_END = ENDADDR(.OS_Task_2ms_Appl10_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_2MS_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_2MS_APPL10_NEAR )
.OS_Task_2ms_Appl10_CONST_FAST ALIGN(4) :> .
_OS_Task_2ms_Appl10_CONST_FAST_START = ADDR(.OS_Task_2ms_Appl10_CONST_FAST);
_OS_Task_2ms_Appl10_CONST_FAST_END = ENDADDR(.OS_Task_2ms_Appl10_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_TASK_TASK_2MS_APPL10
# undef OS_LINK_CONST_TASK_TASK_2MS_APPL10
#endif

#ifdef OS_LINK_CONST_TASK_TASK_2MS_APPL10_FAR
# undef OS_LINK_CONST_TASK_TASK_2MS_APPL10_FAR
#endif

#ifdef OS_LINK_CONST_TASK_TASK_2MS_APPL10_NEAR
# undef OS_LINK_CONST_TASK_TASK_2MS_APPL10_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_4MSBSW_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_4MSBSW_APPL10_FAR )
.OS_Task_4msBsw_Appl10_CONST ALIGN(4) :> .
_OS_Task_4msBsw_Appl10_CONST_START = ADDR(.OS_Task_4msBsw_Appl10_CONST);
_OS_Task_4msBsw_Appl10_CONST_END = ENDADDR(.OS_Task_4msBsw_Appl10_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_4MSBSW_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_4MSBSW_APPL10_NEAR )
.OS_Task_4msBsw_Appl10_CONST_FAST ALIGN(4) :> .
_OS_Task_4msBsw_Appl10_CONST_FAST_START = ADDR(.OS_Task_4msBsw_Appl10_CONST_FAST);
_OS_Task_4msBsw_Appl10_CONST_FAST_END = ENDADDR(.OS_Task_4msBsw_Appl10_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_TASK_TASK_4MSBSW_APPL10
# undef OS_LINK_CONST_TASK_TASK_4MSBSW_APPL10
#endif

#ifdef OS_LINK_CONST_TASK_TASK_4MSBSW_APPL10_FAR
# undef OS_LINK_CONST_TASK_TASK_4MSBSW_APPL10_FAR
#endif

#ifdef OS_LINK_CONST_TASK_TASK_4MSBSW_APPL10_NEAR
# undef OS_LINK_CONST_TASK_TASK_4MSBSW_APPL10_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_4MS_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_4MS_APPL10_FAR )
.OS_Task_4ms_Appl10_CONST ALIGN(4) :> .
_OS_Task_4ms_Appl10_CONST_START = ADDR(.OS_Task_4ms_Appl10_CONST);
_OS_Task_4ms_Appl10_CONST_END = ENDADDR(.OS_Task_4ms_Appl10_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_4MS_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_4MS_APPL10_NEAR )
.OS_Task_4ms_Appl10_CONST_FAST ALIGN(4) :> .
_OS_Task_4ms_Appl10_CONST_FAST_START = ADDR(.OS_Task_4ms_Appl10_CONST_FAST);
_OS_Task_4ms_Appl10_CONST_FAST_END = ENDADDR(.OS_Task_4ms_Appl10_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_TASK_TASK_4MS_APPL10
# undef OS_LINK_CONST_TASK_TASK_4MS_APPL10
#endif

#ifdef OS_LINK_CONST_TASK_TASK_4MS_APPL10_FAR
# undef OS_LINK_CONST_TASK_TASK_4MS_APPL10_FAR
#endif

#ifdef OS_LINK_CONST_TASK_TASK_4MS_APPL10_NEAR
# undef OS_LINK_CONST_TASK_TASK_4MS_APPL10_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_5MSBSW_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_5MSBSW_APPL10_FAR )
.OS_Task_5msBsw_Appl10_CONST ALIGN(4) :> .
_OS_Task_5msBsw_Appl10_CONST_START = ADDR(.OS_Task_5msBsw_Appl10_CONST);
_OS_Task_5msBsw_Appl10_CONST_END = ENDADDR(.OS_Task_5msBsw_Appl10_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_5MSBSW_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_5MSBSW_APPL10_NEAR )
.OS_Task_5msBsw_Appl10_CONST_FAST ALIGN(4) :> .
_OS_Task_5msBsw_Appl10_CONST_FAST_START = ADDR(.OS_Task_5msBsw_Appl10_CONST_FAST);
_OS_Task_5msBsw_Appl10_CONST_FAST_END = ENDADDR(.OS_Task_5msBsw_Appl10_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_TASK_TASK_5MSBSW_APPL10
# undef OS_LINK_CONST_TASK_TASK_5MSBSW_APPL10
#endif

#ifdef OS_LINK_CONST_TASK_TASK_5MSBSW_APPL10_FAR
# undef OS_LINK_CONST_TASK_TASK_5MSBSW_APPL10_FAR
#endif

#ifdef OS_LINK_CONST_TASK_TASK_5MSBSW_APPL10_NEAR
# undef OS_LINK_CONST_TASK_TASK_5MSBSW_APPL10_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_INITBSW_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_INITBSW_APPL10_FAR )
.OS_Task_InitBsw_Appl10_CONST ALIGN(4) :> .
_OS_Task_InitBsw_Appl10_CONST_START = ADDR(.OS_Task_InitBsw_Appl10_CONST);
_OS_Task_InitBsw_Appl10_CONST_END = ENDADDR(.OS_Task_InitBsw_Appl10_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_INITBSW_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_INITBSW_APPL10_NEAR )
.OS_Task_InitBsw_Appl10_CONST_FAST ALIGN(4) :> .
_OS_Task_InitBsw_Appl10_CONST_FAST_START = ADDR(.OS_Task_InitBsw_Appl10_CONST_FAST);
_OS_Task_InitBsw_Appl10_CONST_FAST_END = ENDADDR(.OS_Task_InitBsw_Appl10_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_TASK_TASK_INITBSW_APPL10
# undef OS_LINK_CONST_TASK_TASK_INITBSW_APPL10
#endif

#ifdef OS_LINK_CONST_TASK_TASK_INITBSW_APPL10_FAR
# undef OS_LINK_CONST_TASK_TASK_INITBSW_APPL10_FAR
#endif

#ifdef OS_LINK_CONST_TASK_TASK_INITBSW_APPL10_NEAR
# undef OS_LINK_CONST_TASK_TASK_INITBSW_APPL10_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_INIT_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_INIT_APPL10_FAR )
.OS_Task_Init_Appl10_CONST ALIGN(4) :> .
_OS_Task_Init_Appl10_CONST_START = ADDR(.OS_Task_Init_Appl10_CONST);
_OS_Task_Init_Appl10_CONST_END = ENDADDR(.OS_Task_Init_Appl10_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_INIT_APPL10 ) || defined ( OS_LINK_CONST_TASK_TASK_INIT_APPL10_NEAR )
.OS_Task_Init_Appl10_CONST_FAST ALIGN(4) :> .
_OS_Task_Init_Appl10_CONST_FAST_START = ADDR(.OS_Task_Init_Appl10_CONST_FAST);
_OS_Task_Init_Appl10_CONST_FAST_END = ENDADDR(.OS_Task_Init_Appl10_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_TASK_TASK_INIT_APPL10
# undef OS_LINK_CONST_TASK_TASK_INIT_APPL10
#endif

#ifdef OS_LINK_CONST_TASK_TASK_INIT_APPL10_FAR
# undef OS_LINK_CONST_TASK_TASK_INIT_APPL10_FAR
#endif

#ifdef OS_LINK_CONST_TASK_TASK_INIT_APPL10_NEAR
# undef OS_LINK_CONST_TASK_TASK_INIT_APPL10_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_PRESTART_CORE0 ) || defined ( OS_LINK_CONST_TASK_TASK_PRESTART_CORE0_FAR )
.OS_Task_PreStart_CORE0_CONST ALIGN(4) :> .
_OS_Task_PreStart_CORE0_CONST_START = ADDR(.OS_Task_PreStart_CORE0_CONST);
_OS_Task_PreStart_CORE0_CONST_END = ENDADDR(.OS_Task_PreStart_CORE0_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_TASK_PRESTART_CORE0 ) || defined ( OS_LINK_CONST_TASK_TASK_PRESTART_CORE0_NEAR )
.OS_Task_PreStart_CORE0_CONST_FAST ALIGN(4) :> .
_OS_Task_PreStart_CORE0_CONST_FAST_START = ADDR(.OS_Task_PreStart_CORE0_CONST_FAST);
_OS_Task_PreStart_CORE0_CONST_FAST_END = ENDADDR(.OS_Task_PreStart_CORE0_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_TASK_TASK_PRESTART_CORE0
# undef OS_LINK_CONST_TASK_TASK_PRESTART_CORE0
#endif

#ifdef OS_LINK_CONST_TASK_TASK_PRESTART_CORE0_FAR
# undef OS_LINK_CONST_TASK_TASK_PRESTART_CORE0_FAR
#endif

#ifdef OS_LINK_CONST_TASK_TASK_PRESTART_CORE0_NEAR
# undef OS_LINK_CONST_TASK_TASK_PRESTART_CORE0_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_CANISR_1 ) || defined ( OS_LINK_CONST_ISR_CANISR_1_FAR )
.OS_CanIsr_1_CONST ALIGN(4) :> .
_OS_CanIsr_1_CONST_START = ADDR(.OS_CanIsr_1_CONST);
_OS_CanIsr_1_CONST_END = ENDADDR(.OS_CanIsr_1_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_CANISR_1 ) || defined ( OS_LINK_CONST_ISR_CANISR_1_NEAR )
.OS_CanIsr_1_CONST_FAST ALIGN(4) :> .
_OS_CanIsr_1_CONST_FAST_START = ADDR(.OS_CanIsr_1_CONST_FAST);
_OS_CanIsr_1_CONST_FAST_END = ENDADDR(.OS_CanIsr_1_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_ISR_CANISR_1
# undef OS_LINK_CONST_ISR_CANISR_1
#endif

#ifdef OS_LINK_CONST_ISR_CANISR_1_FAR
# undef OS_LINK_CONST_ISR_CANISR_1_FAR
#endif

#ifdef OS_LINK_CONST_ISR_CANISR_1_NEAR
# undef OS_LINK_CONST_ISR_CANISR_1_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER ) || defined ( OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER_FAR )
.OS_CounterIsr_SystemTimer_CONST ALIGN(4) :> .
_OS_CounterIsr_SystemTimer_CONST_START = ADDR(.OS_CounterIsr_SystemTimer_CONST);
_OS_CounterIsr_SystemTimer_CONST_END = ENDADDR(.OS_CounterIsr_SystemTimer_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER ) || defined ( OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER_NEAR )
.OS_CounterIsr_SystemTimer_CONST_FAST ALIGN(4) :> .
_OS_CounterIsr_SystemTimer_CONST_FAST_START = ADDR(.OS_CounterIsr_SystemTimer_CONST_FAST);
_OS_CounterIsr_SystemTimer_CONST_FAST_END = ENDADDR(.OS_CounterIsr_SystemTimer_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER
# undef OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER
#endif

#ifdef OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER_FAR
# undef OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER_FAR
#endif

#ifdef OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER_NEAR
# undef OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_MCU_ECM_EIC_CAT2_ISR ) || defined ( OS_LINK_CONST_ISR_MCU_ECM_EIC_CAT2_ISR_FAR )
.OS_MCU_ECM_EIC_CAT2_ISR_CONST ALIGN(4) :> .
_OS_MCU_ECM_EIC_CAT2_ISR_CONST_START = ADDR(.OS_MCU_ECM_EIC_CAT2_ISR_CONST);
_OS_MCU_ECM_EIC_CAT2_ISR_CONST_END = ENDADDR(.OS_MCU_ECM_EIC_CAT2_ISR_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_MCU_ECM_EIC_CAT2_ISR ) || defined ( OS_LINK_CONST_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR )
.OS_MCU_ECM_EIC_CAT2_ISR_CONST_FAST ALIGN(4) :> .
_OS_MCU_ECM_EIC_CAT2_ISR_CONST_FAST_START = ADDR(.OS_MCU_ECM_EIC_CAT2_ISR_CONST_FAST);
_OS_MCU_ECM_EIC_CAT2_ISR_CONST_FAST_END = ENDADDR(.OS_MCU_ECM_EIC_CAT2_ISR_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_ISR_MCU_ECM_EIC_CAT2_ISR
# undef OS_LINK_CONST_ISR_MCU_ECM_EIC_CAT2_ISR
#endif

#ifdef OS_LINK_CONST_ISR_MCU_ECM_EIC_CAT2_ISR_FAR
# undef OS_LINK_CONST_ISR_MCU_ECM_EIC_CAT2_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR
# undef OS_LINK_CONST_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_SPI_CSIH0_TIC_CAT2_ISR ) || defined ( OS_LINK_CONST_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR )
.OS_SPI_CSIH0_TIC_CAT2_ISR_CONST ALIGN(4) :> .
_OS_SPI_CSIH0_TIC_CAT2_ISR_CONST_START = ADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_CONST);
_OS_SPI_CSIH0_TIC_CAT2_ISR_CONST_END = ENDADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_SPI_CSIH0_TIC_CAT2_ISR ) || defined ( OS_LINK_CONST_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR )
.OS_SPI_CSIH0_TIC_CAT2_ISR_CONST_FAST ALIGN(4) :> .
_OS_SPI_CSIH0_TIC_CAT2_ISR_CONST_FAST_START = ADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_CONST_FAST);
_OS_SPI_CSIH0_TIC_CAT2_ISR_CONST_FAST_END = ENDADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_ISR_SPI_CSIH0_TIC_CAT2_ISR
# undef OS_LINK_CONST_ISR_SPI_CSIH0_TIC_CAT2_ISR
#endif

#ifdef OS_LINK_CONST_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR
# undef OS_LINK_CONST_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR
# undef OS_LINK_CONST_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_SPI_CSIH0_TIRE_CAT2_ISR ) || defined ( OS_LINK_CONST_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR )
.OS_SPI_CSIH0_TIRE_CAT2_ISR_CONST ALIGN(4) :> .
_OS_SPI_CSIH0_TIRE_CAT2_ISR_CONST_START = ADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_CONST);
_OS_SPI_CSIH0_TIRE_CAT2_ISR_CONST_END = ENDADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_CONST);
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_SPI_CSIH0_TIRE_CAT2_ISR ) || defined ( OS_LINK_CONST_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR )
.OS_SPI_CSIH0_TIRE_CAT2_ISR_CONST_FAST ALIGN(4) :> .
_OS_SPI_CSIH0_TIRE_CAT2_ISR_CONST_FAST_START = ADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_CONST_FAST);
_OS_SPI_CSIH0_TIRE_CAT2_ISR_CONST_FAST_END = ENDADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_CONST_FAST);
#endif

#ifdef OS_LINK_CONST_ISR_SPI_CSIH0_TIRE_CAT2_ISR
# undef OS_LINK_CONST_ISR_SPI_CSIH0_TIRE_CAT2_ISR
#endif

#ifdef OS_LINK_CONST_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR
# undef OS_LINK_CONST_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR
# undef OS_LINK_CONST_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR
#endif



#ifdef OS_LINK_CONST
# undef OS_LINK_CONST
#endif

#ifdef OS_LINK_CONST_APP
# undef OS_LINK_CONST_APP
#endif

#ifdef OS_LINK_CONST_TASK
# undef OS_LINK_CONST_TASK
#endif

#ifdef OS_LINK_CONST_ISR
# undef OS_LINK_CONST_ISR
#endif

#ifdef OS_LINK_CONST_KERNEL
# undef OS_LINK_CONST_KERNEL
#endif

#ifdef OS_LINK_CONST_KERNEL_FAR
# undef OS_LINK_CONST_KERNEL_FAR
#endif

#ifdef OS_LINK_CONST_KERNEL_NEAR
# undef OS_LINK_CONST_KERNEL_NEAR
#endif

#ifdef OS_LINK_INTVEC_CONST
# undef OS_LINK_INTVEC_CONST
#endif

#ifdef OS_LINK_EXCVEC_CONST
# undef OS_LINK_EXCVEC_CONST
#endif


/*******  VAR sections  **********************************************************************************************/

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_CACHE ) || defined ( OS_LINK_VAR_KERNEL_FAR_CACHE_INIT )
.OS_CORE0_VAR ALIGN(4) :> .
_OS_CORE0_VAR_START = ADDR(.OS_CORE0_VAR);
_OS_CORE0_VAR_END = ENDADDR(.OS_CORE0_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_CACHE ) || defined ( OS_LINK_VAR_KERNEL_FAR_CACHE_NOINIT )
.OS_CORE0_VAR_NOINIT ALIGN(4) :> .
_OS_CORE0_VAR_NOINIT_START = ADDR(.OS_CORE0_VAR_NOINIT);
_OS_CORE0_VAR_NOINIT_END = ENDADDR(.OS_CORE0_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_CACHE ) || defined ( OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT )
.OS_CORE0_VAR_FAST ALIGN(4) :> .
_OS_CORE0_VAR_FAST_START = ADDR(.OS_CORE0_VAR_FAST);
_OS_CORE0_VAR_FAST_END = ENDADDR(.OS_CORE0_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_CACHE ) || defined ( OS_LINK_VAR_KERNEL_NEAR_CACHE_NOINIT )
.OS_CORE0_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_CORE0_VAR_FAST_NOINIT_START = ADDR(.OS_CORE0_VAR_FAST_NOINIT);
_OS_CORE0_VAR_FAST_NOINIT_END = ENDADDR(.OS_CORE0_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOCACHE ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOCACHE_INIT )
.OS_CORE0_VAR_NOCACHE ALIGN(4) :> .
_OS_CORE0_VAR_NOCACHE_START = ADDR(.OS_CORE0_VAR_NOCACHE);
_OS_CORE0_VAR_NOCACHE_END = ENDADDR(.OS_CORE0_VAR_NOCACHE);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOCACHE ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOCACHE_NOINIT )
.OS_CORE0_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_CORE0_VAR_NOCACHE_NOINIT_START = ADDR(.OS_CORE0_VAR_NOCACHE_NOINIT);
_OS_CORE0_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_CORE0_VAR_NOCACHE_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOCACHE_INIT )
.OS_CORE0_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_CORE0_VAR_FAST_NOCACHE_START = ADDR(.OS_CORE0_VAR_FAST_NOCACHE);
_OS_CORE0_VAR_FAST_NOCACHE_END = ENDADDR(.OS_CORE0_VAR_FAST_NOCACHE);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOCACHE_NOINIT )
.OS_CORE0_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_CORE0_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_CORE0_VAR_FAST_NOCACHE_NOINIT);
_OS_CORE0_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_CORE0_VAR_FAST_NOCACHE_NOINIT);
#endif

#if defined ( OS_LINK_KERNEL_TRACE ) || defined ( OS_LINK_KERNEL_TRACE_FAR )
.OS_PUBLIC_CORE0_VAR_NOINIT ALIGN(4) :> .
_OS_PUBLIC_CORE0_VAR_NOINIT_START = ADDR(.OS_PUBLIC_CORE0_VAR_NOINIT);
_OS_PUBLIC_CORE0_VAR_NOINIT_END = ENDADDR(.OS_PUBLIC_CORE0_VAR_NOINIT);
#endif

#if defined ( OS_LINK_KERNEL_TRACE ) || defined ( OS_LINK_KERNEL_TRACE_NEAR )
.OS_PUBLIC_CORE0_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_PUBLIC_CORE0_VAR_FAST_NOINIT_START = ADDR(.OS_PUBLIC_CORE0_VAR_FAST_NOINIT);
_OS_PUBLIC_CORE0_VAR_FAST_NOINIT_END = ENDADDR(.OS_PUBLIC_CORE0_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_KERNEL_BARRIERS ) || defined ( OS_LINK_KERNEL_BARRIERS_FAR )
.OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT_START = ADDR(.OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT);
_OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT);
#endif

#if defined ( OS_LINK_KERNEL_BARRIERS ) || defined ( OS_LINK_KERNEL_BARRIERS_NEAR )
.OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT);
_OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT);
#endif

#if defined ( OS_LINK_KERNEL_CORESTATUS ) || defined ( OS_LINK_KERNEL_CORESTATUS_FAR )
.OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_START = ADDR(.OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT);
_OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT);
#endif

#if defined ( OS_LINK_KERNEL_CORESTATUS ) || defined ( OS_LINK_KERNEL_CORESTATUS_NEAR )
.OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT);
_OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT);
#endif

#ifdef OS_LINK_VAR_APP_APPL0
. = ALIGN(4);
_OS_Appl0_VAR_ALL_START = .;
__OS_Appl0_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL0 ) || defined ( OS_LINK_VAR_APP_APPL0_FAR ) || defined ( OS_LINK_VAR_APP_APPL0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_APPL0_FAR_CACHE_INIT )
.OS_Appl0_VAR ALIGN(4) :> .
_OS_Appl0_VAR_START = ADDR(.OS_Appl0_VAR);
_OS_Appl0_VAR_END = ENDADDR(.OS_Appl0_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL0 ) || defined ( OS_LINK_VAR_APP_APPL0_FAR ) || defined ( OS_LINK_VAR_APP_APPL0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_APPL0_FAR_CACHE_NOINIT )
.OS_Appl0_VAR_NOINIT ALIGN(4) :> .
_OS_Appl0_VAR_NOINIT_START = ADDR(.OS_Appl0_VAR_NOINIT);
_OS_Appl0_VAR_NOINIT_END = ENDADDR(.OS_Appl0_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL0 ) || defined ( OS_LINK_VAR_APP_APPL0_FAR ) || defined ( OS_LINK_VAR_APP_APPL0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_APPL0_FAR_CACHE_ZERO_INIT )
.OS_Appl0_VAR_ZERO_INIT ALIGN(4) :> .
_OS_Appl0_VAR_ZERO_INIT_START = ADDR(.OS_Appl0_VAR_ZERO_INIT);
_OS_Appl0_VAR_ZERO_INIT_END = ENDADDR(.OS_Appl0_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL0 ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR_CACHE_INIT )
.OS_Appl0_VAR_FAST ALIGN(4) :> .
_OS_Appl0_VAR_FAST_START = ADDR(.OS_Appl0_VAR_FAST);
_OS_Appl0_VAR_FAST_END = ENDADDR(.OS_Appl0_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL0 ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR_CACHE_NOINIT )
.OS_Appl0_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Appl0_VAR_FAST_NOINIT_START = ADDR(.OS_Appl0_VAR_FAST_NOINIT);
_OS_Appl0_VAR_FAST_NOINIT_END = ENDADDR(.OS_Appl0_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL0 ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR_CACHE_ZERO_INIT )
.OS_Appl0_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_Appl0_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Appl0_VAR_FAST_ZERO_INIT);
_OS_Appl0_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Appl0_VAR_FAST_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL0 ) || defined ( OS_LINK_VAR_APP_APPL0_FAR ) || defined ( OS_LINK_VAR_APP_APPL0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_APPL0_FAR_NOCACHE_INIT )
.OS_Appl0_VAR_NOCACHE ALIGN(4) :> .
_OS_Appl0_VAR_NOCACHE_START = ADDR(.OS_Appl0_VAR_NOCACHE);
_OS_Appl0_VAR_NOCACHE_END = ENDADDR(.OS_Appl0_VAR_NOCACHE);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL0 ) || defined ( OS_LINK_VAR_APP_APPL0_FAR ) || defined ( OS_LINK_VAR_APP_APPL0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_APPL0_FAR_NOCACHE_NOINIT )
.OS_Appl0_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Appl0_VAR_NOCACHE_NOINIT_START = ADDR(.OS_Appl0_VAR_NOCACHE_NOINIT);
_OS_Appl0_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_Appl0_VAR_NOCACHE_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL0 ) || defined ( OS_LINK_VAR_APP_APPL0_FAR ) || defined ( OS_LINK_VAR_APP_APPL0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_APPL0_FAR_NOCACHE_ZERO_INIT )
.OS_Appl0_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
_OS_Appl0_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_Appl0_VAR_NOCACHE_ZERO_INIT);
_OS_Appl0_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Appl0_VAR_NOCACHE_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL0 ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR_NOCACHE_INIT )
.OS_Appl0_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_Appl0_VAR_FAST_NOCACHE_START = ADDR(.OS_Appl0_VAR_FAST_NOCACHE);
_OS_Appl0_VAR_FAST_NOCACHE_END = ENDADDR(.OS_Appl0_VAR_FAST_NOCACHE);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL0 ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR_NOCACHE_NOINIT )
.OS_Appl0_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Appl0_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_Appl0_VAR_FAST_NOCACHE_NOINIT);
_OS_Appl0_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_Appl0_VAR_FAST_NOCACHE_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL0 ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_APPL0_NEAR_NOCACHE_ZERO_INIT )
.OS_Appl0_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
_OS_Appl0_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_Appl0_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_Appl0_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Appl0_VAR_FAST_NOCACHE_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_APP_APPL0
. = ALIGN(4);
_OS_Appl0_VAR_ALL_END = .-1;
__OS_Appl0_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_APP_APPL0
#endif

#ifdef OS_LINK_VAR_APP_APPL0_FAR
# undef OS_LINK_VAR_APP_APPL0_FAR
#endif

#ifdef OS_LINK_VAR_APP_APPL0_FAR_CACHE
# undef OS_LINK_VAR_APP_APPL0_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_APPL0_FAR_CACHE_INIT
# undef OS_LINK_VAR_APP_APPL0_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_APPL0_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_APPL0_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_APPL0_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_APPL0_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_APPL0_FAR_NOCACHE
# undef OS_LINK_VAR_APP_APPL0_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_APPL0_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_APPL0_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_APPL0_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_APPL0_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_APPL0_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_APPL0_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_APPL0_NEAR
# undef OS_LINK_VAR_APP_APPL0_NEAR
#endif

#ifdef OS_LINK_VAR_APP_APPL0_NEAR_CACHE
# undef OS_LINK_VAR_APP_APPL0_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_APPL0_NEAR_CACHE_INIT
# undef OS_LINK_VAR_APP_APPL0_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_APPL0_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_APPL0_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_APPL0_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_APPL0_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_APPL0_NEAR_NOCACHE
# undef OS_LINK_VAR_APP_APPL0_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_APPL0_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_APPL0_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_APPL0_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_APPL0_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_APPL0_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_APPL0_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_APP_APPL10
. = ALIGN(4);
_OS_Appl10_VAR_ALL_START = .;
__OS_Appl10_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL10 ) || defined ( OS_LINK_VAR_APP_APPL10_FAR ) || defined ( OS_LINK_VAR_APP_APPL10_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_APPL10_FAR_CACHE_INIT )
.OS_Appl10_VAR ALIGN(4) :> .
_OS_Appl10_VAR_START = ADDR(.OS_Appl10_VAR);
_OS_Appl10_VAR_END = ENDADDR(.OS_Appl10_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL10 ) || defined ( OS_LINK_VAR_APP_APPL10_FAR ) || defined ( OS_LINK_VAR_APP_APPL10_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_APPL10_FAR_CACHE_NOINIT )
.OS_Appl10_VAR_NOINIT ALIGN(4) :> .
_OS_Appl10_VAR_NOINIT_START = ADDR(.OS_Appl10_VAR_NOINIT);
_OS_Appl10_VAR_NOINIT_END = ENDADDR(.OS_Appl10_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL10 ) || defined ( OS_LINK_VAR_APP_APPL10_FAR ) || defined ( OS_LINK_VAR_APP_APPL10_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_APPL10_FAR_CACHE_ZERO_INIT )
.OS_Appl10_VAR_ZERO_INIT ALIGN(4) :> .
_OS_Appl10_VAR_ZERO_INIT_START = ADDR(.OS_Appl10_VAR_ZERO_INIT);
_OS_Appl10_VAR_ZERO_INIT_END = ENDADDR(.OS_Appl10_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL10 ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR_CACHE_INIT )
.OS_Appl10_VAR_FAST ALIGN(4) :> .
_OS_Appl10_VAR_FAST_START = ADDR(.OS_Appl10_VAR_FAST);
_OS_Appl10_VAR_FAST_END = ENDADDR(.OS_Appl10_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL10 ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR_CACHE_NOINIT )
.OS_Appl10_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Appl10_VAR_FAST_NOINIT_START = ADDR(.OS_Appl10_VAR_FAST_NOINIT);
_OS_Appl10_VAR_FAST_NOINIT_END = ENDADDR(.OS_Appl10_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL10 ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR_CACHE_ZERO_INIT )
.OS_Appl10_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_Appl10_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Appl10_VAR_FAST_ZERO_INIT);
_OS_Appl10_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Appl10_VAR_FAST_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL10 ) || defined ( OS_LINK_VAR_APP_APPL10_FAR ) || defined ( OS_LINK_VAR_APP_APPL10_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_APPL10_FAR_NOCACHE_INIT )
.OS_Appl10_VAR_NOCACHE ALIGN(4) :> .
_OS_Appl10_VAR_NOCACHE_START = ADDR(.OS_Appl10_VAR_NOCACHE);
_OS_Appl10_VAR_NOCACHE_END = ENDADDR(.OS_Appl10_VAR_NOCACHE);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL10 ) || defined ( OS_LINK_VAR_APP_APPL10_FAR ) || defined ( OS_LINK_VAR_APP_APPL10_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_APPL10_FAR_NOCACHE_NOINIT )
.OS_Appl10_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Appl10_VAR_NOCACHE_NOINIT_START = ADDR(.OS_Appl10_VAR_NOCACHE_NOINIT);
_OS_Appl10_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_Appl10_VAR_NOCACHE_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL10 ) || defined ( OS_LINK_VAR_APP_APPL10_FAR ) || defined ( OS_LINK_VAR_APP_APPL10_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_APPL10_FAR_NOCACHE_ZERO_INIT )
.OS_Appl10_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
_OS_Appl10_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_Appl10_VAR_NOCACHE_ZERO_INIT);
_OS_Appl10_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Appl10_VAR_NOCACHE_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL10 ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR_NOCACHE_INIT )
.OS_Appl10_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_Appl10_VAR_FAST_NOCACHE_START = ADDR(.OS_Appl10_VAR_FAST_NOCACHE);
_OS_Appl10_VAR_FAST_NOCACHE_END = ENDADDR(.OS_Appl10_VAR_FAST_NOCACHE);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL10 ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR_NOCACHE_NOINIT )
.OS_Appl10_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_Appl10_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_Appl10_VAR_FAST_NOCACHE_NOINIT);
_OS_Appl10_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_Appl10_VAR_FAST_NOCACHE_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_APPL10 ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_APPL10_NEAR_NOCACHE_ZERO_INIT )
.OS_Appl10_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
_OS_Appl10_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_Appl10_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_Appl10_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_Appl10_VAR_FAST_NOCACHE_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_APP_APPL10
. = ALIGN(4);
_OS_Appl10_VAR_ALL_END = .-1;
__OS_Appl10_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_APP_APPL10
#endif

#ifdef OS_LINK_VAR_APP_APPL10_FAR
# undef OS_LINK_VAR_APP_APPL10_FAR
#endif

#ifdef OS_LINK_VAR_APP_APPL10_FAR_CACHE
# undef OS_LINK_VAR_APP_APPL10_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_APPL10_FAR_CACHE_INIT
# undef OS_LINK_VAR_APP_APPL10_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_APPL10_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_APPL10_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_APPL10_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_APPL10_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_APPL10_FAR_NOCACHE
# undef OS_LINK_VAR_APP_APPL10_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_APPL10_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_APPL10_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_APPL10_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_APPL10_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_APPL10_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_APPL10_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_APPL10_NEAR
# undef OS_LINK_VAR_APP_APPL10_NEAR
#endif

#ifdef OS_LINK_VAR_APP_APPL10_NEAR_CACHE
# undef OS_LINK_VAR_APP_APPL10_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_APPL10_NEAR_CACHE_INIT
# undef OS_LINK_VAR_APP_APPL10_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_APPL10_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_APPL10_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_APPL10_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_APPL10_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_APPL10_NEAR_NOCACHE
# undef OS_LINK_VAR_APP_APPL10_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_APPL10_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_APPL10_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_APPL10_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_APPL10_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_APPL10_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_APPL10_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0
. = ALIGN(4);
_OS_SystemApplication_OsCore_CORE0_VAR_ALL_START = .;
__OS_SystemApplication_OsCore_CORE0_VAR_ALL_START = .;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_INIT )
.OS_SystemApplication_OsCore_CORE0_VAR ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR);
_OS_SystemApplication_OsCore_CORE0_VAR_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_NOINIT )
.OS_SystemApplication_OsCore_CORE0_VAR_NOINIT ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_NOINIT_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_NOINIT);
_OS_SystemApplication_OsCore_CORE0_VAR_NOINIT_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_ZERO_INIT )
.OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT);
_OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_INIT )
.OS_SystemApplication_OsCore_CORE0_VAR_FAST ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST);
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_NOINIT )
.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOINIT_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOINIT);
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOINIT_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_ZERO_INIT )
.OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT);
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_INIT )
.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE);
_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_NOINIT )
.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_NOINIT ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_NOINIT_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_NOINIT);
_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_NOINIT_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_ZERO_INIT )
.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT);
_OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_NOCACHE_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_INIT )
.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE);
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_NOINIT )
.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT);
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_ZERO_INIT )
.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT ALIGN(4) :> .
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT_START = ADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT);
_OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT_END = ENDADDR(.OS_SystemApplication_OsCore_CORE0_VAR_FAST_NOCACHE_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0
. = ALIGN(4);
_OS_SystemApplication_OsCore_CORE0_VAR_ALL_END = .-1;
__OS_SystemApplication_OsCore_CORE0_VAR_ALL_END = .-1;
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0_NEAR_NOCACHE_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_INIT )
.OS_IdleTask_OsCore_CORE0_VAR ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_VAR_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR);
_OS_IdleTask_OsCore_CORE0_VAR_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOINIT )
.OS_IdleTask_OsCore_CORE0_VAR_NOINIT ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_VAR_NOINIT_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR_NOINIT);
_OS_IdleTask_OsCore_CORE0_VAR_NOINIT_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_ZERO_INIT )
.OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT);
_OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_INIT )
.OS_IdleTask_OsCore_CORE0_VAR_FAST ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_VAR_FAST_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST);
_OS_IdleTask_OsCore_CORE0_VAR_FAST_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOINIT )
.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_VAR_FAST_NOINIT_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOINIT);
_OS_IdleTask_OsCore_CORE0_VAR_FAST_NOINIT_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_ZERO_INIT )
.OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT_START = ADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT);
_OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_IdleTask_OsCore_CORE0_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOINIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOINIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE_CORE0_NEAR_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10_FAR_INIT )
.OS_Task_100ms_Appl10_VAR ALIGN(4) :> .
_OS_Task_100ms_Appl10_VAR_START = ADDR(.OS_Task_100ms_Appl10_VAR);
_OS_Task_100ms_Appl10_VAR_END = ENDADDR(.OS_Task_100ms_Appl10_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10_FAR_NOINIT )
.OS_Task_100ms_Appl10_VAR_NOINIT ALIGN(4) :> .
_OS_Task_100ms_Appl10_VAR_NOINIT_START = ADDR(.OS_Task_100ms_Appl10_VAR_NOINIT);
_OS_Task_100ms_Appl10_VAR_NOINIT_END = ENDADDR(.OS_Task_100ms_Appl10_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10_FAR_ZERO_INIT )
.OS_Task_100ms_Appl10_VAR_ZERO_INIT ALIGN(4) :> .
_OS_Task_100ms_Appl10_VAR_ZERO_INIT_START = ADDR(.OS_Task_100ms_Appl10_VAR_ZERO_INIT);
_OS_Task_100ms_Appl10_VAR_ZERO_INIT_END = ENDADDR(.OS_Task_100ms_Appl10_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10_NEAR_INIT )
.OS_Task_100ms_Appl10_VAR_FAST ALIGN(4) :> .
_OS_Task_100ms_Appl10_VAR_FAST_START = ADDR(.OS_Task_100ms_Appl10_VAR_FAST);
_OS_Task_100ms_Appl10_VAR_FAST_END = ENDADDR(.OS_Task_100ms_Appl10_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10_NEAR_NOINIT )
.OS_Task_100ms_Appl10_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Task_100ms_Appl10_VAR_FAST_NOINIT_START = ADDR(.OS_Task_100ms_Appl10_VAR_FAST_NOINIT);
_OS_Task_100ms_Appl10_VAR_FAST_NOINIT_END = ENDADDR(.OS_Task_100ms_Appl10_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_100MS_APPL10_NEAR_ZERO_INIT )
.OS_Task_100ms_Appl10_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_Task_100ms_Appl10_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Task_100ms_Appl10_VAR_FAST_ZERO_INIT);
_OS_Task_100ms_Appl10_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Task_100ms_Appl10_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_TASK_TASK_100MS_APPL10
# undef OS_LINK_VAR_TASK_TASK_100MS_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_100MS_APPL10_FAR
# undef OS_LINK_VAR_TASK_TASK_100MS_APPL10_FAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_100MS_APPL10_FAR_INIT
# undef OS_LINK_VAR_TASK_TASK_100MS_APPL10_FAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_100MS_APPL10_FAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_100MS_APPL10_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_100MS_APPL10_FAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_100MS_APPL10_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_100MS_APPL10
# undef OS_LINK_VAR_TASK_TASK_100MS_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_100MS_APPL10_NEAR
# undef OS_LINK_VAR_TASK_TASK_100MS_APPL10_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_100MS_APPL10_NEAR_INIT
# undef OS_LINK_VAR_TASK_TASK_100MS_APPL10_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_100MS_APPL10_NEAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_100MS_APPL10_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_100MS_APPL10_NEAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_100MS_APPL10_NEAR_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_FAR_INIT )
.OS_Task_10msBsw_Appl10_VAR ALIGN(4) :> .
_OS_Task_10msBsw_Appl10_VAR_START = ADDR(.OS_Task_10msBsw_Appl10_VAR);
_OS_Task_10msBsw_Appl10_VAR_END = ENDADDR(.OS_Task_10msBsw_Appl10_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_FAR_NOINIT )
.OS_Task_10msBsw_Appl10_VAR_NOINIT ALIGN(4) :> .
_OS_Task_10msBsw_Appl10_VAR_NOINIT_START = ADDR(.OS_Task_10msBsw_Appl10_VAR_NOINIT);
_OS_Task_10msBsw_Appl10_VAR_NOINIT_END = ENDADDR(.OS_Task_10msBsw_Appl10_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_FAR_ZERO_INIT )
.OS_Task_10msBsw_Appl10_VAR_ZERO_INIT ALIGN(4) :> .
_OS_Task_10msBsw_Appl10_VAR_ZERO_INIT_START = ADDR(.OS_Task_10msBsw_Appl10_VAR_ZERO_INIT);
_OS_Task_10msBsw_Appl10_VAR_ZERO_INIT_END = ENDADDR(.OS_Task_10msBsw_Appl10_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_NEAR_INIT )
.OS_Task_10msBsw_Appl10_VAR_FAST ALIGN(4) :> .
_OS_Task_10msBsw_Appl10_VAR_FAST_START = ADDR(.OS_Task_10msBsw_Appl10_VAR_FAST);
_OS_Task_10msBsw_Appl10_VAR_FAST_END = ENDADDR(.OS_Task_10msBsw_Appl10_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_NEAR_NOINIT )
.OS_Task_10msBsw_Appl10_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Task_10msBsw_Appl10_VAR_FAST_NOINIT_START = ADDR(.OS_Task_10msBsw_Appl10_VAR_FAST_NOINIT);
_OS_Task_10msBsw_Appl10_VAR_FAST_NOINIT_END = ENDADDR(.OS_Task_10msBsw_Appl10_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_NEAR_ZERO_INIT )
.OS_Task_10msBsw_Appl10_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_Task_10msBsw_Appl10_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Task_10msBsw_Appl10_VAR_FAST_ZERO_INIT);
_OS_Task_10msBsw_Appl10_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Task_10msBsw_Appl10_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10
# undef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_FAR
# undef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_FAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_FAR_INIT
# undef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_FAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_FAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_FAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10
# undef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_NEAR
# undef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_NEAR_INIT
# undef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_NEAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_NEAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_10MSBSW_APPL10_NEAR_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10_FAR_INIT )
.OS_Task_10ms_Appl10_VAR ALIGN(4) :> .
_OS_Task_10ms_Appl10_VAR_START = ADDR(.OS_Task_10ms_Appl10_VAR);
_OS_Task_10ms_Appl10_VAR_END = ENDADDR(.OS_Task_10ms_Appl10_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10_FAR_NOINIT )
.OS_Task_10ms_Appl10_VAR_NOINIT ALIGN(4) :> .
_OS_Task_10ms_Appl10_VAR_NOINIT_START = ADDR(.OS_Task_10ms_Appl10_VAR_NOINIT);
_OS_Task_10ms_Appl10_VAR_NOINIT_END = ENDADDR(.OS_Task_10ms_Appl10_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10_FAR_ZERO_INIT )
.OS_Task_10ms_Appl10_VAR_ZERO_INIT ALIGN(4) :> .
_OS_Task_10ms_Appl10_VAR_ZERO_INIT_START = ADDR(.OS_Task_10ms_Appl10_VAR_ZERO_INIT);
_OS_Task_10ms_Appl10_VAR_ZERO_INIT_END = ENDADDR(.OS_Task_10ms_Appl10_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10_NEAR_INIT )
.OS_Task_10ms_Appl10_VAR_FAST ALIGN(4) :> .
_OS_Task_10ms_Appl10_VAR_FAST_START = ADDR(.OS_Task_10ms_Appl10_VAR_FAST);
_OS_Task_10ms_Appl10_VAR_FAST_END = ENDADDR(.OS_Task_10ms_Appl10_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10_NEAR_NOINIT )
.OS_Task_10ms_Appl10_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Task_10ms_Appl10_VAR_FAST_NOINIT_START = ADDR(.OS_Task_10ms_Appl10_VAR_FAST_NOINIT);
_OS_Task_10ms_Appl10_VAR_FAST_NOINIT_END = ENDADDR(.OS_Task_10ms_Appl10_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_10MS_APPL10_NEAR_ZERO_INIT )
.OS_Task_10ms_Appl10_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_Task_10ms_Appl10_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Task_10ms_Appl10_VAR_FAST_ZERO_INIT);
_OS_Task_10ms_Appl10_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Task_10ms_Appl10_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MS_APPL10
# undef OS_LINK_VAR_TASK_TASK_10MS_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MS_APPL10_FAR
# undef OS_LINK_VAR_TASK_TASK_10MS_APPL10_FAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MS_APPL10_FAR_INIT
# undef OS_LINK_VAR_TASK_TASK_10MS_APPL10_FAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MS_APPL10_FAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_10MS_APPL10_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MS_APPL10_FAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_10MS_APPL10_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MS_APPL10
# undef OS_LINK_VAR_TASK_TASK_10MS_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MS_APPL10_NEAR
# undef OS_LINK_VAR_TASK_TASK_10MS_APPL10_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MS_APPL10_NEAR_INIT
# undef OS_LINK_VAR_TASK_TASK_10MS_APPL10_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MS_APPL10_NEAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_10MS_APPL10_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_10MS_APPL10_NEAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_10MS_APPL10_NEAR_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_FAR_INIT )
.OS_Task_2msTmplMonr_Appl10_VAR ALIGN(4) :> .
_OS_Task_2msTmplMonr_Appl10_VAR_START = ADDR(.OS_Task_2msTmplMonr_Appl10_VAR);
_OS_Task_2msTmplMonr_Appl10_VAR_END = ENDADDR(.OS_Task_2msTmplMonr_Appl10_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_FAR_NOINIT )
.OS_Task_2msTmplMonr_Appl10_VAR_NOINIT ALIGN(4) :> .
_OS_Task_2msTmplMonr_Appl10_VAR_NOINIT_START = ADDR(.OS_Task_2msTmplMonr_Appl10_VAR_NOINIT);
_OS_Task_2msTmplMonr_Appl10_VAR_NOINIT_END = ENDADDR(.OS_Task_2msTmplMonr_Appl10_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_FAR_ZERO_INIT )
.OS_Task_2msTmplMonr_Appl10_VAR_ZERO_INIT ALIGN(4) :> .
_OS_Task_2msTmplMonr_Appl10_VAR_ZERO_INIT_START = ADDR(.OS_Task_2msTmplMonr_Appl10_VAR_ZERO_INIT);
_OS_Task_2msTmplMonr_Appl10_VAR_ZERO_INIT_END = ENDADDR(.OS_Task_2msTmplMonr_Appl10_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_NEAR_INIT )
.OS_Task_2msTmplMonr_Appl10_VAR_FAST ALIGN(4) :> .
_OS_Task_2msTmplMonr_Appl10_VAR_FAST_START = ADDR(.OS_Task_2msTmplMonr_Appl10_VAR_FAST);
_OS_Task_2msTmplMonr_Appl10_VAR_FAST_END = ENDADDR(.OS_Task_2msTmplMonr_Appl10_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_NEAR_NOINIT )
.OS_Task_2msTmplMonr_Appl10_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Task_2msTmplMonr_Appl10_VAR_FAST_NOINIT_START = ADDR(.OS_Task_2msTmplMonr_Appl10_VAR_FAST_NOINIT);
_OS_Task_2msTmplMonr_Appl10_VAR_FAST_NOINIT_END = ENDADDR(.OS_Task_2msTmplMonr_Appl10_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_NEAR_ZERO_INIT )
.OS_Task_2msTmplMonr_Appl10_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_Task_2msTmplMonr_Appl10_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Task_2msTmplMonr_Appl10_VAR_FAST_ZERO_INIT);
_OS_Task_2msTmplMonr_Appl10_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Task_2msTmplMonr_Appl10_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10
# undef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_FAR
# undef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_FAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_FAR_INIT
# undef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_FAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_FAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_FAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10
# undef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_NEAR
# undef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_NEAR_INIT
# undef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_NEAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_NEAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_2MSTMPLMONR_APPL10_NEAR_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10_FAR_INIT )
.OS_Task_2ms_Appl10_VAR ALIGN(4) :> .
_OS_Task_2ms_Appl10_VAR_START = ADDR(.OS_Task_2ms_Appl10_VAR);
_OS_Task_2ms_Appl10_VAR_END = ENDADDR(.OS_Task_2ms_Appl10_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10_FAR_NOINIT )
.OS_Task_2ms_Appl10_VAR_NOINIT ALIGN(4) :> .
_OS_Task_2ms_Appl10_VAR_NOINIT_START = ADDR(.OS_Task_2ms_Appl10_VAR_NOINIT);
_OS_Task_2ms_Appl10_VAR_NOINIT_END = ENDADDR(.OS_Task_2ms_Appl10_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10_FAR_ZERO_INIT )
.OS_Task_2ms_Appl10_VAR_ZERO_INIT ALIGN(4) :> .
_OS_Task_2ms_Appl10_VAR_ZERO_INIT_START = ADDR(.OS_Task_2ms_Appl10_VAR_ZERO_INIT);
_OS_Task_2ms_Appl10_VAR_ZERO_INIT_END = ENDADDR(.OS_Task_2ms_Appl10_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10_NEAR_INIT )
.OS_Task_2ms_Appl10_VAR_FAST ALIGN(4) :> .
_OS_Task_2ms_Appl10_VAR_FAST_START = ADDR(.OS_Task_2ms_Appl10_VAR_FAST);
_OS_Task_2ms_Appl10_VAR_FAST_END = ENDADDR(.OS_Task_2ms_Appl10_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10_NEAR_NOINIT )
.OS_Task_2ms_Appl10_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Task_2ms_Appl10_VAR_FAST_NOINIT_START = ADDR(.OS_Task_2ms_Appl10_VAR_FAST_NOINIT);
_OS_Task_2ms_Appl10_VAR_FAST_NOINIT_END = ENDADDR(.OS_Task_2ms_Appl10_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_2MS_APPL10_NEAR_ZERO_INIT )
.OS_Task_2ms_Appl10_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_Task_2ms_Appl10_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Task_2ms_Appl10_VAR_FAST_ZERO_INIT);
_OS_Task_2ms_Appl10_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Task_2ms_Appl10_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MS_APPL10
# undef OS_LINK_VAR_TASK_TASK_2MS_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MS_APPL10_FAR
# undef OS_LINK_VAR_TASK_TASK_2MS_APPL10_FAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MS_APPL10_FAR_INIT
# undef OS_LINK_VAR_TASK_TASK_2MS_APPL10_FAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MS_APPL10_FAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_2MS_APPL10_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MS_APPL10_FAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_2MS_APPL10_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MS_APPL10
# undef OS_LINK_VAR_TASK_TASK_2MS_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MS_APPL10_NEAR
# undef OS_LINK_VAR_TASK_TASK_2MS_APPL10_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MS_APPL10_NEAR_INIT
# undef OS_LINK_VAR_TASK_TASK_2MS_APPL10_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MS_APPL10_NEAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_2MS_APPL10_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_2MS_APPL10_NEAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_2MS_APPL10_NEAR_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_FAR_INIT )
.OS_Task_4msBsw_Appl10_VAR ALIGN(4) :> .
_OS_Task_4msBsw_Appl10_VAR_START = ADDR(.OS_Task_4msBsw_Appl10_VAR);
_OS_Task_4msBsw_Appl10_VAR_END = ENDADDR(.OS_Task_4msBsw_Appl10_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_FAR_NOINIT )
.OS_Task_4msBsw_Appl10_VAR_NOINIT ALIGN(4) :> .
_OS_Task_4msBsw_Appl10_VAR_NOINIT_START = ADDR(.OS_Task_4msBsw_Appl10_VAR_NOINIT);
_OS_Task_4msBsw_Appl10_VAR_NOINIT_END = ENDADDR(.OS_Task_4msBsw_Appl10_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_FAR_ZERO_INIT )
.OS_Task_4msBsw_Appl10_VAR_ZERO_INIT ALIGN(4) :> .
_OS_Task_4msBsw_Appl10_VAR_ZERO_INIT_START = ADDR(.OS_Task_4msBsw_Appl10_VAR_ZERO_INIT);
_OS_Task_4msBsw_Appl10_VAR_ZERO_INIT_END = ENDADDR(.OS_Task_4msBsw_Appl10_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_NEAR_INIT )
.OS_Task_4msBsw_Appl10_VAR_FAST ALIGN(4) :> .
_OS_Task_4msBsw_Appl10_VAR_FAST_START = ADDR(.OS_Task_4msBsw_Appl10_VAR_FAST);
_OS_Task_4msBsw_Appl10_VAR_FAST_END = ENDADDR(.OS_Task_4msBsw_Appl10_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_NEAR_NOINIT )
.OS_Task_4msBsw_Appl10_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Task_4msBsw_Appl10_VAR_FAST_NOINIT_START = ADDR(.OS_Task_4msBsw_Appl10_VAR_FAST_NOINIT);
_OS_Task_4msBsw_Appl10_VAR_FAST_NOINIT_END = ENDADDR(.OS_Task_4msBsw_Appl10_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_NEAR_ZERO_INIT )
.OS_Task_4msBsw_Appl10_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_Task_4msBsw_Appl10_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Task_4msBsw_Appl10_VAR_FAST_ZERO_INIT);
_OS_Task_4msBsw_Appl10_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Task_4msBsw_Appl10_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10
# undef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_FAR
# undef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_FAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_FAR_INIT
# undef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_FAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_FAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_FAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10
# undef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_NEAR
# undef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_NEAR_INIT
# undef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_NEAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_NEAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_4MSBSW_APPL10_NEAR_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10_FAR_INIT )
.OS_Task_4ms_Appl10_VAR ALIGN(4) :> .
_OS_Task_4ms_Appl10_VAR_START = ADDR(.OS_Task_4ms_Appl10_VAR);
_OS_Task_4ms_Appl10_VAR_END = ENDADDR(.OS_Task_4ms_Appl10_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10_FAR_NOINIT )
.OS_Task_4ms_Appl10_VAR_NOINIT ALIGN(4) :> .
_OS_Task_4ms_Appl10_VAR_NOINIT_START = ADDR(.OS_Task_4ms_Appl10_VAR_NOINIT);
_OS_Task_4ms_Appl10_VAR_NOINIT_END = ENDADDR(.OS_Task_4ms_Appl10_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10_FAR_ZERO_INIT )
.OS_Task_4ms_Appl10_VAR_ZERO_INIT ALIGN(4) :> .
_OS_Task_4ms_Appl10_VAR_ZERO_INIT_START = ADDR(.OS_Task_4ms_Appl10_VAR_ZERO_INIT);
_OS_Task_4ms_Appl10_VAR_ZERO_INIT_END = ENDADDR(.OS_Task_4ms_Appl10_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10_NEAR_INIT )
.OS_Task_4ms_Appl10_VAR_FAST ALIGN(4) :> .
_OS_Task_4ms_Appl10_VAR_FAST_START = ADDR(.OS_Task_4ms_Appl10_VAR_FAST);
_OS_Task_4ms_Appl10_VAR_FAST_END = ENDADDR(.OS_Task_4ms_Appl10_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10_NEAR_NOINIT )
.OS_Task_4ms_Appl10_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Task_4ms_Appl10_VAR_FAST_NOINIT_START = ADDR(.OS_Task_4ms_Appl10_VAR_FAST_NOINIT);
_OS_Task_4ms_Appl10_VAR_FAST_NOINIT_END = ENDADDR(.OS_Task_4ms_Appl10_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_4MS_APPL10_NEAR_ZERO_INIT )
.OS_Task_4ms_Appl10_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_Task_4ms_Appl10_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Task_4ms_Appl10_VAR_FAST_ZERO_INIT);
_OS_Task_4ms_Appl10_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Task_4ms_Appl10_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MS_APPL10
# undef OS_LINK_VAR_TASK_TASK_4MS_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MS_APPL10_FAR
# undef OS_LINK_VAR_TASK_TASK_4MS_APPL10_FAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MS_APPL10_FAR_INIT
# undef OS_LINK_VAR_TASK_TASK_4MS_APPL10_FAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MS_APPL10_FAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_4MS_APPL10_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MS_APPL10_FAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_4MS_APPL10_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MS_APPL10
# undef OS_LINK_VAR_TASK_TASK_4MS_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MS_APPL10_NEAR
# undef OS_LINK_VAR_TASK_TASK_4MS_APPL10_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MS_APPL10_NEAR_INIT
# undef OS_LINK_VAR_TASK_TASK_4MS_APPL10_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MS_APPL10_NEAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_4MS_APPL10_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_4MS_APPL10_NEAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_4MS_APPL10_NEAR_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_FAR_INIT )
.OS_Task_5msBsw_Appl10_VAR ALIGN(4) :> .
_OS_Task_5msBsw_Appl10_VAR_START = ADDR(.OS_Task_5msBsw_Appl10_VAR);
_OS_Task_5msBsw_Appl10_VAR_END = ENDADDR(.OS_Task_5msBsw_Appl10_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_FAR_NOINIT )
.OS_Task_5msBsw_Appl10_VAR_NOINIT ALIGN(4) :> .
_OS_Task_5msBsw_Appl10_VAR_NOINIT_START = ADDR(.OS_Task_5msBsw_Appl10_VAR_NOINIT);
_OS_Task_5msBsw_Appl10_VAR_NOINIT_END = ENDADDR(.OS_Task_5msBsw_Appl10_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_FAR_ZERO_INIT )
.OS_Task_5msBsw_Appl10_VAR_ZERO_INIT ALIGN(4) :> .
_OS_Task_5msBsw_Appl10_VAR_ZERO_INIT_START = ADDR(.OS_Task_5msBsw_Appl10_VAR_ZERO_INIT);
_OS_Task_5msBsw_Appl10_VAR_ZERO_INIT_END = ENDADDR(.OS_Task_5msBsw_Appl10_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_NEAR_INIT )
.OS_Task_5msBsw_Appl10_VAR_FAST ALIGN(4) :> .
_OS_Task_5msBsw_Appl10_VAR_FAST_START = ADDR(.OS_Task_5msBsw_Appl10_VAR_FAST);
_OS_Task_5msBsw_Appl10_VAR_FAST_END = ENDADDR(.OS_Task_5msBsw_Appl10_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_NEAR_NOINIT )
.OS_Task_5msBsw_Appl10_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Task_5msBsw_Appl10_VAR_FAST_NOINIT_START = ADDR(.OS_Task_5msBsw_Appl10_VAR_FAST_NOINIT);
_OS_Task_5msBsw_Appl10_VAR_FAST_NOINIT_END = ENDADDR(.OS_Task_5msBsw_Appl10_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_NEAR_ZERO_INIT )
.OS_Task_5msBsw_Appl10_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_Task_5msBsw_Appl10_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Task_5msBsw_Appl10_VAR_FAST_ZERO_INIT);
_OS_Task_5msBsw_Appl10_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Task_5msBsw_Appl10_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10
# undef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_FAR
# undef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_FAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_FAR_INIT
# undef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_FAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_FAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_FAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10
# undef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_NEAR
# undef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_NEAR_INIT
# undef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_NEAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_NEAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_5MSBSW_APPL10_NEAR_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_FAR_INIT )
.OS_Task_InitBsw_Appl10_VAR ALIGN(4) :> .
_OS_Task_InitBsw_Appl10_VAR_START = ADDR(.OS_Task_InitBsw_Appl10_VAR);
_OS_Task_InitBsw_Appl10_VAR_END = ENDADDR(.OS_Task_InitBsw_Appl10_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_FAR_NOINIT )
.OS_Task_InitBsw_Appl10_VAR_NOINIT ALIGN(4) :> .
_OS_Task_InitBsw_Appl10_VAR_NOINIT_START = ADDR(.OS_Task_InitBsw_Appl10_VAR_NOINIT);
_OS_Task_InitBsw_Appl10_VAR_NOINIT_END = ENDADDR(.OS_Task_InitBsw_Appl10_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_FAR_ZERO_INIT )
.OS_Task_InitBsw_Appl10_VAR_ZERO_INIT ALIGN(4) :> .
_OS_Task_InitBsw_Appl10_VAR_ZERO_INIT_START = ADDR(.OS_Task_InitBsw_Appl10_VAR_ZERO_INIT);
_OS_Task_InitBsw_Appl10_VAR_ZERO_INIT_END = ENDADDR(.OS_Task_InitBsw_Appl10_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_NEAR_INIT )
.OS_Task_InitBsw_Appl10_VAR_FAST ALIGN(4) :> .
_OS_Task_InitBsw_Appl10_VAR_FAST_START = ADDR(.OS_Task_InitBsw_Appl10_VAR_FAST);
_OS_Task_InitBsw_Appl10_VAR_FAST_END = ENDADDR(.OS_Task_InitBsw_Appl10_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_NEAR_NOINIT )
.OS_Task_InitBsw_Appl10_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Task_InitBsw_Appl10_VAR_FAST_NOINIT_START = ADDR(.OS_Task_InitBsw_Appl10_VAR_FAST_NOINIT);
_OS_Task_InitBsw_Appl10_VAR_FAST_NOINIT_END = ENDADDR(.OS_Task_InitBsw_Appl10_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_NEAR_ZERO_INIT )
.OS_Task_InitBsw_Appl10_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_Task_InitBsw_Appl10_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Task_InitBsw_Appl10_VAR_FAST_ZERO_INIT);
_OS_Task_InitBsw_Appl10_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Task_InitBsw_Appl10_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10
# undef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_FAR
# undef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_FAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_FAR_INIT
# undef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_FAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_FAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_FAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10
# undef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_NEAR
# undef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_NEAR_INIT
# undef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_NEAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_NEAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_INITBSW_APPL10_NEAR_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10_FAR_INIT )
.OS_Task_Init_Appl10_VAR ALIGN(4) :> .
_OS_Task_Init_Appl10_VAR_START = ADDR(.OS_Task_Init_Appl10_VAR);
_OS_Task_Init_Appl10_VAR_END = ENDADDR(.OS_Task_Init_Appl10_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10_FAR_NOINIT )
.OS_Task_Init_Appl10_VAR_NOINIT ALIGN(4) :> .
_OS_Task_Init_Appl10_VAR_NOINIT_START = ADDR(.OS_Task_Init_Appl10_VAR_NOINIT);
_OS_Task_Init_Appl10_VAR_NOINIT_END = ENDADDR(.OS_Task_Init_Appl10_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10_FAR_ZERO_INIT )
.OS_Task_Init_Appl10_VAR_ZERO_INIT ALIGN(4) :> .
_OS_Task_Init_Appl10_VAR_ZERO_INIT_START = ADDR(.OS_Task_Init_Appl10_VAR_ZERO_INIT);
_OS_Task_Init_Appl10_VAR_ZERO_INIT_END = ENDADDR(.OS_Task_Init_Appl10_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10_NEAR_INIT )
.OS_Task_Init_Appl10_VAR_FAST ALIGN(4) :> .
_OS_Task_Init_Appl10_VAR_FAST_START = ADDR(.OS_Task_Init_Appl10_VAR_FAST);
_OS_Task_Init_Appl10_VAR_FAST_END = ENDADDR(.OS_Task_Init_Appl10_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10_NEAR_NOINIT )
.OS_Task_Init_Appl10_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Task_Init_Appl10_VAR_FAST_NOINIT_START = ADDR(.OS_Task_Init_Appl10_VAR_FAST_NOINIT);
_OS_Task_Init_Appl10_VAR_FAST_NOINIT_END = ENDADDR(.OS_Task_Init_Appl10_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10 ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_INIT_APPL10_NEAR_ZERO_INIT )
.OS_Task_Init_Appl10_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_Task_Init_Appl10_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Task_Init_Appl10_VAR_FAST_ZERO_INIT);
_OS_Task_Init_Appl10_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Task_Init_Appl10_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INIT_APPL10
# undef OS_LINK_VAR_TASK_TASK_INIT_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INIT_APPL10_FAR
# undef OS_LINK_VAR_TASK_TASK_INIT_APPL10_FAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INIT_APPL10_FAR_INIT
# undef OS_LINK_VAR_TASK_TASK_INIT_APPL10_FAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INIT_APPL10_FAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_INIT_APPL10_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INIT_APPL10_FAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_INIT_APPL10_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INIT_APPL10
# undef OS_LINK_VAR_TASK_TASK_INIT_APPL10
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INIT_APPL10_NEAR
# undef OS_LINK_VAR_TASK_TASK_INIT_APPL10_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INIT_APPL10_NEAR_INIT
# undef OS_LINK_VAR_TASK_TASK_INIT_APPL10_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INIT_APPL10_NEAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_INIT_APPL10_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_INIT_APPL10_NEAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_INIT_APPL10_NEAR_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0 ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_FAR_INIT )
.OS_Task_PreStart_CORE0_VAR ALIGN(4) :> .
_OS_Task_PreStart_CORE0_VAR_START = ADDR(.OS_Task_PreStart_CORE0_VAR);
_OS_Task_PreStart_CORE0_VAR_END = ENDADDR(.OS_Task_PreStart_CORE0_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0 ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_FAR_NOINIT )
.OS_Task_PreStart_CORE0_VAR_NOINIT ALIGN(4) :> .
_OS_Task_PreStart_CORE0_VAR_NOINIT_START = ADDR(.OS_Task_PreStart_CORE0_VAR_NOINIT);
_OS_Task_PreStart_CORE0_VAR_NOINIT_END = ENDADDR(.OS_Task_PreStart_CORE0_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0 ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_FAR ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_FAR_ZERO_INIT )
.OS_Task_PreStart_CORE0_VAR_ZERO_INIT ALIGN(4) :> .
_OS_Task_PreStart_CORE0_VAR_ZERO_INIT_START = ADDR(.OS_Task_PreStart_CORE0_VAR_ZERO_INIT);
_OS_Task_PreStart_CORE0_VAR_ZERO_INIT_END = ENDADDR(.OS_Task_PreStart_CORE0_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0 ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_NEAR_INIT )
.OS_Task_PreStart_CORE0_VAR_FAST ALIGN(4) :> .
_OS_Task_PreStart_CORE0_VAR_FAST_START = ADDR(.OS_Task_PreStart_CORE0_VAR_FAST);
_OS_Task_PreStart_CORE0_VAR_FAST_END = ENDADDR(.OS_Task_PreStart_CORE0_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0 ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_NEAR_NOINIT )
.OS_Task_PreStart_CORE0_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_Task_PreStart_CORE0_VAR_FAST_NOINIT_START = ADDR(.OS_Task_PreStart_CORE0_VAR_FAST_NOINIT);
_OS_Task_PreStart_CORE0_VAR_FAST_NOINIT_END = ENDADDR(.OS_Task_PreStart_CORE0_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0 ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_NEAR_ZERO_INIT )
.OS_Task_PreStart_CORE0_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_Task_PreStart_CORE0_VAR_FAST_ZERO_INIT_START = ADDR(.OS_Task_PreStart_CORE0_VAR_FAST_ZERO_INIT);
_OS_Task_PreStart_CORE0_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_Task_PreStart_CORE0_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0
# undef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0
#endif

#ifdef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_FAR
# undef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_FAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_FAR_INIT
# undef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_FAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_FAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_FAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0
# undef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0
#endif

#ifdef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_NEAR
# undef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_NEAR_INIT
# undef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_NEAR_NOINIT
# undef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_NEAR_ZERO_INIT
# undef OS_LINK_VAR_TASK_TASK_PRESTART_CORE0_NEAR_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR_INIT )
.OS_CanIsr_1_VAR ALIGN(4) :> .
_OS_CanIsr_1_VAR_START = ADDR(.OS_CanIsr_1_VAR);
_OS_CanIsr_1_VAR_END = ENDADDR(.OS_CanIsr_1_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR_NOINIT )
.OS_CanIsr_1_VAR_NOINIT ALIGN(4) :> .
_OS_CanIsr_1_VAR_NOINIT_START = ADDR(.OS_CanIsr_1_VAR_NOINIT);
_OS_CanIsr_1_VAR_NOINIT_END = ENDADDR(.OS_CanIsr_1_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR_ZERO_INIT )
.OS_CanIsr_1_VAR_ZERO_INIT ALIGN(4) :> .
_OS_CanIsr_1_VAR_ZERO_INIT_START = ADDR(.OS_CanIsr_1_VAR_ZERO_INIT);
_OS_CanIsr_1_VAR_ZERO_INIT_END = ENDADDR(.OS_CanIsr_1_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR_INIT )
.OS_CanIsr_1_VAR_FAST ALIGN(4) :> .
_OS_CanIsr_1_VAR_FAST_START = ADDR(.OS_CanIsr_1_VAR_FAST);
_OS_CanIsr_1_VAR_FAST_END = ENDADDR(.OS_CanIsr_1_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR_NOINIT )
.OS_CanIsr_1_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_CanIsr_1_VAR_FAST_NOINIT_START = ADDR(.OS_CanIsr_1_VAR_FAST_NOINIT);
_OS_CanIsr_1_VAR_FAST_NOINIT_END = ENDADDR(.OS_CanIsr_1_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR_ZERO_INIT )
.OS_CanIsr_1_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_CanIsr_1_VAR_FAST_ZERO_INIT_START = ADDR(.OS_CanIsr_1_VAR_FAST_ZERO_INIT);
_OS_CanIsr_1_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_CanIsr_1_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1
# undef OS_LINK_VAR_ISR_CANISR_1
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_FAR
# undef OS_LINK_VAR_ISR_CANISR_1_FAR
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_FAR_INIT
# undef OS_LINK_VAR_ISR_CANISR_1_FAR_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_FAR_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_1_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_FAR_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_1_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1
# undef OS_LINK_VAR_ISR_CANISR_1
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_NEAR
# undef OS_LINK_VAR_ISR_CANISR_1_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_NEAR_INIT
# undef OS_LINK_VAR_ISR_CANISR_1_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_NEAR_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_1_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_NEAR_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_1_NEAR_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_FAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_FAR_INIT )
.OS_CounterIsr_SystemTimer_VAR ALIGN(4) :> .
_OS_CounterIsr_SystemTimer_VAR_START = ADDR(.OS_CounterIsr_SystemTimer_VAR);
_OS_CounterIsr_SystemTimer_VAR_END = ENDADDR(.OS_CounterIsr_SystemTimer_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_FAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_FAR_NOINIT )
.OS_CounterIsr_SystemTimer_VAR_NOINIT ALIGN(4) :> .
_OS_CounterIsr_SystemTimer_VAR_NOINIT_START = ADDR(.OS_CounterIsr_SystemTimer_VAR_NOINIT);
_OS_CounterIsr_SystemTimer_VAR_NOINIT_END = ENDADDR(.OS_CounterIsr_SystemTimer_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_FAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_FAR_ZERO_INIT )
.OS_CounterIsr_SystemTimer_VAR_ZERO_INIT ALIGN(4) :> .
_OS_CounterIsr_SystemTimer_VAR_ZERO_INIT_START = ADDR(.OS_CounterIsr_SystemTimer_VAR_ZERO_INIT);
_OS_CounterIsr_SystemTimer_VAR_ZERO_INIT_END = ENDADDR(.OS_CounterIsr_SystemTimer_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_NEAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_NEAR_INIT )
.OS_CounterIsr_SystemTimer_VAR_FAST ALIGN(4) :> .
_OS_CounterIsr_SystemTimer_VAR_FAST_START = ADDR(.OS_CounterIsr_SystemTimer_VAR_FAST);
_OS_CounterIsr_SystemTimer_VAR_FAST_END = ENDADDR(.OS_CounterIsr_SystemTimer_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_NEAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_NEAR_NOINIT )
.OS_CounterIsr_SystemTimer_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_CounterIsr_SystemTimer_VAR_FAST_NOINIT_START = ADDR(.OS_CounterIsr_SystemTimer_VAR_FAST_NOINIT);
_OS_CounterIsr_SystemTimer_VAR_FAST_NOINIT_END = ENDADDR(.OS_CounterIsr_SystemTimer_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_NEAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_NEAR_ZERO_INIT )
.OS_CounterIsr_SystemTimer_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_CounterIsr_SystemTimer_VAR_FAST_ZERO_INIT_START = ADDR(.OS_CounterIsr_SystemTimer_VAR_FAST_ZERO_INIT);
_OS_CounterIsr_SystemTimer_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_CounterIsr_SystemTimer_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_FAR
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_FAR
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_FAR_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_FAR_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_FAR_NOINIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_FAR_ZERO_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_NEAR
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_NEAR_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_NEAR_NOINIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_NEAR_ZERO_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER_NEAR_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_FAR_INIT )
.OS_MCU_ECM_EIC_CAT2_ISR_VAR ALIGN(4) :> .
_OS_MCU_ECM_EIC_CAT2_ISR_VAR_START = ADDR(.OS_MCU_ECM_EIC_CAT2_ISR_VAR);
_OS_MCU_ECM_EIC_CAT2_ISR_VAR_END = ENDADDR(.OS_MCU_ECM_EIC_CAT2_ISR_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_FAR_NOINIT )
.OS_MCU_ECM_EIC_CAT2_ISR_VAR_NOINIT ALIGN(4) :> .
_OS_MCU_ECM_EIC_CAT2_ISR_VAR_NOINIT_START = ADDR(.OS_MCU_ECM_EIC_CAT2_ISR_VAR_NOINIT);
_OS_MCU_ECM_EIC_CAT2_ISR_VAR_NOINIT_END = ENDADDR(.OS_MCU_ECM_EIC_CAT2_ISR_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_FAR_ZERO_INIT )
.OS_MCU_ECM_EIC_CAT2_ISR_VAR_ZERO_INIT ALIGN(4) :> .
_OS_MCU_ECM_EIC_CAT2_ISR_VAR_ZERO_INIT_START = ADDR(.OS_MCU_ECM_EIC_CAT2_ISR_VAR_ZERO_INIT);
_OS_MCU_ECM_EIC_CAT2_ISR_VAR_ZERO_INIT_END = ENDADDR(.OS_MCU_ECM_EIC_CAT2_ISR_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR_INIT )
.OS_MCU_ECM_EIC_CAT2_ISR_VAR_FAST ALIGN(4) :> .
_OS_MCU_ECM_EIC_CAT2_ISR_VAR_FAST_START = ADDR(.OS_MCU_ECM_EIC_CAT2_ISR_VAR_FAST);
_OS_MCU_ECM_EIC_CAT2_ISR_VAR_FAST_END = ENDADDR(.OS_MCU_ECM_EIC_CAT2_ISR_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR_NOINIT )
.OS_MCU_ECM_EIC_CAT2_ISR_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_MCU_ECM_EIC_CAT2_ISR_VAR_FAST_NOINIT_START = ADDR(.OS_MCU_ECM_EIC_CAT2_ISR_VAR_FAST_NOINIT);
_OS_MCU_ECM_EIC_CAT2_ISR_VAR_FAST_NOINIT_END = ENDADDR(.OS_MCU_ECM_EIC_CAT2_ISR_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR_ZERO_INIT )
.OS_MCU_ECM_EIC_CAT2_ISR_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_MCU_ECM_EIC_CAT2_ISR_VAR_FAST_ZERO_INIT_START = ADDR(.OS_MCU_ECM_EIC_CAT2_ISR_VAR_FAST_ZERO_INIT);
_OS_MCU_ECM_EIC_CAT2_ISR_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_MCU_ECM_EIC_CAT2_ISR_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR
# undef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR
#endif

#ifdef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_FAR
# undef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_FAR_INIT
# undef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_FAR_INIT
#endif

#ifdef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_FAR_NOINIT
# undef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_FAR_ZERO_INIT
# undef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR
# undef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR
#endif

#ifdef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR
# undef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR_INIT
# undef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR_NOINIT
# undef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR_ZERO_INIT
# undef OS_LINK_VAR_ISR_MCU_ECM_EIC_CAT2_ISR_NEAR_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR_INIT )
.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR ALIGN(4) :> .
_OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_START = ADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR);
_OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_END = ENDADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR_NOINIT )
.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_NOINIT ALIGN(4) :> .
_OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_NOINIT_START = ADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_NOINIT);
_OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_NOINIT_END = ENDADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR_ZERO_INIT )
.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_ZERO_INIT ALIGN(4) :> .
_OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_ZERO_INIT_START = ADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_ZERO_INIT);
_OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_ZERO_INIT_END = ENDADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR_INIT )
.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_FAST ALIGN(4) :> .
_OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_FAST_START = ADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_FAST);
_OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_FAST_END = ENDADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR_NOINIT )
.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_FAST_NOINIT_START = ADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_FAST_NOINIT);
_OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_FAST_NOINIT_END = ENDADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR_ZERO_INIT )
.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_FAST_ZERO_INIT_START = ADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_FAST_ZERO_INIT);
_OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_SPI_CSIH0_TIC_CAT2_ISR_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR_INIT
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR_INIT
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR_NOINIT
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR_ZERO_INIT
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR_INIT
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR_NOINIT
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR_ZERO_INIT
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIC_CAT2_ISR_NEAR_ZERO_INIT
#endif




#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR_INIT )
.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR ALIGN(4) :> .
_OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_START = ADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR);
_OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_END = ENDADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR_NOINIT )
.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_NOINIT ALIGN(4) :> .
_OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_NOINIT_START = ADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_NOINIT);
_OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_NOINIT_END = ENDADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR_ZERO_INIT )
.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_ZERO_INIT ALIGN(4) :> .
_OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_ZERO_INIT_START = ADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_ZERO_INIT);
_OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_ZERO_INIT_END = ENDADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_ZERO_INIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR_INIT )
.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_FAST ALIGN(4) :> .
_OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_FAST_START = ADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_FAST);
_OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_FAST_END = ENDADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_FAST);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR_NOINIT )
.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_FAST_NOINIT ALIGN(4) :> .
_OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_FAST_NOINIT_START = ADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_FAST_NOINIT);
_OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_FAST_NOINIT_END = ENDADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_FAST_NOINIT);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR_ZERO_INIT )
.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_FAST_ZERO_INIT ALIGN(4) :> .
_OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_FAST_ZERO_INIT_START = ADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_FAST_ZERO_INIT);
_OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_FAST_ZERO_INIT_END = ENDADDR(.OS_SPI_CSIH0_TIRE_CAT2_ISR_VAR_FAST_ZERO_INIT);
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR_INIT
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR_INIT
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR_NOINIT
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR_ZERO_INIT
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR_INIT
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR_NOINIT
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR_ZERO_INIT
# undef OS_LINK_VAR_ISR_SPI_CSIH0_TIRE_CAT2_ISR_NEAR_ZERO_INIT
#endif



#ifdef OS_LINK_VAR
# undef OS_LINK_VAR
#endif

#ifdef OS_LINK_VAR_APP
# undef OS_LINK_VAR_APP
#endif

#ifdef OS_LINK_VAR_TASK
# undef OS_LINK_VAR_TASK
#endif

#ifdef OS_LINK_VAR_ISR
# undef OS_LINK_VAR_ISR
#endif

#ifdef OS_LINK_KERNEL_TRACE
# undef OS_LINK_KERNEL_TRACE
#endif

#ifdef OS_LINK_KERNEL_TRACE_FAR
# undef OS_LINK_KERNEL_TRACE_FAR
#endif

#ifdef OS_LINK_KERNEL_TRACE_NEAR
# undef OS_LINK_KERNEL_TRACE_NEAR
#endif

#ifdef OS_LINK_KERNEL_BARRIERS
# undef OS_LINK_KERNEL_BARRIERS
#endif

#ifdef OS_LINK_KERNEL_BARRIERS_FAR
# undef OS_LINK_KERNEL_BARRIERS_FAR
#endif

#ifdef OS_LINK_KERNEL_BARRIERS_NEAR
# undef OS_LINK_KERNEL_BARRIERS_NEAR
#endif

#ifdef OS_LINK_KERNEL_CORESTATUS
# undef OS_LINK_KERNEL_CORESTATUS
#endif

#ifdef OS_LINK_KERNEL_CORESTATUS_FAR
# undef OS_LINK_KERNEL_CORESTATUS_FAR
#endif

#ifdef OS_LINK_KERNEL_CORESTATUS_NEAR
# undef OS_LINK_KERNEL_CORESTATUS_NEAR
#endif

#ifdef OS_LINK_VAR_KERNEL
# undef OS_LINK_VAR_KERNEL
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR
# undef OS_LINK_VAR_KERNEL_FAR
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_CACHE
# undef OS_LINK_VAR_KERNEL_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_CACHE_INIT
# undef OS_LINK_VAR_KERNEL_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_KERNEL_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_NOCACHE
# undef OS_LINK_VAR_KERNEL_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_KERNEL_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_KERNEL_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR
# undef OS_LINK_VAR_KERNEL_NEAR
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_NOCACHE
# undef OS_LINK_VAR_KERNEL_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_KERNEL_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
#endif


