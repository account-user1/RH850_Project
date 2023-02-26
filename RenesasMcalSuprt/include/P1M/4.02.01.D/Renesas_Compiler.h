/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : Renesas_Compiler.h
* Module Description: Renesas Extensions to Compiler.h.  Since the Nexteer has multiple vendors currently providing a 
*                     Compiler.h file, the current strategy is to include any Renesas specific Compiler.h content in this 
*                     file and include this file in the main Compiler.h delivered by the BSW vendor.  This minimizes the
*                     changes in the BSW vendor file to a single include and separates the Renesas specific content into this file. 
*                     This file should therefore only contain the content for the Renesas Compiler.h delivered file that does
*                     not already exist in the BSW vendor Compiler.h.
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 12/08/16  1        LWW       Initial Version derived from MCAL Compiler.h found in tools directory           EA4#8768                                                               
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef RENESAS_COMPILER_H
#define RENESAS_COMPILER_H

#include <v800_ghs.h> /* for LDSR, STSR intrinsics */

/**********************************************************************************************************************

The following macro definitions are already defined in the BSW vendor Compiler.h and therefore are excluded from this file:

INLINE
_GREENHILLS_C_RH850_
NULL_PTR
AUTOMATIC
TYPEDEF
P2FUNC
FUNC
P2CONST
P2VAR
CONSTP2VAR
CONSTP2CONST
CONST
VAR

**********************************************************************************************************************/

/********* Start content directly taken from Renesas MCAL delivered Compiler.h *********/
#define STATIC  static
#define _INTERRUPT_  __interrupt

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

/* LDSR and STSR intrinsic function definitions are defined in <v800_ghs.h> file */

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

/********* End content directly taken from Renesas MCAL delivered Compiler.h *********/

/**************************************** End Of Multiple Include Protection *****************************************/
#endif /* RENESAS_COMPILER_H */
