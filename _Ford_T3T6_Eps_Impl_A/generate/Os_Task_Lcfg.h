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
 *              File: Os_Task_Lcfg.h
 *   Generation Time: 2017-08-21 15:21:42
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

#if !defined (OS_TASK_LCFG_H)                                                        /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_TASK_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Task_Types.h"

/* Os kernel module dependencies */
# include "Os_Ioc_Types.h"
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

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Task configuration data: IdleTask_OsCore_CORE0 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_IdleTask_OsCore_CORE0;

/*! Task configuration data: Task_100ms_Appl10 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_100ms_Appl10;

/*! Task configuration data: Task_10msBsw_Appl10 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_10msBsw_Appl10;

/*! Task configuration data: Task_10ms_Appl10 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_10ms_Appl10;

/*! Task configuration data: Task_2msTmplMonr_Appl10 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_2msTmplMonr_Appl10;

/*! Task configuration data: Task_2ms_Appl10 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_2ms_Appl10;

/*! Task configuration data: Task_4msBsw_Appl10 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_4msBsw_Appl10;

/*! Task configuration data: Task_4ms_Appl10 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_4ms_Appl10;

/*! Task configuration data: Task_5msBsw_Appl10 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_5msBsw_Appl10;

/*! Task configuration data: Task_InitBsw_Appl10 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_InitBsw_Appl10;

/*! Task configuration data: Task_Init_Appl10 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_Init_Appl10;

/*! Task configuration data: Task_PreStart_CORE0 */
extern CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_PreStart_CORE0;

# define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for tasks. */
extern CONSTP2CONST(Os_TaskConfigType, OS_CONST, OS_CONST) OsCfg_TaskRefs[OS_TASKID_COUNT + 1];

# define OS_STOP_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_TASK_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Task_Lcfg.h
 *********************************************************************************************************************/
