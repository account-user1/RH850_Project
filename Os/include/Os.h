/***********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  ------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**
 * \ingroup     Os_Kernel
 * \defgroup    Os_UserInterface OS User Interface
 * \brief       User API of MICROSAR OS
 * \details
 * This is a virtual module which contains the user interface (API). The user API is declared in Os.h and the files
 * included from there in order to provide the interface in the header files defined by the AUTOSAR OS standard.
 * However, the subcomponent \ref Os_Trap is responsible for the definition/implementation of the interface.
 *
 * # API functions which may be used before StartOS() {#ApiUsageBeforeStartOsAnchor}
 *
 * The Autosar OS Standard defines which API function is allowed to be called dependent on calling contexts. However,
 * before the OS is started, the allowed calling contexts are not yet cleanly defined. This is done in the picture
 * below.
 *
 * ![API Usage before call of StartOS()](ApiUsageBeforeStartOs.png)
 * \{
 *
 *
 * \file
 * \brief       This file contains all functions and data types which are exposed to the user.
 * \details     It provides the AUTOSAR OS API and proprietary extensions.
 *
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  --------------------------------------------------------------------------------------------------------------------
 *  Andreas Jehl                  virjas        Vector Informatik GmbH
 *  Anton Schmukel                visasl        Vector Informatik GmbH
 *  Benjamin Seifert              virbse        Vector Informatik GmbH
 *  Da He                         visdhe        Vector Informatik GmbH
 *  David Feuerstein              visdfe        Vector Informatik GmbH
 *  Fabian Wild                   viszfa        Vector Informatik GmbH
 *  Hendrik Stoffers              visshk        Vector Informatik GmbH
 *  Ivan Begert                   virbiv        Vector Informatik GmbH 
 *  Johannes Thull                visjth        Vector Informatik GmbH
 *  Martin Froschhammer           virmfr        Vector Informatik GmbH
 *  Martin Schultheiss            virsmn        Vector Informatik GmbH
 *  Michael Kock                  vismkk        Vector Informatik GmbH
 *  Rainer Kuennemeyer            visrk         Vector Informatik GmbH
 *  Senol Cendere                 visces        Vector Informatik GmbH
 *  Stefano Simoncelli            virsso        Vector Informatik GmbH
 *  Timo Kerstan                  vistkn        Vector Informatik GmbH
 *  Torsten Schmidt               visto         Vector Informatik GmbH
 *  --------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2016-03-16  visasl  -             Developer version (RC2)
 *                        viszfa
 *                        visrk
 *                        vistkn
 *  01.01.00  2016-04-29
 *  01.01.01  2016-04-29
 *  01.01.02  2016-05-03  visasl  -             Developer version (RC3)
 *                        viszfa
 *                        visrk
 *  01.01.03  2016-05-31  visasl  ESCAN00088874 Bypass interrupt state to/from service functions.
 *                        viszfa  ESCAN00089118 Separation of global data.
 *                        viszfa  ESCAN00089824 Provide possibility to restrict cross core API usage.
 *  01.01.04  2016-06-10  viszfa  -             Internal improvements.
 *  01.01.05  2016-06-27  virbse  ESCAN00090199 Trusted function parameters not ordered by their parameter id.
 *                        virbse  ESCAN00090179 Trusted functions stubs with user specific data types lead to
 *                                              compilation errors.
 *                        visto   ESCAN00089598 Os_Get*StackUsage functions should trigger protection errors instead
 *                                              of application errors.
 *                        viszfa  ESCAN00090425 Startup synchronization is not performed.
 *                        viszfa  ESCAN00090318 Thread/application/OS specific data is mapped into general data
 *                                              sections.
 *                        visasl  ESCAN00089491 Improve support for platforms where the core ID is not readable in user
 *                                              space.
 *                        visrk   ESCAN00090400 Interrupt API does not work before StartOS().
 *                        visrk   ESCAN00089815 Provide OSError_TryToGetSpinlock_Success.
 *                        visrk   ESCAN00089760 Provide NextScheduleTable API.
 *                        visdhe  ESCAN00089652 Detect invalid OS Object IDs compiler independently.
 *                        visdhe  ESCAN00089698 Interrupt resources may lead to interrupt level modification of tasks.
 *                        visdhe  ESCAN00089800 Interrupt Handling Functions do not work when called from non-trusted
 *                                              SW parts.
 *                        visshk  ESCAN00089761 Provide OS start from non autosar master core.
 *                        visrk   ESCAN00089700 Add APIs for disabling interrupt sources, enabling interrupt sources
 *                                              and clear the pending flag of an interrupt source.
 *                        virbse  ESCAN00090396 Generator generates derivative define with explicit derivative instead
 *                                              of group name.
 *  01.01.06  2016-07-05  visdhe  ESCAN00089612 Support IOC callbacks on local core.
 *                        visdhe  ESCAN00088881 Provide more detailed error code in case of IOC overlay errors.
 *                        visdhe  ESCAN00090320 IOC channel is closed unexpectedly.
 *                        visdhe  ESCAN00090545 Application specific hooks for non-trusted applications are not
 *                                              supported on PowerPC/RH850 architectures.
 *                        visdhe  ESCAN00090546 OSError_* API is not supported on PowerPC architectures in SC3 or SC4.
 *                        viszfa  ESCAN00090602 PanicHook called if interrupt API functions called before StartOS().
 *                        visshk  ESCAN00090624 Core local data is mapped into global OS Section.
 *                        visdfe  ESCAN00090450 Wrong alignment for linker script symbols.
 *  01.01.07  2016-07-22  visasl  ESCAN00090895 The OS API StartCore() does not work on non-AUTOSAR cores.
 *                        vismkk  ESCAN00090890 IOC callback nesting is not supported when sending from callback to a
 *                                              receiver on the local core.
 *                        vismkk  ESCAN00089114 IOC Callbacks for multi receiver configurations are not configurable.
 *                        visrk   ESCAN00089648 Resources are not released during forcible termination of owner thread.
 *                        viszfa  ESCAN00089703 Schedule Table synchronization sporadically fails.
 *                        visrk   ESCAN00090026 Extend ISR epilogue and forcible termination to allow forcible releasing
 *                                              of resources intermixed with spinlocks.
 *                        viszfa  ESCAN00090663 Panic hook called on stack overflow.
 *                        virbiv  ESCAN00090743 Inter-Arrival Time violation for ISR may not be reported.
 *                        virbse  ESCAN00090824 Compiler error: 'RTE_E_NOK' : undeclared identifier.
 *                        visshk  ESCAN00090897 OS API GetCoreID() does not work on non-AUTOSAR cores if Memory
 *                                              Protection is enabled.
 *                        visdfe  ESCAN00090916 Compilation error occurs when using Os.h within a header which is used
 *                                              as include file for Trusted Function stubs.
 *                        virsmn  ESCAN00090935 FPU does not work on PPC derivatives.
 *                        visshk  ESCAN00091390 Interrupt resources are not working (GetResource() and
 *                                              ReleaseResource()).
 *  01.01.08  2016-08-08  virsmn  ESCAN00091137 IOC receive for N:1 function causes memory exception.
 *  01.01.09  2016-08-22  virbiv  WORKITEM6671  Support the Cortex-R on Xilinx Ultrascale ZU9EG (as single core) as
 *                                              development quality.
 *                        virsmn  ESCAN00089169 Stay in waiting state in case of time frame violations.
 *                        vismkk  ESCAN00091224 VTT Synchronizer does not work properly.
 *                        visdhe  WORKITEM8032  Performance improvements on VTT.
 *  01.01.10  2016-09-05  virsmn  ESCAN00089920 Inter-arrival time protection for self-chaining tasks is not provided
 *                        visces  ESCAN00090971 Syscall instruction leads to unpredictable state
 *                        visces  ESCAN00091503 CPU does not run into startup code because reset vector is missing at
 *                                              designated address.
 *                        visces  ESCAN00091490 Parts of OS code are linked to default section ".text" instead of
 *                                              section ".OS_CODE"
 *                        virbse  WORKITEM7244  Improve auto solving actions in OS generator.
 *                        virbse  WORKITEM5608
 *                        visjth  ESCAN00091580 OsSystemIntCtrlPrioOrder is incorrectly synchronized.
 *                        visdhe  WORKITEM5496  Support the Aurix TC3xx devices as development quality.
 *                        visdfe  ESCAN00091362 Generated link scripts for HighTec compiler do not work correctly.
 *  01.02.00  2016-09-19  visasl  WORKITEM6031  Support the Cortex-R (Traveo, single core) devices as QM quality.
 *                        visasl  ESCAN00091238 Incompatibility of Idle Task configuration to RTE Background Task.
 *                        visto   ESCAN00091588 Extend Technical Reference: Os_MemMap.h should be included in MemMap.h
 *                                              manually.
 *                        virsmn  WORKITEM7266  Support the Diab Compiler on PPC.
 *                        virsmn  ESCAN00091721 Unexpected call of ProtectionHook (non-trusted function call).
 *                        virsmn  ESCAN00091722 Unpredictable behaviour on trusted function call.
 *                        visdhe  WORKITEM8043  Provide interrupt source API as ASIL-D quality.
 *                        visrk   WORKITEM8586  Provide Vector Timing Hooks as QM quality.
 *                        virsmn  ESCAN00091825 Category 2 interrupt handling could lead to unpredictable program
 *                                              behaviour.
 *                        visrk   ESCAN00091634 Support ORTI file generation.
 *  01.03.00  2016-09-30  visces  ESCAN00091073 Cat.2 interrupts are still enabled when GetResource is called for an
 *                                              interrupt resource.
 *                        visasl  WORKITEM8970  Support CallTrustedFunction and Peripheral Access API in Pre-Start Task.
 *                        virbse  WORKITEM8430  Provide start and end linker labels for all MemMap sections, which can
 *                                              be used in MPU region configuration.
 *                                              Provide solving actions for MPU configuration in SC3/SC4.
 *                        virsso  ESCAN00091776 A schedule table still triggers its actions after its application is
 *                                              forcibly terminated.
 *                        visdhe  ESCAN00091751 Non-nestable ISRs not working.
 *                        visjth  ESCAN00091538 Race condition of interrupts may lead to an unstable system state in
 *                                              VTTOS.
 *                        visdfe  ESCAN00091598 Linker alignment for interrupt and exception vectors is generated with
 *                                              same amount as for standard code sections.
 *                        vismkk  WORKITEM8709  Consider SIP license in provided solving actions.
 *                        vismkk  ESCAN00091734 Automatically created counter interrupts may have no OS access.
 *  01.04.00  2016-10-20  virsmn  ESCAN00092087 OS counter interrupts are not initialized by OS on PowerPC
 *                        visdhe  ESCAN00091880 Multicore startup fails if core 0 is configured as slave
 *                        visdfe  ESCAN00091778 Multicore not supported on derivatives without consecutive physical
 *                                              core IDs.
 *                        visdfe  ESCAN00092003 GetCoreID returns physical core ID instead of logical core ID
 *                        virsmn  ESCAN00092238 Core MPU on e200z225 core can not be used by OS
 *                        visdhe  WORKITEM7288  Provide virtual master core concept.
 *                        virbiv  ESCAN00091986 TimingProtection not working for ISRs with disabled nesting
 *                        visces  ESCAN00092100 Tasks are not started when using registermode=22 on RH850
 *                        virbiv  WORKITEM9021  Support for ARM Cortex ARMv7M architecture as development quality 
 *                                              using GHS compiler (Reference Derivative: ATMEL SAM v71)
 *  01.04.01  2016-10-28  visdhe  ESCAN00092302 Timing protection ISR terminates with the error OS_STATUS_DISABLEDINT
 *                        visdhe  ESCAN00092399 The OS stays in an endless loop during StartOS, when PCXI is not 
 *                                              initialized with 0.
 *                        visdhe  ESCAN00092117 Output parameter of getter APIs is not modified in case of aggressive 
 *                                              compiler optimization.
 *                        virsmn  ESCAN00092369 Interrupt handling does not work on derivatives with non consecutive 
 *                                              core ids.
 *                        visdhe  ESCAN00092193 Idle task will terminate with "Missing TerminateTask" error by using 
 *                                              Tasking compiler without optimization.
 *                        virsmn  ESCAN00092370 Handling of interrupt could lead to unpredictable behaviour.
 *                        virsmn  WORKITEM9033  Improvements in ARM Cortex ARMv7M support.
 *                        virsso  WORKITEM10100 Improvements in ARM CortexR ZUxxx support.
 *  01.05.00  2016-11-14  visdfe  ESCAN00091978 Usage of OS API ORTI Tracing leads to protection violation in SC3 and
 *                                              SC4 systems.
 *  01.06.00  2016-11-28  visdhe  -             Internal improvements
 *  01.07.00  2016-12-05  virbiv  ESCAN00092530 System freezes during PreStartTask
 *                        visdfe  ESCAN00092195 Unpredictable behavior caused by racing condition when starting the OS
 *                        visjth  ESCAN00092119 Missing external Symbol in Os_Hal_Context_Lcfg.c when configuring
 *                                              Trusted Functions in non privileged Applications
 *                        visjth  ESCAN00092653 Cycle time of OS timers changes after reset
 *                        visjth  ESCAN00091379 Synchronization of Alarms in VTT Dual Target configuration not working
 *                                              when Alarms are deleted by RTE in VttOs
 *                        visjth  ESCAN00092991 OsDerivativeInformation Container duplicated in dual target use case
 *                        visrk   ESCAN00092917 Interrupts are enabled in PreStartTask.
 *                        vismkk  ESCAN00091924 BETA version - the BSW module has a feature with BETA state (Vector
 *                                              Timing Hooks)
 *                        visrk   ESCAN00092380 Interrupt Service Routine is executed although interrupts are disabled.
 *  01.08.00  2016-12-22  virjas  WORKITEM10112 Support PPC QUASAR3.
 *                        virsmn  WORKITEM11027 Support PPC semaphore unit.
 *                        virsmn  ESCAN00093279 Spinlock API does not work properly.
 *                        visces  ESCAN00092010 ReleaseResource restores wrong interrupt level when called in
 *                                              non-nestable ISRs.
 *                        virbiv  WORKITEM7465  Support IAR Compiler on Cortex-M.
 *                        virbiv  ESCAN00093193 Interrupt handler may be delayed by unknown time.
 ***********************************************************************************************************************/

