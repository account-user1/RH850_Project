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
 *              File: Os_MemoryProtection_Lcfg.c
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

#define OS_MEMORYROTECTION_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_MemoryProtection.h"

/* Os kernel module dependencies */

/* Os hal dependencies */
#include "Os_Hal_MemoryProtection_Lcfg.h"


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

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Memory protection configuration data: OsCore_CORE0 */
CONST(Os_MpCoreConfigType, OS_CONST) OsCfg_Mp_OsCore_CORE0 =
{
  /* .HwConfig = */ &OsCfg_Hal_Mp_OsCore_CORE0
};

/*! Memory protection configuration data: Appl0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Appl0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_Appl0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: Appl10 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Appl10 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_Appl10,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: SystemApplication_OsCore_CORE0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_SystemApplication_OsCore_CORE0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore_CORE0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: CanIsr_1 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_1 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_Appl10,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_1
};

/*! Memory protection configuration data: CounterIsr_SystemTimer */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CounterIsr_SystemTimer =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore_CORE0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CounterIsr_SystemTimer
};

/*! Memory protection configuration data: MCU_ECM_EIC_CAT2_ISR */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_MCU_ECM_EIC_CAT2_ISR =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_Appl0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_MCU_ECM_EIC_CAT2_ISR
};

/*! Memory protection configuration data: SPI_CSIH0_TIC_CAT2_ISR */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_SPI_CSIH0_TIC_CAT2_ISR =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_Appl10,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_SPI_CSIH0_TIC_CAT2_ISR
};

/*! Memory protection configuration data: SPI_CSIH0_TIRE_CAT2_ISR */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_SPI_CSIH0_TIRE_CAT2_ISR =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_Appl10,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_SPI_CSIH0_TIRE_CAT2_ISR
};

/*! Memory protection configuration data: IdleTask_OsCore_CORE0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_IdleTask_OsCore_CORE0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore_CORE0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_IdleTask_OsCore_CORE0
};

/*! Memory protection configuration data: Task_100ms_Appl10 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_100ms_Appl10 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_Appl10,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_100ms_Appl10
};

/*! Memory protection configuration data: Task_10msBsw_Appl10 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_10msBsw_Appl10 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_Appl10,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_10msBsw_Appl10
};

/*! Memory protection configuration data: Task_10ms_Appl10 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_10ms_Appl10 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_Appl10,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_10ms_Appl10
};

/*! Memory protection configuration data: Task_2msTmplMonr_Appl10 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_2msTmplMonr_Appl10 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_Appl10,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_2msTmplMonr_Appl10
};

/*! Memory protection configuration data: Task_2ms_Appl10 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_2ms_Appl10 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_Appl10,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_2ms_Appl10
};

/*! Memory protection configuration data: Task_4msBsw_Appl10 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_4msBsw_Appl10 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_Appl10,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_4msBsw_Appl10
};

/*! Memory protection configuration data: Task_4ms_Appl10 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_4ms_Appl10 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_Appl10,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_4ms_Appl10
};

/*! Memory protection configuration data: Task_5msBsw_Appl10 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_5msBsw_Appl10 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_Appl10,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_5msBsw_Appl10
};

/*! Memory protection configuration data: Task_InitBsw_Appl10 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_InitBsw_Appl10 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_Appl10,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_InitBsw_Appl10
};

/*! Memory protection configuration data: Task_Init_Appl10 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_Init_Appl10 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_Appl10,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_Init_Appl10
};

/*! Memory protection configuration data: Task_PreStart_CORE0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Task_PreStart_CORE0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore_CORE0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Task_PreStart_CORE0
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Memory protection configuration data: SystemMpu */
CONST(Os_MpSystemConfigType, OS_CONST) OsCfg_Mp_SystemMpu =
{
  /* .HwConfig = */ &OsCfg_Hal_Mp_SystemMpu
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
 *  END OF FILE: Os_MemoryProtection_Lcfg.c
 *********************************************************************************************************************/
