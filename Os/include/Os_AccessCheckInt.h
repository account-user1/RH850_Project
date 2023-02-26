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
 * \ingroup     Os_Kernel
 * \defgroup    Os_AccessCheck Access Check
 * \brief       Memory Access Check Functionality
 * \details
 * This module contains functions to handle memory access rights in the application. It also contains declarations
 * of the necessary data structures. The functions provide:
 *   - The check of memory protection rights for a specific task/ISR on a specific memory region
 *   - The check whether memory access to a specific address is prevented by the MPU
 *
 *
 * Os_Api_SafeMemCpy:
 *
 * This function is currently not supported by the OS. The design of this function is available in SVN revision 20259.
 * The review findings have to be considered (same version).
 * Alternative solutions are:
 *  - The IOC may be used for transferring data from a trusted function to its caller.
 *  - Modify the non-trusted function call:
 *    - CallNontrusteFunction() creates a copy of each parameter in the OS code, but with callers rights.
 *    - The OS calls the non-trusted function.
 *    - When returned from the NTF to the caller's level (still in the OS), the OS copies the output data of the NTF
 *      into the original call parameters.
 *
 *
 * \{
 *
 * \file
 * \brief       OS internal functions and data types to handle memory access rights in the application
 * \details     -
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_ACCESSCHECKINT_H)                                                                                       /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_ACCESSCHECKINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_AccessCheck_Types.h"

/* Os kernel module dependencies */
# include "Os_Common_Types.h"
# include "OsInt.h"

/* Os hal dependencies */
# include "Os_Hal_CompilerInt.h"


#if !defined(OS_VCAST_INSTRUMENTATION_OS_ACCESSCHECK)
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
/*! A memory region and the access rights on it (for a specific thread). */
typedef struct
{
  Os_AccessCheckAddress AddressStart;     /*!< The start address of the memory region. */
  Os_AccessCheckAddress AddressEnd;       /*!< The last address of a memory region (access granted). */
  AccessType AccessRights;                /*!< The access rights for this memory region. */
} Os_AccessCheckRegionConfigType;


/*! All memory regions (for a specific thread) and the access rights on them. */
struct Os_AccessCheckConfigType_Tag
{
  /*! Array of memory regions, last array element is a struct with all elements set to zero or NULL. */
  P2CONST(Os_AccessCheckRegionConfigType, AUTOMATIC, OS_CONST) Regions;

  /*! The number of configured regions */
  Os_AccessCheckIdx RegionCount;
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
 *  Os_Api_CheckTaskMemoryAccess()
 **********************************************************************************************************************/
/*! \brief        OS service CheckTaskMemoryAccess().
 *  \details      The system service returns the access rights of the given task to the given address range. The return
 *                value contains the information whether or not the task is allowed to read or write data from/to the
 *                memory region, whether the task is allowed to execute code in the memory region and whether the memory
 *                region is stack space.
 *
 *  \param[in]    TaskID              Reference to the task, the access right shall be checked for.
 *  \param[in]    Address             Start address of the memory region, the access rights shall be checked for.
 *  \param[in]    Size                The size of the the memory region, the access rights shall be checked for.
 *
 *  \return       Value which contains the access rights of the given task to the given memory region.
 *  \retval       OS_MEM_ACCESS_TYPE_NON      No access or Ivalid TaskID or address range overflow.
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-73
 *  \trace        SPEC-63949, SPEC-63842, SPEC-63907, SPEC-63888, SPEC-63798, SPEC-63869
 *
 *  \note         SPEC-63980  E_OS_CALLEVEL check is not performed because there is no status type returned and this
 *                            API evaluates only constant configuration values.
 *  \note         SPEC-64017  E_OS_DISABLEDINT check is not performed because there is no status type returned and this
 *                            API evaluates only constant configuration values.
 **********************************************************************************************************************/
FUNC(AccessType, OS_CODE) Os_Api_CheckTaskMemoryAccess
(
  TaskType TaskID,
  MemoryStartAddressType Address,
  MemorySizeType Size
);


/***********************************************************************************************************************
 *  Os_Api_CheckISRMemoryAccess()
 **********************************************************************************************************************/
/*! \brief        OS service CheckISRMemoryAccess().
 *  \details      The system service returns the access rights of the given ISR to the given address range. The return
 *                value contains the information whether or not the ISR is allowed to read or write data from/to the
 *                memory region, whether the ISR is allowed to execute code in the memory region and whether the memory
 *                region is stack space.
 *
 *  \param[in]    ISRID               Reference to the ISR, the access right shall be checked for.
 *  \param[in]    Address             Start address of the memory region, the access rights shall be checked for.
 *  \param[in]    Size                The size of the the memory region, the access rights shall be checked for.
 *
 *  \return       Value which contains the access rights of the given ISR to the given memory region.
 *  \retval       OS_MEM_ACCESS_TYPE_NON      No access or Ivalid ISRID or address range overflow.
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-13
 *  \trace        SPEC-63949, SPEC-63728, SPEC-64063, SPEC-63981, SPEC-63754, SPEC-63924,
 *
 *  \note         SPEC-63980  E_OS_CALLEVEL check is not performed because there is no status type returned and this
 *                            API evaluates only constant configuration values.
 *  \note         SPEC-64017  E_OS_DISABLEDINT check is not performed because there is no status type returned and this
 *                            API evaluates only constant configuration values.
 **********************************************************************************************************************/
FUNC(AccessType, OS_CODE) Os_Api_CheckISRMemoryAccess
(
  ISRType ISRID,
  MemoryStartAddressType Address,
  MemorySizeType Size
);


# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */


#if !defined(OS_VCAST_INSTRUMENTATION_OS_ACCESSCHECK)
/*VCAST_DONT_INSTRUMENT_END*/
#endif


#endif /* OS_ACCESSCHECKINT_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_AccessCheckInt.h
 **********************************************************************************************************************/
