/***********************************************************************************************************************
 *  COPYRIGHT
 *  --------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  --------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/**
 *  \ingroup    Os_Hal
 *  \defgroup   Os_Hal_MemoryProtection  HAL Memory Protection
 *  \brief      Internal functions and data types related to memory protection.
 *  \details
 *
 *  \note Consider Memory barriers and sync instructions.
 *
 *  \{
 *
 *  \file       Os_Hal_MemoryProtectionInt.h
 *  \brief
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

#if !defined (OS_HAL_MEMORYPROTECTIONINT_H)                                                                             /* PRQA S 0883 */ /* MD_Os_Hal_0883 */
# define OS_HAL_MEMORYPROTECTIONINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Hal_MemoryProtection_Types.h"

/* Os kernel module dependencies */
# include "Os_CommonInt.h"

/* Os HAL dependencies */
# include "Os_Hal_CompilerInt.h"
# include "Os_Hal_MemoryProtection_Cfg.h"

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/

/*! \brief         Sets the memory protection operation mode register to the passed value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPM(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPM(x)     Os_Hal_SetSPR( 0, 5, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU region control register to the passed value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPRC(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPRC(x)    Os_Hal_SetSPR( 1, 5, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area minimum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPLA0(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPLA0(x)   Os_Hal_SetSPR( 0, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Returns the protection area minimum address of the specific core MPU region.
 *  \details       --no details--
 *  \fn uint32 Os_Hal_GetMPLA0()
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_GetMPLA0()    Os_Hal_GetSPR( 0, 6)                                                                      /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area maximum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPUA0(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPUA0(x)   Os_Hal_SetSPR( 1, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Returns the protection area maximum address of the specific core MPU region.
 *  \details       --no details--
 *  \fn uint32 Os_Hal_GetMPLA0()
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_GetMPUA0()    Os_Hal_GetSPR( 1, 6)                                                                      /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area attributes to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPAT0(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPAT0(x)   Os_Hal_SetSPR( 2, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area minimum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPLA1(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPLA1(x)   Os_Hal_SetSPR( 4, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area maximum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPUA1(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPUA1(x)   Os_Hal_SetSPR( 5, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area attributes to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPAT1(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPAT1(x)   Os_Hal_SetSPR( 6, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area minimum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPLA2(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPLA2(x)   Os_Hal_SetSPR( 8, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area maximum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPUA2(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPUA2(x)   Os_Hal_SetSPR( 9, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area attributes to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPAT2(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPAT2(x)   Os_Hal_SetSPR(10, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area minimum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPLA3(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPLA3(x)   Os_Hal_SetSPR(12, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area maximum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPUA3(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPUA3(x)   Os_Hal_SetSPR(13, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area attributes to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPAT3(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPAT3(x)   Os_Hal_SetSPR(14, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area minimum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPLA4(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPLA4(x)   Os_Hal_SetSPR(16, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area maximum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPUA4(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPUA4(x)   Os_Hal_SetSPR(17, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area attributes to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPAT4(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPAT4(x)   Os_Hal_SetSPR(18, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area minimum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPLA5(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPLA5(x)   Os_Hal_SetSPR(20, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area maximum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPUA5(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPUA5(x)   Os_Hal_SetSPR(21, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area attributes to the passed address
 *  \details      --no details--
 *  \fn void Os_Hal_SetMPAT5(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPAT5(x)   Os_Hal_SetSPR(22, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area minimum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPLA6(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPLA6(x)   Os_Hal_SetSPR(24, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area maximum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPUA6(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPUA6(x)   Os_Hal_SetSPR(25, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area attributes to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPAT6(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPAT6(x)   Os_Hal_SetSPR(26, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area minimum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPLA7(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPLA7(x)   Os_Hal_SetSPR(28, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area maximum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPUA7(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPUA7(x)   Os_Hal_SetSPR(29, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area attributes to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPAT7(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPAT7(x)   Os_Hal_SetSPR(30, 6, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area minimum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPLA8(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPLA8(x)   Os_Hal_SetSPR( 0, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area maximum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPUA8(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPUA8(x)   Os_Hal_SetSPR( 1, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area attributes to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPAT8(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPAT8(x)   Os_Hal_SetSPR( 2, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area minimum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPLA9(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPLA9(x)   Os_Hal_SetSPR( 4, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area maximum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPUA9(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPUA9(x)   Os_Hal_SetSPR( 5, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area attributes to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPAT9(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPAT9(x)   Os_Hal_SetSPR( 6, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area minimum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPLA10(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPLA10(x)  Os_Hal_SetSPR( 8, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area maximum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPUA10(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPUA10(x)  Os_Hal_SetSPR( 9, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area attributes to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPAT10(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPAT10(x)  Os_Hal_SetSPR(10, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area minimum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPLA11(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPLA11(x)  Os_Hal_SetSPR(12, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area maximum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPUA11(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPUA11(x)  Os_Hal_SetSPR(13, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area attribute to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPAT11(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPAT11(x)  Os_Hal_SetSPR(14, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area minimum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPLA12(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPLA12(x)  Os_Hal_SetSPR(16, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area maximum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPUA12(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPUA12(x)  Os_Hal_SetSPR(17, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area attributes to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPAT12(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPAT12(x)  Os_Hal_SetSPR(18, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area minimum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPLA13(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPLA13(x)  Os_Hal_SetSPR(20, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area maximum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPUA13(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPUA13(x)  Os_Hal_SetSPR(21, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area attributes to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPAT13(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPAT13(x)  Os_Hal_SetSPR(22, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area minimum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPLA14(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPLA14(x)  Os_Hal_SetSPR(24, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area maximum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPUA14(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPUA14(x)  Os_Hal_SetSPR(25, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area attributes to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPAT14(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPAT14(x)  Os_Hal_SetSPR(26, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area minimum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPLA15(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPLA15(x)  Os_Hal_SetSPR(28, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area maximum address to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPUA15(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPUA15(x)  Os_Hal_SetSPR(29, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the protection area attributes to the passed address
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPAT5(uint32 x)
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPAT15(x)  Os_Hal_SetSPR(30, 7, (x))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU Region with the passed index to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU(uint32 index, uint32* ptr)
 *  \param[in]     Index    Index of the MPU region
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU(Index, Config)  Os_Hal_SetMPLA##Index((Config)->MpuRegion##Index.RegionStart); \
                                       Os_Hal_SetMPUA##Index((Config)->MpuRegion##Index.RegionEnd);   \
                                       Os_Hal_SetMPAT##Index((Config)->MpuRegion##Index.RegionAttribute)                /* PRQA S 3453, 3412, 0342, 0881 */ /* MD_MSR_19.7, MD_Os_Hal_3412_NoLoop, MD_Os_Hal_0342, MD_Os_Hal_0881 */

