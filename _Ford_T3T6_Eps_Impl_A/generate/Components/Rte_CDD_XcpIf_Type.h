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
 *          File:  Rte_CDD_XcpIf_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <CDD_XcpIf>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_XCPIF_TYPE_H
# define _RTE_CDD_XCPIF_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef ADRMPGREQTYP_READ
#   define ADRMPGREQTYP_READ (0U)
#  endif

#  ifndef ADRMPGREQTYP_WR
#   define ADRMPGREQTYP_WR (1U)
#  endif

#  ifndef CALCOPYSTS_NOTRDY
#   define CALCOPYSTS_NOTRDY (0U)
#  endif

#  ifndef CALCOPYSTS_COPYPNDING
#   define CALCOPYSTS_COPYPNDING (1U)
#  endif

#  ifndef CALCOPYSTS_COPYCMPL
#   define CALCOPYSTS_COPYCMPL (2U)
#  endif

#  ifndef CALCOPYSTS_PROCERR
#   define CALCOPYSTS_PROCERR (3U)
#  endif

#  ifndef GETSEGMOD_ADRINFO
#   define GETSEGMOD_ADRINFO (0U)
#  endif

#  ifndef GETSEGMOD_STDINFO
#   define GETSEGMOD_STDINFO (1U)
#  endif

#  ifndef GETSEGMOD_ADRMPG
#   define GETSEGMOD_ADRMPG (2U)
#  endif

#  ifndef MFGENAST_PRDNMOD
#   define MFGENAST_PRDNMOD (0U)
#  endif

#  ifndef MFGENAST_MFGMOD
#   define MFGENAST_MFGMOD (1U)
#  endif

#  ifndef MFGENAST_TESTMOD
#   define MFGENAST_TESTMOD (2U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_XCPIF_TYPE_H */
