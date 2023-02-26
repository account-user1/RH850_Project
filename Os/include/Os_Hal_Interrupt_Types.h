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
 *  \addtogroup Os_Hal_Interrupt_Types
 *  \{
 *
 *  \file       Os_Hal_Interrupt_Types.h
 *  \brief
 *
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

#if !defined (OS_HAL_INTERRUPT_TYPES_H)                                                                                 /* PRQA S 0883 */ /* MD_Os_Hal_0883 */
# define OS_HAL_INTERRUPT_TYPES_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os kernel module dependencies */

/* Os module declarations */

/* Os HAL dependencies */

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/*! \brief      Disable all interrupt lock method.
 *  \details    Specifies whether disabling all interrupts is implemented by level or by global flag.
 */
typedef enum
{
  OS_HAL_INT_DISABLE_ALL_BY_FLAG = 0, /*!< Disabling all interrupts is implemented by global disable flag. */
  OS_HAL_INT_DISABLE_ALL_BY_LEVEL = 1 /*!< Disabling all interrupts is implemented by level. */
} Os_Hal_IntDisableAllType;

/*! \brief    Interrupt level.
 *  \details  The kernel uses this data type to suspend/resume category 2 ISRs up to a certain level.
 *            This data type is needed to implement interrupt resources. */
typedef uint32 Os_Hal_IntLevelType;

/*! \brief    Timing protection interrupt state.
 *  \details  The kernel uses this data type to suspend/resume the timing protection interrupt.
 *            This type might be some kind of bit mask (e.g. processor status word), if the timing protection ISR is a
 *            NMI. Or this type might be some kind of level, if the timing protection ISR is a regular ISR with an
 *            interrupt priority level. */
typedef Os_Hal_IntLevelType Os_Hal_IntTpStateType;

/*! \brief    Interrupt state.
 *  \details  The kernel uses this data type to suspend/resume interrupts, to protect OS internal critical sections.
 *            This type is typically some kind of bit mask (e.g. processor status word). */
typedef Os_Hal_IntLevelType Os_Hal_IntStateType;

/*! \brief    Category 1+2 ISR interrupt state.
 *  \details  The kernel uses this data type to suspend/resume category 1+2 ISRs.
 *            This type might be some kind of bit mask (e.g. processor status word), if the timing protection ISR is a
 *            NMI. Or this type might be some kind of level, if the timing protection ISR is a regular ISR with an
 *            interrupt priority level. */
typedef Os_Hal_IntLevelType Os_Hal_IntCat1StateType;

/*! \brief    Category 2 ISR interrupt state.
 *  \details  The kernel uses this data type to suspend/resume category 2 ISRs.
 *            This type typically is some kind of level, if the platform supports interrupt levels.
 *            This data type is typically identical to Os_Hal_IntLevelType */
typedef Os_Hal_IntLevelType Os_Hal_IntCat2StateType;

/*! \brief    Interrupt level.
 *  \details  The kernel uses this data type to suspend/resume category 2 ISRs up to a certain level.
 *            This data type is needed to implement interrupt resources. */
typedef uint16 Os_Hal_IntSourceType;

/*! Type to access EI level interrupt control registers. */
typedef struct
{
  uint8 EICnLo;   /*!< +00h low byte */
  uint8 EICnHi;   /*!< +01h high byte */
} Os_Hal_EICnType;

/*! Pointer to an EI level interrupt control register. */
typedef P2VAR(volatile Os_Hal_EICnType, AUTOMATIC, OS_VAR_NOINIT) Os_Hal_EICnRefType;

/*! Type to access an EI level interrupt bind register.*/
typedef struct
{
  uint32 IBDnReg; /*!< +00h 32 bit hardware register.*/
} Os_Hal_IBDnType;

/*! Pointer to an EI level interrupt bind register.*/
typedef P2VAR(volatile Os_Hal_IBDnType, AUTOMATIC, OS_VAR_NOINIT) Os_Hal_IBDnRefType;

/*! Platform specific configuration type of an ISR*/
typedef struct
{
  Os_Hal_EICnRefType  EICnRef;      /*!< Address of the EI level interrupt control register. */
  Os_Hal_IBDnRefType  IBDnRef;      /*!< Address of the EI level interrupt bind register. */
  uint32              IntChannel;   /*!< Interrupt source number. */
  Os_Hal_IntLevelType IntLevel;     /*!< Interrupt priority level. */
  Os_Hal_IntLevelType IntMask;      /*!< Mask to disable all interrupts up to level of this ISR. */
  uint32              CoreID;       /*!< Core id of the configured ISR. */
}Os_Hal_IntIsrConfigType;

/*! Pointer to a platform specific configuration type of an ISR. */
typedef P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_CONST) Os_Hal_IntIsrConfigRefType;

/*! \brief    Cross Core interrupt number
 *  \details  The kernel uses this data type to trigger a cross core interrupt via a HAL function. */
typedef uint16 Os_Hal_CrossCoreInterruptNumberType;

/*! \brief    Interrupt state (with trap information).
 *  \details  The kernel uses this data type to restore the caller's interrupt state on OS service requests.
 *            On TriCore this data type also contains a pointer to the user space CSA. */
typedef uint32 Os_Hal_IntTrapStateType;

/*! Stores an interrupt state. */
typedef struct
{
  uint32 PSW; /*!< The program status word bit of the interrupt state. */
  uint32 PMR; /*!< The interrupt mask register of the interrupt state. */
}Os_Hal_InterruptStateType;

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

#endif /* OS_HAL_INTERRUPT_TYPES_H */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_Interrupt_Types.h
 **********************************************************************************************************************/

