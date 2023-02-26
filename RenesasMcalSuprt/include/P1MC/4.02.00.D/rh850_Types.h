/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* File name    = rh850_Types.h                                               */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2016  Renesas Electronics Corporation                  */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision for platform dependent types                                     */
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
/*              Devices:        X1x                                           */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  03-Aug-2015  : Initial Version
 * V1.0.1:  15-Feb-2016  : As part of P1x-C 4.01.00 release the following
 *                         changes were made:
 *                         1. Copyright information is updated.
 *                         2. Macro definition for supervisor mode(SV) write
 *                            enabled Registers IMR & ICxxx added.
 */
/******************************************************************************/

#ifndef RH850_TYPES_H
#define RH850_TYPES_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/*
 * File version information
 */
#define V850_TYPES_SW_MAJOR_VERSION  4
#define V850_TYPES_SW_MINOR_VERSION  0
#define V850_TYPES_SW_PATCH_VERSION  0

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

typedef unsigned int        uinteger;       /*           0 .. 65535           */

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
/*******************************************************************************
**                      Macro                                                 **
*******************************************************************************/

/*  Macro definition for supervisor mode(SV) write enabled Registers
 *  IMR & ICxxx .
 */
/*******************************************************************************
** Macro Name            : RH850_SV_MODE_ICR_OR
**
** Description           : This Macro performs supervisor mode(SV)
**                         write enabled Register ICxxx register
**                         writing which involves an OR operation.
**
** Input Parameters      : SIZE, ADDR, VAL
**                         SIZE : Register Access Size.
**                         ADDR : Register address.
**                         VAL  : Value to be written to the register.
*******************************************************************************/
#define RH850_SV_MODE_ICR_OR(SIZE, ADDR, VAL) \
                                    (*((volatile uint##SIZE*)(ADDR)) = \
                                    ((*((volatile uint##SIZE*)(ADDR)))|(VAL)))

/*******************************************************************************
** Macro Name            : RH850_SV_MODE_ICR_AND
**
** Description           : This Macro performs supervisor mode(SV)
**                         write enabled Register ICxxx register
**                         writing which involves an AND operation.
**
** Input Parameters      : SIZE, ADDR, VAL
**                         SIZE : Register Access Size.
**                         ADDR : Register address
**                         VAL  : Value to be written to the register.
*******************************************************************************/
#define RH850_SV_MODE_ICR_AND(SIZE, ADDR, VAL) \
                                    (*((volatile uint##SIZE*)(ADDR)) = \
                                    ((*((volatile uint##SIZE*)(ADDR)))&(VAL)))

/*******************************************************************************
** Macro Name            : RH850_SV_MODE_ICR_WRITE_ONLY
**
** Description           : This Macro performs supervisor mode(SV)
**                         write enabled Register ICxxx register
**                         direct writing operation.
**
** Input Parameters      : SIZE, ADDR, VAL
**                         SIZE : Register Access Size.
**                         ADDR : Register address
**                         VAL  : Value to be written to the register.
*******************************************************************************/
#define RH850_SV_MODE_ICR_WRITE_ONLY(SIZE, ADDR, VAL) \
                                 (*((volatile uint##SIZE*)(ADDR)) = \
                                 (VAL))

/*******************************************************************************
** Macro Name            : RH850_SV_MODE_IMR_OR
**
** Description           : This Macro performs supervisor mode(SV)
**                         write enabled Register IMR register
**                         writing which involves an OR operation.
**
** Input Parameters      : SIZE, ADDR, VAL
**                         SIZE : Register Access Size.
**                         ADDR : Register address.
**                         VAL  : Value to be written to the register.
*******************************************************************************/
#define RH850_SV_MODE_IMR_OR(SIZE, ADDR, VAL) \
                                    (*((volatile uint##SIZE*)(ADDR)) = \
                                    ((*((volatile uint##SIZE*)(ADDR)))|(VAL)))

/*******************************************************************************
** Macro Name            : RH850_SV_MODE_IMR_AND
**
** Description           : This Macro performs supervisor mode(SV)
**                         write enabled Register IMR register
**                         writing which involves an AND operation.
**
** Input Parameters      : SIZE, ADDR, VAL
**                         SIZE : Register Access Size.
**                         ADDR : Register address
**                         VAL  : Value to be written to the register.
*******************************************************************************/
#define RH850_SV_MODE_IMR_AND(SIZE, ADDR, VAL) \
                                    (*((volatile uint##SIZE*)(ADDR)) = \
                                    ((*((volatile uint##SIZE*)(ADDR)))&(VAL)))

/*******************************************************************************
** Macro Name            : RH850_SV_MODE_IMR_WRITE_ONLY
**
** Description           : This Macro performs supervisor mode(SV)
**                         write enabled Register IMR register
**                         direct writing operation.
**
** Input Parameters      : SIZE, ADDR, VAL
**                         SIZE : Register Access Size.
**                         ADDR : Register address
**                         VAL  : Value to be written to the register.
*******************************************************************************/
#define RH850_SV_MODE_IMR_WRITE_ONLY(SIZE, ADDR, VAL) \
                                 (*((volatile uint##SIZE*)(ADDR)) = \
                                 (VAL))


#endif /* RH850_TYPES_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
