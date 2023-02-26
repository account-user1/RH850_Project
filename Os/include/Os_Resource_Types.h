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
 * \addtogroup Os_Resource
 * \{
 *
 * \file
 * \brief       Data types provided by \ref Os_Resource.
 * \details     --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_RESOURCE_TYPES_H)                                                                                       /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_RESOURCE_TYPES_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
# include "Std_Types.h"
# include "Os_Lock_Types.h"

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/
/*! Dynamic information of a resource.
 * \extends Os_LockType */
struct Os_ResourceType_Tag;
typedef struct Os_ResourceType_Tag Os_ResourceType;


struct Os_ResourceConfigType_Tag;
typedef struct Os_ResourceConfigType_Tag Os_ResourceConfigType;


struct Os_ResourceInterruptConfigType_Tag;
typedef struct Os_ResourceInterruptConfigType_Tag Os_ResourceInterruptConfigType;


/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/


#endif /* OS_RESOURCE_TYPES_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_Resource_Types.h
 **********************************************************************************************************************/
