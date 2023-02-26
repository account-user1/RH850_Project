/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi                                                         */
/* $Revision: 507102 $                                                        */
/* $Date: 2018-01-03 18:00:15 +0530 (Wed, 03 Jan 2018) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015   Renesas Electronics Corporation                        */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Prototype Declarations for SPI callback Notification    */
/* Functions.                                                                 */
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
 * V1.0.0:  01-Aug-2015    : Initial Version
 * V1.0.1:  14-Nov-2016    : Following changes were made.
 *                            1. As part of the JIRS ticket ARDAAAF-1026,
 *                               Write-verify user interface implementation,
 *                               updated the template to add the generation of
 *                               SPI_WV_ERROR_NOTIFICATION and added Dem.h
 *                               header file.
 *                            2. As part of the JIRA ticket ARDAAAF-1406, check
 *                               added for following non mandatory parameters
 *                               generation
 *                                a) SpiJobEndNotification
 *                                b) SpiSeqEndNotification
 *                                c) SpiWriteVerifyErrorInterface.
 *                            3. As part of the JIRA ticket ARDAAAF-1321, check
 *                               updated for following parameters generation
 *                                a) SpiSeqStartNotification
 *                                b) SpiSeqEndNotification.
 *                            4. Software Major version updated.
 */
/******************************************************************************/
#ifndef SPI_CBK_H
#define SPI_CBK_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Spi_Cfg.h"
#include "Dem.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR specification version information */
#define SPI_CBK_AR_RELEASE_MAJOR_VERSION  4U
#define SPI_CBK_AR_RELEASE_MINOR_VERSION  0U
#define SPI_CBK_AR_RELEASE_REVISION_VERSION  3U
/* File version information */
#define SPI_CBK_SW_MAJOR_VERSION  2U
#define SPI_CBK_SW_MINOR_VERSION  0U
/*******************************************************************************
**                      Global Function Prototypes                            **
*******************************************************************************/
#define SPI_START_SEC_APPL_CODE
#include "MemMap.h"
#define SPI_STOP_SEC_APPL_CODE
#include "MemMap.h"
#endif  /* SPI_CBK_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

