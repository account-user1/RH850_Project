/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2015 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  SwcSecAccessFord_Cfg.h
 *        \brief  Security Access SWC
 *
 *      \details  Configuration of the Ford Security Access
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#if !defined (SWCSECACCESSFORD_CFG_H)
# define SWCSECACCESSFORD_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Csm_Cfg.h"
#include "Rte_SwcSecAccessFord.h"

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

#define SWCSECACCESSFORD_SECURITY_KEY_LENGTH (16u)
#define SWCSECACCESSFORD_SECRET_KEY_LENGTH   (12u)
#define SWCSECACCESSFORD_CONST_BYTE_LENGTH   (4u)
#define SWCSECACCESSFORD_SEED_LENGTH         (16u)

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Check operation mode of CSM */
#if ( CSM_USE_SYNC_JOB_PROCESSING == STD_OFF )
/** CSM operates in asynchronous mode */
# define SWCSECACCESSFORD_CSM_ASYNC_JOB_PROCESSING
#else
/** CSM operates in synchronous mode */
# define SWCSECACCESSFORD_CSM_SYNC_JOB_PROCESSING
#endif

#endif  /* SWCSECACCESSFORD_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: SwcSecAccessFord_Cfg.h
 *********************************************************************************************************************/
