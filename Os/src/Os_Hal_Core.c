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
 *  \addtogroup  Os_Hal_Core
 *  \{
 *
 *  \file        Os_Hal_Core.c
 *  \brief       Core related primitives which don't have to be inlined.
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

                                                                                                                        /* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_HAL_CORE_SOURCE

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_Core.h"

/* Os kernel module dependencies */
#include "Os_Hal_Os.h"

/* Os HAL dependencies */
#include "Os_Hal_Core_Cfg.h"
#include "Os_Core_Lcfg.h"

/***********************************************************************************************************************
 *  VERSION CHECK
 **********************************************************************************************************************/

/* Check the version of OS header file */
#if (  (OS_HAL_SW_MAJOR_VERSION != (1u)) \
    || (OS_HAL_SW_MINOR_VERSION != (5u)) \
    || (OS_HAL_SW_PATCH_VERSION != (0u)) )
# error "Vendor specific version numbers of Os_Hal_Core.c and Os_Hal_Os.h are inconsistent"
#endif

/* Check the version of the configuration header file */
#if (  (OS_CFG_HAL_MAJOR_VERSION != (1u)) \
    || (OS_CFG_HAL_MINOR_VERSION != (4u)) )
# error "Version numbers of Os_Hal_Core.c and Os_Hal_Cfg.h are inconsistent!"
#endif

/***********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/
/*! \brief Syscall table
 *  \details The syscall table contains only the unhandledSysCall handler because syscalls are not used within the OS.
 */
Os_Hal_ASM(".section \".OS_CONST\",\"a\"");                                                                             /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ASM(".align 16");                                                                                                /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ASM(".globl _OS_SYSCALL_TABLE");                                                                                 /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ASM("_OS_SYSCALL_TABLE:");                                                                                       /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */
Os_Hal_ASM(".word (_Os_Hal_UnhandledSysCall - _OS_SYSCALL_TABLE)");                                                     /* PRQA S 0605 */ /* MD_Os_Hal_0605_AssemblerStub */

/***********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

#define OS_START_SEC_CODE
#include "Os_MemMap_OsCode.h"                                                                                           /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Os_Hal_CoreInit()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 *
 */
FUNC(void, OS_CODE) Os_Hal_CoreInit(P2CONST(Os_Hal_CoreAsrConfigType, AUTOMATIC, OS_CONST) Config)
{
  /* #10 Initialize interrupt controller. */
  Os_Hal_SetEBVFlag();
  Os_Hal_SetINTCFG(0);
  Os_Hal_SetEBASE((uint32)(Config->ExceptionVectorTableAddr));                                                          /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  Os_Hal_SetINTBP((uint32)(Config->EIINTVectorTableAddr));                                                              /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* #20 Initialize syscall table and ASID if memory protection is enabled. */
  if (Os_MpIsEnabled() != 0)
  {
    Os_Hal_SetASID(0x03FFUL);
    Os_Hal_SetSCCFG(0);
    Os_Hal_SetSCBP((uint32)OS_SYSCALL_TABLE);                                                                           /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
    Os_Hal_SyncPipeline();
  }
}

/***********************************************************************************************************************
 *  Os_Hal_CoreInitMaster()
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Hal_CoreInitMaster(P2CONST(Os_Hal_SystemConfigType, AUTOMATIC, OS_CONST) Config)
{
  OS_IGNORE_UNREF_PARAM(Config);                                                                                        /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
}

/***********************************************************************************************************************
 *  Os_Hal_CoreFreeze()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(void, OS_CODE, OS_NORETURN, Os_Hal_CoreFreeze, (void))                                     /* PRQA S 3219 */ /* MD_Os_Hal_3219 */ /* COV_OS_HALCOREFREEZE */
{
  /* #10 Loop endlessly. */
  while(1 == 1)                                                                                                         /* COV_OS_HALCOREFREEZE */
  {
    Os_Hal_CoreNop();
  }
}

#define OS_STOP_SEC_CODE
#include "Os_MemMap_OsCode.h"                                                                                           /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* START_COVERAGE_JUSTIFICATION

\ID COV_OS_HALCOREFREEZE
   \ACCEPT XX
   \REASON This function is called from Os_ErrKernelPanic() right after the panic hook has returned. As the panic hook
           is the last possible exit point for the tests, Os_Hal_CoreFreeze cannot be covered in tests. Because of the
           simplicity of the code, the performed code inspection results in sufficient quality.
           
