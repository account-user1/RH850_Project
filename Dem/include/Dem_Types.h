
/* ********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Dem_Types.h
 *      Project:  MICROSAR Diagnostic Event Manager (Dem)
 *       Module:  -
 *    Generator:  -
 *
 *  Description:  Static public API declarations of the MICROSAR Dem.
 *                Dynamically available APIs are declared in the generated file Rte_Dem.h
 *
 *********************************************************************************************************************/

/* ********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Stefan Huebner                vishrs        Vector Informatik GmbH
 *  Alexander Ditte               visade        Vector Informatik GmbH
 *  Matthias Heil                 vismhe        Vector Informatik GmbH
 *  Thomas Dedler                 visdth        Vector Informatik GmbH
 *  Anna Bosch                    visanh        Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  04.00.00  2012-06-29  vismhe  ESCAN00057159 AR4-82: DEM 4.x
 *                        visade  ESCAN00057159 AR4-82: DEM 4.x
 *  04.01.00  2012-09-07  vismhe  ESCAN00061254 VersionInfo API returns wrong version number
 *            2012-09-14  vismhe  ESCAN00061429 Autostart cycle has no effect
 *            2012-09-20  vismhe  ESCAN00061565 Wrong snapshot record number reported for 19 03
 *            2012-10-26  vismhe  ESCAN00062489 Compiler warning: Condition is always true
 *            2012-10-26  vismhe  ESCAN00062490 Compiler warning: Condition is always true
 *            2012-10-26  vismhe  ESCAN00062483 Unexpected ClearAllowed callback
 *  04.02.00  2012-11-05  vismhe  ESCAN00062646 Compiler warning: Function "Dem_Queue_CancelOperation" was declared but never referenced
 *            2012-11-05  vismhe  ESCAN00062647 Compiler warning: Variable "Dem_Mem_PrimaryInfo" was declared but never referenced
 *            2012-11-05  vismhe  ESCAN00062644 Compiler warning: Variable "lResult" was set but never used
 *            2012-11-06  vismhe  ESCAN00062645 Compiler warning: Variable "lOldEventStatus" was set but never used
 *            2012-11-06  visade  ESCAN00062771 Memory corruption after call of Dem_SetDTCFilter()
 *            2012-12-07  vismhe  ESCAN00061769 AR4-207: Support VCC Diagnostic specification and required Diagnostic RFCs
 *  04.03.00  2013-02-04  visdth  ESCAN00061747 OBDII Support: IUMPR handling added
 *            2013-03-05  vismhe  ESCAN00065600 DET error DEM_E_UNINIT in Dem_Mainfunction
 *            2013-03-08  visade  ESCAN00061747 AR4-55: DEM - OBDII Support
 *            2013-03-13  visdth  ESCAN00063590 OBD IUMPR Counting Misbehavior
 *            2013-03-13  visdth  ESCAN00065851 Support User Controlled Warning Indicator Request
 *            2013-03-13  visdth  ESCAN00065853 Support suppression of permanent DTC storage
 *            2013-03-13  visdth  ESCAN00065854 Support MIL Groups
 *            2013-03-13  vismhe  ESCAN00065867 Allow PendingDTC independent from event storage
 *            2013-03-13  vismhe  ESCAN00065868 Support different DTC aging protocols
 *  04.04.00  2013-04-02  visade  ESCAN00066314 Compiler warning: multiple dead assignments within Dem.c
 *            2013-04-03  vismhe  ESCAN00065209 AR4-375: Add Support of "Suppress DTC" in Dem
 *            2013-04-10  visdth  ESCAN00066201 Extension of Interface to read IUMPR data
 *            2013-04-26  vismhe  ESCAN00067007 Secondary Memory DTCs do not report Severity and FunctionalUnit information
 *  04.04.01  2013-05-15  visade  ESCAN00067368 Compiler error: OdometerAtClear is not a member of Dem_Cfg_AdminDataType_s
 *            2013-05-15  visade  ESCAN00067372 Compiler error: Dem_Cfg_ObdGetGlobalDenominator() not a modifiable lvalue
 *            2013-05-15  visade  ESCAN00067155 Missing type definitions if Dem is used without Rte
 *            2013-05-15  visade  ESCAN00067025 Include FiM.h only if IUMPR or FiM notification is enabled
 *            2013-05-22  vismhe  ESCAN00067180 Compiler warning: uninitialized local variable 'lDtcStatusNew' used
 *            2013-05-22  vismhe  ESCAN00067354 Compilation error: Undefined symbol
 *            2013-05-22  vismhe  ESCAN00067345 Compilation error: Undefined symbol
 *            2013-05-22  vismhe  ESCAN00067459 Compiler warning: dead assignment to "lReturnValue" eliminated
 *  04.05.00  2013-06-03  visade  ESCAN00067673 Change Permanent Activation Distance from absolute to relative distance calculation
 *            2013-06-10  visade  ESCAN00067618 Out-parameter not initialized in Dem_GetIUMPRGeneralData
 *            2013-06-19  visdth  ESCAN00068159 MIL Group trip counter not reset on ClearDTC
 *            2013-06-19  vismhe  ESCAN00067715 AR4-418: Support Event Combination Type 1
 *            2013-06-19  vismhe  ESCAN00068164 Immediately persist event status on ClearDTC
 *            2013-06-19  vismhe  ESCAN00068389 Extended use of Dem_GetSeverityOfDTC and Dem_GetFunctionalUnitOfDTC
 *            2013-06-27  vismhe  ESCAN00068390 OperationCycles not stopped during Shutdown
 *            2013-09-18  vismhe  ESCAN00070478 Unexpected value for EventStatusChanged and DTCStatusChanged callbacks
 *  04.05.01  2013-07-03  vismhe  ESCAN00068511 Compiler error: Dem.c: 'Dem_Cbk_InitMonitor' undefined
 *  04.05.02  2013-07-03  vismhe  ESCAN00068562 Mode 0x02 does not return data
 *            2013-07-04  vismhe  ESCAN00068508 IUMPR: Numerator is incremented without qualified test result
 *            2013-07-04  vismhe  ESCAN00068569 Suppression or UserControlled WIR has no effect
 *  04.05.03  2013-07-10  visade  ESCAN00068885 Provide OBD FreezeFrame in 0x1904 although Snapshots Records are disabled
 *            2013-07-18  visade  ESCAN00069154 Missing cast truncates OBD DTC number
 *            2013-07-22  vismhe  ESCAN00069132 Mixed internal and external data records are stored misaligned
 *            2013-07-22  vismhe  ESCAN00069237 Allow to override static / inline specific to Dem module
 *            2013-07-23  vismhe  ESCAN00069270 Too many increments of occurrence counter
 *            2013-07-23  vismhe  ESCAN00069271 DTC starts aging although it is still pending
 *            2013-07-23  visdth  ESCAN00068577 IUMPR Counters may be incremented more than once per DCY
 *  04.06.00  2013-07-24  visade  ESCAN00069311 Missing DID/PID validation check in Dem_GetEventFreezeFrameData()
 *            2013-07-24  visade  ESCAN00068636 AR4-419: Support Multiple OBD Freeze Frames
 *            2013-08-02  visade  ESCAN00069587 The code shall compile if NVM support is disabled and OBD support is enabled
 *            2013-08-06  visade  ESCAN00069626 OBD DTC Status does not qualify
 *            2013-08-07  visade  ESCAN00069423 OBD relevant data is not reset on configuration change
 *            2013-08-08  visade  ESCAN00069683 Erroneous indicator decrement during Mode 0x04
 *            2013-08-14  vismhe  ESCAN00069801 BSW error reporting after PreInit and before Init not possible
 *  05.00.00  2013-09-03  vismhe  ESCAN00068165 Compiler warning: Condition is always constant
 *            2013-09-03  vismhe  ESCAN00068395 AR4-292: Reporting of DET and DEM errors via DLT
 *            2013-09-03  vismhe  ESCAN00068416 AR4-420: Postbuild Loadable Support
 *            2013-09-03  vismhe  ESCAN00068465 AR4-371: Support signal interface
 *            2013-09-03  vismhe  ESCAN00068526 AR4-409: Support of OEM Volvo AB
 *            2013-09-03  vismhe  ESCAN00068530 AR4-542: Support of OEM Ford
 *            2013-09-03  vismhe  ESCAN00069882 Internal event is not cleared
 *            2013-09-03  vismhe  ESCAN00069989 Compiler warning: variable "lEntry" was set but never used
 *            2013-09-03  vismhe  ESCAN00069805 Add verification of EventKind to ReportErrorStatus and SetEventStatus
 *            2013-09-04  visdth  ESCAN00070048 OBD IUMPR: reading the same ratio several times is not possible
 *            2013-09-11  vismhe  ESCAN00070346 AgingCounter is reported with incorrect value
 *            2013-09-16  vismhe  ESCAN00069943 Delay WarmUpCycle until restart of Driving Cycle
 *            2013-09-16  vismhe  ESCAN00070219 Reset PID 0x21 if no OBD DTC requests the MIL for 40 warm-up cycles
 *            2013-09-19  vismhe  ESCAN00070500 Remove DET for consecutive qualified DCY reports
 *            2013-09-26  vismhe  ESCAN00070686 ConfirmedDTC is reset on initialization
 *            2013-10-02  vismhe  ESCAN00070834 Incorrect event displaced on overflow
 *            2013-11-27  vismhe  ESCAN00072203 Memory overwritten during initialization
 *  05.00.01  2013-11-13  vismhe  ESCAN00071873 DTCs do not age
 *            2013-11-14  vismhe  ESCAN00071948 Compiler warning: Definition different from declaration
 *  05.01.00  2013-10-17  visade  ESCAN00071182 Incorrect MIL group behavior after ClearAllDTCs
 *            2013-10-22  visade  ESCAN00071161 Change initialization of PID 0x31
 *            2013-10-22  visade  ESCAN00071162 Support ClearSingleDtc for OBD ECUs
 *            2013-10-25  visade  ESCAN00071244 Provide Dem internal EventId in Environmental Data
 *            2013-10-25  visade  ESCAN00071425 Provide OBD DTC in Environmental Data
 *            2013-10-30  visade  ESCAN00071346 Support application interface providing the permanent DTC activation state
 *            2013-11-20  vismhe  ESCAN00072084 Incorrect value for maximum FDC in current cycle
 *            2013-11-20  vismhe  ESCAN00071550 Incorrect status report handling for BSW errors
 *            2013-11-21  visade  ESCAN00072122 Stored UDS DTC does not have Confirmed and WarningIndicator bit set
 *            2013-11-28  vismhe  ESCAN00072310 Incorrect PID21 handling
 *  06.00.00  2014-02-04  visade  ESCAN00072994 Admin data is not persisted during shutdown if no Operation Cycle was started
 *            2014-02-04  vismhe  ESCAN00073575 Compile/Validation error: Incompatible prototypes
 *            2014-02-04  vismhe  ESCAN00073578 Rework NV MemoryAbstraction
 *            2014-02-04  vismhe  ESCAN00070873 AR4-402: Support of OEM Ford
 *            2014-02-04  visade  ESCAN00071380 AR4-465: Support for J1939 Diagnostics - API to DCM according AR 4.1.2
 *            2014-02-04  visade  ESCAN00071379 AR4-465: Support for J1939 Diagnostics
 *            2014-02-14  visade  ESCAN00073721 Driving cycle remains qualified after automatic end
 *            2014-02-18  vismhe  ESCAN00073792 Diagnostics locked when clearing DTCs
 *            2014-02-18  vismhe  ESCAN00079177 Compiler warning: Name Dem_DTCGroupType has already been declared
 *  06.01.00  2014-03-10  visdth  ESCAN00073613 Numerator is only incremented with fulfilled General Denominator conditions
 *            2014-03-12  vismhe  ESCAN00074193 NRC "conditions not correct" for services 19 04, 19 06
 *            2014-03-12  vismhe  ESCAN00074203 AR4-673: Diag_Asr4J1939Dcm + Diag_Asr4Dem shall work without Diag_Asr4Dcm
 *            2014-03-13  vismhe  ESCAN00074248 Compiler error: Missing type definition Dem_J1939DcmDiagnosticReadinessNType
 *            2014-03-12  visade  ESCAN00073876 Lock Numerator increment during active tester communication
 *            2014-03-13  visade  ESCAN00074253 Compile error if Aging is configured to start at passed
 *            2014-03-21  vismhe  ESCAN00074493 DTC does not re-enable after suppression
 *            2014-03-21  vismhe  ESCAN00074494 DTCs do not respect multiple trips
 *            2014-03-25  vismhe  ESCAN00074541 Hide Dependent OBD DTCs in UDS diagnostic services
 *            2014-03-25  vismhe  ESCAN00074410 Incorrect old DTC status in DtcStatusChangeCbk
 *            2014-03-26  vismhe  ESCAN00074566 Event does not debounce correctly
 *            2014-03-27  vismhe  ESCAN00074598 Significance value reported incorrectly in extended records
 *            2014-03-28  vismhe  ESCAN00074644 Time debounced events report wrong maximum debounce value
 *            2014-03-28  vismhe  ESCAN00074647 Occurrence Counter reported incorrectly
 *            2014-03-28  vismhe  ESCAN00073289 Add Operating Hours to Standardized Environmental Data
 *            2014-04-02  visade  ESCAN00074740 Possible out of bound access for variable Dem_Cfg_ObdIumprData.Status
 *            2014-04-02  vismhe  ESCAN00074743 Wrong result when reporting invalid event status
 *  06.02.00  2014-04-23  vismhe  ESCAN00074202 AR4-670: Support DTC Pre-storage
 *            2014-04-23  vismhe  ESCAN00075221 Support 16 Operation Cycles
 *            2014-04-23  vismhe  ESCAN00075100 Usage of OSEK OS symbol can cause errors during preprocessing
 *            2014-04-24  vismhe  ESCAN00075205 Provide API Dem_SetEventAvailable
 *            2014-04-24  vismhe  ESCAN00075207 Suppressed Events do not confirm
 *            2014-04-28  visade  ESCAN00073569 Do not track the ratio for suppressed DTCs/Events
 *            2014-05-05  vismhe  ESCAN00075368 Incorrect new DTC status reported in DTC status changed callback
 *            2014-05-07  visade  ESCAN00075400 PID 0x21 is not cleared if MIL is not triggered
 *            2014-05-08  visade  ESCAN00074965 Loop underrun in function Dem_EnablePermanentStorage()
 *            2014-06-04  vismhe  ESCAN00075786 Dem does not compile if PID 0x21 is not enabled
 *            2014-05-21  vismhe  ESCAN00075810 OBD Freeze Frame is not cleared correctly
 *            2014-06-04  vismhe  ESCAN00076016 Compile Error: Multiple errors for OBD DEM with feature OBD disabled
 *            2014-06-04  vismhe  ESCAN00076021 Compiler error: Undefined preprocessor identifier in Dem_Dcm.h
 *  07.00.00  2014-06-25  vismhe  ESCAN00076615 AR4-732: Application Trigger for NV Synchronization
 *            2014-06-25  vismhe  ESCAN00076615 AR4-732: Extend aging behavior to not require TFTOC==false
 *            2014-06-30  vismhe  ESCAN00076615 AR4-732: Added support for Clear DTC Limitation
 *            2014-07-02  vismhe  ESCAN00076615 AR4-732: Added support FDC trip / once per cycle
 *            2014-06-25  vismhe  ESCAN00076450 Compiler error: inline function's body is not declared previously
 *            2014-06-30  vismhe  ESCAN00077724 AR4-698: Move InitPointer to Dem_Init
 *            2014-07-02  visade  ESCAN00076529 AR4-607: Option to store the Fault Detection Counter in NVRAM
 *            2014-07-02  vismhe  ESCAN00076664 Improve DTC status recovery after power loss
 *            2014-07-02  visade  ESCAN00076667 Remove support of DEM_DTC_FORMAT_OBD from DTC suppression
 *            2014-07-10  vismhe  ESCAN00076878 Improve robustness against Shutdown
 *            2014-07-11  vismhe  ESCAN00076920 Wrong result when extended record is not stored
 *            2014-07-11  vismhe  ESCAN00076982 Implausible value for extended data records mapped to aging counter
 *            2014-07-23  visade  ESCAN00076612 AR4-741: Support multiple J1939 nodes in DEM and J1939DCM
 *            2014-08-07  vismhe  ESCAN00077685 Improve robustness of disable DTC record update
 *            2014-08-07  visade  ESCAN00077680 Do not report previously OBD relevant DTCs in Mode 0x0A
 *            2014-08-08  vismhe  ESCAN00077722 Compiler warning: 'EventId' : unreferenced formal parameter
 *            2014-08-12  vismhe  ESCAN00074759 Feature J1939 and EventCombination does not work together
 *            2014-08-25  vismhe  ESCAN00074190 Restore ConfirmedBit when StorageTrigger == Confirmed
 *            2014-08-25  vismhe  ESCAN00077999 Service 19 02 does not report all DTCs
 *            2014-09-12  vismhe  ESCAN00078381 Dem_GetIUMPRGeneralData returns an incorrect value for 'NumberOfRatios'
 *            2014-09-30  vismhe  ESCAN00078498 Recover external visible OBD Freeze Frame if event in memory is not OBD relevant by configuration (anymore)
 *            2014-10-01  visade  ESCAN00078639 Add NVRAM Recovery for Permanent Memesry
 *            2014-10-10  vismhe  ESCAN00078806 Wrong event displaced from event memory
 *            2014-10-13  vismhe  ESCAN00078902 Event availability not working with combined events
 *            2014-10-13  vismhe  ESCAN00068635 Compiler warning: expression always constant
 *            2014-10-13  vismhe  ESCAN00070124 Compiler warning: conditional expression is constant
 *            2014-10-13  vismhe  ESCAN00076527 AR4-572: Ford/Mazda Feature Complete - Ford in AR environment
 *            2014-10-13  vismhe  ESCAN00076605 AR4-669: Support for J1939 Diagnostics
 *            2014-10-13  vismhe  ESCAN00080571 Memory corruption when aging DTCs
 *            2015-01-14  vismhe  ESCAN00081016 Out of bound memory read access for Dem_Cfg_ObdIumprData.Status
 *  08.00.00  2014-11-24  vismhe  ESCAN00079766 Remove API Dem_GetNextIUMPRRatioData
 *            2014-11-24  vismhe  ESCAN00079776 Combined events not correctly unavailable in postbuild configuration
 *            2014-11-24  vismhe  ESCAN00079653 Change return value for API Dem_SetOperationCycleState()
 *            2014-11-24  visade  ESCAN00079787 Compiler warning: Dead assignment in function Dem_Data_PermanentEntryFind()
 *            2014-12-04  visade  ESCAN00079994 1-Trip DTC without the need for a qualified driving cycle
 *            2014-12-04  vismhe  ESCAN00079778 A Monitor Report is lost
 *            2014-12-05  vismhe  ESCAN00080187 FEAT-412 Support latching TestFailed of confirmed DTCs
 *            2014-12-11  vismhe  ESCAN00080187 FEAT-412 Support Freezing/Resetting the debouncing state by API
 *            2014-12-11  vismhe  ESCAN00080187 FEAT-412 Support init monitor notification when debouncing is reenabled
 *            2014-12-11  vismhe  ESCAN00080187 FEAT-412 Transport NvM error result to ClearDTC Api
 *            2014-12-17  visade  ESCAN00080224 Support of 3 Byte OBD DTC for DEM internal data element
 *            2015-01-12  vismhe  ESCAN00079539 FEAT-1200: Support of length information in Snapshot
 *            2015-01-12  vismhe  ESCAN00079539 FEAT-1200: Option to rest TF bit on operation cycle start
 *            2015-01-14  vismhe  ESCAN00080283 FEAT-427: Refactoring of large functions, rework function headers
 *            2015-01-21  visade  ESCAN00080705 Permanent DTC without permanent memory activation
 *            2015-01-21  visade  ESCAN00080718 Remove DCY wait state for permanent DTCs after CodeClear
 *            2015-01-21  visade  ESCAN00080178 Add DCY qualification as permanent DTC erase condition
 *            2015-01-28  vismhe  ESCAN00080898 Out of bounds memory read access
 *            2015-02-06  visade  ESCAN00081089 Improve NVRAM recovery for combined events in permanent memory
 *            2015-02-06  visade  ESCAN00081024 IUMPR - erroneous numerator increment
 *            2015-02-12  vismhe  ESCAN00081038 Event reports are not processed correctly before Dem_Init()
 *            2015-02-12  vismhe  ESCAN00081188 Keep auto-start cycles active after shutdown
 *            2015-02-15  vismhe  ESCAN00080245 FEAT-473: Support default initialization for event available state
 *            2015-02-18  vismhe  ESCAN00081328 Critical section is kept in lock state
 *            2015-02-20  vismhe  ESCAN00080555 Compiler warning: 'FreezeFrameIndex' : unreferenced formal parameter
 *            2015-02-23  visade  ESCAN00081400 Make active DTC immediately visible after permanent memory activation
 *            2015-02-25  visade  ESCAN00079859 FEAT-643: Support WWH OBD (Beta)
 *            2015-02-27  vismhe  ESCAN00081529 Blocking of ClearDTC while processing ClearSingleDTC
 *            2015-03-10  vismhe  ESCAN00081708 DTC aging starts too early
 *            2015-03-19  vismhe  ESCAN00079199 Compiler warning: 'FreezeFrameIndex' : unreferenced formal parameter
 *            2015-03-19  vismhe  ESCAN00079200 Compiler warning: 'SRecIndex' : unreferenced formal parameter
 *  09.00.00  2015-03-24  visade  ESCAN00082399 FEAT-1446: Make OBD II Freeze Frame optional in Service 0x1904
 *            2015-03-31  visade  ESCAN00082399 FEAT-1446: Optionally restart DCY on ClearAllDTCs
 *            2015-04-01  vismhe  ESCAN00082199 Compiler warning: Unitialized variable lReturnValue
 *            2015-04-08  visade  ESCAN00082399 FEAT-1446: Add option to displace Pending OBD Freeze Frame
 *            2015-04-09  vismhe  ESCAN00082289 Displacement of wrong DTC
 *            2015-04-09  vismhe  ESCAN00082319 Compiler error: Missing 'else' block
 *            2015-04-20  vismhe  ESCAN00082534 Compiler error or warning:  initializer type incompatible with object type
 *            2015-04-20  vismhe  ESCAN00082346 FEAT-56: Support data callbacks with EventId parameter
 *            2015-04-23  vismhe  ESCAN00082348 FEAT-285: Support healing for events without indicator
 *            2015-04-23  vismhe  ESCAN00082348 FEAT-285: Support debouncing while enable conditions are locked
 *            2015-05-05  visade  ESCAN00082811 Environmental data is missing for confirmed DTC
 *            2015-05-22  vismhe  ESCAN00082348 FEAT-285: Support entry retry
 *            2015-06-03  vismhe  ESCAN00082346 FEAT-56: Support data callbacks without NV storage
 *            2015-06-03  vismhe  ESCAN00082346 FEAT-56: Support JLR specific snapshot trigger
 *            2015-06-09  vismhe  ESCAN00082346 FEAT-56: Support aging at passed trigger for aging target == 0
 *            2015-06-26  vismhe  ESCAN00079889 Status change callback called without change of status
 *            2015-06-29  visade  ESCAN00083654 1-Trip DTC not available in Mode 0x0A
 *            2015-07-02  vismhe  ESCAN00083400 Compiler warning:  narrowing or signed-to-unsigned type conversion found
 *            2015-07-06  vismhe  ESCAN00083803 Combined events age without completed test
 *            2015-07-08  vismhe  ESCAN00082762 Compiler error: E0516: Zero sized structure 'DebounceInfo', E0823: Too long macro expansion 'VStdMemSet'
 *            2015-07-21  vismhe  ESCAN00084110 DID length is not included in snapshot record
 *            2015-07-21  visade  ESCAN00082355 FEAT-397: Support of WWH-OBD in Dcm and Dem [AR4-749] incl. Variant Handling for WWH-OBD use case
 *  10.00.00  2015-08-28  vismhe  ESCAN00084816 Compiler error: struct has no member SnapshotData
 *            2015-08-28  vismhe  ESCAN00084822 Compiler error: struct has no member MaxDebounceValue, missing symbols DEM_ESM_TEST/SET_FDC_MAX
 *            2015-08-28  vismhe  ESCAN00084823 Compiler error: undefined symbol Dem_Mem_SetOdometerMilOn
 *            2015-08-28  vismhe  ESCAN00084837 Compiler error: undefined symbol Dem_Cfg_GlobalSpecialIndicatorStates
 *            2015-08-28  vismhe  ESCAN00084839 Compiler error: undefined symbol Dem_Data_CollectDid
 *            2015-08-31  vismhe  ESCAN00084885 Compiler error: undefined symbol lEventId
 *            2015-09-02  vismhe  ESCAN00084948 Compiler error: syntax error in Dem_J1939Dcm_GetNextDTCwithLampStatus
 *            2015-09-03  vismhe  ESCAN00084954 Compiler error: undefined symbol 'Dem_Esm_TestEventHealed'
 *            2015-09-03  vismhe  ESCAN00084615 ClearDTC for secondary memory deletes wrong DTCs
 *            2015-09-10  vismhe  ESCAN00085138 DTCs not stored on FaultDetectionCounter Threshold
 *            2015-09-11  vismhe  ESCAN00085160 Compiler error: undefined symbol 'lNewEventStatus'
 *            2015-09-11  vismhe  ESCAN00085162 Compiler error: undefined symbol 'Dem_Queue_CalculatePid4E'
 *            2015-09-14  vismhe  ESCAN00084044 Indicator is reported active without requesting DTC
 *            2015-09-14  vismhe  ESCAN00085009 Support non-volatile availability setting
 *            2015-11-10  vismhe  ESCAN00085612 Out of bounds memory write access
 *            2015-11-10  vismhe  ESCAN00085604 Statistic values 'Failed Cycles counter', 'Consecutive Failed Cycles Counter' do not update correctly
 *            2015-11-10  vismhe  ESCAN00085552 Missing Data after DTC re-occurrence
 *            2015-11-20  vismhe  ESCAN00086554 Remove initailaziation check from API Dem_NvM_InitObdPermanentData
 *            2015-11-26  vismhe  ESCAN00086756 Code depends on undefined behavior
 *            2015-11-26  vismhe  ESCAN00086757 Dem calls FiM_DemTriggerOnEventStatus before initialization
 *            2015-11-26  vismhe  ESCAN00086808 Cycles since last failed not updated correctly
 *            2015-11-26  vismhe  ESCAN00086603 Compiler warning: variable "lOldStatus/lNewStatus" was set but never used
 *            2015-11-26  vismhe  ESCAN00086539 Compiler warning: variable 'lSRecId'/'lCfgSRecIndex' was set but never used
 *            2015-11-26  vismhe  ESCAN00086537 Compiler warning: variable 'lSRecId' was set but never used
 *            2015-11-26  visanh  ESCAN00085828 FEAT-1334: Support Time-series Snapshot Data Records
 *            2015-11-26  visanh  ESCAN00085143 FEAT-1527: SafeBSW Step 3
 *            2015-11-26  vismhe  ESCAN00085143 FEAT-1527: SafeBSW Step 3
 *            2015-11-30  vismhe  ESCAN00086885 Dcm cannot lock DTCs (unexpected NRC22)
 *            2015-12-14  vismhe  ESCAN00086336 Aging behavior for AgingTarget==0 is incorrect
 *            2015-12-14  vismhe  ESCAN00086887 Allow Dem_SetWIRStatus during ControlDTCSetting
 *  11.00.00  2016-01-14  vismhe  ESCAN00087477 Cannot report event status
 *            2016-01-14  vismhe  ESCAN00087481 Compiler error: Undefined symbol Dem_Esm_TestEventHealed
 *            2016-01-20  visanh  ESCAN00087429 Memory overwritten when using internal data elements in time series snapshot records
 *            2016-01-20  visanh  ESCAN00087534 Time Series Snapshot Records cannot be used without time based debouncing
 *            2016-02-03  vismhe  ESCAN00087637 FEAT-1472: Implement RoE for VAG
 *            2016-02-29  vismhe  ESCAN00088591 Permanent memory initialization pattern is overwritten
 *            2016-02-29  visanh  ESCAN00087794 FEAT-1688: SafeBSW Step 4
 *            2016-02-29  vismhe  ESCAN00087794 FEAT-1688: SafeBSW Step 4
 *            2016-03-07  vismhe  ESCAN00087325 Incorrect behavior for disablement of numerators and denominators after Clear DTC
 *            2016-03-11  vismhe  ESCAN00087868 FEAT-1605: Support DM5/27/53/54/55 in J1939Dcm
 *            2016-03-15  vismhe  ESCAN00088915 Fault data updated too often
 *            2016-03-23  vismhe  ESCAN00089043 Combined DTC incorrectly sets Pending and Confirmed bit
 *            2016-03-23  vismhe  ESCAN00089057 WarmUp cycle not restarted automatically
 *  11.01.00  2016-05-12  vismhe  ESCAN00087975 OCC7 incorrect after reoccurrence of an aged DTC
 *            2016-05-12  vismhe  ESCAN00089288 Incorrect Maximum FDC Since Last Clear
 *            2016-05-12  vismhe  ESCAN00089446 Monitor results are not processed
 *            2016-05-12  vismhe  ESCAN00089453 Compiler error: l-value specifies const object
 *            2016-05-12  vismhe  ESCAN00089619 Compiler warning: last line of file ends without a newline
 *            2016-07-08  vismhe  ESCAN00090874 Compiler warning: DEM_CFG_SUPPORT_NVM_POLLING undefined
 *            2016-07-08  vismhe  ESCAN00090369 Add support for DM35
 *            2016-07-08  visade  ESCAN00089767 Reset ratio status before call of init monitor function
 *            2016-07-08  visanh  ESCAN00089775 SI30.5 is not set as expected
 *            2016-07-08  vismhe  ESCAN00090431 DTC is not stored during memory overflow
 *            2016-07-08  vismhe  ESCAN00090622 Aging counter incremented without test result
 *            2016-07-08  vismhe  ESCAN00089386 FEAT-1734: SafeBSW Step 5
 *            2016-07-08  vismhe  ESCAN00089435 Incorrect J1939 lamp status in DM01
 *            2016-07-08  vismhe  ESCAN00091087 Wrong response reading WWH-OBD freeze frame
 *            2016-07-08  vismhe  ESCAN00090281 Mode 0x0A DTC which do not trigger the MIL yet after permanent memory activation
 *            2016-08-23  vismhe  ESCAN00091568 Support OperationCycle automatic end
 *            2016-08-24  vismhe  ESCAN00091611 Wrong negative response code for ControlDTCSetting
 *  11.01.01  2016-11-02  vismhe  ESCAN00091966 Suppressed DTC is reported by service 19x03
 *            2016-11-02  vismhe  ESCAN00091967 WIR status bit is reset for aged, but not healed DTC on ECU restart
 *            2016-11-02  vismhe  ESCAN00091970 Pending status bit is reset too early on ECU restart
 *            2016-11-02  vismhe  ESCAN00092085 OBD Freeze Frame erroneously cleared
 *            2016-11-02  vismhe  ESCAN00092086 Runtime check does not prevent out-of-bounds memory access
 *            2016-11-02  vismhe  ESCAN00092317 Combined DTC completed status is incorrect
 *            2016-11-02  vismhe  ESCAN00092330 Compiler warning: function "Dem_Esm_EventSetDisconnectedBit" was declared but never referenced
 *            2016-11-02  vismhe  ESCAN00092328 Compiler warning: function "Dem_Mem_SetFdcTocStatus" was declared but never referenced
 *            2016-11-02  vismhe  ESCAN00092329 Compiler warning: function "Dem_Mem_IndicatorSetEventCountBlinking" was declared but never referenced
 *********************************************************************************************************************/

