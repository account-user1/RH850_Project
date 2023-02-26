/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2015 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  
 *        \brief  LdCom Header for RTE Analyzer
 *
 *      \details  This header provides the defines and prototypes of the LDCOM module
 *                that are required for the static analysis with RTE Analyzer.
 *
 *********************************************************************************************************************/
 /**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Sascha Sommer                 So            Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2015-07-31  So                    Initial creation
 *  01.00.01  2016-05-17  So                    ESCAN00090033: Support AR4.0.3 and later LDCOM versions
 *********************************************************************************************************************/
#ifndef _LDCOM_H_
# define _LDCOM_H_

# include "Std_Types.h" 
# include "ComStack_Types.h"
# include "LdCom_Cfg.h"

# define RTE_TEST_STUBS

/* AUTOSAR Software Specification Version information */
# define LDCOM_AR_RELEASE_MAJOR_VERSION 4u
# define LDCOM_AR_RELEASE_MINOR_VERSION 0u

# define LDCOM_VENDOR_ID 30U

# define LDCOM_CODE
# define LDCOM_APPL_DATA

/* Send APIs */
FUNC(Std_ReturnType, LDCOM_CODE) LdCom_IfTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, LDCOM_APPL_DATA) info);
# define LdCom_Transmit LdCom_IfTransmit
#endif /*_LDCCOM_H_*/
