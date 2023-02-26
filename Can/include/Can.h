/* Kernbauer Version: 1.09 Konfiguration: DrvCan_Rh850McanAsr Erzeugungsgangnummer: 362 */

/*        STARTSINGLE_OF_MULTIPLE_COMMENT      */

/* KB begin CanLL_HeaderH */
/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/** \file     Can.h
 *  \brief    Interface header file of the CAN-Driver
 *  \details  Declaration of functions, variables, and constants as user API.
 *
 *********************************************************************************************************************/

/* ***************************************************************************
|-----------------------------------------------------------------------------
|               A U T H O R   I D E N T I T Y
|-----------------------------------------------------------------------------
| Initials     Name                      Company
| --------     ---------------------     ------------------------------------
| Her          Peter Herrmann            Vector Informatik GmbH
|-----------------------------------------------------------------------------
|               R E V I S I O N   H I S T O R Y
|-----------------------------------------------------------------------------
| Date       Ver  Author  Description
| ---------  ---  ------ -- --------------------------------------------------
| 2012-04-13 1.00.00  Her - Initial revision (alpha version)
| 2012-08-28 1.00.01  Her - Initial revision (beta version )
| 2013-02-01 1.01.00  Her - ESCAN00065098: Initial release version
| 2013-03-18 1.02.00  Her - ESCAN00065594: Additional (High End) features
| 2013-06-03 1.03.00  Her - ESCAN00068062: Rx Dedicated Buffers support
|                     Her - ESCAN00068305: Reduce RAM resource consumption by tailoring the configuration
|                     Her - ESCAN00068956: CAN messages to be transmitted are missing
| 2013-07-26 1.03.80  Her - ESCAN00069335: CAN-FD Bitrate Switching Prototype
| 2013-08-08 1.04.00  Her - ESCAN00069461: Further transmissions are not accepted but a memory violation is reported
|                     Her - ESCAN00069673: Conditional ECC initialization of the embedded CAN Message RAM
|                     Her - ESCAN00069937: GHS support
| 2013-09-27 1.05.00  Her - ESCAN00070770: Use Overrun in Status
|                     Her - ESCAN00070771: Compiler error: "finishRxFullCan" undefined
| 2013-10-17 1.06.00  Her - ESCAN00070952: Support customer specific post initialization
|                     Her - ESCAN00071166: AR4-328: Predefined Runtime Measurement Points
|                     Her - ESCAN00071326: Delayed overrun notification
|                     Her - ESCAN00071493: Message processed in wrong (interrupt or task ) context 
| 2013-11-20 1.07.00  Her - ESCAN00073084: Improvements on derivative handling
| 2014-02-12 1.08.00  Her - ESCAN00073939: Enhanced CAN-FD (Full) support
| 2014-03-17 1.09.00  Her - ESCAN00074327: Support embedded assembler for DiabData
| 2014-06-13 1.10.00  Her - ESCAN00076201: Support MPC5777C derivative
| 2014-10-30 2.00.00  Her - ESCAN00079193: AR4-R11 Update using ComStackLib
| 2015-01-30 2.01.00  Her - ESCAN00079800: Added CBD support (for Traveo derivative)
| 2015-02-20 2.02.00  Her - ESCAN00081372: AR4-R11 Update using ComStackLib (support Spc58xx)
| 2015-03-18 2.02.01  Her - ESCAN00081884: compile error
| 2015-04-02 2.02.02  Her - ESCAN00082190: Power Down (sleep mode) correction
|                     Her - ESCAN00082291: Memory access misalignment exception
| 2015-04-16 2.02.03  Her - ESCAN00082521: Extended Id Type not correct detected
|                     Her - ESCAN00082722: CANbedded only: Memory access misalignment exception
|                     Her - ESCAN00082724: Speed up TxCopyToCan
| 2015-07-06 2.02.04  Her - ESCAN00083815: Tx Confirmation gets lost
|                     Her - ESCAN00088481: Compiler error occurs
| 2015-07-30 2.03.00  Her - ESCAN00084313: Support MCAN Core release 3.1.0 ff.
|                     Her - ESCAN00084515: Use generated FullCAN masks
|                     Her - ESCAN00084650: Support ARM Cortex-Mx Data Memory Barrier
|                     Her - ESCAN00084814: Compiler error due to nested macro construction
| 2015-10-09 2.03.01  Her - ESCAN00085813: Endless loop during reception of messages
| 2015-11-11 2.04.00  Her - ESCAN00086128: Dynamic Rx FullCAN Message filtering failure
|                     Her - ESCAN00086359: Bosch Errata - support of workaround
| 2015-12-02 2.04.01  Her - ESCAN00086934: Support Keil compiler
|                     Her - ESCAN00087003: Missing pre-processor constants
|                     Her - ESCAN00087005: Re-Initialization fails
|                     Her - ESCAN00087056: Erroneous cancel notification
| 2015-12-03 2.05.00  Her - ESCAN00087255: Restructured due to AR4/R14
|                     Her - ESCAN00087256: Compile warning (erratum_013)
| 2016-01-21 2.05.01  Her - ESCAN00087586: Memory overwrite during RAM check
|                     Her - ESCAN00087612: Wrong mailbox checked
| 2016-02-19 2.06.00  Her - ESCAN00088392: Support 8 CAN channels (only Organi affected)
|                     Her - ESCAN00088519: Support more than 255 Dynamic Rx Objects
|                     Her - ESCAN00088756: Reserved bits may only be written with "0"
|                     Her - ESCAN00088813: Incorrect switching between Normal CAN and CAN-FD
|                     Her - ESCAN00089048: Support Mirror Mode
|                     Her - ESCAN00089049: Assertion causes compile error
|                     Her - ESCAN00089131: Dynamic Rx objects compile error
| 2016-04-12 2.06.01  Her - ESCAN00089406: AR4/R14 adaptations to AR3
| 2016-04-22 2.06.02  Her - ESCAN00089587: Memory overwrite during RAM check
|                     Her - ESCAN00089610: CAN-ID Rx access macros
| 2016-04-28 2.07.00  Her - ESCAN00089867: MISRA improvements
|            2.08.xx  Her - ESCAN00092200: Will be used for Silent branch
| 2016-06-22 2.09.00  Her - ESCAN00090584: Function call with missing parameter
|                     Her - ESCAN00090761: Generated filter for dynamic Rx objects must be disabled by default
|                     Her - ESCAN00090825: Omit obsolete cancellation delay 
|                     Her - ESCAN00091096: Support AR4/R16
|                     Her - ESCAN00091328: Support Mirror Mode (ASR)
|                     Her - ESCAN00091329: CAN-FD Bit Rate Switch always active
| 2016-12-12 2.09.01  Her - ESCAN00093263: Missing "if" caused by out-dated Organi file
|************************************************************************** */
/* KB end CanLL_HeaderH */

