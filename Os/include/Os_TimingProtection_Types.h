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
 * \addtogroup Os_TimingProtection
 *
 * \{
 *
 * \file
 * \brief         Contains the type definition of the timing protection module.
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_TIMINGPROTECTION_TYPES_H)                                                                               /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_TIMINGPROTECTION_TYPES_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Cfg.h"
# include "Os_TimingProtection_Cfg.h"

/* Os module dependencies */

/* Os Hal dependencies */


#if !defined(OS_VCAST_INSTRUMENTATION_OS_TIMINGPROTECTION)
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

struct Os_TpType_Tag;
typedef struct Os_TpType_Tag Os_TpType;

struct Os_TpConfigType_Tag;
typedef struct Os_TpConfigType_Tag Os_TpConfigType;

struct Os_TpThreadConfigType_Tag;
typedef struct Os_TpThreadConfigType_Tag Os_TpThreadConfigType;

struct Os_TpBudgetType_Tag;
typedef struct Os_TpBudgetType_Tag Os_TpBudgetType;

struct Os_TpBudgetConfigType_Tag;
typedef struct Os_TpBudgetConfigType_Tag Os_TpBudgetConfigType;
typedef P2CONST(Os_TpBudgetConfigType, TYPEDEF, OS_CONST) Os_TpBudgetConfigRefType;

struct Os_TpOwnerThreadConfigType_Tag;
typedef struct Os_TpOwnerThreadConfigType_Tag Os_TpOwnerThreadConfigType;

struct Os_TpOwnerThreadType_Tag;
typedef struct Os_TpOwnerThreadType_Tag Os_TpOwnerThreadType;

/*! Data type for inter-arrival time calculations. */
typedef uint64 Os_InterArrivalTimeType;

/*! Type of budget expiration. */
typedef enum
{
  OS_TPMONITORINGTYPE_NONE,       /*!< No budget expiration. */
  OS_TPMONITORINGTYPE_LOCK,       /*!< Locking budget expiration. */
  OS_TPMONITORINGTYPE_EXECUTION,  /*!< Execution budget expiration. */
  OS_TPMONITORINGTYPE_ARRIVAL,    /*!< Inter-Arrival violation. */
  OS_TPMONITORINGTYPE_COUNT       /*!< Number of violation types. */
} Os_TpMonitoringType;



/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/



/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/



#if !defined(OS_VCAST_INSTRUMENTATION_OS_TIMINGPROTECTION)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_TIMINGPROTECTION_TYPES_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/**********************************************************************************************************************
 *  END OF FILE: Os_TimingProtection_Types.h
 *********************************************************************************************************************/
