/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* File name    = Std_Types.h                                                 */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2016 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision for Standard types                                               */
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
/*              Devices:        X1x                                           */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  01-Aug-2015  : Initial Version
 *
 * V1.0.1:  11-Mar-2016  : The following changes are made as part of P1x-C
 *                         V4.01.00 release:
 *                         1. As per ticket ARDAAAF-502, modified the definition
 *                            of E_OK and E_NOT_OK.
 *                         2. Copyright information updated.
 *                         3. U' Suffix added for all the Numericals
 */
/******************************************************************************/
#ifndef STD_TYPES_H
#define STD_TYPES_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Compiler.h"                  /* mapping compiler specific keywords */
#include "Platform_Types.h"            /* platform specific type definitions */

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/*
 * AUTOSAR specification version information
 */
#define STD_TYPES_AR_RELEASE_MAJOR_VERSION     4U
#define STD_TYPES_AR_RELEASE_MINOR_VERSION     0U
#define STD_TYPES_AR_RELEASE_REVISION_VERSION  1U

/*
 * File version information
 */
#define STD_TYPES_SW_MAJOR_VERSION  1U
#define STD_TYPES_SW_MINOR_VERSION  0U
#define STD_TYPES_SW_PATCH_VERSION  0U

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                    **
*******************************************************************************/

/* for OSEK compliance this typedef has been added */
#ifndef STATUSTYPEDEFINED
  #define STATUSTYPEDEFINED
  #define E_OK      0U
  typedef unsigned char StatusType;
#endif

/* STD011
  The Std_ReturnType (STD005) may be used with the following values (STD006):
  E_OK:     0
  E_NOT_OK: 1
*/
typedef uint8 Std_ReturnType;
#define E_NOT_OK    1U

typedef struct
{
  uint16  vendorID;
  uint16  moduleID;
  uint8  sw_major_version;
  uint8  sw_minor_version;
  uint8  sw_patch_version;
} Std_VersionInfoType; /* STD015                                */


#define STD_HIGH    1U  /* Physical state 5V or 3.3V             */
#define STD_LOW     0U  /* Physical state 0V                     */

#define STD_ACTIVE  1U  /* Logical state active                  */
#define STD_IDLE    0U  /* Logical state idle                    */

#define STD_ON      1U
#define STD_OFF     0U

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#endif  /* STD_TYPES_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