/*****************************************************************************
|-----------------------------------------------------------------------------
|               A U T H O R   I D E N T I T Y
|-----------------------------------------------------------------------------
| Initials     Name                      Company
| --------     ---------------------     -------------------------------------
| Bir          Holger Birke              Vector Informatik GmbH
| Wr           Hans Waaser               Vector Informatik GmbH
| Ces          Senol Cendere             Vector Informatik GmbH
| Pl           Georg Pfluegel            Vector Informatik GmbH
| Tvi          Timo Vanoni               Vector Informatik GmbH
|-----------------------------------------------------------------------------
|       C O R E    R E V I S I O N   H I S T O R Y
|-----------------------------------------------------------------------------
| Date       Ver  Author  Description
| ---------  ---  ------  ----------------------------------------------------
| 2005-09-15 0.01.00 Bir  - Creation
| 2005-11-17 1.00.00 Bir  - Finish CANoe, M32C
|                         - Change include structure and naming
| 2005-11-23 1.01.00 Bir  - some minor changes
| 2005-12-01 1.02.00 Bir  - Global Interrupt handling via OSEK supported
| 2006-01-19 1.03.00 Bir  - Wrong handle found and DET occur in CanFullCanMsgReceived
|                         - C_DISABLE_RESET_CAN_BUSOFF set (baud rate out of CANoe)
| 2006-03-16 1.04.00 Wr   - Added channel compatibility defines
|                         - Removed local parameter canHwChannels
|                         - Changed order of CanLL_TransmitLocalParameter
|                           and CanLL_TxTransmissionLocalParameter in Can_Write()
|                         - Rename CanWakeup() to CanHL_WakeupHandling()
|                         - Added support for NEC V850 aFCAN
|                         - Added CanLL_GeneratedStructureH for platform C_COMP_GHS_V85X  
|                         - Added general return value defines
|                         - Defined APPL_CAN_WAKEUP() to CanHL_WakeUpHandling()
|                         - Mapping of CanWakeUp() to Can_SetControllerMode(Controller, CAN_T_WAKEUP)
| 2006-04-19 1.05.00 Wr   - Added V850 specific handling for transition to SLEEP
|                         - Add switches to enable OSEK ISR handling for platform C_COMP_GHS_V85X
| 2006-05-22 2.00.00 Bir  - Support for AutoSar 2.0
|                         - Can.h and can_types.h connected
|                         - Include structure update
|                         - DET - switch change
|                         - API changes Can_Init(), Can_Write()
|                         - add Can_GetVersionInfo()
| 2006-06-06 2.01.00 Bir  - internal naming corrections for version defines
|                         - API for Det_ReportError changed (add parameter)
| 2006-06-12 2.02.00 Bir  - CaninitObject calculation changed
|                         - TriCore update for Interrupt priority defines
| 2006-06-12 2.03.00 Bir  - SetControllerMode return OK for unsupported STOP/START or SLEEP/WAKEUP
|                         - CaninitObject calculation changed
| 2006-06-12 2.04.00 Bir  - kCanNotSupported defined to 0x02 to avoid CAN_NOT_OK for that case
|                         - define for MEMORY_ROM (compatibility)
| 2006-07-05 2.05.00 Bir  - Can_HwHandleType as uint8
|                         - Review rework
| 2006-07-10 2.06.00 Bir  - Can_Write try/send also in case busy
| 2006-08-15 2.07.00 Bir  - mapping of CanSingleGlobalInterruptX changed
| 2006-09-04 2.08.00 Bir  - minor change in Can.h: ControllerName length expand to 20
| 2006-09-04 2.09.00 Bir  - minor change for MISRA compliance
|                         - add canStatus for initialization info
|                         - minor changes for MAC71xx
|                         - No interrupt lock inside "CanBasicCanMsgReceived"
|                         - Add FullCAN TX
|                         - Add TX Polling
|                         - Add Hardware Loop and DEM call
|                         - DET call for initialized call of Can_Init()
|                         - Add Can_InitMemory function
| 2006-11-06 2.10.00 Bir  - review rework
| 2006-11-08 2.11.00 Ces/Bir - Add Platform Mcs12x
|                         - Add local variable Controller in function Can_InitMemory()
|                         - Add define C_ENABLE_COPY_TX_DATA in header
| 2006-11-09 2.12.00 Bir  - Prepare for Post-build structure (ORGANI switch "C_HL_ENABLE_ASR_POSTBUILD_STRUCT" added)
| 2006-11-11 2.13.00 Pl   - Add Platform TMS470_DCAN
|                    Bir  - Move FullCAN Overrun notification token behind FullCAN Begin token
| 2006-11-15 2.14.00 Bir  - Post-build changes
|                         - Review changes
|                         - change CAN_HL_TX_OFFSET_HW_TO_LOG and logTxObjHandle value
|                         - ESCAN00018785: Send out of confirmation (TX Queue)
|                         - ESCAN00018915: Change multiple-include define
| 2007-01-15 2.15.00 Bir  - ESCAN00018896: wrong call to Dem_SetEventStatus
|                         - deactivate "CanOverrunNotification" due to no more need since ASR2.0
|                         - Support "Can_MainFunction_BusOff"
|                         - call Can_InitController in case of change mode from BUSOFF to START
|                         - Add Can_EnterCritical(), Can_LeaveCritical() / interrupt mapping over VStdLib or SchM
|                         - Change Version Scan Information
|                         - Remove V850 specific parts (shift to LL)
|                         - Remove Re-initialize DET report out of Can_InitController()
| 2007-02-20 2.16.00 Bir  - minor improvements
|                         - ESCAN00019720: WAKEUP does not appear after set SLEEP mode
| 2007-03-09 2.20.00 Bir  - ESCAN00019889: Update to ASR2.1
|                         - ESCAN00019889: change calculation of CAN_HL_TX_OFFSET_HW_TO_LOG (because multiplexed TX)
|                         - remove FullCAN switches to secure Post-build functionality without compile with FullCANs
|                         - ESCAN00020129: Compiler error: identifier "i" is undefined
|                         - Reduce BasicCAN logical mailbox to real BasicCAN (DLC_FIFO include size of Basic CAN)
|                         - Reduce Unused mailboxes logical mailbox to amount of sections (DLC_FIFO include size)
|                         - Move all version defines from Proto.h to Can.h (license scanning)
|                         - Add CAN_AR_*_VERSION
|                         - remove PduId out of mailbox (old from CANIf)
|                         - set "C_ENABLE_OSEK_OS_INTCAT2" if not defined "C_ENABLE_INT_OSCAT1"
|                         - set DLC also for FullCAN TX objects
|                         - generated Tables: CanActiveSendPdu,CanActiveSendState (size matter at link time)
|                         - return not OK for try to set SLEEP mode but failed in HW
|                         - move multichannel API define to Can.h
|                         - set "C_ENABLE_OSEK_OS_INTCAT2" if not defined "C_ENABLE_INT_OSCAT1"
|                         - do "CanLL_InitPowerOn" before "CanLL_InitPowerOnChannelSpecific"
|                         - move OSEK-switches out of irq.c
|                         - add CanLL_InitMemoryPowerOn token for special ll initialization
| 2007-08-28 2.21.00 Bir  - ESCAN00022112: RX Basic CAN used with wrong stop index
|                         - renaming "CaninitObject" to "Can_Init_CtrlIdx" (no runtime effect)
|                         - ESCAN00022168: Driver does not enter STOP mode for Sleep request (when SLEEP is not sup.)
|                         - ESCAN00022232: Add STOP-mode compatibility for FNOS-RP migration
|                         - ESCAN00022262: CanResetBusOffEnd() used with only one parameter
|                         - Add new Token "CanLL_RxFull_SearchHandle" for special HW-support (XGate)
|                         - ESCAN00022390: HW start-stop-index changed to RAM-table
| 2007-10-15 2.22.00 Bir  - ESCAN00022773: use of #ifndef instead of #if !defined
|                         - ESCAN00022774: improve runtime while change mode (STOP to SLEEP)
|                         - ESCAN00023040: minor improvements (add SPEC-1721, SPEC-1767, SPEC-1784, SPEC-1780, SPEC-1781)
|                         - ESCAN00023040: remove Interrupt locking in Can_Write() due to CanIf do this
|                         - ESCAN00023038: Multiple ECU
|                         - ESCAN00023047: Add version check
|                         - ESCAN00023049: change API of Can_Init() to one parameter, Add constant in Can_InitController() + Add Can_InitStruct API
|                         - ESCAN00023127: compiler warnings due to dummy assignments (used to satisfy other compilers)
|                         - ESCAN00023265: remove brackets around Can_EnterCritical
|                         - QAC / MISRA reworks
|                         - Add memory qualifiers
|                         - add v_def.h include (remove define of V_MEM..)
|                         - Review reworks
| 2007-12-14 2.23.00 Bir  - ESCAN00023442: Add extended Id support
|                         - some small changes for cancellation (cancel only less priority objects - more efficient)
|                         - protect Can_MainFunction_Read against re-entrant (ASR specification)
|                         - ESCAN00024354: Ignore API call with controller deactivated by identity
|                         - review rework
| 2008-02-06 3.00.00 Bir  - ESCAN00024406: ASR3.0
| 2008-03-25 3.01.00 Bir  - Add dummy assignment in "ResetBusOffEnd" avoid compiler warnings
|                         - ESCAN00025672: review reworks
|                         - ESCAN00025664: Message send with wrong ID type
|                         - ESCAN00026087: Case sensitive naming for all File names (and includes)
|                         - ESCAN00026186: Extension for MSR3.0 Link-time checks
|                         - ESCAN00025957: No access on "DEM-events" via DEM created and exported constant values
|                         - Move compatibility section (switches needed earlier)
| 2008-05-14 3.02.00 Bir  - ESCAN00026859: V_MEMRAM0 not allowed for type cast
|                         - ESCAN00026861: Token external declaration added
|                         - ESCAN00026990: Add LL-Token to reject Remote frames
|                         - (see ES_CAN00029839) Change naming: "INTERRUPT" and "POLLING" add prefix "CAN_*"
|                         - (see ES_CAN00029826) Remove include of v_cfg.h and v_def.h (will be generated)
|                         - ESCAN00030521: Linker error because of missing Interrupt service routine
|                         - Move include section to top of file (need before version defines)
| 2008-06-30 3.03.00 Bir  - ESCAN00027986 +(ESCAN00025773): Code optimization (save ROM and runtime)
|                           + Start/StopLoop as macro
|                           + Max Loop counter define move to LL
|                           + Add some FullCAN switches to ORGANI Basic CAN controllers
|                           + Multiple Search for Basic CAN HW object
|                           + CanInterrupt Lock only in nested interrupt case (CAN_NESTED_INTERRUPTS)
|                           + remove some HW-start/stop indexes and there calculation use instead info from mailbox-table
|                         - ESCAN00028069: change controller amount to library capable setting
|                         - ESCAN00026596: Extension for MSR3.0 generator version checks
| 2008-08-19 3.03.01 Bir  - minor review changes
|                         - ESCAN00029385: change naming finishFullCan to finishRxFullCan (CAN-bedded compliance)
| 2008-09-11 3.04.00 Bir  - ESCAN00029942: Generator Version Check failed
| 2008-09-18 3.05.00 Bir  - ESCAN00029830: Add Link-time/Post-build configure CRC check
|                         - ESCAN00029434: rename "INTERRUPT" and "POLLING" switch
| 2008-10-15 3.06.00 Bir  - remove CAN_HL_HW_x_STOPINDEX -> not used in HL and does not work for LL
|                         - ESCAN00029707: change transition from uninitialized->START->STOP to uninitialized->STOP
|                         - ESCAN00029129: Source of HW loop timer is not available to application
|                         - ESCAN00030728: move platform typedefs to Can.h
| 2008-10-28 3.06.01 Bir  - ESCAN00030926: lock interrupts while TX confirmation.
|                         - Add include protection for canproto.h
| 2008-10-28 3.07.00 Bir  - ESCAN00032401: CAN driver stays in an endless loop
|                         - ESCAN00032291: BUSOFF handling took some time with locked interrupts
|                         - ESCAN00032612: Support Individual Polling
|                         - ESCAN00032614: Add new memory qualifier V_MEMROM4_CFG for Post-build data access
| 2009-03-16 3.07.01 Bir  - ESCAN00033874: Add LL-token "CanLL_tCanRxInfoStruct" for structure tCanRxInfoStruct
| 2009-04-03 3.07.02 Bir  - ESCAN00034409: Add PRQA comments for MISRA justification
|                         - ESCAN00034551: Add support for reverse RX Basic CAN polling
|                         - ESCAN00034552: Optimize RX Basic CAN polling loop
|                         - ESCAN00034773: Add cancel TX in Hardware within TX polling task
| 2009-04-20 3.08.00 Bir  - ESCAN00034118: Add compiler abstraction
|                         - ESCAN00034119: Add memory abstraction
|                         - ESCAN00035606: Report DEM as DET "CAN_DEV_TIMEOUT_DETECT"
|                         - (see ES_CAN00035490) Report DEM as DET "CAN_DEV_TIMEOUT_DETECT"
|                         - ESCAN00036041: compiler warning label not referenced
| 2009-07-08 3.09.00 Bir  - ESCAN00034780: Confirmation without critical section
| 2009-07-22 3.09.01 Bir  - ESCAN00036593: compile error (variable declaration after assignment)
| 2009-08-03 3.09.02 Bir  - ESCAN00036822: TX data inconsistency
| 2009-08-24 3.09.03 Bir  - ESCAN00037276: Compiler warning "function declared implicitly"
| 2009-09-15 3.10.00 Bir  - ESCAN00037784: Add Generic Confirmation function
|                         - ESCAN00037789: Add feature RX Queue
|                         - change order of RX-DLC and "CanLL_RxBasicGetCANDataPtr" (support for mailbox in RAM)
|                         - ESCAN00038814: Wrong pointer class for TX data used
| 2010-01-19 3.11.00 Bir  - ESCAN00040258: Use Can_HwHandleType instead of uint8
|                         - ESCAN00040432: Code optimization for 1 controller systems
|                         - ESCAN00040433: Support dynamic FullCAN id
|                         - ESCAN00040234: remove v_cfg.h include (already done in can_cfg.h)
| 2010-03-03 3.11.01 Bir  - small review reworks
|                         - ESCAN00041364: Optimize Runtime of Can_SetControllerMode
|                         - ESCAN00041432: Declaration for ISRs missing in case of Full Polling with Individual Polling
| 2010-03-03 3.12.00 Bir  - ESCAN00041791: Suppress unexpected WAKEUP notification
|                         - ESCAN00041984: Support Common CAN
|                         - ESCAN00041996: Split Critical Sections
|                         - ESCAN00042333: Add Hardware assertion notification to DET
|                         - ESCAN00042459: Support WAKEUP-switch-off (no SLEEP mode - STOP mode instead)
|                         - ESCAN00043085: Compiler warnings due to missing cast
|                         - ESCAN00043224: New API Can_GetStatus()
|                         - ESCAN00043250: Add Application Interrupt lock functions
|                         - canWakeUp() call changed to CAN_WAKEUP() - used for LL
|                         - ESCAN00047602: compiler warning: "comparison between signed and unsigned"
|                         - ESCAN00044114: Stop sending messages after transition to STOP mode (and back to started)
| 2010-11-23 3.13.00 Bir  - ESCAN00043999: Support usage without v_def.h
|                         - ESCAN00044276: Reject unwanted ID types (software Filter)
|                         - ESCAN00045682: Compiler warning: dead assignment to "X" eliminated
|                         - ESCAN00045883: Can_SetControllerMode doesn't return CAN_NOT_OK when called with invalid Transition parameter
|                         - ESCAN00045884: Can_CheckWakeup doesn't raise the CAN_E_UNINIT development error
|                         - ESCAN00046363: Adapt AUTOSAR version check
|                         - rename "canInterruptCounter" to "canCanInterruptCounter" CBD compatibility
|                         - ESCAN00047875: Add support for partial network
|                         - ESCAN00047951: Compile error, if the feature "Optimize for one controller" is used
| 2011-03-11 4.00.00  Bir - ESCAN00043688: Support AUTOSAR 4.0 R1
|                         - ESCAN00043998: Add GenData checker
|                         - ESCAN00044010: Add Notification for Overrun detection
|                         - ESCAN00047111: Support RAM check
|                         - ESCAN00046778: Support Multiple Identity Configuration
| 2011-04-05 4.00.01  Bir - void cast DET call for MSR40 + review reworks (minors)
|                         - ESCAN00049572: RAM-check: communication is not deactivated
|                         - ESCAN00050862: EcuM_CheckWakeup is not called in case of WAKEUP Polling
|                         - ESCAN00051562: Remove the AUTOSAR Release Version Check
|                         - ESCAN00047929: Can_Init() does not initialize CAN controllers - but Can Interface do this
|                         - ESCAN00049613: AR Version is not correct (2.2.0 instead of 2.2.1)
| 2011-06-21 4.01.00  Bir - ESCAN00050960: Provide API for Generic Pretransmit (AR3-1654 )
|                         - ESCAN00051102: Compiler warning: narrowing or signed-to-unsigned type conversion found: int to unsigned char
|                         - ESCAN00052324: Compile error if the feature "Optimize for one controller" and "RX Queue" is used
|                         - ESCAN00054829: Fault tolerant API: Do not throw DET in case of MultipleEcuConfig inactive controller for 'Can_CheckWakeup'
|                         - ESCAN00053648: Wrong Define name used "CAN_DEACTIVATE_COMMUNICATION"
|                         - ESCAN00053270: AR3-1698: Add MISRA justifications in source code for automatic generation of MISRA reports
|                         - ESCAN00053263: AR3-2069: Remove non-SchM code for critical section handling
|                         - ESCAN00054038: Compiler warning: variable "canApiContext" was set but never used
|                         - ESCAN00054813: Add Mirror functionality
| 2011-11-21 4.01.01  Bir - ESCAN00055001: Support Transition HW-Loops for MSR30
|                         - ESCAN00055076: MISRA compliance
| 2011-12-14 4.01.02  Bir - ESCAN00055566: Include of DET with camel case spelling
| 2011-12-15 4.01.03  Bir - ESCAN00055589: SPEC-1761
|                         - ESCAN00056004: Add Code Trace ability to AutoSar SWS
|                         - Add explicit type casts to satisfy COSMIC compilers (MCS12x)
|                         - ESCAN00056185: Change Version Check
| 2012-01-20 4.02.00  Bir - ESCAN00055076: MISRA compliance
|                         - Use !CAN_USE_VECTOR_IF instead of VGEN_GENERATOR_GENY (also support CFG5 in mixed systems)
|                         - ESCAN00057438: AR3-2383: Implement handling of call to Dem_ReportErrorStatus
|                         - ESCAN00057164: WAKEUP while Re-Initialization ASR3.2.1
|                         - ESCAN00054830: Can_SetControllerMode() return failed
| 2012-05-31 4.02.01  Bir - ESCAN00059203: Compiler error: missing variable canHwChannel in Can_CleanUpSendState()
|                         - ESCAN00059265: Compiler error: hardware loop index is not available as define for API
| 2012-06-12 4.03.00  Bir - ESCAN00057437: AR3-2374: Implement Silent BSW
|                         - ESCAN00059412: AR4-135: support MSR 4 R5
|                         - ESCAN00059488: Compiler error: identifier "Can_ConfigDataPtr" is undefined
|                         - ESCAN00060494: Compiler error: SchM_Enter_Can((area)) causes Compiler Error with external SchM Usage
| 2012-09-03 4.03.01  Bir - Improve MISRA compliance
|                         - ESCAN00061352: Endless Loop
| 2012-09-03 4.04.00  Bir - ESCAN00061042: AR3-2378: Implement AMD time measurement support
|                         - ESCAN00060586: AR3-2446: Update Code analysis and change analysis UUIDs (like described in Silent design)
|                         - ESCAN00060554: AR3-2443: Implement Silent Checks in BSW module code
|                         - Add support for FullCAN TX cancellation only
|                         - ESCAN00062679: Add source defines according to MICROSAR template source file
| 2012-12-10 4.04.01  Bir - Rework Silent BSW
| 2013-01-28 4.04.02  Bir - ESCAN00064474: Modify Hook_On (code can be removed by integration ORGANI)
| 2013-02-02 4.05.00  Bir - optimize token StopReinit usage
|                         - move some global compatibility defines from proto.h to Can.h
|                         - ESCAN00063652: RxQueue extension to 16bit size
|                         - ESCAN00064324: AR4-325: Implement Post-Build Loadable
|                         - ESCAN00066278: Incorrect comment description for function Can_CheckWakeup / Can_Cbk_CheckWakeup
| 2013-06-11 4.05.01  Bir - ESCAN00067936: Can_GetStatus wrongly returns CAN_STATUS_INCONSISTENT
|                         - Add QAC deviations for 6010, 6030, 6050, 6080
| 2013-06-12 4.06.00  Tvi/Bir - ESCAN00069107: AR4-397: Implement support for CAN-FD according to ASR4.1.1
|                         - ESCAN00070197: Compiler warning: variable Can_ConfigDataPtr was declared but never referenced
|                         - ESCAN00068900: Compiler warning
|                         - ESCAN00067711: AR4-328 / RTM measurement R8
|                         - ESCAN00070625: Adapt usage of CanResetBusOffEnd
|                         - ESCAN00071048: Support null_ptr data in Can_Write() for DLC==0
|                         - Add DOXYGEN comments to be used by API scanner
|                         - move some global compatibility defines from proto.h to Can.h
| 2013-10-25 4.06.01  Bir - R9 version / some minor MISRA improvements
|                         - ESCAN00073272: Support Can_InitController() failure in LL
|                         - ESCAN00073676: Its not possible to switch off MIRROR mode for reception when using RxQueue
|                         - ESCAN00073516: MIRROR_MODE add CAN interrupt lock around confirmation
| 2014-06-23 4.06.02  Bir - ESCAN00076374: Add TX Request cancellation in case of HW-loop break
| 2014-06-23 4.07.00  Bir - R10 ComStackLibAbtraction
|                         - ESCAN00074371: AR4-457: Support CAN-FD mode 2
| 2014-07-01 5.00.00  Bir - R11
|                         - ESCAN00076631: Post-build selectable (+loadable)
|                         - ESCAN00076498: CAN FD mode2
|                         - ESCAN00076634: Multiple CAN driver support
|                         - ESCAN00078089: RAM Check also for emulated SLEEP
|                         - ESCAN00079232: rename canProto.h to Can_Local.h
| 2014-11-24 5.00.01  Bir - coverage improvements
|                         - ESCAN00079480: support GENy (ComStackLib abstraction)
| 2014-12-14 5.01.00  Bir - ESCAN00079794: CAN-FD configured padding
|                         - ESCAN00080453: mask out FD-Bit in GenericPrecopy
|                         - ESCAN00080757: Limit DLC to 8 for Classic CAN RX-Frames
|                         - Support TxIndirectionHwToLog and LogToHw (platforms that use hwHandles for TX shadow buffers)
|                         - ESCAN00081930: DET error (CAN_INITCTR_ID, CAN_E_PARAM_CONTROLLER) occur
|                         - ESCAN00082533: BasicCAN message cancelled out of hardware but is not configured
| 2015-01-19 5.02.00  Bir - ESCAN00080306: FEAT-427 SafeBSW
|                           ESCAN00081793: FEAT-1275 SafeBSW step2
|                           + Merge API and Core history and move it to Can.h
|                           + add code design comments / rework comments in general
|                           + rework DET and SilentDet handling (SilentDet is now DET, no more MACRO)
|                           + split large functions in INLINE functions to reduce CYC
|                           ESCAN00073798: disable CAN interrupts while polling
|                           ESCAN00082042: API description Appl_GenericPrecopy
|                           ESCAN00082274: FEAT-1379: Optimized copy operation for large data
|                           ESCAN00082688: DET error (CAN_MAINFCT_*_ID, CAN_E_PARAM_CONTROLLER) occur
| 2015-07-30 5.02.01  Bir - remove goto/labels for HL - add it for LL
|                           shift CanLL_DefinesDataTypesStructsUnions from Can.c to Can_Local.h
|                           typedef Can_ControllerConfigPtrType from Can_Cfg.h in case of postbuild
|                           include det.h only for report level not detection (from 5.02.00)
|                           ESCAN00084263, ESCAN00084264: reject illegal DLC
| 2015-11-09 5.02.02  Bir - ESCAN00086345: BasicCAN RX message not received
| 2015-10-27 5.03.00  Bir - ESCAN00085666: Gateway - multiple BasicCAN Tx
|                           Add CanHL_StopReinit, CanHL_RxBasicMsgReceivePolling, CanHL_RxFullMsgReceivePolling
|                           remove Copyright info from Core use LL Copyright instead
| 2015-12-21 5.03.01  Bir - ESCAN00087253: preprocessor directives error in CanHL_WakeupTransition() or CanHL_SleepTransition()
| 2016-01-15 5.03.02  Bir - ESCAN00087518: Illegal pointer access when driver is not initialized
|                           test coverage improvements / minor MISRA improvements
|                           remove some _COMMEN_T postfixes for ORGANI (HW-layout may be TOOL dependent)
| 2016-01-29 5.04.00  Bir - test coverage improvements / minor MISRA improvements
|                           ESCAN00088335: FEAT-598: Extended RAM Check / SelfDiag
|                           ESCAN00087810: FEAT-1688: SafeBSW Step 4
|                           ESCAN00089399: Compiler error: 0=0 assignment
| 2016-04-14 5.04.01  Bir - review rework from 5.04.00
|                           rework traceability, rework coverage comments
|                           ESCAN00089754: Compile error overrun notification by DET without DET enabled (MSR401 only)
| 2016-06-21 5.05.00  Bir - ESCAN00089632: FEAT-1908: Access to Interrupt Control Register via OS
|                           ESCAN00089592: FEAT-1513: Release of CAN-FD
|                           FEAT-1602: Release of MultiBasicCAN-Tx (Gateway)
| 2016-08-24 5.05.01  Bir - ESCAN00091600: support MultiBasicCanTx with HW size > 1
| 2016-08-25 5.05.02  Bir - minor design improvement because of SafetyCheck
|                           ESCAN00091764: mode transition will be fully synchronous
|****************************************************************************/

#if !defined(CAN_H)
#define CAN_H

/***************************************************************************/
/* Include                                                                 */
/***************************************************************************/
/* \trace SPEC-1408 */
#include "Can_Cfg.h"

#if !defined(CAN_MIRROR_MODE) /* COV_CAN_COMPATIBILITY */
# define CAN_MIRROR_MODE STD_OFF
#else
# if (CAN_MIRROR_MODE == STD_ON) /* COV_CAN_COMPATIBILITY */
#  include "CDDMirror.h"
#  define C_ENABLE_MIRROR_MODE
# endif
#endif

/* PRQA  S 0828 QAC_Can_0828 */ /* MD_Can_0828 */
/* PRQA  S 0850 QAC_Can_0850 */ /* MD_Can_0850 */

/***************************************************************************/
/* Version                  (abcd: Main version ab Sub Version cd )        */
/***************************************************************************/
/* Vector module version */
/* KB begin CanLL_VersionH */
/* ##V_CFG_MANAGEMENT ##CQProject : DrvCan_MPC5700MCANASR CQComponent : Implementation */
#define DRVCAN_MPC5700MCANASR_VERSION         0x0209u
#define DRVCAN_MPC5700MCANASR_RELEASE_VERSION 0x01u
/* KB end CanLL_VersionH */

/* internal Core Version */
#define CAN_COREVERSION           0x0505u
#define CAN_RELEASE_COREVERSION   0x02u

/* AutoSar Version for API */
/* BR:013, BR:014 */
#if !defined(CAN_MSR403) /* COV_CAN_COMPATIBILITY */
# define CAN_MSR403                       403u
#endif
#if (CAN_MICROSAR_VERSION == CAN_MSR40) /* COV_CAN_MICROSAR_VERSION */
# define CAN_AR_RELEASE_MAJOR_VERSION      4
# define CAN_AR_RELEASE_MINOR_VERSION      0
# define CAN_AR_RELEASE_REVISION_VERSION   1
# define CAN_ENABLE_MICROSAR_VERSION_MSR40
# define CAN_ENABLE_MICROSAR_VERSION_MSR40X
#endif
#if (CAN_MICROSAR_VERSION == CAN_MSR403) /* COV_CAN_MICROSAR_VERSION */
# define CAN_AR_RELEASE_MAJOR_VERSION      4
# define CAN_AR_RELEASE_MINOR_VERSION      0
# define CAN_AR_RELEASE_REVISION_VERSION   3
# define CAN_ENABLE_MICROSAR_VERSION_MSR403
# define CAN_ENABLE_MICROSAR_VERSION_MSR40X
#endif
#if (CAN_MICROSAR_VERSION == CAN_MSR30) /* COV_CAN_MICROSAR_VERSION */
# define CAN_AR_MAJOR_VERSION              2
# define CAN_AR_MINOR_VERSION              5
# define CAN_AR_PATCH_VERSION              0
# define CAN_ENABLE_MICROSAR_VERSION_MSR30
#endif

/* AutoSar module version */
#define CAN_SW_MAJOR_VERSION   ((DRVCAN_MPC5700MCANASR_VERSION & 0xFF00u) >> 8)
#define CAN_SW_MINOR_VERSION   (DRVCAN_MPC5700MCANASR_VERSION & 0x00FFu)
#define CAN_SW_PATCH_VERSION   (DRVCAN_MPC5700MCANASR_RELEASE_VERSION & 0xFFu)

/***************************************************************************/
/* Defines and Macros                                                      */
/***************************************************************************/
#define CAN_VENDOR_ID   30u
#define CAN_MODULE_ID   80u
#if !defined(CAN_INSTANCE_ID) /* COV_CAN_COMPATIBILITY */
# define CAN_INSTANCE_ID  0u
#endif

