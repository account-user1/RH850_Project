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
 *         File:  Dem.h
 *      Project:  MICROSAR Diagnostic Event Manager (Dem)
 *       Module:  -
 *    Generator:  -
 *
 *  Description:  Static public API declarations of Dem.
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

#if !defined (DEM_H)
#define DEM_H

/* ********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

                                     /* Dem public types, defined statically */
/* ------------------------------------------------------------------------- */
#include "Dem_Types.h"
/* ------------------------------------------------------------------------- */

                                                       /* Configuration data */
/* ------------------------------------------------------------------------- */
#include "Dem_Lcfg.h"
#include "Dem_PBcfg.h"
/* ------------------------------------------------------------------------- */

                                                       /* Subcomponent types */
/* ------------------------------------------------------------------------- */
#include "Dem_Cfg_Types.h"
/* ------------------------------------------------------------------------- */

                                          /* Static configuration validation */
/* ------------------------------------------------------------------------- */
#include "Dem_Validation.h"
/* ------------------------------------------------------------------------- */

/* ********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

                                                      /* Version information */
/* ------------------------------------------------------------------------- */

/* vendor and module identification - decimal encoding */
#define DEM_VENDOR_ID                            (30U)
#define DEM_MODULE_ID                            (54U)
#define DEM_INSTANCE_ID                          (0U)

/* AUTOSAR Software Specification Version Information - decimal encoding */
#define DEM_AR_RELEASE_MAJOR_VERSION             (4U)
#define DEM_AR_RELEASE_MINOR_VERSION             (1U)
#define DEM_AR_RELEASE_REVISION_VERSION          (2U)

/* Component Version Information - decimal encoding */
#define DEM_SW_MAJOR_VERSION                     (11U)
#define DEM_SW_MINOR_VERSION                     (1U)
#define DEM_SW_PATCH_VERSION                     (1U)

                                                                  /* API Ids */
/* ------------------------------------------------------------------------- */
#define DEM_GETVERSIONINFO_APIID                          (0x00U)              /*< Service ID: Dem_GetVersionInfo() */
#define DEM_PREINIT_APIID                                 (0x01U)              /*< Service ID: Dem_PreInit() */
#define DEM_INIT_APIID                                    (0x02U)              /*< Service ID: Dem_Init() */
#define DEM_SHUTDOWN_APIID                                (0x03U)              /*< Service ID: Dem_Shutdown() */
#define DEM_SETEVENTSTATUS_APIID                          (0x04U)              /*< Service ID: Dem_SetEventStatus() */
#define DEM_RESETEVENTSTATUS_APIID                        (0x05U)              /*< Service ID: Dem_ResetEventStatus() */
#define DEM_PRESTOREFREEZEFRAME_APIID                     (0x06U)              /*< Service ID: Dem_PrestoreFreezeFrame() */
#define DEM_CLEARPRESTOREDFREEZEFRAME_APIID               (0x07U)              /*< Service ID: Dem_ClearPrestoredFreezeFrame() */
#define DEM_SETOPERATIONCYCLESTATE_APIID                  (0x08U)              /*< Service ID: Dem_SetOperationCycleState() */
#define DEM_RESETEVENTDEBOUNCESTATUS_APIID                (0x09U)              /*< Service ID: Dem_ResetEventDebounceStatus() */
#define DEM_GETEVENTSTATUS_APIID                          (0x0aU)              /*< Service ID: Dem_GetEventStatus() */
#define DEM_GETEVENTFAILED_APIID                          (0x0bU)              /*< Service ID: Dem_GetEventFailed() */
#define DEM_GETEVENTTESTED_APIID                          (0x0cU)              /*< Service ID: Dem_GetEventTested() */
#define DEM_GETDTCOFEVENT_APIID                           (0x0dU)              /*< Service ID: Dem_GetDTCOfEvent() */
#define DEM_DCMGETSEVERITYOFDTC_APIID                     (0x0eU)              /*< Service ID: Dem_DcmGetSeverityOfDTC() */
#define DEM_REPORTERRORSTATUS_APIID                       (0x0fU)              /*< Service ID: Dem_ReportErrorStatus() */
#define DEM_SETAGINGCYCLESTATE_APIID                      (0x11U)              /*< Service ID: Dem_SetAgingCycleState() */
#define DEM_SETAGINGCYCLECOUNTERVALUE_APIID               (0x12U)              /*< Service ID: Dem_SetAgingCounterValue() */
#define DEM_DCMSETDTCFILTER_APIID                         (0x13U)              /*< Service ID: Dem_DcmSetDTCFilter() */
#define DEM_DCMGETSTATUSOFDTC_APIID                       (0x15U)              /*< Service ID: Dem_DcmGetStatusOfDTC() */
#define DEM_DCMGETDTCSTATUSAVAILABILITYMASK_APIID         (0x16U)              /*< Service ID: Dem_DcmGetDTCStatusAvailabilityMask() */
#define DEM_DCMGETNUMBEROFFILTEREDDTC_APIID               (0x17U)              /*< Service ID: Dem_DcmGetNumberOfFilteredDTC() */
#define DEM_DCMGETNEXTFILTEREDDTC_APIID                   (0x18U)              /*< Service ID: Dem_DcmGetNextFilteredDTC() */
#define DEM_DCMGETDTCBYOCCURRENCETIME_APIID               (0x19U)              /*< Service ID: Dem_DcmGetDTCByOccurrenceTime() */
#define DEM_DCMDISABLEDTCRECORDUPDATE_APIID               (0x1aU)              /*< Service ID: Dem_DcmDisableDTCRecordUpdate() */
#define DEM_DCMENABLEDTCRECORDUPDATE_APIID                (0x1bU)              /*< Service ID: Dem_DcmEnableDTCRecordUpdate() */
#define DEM_DCMGETOBDFREEZEFRAMEDATA_APIID                (0x1cU)              /*< Service ID: Dem_DcmGetOBDFreezeFrameData() */
#define DEM_DCMGETFREEZEFRAMEDATABYDTC_APIID              (0x1dU)              /*< Service ID: Dem_DcmGetFreezeFrameDataByDTC() */
#define DEM_DCMGETSIZEOFFREEZEFRAMEBYDTC_APIID            (0x1fU)              /*< Service ID: Dem_DcmGetSizeOfFreezeFrameByDTC() */
#define DEM_DCMGETEXTENDEDDATARECORDBYDTC_APIID           (0x20U)              /*< Service ID: Dem_DcmGetExtendedDataRecordByDTC() */
#define DEM_DCMGETSIZEOFEXTENDEDDATARECORDBYDTC_APIID     (0x21U)              /*< Service ID: Dem_DcmGetSizeOfExtendedDataRecordByDTC() */
#define DEM_DCMCLEARDTC_APIID                             (0x22U)              /*< Service ID: Dem_DcmClearDTC() */
#define DEM_CLEARDTC_APIID                                (0x23U)              /*< Service ID: Dem_ClearDTC() */
#define DEM_DCMDISABLEDTCSETTING_APIID                    (0x24U)              /*< Service ID: Dem_DcmDisableDTCSetting() */
#define DEM_DCMENABLEDTCSETTING_APIID                     (0x25U)              /*< Service ID: Dem_DcmEnableDTCSetting() */
#define DEM_GETINDICATORSTATUS_APIID                      (0x29U)              /*< Service ID: Dem_GetIndicatorStatus() */
#define DEM_DCMCANCELOPERATION_APIID                      (0x2aU)              /*< Service ID: Dem_DcmCancelOperation() */
#define DEM_GETEVENTEXTENDEDDATARECORD_APIID              (0x30U)              /*< Service ID: Dem_GetEventExtendedDataRecord() */
#define DEM_GETEVENTFREEZEFRAMEDATA_APIID                 (0x31U)              /*< Service ID: Dem_GetEventFreezeFrameData() */
#define DEM_GETEVENTMEMORYOVERFLOW_APIID                  (0x32U)              /*< Service ID: Dem_GetEventMemoryOverflow() */
#define DEM_SETDTCSUPPRESSION_APIID                       (0x33U)              /*< Service ID: Dem_SetDTCSuppression() */
#define DEM_DCMGETFUNCTIONALUNITOFDTC_APIID               (0x34U)              /*< Service ID: Dem_DcmGetFunctionalUnitOfDTC() */
#define DEM_GETNUMBEROFEVENTMEMORYENTRIES_APIID           (0x35U)              /*< Service ID: Dem_GetNumberOfEventMemoryEntries() */
#define DEM_SETEVENTSUPPRESSION_APIID                     (0x36U)              /*< Service ID: Dem_SetEventSuppression() */
#define DEM_SETEVENTAVAILABLE_APIID                       (0x37U)              /*< Service ID: Dem_SetEventAvailable() */
#define DEM_SETSTORAGECONDITION_APIID                     (0x38U)              /*< Service ID: Dem_SetStorageCondition() */
#define DEM_SETENABLECONDITION_APIID                      (0x39U)              /*< Service ID: Dem_SetEnableCondition() */
#define DEM_DCMGETNEXTFILTEREDRECORD_APIID                (0x3aU)              /*< Service ID: Dem_DcmGetNextFilteredRecord() */
#define DEM_DCMGETNEXTFILTEREDDTCANDFDC_APIID             (0x3bU)              /*< Service ID: Dem_DcmGetNextFilteredDTCAndFDC() */
#define DEM_DCMGETTRANSLATIONTYPE_APIID                   (0x3cU)              /*< Service ID: Dem_DcmGetTranslationType() */
#define DEM_DCMGETNEXTFILTEREDDTCANDSEVERITY_APIID        (0x3dU)              /*< Service ID: Dem_DcmGetNextFilteredDTCAndSeverity() */
#define DEM_GETFAULTDETECTIONCOUNTER_APIID                (0x3eU)              /*< Service ID: Dem_GetFaultDetectionCounter() */
#define DEM_DCMSETFREEZEFRAMERECORDFILTER_APIID           (0x3fU)              /*< Service ID: Dem_DcmSetFreezeFrameRecordFilter() */
#define DEM_DLTGETALLEXTENDEDDATARECORDS_APIID            (0x40U)              /*< Service ID: Dem_DltGetAllExtendedDataRecords() */
#define DEM_DLTGETMOSTRECENTFREEZEFRAMERECORDDATA_APIID   (0x41U)              /*< Service ID: Dem_DltGetMostRecentFreezeFrameRecordData() */
#define DEM_SETEVENTDISABLED_APIID                        (0x51U)              /*< Service ID: Dem_SetEventDisabled() */
#define DEM_DCMREADDATAOFOBDFREEZEFRAME_APIID             (0x52U)              /*< Service ID: Dem_DcmReadDataOfOBDFreezeFrame() */
#define DEM_DCMGETDTCOFOBDFREEZEFRAME_APIID               (0x53U)              /*< Service ID: Dem_DcmGetDTCOfOBDFreezeFrame() */
#define DEM_MAINFUNCTION_APIID                            (0x55U)              /*< Service ID: Dem_MainFunction() */
#define DEM_DCMREADDATAOFPID01_APIID                      (0x61U)              /*< Service ID: Dem_DcmReadDataOfPID01() */
#define DEM_DCMREADDATAOFPID1C_APIID                      (0x63U)              /*< Service ID: Dem_DcmReadDataOfPID1C() */
#define DEM_DCMREADDATAOFPID21_APIID                      (0x64U)              /*< Service ID: Dem_DcmReadDataOfPID21() */
#define DEM_DCMREADDATAOFPID30_APIID                      (0x65U)              /*< Service ID: Dem_DcmReadDataOfPID30() */
#define DEM_DCMREADDATAOFPID31_APIID                      (0x66U)              /*< Service ID: Dem_DcmReadDataOfPID31() */
#define DEM_DCMREADDATAOFPID41_APIID                      (0x67U)              /*< Service ID: Dem_DcmReadDataOfPID41() */
#define DEM_DCMREADDATAOFPID4D_APIID                      (0x68U)              /*< Service ID: Dem_DcmReadDataOfPID4D() */
#define DEM_DCMREADDATAOFPID4E_APIID                      (0x69U)              /*< Service ID: Dem_DcmReadDataOfPID4E() */
#define DEM_DCMGETINFOTYPEVALUE08_APIID                   (0x6bU)              /*< Service ID: Dem_DcmGetInfoTypeValue08() */
#define DEM_DCMGETINFOTYPEVALUE0B_APIID                   (0x6cU)              /*< Service ID: Dem_DcmGetInfoTypeValue0B() */
#define DEM_REPIUMPRDENLOCK_APIID                         (0x71U)              /*< Service ID: Dem_RepIUMPRDenLock() */
#define DEM_REPIUMPRDENRELEASE_APIID                      (0x72U)              /*< Service ID: Dem_RepIUMPRDenRelease() */
#define DEM_REPIUMPRFAULTDETECT_APIID                     (0x73U)              /*< Service ID: Dem_RepIUMPRFaultDetect() */
#define DEM_SETPTOSTATUS_APIID                            (0x79U)              /*< Service ID: Dem_SetPTOStatus() */
#define DEM_SETWIRSTATUS_APIID                            (0x7aU)              /*< Service ID: Dem_SetWIRStatus() */
#define DEM_J1939DCMSETDTCFILTER_APIID                    (0x90U)              /*< Service ID: Dem_J1939DcmSetDTCFilter() */
#define DEM_J1939DCMGETNUMBEROFFILTEREDDTC_APIID          (0x91U)              /*< Service ID: Dem_J1939DcmGetNumberOfFilteredDTC() */
#define DEM_J1939DCMGETNEXTFILTEREDDTC_APIID              (0x92U)              /*< Service ID: Dem_J1939DcmGetNextFilteredDTC() */
#define DEM_J1939DCMFIRSTDTCWITHLAMPSTATUS_APIID          (0x93U)              /*< Service ID: Dem_J1939DcmFirstDTCWithLampStatus() */
#define DEM_J1939DCMGETNEXTDTCWITHLAMPSTATUS_APIID        (0x94U)              /*< Service ID: Dem_J1939DcmGetNextDTCWithLampStatus() */
#define DEM_J1939DCMCLEARDTC_APIID                        (0x95U)              /*< Service ID: Dem_J1939DcmClearDTC() */
#define DEM_J1939DCMSETFREEZEFRAMEFILTER_APIID            (0x96U)              /*< Service ID: Dem_J1939DcmSetFreezeFrameFilter() */
#define DEM_J1939DCMGETNEXTFREEZEFRAME_APIID              (0x97U)              /*< Service ID: Dem_J1939DcmGetNextFreezeFrame() */
#define DEM_J1939DCMGETNEXTSPNINFREEZEFRAME_APIID         (0x98U)              /*< Service ID: Dem_J1939DcmGetNextSPNInFreezeFrame() */
#define DEM_J1939DCMSETRATIOFILTER_APIID                  (0x99U)              /*< Service ID: Dem_J1939DcmSetRatioFilter() */
#define DEM_J1939DCMGETNEXTFILTEREDRATIO_APIID            (0x9aU)              /*< Service ID: Dem_J1939DcmGetNextFilteredRatio() */
#define DEM_J1939DCMREADDIAGNOSTICREADINESS1_APIID        (0x9bU)              /*< Service ID: Dem_J1939DcmReadDiagnosticReadiness1() */
#define DEM_J1939DCMREADDIAGNOSTICREADINESS2_APIID        (0x9cU)              /*< Service ID: Dem_J1939DcmReadDiagnosticReadiness2() */
#define DEM_J1939DCMREADDIAGNOSTICREADINESS3_APIID        (0x9dU)              /*< Service ID: Dem_J1939DcmReadDiagnosticReadiness3() */
#define DEM_DCMSETDTR_APIID                               (0xa2U)              /*< Service ID: Dem_DcmSetDTR() */
#define DEM_DCMGETAVAILABLEOBDMIDS                        (0xa3U)              /*< Service ID: Dem_DcmGetAvailableOBDMIDs() */
#define DEM_DCMGETNUMTIDSOFOBDMID                         (0xa4U)              /*< Service ID: Dem_DcmGetNumTIDsOfOBDMID() */
#define DEM_DCMGETDTRDATA                                 (0xa5U)              /*< Service ID: Dem_DcmGetDTRData() */
#define DEM_SETPFCCYCLE_APIID                             (0xaaU)              /*< Service ID: Dem_SetPfcCycle() */
#define DEM_GETPFCCYCLE_APIID                             (0xabU)              /*< Service ID: Dem_GetPfcCycle() */
#define DEM_SETIUMPRDENCONDITION_APIID                    (0xaeU)              /*< Service ID: Dem_SetIUMPRDenCondition() */
#define DEM_DCMCONTROLDTCSTATUSCHANGEDNOTIFICATION_APIID  (0xb0U)              /*< Service ID: Dem_DcmControlDTCStatusChangedNotification() */
#define DEM_DCMGETDTCSEVERITYAVAILABILITYMASK_APIID       (0xb2U)              /*< Service ID: Dem_DcmGetDTCSeverityAvailabilityMask() */
#define DEM_READDATAOFPID01_APIID                         (0xb3U)              /*< Service ID: Dem_ReadDataOfPID01() */
#define DEM_GETB1COUNTER_APIID                            (0xb4U)              /*< Service ID: Dem_GetB1Counter() */
#define DEM_DCMREADDATAOFPID91_APIID                      (0xffU)              /*< Service ID: Dem_DcmReadDataOfPID91() */

