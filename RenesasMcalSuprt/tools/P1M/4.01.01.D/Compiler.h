/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* File name    = Compiler.h                                                  */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2012-2016 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision for compiler macros                                              */
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
 * V1.0.0:  03-Sep-2012  : Initial Version
 *
 * V1.0.1:  07-Aug-2013  : As per SCR 225,
 *                         1. ENABLE_INTERRUPT and DISABLE_INTERRUPT is added.
 *                         2. As per mantis #12884 platform name for macro
 *                            _GREENHILLS_C_V850_ is updated to
 *                            _GREENHILLS_C_RH850_
 *                         3. Copyright and Device name are updated
 *                            as part of merge activity.
 *
 * V1.0.2:  20-Jun-2014  : As per CR 532 for mantis issue #16991, following
 *                         changes are made:
 *                         1. Added EXECUTE_SYNCP macro for "syncp" command.
 *                         2. Copyright information is updated.
 *
 * V1.0.3:  04-Feb-2015  : As per #26024, for merging activity following
 *                         changes are made:
 *                         1. MCU_FENMI_ENTRY & MCU_FENMI_LEAVE asm APIs are
 *                            added for proper returning of FE level interrupts.
 *                         2. Macro definitions of PRAGMA(x), NO_PROLOGUE &
 *                            __HAS_FPU__ are added.
 *
 * V1.0.4:  18-Dec-2015  : As part of P1x V4.00.05 release, following changes
 *                         are made:
 *                         1. Added EXECUTE_SYNCI macro for "synci" command.
 *                         2. Added __LDSR and __STSR function defines.
 *                         3. As per ARDAAAE-1562, updated MCU_FENMI_ENTRY and
 *                             MCU_FENMI_LEAVE.
 * V1.0.5:  25-Feb-2016  : As part of P1x V4.01.00 release, following changes
 *                         are made:
 *                         1. As per the ticket ARDAAAE-1158, the macro
 *                            NO_PROLOGUE is removed.
 *                         2. Updated CopyRight information.
 */
/******************************************************************************/

#ifndef COMPILER_H
#define COMPILER_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

#include "Compiler_Cfg.h"    /* Module specific memory and pointer */
                                  /* classes    */

/*******************************************************************************
**                      Version Information                                  **
*******************************************************************************/
/* AUTOSAR specification release version information for R4.0.3 */
#define COMPILER_AR_RELEASE_MAJOR_VERSION  4
#define COMPILER_AR_RELEASE_MINOR_VERSION  0
#define COMPILER_AR_RELEASE_REVISION_VERSION  3

/* AUTOSAR specification version information as per R3.2.2 */
#define COMPILER_AR_MAJOR_VERSION  2
#define COMPILER_AR_MINOR_VERSION  2
#define COMPILER_AR_PATCH_VERSION  0
#define COMPILER_SW_MAJOR_VERSION  1
#define COMPILER_SW_MINOR_VERSION  0
#define COMPILER_SW_PATCH_VERSION  0

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*
 * Compiler abstraction symbols
 */

#define INLINE  inline
#define STATIC  static
#define _INTERRUPT_  __interrupt

#ifndef _GREENHILLS_C_RH850_
  #define _GREENHILLS_C_RH850_
#endif

#ifndef NULL_PTR
  #define NULL_PTR  ((void *)0)
#endif

/* AUTOMATIC used for the declaration of local pointers */
#define AUTOMATIC

/* TYPEDEF used for defining pointer types within type definitions */
#define TYPEDEF

/* Type definition of pointers to functions
   rettype     return type of the function
   ptrclass    defines the classification of the pointer's distance
   fctname     function name respectively name of the defined type
 */
#define P2FUNC(rettype, ptrclass, fctname) rettype (*fctname)

/* The compiler abstraction shall define the FUNC macro for the declaration and
   definition of functions, that ensures correct syntax of function
   declarations as required by a specific compiler. - used for API functions
   rettype     return type of the function
   memclass    classification of the function itself
 */
#define FUNC(type, memclass) memclass type

/* Pointer to constant data
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
#define P2CONST(ptrtype, memclass, ptrclass)  const ptrtype *

/* Pointer to variable data
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
#define P2VAR(ptrtype, memclass, ptrclass) ptrtype *

/* Const pointer to variable data
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
#define CONSTP2VAR(ptrtype, memclass, ptrclass) ptrtype * const

/* Const pointer to constant data
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
#define CONSTP2CONST(ptrtype, memclass, ptrclass) const ptrtype * const

/* ROM constant
   type        type of the constant
   memclass    classification of the constant
 */
#define CONST(type, memclass) const type

/* RAM variables
   type        type of the variable
   memclass    classification of the variable
 */