#if !defined(CAN_30_GLOBAL_DEFINES) /* COV_CAN_USER_CONFIG */
# define CAN_30_GLOBAL_DEFINES
# if !defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* otherwise enumeration in Can_GeneralTypes */ /* COV_CAN_MICROSAR_VERSION */
/* Can_SetControllerMode transient */
#  define CAN_T_START       0
#  define CAN_T_STOP        1
#  define CAN_T_SLEEP       2
#  define CAN_T_WAKEUP      3
/* return values (e.g. for Can_SetControllerMode) */
/* \trace SPEC-1397 */
#  define CAN_NOT_OK        (uint8)0x00
#  define CAN_OK            (uint8)0x01
#  define CAN_NOT_SUPPORTED ((uint8)0x02 | CAN_OK) /* not supported is OK + special bit for internal use -> used for SLEEP/WAKEUP mask out 0x02 to get CAN_OK */
#  define CAN_REQUESTED     (uint8)0x04
# endif
/* return values for Can_write */
# define CAN_FREE           CAN_OK              /* none AUTOSAR (used only internal) */
# define CAN_BUSY           CAN_NOT_SUPPORTED   /* none AUTOSAR (used only internal) */
#endif

#if !defined(kCanChannelNotUsed) /* COV_CAN_COMPATIBILITY */
# define kCanChannelNotUsed 0xFF
#endif

/* Module Id's */
#define CAN_INIT_ID            0x00
#define CAN_INITCTR_ID         0x02
#define CAN_SETCTR_ID          0x03
#define CAN_DIINT_ID           0x04
#define CAN_ENINT_ID           0x05
#define CAN_WRITE_ID           0x06
#define CAN_VERSION_ID         0x07
#define CAN_MAINFCT_WRITE_ID   0x01
#define CAN_MAINFCT_READ_ID    0x08
#define CAN_MAINFCT_BO_ID      0x09
#define CAN_MAINFCT_WU_ID      0x0A
#define CAN_MAINFCT_MODE_ID    0x0C
#define CAN_CKWAKEUP_ID        0x0B
#define CAN_CHANGE_BR_ID       0x0D
#define CAN_CHECK_BR_ID        0x0E
#define CAN_SET_BR_ID          0x0F

/* Internal Id's */
#define CAN_RXINDI_ID          0x10
#define CAN_TXCNF_ID           0x11
#define CAN_CTRWAKEUP_ID       0x12
#define CAN_CTRBUSOFF_ID       0x13
#define CAN_HW_ACCESS_ID       0x20

/* \trace SPEC-1702, SPEC-1401, SPEC-3780, SPEC-3839, SPEC-50568, SPEC-1568 */
/* Error Codes */
#define CAN_E_NO_ERROR              (uint8)0x00
#define CAN_E_PARAM_POINTER         (uint8)0x01
#define CAN_E_PARAM_HANDLE          (uint8)0x02
#define CAN_E_PARAM_DLC             (uint8)0x03
#define CAN_E_PARAM_CONTROLLER      (uint8)0x04
#define CAN_E_UNINIT                (uint8)0x05
#define CAN_E_TRANSITION            (uint8)0x06
#define CAN_E_DATALOST              (uint8)0x07   /* for MSR30 extension */
#define CAN_E_PARAM_BAUDRATE        (uint8)0x08   /* MRS403 only */
#define CAN_E_RXQUEUE               (uint8)0x10   /* extension */
#define CAN_E_TIMEOUT_DET           (uint8)0x11   /* extension */
#define CAN_E_GENDATA               (uint8)0x12   /* extension - used by LL to throw standardized issue for inconsistent generated data */

/* Return values Can_GetStatus() */
#define CAN_STATUS_UNINIT                       ((uint8)0x00) /* ASR extension */
#define CAN_STATUS_START                        ((uint8)0x01) /* ASR extension (kCanTxOn) */
#define CAN_STATUS_STOP                         ((uint8)0x02) /* STOP */
#define CAN_STATUS_INIT                         ((uint8)0x04) /* Initialized */
#define CAN_STATUS_INCONSISTENT                 ((uint8)0x08) /* Inconsistent      used for common CAN */
#define CAN_STATUS_WARNING                      ((uint8)0x10) /* WARNING */
#define CAN_STATUS_PASSIVE                      ((uint8)0x20) /* PASSIVE */
#define CAN_STATUS_BUSOFF                       ((uint8)0x40) /* BUSOFF */
#define CAN_STATUS_SLEEP                        ((uint8)0x80) /* SLEEP */
#define CAN_STATUS_MASK_NOMODE                  ((uint8)0x0C) /* Initialized & Inconsistent/DEACTIVATE */

#if defined(C_DRV_INTERNAL) /* just for internal usage */ /* COV_CAN_INTERNAL */
# define CAN_REQ_NONE                           ((uint8)0x00)
# define CAN_REQ_START                          ((uint8)0x01)
# define CAN_REQ_STOP                           ((uint8)0x02)
# define CAN_REQ_WAKEUP                         ((uint8)0x08)
# define CAN_REQ_SLEEP                          ((uint8)0x80)
# define CAN_REQ_INIT_NO_STOP                   ((uint8)0x04)
# define CAN_REQ_RAM_CHECK                      ((uint8)0x10)
#endif
/* Macros to use Can_GetStatus() */
#define CAN_HW_IS_OK(state)                     (((state) & (CAN_STATUS_WARNING |  \
                                                          CAN_STATUS_PASSIVE |  \
                                                          CAN_STATUS_BUSOFF) )    == 0) /* PRQA S 3453 */ /* MD_Can_3453 */
#define CAN_HW_IS_WARNING(state)                (((state) & CAN_STATUS_WARNING)      != 0) /* PRQA S 3453 */ /* MD_Can_3453 */
#define CAN_HW_IS_PASSIVE(state)                (((state) & CAN_STATUS_PASSIVE)      != 0) /* PRQA S 3453 */ /* MD_Can_3453 */
#define CAN_HW_IS_BUSOFF(state)                 (((state) & CAN_STATUS_BUSOFF)       != 0) /* PRQA S 3453 */ /* MD_Can_3453 */
#define CAN_HW_IS_WAKEUP(state)                 (((state) & CAN_STATUS_SLEEP)        == 0) /* PRQA S 3453 */ /* MD_Can_3453 */
#define CAN_HW_IS_SLEEP(state)                  (((state) & CAN_STATUS_SLEEP)        != 0) /* PRQA S 3453 */ /* MD_Can_3453 */
#define CAN_HW_IS_STOP(state)                   (((state) & CAN_STATUS_STOP)         != 0) /* PRQA S 3453 */ /* MD_Can_3453 */
#define CAN_HW_IS_START(state)                  (((state) & CAN_STATUS_START)        != 0) /* PRQA S 3453 */ /* MD_Can_3453 */
#define CAN_HW_IS_INCONSISTENT(state)           (((state) & CAN_STATUS_INCONSISTENT) != 0) /* PRQA S 3453 */ /* MD_Can_3453 */

/* Hardware Loop defines */
#if !defined(CAN_ENABLE_MICROSAR_VERSION_MSR30) /* COV_CAN_MICROSAR_VERSION */
# define kCanLoopStart        ((uint8)CAN_LOOP_MAX)  /* used by HL */
# define kCanLoopStop         ((uint8)CAN_LOOP_MAX)  /* used by HL */
# define kCanLoopSleep        ((uint8)CAN_LOOP_MAX)  /* used by HL */
# define kCanLoopWakeup       ((uint8)CAN_LOOP_MAX)  /* used by HL */
# define CAN_LOOP_AMOUNT   ((uint8)(CAN_LOOP_MAX + 1u))  /* used by HL */
#else
# define CAN_LOOP_AMOUNT   ((uint8)CAN_LOOP_MAX)  /* used by HL */
/* defined by LL */
#endif

/***************************************************************************/
/* LL return values                                                        */
/***************************************************************************/
/* KB begin CanLL_ReturnValuesH */
/* return values of CanRxActualIdType */
#define kCanIdTypeStd          ((vuint8)0x00U)
#define kCanIdTypeExt          (0x40000000UL)
#define kCanFdTypeBrs          ((vuint8)0x10U)
#define kCanFdTypeEdl          ((vuint8)0x20U)            /* With MCAN Rel. 3.1.0 EDL was renamed to FDF */
#define kCanFdTypeFd           ((vuint8)kCanFdTypeBrs)    /* EDL without BRS is not supported by AUTOSAR */

/* KB end CanLL_ReturnValuesH */

/***************************************************************************/
/* LL parameter values                                                     */
/***************************************************************************/
/* KB begin CanLL_ParameterValuesH */
/* PRQA S 3453 EOF */ /* MD_Can_3453 */
/* parameter for ApplCanTimerStart(),-End(), -Loop() */
/* index has to start with 0, continues numbers have to be used. Gaps are not allowed!
   */
#define kCanLoopInit          ((vuint8)0x00U)
#define kCanLoopRxFifo        ((vuint8)0x01U)
#define kCanLoopCanCancel     ((vuint8)0x02U)
#define kCanLoopClockStop     ((vuint8)0x03U)

# if (CAN_MICROSAR_VERSION == CAN_MSR30)
#   define kCanLoopStart        ((vuint8)0x04U)  /* used by core */
#   define kCanLoopStop         ((vuint8)0x05U)  /* used by core */
#   define kCanLoopSleep        ((vuint8)0x06U)  /* used by core */
#   define kCanLoopWakeup       ((vuint8)0x07U)  /* used by core */
# else
/* CAN_MSR40 use CAN_LOOP_MAX for internal loop index */
# endif

#define kCanACTIVE           0x00000001u /* '1'= used to search or set the active connection  */ 
#define CanLL_DlcMask        0xF0u       /* bit remaining unchanged should be masked with '1' */
#define CanLL_HwDlcMask      0x000F0000u /* MCAN register layout */

/* KB end CanLL_ParameterValuesH */

/* compatibility (LL may need this for check against current status)  */
#define kCanHwIsInit CAN_STATUS_INIT
#define kCanHwIsSleep CAN_STATUS_SLEEP

/* results of CAN RAM check */
#define CAN_DEACTIVATE_CONTROLLER               CAN_STATUS_INCONSISTENT
#define CAN_ACTIVATE_CONTROLLER                 ((uint8)0x00)

/* compatibility to LL in can_irq.c / can.c */
#if !defined(CAN_DEV_ERROR_REPORT) /* COV_CAN_COMPATIBILITY */
# define CAN_DEV_ERROR_REPORT CAN_DEV_ERROR_DETECT
#endif
#if defined(V_OSTYPE_OSEK) || defined(V_OSTYPE_AUTOSAR) /* COV_CAN_OS_USAGE */
# if !defined(C_ENABLE_OSEK_OS) /* COV_CAN_OS_USAGE */
#  define C_ENABLE_OSEK_OS
# endif
# if !defined(C_ENABLE_OSEK_OS_INTCAT2) && !defined(C_DISABLE_OSEK_OS_INTCAT2) /* COV_CAN_OS_USAGE */
#  define C_ENABLE_OSEK_OS_INTCAT2
# endif
#endif
#if (CAN_TX_PROCESSING == CAN_POLLING) /* COV_CAN_TX_POLLING */
# define C_ENABLE_TX_POLLING
#endif
#if (CAN_RX_PROCESSING == CAN_POLLING) /* COV_CAN_RX_POLLING */
# define C_ENABLE_RX_BASICCAN_POLLING
# define C_ENABLE_RX_FULLCAN_POLLING
# define C_ENABLE_RX_POLLING
#endif
#if (CAN_BUSOFF_PROCESSING == CAN_POLLING) /* COV_CAN_ERROR_POLLING */
# define C_ENABLE_ERROR_POLLING
#endif
#if (CAN_WAKEUP_PROCESSING == CAN_POLLING) /* COV_CAN_WAKEUP_POLLING */
# define C_ENABLE_WAKEUP_POLLING
#endif
#if (CAN_INDIVIDUAL_PROCESSING == STD_ON) /* COV_CAN_INDIVIDUAL_POLLING */
# define C_ENABLE_INDIVIDUAL_POLLING
#endif
#if (CAN_MULTIPLE_BASICCAN == STD_ON) /* COV_CAN_MULTIPLE_BASICCAN */
# define C_ENABLE_MULTIPLE_BASICCAN
#endif
#if !defined(CAN_MULTIPLE_BASICCAN_TX) /* COV_CAN_COMPATIBILITY */
# define CAN_MULTIPLE_BASICCAN_TX STD_OFF
#else
# if (CAN_MULTIPLE_BASICCAN_TX == STD_ON) /* COV_CAN_MULTIPLE_BASICCAN_TX */
#  define C_ENABLE_MULTIPLE_BASICCAN_TX
# endif
#endif
#if (CAN_TX_FULLCAN_OBJECTS == STD_ON) /* COV_CAN_TX_FULLCAN_OBJECTS */
# define C_ENABLE_TX_FULLCAN_OBJECTS
#endif
#if (CAN_RX_FULLCAN_OBJECTS == STD_ON) /* COV_CAN_RX_FULLCAN_OBJECTS */
# define C_ENABLE_RX_FULLCAN_OBJECTS
#endif
#if (CAN_RX_BASICCAN_OBJECTS == STD_ON)
# define C_ENABLE_RX_BASICCAN_OBJECTS
#endif
#if (CAN_MULTI_ECU_CONFIG == STD_ON) /* COV_CAN_MULTI_ECU_CONFIG */
# define C_ENABLE_MULTI_ECU_CONFIG
#endif
#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON) /* COV_CAN_HW_TRANSMIT_CANCELLATION */
# define C_ENABLE_CANCEL_IN_HW
#endif
#if defined(C_ENABLE_CANCEL_IN_HW) || defined(C_ENABLE_CANCEL_FULLCAN_IN_HW) /* COV_CAN_CANCEL_IN_HW */
# define C_ENABLE_CANCEL_TX_IN_HW
#endif
#if (CAN_HARDWARE_CANCELLATION == STD_ON) /* COV_CAN_HARDWARE_CANCELLATION */
#define C_ENABLE_HW_LOOP_TIMER
#endif
#if (CAN_EXTENDED_ID == STD_ON) /* COV_CAN_EXTENDED_ID */
# define C_ENABLE_EXTENDED_ID
#endif
#if (CAN_MIXED_ID == STD_ON) /* COV_CAN_MIXED_ID */
# define C_ENABLE_MIXED_ID
#endif
#if (CAN_SECURE_TEMP_BUFFER == STD_ON) /* COV_CAN_SECURE_TEMP_BUFFER */
# define C_ENABLE_HWBUFFER
#endif
#if (CAN_SLEEP_SUPPORT == STD_ON) /* COV_CAN_SLEEP_SUPPORT */
# if (CAN_WAKEUP_SUPPORT == STD_ON) /* COV_CAN_WAKEUP_SUPPORT */
/* before version 3.12 this switches occur always synchronous both to ON or OFF (C_ENABLE_WAKEUP no more used) */
/* if CAN_WAKEUP_SUPPORT is switched off, STOP mode will be used instead of SLEEP (see AUTOSAR specification) */
# define C_ENABLE_SLEEP_WAKEUP
# endif
#endif
#if (CAN_COMMON_CAN == STD_ON) /* COV_CAN_COMMON_CAN */
# define C_ENABLE_COMMON_CAN
#else
# define C_DISABLE_COMMON_CAN
#endif
#if (CAN_OVERRUN_NOTIFICATION == CAN_APPL) /* COV_CAN_OVERRUN_NOTIFICATION */
# define C_ENABLE_OVERRUN
# define C_ENABLE_FULLCAN_OVERRUN
#endif
#if (CAN_OVERRUN_NOTIFICATION == CAN_DET) /* COV_CAN_OVERRUN_NOTIFICATION */
# if (CAN_DEV_ERROR_REPORT != STD_ON) /* COV_CAN_COMPATIBILITY */
#  if !defined(CAN_ENABLE_MICROSAR_VERSION_MSR40) /* COV_CAN_MICROSAR_VERSION */ /* MSR401: Tool always generate Overrun as DET */
#   error "CAN_OVERRUN_NOTIFICATION == CAN_DET need CAN_DEV_ERROR_REPORT == STD_ON"
#  endif
# else
#  define C_ENABLE_OVERRUN
#  define C_ENABLE_FULLCAN_OVERRUN
# endif
#endif
#if (CAN_MULTIPLEXED_TRANSMISSION == STD_ON) /* COV_CAN_MULTIPLEXED_TRANSMISSION */
# define C_ENABLE_MULTIPLEXED_TRANSMISSION
#endif
#if (CAN_EXTENDED_STATE_MACHINE == STD_ON) /* COV_CAN_EXTENDED_STATE_MACHINE */
# define CAN_ENABLE_EXTENDED_STATE_MACHINE
#endif
#if (CAN_BUSOFF_SUPPORT_API == STD_ON) /* COV_CAN_BUSOFF_SUPPORT_API */
# define CAN_ENABLE_BUSOFF_SUPPORT_API
#endif
#if (CAN_RX_QUEUE == STD_ON) /* COV_CAN_RX_QUEUE */
# define C_ENABLE_RX_QUEUE
#endif

/* compatibility to older baseAsr.dll */
#if !defined(CAN_API2) /* used for Appl_GenericConfirmation() to switch the API */ /* COV_CAN_COMPATIBILITY */
# define CAN_API2 2
#endif
#if !defined(CAN_GENERIC_CONFIRMATION) /* COV_CAN_COMPATIBILITY */
# define CAN_GENERIC_CONFIRMATION            STD_OFF
#endif
#if (CAN_GENERIC_CONFIRMATION == STD_ON)
# define CAN_ENABLE_GENERIC_CONFIRMATION_API1
#endif
#if (CAN_GENERIC_CONFIRMATION == CAN_API2) /* COV_CAN_GENERIC_CONFIRMATION_API2 */
# define CAN_ENABLE_GENERIC_CONFIRMATION_API2
#endif

