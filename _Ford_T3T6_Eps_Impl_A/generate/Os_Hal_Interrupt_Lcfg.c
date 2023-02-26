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
 *              File: Os_Hal_Interrupt_Lcfg.c
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

/* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_HAL_INTERRUPT_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_Interrupt_Lcfg.h"
#include "Os_Hal_Interrupt.h"

/* Os kernel module dependencies */

/* Os hal dependencies */
#include "Os_Hal_Core.h"


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

/*! HAL ISR configuration data: CanIsr_1 */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CanIsr_1 =
{
  /* .EICBaseAddr = */ (Os_Hal_EICnRefType)(OS_HAL_INTC2_BASE + (2*175)),           /* PRQA S 0303 */ /* MD_Os_Hal_0303 */
  /* .IBDBaseAddr = */ (Os_Hal_IBDnRefType)(OS_HAL_EIBD2_BASE + (4*175)),           /* PRQA S 0303 */ /* MD_Os_Hal_0303 */
  /* .IntChannel  = */ (uint32)175,
  /* .IntLevel    = */ (uint32)15,
  /* .IntMask     = */ (uint32)(0x00008000UL & OS_HAL_PMR_MASK),
  /* .CoreID      = */ (uint32)0UL
};

/*! HAL ISR configuration data: CounterIsr_SystemTimer */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_CounterIsr_SystemTimer =
{
  /* .EICBaseAddr = */ (Os_Hal_EICnRefType)(OS_HAL_INTC2_BASE + (2*41)),           /* PRQA S 0303 */ /* MD_Os_Hal_0303 */
  /* .IBDBaseAddr = */ (Os_Hal_IBDnRefType)(OS_HAL_EIBD2_BASE + (4*41)),           /* PRQA S 0303 */ /* MD_Os_Hal_0303 */
  /* .IntChannel  = */ (uint32)41,
  /* .IntLevel    = */ (uint32)4,
  /* .IntMask     = */ (uint32)(0x0000FFF0UL & OS_HAL_PMR_MASK),
  /* .CoreID      = */ (uint32)0UL
};

/*! HAL ISR configuration data: FpuErrIrq */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_FpuErrIrq =
{
  /* .EICBaseAddr = */ (Os_Hal_EICnRefType)0,
  /* .IBDBaseAddr = */ (Os_Hal_IBDnRefType)0,
  /* .IntChannel  = */ (uint32)7,
  /* .IntLevel    = */ (uint32)0,
  /* .IntMask     = */ (uint32)0,
  /* .CoreID      = */ (uint32)0UL
};

/*! HAL ISR configuration data: MCU_ECM_EIC_CAT2_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_MCU_ECM_EIC_CAT2_ISR =
{
  /* .EICBaseAddr = */ (Os_Hal_EICnRefType)(OS_HAL_INTC1_BASE + (2*0)),           /* PRQA S 0303 */ /* MD_Os_Hal_0303 */
  /* .IBDBaseAddr = */ (Os_Hal_IBDnRefType)(OS_HAL_EIBD1_BASE + (4*0)),           /* PRQA S 0303 */ /* MD_Os_Hal_0303 */
  /* .IntChannel  = */ (uint32)0,
  /* .IntLevel    = */ (uint32)3,
  /* .IntMask     = */ (uint32)(0x0000FFF8UL & OS_HAL_PMR_MASK),
  /* .CoreID      = */ (uint32)0UL
};

/*! HAL ISR configuration data: MCU_FEINT_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_MCU_FEINT_ISR =
{
  /* .EICBaseAddr = */ (Os_Hal_EICnRefType)0,
  /* .IBDBaseAddr = */ (Os_Hal_IBDnRefType)0,
  /* .IntChannel  = */ (uint32)15,
  /* .IntLevel    = */ (uint32)0,
  /* .IntMask     = */ (uint32)0,
  /* .CoreID      = */ (uint32)0UL
};

