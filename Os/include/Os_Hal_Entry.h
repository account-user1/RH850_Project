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
 *  \file       Os_Hal_Entry.h
 *  \brief      This component handles hardware exceptions and interrupts.
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

#if !defined(OS_HAL_ENTRY_H)                                                                                            /* PRQA S 0883 */ /* MD_Os_Hal_0883 */
# define OS_HAL_ENTRY_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Hal_EntryInt.h"
# include "Os_Hal_Entry_Lcfg.h"

/* Os kernel module dependencies */
# include "Os_Kernel.h"

/* Os HAL dependencies */
# include "Os_Hal_Core.h"

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Os_Hal_CAT2ISR()
 **********************************************************************************************************************/
/*! \brief         Macro to created CAT2 ISR entry points for all configured CAT2 ISRs.
 *  \details       This function shall only be called on entering an isr.
 *  \param[in]     IsrName      Name of the interrupt service routine
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre          Supervisor mode.
 *  \pre          Interrupts disabled.
 */
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
# define Os_Hal_CAT2ISR(IsrName)         Os_Hal_SECTION(".OS_CODE"); \
                                         Os_Hal_ALIGN("4"); \
                                         Os_Hal_LABEL("Os_Hal_Irq_"IsrName); \
                                         /* #10 Store temporary registers on the stack. */ \
                                         Os_Hal_ASM("pushsp  r1-r2");  \
                                         Os_Hal_ASM("pushsp  r4-r19"); \
                                         /* #20 Store the pointer to ISR configuration in function parameter 1.*/ \
                                         Os_Hal_ASM("mov     _OsCfg_Isr_"IsrName", r6"); \
                                         /* #30 Jump to function Os_Irq_Isr.*/ \
                                         Os_Hal_ASM("jr      _Os_Irq_Isr");                                             /* PRQA S 0342, 0881, 3412 */ /* MD_Os_Hal_0342, MD_Os_Hal_0881, MD_Os_Hal_3412_NoLoop */

/***********************************************************************************************************************
 *  Os_Hal_EXC()
 **********************************************************************************************************************/
/*! \brief         Macro to created the entries of the exception table.
 *  \details       This function shall only be called on entering an exception.
 *  \param[in]     Label        External symbol of the exception table entry.
 *  \param[in]     ExcHandler   External symbol of the exception handler.
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre          Supervisor mode.
 *  \pre          Interrupts disabled.
 */
/*!
 * Internal comment removed.
 *
 *
 */
# define Os_Hal_EXC(Label, ExcHandler)   Os_Hal_ALIGN("16"); \
                                         Os_Hal_LABEL("Exc_"Label); \
                                         /* #10 Jump to the passed exception handler symbol. */ \
                                         Os_Hal_ASM("jr32  _"ExcHandler); \
                                         Os_Hal_ASM("nop"); \
                                         Os_Hal_ASM("nop"); \
                                         Os_Hal_ASM("nop");                                                             /* PRQA S 0342, 0881, 3412 */ /* MD_Os_Hal_0342, MD_Os_Hal_0881, MD_Os_Hal_3412 */

/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

#endif /* OS_HAL_ENTRY_H */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_Entry.h
 **********************************************************************************************************************/

