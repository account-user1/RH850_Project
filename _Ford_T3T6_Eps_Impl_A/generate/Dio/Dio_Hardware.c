/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Dio_Hardware.c                                              */
/* $Revision: 419164 $                                                        */
/* $Date: 2017-06-12 19:27:49 +0530 (Mon, 12 Jun 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Dio Hardware related Configurations                     */
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
 * V1.0.0: 30-Jul-2015 : Initial Version.
 *
 * V1.0.1: 07-Mar-2016 : 1. As per JIRA ARDAAAF-12, memory alignment changed
 *                          for Dio_BaseAddress
 *                       2. Copyright Information is updated.
 *
 * V1.0.2: 20-Feb-2017 : 1. As per ARDAAAF-768,Added Justifications for
 *                          (2:3211),(4:0310) and (2:0862).
 *                       2. As per JIRA ARDAAAF-1253,Added Global variables
 *                          a. Removed Dio_BaseAddress.
 *                          b. Added Global variables Normalport_Address and
 *                             JPort_Registers to access Base addresses of
 *                             DIO controllers.
 *
 * V1.0.3: 02-May-2017 : As per ARDAAAF-2049, PREFIX and INITPOLICY of
 *                       memory sections are changed.
 *
 * V1.0.4: 16-Jun-2017 : As per ARDAAAF-2475,
 *                       a. Updated the QAC justification message
 *                          for Msg(2:3211).
 *                       b. Corrected the alignment in revision history
 *                          banner.
 */
/******************************************************************************/
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Dio_Hardware.h"
/******************************************************************************/
/*******************************************************************************
**                       MISRA Violation                                     **
*******************************************************************************/
/******************************************************************************/
/* 1. MISRA Violation:                                                        */
/* Message       : Msg(4:0310) Casting to different object pointer type.      */
/* Rule          : NA                                                         */
/*                 REFERENCE - ISO-6.3.4 Cast Operators                       */
/* Justification : DMA structure base address are Passing through DMACTL,     */
/*                 Since it is Typecast                                       */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0310)-1 and                           */
/*                 END Msg(4:0310)-1 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                       QAC WARNINGS                                        **
*******************************************************************************/
/******************************************************************************/
/* 1. QAC WARNINGS:                                                           */
/* Message       : (2:3211) The global identifier is defined here but is not  */
/*                 used in this translation unit.                             */
/* Rule          : NA                                                         */
/* Justification : The Global identifiers defined in this translation unit    */
/*                 are used in the Dio_PBcfg.c file.                          */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3211)-1 and                           */
/*                 END Msg(2:3211)-1 tags in the code.                        */
/******************************************************************************/
/******************************************************************************/
/* 3. QAC WARNINGS:                                                           */
/* Message        (2:0862)  "MemMap.h" directive is redundant.                */
/* Rule          : NA                                                         */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files within the code is a MISRA violation. */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:0862)-3 and                           */
/*                 END Msg(2:0862)-3 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                      Global Datas                                          **
*******************************************************************************/
/* Global variable definition which holds the base address of DIO
   controllers of P1x-C R7F701373 device */
#define DIO_59_RENESAS_START_SEC_CONST_UNSPECIFIED
/* QAC WARNINGS: START Msg(2:0862)-3 */
#include "MemMap.h"
/* QAC WARNINGS: START Msg(2:3211)-1 */
volatile Port_Registers* const Normalport_Address[REG_ARRAY_SIZE] =
{
   /* END Msg(2:3211)-1  */
   /* MISRA Violation: START Msg(4:0310)-1 */
   (volatile Port_Registers *) &PSR0,
   (volatile Port_Registers *) &PSR1,
   (volatile Port_Registers *) &PSR2,
   (volatile Port_Registers *) &PSR3,
   (volatile Port_Registers *) &PSR4,
   (volatile Port_Registers *) &PSR5,
   (volatile Port_Registers *) &PSR6,
   (volatile Port_Registers *) &PSR7,
   (volatile Port_Registers *) &PSR8,
   (volatile Port_Registers *) &PSR9
   /* END Msg(4:0310)-1  */
};
/* QAC WARNINGS: START Msg(2:3211)-1 */
/* MISRA Violation: START Msg(4:0310)-1 */
volatile JPort_Registers* const JPort_Address = \
                           (volatile JPort_Registers *) &JPSR0;
/* END Msg(2:3211)-1  */
/* END Msg(4:0310)-1  */
#define DIO_59_RENESAS_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
/* END Msg(2:0862)-3  */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