/*! HAL ISR configuration data: MotCtrlMgrIrq */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_MotCtrlMgrIrq =
{
  /* .EICBaseAddr = */ (Os_Hal_EICnRefType)(OS_HAL_INTC1_BASE + (2*17)),           /* PRQA S 0303 */ /* MD_Os_Hal_0303 */
  /* .IBDBaseAddr = */ (Os_Hal_IBDnRefType)(OS_HAL_EIBD1_BASE + (4*17)),           /* PRQA S 0303 */ /* MD_Os_Hal_0303 */
  /* .IntChannel  = */ (uint32)17,
  /* .IntLevel    = */ (uint32)1,
  /* .IntMask     = */ (uint32)(0x0000FFFEUL & OS_HAL_PMR_MASK),
  /* .CoreID      = */ (uint32)0UL
};

/*! HAL ISR configuration data: SPI_CSIH0_TIC_CAT2_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_SPI_CSIH0_TIC_CAT2_ISR =
{
  /* .EICBaseAddr = */ (Os_Hal_EICnRefType)(OS_HAL_INTC2_BASE + (2*88)),           /* PRQA S 0303 */ /* MD_Os_Hal_0303 */
  /* .IBDBaseAddr = */ (Os_Hal_IBDnRefType)(OS_HAL_EIBD2_BASE + (4*88)),           /* PRQA S 0303 */ /* MD_Os_Hal_0303 */
  /* .IntChannel  = */ (uint32)88,
  /* .IntLevel    = */ (uint32)14,
  /* .IntMask     = */ (uint32)(0x0000C000UL & OS_HAL_PMR_MASK),
  /* .CoreID      = */ (uint32)0UL
};

/*! HAL ISR configuration data: SPI_CSIH0_TIRE_CAT2_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_SPI_CSIH0_TIRE_CAT2_ISR =
{
  /* .EICBaseAddr = */ (Os_Hal_EICnRefType)(OS_HAL_INTC2_BASE + (2*86)),           /* PRQA S 0303 */ /* MD_Os_Hal_0303 */
  /* .IBDBaseAddr = */ (Os_Hal_IBDnRefType)(OS_HAL_EIBD2_BASE + (4*86)),           /* PRQA S 0303 */ /* MD_Os_Hal_0303 */
  /* .IntChannel  = */ (uint32)86,
  /* .IntLevel    = */ (uint32)14,
  /* .IntMask     = */ (uint32)(0x0000C000UL & OS_HAL_PMR_MASK),
  /* .CoreID      = */ (uint32)0UL
};

/*! HAL ISR configuration data: SysErrIrq */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_SysErrIrq =
{
  /* .EICBaseAddr = */ (Os_Hal_EICnRefType)0,
  /* .IBDBaseAddr = */ (Os_Hal_IBDnRefType)0,
  /* .IntChannel  = */ (uint32)1,
  /* .IntLevel    = */ (uint32)0,
  /* .IntMask     = */ (uint32)0,
  /* .CoreID      = */ (uint32)0UL
};

/*! HAL ISR configuration data: WDG_59_DRIVERA_TRIGGERFUNCTION_ISR */
CONST(Os_Hal_IntIsrConfigType, OS_CONST) OsCfg_Hal_IntIsr_WDG_59_DRIVERA_TRIGGERFUNCTION_ISR =
{
  /* .EICBaseAddr = */ (Os_Hal_EICnRefType)(OS_HAL_INTC1_BASE + (2*8)),           /* PRQA S 0303 */ /* MD_Os_Hal_0303 */
  /* .IBDBaseAddr = */ (Os_Hal_IBDnRefType)(OS_HAL_EIBD1_BASE + (4*8)),           /* PRQA S 0303 */ /* MD_Os_Hal_0303 */
  /* .IntChannel  = */ (uint32)8,
  /* .IntLevel    = */ (uint32)2,
  /* .IntMask     = */ (uint32)(0x0000FFFCUL & OS_HAL_PMR_MASK),
  /* .CoreID      = */ (uint32)0UL
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
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
 *  END OF FILE: Os_Hal_Interrupt_Lcfg.c
 *********************************************************************************************************************/
