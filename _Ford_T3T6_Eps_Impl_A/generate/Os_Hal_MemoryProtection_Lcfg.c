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
 *              File: Os_Hal_MemoryProtection_Lcfg.c
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

#define OS_HAL_MEMORYPROTECTION_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_MemoryProtection_Cfg.h"
#include "Os_Hal_MemoryProtection_Lcfg.h"
#include "Os_Hal_MemoryProtection.h"

/* Os kernel module dependencies */

/* Os hal dependencies */


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

/*! HAL memory protection configuration data: OsCore_CORE0 */
CONST(Os_Hal_MpCoreConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore_CORE0 =
{
  /* MaxDynAppRegions    = 1 */
  /* MaxDynThreadRegions = 0 */

  /* Regions = */ (uint32)(OS_HAL_MPU_REGION_COUNT_CORE0-1),
  /* ASID    = */ (uint32)0x03FFUL,

  {
    /* MPU region 0: dynamic region for stack {SUPERVISOR=[W, R], USER=[W, R]} */
    /* Only used for OS initialization. Will be reprogrammed on context switch */
    /* start address = */ (uint32)0x0UL,
    /* end address   = */ (uint32)0xFFFFFFFFUL,
    /* access rights = */ (uint32)0xDBUL
  },
  {
    /* MPU region 1: dynamic region for application data */
    /* start address = */ (uint32)0x0UL,    
    /* end address   = */ (uint32)0x0UL,
    /* access rights = */ (uint32)0x0UL
  },   
  {
    /* MPU region 2: static region {SUPERVISOR=[X, R], USER=[X, R]} */
    /* start address = */ (uint32)0x0UL,                                                    
    /* end address   = */ (uint32)0x1FFFFFUL,                                                      
    /* access rights = */ (uint32)0x000000EDUL 
  }, 
  {
    /* MPU region 3: static region {SUPERVISOR=[W, R], USER=[R]} */
    /* start address = */ (uint32)GeneralRam_StartAddr,                                                    /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* end address   = */ (uint32)GeneralRam_EndAddr,                                                      /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* access rights = */ (uint32)0x000000D9UL 
  }, 
  {
    /* MPU region 4: static region {SUPERVISOR=[W, R], USER=[W, R]} */
    /* start address = */ (uint32)OS_GLOBALSHARED_VAR_START,                                                    /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* end address   = */ (uint32)OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_END,                                                      /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* access rights = */ (uint32)0x000000DBUL 
  }, 
  {
    /* MPU region 5: static region {SUPERVISOR=[W, R], USER=[W, R]} */
    /* start address = */ (uint32)0xFF000000UL,                                                    
    /* end address   = */ (uint32)0xFFFFFFFFUL,                                                      
    /* access rights = */ (uint32)0x000000DBUL 
  }, 
  {
    /* MPU region 6: static region {SUPERVISOR=[R], USER=[R]} */
    /* start address = */ (uint32)_OS_CORE0_STACKS_START,                                                    /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* end address   = */ (uint32)_OS_CORE0_STACKS_END,                                                      /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* access rights = */ (uint32)0x000000C9UL 
  }, 
  {
    /* MPU region 7: static region {SUPERVISOR=[W, R], USER=[W, R]} */
    /* start address = */ (uint32)0xFEBFFC00UL,                                                    
    /* end address   = */ (uint32)0xFEBFFFFFUL,                                                      
    /* access rights = */ (uint32)0x000000DBUL 
  }, 
  {
    /* MPU region 8: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 9: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 10: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 11: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 12: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 13: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 14: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }, 
  {
    /* MPU region 15: not used */
    (uint32)0x0UL,
    (uint32)0x0UL,
    (uint32)0x0UL
  }
};

/*! HAL memory protection configuration data: Appl0 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_Appl0 =
{
  /* Regions = */ (uint32)0,
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Appl10 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_Appl10 =
{
  /* Regions = */ (uint32)1,
  /* ASID    = */ (uint32)0x000003FFUL,
  {
    /* start address = */ (uint32)0x0UL,
    /* end address   = */ (uint32)0x0UL,
    /* access rights = */ (uint32)0x0UL
  },
  {
    /* start address = */ (uint32)OS_Appl10_VAR_ALL_START,                                              /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* end address   = */ (uint32)OS_Appl10_VAR_ALL_END,                                                /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* access rights = */ (uint32)0x000000C2UL
  }, 
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: SystemApplication_OsCore_CORE0 */
CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_SystemApplication_OsCore_CORE0 =
{
  /* Regions = */ (uint32)0,
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: CanIsr_1 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_1 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: CounterIsr_SystemTimer */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CounterIsr_SystemTimer =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: MCU_ECM_EIC_CAT2_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_MCU_ECM_EIC_CAT2_ISR =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: SPI_CSIH0_TIC_CAT2_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_SPI_CSIH0_TIC_CAT2_ISR =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: SPI_CSIH0_TIRE_CAT2_ISR */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_SPI_CSIH0_TIRE_CAT2_ISR =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: IdleTask_OsCore_CORE0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_IdleTask_OsCore_CORE0 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Task_100ms_Appl10 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_100ms_Appl10 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Task_10msBsw_Appl10 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_10msBsw_Appl10 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Task_10ms_Appl10 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_10ms_Appl10 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Task_2msTmplMonr_Appl10 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_2msTmplMonr_Appl10 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Task_2ms_Appl10 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_2ms_Appl10 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Task_4msBsw_Appl10 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_4msBsw_Appl10 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Task_4ms_Appl10 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_4ms_Appl10 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Task_5msBsw_Appl10 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_5msBsw_Appl10 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Task_InitBsw_Appl10 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_InitBsw_Appl10 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Task_Init_Appl10 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_Init_Appl10 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

/*! HAL memory protection configuration data: Task_PreStart_CORE0 */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Task_PreStart_CORE0 =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL memory protection configuration data: SystemMpu */
CONST(Os_Hal_MpSystemConfigType, OS_CONST) OsCfg_Hal_Mp_SystemMpu =
{  
  0 /* not used because no system MPU */
};

/*! HAL memory protection configuration data: EmptyThread */
CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_EmptyThread =
{
  /* Regions = */ (uint32)0,  
  /* ASID    = */ (uint32)0x000003FFUL,
} /* PRQA S 703 */ /* MD_Os_Hal_0703_OptimizeArray */;

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
 *  END OF FILE: Os_Hal_MemoryProtection_Lcfg.c
 *********************************************************************************************************************/
