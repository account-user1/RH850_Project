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
 *              File: Os_Hal_Entry_Lcfg.c
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

#define OS_HAL_ENTRY_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_Entry_Cfg.h"
#include "Os_Hal_Entry_Lcfg.h"
#include "Os_Hal_Entry.h"

/* Os kernel module dependencies */
#include "Os_Isr_Lcfg.h"
#include "Os.h"

/* Os hal dependencies */
#include "Os_Hal_Cfg.h"
#include "Os_Hal_Interrupt_Cfg.h"
#include "Os_Hal_Trap.h"


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

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  EXCEPTION VECTOR TABLE CORE 0
 *********************************************************************************************************************/

  Os_Hal_SECTION(".OS_EXCVEC_CORE0_CODE");     /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */    
  Os_Hal_ALIGN("512");                         /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_LABEL("_OS_EXCVEC_CORE0_CODE_START"); /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  
  Os_Hal_EXC("core0_0x0000", "RESET_CORE0")          /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0010", "Patched_SysErrIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0020", "Os_Hal_UnhandledExc")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0030", "Os_Hal_UnhandledExc")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0040", "Os_Hal_TrapHandler")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */  

  Os_Hal_EXC("core0_0x0050", "Os_Hal_IsrEpilogue")   /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0060", "Os_Hal_UnhandledExc")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0070", "Patched_FpuErrIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0080", "Os_Hal_UnhandledExc")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0090", "Os_Hal_MemFaultExc")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x00a0", "Os_Hal_UnhandledExc")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x00b0", "Os_Hal_UnhandledExc")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x00c0", "Os_Hal_UnhandledExc")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x00d0", "Os_Hal_UnhandledExc")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x00e0", "Os_Hal_UnhandledExc")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x00f0", "MCU_FEINT_ISR")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0100", "Os_Hal_UnhandledIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0110", "Os_Hal_UnhandledIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0120", "Os_Hal_UnhandledIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0130", "Os_Hal_UnhandledIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0140", "Os_Hal_UnhandledIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0150", "Os_Hal_UnhandledIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0160", "Os_Hal_UnhandledIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0170", "Os_Hal_UnhandledIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0180", "Os_Hal_UnhandledIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x0190", "Os_Hal_UnhandledIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x01a0", "Os_Hal_UnhandledIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x01b0", "Os_Hal_UnhandledIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x01c0", "Os_Hal_UnhandledIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x01d0", "Os_Hal_UnhandledIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x01e0", "Os_Hal_UnhandledIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_EXC("core0_0x01f0", "Os_Hal_UnhandledIrq")  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */




