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
 * \ingroup     Os_Hal
 * \defgroup    Os_Hal_Core HAL Core
 * \brief       Core and multi-core related primitives.
 * \details
 *
 * \trace CREQ-1201
 *
 * \{
 * \file    Os_Hal_CoreInt.h
 * \brief   Core and multi-core related primitives.
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

#if !defined (OS_HAL_COREINT_H)                                                                                         /* PRQA S 0883 */ /* MD_Os_Hal_0883 */
# define OS_HAL_COREINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module dependencies */
# include "Os_Hal_Core_Types.h"

/* Os kernel module declarations */
# include "Os_Core_Types.h"
# include "Os_Thread_Types.h"
# include "Os_CommonInt.h"

/* Os HAL dependencies */
# include "Os_Hal_CompilerInt.h"
# include "Os_Hal_Core_Cfg.h"

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/

/*! \brief         Returns the physical id of the core.
 *  \fn uint32 Os_Hal_GetCoreID(void)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_GetCoreID()       (uint32)(Os_Hal_GetSPR(0, 2) >> 17)                                                   /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Returns the interrupt state of the core.
 *  \fn uint32 Os_Hal_GetIntState(void)
 *  \details       --no details--
 *  \return        0x0   Interrupt acknowledgment is enabled
 *                 0x20  Interrupt acknowledgment is disabled
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_GetIntState()     (Os_Hal_GetPSW() & 0x20UL)                                                            /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Disables FE level interrupts
 *  \fn void Os_Hal_DisableFE(void)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode.
 */
# define Os_Hal_DisableFE()       Os_Hal_SetPSW(Os_Hal_GetPSW() | 0x0080UL)                                             /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets program status word to the passed value.
 *  \fn void Os_Hal_SetPSW(uint32 value)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode.
 */
# define Os_Hal_SetPSW(value)     Os_Hal_SetSPR(5, 0, (value))                                                          /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Returns the program status word of the core.
 *  \fn uint32 Os_Hal_GetPSW(void)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_GetPSW()          Os_Hal_GetSPR(5, 0)                                                                   /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the EBV flag in the program status word register.
 *  \fn void Os_Hal_SetEBVFlag(void)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode.
 */
# define Os_Hal_SetEBVFlag()      Os_Hal_SetPSW(Os_Hal_GetPSW() | 0x8000UL)                                             /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the interrupt priority masking register to the passed value.
 *  \fn void Os_Hal_SetPMR(uint32 value)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode and EI level interrupts disabled.
 */
# define Os_Hal_SetPMR(value)     Os_Hal_SetSPR(11, 2, (value))                                                         /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Returns the interrupt priority masking register of the core.
 *  \fn uint32 Os_Hal_GetPMR(void)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode and EI level interrupts disabled.
 */
# define Os_Hal_GetPMR()          Os_Hal_GetSPR(11, 2)                                                                  /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the address space identifier register to the passed value.
 *  \fn void Os_Hal_SetASID(uint32 value)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode.
 */
# define Os_Hal_SetASID(value)    Os_Hal_SetSPR(7, 2, (value))                                                          /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Returns the address space identifier register of the core.
 *  \fn uint32 Os_Hal_GetASID(void)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode.
 */
# define Os_Hal_GetASID()         Os_Hal_GetSPR(7, 2)                                                                   /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the CALLT base pointer register to the passed value.
 *  \fn void Os_Hal_SetCTBP(uint32 value)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_SetCTBP(x)        Os_Hal_SetSPR(20, 0, (x))                                                             /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Returns the CALLT base pointer register of the core.
 *  \fn uint32 Os_Hal_GetCTBP(void)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_GetCTBP()         Os_Hal_GetSPR(20, 0)                                                                  /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the SYSCALL operation setting register to the passed value.
 *  \fn void Os_Hal_SetSCCFG(uint32 value)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode.
 */
# define Os_Hal_SetSCCFG(value)   Os_Hal_SetSPR(11, 1, (value))                                                         /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Returns the SYSCALL operation settings  of the core.
 *  \fn uint32 Os_Hal_GetSCCFG(void)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_GetSCCFG()        Os_Hal_GetSPR(11, 1)                                                                  /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the SYSCALL base pointer register to the passed value.
 *  \fn void Os_Hal_SetSCBP(uint32 value)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode.
 */
# define Os_Hal_SetSCBP(value)    Os_Hal_SetSPR(12, 1, (value))                                                         /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Returns the SYSCALL base pointer register of the core.
 *  \fn uint32 Os_Hal_GetSCBP(void)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_GetSCBP()         Os_Hal_GetSPR(12, 1)                                                                  /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the EIPC to the passed value.
 *  \fn void Os_Hal_SetEIPC(uint32 value)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode.
 */
# define Os_Hal_SetEIPC(value)    Os_Hal_SetSPR(0, 0, (value))                                                          /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Gets the EIPC register of the core.
 *  \fn uint32 Os_Hal_GetEIPC(void)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode.
 */
# define Os_Hal_GetEIPC()         Os_Hal_GetSPR(0, 0)                                                                   /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the EIPSW register to the passed value.
 *  \fn void Os_Hal_SetEIPSW(uint32 value)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode.
 */
# define Os_Hal_SetEIPSW(value)   Os_Hal_SetSPR(1, 0, (value))                                                          /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Gets the EIPSW register of the core.
 *  \fn uint32 Os_Hal_GetEIPSW(void)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode.
 */
# define Os_Hal_GetEIPSW()        Os_Hal_GetSPR(1, 0)                                                                   /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the EI level exception working register of the core to the passed value.
 *  \fn void Os_Hal_SetEIWR(uint32 value)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode.
 */
# define Os_Hal_SetEIWR(value)    Os_Hal_SetSPR(28, 0, (value))                                                         /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Gets the EI level exception working register of the core.
 *  \fn uint32 Os_Hal_GetEIWR(void)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode.
 */
# define Os_Hal_GetEIWR()         Os_Hal_GetSPR(28, 0)                                                                  /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the floating-point configuration/status register of core to the passed value.
 *  \fn void Os_Hal_SetFPSR(uint32 value)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode or enabled CU0 flag in PSW
 */
# define Os_Hal_SetFPSR(value)    Os_Hal_SetSPR(6, 0, (value))                                                          /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Gets the floating-point configuration/status register of core.
 *  \fn uint32 Os_Hal_GetFPSR(void)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode or enabled CU0 flag in PSW
 */
# define Os_Hal_GetFPSR()         Os_Hal_GetSPR(6, 0)                                                                   /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the floating-point exception program counter register of core to the passed value.
 *  \fn void Os_Hal_SetFPEPC(uint32 value)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode or enabled CU0 flag in PSW
 */
# define Os_Hal_SetFPEPC(value)   Os_Hal_SetSPR(7, 0, (value))                                                          /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Gets the floating-point exception program counter register of core.
 *  \fn uint32 Os_Hal_GetFPEPC(void)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode or enabled CU0 flag in PSW
 */
# define Os_Hal_GetFPEPC()        Os_Hal_GetSPR(7, 0)                                                                   /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the exception handler vector address register of the core to the passed value.
 *  \fn void Os_Hal_SetEBASE(uint32 value)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode.
 */
# define Os_Hal_SetEBASE(value)   Os_Hal_SetSPR(3, 1, (value))                                                          /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the interrupt handler table base address register of the core to the passed value.
 *  \fn void Os_Hal_SetINTBP(uint32 value)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode.
 */
# define Os_Hal_SetINTBP(value)   Os_Hal_SetSPR(4, 1, (value))                                                          /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief         Sets the interrupt function setting register of the core to the passed value.
 *  \fn void Os_Hal_SetINTCFG(uint32 value)
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode.
 */
# define Os_Hal_SetINTCFG(value)  Os_Hal_SetSPR(13, 2, (value))                                                         /* PRQA S 3453 */ /* MD_MSR_19.7 */

/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

/*! \brief    Platform specific core configuration for AUTOSAR and Non-AUTOSAR cores.
 *  \details  Contains information for starting cores and master-slave emulation.
 */
struct Os_Hal_CoreConfigType_Tag
{
  uint32 CoreID;
};

/*! \brief    Platform specific AUTOSAR core configuration.
 *  \details  --no details--
 */
struct Os_Hal_CoreAsrConfigType_Tag
{
  P2CONST(uint8, OS_CONST, OS_CONST) ExceptionVectorTableAddr;
  P2CONST(uint8, OS_CONST, OS_CONST) EIINTVectorTableAddr;
};

/*! \brief Platform specific dynamic system information.
 *  \details  --no details--
 */
struct Os_Hal_Core2ThreadType_Tag
{
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread;
};

/*! \brief Platform specific list of system information.
 *  \details  --no details--
 */
struct Os_Hal_Core2ThreadConfigType_Tag
{
  P2VAR(Os_Hal_Core2ThreadType, AUTOMATIC, OS_VAR_NOINIT_FAST) Core2Thread[OS_COREID_COUNT];
};

/*! \brief  Platform specific system configuration.
 *  \details  --no details--
 */
struct Os_Hal_SystemConfigType_Tag
{
  uint32 CoreCount;
  P2CONST(Os_Hal_CoreAsrConfigType, OS_CONST, OS_CONST) CoreConfigRefs[OS_HAL_CFG_CORE_COUNT+1];
};

/*! XSignal interrupt configuration. */
struct Os_Hal_XSigInterruptConfigType_Tag
{
  Os_Hal_CoreType XSigCoreID;
};

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  Os_Hal_CoreGetId()
 **********************************************************************************************************************/
/*! \brief          Returns the physical identifier of the local core
 *  \details
 *
 *  \return         Physical identifier of the local core.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            -
 *
 *  \note           Candidate for OS_NOSIDEEFFECTS or OS_PURE.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_CorePhysicalIdType, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_CoreGetId,
(
  void
));

/***********************************************************************************************************************
 *  Os_Hal_CoreInit()
 **********************************************************************************************************************/
/*! \brief      Hardware initialization of the current core.
 *  \details    The kernel calls this function on each core. It shall not enable memory protection
 *              (this is part of the memory protection module). See also Os_Hal_CoreInitMaster().
 *
 *  \param[in]    Config  Configuration which shall be used to perform hardware initialization on each core.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          Supervisor mode
 *  \pre          Interrupts disabled
 *  \pre          OS may be not initialized
 *
 *  \trace        CREQ-1201
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Hal_CoreInit
(
  P2CONST(Os_Hal_CoreAsrConfigType, AUTOMATIC, OS_CONST) Config
);

/***********************************************************************************************************************
 *  Os_Hal_CoreInitMaster()
 **********************************************************************************************************************/
/*! \brief      Hardware initialization on the master core.
 *  \details    The kernel calls this function on the master core. It shall not enable memory protection.
 *              See also Os_Hal_CoreInit().
 *
 *  \param[in]    Config  Configuration which shall be used to perform hardware initialization on the master core.
 *
 *  \context      ANY
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          Supervisor mode
 *  \pre          Interrupts disabled
 *  \pre          OS may be not initialized
 *
 *  \trace        CREQ-1201
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Hal_CoreInitMaster
(
  P2CONST(Os_Hal_SystemConfigType, AUTOMATIC, OS_CONST) Config
);

/***********************************************************************************************************************
 *  Os_Hal_CoreIsThreadPointerUserReadable()
 **********************************************************************************************************************/
/*! \brief        Returns whether the thread pointer is readable in user mode.
 *  \details      --no details--
 *
 *  \return       !0 Thread pointer is readable in user mode.
 *  \return       0  Thread pointer is not readable in user mode.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_CoreIsThreadPointerUserReadable,
(
  void
));

/***********************************************************************************************************************
 *  Os_Hal_CoreSetThread()
 **********************************************************************************************************************/
/*! \brief        Set the current thread pointer on the local core.
 *  \details      Main intention of holding the current thread pointer in the HAL is to speed up access to it.
 *                The current thread pointer is accessed very often. The thread tells the kernel to which core it
 *                belongs, to which application, which memory access rights are currently active,
 *                which timing protection settings, etc.
 *
 *                There are the following variants to speed this up:
 *                1. OS exclusive special purpose register: On some architectures there are special purpose register for
 *                   OS usage. They can be used to hold information which is frequently used.
 *                2. Fast memory: Map the location for this value to fast accessible memory.
 *
 *                If the architecture does not provide such possibilities, the thread pointer can be an attribute in the
 *                Os_Hal_Core2ThreadConfigType data structure.
 *
 *                Safety measures:
 *                In case of mixed criticality derivatives, the location of the current thread has to be write protected
 *                for other cores. This may be achieved by using either
 *                  - a core local register (write protected in user mode)
 *                  - or by using a constant array which references the location of the current thread.
 *                    This location is write protected for other cores.
 *
 *  \see          \ref Os_Thread
 *  \see          \ref Os_Hal_Core2ThreadType
 *  \see          \ref Os_Hal_Core2ThreadConfigType
 *
 *  \param[out]   Core2Thread Pointer to a data structure which allows to get the current thread on a specific core
 *                (this may bee a NULL pointer on platforms which do not need such a data structure).
 *  \param[in]    Thread  Pointer to the current thread of the local core.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_CoreSetThread,
(
  P2CONST(Os_Hal_Core2ThreadConfigType, AUTOMATIC, OS_CONST) Core2Thread,
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
));

/***********************************************************************************************************************
 *  Os_Hal_CoreGetThread()
 **********************************************************************************************************************/
/*! \brief        Returns the current thread pointer of the local core.
 *  \details      See Os_Hal_CoreSetThread().
 *
 *  \param[in]    Core2Thread Pointer to a data structure which allows to get the current thread on a specific core
 *                (this may bee a NULL pointer on platforms which do not need such a data structure).
 *
 *  \return       Pointer to the current thread of the local core.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Current thread pointer has been set before.
 *
 *  \note         Candidate for OS_NOSIDEEFFECTS or OS_PURE.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_Hal_CoreGetThread,
(
  P2CONST(Os_Hal_Core2ThreadConfigType, AUTOMATIC, OS_CONST) Core2Thread
));

/***********************************************************************************************************************
 *  Os_Hal_CountLeadingZeros()
 **********************************************************************************************************************/
/*! \fn             uint8 Os_Hal_CountLeadingZeros(Os_Hal_BitFieldType BitField)
 *  \brief          Returns the number of consecutive zeros counted from the MSb.
 *  \details        If the MSb of BitField is set, zero is returned.
 *                  If the given BitField is zero, the bit width of Os_BitArrayType is returned.
 *
 *  \param[in]      BitField        Field to query.
 *
 *  \return         The number of consecutive zero bits.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            -
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Os_Hal_StackEndGet()
 **********************************************************************************************************************/
/*! \brief        Returns the stack end of two given addresses.
 *  \details      Stack growing direction is hardware dependent. On some architectures the stack end is at the low
 *                address of the stack, on others at the high address of the stack.
 *
 *  \see          \ref GlossaryStackWording
 *
 *  \param[in,out]    LowAddress  The low address of the stack.
 *  \param[in,out]    HighAddress The high address of the stack.
 *
 *  \return       Stack end pointer.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2VAR(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT),
OS_CODE, OS_ALWAYS_INLINE, Os_Hal_StackEndGet,
(
  P2VAR(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT) LowAddress,
  P2VAR(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT) HighAddress
));

/***********************************************************************************************************************
 *  Os_Hal_StackBottomGet()
 **********************************************************************************************************************/
/*! \brief        Returns the stack bottom of two given addresses.
 *  \details      Stack growing direction is hardware dependent. On some architectures the stack bottom is at the low
 *                address of the stack, on others at the high address of the stack.
 *
 *  \see          \ref GlossaryStackWording
 *
 *  \param[in,out]    LowAddress  The low address of the stack.
 *  \param[in,out]    HighAddress The high address of the stack.
 *
 *  \return       Stack bottom pointer.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2VAR(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT),
OS_CODE, OS_ALWAYS_INLINE, Os_Hal_StackBottomGet,
(
  P2VAR(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT) LowAddress,
  P2VAR(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT) HighAddress
));

/***********************************************************************************************************************
 *  Os_Hal_StackTopGet()
 **********************************************************************************************************************/
/*! \brief        Returns the stack top of the current stack.
 *  \details      Depending on the architecture, the stack pointer points to the last used or the next free entry.
 *                The stack top is defined as the last entry used.
 *
 *  \see          \ref GlossaryStackWording
 *
 *  \return       Stack top of the current stack.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -

 *********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2VAR(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT), OS_CODE,
OS_ALWAYS_INLINE, Os_Hal_StackTopGet,
(
  void
));

/***********************************************************************************************************************
 *  Os_Hal_StackPointerMoveDown()
 **********************************************************************************************************************/
/*! \brief        Moves the given pointer towards the stack bottom.
 *  \details      On systems where a pop instruction:
 *                1. Decreases the pointer, this function decreases the given stack address.
 *                2. Increases the pointer, this function increases the given stack address.
 *
 *                Decreasing and increasing is done using 'sizeof(Os_Hal_CoreStackType)'.
 *
 *  \see          \ref GlossaryStackWording
 *
 *  \param[in,out]    StackPointer  The stack pointer to step down.
 *
 *  \return       The result pointer address.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2VAR(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT), OS_CODE,
OS_ALWAYS_INLINE, Os_Hal_StackPointerMoveDown,
(
  P2VAR(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT) StackPointer
));

/***********************************************************************************************************************
 *  Os_Hal_StackCalculateUsage()
 **********************************************************************************************************************/
/*! \brief        Calculates the number of bytes between the stack bottom and the stack top.
 *  \details      -
 *
 *  \see          \ref GlossaryStackWording
 *
 *  \param[in]    StackBottom   Stack bottom.
 *  \param[in]    StackTop      Stack top.
 *
 *  \return       Number of bytes between StackBottom and StackTop including StackBottom and StackTop.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE uint32, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_StackCalculateUsage,
(
  P2CONST(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT) StackBottom,
  P2CONST(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT) StackTop
));

/***********************************************************************************************************************
 *  Os_Hal_CoreStart()
 **********************************************************************************************************************/
/*! \brief        Start the given core.
 *  \details      Starting a core is typically done by writing a special purpose register.
 *
 *  \param[in]    Core  The core which shall be started.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          Supervisor mode.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE,
OS_ALWAYS_INLINE, Os_Hal_CoreStart,
(
  P2CONST(Os_Hal_CoreConfigType, AUTOMATIC, OS_CONST) Core
));

/***********************************************************************************************************************
 *  Os_Hal_CoreSynchronize()
 **********************************************************************************************************************/
/*! \brief        Synchronize instructions and data.
 *  \details      Synchronize instruction, then synchronize data.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_Hal_CoreSynchronize, (void));

/***********************************************************************************************************************
 *  Os_Hal_SpinInit()
 **********************************************************************************************************************/
/*! \brief        Initializes the given spinlock as unlocked.
 *  \details      -
 *
 *  \param[in]    Spinlock  The spinlock to check.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_SpinInit,
(
  P2VAR(volatile Os_Hal_SpinlockType, AUTOMATIC, OS_VAR_NOINIT) Spinlock
));

/***********************************************************************************************************************
 *  Os_Hal_SpinIsLocked()
 **********************************************************************************************************************/
/*! \brief        Returns whether the given spinlock is locked or not.
 *  \details      -
 *
 *  \param[in]    Spinlock  The spinlock to check.
 *
 *  \return       0   If the given lock is free.
 *  \return       !0  If the given lock is in use.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_SpinIsLocked,
(
  P2CONST(volatile Os_Hal_SpinlockType, AUTOMATIC, OS_VAR_NOINIT) Spinlock
));

/***********************************************************************************************************************
 *  Os_Hal_SpinTryLock()
 **********************************************************************************************************************/
/*! \brief        Tries to get the lock.
 *  \details      -
 *
 *  \param[in,out]  Spinlock  The spinlock to lock.
 *
 *  \return       OS_HAL_SPINLOCKSUCCEEDED      If getting the lock succeeded.
 *  \return       not OS_HAL_SPINLOCKSUCCEEDED  If getting the lock failed.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_Hal_SpinlockResultType, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_SpinTryLock,
(
  P2VAR(volatile Os_Hal_SpinlockType, AUTOMATIC, OS_VAR_NOINIT) Spinlock
));

/***********************************************************************************************************************
 *  Os_Hal_SpinUnlock()
 **********************************************************************************************************************/
/*! \brief        Release the given spinlock.
 *  \details      -
 *
 *  \param[in,out]  Spinlock  The spinlock to unlock.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_SpinUnlock,
(
  P2VAR(volatile Os_Hal_SpinlockType, AUTOMATIC, OS_VAR_NOINIT) Spinlock
));

/***********************************************************************************************************************
 *  Os_Hal_XSigInit()
 **********************************************************************************************************************/
/*! \brief          Initialize a cross core interrupt using the given configuration.
 *  \details
 *  The kernel uses this function during OS initialization to initialize cross core interrupts.
 *
 *  \param[in,out]  XSigConfig     XSignal hardware configuration.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode
 *  \pre            Concurrent access is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_XSigInit,
(
  P2CONST(Os_Hal_XSigInterruptConfigType, AUTOMATIC, OS_CONST) XSigConfig
));

/***********************************************************************************************************************
 *  Os_Hal_XSigTrigger()
 **********************************************************************************************************************/
/*! \brief          Trigger the given interrupt.
 *  \details
 *  The kernel uses this function to tell a foreign core, that a new cross core message is available.
 *
 *  \param[in,out]  XSigConfig     XSignal hardware configuration.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_XSigTrigger,
(
  P2CONST(Os_Hal_XSigInterruptConfigType, AUTOMATIC, OS_CONST) XSigConfig
));

/***********************************************************************************************************************
 *  Os_Hal_XSigAcknowledge()
 **********************************************************************************************************************/
/*! \brief          Tell the hardware, that we are handling the interrupt request.
 *  \details
 *  The kernel uses this function to clear pending timer interrupt flags.
 *
 *  \param[in]      XSigConfig      XSignal hardware configuration.
 *
 *  \context        ISR2|OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode
 *  \pre            Concurrent access is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_XSigAcknowledge,
(
  P2CONST(Os_Hal_XSigInterruptConfigType, AUTOMATIC, OS_CONST) XSigConfig
));

/***********************************************************************************************************************
 *  Os_Hal_CoreIdle()
 **********************************************************************************************************************/
/*! \brief          Behavior during idle loop in kernel.
 *  \details        The kernel calls this function in case of idle state in a loop.
 *
 *  \context        TASK|OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_CoreIdle, (void));

/***********************************************************************************************************************
 *  Os_Hal_CoreNop()
 **********************************************************************************************************************/
/*! \brief          Behavior during loops in kernel.
 *  \details        The kernel calls this function in a loop in case that the loop is expected to take some time.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_Hal_CoreNop, (void));

/***********************************************************************************************************************
 *  Os_Hal_CoreFreeze()
 **********************************************************************************************************************/
/*! \brief          Freeze behavior.
 *  \details        The kernel calls this function to enter an endless loop in case of an assertion is not true.
 *                  Typically endless loop.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(void, OS_CODE, OS_NORETURN, Os_Hal_CoreFreeze, (void));

/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* OS_HAL_COREINT_H */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_CoreInt.h
 **********************************************************************************************************************/

