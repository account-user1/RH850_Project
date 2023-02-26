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
 *              File: Os_Stack_Cfg.h
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

#if !defined (OS_STACK_CFG_H)                                                        /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_STACK_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! Defines whether stack monitoring is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_STACKMONITORING                  (STD_ON)

/*! Defines whether stack measurement is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_STACKMEASUREMENT                 (STD_ON)

/* Configured stack sizes (Total: 38656 Byte) */
# define OS_CFG_SIZE_NTWRAPS_CMNMFGSRV_CALLSVC100_STACK     (1024UL)
# define OS_CFG_SIZE_NTWRAPS_NVM_ERASENVBLOCK0_STACK     (512UL)
# define OS_CFG_SIZE_NTWRAPS_NVM_GETDATAINDEX0_STACK     (512UL)
# define OS_CFG_SIZE_NTWRAPS_NVM_GETERRORSTATUS0_STACK     (512UL)
# define OS_CFG_SIZE_NTWRAPS_NVM_INVALIDATENVBLOCK0_STACK     (512UL)
# define OS_CFG_SIZE_NTWRAPS_NVM_READBLOCK0_STACK     (512UL)
# define OS_CFG_SIZE_NTWRAPS_NVM_SETBLOCKPROTECTION0_STACK     (512UL)
# define OS_CFG_SIZE_NTWRAPS_NVM_SETDATAINDEX0_STACK     (512UL)
# define OS_CFG_SIZE_NTWRAPS_NVM_SETRAMBLOCKSTATUS0_STACK     (512UL)
# define OS_CFG_SIZE_NTWRAPS_NVM_WRITEBLOCK0_STACK     (512UL)
# define OS_CFG_SIZE_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER0_STACK     (512UL)
# define OS_CFG_SIZE_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER0_STACK     (512UL)
# define OS_CFG_SIZE_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT0_STACK     (512UL)
# define OS_CFG_SIZE_NTWRAPS_SYNCCRC_RELSCRCHWUNIT0_STACK     (512UL)
# define OS_CFG_SIZE_OSCORE_CORE0_ERROR_STACK     (256UL)
# define OS_CFG_SIZE_OSCORE_CORE0_ISR_LEVEL1_STACK     (2048UL)
# define OS_CFG_SIZE_OSCORE_CORE0_ISR_LEVEL2_STACK     (1024UL)
# define OS_CFG_SIZE_OSCORE_CORE0_ISR_LEVEL3_STACK     (1024UL)
# define OS_CFG_SIZE_OSCORE_CORE0_ISR_LEVEL4_STACK     (512UL)
# define OS_CFG_SIZE_OSCORE_CORE0_KERNEL_STACK     (2048UL)
# define OS_CFG_SIZE_OSCORE_CORE0_PROTECTION_STACK     (256UL)
# define OS_CFG_SIZE_OSCORE_CORE0_SHUTDOWN_STACK     (512UL)
# define OS_CFG_SIZE_OSCORE_CORE0_STARTUP_STACK     (256UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO0_STACK     (512UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO1_STACK     (1024UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO10_STACK     (2048UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO11_STACK     (1024UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO2_STACK     (2048UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO3_STACK     (2048UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO4_STACK     (2048UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO5_STACK     (3072UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO6_STACK     (2048UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO7_STACK     (3072UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO8_STACK     (1024UL)
# define OS_CFG_SIZE_OSCORE_CORE0_TASK_PRIO9_STACK     (3072UL)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_STACK_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Stack_Cfg.h
 *********************************************************************************************************************/