#if !defined (OS_H)                                                                                                     /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module dependencies */
# include "OsInt.h"
# include "Os_Cfg.h"
# include "Os_Types_Lcfg.h"


/* Os kernel module dependencies */

/* Os Hal dependencies */
# include "Os_Hal_Os.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_OS)
/*VCAST_DONT_INSTRUMENT_START*/
#endif

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/
/* Vendor and module identification */
# define OS_VENDOR_ID                            (30u)
# define OS_MODULE_ID                            (0x01u)

/* AUTOSAR Software specification version information */
# define OS_AR_RELEASE_MAJOR_VERSION             (4u)
# define OS_AR_RELEASE_MINOR_VERSION             (2u)
# define OS_AR_RELEASE_REVISION_VERSION          (1u)

/* ----- Component version information ----- */
# define OS_SW_MAJOR_VERSION                     (1u)
# define OS_SW_MINOR_VERSION                     (8u)
# define OS_SW_PATCH_VERSION                     (0u)


/*! OS service: GetElapsedCounterValue() (AUTOSAR backward compatibility) */
# define GetElapsedCounterValue   GetElapsedValue


/* The following API defines are used by the RTE to check whether the API is available. */
/*! OS service: osDisableLevelAM() (Gen6 backward compatibility ESCAN00079751) */
# define osDisableLevelAM         Os_DisableLevelAM
/*! OS service: osDisableLevelKM() (Gen6 backward compatibility ESCAN00079751) */
# define osDisableLevelKM         Os_DisableLevelKM
/*! OS service: osDisableLevelUM() (Gen6 backward compatibility ESCAN00079751) */
# define osDisableLevelUM         Os_DisableLevelUM
/*! OS service: osEnableLevelAM() (Gen6 backward compatibility ESCAN00079751) */
# define osEnableLevelAM          Os_EnableLevelAM
/*! OS service: osEnableLevelKM() (Gen6 backward compatibility ESCAN00079751) */
# define osEnableLevelKM          Os_EnableLevelKM
/*! OS service: osEnableLevelUM() (Gen6 backward compatibility ESCAN00079751) */
# define osEnableLevelUM          Os_EnableLevelUM
/*! OS service: osDisableGlobalAM() (Gen6 backward compatibility ESCAN00079751) */
# define osDisableGlobalAM        Os_DisableGlobalAM
/*! OS service: osDisableGlobalKM() (Gen6 backward compatibility ESCAN00079751) */
# define osDisableGlobalKM        Os_DisableGlobalKM
/*! OS service: osDisableGlobalUM() (Gen6 backward compatibility ESCAN00079751) */
# define osDisableGlobalUM        Os_DisableGlobalUM
/*! OS service: osEnableGlobalAM() (Gen6 backward compatibility ESCAN00079751) */
# define osEnableGlobalAM         Os_EnableGlobalAM
/*! OS service: osEnableGlobalKM() (Gen6 backward compatibility ESCAN00079751) */
# define osEnableGlobalKM         Os_EnableGlobalKM
/*! OS service: osEnableGlobalUM() (Gen6 backward compatibility ESCAN00079751) */
# define osEnableGlobalUM         Os_EnableGlobalUM


/*! OS service: osDisableInterruptSource() (Gen6 backward compatibility) */
# define osDisableInterruptSource Os_DisableInterruptSource
/*! OS service: osEnableInterruptSource() (Gen6 backward compatibility) */
# define osEnableInterruptSource  Os_EnableInterruptSource
/*! OS service: osDisableInterruptSource() (Gen6 backward compatibility) */
# define osClearPendingInterrupt  Os_ClearPendingInterrupt
/*! OS service: osIsInterruptSourceEnabled() (Gen6 backward compatibility) */
# define osIsInterruptSourceEnabled  Os_IsInterruptSourceEnabled
/*! OS service: osIsInterruptPending() (Gen6 backward compatibility) */
# define osIsInterruptPending  Os_IsInterruptPending


#if OS_CFG_PERIPHERAL_COMPATIBILITY == STD_ON
/*! OS service: osReadPeripheral8() (Gen6 backward compatibility) */
# define osReadPeripheral8        Os_ReadPeripheral8
/*! OS service: osReadPeripheral16() (Gen6 backward compatibility) */
# define osReadPeripheral16       Os_ReadPeripheral16
/*! OS service: osReadPeripheral32() (Gen6 backward compatibility) */
# define osReadPeripheral32       Os_ReadPeripheral32
/*! OS service: osWritePeripheral8() (Gen6 backward compatibility) */
# define osWritePeripheral8       Os_WritePeripheral8
/*! OS service: osWritePeripheral16() (Gen6 backward compatibility) */
# define osWritePeripheral16      Os_WritePeripheral16
/*! OS service: osWritePeripheral32() (Gen6 backward compatibility) */
# define osWritePeripheral32      Os_WritePeripheral32
/*! OS service: osModifyPeripheral8() (Gen6 backward compatibility) */
# define osModifyPeripheral8      Os_ModifyPeripheral8
/*! OS service: osModifyPeripheral16() (Gen6 backward compatibility) */
# define osModifyPeripheral16     Os_ModifyPeripheral16
/*! OS service: osModifyPeripheral32() (Gen6 backward compatibility) */
# define osModifyPeripheral32     Os_ModifyPeripheral32
#endif

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

# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */


/***********************************************************************************************************************
 *  Os_GetVersionInfo()
 **********************************************************************************************************************/
/*! \brief        AUTOSAR Get Version Information API.
 *  \details      For further details see Os_Api_GetVersionInfo().
 *
 *  \param[out]   versioninfo   See Os_Api_GetVersionInfo().
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetVersionInfo().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_GetVersionInfo
(
  Std_VersionInfoType *versioninfo
);


/***********************************************************************************************************************
 *  Os_InitMemory()
 **********************************************************************************************************************/
/*! \brief        Proprietary initialization function to optimize startup code.
 *  \details      For further details see Os_Api_InitMemory().
 *
 *  \context      INIT
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_InitMemory().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_InitMemory
(
  void
);


/***********************************************************************************************************************
 *  Os_Init()
 **********************************************************************************************************************/
/*! \brief        AUTOSAR Initialization Interface.
 *  \details      For further details see Os_Api_Init().
 *
 *  \context      INIT
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_Init().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Init
(
  void
);


/***********************************************************************************************************************
 *  Os_EnterPreStartTask()
 **********************************************************************************************************************/
/*! \brief        This function performs a minimum initialization to be able to call non-trusted functions before
 *                StartOS().
 *  \details      For further details see Os_Api_EnterPreStartTask().
 *
 *  \context      INIT
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_EnterPreStartTask().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_EnterPreStartTask
(
  void
);

/***********************************************************************************************************************
 *  StartCore()
 **********************************************************************************************************************/
/*! \brief        OS service StartCore().
 *  \details      For further details see Os_Api_StartCore().
 *
 *  \param[in]    CoreID  See Os_Api_StartCore().
 *  \param[out]   Status  See Os_Api_StartCore().
 *
 *  \return       See Os_Api_StartCore().
 *
 *  \context      INIT
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_StartCore().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) StartCore
(
  CoreIdType CoreID,
  StatusType *Status
);


/***********************************************************************************************************************
 *  StartNonAutosarCore()
 **********************************************************************************************************************/
/*! \brief        OS service StartNonAutosarCore().
 *  \details      For further details see Os_Api_StartNonAutosarCore().
 *
 *  \param[in]    CoreID  See Os_Api_StartNonAutosarCore().
 *  \param[out]   Status  See Os_Api_StartNonAutosarCore().
 *
 *  \return       See Os_Api_StartNonAutosarCore().
 *
 *  \context      INIT
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_StartNonAutosarCore().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) StartNonAutosarCore
(
  CoreIdType CoreID,
  StatusType *Status
);


/***********************************************************************************************************************
 *  GetCoreID()
 **********************************************************************************************************************/
/*! \brief        OS service GetCoreID().
 *  \details      For further details see Os_Api_GetCoreID().
 *
 *  \return       See Os_Api_GetCoreID().
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetCoreID().
 **********************************************************************************************************************/
FUNC(CoreIdType, OS_CODE) GetCoreID
(
  void
);


/***********************************************************************************************************************
 *  GetNumberOfActivatedCores()
 **********************************************************************************************************************/
/*! \brief        OS service GetNumberOfActivatedCores().
 *  \details      For further details see Os_Api_GetNumberOfActivatedCores().
 *
 *  \return       See Os_Api_GetNumberOfActivatedCores().
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetNumberOfActivatedCores().
 **********************************************************************************************************************/
FUNC(uint32, OS_CODE) GetNumberOfActivatedCores
(
  void
);


/***********************************************************************************************************************
 *  GetActiveApplicationMode()
 **********************************************************************************************************************/
/*! \brief        OS service GetActiveApplicationMode().
 *  \details      For further details see Os_Api_GetActiveApplicationMode().
 *
 *  \return       See Os_Api_GetActiveApplicationMode().
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetActiveApplicationMode().
 **********************************************************************************************************************/
FUNC(AppModeType, OS_CODE) GetActiveApplicationMode
(
  void
);


/***********************************************************************************************************************
 *  StartOS()
 **********************************************************************************************************************/
/*! \brief        OS service StartOS().
 *  \details      For further details see Os_Api_StartOS().
 *
 *  \param[in]    Mode    See Os_Api_StartOS().
 *
 *  \context      INIT
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_StartOS().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) StartOS
(
  AppModeType Mode
);


/***********************************************************************************************************************
 *  ShutdownOS()
 **********************************************************************************************************************/
/*! \brief        OS service ShutdownOS().
 *  \details      For further details see Os_Api_ShutdownOS().
 *
 *  \param[in]    Error   See Os_Api_ShutdownOS().
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_ShutdownOS().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) ShutdownOS
(
  StatusType Error
);


/***********************************************************************************************************************
 *  ShutdownAllCores()
 **********************************************************************************************************************/
/*! \brief        OS service ShutdownAllCores().
 *  \details      For further details see Os_Api_ShutdownAllCores().
 *
 *  \param[in]    Error    See Os_Api_ShutdownAllCores().
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_ShutdownAllCores().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) ShutdownAllCores
(
  StatusType Error
);


/***********************************************************************************************************************
 *  ControlIdle()
 **********************************************************************************************************************/
/*! \brief        OS service ControlIdle().
 *  \details      For further details see Os_Api_ControlIdle().
 *
 *  \param[in]    CoreID    See Os_Api_ControlIdle().
 *  \param[in]    IdleMode  See Os_Api_ControlIdle().
 *
 *  \retval       E_OK                No error.
 *  \retval       E_OS_ID             (EXTENDED status): Invalid core and/or invalid IdleMode.
 *  \retval       E_OS_CALLEVEL       (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT    (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_ControlIdle().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) ControlIdle
(
  CoreIdType CoreID,
  IdleModeType IdleMode
);


/***********************************************************************************************************************
 *  Os_GetUnhandledIrq()
 **********************************************************************************************************************/
/*! \brief        Proprietary OS service Os_GetUnhandledIrq().
 *  \details      For further details see Os_Api_GetUnhandledIrq().
 *
 *  \param[out]   InterruptSource   See Os_Api_GetUnhandledIrq().
 *
 *  \return       See Os_Api_GetUnhandledIrq().
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetUnhandledIrq().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) Os_GetUnhandledIrq
(
  Os_InterruptSourceIdRefType InterruptSource
);


/***********************************************************************************************************************
 *  Os_GetUnhandledExc()
 **********************************************************************************************************************/
/*! \brief        Proprietary OS service Os_GetUnhandledExc().
 *  \details      For further details see Os_Api_GetUnhandledExc().
 *
 *  \param[out]   ExceptionSource   See Os_GetUnhandledExc().
 *
 *  \return       See Os_Api_GetUnhandledExc().
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetUnhandledExc().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) Os_GetUnhandledExc
(
  Os_ExceptionSourceIdRefType ExceptionSource
);


/***********************************************************************************************************************
 *  Os_GetTaskStackUsage()
 **********************************************************************************************************************/
/*! \brief        Get the current stack usage of the given task.
 *  \details      For further details see Os_Api_GetTaskStackUsage().
 *
 *  \param[in]    TaskID        See Os_Api_GetTaskStackUsage().
 *
 *  \return       See Os_Api_GetTaskStackUsage().
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetTaskStackUsage().
 **********************************************************************************************************************/
FUNC(uint32, OS_CODE) Os_GetTaskStackUsage
(
  TaskType TaskID
);


/***********************************************************************************************************************
 *  Os_GetISRStackUsage()
 **********************************************************************************************************************/
/*! \brief        Get the current stack usage of the given ISR.
 *  \details      For further details see Os_Api_GetISRStackUsage().
 *
 *  \param[in]    IsrID         See Os_Api_GetISRStackUsage().
 *
 *  \return       See Os_Api_GetISRStackUsage().
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetISRStackUsage().
 **********************************************************************************************************************/
FUNC(uint32, OS_CODE) Os_GetISRStackUsage
(
  ISRType IsrID
);


/***********************************************************************************************************************
 *  Os_GetKernelStackUsage()
 **********************************************************************************************************************/
/*! \brief        Get the current kernel stack usage on the given core.
 *  \details      For further details see Os_Api_GetKernelStackUsage().
 *
 *  \param[in]    CoreID         See Os_Api_GetKernelStackUsage().
 *
 *  \return       See Os_Api_GetKernelStackUsage().
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetKernelStackUsage().
 **********************************************************************************************************************/