/*! \brief         Sets the MPU Region to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU0(uint32* ptr)
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU0(Config)        Os_Hal_SetMPU(0, (Config))                                                       /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU Region to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU1(uint32* ptr)
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU1(Config)        Os_Hal_SetMPU(1, (Config))                                                       /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU Region to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU2(uint32* ptr)
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU2(Config)        Os_Hal_SetMPU(2, (Config))                                                       /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU Region to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU3(uint32* ptr)
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU3(Config)        Os_Hal_SetMPU(3, (Config))                                                       /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU Region to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU4(uint32* ptr)
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU4(Config)        Os_Hal_SetMPU(4, (Config))                                                       /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU Region to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU5(uint32* ptr)
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU5(Config)        Os_Hal_SetMPU(5, (Config))                                                       /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU Region to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU6(uint32* ptr)
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU6(Config)        Os_Hal_SetMPU(6, (Config))                                                       /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU Region to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU7(uint32* ptr)
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU7(Config)        Os_Hal_SetMPU(7, (Config))                                                       /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU Region to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU8(uint32* ptr)
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU8(Config)        Os_Hal_SetMPU(8, (Config))                                                       /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU Region to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU9(uint32* ptr)
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU9(Config)        Os_Hal_SetMPU(9, (Config))                                                       /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU Region to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU10(uint32* ptr)
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU10(Config)       Os_Hal_SetMPU(10, (Config))                                                      /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU Region to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU11(uint32* ptr)
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU11(Config)       Os_Hal_SetMPU(11, (Config))                                                      /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU Region to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU12(uint32* ptr)
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU12(Config)       Os_Hal_SetMPU(12, (Config))                                                      /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU Region to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU13(uint32* ptr)
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU13(Config)       Os_Hal_SetMPU(13, (Config))                                                      /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU Region to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU14(uint32* ptr)
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU14(Config)       Os_Hal_SetMPU(14, (Config))                                                      /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the MPU Region to the passed configuration value
 *  \details       --no details--
 *  \fn void Os_Hal_SetMPU15(uint32* ptr)
 *  \param[in]     Config   Pointer to the platform specific MPU region configuration.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           SUPERVISOR
 */
# define Os_Hal_SetMPU15(Config)       Os_Hal_SetMPU(15, (Config))                                                      /* PRQA S 3453 */ /* MD_MSR_19.7 */

/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/*! Platform specific configuration type of a single MPU region. */
typedef struct
{
  uint32 RegionStart;       /*!< Start address of the MPU region. */
  uint32 RegionEnd;         /*!< End address of the MPU region. */
  uint32 RegionAttribute;   /*!< Access rights of the MPU region. */
} Os_Hal_MpuRegionType;

/*! \brief    System wide memory protection configuration.
 *  \details
 *  The kernel uses this data type to initialize access rights for different bus masters (cores, DMAs, etc.).
 *  These are typically MPU, MMU or PPU settings such as region descriptors.
 */
struct Os_Hal_MpSystemConfigType_Tag
{
  uint32 MpuRegionCount; /*!< Number of system MPU regions */
};

/*! \brief    Memory protection configuration of a core.
 *  \details  The kernel uses this data type to initialize access rights of a core.
 *            These are typically MPU, MMU or PPU settings such as region descriptors.
 */
