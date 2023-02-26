/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Port_Hardware.h                                             */
/* $Revision: 396221 $                                                        */
/* $Date: 2017-04-21 12:12:41 +0530 (Fri, 21 Apr 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
 /* Copyright(c) 2015 - 2017  Renesas Electronics Corporation                 */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Port pre-compile time configurations                    */
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
 * V1.0.1:  27-Jan-2017   : Following changes were done:
 *                          1.As per the Jira-ARDAAAF-817,
 *                          a)extern volatile T_FCLA0* const Fcla_BaseAddress[]
 *                          has been changed to
 *                          extern CONSTP2VAR(volatile T_FCLA0, PORT_CONST,
 *                          PORT_CONFIG_CONST) Fcla_BaseAddress[NUMBEROF_FCLA].
 *                          b)extern volatile T_DNFA2* const Dnfa_BaseAddress[]
 *                          has been changed to
 *                          extern CONSTP2VAR(volatile T_DNFA2, PORT_CONST,
 *                          PORT_CONFIG_CONST) Dnfa_BaseAddress[NUMBEROF_DNFA].
 *                          2.As per the ARDAAAF-771, the macro NUMBEROF_FCLA,
 *                          and NUMBEROF_DNFA added to fix QAC warnings.
 *                          3.As per ARDAAAF-1459, unit design ID, proper
 *                          comments and requirement tags are added at
 *                          applicable places.
 *                          4.Copyright information is updated.
 * V1.0.2:  24-Apr-2017   : 1. As per th1e Jira-ARDAAAF-2057,
 *                          PREFIX and INITPOLICY of memory sections are
 *                          modified.
 */
/******************************************************************************/
#ifndef PORT_HARDWARE_H
#define PORT_HARDWARE_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "P1X_C_Hardware.h"
#include "Compiler.h"
/* Total number of Port Groups configured by P1x-C R7F701373 device */
#define NUMBEROF_PORT          9U
#define NUMBEROF_FCLA          7U
#define NUMBEROF_DNFA          6U
/*Implements AR_PN0062_FR_0079*/
#define PORT_DEVICE_VARIANT R7F701373
/* DNFA offset for the R7F701373 */
#define PORT_DNFA_OFFSET (uint8)2
#define PORT_59_RENESAS_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
extern CONSTP2VAR(volatile T_FCLA0, PORT_CONST, PORT_CONFIG_CONST)
                                              Fcla_BaseAddress[NUMBEROF_FCLA];
extern CONSTP2VAR(volatile T_DNFA2, PORT_CONST, PORT_CONFIG_CONST)
                                              Dnfa_BaseAddress[NUMBEROF_DNFA];
#define PORT_59_RENESAS_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
#endif  /* PORT_HARDWARE_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