#define DEM_INITMEMORY_APIID                              (0xd0U)              /*< Service ID: Dem_InitMemory() */
#define DEM_POSTRUNREQUESTED_APIID                        (0xd1U)              /*< Service ID: Dem_PostRunRequested() */
#define DEM_GETENABLECONDITION_APIID                      (0xd2U)              /*< Service ID: Dem_GetEnableCondition() */
#define DEM_GETWIRSTATUS_APIID                            (0xd3U)              /*< Service ID: Dem_GetWIRStatus() */
#define DEM_ENABLEPERMANENTSTORAGE_APIID                  (0xd4U)              /*< Service ID: Dem_EnablePermanentStorage() */
#define DEM_GETIUMPRGENERALDATA_APIID                     (0xd5U)              /*< Service ID: Dem_GetIUMPRGeneralData() */
#define DEM_GETNEXTIUMPRRATIODATAANDDTC_APIID             (0xd7U)              /*< Service ID: Dem_GetNextIUMPRRatioDataAndDTC() */
#define DEM_GETCURRENTIUMPRRATIODATAANDDTC_APIID          (0xd8U)              /*< Service ID: Dem_GetCurrentIUMPRRatioDataAndDTC() */
#define DEM_GETPERMANENTSTORAGESTATE_APIID                (0xd9U)              /*< Service ID: Dem_GetPermanentStorageState() */
#define DEM_IUMPRLOCKNUMERATORS_APIID                     (0xdaU)              /*< Service ID: Dem_IUMPRLockNumerators() */
#define DEM_REQUESTNVSYNCHRONIZATION_APIID                (0xdbU)              /*< Service ID: Dem_RequestNVSynchronization() */
#define DEM_GETEVENTAVAILABLE_APIID                       (0xdcU)              /*< Service ID: Dem_GetEventAvailable() */
#define DEM_NVMINIT_APIID                                 (0xf1U)              /*< Service ID: Dem_NvM_InitAdminData(), Dem_NvM_InitStatusData(), Dem_NvM_InitDebounceData(), Dem_NvM_InitEventAvailableData(), Dem_NvM_InitObdFreezeFrameData, Dem_NvM_InitObdPermanentData(), Dem_NvM_InitObdIumprData() */
#define DEM_NVMJOBFINISHED_APIID                          (0xf2U)              /*< Service ID: Dem_NvM_JobFinished() */
#define DEM_SETHIDEOBDOCCURRENCES_APIID                   (0xf3U)              /*< Service ID: Dem_SetHideOBDOccurrences() */
#define DEM_GETHIDEOBDOCCURRENCES_APIID                   (0xf4U)              /*< Service ID: Dem_GetHideOBDOccurrences() */
#define DEM_INTERNAL_APIID                                (0xffU)              /*< Service ID: Internal Functions */

                                  /* Error Codes for Det and port interfaces */
/* ------------------------------------------------------------------------- */
#define DEM_E_NO_ERROR                           (0x00U)                       /*< This value is never returned as error code */
#define DEM_E_NO_DTC_AVAILABLE                   (0x02U)                       /*< API called for an Event without configured DTC */
#define DEM_E_NO_FDC_AVAILABLE                   (0x03U)                       /*< API called for an Event with monitor internal debouncing, but no callback to retrieve the FDC */
#define DEM_E_PARAM_CONFIG                       (0x10U)                       /*< API called with a parameter value which is not allowed in this configuration */
#define DEM_E_PARAM_POINTER                      (0x11U)                       /*< API called with a NULL pointer where NULL pointer is not allowed */
#define DEM_E_PARAM_DATA                         (0x12U)                       /*< API called with an invalid parameter value, e.g. outside the valid range */
#define DEM_E_PARAM_LENGTH                       (0x13U)                       /*< API called with an invalid length or size parameter */
#define DEM_E_UNINIT                             (0x20U)                       /*< API called in uninitialized state */
#define DEM_E_NODATAAVAILABLE                    (0x30U)                       /*< Data collection failed while storing a DTC */
#define DEM_E_WRONG_RECORDNUMBER                 (0x31U)                       /*< API called with an unsupported record number */
#define DEM_E_WRONG_DIDNUMBER                    (0x32U)                       /*< API called with unsupported data identifier */
#define DEM_E_WRONG_CONDITION                    (0x40U)                       /*< API called with unsatisfied precondition (other than initialization) */
#define DEM_E_INCONSISTENT_STATE                 (0xf0U)                       /*< Internal state inconsistency - indicates a serious error */

                                                                /* Constants */