struct Os_Hal_MpCoreConfigType_Tag
{
  uint32 MpuRegionCount;              /*!< Number of core local MPU regions. */
  uint32 MpuASID;

  Os_Hal_MpuRegionType MpuRegion0;    /*!< Configuration information of MPU region 0. */
  Os_Hal_MpuRegionType MpuRegion1;    /*!< Configuration information of MPU region 1. */
  Os_Hal_MpuRegionType MpuRegion2;    /*!< Configuration information of MPU region 2. */
  Os_Hal_MpuRegionType MpuRegion3;    /*!< Configuration information of MPU region 3. */

  Os_Hal_MpuRegionType MpuRegion4;    /*!< Configuration information of MPU region 4. */
  Os_Hal_MpuRegionType MpuRegion5;    /*!< Configuration information of MPU region 5. */
  Os_Hal_MpuRegionType MpuRegion6;    /*!< Configuration information of MPU region 6. */
  Os_Hal_MpuRegionType MpuRegion7;    /*!< Configuration information of MPU region 7. */

  Os_Hal_MpuRegionType MpuRegion8;    /*!< Configuration information of MPU region 8. */
  Os_Hal_MpuRegionType MpuRegion9;    /*!< Configuration information of MPU region 9. */
  Os_Hal_MpuRegionType MpuRegion10;   /*!< Configuration information of MPU region 10. */
  Os_Hal_MpuRegionType MpuRegion11;   /*!< Configuration information of MPU region 11. */

  Os_Hal_MpuRegionType MpuRegion12;   /*!< Configuration information of MPU region 12. */
  Os_Hal_MpuRegionType MpuRegion13;   /*!< Configuration information of MPU region 13. */
  Os_Hal_MpuRegionType MpuRegion14;   /*!< Configuration information of MPU region 14. */
  Os_Hal_MpuRegionType MpuRegion15;   /*!< Configuration information of MPU region 15. */
};

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  Os_Hal_MpSystemInit()
 **********************************************************************************************************************/
/*! \brief          Initialize the system memory protection.
 *  \details        Initializes system's memory protection mechanism and set the passed memory protection settings for
 *                  the system. This function is called once on the master core during OS initialization.
 *                  It typically initializes and enables any system related protection mechanism (system MPU/MMU/PPU).
 *
 *  \param[in]      SystemConfig  Configuration for system's memory protection mechanism.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Interrupts disabled.
 *  \pre            Supervisor mode.
 *  \pre            Executed on master core.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Hal_MpSystemInit(P2CONST(Os_Hal_MpSystemConfigType, TYPEDEF, OS_CONST) SystemConfig);

/***********************************************************************************************************************
 *  Os_Hal_MpCoreInit()
 **********************************************************************************************************************/
/*! \brief          Initialize the core memory protection.
 *  \details        Initializes the core's memory protection mechanism and set the passed memory protection settings
 *                  for the core. This function is called once on each core during OS initialization.
 *                  It typically initializes and enables any core related protection mechanism (system MPU/MMU/PPU).
 *
 *  \param[in]      CoreConfig  Configuration for core's memory protection mechanism.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Interrupts disabled.
 *  \pre            Supervisor mode.
 *  \pre            Executed on master core.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Hal_MpCoreInit(P2CONST(Os_Hal_MpCoreConfigType, TYPEDEF, OS_CONST) CoreConfig);

/***********************************************************************************************************************
 *  Os_Hal_MpAppSwitch()
 **********************************************************************************************************************/
/*! \brief          Switches application related access rights.
 *  \details        Switches the current memory protection settings to the passed ones.
 *
 *  \param[in]      AppConfig   Configuration for application's memory protection mechanism.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Interrupts disabled.
 *  \pre            Supervisor mode.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_MpAppSwitch,
(
  P2CONST(Os_Hal_MpAppConfigType, TYPEDEF, OS_CONST) AppConfig
));

/***********************************************************************************************************************
 *  Os_Hal_MpThreadSwitch()
 **********************************************************************************************************************/
/*! \brief          Switches thread related access rights.
 *  \details        Switches the current memory protection settings to the passed ones.
 *
 *  \param[in]      ThreadConfig   Configuration for thread's memory protection mechanism.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Interrupts disabled.
 *  \pre            Supervisor mode.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_MpThreadSwitch,
(
  P2CONST(Os_Hal_MpThreadConfigType, TYPEDEF, OS_CONST) ThreadConfig
));

/***********************************************************************************************************************
 *  Os_Hal_MpuConfigSwitch()
 **********************************************************************************************************************/
/*! \brief          OneSentence.
 *  \details        --no details--
 *
 *  \param[in]      MpuConfig     ParamDescription.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *
 *  \pre            Interrupts disabled.
 *  \pre            Supervisor mode.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_MpuConfigSwitch,
(
  P2CONST(Os_Hal_MpCoreConfigType, TYPEDEF, OS_CONST) MpuConfig
));

/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* OS_HAL_MEMORYPROTECTIONINT_H */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_MemoryProtectionInt.h
 **********************************************************************************************************************/

