/***********************************************************************************************************************
 *  COPYRIGHT
 *  --------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  --------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/**
 *  \addtogroup Os_Hal_Entry
 *  \{
 *
 *  \file       Os_Hal_Entry.c
 *  \brief      This component handles hardware exceptions and interrupts.
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

                                                                                                                        /* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_HAL_ENTRY_SOURCE

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_Entry.h"

/* Os module dependencies */
#include "Os_Cfg.h"

/* Os HAL dependencies */
#include "Os_Hal_Core_Cfg.h"
#include "Os_Hal_Compiler.h"

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

#define OS_START_SEC_CODE
#include "Os_MemMap_OsCode.h"                                                                                           /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Os_Irq_Isr()
 **********************************************************************************************************************/
/*! \fn         void Os_Irq_Isr()
 *  \brief      This handler is triggered, if a configured category 2 interrupt occurs.
 *  \details    This handler shall save a minimal set of registers, to be able to call a C-Function and restore
 *              the previous state afterwards. The rest is performed by the kernel's Os_IsrRun() function.
 *
 *              This handler typically has to save the following information:
 *              - Scratch Registers
 *              - Previous Program Counter
 *              - Previous Link Register
 *              - Previous Interrupt Level
 *
 *              The kernel expects Os_IsrRun() to be called on the interrupted stack.
 *              All handlers of this type shall have the following naming convention: Os_Irq_Isr_<Specific-Suffix>.
 *              The <Specific-Suffix> can be either the interrupt vector number or the interrupt source name.
 *              The kernel expects that Os_IsrRun() is executed on the interrupt priority level of the associated ISR2.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          Supervisor mode.
 *  \pre          Interrupts disabled.
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
  Os_Hal_SECTION(".OS_CODE");                                                                                           /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ALIGN("4");                                                                                                    /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_LABEL("Os_Irq_Isr");                                                                                           /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #10 Store interrupted context to stack. */
  Os_Hal_ASM("  pushsp  r30-r31");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  stsr    EIPC,  r11");                                                                                   /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  stsr    EIPSW, r12");                                                                                   /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  pushsp  r11-r12");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
#if (OS_HAL_RH850_FPU == STD_ON)
  Os_Hal_ASM("  stsr    FPSR,  r11");                                                                                   /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  stsr    FPEPC, r12");                                                                                   /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  pushsp  r11-r12");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
#endif
  /* #20 Enter Os Isr handler */
  Os_Hal_ASM("  jarl    _Os_IsrRun, lp");                                                                               /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #30 Enter Isr epilogue */
  Os_Hal_ASM("  trap    17");                                                                                           /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

  Os_Hal_SECTION(".OS_CODE");                                                                                           /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ALIGN("4");                                                                                                    /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_LABEL("Os_Hal_IsrEpilogue");                                                                                   /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #40 Restore interrupted context. */
#if (OS_HAL_RH850_FPU == STD_ON)
  Os_Hal_ASM("  popsp   r11-r12");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr    r11, FPSR");                                                                                    /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr    r12, FPEPC");                                                                                   /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
#endif
  Os_Hal_ASM("  popsp   r11-r12");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr    r11, EIPC");                                                                                    /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr    r12, EIPSW");                                                                                   /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  popsp   r30-r31");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  popsp   r4-r19");                                                                                       /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  popsp   r1-r2");                                                                                        /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #50 Return to interrupted context. */
  Os_Hal_ASM("  eiret");                                                                                                /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

/***********************************************************************************************************************
 *  Os_Irq_Isr1()
 **********************************************************************************************************************/
/*! \fn       void Os_Irq_Isr1()
 *  \brief    This handler is triggered, if a configured category 1 interrupt occurs.
 *  \details  It shall call the user's given function. The implementer has to add a Isr specific suffix
 *            to the function's name.
 *            Consider: Depending on the architecture, the source may be either an external interrupt or an exception.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          Supervisor mode.
 *  \pre          Interrupts disabled.
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Os_Irq_Unhandled()
 **********************************************************************************************************************/