/* ------------------------------------------------------------------------- */
#define DEM_EVENT_INVALID                        ((Dem_EventIdType)0x0000U)    /*< EventId which is not used */
#define DEM_EVENT_FIRST                          ((Dem_EventIdType)0x0001U)    /*< First valid EventId */

#define DEM_DTC_GROUP_ALL_DTCS                   ((Dem_DTCGroupType)(0x00ffffffUL))  /*< predefined DTC group encoding 'All DTCs' */
#define DEM_DTC_GROUP_EMISSION_REL_DTCS          ((Dem_DTCGroupType)(0x00000000UL))  /*< predefined DTC group encoding 'Emmission related DTCs' for OBD-II */
#define DEM_DTC_GROUP_WWHOBD_DTCS                ((Dem_DTCGroupType)(0x00ffff33UL))  /*< predefined DTC group encoding 'Emmission related DTCs' for WWH-OBD */

/* ********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

                                                                /* Utilities */
/* ------------------------------------------------------------------------- */
/*! Prevent compiler warning for an unused constant function argument */
#define DEM_IGNORE_UNUSED_CONST_ARGUMENT(argument)  DEM_DUMMY_STATEMENT_CONST(argument);                                         /* PRQA S 3412, 3453 */ /* MD_MSR_19.4, MD_MSR_19.7 */
/*! Prevent compiler warning for an unused variable function argument */
#define DEM_IGNORE_UNUSED_ARGUMENT(argument)     DEM_DUMMY_STATEMENT(argument);                                                  /* PRQA S 3412, 3453 */ /* MD_MSR_19.4, MD_MSR_19.7 */
/*! Prevent compiler warning for an unused local variable */
#define DEM_IGNORE_UNUSED_VARIABLE(argument)     DEM_DUMMY_STATEMENT(argument);                                                  /* PRQA S 3412, 3453 */ /* MD_MSR_19.4, MD_MSR_19.7 */

/* ********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/* ********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"                                                                                                              /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if (DEM_CFG_USE_INIT_POINTER == STD_ON)
/*! Stores the pointer to the active module configuration */
extern P2CONST(Dem_ConfigType, DEM_VAR_NOINIT, DEM_PBCFG)  Dem_GlobalConfigPtr;
#endif

#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"                                                                                                              /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define DEM_START_SEC_VAR_NOINIT_16BIT
#include "MemMap.h"                                                                                                              /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if (DEM_DEV_RUNTIME_CHECKS == STD_ON)
/*! Stores the code line where a run-time error has occurred */
extern uint16 Dem_LineOfRuntimeError;
#endif

#define DEM_STOP_SEC_VAR_NOINIT_16BIT
#include "MemMap.h"                                                                                                              /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* ********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
#define DEM_START_SEC_CODE
#include "MemMap.h"                                                                                                              /* PRQA S 5087 */ /* MD_MSR_19.1 */

                                                             /* Version Info */
/* ------------------------------------------------------------------------- */

#if (DEM_CFG_SUPPORT_VERSION_INFO == STD_ON)
/* ****************************************************************************
 * Dem_GetVersionInfo
 *****************************************************************************/
/*!
 * \brief         Get the version information of this module
 *
 * \details       This function writes the module version information, module
 *                ID and vendor ID into the passed structure. The version
 *                information is decimal coded.
 *
 * \param[out]    versioninfo
 *                Pointer to a struct receiving the version information
 *
 * \pre           versioninfo may not be NULL_PTR.
 * \config        DEM_CFG_SUPPORT_VERSION_INFO == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(void, DEM_CODE)
Dem_GetVersionInfo(
  P2VAR(Std_VersionInfoType, AUTOMATIC, DEM_APPL_DATA)  versioninfo
  );
#endif

                                                   /* Interface EcuM <-> Dem */
/* ------------------------------------------------------------------------- */

/* ****************************************************************************
 * Dem_InitMemory
 *****************************************************************************/
/*!
 * \brief         Initialize statically initialized RAM variables
 *
 * \details       Normally the complier start-up code initializes statically
 *                initialized RAM variables of the form
 *                    static var = value;
 *                This function can be used instead, if this task is omitted
 *                from the start-up code.
 *
 *                This API is a MICROSAR extension to the AUTOSAR standard
 *
 * \pre           The Dem may not have been initialized yet. Call this prior to
 *                Dem_PreInit().
 *
 * \context       TASK
 * \synchronous   TRUE
 * \reentrant     FALSE
 *****************************************************************************/
FUNC(void, DEM_CODE)
Dem_InitMemory(
  void
  );

/* ****************************************************************************
 * Dem_PreInit
 *****************************************************************************/
/*!
 * \brief         Initializes basic functionality.
 *
 * \details       This function performs the first half of initialization.
 *                After calling this function, the Dem enters a pre-initialized
 *                state in which basic functionality is avaliable.
 *                Especially Dem_ReportErrorStatus() is supported to allow
 *                other modules to provide error reports during the
 *                initialization phase.
 *
 *                In multiple configuration use-cases (Post-Build Selectable),
 *                initialization has to provide a prelimiary configuration.
 *                This preliminary configuration may be replaced during the
 *                final configuration in Dem_Init().
 *
 * \param[in]     ConfigPtr
 *                A pointer to the configuration data.
 *
 *                In multiple configuration use cases, a valid configuration
 *                must be provided here.
 *
 *                NULL_PTR is valid in the PRE-COMPILE configuration variant.
 *
 * \pre           The Dem may not have been initialized yet. Call this prior to
 *                Dem_Init().
 *
 * \context       TASK
 * \synchronous   TRUE
 * \reentrant     FALSE
 *****************************************************************************/
FUNC(void, DEM_CODE)
Dem_PreInit(
  P2CONST(Dem_ConfigType, AUTOMATIC, DEM_INIT_DATA)  ConfigPtr
  );

/* ****************************************************************************
 * Dem_Init
 *****************************************************************************/
/*!
 * \brief         Initializes functionality beyond the basic set.
 *
 * \details       This function initializes the Dem variables required to
 *                provide the Dem services not already available from
 *                Dem_PreInit().
 *
 *                During this initialization, the non-volatile data content
 *                is accessed for the first time and the Dem assumes ownership
 *                of the respective RAM areas.
 *
 *                Depending on configuration, some event status changes trigger
 *                automatically from this initialization. These will not cause
 *                notification callbacks.
 *
 * \param[in]     ConfigPtr
 *                A pointer to the final configuration data.
 *
 *                Pass NULL_PTR to keep the configuration data passed to
 *                Dem_PreInit()
 *
 * \pre           Dem has been pre-initialized
 * \pre           NvM has restored all non-volatile data used by the Dem
 *
 * \context       TASK
 * \synchronous   TRUE
 * \reentrant     FALSE
 *****************************************************************************/
FUNC(void, DEM_CODE)
Dem_Init(
  P2CONST(Dem_ConfigType, AUTOMATIC, DEM_INIT_DATA)  ConfigPtr
  );

/* ****************************************************************************
 * Dem_Shutdown
 *****************************************************************************/
/*!
 * \brief         Shut down the Dem functionality.
 *
 * \details       When this function is called, the Dem will return into the
 *                basic initialization mode. This means
 *                Dem_ReportErrorStatus() is still available, but most other
 *                functions are not.
 *
 *                The Dem will mark modified non-volatile data structures,
 *                expecting NvN_WriteAll() following the shutdown. The Dem
 *                will no longer modify the RAM mirror areas configured for
 *                NV synchronization.
 *
 * \pre           Dem_PostRunRequested() returns FALSE
 *
 * \context       TASK
 * \synchronous   TRUE
 * \reentrant     FALSE
 *****************************************************************************/
FUNC(void, DEM_CODE)
Dem_Shutdown(
  void
  );

                                                              /* Cyclic task */
/* ------------------------------------------------------------------------- */
#if (DEM_CFG_SUPPORT_SPLIT_TASKS == STD_ON)                                                                                      /* COV_MSR_UNSUPPORTED XF */
/* ****************************************************************************
 * Dem_MainFunctionTimer
 *****************************************************************************/
/*!
 * \brief         Cyclic Dem timer task
 *
 * \details       This function creates the time base for the Dem module.
 *
 *                Call this function in a cyclic manner, with the configured
 *                cycle time. The run-time of this function is as minimal as
 *                possible, so it can be called on a higher priority task with
 *                minimal impact.
 *
 *                If the Dem module is not initialized, calling this function
 *                has no effect.
 *
 * \pre           Dem has been pre-initialized
 * \config        public when DEM_CFG_SUPPORT_SPLIT_TASKS == STD_ON
 *
 * \context       TASK
 * \synchronous   TRUE
 * \reentrant     FALSE
 *****************************************************************************/
FUNC(void, DEM_CODE)
Dem_MainFunctionTimer(
  void
);

/* ****************************************************************************
 * Dem_MainFunctionWorker
 *****************************************************************************/
/*!
 * \brief         Cyclic Dem worker task
 *
 * \details       This function processes the asynchronous status changes, e.g.
 *                storing event data into the event memory, clearing the event
 *                memory and processing operation cycle changes.
 *
 *                The run-time of this function can be high depending on the
 *                configuration, and the API calls that happen to coincide.
 *
 *                If the Dem module is not initialized, calling this function
 *                has no effect.
 *
 * \pre           Dem has been pre-initialized
 * \config        public when DEM_CFG_SUPPORT_SPLIT_TASKS == STD_ON
 *
 * \context       TASK
 * \synchronous   TRUE
 * \reentrant     FALSE
 *****************************************************************************/
FUNC(void, DEM_CODE)
Dem_MainFunctionWorker(
  void
);
#else
/* ****************************************************************************
 * Dem_MainFunction
 *****************************************************************************/
