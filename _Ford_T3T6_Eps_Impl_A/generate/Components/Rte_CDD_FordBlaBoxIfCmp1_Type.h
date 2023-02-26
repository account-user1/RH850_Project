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
 *          File:  Rte_CDD_FordBlaBoxIfCmp1_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <CDD_FordBlaBoxIfCmp1>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_FORDBLABOXIFCMP1_TYPE_H
# define _RTE_CDD_FORDBLABOXIFCMP1_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef Cx0_PASSIVE
#   define Cx0_PASSIVE (0U)
#  endif

#  ifndef Cx3_ACTIVE
#   define Cx3_ACTIVE (3U)
#  endif

#  ifndef Cx5_LOCKED
#   define Cx5_LOCKED (5U)
#  endif

#  ifndef Cx99_DONT_CARE
#   define Cx99_DONT_CARE (99U)
#  endif

#  ifndef Cx0_PASSIVE
#   define Cx0_PASSIVE (0U)
#  endif

#  ifndef Cx1_ACTIVATION_REQUEST
#   define Cx1_ACTIVATION_REQUEST (1U)
#  endif

#  ifndef Cx2_RAMP_IN_REQUEST
#   define Cx2_RAMP_IN_REQUEST (2U)
#  endif

#  ifndef Cx3_ACTIVE
#   define Cx3_ACTIVE (3U)
#  endif

#  ifndef Cx4_RAMP_OUT_REQUEST
#   define Cx4_RAMP_OUT_REQUEST (4U)
#  endif

#  ifndef Cx5_LOCKED
#   define Cx5_LOCKED (5U)
#  endif

#  ifndef Cx0_LimitNotReached
#   define Cx0_LimitNotReached (0U)
#  endif

#  ifndef Cx1_LimitClose
#   define Cx1_LimitClose (1U)
#  endif

#  ifndef Cx2_LimitReached
#   define Cx2_LimitReached (2U)
#  endif

#  ifndef Cx3_LimitWithDriverActive
#   define Cx3_LimitWithDriverActive (3U)
#  endif

#  ifndef Cx0_Unavailable
#   define Cx0_Unavailable (0U)
#  endif

#  ifndef Cx1_Available
#   define Cx1_Available (1U)
#  endif

#  ifndef Cx2_ContLatControlInProgress
#   define Cx2_ContLatControlInProgress (2U)
#  endif

#  ifndef Cx3_RampOut
#   define Cx3_RampOut (3U)
#  endif

#  ifndef Cx4_Denied
#   define Cx4_Denied (4U)
#  endif

#  ifndef Cx5_NotUsed1
#   define Cx5_NotUsed1 (5U)
#  endif

#  ifndef Cx6_NotUsed2
#   define Cx6_NotUsed2 (6U)
#  endif

#  ifndef Cx7_NotUsed3
#   define Cx7_NotUsed3 (7U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_FORDBLABOXIFCMP1_TYPE_H */
