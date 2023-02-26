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
 * \addtogroup Os_ScheduleTable
 * \{
 *
 * \file
 * \brief       Type definitions for schedule table management.
 * \details     --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/


#if !defined(OS_SCHEDULETABLE_TYPES_H)                                                                                  /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_SCHEDULETABLE_TYPES_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"


#if !defined(OS_VCAST_INSTRUMENTATION_OS_SCHEDULETABLES)
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
struct         Os_SchTConfigType_Tag;
typedef struct Os_SchTConfigType_Tag Os_SchTConfigType;

struct         Os_SchTSyncConfigType_Tag;
typedef struct Os_SchTSyncConfigType_Tag Os_SchTSyncConfigType;

struct         Os_SchTExPoConfigType_Tag;
typedef struct Os_SchTExPoConfigType_Tag Os_SchTExPoConfigType;

struct         Os_SchTExPoSyncConfigType_Tag;
typedef struct Os_SchTExPoSyncConfigType_Tag Os_SchTExPoSyncConfigType;

struct         Os_SchTAutostartConfigType_Tag;
typedef struct Os_SchTAutostartConfigType_Tag Os_SchTAutostartConfigType;

struct         Os_SchTType_Tag;
typedef struct Os_SchTType_Tag Os_SchTType;

struct         Os_SchTSyncType_Tag;
typedef struct Os_SchTSyncType_Tag Os_SchTSyncType;

struct         Os_SchTExPoActionEventConfigType_Tag;
typedef struct Os_SchTExPoActionEventConfigType_Tag Os_SchTExPoActionEventConfigType;

struct         Os_SchTExPoActionTaskConfigType_Tag;
typedef struct Os_SchTExPoActionTaskConfigType_Tag Os_SchTExPoActionTaskConfigType;

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/


#if !defined(OS_VCAST_INSTRUMENTATION_OS_SCHEDULETABLES)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_SCHEDULETABLE_TYPES_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_ScheduleTable_Types.h
 **********************************************************************************************************************/