/*!
 * \brief         Cyclic Dem task
 *
 * \details       The AUTOSAR conforming way for the Dem asynchronous status
 *                processing and time base. In case the resulting run-time is
 *                too high to guarantee the cycle time, please refer to the
 *                configuration option DemGeneral/DemSupportSplitTasks
 *
 *                This function is basically a wrapper that calls both
 *                Dem_MainFunctionTimer() and Dem_MainFunctionWorker(),
 *                in this order.
 *
 * \pre           Dem has been pre-initialized
 * \config        DEM_CFG_SUPPORT_SPLIT_TASKS == STD_OFF
 *
 * \context       TASK
 * \synchronous   TRUE
 * \reentrant     FALSE
 *****************************************************************************/
FUNC(void, DEM_CODE)
Dem_MainFunction(
  void
);
#endif

                                        /* Interface BSW/Cdd monitor <-> Dem */
/* ------------------------------------------------------------------------- */

/* ****************************************************************************
 * Dem_ReportErrorStatus
 *****************************************************************************/
/*!
 * \brief         BSW API to report a monitor result
 *
 * \details       This API is intended to be used for Events monitored by BSW
 *                components. Only call this API for Events with DemEventKind
 *                set to 'BSW'.
 *
 *                Instead of processing the event status directly, this API
 *                will postpone the event processing to the Dem task function.
 *                Otherwise it behaves similar to Dem_SetEventStatus().
 *
 *                If enable conditions, operation cylce etc are not set, this
 *                fucntion silently ignores the report. This API does not
 *                return an in this case.
 *
 * \param[in]     EventId
 *                Unique handle of the Event to report.
 * \param[in]     EventStatus
 *                Monitor result reported for the Event
 *
 * \pre           -
 *
 * \context       TASK|ISR2
 * \synchronous   FALSE
 * \reentrant     TRUE for different EventIds.
 *****************************************************************************/
FUNC(void, DEM_CODE)
Dem_ReportErrorStatus(
  Dem_EventIdType  EventId,
  Dem_EventStatusType  EventStatus
  );

                                      /* Service Interface DiagnosticMonitor */
/* ------------------------------------------------------------------------- */

/* ****************************************************************************
 * Dem_SetEventStatus
 *****************************************************************************/
/*!
 * \brief         SWC API to report a monitor result
 *
 * \details       This API is the application interface to report monitor
 *                results. It is intended to be called via RTE_CALL interface,
 *                as Operation of port interface 'DiagnosticMonitor'.
 *
 *                For most events, part of the event report is processed
 *                synchronously. Every event status change processed within
 *                this function will also cause notifications, usually sent
 *                via RTE. Combined events are processed on task level.
 *
 *                If enable conditions etc. are not set for the reported event,
 *                the report is discarded.
 *
 * \attention     The operations Dem_SetEventStatus(),
 *                Dem_ResetEventStatus(), Dem_PrestoreFreezeFrame(),
 *                Dem_ClearPrestoredFreezeFrame() and
 *                Dem_ResetEventDebounceStatus() are not reentrant
 *                for the same EventId.
 *
 * \param[in]     EventId
 *                Unique handle of the Event to report.
 * \param[in]     EventStatus
 *                Monitor result reported for the Event
 *
 * \return        E_OK
 *                The test result was processed sucessfully
 * \return        E_NOT_OK
 *                The test result was rejected, e.g. due to enable conditions
 *                or variant coding (see Dem_SetEventAvailable() )
 *
 * \pre           RTE is started (if RTE is used)
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE for normal events, FALSE for combined events.
 * \reentrant     TRUE for different EventIds.
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_SetEventStatus(
  Dem_EventIdType  EventId,
  Dem_EventStatusType  EventStatus
  );

/* ****************************************************************************
 * Dem_ResetEventStatus
 *****************************************************************************/
/*!
 * \brief         SWC API to reset an events failed bit
 *
 * \details       This API is intended to be called via RTE_CALL interface,
 *                as Operation of port interface 'DiagnosticMonitor'.
 *
 *                Dem_ResetEventStatus() resets the failed bit of an event
 *                that can not be tested in this operation cycle. If the event
 *                has already completed a test, the request is rejected.
 *
 *                The Dem module will not treat resetting the event failed bit
 *                as a trigger to start aging of an event.
 *
 * \attention     The operations Dem_SetEventStatus(),
 *                Dem_ResetEventStatus(), Dem_PrestoreFreezeFrame(),
 *                Dem_ClearPrestoredFreezeFrame() and
 *                Dem_ResetEventDebounceStatus() are not reentrant
 *                for the same EventId.
 *
 * \param[in]     EventId
 *                Unique handle of the Event to reset.
 *
 * \return        E_OK
 *                The request was processed sucessfully
 * \return        E_NOT_OK
 *                The request was rejected, e.g. the event had already
 *                completed testing, or due to variant coding
 *                (see Dem_SetEventAvailable() )
 *
 * \pre           RTE is started (if RTE is used)
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE for different EventIds.
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_ResetEventStatus(
  Dem_EventIdType  EventId
  );

#if (DEM_CFG_SUPPORT_PRESTORED_FF == STD_ON)
/* ****************************************************************************
 * Dem_PrestoreFreezeFrame
 *****************************************************************************/
/*!
 * \brief         SWC API to immediately store snapshot data
 *
 * \details       This API is intended to be called via RTE_CALL interface,
 *                as Operation of port interface 'DiagnosticMonitor'.
 *
 *                Dem_PrestoreFreezeFrame() stores the snapshot data for
 *                an event, in order to freeze that data set when the event
 *                qualifies 'failed' later. If a prestored record already
 *                exists, the Dem will update it's contents.
 *
 *                Normally, the Dem collects the configured DID data for an
 *                event during the storage processing on the Dem task function.
 *                This function can be used to close the timing gap between the
 *                event report and the Dem task invocation, e.g. if the DID
 *                data changes rapidly.
 *
 *                The prestored data is managed in a FIFO list. The data sets
 *                are discarded once the event reports a qualified result, or
 *                the queue overflows.
 *                Also see Dem_ClearPrestoredFreezeFrame to actively free a
 *                prestored data set.
 *
 * \attention     The operations Dem_SetEventStatus(),
 *                Dem_ResetEventStatus(), Dem_PrestoreFreezeFrame(),
 *                Dem_ClearPrestoredFreezeFrame() and
 *                Dem_ResetEventDebounceStatus() are not reentrant
 *                for the same EventId.
 *
 * \param[in]     EventId
 *                Unique handle of the Event.
 *
 * \return        E_OK
 *                The data was successfully collected
 * \return        E_NOT_OK
 *                No data was collected, e.g. due to variant coding (see
 *                Dem_SetEventAvailable() )
 *
 *
 * \pre           RTE is started (if RTE is used)
 * \config        DEM_CFG_SUPPORT_PRESTORED_FF == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE for different EventIds.
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_PrestoreFreezeFrame(
  Dem_EventIdType  EventId
  );
#endif

#if (DEM_CFG_SUPPORT_PRESTORED_FF == STD_ON)
/* ****************************************************************************
 * Dem_ClearPrestoredFreezeFrame
 *****************************************************************************/
/*!
 * \brief         SWC API to clear prestored data
 *
 * \details       This API is intended to be called via RTE_CALL interface,
 *                as Operation of port interface 'DiagnosticMonitor'.
 *
 *                Dem_ClearPrestoredFreezeFrame() is not used for memory
 *                management, so its use is optional. The Dem automatically
 *                frees prestored data on use, or overflow. Call this API when
 *                the prestored data is no longer relevant and you want the
 *                Dem to ignore it.
 *
 *                If no prestored data exists, this function does nothing.
 *
 * \attention     The operations Dem_SetEventStatus(),
 *                Dem_ResetEventStatus(), Dem_PrestoreFreezeFrame(),
 *                Dem_ClearPrestoredFreezeFrame() and
 *                Dem_ResetEventDebounceStatus() are not reentrant
 *                for the same EventId.
 *
 * \param[in]     EventId
 *                Unique handle of the Event.
 *
 * \return        E_OK
 *                Data was freed, or no data was stored.
 * \return        E_NOT_OK
 *                No data was freed, e.g. due to variant coding (see
 *                Dem_SetEventAvailable() )
 *
 * \pre           RTE is started (if RTE is used)
 * \config        DEM_CFG_SUPPORT_PRESTORED_FF == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE for different EventIds.
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_ClearPrestoredFreezeFrame(
  Dem_EventIdType  EventId
  );
#endif

/* ****************************************************************************
 * Dem_ResetEventDebounceStatus
 *****************************************************************************/
/*!
 * \brief         SWC API to control the Dem internal event de-bouncing
 *
 * \details       This API is intended to be called via RTE_CALL interface,
 *                as Operation of port interface 'DiagnosticMonitor'.
 *
 *                Depending on DebounceResetStatus and the EventId's configured
 *                debouncing algorithm, this API performs the following:
 *
 *                Time Based Debouncing:
 *                DEM_DEBOUNCE_STATUS_FREEZE: If the de-bounce timer is active,
 *                it is paused without modifying its current value. Otherwise
 *                this has no effect. The timer will continue if the monitor
 *                reports another PREFAILED or PREPASSED in the same direction.
 *
 *                DEM_DEBOUNCE_STATUS_RESET: The de-bounce timer is stopped and
 *                Its value is set to 0.
 *
 *                Counter Based Debouncing:
 *                DEM_DEBOUNCE_STATUS_FREEZE: This has no effect.
 *
 *                DEM_DEDOUNCE_STATUS_RESET: This will set the current value
 *                of the debounce counter back to 0.
 *
 *                Monitor Internal Debouncing:
 *                The API returns E_NOT_OK in either case.
 *
 * \attention     The operations Dem_SetEventStatus(),
 *                Dem_ResetEventStatus(), Dem_PrestoreFreezeFrame(),
 *                Dem_ClearPrestoredFreezeFrame() and
 *                Dem_ResetEventDebounceStatus() are not reentrant
 *                for the same EventId.
 *
 * \param[in]     EventId
 *                Unique handle of the Event to report.
 * \param[in]     DebounceResetStatus
 *                Select the action to take
 *
 * \return        E_OK
 *                The request was processed successfully
 * \return        E_NOT_OK
 *                The request was rejected, e.g. due to variant coding (see
 *                Dem_SetEventAvailable() )
 *
 * \pre           Dem has been pre-initialized
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE for different EventIds.
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_ResetEventDebounceStatus(
  Dem_EventIdType  EventId,
  Dem_DebounceResetStatusType  DebounceResetStatus
  );

                                         /* Service Interface DiagnosticInfo */
/* ------------------------------------------------------------------------- */

/* ****************************************************************************
 * Dem_GetEventStatus
 *****************************************************************************/