#if !defined(CAN_DYNAMIC_FULLCAN_ID)  /* COV_CAN_COMPATIBILITY */
# define CAN_DYNAMIC_FULLCAN_ID              STD_ON
#endif
#if (CAN_DYNAMIC_FULLCAN_ID == STD_ON) /* COV_DYNAMIC_FULLCAN_ID */
# define CAN_ENABLE_DYNAMIC_FULLCAN_ID
#endif
#if !defined(CAN_ONE_CONTROLLER_OPTIMIZATION) /* COV_CAN_COMPATIBILITY */
#define CAN_ONE_CONTROLLER_OPTIMIZATION      STD_OFF
#endif
#if (CAN_ONE_CONTROLLER_OPTIMIZATION == STD_ON)
# if defined(kCanNumberOfMaxUsedControllers) /* COV_CAN_COMPATIBILITY */
#  if (kCanNumberOfMaxUsedControllers != 1)
#   error "Using Optimization for one Controller does not work with more than 1 Controller (max) configured"
#  endif
# endif
# define C_SINGLE_RECEIVE_CHANNEL
# define C_DISABLE_MULTICHANNEL_API
# define CAN_CHANNEL_CANTYPE_ONLY         void   /* PRQA S 3460 */ /* MD_Can_3460 */
# define CAN_CHANNEL_CANTYPE_FIRST
# define CAN_CHANNEL_CANTYPE_LOCAL
# define CAN_CHANNEL_CANPARA_ONLY
# define CAN_CHANNEL_CANPARA_FIRST
# define CAN_HW_CHANNEL_CANTYPE_ONLY      void    /* PRQA S 3460 */ /* MD_Can_3460 */
# define CAN_HW_CHANNEL_CANTYPE_FIRST
# define CAN_HW_CHANNEL_CANTYPE_LOCAL
# define CAN_HW_CHANNEL_CANPARA_ONLY
# define CAN_HW_CHANNEL_CANPARA_FIRST
#else
# if defined(MISRA_CHECK) /* COV_CAN_MISRA */
#  pragma PRQA_MACRO_MESSAGES_OFF "CAN_CHANNEL_CANTYPE_LOCAL",781
#  pragma PRQA_MACRO_MESSAGES_OFF "CAN_HW_CHANNEL_CANTYPE_LOCAL",781
# endif
# define C_MULTIPLE_RECEIVE_CHANNEL
# define C_ENABLE_MULTICHANNEL_API
# define CAN_CHANNEL_CANTYPE_ONLY         CanChannelHandle  Controller
# define CAN_CHANNEL_CANTYPE_FIRST        CanChannelHandle  Controller,
# define CAN_CHANNEL_CANTYPE_LOCAL        CanChannelHandle  Controller; /* PRQA S 3412 */ /* MD_Can_3412 */
# define CAN_CHANNEL_CANPARA_ONLY        (CanChannelHandle) Controller
# define CAN_CHANNEL_CANPARA_FIRST       (CanChannelHandle) Controller,
#  define CAN_HW_CHANNEL_CANTYPE_ONLY     CanChannelHandle  Controller
#  define CAN_HW_CHANNEL_CANTYPE_FIRST    CanChannelHandle  Controller,
#  define CAN_HW_CHANNEL_CANTYPE_LOCAL    CanChannelHandle  Controller; /* PRQA S 3412 */ /* MD_Can_3412 */
#  define CAN_HW_CHANNEL_CANPARA_ONLY    (CanChannelHandle) Controller
#  define CAN_HW_CHANNEL_CANPARA_FIRST   (CanChannelHandle) Controller,
#endif
#if !defined(CAN_GET_STATUS) /* COV_CAN_COMPATIBILITY */
# define CAN_GET_STATUS STD_OFF
#endif
#if (CAN_GET_STATUS == STD_ON)
# define C_ENABLE_EXTENDED_STATUS
#endif
#if !defined(CAN_DRIVER) /* COV_CAN_COMPATIBILITY */
# define CAN_DRIVER 1
#endif
#if !defined(CAN_APPL) /* COV_CAN_COMPATIBILITY */
# define CAN_APPL 2
#endif
#if !defined(CAN_BOTH) /* COV_CAN_COMPATIBILITY */
# define CAN_BOTH 3
#endif
#if !defined(CAN_INTLOCK) /* COV_CAN_COMPATIBILITY */
# define CAN_INTLOCK CAN_DRIVER
#endif
#if !defined(CAN_PARTIAL_NETWORK) /* COV_CAN_COMPATIBILITY */
# define CAN_PARTIAL_NETWORK STD_OFF
#endif
#if (CAN_PARTIAL_NETWORK == STD_ON) /* COV_CAN_PARTIAL_NETWORK */
# define C_ENABLE_PARTIAL_NETWORK
#endif
#if !defined(CAN_RAM_CHECK) /* COV_CAN_COMPATIBILITY */
# define CAN_RAM_CHECK CAN_NONE
#else
# if (CAN_RAM_CHECK == CAN_NOTIFY_ISSUE) /* COV_CAN_RAM_CHECK */
#  define C_ENABLE_CAN_RAM_CHECK
#  define C_ENABLE_CAN_RAM_CHECK_WAKEUP
# endif
# if (CAN_RAM_CHECK == CAN_NOTIFY_MAILBOX) /* COV_CAN_RAM_CHECK */
#  define C_ENABLE_CAN_RAM_CHECK
#  define C_ENABLE_CAN_RAM_CHECK_WAKEUP
#  define C_ENABLE_NOTIFY_CORRUPT_MAILBOX
# endif
# if (CAN_RAM_CHECK == CAN_EXTENDED) /* COV_CAN_RAM_CHECK_EXTENDED */
#  define C_ENABLE_CAN_RAM_CHECK
#  define C_ENABLE_CAN_RAM_CHECK_EXTENDED
# endif
#endif

#if !defined(CAN_GENERIC_PRETRANSMIT) /* COV_CAN_COMPATIBILITY */
# define CAN_GENERIC_PRETRANSMIT STD_OFF
#endif

#if !defined(CAN_BRS) /* COV_CAN_COMPATIBILITY */
# define CAN_BRS 1u
#endif
#if !defined(CAN_FULL) /* COV_CAN_COMPATIBILITY */
# define CAN_FULL 2u
#endif
#if !defined(CAN_FD_SUPPORT) /* COV_CAN_COMPATIBILITY */
# define CAN_FD_SUPPORT CAN_NONE
#endif

#if (CAN_FD_SUPPORT != CAN_NONE) /* COV_CAN_FD_SUPPORT */
# define C_ENABLE_CAN_FD_USED
# if (CAN_FD_SUPPORT == CAN_BRS) /* COV_CAN_FD_SUPPORT */
#  define C_ENABLE_CAN_FD_BRS
# endif
# if (CAN_FD_SUPPORT == CAN_FULL) /* COV_CAN_FD_SUPPORT */
#  define C_ENABLE_CAN_FD_FULL
# endif
#endif

#if !defined(CAN_SET_BAUDRATE_API) /* COV_CAN_COMPATIBILITY */
# define CAN_SET_BAUDRATE_API STD_OFF
#endif

#if !defined(CAN_POSTBUILD_VARIANT_SUPPORT) /* COV_CAN_COMPATIBILITY */
# define CAN_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif

#if !defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* !COM_STACK_LIB */ /* COV_CAN_MICROSAR_VERSION */
# define Can_GetPhysToLogChannel(Index)                 CanPhysToLogChannel[V_ACTIVE_IDENTITY_LOG][(Index)] /* PRQA S 3453 */ /* MD_Can_3453 */
#endif

#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COM_STACK_LIB */ /* COV_CAN_MICROSAR_VERSION */
# if (CAN_USE_INIT_POINTER == STD_ON) /* InitPointer may not be used in variant system for symmetric configuration */
#  define CAN_ENABLE_USE_INIT_ROOT_POINTER
# endif
#else
# if defined(CAN_ENABLE_SELECTABLE_PB) || defined(C_ENABLE_MULTI_ECU_CONFIG)
#  define CAN_ENABLE_USE_INIT_ROOT_POINTER
# endif
#endif

#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COM_STACK_LIB */ /* COV_CAN_MICROSAR_VERSION */
# if (CAN_USE_ECUM_BSW_ERROR_HOOK == STD_ON)
#  define CAN_ENABLE_USE_ECUM_BSW_ERROR_HOOK
# endif
#endif

#if !defined(CAN_DEV_TIMEOUT_DETECT) /* COV_CAN_COMPATIBILITY */
# define CAN_DEV_TIMEOUT_DETECT STD_OFF
#endif
#if (CAN_DEV_TIMEOUT_DETECT == STD_ON) /* COV_CAN_DEV_TIMEOUT_DETECT */
# define CAN_ENABLE_DEV_TIMEOUT_DETECT
#endif

#if (CAN_USE_OS_INTERRUPT_CONTROL == STD_ON) /* COV_CAN_COMPATIBILITY */
# define C_ENABLE_USE_OS_INTERRUPT_CONTROL
#endif

/********************** compiler abstraction *******************************/
#if !defined(V_NULL) /* COV_CAN_COMPATIBILITY */
# define V_NULL          NULL_PTR
#endif
#if !defined(V_NONE) /* COV_CAN_COMPATIBILITY */
# define V_NONE       /* empty used instead of external, STATIC, volatile... */
# define CAN_AUTOMATIC    AUTOMATIC
# define CAN_TYPEDEF      TYPEDEF
#endif
#if !defined(CAN_STATIC) /* COV_CAN_COMPATIBILITY */
# if defined(STATIC) /* COV_CAN_COMPATIBILITY */
#  define CAN_STATIC  STATIC   /* standard by AutoSar 3.x */
# else
#  define CAN_STATIC  static   /* standard AutoSar 4.x define */
# endif
#endif
#if !defined(CAN_LOCAL_INLINE) /* COV_CAN_COMPATIBILITY */
# if defined(LOCAL_INLINE) /* COV_CAN_COMPATIBILITY */
#  define CAN_LOCAL_INLINE  LOCAL_INLINE
# else
#  define CAN_LOCAL_INLINE  
# endif
#endif

#define V_DEF_VAR(storage, vartype, memclass)                    storage VAR(vartype, CAN_##memclass)                          /* PRQA S 0342,3410,3453 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453 */
#define V_DEF_VAR_FAR(storage, vartype)                          storage VAR(vartype, CAN_VAR_FAR)                             /* PRQA S 0342,3410,3453 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453 */
#define V_DEF_VAR_NEAR(storage, vartype)                         storage VAR(vartype, CAN_VAR_NEAR)                            /* PRQA S 0342,3410,3453 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453 */
#define V_DEF_VAR_TYPE(storage, vartype)                         typedef storage VAR(vartype, TYPEDEF)                         /* PRQA S 0342,3410,3453 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453 */
#define V_DEF_P2VAR(storage, ptrtype, memclass, ptrclass)        storage P2VAR(ptrtype, CAN_##memclass, CAN_##ptrclass)        /* PRQA S 0342,3410,3453,0881 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453, MD_Can_Asr_0881_abstract */
#define V_DEF_P2VAR_TYPE(storage, ptrtype, ptrclass)             typedef storage P2VAR(ptrtype, TYPEDEF, CAN_##ptrclass )      /* PRQA S 0342,3410,3453,0881 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453, MD_Can_Asr_0881_abstract */
#define V_DEF_P2VAR_PARA(storage, ptrtype, memclass, ptrclass)   storage P2VAR(ptrtype, CAN_##memclass, CAN_##ptrclass)        /* PRQA S 0342,3410,3453,0881 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453, MD_Can_Asr_0881_abstract */
#define V_DEF_P2SFR_CAN(storage, ptrtype, memclass)              storage P2VAR(ptrtype, CAN_##memclass, CAN_REG_CANCELL)       /* PRQA S 0342,3410,3453 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453 */
#define V_DEF_P2SFR_CAN_TYPE(storage, ptrtype)                   typedef storage P2VAR(ptrtype, TYPEDEF, CAN_REG_CANCELL)      /* PRQA S 0342,3410,3453 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453 */
#define V_DEF_CONSTP2VAR(storage, ptrtype, memclass, ptrclass)   storage CONSTP2VAR(ptrtype, CAN_##memclass, CAN_##ptrclass)   /* PRQA S 0342,3410,3453,0881 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453, MD_Can_Asr_0881_abstract */
#define V_DEF_CONST(storage, type, memclass)                     storage CONST(type, CAN_##memclass)                           /* PRQA S 0342,3410,3453 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453 */
#define V_DEF_CONST_TYPE(storage, type, memclass)                typedef storage CONST(type, TYPEDEF)                          /* PRQA S 0342,3410,3453 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453 */
#define V_DEF_P2CONST(storage, ptrtype, memclass, ptrclass)      storage P2CONST(ptrtype, CAN_##memclass, CAN_##ptrclass)      /* PRQA S 0342,3410,3453,0881 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453, MD_Can_Asr_0881_abstract */
#define V_DEF_P2CONST_TYPE(storage, ptrtype, ptrclass)           typedef storage P2CONST(ptrtype, TYPEDEF, CAN_##ptrclass)     /* PRQA S 0342,3410,3453 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453 */
#define V_DEF_P2CONST_PARA(storage, ptrtype, memclass, ptrclass) storage P2CONST(ptrtype, CAN_##memclass, CAN_##ptrclass)      /* PRQA S 0342,3410,3453,0881 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453, MD_Can_Asr_0881_abstract */
#define V_DEF_CONSTP2CONST(storage, ptrtype, memclass, ptrclass) storage CONSTP2CONST(ptrtype, CAN_##memclass, CAN_##ptrclass) /* PRQA S 0342,3410,3453,0881 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453, MD_Can_Asr_0881_abstract */
#define V_DEF_CONSTP2CONST_TYPE(storage, ptrtype, ptrclass)      typedef storage CONSTP2CONST(ptrtype, TYPEDEF, CAN_##ptrclass)/* PRQA S 0342,3410,3453 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453 */
#define V_DEF_FUNC(storage, rettype, memclass)                   storage FUNC(rettype, CAN_##memclass)                         /* PRQA S 0342,3410,3453 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453 */
#define V_DEF_FUNC_API(storage, rettype, memclass)               storage FUNC(rettype, CAN_##memclass)                         /* PRQA S 0342,3410,3453 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453 */
#define V_DEF_FUNC_CBK(storage, rettype, memclass)               storage FUNC(rettype, CAN_##memclass)                         /* PRQA S 0342,3410,3453 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453 */
#define V_DEF_P2FUNC(storage, rettype, ptrclass, fctname)        storage P2FUNC(rettype, CAN_##ptrclass, fctname)              /* PRQA S 0342,3410,3453 */ /* MD_Can_0342, MD_Can_3410, MD_Can_3453 */

/* only use internal when not defined before */
#if !defined(vuint8) /* COV_CAN_COMPATIBILITY */
# define CAN_HL_NO_V_DEF
# define vuint8 uint8 /* PRQA S 3436 */ /* MD_Can_3436 */
#endif
#if !defined(vsint8) /* COV_CAN_COMPATIBILITY */
# define vsint8 sint8 /* PRQA S 3436 */ /* MD_Can_3436 */
#endif
#if !defined(vuint16) /* COV_CAN_COMPATIBILITY */
# define vuint16 uint16 /* PRQA S 3436 */ /* MD_Can_3436 */
#endif
#if !defined(vsint16) /* COV_CAN_COMPATIBILITY */
# define vsint16 sint16 /* PRQA S 3436 */ /* MD_Can_3436 */
#endif
#if !defined(vuint32) /* COV_CAN_COMPATIBILITY */
# define vuint32 uint32 /* PRQA S 3436 */ /* MD_Can_3436 */
#endif
#if !defined(vsint32) /* COV_CAN_COMPATIBILITY */
# define vsint32 sint32 /* PRQA S 3436 */ /* MD_Can_3436 */
#endif


#if defined(C_DRV_INTERNAL) /* COV_CAN_INTERNAL */
/* PRQA S 0850 EOF */ /* MD_Can_0850 */
#endif

/* \trace SPEC-1399 */
/***************************************************************************/
/* data types need for API                                                 */
/***************************************************************************/
V_DEF_P2VAR_TYPE(V_NONE, Std_VersionInfoType, APPL_VAR) Can_VersionInfoPtrType;
V_DEF_P2CONST_TYPE(V_NONE, Can_ConfigType, CONST_PBCFG) Can_ConfigPtrType;
#if !defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) || !defined(CAN_ENABLE_USE_INIT_ROOT_POINTER) /* COV_CAN_MICROSAR_VERSION */
V_DEF_P2CONST_TYPE(V_NONE, Can_ControllerConfigType, CONST_PBCFG) Can_ControllerConfigPtrType;
#endif
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40) /* COV_CAN_MICROSAR_VERSION */
V_DEF_P2CONST_TYPE(V_NONE, Can_ControllerBaudrateConfigType, APPL_VAR) Can_ControllerBaudrateConfigPtrType;
#endif
V_DEF_P2CONST_TYPE(V_NONE, Can_PduType, APPL_VAR) Can_PduInfoPtrType;
V_DEF_P2VAR_TYPE(V_NONE, Can_PduType, APPL_VAR)   Can_PduInfoPtrType_var;
V_DEF_P2CONST_TYPE(V_NONE, uint8, RX_TX_DATA)     Can_DataPtrType;

/* KB begin CanLL_DataTypesH */
/* data types for driver function parameters */
/* the types of CanInitHandle, CanChannelHandle and CanObjectHandle depend 
   on the compiler and controller - what generates effective code */

/* CanObjectHandle has to be unsigned! */
# define CanObjectHandle  Can_HwHandleType

V_DEF_VAR_TYPE(V_NONE, vuint16) CanTransmitHandle;
V_DEF_VAR_TYPE(V_NONE, vuint16) CanReceiveHandle;

V_DEF_VAR_TYPE(V_NONE, vuint16) CanInitHandle;


V_DEF_P2VAR_TYPE(V_NONE, void, V_NONE) CanChipVoidPtr;

/* Pointer to msg object and message data used in precopy functions */
V_DEF_P2SFR_CAN_TYPE(volatile, vuint8)  CanChipDataPtr;
V_DEF_P2SFR_CAN_TYPE(volatile, vuint32) CanChipMsgPtr;
V_DEF_P2SFR_CAN_TYPE(volatile, vuint16) CanChipDataPtr16;
V_DEF_P2SFR_CAN_TYPE(volatile, vuint16) CanChipMsgPtr16;
V_DEF_P2SFR_CAN_TYPE(volatile, vuint32) CanChipDataPtr32;
V_DEF_P2SFR_CAN_TYPE(volatile, vuint32) CanChipMsgPtr32;

