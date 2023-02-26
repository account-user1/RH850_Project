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
 * \addtogroup   Os_Common
 * \{
 *
 * \file
 * \brief       Common types.
 * \details     --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_COMMON_TYPES_H)                                                                                         /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_COMMON_TYPES_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
# include "Std_Types.h"

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/
/*! \brief    Abstraction of 'static' keyword usage.
 *  \details  --no details--
 */
#if !defined (OS_LOCAL)
# define OS_LOCAL                   static
#endif

/*! \brief    Abstraction of 'static inline' keyword order.
 *  \details  --no details--
 */
#if !defined (OS_LOCAL_INLINE)
# define OS_LOCAL_INLINE            LOCAL_INLINE
#endif


/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/
/*! \brief    This function performs a NOP on a given variable.
 *  \details  It is used to satisfy compilers in configurations, where not all function parameters are used.
 *  \param    PARAM   The variable to which shall be NOPed */
#define OS_IGNORE_UNREF_PARAM(PARAM)                               ((void)(PARAM))                                      /* PRQA S 3453 */ /* MD_MSR_19.7 */


/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/
/*! Standard return type for efficient return of boolean values. */
typedef unsigned int Os_StdReturnType;

/*! Standard data types for processor word. */
typedef unsigned int Os_WordType;

/*! Index type to iterate over OS objects during initialization. */
typedef uint16_least Os_ObjIdxType;


typedef union Os_ParamType_Tag Os_ParamType;

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/



#endif /* OS_COMMON_TYPES_H */