FUNC(uint32, OS_CODE) Os_GetKernelStackUsage
(
  CoreIdType CoreID
);


/***********************************************************************************************************************
 *  Os_GetStartupHookStackUsage()
 **********************************************************************************************************************/
/*! \brief        Get the current startup hook stack usage on the given core.
 *  \details      For further details see Os_Api_GetStartupHookStackUsage().
 *
 *  \param[in]    CoreID         See Os_Api_GetStartupHookStackUsage().
 *
 *  \return       See Os_Api_GetStartupHookStackUsage().
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetStartupHookStackUsage().
 **********************************************************************************************************************/
FUNC(uint32, OS_CODE) Os_GetStartupHookStackUsage
(
  CoreIdType CoreID
);


/***********************************************************************************************************************
 *  Os_GetErrorHookStackUsage()
 **********************************************************************************************************************/
/*! \brief        Get the current error hook stack usage on the given core.
 *  \details      For further details see Os_Api_GetErrorHookStackUsage()
 *
 *  \param[in]    CoreID         See Os_Api_GetErrorHookStackUsage().
 *
 *  \return       See Os_Api_GetErrorHookStackUsage().
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetErrorHookStackUsage().
 **********************************************************************************************************************/
FUNC(uint32, OS_CODE) Os_GetErrorHookStackUsage
(
  CoreIdType CoreID
);


/***********************************************************************************************************************
 *  Os_GetShutdownHookStackUsage()
 **********************************************************************************************************************/
/*! \brief        Get the current shutdown hook stack usage on the given core.
 *  \details      For further details see Os_Api_GetShutdownHookStackUsage().
 *
 *  \param[in]    CoreID         See Os_Api_GetShutdownHookStackUsage().
 *
 *  \return       See Os_Api_GetShutdownHookStackUsage().
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetShutdownHookStackUsage().
 **********************************************************************************************************************/
FUNC(uint32, OS_CODE) Os_GetShutdownHookStackUsage
(
  CoreIdType CoreID
);


/***********************************************************************************************************************
 *  Os_GetProtectionHookStackUsage()
 **********************************************************************************************************************/
/*! \brief        Get the current protection hook stack usage on the given core.
 *  \details      For further details see Os_Api_GetProtectionHookStackUsage().
 *
 *  \param[in]    CoreID         See Os_Api_GetProtectionHookStackUsage().
 *
 *  \return       See Os_Api_GetProtectionHookStackUsage().
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetProtectionHookStackUsage().
 **********************************************************************************************************************/
FUNC(uint32, OS_CODE) Os_GetProtectionHookStackUsage
(
  CoreIdType CoreID
);


/***********************************************************************************************************************
 *  GetSpinlock()
 **********************************************************************************************************************/
/*! \brief        OS service GetSpinlock().
 *  \details      For further details see Os_Api_GetSpinlock().
 *
 *  \param[in]    SpinlockId        See Os_Api_GetSpinlock().
 *
 *  \retval       E_OK              No error.
 *  \retval       E_OS_ID           (EXTENDED status:) Invalid SpinlockID.
 *  \retval       E_OS_INTERFERENCE_DEADLOCK (EXTENDED status:) Spinlock already occupied by a task/ISR
 *                                                              of the same core.
 *  \retval       E_OS_NESTING_DEADLOCK      (EXTENDED status:) Invalid Spinlock allocation order.
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_ACCESS       (Service Protection:)
 *                                    - Caller's access rights are not sufficient.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetSpinlock().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) GetSpinlock(SpinlockIdType SpinlockId);


/***********************************************************************************************************************
 *  ReleaseSpinlock()
 **********************************************************************************************************************/
/*! \brief        OS service ReleaseSpinlock().
 *  \details      For further details see Os_Api_ReleaseSpinlock().
 *
 *  \param[in]    SpinlockId        See Os_Api_ReleaseSpinlock().
 *
 *  \retval       E_OK              No error.
 *  \retval       E_OS_ID           (EXTENDED status:) Invalid SpinlockID.
 *  \retval       E_OS_STATE        (EXTENDED status:) The caller is not the owner of the given spinlock.
 *  \retval       E_OS_NOFUNC       (EXTENDED status:) The caller tries to release a spinlock while another spinlock has
 *                                  to be released before.
 *  \retval       E_OS_RESOURCE     (EXTENDED status:) Spinlock and Resource API not used in LIFO order.
 *  \retval       E_OS_ACCESS       (Service Protection:) Caller's access rights are not sufficient. This
 *                                  error may occur in combination with trusted functions.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_ReleaseSpinlock().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) ReleaseSpinlock(SpinlockIdType SpinlockId);


/***********************************************************************************************************************
 *  TryToGetSpinlock()
 **********************************************************************************************************************/
/*! \brief        OS service TryToGetSpinlock().
 *  \details      For further details see Os_Api_TryToGetSpinlock().
 *
 *  \param[in]    SpinlockId        See Os_Api_TryToGetSpinlock().
 *  \param[out]   Success           See Os_Api_TryToGetSpinlock().
 *
 *  \retval       E_OK              No error.
 *  \retval       E_OS_ID           (EXTENDED status:) Invalid SpinlockID.
 *  \retval       E_OS_INTERFERENCE_DEADLOCK (EXTENDED status:) Spinlock already occupied by a task/ISR
 *                                                              of the same core.
 *  \retval       E_OS_NESTING_DEADLOCK      (EXTENDED status:) Invalid Spinlock allocation order.
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_ACCESS       (Service Protection:)
 *                                    - Caller's access rights are not sufficient.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_TryToGetSpinlock().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) TryToGetSpinlock
(
  SpinlockIdType SpinlockId,
  TryToGetSpinlockType* Success
);


/***********************************************************************************************************************
 *  DisableAllInterrupts()
 **********************************************************************************************************************/
/*! \brief        OS service DisableAllInterrupts().
 *  \details      For further details see
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_DisableAllInterrupts().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) DisableAllInterrupts(void);


/***********************************************************************************************************************
 *  EnableAllInterrupts()
 **********************************************************************************************************************/
/*! \brief        OS service EnableAllInterrupts().
 *  \details      For further details see Os_Api_EnableAllInterrupts().
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_EnableAllInterrupts().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) EnableAllInterrupts(void);


/***********************************************************************************************************************
 *  SuspendAllInterrupts()
 **********************************************************************************************************************/
/*! \brief        OS service SuspendAllInterrupts().
 *  \details      For further details see Os_Api_SuspendAllInterrupts().
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_SuspendAllInterrupts().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) SuspendAllInterrupts(void);


/***********************************************************************************************************************
 *  ResumeAllInterrupts()
 **********************************************************************************************************************/
/*! \brief        OS service ResumeAllInterrupts().
 *  \details      For further details see Os_Api_ResumeAllInterrupts().
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_ResumeAllInterrupts().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) ResumeAllInterrupts(void);


/***********************************************************************************************************************
 *  SuspendOSInterrupts()
 **********************************************************************************************************************/
/*! \brief        OS service SuspendOSInterrupts().
 *  \details      For further details see SuspendOSInterrupts().
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See SuspendOSInterrupts().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) SuspendOSInterrupts(void);


/***********************************************************************************************************************
 *  ResumeOSInterrupts()
 **********************************************************************************************************************/
/*! \brief        OS service ResumeOSInterrupts().
 *  \details      For further details see Os_Api_ResumeOSInterrupts().
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_ResumeOSInterrupts().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) ResumeOSInterrupts(void);


/***********************************************************************************************************************
 *  Os_DisableLevelAM()
 **********************************************************************************************************************/
/*! \brief        OS service DisableLevel().
 *  \details      This function shall be used, if the caller's mode (user or kernel) is unknown at implementation time.
 *                For further details see Os_Api_DisableLevel().
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See DisableLevel().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_DisableLevelAM(void);


/***********************************************************************************************************************
 *  Os_DisableLevelKM()
 **********************************************************************************************************************/
/*! \brief        OS service DisableLevel().
 *  \details      This function shall be used, if the caller runs in kernel mode.
 *                For further details see Os_Api_DisableLevel().
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See DisableLevel().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_DisableLevelKM(void);


/***********************************************************************************************************************
 *  Os_DisableLevelUM()
 **********************************************************************************************************************/
/*! \brief        OS service DisableLevel().
 *  \details      This function shall be used, if the caller runs in user mode.
 *                For further details see Os_Api_DisableLevel().
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See DisableLevel().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_DisableLevelUM(void);


/***********************************************************************************************************************
 *  Os_EnableLevelAM()
 **********************************************************************************************************************/
/*! \brief        OS service EnableLevel().
 *  \details      This function shall be used, if the caller's mode (user or kernel) is unknown at implementation time.
 *                For further details see Os_Api_EnableLevel().
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See EnableLevel().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_EnableLevelAM(void);


/***********************************************************************************************************************
 *  Os_EnableLevelKM()
 **********************************************************************************************************************/
/*! \brief        OS service EnableLevel().
 *  \details      This function shall be used, if the caller runs in kernel mode.
 *                For further details see Os_Api_EnableLevel().
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See EnableLevel().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_EnableLevelKM(void);


/***********************************************************************************************************************
 *  Os_EnableLevelUM()
 **********************************************************************************************************************/
/*! \brief        OS service EnableLevel().
 *  \details      This function shall be used, if the caller runs in user mode.
 *                For further details see Os_Api_EnableLevel().
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See EnableLevel().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_EnableLevelUM(void);


/***********************************************************************************************************************
 *  Os_DisableGlobalAM()
 **********************************************************************************************************************/
/*! \brief        OS service DisableGlobal().
 *  \details      This function shall be used, if the caller's mode (user or kernel) is unknown at implementation time.
 *                For further details see Os_Api_DisableGlobal().
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See DisableGlobal().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_DisableGlobalAM(void);


/***********************************************************************************************************************
 *  Os_DisableGlobalKM()
 **********************************************************************************************************************/
/*! \brief        OS service DisableGlobal().
 *  \details      This function shall be used, if the caller runs in kernel mode.
 *                For further details see Os_Api_DisableGlobal().
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See DisableGlobal().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_DisableGlobalKM(void);


/***********************************************************************************************************************
 *  Os_DisableGlobalUM()
 **********************************************************************************************************************/
/*! \brief        OS service DisableGlobal().
 *  \details      This function shall be used, if the caller runs in user mode.
 *                For further details see Os_Api_DisableGlobal().
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See DisableGlobal().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_DisableGlobalUM(void);


/***********************************************************************************************************************
 *  Os_EnableGlobalAM()
 **********************************************************************************************************************/
/*! \brief        OS service EnableGlobal().
 *  \details      This function shall be used, if the caller's mode (user or kernel) is unknown at implementation time.
 *                For further details see Os_Api_EnableGlobal().
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See EnableGlobal().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_EnableGlobalAM(void);


/***********************************************************************************************************************
 *  Os_EnableGlobalKM()
 **********************************************************************************************************************/
/*! \brief        OS service EnableGlobal().
 *  \details      This function shall be used, if the caller runs in kernel mode.
 *                For further details see Os_Api_EnableGlobal().
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See EnableGlobal().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_EnableGlobalKM(void);


/***********************************************************************************************************************
 *  Os_EnableGlobalUM()
 **********************************************************************************************************************/
/*! \brief        OS service EnableGlobal().
 *  \details      This function shall be used, if the caller runs in user mode.
 *                For further details see Os_Api_EnableGlobal().
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See EnableGlobal().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_EnableGlobalUM(void);



/***********************************************************************************************************************
 *  Os_DisableInterruptSource()
 **********************************************************************************************************************/
/*! \brief        OS service Os_DisableInterruptSource().
 *  \details      For further details see Os_Api_DisableInterruptSource().
 *
 *  \param[in]    ISRID   Category 2 ISR which shall be disabled.
 *
 *  \retval       E_OK                No error.
 *  \retval       E_OS_CALLEVEL       (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_ID             (EXTENDED status:) Invalid ISRID.
 *  \retval       E_OS_ACCESS         (Service Protection:)
 *                                      - Caller's access rights are not sufficient.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_DisableInterruptSource().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) Os_DisableInterruptSource
(
  ISRType ISRID
);


/***********************************************************************************************************************
 *  Os_EnableInterruptSource()
 **********************************************************************************************************************/
/*! \brief        OS service Os_EnableInterruptSource().
 *  \details      For further details see Os_Api_EnableInterruptSource().
 *
 *  \param[in]    ISRID   Category 2 ISR which shall be enabled.
 *  \param[in]    ClearPending  Defines whether the pending flag shall be cleared (TRUE) or not (FALSE).
 *
 *  \retval       E_OK                No error.
 *  \retval       E_OS_SYS_UNIMPLEMENTED_FUNCTIONALITY (EXTENDED status:)    Hardware does not support to clear
 *                                                                           pending interrupts.
 *  \retval       E_OS_CALLEVEL                        (EXTENDED status:)    Called from invalid context.
 *  \retval       E_OS_ID                              (EXTENDED status:)    Invalid ISRID.
 *  \retval       E_OS_VALUE                           (EXTENDED status:)    ClearPending is neither TRUE nor FALSE.
 *  \retval       E_OS_ACCESS                          (Service Protection:) Caller's access rights are not sufficient.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_EnableInterruptSource().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) Os_EnableInterruptSource
(
  ISRType ISRID,
  boolean ClearPending
);


/***********************************************************************************************************************
 *  Os_ClearPendingInterrupt()
 **********************************************************************************************************************/