/* up to 5 tables can be defined for the transmission ID. The type and how 
   many tables are needed depends on the CPU bus type and on the ID registers 
   of the CAN controller. E.g. a CPU with a 16-Bit bus and 2 byte ID registers 
   for standard ID needs 1 table and tCanRxId0 of type vuint16. The same CPU
   with 5 byte ID registers for extended ID needs in this case 3 tables and
   tCanRxId0 = vuint16, tCanRxId1 = vuint16 and tCanRxId2 = vuint16. */
V_DEF_VAR_TYPE(V_NONE, vuint32) tCanRxId0;
V_DEF_VAR_TYPE(V_NONE, vuint32) tCanTxId0;

typedef volatile struct tSIFETypeTag 
{ /* Std filter element */
  volatile vuint32 S0;
} tSIFEType;

typedef volatile struct tXIFETypeTag 
{ /* Ext filter element */
  volatile vuint32 F0;
  volatile vuint32 F1;
} tXIFEType;

typedef union 
{ /* PRQA S 0750 1 */ /* MD_MSR_18.4 */
  vuint8   b[4];
  vuint16  w[2];
  vuint32  dw;
} tAlignCopyElem;

typedef union 
{ /* PRQA S 0750 1 */ /* MD_MSR_18.4 */
  vuint32  dw;
  vuint8   data[8]; /* this address must 32-bit aligned */
} tAlign32bit;

typedef volatile struct tRxElmTypeTag
{ /* Rx Buffer and Fifo element (MPC5777M) */
 volatile vuint32 R0;               /* +0  Bit 31     ESI: Error State Indicator (0=Transmitting node is error active, 1=Transmitting node is error passive)
                                           Bit 30     XTD: 0=11-bit standard identifier, 1=29-bit extended identifier
                                           Bit 29     RTR: 0=data frame, 1=remote frame 
                                           Bit 28:0   ID[28:0]: ExtId, ID[28:18] StdId (depending on bit XTD) */
 volatile vuint32 R1;               /* +4  Bit 31     ANMF: 0=Received frame matching filter index FIDX, 1=Received frame did not match any Rx filter element
                                           Bit 30:24  FIDX[6:0]: 0-127=Index of matching Rx acceptance filter element (invalid if ANMF = '1')
                                           Bit 21     EDL: Extended Data Length, (0=Standard frame format, 1=CAN FD frame format (new DLC-coding and CRC))
                                           Bit 20     BRS: Bit Rate Switch (0=Frame received without bit rate switching, 1=Frame received with bit rate switching)
                                           Bit 19:16  DLC[3:0] : 0-8  =Received frame has 0-8 data bytes, 9-15 =Received frame has 8 data bytes
                                           Bit 15:0   RXTS[15:0]: Rx Timestamp Counter value captured on start of frame reception (Resolution depends on Prescaler TSCC[TCP] */
#if defined(C_ENABLE_CAN_FD_FULL)
 volatile vuint32  data[64/4];
# else
 volatile vuint32  data[2];           /* +8  R2: Data byte 3-0 */
#endif
} tRxElmType;

typedef volatile struct tTxEventFifoElmTypeTag
{ /* Tx Event Fifo element */
 volatile vuint32 E0;               /* +0  Bit 30     XTD: 0=11-bit standard identifier, 1=29-bit extended identifier
                                           Bit 29     RTR: 0=Data frame transmitted, 1=Remote frame transmitted
                                           Bit 28:0   ID[28:0]= ExtId, ID[28:18]= StdId (depending on bit XTD) */
 volatile vuint32 E1;               /* +4  Bit 31:24  MM[7:0]: Message Marker - Copied from Tx Buffer into Tx Event FIFO element for identification of Tx message status
                                           Bit 23:22  ET[1:0]: Event Type - 00,11=Reserved, 01=Tx event, 10=Transmission in spite of cancellation (always set for transmissions in DAR mode)
                                           Bit 19:16  DLC[3:0] 0-8 =Frame with 0-8 data bytes transmitted, 9-15 =Frame with 8 data bytes transmitted
                                           Bit 15:0   TXTS[15:0]: Tx Timestamp Counter value captured on start of frame transmission (Resolution depends on Prescaler TSCC[TCP] */
} tTxEventFifoElmType;

typedef volatile struct tTXBETypeTag                  
{ /* Tx buffer element */
  volatile vuint32 T0;                                /* T0 Bit 30 XTD: Extended Identifier, Bit 29 RTR: Remote Transmission Request, Bits 28:0 ID[28:0]: Identifier */
  volatile vuint32 T1;                                /* T1 Bits 31:24 MM[7:0]: Message Marker, Bit 23 EFC: Event FIFO Control, Bits 19:16 DLC[3:0]: Data Length Code */    
#if defined(C_ENABLE_CAN_FD_FULL)                         
  volatile vuint32 Tn[64/4];  /* Data bytes */
# else
  volatile vuint32 Tn[2];                             /* Data bytes */
#endif
} tTXBEType;

/* type of variable for ID type kCanIdTypeExt or kCanIdTypeStd will be assigned to 
   a variable of this type */
V_DEF_VAR_TYPE(V_NONE, vuint32) tCanIdType;


/* hardware specific types need for generation have to be generated in can_cfg.h */
#if defined( CAN_GEN_COM_STACK_LIB )
# define ShmSIDF(num)      (*((tSIFEType*) (Can_GetSIDFAOfShmAdr(canHwChannel) + GET_SIDF_OFFSET(num))))
# define ShmXIDF(num)      (*((tXIFEType*) (Can_GetXIDFAOfShmAdr(canHwChannel) + GET_XIDF_OFFSET(num))))
# define ShmRXF0(num)      (  (tRxElmType*)(Can_GetRXF0AOfShmAdr(canHwChannel) + GET_RX0F_OFFSET(num)) )
# define ShmRXF1(num)      (  (tRxElmType*)(Can_GetRXF1AOfShmAdr(canHwChannel) + GET_RX1F_OFFSET(num)) )
# define ShmRXB(num)       (  (tRxElmType*)(Can_GetRXBAOfShmAdr(canHwChannel)  + GET_RXB_OFFSET (num)) )
# define ShmTXEF(num)      (*((tTxEventFifoElmType*)(Can_GetTXEFAOfShmAdr(canHwChannel) + GET_TXEF_OFFSET(num))))
# define ShmTXB(num)       (*((tTXBEType*) (Can_GetTXBAOfShmAdr(canHwChannel)  + GET_TXB_OFFSET (num))))
# define pShmTXB(num)      ( ((tTXBEType*) (Can_GetTXBAOfShmAdr(canHwChannel)  + GET_TXB_OFFSET (num))))

# define Can_GetCanTXBRP(canHwChannel)                                Can_GetTXBRP(canHwChannel)
# define Can_GetCanTXBCR(canHwChannel)                                Can_GetTXBCR(canHwChannel)
# define Can_GetCanBusOffNotification(canHwChannel)                   Can_GetBusOffNotification(canHwChannel)
# define Can_GetCanIntEnable(canHwChannel)                            Can_GetIntEnable(canHwChannel)
# define Can_GetCanTXBE_T0OfCanTXBE(canHwChannel)                     Can_GetT0OfTXBE(canHwChannel)
# define Can_GetCanTXBE_T1OfCanTXBE(canHwChannel)                     Can_GetT1OfTXBE(canHwChannel)
# define Can_GetCanBTP(initObject)                                    Can_GetBTP(initObject)
# define Can_GetCanFBTP(initObject)                                   Can_GetFBTP(initObject)
# define Can_GetCanTDCR(initObject)                                   Can_GetTDCR(initObject)
# define Can_GetCanGFC(canHwChannel)                                  Can_GetGFC(canHwChannel)
# define Can_GetCanXIDAM(canHwChannel)                                Can_GetXIDAM(canHwChannel)
# define Can_GetCanRXBC(canHwChannel)                                 Can_GetRXBCOfBufferConfig(canHwChannel) 
# define Can_GetCanTXBC(canHwChannel)                                 Can_GetTXBCOfBufferConfig(canHwChannel) 
# define Can_GetCanTXEFC(canHwChannel)                                Can_GetTXEFCOfBufferConfig(canHwChannel) 
# define Can_GetCanRXF0C(canHwChannel)                                Can_GetRXF0COfBufferConfig(canHwChannel)
# define Can_GetCanRXF1C(canHwChannel)                                Can_GetRXF1COfBufferConfig(canHwChannel)
# define Can_GetCanSIDFC_FLSSAOfCanSIDFC(canHwChannel)                Can_GetFLSSAOfSIDFC(canHwChannel)
# define Can_GetCanXIDFC_FLESAOfCanXIDFC(canHwChannel)                Can_GetFLESAOfXIDFC(canHwChannel)
# define Can_GetCanSIDFC_LSSOfCanSIDFC(canHwChannel)                  Can_GetLSSOfSIDFC(canHwChannel)
# define Can_GetCanXIDFC_LSEOfCanXIDFC(canHwChannel)                  Can_GetLSEOfXIDFC(canHwChannel)
# define Can_GetCanSIDFE(canHwChannel)                                Can_GetSIDFE(canHwChannel)
# define Can_GetCanXIDFE(canHwChannel)                                Can_GetXIDFE(canHwChannel)
# define Can_GetCanSIDFEStartIndex(canHwChannel)                      Can_GetSIDFEStartIdxOfSIDFC(canHwChannel)
# define Can_GetCanXIDFEStartIndex(canHwChannel)                      Can_GetXIDFEStartIdxOfXIDFC(canHwChannel)
# define Can_GetCanXIDFEEIDFE_0OfCanXIDFE(canHwChannel)               Can_GetEIDFE_0OfXIDFE(canHwChannel)
# define Can_GetCanXIDFEEIDFE_1OfCanXIDFE(canHwChannel)               Can_GetEIDFE_1OfXIDFE(canHwChannel)

# if( CAN_ISTTCAN == STD_ON )
#  define C_ENABLE_TTCAN_AVAILABLE
# endif

#else /* CAN_GEN_COM_STACK_LIB */

# if defined( C_ENABLE_TTCAN_AVAILABLE )
#  define Can_IsIsTTCan(ch)                                           1
# else
#  define Can_IsIsTTCan(ch)                                           0
# endif

# if defined( C_SINGLE_RECEIVE_CHANNEL )
#  define Can_GetStartAdrOfShmAdr(ch)                                 CAN_SHM_RAM_START
#  define Can_GetStopAdrOfShmAdr(ch)                                  CAN_SHM_RAM_END
# else
#  define Can_GetStartAdrOfShmAdr(ch)                                 CanShmStartEndAdr[(ch)].startAdr
#  define Can_GetStopAdrOfShmAdr(ch)                                  CanShmStartEndAdr[(ch)].endAdr
# endif



# define CAN_C_ENABLE_MPC5700_MCAN_MAJOR_CREL                         C_ENABLE_MPC5700_MCAN_MAJOR_CREL
# define Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL()                    C_ENABLE_MPC5700_MCAN_MAJOR_CREL
# if defined( C_ENABLE_MPC5700_MCAN_CREL_STEP )
#  define CAN_C_ENABLE_MPC5700_MCAN_CREL_STEP                         C_ENABLE_MPC5700_MCAN_CREL_STEP
#  define Can_GetC_ENABLE_MPC5700_MCAN_CREL_STEP()                    C_ENABLE_MPC5700_MCAN_CREL_STEP
#  define CAN_C_ENABLE_MPC5700_MCAN_CREL_SSTEP                        C_ENABLE_MPC5700_MCAN_CREL_SSTEP
#  define Can_GetC_ENABLE_MPC5700_MCAN_CREL_SSTEP()                   C_ENABLE_MPC5700_MCAN_CREL_SSTEP
# else
#  define CAN_C_ENABLE_MPC5700_MCAN_CREL_STEP                         0
#  define Can_GetC_ENABLE_MPC5700_MCAN_CREL_STEP()                    0
#  define CAN_C_ENABLE_MPC5700_MCAN_CREL_SSTEP                        0
#  define Can_GetC_ENABLE_MPC5700_MCAN_CREL_SSTEP()                   0
#  endif
# if defined( C_ENABLE_ARM_CORTEX_M )
#  define CAN_C_ENABLE_ARM_CORTEX_M                                   C_ENABLE_ARM_CORTEX_M
#  define Can_GetC_ENABLE_ARM_CORTEX_M()                              C_ENABLE_ARM_CORTEX_M
# endif
# if defined( CAN_FD_NISO )
#  define CAN_CAN_FD_NISO                                             CAN_FD_NISO
#  define Can_GetCAN_FD_NISO()                                        CAN_FD_NISO
# else
#  define CAN_CAN_FD_NISO                                             0
#  define Can_GetCAN_FD_NISO()                                        0
# endif

# define Can_GetRxBasicHandleMaxOfControllerConfig(ch)                (CAN_HL_HW_RX_BASIC_STOPINDEX((ch)) - CAN_HL_HW_RX_BASIC_STARTINDEX((ch)))

# define Can_GetNonFdObjectsPendingFlag(canHwChannel)                 Can_NonFdObjectsPendingFlag[(canHwChannel)]   

/* *** CAN_FD mode-2: not yet supported with AR3/4 && GENy **** */
# define Can_GetF0DSOfShmElementSize(Index)                           Can_ShmElementSize[index].F0DSOfShmElementSize
# define Can_GetF1DSOfShmElementSize(Index)                           Can_ShmElementSize[index].F1DSOfShmElementSize
# define Can_GetRBDSOfShmElementSize(Index)                           Can_ShmElementSize[index].RBDSOfShmElementSize
# define Can_GetTBDSOfShmElementSize(Index)                           Can_ShmElementSize[index].TBDSOfShmElementSize
/* *** CAN_FD mode-2: not yet supported with AR3/4 && GENy **** */

# define Can_GetCanTXBRP(canHwChannel)                                CanTXBRP[(canHwChannel)]
# define Can_GetCanTXBCR(canHwChannel)                                CanTXBCR[(canHwChannel)]
# define Can_GetCanBusOffNotification(canHwChannel)                   CanBusOffNotification[(canHwChannel)]
# define Can_GetCanIntEnable(canHwChannel)                            CanIntEnable[(canHwChannel)]
# define Can_GetCanTXBE_T0OfCanTXBE(canHwChannel)                     CanTXBE[(canHwChannel)].T0
# define Can_GetCanTXBE_T1OfCanTXBE(canHwChannel)                     CanTXBE[(canHwChannel)].T1
# define Can_GetCanBTP(initObject)                                    CanBTP[(initObject)]
# define Can_GetCanFBTP(initObject)                                   CanFBTP[(initObject)]
# define Can_GetCanTDCR(initObject)                                   CanTDCR[(initObject)]
# define Can_GetCanGFC(canHwChannel)                                  CanGFC[(canHwChannel)]
# define Can_GetCanXIDAM(canHwChannel)                                CanXIDAM[(canHwChannel)]
# define Can_GetCanRXBC(canHwChannel)                                 CanRXBC[(canHwChannel)]
# define Can_GetCanTXBC(canHwChannel)                                 CanTXBC[(canHwChannel)]
# define Can_GetCanTXEFC(canHwChannel)                                CanTXEFC[(canHwChannel)]
# define Can_GetCanRXF0C(canHwChannel)                                CanRXF0C[(canHwChannel)]
# define Can_GetCanRXF1C(canHwChannel)                                CanRXF1C[(canHwChannel)]
# define Can_GetCanSIDFC_FLSSAOfCanSIDFC(canHwChannel)                CanSIDFC[(canHwChannel)].FLSSA
# define Can_GetCanXIDFC_FLESAOfCanXIDFC(canHwChannel)                CanXIDFC[(canHwChannel)].FLESA
# define Can_GetCanSIDFC_LSSOfCanSIDFC(canHwChannel)                  CanSIDFC[(canHwChannel)].LSS
# define Can_GetCanXIDFC_LSEOfCanXIDFC(canHwChannel)                  CanXIDFC[(canHwChannel)].LSE
# define Can_GetCanSIDFE(canHwChannel)                                CanSIDFE[(canHwChannel)]
# define Can_GetCanXIDFE(canHwChannel)                                CanXIDFE[(canHwChannel)]
# define Can_GetCanSIDFEStartIndex(canHwChannel)                      CanSIDFE_StartIndex[(canHwChannel)]
# define Can_GetCanXIDFEStartIndex(canHwChannel)                      CanXIDFE_StartIndex[(canHwChannel)]
# define Can_GetCanSIDFEDynStartIndex(canHwChannel)                   CanSIDFE_DynStartIndex[(canHwChannel)]
# define Can_GetCanXIDFEDynStartIndex(canHwChannel)                   CanXIDFE_DynStartIndex[(canHwChannel)]
# define Can_GetCanXIDFEEIDFE_0OfCanXIDFE(canHwChannel)               CanXIDFE[(canHwChannel)].EIDFE_0
# define Can_GetCanXIDFEEIDFE_1OfCanXIDFE(canHwChannel)               CanXIDFE[(canHwChannel)].EIDFE_1

# define ShmSIDF(num)      (*((tSIFEType*) (Shm.SIDFA + GET_SIDF_OFFSET(num))))
# define ShmXIDF(num)      (*((tXIFEType*) (Shm.XIDFA + GET_XIDF_OFFSET(num))))
# define ShmRXF0(num)      (  (tRxElmType*)(Shm.RXF0A + GET_RX0F_OFFSET(num)) )
# define ShmRXF1(num)      (  (tRxElmType*)(Shm.RXF1A + GET_RX1F_OFFSET(num)) )
# define ShmRXB(num)       (  (tRxElmType*)(Shm.RXBA  + GET_RXB_OFFSET (num)) )
# define ShmTXEF(num)      (*((tTxEventFifoElmType*)(Shm.TXEFA + GET_TXEF_OFFSET(num))))
# define ShmTXB(num)       (*((tTXBEType*) (Shm.TXBA  + GET_TXB_OFFSET (num))))
# define pShmTXB(num)      ( ((tTXBEType*) (Shm.TXBA  + GET_TXB_OFFSET (num))))
#endif /* CAN_GEN_COM_STACK_LIB */