/*!
 * \brief         API to read the UDS event status
 *
 * \details       This API reads the current event status byte of an event.
 *                The status byte is encoded as described in ISO 14229, without
 *                applying the status availability mask.
 *
 *                Dem_GetEventStatus() is part of the RTE interface, but
 *                may be called directly as well.
 *
 * \param[in]     EventId
 *                Unique handle of the Event.
 * \param[out]    EventStatusExtended
 *                Pointer receiving the event status:
 *                Bit0:  DEM_UDS_STATUS_TF
 *                Bit1:  DEM_UDS_STATUS_TFTOC
 *                Bit2:  DEM_UDS_STATUS_PDTC
 *                Bit3:  DEM_UDS_STATUS_CDTC
 *                Bit4:  DEM_UDS_STATUS_TNCSLC
 *                Bit5:  DEM_UDS_STATUS_TFSLC
 *                Bit6:  DEM_UDS_STATUS_TNCTOC
 *                Bit7:  DEM_UDS_STATUS_WIR
 *
 * \return        E_OK
 *                EventStatusExtended now contains the event status
 * \return        E_NOT_OK
 *                The request was rejected, e.g. due to variant coding (see
 *                Dem_SetEventAvailable() )
 *
 * \pre           -
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_GetEventStatus(
  Dem_EventIdType  EventId,
  P2VAR(Dem_EventStatusExtendedType, AUTOMATIC, DEM_APPL_DATA)  EventStatusExtended
  );

/* ****************************************************************************
 * Dem_GetEventFailed
 *****************************************************************************/
/*!
 * \brief         API to read the event status bit 0
 *
 * \details       This API returns bit0 of the current events status.
 *
 *                Dem_GetEventFailed() is part of the RTE interface, but
 *                may be called directly as well.
 *
 * \param[in]     EventId
 *                Unique handle of the Event.
 * \param[out]    EventFailed
 *                Pointer receiving the current failed bit:
 *                TRUE if bit0 is set, FALSE otherwise
 *
 * \return        E_OK
 *                EventFailed now contains the event status
 * \return        E_NOT_OK
 *                The request was rejected, e.g. due to variant coding (see
 *                Dem_SetEventAvailable() )
 *
 * \pre           -
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_GetEventFailed(
  Dem_EventIdType  EventId,
  P2VAR(boolean, AUTOMATIC, DEM_APPL_DATA)  EventFailed
  );

/* ****************************************************************************
 * Dem_GetEventTested
 *****************************************************************************/
/*!
 * \brief         SWC API to read the negated event status bit 6
 *
 * \details       This API writes TRUE to EventTested if the event has
 *                completed a test in this operation cycle, FALSE otherwise.
 *                This corresponds to the negated  status bit6.
 *
 *                Dem_GetEventTested() is  part of the RTE interface, but
 *                may be called directly as well.
 *
 * \param[in]     EventId
 *                Unique handle of the Event.
 * \param[out]    EventTested
 *                Pointer receiving the current tested bit
 *
 * \return        E_OK
 *                EventTested now contains the event status
 * \return        E_NOT_OK
 *                The request was rejected, e.g. due to variant coding (see
 *                Dem_SetEventAvailable() )
 *
 * \pre           -
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_GetEventTested(
  Dem_EventIdType  EventId,
  P2VAR(boolean, AUTOMATIC, DEM_APPL_DATA)  EventTested
  );

/* ****************************************************************************
 * Dem_GetDTCOfEvent
 *****************************************************************************/
/*!
 * \brief         API to read the DTC number for the given EventId
 *
 * \details       This function retrieves the configured DTC number of an event
 *                from the configuration. Since the configuration is not known
 *                until full initialization, this API cannot be called prior
 *                to Dem_Init().
 *
 *                Dem_GetEventTested() is part of the RTE interface, but
 *                but may be called directly as well.

 * \param[in]     EventId
 *                Unique handle of the Event
 * \param[in]     DTCFormat
 *                DEM_DTC_FORMAT_OBD or DEM_DTC_FORMAT_UDS to select which
 *                DTC number is requested
 * \param[out]    DTCOfEvent
 *                Pointer receiving the DTC number

 * \return        E_OK
 *                The request was successful, DTCOfEvent now contains the DTC
 *                value.
 * \return        DEM_E_NO_DTC_AVAILABLE
 *                The event has no DTC in the requested format.
 * \return        E_NOT_OK
 *                The request was rejected, e.g. due to variant coding (see
 *                Dem_SetEventAvailable() )
 *
 * \pre           -
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_GetDTCOfEvent(
  Dem_EventIdType  EventId,
  Dem_DTCFormatType  DTCFormat,
  P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA)  DTCOfEvent
  );

/* ****************************************************************************
 * Dem_GetFaultDetectionCounter
 *****************************************************************************/
/*!
 * \brief         SWC API to read the fault detection counter of an event
 *
 * \details       This API is intended to be called via RTE_CALL interface,
 *                as Operation of port interface 'DiagnosticInfo'.
 *
 *                For events that are de-bounced within the Dem (counter based
 *                and time based de-bouncing), the internal de-bouncing state
 *                is converted to an UDS FaultDetectionCounter value in
 *                range [-128..127].
 *
 *                For events that are de-bounced in application, the configured
 *                callback is invoked to read the current FDC.
 *
 * \param[in]     EventId
 *                Unique handle of the Event
 * \param[out]    FaultDetectionCounter
 *                Pointer receiving the current fault detection counter.
 *
 * \return        E_OK
 *                The FDC was stored into FaultDetectionCounter
 * \return        DEM_E_NO_FDC_AVAILABLE
 *                The event is debounced within the application, but no
 *                callback was configured to read the FDC.
 * \return        E_NOT_OK if
 *                The request was rejected, e.g. due to variant coding (see
 *                Dem_SetEventAvailable() )
 *
 * \pre           RTE is active (if RTE is used)
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_GetFaultDetectionCounter(
  Dem_EventIdType  EventId,
  P2VAR(sint8, AUTOMATIC, DEM_APPL_DATA)  FaultDetectionCounter
  );

/* ****************************************************************************
 * Dem_GetEventFreezeFrameData
 *****************************************************************************/
/*!
 * \brief         SWC API to read the stored snapshot data of an event
 *
 * \details       This API is intended to be called via RTE_CALL interface,
 *                as Operation of port interface 'DiagnosticInfo'.
 *
 *                Dem_GetEventFreezeFrameData() copies data from the stored
 *                snapshot data of an event into DestBuffer, following no
 *                particular format.
 *
 *                With ReportTotalRecord == FALSE, only the DID DataId is
 *                copied, in case of ReportTotalRecord == TRUE the data of all
 *                DIDs is concatenated. In case of DIDs only the data actually
 *                stored in the event storage is returned here, if the Dcm adds
 *                additional parts to a DID, these will be missing.
 *
 *                The record number 0xff is a magic value used to read the most
 *                recently stored record. This is only supported in case record
 *                numbers are calculated (DemTypeOfFreezeFrameRecordNumeration)
 *
 * \param[in]     EventId
 *                Unique handle of the Event
 * \param[in]     RecordNumber
 *                SnapshotRecord number to read. Contrary to usual usage, 0xFF
 *                returns the most recently stored record. (See notes below)
 * \param[in]     ReportTotalRecord
 *                TRUE:  Return the data of all stored DIDs (unformatted)
 *                FALSE: Return only the data of the DID 'DataId'
 * \param[in]     DataId
 *                Return only the data of this DID. Only evaluated if also
 *                ReportTotalRecord == FALSE.
 * \param[out]    DestBuffer
 *                Buffer to receive the data.
 *
 * \return        E_OK
 *                The requested data was copied to the destination buffer
 * \return        DEM_E_NODATAAVAILABLE
 *                The data is not currently stored for the requested event.
 * \return        DEM_E_WRONG_RECORDNUMBER
 *                The requested data was not copied due to an undefined
 *                RecordNumber for the given event.
 * \return        DEM_E_WRONG_DIDNUMBER
 *                The requested data was not copied due to an undefined
 *                data indentifier within the requested record (in case
 *                ReportTotalRecord == FALSE)
 * \return        E_NOT_OK if
 *                The request was rejected, e.g. due to variant coding (see
 *                Dem_SetEventAvailable() )
 *
 * \pre           RTE is active (if RTE is used)
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_GetEventFreezeFrameData(
  Dem_EventIdType  EventId,
  uint8  RecordNumber,
  boolean  ReportTotalRecord,
  uint16  DataId,
  P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA)  DestBuffer
  );

/* ****************************************************************************
 * Dem_GetEventExtendedDataRecord
 *****************************************************************************/
/*!
 * \brief         SWC API to read the extended record data of an event
 *
 * \details       This API is intended to be called via RTE_CALL interface,
 *                as Operation of port interface 'DiagnosticInfo'.
 *
 *                Dem_GetEventExtendedDataRecord() copies extended data
 *                available or stored for an event into the passed buffer.
 *                This is particularly useful to retrieve statistic data, like
 *                occurrence counter or aging counter - if these are mapped to
 *                an extended data record.
 *
 * \param[in]     EventId
 *                Unique handle of the Event
 * \param[in]     RecordNumber
 *                Extended DataRecord number to read. The record numbers 0xfe
 *                and 0xff are reserved.
 * \param[out]    DestBuffer
 *                Buffer to receive the data.
 *
 * \return        E_OK
 *                The requested data was copied to the destination buffer
 * \return        DEM_E_NODATAAVAILABLE
 *                The data is not currently stored for the requested event.
 * \return        DEM_E_WRONG_RECORDNUMBER
 *                The requested data was not copied due to an undefined
 *                RecordNumber for the given event.
 * \return        E_NOT_OK
 *                The request was rejected, e.g. due to variant coding (see
 *                Dem_SetEventAvailable() )
 *
 * \pre           RTE is active (if RTE is used)
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_GetEventExtendedDataRecord(
  Dem_EventIdType  EventId,
  uint8  RecordNumber,
  P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA)  DestBuffer
  );

                                         /* Service Interface DTCSuppression */
/* ------------------------------------------------------------------------- */

#if (DEM_CFG_SUPPORT_DTCSUPPRESSION == STD_ON)
/* ****************************************************************************
 * Dem_SetDTCSuppression
 *****************************************************************************/
/*!
 * \brief         Suppress a DTC
 *
 * \details       This function suppresses DTCs such, that Dcm will not report
 *                the DTC for any reason. The internal processing of the event
 *                continues as usual.
 *
 * \param[in]     DTC
 *                The number of the DTC to suppress
 * \param[in]     DTCFormat
 *                Defines the format of DTC number (UDS or OBD)
 * \param[in]     SuppressionStatus
 *                TRUE: Suppress the DTC
 *                FALSE: Lift suppression of the DTC
 *
 * \return        E_OK
 *                The request was processed successfully
 * \return        E_NOT_OK
 *                The request was rejected due to invalid arguments
 *
 * \pre           -
 * \config        DEM_CFG_SUPPORT_DTCSUPPRESSION == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     FALSE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_SetDTCSuppression(
  uint32  DTC,
  Dem_DTCFormatType  DTCFormat,
  boolean  SuppressionStatus
  );
#endif

                                       /* Service Interface EventSuppression */