/*! \brief        OS service Os_ClearPendingInterrupt().
 *  \details      For further details see Os_Api_ClearPendingInterrupt().
 *
 *  \param[in]    ISRID         Category 2 ISR that's pending flag shall be cleared.
 *
 *  \retval       E_OK                No error.
 *  \retval       E_OS_SYS_UNIMPLEMENTED_FUNCTIONALITY (EXTENDED status:)    Hardware does not support to clear
 *                                                                           pending interrupts.
 *  \retval       E_OS_CALLEVEL                        (EXTENDED status:)    Called from invalid context.
 *  \retval       E_OS_ID                              (EXTENDED status:)    Invalid ISRID.
 *  \retval       E_OS_ACCESS                          (Service Protection:) Caller's access rights are not sufficient.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_ClearPendingInterrupt().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) Os_ClearPendingInterrupt
(
  ISRType ISRID
);


/***********************************************************************************************************************
 *  Os_IsInterruptSourceEnabled()
 **********************************************************************************************************************/
/*! \brief        OS service Os_IsInterruptSourceEnabled().
 *  \details      For further details see Os_Api_IsInterruptSourceEnabled().
 *
 *  \param[in]    ISRID      Category 2 ISR that shall be checked if enabled or not.
 *  \param[out]   IsEnabled  Defines whether the source of the ISR is enabled (TRUE) or not (FALSE).
 *
 *  \retval       E_OK                                                       No error.
 *  \retval       E_OS_CALLEVEL                        (EXTENDED status:)    Called from invalid context.
 *  \retval       E_OS_ID                              (EXTENDED status:)    Invalid ISRID.
 *  \retval       E_OS_PARAM_POINTER                   (EXTENDED status:)    Given pointer parameter (IsEnabled) is NULL.
 *  \retval       E_OS_ACCESS                          (Service Protection:) Caller's access rights are not sufficient.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_IsInterruptSourceEnabled().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) Os_IsInterruptSourceEnabled
(
  ISRType ISRID,
  P2VAR(boolean, AUTOMATIC, OS_VAR_NOINIT) IsEnabled
);


/***********************************************************************************************************************
 *  Os_IsInterruptPending()
 **********************************************************************************************************************/
/*! \brief        OS service Os_IsInterruptPending().
 *  \details      For further details see Os_Api_IsInterruptPending().
 *
 *  \param[in]    ISRID      Category 2 ISR that shall be checked if has been requested.
 *  \param[out]   IsPending  Defines whether the given ISR request is pending (TRUE) or not (FALSE).
 *
 *  \retval       E_OK                                                       No error.
 *  \retval       E_OS_SYS_UNIMPLEMENTED_FUNCTIONALITY (EXTENDED status:)    Hardware does not support to clear
 *                                                                           pending interrupts.
 *  \retval       E_OS_CALLEVEL                        (EXTENDED status:)    Called from invalid context.
 *  \retval       E_OS_ID                              (EXTENDED status:)    Invalid ISRID.
 *  \retval       E_OS_PARAM_POINTER                   (EXTENDED status:)    Given pointer parameter (IsEnabled) is NULL.
 *  \retval       E_OS_ACCESS                          (Service Protection:) Caller's access rights are not sufficient.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_IsInterruptPending().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) Os_IsInterruptPending
(
  ISRType ISRID,
  P2VAR(boolean, AUTOMATIC, OS_VAR_NOINIT) IsPending
);


/***********************************************************************************************************************
 *  ActivateTask()
 **********************************************************************************************************************/
/*! \brief        OS service ActivateTask().
 *  \details      For further details see Os_Api_ActivateTask().
 *
 *  \param[in]    TaskID            See Os_Api_ActivateTask()
 *
 *  \retval       E_OK              No error.
 *  \retval       E_OS_LIMIT        Too many task activations.
 *  \retval       E_OS_ID           (EXTENDED status:) Invalid TaskID.
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT  (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       E_OS_ACCESS       (Service Protection:)
 *                                    - Caller's access rights are not sufficient.
 *                                    - Given task's owner application is not accessible.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE, if the given TaskID belongs to local core.
 *
 *  \pre          See ActivateTask().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) ActivateTask
(
  TaskType TaskID
);


/***********************************************************************************************************************
 *  TerminateTask()
 **********************************************************************************************************************/
/*! \brief        OS service TerminateTask().
 *  \details      For further details see Os_Api_TerminateTask().
 *
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_RESOURCE     (EXTENDED status:) Task still occupies resources.
 *  \retval       E_OS_SPINLOCK     (EXTENDED status:) Task still holds spinlocks.
 *  \retval       E_OS_DISABLEDINT  (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See TerminateTask().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) TerminateTask
(
    void
);


/***********************************************************************************************************************
 *  ChainTask()
 **********************************************************************************************************************/
/*! \brief        OS service ChainTask().
 *  \details      See Os_Api_ChainTask().
 *
 *  \param[in]    TaskID            The task which shall be activated.
 *
 *  \retval       E_OS_LIMIT        Too many task activations.
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_RESOURCE     (EXTENDED status:) Task still occupies resources.
 *  \retval       E_OS_SPINLOCK     (EXTENDED status:) Task still holds spinlocks.
 *  \retval       E_OS_ID           (EXTENDED status:) Invalid TaskID.
 *  \retval       E_OS_DISABLEDINT  (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       E_OS_ACCESS       (Service Protection:)
 *                                    - Caller's access rights are not sufficient.
 *                                    - Given task's owner application is not accessible.
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE, if the given TaskID belongs to local core.
 *
 *  \pre          See Os_Api_ChainTask().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) ChainTask
(
  TaskType TaskID
);


/***********************************************************************************************************************
 *  Schedule()
 **********************************************************************************************************************/
/*! \brief        OS service Schedule().
 *  \details      For further details see Os_Api_Schedule().
 *
 *  \retval       E_OK              No Error.
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) The service was called from any context which is not allowed.
 *  \retval       E_OS_RESOURCE     (EXTENDED status:) The service was called from a task which holds an OS resource.
 *  \retval       E_OS_SPINLOCK     (EXTENDED status:) The service was called from a task which holds a spinlock.
 *  \retval       E_OS_DISABLEDINT  (Service Protection:) The service was called with disabled interrupts.
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_Schedule().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) Schedule(void);


/***********************************************************************************************************************
 *  GetTaskID()
 **********************************************************************************************************************/
/*! \brief        OS service GetTaskID().
 *  \details      For further details see Os_Api_GetTaskID().
 *
 *  \param[out]   TaskID              See Os_Api_GetTaskID().
 *
 *  \retval       E_OK                No error.
 *  \retval       E_OS_CALLEVEL       (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_PARAM_POINTER  (EXTENDED status:) Given pointer is NULL.
 *  \retval       E_OS_DISABLEDINT    (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetTaskID().
 *
 *  \trace        SPEC-64000
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) GetTaskID(TaskRefType TaskID);


/***********************************************************************************************************************
 *  GetTaskState()
 **********************************************************************************************************************/
/*! \brief        OS service GetTaskState().
 *  \details      For further details see Os_Api_GetTaskState().
 *
 *  \param[in]    TaskID          See Os_Api_GetTaskState().
 *  \param[out]   State           See Os_Api_GetTaskState().
 *
 *  \retval       E_OK                No error.
 *  \retval       E_OS_CALLEVEL       (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_ID             (EXTENDED status:) Invalid TaskID.
 *  \retval       E_OS_PARAM_POINTER  (EXTENDED status:) Given pointer is NULL.
 *  \retval       E_OS_DISABLEDINT    (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       E_OS_ACCESS         (Service Protection:)
 *                                      - Caller's access rights are not sufficient.
 *                                      - Given task's owner application is not accessible.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetTaskState().
 *
 *  \trace        SPEC-64000
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) GetTaskState(TaskType TaskID, TaskStateRefType State);


/***********************************************************************************************************************
 *  GetISRID()
 **********************************************************************************************************************/
/*! \brief        OS service GetISRID().
 *  \details      For further details see Os_Api_GetISRID().
 *
 *  \return       See Os_Api_GetISRID().
 *
 *  \context      TASK|ISR2|ERRHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetISRID().
 **********************************************************************************************************************/
FUNC(ISRType, OS_CODE) GetISRID(void);


/***********************************************************************************************************************
 *  SetEvent()
 **********************************************************************************************************************/
/*! \brief        OS service SetEvent().
 *  \details      For further details see Os_Api_SetEvent().
 *
 *  \param[in]    TaskID          See Os_Api_SetEvent().
 *  \param[in]    Mask            See Os_Api_SetEvent().
 *
 *  \retval       E_OK                No error.
 *  \retval       E_OS_ID             (EXTENDED status:) Invalid TaskID.
 *  \retval       E_OS_ACCESS         (EXTENDED status:)
 *                                      - Task is no extended task.
 *                                    (Service Protection:)
 *                                      - Task's owner application is not accessible.
 *                                      - Caller's access rights are not sufficient.
 *  \retval       E_OS_STATE          (EXTENDED status:) Events can not be set as the referenced task is in the
 *                                    SUSPENDED state.
 *  \retval       E_OS_CALLEVEL       (Service Protection:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT    (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_SetEvent().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) SetEvent
(
  TaskType TaskID,
  EventMaskType Mask
);



/***********************************************************************************************************************
 *  ClearEvent()
 **********************************************************************************************************************/
/*! \brief        OS service ClearEvent().
 *  \details      For further details see Os_Api_ClearEvent().
 *
 *  \param[in]    Mask                See Os_Api_ClearEvent().
 *
 *  \retval       E_OK                No error.
 *  \retval       E_OS_ACCESS         (EXTENDED status:) Task is no extended task.
 *  \retval       E_OS_CALLEVEL       (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT    (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_ClearEvent().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) ClearEvent
(
  EventMaskType Mask
);


/***********************************************************************************************************************
 *  GetEvent()
 **********************************************************************************************************************/
/*! \brief        OS service GetEvent().
 *  \details      For further details see Os_Api_GetEvent().
 *
 *  \param[in]    TaskID          See Os_Api_GetEvent().
 *  \param[out]   Mask            See Os_Api_GetEvent().
 *
 *  \retval       E_OK                No error.
 *  \retval       E_OS_PARAM_POINTER  (EXTENDED status:) Given pointer is NULL.
 *  \retval       E_OS_ID             (EXTENDED status:) Invalid TaskID.
 *  \retval       E_OS_ACCESS         (EXTENDED status:)
 *                                      - Task is no extended task.
 *                                    (Service Protection:)
 *                                      - Task's owner application is not accessible.
 *                                      - Caller's access rights are not sufficient.
 *  \retval       E_OS_STATE          (EXTENDED status:) Referenced task is in SUSPENDED state.
 *  \retval       E_OS_CALLEVEL       (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT    (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetEvent().
 *
 *  \trace        SPEC-64000
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) GetEvent
(
  TaskType TaskID,
  EventMaskRefType Mask
);


/***********************************************************************************************************************
 *  WaitEvent()
 **********************************************************************************************************************/
/*! \brief        OS service WaitEvent().
 *  \details      For further details see Os_Api_WaitEvent().
 *
 *  \param[in]    Mask  See Os_Api_WaitEvent().
 *
 *  \retval       E_OK              No error.
 *  \retval       E_OS_ACCESS       (EXTENDED status:) Task is no extended task.
 *  \retval       E_OS_RESOURCE     (EXTENDED status:) Task still occupies resources.
 *  \retval       E_OS_SPINLOCK     (EXTENDED status:) Task still holds spinlocks.
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT  (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_WaitEvent().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) WaitEvent
(
  EventMaskType Mask
);


/***********************************************************************************************************************
 *  IncrementCounter()
 **********************************************************************************************************************/
/*! \brief      OS service IncrementCounter().
 *  \details    For further details see Os_Api_IncrementCounter().
 *
 *  \param[in]    CounterID           See Os_Api_IncrementCounter().
 *
 *  \retval       E_OK                No Error.
 *  \retval       E_OS_ID             (EXTENDED status:) CounterID is not a valid software counter ID.
 *  \retval       E_OS_CALLEVEL       (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_CORE           (EXTENDED status:) The given object belongs to a foreign core.
 *  \retval       E_OS_ACCESS         (Service Protection:)
 *                                      - Caller's access rights are not sufficient.
 *                                      - Given counter's owner application is not accessible.
 *  \retval       E_OS_DISABLEDINT    (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_IncrementCounter().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) IncrementCounter
(
  CounterType CounterID
);


/***********************************************************************************************************************
 *  GetCounterValue()
 **********************************************************************************************************************/
/*! \brief      OS service GetCounterValue().
 *  \details    For further details see Os_Api_GetCounterValue().
 *
 *  \param[in]    CounterID   See Os_Api_GetCounterValue().
 *  \param[out]   Value       See Os_Api_GetCounterValue().
 *
 *  \retval       E_OK                No Error.
 *  \retval       E_OS_ID             (EXTENDED status:) Invalid CounterID.
 *  \retval       E_OS_CALLEVEL       (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_PARAM_POINTER  (EXTENDED status:) Given pointer is NULL.
 *  \retval       E_OS_ACCESS         (Service Protection:)
 *                                      - Counter's owner application is not accessible.
 *                                      - Caller's access rights are not sufficient.
 *  \retval       E_OS_DISABLEDINT    (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetCounterValue().
 *
 *  \trace        SPEC-64000
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) GetCounterValue
(
  CounterType CounterID,
  TickRefType Value
);


/***********************************************************************************************************************
 *  GetElapsedValue()
 **********************************************************************************************************************/
/*! \brief      OS service GetElapsedValue().
 *  \details    For further details see Os_Api_GetElapsedValue().
 *
 *  \param[in]      CounterID     See Os_Api_GetElapsedValue().
 *  \param[in,out]  Value         See Os_Api_GetElapsedValue().
 *  \param[out]     ElapsedValue  See Os_Api_GetElapsedValue().
 *
 *  \retval       E_OK                No Error.
 *  \retval       E_OS_ID             (EXTENDED status:) Invalid CounterID.
 *  \retval       E_OS_CALLEVEL       (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_VALUE          (EXTENDED status:) The given Value was not valid.
 *  \retval       E_OS_PARAM_POINTER  (EXTENDED status:) Given pointer is NULL.
 *  \retval       E_OS_ACCESS         (Service Protection:)
 *                                      - Counter's owner application is not accessible.
 *                                      - Caller's access rights are not sufficient.
 *  \retval       E_OS_DISABLEDINT    (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetElapsedValue().
 *
 *  \trace        SPEC-64000
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) GetElapsedValue
(
  CounterType CounterID,
  TickRefType Value,
  TickRefType ElapsedValue
);


/***********************************************************************************************************************
 *  GetAlarmBase()
 **********************************************************************************************************************/
