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
 *              File: Os_Hal_Cfg.h
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

#if !defined (OS_HAL_CFG_H)                                                          /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_HAL_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! HAL configuration major version identification. */
# define OS_CFG_HAL_MAJOR_VERSION                (1U)

/*! HAL configuration minor version identification. */
# define OS_CFG_HAL_MINOR_VERSION                (4U)

/* ISR core and level definitions */
# define OS_ISR_CANISR_1_CORE      (0)
# define OS_ISR_CANISR_1_LEVEL     (15)
# define OS_ISR_COUNTERISR_SYSTEMTIMER_CORE      (0)
# define OS_ISR_COUNTERISR_SYSTEMTIMER_LEVEL     (4)
# define OS_ISR_FPUERRIRQ_CORE      (0)
# define OS_ISR_FPUERRIRQ_LEVEL     (0)
# define OS_ISR_MCU_ECM_EIC_CAT2_ISR_CORE      (0)
# define OS_ISR_MCU_ECM_EIC_CAT2_ISR_LEVEL     (3)
# define OS_ISR_MCU_FEINT_ISR_CORE      (0)
# define OS_ISR_MCU_FEINT_ISR_LEVEL     (0)
# define OS_ISR_MOTCTRLMGRIRQ_CORE      (0)
# define OS_ISR_MOTCTRLMGRIRQ_LEVEL     (1)
# define OS_ISR_SPI_CSIH0_TIC_CAT2_ISR_CORE      (0)
# define OS_ISR_SPI_CSIH0_TIC_CAT2_ISR_LEVEL     (14)
# define OS_ISR_SPI_CSIH0_TIRE_CAT2_ISR_CORE      (0)
# define OS_ISR_SPI_CSIH0_TIRE_CAT2_ISR_LEVEL     (14)
# define OS_ISR_SYSERRIRQ_CORE      (0)
# define OS_ISR_SYSERRIRQ_LEVEL     (0)
# define OS_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_ISR_CORE      (0)
# define OS_ISR_WDG_59_DRIVERA_TRIGGERFUNCTION_ISR_LEVEL     (2)

/* Hardware counter timing macros */

/* Counter timing macros and constants: OsCounter */
# define OSMAXALLOWEDVALUE_OsCounter     (1073741823UL) /* 0x3FFFFFFFUL */
# define OSMINCYCLE_OsCounter            (1UL)
# define OSTICKSPERBASE_OsCounter        (1UL)
# define OSTICKDURATION_OsCounter        (12UL)

/*! Macro OS_NS2TICKS_OsCounter was approximated with a deviation of 0.0ppm. */
# define OS_NS2TICKS_OsCounter(x)     ( (TickType) (((((uint32)(x)) * 2) + 12) / 25) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2NS_OsCounter was approximated with a deviation of 2.220446049250313E-10ppm. */
# define OS_TICKS2NS_OsCounter(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 25) + 1) / 2) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! Macro OS_US2TICKS_OsCounter was approximated with a deviation of 0.0ppm. */
# define OS_US2TICKS_OsCounter(x)     ( (TickType) (((((uint32)(x)) * 80) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2US_OsCounter was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2US_OsCounter(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 40) / 80) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! Macro OS_MS2TICKS_OsCounter was approximated with a deviation of 0.0ppm. */
# define OS_MS2TICKS_OsCounter(x)     ( (TickType) (((((uint32)(x)) * 80000) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2MS_OsCounter was approximated with a deviation of 2.220446049250313E-10ppm. */
# define OS_TICKS2MS_OsCounter(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 40000) / 80000) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! Macro OS_SEC2TICKS_OsCounter was approximated with a deviation of 0.0ppm. */
# define OS_SEC2TICKS_OsCounter(x)     ( (TickType) (((((uint32)(x)) * 80000000) + 0) / 1) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */
/*! Macro OS_TICKS2SEC_OsCounter was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2SEC_OsCounter(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 40000000) / 80000000) )     /* PRQA S 3453 */ /* MD_MSR_19.7 */







/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_HAL_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Cfg.h
 *********************************************************************************************************************/
