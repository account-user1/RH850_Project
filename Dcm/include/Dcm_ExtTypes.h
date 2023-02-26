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
/**        \file  Dcm_ExtTypes.h
 *        \brief  Public data type definition interface of DCM
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
#if !defined(DCM_EXTTYPES_H)
# define DCM_EXTTYPES_H
/* ----------------------------------------------
 ~&&&   Versions
---------------------------------------------- */

/* Implementation version */
# define DCM_EXTTYPES_MAJOR_VERSION                                  7u
# define DCM_EXTTYPES_MINOR_VERSION                                  1u
# define DCM_EXTTYPES_PATCH_VERSION                                  0u
# if (DCM_EXTENSION_ID != 0x002104BBUL)
#  error "Mismatching OEMs between static and generated code"
# endif
#endif /* !defined(DCM_EXTTYPES_H) */
/* ********************************************************************************************************************
 * END OF FILE: Dcm_ExtTypes.h
 * ******************************************************************************************************************** */
