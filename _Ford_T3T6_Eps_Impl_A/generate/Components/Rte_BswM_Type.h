/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_BswM_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <BswM>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BSWM_TYPE_H
# define _RTE_BSWM_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef EcuResetDisabled
#   define EcuResetDisabled (0U)
#  endif

#  ifndef EcuResetEnabled
#   define EcuResetEnabled (1U)
#  endif

#  ifndef EcuResetStarted
#   define EcuResetStarted (2U)
#  endif

#  ifndef RELEASED
#   define RELEASED (0U)
#  endif

#  ifndef REQUESTED
#   define REQUESTED (1U)
#  endif

# endif /* RTE_CORE */


/**********************************************************************************************************************
 * Definitions for Mode Management
 *********************************************************************************************************************/
# ifndef RTE_MODETYPE_BswMEcuResetMod
#  define RTE_MODETYPE_BswMEcuResetMod
typedef BswM_BswMEcuResetMod Rte_ModeType_BswMEcuResetMod;
# endif
# ifndef RTE_MODETYPE_ESH_RunRequest
#  define RTE_MODETYPE_ESH_RunRequest
typedef BswM_ESH_RunRequest Rte_ModeType_ESH_RunRequest;
# endif

# ifndef RTE_MODE_BswMEcuResetMod_EcuResetDisabled
#  define RTE_MODE_BswMEcuResetMod_EcuResetDisabled (0U)
# endif
# ifndef RTE_MODE_BswMEcuResetMod_EcuResetEnabled
#  define RTE_MODE_BswMEcuResetMod_EcuResetEnabled (1U)
# endif
# ifndef RTE_MODE_BswMEcuResetMod_EcuResetStarted
#  define RTE_MODE_BswMEcuResetMod_EcuResetStarted (2U)
# endif
# ifndef RTE_TRANSITION_BswMEcuResetMod
#  define RTE_TRANSITION_BswMEcuResetMod (3U)
# endif

# ifndef RTE_MODE_ESH_RunRequest_RELEASED
#  define RTE_MODE_ESH_RunRequest_RELEASED (0U)
# endif
# ifndef RTE_MODE_ESH_RunRequest_REQUESTED
#  define RTE_MODE_ESH_RunRequest_REQUESTED (1U)
# endif
# ifndef RTE_TRANSITION_ESH_RunRequest
#  define RTE_TRANSITION_ESH_RunRequest (2U)
# endif

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_BSWM_TYPE_H */