\ID COV_OS_HALTIMERSTMUNSUPPORTED
   \ACCEPT XX
   \ACCEPT XF
   \REASON This case can not be reached, since the STM module is not available in the reference derivative 
           (used for coverage tests).

Justifications for core:

\ID COV_OS_HALPLATFORMCLZAVAILABILITY
   \ACCEPT TX
   \REASON The condition is hardware dependent always true. The unnecessary code parts should be
           removed by compiler optimization. As the tests run on each platform, the OS is to be released for, we
           always just test the code for the respective platform. No risk as the remaining code shall be optimized
           away. (Other platforms may set ACCEPT XF with a similar justification)

\ID COV_OS_HALPLATFORMTHREADPOINTERUSERREADABILITY
   \ACCEPT XF
   \REASON The condition is hardware dependent always false. The unnecessary code parts should be
           removed by compiler optimization. As the tests run on each platform, the OS is to be released for, we
           always just test the code for the respective platform. No risk as the remaining code shall be optimized
           away. (Other platforms may set ACCEPT TX with a similar justification)

\ID COV_OS_HALPLATFORMCLEARPENDINGAVAILABILITY
   \ACCEPT TX
   \REASON The condition is hardware dependent always true. The unnecessary code parts should be
           removed by compiler optimization. As the tests run on each platform, the OS is to be released for, we
           always just test the code for the respective platform. No risk as the remaining code shall be optimized
           away. (Other platforms may set ACCEPT XF with a similar justification)

\ID COV_OS_HALPLATFORMBITLIBCLZ
   \ACCEPT XX
   \REASON This code is meant as library code for the software implementation of Os_Bit_CountLeadingZeros(). As this
           processor provides a hardware solution, this code is unused. However, the function is extremely simple,
           code inspected and unit tested. It is typically optimized away by the linker. Therefore, the risk of
           keeping this code is expected to be low.

\ID COV_OS_HALPLATFORMUNSUPPORTED8082
   \ACCEPT XX
   \ACCEPT TX
   \ACCEPT XF
   \REASON Unit test and code inspection have not found any risk in keeping this code. On PPC platform this code is
           covered in any case. Exhaustive testing is planned in WORKITEM8082.
           
\ID COV_OS_HALPLATFORMUNHANDLEDSYSCALL
   \ACCEPT TF
   \REASON This justification is not valid for RH850 and thus it must be covered.
           
\ID COV_OS_HALPLATFORMTRAPALWAYSNEEDED
   \ACCEPT XX
   \ACCEPT TX
   \REASON Since in RH850 the thread pointer can not be read in user mode, the trap is always needed by calling OS APIs.
   
\ID COV_OS_HALPLATFORMNEEDMORETHAN2CORES
   \ACCEPT XF
   \REASON This code can only be reached by using a derivative with more than 2 cores. Currently there is no RH850
           derivatives with more than 2 cores.
   
\ID COV_OS_HALPLATFORMMASTERSTARTALLOWED
   \ACCEPT XF
   \REASON This code can only be reached when at least one core is configured to be allowed to start the master core.
           In RH850 all cores are auto-started and thus there is no need to configure a core to start the master core.
           
\ID COV_OS_HALPLATFORMNONAUTOSTARTCORE
   \ACCEPT XX
   \ACCEPT TX
   \REASON This code can only be reached when at least one core is configured to be non-auto start core. In RH850 
           all cores are auto-started.
           
\ID COV_OS_HALPLATFORMGETSPINLOCK
   \ACCEPT XF
   \REASON Though this code may be reached, it is impossible to have a reliable test with only 2 cores to cover this
           branch. Thus this is not covered on RH850, since the reference derivative has only 2 cores. However, the
           correctness can be proved by code review and unit test.
   
\ID COV_OS_HALPLATFORMAPPISPRIVILEGED
   \ACCEPT XX
   \REASON This function is only called within Os_TrapIsCallerPrivileged and the function Os_TrapIsCallerPrivileged 
           will never be called on RH850, since the thread pointer is not readable in user mode.

END_COVERAGE_JUSTIFICATION */