/*! \brief        OS service GetAlarmBase().
 * \details       For further details see Os_Api_GetAlarmBase().
 *
 *  \param[in]    AlarmID             See Os_Api_GetAlarmBase().
 *  \param[out]   Info                See Os_Api_GetAlarmBase().
 *
 *  \retval       E_OK                No error.
 *  \retval       E_OS_ID             (EXTENDED status:) Invalid AlarmID.
 *  \retval       E_OS_PARAM_POINTER  (EXTENDED status:) Given pointer is NULL.
 *  \retval       E_OS_CALLEVEL       (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT    (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       E_OS_ACCESS         (Service Protection:)
 *                                      - Caller's access rights are not sufficient.
 *                                      - Given task's owner application is not accessible.
 *
 *  \context      TASK|ISR2|PRETHOOK|POSTTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetAlarmBase().
 *
 *  \trace        SPEC-64000
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) GetAlarmBase
(
  AlarmType AlarmID,
  AlarmBaseRefType Info
);


/***********************************************************************************************************************
 *  GetAlarm()
 **********************************************************************************************************************/
/*! \brief        OS service GetAlarm().
 *  \details      For further details see Os_Api_GetAlarm().
 *
 *  \param[in]    AlarmID             See Os_Api_GetAlarm().
 *  \param[out]   Tick                See Os_Api_GetAlarm().
 *
 *  \retval       E_OK                No error.
 *  \retval       E_OS_NOFUNC         Alarm is not in use.
 *  \retval       E_OS_ID             (EXTENDED status:) Invalid AlarmID.
 *  \retval       E_OS_PARAM_POINTER  (EXTENDED status:) Given pointer is NULL.
 *  \retval       E_OS_CALLEVEL       (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT    (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       E_OS_ACCESS         (Service Protection:)
 *                                      - Caller's access rights are not sufficient.
 *                                      - Given task's owner application is not accessible.
 *
 *  \context      TASK|ISR2|PRETHOOK|POSTTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetAlarm().
 *
 *  \trace        SPEC-64000
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) GetAlarm
(
  AlarmType AlarmID,
  TickRefType Tick
);


/***********************************************************************************************************************
 *  SetRelAlarm()
 **********************************************************************************************************************/
/*! \brief        OS service SetRelAlarm().
 *  \details      For further details see Os_Api_SetRelAlarm().
 *
 *  \param[in]    AlarmID           See Os_Api_SetRelAlarm().
 *  \param[in]    Increment         See Os_Api_SetRelAlarm().
 *  \param[in]    Cycle             See Os_Api_SetRelAlarm().
 *
 *  \retval       E_OK              No error.
 *  \retval       E_OS_STATE        Alarm is already in use.
 *  \retval       E_OS_ID           (EXTENDED status:) Invalid AlarmID.
 *  \retval       E_OS_VALUE        Returned if:
 *                                    - Value of increment is zero
 *                                    - (EXTENDED status:)  Value of Increment outside of the admissible limits
 *                                      (lower than zero or greater than maxallowedvalue).
 *                                    - (EXTENDED status:) Value of Cycle unequal to 0 and outside of the admissible
 *                                      counter limits (less than mincycle or greater than maxallowedvalue).
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT  (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       E_OS_ACCESS       (Service Protection:)
 *                                    - Caller's access rights are not sufficient.
 *                                    - Given alarm's owner application is not accessible.
 *  \retval       other             See Os_XSigSend_SetRelAlarm() and Os_XSigRecv_SetRelAlarm().
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE, if the given AlarmID belongs to local core.
 *
 *  \pre          See Os_Api_SetRelAlarm().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) SetRelAlarm
(
  AlarmType AlarmID,
  TickType Increment,
  TickType Cycle
);


/***********************************************************************************************************************
 *  SetAbsAlarm()
 **********************************************************************************************************************/
/*! \brief        OS service SetAbsAlarm().
 *  \details      For further details see Os_Api_SetAbsAlarm().
 *
 *  \param[in]    AlarmID           See Os_Api_SetAbsAlarm().
 *  \param[in]    Start             See Os_Api_SetAbsAlarm().
 *  \param[in]    Cycle             See Os_Api_SetAbsAlarm().
 *
 *  \retval       E_OK              No error.
 *  \retval       E_OS_STATE        Alarm is already in use.
 *  \retval       E_OS_ID           (EXTENDED status:) Invalid AlarmID.
 *  \retval       E_OS_VALUE        (EXTENDED status:) Returned if:
 *                                    - Value of Start outside of the admissible counter limit (less than zero or
 *                                      greater than maxallowedvalue).
 *                                    - Value of Cycle unequal to 0 and outside of the admissible counter limits
 *                                      (less than mincycle or greater than maxallowedvalue).
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT  (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       E_OS_ACCESS       (Service Protection:)
 *                                    - Caller's access rights are not sufficient.
 *                                    - Given alarm's owner application is not accessible.
 *  \retval       other             See Os_XSigSend_SetAbsAlarm() and Os_XSigRecv_SetAbsAlarm().
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE, if the given AlarmID belongs to local core.
 *
 *  \pre          See Os_Api_SetAbsAlarm().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) SetAbsAlarm
(
  AlarmType AlarmID,
  TickType Start,
  TickType Cycle
);


/***********************************************************************************************************************
 *  CancelAlarm()
 **********************************************************************************************************************/
/*! \brief        OS service CancelAlarm().
 *  \details      For further details see Os_Api_CancelAlarm().
 *
 *  \param[in]    AlarmID           See Os_Api_CancelAlarm().
 *
 *  \retval       E_OK              No error.
 *  \retval       E_OS_NOFUNC       Alarm is not in use.
 *  \retval       E_OS_ID           (EXTENDED status:) Invalid AlarmID.
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT  (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       E_OS_ACCESS       (Service Protection:)
 *                                    - Caller's access rights are not sufficient.
 *                                    - Given alarm's owner application is not accessible.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE, if the given AlarmID belongs to local core.
 *
 *  \pre          See Os_Api_CancelAlarm().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) CancelAlarm
(
  AlarmType AlarmID
);


/***********************************************************************************************************************
 *  GetResource()
 **********************************************************************************************************************/
/*! \brief        OS service GetResource().
 *  \details      For further details see Os_Api_GetResource().
 *
 *  \param[in]    ResID            See Os_Api_GetResource().
 *
 *  \retval       E_OK              No error.
 *  \retval       E_OS_ID           (EXTENDED status:) Invalid ResID.
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_CORE         (EXTENDED status:) The given object belongs to a foreign core.
 *  \retval       E_OS_ACCESS       (EXTENDED status:)
 *                                    - Statically assigned priority of the caller is higher than the
 *                                      calculated ceiling priority.
 *                                    - Attempt to get a resource which is already occupied.
 *                                  (Service Protection:)
 *                                    - Caller's access rights are not sufficient.
 *  \retval       E_OS_DISABLEDINT  (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetResource().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) GetResource
(
  ResourceType ResID
);


/***********************************************************************************************************************
 *  ReleaseResource()
 **********************************************************************************************************************/
/*! \brief        OS service ReleaseResource().
 *  \details      For further details see Os_Api_ReleaseResource().
 *
 *  \param[in]    ResID            See Os_Api_ReleaseResource().
 *
 *  \retval       E_OK              No error.
 *  \retval       E_OS_ID           (EXTENDED status:) Invalid ResID.
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_CORE         (EXTENDED status:) The given object belongs to a foreign core.
 *  \retval       E_OS_NOFUNC       (EXTENDED status:)
 *                                    - Attempt to release a resource which has not been occupied by the caller before.
 *                                    - Attempt to release a nested resource in wrong order.
 *  \retval       E_OS_SPINLOCK     (EXTENDED status:) Spinlock and Resource API not used in LIFO order.
 *  \retval       E_OS_ACCESS       (EXTENDED status:)
 *                                    - Attempt to release a resource which has a lower ceiling priority than the
 *                                      statically assigned priority of the caller.
 *                                  (Service Protection:)
 *                                    - Caller's access rights are not sufficient.
 *  \retval       E_OS_DISABLEDINT  (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_ReleaseResource().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) ReleaseResource
(
  ResourceType ResID
);


/***********************************************************************************************************************
 *  StartScheduleTableRel()
 **********************************************************************************************************************/
/*! \brief        OS service StartScheduleTableRel().
 *  \details      For further details see Os_Api_StartScheduleTableRel().
 *
 *  \param[in]    ScheduleTableID   See Os_Api_StartScheduleTableRel().
 *  \param[in]    Offset            See Os_Api_StartScheduleTableRel().
 *
 *  \retval       E_OK              No error.
 *  \retval       E_OS_STATE        Schedule table has already been started.
 *  \retval       E_OS_ID           (EXTENDED status:) Invalid ScheduleTableID.
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_VALUE        (EXTENDED status:) Offset is bigger than (OsCounterMaxAllowedValue - InitialOffset)
 *                                                     or is equal to zero
 *  \retval       E_OS_DISABLEDINT  (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       E_OS_ACCESS       (Service Protection:)
 *                                    - Caller's access rights are not sufficient.
 *                                    - Given schedule table's owner application is not accessible.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE, if the given ScheduleTableID belongs to local core.
 *
 *  \pre          See Os_Api_StartScheduleTableRel().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) StartScheduleTableRel
(
  ScheduleTableType ScheduleTableID,
  TickType Offset
);


/***********************************************************************************************************************
 *  StartScheduleTableAbs()
 **********************************************************************************************************************/
/*! \brief        OS service StartScheduleTableAbs().
 *  \details      For further details see Os_Api_StartScheduleTableAbs().
 *
 *  \param[in]    ScheduleTableID   See Os_Api_StartScheduleTableAbs().
 *  \param[in]    Start             See Os_Api_StartScheduleTableAbs().
 *
 *  \retval       E_OK              No error.
 *  \retval       E_OS_STATE        Schedule table has already been started.
 *  \retval       E_OS_ID           (EXTENDED status:) Invalid ScheduleTableID.
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_VALUE        (EXTENDED status:) Offset is bigger than OsCounterMaxAllowedValue
 *  \retval       E_OS_DISABLEDINT  (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       E_OS_ACCESS       (Service Protection:)
 *                                    - Caller's access rights are not sufficient.
 *                                    - Given schedule table's owner application is not accessible.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE, if the given ScheduleTableID belongs to local core.
 *
 *  \pre          See Os_Api_StartScheduleTableAbs().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) StartScheduleTableAbs
(
  ScheduleTableType ScheduleTableID,
  TickType Start
);


/***********************************************************************************************************************
 *  StopScheduleTable()
 **********************************************************************************************************************/
/*! \brief        OS service StopScheduleTable().
 *  \details      For further details see Os_Api_StopScheduleTable().
 *
 *  \param[in]    ScheduleTableID   See Os_Api_StopScheduleTable().
 *
 *  \retval       E_OK              No error.
 *  \retval       E_OS_NOFUNC       Schedule table has already been stopped.
 *  \retval       E_OS_ID           (EXTENDED status:) Invalid ScheduleTableID.
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT  (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       E_OS_ACCESS       (Service Protection:)
 *                                    - Caller's access rights are not sufficient.
 *                                    - Given schedule table's owner application is not accessible.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE, if the given ScheduleTableID belongs to local core.
 *
 *  \pre          See Os_Api_StopScheduleTable().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) StopScheduleTable
(
  ScheduleTableType ScheduleTableID
);


/***********************************************************************************************************************
 *  NextScheduleTable()
 **********************************************************************************************************************/
/*! \brief        OS service NextScheduleTable().
 *  \details      For further details see Os_Api_NextScheduleTable().
 *
 *  \param[in]    ScheduleTableID_From  See Os_Api_NextScheduleTable().
 *  \param[in]    ScheduleTableID_To    See Os_Api_NextScheduleTable().
 *
 *  \retval       E_OK                 No error.
 *  \retval       E_OS_NOFUNC          Schedule table ScheduleTableID_From has not been started.
 *  \retval       E_OS_STATE           Schedule table ScheduleTableID_To has already been requested to start at the end
 *                                     of another schedule table.
 *  \retval       E_OS_ID              (EXTENDED status:) Invalid ScheduleTableID_From/To.
 *  \retval       E_OS_CALLEVEL        (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT     (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       E_OS_ACCESS          (Service Protection:)
 *                                       - Caller's access rights are not sufficient.
 *                                       - Given schedule table's owner application is not accessible.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE, if the given ScheduleTableID belongs to local core.
 *
 *  \pre          See Os_Api_NextScheduleTable().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) NextScheduleTable
(
  ScheduleTableType ScheduleTableID_From,
  ScheduleTableType ScheduleTableID_To
);


/***********************************************************************************************************************
 *  GetScheduleTableStatus()
 **********************************************************************************************************************/
/*! \brief        OS service GetScheduleTableStatus().
 *  \details      For further details see Os_Api_GetScheduleTableStatus().
 *
 *  \param[in]    ScheduleTableID      See Os_Api_GetScheduleTableStatus().
 *  \param[out]   ScheduleStatus       See Os_Api_GetScheduleTableStatus().
 *
 *  \retval       E_OK                  No error.
 *  \retval       E_OS_ID               (EXTENDED status:) Invalid ScheduleTableID
 *  \retval       E_OS_CALLEVEL         (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_PARAM_POINTER    (EXTENDED status:) ScheduleStatus is a pointer to null.
 *  \retval       E_OS_DISABLEDINT      (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       E_OS_ACCESS           (Service Protection:)
 *                                        - Caller's access rights are not sufficient.
 *                                        - Given schedule table's owner application is not accessible.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetScheduleTableStatus().
 *
 *  \trace        SPEC-64000
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) GetScheduleTableStatus
(
  ScheduleTableType ScheduleTableID,
  ScheduleTableStatusRefType ScheduleStatus
);


/***********************************************************************************************************************
 *  StartScheduleTableSynchron()
 **********************************************************************************************************************/
