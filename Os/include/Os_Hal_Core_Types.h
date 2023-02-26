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
 * \addtogroup  Os_Hal_Core
 * \{
 *
 * \file        Os_Hal_Core_Types.h
 * \brief       Core and multi-core related primitives.
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
#if !defined(OS_HAL_CORE_TYPES_H)                                                                                       /* PRQA S 0883 */ /* MD_Os_Hal_0883 */
# define OS_HAL_CORE_TYPES_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */

/* Os kernel module dependencies */

/* Os HAL dependencies */
# include "Os_Hal_Interrupt_Types.h"

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/

/*! Defines whether the HAL provides a count leading zeros command (STD_ON) or not (STD_OFF). */
# define OS_HAL_COUNT_LEADING_ZEROS_HARDWARE     STD_ON

/*! The required address width to subscript the bits of a Os_Hal_CoreBitFieldType.
 * The value can be selected from the following table:
 * typeof(Os_Hal_BitFieldType)      | OS_HAL_INDEXBITWIDTH
 * :------------------------------: | :----------------------------
 * uint8                            | 3
 * uint16                           | 4
 * uint32                           | 5
 * uint64                           | 6
 */
# define OS_HAL_INDEXBITWIDTH       (5)

/*! Defines the stack fill pattern, which is used to initialize an empty stack. */
# define OS_HAL_STACK_FILL_PATTERN   ((Os_Hal_StackType)0xAAAAAAAAUL)

/*! Defines the value which is returned by \ref Os_Hal_SpinTryLock, if locking succeeded. */
# define OS_HAL_SPINLOCKSUCCEEDED    ((Os_Hal_SpinlockResultType)1)

/*! Defines the value of lock variable, when it is unlocked. */
# define OS_HAL_SPIN_UNLOCKED        ((Os_Hal_SpinlockType)0)

/*! Mask to set the table mode flag in the EI level interrupt control register.*/
# define OS_HAL_INTC_TABLE_MODE    ((uint8)0x40)
/*! Mask to set the request flag in the EI level interrupt control register.*/
# define OS_HAL_INTC_REQUEST_FLAG  ((uint8)0x10)
/*! Mask to set the interrupt processing disabled bit in the EI level interrupt control register.*/
# define OS_HAL_INTC_INT_SET_MASK  ((uint8)0x80)
/*! Mask to clear the interrupt processing disabled bit in the EI level interrupt control register.*/
# define OS_HAL_INTC_INT_CLR_MASK  ((uint8)0x7F)
/*! Mask to set the request flag in the EI level interrupt control register.*/
# define OS_HAL_INTC_INT_SET_PEND  (OS_HAL_INTC_REQUEST_FLAG)
/*! Mask to clear the request flag in the EI level interrupt control register.*/
# define OS_HAL_INTC_INT_CLR_PEND  ((uint8)0xEF)

/*! EI level acknowledgment state flag. */
# define OS_HAL_PSW_ID       (0x00000020UL)
/*! PSW flags for EI level interrupt epilogue.
 * - CU0 set (FPU enabled)
 * - EBV set
 * - EP cleared
 * - ID set
 * */
# define OS_HAL_EIPSW_SV     (0x00018020UL)

/*! Macro to access the high byte of INTIPIR0s EI level interrupt register */
# define OS_HAL_XSIG_INTCTRL   (*((P2VAR(volatile uint8, AUTOMATIC, AUTOMATIC))OS_HAL_INTC1_BASE))
/*! Macro to access the inter-processor interrupt control register 0 (IPIR_CH0) */
# define OS_HAL_XSIG_TRIGGER   (*((P2VAR(volatile uint32, AUTOMATIC, AUTOMATIC))OS_HAL_IPIR_BASE))

/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/
/*! Platform specific core data. */
typedef uint32 Os_Hal_CoreType;

/*! Data type which is used to perform efficient calculation of count leading zero bits. */
typedef uint32 Os_Hal_BitFieldType;

/*! Platform type of an 8 bit hardware register */
typedef uint8 Os_Hal_Reg8BitType;

/*! Platform type of a 16 bit hardware register */
typedef uint16 Os_Hal_Reg16BitType;

/*! Platform type of a 32 bit hardware register */
typedef uint32 Os_Hal_Reg32BitType;

/*! Pointer to a 8 bit hardware register */
typedef P2VAR(volatile Os_Hal_Reg8BitType, TYPEDEF, AUTOMATIC) Os_Hal_Reg8BitRefType;

/*! Pointer to a 16 bit hardware register */
typedef P2VAR(volatile Os_Hal_Reg16BitType, TYPEDEF, AUTOMATIC) Os_Hal_Reg16BitRefType;

/*! Pointer to a 32 bit hardware register */
typedef P2VAR(volatile Os_Hal_Reg32BitType, TYPEDEF, AUTOMATIC) Os_Hal_Reg32BitRefType;

/*! Defines the type of the stack array. */
typedef uint32 Os_Hal_StackType;

/*! Platform type of a spinlock */
typedef uint32 Os_Hal_SpinlockType;

/*! Platform type of a spinlock result */
typedef Os_Hal_SpinlockType Os_Hal_SpinlockResultType;

/*! Forward declaration of platform core configuration type. */
struct Os_Hal_CoreConfigType_Tag;
typedef struct Os_Hal_CoreConfigType_Tag Os_Hal_CoreConfigType;

/*! Forward declaration of platform specific dynamic system information type. */
struct Os_Hal_Core2ThreadType_Tag;
typedef struct Os_Hal_Core2ThreadType_Tag Os_Hal_Core2ThreadType;

/*! Forward declaration of platform specific system information configuration type. */
struct Os_Hal_Core2ThreadConfigType_Tag;
typedef struct Os_Hal_Core2ThreadConfigType_Tag Os_Hal_Core2ThreadConfigType;

/*! Forward declaration of a platform specific AUTOSAR core configuration type.*/
struct Os_Hal_CoreAsrConfigType_Tag;
typedef struct Os_Hal_CoreAsrConfigType_Tag Os_Hal_CoreAsrConfigType;

/*! Declaration of a platform specific AUTOSAR core configuration pointer type. */
typedef P2CONST(Os_Hal_CoreAsrConfigType, AUTOMATIC, OS_CONST) Os_Hal_CoreAsrConfigRefType;

/*! Forward declaration of a platform specific system information configuration type. */
struct Os_Hal_SystemConfigType_Tag;
typedef struct Os_Hal_SystemConfigType_Tag Os_Hal_SystemConfigType;

/*! Forward declaration of a platform specific XSignal interrupt configuration type. */
struct Os_Hal_XSigInterruptConfigType_Tag;
typedef struct Os_Hal_XSigInterruptConfigType_Tag Os_Hal_XSigInterruptConfigType;

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

#endif /* OS_HAL_CORE_TYPES_H */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_Core_Types.h
 **********************************************************************************************************************/