/* PRQA S 0750 1 */ /* MD_MSR_18.4 */
#if defined (C_CPUTYPE_BITORDER_MSB2LSB)
/* PRQA S 0750 1 */ /* MD_MSR_18.4 */
typedef union tRXFnSTag {
  vuint32 R;
  /* PRQA S 635 1 */ /* MD_MSR_6.4 */
  struct {
    vuint32 r0:6;
    vuint32 RFnL:1;
    vuint32 FnF:1;
    vuint32 r1:10;
    vuint32 FnGI:6;
    vuint32 r2:1;
    vuint32 FnFL:7;
  } B;
} tRXFnS;

/* PRQA S 0750 1 */ /* MD_MSR_18.4 */
typedef union tRXFnCTag {
  vuint32 R;
  /* PRQA S 635 1 */ /* MD_MSR_6.4 */
  struct {
    vuint32:1;
    vuint32 F0WM:7;
    vuint32:1;
    vuint32 F0S:7;
    vuint32 FOSA:14;
    vuint32:2;
  } B;
} tRXFnC;

/* PRQA S 0750 1 */ /* MD_MSR_18.4 */
typedef union tRXESCTag {
  vuint32 R;
  /* PRQA S 635 1 */ /* MD_MSR_6.4 */
  struct {
    vuint32:21;
    vuint32 RBDS:3;
    vuint32:1;
    vuint32 F1DS:3;
    vuint32:1;
    vuint32 F0DS:3;
  } B;
} tRXESC;

/* PRQA S 0750 1 */ /* MD_MSR_18.4 */
typedef union tTXEFSTag {
  vuint32 R;
  /* PRQA S 635 1 */ /* MD_MSR_6.4 */
  struct {
      vuint32:6;
      vuint32 TEFL:1;
      vuint32 EFF:1;
      vuint32:11;
      vuint32 EFGI:5;
      vuint32:2;
      vuint32 EFFL:6;
  } B;
} tTXEFS;

#else  /* C_CPUTYPE_BITORDER_MSB2LSB */
/* PRQA S 0750 1 */ /* MD_MSR_18.4 */
typedef union tRXFnSTag {
  vuint32 R;
  /* PRQA S 635 1 */ /* MD_MSR_6.4 */
  struct {
    vuint32 FnFL:7;
    vuint32 r2:1;
    vuint32 FnGI:6;
    vuint32 r1:10;
    vuint32 FnF:1;
    vuint32 RFnL:1;
    vuint32 r0:6;
  } B;
} tRXFnS;

/* PRQA S 0750 1 */ /* MD_MSR_18.4 */
typedef union tRXFnCTag {
  vuint32 R;
  /* PRQA S 635 1 */ /* MD_MSR_6.4 */
  struct {
    vuint32:2;
    vuint32 FOSA:14;
    vuint32 F0S:7;
    vuint32:1;
    vuint32 F0WM:7;
    vuint32:1;
  } B;
} tRXFnC;


/* PRQA S 0750 1 */ /* MD_MSR_18.4 */
typedef union tRXESCTag {
  vuint32 R;
  /* PRQA S 635 1 */ /* MD_MSR_6.4 */
  struct {
    vuint32 F0DS:3;
    vuint32:1;
    vuint32 F1DS:3;
    vuint32:1;
    vuint32 RBDS:3;
    vuint32:21;
  } B;
} tRXESC;

/* PRQA S 0750 1 */ /* MD_MSR_18.4 */
typedef union tTXEFSTag {
  vuint32 R;
  /* PRQA S 635 1 */ /* MD_MSR_6.4 */
  struct {
      vuint32 EFFL:6;
      vuint32:2;
      vuint32 EFGI:5;
      vuint32:11;
      vuint32 EFF:1;
      vuint32 TEFL:1;
      vuint32:6;
  } B;
} tTXEFS;

#endif  /* C_CPUTYPE_BITORDER_MSB2LSB */

typedef volatile struct tCanObjTypeTag
{ /* Can module structure */
  volatile vuint32 CREL;            /* 0x0000         Core Release Register  */
  volatile vuint32 ENDN;            /* 0x0004         Endian Register        */
#if ( Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() == 1u ) /* PRQA S 0883 */ /* MD_Can_0883 */
  volatile vuint32 res0[2];         /* 0x0008-0x000C  Reserved */
#elif ( Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() >= 2u )
  volatile vuint32 res0[1];         /* 0x0008         Reserved */
  volatile vuint32 FBTP;            /* 0x000C(RP)     Fast Bit Timing and Prescaler Register
                                                      Since MCAN Rev. 3.1.0: FBTP renamed to DBTP and restructured
                                                       - TDCO (bit 28:24) moved to new register TDCR
                                                       - increased confguration range for data bit timing */
#endif
  volatile vuint32 TEST;            /* 0x0010         Test Register          */
  volatile vuint32 RWD;             /* 0x0014(RP)     RAM Watchdog Register  */
  volatile vuint32 CCCR;            /* 0x0018(RP)     CC Control Register    */
  volatile vuint32 BTP;             /* 0x001C(RP)     Bit Timing and Prescaler Register  */
  volatile vuint32 TSCC;            /* 0x0020(RP)     Timestamp Counter Configuration    */ 
  volatile vuint32 TSCV;            /* 0x0024         Timestamp Counter Value Register   */
  volatile vuint32 TOCC;            /* 0x0028(RP)     Timeout Counter Configuration      */
  volatile vuint32 TOCV;            /* 0x002C         Timeout Counter Value Register     */
           vuint32 res1[4];         /* 0x0030-0x003C  Reserved */
  volatile vuint32 ECR;             /* 0x0040         Error Counter Register    */
  volatile vuint32 PSR;             /* 0x0044         Protocol Status Register  */
#if ( Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() >= 3u ) && ( Can_GetC_ENABLE_MPC5700_MCAN_CREL_STEP() >= 1u )
  /* since MCAN Rev. 3.1.0 TDCO moved to new register TDCR */
  volatile vuint32 TDCR;            /* 0x0048         Transmitter Delay Compensation     */
           vuint32 res2;            /* 0x004C         Reserved */
#else
           vuint32 res2[2];         /* 0x0048-0x004C  Reserved */
#endif
  volatile vuint32 IR;              /* 0x0050         Interrupt Register        */
  volatile vuint32 IE;              /* 0x0054         Interrupt Enable Register */
  volatile vuint32 ILS;             /* 0x0058         Interrupt Line Select     */
  volatile vuint32 ILE;             /* 0x005C         Interrupt Line Enable     */
           vuint32 res3[8];         /* 0x0060-0x007C  Reserved */
  volatile vuint32 GFC;             /* 0x0080(RP)     Global Filter Configuration        */
  volatile vuint32 SIDFC;           /* 0x0084(RP)     Standard ID Filter Configuration   */
  volatile vuint32 XIDFC;           /* 0x0088(RP)     Extended ID Filter Configuration   */
           vuint32 res4;            /* 0x008C         Reserved */
  volatile vuint32 XIDAM;           /* 0x0090(RP)     Extended ID AND Mask               */
  volatile vuint32 HPMS;            /* 0x0094         High Priority Message Status       */
#if ( Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() == 1u )
           vuint32 res5[2];         /* 0x0098-0x009C  Reserved  */
#elif ( Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() >= 2u )
  volatile vuint32 NDATA[2];        /* 0x0098         NDAT1-New Data 1 Register          */
                                    /* 0x009C         NDAT2-New Data 2 Register          */
#endif
  volatile tRXFnC  RXF0C;           /* 0x00A0(RP)     Rx FIFO 0 Configuration            */
  volatile tRXFnS  RXF0S;           /* 0x00A4         Rx FIFO 0 Status                   */
  volatile vuint32 RXF0A;           /* 0x00A8         Rx FIFO 0 Acknowledge              */
#if ( Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() == 1u )
           vuint32 res6;            /* 0x00AC         Reserved */
#elif ( Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() >= 2u )
  volatile vuint32 RXBC;            /* 0x00AC         Rx Buffer Configuration Register */
#endif
  volatile tRXFnC  RXF1C;           /* 0x00B0(RP)     Rx FIFO 1 Configuration            */
  volatile tRXFnS  RXF1S;           /* 0x00B4         Rx FIFO 1 Status                   */
  volatile vuint32 RXF1A;           /* 0x00B8         Rx FIFO 1 Acknowledge              */
#if ( Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() >= 2u )
  volatile tRXESC  RXESC;           /* 0x00BC         Rx element size configuration      */
#else
           vuint32 res7;            /* 0x00BC         Reserved */
#endif
  volatile vuint32 TXBC;            /* 0x00C0(RP)     Tx Buffer Configuration            */
  volatile vuint32 TXFQS;           /* 0x00C4         Tx FIFO/Queue Status               */
#if ( Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() >= 2u )
  volatile vuint32 TXESC;           /* 0x00C8         Tx element size configuration      */
#else
           vuint32 res8;            /* 0x00C8         Reserved */
#endif
  volatile vuint32 TXBRP;           /* 0x00CC         Tx Buffer Request Pending          */
  volatile vuint32 TXBAR;           /* 0x00D0         Tx Buffer Add Request              */
  volatile vuint32 TXBCR;           /* 0x00D4         Tx Buffer Cancellation             */
  volatile vuint32 TXBTO;           /* 0x00D8         Tx Buffer Transmission Occurred    */
  volatile vuint32 TXBCF;           /* 0x00DC         Tx Buffer Cancellation Finished    */
  volatile vuint32 TXBTIE;          /* 0x00E0         Tx Buffer Transmission Interrupt Enable */
  volatile vuint32 TXBCIE;          /* 0x00E4         Tx Buffer Cancellation Finished Interrupt Enable */
           vuint32 res9[2];         /* 0x00E8-0x00EC  Reserved */
  volatile vuint32 TXEFC;           /* 0x00F0(RP)     Tx Event FIFO Configuration        */
  volatile tTXEFS  TXEFS;           /* 0x00F4         Tx Event FIFO Status               */
  volatile vuint32 TXEFA;           /* 0x00F8         Tx Event FIFO Acknowledge          */
           vuint32 resA;            /* 0x00FC         Reserved */
  volatile vuint32 TTTMC;           /* 0x100          Trigger Memory Configuration       */
  volatile vuint32 TTRMC;           /* 0x104          Reference Message Configuration    */
  volatile vuint32 TTOCF;           /* 0x108          Operation Configuration Register   */
}tCanObjType;

#define kCanMaxNoOfStdFilter               128
#define kCanMaxNoOfExtFilter                64
#define kCanMaxNoOfRxFifoEntry              64
#define kCanMaxNoOfRxDedicatedBufferEntry   64
#define kCanMaxNoOfTxEventFifoEntry         32
#define kCanMaxNumberOfTxBuffer             32

/* Internal Flags */
/* KB end CanLL_DataTypesH */

/* \trace SPEC-1400 */
/***************************************************************************/
/* function prototypes / API                                               */
/***************************************************************************/
#define CAN_START_SEC_CODE  /*---------------------------------------------*/
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/************************************************************************************************************
 *  Can_InitMemory()
 ***********************************************************************************************************/
/*! \brief         Power-up memory initialization
 *  \details       Initializes component variables in *_INIT_* sections at power up. \n
 *                 Use this to re-run the system without performing a new start from power on. \n
 *                 (E.g.: used to support an ongoing debug session without a complete re-initialization.) \n
 *  \pre           -
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \notes         Use this function in case these variables are not initialized by the 
 *                 start up code. \n
 *                 Must be followed by a call to "Can_Init()".
 *  \trace         CREQ-970
************************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_InitMemory( void );

/************************************************************************************************************
 *  Can_Init()
 ***********************************************************************************************************/
/*! \brief         Initializes component
 *  \details       Initializes all component variables and sets the component state to initialized.
 *  \param[in]     ConfigPtr          Component configuration structure
 *  \pre           Interrupts are disabled.
 *  \pre           Module is uninitialized.
 *  \pre           Can_InitMemory() has been called unless CAN Module is initialized by start up code.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \notes         Parameter "ConfigPtr" will be taken into account only for "Multiple ECU Configuration" and in Post-Build variant. \n
 *  \trace         CREQ-969
************************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_Init( Can_ConfigPtrType ConfigPtr );

#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40) /* COV_CAN_MICROSAR_VERSION */
/************************************************************************************************************
 *  Can_InitController()
 ***********************************************************************************************************/
/*! \brief         Initialization of controller specific CAN hardware.
 *  \details       The CAN driver registers and variables are initialized. \n
 *                 The CAN controller is fully initialized and left back within the state "STOP Mode", ready to change to "Running Mode".
 *  \param[in]     Controller    CAN controller
 *  \param[in]     Config        Pointer to baud rate configuration structure
 *  \pre           Disabled Interrupts.
 *  \pre           Can_Init() has to be called.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_ENABLE_MICROSAR_VERSION_MSR40
 *  \notes         Has to be called during the start up sequence before CAN communication takes place. \n
 *                 Must not be called while in "SLEEP Mode".
 *  \trace         CREQ-969, CREQ-994
************************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_InitController( uint8 Controller, Can_ControllerBaudrateConfigPtrType Config );
#endif

#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR30) /* COV_CAN_MICROSAR_VERSION */
/************************************************************************************************************
 *  Can_InitController()
 ***********************************************************************************************************/
/*! \brief         Initialization of controller specific CAN hardware.
 *  \details       The CAN driver registers and variables are initialized. \n
 *                 The CAN controller is fully initialized and left back within the state "STOP Mode", ready to change to "Running Mode".
 *  \param[in]     Controller           CAN controller
 *  \param[in]     ControllerConfigPtr  Pointer to baud rate configuration structure
 *  \pre           Disabled Interrupts.
 *  \pre           Can_Init() has to be called.
 *  \pre           Controller is in STOP mode.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_ENABLE_MICROSAR_VERSION_MSR30
 *  \notes         Has to be called during the start up sequence before CAN communication takes place ". \n
 *                 Must not be called while in "SLEEP Mode".
 *  \trace         CREQ-969, CREQ-994
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_InitController( uint8 Controller, Can_ControllerConfigPtrType ControllerConfigPtr );
#endif

#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
# if ((CAN_CHANGE_BAUDRATE_API == STD_ON) || (CAN_SET_BAUDRATE_API == STD_OFF))
/************************************************************************************************************
 *  Can_ChangeBaudrate()
 ***********************************************************************************************************/
/*! \brief         Change baud rate
 *  \details       This service shall change the baud rate and reinitialize the CAN controller.
 *  \param[in]     Controller    CAN controller to be changed
 *  \param[in]     Baudrate      Baud rate to be set
 *  \return        E_NOT_OK      Baud rate is not set
 *  \return        E_OK          Baud rate is set
 *  \pre           The CAN controller must be in "STOP Mode".
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_ENABLE_MICROSAR_VERSION_MSR403 && ((CAN_CHANGE_BAUDRATE_API == STD_ON) || (CAN_SET_BAUDRATE_API == STD_OFF))
 *  \notes         Has to be called during the start up sequence before CAN communication takes place but after calling "Can_Init()".
 *  \trace         CREQ-995
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, Std_ReturnType, CODE) Can_ChangeBaudrate( uint8 Controller, V_DEF_CONST(V_NONE, uint16, APPL_CONST) Baudrate );
# endif
#endif

#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
# if (CAN_CHANGE_BAUDRATE_API == STD_ON)
/************************************************************************************************************
 *  Can_CheckBaudrate()
 ***********************************************************************************************************/
/*! \brief         Checks baud rate
 *  \details       This service shall check if the given baud rate is supported of the CAN controller.
 *  \param[in]     Controller    CAN controller to be checked
 *  \param[in]     Baudrate      Baud rate to be checked
 *  \return        E_NOT_OK      Baud rate is not available
 *  \return        E_OK          Baud rate is available
 *  \pre           The CAN controller must be initialized.
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_ENABLE_MICROSAR_VERSION_MSR403 && (CAN_CHANGE_BAUDRATE_API == STD_ON)
 *  \trace         CREQ-995
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, Std_ReturnType, CODE) Can_CheckBaudrate( uint8 Controller, V_DEF_CONST(V_NONE, uint16, APPL_CONST) Baudrate );
# endif
#endif

#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
# if (CAN_SET_BAUDRATE_API == STD_ON)
/************************************************************************************************************
 *  Can_SetBaudrate()
 ***********************************************************************************************************/
/*! \brief         Set baud rate
 *  \details       This service shall change the baud rate and reinitialize the CAN controller. \n
 *                 (Similar to Can_ChangeBaudrate() but used when identical baud rates are used for different CAN FD settings).
 *  \param[in]     Controller        CAN controller to be set
 *  \param[in]     BaudRateConfigID  Identity of the configured baud rate (available as Symbolic Name)
 *  \return        E_NOT_OK      Baud rate is not set
 *  \return        E_OK          Baud rate is set
 *  \pre           The CAN controller must be in "STOP Mode".
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_ENABLE_MICROSAR_VERSION_MSR403 && (CAN_SET_BAUDRATE_API == STD_ON)
 *  \trace         CREQ-995
***********************************************************************************************************/
/* \trace SPEC-50605 */
V_DEF_FUNC(V_NONE, Std_ReturnType, CODE) Can_SetBaudrate( uint8 Controller, uint16 BaudRateConfigID );
# endif
#endif


#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR30) /* COV_CAN_MICROSAR_VERSION */
/************************************************************************************************************
 *  Can_InitStruct()
 ***********************************************************************************************************/
/*! \brief         Set active initialization structure
 *  \details       Set content of the initialization structure (before calling Can_InitController()).   \n
 *                 Service function to change the initialization structure set up left behind by the Generation Tool.  \n
 *                 The structure contains information about baud rate and filter settings.  \n
 *                 Subsequent Can_InitController() must be called to activate these settings.
 *  \param[in]     Controller   CAN controller to be changed 
 *  \param[in]     Index        Index of the initialization structure to be used for baud rate and mask settings
 *  \pre           Can_Init() was called.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_ENABLE_MICROSAR_VERSION_MSR30
 *  \notes         Call this function between calling "Can_Init()" and "Can_InitController()".\n
 *                 None AUTOSAR API
 *  \trace         CREQ-995
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_InitStruct( uint8 Controller, uint8 Index );
#endif

#if (CAN_VERSION_INFO_API == STD_ON) /* BR:007 */
/************************************************************************************************************
 *  Can_GetVersionInfo()
 ***********************************************************************************************************/