/*! \brief        OS service StartScheduleTableSynchron().
 *  \details      For further details see Os_Api_StartScheduleTableSynchron().
 *
 *  \param[in]    ScheduleTableID      See Os_Api_StartScheduleTableSynchron().
 *
 *  \retval       E_OK                 No error.
 *  \retval       E_OS_STATE           Schedule table ScheduleTableID has already been started.
 *  \retval       E_OS_ID              (EXTENDED status:) Invalid ScheduleTableID.
 *  \retval       E_OS_CORE            (EXTENDED status:) The given object belongs to a foreign core.
 *  \retval       E_OS_CALLEVEL        (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT     (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       E_OS_ACCESS          (Service Protection:)
 *                                       - Caller's access rights are not sufficient.
 *                                       - Given schedule table's owner application is not accessible.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE, if the given ScheduleTableID belongs to local core.
 *
 *  \pre          See Os_Api_StartScheduleTableSynchron().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) StartScheduleTableSynchron
(
  ScheduleTableType ScheduleTableID
);


/***********************************************************************************************************************
 *  SyncScheduleTable()
 **********************************************************************************************************************/
/*! \brief        OS service SyncScheduleTable().
 *  \details      For further details see Os_Api_SyncScheduleTable().
 *
 *  \param[in]    ScheduleTableID      See Os_Api_SyncScheduleTable().
 *  \param[in]    Value                See Os_Api_SyncScheduleTable().
 *
 *  \retval       E_OK                 No error.
 *  \retval       E_OS_STATE           The state of the schedule table ScheduleTableId is equal to
 *                                     SCHEDULETABLE_STOPPED or SCHEDULETABLE_NEXT.
 *  \retval       E_OS_ID              (EXTENDED status:) Invalid ScheduleTableID.
 *  \retval       E_OS_CORE            (EXTENDED status:) The given object belongs to a foreign core.
 *  \retval       E_OS_CALLEVEL        (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_VALUE           (EXTENDED status:) The Value is out of range
 *  \retval       E_OS_ACCESS          (Service Protection:)
 *                                       - Caller's access rights are not sufficient.
 *                                       - Given schedule table's owner application is not accessible.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE, if the given ScheduleTableID belongs to local core.
 *
 *  \pre          See Os_Api_SyncScheduleTable().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) SyncScheduleTable
(
  ScheduleTableType ScheduleTableID,
  TickType Value
);


/***********************************************************************************************************************
 *  SetScheduleTableAsync()
 **********************************************************************************************************************/
/*! \brief        OS service SetScheduleTableAsync().
 *  \details      For further details see Os_Api_SetScheduleTableAsync().
 *
 *  \param[in]    ScheduleTableID      See Os_Api_SetScheduleTableAsync().
 *
 *  \retval       E_OK                 No error.
 *  \retval       E_OS_STATE           Current state of ScheduleTableID is SCHEDULETABLE_STOPPED,
 *                                     SCHEDULETABLE_NEXT or SCHEDULETABLE_WAITING.
 *  \retval       E_OS_ID              (EXTENDED status:)
 *                                       - Invalid ScheduleTableID.
 *                                       - OsScheduleTblSyncStrategy of ScheduleTableID is not equal to EXPLICIT
 *  \retval       E_OS_CORE            (EXTENDED status:) The given object belongs to a foreign core.
 *  \retval       E_OS_CALLEVEL        (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT     (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       E_OS_ACCESS          (Service Protection:)
 *                                       - Caller's access rights are not sufficient.
 *                                       - Given schedule table's owner application is not accessible.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE, if the given ScheduleTableID belongs to local core.
 *
 *  \pre          See Os_Api_SetScheduleTableAsync().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) SetScheduleTableAsync
(
  ScheduleTableType ScheduleTableID
);


/***********************************************************************************************************************
 *  GetApplicationID()
 **********************************************************************************************************************/
/*! \brief        OS service GetApplicationID().
 *  \details      For further details see Os_Api_GetApplicationID().
 *
 *  \return       See Os_Api_GetApplicationID().
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetApplicationID().
 **********************************************************************************************************************/
FUNC(ApplicationType, OS_CODE) GetApplicationID
(
  void
);


/***********************************************************************************************************************
 *  GetCurrentApplicationID()
 **********************************************************************************************************************/
/*! \brief        OS service GetCurrentApplicationID().
 *  \details      For further details see Os_Api_GetCurrentApplicationID().
 *
 *  \return       See Os_Api_GetCurrentApplicationID().
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetCurrentApplicationID().
 *
 *  \trace        CREQ-60
 *  \trace        SPEC-63543, SPEC-63545, SPEC-63555, SPEC-63557
 **********************************************************************************************************************/
FUNC(ApplicationType, OS_CODE) GetCurrentApplicationID
(
  void
);


/***********************************************************************************************************************
 *  GetApplicationState()
 **********************************************************************************************************************/
/*! \brief        OS service GetApplicationState().
 *  \details      For further details see Os_Api_GetApplicationState().
 *
 *  \param[in]    Application   See Os_Api_GetApplicationState().
 *  \param[out]   Value         See Os_Api_GetApplicationState().
 *
 *  \retval       E_OK                No error.
 *  \retval       E_OS_ID             (EXTENDED status:) Invalid Application.
 *  \retval       E_OS_PARAM_POINTER  (EXTENDED status:) Given pointer is NULL.
 *  \retval       E_OS_CALLEVEL       (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT    (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_GetApplicationState().
 *
 *  \trace        SPEC-64000
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) GetApplicationState
(
  ApplicationType Application,
  ApplicationStateRefType Value
);


/***********************************************************************************************************************
 *  CheckObjectAccess()
 **********************************************************************************************************************/
/*! \brief        OS service CheckObjectAccess().
 *  \details      For further details see Os_Api_CheckObjectAccess().
 *
 *  \param[in]    ApplID      See Os_Api_CheckObjectAccess().
 *  \param[in]    ObjectType  See Os_Api_CheckObjectAccess().
 *  \param[in]    ObjectID    See Os_Api_CheckObjectAccess().
 *
 *  \return       See Os_Api_CheckObjectAccess().
 *
 *  \context      TASK|ISR2|ERRHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_CheckObjectAccess().
 **********************************************************************************************************************/
FUNC(ObjectAccessType, OS_CODE) CheckObjectAccess
(
  ApplicationType ApplID,
  ObjectTypeType ObjectType,
  Os_ObjectIdType ObjectID
);


/***********************************************************************************************************************
 *  CheckObjectOwnership()
 **********************************************************************************************************************/
/*! \brief        OS service CheckObjectOwnership().
 *  \details      For further details see Os_Api_CheckObjectOwnership().
 *
 *  \param[in]    ObjectType  See Os_Api_CheckObjectOwnership().
 *  \param[in]    ObjectID    See Os_Api_CheckObjectOwnership().
 *
 *  \return       See Os_Api_CheckObjectOwnership().
 *
 *  \context      TASK|ISR2|ERRHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_CheckObjectOwnership().
 **********************************************************************************************************************/
FUNC(ApplicationType, OS_CODE) CheckObjectOwnership
(
  ObjectTypeType ObjectType,
  Os_ObjectIdType ObjectID
);


/***********************************************************************************************************************
  *  AllowAccess()
  **********************************************************************************************************************/
/*! \brief        OS service AllowAccess().
 *  \details      For further details see Os_Api_AllowAccess().
 *
 *  \retval       E_OK              No error.
 *  \retval       E_OS_STATE        The application is not in the restarting state.
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_DISABLEDINT  (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_AllowAccess().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) AllowAccess(void);


/***********************************************************************************************************************
 *  TerminateApplication()
 **********************************************************************************************************************/
/*! \brief        OS service TerminateApplication().
 *  \details      For further details see Os_Api_TerminateApplication().
 *
 *  \param[in]    Application       See Os_Api_TerminateApplication().
 *  \param[in]    RestartOption     See Os_Api_TerminateApplication().
 *
 *  \retval       E_OK              No errors
 *  \retval       E_OS_STATE        The state of Application does not allow terminating it:
 *                                    - The application is already terminated.
 *                                    - The application is restarting AND the caller does not belong to the application.
 *                                    - The application is restarting AND the caller does belong to the application
 *                                      AND the RestartOption is RESTART.
 *  \retval       E_OS_ID           (EXTENDED status:) Application was not valid.
 *  \retval       E_OS_VALUE        (EXTENDED status:) RestartOption was neither RESTART nor NO_RESTART.
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_ACCESS       (EXTENDED status:) The caller belongs to a non-trusted OS-Application
 *                                                     AND the caller does not belong to given Application
 *                                                     TerminateApplication() shall return E_OS_ACCESS.
 *  \retval       E_OS_DISABLEDINT  (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK|ISR2|ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_TerminateApplication().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) TerminateApplication
(
  ApplicationType Application,
  RestartType RestartOption
);


/***********************************************************************************************************************
 *  Os_ReadPeripheral8()
 **********************************************************************************************************************/
/*! \brief        OS service Os_ReadPeripheral8().
 *  \details      For further details see Os_Api_Os_ReadPeripheral8().
 *
 *  \param[in]    PeripheralID      See Os_Api_Os_ReadPeripheral8().
 *  \param[in]    Address           See Os_Api_Os_ReadPeripheral8().
 *
 *  \return       See Os_Api_Os_ReadPeripheral8().
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_Os_ReadPeripheral8().
 **********************************************************************************************************************/
FUNC(uint8, OS_CODE) Os_ReadPeripheral8
(
  Os_PeripheralIdType PeripheralID, uint32 Address
);


/***********************************************************************************************************************
 *  Os_ReadPeripheral16()
 **********************************************************************************************************************/
/*! \brief        OS service Os_ReadPeripheral16().
 *  \details      For further details see Os_Api_ReadPeripheral16().
 *
 *  \param[in]    PeripheralID      See Os_Api_ReadPeripheral16().
 *  \param[in]    Address           See Os_Api_ReadPeripheral16().
 *
 *  \return       See Os_Api_ReadPeripheral32().
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_ReadPeripheral16().
 **********************************************************************************************************************/
FUNC(uint16, OS_CODE) Os_ReadPeripheral16
(
  Os_PeripheralIdType PeripheralID,
  uint32 Address
);


/***********************************************************************************************************************
 *  Os_ReadPeripheral32()
 **********************************************************************************************************************/
/*! \brief        OS service Os_ReadPeripheral32().
 *  \details      For further details see Os_Api_ReadPeripheral32().
 *
 *  \param[in]    PeripheralID      See Os_Api_ReadPeripheral32().
 *  \param[in]    Address           See Os_Api_ReadPeripheral32().
 *
 *  \return       See Os_Api_ReadPeripheral32().
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_ReadPeripheral32().
 **********************************************************************************************************************/
FUNC(uint32, OS_CODE) Os_ReadPeripheral32
(
  Os_PeripheralIdType PeripheralID, uint32 Address
);


/***********************************************************************************************************************
 *  Os_WritePeripheral8()
 **********************************************************************************************************************/
/*! \brief        OS service Os_WritePeripheral8().
 *  \details      For further details see Os_Api_WritePeripheral8().
 *
 *  \param[in]     PeripheralID      See Os_Api_WritePeripheral8().
 *  \param[in,out] Address           See Os_Api_WritePeripheral8().
 *  \param[in]     Value             See Os_Api_WritePeripheral8().
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_WritePeripheral8().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_WritePeripheral8
(
  Os_PeripheralIdType PeripheralID,
  uint32 Address,
  uint8 Value
);


/***********************************************************************************************************************
 *  Os_WritePeripheral16()
 **********************************************************************************************************************/
/*! \brief        OS service Os_WritePeripheral16().
 *  \details      For further details see Os_Api_WritePeripheral16().
 *
 *  \param[in]     PeripheralID      See Os_Api_WritePeripheral16().
 *  \param[in,out] Address           See Os_Api_WritePeripheral16().
 *  \param[in]     Value             See Os_Api_WritePeripheral16().
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_WritePeripheral16().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_WritePeripheral16
(
  Os_PeripheralIdType PeripheralID,
  uint32 Address,
  uint16 Value
);


/***********************************************************************************************************************
 *  Os_WritePeripheral32()
 **********************************************************************************************************************/
/*! \brief        OS service Os_WritePeripheral32().
 *  \details      For further details see Os_Api_WritePeripheral32().
 *
 *  \param[in]     PeripheralID      See Os_Api_WritePeripheral32().
 *  \param[in,out] Address           See Os_Api_WritePeripheral32().
 *  \param[in]     Value             See Os_Api_WritePeripheral32().
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_WritePeripheral32().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_WritePeripheral32
(
  Os_PeripheralIdType PeripheralID,
  uint32 Address,
  uint32 Value
);


/***********************************************************************************************************************
 *  Os_ModifyPeripheral8()
 **********************************************************************************************************************/
/*! \brief        OS service Os_ModifyPeripheral8().
 *  \details      For further details see Os_Api_ModifyPeripheral8().
 *
 *  \param[in]     PeripheralID     See Os_Api_ModifyPeripheral8().
 *  \param[in,out] Address          See Os_Api_ModifyPeripheral8().
 *  \param[in]     ClearMask        See Os_Api_ModifyPeripheral8().
 *  \param[in]     SetMask          See Os_Api_ModifyPeripheral8().
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_ModifyPeripheral8().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_ModifyPeripheral8
(
  Os_PeripheralIdType PeripheralID,
  uint32 Address,
  uint8 ClearMask,
  uint8 SetMask
);


/***********************************************************************************************************************
 *  Os_ModifyPeripheral16()
 **********************************************************************************************************************/
