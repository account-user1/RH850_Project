/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Port_Ram.c                                                  */
/* $Revision: 426746 $                                                        */
/* $Date: 2017-06-23 18:50:14 +0900 (金, 23 6 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* Global RAM variable definitions for Port Driver                            */
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
 * V1.0.1:  14-Mar-2016   : As part of P1x-C 4.01.00 the following changes are
 *                          made:
 *                          1) As per JIRA ARDAAAF-12, INIT_POLICY added for
 *                             Global Data Types
 *                          2) Copyright Information is updated.
 * V1.0.2:  27-Oct-2016   : Following changes are made:
 *                          1)As per ARDAAAF-1459,unit design ID, proper
 *                          comments and requirement tags are added at
 *                          applicable places.
 *                          2)As per the ARDAAAF-771, justification added for
 *                          QAC Warnings and MISRA violations at applicable
 *                          places.
 * V1.0.3:  27-Mar-2017   : Following changes were made:
 *                          1)As per ARDAAAF-2057,
 *                          PREFIX and INITPOLICY of memory sections are
 *                          changed.
*******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/*Implements EAAR_PN0034_NR_0001, EAAR_PN0034_NR_0012, EAAR_PN0034_NR_0018*/
/*Implements EAAR_PN0034_NR_0056, EAAR_PN0034_NR_0069, EAAR_PN0034_NR_0020*/
/*Implements EAAR_PN0034_FR_0052, AR_PN0062_FR_0005, EAAR_PN0034_FR_0021*/
/*Implements EAAR_PN0034_NR_0007, PORT207, EAAR_PN0034_NR_0045*/
/* Included for Port.h inclusion and macro definitions */
#include "Port_PBTypes.h"
/* Header file inclusion */
#include "Port_Ram.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/*Implements PORT_ESDD_UD_022*/
/* AUTOSAR release version information */
#define PORT_RAM_C_AR_RELEASE_MAJOR_VERSION \
                                             PORT_AR_RELEASE_MAJOR_VERSION_VALUE
#define PORT_RAM_C_AR_RELEASE_MINOR_VERSION \
                                             PORT_AR_RELEASE_MINOR_VERSION_VALUE
#define PORT_RAM_C_AR_RELEASE_REVISION_VERSION \
                                          PORT_AR_RELEASE_REVISION_VERSION_VALUE

/* File version information */
#define PORT_RAM_C_SW_MAJOR_VERSION    PORT_SW_MAJOR_VERSION_VALUE
#define PORT_RAM_C_SW_MINOR_VERSION    PORT_SW_MINOR_VERSION_VALUE

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
/*Implements PORT114, EAAR_PN0034_FR_0055, PORT_ESDD_UD_021*/
#if (PORT_RAM_AR_RELEASE_MAJOR_VERSION != \
                                            PORT_RAM_C_AR_RELEASE_MAJOR_VERSION)
  #error "Port_Ram.c : Mismatch in Release Major Version"
#endif
#if (PORT_RAM_AR_RELEASE_MINOR_VERSION != \
                                            PORT_RAM_C_AR_RELEASE_MINOR_VERSION)
  #error "Port_Ram.c : Mismatch in Release Minor Version"
#endif
#if (PORT_RAM_AR_RELEASE_REVISION_VERSION != \
                                         PORT_RAM_C_AR_RELEASE_REVISION_VERSION)
  #error "Port_Ram.c : Mismatch in Release Revision Version"
#endif

#if (PORT_RAM_SW_MAJOR_VERSION != PORT_RAM_C_SW_MAJOR_VERSION)
   #error "Port_Ram.c : Mismatch in Software Major Version"
#endif
#if (PORT_RAM_SW_MINOR_VERSION != PORT_RAM_C_SW_MINOR_VERSION)
   #error "Port_Ram.c : Mismatch in Software Minor Version"
#endif
/*Implements EAAR_PN0034_NR_0060*/
/*******************************************************************************
**                       QAC Warning                                          **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message      : (2:3211) The global identifier 'Port_GpConfigPtr' is defined*/
/*                here but is not used in this translation unit.              */
/* Rule         : NA                                                          */
/* Justification: As per AUTOSAR, all global variables extern declaration     */
/*                shall be given in Port_Ram.c                                */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for QAC Warning : START Msg(2:3211)-1 and              */
/*                QAC Warning END Msg: (2:3211)-1 tags in the code.           */
/******************************************************************************/
/* 2.QAC Warning:                                                             */
/* Message       :(2:0862) #include "MemMap.h" directive is redundant.        */
/* Rule          : NA                                                         */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files within the code is a MISRA violation. */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/


/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/
/*Implements PORT100, PORT107*/
#if (PORT_DEV_ERROR_DETECT == STD_ON)

#define PORT_59_RENESAS_START_SEC_VAR_INIT_BOOLEAN
#include "MemMap.h"

/* QAC Warning: START Msg(2:3211)-1 */
/* Global variable to store Initialization status of Port Driver Component */
VAR (boolean, PORT_INIT_DATA) Port_GblDriverStatus = PORT_UNINITIALIZED;
/* QAC Warning: END Msg(2:3211)-1 */

#define PORT_59_RENESAS_STOP_SEC_VAR_INIT_BOOLEAN
#include "MemMap.h"


#endif /* End of PORT_DEV_ERROR_DETECT == STD_ON */

#define PORT_59_RENESAS_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

/* QAC Warning: START Msg(2:3211)-1 */
/* Global variable to store pointer to Configuration */
/*Implements PORT_ESDD_UD_073*/
P2CONST(Port_ConfigType, PORT_VAR, PORT_CONFIG_CONST)
                                          Port_GpConfigPtr = NULL_PTR;
/* QAC Warning: END Msg(2:3211)-1 */

#define PORT_59_RENESAS_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
