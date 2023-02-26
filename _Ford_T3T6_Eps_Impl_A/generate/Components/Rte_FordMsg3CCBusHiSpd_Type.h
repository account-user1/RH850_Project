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
 *          File:  Rte_FordMsg3CCBusHiSpd_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <FordMsg3CCBusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG3CCBUSHISPD_TYPE_H
# define _RTE_FORDMSG3CCBUSHISPD_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef Cx0_LCA_LKA_LDW_Suppress
#   define Cx0_LCA_LKA_LDW_Suppress (0U)
#  endif

#  ifndef Cx1_LCA_LKA_Suppress_LDW_Avail
#   define Cx1_LCA_LKA_Suppress_LDW_Avail (1U)
#  endif

#  ifndef Cx2_LCA_LKA_Avail_LDW_Suppress
#   define Cx2_LCA_LKA_Avail_LDW_Suppress (2U)
#  endif

#  ifndef Cx3_LKA_LCA_LDW_Avail
#   define Cx3_LKA_LCA_LDW_Avail (3U)
#  endif

#  ifndef Cx0_Off
#   define Cx0_Off (0U)
#  endif

#  ifndef Cx1_On
#   define Cx1_On (1U)
#  endif

#  ifndef Cx2_NotUsed1
#   define Cx2_NotUsed1 (2U)
#  endif

#  ifndef Cx3_NotUsed2
#   define Cx3_NotUsed2 (3U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG3CCBUSHISPD_TYPE_H */