/*! \fn       void Os_Irq_Unhandled()
 *  \brief    This handler is triggered, if an interrupt occurs, which is not configured.
 *  \details  It shall call the kernel's Os_UnhandledIrq() function. Os_UnhandledIrq() expects the exception
 *            source number to be passed.
 *            Os_MemFault() shall be called with all interrupts, and timing protection are disabled.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          Supervisor mode.
 *  \pre          Interrupts disabled.
 *
 *  \trace          CREQ-24
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 */
  Os_Hal_SECTION(".OS_CODE");                                                                                           /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ALIGN("4");                                                                                                    /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_LABEL("Os_Hal_UnhandledIrq");                                                                                  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #10 Synchronize pipeline on exception entry. */
  Os_Hal_ASM("  syncp");                                                                                                /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #20 Disable FE level  interrupts. */
  Os_Hal_ASM("  mov   0x000180A0, r11");                                                                                /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, PSW");                                                                                       /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #30 Store the exception in the first parameter of the next function call. */
  Os_Hal_ASM("  stsr  EIIC, r6");                                                                                       /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  andi  0x01FF, r6, r6");                                                                                 /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #40 Get the core id. */
  Os_Hal_ASM("  stsr  0, r11, 2");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  shr   17, r11");                                                                                        /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  shl   3, r11");                                                                                         /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #50 Switch to kernel stack and reprogram stack window. */
  Os_Hal_ASM("  mov   _OsCfg_Stack_KernelStacks, r12");                                                                 /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  add   r11, r12");                                                                                       /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ld.w  0[r12], r12");                                                                                    /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ld.w  0[r12], r11");                                                                                    /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, MPLA0");                                                                                     /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ld.w  4[r12], SP");                                                                                     /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  SP, MPUA0");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #60 Store the program counter of the interrupted context in CTPC. */
  Os_Hal_ASM("  stsr  EIPC, r11");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, CTPC");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #70 call Os_UnhandledIrq in privileged mode with interrupts disabled.*/
  Os_Hal_ASM("  mov   _Os_UnhandledIrq, r11");                                                                          /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, EIPC");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  mov   0x000180A0, r11");                                                                                /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, EIPSW");                                                                                     /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  eiret");                                                                                                /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

/***********************************************************************************************************************
 *  Os_Exc_SysCall()
 **********************************************************************************************************************/
/*! \fn       void Os_Exc_SysCall()
 *  \brief    This handler is triggered, if a system call is executed.
 *  \details  This happens if the kernel needs privileged access. This handler shall bypass all parameters to the
 *            kernel's trap handler (Os_TrapHandler()).
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          Supervisor mode.
 *  \pre          Interrupts disabled.
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 */
  Os_Hal_SECTION(".OS_CODE");                                                                                           /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ALIGN("4");                                                                                                    /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_LABEL("Os_Hal_UnhandledSysCall");                                                                              /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #10 Synchronize pipeline on exception entry. */
  Os_Hal_ASM("  syncp");                                                                                                /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #20 Disable FE level interrupts. */
  Os_Hal_ASM("  mov   0x000180A0, r11");                                                                                /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, PSW");                                                                                       /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #30 Store the exception in the first parameter of the next function call. */
  Os_Hal_ASM("  stsr  EIIC, r6");                                                                                       /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  andi  0x00FF, r6, r6");                                                                                 /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #40 Get the core id. */
  Os_Hal_ASM("  stsr  0, r11, 2");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  shr   17, r11");                                                                                        /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  shl   3, r11");                                                                                         /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #50 Switch to kernel stack and reprogram stack window. */
  Os_Hal_ASM("  mov   _OsCfg_Stack_KernelStacks, r12");                                                                 /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  add   r11, r12");                                                                                       /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ld.w  0[r12], r12");                                                                                    /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ld.w  0[r12], r11");                                                                                    /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, MPLA0");                                                                                     /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ld.w  4[r12], SP");                                                                                     /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  SP, MPUA0");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #60 Store the program counter of the interrupted context in CTPC. */
  Os_Hal_ASM("  stsr  EIPC, r11");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, CTPC");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #70 Call Os_UnhandledSysCall in privileged mode with interrupts disabled.*/
  Os_Hal_ASM("  mov   _Os_UnhandledSysCall, r11");                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, EIPC");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  mov   0x000180A0, r11");                                                                                /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, EIPSW");                                                                                     /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  eiret");                                                                                                /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

/***********************************************************************************************************************
 *  Os_Exc_MemProt()
 **********************************************************************************************************************/
