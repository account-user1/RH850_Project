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
 *              File: Os_Compiler_Cfg.h
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

#if !defined (OS_COMPILER_CFG_H)                                                     /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_COMPILER_CFG_H

/**********************************************************************************************************************
 *  OS USER CALLOUT CODE SECTIONS
 *********************************************************************************************************************/

# define OS_CANISR_1_CODE
# define OS_MCU_ECM_EIC_CAT2_ISR_CODE
# define OS_NTWRAPS_CMNMFGSRV_CALLSVC10_CODE
# define OS_NTWRAPS_NVM_ERASENVBLOCK_CODE
# define OS_NTWRAPS_NVM_GETDATAINDEX_CODE
# define OS_NTWRAPS_NVM_GETERRORSTATUS_CODE
# define OS_NTWRAPS_NVM_INVALIDATENVBLOCK_CODE
# define OS_NTWRAPS_NVM_READBLOCK_CODE
# define OS_NTWRAPS_NVM_SETBLOCKPROTECTION_CODE
# define OS_NTWRAPS_NVM_SETDATAINDEX_CODE
# define OS_NTWRAPS_NVM_SETRAMBLOCKSTATUS_CODE
# define OS_NTWRAPS_NVM_WRITEBLOCK_CODE
# define OS_NTWRAPS_RTE_CALL_COPYCALPAGEREQ_OPER_CODE
# define OS_NTWRAPS_RTE_CALL_SETCALPAGEREQ_OPER_CODE
# define OS_NTWRAPS_SYNCCRC_GETAVLCRCHWUNIT_CODE
# define OS_NTWRAPS_SYNCCRC_RELSCRCHWUNIT_CODE
# define OS_SPI_CSIH0_TIC_CAT2_ISR_CODE
# define OS_SPI_CSIH0_TIRE_CAT2_ISR_CODE
# define OS_TASK_100MS_APPL10_CODE
# define OS_TASK_10MSBSW_APPL10_CODE
# define OS_TASK_10MS_APPL10_CODE
# define OS_TASK_2MSTMPLMONR_APPL10_CODE
# define OS_TASK_2MS_APPL10_CODE
# define OS_TASK_4MSBSW_APPL10_CODE
# define OS_TASK_4MS_APPL10_CODE
# define OS_TASK_5MSBSW_APPL10_CODE
# define OS_TASK_INITBSW_APPL10_CODE
# define OS_TASK_INIT_APPL10_CODE
# define OS_TASK_PRESTART_CORE0_CODE


#endif /* OS_COMPILER_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Compiler_Cfg.h
 *********************************************************************************************************************/
