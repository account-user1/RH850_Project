/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Port_Cbk.h                                                  */
/* $Revision: 395582 $                                                        */
/* $Date: 2017-04-20 12:03:34 +0530 (Thu, 20 Apr 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2017 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Prototype Declarations for Port callback Notification   */
/* Functions.                                                                 */
/* AUTOMATICALLY GENERATED FILE - DO NOT EDIT                                 */
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
 * V1.0.0:  27-Jan-2017   : Initial Version
 * V1.0.1:  27-Mar-2017   : 1) As per the Jira-ARDAAAF-2057,
 *                          PREFIX and INITPOLICY of memory sections are
 *                          modified
 */
/******************************************************************************/
#ifndef PORT_CBK_H
#define PORT_CBK_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Dem.h"
/*******************************************************************************
**                      Macro definitions                                     **
*******************************************************************************/
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* PORT_CBK SW Major Version */
#define PORT_CBK_SW_MAJOR_VERSION_VALUE              1U
/* PORT_CBK SW Minor Version */
#define PORT_CBK_SW_MINOR_VERSION_VALUE              0U
/* PORT_CBK SW Revision Version */
#define PORT_CBK_SW_PATCH_VERSION_VALUE              4U
/* PORT_CBK AR Major Version */
#define PORT_CBK_AR_RELEASE_MAJOR_VERSION_VALUE      4U
/* PORT_CBK AR Minor Version */
#define PORT_CBK_AR_RELEASE_MINOR_VERSION_VALUE      0U
/* PORT_CBK AR Revision Version */
#define PORT_CBK_AR_RELEASE_REVISION_VERSION_VALUE   3U
/* PORT_CBK Module ID */
#define PORT_CBK_MODULE_ID_VALUE                     124U
/* PORT_CBK Vendor ID */
#define PORT_CBK_VENDOR_ID_VALUE                     59U
/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#define PORT_59_RENESAS_START_SEC_APPL_CODE
#include "MemMap.h"
#define PORT_59_RENESAS_STOP_SEC_APPL_CODE
#include "MemMap.h"
#endif /* PORT_CBK_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