/*! \brief        OS service Os_ModifyPeripheral16().
 *  \details      For further details see Os_Api_ModifyPeripheral16().
 *
 *  \param[in]     PeripheralID     See Os_Api_ModifyPeripheral16().
 *  \param[in,out] Address          See Os_Api_ModifyPeripheral16().
 *  \param[in]     ClearMask        See Os_Api_ModifyPeripheral16().
 *  \param[in]     SetMask          See Os_Api_ModifyPeripheral16().
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_ModifyPeripheral16().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_ModifyPeripheral16
(
  Os_PeripheralIdType PeripheralID,
  uint32 Address,
  uint16 ClearMask,
  uint16 SetMask
);


/***********************************************************************************************************************
 *  Os_ModifyPeripheral32()
 **********************************************************************************************************************/
/*! \brief        OS service Os_ModifyPeripheral32().
 *  \details      For further details see Os_Api_ModifyPeripheral32().
 *
 *  \param[in]     PeripheralID     See Os_Api_ModifyPeripheral32().
 *  \param[in,out] Address          See Os_Api_ModifyPeripheral32().
 *  \param[in]     ClearMask        See Os_Api_ModifyPeripheral32().
 *  \param[in]     SetMask          See Os_Api_ModifyPeripheral32().
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_ModifyPeripheral32().
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_ModifyPeripheral32
(
  Os_PeripheralIdType PeripheralID,
  uint32 Address,
  uint32 ClearMask,
  uint32 SetMask
);


/***********************************************************************************************************************
 *  CallTrustedFunction()
 **********************************************************************************************************************/
/*! \brief        OS service CallTrustedFunction().
 *  \details      For further details see Os_Api_CallTrustedFunction().
 *
 *  \param[in]    FunctionIndex   See Os_Api_CallTrustedFunction().
 *  \param[in]    FunctionParams  See Os_Api_CallTrustedFunction().
 *
 *  \retval       E_OK              No error.
 *  \retval       E_OS_SERVICEID    No function defined for this index.
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_ACCESS       (EXTENDED status:) The given object belongs to a foreign core.
 *  \retval       E_OS_ACCESS       (Service Protection:)
 *                                    - Owner application is not accessible.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          See Os_Api_CallTrustedFunction().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) CallTrustedFunction
(
  TrustedFunctionIndexType FunctionIndex,
  TrustedFunctionParameterRefType FunctionParams
);


/***********************************************************************************************************************
 *  Os_CallNonTrustedFunction()
 **********************************************************************************************************************/
/*! \brief        OS service Os_CallNonTrustedFunction().
 *  \details      For further details see Os_Api_CallNonTrustedFunction().
 *
 *  \param[in]    FunctionIndex   See Os_Api_CallNonTrustedFunction().
 *  \param[in]    FunctionParams  See Os_Api_CallNonTrustedFunction().
 *
 *  \retval       E_OK              No error.
 *  \retval       E_OS_SERVICEID    No function defined for this index.
 *  \retval       E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_ACCESS       (EXTENDED status:) The given object belongs to a foreign core.
 *  \retval       E_OS_ACCESS       (Service Protection:)
 *                                    - Owner application is not accessible.
 *  \retval       E_OS_SYS_NO_NTFSTACK  (EXTENDED status:) No further NTF-Stacks available.
 *
 *  \context      TASK|ISR2
 *  \note         Function is callable in PreStartTasks.
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE  Depends on called function. If called function is synchronous then service is synchronous.
 *                      May cause rescheduling.
 *
 *  \pre          See Os_Api_CallNonTrustedFunction().
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) Os_CallNonTrustedFunction
(
  Os_NonTrustedFunctionIndexType FunctionIndex,
  Os_NonTrustedFunctionParameterRefType FunctionParams
);


/***********************************************************************************************************************
 *  CheckTaskMemoryAccess()
 **********************************************************************************************************************/
/*! \brief        OS service CheckTaskMemoryAccess().
 *  \details      For further details see Os_Api_CheckTaskMemoryAccess().
 *
 *  \param[in]    TaskID              See Os_Api_CheckTaskMemoryAccess().
 *  \param[in]    Address             See Os_Api_CheckTaskMemoryAccess().
 *  \param[in]    Size                See Os_Api_CheckTaskMemoryAccess().
 *
 *  \return       See Os_Api_CheckTaskMemoryAccess().
 *
 *  \context      TASK|ISR2|ERRHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_CheckTaskMemoryAccess().
 **********************************************************************************************************************/
FUNC(AccessType, OS_CODE) CheckTaskMemoryAccess
(
  TaskType TaskID,
  MemoryStartAddressType Address,
  MemorySizeType Size
);


/***********************************************************************************************************************
 *  CheckISRMemoryAccess()
 **********************************************************************************************************************/
/*! \brief        OS service CheckISRMemoryAccess().
 *  \details      For further details see CheckISRMemoryAccess().
 *
 *  \param[in]    ISRID               See CheckISRMemoryAccess().
 *  \param[in]    Address             See CheckISRMemoryAccess().
 *  \param[in]    Size                See CheckISRMemoryAccess().
 *
 *  \return       See CheckISRMemoryAccess().
 *
 *  \context      TASK|ISR2|ERRHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See CheckISRMemoryAccess().
 **********************************************************************************************************************/
FUNC(AccessType, OS_CODE) CheckISRMemoryAccess
(
  ISRType ISRID,
  MemoryStartAddressType Address,
  MemorySizeType Size
);


/***********************************************************************************************************************
 *  Os_GetDetailedError()
 **********************************************************************************************************************/
/*! \brief        Returns error information of the last error occurred on the local core.
 *  \details      For further details see Os_Api_Os_GetDetailedError().
 *
 *  \param[out]   ErrorRef    See Os_Api_Os_GetDetailedError().
 *
 *  \retval       E_OK                No error.
 *  \retval       E_OS_CALLEVEL       (EXTENDED status:) Called from invalid context.
 *  \retval       E_OS_PARAM_POINTER  (EXTENDED status:) Given pointer is NULL.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_Os_GetDetailedError().
 *
 *  \trace        SPEC-64000
 **********************************************************************************************************************/
FUNC(StatusType, OS_CODE) Os_GetDetailedError(Os_ErrorInformationRefType ErrorRef);


/***********************************************************************************************************************
 *  OSErrorGetServiceId()
 **********************************************************************************************************************/
/*! \brief        OS service Os_Api_OSErrorGetServiceId().
 *  \details      For further details see Os_Api_OSErrorGetServiceId().
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          See Os_Api_OSErrorGetServiceId().
 **********************************************************************************************************************/
FUNC(OSServiceIdType, OS_CODE) OSErrorGetServiceId(void);


/***********************************************************************************************************************
*  OSError_Os_DisableInterruptSource_ISRID()
**********************************************************************************************************************/
/*! \brief        Returns parameter ISRID of a faulty Os_DisableInterruptSource call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ISRType, OS_CODE) OSError_Os_DisableInterruptSource_ISRID(void);


/***********************************************************************************************************************
*  OSError_Os_EnableInterruptSource_ISRID()
**********************************************************************************************************************/
/*! \brief        Returns parameter ISRID of a faulty Os_EnableInterruptSource call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ISRType, OS_CODE) OSError_Os_EnableInterruptSource_ISRID(void);


/***********************************************************************************************************************
*  OSError_Os_EnableInterruptSource_ClearPending()
**********************************************************************************************************************/
/*! \brief        Returns parameter ClearPending of a faulty Os_EnableInterruptSource call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(boolean, OS_CODE) OSError_Os_EnableInterruptSource_ClearPending(void);                                             /* PRQA S 0777 */ /* MD_MSR_5.1_777 */


/***********************************************************************************************************************
*  OSError_Os_ClearPendingInterrupt_ISRID()
**********************************************************************************************************************/
/*! \brief        Returns parameter ISRID of a faulty Os_ClearPendingInterrupt call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ISRType, OS_CODE) OSError_Os_ClearPendingInterrupt_ISRID(void);


/***********************************************************************************************************************
*  OSError_Os_IsInterruptSourceEnabled_ISRID()
**********************************************************************************************************************/
/*! \brief        Returns parameter ISRID of a faulty Os_IsInterruptSourceEnabled call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ISRType, OS_CODE) OSError_Os_IsInterruptSourceEnabled_ISRID(void);


/***********************************************************************************************************************
*  OSError_Os_IsInterruptSourceEnabled_IsEnabled()
**********************************************************************************************************************/
/*! \brief        Returns parameter IsEnabled of a faulty Os_IsInterruptSourceEnabled call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(P2VAR(boolean, AUTOMATIC , OS_VAR_NOINIT), OS_CODE) OSError_Os_IsInterruptSourceEnabled_IsEnabled(void);


/***********************************************************************************************************************
*  OSError_Os_IsInterruptPending_ISRID()
**********************************************************************************************************************/
/*! \brief        Returns parameter ISRID of a faulty Os_IsInterruptPending call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ISRType, OS_CODE) OSError_Os_IsInterruptPending_ISRID(void);


/***********************************************************************************************************************
*  OSError_Os_IsInterruptPending_IsPending()
**********************************************************************************************************************/
/*! \brief        Returns parameter IsPending of a faulty Os_IsInterruptPending_IsPending call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(P2VAR(boolean, AUTOMATIC , OS_VAR_NOINIT), OS_CODE) OSError_Os_IsInterruptPending_IsPending(void);


/***********************************************************************************************************************
*  OSError_CallTrustedFunction_FunctionIndex()
**********************************************************************************************************************/
/*! \brief        Returns parameter FunctionIndex of a faulty CallTrustedFunction call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TrustedFunctionIndexType, OS_CODE) OSError_CallTrustedFunction_FunctionIndex(void);


/***********************************************************************************************************************
 *  OSError_CallTrustedFunction_FunctionParams()
 **********************************************************************************************************************/
/*! \brief        Returns parameter FunctionParams of a faulty CallTrustedFunction call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TrustedFunctionParameterRefType, OS_CODE)
OSError_CallTrustedFunction_FunctionParams(void);                                                                       /* PRQA S 0777 */ /* MD_MSR_5.1_777 */



/***********************************************************************************************************************
*  OSError_CallNonTrustedFunction_FunctionIndex()
**********************************************************************************************************************/
/*! \brief        Returns parameter FunctionIndex of a faulty CallTrustedFunction call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(Os_NonTrustedFunctionIndexType, OS_CODE) OSError_CallNonTrustedFunction_FunctionIndex(void);


/***********************************************************************************************************************
 *  OSError_CallNonTrustedFunction_FunctionParams()
 **********************************************************************************************************************/
/*! \brief        Returns parameter FunctionParams of a faulty CallNonTrustedFunction call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(Os_NonTrustedFunctionParameterRefType, OS_CODE)
OSError_CallNonTrustedFunction_FunctionParams(void);                                                                    /* PRQA S 0777 */ /* MD_MSR_5.1_777 */


/***********************************************************************************************************************
 *  OSError_StartScheduleTableRel_ScheduleTableID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter ScheduleTableID of a faulty StartScheduleTableRel call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ScheduleTableType, OS_CODE) OSError_StartScheduleTableRel_ScheduleTableID(void);


/***********************************************************************************************************************
 *  OSError_StartScheduleTableRel_Offset()
 **********************************************************************************************************************/
/*! \brief        Returns parameter Offset of a faulty StartScheduleTableRel call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TickType, OS_CODE) OSError_StartScheduleTableRel_Offset(void);


/***********************************************************************************************************************
 *  OSError_StartScheduleTableAbs_ScheduleTableID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter ScheduleTableID of a faulty StartScheduleTableAbs call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ScheduleTableType, OS_CODE) OSError_StartScheduleTableAbs_ScheduleTableID(void);


/***********************************************************************************************************************
 *  OSError_StartScheduleTableAbs_Start()
 **********************************************************************************************************************/
/*! \brief        Returns parameter Start of a faulty StartScheduleTableAbs call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TickType, OS_CODE) OSError_StartScheduleTableAbs_Start(void);                                                      /* PRQA S 0777 */ /* MD_MSR_5.1_777 */


/***********************************************************************************************************************
 *  OSError_StopScheduleTable_ScheduleTableID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter ScheduleTableID of a faulty StopScheduleTable call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ScheduleTableType, OS_CODE) OSError_StopScheduleTable_ScheduleTableID(void);


/***********************************************************************************************************************
 *  OSError_NextScheduleTable_ScheduleTableID_From()
 **********************************************************************************************************************/
/*! \brief        Returns parameter ScheduleTableID_From of a faulty NextScheduleTable call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ScheduleTableType, OS_CODE) OSError_NextScheduleTable_ScheduleTableID_From(void);


/***********************************************************************************************************************
 *  OSError_NextScheduleTable_ScheduleTableID_To()
 **********************************************************************************************************************/
/*! \brief        Returns parameter ScheduleTableID_To of a faulty NextScheduleTable call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ScheduleTableType, OS_CODE) OSError_NextScheduleTable_ScheduleTableID_To(void);                                    /* PRQA S 0777 */ /* MD_MSR_5.1_777 */


/***********************************************************************************************************************
 *  OSError_StartScheduleTableSynchron_ScheduleTableID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter ScheduleTableID of a faulty StartScheduleTableSynchron call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ScheduleTableType, OS_CODE) OSError_StartScheduleTableSynchron_ScheduleTableID(void);


/***********************************************************************************************************************
 *  OSError_SyncScheduleTable_ScheduleTableID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter ScheduleTableID of a faulty SyncScheduleTable call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ScheduleTableType, OS_CODE) OSError_SyncScheduleTable_ScheduleTableID(void);


/***********************************************************************************************************************
 *  OSError_SyncScheduleTable_Value()
 **********************************************************************************************************************/
