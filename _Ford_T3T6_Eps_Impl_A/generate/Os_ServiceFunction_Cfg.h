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
 *              File: Os_ServiceFunction_Cfg.h
 *   Generation Time: 2017-12-15 10:56:55
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

#if !defined (OS_SERVICEFUNCTION_CFG_H)                                              /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_SERVICEFUNCTION_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Number of non-trusted function stacks: NtWrapS_CmnMfgSrv_CallSvc10 */
# define OS_CFG_NUM_SERVICE_NTWRAPS_CMNMFGSRV_CALLSVC10_STACKS     (1UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_CMNMFGSRV_CALLSVC10_STACKS_APPL0     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_CMNMFGSRV_CALLSVC10_STACKS_APPL10     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_CMNMFGSRV_CALLSVC10_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0     (0UL)

/* Number of non-trusted function stacks: NtWrapS_NvM_EraseNvBlock */
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_ERASENVBLOCK_STACKS     (1UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_ERASENVBLOCK_STACKS_APPL0     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_ERASENVBLOCK_STACKS_APPL10     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_ERASENVBLOCK_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0     (0UL)

/* Number of non-trusted function stacks: NtWrapS_NvM_GetDataIndex */
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETDATAINDEX_STACKS     (1UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETDATAINDEX_STACKS_APPL0     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETDATAINDEX_STACKS_APPL10     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETDATAINDEX_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0     (0UL)

/* Number of non-trusted function stacks: NtWrapS_NvM_GetErrorStatus */
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETERRORSTATUS_STACKS     (1UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETERRORSTATUS_STACKS_APPL0     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETERRORSTATUS_STACKS_APPL10     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_GETERRORSTATUS_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0     (0UL)

/* Number of non-trusted function stacks: NtWrapS_NvM_InvalidateNvBlock */
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_INVALIDATENVBLOCK_STACKS     (1UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_INVALIDATENVBLOCK_STACKS_APPL0     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_INVALIDATENVBLOCK_STACKS_APPL10     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_INVALIDATENVBLOCK_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0     (0UL)

/* Number of non-trusted function stacks: NtWrapS_NvM_ReadBlock */
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_READBLOCK_STACKS     (1UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_READBLOCK_STACKS_APPL0     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_READBLOCK_STACKS_APPL10     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_READBLOCK_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0     (0UL)

/* Number of non-trusted function stacks: NtWrapS_NvM_SetBlockProtection */
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETBLOCKPROTECTION_STACKS     (1UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETBLOCKPROTECTION_STACKS_APPL0     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETBLOCKPROTECTION_STACKS_APPL10     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETBLOCKPROTECTION_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0     (0UL)

/* Number of non-trusted function stacks: NtWrapS_NvM_SetDataIndex */
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETDATAINDEX_STACKS     (1UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETDATAINDEX_STACKS_APPL0     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETDATAINDEX_STACKS_APPL10     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETDATAINDEX_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0     (0UL)

/* Number of non-trusted function stacks: NtWrapS_NvM_SetRamBlockStatus */
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETRAMBLOCKSTATUS_STACKS     (1UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETRAMBLOCKSTATUS_STACKS_APPL0     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETRAMBLOCKSTATUS_STACKS_APPL10     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_SETRAMBLOCKSTATUS_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0     (0UL)

/* Number of non-trusted function stacks: NtWrapS_NvM_WriteBlock */
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_WRITEBLOCK_STACKS     (1UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_WRITEBLOCK_STACKS_APPL0     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_WRITEBLOCK_STACKS_APPL10     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_NVM_WRITEBLOCK_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0     (0UL)

/* Number of non-trusted function stacks: NtWrapS_Rte_Call_CopyCalPageReq_Oper */
# define OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER_STACKS     (1UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER_STACKS_APPL0     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER_STACKS_APPL10     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0     (0UL)

/* Number of non-trusted function stacks: NtWrapS_Rte_Call_SetCalPageReq_Oper */
# define OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER_STACKS     (1UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER_STACKS_APPL0     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER_STACKS_APPL10     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0     (0UL)

/* Number of non-trusted function stacks: NtWrapS_SyncCrc_GetAvlCrcHwUnit */
# define OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT_STACKS     (1UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT_STACKS_APPL0     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT_STACKS_APPL10     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0     (0UL)

/* Number of non-trusted function stacks: NtWrapS_SyncCrc_RelsCrcHwUnit */
# define OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_RELSCRCHWUNIT_STACKS     (1UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_RELSCRCHWUNIT_STACKS_APPL0     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_RELSCRCHWUNIT_STACKS_APPL10     (0UL)
# define OS_CFG_NUM_SERVICE_NTWRAPS_SYNCCRC_RELSCRCHWUNIT_STACKS_SYSTEMAPPLICATION_OSCORE_CORE0     (0UL)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_SERVICEFUNCTION_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_ServiceFunction_Cfg.h
 *********************************************************************************************************************/