#if !defined (DEM_TYPES_H)
#define DEM_TYPES_H

/* ********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

                                                   /* AUTOSAR standard types */
/* ------------------------------------------------------------------------- */
#include "Std_Types.h"
/* ------------------------------------------------------------------------- */

                                             /* Global configuration options */
/* ------------------------------------------------------------------------- */
#include "Dem_Cfg.h"
/* ------------------------------------------------------------------------- */

                                                  /* RTE generated Dem types */
/* ------------------------------------------------------------------------- */
#if (DEM_CFG_USE_RTE == STD_ON)
# include "Rte_Dem_Type.h"
#else
# include "Dem_Cdd_Types.h"
#endif
/* ------------------------------------------------------------------------- */

/* ********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#if !defined (DEM_LOCAL)                                                                                                         /* COV_MSR_COMPATIBILITY XF */
/*! Dem private function linkage */
# define DEM_LOCAL                               static
#endif

#if !defined (DEM_LOCAL_INLINE)                                                                                                  /* COV_MSR_COMPATIBILITY XF */
/*! Dem private inline function linkage */
# define DEM_LOCAL_INLINE                        LOCAL_INLINE
#endif

#if (DEM_CFG_SUPPORT_SPLIT_TASKS == STD_ON)                                                                                      /* COV_MSR_UNSUPPORTED XF */
/*! Dem task function linkage */
# define DEM_MAINFUNC_LINKAGE
#else
/*! Dem task function linkage */
# define DEM_MAINFUNC_LINKAGE                    DEM_LOCAL_INLINE
#endif

