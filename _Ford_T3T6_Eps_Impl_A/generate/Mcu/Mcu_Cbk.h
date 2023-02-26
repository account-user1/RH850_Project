/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Mcu_Cbk.h                                                   */
/* $Revision: 204031 $                                                        */
/* $Date: 2016-07-12 11:31:24 +0530 (Tue, 12 Jul 2016) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2016 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains declaration of call back notification functions         */
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
 * V1.0.0:  04-Aug-2016:    : Initial Version
 */
/******************************************************************************/
#ifndef MCU_CBK_H
#define MCU_CBK_H
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
/* MCU_CBK SW Major Version */
#define MCU_CBK_SW_MAJOR_VERSION_VALUE              1U
/* MCU_CBK SW Minor Version */
#define MCU_CBK_SW_MINOR_VERSION_VALUE              1U
/* MCU_CBK SW Revision Version */
#define MCU_CBK_SW_PATCH_VERSION_VALUE              0U
/* MCU_CBK AR Major Version */
#define MCU_CBK_AR_RELEASE_MAJOR_VERSION_VALUE      4U
/* MCU_CBK AR Minor Version */
#define MCU_CBK_AR_RELEASE_MINOR_VERSION_VALUE      0U
/* MCU_CBK AR Revision Version */
#define MCU_CBK_AR_RELEASE_REVISION_VERSION_VALUE   3U
/* MCU_CBK Module ID */
#define MCU_CBK_MODULE_ID_VALUE                     101U
/* MCU_CBK Vendor ID */
#define MCU_CBK_VENDOR_ID_VALUE                     59U
/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/*******************************************************************************
**                      Global Function Prototypes                            **
*******************************************************************************/
#define MCU_START_SEC_APPL_CODE
#include "MemMap.h"
#define MCU_STOP_SEC_APPL_CODE
#include "MemMap.h"
#endif  /* MCU_CBK_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
