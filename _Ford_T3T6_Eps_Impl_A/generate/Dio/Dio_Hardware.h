/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Dio_Hardware.h                                              */
/* $Revision: 419164 $                                                        */
/* $Date: 2017-06-12 19:27:49 +0530 (Mon, 12 Jun 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Dio Hardware related configurations                     */
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
 * V1.0.0: 30-Jul-2015 : Initial Version.
 *
 * V1.0.1: 07-Mar-2016 : 1. As per JIRA ARDAAAF-12, memory alignment changed
 *                          for Dio_BaseAddress
 *                       2. Copyright Information is updated.
 *
 * V1.0.2: 06-Oct-2016 : As per JIRA ARDAAAF-1253,Added Global variables
 *                       a. Removed Dio_BaseAddress.
 *                       b. Added Global variables Normalport_Address and
 *                          JPort_Registers to access Base addresses of
 *                          DIO controllers.
 *
 * V1.0.3: 02-May-2017 : As per ARDAAAF-2049,
 *                       PREFIX and INITPOLICY of memory sections are
 *                       changed.
 *
 * V1.0.4: 16-Jun-2017 : As per ARDAAAF-2475, Corrected the alignment in
 *                       revision history banner.
 */
/******************************************************************************/
#ifndef DIO_HARDWARE_H
#define DIO_HARDWARE_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Platform_Types.h"
#include "P1X_C_Hardware.h"
/*******************************************************************************
**                      Defines                                               **
*******************************************************************************/
#define DIO_DEVICE_VARIANT R7F701373
#define REG_ARRAY_SIZE     (uint8)10
/*******************************************************************************
**                      extern definitions                                    **
*******************************************************************************/
#define DIO_59_RENESAS_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
extern volatile Port_Registers* const Normalport_Address[REG_ARRAY_SIZE];
extern volatile JPort_Registers* const JPort_Address;
#define DIO_59_RENESAS_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
#endif  /* DIO_HARDWARE_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

