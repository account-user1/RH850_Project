/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Component                        */
/* Module       = Port_Ram.h                                                  */
/* $Revision: 426746 $                                                        */
/* $Date: 2017-06-23 18:50:14 +0900 (金, 23 6 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c)  2015-2017 Renesas Electronics Corporation                    */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains macros, PORT type definitions, structure data types and */
/* API function prototypes of PORT Driver                                     */
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
/*              Devices:        P1x-C                                         */
/*============================================================================*/


/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  11-Aug-2015   : Initial Version
 * V1.0.1:  14-Mar-2016   : As part of P1x-C 4.01.00 the following changes are
 *                          made:
 *                          1)As per JIRA ARDAAAF-12, INIT_POLICY added for
 *                          Global Data Types
 *                          2)Copyright Information is updated.
 * V1.0.2:  27-Oct-2016   : Following change is made:
 *                          1)As per ARDAAAF-1459,unit design ID, proper
 *                          comments and requirement tags are added at
 *                          applicable places.
 * V1.0.3:  27-Mar-2017   : Following changes were made:
 *                          1)As per ARDAAAF-2057,
 *                          PREFIX and INITPOLICY of memory sections are
 *                          changed.
 */
/******************************************************************************/
/*Implements EAAR_PN0034_NR_0001, EAAR_PN0034_NR_0012, EAAR_PN0034_NR_0018*/
/*Implements EAAR_PN0034_NR_0056, EAAR_PN0034_NR_0069, EAAR_PN0034_NR_0020*/
/*Implements EAAR_PN0034_FR_0001, EAAR_PN0034_FR_0052, AR_PN0062_FR_0005*/
/*Implements EAAR_PN0034_FR_0021, EAAR_PN0034_NR_0007, PORT207*/
/*Implements EAAR_PN0034_NR_0045*/
#ifndef PORT_RAM_H
#define PORT_RAM_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Port.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define PORT_RAM_AR_RELEASE_MAJOR_VERSION    PORT_AR_RELEASE_MAJOR_VERSION
#define PORT_RAM_AR_RELEASE_MINOR_VERSION    PORT_AR_RELEASE_MINOR_VERSION
#define PORT_RAM_AR_RELEASE_REVISION_VERSION \
                                          PORT_AR_RELEASE_REVISION_VERSION

/* Module Software version information */
#define PORT_RAM_SW_MAJOR_VERSION  PORT_SW_MAJOR_VERSION
#define PORT_RAM_SW_MINOR_VERSION  PORT_SW_MINOR_VERSION
/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/*Implements PORT100, PORT107*/
#if (PORT_DEV_ERROR_DETECT == STD_ON)

#define PORT_59_RENESAS_START_SEC_VAR_INIT_BOOLEAN
#include "MemMap.h"

/* Global variable to store Initialization status of Port Driver Component */
extern VAR (boolean, PORT_INIT_DATA) Port_GblDriverStatus;

#define PORT_59_RENESAS_STOP_SEC_VAR_INIT_BOOLEAN
#include "MemMap.h"

#endif /* End of PORT_DEV_ERROR_DETECT == STD_ON */

#define PORT_59_RENESAS_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

/* Global variable to store pointer to Configuration */
extern P2CONST(Port_ConfigType, PORT_VAR, PORT_CONFIG_CONST)Port_GpConfigPtr;
#define PORT_59_RENESAS_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#endif /* PORT_RAM_H  */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
