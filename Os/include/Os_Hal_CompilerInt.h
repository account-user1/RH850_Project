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
 *  \ingroup    Os_Hal
 *  \defgroup   Os_Hal_Compiler  HAL Compiler
 *  \brief      Abstraction of compiler specific keywords to allow the compiler to generate more efficient code.
 *  \details
 *  The kernel should be able to give the compiler meta information to generate more efficient code.
 *  It also needs to tell the linker where to put data and code to implement Memory Protection.
 *  In multi core systems there may be the need for data/code duplication.
 *  The keywords to provide this information are not part of ANSI-C and are highly compiler dependent.
 *
 *  AUTOSAR already defines concepts to abstract compiler specifics:
 *  - [AUTOSAR Compiler Abstraction](http://www.autosar.org/fileadmin/files/releases/4-2/software-architecture/
 *                                   implementation-integration/standard/AUTOSAR_SWS_CompilerAbstraction.pdf)
 *  - [AUTOSAR Memory Mapping](http://www.autosar.org/fileadmin/files/releases/3-2/software-architecture/implementation
 *                             -integration/standard/AUTOSAR_SWS_MemoryMapping.pdf)
 *
 *  They are used in MICROSAR OS. This module defines additional compiler abstraction keywords for MICROSAR OS.
 *  They are relevant to provide OS functionality or improve efficiency.
 *
 *  \{
 *
 *  \file       Os_Hal_CompilerInt.h
 *  \brief      Additional services defined here are available to the user.
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

#if !defined (OS_HAL_COMPILERINT_H)                                                                                     /* PRQA S 0883 */ /* MD_Os_Hal_0883 */
# define OS_HAL_COMPILERINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */

/* Os kernel module dependencies */
# include "Os_Cfg.h"
# include "Os_CommonInt.h"

/* Os HAL dependencies */

# ifdef CDK_CHECK_MISRA
#  ifndef OS_STATIC_CODE_ANALYSIS
#    define OS_STATIC_CODE_ANALYSIS
#  endif
# endif

# if defined(OS_STATIC_CODE_ANALYSIS)
#  include "Os_Hal_StaticCodeAnalysis.h"
# else
#  if defined (OS_CFG_COMPILER_GREENHILLS)
#   include "Os_Hal_Compiler_GreenHillsInt.h"
#  else
#   error "Undefined or unsupported compiler"
#  endif
# endif


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


#endif /* OS_HAL_COMPILERINT_H */

/* module specific MISRA deviations:
 MD_Os_Hal_0303:
      Reason:     This statement converts an integral address to a pointer or vice versa. This is unavoidable for
                  memory access of that address or to put a pointer to a core register.
      Risk:       None.
      Prevention: None.
 MD_Os_Hal_0305:
      Reason:     This statement converts a function pointer to an integral address. This is unavoidable to put the
                  function pointer to a core register.
      Risk:       None.
      Prevention: None.
 MD_Os_Hal_0306:
      Reason:     This statement converts an integral address to a pointer or vice versa. This is unavoidable for
                  memory access of that address or to put a pointer to a core register.
      Risk:       None.
      Prevention: None.
 MD_Os_Hal_0310:
      Reason:     Assembler interface which requires a pointer to a native data type.
      Risk:       None, as compiler dependencies are considered by the compiler abstraction.
      Prevention: None.
  MD_Os_0342_OsekMacro:
      Reason:     The C standard does not provided any other way to realize the TASK and ISR macros defined by OSEK
                  without using the glue operator. This requires the compiler to support the glue operator. As
                  consequence the glue operator may be used in general.
      Risk:       K&R compiler usage is limited.
      Prevention: Add hint to the user documentation that the glue operator has to be supported.
 MD_Os_Hal_0428:
      Reason:     This statement uses the function pointer on purpose, thus a following () is not needed.
      Risk:       None.
      Prevention: None.
 MD_Os_Hal_0605_AssemblerStub:
      Reason:     This is a assembler stub function for static code analysis. Analyzing the original code is impossible.
      Risk:       None.
      Prevention: None.
 MD_Os_Hal_0685_MpuRegionAddress:
      Reason:     This is a linker symbol given by the user. MISRA can not recognize this as a constant.
      Risk:       None.
      Prevention: None.
 MD_Os_Hal_0686_OptimizeArray:
      Reason:     Array is used for multiple core objects with different number of entries.
      Risk:       Array access to uninitialized element.
      Prevention: Number of initialized array entries is used to ensure valid in.
 MD_Os_Hal_0703_OptimizeArray:
      Reason:     Array is used for multiple core objects with different number of entries.
      Risk:       Array access to uninitialized element.
      Prevention: Number of initialized array entries is used to ensure valid in.
 MD_Os_Hal_0881:
      Reason:     Correctness of glue operator evaluation is checked by compiler as incorrect order would lead to
                  compilation errors.
      Risk:       None.
      Prevention: None.
 MD_Os_Hal_0883:
      Reason:     The protection against repeated inclusion is complete and correct. The MISRA tool is unable to
                  detect this.
      Risk:       None.
      Prevention: None.
 MD_Os_Hal_2003:
     Description: Rule 15.2
                  The preceding non-empty 'case' or 'default' clause does not end with an explicit 'break' or 'return'
                  statement.
     Reason:      To use optimal design small switch-case dispatchers use fall-through cases.
     Risk:        None, since the switch case has a regular structure and is therefore easy to understand.
     Prevention:  None.
 MD_Os_Hal_3112:
      Reason:     This statement is used to avoid warnings caused by unused parameters. Parameters are defined by
                  standardized API requirements, and not needed in case a feature is disabled by configuration.
                  It is either impossible due to API standardization or necessary code duplication (severe maintenance
                  increase) to provide feature dependent APIs with different signatures.
      Risk:       Unavoidable compiler warning or error because of either unused statements or unused parameter.
      Prevention: None.
 MD_Os_Hal_3219:
      Reason:     This function is inlined and therefore it has to be implemented here. The function is not used
                  by all implementation files which include this header file.
      Risk:       None.
      Prevention: None.
 MD_Os_Hal_3412_NoLoop:
      Reason:     Code snipped is not part of a do-while-zero loop, as such a construct may have unexpected side
                  effects which must not occur e.g during context switch.
      Risk:       None.
      Prevention: None.
 MD_Os_Hal_3673:
      Reason:     This input parameter will only be modified in some configurations. Avoiding this violation will
                  increase code complexity.
      Risk:       None.
      Prevention: None.
 MD_Os_Hal_3673_NotUsed:
      Reason:     This input parameter is not used in this HAL implementation, thus it is not modified. However, since
                  it may be used or modified in other platforms, it is unavoidable to keep it as "pointer to non-const".
      Risk:       None.
      Prevention: None.
 MD_Os_3673_ModifiedArgument:
      Reason:     As the passed argument is modified within a called function, the argument has to be of type pointer
                  to variable.
      Risk:       None.
      Prevention: None.
 MD_Os_Hal_3673_AssemblerStub:
      Reason:     This is a assembler stub function for static code analysis. The stub prototype has to be identical
                  with the correct assembler macro.
      Risk:       None.
      Prevention: None.
 MD_Os_Hal_STCAL:
      Reason:     In order to simplify the code multiple assembler abstraction functions are used. Using assembler
                  macros here, would decrease readability
      Risk:       None.
      Prevention: None.
 MD_Os_Hal_STCYC_SwitchCase:
      Reason:     High cyclomatic complexity due to switch case. Splitting the switch case, would decrease performance.
      Risk:       None, as the switch case has a regular structure the code is still understandable.
      Prevention: None.

 */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_CompilerInt.h
 **********************************************************************************************************************/

