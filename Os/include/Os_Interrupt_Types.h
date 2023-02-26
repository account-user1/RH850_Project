/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**
 * \addtogroup Os_Interrupt
 * \{
 *
 * \file
 * \brief       Internal data types of the interrupt module.
 * \details     --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_INTERRUPT_TYPES_H)                                                                                      /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_INTERRUPT_TYPES_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module dependencies */

/* Os kernel module dependencies */

/* Os Hal dependencies */
# include "Os_Hal_Interrupt_Types.h"


#if !defined(OS_VCAST_INSTRUMENTATION_OS_INTERRUPT)
/*VCAST_DONT_INSTRUMENT_START*/
#endif

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/
struct Os_IntApiStateType_Tag;

/*! Management information for the interrupt API */
typedef struct Os_IntApiStateType_Tag Os_IntApiStateType;

/*! Type to abstract from the HAL interrupt state type */
typedef struct
{
  /*! Interrupt state to be used, if timing protection is not configured. */
  Os_Hal_IntStateType State;

  /*! Interrupt state to be used, if timing protection is configured. */
  Os_Hal_IntTpStateType TpState;
} Os_IntStateType;

/*! Type to abstract from the HAL interrupt Cat2 state type */
typedef struct
{
  /*! Hardware encoded state. */
  Os_Hal_IntCat2StateType State;
} Os_IntCat2StateType;

/*! Type to abstract from the HAL interrupt level type */
typedef struct
{
  /*! Hardware encoded level state. */
  Os_Hal_IntLevelType State;
} Os_IntLevelType;


/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/



#if !defined(OS_VCAST_INSTRUMENTATION_OS_INTERRUPT)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_INTERRUPT_TYPES_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Interrupt_Types.h
 **********************************************************************************************************************/
