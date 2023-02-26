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
 *          File:  Rte_FordCanDtcInhb_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <FordCanDtcInhb>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDCANDTCINHB_TYPE_H
# define _RTE_FORDCANDTCINHB_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef Norm
#   define Norm (0U)
#  endif

#  ifndef Factry
#   define Factry (1U)
#  endif

#  ifndef Transpt
#   define Transpt (2U)
#  endif

#  ifndef FORDEPSSYSST_EPS_ININ
#   define FORDEPSSYSST_EPS_ININ (0U)
#  endif

#  ifndef FORDEPSSYSST_EPS_NORM_OP_LIMD_ASSI
#   define FORDEPSSYSST_EPS_NORM_OP_LIMD_ASSI (1U)
#  endif

#  ifndef FORDEPSSYSST_EPS_NORM_OP_FULL_ASSI
#   define FORDEPSSYSST_EPS_NORM_OP_FULL_ASSI (2U)
#  endif

#  ifndef FORDEPSSYSST_EPS_SYST_FAILR_LIMPHOME
#   define FORDEPSSYSST_EPS_SYST_FAILR_LIMPHOME (3U)
#  endif

#  ifndef FORDEPSSYSST_EPS_SYST_FAILR_LIMPASIDE
#   define FORDEPSSYSST_EPS_SYST_FAILR_LIMPASIDE (4U)
#  endif

#  ifndef FORDEPSSYSST_EPS_SYST_FAILR_RAMPOUT
#   define FORDEPSSYSST_EPS_SYST_FAILR_RAMPOUT (5U)
#  endif

#  ifndef FORDEPSSYSST_EPS_SYST_FAILR_ASSISTOFF
#   define FORDEPSSYSST_EPS_SYST_FAILR_ASSISTOFF (6U)
#  endif

#  ifndef FORDEPSSYSST_EPS_SHTDWN
#   define FORDEPSSYSST_EPS_SHTDWN (7U)
#  endif

#  ifndef FORDEPSSYSST_EPS_PWRDWN
#   define FORDEPSSYSST_EPS_PWRDWN (8U)
#  endif

#  ifndef Cx0_Not_Supported
#   define Cx0_Not_Supported (0U)
#  endif

#  ifndef Cx1_Supported
#   define Cx1_Supported (1U)
#  endif

#  ifndef Cx2_Not_Supported_Imminent
#   define Cx2_Not_Supported_Imminent (2U)
#  endif

#  ifndef Cx3_LV_Event_In_Progress
#   define Cx3_LV_Event_In_Progress (3U)
#  endif

#  ifndef Cx4_Fault_Limited
#   define Cx4_Fault_Limited (4U)
#  endif

#  ifndef Cx5_NotUsed_1
#   define Cx5_NotUsed_1 (5U)
#  endif

#  ifndef Cx6_NotUsed_2
#   define Cx6_NotUsed_2 (6U)
#  endif

#  ifndef Cx7_NotUsed_3
#   define Cx7_NotUsed_3 (7U)
#  endif

#  ifndef Cx0_Unknown
#   define Cx0_Unknown (0U)
#  endif

#  ifndef Cx1_Off
#   define Cx1_Off (1U)
#  endif

#  ifndef Cx2_Accessory
#   define Cx2_Accessory (2U)
#  endif

#  ifndef Cx4_Run
#   define Cx4_Run (4U)
#  endif

#  ifndef Cx8_Start
#   define Cx8_Start (8U)
#  endif

#  ifndef CxF_Invalid
#   define CxF_Invalid (15U)
#  endif

#  ifndef Cx0_Normal
#   define Cx0_Normal (0U)
#  endif

#  ifndef Cx1_Factory
#   define Cx1_Factory (1U)
#  endif

#  ifndef Cx2_NotUsed
#   define Cx2_NotUsed (2U)
#  endif

#  ifndef Cx3_Transport
#   define Cx3_Transport (3U)
#  endif

#  ifndef Cx0_PwPckOff_TqNotAvailable
#   define Cx0_PwPckOff_TqNotAvailable (0U)
#  endif

#  ifndef Cx1_PwPckOn_TqNotAvailable
#   define Cx1_PwPckOn_TqNotAvailable (1U)
#  endif

#  ifndef Cx2_StartInPrgrss_TqNotAvail
#   define Cx2_StartInPrgrss_TqNotAvail (2U)
#  endif

#  ifndef Cx3_PwPckOn_TqAvailable
#   define Cx3_PwPckOn_TqAvailable (3U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDCANDTCINHB_TYPE_H */
