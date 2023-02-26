/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Mcu_Hardware.c                                              */
/* $Revision: 504011 $                                                        */
/* $Date: 2017-12-22 10:51:05 +0530 (Fri, 22 Dec 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Mcu Register configurations                             */
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
 * V1.0.0:  14-Aug-2015    : Initial Version.
 * V1.0.1:  29-Feb-2016    : As part of P1x-C 4.01.00 release, following changes
 *                           are made:
 *                           1. As per JIRA ID ARDAAAF-444, added support for
 *                              GTM Configurations.
 *                           2. Corrected the Module name in the file banner.
 *                           3. As per JIRA ID ARDAAAF-536, removed the
 *                              Global variable definition of P-Bus guard
 *                              registers.
 * V1.0.2:  22-Nov-2016    : Following changes are made:
 *                           1. As per JIRA ID ARDAAAF-823, structure tag is
 *                              updated.
 *                           2. As per JIRA ID ARDAAAF-477, structure element of
 *                              Clma_BaseAddress (CLMA4) added for all device
 *                              variant except P1M-C device.
 *                           3. As per JIRA ID ARDAAAF-1302, removed all the
 *                              references to CLMA5.
 *                           4. As per JIRA ID ARDAAAF-777, Justification added
 *                              for QAC MISRA violation Msg(4:0310).
 * Ver4.02.00.D_MCU_HF002: 22-Dec-2017 : Related Tickets :
 *                         JIRA #ARDAAAF-3326
 *                       : Modification Info :
 *                         Included P1X_C_Hardware_Defines.h file.
 *                       : Modification Info Ends :
 */
/******************************************************************************/
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Mcu_Hardware.h"
#include "P1X_C_Hardware_Defines.h"
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0310) Casting to different object pointer type.         */
/* Rule          : MISRA-C:2004 Rule 11.4                                     */
/*                 REFERENCE - ISO-6.3.4 Cast Operators                       */
/* Justification : Typecasting is done as per the register size, to access    */
/*                 hardware registers.                                        */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0310)-1 and                           */
/*                 END Msg(4:0310)-1 tags in the code.                        */
/*******************************************************************************
**                         QAC Warnings                                       **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message      : (2:3211) The global identifier is defined                   */
/*                here but is not used in this translation unit.              */
/* Rule         : MISRA-C:2004 Message 3211                                   */
/* Justification: As per AUTOSAR, all global variables extern declaration     */
/*                shall be given in Mcu_Ram.h                                 */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(2:3211)-1 and                            */
/*                END Msg(2:3211)-1 tags in the code.                         */
/******************************************************************************/
/**                         Global Data                                       **
*******************************************************************************/
/* Global variable definition which holds the base addresses of CLMA
  of P1x-C R7F701373 device  */
#define MCU_START_SEC_CONST_32
#include "MemMap.h"
/* QAC Warning: START Msg(2:3211)-1 */
CONSTP2VAR(volatile T_CLMA0, MCU_CONST, MCU_CONFIG_CONST)
                            Clma_BaseAddress[MCU_CLMA_INSTANCES] = \
{
/* END Msg(2:3211)-1 */
/* START Msg(4:0310)-1  */
   (P2VAR(volatile T_CLMA0, AUTOMATIC, MCU_CONFIG_DATA))&CLMA0,
   (P2VAR(volatile T_CLMA0, AUTOMATIC, MCU_CONFIG_DATA))&CLMA1,
   (P2VAR(volatile T_CLMA0, AUTOMATIC, MCU_CONFIG_DATA))&CLMA2,
   (P2VAR(volatile T_CLMA0, AUTOMATIC, MCU_CONFIG_DATA))&CLMA3
/* END Msg(4:0310)-1  */
};
/* Global variable definition which holds the base addresses of ECM */
/* QAC Warning: START Msg(2:3211)-1 */
CONSTP2VAR(volatile T_ECM0, MCU_CONST, MCU_CONFIG_CONST)
                           Ecm0_BaseAddress[MCU_ECM_INSTANCES] = \
{
/* END Msg(2:3211)-1 */
/* START Msg(4:0310)-1  */
   (P2VAR(volatile T_ECM0, AUTOMATIC, MCU_CONFIG_DATA))&ECM0,
   (P2VAR(volatile T_ECM0, AUTOMATIC, MCU_CONFIG_DATA))&ECM1
/* END Msg(4:0310)-1  */
};
/* Global variable definition which holds the base addresses of ECMM */
/* QAC Warning: START Msg(2:3211)-1 */
CONSTP2VAR(volatile T_ECMM0, MCU_CONST, MCU_CONFIG_CONST)
                            Ecmm0_BaseAddress[MCU_ECM_INSTANCES] = \
{
/* END Msg(2:3211)-1 */
/* START Msg(4:0310)-1  */
   (P2VAR(volatile T_ECMM0, AUTOMATIC, MCU_CONFIG_DATA))&ECMM0,
   (P2VAR(volatile T_ECMM0, AUTOMATIC, MCU_CONFIG_DATA))&ECMM1
/* END Msg(4:0310)-1  */
};
/* Global variable definition which holds the base addresses of ECMC */
/* QAC Warning: START Msg(2:3211)-1 */
CONSTP2VAR(volatile T_ECMC0, MCU_CONST, MCU_CONFIG_CONST)
                            Ecmc0_BaseAddress[MCU_ECM_INSTANCES] = \
{
/* END Msg(2:3211)-1 */
/* START Msg(4:0310)-1  */
   (P2VAR(volatile T_ECMC0, AUTOMATIC, MCU_CONFIG_DATA))&ECMC0,
   (P2VAR(volatile T_ECMC0, AUTOMATIC, MCU_CONFIG_DATA))&ECMC1
/* END Msg(4:0310)-1  */
};
#define MCU_STOP_SEC_CONST_32
#include "MemMap.h"
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

