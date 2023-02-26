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
/**        \file  Dcm_Ext.h
 *        \brief  Public interface of DCM extensions for other components
 *
 *      \details  MICROSAR DCM based on AR 4.0.3
 *
 *********************************************************************************************************************/
/*********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Mishel Shishmanyan            vissa         Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2012-08-20                        No relevant changes
 *  01.01.00  2012-09-20                        No relevant changes
 *  01.01.01  2012-10-12                        No relevant changes
 *  01.02.00  2013-01-31                        No relevant changes
 *  01.03.00  2013-04-17                        No relevant changes
 *  01.03.01  2013-05-28                        No relevant changes
 *  01.04.00  2013-06-17                        No relevant changes
 *  01.05.00  2013-07-26                        No relevant changes
 *  02.00.00  2013-07-18                        No relevant changes
 *  02.00.01  2013-12-05                        No relevant changes
 *  02.01.00  2013-12-03  vissa   ESCAN00071911 AR4-403: Dem/Dcm for Mazda based on ASR4.x
 *  02.02.00  2014-04-11                        No relevant changes
 *  02.02.01  2014-07-31                        No relevant changes
 *  02.02.02  2014-08-11                        No relevant changes
 *  03.00.00  2014-10-30                        No relevant changes
 *  03.01.00  2014-11-11                        No relevant changes
 *  04.00.00  2015-01-30                        No relevant changes
 *  04.01.00  2015-04-07                        No relevant changes
 *  04.01.01  2015-09-10                        No relevant changes
 *  05.00.00  2015-11-27                        No relevant changes
 *  05.01.00  2016-02-28                        No relevant changes
 *  05.02.00  2016-04-07                        No relevant changes
 *  07.00.00  2016-05-02                        No relevant changes
 *  07.01.00  2016-09-22                        No relevant changes
 *********************************************************************************************************************/
#if !defined(DCM_EXT_H)
# define DCM_EXT_H
/* ----------------------------------------------
 ~&&&   Versions
---------------------------------------------- */

/* Implementation version */
# define DCM_EXT_MAJOR_VERSION                                       7u
# define DCM_EXT_MINOR_VERSION                                       1u
# define DCM_EXT_PATCH_VERSION                                       0u
# if (DCM_EXTENSION_ID != 0x002104BBUL)
#  error "Mismatching OEMs between static and generated code"
# endif
#endif /* !defined(DCM_EXT_H) */
/* ********************************************************************************************************************
 * END OF FILE: Dcm_Ext.h
 * ******************************************************************************************************************** */
