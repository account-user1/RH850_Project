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
 *                           1. As part of ARDAAAF-947,structure tag for
 *                              Ecc_BaseAddress is added.
 *                           2. As part of ARDAAAF-778,QAC Warning START
 *                              and END Msgs for Msg(2:3211) is added at
 *                              respective places.
 */
/******************************************************************************/
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Spi_Hardware.h"
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
/******************************************************************************/
/**                         QAC Warnings                                     **/
/******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       : (2:5087) #include statements in a file should only be      */
/*                 preceded by other preprocessor directives or comments.     */
/* Rule          : MISRA-C:2004 Rule 19.1                                     */
/* Justification : This is done as per AUTOSAR Memory Mapping Requirement     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:5087)-1 and                           */
/*                 END Msg(2:5087)-1 tags in the code.                        */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message      : (2:3211) The global identifier is defined here but is not   */
/*                 used in this translation unit.                             */
/* Rule         : NA                                                          */
/* Justification: As per AUTOSAR, all global variables extern declaration     */
/*                shall be given in header file.                              */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(2:3211)-2 and                            */
/*                END Msg(2:3211)-2 tags in the code.                         */
/******************************************************************************/
/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/
/* Global variable definition which holds the base address of Spi
   controllers of P1x-C R7F701373 device */
#define SPI_START_SEC_CONST_32
#include "MemMap.h"
/* QAC Warning: START Msg(2:3211)-2 */
CONSTP2VAR(volatile T_CSIH0, SPI_CONST, SPI_CONFIG_CONST)
                            Csih_BaseAddress[CSIH_INSTANCES] = \
/* END Msg(2:3211)-2 */
{
  /* MISRA Violation: START Msg(4:0310)-1 */
  (P2VAR(volatile T_CSIH0, AUTOMATIC, SPI_CONFIG_DATA))&CSIH0,
  (P2VAR(volatile T_CSIH0, AUTOMATIC, SPI_CONFIG_DATA))&CSIH1,
  (P2VAR(volatile T_CSIH0, AUTOMATIC, SPI_CONFIG_DATA))&CSIH2,
  (P2VAR(volatile T_CSIH0, AUTOMATIC, SPI_CONFIG_DATA))&CSIH3
  /* END Msg(4:0310)-1 */
};
/* Initialize Ecc_BaseAddress */
/* QAC Warning: START Msg(2:3211)-2 */
CONSTP2VAR(volatile T_ECCCSIH, SPI_CONST, SPI_CONFIG_CONST)
                            Ecc_BaseAddress[CSIH_INSTANCES] = \
/* END Msg(2:3211)-2 */
{
  (P2VAR(volatile T_ECCCSIH, AUTOMATIC, SPI_CONFIG_DATA))&ECCCSIH0,
  (P2VAR(volatile T_ECCCSIH, AUTOMATIC, SPI_CONFIG_DATA))&ECCCSIH1,
  (P2VAR(volatile T_ECCCSIH, AUTOMATIC, SPI_CONFIG_DATA))&ECCCSIH2,
  (P2VAR(volatile T_ECCCSIH, AUTOMATIC, SPI_CONFIG_DATA))&ECCCSIH3
};
#define SPI_STOP_SEC_CONST_32
 /* QAC Warning: START Msg(2:5087)-1 */
#include "MemMap.h"
 /* END Msg(2:5087)-1 */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