/* SBSW_JUSTIFICATION_BEGIN

\ID SBSW_OS_HAL_PWA_CALLER
 \DESCRIPTION    A write access is performed on a pointer, which is coming directly from the caller.
 \COUNTERMEASURE \N No measure is required, because the caller has to check the validity.

\ID SBSW_OS_HAL_FC_CALLER
 \DESCRIPTION    A function is called with one or more pointer parameters, which are coming directly from the caller.
 \COUNTERMEASURE \N No measure is required, because the caller has to check the validity.

\ID SBSW_OS_HAL_PWA_ISRCONFIG_XSIG
 \DESCRIPTION    A write access is performed on the interrupt control register (OS_HAL_XSIG_INTCTRL) to clear
                 the pending request, or on the inter-core interrupt control register(OS_HAL_XSIG_TRIGGER)
                 to trigger it.
                 In addition, the validity of OS_HAL_XSIG_INTCTRL and OS_HAL_XSIG_TRIGGER is checked by review.
 \COUNTERMEASURE \N No measure is required, because its validity is ensured by code review.

\ID SBSW_OS_HAL_PWA_PA_ISRCONFIG
 \DESCRIPTION    A write access is performed on a pointer, which is obtained by dereferencing a pointer to a struct,
                 of type Os_Hal_IntIsrConfigType, coming directly from the caller.
 \COUNTERMEASURE \S Safety manual should state that the functionality of each configured ISR has to be checked for its
                 correctness.
                 This includes the correct call of the ISR handler as well as enabling, disabling, reading the enable state,
                 reading the pending state and clearing of the pending information of the corresponding ISR sources.
                 SMI-491

\ID SBSW_OS_HAL_PWA_PITCONFIG
 \DESCRIPTION    A write access is performed starting from the Timer Base Address, which is generated from the timer configuration
                 for OSTM or TAUJ of type Os_Hal_TimerPitConfigType.
                 In addition, the validity of OS_HAL_TIMER_OSTM<X>_BASE, OS_HAL_TIMER_TAUJ<X>_BASE and OS_HAL_TIMER_CH<Y> is checked by review.
 \COUNTERMEASURE \S Safety manual should state that the PIT timer configuration of type Os_Hal_TimerPitConfigType in Os_Hal_Timer_Lcfg.c
                 has to be checked for its correctness.
                 If the OSTM module <X> (0,1,2,5) channel <0,1,2,3> is configured, the following attributes must be generated as follows:
                 Timer Base Address  = OS_HAL_TIMER_OSTM<X>_BASE
                 Timer Hardware Type = OS_HAL_TIMER_OSTM
                 Timer Channel Index = OS_HAL_TIMER_CH<Y>

                 If the TAUJ module <X> (0,1,2) channel <Y> (0,1,2,3) is configured, the following attributes must be generated as follows:
                 Timer Base Address  = OS_HAL_TIMER_TAUJ<X>_BASE
                 Timer Hardware Type = OS_HAL_TIMER_TAUJ
                 Timer Channel Index = OS_HAL_TIMER_CH<Y>
                 SMI-3310

\ID SBSW_OS_HAL_PWA_FRTCONFIG
 \DESCRIPTION    A write access is performed starting from the Timer Base Address, which is generated from the timer configuration
                 for OSTM or STM of type Os_Hal_TimerFrtConfigType in Os_Hal_Timer_Lcfg.c.
                 In addition, the validity of OS_HAL_TIMER_OSTM<X>_BASE, OS_HAL_TIMER_STM<X>_BASE  and OS_HAL_TIMER_CH<Y> is checked by review.
 \COUNTERMEASURE \S Safety manual should state that the FRT timer configuration has to be checked for its correctness.
                 If the OSTM module <X> (0,1,2,5) channel <Y> (0,1,2,3) is configured, the following attributes must be generated as follows:
                 Timer Base Address  = OS_HAL_TIMER_OSTM<X>_BASE
                 Timer Hardware Type = OS_HAL_TIMER_OSTM
                 Timer Channel Index = OS_HAL_TIMER_CH<Y>

                 If the STM module <X> (0,1) channel <Y> (1,2,3) is configured, the following attributes must be generated as follows:
                 Timer Base Address  = OS_HAL_TIMER_STM<X>_BASE
                 Timer Hardware Type = OS_HAL_TIMER_STM
                 Timer Channel Index = OS_HAL_TIMER_CH<Y>
                 SMI-3311

SBSW_JUSTIFICATION_END */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_Core.c
 **********************************************************************************************************************/