/**********************************************************************************************************************
 *  INTERRUPT VECTOR TABLE CORE 0
 *********************************************************************************************************************/

  Os_Hal_SECTION(".OS_INTVEC_CORE0_CODE");     /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */  
  Os_Hal_ALIGN("512");                         /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_LABEL("_OS_INTVEC_CORE0_CODE_START"); /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  /* Irq Channel 0 */ Os_Hal_WORD("Os_Hal_Irq_MCU_ECM_EIC_CAT2_ISR") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 1 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 2 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 3 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 4 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 5 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 6 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 7 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 8 */ Os_Hal_WORD("WDG_59_DRIVERA_TRIGGERFUNCTION_ISR") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 9 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 10 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 11 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 12 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 13 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 14 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 15 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 16 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 17 */ Os_Hal_WORD("MotCtrlMgrIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 18 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 19 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 20 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 21 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 22 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 23 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 24 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 25 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 26 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 27 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 28 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 29 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 30 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 31 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 32 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 33 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 34 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 35 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 36 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 37 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 38 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 39 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 40 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 41 */ Os_Hal_WORD("Os_Hal_Irq_CounterIsr_SystemTimer") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 42 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 43 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 44 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 45 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 46 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 47 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 48 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 49 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 50 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 51 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 52 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 53 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 54 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 55 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 56 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 57 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 58 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 59 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 60 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 61 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 62 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 63 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 64 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 65 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 66 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 67 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 68 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 69 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 70 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 71 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 72 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 73 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 74 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 75 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 76 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 77 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 78 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 79 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 80 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 81 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 82 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 83 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 84 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 85 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 86 */ Os_Hal_WORD("Os_Hal_Irq_SPI_CSIH0_TIRE_CAT2_ISR") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 87 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 88 */ Os_Hal_WORD("Os_Hal_Irq_SPI_CSIH0_TIC_CAT2_ISR") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 89 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 90 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 91 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 92 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 93 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 94 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 95 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 96 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 97 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 98 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 99 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 100 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 101 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 102 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 103 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 104 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 105 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 106 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 107 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 108 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 109 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 110 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 111 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 112 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 113 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 114 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 115 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 116 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 117 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 118 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 119 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 120 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 121 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 122 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 123 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 124 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 125 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 126 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 127 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 128 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 129 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 130 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 131 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 132 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 133 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 134 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 135 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 136 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 137 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 138 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 139 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 140 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 141 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 142 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 143 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 144 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 145 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 146 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 147 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 148 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 149 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 150 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 151 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 152 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 153 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 154 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 155 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 156 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 157 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 158 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 159 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 160 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 161 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 162 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 163 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 164 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 165 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 166 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 167 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 168 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 169 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 170 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 171 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 172 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 173 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 174 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 175 */ Os_Hal_WORD("Os_Hal_Irq_CanIsr_1") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 176 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 177 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 178 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 179 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 180 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 181 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 182 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 183 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 184 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 185 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 186 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 187 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 188 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 189 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 190 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 191 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 192 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 193 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 194 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 195 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 196 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 197 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 198 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 199 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 200 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 201 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 202 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 203 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 204 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 205 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 206 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 207 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 208 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 209 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 210 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 211 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 212 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 213 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 214 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 215 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 216 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 217 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 218 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 219 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 220 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 221 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 222 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 223 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 224 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 225 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 226 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 227 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 228 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 229 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 230 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 231 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 232 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 233 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 234 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 235 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 236 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 237 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 238 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 239 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 240 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 241 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 242 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 243 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 244 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 245 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 246 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 247 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 248 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 249 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 250 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 251 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 252 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 253 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 254 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 255 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 256 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 257 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 258 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 259 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 260 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 261 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 262 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 263 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 264 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 265 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 266 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 267 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 268 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 269 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 270 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 271 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 272 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 273 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 274 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 275 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 276 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 277 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 278 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 279 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 280 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 281 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 282 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 283 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 284 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 285 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 286 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 287 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 288 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 289 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 290 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 291 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 292 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 293 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 294 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 295 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 296 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 297 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 298 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 299 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 300 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 301 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 302 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 303 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 304 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 305 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 306 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 307 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 308 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 309 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 310 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 311 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 312 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 313 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 314 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 315 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 316 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 317 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 318 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 319 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 320 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 321 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 322 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 323 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 324 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 325 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 326 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 327 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 328 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 329 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 330 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 331 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 332 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 333 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 334 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 335 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 336 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 337 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 338 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 339 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 340 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 341 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 342 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 343 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 344 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 345 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 346 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 347 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 348 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 349 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 350 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 351 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 352 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 353 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 354 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 355 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 356 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 357 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 358 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 359 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 360 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 361 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 362 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 363 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 364 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 365 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 366 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 367 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 368 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 369 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 370 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 371 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 372 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 373 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 374 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 375 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 376 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 377 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 378 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 379 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 380 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 381 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 382 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 383 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 384 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 385 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 386 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 387 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 388 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 389 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 390 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 391 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 392 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 393 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 394 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 395 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 396 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 397 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 398 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 399 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 400 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 401 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 402 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 403 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 404 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 405 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 406 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 407 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 408 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 409 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 410 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 411 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 412 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 413 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 414 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 415 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 416 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 417 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 418 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 419 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 420 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 421 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 422 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 423 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 424 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 425 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 426 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 427 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 428 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 429 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 430 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 431 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 432 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 433 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 434 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 435 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 436 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 437 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 438 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 439 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 440 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 441 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 442 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 443 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 444 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 445 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 446 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 447 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 448 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 449 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 450 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 451 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 452 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 453 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 454 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 455 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 456 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 457 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 458 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 459 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 460 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 461 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 462 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 463 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 464 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 465 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 466 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 467 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 468 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 469 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 470 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 471 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 472 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 473 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 474 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 475 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 476 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 477 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 478 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 479 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 480 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 481 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 482 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 483 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 484 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 485 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 486 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 487 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 488 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 489 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 490 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 491 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 492 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 493 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 494 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 495 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 496 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 497 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 498 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 499 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 500 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 501 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 502 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 503 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 504 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 505 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 506 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 507 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 508 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 509 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 510 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* Irq Channel 511 */ Os_Hal_WORD("Os_Hal_UnhandledIrq") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */


/**********************************************************************************************************************
 *  CAT2 ISR HANDLER CORE 0
 *********************************************************************************************************************/

  Os_Hal_CAT2ISR("CanIsr_1") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_CAT2ISR("CounterIsr_SystemTimer") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_CAT2ISR("MCU_ECM_EIC_CAT2_ISR") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_CAT2ISR("SPI_CSIH0_TIC_CAT2_ISR") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_CAT2ISR("SPI_CSIH0_TIRE_CAT2_ISR") /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */



/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Entry_Lcfg.c
 *********************************************************************************************************************/
