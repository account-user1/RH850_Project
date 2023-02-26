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
 *          File:  Rte_FordMsg07EBusHiSpd_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <FordMsg07EBusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG07EBUSHISPD_TYPE_H
# define _RTE_FORDMSG07EBUSHISPD_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef Cx0_Faulty
#   define Cx0_Faulty (0U)
#  endif

#  ifndef Cx1_No_Data_Exists
#   define Cx1_No_Data_Exists (1U)
#  endif

#  ifndef Cx2_Degraded
#   define Cx2_Degraded (2U)
#  endif

#  ifndef Cx3_OK
#   define Cx3_OK (3U)
#  endif

#  ifndef CxFFFE_NoDataExists
#   define CxFFFE_NoDataExists (65534U)
#  endif

#  ifndef CxFFFF_Faulty
#   define CxFFFF_Faulty (65535U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG07EBUSHISPD_TYPE_H */
