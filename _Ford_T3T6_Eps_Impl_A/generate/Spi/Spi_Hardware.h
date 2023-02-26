/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi                                                         */
/* $Revision: 332107 $                                                        */
/* $Date: 2016-11-21 19:43:27 +0530 (Mon, 21 Nov 2016) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015   Renesas Electronics Corporation                        */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Spi Register configurations                             */
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
 * V1.0.1:  30-May-2016    : As part of ARDAAAF-824 structure tag is updated.
 * V1.0.2:  14-Nov-2016    : Following changes were made:
 *                           1. As part of ARDAAAF-947, global variable
 *                              declaration for structure tag Ecc_BaseAddress is
 *                              added.
 */
/******************************************************************************/
#ifndef SPI_HARDWARE_H
#define SPI_HARDWARE_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "P1X_C_Hardware.h"
#include "Compiler.h"
/*******************************************************************************
**                      Defines                                               **
*******************************************************************************/
/* Total number of SPI hardware units supported by
   P1x-C R7F701373 device */
#define CSIH_INSTANCES              4U
#define SPI_DEVICE_VARIANT          R7F701373
#define SPI_START_SEC_CONST_32
#include "MemMap.h"
/* Global variable declaration which holds the base address of SPI
   controllers of P1x-C R7F701373 device */
extern CONSTP2VAR(volatile T_CSIH0, SPI_CONST, SPI_CONFIG_CONST)
                 Csih_BaseAddress[CSIH_INSTANCES];
/* Ecc_BaseAddress */
extern CONSTP2VAR(volatile T_ECCCSIH, SPI_CONST, SPI_CONFIG_CONST)
                            Ecc_BaseAddress[CSIH_INSTANCES];
#define SPI_STOP_SEC_CONST_32
#include "MemMap.h"
#endif  /* SPI_HARDWARE_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

