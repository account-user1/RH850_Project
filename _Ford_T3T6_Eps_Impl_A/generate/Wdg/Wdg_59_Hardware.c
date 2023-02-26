/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Wdg_Hardware.c                                              */
/* $Revision: 330043 $                                                        */
/* $Date: 2016-11-17 12:56:08 +0530 (Thu, 17 Nov 2016) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains P1x-C hardware specific definitions.                    */
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
 * V1.0.0:  07-Aug-2015 : Initial Version
 *
 * V1.0.1:  03-Mar-2016 : As part of V4.01.00 release,
 *                      1.added the support for devices R7F701371 and R7F701374.
 *                      2.As per ticket ARDAAAF-12, renamed the memory section.
 *
 * V1.0.2:  17-Feb-2017 : As per the Jira-ARDAAAF-815, typedef declarations for
 *                        structure is followed as per the coding guidelines.
 *
 */
/******************************************************************************/
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Wdg_59_Hardware.h"
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message      : (2:3211) The global identifier is defined                   */
/*                here but is not used in this translation unit.              */
/* Rule         : No Rule                                                     */
/* Justification: As per AUTOSAR,all global variables with extern declaration */
/*                shall be given in Adc_Ram.h.                                */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for QAC Warning START Msg(2:3211)-1 and                */
/*                END Msg(2:3211)-1 tags in the code.                         */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message       :(2:0862) #include "MemMap.h" directive is redundant.        */
/* Rule          : No Rule                                                    */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files is done within the code.              */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.Also this is not a MISRA violation    */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/
/* Global variable definition which holds the base address of Wdg
   controllers of P1x-C R7F701373 device */
#define WDG_59_DRIVERA_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
/* QAC Warning START Msg(2:3211)-1 */
CONSTP2VAR(volatile T_WDTA0, WDG_59_DRIVERA_CONST,
                                             WDG_59_DRIVERA_CONFIG_CONST)
                                            Wdta_BaseAddress[WDTA_INSTANCES] = \
/* END Msg(2:3211)-1 */
{
   (P2VAR(volatile T_WDTA0, AUTOMATIC, WDG_CONFIG_DATA))&WDTA0
};
#define WDG_59_DRIVERA_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