/* ********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/* ********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
/*!
 * \defgroup  Dem_DTCRequestType
 * \{
 */
/*! This type is used to request a DTC with specific attributes. */
typedef uint8                                    Dem_DTCRequestType;
#define DEM_FIRST_FAILED_DTC                     ((Dem_DTCRequestType)(0x01U))  /*!< first failed DTC requested */
#define DEM_MOST_RECENT_FAILED_DTC               ((Dem_DTCRequestType)(0x02U))  /*!< most recent failed DTC requested */
#define DEM_FIRST_DET_CONFIRMED_DTC              ((Dem_DTCRequestType)(0x03U))  /*!< first detected confirmed DTC requested */
#define DEM_MOST_REC_DET_CONFIRMED_DTC           ((Dem_DTCRequestType)(0x04U))  /*!< most recently detected confirmed DTC requested */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_DTCTranslationFormatType
 * \{
 */
/*! DTC translation format as defined in ISO14229-1 Service 0x19 returned by Dem_DcmGetTranslationType(). */
typedef uint8                                    Dem_DTCTranslationFormatType;
#define DEM_DTC_TRANSLATION_ISO15031_6           ((Dem_DTCTranslationFormatType)(0x00U))  /*!< DTC format ISO 15031-6 / SAE J2012-DA_DTCFormat_00 */
#define DEM_DTC_TRANSLATION_ISO14229_1           ((Dem_DTCTranslationFormatType)(0x01U))  /*!< DTC format ISO 14229-1 */
#define DEM_DTC_TRANSLATION_SAEJ1939_73          ((Dem_DTCTranslationFormatType)(0x02U))  /*!< DTC format SAE J1939-73 */
#define DEM_DTC_TRANSLATION_ISO11992_4           ((Dem_DTCTranslationFormatType)(0x03U))  /*!< DTC format ISO 11992-4 */
#define DEM_DTC_TRANSLATION_J2012DA_FORMAT_04    ((Dem_DTCTranslationFormatType)(0x04U))  /*!< DTC format SAE_J2012-DA_DTCFormat_04 */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_DTCSeverityType
 * \{
 */
/*! DTC Severity information
 *  \details Type definition of DTCSeverityMask / DTCSeverity byte containing the DTC severity and DTC class information
 *           according to ISO 14229-1 Annex D.3.
 *           The upper 3 bits (bit 7-5) are used to represent the DTC severity information.
 *           The lower 5 bits (bit 4-0) are used to represent the DTC class information.
 */
typedef uint8                                    Dem_DTCSeverityType;
#define DEM_SEVERITY_NO_SEVERITY                 ((Dem_DTCSeverityType)(0x00U))  /*!< No severity information available */
#define DEM_SEVERITY_WWHOBD_CLASS_NO_CLASS       ((Dem_DTCSeverityType)(0x01U))  /*!< No class information */
#define DEM_SEVERITY_WWHOBD_CLASS_A              ((Dem_DTCSeverityType)(0x02U))  /*!< WWH-OBD Class A */
#define DEM_SEVERITY_WWHOBD_CLASS_B1             ((Dem_DTCSeverityType)(0x04U))  /*!< WWH-OBD Class B1 */
#define DEM_SEVERITY_WWHOBD_CLASS_B2             ((Dem_DTCSeverityType)(0x08U))  /*!< WWH-OBD Class B2 */
#define DEM_SEVERITY_WWHOBD_CLASS_C              ((Dem_DTCSeverityType)(0x10U))  /*!< WWH-OBD Class C */
#define DEM_SEVERITY_MAINTENANCE_ONLY            ((Dem_DTCSeverityType)(0x20U))  /*!< Maintenance required */
#define DEM_SEVERITY_CHECK_AT_NEXT_HALT          ((Dem_DTCSeverityType)(0x40U))  /*!< Check at next halt */
#define DEM_SEVERITY_CHECK_IMMEDIATELY           ((Dem_DTCSeverityType)(0x80U))  /*!< Check immediately */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_FilterForFDCType
 * \{
 */
/*! DTC filter selector for fault detection counter */
typedef uint8                                    Dem_FilterForFDCType;
#define DEM_FILTER_FOR_FDC_YES                   ((Dem_FilterForFDCType)(0x00U))  /*!< Fault Detection Counter information used */
#define DEM_FILTER_FOR_FDC_NO                    ((Dem_FilterForFDCType)(0x01U))  /*!< Fault Detection Counter information not used */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_FilterWithSeverityType
 * \{
 */
/*! DTC filter selector for DTC severity */
typedef uint8                                    Dem_FilterWithSeverityType;
#define DEM_FILTER_WITH_SEVERITY_YES             ((Dem_FilterWithSeverityType)(0x00U))  /*!< Severity information used */
#define DEM_FILTER_WITH_SEVERITY_NO              ((Dem_FilterWithSeverityType)(0x01U))  /*!< Severity information not used */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_ReturnSetFilterType
 * \{
 */
/*! Used to return the status of (re-)setting a specific filter. */
typedef uint8                                    Dem_ReturnSetFilterType;
#define DEM_FILTER_ACCEPTED                      ((Dem_ReturnSetFilterType)(0x00U))  /*!< Filter was accepted */
#define DEM_WRONG_FILTER                         ((Dem_ReturnSetFilterType)(0x01U))  /*!< Wrong filter selected */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_ReturnGetStatusOfDTCType
 * \{
 */
/*! Used to return the status of Dem_DcmGetStatusOfDTC. */
typedef uint8                                    Dem_ReturnGetStatusOfDTCType;
#define DEM_STATUS_OK                            ((Dem_ReturnGetStatusOfDTCType)(0x00U))  /*!< Status of DTC is OK */
#define DEM_STATUS_WRONG_DTC                     ((Dem_ReturnGetStatusOfDTCType)(0x01U))  /*!< DTC value not existing (in this format) */
#define DEM_STATUS_WRONG_DTCORIGIN               ((Dem_ReturnGetStatusOfDTCType)(0x02U))  /*!< Wrong DTC origin */
#define DEM_STATUS_FAILED                        ((Dem_ReturnGetStatusOfDTCType)(0x03U))  /*!< DTC failed */
#define DEM_STATUS_PENDING                       ((Dem_ReturnGetStatusOfDTCType)(0x04U))  /*!< The requested value is calculated asynchronously and currently not available. The caller can retry later.  */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_ReturnGetNextFilteredElementType
 * \{
 */
/*! Used to return the status of Dem_DcmGetNextFiltered<X> and Dem_J1939DcmGetNextFiltered<X>. */
typedef uint8                                    Dem_ReturnGetNextFilteredElementType;
#define DEM_FILTERED_OK                          ((Dem_ReturnGetNextFilteredElementType)(0x00U))  /*!< Returned next filtered element */
#define DEM_FILTERED_NO_MATCHING_ELEMENT         ((Dem_ReturnGetNextFilteredElementType)(0x01U))  /*!< No further element (matching the filter criteria) found */
#define DEM_FILTERED_PENDING                     ((Dem_ReturnGetNextFilteredElementType)(0x02U))  /*!< The requested value is calculated asynchronously and currently not available. The caller can retry later. */
#define DEM_FILTERED_BUFFER_TOO_SMALL            ((Dem_ReturnGetNextFilteredElementType)(0x03U))  /*!< Buffer in the BufSize parameter is not large enough  */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_ReturnGetNumberOfFilteredDTCType
 * \{
 */
/*! Used to return the status of Dem_DcmGetNumberOfFilteredDTC. */
typedef uint8                                    Dem_ReturnGetNumberOfFilteredDTCType;
#define DEM_NUMBER_OK                            ((Dem_ReturnGetNumberOfFilteredDTCType)(0x00U))  /*!< Getting number of filtered DTCs was successful. */
#define DEM_NUMBER_FAILED                        ((Dem_ReturnGetNumberOfFilteredDTCType)(0x01U))  /*!< Getting number of filtered DTCs failed. */
#define DEM_NUMBER_PENDING                       ((Dem_ReturnGetNumberOfFilteredDTCType)(0x02U))  /*!< The requested value is calculated asynchronously and currently not available. The caller can retry later. */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_ReturnClearDTCType
 * \{
 */
/*! Used to return the status of Dem_<*>ClearDTC. */
typedef uint8                                    Dem_ReturnClearDTCType;
#define DEM_CLEAR_OK                             ((Dem_ReturnClearDTCType)(0x00U))  /*!< DTC successfully cleared. */
#define DEM_CLEAR_WRONG_DTC                      ((Dem_ReturnClearDTCType)(0x01U))  /*!< DTC value not existing (in this format) */
#define DEM_CLEAR_WRONG_DTCORIGIN                ((Dem_ReturnClearDTCType)(0x02U))  /*!< Wrong DTC origin. */
#define DEM_CLEAR_FAILED                         ((Dem_ReturnClearDTCType)(0x03U))  /*!< DTC clearing failed. */
#define DEM_CLEAR_PENDING                        ((Dem_ReturnClearDTCType)(0x04U))  /*!< The DTC clearing is performed asynchronously and still pending. The caller can retry later */
#define DEM_CLEAR_BUSY                           ((Dem_ReturnClearDTCType)(0x05U))  /*!< DTC not cleared, as another clearing process is in progress. The caller can retry later. */
#define DEM_CLEAR_MEMORY_ERROR                   ((Dem_ReturnClearDTCType)(0x06U))  /*!< An error occurred during erasing a non-volatile memory location. */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_ReturnControlDTCSettingType
 * \{
 */
/*! Used to return the status of Dem_DcmDisableDTCSetting and Dem_DcmEnableDTCSetting. */
typedef uint8                                    Dem_ReturnControlDTCSettingType;
#define DEM_CONTROL_DTC_SETTING_OK               ((Dem_ReturnControlDTCSettingType)(0x00U))  /*!< DTC setting control successful. */
#define DEM_CONTROL_DTC_SETTING_N_OK             ((Dem_ReturnControlDTCSettingType)(0x01U))  /*!< DTC setting control not successful. */
#define DEM_CONTROL_DTC_WRONG_DTCGROUP           ((Dem_ReturnControlDTCSettingType)(0x02U))  /*!< DTC setting control not successful because group of DTC was wrong */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_ReturnDisableDTCRecordUpdateType
 * \{
 */
/*! Used to return the status of Dem_DcmDisableDTCRecordUpdate. */
typedef uint8                                    Dem_ReturnDisableDTCRecordUpdateType;
#define DEM_DISABLE_DTCRECUP_OK                  ((Dem_ReturnDisableDTCRecordUpdateType)(0x00U))  /*!< Event memory update of DTC successfully disabled */
#define DEM_DISABLE_DTCRECUP_WRONG_DTC           ((Dem_ReturnDisableDTCRecordUpdateType)(0x01U))  /*!< DTC value not existing (in UDS format) */
#define DEM_DISABLE_DTCRECUP_WRONG_DTCORIGIN     ((Dem_ReturnDisableDTCRecordUpdateType)(0x02U))  /*!< Wrong DTC origin */
#define DEM_DISABLE_DTCRECUP_PENDING             ((Dem_ReturnDisableDTCRecordUpdateType)(0x03U))  /*!< Disabling is performed asynchronously and still pending. The caller can retry later */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_ReturnGetExtendedDataRecordByDTCType
 * \{
 */
/*! Used to return the status of Dem_DcmGetExtendedDataRecordByDTC. */
typedef uint8                                    Dem_ReturnGetExtendedDataRecordByDTCType;
#define DEM_RECORD_OK                            ((Dem_ReturnGetExtendedDataRecordByDTCType)(0x00U))  /*!< Extended data record successfully returned */
#define DEM_RECORD_WRONG_DTC                     ((Dem_ReturnGetExtendedDataRecordByDTCType)(0x01U))  /*!< DTC value not existing (in UDS format) */
#define DEM_RECORD_WRONG_DTCORIGIN               ((Dem_ReturnGetExtendedDataRecordByDTCType)(0x02U))  /*!< Origin wrong */
#define DEM_RECORD_WRONG_NUMBER                  ((Dem_ReturnGetExtendedDataRecordByDTCType)(0x03U))  /*!< Record number is not supported by configuration and therefore invalid */
#define DEM_RECORD_WRONG_BUFFERSIZE              ((Dem_ReturnGetExtendedDataRecordByDTCType)(0x04U))  /*!< Provided buffer to small */
#define DEM_RECORD_PENDING                       ((Dem_ReturnGetExtendedDataRecordByDTCType)(0x05U))  /*!< The requested value is calculated asynchronously and currently not available. The caller can retry later. */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_ReturnGetDTCByOccurrenceTimeType
 * \{
 */
/*! Used to return the status of Dem_DtcGetDTCByOccurrenceTime. */
typedef uint8                                    Dem_ReturnGetDTCByOccurrenceTimeType;
#define DEM_OCCURR_OK                            ((Dem_ReturnGetDTCByOccurrenceTimeType)(0x00U))  /*!< matching DTC available */
#define DEM_OCCURR_NOT_AVAILABLE                 ((Dem_ReturnGetDTCByOccurrenceTimeType)(0x01U))  /*!< no DTC is matching the requested occurrence time */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_ReturnGetFreezeFrameDataByDTCType
 * \{
 */
/*! Used to return the status of Dem_DcmGetFreezeFrameDataByDTC. */
typedef uint8                                    Dem_ReturnGetFreezeFrameDataByDTCType;
#define DEM_GET_FFDATABYDTC_OK                   ((Dem_ReturnGetFreezeFrameDataByDTCType)(0x00U))  /*!< Freeze frame data successfully returned. */
#define DEM_GET_FFDATABYDTC_WRONG_DTC            ((Dem_ReturnGetFreezeFrameDataByDTCType)(0x01U))  /*!< DTC value not existing (in UDS format) */
#define DEM_GET_FFDATABYDTC_WRONG_DTCORIGIN      ((Dem_ReturnGetFreezeFrameDataByDTCType)(0x02U))  /*!< Wrong DTC origin */
#define DEM_GET_FFDATABYDTC_WRONG_RECORDNUMBER   ((Dem_ReturnGetFreezeFrameDataByDTCType)(0x03U))  /*!< Record number is not supported by configuration and therefore invalid */
#define DEM_GET_FFDATABYDTC_WRONG_BUFFERSIZE     ((Dem_ReturnGetFreezeFrameDataByDTCType)(0x04U))  /*!< provided buffer size to small */
#define DEM_GET_FFDATABYDTC_PENDING              ((Dem_ReturnGetFreezeFrameDataByDTCType)(0x05U))  /*!< The requested value is calculated asynchronously and currently not available. The caller can retry later. */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_ReturnGetSizeOfDataByDTCType
 * \{
 */
/*! Used to return the status of Dem_DcmGetSizeOfFreezeFrameByDTC and Dem_DcmGetSizeOfExtendedDataRecordByDTC. */
typedef uint8                                    Dem_ReturnGetSizeOfDataByDTCType;
#define DEM_GETSIZEBYDTC_OK                      ((Dem_ReturnGetSizeOfDataByDTCType)(0x00U))  /*!< Size successfully returned */
#define DEM_GETSIZEBYDTC_WRONG_DTC               ((Dem_ReturnGetSizeOfDataByDTCType)(0x01U))  /*!< DTC value not existing (in UDS format) */
#define DEM_GETSIZEBYDTC_WRONG_DTCORIGIN         ((Dem_ReturnGetSizeOfDataByDTCType)(0x02U))  /*!< Wrong DTC origin */
#define DEM_GETSIZEBYDTC_WRONG_RECNUM            ((Dem_ReturnGetSizeOfDataByDTCType)(0x03U))  /*!< Record number is not supported by configuration and therefore invalid */
#define DEM_GETSIZEBYDTC_PENDING                 ((Dem_ReturnGetSizeOfDataByDTCType)(0x04U))  /*!< The requested value is calculated asynchronously and currently not available. The caller can retry later. */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_ReturnGetSeverityOfDTCType
 * \{
 */
/*! Used to return the status of Dem_DcmGetSeverityOfDTC. */
typedef uint8                                    Dem_ReturnGetSeverityOfDTCType;
#define DEM_GET_SEVERITYOFDTC_OK                 ((Dem_ReturnGetSeverityOfDTCType)(0x00U))  /*!< Severity successfully returned. */
#define DEM_GET_SEVERITYOFDTC_WRONG_DTC          ((Dem_ReturnGetSeverityOfDTCType)(0x01U))  /*!< DTC value not existing (in UDS format) */
#define DEM_GET_SEVERITYOFDTC_NOSEVERITY         ((Dem_ReturnGetSeverityOfDTCType)(0x02U))  /*!< Severity information is not available */
#define DEM_GET_SEVERITYOFDTC_PENDING            ((Dem_ReturnGetSeverityOfDTCType)(0x03U))  /*!< The requested value is calculated asynchronously and currently not available. The caller can retry later. */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_ReturnGetFunctionalUnitOfDTCType
 * \{
 */
/*! Used to return the status of Dem_DcmGetFunctionalUnitOfDTC. */
typedef uint8                                    Dem_ReturnGetFunctionalUnitOfDTCType;
#define DEM_GET_FUNCTIONALUNITOFDTC_OK           ((Dem_ReturnGetFunctionalUnitOfDTCType)(0x00U))  /*!< Functional unit successfully returned. */
#define DEM_GET_FUNCTIONALUNITOFDTC_WRONG_DTC    ((Dem_ReturnGetFunctionalUnitOfDTCType)(0x01U))  /*!< DTC value not existing (in UDS format) */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_J1939DcmSetClearFilterType
 * \{
 */
/*! The type to distinguish which DTCs gets cleared. */
typedef uint8                                    Dem_J1939DcmSetClearFilterType;
#define DEM_J1939DTC_CLEAR_ALL                   ((Dem_J1939DcmSetClearFilterType)(0x00U))  /*!< Clear active DTCs */
#define DEM_J1939DTC_CLEAR_PREVIOUSLY_ACTIVE     ((Dem_J1939DcmSetClearFilterType)(0x01U))  /*!< Clear previously active DTCs */
#define DEM_J1939DTC_CLEAR_ALL_AND_PREVIOUSLY_ACTIVE  ((Dem_J1939DcmSetClearFilterType)(0x02U))  /*!< Clear active and previously active DTCs */
/*!
 * \}
 */

/*! J1939 indicator lamp status
 *  bits 14-15 : Malfunction Indicator Lamp Status
 *  bits 12-13 : Red Stop Lamp Status
 *  bits 10-11 : Amber Warning Lamp Status
 *  bits  8- 9 : Protect Lamp Status
 *  bits  6- 7 : Malfunction Indicator Lamp Flash Status
 *  bits  4- 5 : Red Stop Lamp Flash Status
 *  bits  2- 3 : Amber Warning Lamp Flash Status
 *  bits  0- 1 : Protect Lamp Flash Status
 */
typedef uint16                                   Dem_J1939DcmLampStatusType;

/*!
 * \defgroup  Dem_J1939DcmSetFreezeFrameFilterType
 * \{
 */
/*! The type to select the freeze frame filter. */
typedef uint8                                    Dem_J1939DcmSetFreezeFrameFilterType;
#define DEM_J1939DCM_FREEZEFRAME                  ((Dem_J1939DcmSetFreezeFrameFilterType)(0x00U))  /*!< Freeze Frame (DM04) */
#define DEM_J1939DCM_EXPANDED_FREEZEFRAME         ((Dem_J1939DcmSetFreezeFrameFilterType)(0x01U))  /*!< Expanded Freeze Frame (DM25) */
#define DEM_J1939DCM_SPNS_IN_EXPANDED_FREEZEFRAME ((Dem_J1939DcmSetFreezeFrameFilterType)(0x02U))  /*!< SPNs in Expanded Freeze Frame (DM24) */
/*!
 * \}
 */

/*!
 * \defgroup  Dem_J1939DcmDTCStatusFilterType
 * \{
 */
/*! The type to distinguish which DTCs should be filtered. */
typedef uint8                                    Dem_J1939DcmDTCStatusFilterType;
#define DEM_J1939DTC_ACTIVE                      ((Dem_J1939DcmDTCStatusFilterType)(0x00U))  /*!< active DTCs */
#define DEM_J1939DTC_PREVIOUSLY_ACTIVE           ((Dem_J1939DcmDTCStatusFilterType)(0x01U))  /*!< previously active DTCs */
#define DEM_J1939DTC_PENDING                     ((Dem_J1939DcmDTCStatusFilterType)(0x02U))  /*!< pending DTCs */
#define DEM_J1939DTC_PERMANENT                   ((Dem_J1939DcmDTCStatusFilterType)(0x03U))  /*!< permanent DTCs */
#define DEM_J1939DTC_CURRENTLY_ACTIVE            ((Dem_J1939DcmDTCStatusFilterType)(0x04U))  /*!< currently failed DTCs */
/*!
 * \}
 */

/*! This structure represents all data elements of the DM05 message. The encoding is according to SAE J1939-73 */
typedef struct Dem_J1939DcmDiagnosticReadiness1Type_tag
{
  uint8 ActiveTroubleCodes;                          /*!< Number of active DTCs */
  uint8 PreviouslyActiveDiagnosticTroubleCodes;      /*!< Number of previously active DTCs */
  uint8 OBDCompliance;                               /*!< OBD Compliance */
  uint8 ContinuouslyMonitoredSystemsSupport_Status;  /*!< Identifies the continuously monitored system support and status */
  uint16 NonContinuouslyMonitoredSystemsSupport;     /*!< Identifies the non-continuously monitored systems support */
  uint16 NonContinuouslyMonitoredSystemsStatus;      /*!< Identifies the non-continuously monitored systems status */
} Dem_J1939DcmDiagnosticReadiness1Type;                                                                                          /* PRQA S 0779 */ /* MD_DEM_5.1_API */

/*! This structure represents all data elements of the DM21 message. The encoding is according to SAE J1939-73 */
typedef struct Dem_J1939DcmDiagnosticReadiness2Type_tag
{
  uint16 DistanceTraveledWhileMILisActivated;        /*!< The kilometers accumulated while the MIL is activated */
  uint16 DistanceSinceDTCsCleared;                   /*!< Distance accumulated since emission related DTCs were cleared */
  uint16 MinutesRunbyEngineWhileMILisActivated;      /*!< Accumulated count (in minutes) while the MIL is activated (not off) */
  uint16 TimeSinceDiagnosticTroubleCodesCleared;     /*!< Engine run-time accumulated since emission related DTCs were cleared */
} Dem_J1939DcmDiagnosticReadiness2Type;                                                                                          /* PRQA S 0779 */ /* MD_DEM_5.1_API */

/*! This structure represents all data elements of the DM26 message. The encoding is according to SAE J1939-73 */
typedef struct Dem_J1939DcmDiagnosticReadiness3Type_tag
{
  uint16 TimeSinceEngineStart;                       /*!< Time since key-on that the engine has been running. */
  uint8 NumberofWarmupsSinceDTCsCleared;             /*!< Number of OBD warm-up cycles since all DTCs were cleared */
  uint8 ContinuouslyMonitoredSystemsEnableCompletedStatus; /*!<  Identifies the continuously monitored system enable/completed support and status. */
  uint16 NonContinuouslyMonitoredSystemsEnableStatus;  /*!< Enable status of non-continuous monitors this monitoring cycle */
  uint16 NonContinuouslyMonitoredSystems;            /*!< Completion status of non-continuous monitors this monitoring cycle */
} Dem_J1939DcmDiagnosticReadiness3Type;                                                                                          /* PRQA S 0779 */ /* MD_DEM_5.1_API */

/*! Function pointer type for clear event allowed callbacks */
typedef P2FUNC(Std_ReturnType, DEM_APPL_CODE,    Dem_ClearEventAllowedFPtrType)(
                                                   P2VAR(boolean, AUTOMATIC, DEM_APPL_DATA) /* [out] isAllowed */
                                                 );

/*! Function pointer type for get fault detection counter callbacks */
typedef P2FUNC(Std_ReturnType, DEM_APPL_CODE,    Dem_GetFDCFPtrType)(
                                                   P2VAR(sint8, AUTOMATIC, DEM_APPL_DATA) /* [out] FDC */
                                                 );

/*! Function pointer type for event status changed notifications */
typedef P2FUNC(Std_ReturnType, DEM_APPL_CODE,    Dem_EventStatusChangedFPtrType)(
                                                   Dem_EventStatusExtendedType /* [in] oldStatus */,
                                                   Dem_EventStatusExtendedType /* [in] newStatus */
                                                 );

/*! Function pointer type for DTC status changed notifications */
typedef P2FUNC(Std_ReturnType, DEM_APPL_CODE,    Dem_DtcStatusChangedFPtrType)(
                                                   uint32 /* [in] DTC */,
                                                   Dem_DTCStatusMaskType /* [in] oldStatus */,
                                                   Dem_DTCStatusMaskType /* [in] newStatus */
                                                 );

/*! Function pointer type for event data changed notifications */
typedef P2FUNC(Std_ReturnType, DEM_APPL_CODE,    Dem_EventDataChangedFPtrType)(
                                                   void
                                                 );

/*! Function pointer type for global event status changed notifications */
typedef P2FUNC(Std_ReturnType, DEM_APPL_CODE,    Dem_GlobalStatusChangedFPtrType)(
                                                   Dem_EventIdType /* [in] EventId*/,
                                                   Dem_EventStatusExtendedType /* [in] oldStatus */,
                                                   Dem_EventStatusExtendedType /* [in] newStatus */
                                                 );

/*! Function pointer type for global event data changed notifications */
typedef P2FUNC(Std_ReturnType, DEM_APPL_CODE,    Dem_GlobalDataChangedFPtrType)(
                                                   Dem_EventIdType /* [in] EventId*/
                                                 );

/*! Function pointer type for init monitor for event notifications */
typedef P2FUNC(Std_ReturnType, DEM_APPL_CODE,    Dem_InitMonitorForEventFPtrType)(
                                                   Dem_InitMonitorReasonType /* [in] initReason */
                                                 );

/*! Function pointer type for init monitor for function notifications */
typedef P2FUNC(Std_ReturnType, DEM_APPL_CODE,    Dem_InitMonitorForFuncFPtrType)(
                                                   void
                                                 );

/*! Function pointer type for control DTC setting changed notifications */
typedef P2FUNC(Std_ReturnType, DEM_APPL_CODE,    Dem_ControlDtcSettingChangedFPtrType)(
                                                   boolean
                                                 );

/*! Function pointer type for C/S read data callbacks */
typedef P2FUNC(Std_ReturnType, DEM_APPL_CODE,    Dem_ReadDataStandardFPtrType)(
                                                   P2VAR(uint8, DEM_NVM_DATA, AUTOMATIC) /* [out] data */
                                                 );

/*! Function pointer type for C/S read data callbacks with additional event argument */
typedef P2FUNC(Std_ReturnType, DEM_APPL_CODE,    Dem_ReadDataExtendedFPtrType)(
                                                   Dem_EventIdType /* [in] EventId*/,
                                                   P2VAR(uint8, DEM_NVM_DATA, AUTOMATIC) /* [out] data */
                                                 );

/*! Common function pointer type for read data callbacks. Must be casted to the correct type before it can be called */
typedef P2FUNC(Std_ReturnType, DEM_APPL_CODE,    Dem_ReadDataFPtrType)(void);

/*! Data pointer into Dem defined RAM */
typedef P2VAR(uint8, TYPEDEF, DEM_VAR_NOINIT)    Dem_DataPtrType;
/*! Data pointer into Nv backed RAM */
typedef P2VAR(uint8, TYPEDEF, DEM_NVM_DATA)      Dem_NvDataPtrType;
/*! Data pointer into RAM provided by Dcm */
typedef P2VAR(uint8, TYPEDEF, DEM_DCM_DATA)      Dem_DcmDataPtrType;
/*! Common data pointer into RAM - must be able to point to all used RAM locations */
typedef P2VAR(uint8, TYPEDEF, DEM_SHARED_DATA)   Dem_SharedDataPtrType;

/*! Common read-only data pointer Dem defined RAM */
typedef P2CONST(uint8, TYPEDEF, DEM_CONST)       Dem_ConstDataPtrType;
/*! Common read-only data pointer into RAM - must be able to point to all used RAM locations */
typedef P2CONST(uint8, TYPEDEF, DEM_SHARED_DATA) Dem_ConstSharedDataPtrType;

/* ********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/* ********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#endif  /* DEM_TYPES_H */

/* ********************************************************************************************************************
 *  END OF FILE: Dem_Types.h
 *********************************************************************************************************************/
