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
 *          File:  Rte_MotCtrlPrmEstimn_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <MotCtrlPrmEstimn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTCTRLPRMESTIMN_TYPE_H
# define _RTE_MOTCTRLPRMESTIMN_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define MotCon1_LowerLimit (0.025F)
#  define MotCon1_UpperLimit (0.075F)

#  define R6_LowerLimit (0.005F)
#  define R6_UpperLimit (0.12565F)

#  define Curr6_LowerLimit (0.0F)
#  define Curr6_UpperLimit (200.0F)

#  define Curr7_LowerLimit (-200.0F)
#  define Curr7_UpperLimit (200.0F)

#  define Gain5_LowerLimit (0.0F)
#  define Gain5_UpperLimit (0.006F)

#  define Gain6_LowerLimit (-0.0015F)
#  define Gain6_UpperLimit (0.0F)

#  define Gain7_LowerLimit (0.0F)
#  define Gain7_UpperLimit (0.0045F)

#  define Indu1_LowerLimit (0.00003F)
#  define Indu1_UpperLimit (0.00041F)

#  define MotCon1_LowerLimit (0.025F)
#  define MotCon1_UpperLimit (0.075F)

#  define R6_LowerLimit (0.005F)
#  define R6_UpperLimit (0.12565F)

#  define R8_LowerLimit (0.0F)
#  define R8_UpperLimit (0.1F)

#  define T1_LowerLimit (-50.0F)
#  define T1_UpperLimit (150.0F)

#  define T2_LowerLimit (-50.0F)
#  define T2_UpperLimit (200.0F)

#  define T3_LowerLimit (-50.0F)
#  define T3_UpperLimit (300.0F)

#  define T5_LowerLimit (-40.0F)
#  define T5_UpperLimit (150.0F)

#  define Uls2_LowerLimit (0.0F)
#  define Uls2_UpperLimit (1.0F)

#  define Uls11_LowerLimit (0U)
#  define Uls11_UpperLimit (32768U)

#  define Curr8_LowerLimit (0U)
#  define Curr8_UpperLimit (25600U)

#  ifndef NVM_REQ_OK
#   define NVM_REQ_OK (0U)
#  endif

#  ifndef NVM_REQ_NOT_OK
#   define NVM_REQ_NOT_OK (1U)
#  endif

#  ifndef NVM_REQ_PENDING
#   define NVM_REQ_PENDING (2U)
#  endif

#  ifndef NVM_REQ_INTEGRITY_FAILED
#   define NVM_REQ_INTEGRITY_FAILED (3U)
#  endif

#  ifndef NVM_REQ_BLOCK_SKIPPED
#   define NVM_REQ_BLOCK_SKIPPED (4U)
#  endif

#  ifndef NVM_REQ_NV_INVALIDATED
#   define NVM_REQ_NV_INVALIDATED (5U)
#  endif

#  ifndef NVM_REQ_CANCELED
#   define NVM_REQ_CANCELED (6U)
#  endif

#  ifndef NVM_REQ_REDUNDANCY_FAILED
#   define NVM_REQ_REDUNDANCY_FAILED (7U)
#  endif

#  ifndef NVM_REQ_RESTORED_FROM_ROM
#   define NVM_REQ_RESTORED_FROM_ROM (8U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_MOTCTRLPRMESTIMN_TYPE_H */
