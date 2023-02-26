/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Port_Hardware.c                                             */
/* $Revision: 394589 $                                                        */
/* $Date: 2017-04-18 17:41:06 +0530 (Tue, 18 Apr 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Port Hardware  abstraction                              */
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
 *                          1) As per the Jira-ARDAAAF-817,
 *                          a)volatile struct ST_FCLA0* const Fcla_BaseAddress[]
 *                          has been changed to
 *                          CONSTP2VAR(volatile T_FCLA0, PORT_CONST,
 *                          PORT_CONFIG_CONST) Fcla_BaseAddress[NUMBEROF_FCLA].
 *                          b)volatile struct ST_DNFA2* const Dnfa_BaseAddress[]
 *                          has been changed to
 *                          CONSTP2VAR(volatile T_DNFA2, PORT_CONST,
 *                          PORT_CONFIG_CONST) Dnfa_BaseAddress[NUMBEROF_DNFA].
 *                          c)volatile struct Port_Registers* const
 *                          Port_HardwareReg[] is changed to
 *                          CONSTP2VAR(volatile Port_Registers,PORT_CONST,
 *                          PORT_CONFIG_CONST) Port_HardwareReg[NUMBEROF_PORT].
 *                          d)volatile struct JPort_Registers* const
 *                          Port_HardwareReg[] is changed to
 *                          CONSTP2VAR(volatile JPort_Registers,PORT_CONST,
 *                          PORT_CONFIG_CONST) JPort_HardwareReg.
 *                          2) As per the ARDAAAF-771, justification added for
 *                          QAC Warnings and MISRA violations at applicable
 *                          places.
 *                          3) Copyright information is updated.
 * V1.0.2:  27-Mar-2017   : 1) As per the Jira-ARDAAAF-2057,
 *                          PREFIX and INITPOLICY of memory sections are
 *                          modified
 */
/******************************************************************************/
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Port_Hardware.h"
#include "Port_PBTypes.h"
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : Msg(4:0310) Casting to different object pointer type.      */
/* Rule          : MISRA-C:2004                                               */
/*                 REFERENCE - ISO-6.3.4 Cast Operators                       */
/* Justification : DMA structure base address are Passing through DMACTL,     */
/*                 Since It is Typecast                                       */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for MISRA Violation : START Msg(4:0310)-1 and         */
/*                 MISRA Violation : END Msg(4:0310)-1 tags in the code.      */
/******************************************************************************/
/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       : (3:3305) Pointer cast to stricter alignment.               */
/* Rule          : NA                                                         */
/* Justification : This is to access the hardware registers in the code.      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning : START Msg(3:3305)-1 and             */
/*                 QAC Warning : END Msg(3:3305)-1 tags in the code.          */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message      : (2:3211) The global identifier 'Port_GpConfigPtr' is defined*/
/*                here but is not used in this translation unit.              */
/* Rule         : NA                                                          */
/* Justification: As per AUTOSAR, all global variables extern declaration     */
/*                shall be given in Port_Ram.c                                */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for QAC Warning : START Msg(2:3211)-2 and              */
/*                QAC Warning : END Msg (2:3211)-2 tags in the code.          */
/******************************************************************************/
/* 3. QAC Warning:                                                            */
/* Message       :(2:0862) / "MemMap.h" directive is redundant.       */
/* Rule          : NA                                                         */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files within the code is a MISRA violation. */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/
/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/
#define PORT_59_RENESAS_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
/*
* The following array indicates the base addresses of FCLA Filter
* Structure of P1x-C R7F701373 device
*/
/* QAC Warning : START Msg(2:3211)-2 */
CONSTP2VAR(volatile T_FCLA0, PORT_CONST, PORT_CONFIG_CONST)
                                            Fcla_BaseAddress[NUMBEROF_FCLA] =
/* QAC Warning : END Msg(2:3211)-2 */
{
  /* MISRA Violation : START Msg(4:0310)-1 */
  (volatile T_FCLA0*) &FCLA0,
  (volatile T_FCLA0*) &FCLA1,
  (volatile T_FCLA0*) &FCLA2,
  (volatile T_FCLA0*) &FCLA3,
  (volatile T_FCLA0*) &FCLA4,
  (volatile T_FCLA0*) &FCLA5,
  (volatile T_FCLA0*) &FCLA6
  /* MISRA Violation : END Msg(4:0310)-1 */
};
/*
* The following array indicates the base addresses of DNFA Filter
* Structure of P1x-C R7F701373 device
*/
/* QAC Warning : START Msg(2:3211)-2 */
CONSTP2VAR(volatile T_DNFA2, PORT_CONST, PORT_CONFIG_CONST)
                                            Dnfa_BaseAddress[NUMBEROF_DNFA] =
/* QAC Warning : END Msg(2:3211)-2 */
{
  /* MISRA Violation : START Msg(4:0310)-1 */
  (volatile T_DNFA2*) &DNFA2,
  (volatile T_DNFA2*) &DNFA3,
  (volatile T_DNFA2*) &DNFA4,
  (volatile T_DNFA2*) &DNFA5,
  (volatile T_DNFA2*) &DNFA6,
  (volatile T_DNFA2*) &DNFA7
  /* MISRA Violation : END Msg(4:0310)-1 */
};
/*
* Array that contains base address of Numeric Port Groups Configured of
* P1x-C R7F701373 device
*/
/* QAC Warning : START Msg(2:3211)-2 */
CONSTP2VAR(volatile Port_Registers, PORT_CONST, PORT_CONFIG_CONST)
                                            Port_HardwareReg[NUMBEROF_PORT] =
/* QAC Warning : END Msg(2:3211)-2 */
{
  /* QAC Warning : START Msg(3:3305)-1 */
  /* MISRA Violation : START Msg(4:0310)-1 */
  (volatile Port_Registers *) &P0,
  (volatile Port_Registers *) &P1,
  (volatile Port_Registers *) &P2,
  (volatile Port_Registers *) &P3,
  (volatile Port_Registers *) &P4,
  (volatile Port_Registers *) &P5,
  (volatile Port_Registers *) &P6,
  (volatile Port_Registers *) &P7,
  (volatile Port_Registers *) &P9
    /* MISRA Violation : END Msg(4:0310)-1 */
  /* QAC Warning : END Msg(3:3305)-1 */
};
/*
* Variable that contain base address of JTAG Port Group Configured of
* P1x-C R7F701373 device
*/
/* QAC Warning : START Msg(3:3305)-1 */
/* QAC Warning : START Msg(2:3211)-2 */
/* MISRA Violation : START Msg(4:0310)-1 */
CONSTP2VAR(volatile JPort_Registers, PORT_CONST, PORT_CONFIG_CONST)
                     JPort_HardwareReg = (volatile JPort_Registers *) &JP0;
/* MISRA Violation : END Msg(4:0310)-1 */
/* QAC Warning : END Msg(2:3211)-2 */
/* QAC Warning : END Msg(3:3305)-1 */
#define PORT_59_RENESAS_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