/*! \brief         Returns the version information
 *  \details       Returns version information (MICROSAR3: BCD coded), vendor ID and AUTOSAR module ID 
 *                 ( MICROSAR3: instance ID) of the component.
 *  \param[out]    VersionInfo    Pointer to where to store the version information. Parameter must not be NULL.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CAN_VERSION_INFO_API == STD_ON
 *  \trace         CREQ-991
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_GetVersionInfo( Can_VersionInfoPtrType VersionInfo );
#endif

#if (CAN_GET_STATUS == STD_ON)
/************************************************************************************************************
 *  Can_GetStatus()
 ***********************************************************************************************************/
/*! \brief         Get status/mode of the given controller
 *  \details       Delivers the status of the hardware, as a bit coded value where multiple bits may be set.
 *  \param[in]     Controller   CAN controller requested for status information
 *  \return        CAN_STATUS_START            START mode
 *  \return        CAN_STATUS_STOP             STOP mode
 *  \return        CAN_STATUS_INIT             Initialized controller
 *  \return        CAN_STATUS_INCONSISTENT     STOP or SLEEP are inconsistent over common CAN controllers
 *  \return        CAN_DEACTIVATE_CONTROLLER   RAM check failed CAN controller is deactivated
 *  \return        CAN_STATUS_WARNING          WARNING state
 *  \return        CAN_STATUS_PASSIVE          PASSIVE state
 *  \return        CAN_STATUS_BUSOFF           BUSOFF mode
 *  \return        CAN_STATUS_SLEEP            SLEEP mode
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \config        CAN_GET_STATUS == STD_ON
 *  \notes         the return value can be analysed using the provided API macros: \n
                   CAN_HW_IS_OK(), CAN_HW_IS_WARNING(), CAN_HW_IS_PASSIVE() \n
                   CAN_HW_IS_BUSOFF(), CAN_HW_IS_WAKEUP(), CAN_HW_IS_SLEEP()\n
                   CAN_HW_IS_STOP(), CAN_HW_IS_START(), CAN_HW_IS_INCONSISTENT()\n
                   None AUTOSAR API
 *  \trace         CREQ-978
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, uint8, CODE) Can_GetStatus( uint8 Controller );
#endif

/************************************************************************************************************
 *  Can_SetControllerMode()
 ***********************************************************************************************************/
/*! \brief         Change the controller mode
 *  \details       Request a mode transition witch processed synchronous for MICROSAR3 and return the success. \n
 *                 Or do it asynchronous for MICROSAR4 and call a notification when successful. BUSOFF, WAKEUP and \n
 *                 RAM check will be handled as well.
 *  \param[in]     Controller    CAN controller to be set
 *  \param[in]     Transition    Requested transition to destination mode CAN_T_START, CAN_T_STOP, CAN_T_SLEEP, CAN_T_WAKEUP
 *  \return        CAN_NOT_OK    MICROSAR3: mode change unsuccessful - MICROSAR4: transition request rejected
 *  \return        CAN_OK        MICROSAR3: mode change successful - MICROSAR4: transition request accepted
 *  \pre           Interrupts locked
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   FALSE - MICROSAR3: synchronous
 *  \notes         Must not be called within CAN driver context like RX, TX or BUSOFF call out.
 *  \trace         CREQ-978
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, Can_ReturnType, CODE) Can_SetControllerMode( uint8 Controller, Can_StateTransitionType Transition );

/************************************************************************************************************
 *  Can_ResetBusOffStart()
 ***********************************************************************************************************/
/*! \brief         Start BUSOFF handling
 *  \details       This is a compatibility function (for a CANbedded protocol stack) used during the start of the \n
 *                 BUSOFF handling to remove the BUSOFF state.
 *  \param[in]     Controller   CAN controller
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_BUSOFF_SUPPORT_API == STD_ON
 *  \notes         Has to be called inside BUSOFF notification. \n
 *                 Empty function when not configured. \n
 *                 None AUTOSAR API
 *  \trace         CREQ-984
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_ResetBusOffStart( uint8 Controller );

/************************************************************************************************************
 *  Can_ResetBusOffEnd()
 ***********************************************************************************************************/
/*! \brief         Finish BUSOFF handling
 *  \details       This is a compatibility function (for a CANbedded protocol stack) used during the end of the \n
 *                 BUSOFF handling to remove the BUSOFF state.
 *  \param[in]     Controller   CAN controller
 *  \pre           Has to be called after Can_ResetBusOffStart().
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_BUSOFF_SUPPORT_API == STD_ON
 *  \notes         The call should be done 128*11 recessive CAN bit times later because the call may wait this time to handle BUSOFF. \n
 *                 No nesting of Can_SetControllerMode() and  Can_ResetBusOffEnd() is allowed. \n
 *                 Empty function when not configured. \n
 *                 None AUTOSAR API
 *  \trace         CREQ-984
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_ResetBusOffEnd( uint8 Controller );

/************************************************************************************************************
 *  Can_Write()
 ***********************************************************************************************************/
/*! \brief         Send a CAN message
 *  \details       copy data, DLC and ID to the send mailbox and request a transmission.
 *  \param[in]     Hth           Handle of the mailbox intended to send the message
 *  \param[in]     PduInfo       Information about the outgoing message (ID, dataLength, data)
 *  \return        CAN_NOT_OK    transmit request rejected
 *  \return        CAN_OK        transmit request successful
 *  \return        CAN_BUSY      transmit request could not be accomplished due to the controller is busy.
 *  \pre           disabled CAN interrupts / interrupts locked.
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \trace         CREQ-971
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, Can_ReturnType, CODE) Can_Write( Can_HwHandleType Hth, Can_PduInfoPtrType PduInfo );

/************************************************************************************************************
 *  Can_CancelTx()
 ***********************************************************************************************************/
/*! \brief         Cancel TX message
 *  \details       Cancel the TX message in the hardware buffer (if possible) or mark the message as not to be confirmed \n
 *                 in case of the cancellation is unsuccessful.
 *  \param[in]     Hth     Handle of the mailbox intended to be cancelled.
 *  \param[in]     PduId   PDU identifier
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \notes         Do not call this API within TX confirmation context. Otherwise confirmation will occur for already
 *                 cancelled messages.\n
 *                 None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_CancelTx( Can_HwHandleType Hth, PduIdType PduId );

#if defined(C_ENABLE_MIRROR_MODE)
/************************************************************************************************************
 *  Can_SetMirrorMode()
 ***********************************************************************************************************/
/*! \brief         Activate mirror mode 
 *  \details       Switch the Appl_GenericPreCopy/Confirmation function ON or OFF.
 *  \param[in]     Controller   CAN controller
 *  \param[in]     mirrorMode   Activate or deactivate the mirror mode.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        C_ENABLE_MIRROR_MODE (user configuration file)
 *  \notes         Called by "Mirror Mode" CDD.\n
 *                 None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_SetMirrorMode( uint8 Controller, CddMirror_MirrorModeType mirrorMode );
#endif

/************************************************************************************************************
 *  Can_CheckWakeup()
 ***********************************************************************************************************/
/*! \brief         Check WAKEUP occur
 *  \details       Check the occurrence of WAKEUP events for the given controller \n
 *                 (used as WAKEUP callback for higher layers).
 *  \param[in]     Controller    CAN controller to be checked for WAKEUP events.
 *  \return        E_OK      the given controller caused a WAKEUP before.
 *  \return        E_NOT_OK  the given controller caused no WAKEUP before.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \notes         MICROSAR3: Can_Cbk_CheckWakeup() will be mapped to this function.
 *  \trace         CREQ-983
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, Std_ReturnType, CODE) Can_CheckWakeup( uint8 Controller );
#define Can_Cbk_CheckWakeup Can_CheckWakeup /* compatibility to AutoSar3 */

/************************************************************************************************************
 *  Can_DisableControllerInterrupts()
 ***********************************************************************************************************/
/*! \brief         Disable CAN interrupts
 *  \details       Disable the CAN interrupt for the given controller (e.g. due to data consistency reasons).
 *  \param[in]     Controller    CAN controller to disable interrupts for.
 *  \pre           Must not be called while CAN controller is in SLEEP mode.
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \notes         Called within Critical Area handling or out of Application code.
 *  \trace         CREQ-988
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_DisableControllerInterrupts( uint8 Controller );

/************************************************************************************************************
 *  Can_EnableControllerInterrupts()
 ***********************************************************************************************************/
/*! \brief         Enable CAN interrupts
 *  \details       Re-enable the CAN interrupt for the given controller (e.g. due to data consistency reasons).
 *  \param[in]     Controller    CAN controller to enable interrupts for.
 *  \pre           Must not be called while CAN controller is in SLEEP mode.
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \notes         Called within Critical Area handling or out of Application code.
 *  \trace         CREQ-988
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_EnableControllerInterrupts( uint8 Controller );

/* polling functions (always available for non polled systems also) */
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR30) || defined(CAN_API_SCAN) /* MICROSAR4: prototype by SchM-header */ /* COV_CAN_MICROSAR_VERSION */
/************************************************************************************************************
 *  Can_MainFunction_Write()
 ***********************************************************************************************************/
/*! \brief         TX message observation
 *  \details       Polling TX events (confirmation, cancellation) for all controllers and all TX mailboxes \n
 *                 to accomplish the TX confirmation handling (like CanInterface notification).
 *  \pre           Must not interrupt the call of Can_Write(). CAN driver has to be initialized.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \notes         Empty function in case no polling is active.
 *  \trace         CREQ-979
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_MainFunction_Write( void );

/************************************************************************************************************
 *  Can_MainFunction_Read()
 ***********************************************************************************************************/
/*! \brief         RX message observation
 *  \details       Polling RX events for all controllers and all RX mailboxes to accomplish the \n
 *                 RX indication handling (like CanInterface notification). \n
 *                 Also used for a delayed read (from task level) of the RX Queue messages which were queued from interrupt context.
 *  \pre           CAN driver has to be initialized.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \notes         Empty function in case no polling is active.
 *  \trace         CREQ-979
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_MainFunction_Read( void );

/************************************************************************************************************
 *  Can_MainFunction_BusOff()
 ***********************************************************************************************************/
/*! \brief         BUSOFF observation
 *  \details       Polling of BUSOFF events to accomplish the BUSOFF handling.
 *                 Service function to poll BUSOFF events for all controllers to accomplish the BUSOFF handling \n
 *                 (like calling of CanIf_ControllerBusOff() in case of BUSOFF occurrence).
 *  \pre           CAN driver has to be initialized.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \notes         Empty function in case no polling is active.
 *  \trace         CREQ-979
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_MainFunction_BusOff( void );

/************************************************************************************************************
 *  Can_MainFunction_Wakeup()
 ***********************************************************************************************************/
/*! \brief         WAKEUP observation
 *  \details       Polling WAKEUP events for all controllers to accomplish the WAKEUP handling \n
 *                 (like calling of "CanIf_SetWakeupEvent()" in case of WAKEUP occurrence).
 *  \pre           CAN driver has to be initialized.
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \notes         Empty function in case no polling is active.
 *  \trace         CREQ-983
 *  \trace         CREQ-979
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_MainFunction_Wakeup( void );
#endif

#if defined(CAN_API_SCAN) /* MICROSAR4: prototype by SchM-header */ /* COV_CAN_INTERNAL */
/************************************************************************************************************
 *  Can_MainFunction_Mode()
 ***********************************************************************************************************/
/*! \brief         Mode transition observation
 *  \details       Polling Mode changes over all controllers. \n
                   (This is handled asynchronous if not accomplished in "Can_SetControllerMode()")
 *  \pre           -
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        MICROSAR4x only
 *  \trace         CREQ-978
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, void, CODE) Can_MainFunction_Mode( void );
#endif


/* Platform specific API */
/* KB begin CanLL_FunctionPrototypesH */

V_DEF_FUNC(CAN_LOCAL_INLINE, vuint8, STATIC_CODE) CanErrorHandlingBusOff(CAN_HW_CHANNEL_CANTYPE_ONLY);

#if ((defined( C_ENABLE_RX_BASICCAN_OBJECTS ) && !defined( C_ENABLE_RX_BASICCAN_POLLING )) || \
     (defined( C_ENABLE_RX_FULLCAN_OBJECTS )  && !defined( C_ENABLE_RX_FULLCAN_POLLING ))  || \
      defined( C_ENABLE_INDIVIDUAL_POLLING ) )        /* ISR necessary; no pure polling configuration*/
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanInterruptRx(CAN_HW_CHANNEL_CANTYPE_ONLY);
#endif

#if !defined(C_ENABLE_ERROR_POLLING)
V_DEF_FUNC(CAN_LOCAL_INLINE, vuint8, STATIC_CODE) CanInterruptErrorHandling(CAN_HW_CHANNEL_CANTYPE_ONLY);
#endif
#if !defined(C_ENABLE_TX_POLLING) || defined( C_ENABLE_INDIVIDUAL_POLLING )
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanInterruptTx(CAN_HW_CHANNEL_CANTYPE_ONLY);
#endif

#if defined( C_ENABLE_CAN_ECC_INIT_SHM )
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) Can_EccInit(void); /* PRQA S 3408 */ /* MD_Can_3408_extLinkage */
#endif  /* C_ENABLE_CAN_ECC_INIT_SHM */
#if defined( C_ENABLE_APPL_CAN_CLOCK_STOP )
V_DEF_FUNC(V_NONE, void, CODE) ApplCanClockStop(CAN_HW_CHANNEL_CANTYPE_ONLY);   /* PRQA S 3408 */ /* MD_Can_3408_extLinkage */
V_DEF_FUNC(V_NONE, void, CODE) ApplCanClockStart(CAN_HW_CHANNEL_CANTYPE_ONLY);  /* PRQA S 3408 */ /* MD_Can_3408_extLinkage */
#endif

/* KB end CanLL_FunctionPrototypesH */

/* ISR prototypes (see can_irq.c) */
/* KB begin CanLL_FunctionPrototypesISRH */
/* Possibility to disable the prototypes of interrupt service routines in the driver configuration header file.  */
# if !(defined( C_ENABLE_ISR_PROTOTYPE) || defined( C_DISABLE_ISR_PROTOTYPE ))
#  define C_ENABLE_ISR_PROTOTYPE
# endif

#if ((defined( C_ENABLE_RX_BASICCAN_OBJECTS ) && !defined( C_ENABLE_RX_BASICCAN_POLLING )) || \
     (defined( C_ENABLE_RX_FULLCAN_OBJECTS )  && !defined( C_ENABLE_RX_FULLCAN_POLLING ))  || \
      !defined( C_ENABLE_TX_POLLING )         || \
       defined( C_ENABLE_INDIVIDUAL_POLLING ) || \
      !defined( C_ENABLE_ERROR_POLLING )      || \
      !defined( C_ENABLE_WAKEUP_POLLING ))        /* ISR necessary; no pure polling configuration*/
/* CODE CATEGORY 1 START */
V_DEF_FUNC_API(V_NONE, void, CODE) CanInterrupt( CAN_HW_CHANNEL_CANTYPE_ONLY );
/* CODE CATEGORY 1 END */
#endif

#if defined( CAN_GEN_COM_STACK_LIB )
# define Can_GetCanBasisAdr(hwch)                        Can_GetBasisAdr(hwch)
# if (CAN_ISR_ALL_CHAN == STD_ON)
#  define C_ENABLE_CAN_ISR_ALL_CHAN
# else
#  define C_DISABLE_CAN_ISR_ALL_CHAN
# endif
# if (CAN_SHM_RAM_MULTIPLE == STD_ON)
#  define C_ENABLE_CAN_SHM_RAM_MULTIPLE
# else
#  define C_DISABLE_CAN_SHM_RAM_MULTIPLE
# endif
#else /* CAN_GEN_COM_STACK_LIB */
# define Can_GetCanBasisAdr(hwch)                        CanBasisAdr[(hwch)]
# define Can_GetCanShmAdrOfPCConfig(hwch)                CanShmAdr[(hwch)]
# define Can_GetCanShmAdr_SIDFAOfCanShmAdr(hwch)         CanShmAdr[(hwch)].SIDFA
# define Can_GetCanShmAdr_XIDFAOfCanShmAdr(hwch)         CanShmAdr[(hwch)].XIDFA
#endif /* CAN_GEN_COM_STACK_LIB */

/* CAN Macro accessor */
# define Cn          ((V_DEF_P2SFR_CAN(V_NONE, tCanObjType, AUTOMATIC))(Can_GetCanBasisAdr(channel)))
# define Shm         (Can_GetCanShmAdrOfPCConfig(channel))

# if defined( C_ENABLE_CAN_ISR_ALL_CHAN )
/* one interrupt vector for all CAN channels (e.g. MPC5777C) */
#  if defined( C_SINGLE_RECEIVE_CHANNEL )
#   define CnX(ch)   ((V_DEF_P2SFR_CAN(V_NONE, tCanObjType, AUTOMATIC))(Can_GetCanBasisAdr(0)))
#  else
#   define CnX(ch)   ((V_DEF_P2SFR_CAN(V_NONE, tCanObjType, AUTOMATIC))(Can_GetCanBasisAdr((ch))))
#  endif
# endif

#if defined (C_ENABLE_ISR_PROTOTYPE)
# if defined(C_ENABLE_OSEK_OS)&&\
     defined(C_ENABLE_OSEK_OS_INTCAT2)
/* ISR prototypes must be provided by OSEK header file */
# else
#  if ((defined( C_ENABLE_RX_BASICCAN_OBJECTS ) && !defined( C_ENABLE_RX_BASICCAN_POLLING )) || \
       (defined( C_ENABLE_RX_FULLCAN_OBJECTS )  && !defined( C_ENABLE_RX_FULLCAN_POLLING  )) || \
        !defined( C_ENABLE_TX_POLLING )        || \
        defined( C_ENABLE_INDIVIDUAL_POLLING ) || \
        !defined( C_ENABLE_ERROR_POLLING )     ||\
        !defined( C_ENABLE_WAKEUP_POLLING ))        /* ISR necessary; no pure polling configuration */
