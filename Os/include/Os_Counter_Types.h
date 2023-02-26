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
 * \addtogroup Os_Counter
 * \{
 *
 * \file
 * \brief       Counter type forward declarations.
 * \details     --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_COUNTER_TYPES_H)                                                                                        /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_COUNTER_TYPES_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */


/* Os kernel module dependencies */


#if !defined(OS_VCAST_INSTRUMENTATION_OS_COUNTER)
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
/*! \brief    Counter's driver type.
 *  \details  Counter ISR objects are converted from threads to a specific counter ISR. In order to be able to detect
 *            whether such a cast is valid, wide spread and great values are used as enum values.  */
typedef enum {
  /*! Software counter. */
  OS_TIMERTYPE_SOFTWARE = 0x70E1D2C3u,
  /*! Periodic tick timer. */
  OS_TIMERTYPE_PERIODIC_TICK = 0x64A59687u,
  /*! High resolution timer (including software range extension to 32 bit if necessary). */
  OS_TIMERTYPE_HIGH_RESOLUTION = 0x78695A4Bu
} Os_TimerTypeType;

struct Os_CounterCharacteristicsConfigType_Tag;
typedef struct Os_CounterCharacteristicsConfigType_Tag Os_CounterCharacteristicsConfigType;

struct Os_CounterConfigType_Tag;
typedef struct Os_CounterConfigType_Tag Os_CounterConfigType;


/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/



#if !defined(OS_VCAST_INSTRUMENTATION_OS_COUNTER)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_COUNTER_TYPES_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_Counter_Types.h
 **********************************************************************************************************************/
