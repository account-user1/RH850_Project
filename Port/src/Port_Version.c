/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Port_Version.c                                              */
/* $Revision: 426746 $                                                        */
/* $Date: 2017-06-23 18:50:14 +0900 (金, 23 6 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2016 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains code for version checking for modules included by PORT  */
/* Driver                                                                     */
/*                                                                            */
/*============================================================================*/
/*                                                                            */
/* Unless otherwise agreed upon in writing between your company and           */
/* Renesas Electronics Corporation the following shall apply!                 */
/*                                                                            */
/* Warranty Disclaimer                                                        */
/*                                                                            */
/* There is no warranty of any kind whatsoever granted by Renesas. Any        */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed */
/* or implied, including but not limited to those for non-infringement of     */
/* intellectual property, merchantability and/or fitness for the particular   */
/* purpose.                                                                   */
/*                                                                            */
/* Renesas shall not have any obligation to maintain, service or provide bug  */
/* fixes for the supplied Product(s) and/or the Application.                  */
/*                                                                            */
/* Each User is solely responsible for determining the appropriateness of     */
/* using the Product(s) and assumes all risks associated with its exercise    */
/* of rights under this Agreement, including, but not limited to the risks    */
/* and costs of program errors, compliance with applicable laws, damage to    */
/* or loss of data, programs or equipment, and unavailability or              */
/* interruption of operations.                                                */
/*                                                                            */
/* Limitation of Liability                                                    */
/*                                                                            */
/* In no event shall Renesas be liable to the User for any incidental,        */
/* consequential, indirect, or punitive damage (including but not limited     */
/* to lost profits) regardless of whether such liability is based on breach   */
/* of contract, tort, strict liability, breach of warranties, failure of      */
/* essential purpose or otherwise and even if advised of the possibility of   */
/* such damages. Renesas shall not be liable for any services or products     */
/* provided by third party vendors, developers or consultants identified or   */
/* referred to the User by Renesas in connection with the Product(s) and/or   */
/* the Application.                                                           */
/*                                                                            */
/*============================================================================*/
/* Environment:                                                               */
/*              Device :        P1x-C                                         */
/*============================================================================*/


/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
  * V1.0.0:  11-Aug-2015   : Initial Version
  * V1.0.1:  03-Mar-2016   : As part of P1x-C V4.01.00 release following
  *                          change was made:
  *                          1.As per ARDAAAF-481, to avoid the QAC warning
  *                          Carriage Return Line feed(CRLF) format has been
  *                          corrected.
  *                          2.Updated copyright information.
  * V1.0.2:  27-Oct-2016   : Following changes are made:
  *                          1)As per ARDAAAF-1459,unit design ID, proper
  *                          comments and requirement tags are added at
  *                          applicable places.
  *                          2)As per the ARDAAAF-771, justification added for
  *                          QAC Warnings and MISRA violations at applicable
  *                          places.
  */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/*Implements EAAR_PN0034_NR_0001, EAAR_PN0034_NR_0012, EAAR_PN0034_NR_0018*/
/*Implements EAAR_PN0034_NR_0056, EAAR_PN0034_NR_0069, EAAR_PN0034_NR_0020*/
/*Implements EAAR_PN0034_FR_0052, AR_PN0062_FR_0005, EAAR_PN0034_FR_0021*/
/*Implements EAAR_PN0034_NR_0007, PORT129, Implements EAAR_PN0034_NR_0045*/
/* Header file inclusion */

#include "Port_PBTypes.h"
#include "Port_Version.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define PORT_VERSION_C_AR_RELEASE_MAJOR_VERSION \
                                             PORT_AR_RELEASE_MAJOR_VERSION_VALUE
#define PORT_VERSION_C_AR_RELEASE_MINOR_VERSION \
                                             PORT_AR_RELEASE_MINOR_VERSION_VALUE
#define PORT_VERSION_C_AR_RELEASE_REVISION_VERSION \
                                          PORT_AR_RELEASE_REVISION_VERSION_VALUE

/* File version information */
#define PORT_VERSION_C_SW_MAJOR_VERSION    PORT_SW_MAJOR_VERSION_VALUE
#define PORT_VERSION_C_SW_MINOR_VERSION    PORT_SW_MINOR_VERSION_VALUE
/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
/*Implements PORT114, EAAR_PN0034_FR_0055, PORT_ESDD_UD_021*/
#if (PORT_VERSION_AR_RELEASE_MAJOR_VERSION != \
                                        PORT_VERSION_C_AR_RELEASE_MAJOR_VERSION)
  #error "Port_Version.c : Mismatch in Release Major Version"
#endif
#if (PORT_VERSION_AR_RELEASE_MINOR_VERSION != \
                                        PORT_VERSION_C_AR_RELEASE_MINOR_VERSION)
  #error "Port_Version.c : Mismatch in Release Minor Version"
#endif
#if (PORT_VERSION_AR_RELEASE_REVISION_VERSION != \
                                     PORT_VERSION_C_AR_RELEASE_REVISION_VERSION)
  #error "Port_Version.c : Mismatch in Release Revision Version"
#endif

#if (PORT_VERSION_SW_MAJOR_VERSION != PORT_VERSION_C_SW_MAJOR_VERSION)
  #error "Port_Version.c : Mismatch in Software Major Version"
#endif
#if (PORT_VERSION_SW_MINOR_VERSION != PORT_VERSION_C_SW_MINOR_VERSION)
  #error "Port_Version.c : Mismatch in Software Minor Version"
#endif

/*Implements PORT_ESDD_UD_052*/
#if (PORT_VERSION_CHECK_EXT_MODULES == STD_ON)

/* Rte Module Version Check */
/*Implements EAAR_PN0034_FR_0013*/
#if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
#if ((RTE_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION) \
 || (RTE_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Rte.h does not match the expected version"
#endif
#endif /* (PORT_CRITICAL_SECTION_PROTECTION == STD_ON) */

/* Dem Module Version Check */
#if ((DEM_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION) \
 || (DEM_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Dem.h does not match the expected version"
#endif

/* Det Module Version Check */
/*Implements PORT100, PORT107*/
#if (PORT_DEV_ERROR_DETECT == STD_ON)
#if ((DET_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION) \
 || (DET_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Det.h does not match the expected version"
#endif
#endif /* (PORT_DEV_ERROR_DETECT == STD_ON) */

#endif /* #if (PORT_VERSION_CHECK_EXT_MODULES == STD_ON) */

/*Implements EAAR_PN0034_NR_0002, EAAR_PN0034_NR_0026*/
/*******************************************************************************
**                              QAC Warning                                   **
*******************************************************************************/

/* 1. QAC Warning:                                                            */
/* Message      : (2:0553) Translation unit contains no object or function    */
/*                definitions with external linkage.                          */
/* Rule         : NA                                                          */
/* Justification: This file is used to check the versions of other modules    */
/*                included in the PORT driver and hence no function definition*/
/*                required.                                                   */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/******************************************************************************/

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