#define VAR(type, memclass) type

/* Inline assembler support for HALT instruction */
#define ASM_HALT() __asm("halt")

/* Inline assembler support for NOP instruction */
#define ASM_NOP() __asm("nop")

/* Inline assembler support for SYNCI instruction */
#define EXECUTE_SYNCI() __asm("synci")

#define ENABLE_INTERRUPT()        __asm("ei")
#define DISABLE_INTERRUPT()       __asm("di")

/* Inline assembler support for syncp instruction */
#define EXECUTE_SYNCP()           __asm("syncp")

/* Utilize the GHS specific intrinsic functions for accessing the cpu system
registers */
#define LDSR                           __LDSR

#define STSR                           __STSR

void __LDSR(int regID, int selID, unsigned int val);

unsigned int __STSR(int regID, int selID);

#define __HAS_FPU__

asm void MCU_FENMI_ENTRY( void)
{
  pushsp  lp-lp
  pushsp  r1-r2
#if (__V800_registermode==32)
  pushsp  r5-r31
#endif
#if (__V800_registermode==26)
  pushsp  r5-r16     -- r17 to r22 are reserved for user
  pushsp  r23-r31
#endif
#if (__V800_registermode==22)
  pushsp  r5-r14     -- r15 to r24 are reserved for user
  pushsp  r25-r31
#endif
  pushsp  ep-ep
  /* stsr  FEIC,  r6,  0      -- FEIC
     stsr  FEPSW, r7,  0      -- FEPSW
     stsr  FEPC,  r8,  0      -- FEPC */
     stsr  FEIC,  r20,  0      -- FEIC
     stsr  FEPSW, r21,  0      -- FEPSW
     stsr  FEPC,  r22,  0      -- FEPC
#ifndef __V800_ignore_callt_state_in_interrupts__
  stsr  CTPSW, r9,  0      -- CTPSW
  stsr  CTPC,  r10, 0      -- CTPC
 #ifdef __HAS_FPU__
  stsr  FPSR,  r11, 0      -- FPSR
  stsr  FPEPC, r12, 0      -- FPEPC
  pushsp  r6-r12             -- FPU and CALLT to save
 #else
  pushsp  r6-r10             -- CALLT to save
 #endif  /* __HAS_FPU__ */

#else  /* do not save callt control registers */
 #ifdef __HAS_FPU__
  /* stsr  FPSR,  r9, 0      -- FPSR
     stsr  FPEPC, r10, 0     -- FPEPC */
     stsr  FPSR,  r23, 0      -- FPSR
     stsr  FPEPC, r24, 0     -- FPEPC */
 #else
  pushsp  r6-r8             -- no FPU and no CALLT
 #endif  /* __HAS_FPU__ */
#endif

}

asm void MCU_FENMI_LEAVE( void)
{
#ifndef __V800_ignore_callt_state_in_interrupts__
 #ifdef __HAS_FPU__
  popsp  r6-r12
  ldsr  r12, FPEPC, 0      -- FPEPC
  ldsr  r11, FPSR,  0      -- FPSR
  ldsr  r10, CTPC,  0      -- CTPC
  ldsr  r9,  CTPSW, 0      -- CTPSW
 #else
  popsp  r6-r10
  ldsr  r10, CTPC,  0      -- CTPC
  ldsr  r9,  CTPSW, 0      -- CTPSW
 #endif  /* __HAS_FPU__ */

#else  /* do not restore callt control registers */
 #ifdef __HAS_FPU__
  /* ldsr  r10, FPEPC, 0      -- FPEPC
     ldsr  r9, FPSR,  0       -- FPSR */
     ldsr  r24, FPEPC, 0      -- FPEPC
     ldsr  r23, FPSR,  0       -- FPSR
 #else
  popsp  r6-r8
 #endif  /* __HAS_FPU__ */
#endif
  /* ldsr  r8,  FEPC,  0      -- FEPC
     ldsr  r7,  FEPSW, 0      -- FEPSW
     ldsr  r6,  FEIC, 0       -- FEIC */
     ldsr  r22,  FEPC,  0      -- FEPC
     ldsr  r21,  FEPSW, 0      -- FEPSW
     ldsr  r20,  FEIC, 0       -- FEIC
  popsp  ep-ep
#if (__V800_registermode==32)
  popsp  r5-r31
#endif
#if (__V800_registermode==26)
  popsp  r23-r31       -- r17 to r22 are reserved for user
  popsp  r5-r16
#endif
#if (__V800_registermode==22)
  popsp  r25-r31       -- r15 to r24 are reserved for user
  popsp  r5-r14
#endif
  popsp  r1-r2
  popsp  lp-lp
    feret
}
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#endif /* COMPILER_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