/* MPC5746M, MPC5777M:
  0xFFEDC000-0xFFEDFFFF 16 KB Time Triggered Controller Area Network (M_TTCAN_0)
  0xFFEE4000-0xFFEE7FFF 16 KB CAN Sub-System MCAN_1
  0xFFEE8000-0xFFEEBFFF 16 KB CAN Sub-System MCAN_2
  0xFFEEC000-0xFFEEFFFF 16 KB CAN Sub-System MCAN_3
  0xFFEF0000-0xFFEF3FFF 16 KB CAN Sub-System MCAN_4 (MPC5777M only)
  MPC5777C:
  0xFFE30000-0xFFE33FFF 16 KB MCAN_0 
  0xFFE38000-0xFFE3BFFF 16 KB MCAN_1 
*/
#   if defined( C_ENABLE_CAN_ISR_ALL_CHAN )
/* MPC5777C with one interrupt vector for all CAN channels */
V_DEF_FUNC(V_NONE, void, CODE) CanIsr_MCAN( void );
#   else
#    if defined( kCanPhysToLogChannelIndex_0 )
V_DEF_FUNC(V_NONE, void, CODE) CanIsr_0( void );
#    endif
#    if defined( kCanPhysToLogChannelIndex_1 )
V_DEF_FUNC(V_NONE, void, CODE) CanIsr_1( void );
#    endif
#    if defined( kCanPhysToLogChannelIndex_2 )
V_DEF_FUNC(V_NONE, void, CODE) CanIsr_2( void );
#    endif
#    if defined( kCanPhysToLogChannelIndex_3 )
V_DEF_FUNC(V_NONE, void, CODE) CanIsr_3( void );
#    endif
#    if defined( kCanPhysToLogChannelIndex_4 )
V_DEF_FUNC(V_NONE, void, CODE) CanIsr_4( void );
#    endif
#   endif /* C_ENABLE_CAN_ISR_ALL_CHAN */
#  endif /* no pure polling configuration */
# endif
#endif /* if defined (C_ENABLE_ISR_PROTOTYPE) */


/* KB end CanLL_FunctionPrototypesISRH */

#define CAN_STOP_SEC_CODE  /*------------------------------------------*/
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define CAN_START_SEC_CODE_APPL  /*----------------------------------------*/
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if (CAN_GENERIC_PRECOPY == STD_ON)
/************************************************************************************************************
 *  Appl_GenericPrecopy()
 ***********************************************************************************************************/
/*! \brief         Common RX indication callback that will be called before message specific callback will be called.
 *  \details       Application callback function which informs about all incoming RX messages including the contained data. \n
 *                 It can be used to block notification to upper layer. E.g. to filter incoming messages or route it for special handling.
 *  \param[in]     Controller   CAN controller which received the message.
 *  \param[in]     ID           ID of the received message. \n
 *                              In case of extended or mixed ID systems the highest bit (bit 31) is set to mark an extended ID. \n
 *                              FD-bit will not be set at all.
 *  \param[in]     DataLength   Data length of the received message.
 *  \param[in]     pData        Pointer to the data of the received message.
 *  \return        CAN_OK       Higher layer indication will be called afterwards (CanIf_RxIndication()).
 *  \return        CAN_NOT_OK   Higher layer indication will not be called afterwards.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_GENERIC_PRECOPY == STD_ON
 *  \notes         "pData" is read only and must not be accessed for further write operations. \n
 *                 The parameter DataLength refers to the received data length by the CAN controller hardware.\n
 *                 Note, that the CAN protocol allows the usage of data length values greater than eight (CAN-FD).\n
 *                 Depending on the implementation of this callback it may be necessary to consider this special case (e.g. if the data length is used as index value in a buffer write access).
 *                 None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(extern, Can_ReturnType, APPL_CODE) Appl_GenericPrecopy( uint8 Controller, Can_IdType ID, uint8 DataLength, Can_DataPtrType DataPtr );
#endif

#if defined(CAN_ENABLE_GENERIC_CONFIRMATION_API1)
/************************************************************************************************************
 *  Appl_GenericConfirmation()
 ***********************************************************************************************************/
/*! \brief         Common TX notification callback that will be called before message specific callback will be called.
 *  \details       Application callback function which informs about TX messages being sent to the CAN bus.
 *                 It can be used to block confirmation or route the information to other layer as well.
 *  \param[in]     PduId       Handle of the PDU specifying the message.
 *  \return        CAN_OK      Higher layer confirmation will be called afterwards (CanIf_TxConfirmation()).
 *  \return        CAN_NOT_OK  Higher layer confirmation will not be called afterwards.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_GENERIC_CONFIRMATION == STD_ON
 *  \notes         "PduId" is read only and must not be accessed for further write operations. \n
 *                 None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(extern, Can_ReturnType, APPL_CODE) Appl_GenericConfirmation( PduIdType PduId );
#endif

#if defined(CAN_ENABLE_GENERIC_CONFIRMATION_API2)
/************************************************************************************************************
 *  Appl_GenericConfirmation()
 ***********************************************************************************************************/
/*! \brief         Common TX notification callback that will be called before message specific callback will be called.
 *  \details       Application callback function which informs about TX messages being sent to the CAN bus.
 *                 It can be used to block confirmation or route the information to other layer as well.
 *  \param[in]     Controller  CAN controller which send the message.
 *  \param[in]     DataPtr     Pointer to a Can_PduType structure including ID, DataLength, PDU and data pointer.
 *  \return        CAN_OK      Higher layer (CanInterface) confirmation will be called.
 *  \return        CAN_NOT_OK  No further higher layer (CanInterface) confirmation will be called.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_GENERIC_CONFIRMATION == CAN_API2
 *  \notes         A new transmission within this call out will corrupt the DataPtr context. \n
 *                 None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(extern, Can_ReturnType, APPL_CODE) Appl_GenericConfirmation( uint8 Controller, Can_PduInfoPtrType DataPtr );
#endif

#if (CAN_GENERIC_PRETRANSMIT == STD_ON)
/************************************************************************************************************
 *  Appl_GenericPreTransmit()
 ***********************************************************************************************************/
/*! \brief         Common transmit callback.
 *  \details       Application callback function allowing the modification of the data to be transmitted (e.g.: add CRC).
 *  \param[in]     Controller  CAN controller on which the message will be send.
 *  \param[in]     DataPtr     Pointer to a Can_PduType structure including ID, DataLength, PDU and data pointer.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_GENERIC_PRETRANSMIT == STD_ON
 *  \notes         None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(extern, void, APPL_CODE) Appl_GenericPreTransmit( uint8 Controller, Can_PduInfoPtrType_var DataPtr );
#endif

#if (defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) ) || defined(C_ENABLE_HW_LOOP_TIMER) /* always used for sync mode */ /* COV_CAN_MICROSAR_VERSION */
# if (CAN_HW_LOOP_SUPPORT_API == STD_ON)
/************************************************************************************************************
 *  ApplCanTimerStart()
 ***********************************************************************************************************/
/*! \brief         Start time out monitoring
 *  \details       Service function to start an observation timer.
 *  \param[in]     Controller  CAN controller on which the hardware observation takes place. \n
 *                             (only if not using "Optimize for one controller")
 *  \param[in]     source      Source for the hardware observation.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        (CAN_HW_LOOP_SUPPORT_API == STD_ON) && ((CAN_HARDWARE_CANCELLATION == STD_ON) || MICROSAR4)
 *  \notes         Please refer to chapter "Hardware Loop Check". \n
 *                 None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, void, APPL_CODE) ApplCanTimerStart( CAN_CHANNEL_CANTYPE_FIRST uint8 source );

/************************************************************************************************************
 *  ApplCanTimerLoop()
 ***********************************************************************************************************/
/*! \brief         Time out monitoring
 *  \details       Service function to check (against generated maximum loop value) whether a hardware loop shall be continued or broken.
 *  \param[in]     Controller  CAN controller on which the hardware observation takes place. \n
 *                             (only if not using "Optimize for one controller")
 *  \param[in]     source      Source for the hardware observation.
 *  \return        CAN_NOT_OK  when loop shall be broken (observation stops) \n
 *                             CAN_NOT_OK should only be used in case of a time out occurs due to a hardware issue. \n
 *                             After this an appropriate error handling is needed (see chapter Hardware Loop Check / Time out Monitoring).
 *  \return        CAN_OK      when loop shall be continued (observation continues)
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        (CAN_HW_LOOP_SUPPORT_API == STD_ON) && ((CAN_HARDWARE_CANCELLATION == STD_ON) || MICROSAR4)
 *  \notes         Please refer to chapter "Hardware Loop Check". \n
 *                 None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, Can_ReturnType, APPL_CODE) ApplCanTimerLoop( CAN_CHANNEL_CANTYPE_FIRST uint8 source );

/************************************************************************************************************
 *  ApplCanTimerEnd()
 ***********************************************************************************************************/
/*! \brief         Stop time out monitoring
 *  \details       Service function to to end an observation timer.
 *  \param[in]     Controller  CAN controller on which the hardware observation takes place. \n
 *                             (only if not using "Optimize for one controller")
 *  \param[in]     source      Source for the hardware observation.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        (CAN_HW_LOOP_SUPPORT_API == STD_ON) && ((CAN_HARDWARE_CANCELLATION == STD_ON) || MICROSAR4)
 *  \notes         Please refer to chapter "Hardware Loop Check". \n
 *                 None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(V_NONE, void, APPL_CODE) ApplCanTimerEnd( CAN_CHANNEL_CANTYPE_FIRST uint8 source );
# endif
#endif

#if (CAN_INTLOCK != CAN_DRIVER)
/************************************************************************************************************
 *  ApplCanInterruptDisable()
 ***********************************************************************************************************/
/*! \brief         CAN interrupt disabling by application
 *  \details       Disabling of CAN Interrupts by the application. \n
 *                 E.g.: the CAN driver itself should not access the common Interrupt Controller due to application \n
 *                 specific restrictions (like security level). Or the application like to be informed because of \n
 *                 an CAN interrupt lock. called by Can_DisableControllerInterrupts().
 *  \param[in]     Controller   CAN controller for the CAN interrupt lock.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_INTLOCK == CAN_APPL || CAN_INTLOCK == CAN_BOTH
 *  \notes         None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(extern, void, APPL_CODE) ApplCanInterruptDisable( uint8 Controller );

/************************************************************************************************************
 *  ApplCanInterruptRestore()
 ***********************************************************************************************************/
/*! \brief         CAN interrupt restore by application
 *  \details       Re-enabling of CAN Interrupts by the application. \n
                   E.g.: the CAN driver itself should not access the common Interrupt Controller due to application \n
                   specific restrictions (like security level). Or the application like to be informed because of \n
                   an CAN interrupt lock. called by Can_EnableControllerInterrupts().
 *  \param[in]     Controller   CAN controller for the CAN interrupt unlock.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_INTLOCK == CAN_APPL || CAN_INTLOCK == CAN_BOTH
 *  \notes         None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(extern, void, APPL_CODE) ApplCanInterruptRestore( uint8 Controller );
#endif

#if (CAN_OVERRUN_NOTIFICATION == CAN_APPL)
/************************************************************************************************************
 *  Appl_CanOverrun()
 ***********************************************************************************************************/
/*! \brief         Overrun detection
 *  \details       Called when an overrun is detected for a BasicCAN mailbox. \n
 *                 Alternatively a DET call can be selected instead of ("CanOverrunNotification" is set to "DET").
 *  \param[in]     Controller   CAN controller for which the overrun was detected.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_OVERRUN_NOTIFICATION == CAN_APPL
 *  \notes         None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(extern, void, APPL_CODE) Appl_CanOverrun ( uint8 Controller );

/************************************************************************************************************
 *  Appl_CanFullCanOverrun()
 ***********************************************************************************************************/
/*! \brief         Overrun detection
 *  \details       Called when an overrun is detected for a FullCAN mailbox. \n
 *                 Alternatively a DET call can be selected instead of ("CanOverrunNotification" is set to "DET").
 *  \param[in]     Controller   CAN controller for which the overrun was detected.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_OVERRUN_NOTIFICATION == CAN_APPL
 *  \notes         None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(extern, void, APPL_CODE) Appl_CanFullCanOverrun ( uint8 Controller );
#endif

#if defined(C_ENABLE_CAN_RAM_CHECK)
#  if defined(C_ENABLE_NOTIFY_CORRUPT_MAILBOX)
/************************************************************************************************************
 *  Appl_CanCorruptMailbox()
 ***********************************************************************************************************/
/*! \brief         Mailbox notification in case of RAM check failure.
 *  \details       Will notify the application (during Can_InitController()) about a defect mailbox within the CAN cell.
 *  \param[in]     Controller   CAN controller for which the check failed.
 *  \param[in]     hwObjHandle  Hardware handle of the defect mailbox.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_RAM_CHECK == CAN_NOTIFY_MAILBOX
 *  \notes         None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(extern, void, APPL_CODE) Appl_CanCorruptMailbox(uint8 Controller, Can_HwHandleType hwObjHandle);
#  endif

/************************************************************************************************************
 *  Appl_CanRamCheckFailed()
 ***********************************************************************************************************/
/*! \brief         CAN controller notification in case of RAM check failure
 *  \details       will notify the application (during Can_InitController()) about a defect CAN controller \n
 *                 due to a previous failed mailbox check. The return value decide how to proceed with the initialization.
 *  \param[in]     Controller   CAN controller for which the check failed.
 *  \return        CAN_DEACTIVATE_CONTROLLER   deactivate the controller
 *  \return        CAN_ACTIVATE_CONTROLLER     activate the controller
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_RAM_CHECK == CAN_NOTIFY_MAILBOX / CAN_NOTIFY_ISSUE
 *  \notes         None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(extern, uint8, APPL_CODE) Appl_CanRamCheckFailed(uint8 Controller);
#endif



/* \trace SPEC-1588 */
/* KB begin CanLL_CallBackFunctionsH */


/* KB end CanLL_CallBackFunctionsH */

#define CAN_STOP_SEC_CODE_APPL  /*-----------------------------------------*/
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(C_DRV_INTERNAL) /* COV_CAN_INTERNAL */
# if defined(CAN_HL_NO_V_DEF) /* COV_CAN_INTERNAL */
/* only use internal when not defined before - undef to get no conflict in CBD - MSR mixed systems */
#  undef vuint8 /* PRQA S 0841 */ /* MD_Can_0841 */
#  undef vsint8 /* PRQA S 0841 */ /* MD_Can_0841 */
#  undef vuint16 /* PRQA S 0841 */ /* MD_Can_0841 */
#  undef vsint16 /* PRQA S 0841 */ /* MD_Can_0841 */
#  undef vuint32 /* PRQA S 0841 */ /* MD_Can_0841 */
#  undef vsint32 /* PRQA S 0841 */ /* MD_Can_0841 */
# endif
#endif

/*!
 * \exclusivearea CAN_EXCLUSIVE_AREA_1
 * Ensures consistency while modifying the interrupt counter and CAN interrupt lock registers.
 * \protects canCanInterruptCounter, CAN interrupt registers
 * \usedin Can_EnableControllerInterrupts, Can_DisableControllerInterrupts
 * \exclude All functions provided by Can.
 * \length SHORT The interrupt registers and a counter variable are modified.
 * \endexclusivearea
 *
 * \exclusivearea CAN_EXCLUSIVE_AREA_2
 * Ensures consistency while modifying the TX mailbox states and lock registers.
 * \protects Can_ActiveSendState, CAN mailbox registers
 * \usedin Can_Write
 * \exclude Can_Write, Can_Mainfunction_Write, Can TX Interrupt
 * \length MEDIUM Multiplexed TX and cancellation handling. Cancellation handling by CAN Interface triggered. CAN TX mailbox registers and semaphore for locked mailbox modified.
 * \endexclusivearea
 *
 * \exclusivearea CAN_EXCLUSIVE_AREA_3
 * Ensures consistency while modifying the TX mailbox states and lock registers in case of cancellation or generic confirmation used.
 * \protects Can_ActiveSendState, CAN mailbox registers
 * \usedin Can_Mainfunction_Write, Can TX Interrupt
 * \exclude Can_Write, Can_Mainfunction_Write, Can TX Interrupt
 * \length MEDIUM Confirmation TX and cancellation handling. Cancellation handling by CAN Interface triggered. CAN TX mailbox registers and states modified.
 * \endexclusivearea
 *
 * \exclusivearea CAN_EXCLUSIVE_AREA_4
 * Ensures consistency of RX Queue.
 * \protects RX Queue counter and data
 * \usedin Can_Mainfunction_Read, Can RX Interrupt
 * \exclude Can_Mainfunction_Read, Can RX Interrupt
 * \length SHORT Modify queue counter and copy data to queue.
 * \endexclusivearea
 *
 * \exclusivearea CAN_EXCLUSIVE_AREA_5
 * Ensures atomic wakeup mode transition. Do not use CAN interrupt locks because CAN interrupt status may be changed within.
 * \protects wakeup transition
 * \usedin Can_Mainfunction_Wakeup
 * \exclude Can_SetControllerMode, Can BusOff Interrupt, Can Wakeup, Can_Mainfunction_Wakeup.
 * \length MEDIUM wakeup mode transition will be performed.
 * \endexclusivearea
 *
 * \exclusivearea CAN_EXCLUSIVE_AREA_6
 * Ensures atomic mode transition.
 * \protects mode transition
 * \usedin Can_Mainfunction_Mode, Can_SetControllerMode, Can_MainFunction_BusOff, Can BusOff Interrupt
 * \exclude Can_Mainfunction_Mode, Can_SetControllerMode, Can_MainFunction_BusOff, Can BusOff Interrupt, Can_Mainfunction_Wakeup.
 * \length MEDIUM mode transition will be performed.
 * \endexclusivearea
 *
 */

/* PRQA  L:QAC_Can_0828 */
/* PRQA  L:QAC_Can_0850 */

#endif /* end file */
/*  STOPSINGLE_OF_MULTIPLE_COMMENT  */

/* Kernbauer Version: 1.09 Konfiguration: DrvCan_Rh850McanAsr Erzeugungsgangnummer: 362 */


/* Kernbauer Version: 1.09 Konfiguration: DrvCan_Rh850McanAsr Erzeugungsgangnummer: 362 */


/* Kernbauer Version: 1.09 Konfiguration: DrvCan_Rh850McanAsr Erzeugungsgangnummer: 362 */


/* Kernbauer Version: 1.09 Konfiguration: DrvCan_Rh850McanAsr Erzeugungsgangnummer: 362 */