/* ------------------------------------------------------------------------- */

#if (DEM_CFG_SUPPORT_EVENTSUPPRESSION == STD_ON)
/* ****************************************************************************
 * Dem_SetEventSuppression
 *****************************************************************************/
/*!
 * \brief         Suppress an event
 *
 * \details       For normal events, this function suppresses the given event
 *                such, that Dcm will not report the related DTC for any
 *                reason. The internal processing of the event continues as
 *                usual.
 *
 *                When suppressing combined events in this manner, the related
 *                DTC is effectively suppressed only when all events combined
 *                to it are suppressed. Until then, the suppressed event will
 *                still contribute to the DTC status as usual.
 *
 *                This API does not respect event availability. The suppression
 *                status of unavailable events does not have an effect - those
 *                events count as suppressed either way.
 *
 * \param[in]     EventId
 *                Unique handle of the Event.
 * \param[in]     SuppressionStatus
 *                TRUE: Suppress the Event
 *                FALSE: Lift suppression of the Event
 *
 * \return        E_OK
 *                The request was processed successfully
 * \return        E_NOT_OK
 *                The request was rejected due to invalid arguments or state.
 *
 * \pre           Dem has been pre-initialized
 * \config        DEM_CFG_SUPPORT_EVENTSUPPRESSION == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE (for different EventIds)
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_SetEventSuppression(
  Dem_EventIdType  EventId,
  boolean  SuppressionStatus
  );
#endif

                                         /* Service Interface EventAvailable */
/* ------------------------------------------------------------------------- */

#if (DEM_CFG_SUPPORT_EVENTAVAILABLE == STD_ON)
/* ****************************************************************************
 * Dem_SetEventAvailable
 *****************************************************************************/
/*!
 * \brief         Change event configuration
 *
 * \details       This function changes if events are present or not in a
 *                given configuration. The main use case is related to variant
 *                coding, this is a run-time option to change the event
 *                configuration.
 *
 *                Events that are set 'unavailable' cause
 *                all Event based APIs (but Dem_SetEventAvailable() ) to
 *                return E_NOT_OK and perform no action.
 *                DTC based API will not find unavailable events, to the point
 *                that such DTCs are suppressed once all related events are
 *                unavailable.
 *
 *                For all status calculations, an 'unavailable' event has UDS
 *                status 0x00 (passed and tested). When an unavailable event is
 *                set 'available' again, its status is initialized to 0x50
 *                (not tested).
 *
 *                An event that is already failed or stored can not be
 *                disconnected. Such events need to be cleared first, see
 *                Dem_ClearDTC() .
 *
 *                Variant coding can be achieved using PostBuild Selectable
 *                when the event availability is known statically based on few
 *                ECU configurations.
 *
 * \param[in]     EventId
 *                Unique handle of the Event.
 * \param[in]     AvailableStatus
 *                TRUE: Event is available
 *                FALSE: Event is not available
 *
 * \return        E_OK
 *                The reques was processed successfully
 * \return        E_NOT_OK DTC
 *                The request was rejected due to invalid arguments or state.
 *
 * \pre           Dem has been pre-initialized
 * \config        DEM_CFG_SUPPORT_EVENTAVAILABLE == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE (for different EventIds)
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_SetEventAvailable(
  Dem_EventIdType  EventId,
  boolean  AvailableStatus
  );
#endif

#if (DEM_CFG_SUPPORT_EVENTAVAILABLE == STD_ON)
/* ****************************************************************************
 * Dem_GetEventAvailable
 *****************************************************************************/
/*!
 * \brief         Get event configuration
 *
 * \details       This function returns if an events is present or not in a
 *                given configuration. The main use case is related to variant
 *                coding, this is a run-time way to check if an event is
 *                currently removed (see Dem_SetEventAvailable()
 *
 *                Variant coding can be achieved using PostBuild Selectable
 *                when the event availability is known statically based on few
 *                ECU configurations.
 *
 *                This API is a MICROSAR extension to the AUTOSAR standard
 *
 * \param[in]     EventId
 *                Unique handle of the Event.
 * \param[out]    AvailableStatus
 *                TRUE: Event is available
 *                FALSE: Event is not available
 *
 * \return        E_OK
 *                The request was processed successfully
 * \return        E_NOT_OK
 *                The request was rejected due to invalid arguments or state.
 *                In this case, AvailableStatus will not be initialized.
 *
 * \pre           If DEM_CFG_SUPPORT_EVENTAVAILABLE_NV == STD_ON, the Dem must
 *                be initialized. Otherwise this API is available after
 *                pre-initialization.
 * \config        DEM_CFG_SUPPORT_EVENTAVAILABLE == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE (for different EventIds)
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_GetEventAvailable(
  Dem_EventIdType  EventId,
  P2VAR(boolean, AUTOMATIC, DEM_APPL_DATA)  AvailableStatus
  );
#endif

                                         /* Service Interface OperationCycle */
/* ------------------------------------------------------------------------- */

/* ****************************************************************************
 * Dem_SetOperationCycleState
 *****************************************************************************/
/*!
 *  \brief        Start and Stop operation cycles
 *
 *  \details      This function is used to report operation cycle changes to
 *                the Dem.
 *
 *                Usually, starting an operation cycle will reset
 *                *ThisOperationCycle status bits and the de-bouncing state.
 *                Ending an operation cycle tests for healing and aging
 *                conditions and processes related statistics.
 *
 *                Starting the OBD driving cycle will qualify it (if it is not
 *                yet qualified), ending the OBD driving cycle will restart it
 *                if the cycle is qualified.
 *
 *                Starting the OBD warm-up cycle can be delayed to the restart
 *                of the OBD driving cycle by configuration.
 *
 *                Starting the OBD hybrid ignition cycle will not have an
 *                effect on events, that cycle is only processed for internal
 *                statistics.
 *
 *                There is no difference between restarting an operation cycle
 *                and stopping then starting the same cycle. The latter will
 *                result in the exact same run-time behavior.
 *
 *                The processing queue for operation cycle changes is limited,
 *                this API will reject cycle state changes beyond a
 *                START-STOP or STOP-START double transition.
 *
 * \param[in]     OperationCycleId
 *                Identifier of the Cycle to change state
 * \param[in]     CycleState
 *                DEM_CYCLE_STATE_START: Start a stopped cycle, or restart an
 *                                       active cycle.
 *                DEM_CYCLE_STATE_END:   Stop an active cycle.
 *
 * \return        E_OK
 *                Request was queued successfully
 * \return        E_NOT_OK
 *                Only in case of detected development errors
 *
 * \pre           -
 *
 * \context       TASK|ISR2
 * \synchronous   FALSE
 * \reentrant     TRUE (for different CycleIds)
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_SetOperationCycleState(
  uint8  OperationCycleId,
  Dem_OperationCycleStateType  CycleState
  );
                                             /* Service Interface AgingCycle */
/* ------------------------------------------------------------------------- */

#if (DEM_CFG_SUPPORT_AGINGCYCLE_STATE_API == STD_ON)
/* ****************************************************************************
 * Dem_SetAgingCycleState
 *****************************************************************************/
/*!
 * \brief         SWC API to restart an aging cycle
 *
 * \details       This API is not implemented and will always return E_NOT_OK
 * \note          Aging cycle objects have no functionality beyond operation
 *                cycle objects, so an operation cycle can always be used
 *                instead.
 *
 * \param[in]     AgingCycleId
 *                Unique handle of the Aging Cycle.
 *
 * \return        E_NOT_OK
 *
 * \pre           RTE is started (if RTE is used)
 * \config        DEM_CFG_SUPPORT_AGINGCYCLE_STATE_API == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE for different EventIds.
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_SetAgingCycleState(
  uint8  AgingCycleId
  );
#endif
                                     /* Service Interface ExternalAgingCycle */
/* ------------------------------------------------------------------------- */

#if (DEM_CFG_SUPPORT_AGINGCYCLE_COUNTER_API == STD_ON)
/* ****************************************************************************
 * Dem_SetAgingCycleState
 *****************************************************************************/
/*!
 * \brief         SWC API to set the aging counter value
 *
 * \details       This API is not implemented and will always return E_NOT_OK
 *
 * \param[in]     AgingCounterValue
 *                Global aging counter
 *
 * \return        E_NOT_OK
 *
 * \pre           RTE is started (if RTE is used)
 * \config        DEM_CFG_SUPPORT_AGINGCYCLE_COUNTER_API == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE for different EventIds.
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_SetAgingCycleCounterValue(
  uint8  CounterValue
  );
#endif

                                                  /* Service Interface CddIf */
/* ------------------------------------------------------------------------- */
/* ****************************************************************************
 * Dem_ClearDTC
 *****************************************************************************/
/*!
 * \brief         Clear DTC memory
 *
 * \details       Clearing of a DTC clears the stored event data from the event
 *                memory, resets the event status byte and debouncing state.
 *
 *                There are a variety of configuration settings that further
 *                control the behavior of this function:
 *                Configuration option DemClearDTCBehavior controls if the
 *                clear operation is complete when the RAM contents are
 *                cleared, or if the NV-RAM content must be cleared as well.
 *                (NV-Ram is updated in all cases)
 *
 *                Using configuration option DemClearDTCLimitation the API can
 *                be restricted to DTC groups.
 *
 * \attention     Polling the result of this API is not optional. A clear
 *                operation is ongoing until the final result was returned.
 *                Before the final result is returned, this API will return
 *                BUSY for every new clear request.
 *
 * \param[in]     DTC
 *                DTC number of a single DTC to clear this DTC
 *                DTC number of a DTC group to clear all DTCs in the group
 *                DTC number '0xFFFFFF' to clear all DTCs
 *                Valid numbers depend on configuration.
 * \param[in]     DTCFormat
 *                DEM_DTC_FORMAT_OBD:  DTC number is OBD, clear OBD DTCs
 *                DEM_DTC_FORMAT_UDS:  DTC number is UDS, clear UDS DTCs
 * \param[in]     DTCOrigin
 *                Identifier of the event memory concerned:
 *                DEM_DTC_ORIGIN_PRIMARY_MEMORY
 *                DEM_DTC_ORIGIN_PERMANENT_MEMORY
 *                DEM_DTC_ORIGIN_SECONDARY_MEMORY
 *
 * \return        DEM_CLEAR_OK
 *                Clearing is completed for the requested DTC(s).
 * \return        DEM_CLEAR_WRONG_DTC
 *                The requested DTC is not valid in the context of DTCFormat
 *                and DTCOrigin
 * \return        DEM_CLEAR_WRONG_DTCORIGIN
 *                The requested DTC origin is not available
 * \return        DEM_CLEAR_FAILED
 *                The clear operation could not be completed
 * \return        DEM_CLEAR_MEMORY_ERROR
 *                The clear operation has completed in RAM, but synchronization
 *                to Nv-Ram has failed
 * \return        DEM_CLEAR_PENDING
 *                The clear operation is in progress.
 * \return        DEM_CLEAR_BUSY
 *                Another clear operation is currently in progress.
 *
 * \pre           -
 *
 * \context       TASK|ISR2
 * \synchronous   FALSE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Dem_ReturnClearDTCType, DEM_CODE)
Dem_ClearDTC(
  uint32  DTC,
  Dem_DTCFormatType  DTCFormat,
  Dem_DTCOriginType  DTCOrigin
  );
                                        /* Service Interface EnableCondition */