/* module specific MISRA deviations:
  MD_Os_0277_TickType:
      Reason:     Tick type is treated as absolute point in time. For representing relative types, negative values
                  are required in some cases.
      Risk:       Value representation of negative values depends on the compiler and platform.
      Prevention: Checked with runtime tests that value representation is as expected.
  MD_Os_0306_PeripheralRegion:
      Reason:     In order, to perform numerical operations the pointer is casted into an integral type.
      Risk:       Data width of the pointer may differ from the data width of the integral type.
      Prevention: Ensured by design, that the integral type has the correct data width.
  MD_Os_0306_AccessCheckTest:
      Reason:     In order, to perform numerical operations the pointer is casted into an integral type.
      Risk:       Data width of the pointer may differ from the data width of the integral type.
      Prevention: Ensured by design, that the integral type has the correct data width.
  MD_Os_0306_ListEnd:
      Reason:     A value (not NULL_PTR) is required, which signals the end of a list. This value is defined as ~0.
      Risk:       Data width of the pointer may differ from the data width of the integral type.
      Prevention: Ensured by design, that the integral type has the correct data width.
  MD_Os_0306_Interface:
      Reason:     This API is defined to provide an integer type as an address.
      Risk:       Data width of the pointer may differ from the data width of the integral type.
      Prevention: API is tested during component tests.
  MD_Os_0310:
      Reason:     A source pointer is casted into a target pointer to another type. This conversion is correct,
                  because the source type is the first element within the target struct type.
      Risk:       Ignoring or changing this design decision, could  lead to an illegal cast.
      Prevention: The reviewer has to verify, that this design decision is still valid and realized.
  MD_Os_0312_Volatile:
      Reason:     The volatile key word is removed by using a cast. The volatile data is used for cross core
                  communication.
      Risk:       None, as the implementation ensures the correct order of write accesses to the cross core data.
      Prevention: None.
  MD_Os_0312_Volatile_Api:
      Reason:     The volatile key word is removed by using a cast. The volatile data is used for local variable to
                  avoid compiler optimizations.
      Risk:       None, as the implementation ensures the correctness of the usage of the local variables.
      Prevention: None.
  MD_Os_0342_OsekMacro:
      Reason:     The C standard does not provided any other way to realize the TASK and ISR macros defined by OSEK
                  without using the glue operator. This requires the compiler to support the glue operator. As
                  consequence the glue operator may be used in general.
      Risk:       K&R compiler usage is limited.
      Prevention: Add hint to the user documentation that the glue operator has to be supported.
  MD_Os_0505:
      Reason:     It is up to the caller to ensure that a non null pointer is passed.
      Risk:       Function could be called with invalid value.
      Prevention: The reviewer has to verify, that each caller ensures that a valid value is passed.
  MD_Os_0715:
      Reason:     Splitting this function into two or more parts, would decrease performance, as the data has to be
                  fetched multiple times. E.g. for checking and for execution.
      Risk:       None.
      Prevention: None.
  MD_Os_0750:
      Reason:     In order to have a container for OS internal communication a union of parameter types is used.
      Risk:       Values are always read with the same type of the last write to the union. As the union is not used
                  for type conversions, there is no platform dependency.
      Prevention: None.
  MD_Os_0777_Decl:
      Reason:     Identifier does not differ, because they are identical.
                  This function is not part of the submodule interface and may only be called via a wrapper function.
                  The wrapper function is inlined and placed in the header file. Therefore this function is declared
                  twice: In the implementation file and within the function scope of the wrapper function.
      Risk:       None.
      Prevention: None.
  MD_Os_0777:
      Reason:     Code maintainability requires structured names conflicting with this limitation.
      Risks:      Compilation errors are possible.
      Prevention: Compiler compatibility is tested during integration.
  MD_Os_0779:
      Reason:     Code maintainability requires structured names conflicting with this limitation.
      Risks:      Compilation errors are possible.
      Prevention: Compiler compatibility is tested during integration.
  MD_Os_0883:
      Reason:     The protection against repeated inclusion is complete and correct. The MISRA tool is unable to
                  detect this.
      Risk:       None.
      Prevention: None.
  MD_Os_1527:
      Reason:     The keyword static is used to enable function inlining across different translation units.
      Risk:       A locally defined function could override a globally defined function.
      Prevention: Each function has a module specific prefix, which ensures that no static function may be defined
                  both, locally and globally.
  MD_Os_2018:
      Reason:     Defensive programming: If the enum type of the switch argument is extended, the switch case may have
                  to be updated. An order to detect the type extension, a default case is added.
      Risk:       None.
      Prevention: None.
  MD_Os_2469:
      Reason:     Control variable modified in case of loop abort.
      Risk:       None, as control variable is only modified in case that the loop is aborted.
      Prevention: None.
  MD_Os_3112:
      Reason:     This statement is used to avoid warnings caused by unused parameters. Parameters are defined by
                  standardized API requirements, and not needed in case a feature is disabled by configuration.
                  It is either impossible due to API standardization or necessary code duplication (severe maintenance
                  increase) to provide feature dependent APIs with different signatures.
      Risk:       Unavoidable compiler warning or error because of either unused statements or unused parameter.
      Prevention: None.
  MD_Os_3112_Hook:
      Reason:     This statement is a user hook which may not be used and therefore left empty.
      Risk:       Unavoidable compiler warning or error because of either unused statements or unused parameter.
      Prevention: None.
  MD_Os_3196_Param
      Reason:     This argument contains all parameters of an API call. As the corresponding API has no parameters,
                  this argument is not initialized.
      Risk:       None.
      Prevention: None.
  MD_Os_3219:
      Reason:     This function is inlined and therefore it has to be implemented here. The function is not used
                  by all implementation files which include this header file.
      Risk:       None.
      Prevention: None.
  MD_Os_3219_Stub:
      Reason:     This function is a stub, which is not used in case that there is a user function available.
      Risk:       None.
      Prevention: None.
  MD_Os_3221:
      Reason:     Information hiding: The declaration is placed in function scope, because the declared function may
                  not be called from outside the module. So a public declaration within a header file is not possible.
      Risk:       None. Consistency of the multiple declarations is checked by the compiler.
      Prevention: None.
  MD_Os_3222:
      Reason:     Information hiding: The declaration is placed in function scope, because the declared object may
                  not be accessed from outside the module. So a public declaration within a header file is not possible.
      Risk:       None. Consistency of the multiple declarations is checked by the compiler.
      Prevention: None.
  MD_Os_3305:
      Reason:     Conversion of abstract type to a concrete one.
      Risk:       As the originally object is an instance of the concrete type, the alignment is correct.
                  Therefore there is no risk.
      Prevention: None.
  MD_Os_3355:
      Reason:     This check verifies the configuration.
      Risk:       None.
      Prevention: None.
  MD_Os_3334_Decl:
      Reason:     This is declaration is intentionally identical to the global one as the type is identical.
      Risk:       None.
      Prevention: None.
  MD_Os_3347:
      Reason:     Variable is initialized in each case which returns. If a case does not return, the variable
                  may stay uninitialized.
      Risk:       None.
      Prevention: None.
  MD_Os_3348_Param:
      Reason:     This argument contains all parameters of an API call. As the corresponding API has no parameters,
                  this argument is not initialized.
      Risk:       None.
      Prevention: None.
  MD_Os_3354_Param:
      Reason:     This argument contains all parameters of an API call. As the corresponding API has no parameters,
                  this argument is not initialized.
      Risk:       None.
      Prevention: None.
  MD_Os_3354_Local:
      Reason:     Local variable is only initialized if condition is fulfilled.
      Risk:       None, as the variable is only used if the same condition is fulfilled.
      Prevention: None.
  MD_Os_3410:
      Reason:     Macro used in structures, which do not allow brackets e.g. declaration of functions and variables.
      Risk:       None, type errors will be detected by the compiler.
      Prevention: Used parameter is always atomic.
  MD_Os_3410_Decl:
      Reason:     Macro is used for declaration, which does not allow enclosing parameters in brackets.
      Risk:       None, type errors will be detected by the compiler.
      Prevention: None.
  MD_Os_3412_Stub:
      Reason:     This is a stub macro which is active, if the user does not implement the hook.
      Risk:       None, as the stub contains only 'unused parameters' definitions.
      Prevention: None.
  MD_Os_3412_Performance:
      Reason:     For performance reasons a macro interface is provide as OS API.
      Risk:       None. If a macro is not suitable for the user, a function interface may be used instead of a
                  function like macro.
      Prevention: None.
  MD_Os_3447:
      Reason:     The caller of this function has to declare the functions prototype locally. Therefore the function
                  has to have external linkage.
      Risk:       None.
      Prevention: None.
  MD_Os_3447_Object:
      Reason:     The user of this object has to declare its prototype locally. Therefore the object has to have
                  external linkage.
      Risk:       None.
      Prevention: None.
  MD_Os_3453_Decl:
      Reason:     Macro is used for declaration, which is not possible within a function.
      Risk:       None, type errors will be detected by the compiler.
      Prevention: None.
  MD_Os_3673_ModifiedArgument:
      Reason:     As the passed argument is modified within a called function, the argument has to be of type pointer
                  to variable.
      Risk:       None.
      Prevention: None.
  MD_Os_3673_StubFunction:
      Reason:     This function is a stub function, which is active when the corresponding feature is disabled.
                  The stub intentionally has no side effects on any data and the prototype has to be the same
                  as the one of the unstubbed function.
      Risk:       None.
      Prevention: None.
  MD_Os_3673_FunctionPointer:
      Reason:     This function is called via a function pointer, which expects the function to have the correct
                  prototype.
      Risk:       None.
      Prevention: None.
  MD_Os_3676:
      Reason:     The API has to be compatible to a common prototype, defined by module's design to serve generic
                  purposes.
      Risk:       None.
      Prevention: None.
  MD_Os_3684_LinkerSymbol:
      Reason:     Declaration of array of unknown size is used for linker tables.
      Risk:       None.
      Prevention: None.
  MD_Os_3689:
      Reason:     An enum value is used as index for an array. The implementation ensures, that the size of the array
                  equals the number of elements in the enum. The enum values are continuous increasing starting from
                  zero.
      Risk:       None, as the array has the correct size and using enum values out of bounds is detected by compile
                  tests.
      Prevention: None.
  MD_Os_3689_Precondition:
      Reason:     Range is ensured by precondition.
      Risk:       Precondition is missed.
      Prevention: Checked during review or ReviewHelper.
  MD_Os_3689_Check:
      Reason:     Range is checked at runtime.
      Risk:       None, as the array has the correct size and using enum values out of bounds is detected by compile
                  tests.
      Prevention: None.
  MD_Os_STPAR:
      Reason:     A reduction of the number of parameters is not possible in an efficient way.
      Risk:       A caller could mix some of the calling parameters.
      Prevention: None. As all parameters have different types, the compiler checks, whether the given call parameters
                  are in the correct order.
  MD_Os_STMIF:
      Reason:     Splitting this function into two or more parts, would decrease performance, as the data has to be
                  fetched multiple times. E.g. for checking and for execution.
      Risk:       None.
      Prevention: None.
  MD_Os_STCAL:
      Reason:     In order to simplify the code multiple inline getter functions are used. Accessing data directly
                  would increase external coupling. Using macros instead of functions leads to loss of type safety.
      Risk:       None.
      Prevention: None.
  MD_Os_STCYC_Os_TrapHandler:
      Reason:     High cyclomatic complexity due to switch case. Splitting the switch case, would decrease performance.
      Risk:       None, as the switch case has a regular structure the code is still understandable.
      Prevention: None.
  MD_Os_STPTH_Os_TrapHandler:
      Reason:     High path count due to switch case. Splitting the switch case, would decrease performance.
      Risk:       None, as the switch case has a regular structure the code is still understandable.
      Prevention: None.
  MD_Os_3415_Os_TraceIsOrtiServiceTracingEnabled:
      Reason:     In order to avoid warnings related to "condition always true" issued by some compilers.
      Risk:       None, as the right hand operand (Os_TraceIsOrtiServiceTracingEnabled()) is a getter function.
      Prevention: None.
 */


/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_Common_Types.h
 **********************************************************************************************************************/
