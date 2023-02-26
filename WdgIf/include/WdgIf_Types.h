/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/*!        \file  WdgIf_Types.h
 *        \brief  Include file WdgIf_Types
 *
 *      \details  This include file provides defines and declarations for the WdgIf types
 *
 *********************************************************************************************************************/

#ifndef WDGIF_TYPES_H
# define WDGIF_TYPES_H


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

# include "Std_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS (Version Info)
 *********************************************************************************************************************/

/* ----- Component version information (decimal version of ALM implementation package) ----- */
# define WDGIF_TYPES_SW_MAJOR_VERSION       (5u)
# define WDGIF_TYPES_SW_MINOR_VERSION       (1u)
# define WDGIF_TYPES_SW_PATCH_VERSION       (1u)


/**********************************************************************************************************************
 *  MACRO VALIDATION
 *********************************************************************************************************************/

/* The macros STD_ON, STD_OFF, E_OK, E_NOT_OK must be defined in Std_Types.h and are implicitly included here.
 * Their existence and values are, however, checked according to the Watchdog Stack requirements.
 */
# if (! defined STD_ON)
#  error "Safe Watchdog Stack requires the macro 'STD_ON' to be defined as 1."
# endif

# if (! defined STD_OFF)
#  error "Safe Watchdog Stack requires the macro 'STD_OFF' to be defined as 0."
# endif

# if (! defined E_OK)
#  error "Safe Watchdog Stack requires the macro 'E_OK' to be defined as 0."
# endif

# if (! defined E_NOT_OK)
#  error "Safe Watchdog Stack requires the macro 'E_NOT_OK' to be defined as 1."
# endif


/**********************************************************************************************************************
 *  TYPE DEFINITIONS AND FURTHER INCLUDES
 *********************************************************************************************************************/

/*! Type for the Watchdog Interface mode */
typedef enum {
  WDGIF_OFF_MODE  = 0u, /*!< Watchdog disabled                      */
  WDGIF_SLOW_MODE = 1u, /*!< Long timeout period (slow triggering)  */
  WDGIF_FAST_MODE = 2u  /*!< Short timeout period (fast triggering) */
} WdgIf_ModeType;

#endif /* WDGIF_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: WdgIf_Types.h
 *********************************************************************************************************************/
