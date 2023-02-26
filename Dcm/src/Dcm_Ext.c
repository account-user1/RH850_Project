/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Dcm_Ext.c
 *        \brief  Implementation of DCM extensions
 *
 *      \details  MICROSAR DCM based on AR 4.0.3
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *
 *  FILE VERSION
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the VERSION CHECK below.
 *********************************************************************************************************************/
#define DCM_EXT_SOURCE
/* ----------------------------------------------
 ~&&&   Includes
---------------------------------------------- */
                                                                                                                                                     /* PRQA S 0857, 0828 EOF */ /* MD_MSR_1.1_857, MD_MSR_1.1_828 */
#include "Dcm.h"
#include "Dcm_Int.h"
#include "Rte_Dcm.h"
#include "SchM_Dcm.h"
#if (DCM_DEV_ERROR_DETECT == STD_ON)                                                                                                                 /* COV_DCM_SUPPORT_ALWAYS TX */
# include "Det.h"
#endif /* (DCM_DEV_ERROR_DETECT == STD_ON) */
/* ----------------------------------------------
 ~&&&   Versions
---------------------------------------------- */
#if ((DCM_SW_MAJOR_VERSION !=  7u) || \
    (DCM_SW_MINOR_VERSION !=  1u) || \
    (DCM_SW_PATCH_VERSION !=  0u))
# error "Vendor specific version numbers of Dcm_Ext.c and Dcm.h are inconsistent"
#endif
#if ((DCM_CBK_MAJOR_VERSION !=  7u) || \
    (DCM_CBK_MINOR_VERSION !=  1u) || \
    (DCM_CBK_PATCH_VERSION !=  0u))
# error "Vendor specific version numbers of Dcm_Ext.c and Dcm_Cbk.h are inconsistent"
#endif
#if ((DCM_TYPES_MAJOR_VERSION !=  7u) || \
    (DCM_TYPES_MINOR_VERSION !=  1u) || \
    (DCM_TYPES_PATCH_VERSION !=  0u))
# error "Vendor specific version numbers of Dcm_Ext.c and Dcm_Types.h are inconsistent"
#endif
#if ((DCM_INT_MAJOR_VERSION !=  7u) || \
    (DCM_INT_MINOR_VERSION !=  1u) || \
    (DCM_INT_PATCH_VERSION !=  0u))
# error "Vendor specific version numbers of Dcm_Ext.c and Dcm_Int.h are inconsistent"
#endif
#if ((DCM_CORE_MAJOR_VERSION !=  7u) || \
    (DCM_CORE_MINOR_VERSION !=  1u) || \
    (DCM_CORE_PATCH_VERSION !=  0u))
# error "Vendor specific version numbers of Dcm_Ext.c and Dcm_Core.h are inconsistent"
#endif
#if ((DCM_CORECBK_MAJOR_VERSION !=  7u) || \
    (DCM_CORECBK_MINOR_VERSION !=  1u) || \
    (DCM_CORECBK_PATCH_VERSION !=  0u))
# error "Vendor specific version numbers of Dcm_Ext.c and Dcm_CoreCbk.h are inconsistent"
#endif
#if ((DCM_CORETYPES_MAJOR_VERSION !=  7u) || \
    (DCM_CORETYPES_MINOR_VERSION !=  1u) || \
    (DCM_CORETYPES_PATCH_VERSION !=  0u))
# error "Vendor specific version numbers of Dcm_Ext.c and Dcm_CoreTypes.h are inconsistent"
#endif
#if ((DCM_COREINT_MAJOR_VERSION !=  7u) || \
    (DCM_COREINT_MINOR_VERSION !=  1u) || \
    (DCM_COREINT_PATCH_VERSION !=  0u))
# error "Vendor specific version numbers of Dcm_Ext.c and Dcm_CoreInt.h are inconsistent"
#endif
#if ((DCM_EXT_MAJOR_VERSION !=  7u) || \
    (DCM_EXT_MINOR_VERSION !=  1u) || \
    (DCM_EXT_PATCH_VERSION !=  0u))
# error "Vendor specific version numbers of Dcm_Ext.c and Dcm_Ext.h are inconsistent"
#endif
#if ((DCM_EXTCBK_MAJOR_VERSION !=  7u) || \
    (DCM_EXTCBK_MINOR_VERSION !=  1u) || \
    (DCM_EXTCBK_PATCH_VERSION !=  0u))
# error "Vendor specific version numbers of Dcm_Ext.c and Dcm_ExtCbk.h are inconsistent"
#endif
#if ((DCM_EXTTYPES_MAJOR_VERSION !=  7u) || \
    (DCM_EXTTYPES_MINOR_VERSION !=  1u) || \
    (DCM_EXTTYPES_PATCH_VERSION !=  0u))
# error "Vendor specific version numbers of Dcm_Ext.c and Dcm_ExtTypes.h are inconsistent"
#endif
#if ((DCM_EXTINT_MAJOR_VERSION !=  7u) || \
    (DCM_EXTINT_MINOR_VERSION !=  1u) || \
    (DCM_EXTINT_PATCH_VERSION !=  0u))
# error "Vendor specific version numbers of Dcm_Ext.c and Dcm_ExtInt.h are inconsistent"
#endif
#if ((DCM_CFG_MAJOR_VERSION !=  7u) || \
    (DCM_CFG_MINOR_VERSION !=  1u) || \
    (DCM_CFG_PATCH_VERSION !=  0u))
# error "Vendor specific version numbers of Dcm_Ext.c and Dcm_Cfg.h are inconsistent"
#endif
#if ((DCM_LCFG_MAJOR_VERSION !=  7u) || \
    (DCM_LCFG_MINOR_VERSION !=  1u) || \
    (DCM_LCFG_PATCH_VERSION !=  0u))
# error "Vendor specific version numbers of Dcm_Ext.c and Dcm_Lcfg.h are inconsistent"
#endif
#if ((DCM_PBCFG_MAJOR_VERSION !=  7u) || \
    (DCM_PBCFG_MINOR_VERSION !=  1u) || \
    (DCM_PBCFG_PATCH_VERSION !=  0u))
# error "Vendor specific version numbers of Dcm_Ext.c and Dcm_PBcfg.h are inconsistent"
#endif
#if (DCM_EXTENSION_ID != 0x002104BBUL)
# error "Mismatching OEMs between static and generated code"
#endif
/* ********************************************************************************************************************
 * END OF FILE: Dcm_Ext.c
 * ******************************************************************************************************************** */
