/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Dio_Debug.h                                                 */
/* $Revision: 419143 $                                                        */
/* $Date: 2017-06-12 22:46:51 +0900 (月, 12 6 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision of global variables for debugging purpose.                       */
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
 * V1.0.0:  30-Jul-2015  : Initial Version.
 *
 * V1.0.1:  22-Feb-2017  : As per ARDAAAF-1253,
 *                         a. Corrected module name
 *                         b. Updated copyright year
 *
 * V1.0.2:  25-May-2017  : As per ARDAAAF-2357, Corrected copy right year.
 *
 * V1.0.3:  16-Jun-2017  : As per ARDAAAF-2475, Corrected the alignment in
 *                         revision history banner.
 */
/******************************************************************************/
#ifndef DIO_DEBUG_H
#define DIO_DEBUG_H

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/*
 * Since all the debug variables will be available in Dio_Ram.h it is
 * included.
 */
#include "Dio_Ram.h"

/*******************************************************************************
**                        Version Information                                 **
*******************************************************************************/
/* AUTOSAR release version information */
#define DIO_DEBUG_AR_RELEASE_MAJOR_VERSION      DIO_AR_RELEASE_MAJOR_VERSION
#define DIO_DEBUG_AR_RELEASE_MINOR_VERSION      DIO_AR_RELEASE_MINOR_VERSION
#define DIO_DEBUG_AR_RELEASE_REVISION_VERSION   DIO_AR_RELEASE_REVISION_VERSION

/* Module Software version information */
#define DIO_DEBUG_SW_MAJOR_VERSION   DIO_SW_MAJOR_VERSION
#define DIO_DEBUG_SW_MINOR_VERSION   DIO_SW_MINOR_VERSION

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#endif /* DIO_DEBUG_H */

/*******************************************************************************
**                          End Of File                                       **
*******************************************************************************/
