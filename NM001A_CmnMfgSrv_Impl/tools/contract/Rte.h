/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte.h
 *     SW-C Type:  CmnMfgSrv
 *  Generated at:  Mon Nov 20 10:27:33 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Header file containing RTE types (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */

#ifndef _RTE_H
# define _RTE_H

# define RTE_SW_MAJOR_VERSION (0x04U)
# define RTE_SW_MINOR_VERSION (0x03U)
# define RTE_SW_PATCH_VERSION (0x00U)

# define RTE_VENDOR_ID (0x001EU)
# define RTE_MODULE_ID (0x0002U)

# define RTE_AR_RELEASE_MAJOR_VERSION     (0x04U)
# define RTE_AR_RELEASE_MINOR_VERSION     (0x00U)
# define RTE_AR_RELEASE_REVISION_VERSION  (0x03U)

# include "Std_Types.h"

# include "Rte_UserTypes.h"

# if !defined (TYPEDEF) && defined (AUTOMATIC)
#  define TYPEDEF AUTOMATIC
# endif

# if !defined (FUNC_P2CONST)
#  define FUNC_P2CONST(rettype, ptrclass, memclass) FUNC(P2CONST(rettype, AUTOMATIC, ptrclass), memclass)
# endif

/* Note: application errors are in the range between 1-63
         overlayed error (ORed with application errors) is 64
         structural errors are in the range between 128-256 */

/* common errors */
# define RTE_E_OK               (0U)
# define RTE_E_INVALID          (1U)

/* overlayed errors */
# define RTE_E_LOST_DATA        (64U)
# define RTE_E_MAX_AGE_EXCEEDED (64U)

# define Rte_HasOverlayedError(status) (((status) & 64U) != 0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/* immediate infrastructure errors */
# define RTE_E_COM_STOPPED      (128U)
# define RTE_E_COMMS_ERROR      (128U)  /* AUTOSAR 2.1 compatibility */
# define RTE_E_TIMEOUT          (129U)
# define RTE_E_LIMIT            (130U)
# define RTE_E_NO_DATA          (131U)
# define RTE_E_TRANSMIT_ACK     (132U)
# define RTE_E_NEVER_RECEIVED   (133U)
# define RTE_E_UNCONNECTED      (134U)

/* common SchM errors */
# define SCHM_E_OK              (0U)

# define Rte_IsInfrastructureError(status) (((status) & 128U) != 0) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_ApplicationError(status) ((status) & 63U) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1511166120
#    error "The magic number of the generated file <C:/Workspace/_EA4/_Components/NM001A_CmnMfgSrv_Impl-kzdyfh/NM001A_CmnMfgSrv_Impl/tools/contract/Rte.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1511166120
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_H */
