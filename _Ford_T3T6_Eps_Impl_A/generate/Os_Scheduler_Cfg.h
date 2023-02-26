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
 *              File: Os_Scheduler_Cfg.h
 *   Generation Time: 2017-08-24 13:45:33
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

#if !defined (OS_SCHEDULER_CFG_H)                                                    /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_SCHEDULER_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! Defines the number of all task queues. */
# define OS_CFG_NUM_TASKQUEUES                   (12UL)

/* Number of task queue activation slots: OsCore_CORE0 */
# define OS_CFG_NUM_TASKQUEUE0_OSCORE_CORE0_SLOTS     (2UL)
# define OS_CFG_NUM_TASKQUEUE1_OSCORE_CORE0_SLOTS     (3UL)
# define OS_CFG_NUM_TASKQUEUE2_OSCORE_CORE0_SLOTS     (2UL)
# define OS_CFG_NUM_TASKQUEUE3_OSCORE_CORE0_SLOTS     (3UL)
# define OS_CFG_NUM_TASKQUEUE4_OSCORE_CORE0_SLOTS     (2UL)
# define OS_CFG_NUM_TASKQUEUE5_OSCORE_CORE0_SLOTS     (3UL)
# define OS_CFG_NUM_TASKQUEUE6_OSCORE_CORE0_SLOTS     (2UL)
# define OS_CFG_NUM_TASKQUEUE7_OSCORE_CORE0_SLOTS     (2UL)
# define OS_CFG_NUM_TASKQUEUE8_OSCORE_CORE0_SLOTS     (2UL)
# define OS_CFG_NUM_TASKQUEUE9_OSCORE_CORE0_SLOTS     (2UL)
# define OS_CFG_NUM_TASKQUEUE10_OSCORE_CORE0_SLOTS     (2UL)
# define OS_CFG_NUM_TASKQUEUE11_OSCORE_CORE0_SLOTS     (2UL)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_SCHEDULER_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Scheduler_Cfg.h
 *********************************************************************************************************************/