/*! \brief        Returns parameter Value of a faulty SyncScheduleTable call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TickType, OS_CODE) OSError_SyncScheduleTable_Value(void);


/***********************************************************************************************************************
 *  OSError_SetScheduleTableAsync_ScheduleTableID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter ScheduleTableID of a faulty SetScheduleTableAsync call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ScheduleTableType, OS_CODE) OSError_SetScheduleTableAsync_ScheduleTableID(void);


/***********************************************************************************************************************
 *  OSError_GetScheduleTableStatus_ScheduleTableID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter ScheduleTableID of a faulty GetScheduleTableStatus call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ScheduleTableType, OS_CODE) OSError_GetScheduleTableStatus_ScheduleTableID(void);


/***********************************************************************************************************************
 *  OSError_IncrementCounter_CounterID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter CounterID of a faulty IncrementCounter call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(CounterType, OS_CODE) OSError_IncrementCounter_CounterID(void);


/***********************************************************************************************************************
 *  OSError_GetCounterValue_CounterID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter CounterID of a faulty GetCounterValue call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(CounterType, OS_CODE) OSError_GetCounterValue_CounterID(void);


/***********************************************************************************************************************
 *  OSError_GetCounterValue_Value()
 **********************************************************************************************************************/
/*! \brief        Returns parameter Value of a faulty GetCounterValue call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TickRefType, OS_CODE) OSError_GetCounterValue_Value(void);


/***********************************************************************************************************************
 *  OSError_GetElapsedValue_CounterID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter CounterID of a faulty GetElapsedValue call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(CounterType, OS_CODE) OSError_GetElapsedValue_CounterID(void);


/***********************************************************************************************************************
 *  OSError_GetElapsedValue_Value()
 **********************************************************************************************************************/
/*! \brief        Returns parameter Value of a faulty GetElapsedValue call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TickRefType, OS_CODE) OSError_GetElapsedValue_Value(void);


/***********************************************************************************************************************
 *  OSError_GetElapsedValue_ElapsedValue()
 **********************************************************************************************************************/
/*! \brief        Returns parameter ElapsedValue of a faulty GetElapsedValue call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TickRefType, OS_CODE) OSError_GetElapsedValue_ElapsedValue(void);


/***********************************************************************************************************************
 *  OSError_TerminateApplication_Application()
 **********************************************************************************************************************/
/*! \brief        Returns parameter Application of a faulty TerminateApplication call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ApplicationType, OS_CODE) OSError_TerminateApplication_Application(void);


/***********************************************************************************************************************
 *  OSError_TerminateApplication_RestartOption()
 **********************************************************************************************************************/
/*! \brief        Returns parameter RestartOption of a faulty TerminateApplication call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(RestartType, OS_CODE) OSError_TerminateApplication_RestartOption(void);


/***********************************************************************************************************************
 *  OSError_GetApplicationState_Application()
 **********************************************************************************************************************/
/*! \brief        Returns parameter Application of a faulty GetApplicationState call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ApplicationType, OS_CODE) OSError_GetApplicationState_Application(void);


/***********************************************************************************************************************
 *  OSError_GetApplicationState_Value()
 **********************************************************************************************************************/
/*! \brief        Returns parameter Value of a faulty GetApplicationState call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ApplicationStateRefType, OS_CODE) OSError_GetApplicationState_Value(void);


/***********************************************************************************************************************
 *  OSError_GetSpinlock_SpinlockId()
 **********************************************************************************************************************/
/*! \brief        Returns parameter SpinlockId of a faulty GetSpinlock call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(SpinlockIdType, OS_CODE) OSError_GetSpinlock_SpinlockId(void);


/***********************************************************************************************************************
 *  OSError_ReleaseSpinlock_SpinlockId()
 **********************************************************************************************************************/
/*! \brief        Returns parameter SpinlockId of a faulty ReleaseSpinlock call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(SpinlockIdType, OS_CODE) OSError_ReleaseSpinlock_SpinlockId(void);


/***********************************************************************************************************************
 *  OSError_TryToGetSpinlock_SpinlockId()
 **********************************************************************************************************************/
/*! \brief        Returns parameter SpinlockId of a faulty TryToGetSpinlock call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(SpinlockIdType, OS_CODE) OSError_TryToGetSpinlock_SpinlockId(void);


/***********************************************************************************************************************
 *  OSError_TryToGetSpinlock_Success()
 **********************************************************************************************************************/
/*! \brief        Returns parameter Success of a faulty TryToGetSpinlock call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TryToGetSpinlockType const *, OS_CODE) OSError_TryToGetSpinlock_Success(void);


/***********************************************************************************************************************
 *  OSError_ControlIdle_CoreID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter CoreID of a faulty ControlIdle call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(CoreIdType, OS_CODE) OSError_ControlIdle_CoreID(void);


/***********************************************************************************************************************
 *  OSError_ControlIdle_IdleMode()
 **********************************************************************************************************************/
/*! \brief        Returns parameter IdleMode of a faulty ControlIdle call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(IdleModeType, OS_CODE) OSError_ControlIdle_IdleMode(void);


/***********************************************************************************************************************
 *  OSError_IocSend_IN()
 **********************************************************************************************************************/
/*! \brief        Returns parameter IN of a faulty IocSend call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(void const*, OS_CODE) OSError_IocSend_IN(void);


/***********************************************************************************************************************
 *  OSError_IocWrite_IN()
 **********************************************************************************************************************/
/*! \brief        Returns parameter IN of a faulty IocWrite call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(void const*, OS_CODE) OSError_IocWrite_IN(void);


/***********************************************************************************************************************
 *  OSError_IocSendGroup_IN()
 **********************************************************************************************************************/
/*! \brief        Returns parameter IN of a faulty IocSendGroup call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(void const*, OS_CODE) OSError_IocSendGroup_IN(void);


/***********************************************************************************************************************
 *  OSError_IocWriteGroup_IN()
 **********************************************************************************************************************/
/*! \brief        Returns parameter IN of a faulty IocWriteGroup call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(void const*, OS_CODE) OSError_IocWriteGroup_IN(void);


/***********************************************************************************************************************
 *  OSError_IocReceive_OUT()
 **********************************************************************************************************************/
/*! \brief        Returns parameter OUT of a faulty IocReceive call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(void const*, OS_CODE) OSError_IocReceive_OUT(void);


/***********************************************************************************************************************
 *  OSError_IocRead_OUT()
 **********************************************************************************************************************/
/*! \brief        Returns parameter OUT of a faulty IocRead call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(void const*, OS_CODE) OSError_IocRead_OUT(void);


/***********************************************************************************************************************
 *  OSError_IocReceiveGroup_OUT()
 **********************************************************************************************************************/
/*! \brief        Returns parameter OUT of a faulty IocReceiveGroup call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(void const*, OS_CODE) OSError_IocReceiveGroup_OUT(void);


/***********************************************************************************************************************
 *  OSError_IocReadGroup_OUT()
 **********************************************************************************************************************/
/*! \brief        Returns parameter OUT of a faulty IocReadGroup call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(void const*, OS_CODE) OSError_IocReadGroup_OUT(void);


/***********************************************************************************************************************
 *  OSError_StartOS_Mode()
 **********************************************************************************************************************/
/*! \brief        Returns parameter Mode of a faulty StartOS call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(AppModeType, OS_CODE) OSError_StartOS_Mode(void);


/***********************************************************************************************************************
 *  OSError_ActivateTask_TaskID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter TaskID of a faulty ActivateTask call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TaskType, OS_CODE) OSError_ActivateTask_TaskID(void);


/***********************************************************************************************************************
 *  OSError_ChainTask_TaskID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter TaskID of a faulty ChainTask call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TaskType, OS_CODE) OSError_ChainTask_TaskID(void);


/***********************************************************************************************************************
 *  OSError_GetTaskID_TaskID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter TaskID of a faulty GetTaskID call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TaskRefType, OS_CODE) OSError_GetTaskID_TaskID(void);


/***********************************************************************************************************************
 *  OSError_GetTaskState_TaskID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter TaskID of a faulty GetTaskState call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TaskType, OS_CODE) OSError_GetTaskState_TaskID(void);


/***********************************************************************************************************************
 *  OSError_GetTaskState_State()
 **********************************************************************************************************************/
/*! \brief        Returns parameter State of a faulty GetTaskState call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TaskStateRefType, OS_CODE) OSError_GetTaskState_State(void);


/***********************************************************************************************************************
 *  OSError_SetEvent_TaskID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter TaskID of a faulty SetEvent call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TaskType, OS_CODE) OSError_SetEvent_TaskID(void);


/***********************************************************************************************************************
 *  OSError_SetEvent_Mask()
 **********************************************************************************************************************/
/*! \brief        Returns parameter Mask of a faulty SetEvent call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(EventMaskType, OS_CODE) OSError_SetEvent_Mask(void);


/***********************************************************************************************************************
 *  OSError_ClearEvent_Mask()
 **********************************************************************************************************************/
/*! \brief        Returns parameter Mask of a faulty ClearEvent call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(EventMaskType, OS_CODE) OSError_ClearEvent_Mask(void);


/***********************************************************************************************************************
 *  OSError_GetEvent_TaskID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter TaskID of a faulty GetEvent call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TaskType, OS_CODE) OSError_GetEvent_TaskID(void);


/***********************************************************************************************************************
 *  OSError_GetEvent_Mask()
 **********************************************************************************************************************/
/*! \brief        Returns parameter Mask of a faulty GetEvent call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(EventMaskRefType, OS_CODE) OSError_GetEvent_Mask(void);


/***********************************************************************************************************************
 *  OSError_WaitEvent_Mask()
 **********************************************************************************************************************/
/*! \brief        Returns parameter Mask of a faulty WaitEvent call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(EventMaskType, OS_CODE) OSError_WaitEvent_Mask(void);


/***********************************************************************************************************************
 *  OSError_GetAlarmBase_AlarmID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter AlarmID of a faulty GetAlarmBase call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(AlarmType, OS_CODE) OSError_GetAlarmBase_AlarmID(void);


/***********************************************************************************************************************
 *  OSError_GetAlarmBase_Info()
 **********************************************************************************************************************/
/*! \brief        Returns parameter Info of a faulty GetAlarmBase call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(AlarmBaseRefType, OS_CODE) OSError_GetAlarmBase_Info(void);


/***********************************************************************************************************************
 *  OSError_GetAlarm_AlarmID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter AlarmID of a faulty GetAlarm call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(AlarmType, OS_CODE) OSError_GetAlarm_AlarmID(void);


/***********************************************************************************************************************
 *  OSError_GetAlarm_Tick()
 **********************************************************************************************************************/
/*! \brief        Returns parameter Tick of a faulty GetAlarm call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TickRefType, OS_CODE) OSError_GetAlarm_Tick(void);


/***********************************************************************************************************************
 *  OSError_SetRelAlarm_AlarmID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter AlarmID of a faulty SetRelAlarm call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(AlarmType, OS_CODE) OSError_SetRelAlarm_AlarmID(void);


/***********************************************************************************************************************
 *  OSError_SetRelAlarm_increment()
 **********************************************************************************************************************/
/*! \brief        Returns parameter increment of a faulty SetRelAlarm call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TickType, OS_CODE) OSError_SetRelAlarm_increment(void);


/***********************************************************************************************************************
 *  OSError_SetRelAlarm_cycle()
 **********************************************************************************************************************/
/*! \brief        Returns parameter cycle of a faulty SetRelAlarm call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TickType, OS_CODE) OSError_SetRelAlarm_cycle(void);


/***********************************************************************************************************************
 *  OSError_SetAbsAlarm_AlarmID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter AlarmID of a faulty SetAbsAlarm call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(AlarmType, OS_CODE) OSError_SetAbsAlarm_AlarmID(void);


/***********************************************************************************************************************
 *  OSError_SetAbsAlarm_start()
 **********************************************************************************************************************/
/*! \brief        Returns parameter start of a faulty SetAbsAlarm call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TickType, OS_CODE) OSError_SetAbsAlarm_start(void);


/***********************************************************************************************************************
 *  OSError_SetAbsAlarm_cycle()
 **********************************************************************************************************************/
/*! \brief        Returns parameter cycle of a faulty SetAbsAlarm call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(TickType, OS_CODE) OSError_SetAbsAlarm_cycle(void);


/***********************************************************************************************************************
 *  OSError_CancelAlarm_AlarmID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter AlarmID of a faulty CancelAlarm call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(AlarmType, OS_CODE) OSError_CancelAlarm_AlarmID(void);


/***********************************************************************************************************************
 *  OSError_GetResource_ResID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter ResID of a faulty GetResource call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ResourceType, OS_CODE) OSError_GetResource_ResID(void);


/***********************************************************************************************************************
 *  OSError_ReleaseResource_ResID()
 **********************************************************************************************************************/
/*! \brief        Returns parameter ResID of a faulty ReleaseResource call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(ResourceType, OS_CODE) OSError_ReleaseResource_ResID(void);


/***********************************************************************************************************************
 *  OSError_Os_GetUnhandledIrq_InterruptSource()
 **********************************************************************************************************************/
/*! \brief        Returns parameter InterruptSource of a faulty Os_GetUnhandledIrq call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(Os_InterruptSourceIdRefType, OS_CODE) OSError_Os_GetUnhandledIrq_InterruptSource(void);


/***********************************************************************************************************************
 *  OSError_Os_GetUnhandledExc_ExceptionSource()
 **********************************************************************************************************************/
/*! \brief        Returns parameter ExceptionSource of a faulty Os_GetUnhandledExc call.
 *  \details      --no details--
 *
 *  \return       Requested parameter value.
 *
 *  \context      ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-97
 *  \trace        SPEC-67578, SPEC-63766
 **********************************************************************************************************************/
FUNC(Os_ExceptionSourceIdRefType, OS_CODE) OSError_Os_GetUnhandledExc_ExceptionSource(void);


# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */


#if !defined(OS_VCAST_INSTRUMENTATION_OS_OS)
/*VCAST_DONT_INSTRUMENT_END*/
#endif


#endif /* OS_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os.h
 **********************************************************************************************************************/