/* ------------------------------------------------------------------------- */

#if (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON)
/* ****************************************************************************
 * Dem_SetEnableCondition
 *****************************************************************************/
/*!
 * \brief         Set state of enable conditions
 *
 * \details       Each event may have assigned several enable conditions. If
 *                any enable conditions referenced by the event is disabled,
 *                event reports are not processed (Dem_SetEventStatus(),
 *                Dem_ReportErrorStatus() ).
 *
 *                Depending on DemDebounceBehavior, the de-bouncing of events
 *                with a disabled precondition is either paused or reset.
 *                Once all enable conditions are fulfilled again, the monitor
 *                will be notified.
 *
 *                During the pre-initialization phase, all enable conditions
 *                are ignored. Starting with Dem_Init() the configured
 *                initialization values for the enable conditions apply.
 *
 * \param[in]     EnableCondition
 *                Unique handle of the EnableCondition
 * \param[in]     ConditionFulfilled
 *                TRUE: Enable condition is fulfilled
 *                FALSE: Enable condition is not fulfilled
 *
 * \return        E_OK
 *                The request was processed successfully
 * \return        E_NOT_OK
 *                Only in case of detected development errors
 *
 * \pre           RTE is active (if RTE is used)
 * \config        DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_SetEnableCondition(
  uint8  EnableCondition,
  boolean  ConditionFulfilled
  );
#endif

#if (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON)
/* ****************************************************************************
 * Dem_GetEventEnableCondition
 *****************************************************************************/
/*!
 * \brief         Query if the events preconditions are fulfilled
 *
 * \details       This API is an easy way for a monitor to verify (some of)
 *                its preconditions, as these tend to coincide with the
 *                Dem enable conditions for this event.
 *
 *                This API is a MICROSAR extension to the AUTOSAR standard
 *
 * \param[in]     EventId
 *                Unique handle of the Event.
 * \param[out]    ConditionFulfilled
 *                TRUE: All enable conditions are fulfilled
 *                FALSE: At least one enable condition is not fulfilled
 *
 * \return        E_OK
 *                Request processed successfully
 * \return        E_NOT_OK
 *                The request was rejected due to invalid arguments or
 *                variant coding (see Dem_SetEventAvailable() )
 *
 * \pre           -
 * \config        DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE: AR4.0.3, AR4.1.2 FALSE: AR4.2.1
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_GetEventEnableCondition(
  Dem_EventIdType  EventId,
  P2VAR(boolean, AUTOMATIC, DEM_APPL_DATA)  ConditionFulfilled
  );
#endif
                                       /* Service Interface StorageCondition */
/* ------------------------------------------------------------------------- */

#if (DEM_CFG_SUPPORT_STORAGE_CONDITIONS == STD_ON)
/* ****************************************************************************
 * Dem_SetStorageCondition
 *****************************************************************************/
/*!
 * \brief         Set state of storage conditions
 *
 * \details       Each event may have assigned several storage conditions. If
 *                any storage condition referenced by the event is disabled,
 *                the event is not stored into the event memory.
 *
 *                Depending on configuration, this will have an effect on the
 *                Status bits modified, e.g. ConfirmedDTC is not set in case
 *                DemResetConfirmedBitOnOverflow = TRUE
 *
 * \param[in]     StorageCondition
 *                Unique handle of the StorageCondition
 * \param[in]     ConditionFulfilled
 *                TRUE: Storage condition is fulfilled
 *                FALSE: Storage condition is not fulfilled
 *
 * \return        E_OK
 *                Request processed successfully
 * \return        E_NOT_OK
 *                Only in case of detected development errors
 *
 * \pre           -
 * \config        DEM_CFG_SUPPORT_STORAGE_CONDITIONS == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_SetStorageCondition(
  uint8  StorageCondition,
  boolean  ConditionFulfilled
  );
#endif
                                        /* Service Interface IndicatorStatus */
/* ------------------------------------------------------------------------- */

/* ****************************************************************************
 * Dem_GetIndicatorStatus
 *****************************************************************************/
/*!
 * \brief         Get current status of an indicator
 *
 * \details       Calculates the accumulated status of an indicator.
 *
 *                Depending on the indicator and configuration, this includes
 *                the correct prioritization of multiple concurrent requests,
 *                e.g. in J1939 you receive the same status that is reported
 *                in the DM messages.
 *
 * \param[in]     IndicatorId
 *                Unique identifier of the indicator
 * \param[out]    IndicatorStatus
 *                The current status of the indicator
 *
 * \return        E_OK
 *                Request processed successfully
 * \return        E_NOT_OK
 *                Only in case of detected development errors
 *
 * \pre           -
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     FALSE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_GetIndicatorStatus(
  uint8  IndicatorId,
  P2VAR(Dem_IndicatorStatusType, AUTOMATIC, DEM_APPL_DATA)  IndicatorStatus
  );

                                            /* Service Interface EventStatus */
/* ------------------------------------------------------------------------- */
#if (DEM_CFG_SUPPORT_USER_CONTROLLED_WIR == STD_ON)
/* ****************************************************************************
 * Dem_SetWIRStatus
 *****************************************************************************/
/*!
 * \brief         Control Warning Indicator Request Bit override
 *
 * \details       The Dem module controls the state of bit7 (RequestWarningInd)
 *                based on event healing. There are use-cases that require
 *                to keep the bit7 state alive longer than the normal healing
 *                algorithm does, e.g. because a fault reaction is disabled
 *                only with the next ignition cycle.
 *
 *                This function allows implementing such use-cases, without
 *                complicating the normal healing algorithm. Once a monitor
 *                calls this API with WIRStatus = TRUE, the WIR bit is active
 *                and remains active until this state is revoked by calling
 *                the API again, with WIRStatus = FALSE.
 *
 *                The related event will still heal bit7 as normal. Releaseing
 *                the WIR latch will only result in WIR = FALSE if the event
 *                has healed.
 *
 *                During an active ControlDTCSetting (UDS service 0x85) the
 *                override state cannot be changed. In this case the API will
 *                return E_NOT_OK and the caller has to retry the operation
 *                later.
 *
 * \param[in]     EventId
 *                Unique handle of the Event.
 * \param[in]     WIRStatus
 *                TRUE:  Latch WIR-bit to TRUE
 *                FALSE: Release the latch
 *
 * \return        E_OK
 *                Request processed successfully
 * \return        E_NOT_OK
 *                The request was rejected due to invalid arguments, state or
 *                variant coding (see Dem_SetEventAvailable() )
 *
 * \pre           -
 * \config        DEM_CFG_SUPPORT_USER_CONTROLLED_WIR == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE (for different EventIds)
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_SetWIRStatus(
  Dem_EventIdType EventId,
  boolean WIRStatus
  );
#endif

#if (DEM_CFG_SUPPORT_USER_CONTROLLED_WIR == STD_ON)
/* ****************************************************************************
 * Dem_GetWIRStatus
 *****************************************************************************/
/*!
 * \brief         Get state of Warning Indicator Request Bit override
 *
 * \details       Check whether the WIR bit is latched for the event, or if its
 *                state is currently controlled by the Dem module.
 *
 * \param[in]     EventId
 *                Unique handle of the Event.
 * \param[out]    WIRStatus
 *                TRUE:  WIR status is currently latched by user
 *                FALSE: WIR status is currently controlled by Dem
 *
 *                This API is a MICROSAR extension to the AUTOSAR standard
 *
 * \return        E_OK
 *                Request processed successfully
 * \return        E_NOT_OK
 *                The request was rejected due to invalid arguments or
 *                variant coding (see Dem_SetEventAvailable() )
 *
 * \pre           -
 * \config        DEM_CFG_SUPPORT_USER_CONTROLLED_WIR == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_GetWIRStatus(
  Dem_EventIdType EventId,
  P2VAR(boolean, AUTOMATIC, DEM_APPL_DATA) WIRStatus
  );
#endif
                                /* Service Interface EvMemOverflowIndication */
/* ------------------------------------------------------------------------- */

#if (DEM_CFG_SUPPORT_OVFLIND_API == STD_ON)
/* ****************************************************************************
 * Dem_GetEventMemoryOverflow
 *****************************************************************************/
/*!
 * \brief         Test if an event memory has overflown
 *
 * \details       This function reports if a DTC was displaced from the given
 *                event memory because the event memory was completely full at
 *                the time. This includes the case of DTCs that did not enter
 *                the event memory for the same reason.
 *
 * \param[in]     DTCOrigin
 *                Identifier of the event memory concerned:
 *                DEM_DTC_ORIGIN_PRIMARY_MEMORY
 *                DEM_DTC_ORIGIN_PERMANENT_MEMORY
 *                DEM_DTC_ORIGIN_SECONDARY_MEMORY
 * \param[out]    OverflowIndication
 *                Pointer to receive the overflow status:
 *                TRUE: Memory 'DTCOrigin' has overflown
 *                FALSE: Memory 'DTCOrigin' has not overflown
 *
 * \return        E_OK
 *                Request processed successfully
 * \return        E_NOT_OK
 *                The request was rejected due to invalid arguments
 *
 * \pre           -
 * \config        DEM_CFG_SUPPORT_OVFLIND_API == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_GetEventMemoryOverflow(
  Dem_DTCOriginType  DTCOrigin,
  P2VAR(boolean, AUTOMATIC, DEM_APPL_DATA)  OverflowIndication
  );
#endif

#if (DEM_CFG_SUPPORT_OVFLIND_API == STD_ON)
/* ****************************************************************************
 * Dem_GetNumberOfEventMemoryEntries
 *****************************************************************************/