/*! \fn         void Os_Exc_MemProt()
 *  \brief      This handler is triggered, if a memory fault is detected.
 *  \details    In this handler it is not safe to use the current stack pointer any longer, because the memory fault
 *              may be a result of an invalid stack pointer. For this reason the handler has to switch to the kernel
 *              stack before using any stack. Scratch registers are allowed to be destroyed here, because this function
 *              never returns.
 *
 *              The handler shall call the kernel's Os_MemFault() function.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          Supervisor mode.
 *  \pre          Interrupts disabled.
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
  Os_Hal_SECTION(".OS_CODE");                                                                                           /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ALIGN("4");                                                                                                    /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_LABEL("Os_Hal_MemFaultExc");                                                                                   /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #10 Synchronize pipeline on exception entry. */
  Os_Hal_ASM("  syncp");                                                                                                /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #20 Get the core id. */
  Os_Hal_ASM("  stsr  0, r11, 2");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  shr   17, r11");                                                                                        /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  shl   3, r11");                                                                                         /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #30 Switch to kernel stack and reprogram stack window. */
  Os_Hal_ASM("  mov   _OsCfg_Stack_KernelStacks, r12");                                                                 /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  add   r11, r12");                                                                                       /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ld.w  0[r12], r12");                                                                                    /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ld.w  0[r12], r11");                                                                                    /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, MPLA0");                                                                                     /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ld.w  4[r12], SP");                                                                                     /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  SP, MPUA0");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #40 Store the program counter of the interrupted context in CTPC. */
  Os_Hal_ASM("  stsr  FEPC, r11");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, CTPC");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #50 Call Os_MemFault in privileged mode with interrupts disabled.*/
  Os_Hal_ASM("  mov   _Os_MemFault, r11");                                                                              /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, FEPC");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  mov   0x000180A0, r11");                                                                                /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, FEPSW");                                                                                     /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  feret");                                                                                                /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

/***********************************************************************************************************************
 *  Os_Exc_Unhandled()
 **********************************************************************************************************************/
/*! \fn       void Os_Exc_Unhandled()
 *  \brief    This handler is triggered, if any other exception is triggered, which is not handled by the OS.
 *  \details  It shall call the kernel's Os_UnhandledExc() function. Os_UnhandledExc() expects the exception
 *            source number to be passed.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          Supervisor mode.
 *  \pre          Interrupts disabled.
 **********************************************************************************************************************/
  /*!
   * Internal comment removed.
 *
 *
 *
 *
 *
 *
   */
  Os_Hal_SECTION(".OS_CODE");                                                                                           /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ALIGN("4");                                                                                                    /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_LABEL("Os_Hal_UnhandledExc");                                                                                  /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #10 Synchronize pipeline on exception entry. */
  Os_Hal_ASM("  syncp");                                                                                                /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #20 Get the core id. */
  Os_Hal_ASM("  stsr  0, r11, 2");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  shr   17, r11");                                                                                        /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  shl   3, r11");                                                                                         /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #30 Switch to kernel stack and reprogram stack window. */
  Os_Hal_ASM("  mov   _OsCfg_Stack_KernelStacks, r12");                                                                 /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  add   r11, r12");                                                                                       /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ld.w  0[r12], r12");                                                                                    /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ld.w  0[r12], r11");                                                                                    /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, MPLA0");                                                                                     /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ld.w  4[r12], SP");                                                                                     /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  SP, MPUA0");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #40 Store the program counter of the interrupted context in CTPC. */
  Os_Hal_ASM("  stsr  FEPC, r11");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, CTPC");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  /* #50 Call Os_UnhandledExc in privileged mode with interrupts disabled.*/
  Os_Hal_ASM("  mov   _Os_UnhandledExc, r11");                                                                          /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, FEPC");                                                                                      /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  mov   0x000180A0, r11");                                                                                /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  ldsr  r11, FEPSW");                                                                                     /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  stsr  FEIC, r6");                                                                                       /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  shr   4, r6");                                                                                          /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
  Os_Hal_ASM("  feret");                                                                                                /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

#define OS_STOP_SEC_CODE
#include "Os_MemMap_OsCode.h"                                                                                           /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_Entry.c
 **********************************************************************************************************************/