/*!
 * \brief         Gets the number of events currently stored
 *
 * \details       This function reports the number of event entries occupied
 *                by events. This does not necessarily correspond to the DTC
 *                count read by Dcm due to event combination and other effects
 *                like post-building the OBD relevance of a DTC stored in OBD
 *                permanent memory.
 *
 * \param[in]     DTCOrigin
 *                Identifier of the event memory concerned:
 *                DEM_DTC_ORIGIN_PRIMARY_MEMORY
 *                DEM_DTC_ORIGIN_PERMANENT_MEMORY
 *                DEM_DTC_ORIGIN_SECONDARY_MEMORY
 * \param[out]    NumberOfEventMemoryEntries
 *                Pointer to receive the event count
 *
 * \return        E_OK
 *                Request processed successfully
 * \return        E_NOT_OK
 *                The request was rejected due to invalid arguments
 *
 * \pre           -
 * \config        DEM_CFG_SUPPORT_OVFLIND_API == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_GetNumberOfEventMemoryEntries(
  Dem_DTCOriginType  DTCOrigin,                                                                                                  /* PRQA S 1330 */ /* MD_DEM_16.4_rte */
  P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA)  NumberOfEventMemoryEntries
  );
#endif

                                                    /* Interface Dlt <-> Dem */
/* ------------------------------------------------------------------------- */

#if (DEM_CFG_SUPPORT_DLT == STD_ON)
/* ****************************************************************************
 * Dem_DltGetMostRecentFreezeFrameRecordData
 *****************************************************************************/
/*!
 * \brief         API for the Dlt module to read freeze frame data
 *
 * \details       This API is not implemented and will always return E_NOT_OK
 *
 * \param[in]     EventId
 *                Unique handle of the Event
 * \param[out]    DestBuffer
 *                Buffer to receive the data.
 * \param[in,out] BufSize
 *                IN:  Buffer size
 *                OUT: Number of bytes written
 *
 * \return        E_NOT_OK
 *
 * \pre           -
 * \config        DEM_CFG_SUPPORT_DLT == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_DltGetMostRecentFreezeFrameRecordData(
  Dem_EventIdType  EventId,
  P2VAR(uint8, AUTOMATIC, DEM_DLT_DATA)  DestBuffer,
  P2VAR(uint8, AUTOMATIC, DEM_DLT_DATA)  BufSize
  );
#endif

#if (DEM_CFG_SUPPORT_DLT == STD_ON)
/* ****************************************************************************
 * Dem_DltGetAllExtendedDataRecords
 *****************************************************************************/
/*!
 * \brief         API for the Dlt module to read extended data
 *
 * \details       This API is not implemented and will always return E_NOT_OK
 *
 * \param[in]     EventId
 *                Unique handle of the Event
 * \param[out]    DestBuffer
 *                Buffer to receive the data.
 * \param[in,out] BufSize
 *                IN:  Buffer size
 *                OUT: Number of bytes written
 *
 * \return        E_NOT_OK
 *
 * \pre           -
 * \config        DEM_CFG_SUPPORT_DLT == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_DltGetAllExtendedDataRecords(
  Dem_EventIdType  EventId,
  P2VAR(uint8, AUTOMATIC, DEM_DLT_DATA)  DestBuffer,
  P2VAR(uint8, AUTOMATIC, DEM_DLT_DATA)  BufSize
  );
#endif

                                                     /* Extension to Autosar */
/* ------------------------------------------------------------------------- */

/* ****************************************************************************
 * Dem_PostRunRequested
 *****************************************************************************/
/*!
 * \brief         Test whether the Dem can be shut down safely
 *
 * \details       This function must be polled after leaving RUN mode (all
 *                application monitors have been stopped). Due to pending NvM
 *                activity, data loss is possible if Dem_Shutdown is called
 *                while this function still returns TRUE.
 *
 *                This situation only occurs if the dem has to persist two
 *                data changes for the same Event. Basically, the first change
 *                needs to complete the writing process before the Dem can
 *                finalize its state to allow shutdown. Until that time, the
 *                Dem, NvM and the memory stack need to continue running.
 *
 *                As soon as the NvM finishes writing the current Dem data
 *                block, this function will return FALSE. The delay time to
 *                enable shutdown only depends on the write time of that one
 *                data block.
 *
 *                This API is a MICROSAR extension to the AUTOSAR standard
 *
 * \param[out]    IsRequested
 *                TRUE:  Shutdown is not possible without data loss.
 *                FALSE: Shutdown is possible.
 *
 * \return        E_OK
 *                Request processed successfully
 * \return        E_NOT_OK
 *                Only in case of detected development errors
 *
 * \pre           -
 *
 * \context       TASK|ISR2
 * \synchronous   TRUE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_PostRunRequested(
  P2VAR(boolean, AUTOMATIC, DEM_APPL_DATA)  IsRequested
  );

#if (DEM_CFG_SUPPORT_NVM_APPL_SYNCHRONIZE == STD_ON)
/* ****************************************************************************
 % Dem_RequestNvSynchronization
 *****************************************************************************/
/*!
 * \brief         Initiate NV synchronization
 *
 * \details       This function causes the Dem to actively write all modified
 *                NV data blocks into non-volatile memory.
 *
 *                In normal operation, the Dem only synchronizes all data with
 *                the non-volatile storage on shutdown. This relies on the
 *                NvM_WriteAll() mechanism. It can be beneficial to force
 *                a complete NV synchronization more often, e.g. once per
 *                ignition cycle if the ECU does not power down when turning
 *                ignition off.
 *
 *                The NV synchronization is an asynchronous background process
 *                that will eventually store all blocks into non volatile
 *                memory. The Dem can be shut down during this time as normal,
 *                as long as the result of Dem_PostRunRequested() is
 *                respected.
 *
 *                This mechanism does not replace the DemClearDTCBehavior
 *                setting, or using NvM_WriteAll(). It is a complementary
 *                measure to reduce the impact of power loss.
 *
 *                This API is a MICROSAR extension to the AUTOSAR standard
 *
 * \return        E_OK
 *                Request processed successfully
 * \return        E_NOT_OK
 *                Only in case of detected development errors
 *
 * \pre           -
 * \config        DEM_CFG_SUPPORT_NVM_APPL_SYNCHRONIZE == STD_ON
 *
 * \context       TASK|ISR2
 * \synchronous   FALSE
 * \reentrant     TRUE
 *****************************************************************************/
FUNC(Std_ReturnType, DEM_CODE)
Dem_RequestNvSynchronization(
  void
  );
#endif

#define DEM_STOP_SEC_CODE
#include "MemMap.h"

/***********************************************************************************************************************
 *  EXCLUSIVE AREA DEFINITION
 **********************************************************************************************************************/
/*! \page allEA Exclusive Areas
 * \exclusivearea DEM_EXCLUSIVE_AREA_0 (DiagMonitor)
 * Ensures consistency and atomicity of event reports
 * \protects
 * Dem_Cfg_CombinedGroupInternalStatus
 * Dem_Cfg_CombinedGroupStatus
 * Dem_Cfg_EventInternalStatus
 * Dem_Cfg_EventQueue
 * Dem_Cfg_EventQueueStatus
 * Dem_Cfg_StatusData.EventStatus
 * Dem_Cfg_ObdIumprData.Status
 * Dem_Mem_PrestorageHeadIndex
 * Dem_Cfg_Prestorage.EventId
 * Dem_Cfg_Prestorage.State
 * Dem_Cfg_IndicatorContinuous
 * Dem_Cfg_IndicatorBlinking
 * Dem_Cfg_IndicatorFastFlash
 * Dem_Cfg_IndicatorSlowFlash
 * Dem_Cfg_GlobalSpecialIndicatorStates
 * Dem_Cfg_EventDebounceValue
 * Dem_Cfg_EventMaxDebounceValues
 *
 * \usedin
 * Dem_MainFunction
 * Dem_PrestoreFreezeFrame
 * Dem_ClearPrestoredFreezeFrame
 * Dem_SetEventAvailable
 * Dem_SetEventSuppression
 * Dem_SetDTCSuppression
 * Dem_ResetEventDebounceStatus
 * Dem_ReportErrorStatus
 * Dem_SetEventStatus
 * Dem_ResetEventStatus
 * Dem_SetWIRStatus
 * Dem_RepIUMPRFaultDetect
 * Dem_RepIUMPRDenLock
 * Dem_RepIUMPRDenRelease
 * Dem_SetIUMPRDenCondition
 * Dem_GetIndicatorStatus
 *
 * \exclude N/A
 * \length LONG Changing supression or availability of a combined event
 *              must iterate all sub-events of the combination to detect if the
 *              combination is suppressed as a whole.
 *              Setting/Resetting an indicator iterates all configured J1939 nodes
 *         MEDIUM Resetting ratios blocked by FIDs must iterate all ratios, but
 *                releases the critical sections regularly
 *         SHORT In all other cases
 * \endexclusivearea
 *
 ******************************************************************************
 *
 * \exclusivearea DEM_EXCLUSIVE_AREA_1 (StateManager)
 * Ensures consistent status updates when receiving ECU states managed outside
 * the Dem
 *
 * \protects
 * Dem_Cfg_AdminData.ObdCycleState
 * Dem_NextEnableConditionStates
 * Dem_CurrentEnableConditionStates
 * Dem_StorageConditionStates
 * Dem_Queue_CycleFlag
 * Dem_Queue_CycleState
 *
 * \usedin
 * Dem_MainFunction
 * Dem_SetOperationCycleState
 * Dem_SetEnableCondition
 * Dem_SetStorageCondition
 * Dem_DcmDisableDTCSetting
 * Dem_DcmEnableDTCSetting
 * Dem_SetPfcCycle
 *
 * \exclude N/A
 * \length MEDIUM Updating the cycle queue state will use a couple of IF statements
 * \endexclusivearea
 *
 ******************************************************************************
 *
 * \exclusivearea DEM_EXCLUSIVE_AREA_2 (DcmAPI)
 * Ensures consistent status updates when receiving ECU states managed outside
 * the Dem
 *
 * \protects
 * Dem_Cfg_AdminData.OdometerMilOn
 * Dem_Queue_ClearState
 * Dem_Cfg_AdminData.PermanentActivationState (transition off->on)
 *
 * \usedin
 * Dem_MainFunction
 * Dem_ClearDTC
 * Dem_DcmClearDTC
 * Dem_J1939DcmClearDTC
 * Dem_DcmCancelOperation
 * Dem_EnablePermanentStorage
 *
 * \exclude N/A
 * \length MEDIUM Clear request polling requires atomic comparison of multiple values
 * \endexclusivearea
 */

#endif  /* DEM_H */

/* ********************************************************************************************************************
 *  END OF FILE: Dem.h
 *********************************************************************************************************************/
