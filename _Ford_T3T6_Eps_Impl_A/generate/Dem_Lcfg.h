/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Dem
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dem_Lcfg.h
 *   Generation Time: 2018-02-04 15:16:37
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1601056_D00
 *      Tool Version: DaVinci Configurator (beta) 5.14.21 SP3
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/


/* configuration, interrupt handling and callback headers use different names
 * for the multiple inclusion protection define, shown in this example. The
 * appropriate names for these files can be taken from this list:
 *
 * Dem_Cfg.h:     DEM_CFG_H
 * Dem_Lcfg.h:    DEM_LCFG_H
 * Dem_PBcfg.h:   DEM_PBFG_H
 */
#if !defined (DEM_LCFG_H)
# define DEM_LCFG_H

/**********************************************************************************************************************
  MISRA JUSTIFICATIONS
**********************************************************************************************************************/

/* PRQA S 0777 EOF */ /* MD_DEM_5.1 */                                          /* External identifier does not differ in 32 significant characters */
/* PRQA S 0779 EOF */ /* MD_DEM_5.1 */                                          /* Identifier does not differ in 32 significant characters */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */                                      /* Number of macro definitions exceeds 1024 - program is non-conforming -- caused by #include'd files. */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CfgPCDataSwitches  Dem_Cfg Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define DEM_CFG_ADMINDATA                                             STD_ON
#define DEM_CFG_CALLBACKCLEAREVENTALLOWED                             STD_OFF  /**< Deactivateable: 'Dem_Cfg_CallbackClearEventAllowed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_CALLBACKDTCSTATUSCHANGED                              STD_OFF  /**< Deactivateable: 'Dem_Cfg_CallbackDtcStatusChanged' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_CALLBACKGETFDC                                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_CallbackGetFdc' Reason: '(DEM_CFG_SUPPORT_DEBOUNCE_MONITORINTERNAL == STD_OFF)' */
#define DEM_CFG_CALLBACKJ1939DTCSTATUSCHANGED                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_CallbackJ1939DtcStatusChanged' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_COMMITBUFFER                                          STD_ON
#define DEM_CFG_CONFIGURATIONID                                       STD_ON
#define DEM_CFG_CYCLEIDTABLE                                          STD_ON
#define DEM_CFG_ENDSONINITOFCYCLEIDTABLE                              STD_OFF  /**< Deactivateable: 'Dem_Cfg_CycleIdTable.EndsOnInit' Reason: 'no DemOperationCycle/DemOperationCycleAutomaticEnd defined or all defined parameters are 'false'' */
#define DEM_CFG_OPCYCLETYPEOFCYCLEIDTABLE                             STD_ON
#define DEM_CFG_USEDFORAGINGOFCYCLEIDTABLE                            STD_ON
#define DEM_CFG_DATACOLLECTIONTABLE                                   STD_ON
#define DEM_CFG_COLLECTIONSIZEOFDATACOLLECTIONTABLE                   STD_ON
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE STD_ON
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE STD_ON
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTINDUSEDOFDATACOLLECTIONTABLE  STD_ON
#define DEM_CFG_DIDOFFSETFASTOFDATACOLLECTIONTABLE                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_DataCollectionTable.DidOffsetFast' Reason: '(DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST == STD_OFF) && (DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST == STD_OFF)' */
#define DEM_CFG_DIDOFFSETNORMALOFDATACOLLECTIONTABLE                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_DataCollectionTable.DidOffsetNormal' Reason: '(DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL == STD_OFF) && (DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL == STD_OFF)' */
#define DEM_CFG_IDNUMBEROFDATACOLLECTIONTABLE                         STD_ON
#define DEM_CFG_MASKEDBITSOFDATACOLLECTIONTABLE                       STD_ON
#define DEM_CFG_STORAGEKINDOFDATACOLLECTIONTABLE                      STD_ON
#define DEM_CFG_UPDATEOFDATACOLLECTIONTABLE                           STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEEDR2COLLIND                        STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEFFM2COLLIND                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_DataCollectionTableFfm2CollInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_DATACOLLECTIONTABLEJ19392COLLIND                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_DataCollectionTableJ19392CollInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_DATACOLLECTIONTABLEPID2COLLIND                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_DataCollectionTablePid2CollInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_DATAELEMENTTABLE                                      STD_ON
#define DEM_CFG_ELEMENTKINDOFDATAELEMENTTABLE                         STD_ON
#define DEM_CFG_ELEMENTSIZEOFDATAELEMENTTABLE                         STD_ON
#define DEM_CFG_READDATAFUNCOFDATAELEMENTTABLE                        STD_ON
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTIND                           STD_ON
#define DEM_CFG_DEBOUNCEDATA                                          STD_OFF  /**< Deactivateable: 'Dem_Cfg_DebounceData' Reason: 'DEM_CFG_SUPPORT_DEBOUNCE_NV==STD_OFF' */
#define DEM_CFG_DEBOUNCEHIRESTABLE                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_DebounceHiResTable' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_DEBOUNCELORESTABLE                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_DebounceLoResTable' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_DEBOUNCETABLE                                         STD_ON
#define DEM_CFG_DEBOUNCECONTINUOUSOFDEBOUNCETABLE                     STD_ON
#define DEM_CFG_DECREMENTSTEPSIZEOFDEBOUNCETABLE                      STD_ON
#define DEM_CFG_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE                 STD_ON
#define DEM_CFG_EVENTDEBOUNCEBEHAVIOROFDEBOUNCETABLE                  STD_ON
#define DEM_CFG_FAILTIMERCYCLESOFDEBOUNCETABLE                        STD_ON
#define DEM_CFG_FAILEDTHRESHOLDOFDEBOUNCETABLE                        STD_ON
#define DEM_CFG_INCREMENTSTEPSIZEOFDEBOUNCETABLE                      STD_ON
#define DEM_CFG_JUMPDOWNOFDEBOUNCETABLE                               STD_ON
#define DEM_CFG_JUMPDOWNVALUEOFDEBOUNCETABLE                          STD_ON
#define DEM_CFG_JUMPUPOFDEBOUNCETABLE                                 STD_ON
#define DEM_CFG_JUMPUPVALUEOFDEBOUNCETABLE                            STD_ON
#define DEM_CFG_MASKEDBITSOFDEBOUNCETABLE                             STD_ON
#define DEM_CFG_PASSTIMERCYCLESOFDEBOUNCETABLE                        STD_ON
#define DEM_CFG_PASSEDTHRESHOLDOFDEBOUNCETABLE                        STD_ON
#define DEM_CFG_PRECONFIRMEDTHRESHOLDOFDEBOUNCETABLE                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_DebounceTable.PreconfirmedThreshold' Reason: 'DemDebounceCounterPreconfirmedThreshold is not required' */
#define DEM_CFG_STORAGEOFDEBOUNCETABLE                                STD_ON
#define DEM_CFG_STORAGETHRESHOLDOFDEBOUNCETABLE                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_DebounceTable.StorageThreshold' Reason: 'DemEventDebounceCounterStorageThreshold is not required.' */
#define DEM_CFG_STORAGETIMERCYCLESOFDEBOUNCETABLE                     STD_OFF  /**< Deactivateable: 'Dem_Cfg_DebounceTable.StorageTimerCycles' Reason: 'DemDebounceTimeStorageThreshold is not required. ' */
#define DEM_CFG_DTCTABLE                                              STD_ON
#define DEM_CFG_DTCSEVERITYOFDTCTABLE                                 STD_ON
#define DEM_CFG_FUNCTIONALUNITOFDTCTABLE                              STD_ON
#define DEM_CFG_IMMEDIATENVSTORAGEOFDTCTABLE                          STD_ON
#define DEM_CFG_J1939DTCOFDTCTABLE                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcTable.J1939Dtc' Reason: '(DEM_CFG_SUPPORT_J1939 == STD_OFF)' */
#define DEM_CFG_J1939NODEIDINDENDIDXOFDTCTABLE                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcTable.J1939NodeIdIndEndIdx' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_J1939NODEIDINDSTARTIDXOFDTCTABLE                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcTable.J1939NodeIdIndStartIdx' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_J1939NODEIDINDUSEDOFDTCTABLE                          STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcTable.J1939NodeIdIndUsed' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_OBDDTCOFDTCTABLE                                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_DtcTable.ObdDtc' Reason: '(DEM_CFG_SUPPORT_OBDII == STD_OFF)' */
#define DEM_CFG_UDSDTCOFDTCTABLE                                      STD_ON
#define DEM_CFG_ENABLECONDITIONTABLE                                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_EnableConditionTable' Reason: '(DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_EVENTAVAILABLEDATA                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventAvailableData' Reason: 'DEM_CFG_SUPPORT_EVENTAVAILABLE_NV==STD_OFF' */
#define DEM_CFG_EVENTAVAILABLEDEFAULT                                 STD_ON
#define DEM_CFG_EVENTAVAILABLEINVARIANT                               STD_ON
#define DEM_CFG_EVENTCYCLESTATUS                                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventCycleStatus' Reason: '(((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF))) || (DEM_CFG_PROCESS_CDTC_STOREDONLY==STD_OFF)' */
#define DEM_CFG_EVENTDATACHANGED                                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventDataChanged' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EVENTDEBOUNCEVALUE                                    STD_ON
#define DEM_CFG_EVENTINTERNALSTATUS                                   STD_ON
#define DEM_CFG_EVENTMAXDEBOUNCEVALUES                                STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventMaxDebounceValues' Reason: '(Unconfigured DataElement type DEM_MAX_FDC_SINCE_LAST_CLEAR) && (Unconfigured DataElement type DEM_MAX_FDC_DURING_CURRENT_CYCLE)' */
#define DEM_CFG_EVENTQUEUE                                            STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventQueue' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EVENTQUEUESTATUS                                      STD_ON
#define DEM_CFG_EVENTSTATUSCHANGED                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventStatusChanged' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EVENTTABLE                                            STD_ON
#define DEM_CFG_AGINGALLOWEDOFEVENTTABLE                              STD_ON
#define DEM_CFG_AGINGCYCLECOUNTERTHRESHOLDOFEVENTTABLE                STD_ON
#define DEM_CFG_AGINGCYCLEIDOFEVENTTABLE                              STD_ON
#define DEM_CFG_CALLBACKCLEAREVENTALLOWEDIDXOFEVENTTABLE              STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.CallbackClearEventAllowedIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_CALLBACKCLEAREVENTALLOWEDUSEDOFEVENTTABLE             STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.CallbackClearEventAllowedUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_CALLBACKGETFDCIDXOFEVENTTABLE                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.CallbackGetFdcIdx' Reason: '(DEM_CFG_SUPPORT_DEBOUNCE_MONITORINTERNAL == STD_OFF)' */
#define DEM_CFG_DEBOUNCETABLEIDXOFEVENTTABLE                          STD_ON
#define DEM_CFG_DTCTABLEIDXOFEVENTTABLE                               STD_ON
#define DEM_CFG_ENABLECONDITIONTABLEIDXOFEVENTTABLE                   STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.EnableConditionTableIdx' Reason: '(DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_EVENTDATACHANGEDIDXOFEVENTTABLE                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.EventDataChangedIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EVENTDESTINATIONOFEVENTTABLE                          STD_ON
#define DEM_CFG_EVENTFAILURECYCLECOUNTERTHRESHOLDOFEVENTTABLE         STD_ON
#define DEM_CFG_EVENTFAILURECYCLEIDOFEVENTTABLE                       STD_ON
#define DEM_CFG_EVENTKINDOFEVENTTABLE                                 STD_ON
#define DEM_CFG_EVENTLATCHTFOFEVENTTABLE                              STD_ON
#define DEM_CFG_EVENTPRIORITYOFEVENTTABLE                             STD_ON
#define DEM_CFG_EVENTSIGNIFICANCEOFEVENTTABLE                         STD_ON
#define DEM_CFG_EVENTSTATUSCHANGEDENDIDXOFEVENTTABLE                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.EventStatusChangedEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EVENTSTATUSCHANGEDSTARTIDXOFEVENTTABLE                STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.EventStatusChangedStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EVENTSTATUSCHANGEDUSEDOFEVENTTABLE                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.EventStatusChangedUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_EXTENDEDDATATABLEIDXOFEVENTTABLE                      STD_ON
#define DEM_CFG_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.FreezeFrameNumTableEndIdx' Reason: 'the optional indirection is deactivated because FreezeFrameNumTableUsedOfEventTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_CFG_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE               STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.FreezeFrameNumTableStartIdx' Reason: 'the optional indirection is deactivated because FreezeFrameNumTableUsedOfEventTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_CFG_FREEZEFRAMENUMTABLEUSEDOFEVENTTABLE                   STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.FreezeFrameNumTableUsed' Reason: 'the optional indirection is deactivated because FreezeFrameNumTableUsedOfEventTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_CFG_FREEZEFRAMETABLESTDFFIDXOFEVENTTABLE                  STD_ON
#define DEM_CFG_HEALINGTARGETOFEVENTTABLE                             STD_ON
#define DEM_CFG_INITMONLISTFORFUNCIDXOFEVENTTABLE                     STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.InitMonListForFuncIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INITMONITORFOREVENTIDXOFEVENTTABLE                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.InitMonitorForEventIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INITMONITORFOREVENTUSEDOFEVENTTABLE                   STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.InitMonitorForEventUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_MASKEDBITSOFEVENTTABLE                                STD_ON
#define DEM_CFG_NORMALINDICATORTABLEENDIDXOFEVENTTABLE                STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.NormalIndicatorTableEndIdx' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_CFG_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE              STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.NormalIndicatorTableStartIdx' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_CFG_NORMALINDICATORTABLEUSEDOFEVENTTABLE                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.NormalIndicatorTableUsed' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_CFG_OPERATIONCYCLEIDOFEVENTTABLE                          STD_ON
#define DEM_CFG_STORAGECONDITIONTABLEIDXOFEVENTTABLE                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_EventTable.StorageConditionTableIdx' Reason: '(DEM_CFG_SUPPORT_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_EXTENDEDDATATABLE                                     STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEEDR2COLLINDUSEDOFEXTENDEDDATATABLE STD_ON
#define DEM_CFG_MAXRECORDSIZEOFEXTENDEDDATATABLE                      STD_ON
#define DEM_CFG_FILTERREPORTEDEVENTS                                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_FilterReportedEvents' Reason: 'DEM_CFG_PROCESS_CDTC_STOREDONLY==STD_OFF' */
#define DEM_CFG_FINALMAGICNUMBER                                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define DEM_CFG_FREEZEFRAMEDATA                                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_FreezeFrameData' Reason: '(DEM_CFG_SUPPORT_OBDII == STD_OFF)' */
#define DEM_CFG_FREEZEFRAMENUMTABLE                                   STD_OFF  /**< Deactivateable: 'Dem_Cfg_FreezeFrameNumTable' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_FFNUMBEROFFREEZEFRAMENUMTABLE                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_FreezeFrameNumTable.FFNumber' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_FFTRIGGEROFFREEZEFRAMENUMTABLE                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_FreezeFrameNumTable.FFTrigger' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_FFUPDATEOFFREEZEFRAMENUMTABLE                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_FreezeFrameNumTable.FFUpdate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_FREEZEFRAMETABLE                                      STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_FreezeFrameTable.DataCollectionTableFfm2CollIndEndIdx' Reason: 'the optional indirection is deactivated because DataCollectionTableFfm2CollIndUsedOfFreezeFrameTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_CFG_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_FreezeFrameTable.DataCollectionTableFfm2CollIndStartIdx' Reason: 'the optional indirection is deactivated because DataCollectionTableFfm2CollIndUsedOfFreezeFrameTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_CFG_DATACOLLECTIONTABLEFFM2COLLINDUSEDOFFREEZEFRAMETABLE  STD_OFF  /**< Deactivateable: 'Dem_Cfg_FreezeFrameTable.DataCollectionTableFfm2CollIndUsed' Reason: 'the optional indirection is deactivated because DataCollectionTableFfm2CollIndUsedOfFreezeFrameTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_CFG_RECORDSIZEOFFREEZEFRAMETABLE                          STD_ON
#define DEM_CFG_RECORDSIZEUDSOFFREEZEFRAMETABLE                       STD_ON
#define DEM_CFG_GENERALJ1939TABLE                                     STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralJ1939Table' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_CFG_DATACOLLECTIONTABLEJ19392COLLINDENDIDXOFGENERALJ1939TABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralJ1939Table.DataCollectionTableJ19392CollIndEndIdx' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_CFG_DATACOLLECTIONTABLEJ19392COLLINDSTARTIDXOFGENERALJ1939TABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralJ1939Table.DataCollectionTableJ19392CollIndStartIdx' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_CFG_DATACOLLECTIONTABLEJ19392COLLINDUSEDOFGENERALJ1939TABLE STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralJ1939Table.DataCollectionTableJ19392CollIndUsed' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_CFG_RECORDSIZEOFGENERALJ1939TABLE                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralJ1939Table.RecordSize' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_CFG_GENERALOBDINPUT                                       STD_ON
#define DEM_CFG_DATAELEMENTTABLEIDXOFGENERALOBDINPUT                  STD_ON
#define DEM_CFG_GENERALOBDTABLE                                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_GeneralObdTable' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_GLOBALOBDREQUIREMENTS                                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_GlobalObdRequirements' Reason: '((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF))' */
#define DEM_CFG_GLOBALSEVERITYMASK                                    STD_ON
#define DEM_CFG_GLOBALSPECIALINDICATORSTATES                          STD_OFF  /**< Deactivateable: 'Dem_Cfg_GlobalSpecialIndicatorStates' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INDICATORBLINKING                                     STD_OFF  /**< Deactivateable: 'Dem_Cfg_IndicatorBlinking' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INDICATORCONTINUOUS                                   STD_OFF  /**< Deactivateable: 'Dem_Cfg_IndicatorContinuous' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INDICATORFASTFLASH                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_IndicatorFastFlash' Reason: '(DEM_CFG_SUPPORT_J1939 == STD_OFF)' */
#define DEM_CFG_INDICATORSLOWFLASH                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_IndicatorSlowFlash' Reason: '(DEM_CFG_SUPPORT_J1939 == STD_OFF)' */
#define DEM_CFG_INITDATAHASHCODE                                      STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define DEM_CFG_INITMONLISTFORFUNC                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonListForFunc' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_INITMONITORSFORFUNCENDIDXOFINITMONLISTFORFUNC         STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonListForFunc.InitMonitorsForFuncEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_INITMONITORSFORFUNCSTARTIDXOFINITMONLISTFORFUNC       STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonListForFunc.InitMonitorsForFuncStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_INITMONITORSFORFUNCUSEDOFINITMONLISTFORFUNC           STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonListForFunc.InitMonitorsForFuncUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_INITMONITORFOREVENT                                   STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonitorForEvent' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_INITMONITORSFORFUNC                                   STD_OFF  /**< Deactivateable: 'Dem_Cfg_InitMonitorsForFunc' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_J1939NODEID                                           STD_OFF  /**< Deactivateable: 'Dem_Cfg_J1939NodeId' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_J1939NODEIDIND                                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_J1939NodeIdInd' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_J1939NODEINDICATOR                                    STD_OFF  /**< Deactivateable: 'Dem_Cfg_J1939NodeIndicator' Reason: '(DEM_CFG_HAS_J1939_NODE == STD_OFF)' */
#define DEM_CFG_MEMORYBLOCKID                                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_MemoryBlockId' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_CFG_MEMORYCOMMITNUMBER                                    STD_ON
#define DEM_CFG_MEMORYDATAPTR                                         STD_ON
#define DEM_CFG_MEMORYDATASIZE                                        STD_ON
#define DEM_CFG_MEMORYENTRYINIT                                       STD_ON
#define DEM_CFG_MEMORYSTATUS                                          STD_ON
#define DEM_CFG_MIRRORDATA                                            STD_OFF  /**< Deactivateable: 'Dem_Cfg_MirrorData' Reason: 'DEM_CFG_SUPPORT_MIRROR==STD_OFF' */
#define DEM_CFG_NORMALINDICATORTABLE                                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_NormalIndicatorTable' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_CFG_BEHAVIOROFNORMALINDICATORTABLE                        STD_OFF  /**< Deactivateable: 'Dem_Cfg_NormalIndicatorTable.Behavior' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_CFG_IDOFNORMALINDICATORTABLE                              STD_OFF  /**< Deactivateable: 'Dem_Cfg_NormalIndicatorTable.Id' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_CFG_OBDIUMPRDATA                                          STD_OFF  /**< Deactivateable: 'Dem_Cfg_ObdIumprData' Reason: '(((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF))) || (DEM_CFG_SUPPORT_IUMPR==STD_OFF)' */
#define DEM_CFG_OBDIUMPRUPDATEPENDING                                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_ObdIumprUpdatePending' Reason: '(((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF))) || (DEM_CFG_SUPPORT_IUMPR==STD_OFF)' */
#define DEM_CFG_PERMANENTDATA                                         STD_OFF  /**< Deactivateable: 'Dem_Cfg_PermanentData' Reason: '(DEM_CFG_SUPPORT_PERMANENT==STD_OFF) || ((DEM_CFG_SUPPORT_OBDII == STD_OFF))' */
#define DEM_CFG_PIDTABLE                                              STD_OFF  /**< Deactivateable: 'Dem_Cfg_PidTable' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_DATACOLLECTIONTABLEPID2COLLINDENDIDXOFPIDTABLE        STD_OFF  /**< Deactivateable: 'Dem_Cfg_PidTable.DataCollectionTablePid2CollIndEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_DATACOLLECTIONTABLEPID2COLLINDSTARTIDXOFPIDTABLE      STD_OFF  /**< Deactivateable: 'Dem_Cfg_PidTable.DataCollectionTablePid2CollIndStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_DATACOLLECTIONTABLEPID2COLLINDUSEDOFPIDTABLE          STD_OFF  /**< Deactivateable: 'Dem_Cfg_PidTable.DataCollectionTablePid2CollIndUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_CFG_PRESTORAGE                                            STD_OFF  /**< Deactivateable: 'Dem_Cfg_Prestorage' Reason: 'DEM_CFG_SUPPORT_PRESTORED_FF==STD_OFF' */
#define DEM_CFG_PRESTORAGEINDEX                                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_PrestorageIndex' Reason: 'DEM_CFG_SUPPORT_PRESTORED_FF==STD_OFF' */
#define DEM_CFG_PRIMARYCHRONOLOGY                                     STD_ON
#define DEM_CFG_PRIMARYENTRY_0                                        STD_ON
#define DEM_CFG_PRIMARYENTRY_1                                        STD_ON
#define DEM_CFG_PRIMARYENTRY_2                                        STD_ON
#define DEM_CFG_PRIMARYENTRY_3                                        STD_ON
#define DEM_CFG_PRIMARYENTRY_4                                        STD_ON
#define DEM_CFG_PRIMARYENTRY_5                                        STD_ON
#define DEM_CFG_PRIMARYENTRY_6                                        STD_ON
#define DEM_CFG_PRIMARYENTRY_7                                        STD_ON
#define DEM_CFG_RATIOIDTABLE                                          STD_OFF  /**< Deactivateable: 'Dem_Cfg_RatioIdTable' Reason: 'no OBD support or no DemRatioId container configured' */
#define DEM_CFG_READOUTBUFFER                                         STD_ON
#define DEM_CFG_SECONDARYCHRONOLOGY                                   STD_ON
#define DEM_CFG_SECONDARYENTRY_0                                      STD_ON
#define DEM_CFG_SECONDARYENTRY_1                                      STD_ON
#define DEM_CFG_SECONDARYENTRY_10                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_11                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_12                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_13                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_14                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_15                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_16                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_17                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_18                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_19                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_2                                      STD_ON
#define DEM_CFG_SECONDARYENTRY_20                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_21                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_22                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_23                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_24                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_25                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_26                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_27                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_28                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_29                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_3                                      STD_ON
#define DEM_CFG_SECONDARYENTRY_30                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_31                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_32                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_33                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_34                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_35                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_36                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_37                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_38                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_39                                     STD_ON
#define DEM_CFG_SECONDARYENTRY_4                                      STD_ON
#define DEM_CFG_SECONDARYENTRY_5                                      STD_ON
#define DEM_CFG_SECONDARYENTRY_6                                      STD_ON
#define DEM_CFG_SECONDARYENTRY_7                                      STD_ON
#define DEM_CFG_SECONDARYENTRY_8                                      STD_ON
#define DEM_CFG_SECONDARYENTRY_9                                      STD_ON
#define DEM_CFG_SIZEOFDATAELEMENTTABLE                                STD_ON
#define DEM_CFG_SIZEOFEVENTDEBOUNCEVALUE                              STD_ON
#define DEM_CFG_SIZEOFEVENTINTERNALSTATUS                             STD_ON
#define DEM_CFG_SIZEOFEVENTQUEUESTATUS                                STD_ON
#define DEM_CFG_SIZEOFEVENTTABLE                                      STD_ON
#define DEM_CFG_SIZEOFMEMORYCOMMITNUMBER                              STD_ON
#define DEM_CFG_SIZEOFMEMORYSTATUS                                    STD_ON
#define DEM_CFG_SIZEOFPRIMARYCHRONOLOGY                               STD_ON
#define DEM_CFG_SIZEOFSECONDARYCHRONOLOGY                             STD_ON
#define DEM_CFG_SPECIALINDICATORTABLE                                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_SpecialIndicatorTable' Reason: 'no special indicator is configured' */
#define DEM_CFG_BEHAVIOROFSPECIALINDICATORTABLE                       STD_OFF  /**< Deactivateable: 'Dem_Cfg_SpecialIndicatorTable.Behavior' Reason: 'no special indicator is configured' */
#define DEM_CFG_IDOFSPECIALINDICATORTABLE                             STD_OFF  /**< Deactivateable: 'Dem_Cfg_SpecialIndicatorTable.Id' Reason: 'no special indicator is configured' */
#define DEM_CFG_STATUSDATA                                            STD_ON
#define DEM_CFG_STORAGECONDITIONTABLE                                 STD_OFF  /**< Deactivateable: 'Dem_Cfg_StorageConditionTable' Reason: '(DEM_CFG_SUPPORT_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_CFG_TIMESERIESCHRONOLOGY                                  STD_OFF  /**< Deactivateable: 'Dem_Cfg_TimeSeriesChronology' Reason: '(DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST==STD_OFF) || (DEM_CFG_SUPPORT_PRIMARY==STD_OFF)' */
#define DEM_CFG_TIMESERIESENTRYINIT                                   STD_ON
#define DEM_CFG_TIMESERIESREADOUTBUFFER                               STD_OFF  /**< Deactivateable: 'Dem_Cfg_TimeSeriesReadoutBuffer' Reason: 'DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST==STD_OFF && DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST==STD_OFF' */
#define DEM_CFG_UDSDTCGROUP                                           STD_OFF  /**< Deactivateable: 'Dem_Cfg_UdsDtcGroup' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_PCCONFIG                                                  STD_ON
#define DEM_CFG_ADMINDATAOFPCCONFIG                                   STD_ON
#define DEM_CFG_COMMITBUFFEROFPCCONFIG                                STD_ON
#define DEM_CFG_CONFIGURATIONIDOFPCCONFIG                             STD_ON
#define DEM_CFG_CYCLEIDTABLEOFPCCONFIG                                STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEEDR2COLLINDOFPCCONFIG              STD_ON
#define DEM_CFG_DATACOLLECTIONTABLEOFPCCONFIG                         STD_ON
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTINDOFPCCONFIG                 STD_ON
#define DEM_CFG_DATAELEMENTTABLEOFPCCONFIG                            STD_ON
#define DEM_CFG_DEBOUNCETABLEOFPCCONFIG                               STD_ON
#define DEM_CFG_DTCTABLEOFPCCONFIG                                    STD_ON
#define DEM_CFG_EVENTAVAILABLEDEFAULTOFPCCONFIG                       STD_ON
#define DEM_CFG_EVENTAVAILABLEINVARIANTOFPCCONFIG                     STD_ON
#define DEM_CFG_EVENTDEBOUNCEVALUEOFPCCONFIG                          STD_ON
#define DEM_CFG_EVENTINTERNALSTATUSOFPCCONFIG                         STD_ON
#define DEM_CFG_EVENTQUEUESTATUSOFPCCONFIG                            STD_ON
#define DEM_CFG_EVENTTABLEOFPCCONFIG                                  STD_ON
#define DEM_CFG_EXTENDEDDATATABLEOFPCCONFIG                           STD_ON
#define DEM_CFG_FINALMAGICNUMBEROFPCCONFIG                            STD_OFF  /**< Deactivateable: 'Dem_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define DEM_CFG_FREEZEFRAMETABLEOFPCCONFIG                            STD_ON
#define DEM_CFG_GENERALOBDINPUTOFPCCONFIG                             STD_ON
#define DEM_CFG_GLOBALOBDREQUIREMENTSOFPCCONFIG                       STD_OFF  /**< Deactivateable: 'Dem_PCConfig.GlobalObdRequirements' Reason: '((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF))' */
#define DEM_CFG_GLOBALSEVERITYMASKOFPCCONFIG                          STD_ON
#define DEM_CFG_INITDATAHASHCODEOFPCCONFIG                            STD_OFF  /**< Deactivateable: 'Dem_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define DEM_CFG_MEMORYCOMMITNUMBEROFPCCONFIG                          STD_ON
#define DEM_CFG_MEMORYDATAPTROFPCCONFIG                               STD_ON
#define DEM_CFG_MEMORYDATASIZEOFPCCONFIG                              STD_ON
#define DEM_CFG_MEMORYENTRYINITOFPCCONFIG                             STD_ON
#define DEM_CFG_MEMORYSTATUSOFPCCONFIG                                STD_ON
#define DEM_CFG_PRIMARYCHRONOLOGYOFPCCONFIG                           STD_ON
#define DEM_CFG_PRIMARYENTRY_0OFPCCONFIG                              STD_ON
#define DEM_CFG_PRIMARYENTRY_1OFPCCONFIG                              STD_ON
#define DEM_CFG_PRIMARYENTRY_2OFPCCONFIG                              STD_ON
#define DEM_CFG_PRIMARYENTRY_3OFPCCONFIG                              STD_ON
#define DEM_CFG_PRIMARYENTRY_4OFPCCONFIG                              STD_ON
#define DEM_CFG_PRIMARYENTRY_5OFPCCONFIG                              STD_ON
#define DEM_CFG_PRIMARYENTRY_6OFPCCONFIG                              STD_ON
#define DEM_CFG_PRIMARYENTRY_7OFPCCONFIG                              STD_ON
#define DEM_CFG_READOUTBUFFEROFPCCONFIG                               STD_ON
#define DEM_CFG_SECONDARYCHRONOLOGYOFPCCONFIG                         STD_ON
#define DEM_CFG_SECONDARYENTRY_0OFPCCONFIG                            STD_ON
#define DEM_CFG_SECONDARYENTRY_10OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_11OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_12OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_13OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_14OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_15OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_16OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_17OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_18OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_19OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_1OFPCCONFIG                            STD_ON
#define DEM_CFG_SECONDARYENTRY_20OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_21OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_22OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_23OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_24OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_25OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_26OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_27OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_28OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_29OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_2OFPCCONFIG                            STD_ON
#define DEM_CFG_SECONDARYENTRY_30OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_31OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_32OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_33OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_34OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_35OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_36OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_37OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_38OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_39OFPCCONFIG                           STD_ON
#define DEM_CFG_SECONDARYENTRY_3OFPCCONFIG                            STD_ON
#define DEM_CFG_SECONDARYENTRY_4OFPCCONFIG                            STD_ON
#define DEM_CFG_SECONDARYENTRY_5OFPCCONFIG                            STD_ON
#define DEM_CFG_SECONDARYENTRY_6OFPCCONFIG                            STD_ON
#define DEM_CFG_SECONDARYENTRY_7OFPCCONFIG                            STD_ON
#define DEM_CFG_SECONDARYENTRY_8OFPCCONFIG                            STD_ON
#define DEM_CFG_SECONDARYENTRY_9OFPCCONFIG                            STD_ON
#define DEM_CFG_SIZEOFDATAELEMENTTABLEOFPCCONFIG                      STD_ON
#define DEM_CFG_SIZEOFEVENTDEBOUNCEVALUEOFPCCONFIG                    STD_ON
#define DEM_CFG_SIZEOFEVENTINTERNALSTATUSOFPCCONFIG                   STD_ON
#define DEM_CFG_SIZEOFEVENTQUEUESTATUSOFPCCONFIG                      STD_ON
#define DEM_CFG_SIZEOFEVENTTABLEOFPCCONFIG                            STD_ON
#define DEM_CFG_SIZEOFMEMORYCOMMITNUMBEROFPCCONFIG                    STD_ON
#define DEM_CFG_SIZEOFMEMORYSTATUSOFPCCONFIG                          STD_ON
#define DEM_CFG_SIZEOFPRIMARYCHRONOLOGYOFPCCONFIG                     STD_ON
#define DEM_CFG_SIZEOFSECONDARYCHRONOLOGYOFPCCONFIG                   STD_ON
#define DEM_CFG_STATUSDATAOFPCCONFIG                                  STD_ON
#define DEM_CFG_TIMESERIESENTRYINITOFPCCONFIG                         STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCMinNumericValueDefines  Dem_Cfg Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define DEM_CFG_MIN_EVENTDEBOUNCEVALUE                                -32768
#define DEM_CFG_MIN_EVENTQUEUESTATUS                                  0U
#define DEM_CFG_MIN_MEMORYCOMMITNUMBER                                0U
#define DEM_CFG_MIN_MEMORYSTATUS                                      0U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCMaxNumericValueDefines  Dem_Cfg Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define DEM_CFG_MAX_EVENTDEBOUNCEVALUE                                32767
#define DEM_CFG_MAX_EVENTQUEUESTATUS                                  255U
#define DEM_CFG_MAX_MEMORYCOMMITNUMBER                                255U
#define DEM_CFG_MAX_MEMORYSTATUS                                      255U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCNoReferenceDefines  Dem_Cfg No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE 255U
#define DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE 255U
#define DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLIND                     255U
#define DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTIND                        255U
#define DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE 255U
#define DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE 255U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCEnumExistsDefines  Dem_Cfg Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define DEM_CFG_EXISTS_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE STD_ON
#define DEM_CFG_EXISTS_DEM_CFG_DEBOUNCETYPE_TIMER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE STD_OFF
#define DEM_CFG_EXISTS_DEM_CFG_DEBOUNCETYPE_EXTERNAL_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE STD_OFF
#define DEM_CFG_EXISTS_DEM_CFG_DEBOUNCETYPE_INVALID_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE STD_ON
#define DEM_CFG_EXISTS_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE       STD_ON
#define DEM_CFG_EXISTS_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE       STD_ON
#define DEM_CFG_EXISTS_DEM_EVENT_SIGNIFICANCE_OCCURRENCE_EVENTSIGNIFICANCEOFEVENTTABLE STD_OFF
#define DEM_CFG_EXISTS_DEM_EVENT_SIGNIFICANCE_FAULT_EVENTSIGNIFICANCEOFEVENTTABLE STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCEnumDefines  Dem_Cfg Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define DEM_CFG_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE 0x00U
#define DEM_CFG_DEM_CFG_DEBOUNCETYPE_INVALID_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE 0x03U
#define DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE              0x00U
#define DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE              0x01U
#define DEM_CFG_DEM_EVENT_SIGNIFICANCE_FAULT_EVENTSIGNIFICANCEOFEVENTTABLE 0x01U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCMaskedBitDefines  Dem_Cfg Masked Bit Defines (PRE_COMPILE)
  \brief  These defines are masks to extract packed boolean data.
  \{
*/ 
#define DEM_CFG_DATAELEMENTTABLECOL2ELMTINDUSEDOFDATACOLLECTIONTABLE_MASK 0x02U
#define DEM_CFG_UPDATEOFDATACOLLECTIONTABLE_MASK                      0x01U
#define DEM_CFG_DEBOUNCECONTINUOUSOFDEBOUNCETABLE_MASK                0x10U
#define DEM_CFG_EVENTDEBOUNCEBEHAVIOROFDEBOUNCETABLE_MASK             0x08U
#define DEM_CFG_JUMPDOWNOFDEBOUNCETABLE_MASK                          0x04U
#define DEM_CFG_JUMPUPOFDEBOUNCETABLE_MASK                            0x02U
#define DEM_CFG_STORAGEOFDEBOUNCETABLE_MASK                           0x01U
#define DEM_CFG_AGINGALLOWEDOFEVENTTABLE_MASK                         0x02U
#define DEM_CFG_EVENTLATCHTFOFEVENTTABLE_MASK                         0x01U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCIsReducedToDefineDefines  Dem_Cfg Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define DEM_CFG_ISDEF_OPCYCLETYPEOFCYCLEIDTABLE                       STD_OFF
#define DEM_CFG_ISDEF_USEDFORAGINGOFCYCLEIDTABLE                      STD_OFF
#define DEM_CFG_ISDEF_COLLECTIONSIZEOFDATACOLLECTIONTABLE             STD_OFF
#define DEM_CFG_ISDEF_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE STD_OFF
#define DEM_CFG_ISDEF_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE STD_OFF
#define DEM_CFG_ISDEF_DATAELEMENTTABLECOL2ELMTINDUSEDOFDATACOLLECTIONTABLE STD_OFF
#define DEM_CFG_ISDEF_IDNUMBEROFDATACOLLECTIONTABLE                   STD_OFF
#define DEM_CFG_ISDEF_MASKEDBITSOFDATACOLLECTIONTABLE                 STD_OFF
#define DEM_CFG_ISDEF_STORAGEKINDOFDATACOLLECTIONTABLE                STD_OFF
#define DEM_CFG_ISDEF_UPDATEOFDATACOLLECTIONTABLE                     STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEEDR2COLLIND                  STD_OFF
#define DEM_CFG_ISDEF_ELEMENTKINDOFDATAELEMENTTABLE                   STD_OFF
#define DEM_CFG_ISDEF_ELEMENTSIZEOFDATAELEMENTTABLE                   STD_OFF
#define DEM_CFG_ISDEF_READDATAFUNCOFDATAELEMENTTABLE                  STD_OFF
#define DEM_CFG_ISDEF_DATAELEMENTTABLECOL2ELMTIND                     STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCECONTINUOUSOFDEBOUNCETABLE               STD_ON
#define DEM_CFG_ISDEF_DECREMENTSTEPSIZEOFDEBOUNCETABLE                STD_OFF
#define DEM_CFG_ISDEF_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE           STD_OFF
#define DEM_CFG_ISDEF_EVENTDEBOUNCEBEHAVIOROFDEBOUNCETABLE            STD_ON
#define DEM_CFG_ISDEF_FAILTIMERCYCLESOFDEBOUNCETABLE                  STD_ON
#define DEM_CFG_ISDEF_FAILEDTHRESHOLDOFDEBOUNCETABLE                  STD_OFF
#define DEM_CFG_ISDEF_INCREMENTSTEPSIZEOFDEBOUNCETABLE                STD_OFF
#define DEM_CFG_ISDEF_JUMPDOWNOFDEBOUNCETABLE                         STD_OFF
#define DEM_CFG_ISDEF_JUMPDOWNVALUEOFDEBOUNCETABLE                    STD_ON
#define DEM_CFG_ISDEF_JUMPUPOFDEBOUNCETABLE                           STD_OFF
#define DEM_CFG_ISDEF_JUMPUPVALUEOFDEBOUNCETABLE                      STD_ON
#define DEM_CFG_ISDEF_MASKEDBITSOFDEBOUNCETABLE                       STD_OFF
#define DEM_CFG_ISDEF_PASSTIMERCYCLESOFDEBOUNCETABLE                  STD_ON
#define DEM_CFG_ISDEF_PASSEDTHRESHOLDOFDEBOUNCETABLE                  STD_OFF
#define DEM_CFG_ISDEF_STORAGEOFDEBOUNCETABLE                          STD_ON
#define DEM_CFG_ISDEF_DTCSEVERITYOFDTCTABLE                           STD_ON
#define DEM_CFG_ISDEF_FUNCTIONALUNITOFDTCTABLE                        STD_ON
#define DEM_CFG_ISDEF_IMMEDIATENVSTORAGEOFDTCTABLE                    STD_ON
#define DEM_CFG_ISDEF_UDSDTCOFDTCTABLE                                STD_OFF
#define DEM_CFG_ISDEF_EVENTAVAILABLEDEFAULT                           STD_ON
#define DEM_CFG_ISDEF_EVENTAVAILABLEINVARIANT                         STD_ON
#define DEM_CFG_ISDEF_AGINGALLOWEDOFEVENTTABLE                        STD_ON
#define DEM_CFG_ISDEF_AGINGCYCLECOUNTERTHRESHOLDOFEVENTTABLE          STD_ON
#define DEM_CFG_ISDEF_AGINGCYCLEIDOFEVENTTABLE                        STD_OFF
#define DEM_CFG_ISDEF_DEBOUNCETABLEIDXOFEVENTTABLE                    STD_OFF
#define DEM_CFG_ISDEF_DTCTABLEIDXOFEVENTTABLE                         STD_OFF
#define DEM_CFG_ISDEF_EVENTDESTINATIONOFEVENTTABLE                    STD_OFF
#define DEM_CFG_ISDEF_EVENTFAILURECYCLECOUNTERTHRESHOLDOFEVENTTABLE   STD_ON
#define DEM_CFG_ISDEF_EVENTFAILURECYCLEIDOFEVENTTABLE                 STD_ON
#define DEM_CFG_ISDEF_EVENTKINDOFEVENTTABLE                           STD_OFF
#define DEM_CFG_ISDEF_EVENTLATCHTFOFEVENTTABLE                        STD_ON
#define DEM_CFG_ISDEF_EVENTPRIORITYOFEVENTTABLE                       STD_ON
#define DEM_CFG_ISDEF_EVENTSIGNIFICANCEOFEVENTTABLE                   STD_ON
#define DEM_CFG_ISDEF_EXTENDEDDATATABLEIDXOFEVENTTABLE                STD_OFF
#define DEM_CFG_ISDEF_FREEZEFRAMETABLESTDFFIDXOFEVENTTABLE            STD_ON
#define DEM_CFG_ISDEF_HEALINGTARGETOFEVENTTABLE                       STD_ON
#define DEM_CFG_ISDEF_MASKEDBITSOFEVENTTABLE                          STD_ON
#define DEM_CFG_ISDEF_OPERATIONCYCLEIDOFEVENTTABLE                    STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE STD_OFF
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEEDR2COLLINDUSEDOFEXTENDEDDATATABLE STD_OFF
#define DEM_CFG_ISDEF_MAXRECORDSIZEOFEXTENDEDDATATABLE                STD_OFF
#define DEM_CFG_ISDEF_RECORDSIZEOFFREEZEFRAMETABLE                    STD_ON
#define DEM_CFG_ISDEF_RECORDSIZEUDSOFFREEZEFRAMETABLE                 STD_ON
#define DEM_CFG_ISDEF_DATAELEMENTTABLEIDXOFGENERALOBDINPUT            STD_ON
#define DEM_CFG_ISDEF_MEMORYDATAPTR                                   STD_OFF
#define DEM_CFG_ISDEF_MEMORYDATASIZE                                  STD_OFF
#define DEM_CFG_ISDEF_ADMINDATAOFPCCONFIG                             STD_ON
#define DEM_CFG_ISDEF_COMMITBUFFEROFPCCONFIG                          STD_ON
#define DEM_CFG_ISDEF_CYCLEIDTABLEOFPCCONFIG                          STD_ON
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEEDR2COLLINDOFPCCONFIG        STD_ON
#define DEM_CFG_ISDEF_DATACOLLECTIONTABLEOFPCCONFIG                   STD_ON
#define DEM_CFG_ISDEF_DATAELEMENTTABLECOL2ELMTINDOFPCCONFIG           STD_ON
#define DEM_CFG_ISDEF_DATAELEMENTTABLEOFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_DEBOUNCETABLEOFPCCONFIG                         STD_ON
#define DEM_CFG_ISDEF_DTCTABLEOFPCCONFIG                              STD_ON
#define DEM_CFG_ISDEF_EVENTAVAILABLEDEFAULTOFPCCONFIG                 STD_ON
#define DEM_CFG_ISDEF_EVENTAVAILABLEINVARIANTOFPCCONFIG               STD_ON
#define DEM_CFG_ISDEF_EVENTDEBOUNCEVALUEOFPCCONFIG                    STD_ON
#define DEM_CFG_ISDEF_EVENTINTERNALSTATUSOFPCCONFIG                   STD_ON
#define DEM_CFG_ISDEF_EVENTQUEUESTATUSOFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_EVENTTABLEOFPCCONFIG                            STD_ON
#define DEM_CFG_ISDEF_EXTENDEDDATATABLEOFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_FREEZEFRAMETABLEOFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_GENERALOBDINPUTOFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_MEMORYCOMMITNUMBEROFPCCONFIG                    STD_ON
#define DEM_CFG_ISDEF_MEMORYDATAPTROFPCCONFIG                         STD_ON
#define DEM_CFG_ISDEF_MEMORYDATASIZEOFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_MEMORYENTRYINITOFPCCONFIG                       STD_ON
#define DEM_CFG_ISDEF_MEMORYSTATUSOFPCCONFIG                          STD_ON
#define DEM_CFG_ISDEF_PRIMARYCHRONOLOGYOFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_0OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_1OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_2OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_3OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_4OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_5OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_6OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_PRIMARYENTRY_7OFPCCONFIG                        STD_ON
#define DEM_CFG_ISDEF_READOUTBUFFEROFPCCONFIG                         STD_ON
#define DEM_CFG_ISDEF_SECONDARYCHRONOLOGYOFPCCONFIG                   STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_0OFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_10OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_11OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_12OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_13OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_14OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_15OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_16OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_17OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_18OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_19OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_1OFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_20OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_21OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_22OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_23OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_24OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_25OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_26OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_27OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_28OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_29OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_2OFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_30OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_31OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_32OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_33OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_34OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_35OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_36OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_37OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_38OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_39OFPCCONFIG                     STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_3OFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_4OFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_5OFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_6OFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_7OFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_8OFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_SECONDARYENTRY_9OFPCCONFIG                      STD_ON
#define DEM_CFG_ISDEF_STATUSDATAOFPCCONFIG                            STD_ON
#define DEM_CFG_ISDEF_TIMESERIESENTRYINITOFPCCONFIG                   STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCEqualsAlwaysToDefines  Dem_Cfg Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define DEM_CFG_EQ2_OPCYCLETYPEOFCYCLEIDTABLE                         
#define DEM_CFG_EQ2_USEDFORAGINGOFCYCLEIDTABLE                        
#define DEM_CFG_EQ2_COLLECTIONSIZEOFDATACOLLECTIONTABLE               
#define DEM_CFG_EQ2_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE 
#define DEM_CFG_EQ2_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE 
#define DEM_CFG_EQ2_DATAELEMENTTABLECOL2ELMTINDUSEDOFDATACOLLECTIONTABLE 
#define DEM_CFG_EQ2_IDNUMBEROFDATACOLLECTIONTABLE                     
#define DEM_CFG_EQ2_MASKEDBITSOFDATACOLLECTIONTABLE                   
#define DEM_CFG_EQ2_STORAGEKINDOFDATACOLLECTIONTABLE                  
#define DEM_CFG_EQ2_UPDATEOFDATACOLLECTIONTABLE                       
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEEDR2COLLIND                    
#define DEM_CFG_EQ2_ELEMENTKINDOFDATAELEMENTTABLE                     
#define DEM_CFG_EQ2_ELEMENTSIZEOFDATAELEMENTTABLE                     
#define DEM_CFG_EQ2_READDATAFUNCOFDATAELEMENTTABLE                    
#define DEM_CFG_EQ2_DATAELEMENTTABLECOL2ELMTIND                       
#define DEM_CFG_EQ2_DEBOUNCECONTINUOUSOFDEBOUNCETABLE                 FALSE
#define DEM_CFG_EQ2_DECREMENTSTEPSIZEOFDEBOUNCETABLE                  
#define DEM_CFG_EQ2_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE             
#define DEM_CFG_EQ2_EVENTDEBOUNCEBEHAVIOROFDEBOUNCETABLE              FALSE
#define DEM_CFG_EQ2_FAILTIMERCYCLESOFDEBOUNCETABLE                    0
#define DEM_CFG_EQ2_FAILEDTHRESHOLDOFDEBOUNCETABLE                    
#define DEM_CFG_EQ2_INCREMENTSTEPSIZEOFDEBOUNCETABLE                  
#define DEM_CFG_EQ2_JUMPDOWNOFDEBOUNCETABLE                           
#define DEM_CFG_EQ2_JUMPDOWNVALUEOFDEBOUNCETABLE                      0
#define DEM_CFG_EQ2_JUMPUPOFDEBOUNCETABLE                             
#define DEM_CFG_EQ2_JUMPUPVALUEOFDEBOUNCETABLE                        0
#define DEM_CFG_EQ2_MASKEDBITSOFDEBOUNCETABLE                         
#define DEM_CFG_EQ2_PASSTIMERCYCLESOFDEBOUNCETABLE                    0
#define DEM_CFG_EQ2_PASSEDTHRESHOLDOFDEBOUNCETABLE                    
#define DEM_CFG_EQ2_STORAGEOFDEBOUNCETABLE                            FALSE
#define DEM_CFG_EQ2_DTCSEVERITYOFDTCTABLE                             0U
#define DEM_CFG_EQ2_FUNCTIONALUNITOFDTCTABLE                          255U
#define DEM_CFG_EQ2_IMMEDIATENVSTORAGEOFDTCTABLE                      FALSE
#define DEM_CFG_EQ2_UDSDTCOFDTCTABLE                                  
#define DEM_CFG_EQ2_EVENTAVAILABLEDEFAULT                             TRUE
#define DEM_CFG_EQ2_EVENTAVAILABLEINVARIANT                           TRUE
#define DEM_CFG_EQ2_AGINGALLOWEDOFEVENTTABLE                          FALSE
#define DEM_CFG_EQ2_AGINGCYCLECOUNTERTHRESHOLDOFEVENTTABLE            255U
#define DEM_CFG_EQ2_AGINGCYCLEIDOFEVENTTABLE                          
#define DEM_CFG_EQ2_DEBOUNCETABLEIDXOFEVENTTABLE                      
#define DEM_CFG_EQ2_DTCTABLEIDXOFEVENTTABLE                           
#define DEM_CFG_EQ2_EVENTDESTINATIONOFEVENTTABLE                      
#define DEM_CFG_EQ2_EVENTFAILURECYCLECOUNTERTHRESHOLDOFEVENTTABLE     0U
#define DEM_CFG_EQ2_EVENTFAILURECYCLEIDOFEVENTTABLE                   /*no EventFailureCycle*/ 3U
#define DEM_CFG_EQ2_EVENTKINDOFEVENTTABLE                             
#define DEM_CFG_EQ2_EVENTLATCHTFOFEVENTTABLE                          FALSE
#define DEM_CFG_EQ2_EVENTPRIORITYOFEVENTTABLE                         2U
#define DEM_CFG_EQ2_EVENTSIGNIFICANCEOFEVENTTABLE                     DEM_CFG_DEM_EVENT_SIGNIFICANCE_FAULT_EVENTSIGNIFICANCEOFEVENTTABLE
#define DEM_CFG_EQ2_EXTENDEDDATATABLEIDXOFEVENTTABLE                  
#define DEM_CFG_EQ2_FREEZEFRAMETABLESTDFFIDXOFEVENTTABLE              0U
#define DEM_CFG_EQ2_HEALINGTARGETOFEVENTTABLE                         0U
#define DEM_CFG_EQ2_MASKEDBITSOFEVENTTABLE                            0x00U
#define DEM_CFG_EQ2_OPERATIONCYCLEIDOFEVENTTABLE                      
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE 
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE 
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEEDR2COLLINDUSEDOFEXTENDEDDATATABLE 
#define DEM_CFG_EQ2_MAXRECORDSIZEOFEXTENDEDDATATABLE                  
#define DEM_CFG_EQ2_RECORDSIZEOFFREEZEFRAMETABLE                      0U
#define DEM_CFG_EQ2_RECORDSIZEUDSOFFREEZEFRAMETABLE                   0U
#define DEM_CFG_EQ2_DATAELEMENTTABLEIDXOFGENERALOBDINPUT              0U
#define DEM_CFG_EQ2_MEMORYDATAPTR                                     
#define DEM_CFG_EQ2_MEMORYDATASIZE                                    
#define DEM_CFG_EQ2_ADMINDATAOFPCCONFIG                               Dem_Cfg_AdminData
#define DEM_CFG_EQ2_COMMITBUFFEROFPCCONFIG                            Dem_Cfg_CommitBuffer
#define DEM_CFG_EQ2_CYCLEIDTABLEOFPCCONFIG                            Dem_Cfg_CycleIdTable
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEEDR2COLLINDOFPCCONFIG          Dem_Cfg_DataCollectionTableEdr2CollInd
#define DEM_CFG_EQ2_DATACOLLECTIONTABLEOFPCCONFIG                     Dem_Cfg_DataCollectionTable
#define DEM_CFG_EQ2_DATAELEMENTTABLECOL2ELMTINDOFPCCONFIG             Dem_Cfg_DataElementTableCol2ElmtInd
#define DEM_CFG_EQ2_DATAELEMENTTABLEOFPCCONFIG                        Dem_Cfg_DataElementTable
#define DEM_CFG_EQ2_DEBOUNCETABLEOFPCCONFIG                           Dem_Cfg_DebounceTable
#define DEM_CFG_EQ2_DTCTABLEOFPCCONFIG                                Dem_Cfg_DtcTable
#define DEM_CFG_EQ2_EVENTAVAILABLEDEFAULTOFPCCONFIG                   Dem_Cfg_EventAvailableDefault
#define DEM_CFG_EQ2_EVENTAVAILABLEINVARIANTOFPCCONFIG                 Dem_Cfg_EventAvailableInVariant
#define DEM_CFG_EQ2_EVENTDEBOUNCEVALUEOFPCCONFIG                      Dem_Cfg_EventDebounceValue
#define DEM_CFG_EQ2_EVENTINTERNALSTATUSOFPCCONFIG                     Dem_Cfg_EventInternalStatus
#define DEM_CFG_EQ2_EVENTQUEUESTATUSOFPCCONFIG                        Dem_Cfg_EventQueueStatus
#define DEM_CFG_EQ2_EVENTTABLEOFPCCONFIG                              Dem_Cfg_EventTable
#define DEM_CFG_EQ2_EXTENDEDDATATABLEOFPCCONFIG                       Dem_Cfg_ExtendedDataTable
#define DEM_CFG_EQ2_FREEZEFRAMETABLEOFPCCONFIG                        Dem_Cfg_FreezeFrameTable
#define DEM_CFG_EQ2_GENERALOBDINPUTOFPCCONFIG                         Dem_Cfg_GeneralObdInput
#define DEM_CFG_EQ2_MEMORYCOMMITNUMBEROFPCCONFIG                      Dem_Cfg_MemoryCommitNumber
#define DEM_CFG_EQ2_MEMORYDATAPTROFPCCONFIG                           Dem_Cfg_MemoryDataPtr
#define DEM_CFG_EQ2_MEMORYDATASIZEOFPCCONFIG                          Dem_Cfg_MemoryDataSize
#define DEM_CFG_EQ2_MEMORYENTRYINITOFPCCONFIG                         Dem_Cfg_MemoryEntryInit
#define DEM_CFG_EQ2_MEMORYSTATUSOFPCCONFIG                            Dem_Cfg_MemoryStatus
#define DEM_CFG_EQ2_PRIMARYCHRONOLOGYOFPCCONFIG                       Dem_Cfg_PrimaryChronology
#define DEM_CFG_EQ2_PRIMARYENTRY_0OFPCCONFIG                          Dem_Cfg_PrimaryEntry_0
#define DEM_CFG_EQ2_PRIMARYENTRY_1OFPCCONFIG                          Dem_Cfg_PrimaryEntry_1
#define DEM_CFG_EQ2_PRIMARYENTRY_2OFPCCONFIG                          Dem_Cfg_PrimaryEntry_2
#define DEM_CFG_EQ2_PRIMARYENTRY_3OFPCCONFIG                          Dem_Cfg_PrimaryEntry_3
#define DEM_CFG_EQ2_PRIMARYENTRY_4OFPCCONFIG                          Dem_Cfg_PrimaryEntry_4
#define DEM_CFG_EQ2_PRIMARYENTRY_5OFPCCONFIG                          Dem_Cfg_PrimaryEntry_5
#define DEM_CFG_EQ2_PRIMARYENTRY_6OFPCCONFIG                          Dem_Cfg_PrimaryEntry_6
#define DEM_CFG_EQ2_PRIMARYENTRY_7OFPCCONFIG                          Dem_Cfg_PrimaryEntry_7
#define DEM_CFG_EQ2_READOUTBUFFEROFPCCONFIG                           Dem_Cfg_ReadoutBuffer
#define DEM_CFG_EQ2_SECONDARYCHRONOLOGYOFPCCONFIG                     Dem_Cfg_SecondaryChronology
#define DEM_CFG_EQ2_SECONDARYENTRY_0OFPCCONFIG                        Dem_Cfg_SecondaryEntry_0
#define DEM_CFG_EQ2_SECONDARYENTRY_10OFPCCONFIG                       Dem_Cfg_SecondaryEntry_10
#define DEM_CFG_EQ2_SECONDARYENTRY_11OFPCCONFIG                       Dem_Cfg_SecondaryEntry_11
#define DEM_CFG_EQ2_SECONDARYENTRY_12OFPCCONFIG                       Dem_Cfg_SecondaryEntry_12
#define DEM_CFG_EQ2_SECONDARYENTRY_13OFPCCONFIG                       Dem_Cfg_SecondaryEntry_13
#define DEM_CFG_EQ2_SECONDARYENTRY_14OFPCCONFIG                       Dem_Cfg_SecondaryEntry_14
#define DEM_CFG_EQ2_SECONDARYENTRY_15OFPCCONFIG                       Dem_Cfg_SecondaryEntry_15
#define DEM_CFG_EQ2_SECONDARYENTRY_16OFPCCONFIG                       Dem_Cfg_SecondaryEntry_16
#define DEM_CFG_EQ2_SECONDARYENTRY_17OFPCCONFIG                       Dem_Cfg_SecondaryEntry_17
#define DEM_CFG_EQ2_SECONDARYENTRY_18OFPCCONFIG                       Dem_Cfg_SecondaryEntry_18
#define DEM_CFG_EQ2_SECONDARYENTRY_19OFPCCONFIG                       Dem_Cfg_SecondaryEntry_19
#define DEM_CFG_EQ2_SECONDARYENTRY_1OFPCCONFIG                        Dem_Cfg_SecondaryEntry_1
#define DEM_CFG_EQ2_SECONDARYENTRY_20OFPCCONFIG                       Dem_Cfg_SecondaryEntry_20
#define DEM_CFG_EQ2_SECONDARYENTRY_21OFPCCONFIG                       Dem_Cfg_SecondaryEntry_21
#define DEM_CFG_EQ2_SECONDARYENTRY_22OFPCCONFIG                       Dem_Cfg_SecondaryEntry_22
#define DEM_CFG_EQ2_SECONDARYENTRY_23OFPCCONFIG                       Dem_Cfg_SecondaryEntry_23
#define DEM_CFG_EQ2_SECONDARYENTRY_24OFPCCONFIG                       Dem_Cfg_SecondaryEntry_24
#define DEM_CFG_EQ2_SECONDARYENTRY_25OFPCCONFIG                       Dem_Cfg_SecondaryEntry_25
#define DEM_CFG_EQ2_SECONDARYENTRY_26OFPCCONFIG                       Dem_Cfg_SecondaryEntry_26
#define DEM_CFG_EQ2_SECONDARYENTRY_27OFPCCONFIG                       Dem_Cfg_SecondaryEntry_27
#define DEM_CFG_EQ2_SECONDARYENTRY_28OFPCCONFIG                       Dem_Cfg_SecondaryEntry_28
#define DEM_CFG_EQ2_SECONDARYENTRY_29OFPCCONFIG                       Dem_Cfg_SecondaryEntry_29
#define DEM_CFG_EQ2_SECONDARYENTRY_2OFPCCONFIG                        Dem_Cfg_SecondaryEntry_2
#define DEM_CFG_EQ2_SECONDARYENTRY_30OFPCCONFIG                       Dem_Cfg_SecondaryEntry_30
#define DEM_CFG_EQ2_SECONDARYENTRY_31OFPCCONFIG                       Dem_Cfg_SecondaryEntry_31
#define DEM_CFG_EQ2_SECONDARYENTRY_32OFPCCONFIG                       Dem_Cfg_SecondaryEntry_32
#define DEM_CFG_EQ2_SECONDARYENTRY_33OFPCCONFIG                       Dem_Cfg_SecondaryEntry_33
#define DEM_CFG_EQ2_SECONDARYENTRY_34OFPCCONFIG                       Dem_Cfg_SecondaryEntry_34
#define DEM_CFG_EQ2_SECONDARYENTRY_35OFPCCONFIG                       Dem_Cfg_SecondaryEntry_35
#define DEM_CFG_EQ2_SECONDARYENTRY_36OFPCCONFIG                       Dem_Cfg_SecondaryEntry_36
#define DEM_CFG_EQ2_SECONDARYENTRY_37OFPCCONFIG                       Dem_Cfg_SecondaryEntry_37
#define DEM_CFG_EQ2_SECONDARYENTRY_38OFPCCONFIG                       Dem_Cfg_SecondaryEntry_38
#define DEM_CFG_EQ2_SECONDARYENTRY_39OFPCCONFIG                       Dem_Cfg_SecondaryEntry_39
#define DEM_CFG_EQ2_SECONDARYENTRY_3OFPCCONFIG                        Dem_Cfg_SecondaryEntry_3
#define DEM_CFG_EQ2_SECONDARYENTRY_4OFPCCONFIG                        Dem_Cfg_SecondaryEntry_4
#define DEM_CFG_EQ2_SECONDARYENTRY_5OFPCCONFIG                        Dem_Cfg_SecondaryEntry_5
#define DEM_CFG_EQ2_SECONDARYENTRY_6OFPCCONFIG                        Dem_Cfg_SecondaryEntry_6
#define DEM_CFG_EQ2_SECONDARYENTRY_7OFPCCONFIG                        Dem_Cfg_SecondaryEntry_7
#define DEM_CFG_EQ2_SECONDARYENTRY_8OFPCCONFIG                        Dem_Cfg_SecondaryEntry_8
#define DEM_CFG_EQ2_SECONDARYENTRY_9OFPCCONFIG                        Dem_Cfg_SecondaryEntry_9
#define DEM_CFG_EQ2_STATUSDATAOFPCCONFIG                              Dem_Cfg_StatusData
#define DEM_CFG_EQ2_TIMESERIESENTRYINITOFPCCONFIG                     Dem_Cfg_TimeSeriesEntryInit
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCSymbolicInitializationPointers  Dem_Cfg Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define Dem_Config_Ptr                                                NULL_PTR  /**< symbolic identifier which shall be used to initialize 'Dem' */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCInitializationSymbols  Dem_Cfg Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define Dem_Config                                                    NULL_PTR  /**< symbolic identifier which could be used to initialize 'Dem */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCGeneral  Dem_Cfg General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define DEM_CFG_CHECK_INIT_POINTER                                    STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define DEM_CFG_FINAL_MAGIC_NUMBER                                    0x361EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of Dem */
#define DEM_CFG_INDIVIDUAL_POSTBUILD                                  STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'Dem' is not configured to be postbuild capable. */
#define DEM_CFG_INIT_DATA                                             DEM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define DEM_CFG_INIT_DATA_HASH_CODE                                   -1434282830L  /**< the precompile constant to validate the initialization structure at initialization time of Dem with a hashcode. The seed value is '0x361EU' */
#define DEM_CFG_USE_ECUM_BSW_ERROR_HOOK                               STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define DEM_CFG_USE_INIT_POINTER                                      STD_OFF  /**< STD_ON if the init pointer Dem shall be used. */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CfgLTDataSwitches  Dem_Cfg Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define DEM_LTCONFIG                                                  STD_OFF  /**< Deactivateable: 'Dem_LTConfig' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
/** 
  \}
*/ 


/*********************************************************************************************************************/


 /*  Invalid Indicator IDs  */ 
#define DEM_CFG_INDICATOR_INVALID                                     0U           /* Lowest, unused IndicatorID */ 
#define DEM_CFG_SPECIAL_INDICATOR_NONE                                255U         /* Always different from DEM_CFG_INDICATOR_INVALID */ 

 /*  Indicator global definitions  */ 
#define DEM_CFG_GLOBAL_INDICATOR_COUNT                                0U           /* Total number of configured Indicators */ 


 /*  Aging- and OperationCycle IDs [symbolic name value]  */ 
#define DemConf_DemOperationCycle_DemOperationCycle                   0U 
#define Dem_DemOperationCycle                                         0U 
#define DemConf_DemOperationCycle_IgnitionCycle                       1U 
#define Dem_IgnitionCycle                                             1U 
#define DemConf_DemOperationCycle_PowerCycle                          2U 
#define Dem_PowerCycle                                                2U 

 /*  Global, cycle related values  */ 
#define DEM_CFG_GLOBAL_CYCLE_COUNT                                    3U                                                                /* Total number of configured (operation and aging) cycles. */ 
#define DEM_CFG_GLOBAL_OBD_DRIVING_CYCLE_ID                           /* No DemOperationCycleType 'DEM_OPCYC_OBD_DCY' configured. */    /* Cycle ID of the DemOperationCycleType 'DEM_OPCYC_OBD_DCY'. */ 
#define DEM_CFG_GLOBAL_WARMUP_CYCLE_ID                                /* No DemOperationCycleType 'DEM_OPCYC_WARMUP' configured. */     /* Cycle ID of the DemOperationCycleType 'DEM_OPCYC_WARMUP'. */ 



 /*  Support for optimized routines of Vector DCM - Extended Data records  */ 
#define DEM_DCM_NUM_EXTDATA_RECID                                     2U 
#define DEM_DCM_LST_EXTDATA_RECID                                     0x02U, 0x10U 

 /*  Event IDs [symbolic name value] - sorted by name.
     See Dem_Cfg_EventTable[] for this list sorted by Ids.  */ 
#define DemConf_DemEventParameter_DIO_E_REG_WRITE_VERIFY              1U 
#define DemConf_DemEventParameter_DTC_0x502d00                        6U 
#define DemConf_DemEventParameter_DTC_0x511056                        13U 
#define DemConf_DemEventParameter_DTC_0x5b0049                        3U 
#define DemConf_DemEventParameter_DTC_0x5b0062                        4U 
#define DemConf_DemEventParameter_DTC_0x600b49                        7U 
#define DemConf_DemEventParameter_DTC_0x600b62                        8U 
#define DemConf_DemEventParameter_DTC_0x600c49                        9U 
#define DemConf_DemEventParameter_DTC_0x600c62                        10U 
#define DemConf_DemEventParameter_DTC_0x600d49                        11U 
#define DemConf_DemEventParameter_DTC_0x600d62                        12U 
#define DemConf_DemEventParameter_DTC_0x9d234b                        5U 
#define DemConf_DemEventParameter_DTC_0xc10000                        19U 
#define DemConf_DemEventParameter_DTC_0xc10200                        20U 
#define DemConf_DemEventParameter_DTC_0xc12100                        21U 
#define DemConf_DemEventParameter_DTC_0xc12200                        22U 
#define DemConf_DemEventParameter_DTC_0xc12600                        23U 
#define DemConf_DemEventParameter_DTC_0xc14000                        24U 
#define DemConf_DemEventParameter_DTC_0xc14600                        25U 
#define DemConf_DemEventParameter_DTC_0xc15500                        26U 
#define DemConf_DemEventParameter_DTC_0xc15900                        27U 
#define DemConf_DemEventParameter_DTC_0xc23a00                        14U 
#define DemConf_DemEventParameter_DTC_0xc23b00                        15U 
#define DemConf_DemEventParameter_DTC_0xc25200                        28U 
#define DemConf_DemEventParameter_DTC_0xc25300                        29U 
#define DemConf_DemEventParameter_DTC_0xc25600                        30U 
#define DemConf_DemEventParameter_DTC_0xc40100                        31U 
#define DemConf_DemEventParameter_DTC_0xc40300                        32U 
#define DemConf_DemEventParameter_DTC_0xc41500                        33U 
#define DemConf_DemEventParameter_DTC_0xc41522                        34U 
#define DemConf_DemEventParameter_DTC_0xc41600                        35U 
#define DemConf_DemEventParameter_DTC_0xc42200                        36U 
#define DemConf_DemEventParameter_DTC_0xc42300                        37U 
#define DemConf_DemEventParameter_DTC_0xc42800                        38U 
#define DemConf_DemEventParameter_DTC_0xc45a00                        16U 
#define DemConf_DemEventParameter_DTC_0xc53b00                        17U 
#define DemConf_DemEventParameter_DTC_0xc53c00                        18U 
#define DemConf_DemEventParameter_DTC_0xc55300                        39U 
#define DemConf_DemEventParameter_DTC_0xc55400                        40U 
#define DemConf_DemEventParameter_DTC_0xc55700                        41U 
#define DemConf_DemEventParameter_DTC_0xe01478                        42U 
#define DemConf_DemEventParameter_DTC_0xe01481                        43U 
#define DemConf_DemEventParameter_DTC_0xe01492                        44U 
#define DemConf_DemEventParameter_DTC_0xe01647                        45U 
#define DemConf_DemEventParameter_DTC_0xe01648                        46U 
#define DemConf_DemEventParameter_DTC_0xe10000                        47U 
#define DemConf_DemEventParameter_DTC_0xe30055                        48U 
#define DemConf_DemEventParameter_DTC_0xf00042                        49U 
#define DemConf_DemEventParameter_DTC_0xf00049                        50U 
#define DemConf_DemEventParameter_DTC_0xf00061                        51U 
#define DemConf_DemEventParameter_DTC_0xf00168                        52U 
#define DemConf_DemEventParameter_DTC_0xf00316                        53U 
#define DemConf_DemEventParameter_DTC_0xf00317                        54U 
#define DemConf_DemEventParameter_DTC_0xf00368                        55U 
#define DemConf_DemEventParameter_FLS_E_COMPARE_FAILED                74U 
#define DemConf_DemEventParameter_FLS_E_ERASE_FAILED                  73U 
#define DemConf_DemEventParameter_FLS_E_HW_FAILURE                    72U 
#define DemConf_DemEventParameter_FLS_E_READ_FAILED                   71U 
#define DemConf_DemEventParameter_FLS_E_READ_FAILED_DED               70U 
#define DemConf_DemEventParameter_FLS_E_WRITE_FAILED                  69U 
#define DemConf_DemEventParameter_MCU_E_CLOCK_FAILURE                 68U 
#define DemConf_DemEventParameter_MCU_E_POWERDOWN_MODE_FAILURE        67U 
#define DemConf_DemEventParameter_MCU_E_WRITE_TIMEOUT_FAILURE         66U 
#define DemConf_DemEventParameter_NVM_E_INTEGRITY_FAILED              65U 
#define DemConf_DemEventParameter_NVM_E_LOSS_OF_REDUNDANCY            64U 
#define DemConf_DemEventParameter_NVM_E_QUEUE_OVERFLOW                63U 
#define DemConf_DemEventParameter_NVM_E_REQ_FAILED                    62U 
#define DemConf_DemEventParameter_NVM_E_WRITE_PROTECTED               59U 
#define DemConf_DemEventParameter_PORT_E_REG_WRITE_VERIFY             2U 
#define DemConf_DemEventParameter_SPI_E_DATA_TX_TIMEOUT_FAILURE       60U 
#define DemConf_DemEventParameter_SPI_E_HARDWARE_ERROR                61U 
#define DemConf_DemEventParameter_WDG_E_DISABLE_REJECTED              56U 
#define DemConf_DemEventParameter_WDG_E_MODE_FAILED                   57U 
#define DemConf_DemEventParameter_WDG_E_READBACK_FAILURE              58U 
#define Dem_DIO_E_REG_WRITE_VERIFY                                    1U 
#define Dem_DTC_0x502d00                                              6U 
#define Dem_DTC_0x511056                                              13U 
#define Dem_DTC_0x5b0049                                              3U 
#define Dem_DTC_0x5b0062                                              4U 
#define Dem_DTC_0x600b49                                              7U 
#define Dem_DTC_0x600b62                                              8U 
#define Dem_DTC_0x600c49                                              9U 
#define Dem_DTC_0x600c62                                              10U 
#define Dem_DTC_0x600d49                                              11U 
#define Dem_DTC_0x600d62                                              12U 
#define Dem_DTC_0x9d234b                                              5U 
#define Dem_DTC_0xc10000                                              19U 
#define Dem_DTC_0xc10200                                              20U 
#define Dem_DTC_0xc12100                                              21U 
#define Dem_DTC_0xc12200                                              22U 
#define Dem_DTC_0xc12600                                              23U 
#define Dem_DTC_0xc14000                                              24U 
#define Dem_DTC_0xc14600                                              25U 
#define Dem_DTC_0xc15500                                              26U 
#define Dem_DTC_0xc15900                                              27U 
#define Dem_DTC_0xc23a00                                              14U 
#define Dem_DTC_0xc23b00                                              15U 
#define Dem_DTC_0xc25200                                              28U 
#define Dem_DTC_0xc25300                                              29U 
#define Dem_DTC_0xc25600                                              30U 
#define Dem_DTC_0xc40100                                              31U 
#define Dem_DTC_0xc40300                                              32U 
#define Dem_DTC_0xc41500                                              33U 
#define Dem_DTC_0xc41522                                              34U 
#define Dem_DTC_0xc41600                                              35U 
#define Dem_DTC_0xc42200                                              36U 
#define Dem_DTC_0xc42300                                              37U 
#define Dem_DTC_0xc42800                                              38U 
#define Dem_DTC_0xc45a00                                              16U 
#define Dem_DTC_0xc53b00                                              17U 
#define Dem_DTC_0xc53c00                                              18U 
#define Dem_DTC_0xc55300                                              39U 
#define Dem_DTC_0xc55400                                              40U 
#define Dem_DTC_0xc55700                                              41U 
#define Dem_DTC_0xe01478                                              42U 
#define Dem_DTC_0xe01481                                              43U 
#define Dem_DTC_0xe01492                                              44U 
#define Dem_DTC_0xe01647                                              45U 
#define Dem_DTC_0xe01648                                              46U 
#define Dem_DTC_0xe10000                                              47U 
#define Dem_DTC_0xe30055                                              48U 
#define Dem_DTC_0xf00042                                              49U 
#define Dem_DTC_0xf00049                                              50U 
#define Dem_DTC_0xf00061                                              51U 
#define Dem_DTC_0xf00168                                              52U 
#define Dem_DTC_0xf00316                                              53U 
#define Dem_DTC_0xf00317                                              54U 
#define Dem_DTC_0xf00368                                              55U 
#define Dem_FLS_E_COMPARE_FAILED                                      74U 
#define Dem_FLS_E_ERASE_FAILED                                        73U 
#define Dem_FLS_E_HW_FAILURE                                          72U 
#define Dem_FLS_E_READ_FAILED                                         71U 
#define Dem_FLS_E_READ_FAILED_DED                                     70U 
#define Dem_FLS_E_WRITE_FAILED                                        69U 
#define Dem_MCU_E_CLOCK_FAILURE                                       68U 
#define Dem_MCU_E_POWERDOWN_MODE_FAILURE                              67U 
#define Dem_MCU_E_WRITE_TIMEOUT_FAILURE                               66U 
#define Dem_NVM_E_INTEGRITY_FAILED                                    65U 
#define Dem_NVM_E_LOSS_OF_REDUNDANCY                                  64U 
#define Dem_NVM_E_QUEUE_OVERFLOW                                      63U 
#define Dem_NVM_E_REQ_FAILED                                          62U 
#define Dem_NVM_E_WRITE_PROTECTED                                     59U 
#define Dem_PORT_E_REG_WRITE_VERIFY                                   2U 
#define Dem_SPI_E_DATA_TX_TIMEOUT_FAILURE                             60U 
#define Dem_SPI_E_HARDWARE_ERROR                                      61U 
#define Dem_WDG_E_DISABLE_REJECTED                                    56U 
#define Dem_WDG_E_MODE_FAILED                                         57U 
#define Dem_WDG_E_READBACK_FAILURE                                    58U 




 /*  Existance of iterator interfaces  */ 
#define DEM_CFG_HAVEITER_COMBINEDGROUP                                STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_TYPE1_COMBINATION==STD_OFF */ 
#define DEM_CFG_HAVEITER_DEBOUNCEHIRES                                STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_DEBOUNCE_TIME_HR==STD_OFF */ 
#define DEM_CFG_HAVEITER_DEBOUNCELORES                                STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_DEBOUNCE_TIME_LR==STD_OFF */ 
#define DEM_CFG_HAVEITER_DIDDATA                                      STD_ON 
#define DEM_CFG_HAVEITER_EVENTCBKINITFUNC                             STD_OFF      /* Deactivated due DEM_CFG_INITMONLISTFORFUNC==STD_OFF */ 
#define DEM_CFG_HAVEITER_EVENTCBKSTATUS                               STD_OFF      /* Deactivated due DEM_CFG_EVENTSTATUSCHANGED==STD_OFF */ 
#define DEM_CFG_HAVEITER_EVENTDID                                     STD_ON 
#define DEM_CFG_HAVEITER_EVENTEREC                                    STD_ON 
#define DEM_CFG_HAVEITER_EVENTINDICATOR                               STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF */ 
#define DEM_CFG_HAVEITER_EVENTJ1939NODE                               STD_OFF      /* Deactivated due (DEM_CFG_HAS_J1939_NODE == STD_OFF) */ 
#define DEM_CFG_HAVEITER_EVENTOBDDID                                  STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_WWHOBD==STD_OFF */ 
#define DEM_CFG_HAVEITER_EVENTSPN                                     STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_J1939==STD_OFF */ 
#define DEM_CFG_HAVEITER_EVENTSREC                                    STD_OFF      /* Deactivated due DEM_CFG_FREEZEFRAMENUMTABLE==STD_OFF */ 
#define DEM_CFG_HAVEITER_GLOBALCBKDTC                                 STD_OFF      /* Deactivated due DEM_CFG_CALLBACKDTCSTATUSCHANGED==STD_OFF */ 
#define DEM_CFG_HAVEITER_GLOBALCBKJ1939DTC                            STD_OFF      /* Deactivated due DEM_CFG_CALLBACKJ1939DTCSTATUSCHANGED==STD_OFF */ 
#define DEM_CFG_HAVEITER_GLOBALPID                                    STD_ON 
#define DEM_CFG_HAVEITER_OBDFIMFID                                    STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_IUMPR==STD_OFF */ 
#define DEM_CFG_HAVEITER_OBDRATIOID                                   STD_OFF      /* Deactivated due DEM_CFG_SUPPORT_IUMPR==STD_OFF */ 
#define DEM_CFG_HAVEITER_TIMESERIESDIDFAST                            STD_OFF      /* Deactivated due (DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL || DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL || DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST || DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST) == STD_OFF */ 
#define DEM_CFG_HAVEITER_TIMESERIESDIDNORMAL                          STD_OFF      /* Deactivated due (DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL || DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL || DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST || DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST) == STD_OFF */ 

 /*  Event global definitions  */ 
#define DEM_CFG_GLOBAL_DTC_COUNT                                      54U 
#define DEM_CFG_GLOBAL_MIRROR_FIRST                                   0U           /* Lowest EventID with DemEventDestination==DEM_DTC_ORIGIN_MIRROR_MEMORY, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_MIRROR_LAST                                    0U           /* Highest EventID with DemEventDestination==DEM_DTC_ORIGIN_MIRROR_MEMORY, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_PERMANENT_FIRST                                0U           /* Lowest EventID with EventDestination==DEM_CFG_MEMORYID_PERMANENT, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_PERMANENT_LAST                                 0U           /* Highest EventID with EventDestination==DEM_CFG_MEMORYID_PERMANENT, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_PRIMARY_FIRST                                  1U           /* Lowest EventID with DemEventDestination==DEM_DTC_ORIGIN_PRIMARY_MEMORY, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_PRIMARY_LAST                                   55U          /* Highest EventID with DemEventDestination==DEM_DTC_ORIGIN_PRIMARY_MEMORY, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_SECONDARY_FIRST                                56U          /* Lowest EventID with DemEventDestination==DEM_DTC_ORIGIN_SECONDARY_MEMORY, or 0 if no such destination is configured. */ 
#define DEM_CFG_GLOBAL_SECONDARY_LAST                                 74U          /* Highest EventID with DemEventDestination==DEM_DTC_ORIGIN_SECONDARY_MEMORY, or 0 if no such destination is configured. */ 


 /*  StorageCondition global definitions  */ 
#define DEM_CFG_GLOBAL_STORAGE_COND_COUNT                             0U              /* (DEM_CFG_SUPPORT_STORAGE_CONDITIONS == STD_OFF) */ 
#define DEM_CFG_GLOBAL_STORAGE_COND_INIT                              0x00000000UL    /* (DEM_CFG_SUPPORT_STORAGE_CONDITIONS == STD_OFF) */ 

 /*  PID global definitions  */ 
#define DEM_CFG_GLOBAL_OBD_IIFFRAW_SIZE                               0U           /* Pure data size of OBD-II record. */ 
#define DEM_CFG_GLOBAL_OBD_IIFFUDS_SIZE                               2U           /* Data size of OBD-II record incl PID numbers (each 2B) plus RecordNumber (1B) plus RecordCount (1B). */ 

 /*  Defines for supporting A2L  */ 
#define DEM_A2L_MAX_NUMBER_PRIMEM_EXTRECORD                           2UL 
#define DEM_A2L_MAX_SIZE_PRIMEM_EXTRECORD                             2UL 
#define DEM_A2L_NUMBER_OF_EVENTS                                      75UL         /* incl. event #0 */ 
#define DEM_A2L_NUMBER_OF_MIL_GROUPS                                  0UL          /* number of DemMILGroup containers + 1 */ 
#define DEM_A2L_MAX_SIZE_STDENV_RECORD                                0UL          /* largest, configured StdEnvData */ 





 /*  NV block global definitions  */ 
#define DEM_CFG_GLOBAL_NV_BLOCK_COUNT                                 50U          /* Number of NV blocks. */ 
#define DEM_CFG_MAX_J1939_EXP_FF_SIZE                                 0U           /* Data size of the largest configured J1939 FreezeFrame record. */ 
#define DEM_CFG_MAX_J1939_FF_SIZE                                     0U           /* Data size of the largest configured J1939 FreezeFrame record. */ 
#define DEM_CFG_MAX_NUM_EXT_RECORDS                                   2U           /* Largest count of EDR records per event to be stored in ExtendedData[DEM_CFG_MAX_NUM_EXT_RECORDS][DEM_CFG_MAX_SIZE_EXT_RECORD] - ignore records with pure ROM data and/or data having own_variable. '1' if there are 0 records. */ 
#define DEM_CFG_MAX_NUM_SNAPSHOTS                                     1U           /* Largest count of FreezeFrame records per event to be stored in SnapshotData[DEM_CFG_MAX_NUM_SNAPSHOTS][DEM_CFG_MAX_SIZE_SNAPSHOT]. '1' if there are 0 records. */ 
#define DEM_CFG_MAX_SIZE_EXT_RECORD                                   2U           /* Data size of the largest EDR record to be stored in ExtendedData[DEM_CFG_MAX_NUM_EXT_RECORDS][DEM_CFG_MAX_SIZE_EXT_RECORD] or '1' if size is 0. */ 
#define DEM_CFG_MAX_SIZE_OBDFREEZEFRAME                               0U           /* Data size of largest configured FreezeFrame 0 (OBD II) record. */ 
#define DEM_CFG_MAX_SIZE_SNAPSHOT                                     1U           /* Data size of the largest FreezeFrame record to be stored in SnapshotData[DEM_CFG_MAX_NUM_SNAPSHOTS][DEM_CFG_MAX_SIZE_SNAPSHOT] or '1' if size is 0. */ 
#define DEM_CFG_MEMORY_ADMIN_INDEX                                    0U           /* Index into Dem_Cfg_MemoryBlockId[], Dem_Cfg_MemoryDataSize[], Dem_Cfg_MemoryDataPtr[] and other Memory*[] arrays. */ 
#define DEM_CFG_MEMORY_PRIMARY_INDEX                                  2U           /* Index into Dem_Cfg_MemoryBlockId[], Dem_Cfg_MemoryDataSize[], Dem_Cfg_MemoryDataPtr[] and other Memory*[] arrays. Buffer count: Dem_Cfg_GlobalPrimarySize() = 8 */ 
#define DEM_CFG_MEMORY_SECONDARY_INDEX                                10U          /* Index into Dem_Cfg_MemoryBlockId[], Dem_Cfg_MemoryDataSize[], Dem_Cfg_MemoryDataPtr[] and other Memory*[] arrays. Buffer count: Dem_Cfg_GlobalSecondarySize() = 40 */ 
#define DEM_CFG_MEMORY_STATUS_INDEX                                   1U           /* Index into Dem_Cfg_MemoryBlockId[], Dem_Cfg_MemoryDataSize[], Dem_Cfg_MemoryDataPtr[] and other Memory*[] arrays. */ 



 /*  Dem general defines  */ 
#define DEM_CFG_BSW_ERROR_BUFFER_SIZE                                 0U                                /* DemBswErrorBufferSize */ 
#define DEM_CFG_GLOBALCBKCONTROLDTCSETTING_FUNC                       NULL_PTR                          /* DEM_CFG_NOTIFY_CONTROL_DTC_SETTING==STD_OFF */ 
#define DEM_CFG_GLOBALCBKDATA_FUNC                                    NULL_PTR                          /* No ClientServerInterface GeneralCallbackEventDataChanged, DEM_CFG_NOTIFY_GENERAL_DATA==STD_OFF */ 
#define DEM_CFG_GLOBALCBKSTATUS_FUNC                                  NULL_PTR                          /* No ClientServerInterface GeneralCallbackEventStatusChanged, DEM_CFG_NOTIFY_GENERAL_STATUS==STD_OFF */ 
#define DEM_CFG_GLOBAL_CLEAR_DTC_RUNTIME_LIMIT                        75U                               /* not configured, here substituted by number of events (incl. event #0) */ 
#define DEM_CFG_GLOBAL_DEBOUNCE_STORAGE_EVENT_COUNT                   0U                                /* Number of events with .../DemEventClass/DemDebounceAlgorithClass/DemDebounceCounterBased/DemDebounceCounterStorage == TRUE */ 
#define DEM_CFG_GLOBAL_DTC_FORMAT                                     DEM_DTC_TRANSLATION_ISO15031_6    /* Dem_DTCTranslationFormatType */ 
#define DEM_CFG_GLOBAL_FREEZEFRAME_SIZE                               0U                                /* /Dem/DemGeneral/DemMaxNumberEventEntryOBDFreezeFrame */ 
#define DEM_CFG_GLOBAL_MIRROR_SIZE                                    0U                                /* /Dem/DemGeneral/DemMaxNumberEventEntryMirror */ 
#define DEM_CFG_GLOBAL_NV_STORAGE_LIMIT                               0U                                /* DemGeneral/DemImmediateNvStorageLimit, 0: no limit configured */ 
#define DEM_CFG_GLOBAL_PERMANENT_SIZE                                 0U                                /* /Dem/DemGeneral/DemMaxNumberEventEntryPermanent */ 
#define DEM_CFG_GLOBAL_PRESTORED_FF_SIZE                              0U                                /* /Dem/DemGeneral/DemMaxNumberPrestoredFF, see Dem_Cfg_GlobalPrestorageSize() */ 
#define DEM_CFG_GLOBAL_PRIMARY_SIZE                                   8U                                /* /Dem/DemGeneral/DemMaxNumberEventEntryPrimary */ 
#define DEM_CFG_GLOBAL_RESTART_CYCLE_ID                               2U                                /* using DemOperationCycle: 'PowerCycle' */ 
#define DEM_CFG_GLOBAL_SECONDARY_SIZE                                 40U                               /* /Dem/DemGeneral/DemMaxNumberEventEntrySecondary */ 
#define DEM_CFG_GLOBAL_STATUS_MASK                                    0xFFU                             /* /Dem/DemGeneral/DemDtcStatusAvailabilityMask */ 
#define DEM_CFG_GLOBAL_TASK_MS                                        10U                               /* DemGeneral/DemTaskTime in [ms]. See also macro DEM_CFG_TASK_TIME for exact float value */ 
#define DEM_CFG_GLOBAL_TIMESERIES_SNAPSHOTS_SIZE                      0U                                /* /Dem/DemGeneral/DemMaxNumberTimeSeriesSnapshots */ 
#define DEM_CFG_J1939_NODE_INVALID                                    0U                                /* Invalid NmNode index (Dem internal) */ 
#define DEM_CFG_OEMCBKGETCURRENTODOMETER_FUNC                         NULL_PTR                          /* unused */ 
#define DEM_CFG_OEMCBKGETEXTERNALTESTERSTATUS_FUNC                    NULL_PTR                          /* unused */ 
#define DEM_CFG_RATIOINDEX_INVALID                                    255U                              /* Internal use: no OBD RatioId configured */ 
#define DEM_CFG_SIZEOF_MAX_DATA_VALUE_TYPE                            2U                                /* sizeof(Dem_MaxDataValueType) - typedef is generated by the RTE into Rte_Type.h */ 
#define DEM_CFG_TASK_TIME                                             10.0                              /* DemGeneral/DemTaskTime in [ms]. See also macro DEM_CFG_GLOBAL_TASK_MS for integer value. */ 
#define DEM_G_GLOBAL_PRESTORED_EVENT_COUNT                            0U                                /* Number of events with DemEventClass/DemFFPrestorageSupported == TRUE, see Dem_Cfg_GlobalPrestorageEventCount() */ 
#define DEM_G_MAX_NUMBER_J1939_NODES                                  0U                                /* Number of different J1939Nm node targets (=J1939NmNode) referenced via /Dem/DemConfigSet/DemJ1939NodeAddress/DemJ1939NmNodeRef */ 
#define DEM_G_NUMBER_OF_EVENTS                                        75U                               /* Total number of DemEventParameter, incl. event #0 */ 
#define DEM_G_NUMBER_OF_INDICATORS                                    0U                                /* Total number of indicators (i.e. incl. MIL, AWL, PL, RSL) */ 
#define DEM_G_NUMBER_OF_RATIO_IDS                                     0U                                /* Number of OBD RatioIds (incl. ID 0, internally used for global values) */ 
#define DEM_G_NUMBER_SPECIAL_INDICATORS                               0U                                /* Number of special indicators (i.e. only MIL, AWL, PL, RSL) */ 

 /*  OBD global definitions  */ 
#define DEM_CFG_OBDACCELERATORPEDALINFORMATION_INDEX                  0U           /* not defined */ 
#define DEM_CFG_OBDAMBIENTPRESSURE_INDEX                              0U           /* not defined */ 
#define DEM_CFG_OBDAMBIENTTEMPERATURE_INDEX                           0U           /* not defined */ 
#define DEM_CFG_OBDDISTANCEINFORMATION_INDEX                          0U           /* not defined */ 
#define DEM_CFG_OBDENGINERUNTIME_INDEX                                0U           /* not defined */ 
#define DEM_CFG_OBDENGINESPEED_INDEX                                  0U           /* not defined */ 
#define DEM_CFG_OBDENGINETEMPERATURE_INDEX                            0U           /* not defined */ 
#define DEM_CFG_OBDPROGRAMMINGEVENT_INDEX                             0U           /* not defined */ 
#define DEM_CFG_OBDVEHICLESPEED_INDEX                                 0U           /* not defined */ 


 /*  EnableCondition global definitions  */ 
#define DEM_CFG_GLOBAL_ENABLE_COND_COUNT                              0U              /* (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_OFF) */ 
#define DEM_CFG_GLOBAL_ENABLE_COND_INIT                               0x00000001UL    /* (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_OFF) */ 


 /*  Timebased debouncing - timing constants  */ 
#define DEM_CFG_DEBOUNCE_LO_RES_TIMER_VALUE                           15U          /* Ticks of the low resolution timer, based on Dem_MainFunction() call cycle [10.0ms]. Tick count here equals 150.0ms. */ 



/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CfgPCGetConstantDuplicatedRootDataMacros  Dem_Cfg Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define Dem_Cfg_GetAdminDataOfPCConfig()                              Dem_Cfg_AdminData  /**< the pointer to Dem_Cfg_AdminData */
#define Dem_Cfg_GetCommitBufferOfPCConfig()                           Dem_Cfg_CommitBuffer  /**< the pointer to Dem_Cfg_CommitBuffer */
#define Dem_Cfg_GetConfigurationIdOfPCConfig()                        0x2DE3U  /**< Magic constant derived from the configuration parameters DemGeneral/DemCompiledConfigId and DemGeneral/DemCompiledPostbuildCrc. Each value change is evidence to incompatible NV stored data and triggers a re-initialization of the NV data. */
#define Dem_Cfg_GetCycleIdTableOfPCConfig()                           Dem_Cfg_CycleIdTable  /**< the pointer to Dem_Cfg_CycleIdTable */
#define Dem_Cfg_GetDataCollectionTableEdr2CollIndOfPCConfig()         Dem_Cfg_DataCollectionTableEdr2CollInd  /**< the pointer to Dem_Cfg_DataCollectionTableEdr2CollInd */
#define Dem_Cfg_GetDataCollectionTableOfPCConfig()                    Dem_Cfg_DataCollectionTable  /**< the pointer to Dem_Cfg_DataCollectionTable */
#define Dem_Cfg_GetDataElementTableCol2ElmtIndOfPCConfig()            Dem_Cfg_DataElementTableCol2ElmtInd  /**< the pointer to Dem_Cfg_DataElementTableCol2ElmtInd */
#define Dem_Cfg_GetDataElementTableOfPCConfig()                       Dem_Cfg_DataElementTable  /**< the pointer to Dem_Cfg_DataElementTable */
#define Dem_Cfg_GetDebounceTableOfPCConfig()                          Dem_Cfg_DebounceTable  /**< the pointer to Dem_Cfg_DebounceTable */
#define Dem_Cfg_GetDtcTableOfPCConfig()                               Dem_Cfg_DtcTable  /**< the pointer to Dem_Cfg_DtcTable */
#define Dem_Cfg_GetEventAvailableDefaultOfPCConfig()                  Dem_Cfg_EventAvailableDefault  /**< the pointer to Dem_Cfg_EventAvailableDefault */
#define Dem_Cfg_GetEventAvailableInVariantOfPCConfig()                Dem_Cfg_EventAvailableInVariant  /**< the pointer to Dem_Cfg_EventAvailableInVariant */
#define Dem_Cfg_GetEventDebounceValueOfPCConfig()                     Dem_Cfg_EventDebounceValue  /**< the pointer to Dem_Cfg_EventDebounceValue */
#define Dem_Cfg_GetEventInternalStatusOfPCConfig()                    Dem_Cfg_EventInternalStatus  /**< the pointer to Dem_Cfg_EventInternalStatus */
#define Dem_Cfg_GetEventQueueStatusOfPCConfig()                       Dem_Cfg_EventQueueStatus  /**< the pointer to Dem_Cfg_EventQueueStatus */
#define Dem_Cfg_GetEventTableOfPCConfig()                             Dem_Cfg_EventTable  /**< the pointer to Dem_Cfg_EventTable */
#define Dem_Cfg_GetExtendedDataTableOfPCConfig()                      Dem_Cfg_ExtendedDataTable  /**< the pointer to Dem_Cfg_ExtendedDataTable */
#define Dem_Cfg_GetFreezeFrameTableOfPCConfig()                       Dem_Cfg_FreezeFrameTable  /**< the pointer to Dem_Cfg_FreezeFrameTable */
#define Dem_Cfg_GetGeneralObdInputOfPCConfig()                        Dem_Cfg_GeneralObdInput  /**< the pointer to Dem_Cfg_GeneralObdInput */
#define Dem_Cfg_GetGlobalSeverityMaskOfPCConfig()                     0x00U  /**< Variant specific mask from OR'ed /Dem/DemConfigSet/DemDTCClass/DemDTCSeverity bits. */
#define Dem_Cfg_GetMemoryCommitNumberOfPCConfig()                     Dem_Cfg_MemoryCommitNumber  /**< the pointer to Dem_Cfg_MemoryCommitNumber */
#define Dem_Cfg_GetMemoryDataPtrOfPCConfig()                          Dem_Cfg_MemoryDataPtr  /**< the pointer to Dem_Cfg_MemoryDataPtr */
#define Dem_Cfg_GetMemoryDataSizeOfPCConfig()                         Dem_Cfg_MemoryDataSize  /**< the pointer to Dem_Cfg_MemoryDataSize */
#define Dem_Cfg_GetMemoryEntryInitOfPCConfig()                        Dem_Cfg_MemoryEntryInit  /**< the pointer to Dem_Cfg_MemoryEntryInit */
#define Dem_Cfg_GetMemoryStatusOfPCConfig()                           Dem_Cfg_MemoryStatus  /**< the pointer to Dem_Cfg_MemoryStatus */
#define Dem_Cfg_GetPrimaryChronologyOfPCConfig()                      Dem_Cfg_PrimaryChronology  /**< the pointer to Dem_Cfg_PrimaryChronology */
#define Dem_Cfg_GetPrimaryEntry_0OfPCConfig()                         Dem_Cfg_PrimaryEntry_0  /**< the pointer to Dem_Cfg_PrimaryEntry_0 */
#define Dem_Cfg_GetPrimaryEntry_1OfPCConfig()                         Dem_Cfg_PrimaryEntry_1  /**< the pointer to Dem_Cfg_PrimaryEntry_1 */
#define Dem_Cfg_GetPrimaryEntry_2OfPCConfig()                         Dem_Cfg_PrimaryEntry_2  /**< the pointer to Dem_Cfg_PrimaryEntry_2 */
#define Dem_Cfg_GetPrimaryEntry_3OfPCConfig()                         Dem_Cfg_PrimaryEntry_3  /**< the pointer to Dem_Cfg_PrimaryEntry_3 */
#define Dem_Cfg_GetPrimaryEntry_4OfPCConfig()                         Dem_Cfg_PrimaryEntry_4  /**< the pointer to Dem_Cfg_PrimaryEntry_4 */
#define Dem_Cfg_GetPrimaryEntry_5OfPCConfig()                         Dem_Cfg_PrimaryEntry_5  /**< the pointer to Dem_Cfg_PrimaryEntry_5 */
#define Dem_Cfg_GetPrimaryEntry_6OfPCConfig()                         Dem_Cfg_PrimaryEntry_6  /**< the pointer to Dem_Cfg_PrimaryEntry_6 */
#define Dem_Cfg_GetPrimaryEntry_7OfPCConfig()                         Dem_Cfg_PrimaryEntry_7  /**< the pointer to Dem_Cfg_PrimaryEntry_7 */
#define Dem_Cfg_GetReadoutBufferOfPCConfig()                          Dem_Cfg_ReadoutBuffer  /**< the pointer to Dem_Cfg_ReadoutBuffer */
#define Dem_Cfg_GetSecondaryChronologyOfPCConfig()                    Dem_Cfg_SecondaryChronology  /**< the pointer to Dem_Cfg_SecondaryChronology */
#define Dem_Cfg_GetSecondaryEntry_0OfPCConfig()                       Dem_Cfg_SecondaryEntry_0  /**< the pointer to Dem_Cfg_SecondaryEntry_0 */
#define Dem_Cfg_GetSecondaryEntry_10OfPCConfig()                      Dem_Cfg_SecondaryEntry_10  /**< the pointer to Dem_Cfg_SecondaryEntry_10 */
#define Dem_Cfg_GetSecondaryEntry_11OfPCConfig()                      Dem_Cfg_SecondaryEntry_11  /**< the pointer to Dem_Cfg_SecondaryEntry_11 */
#define Dem_Cfg_GetSecondaryEntry_12OfPCConfig()                      Dem_Cfg_SecondaryEntry_12  /**< the pointer to Dem_Cfg_SecondaryEntry_12 */
#define Dem_Cfg_GetSecondaryEntry_13OfPCConfig()                      Dem_Cfg_SecondaryEntry_13  /**< the pointer to Dem_Cfg_SecondaryEntry_13 */
#define Dem_Cfg_GetSecondaryEntry_14OfPCConfig()                      Dem_Cfg_SecondaryEntry_14  /**< the pointer to Dem_Cfg_SecondaryEntry_14 */
#define Dem_Cfg_GetSecondaryEntry_15OfPCConfig()                      Dem_Cfg_SecondaryEntry_15  /**< the pointer to Dem_Cfg_SecondaryEntry_15 */
#define Dem_Cfg_GetSecondaryEntry_16OfPCConfig()                      Dem_Cfg_SecondaryEntry_16  /**< the pointer to Dem_Cfg_SecondaryEntry_16 */
#define Dem_Cfg_GetSecondaryEntry_17OfPCConfig()                      Dem_Cfg_SecondaryEntry_17  /**< the pointer to Dem_Cfg_SecondaryEntry_17 */
#define Dem_Cfg_GetSecondaryEntry_18OfPCConfig()                      Dem_Cfg_SecondaryEntry_18  /**< the pointer to Dem_Cfg_SecondaryEntry_18 */
#define Dem_Cfg_GetSecondaryEntry_19OfPCConfig()                      Dem_Cfg_SecondaryEntry_19  /**< the pointer to Dem_Cfg_SecondaryEntry_19 */
#define Dem_Cfg_GetSecondaryEntry_1OfPCConfig()                       Dem_Cfg_SecondaryEntry_1  /**< the pointer to Dem_Cfg_SecondaryEntry_1 */
#define Dem_Cfg_GetSecondaryEntry_20OfPCConfig()                      Dem_Cfg_SecondaryEntry_20  /**< the pointer to Dem_Cfg_SecondaryEntry_20 */
#define Dem_Cfg_GetSecondaryEntry_21OfPCConfig()                      Dem_Cfg_SecondaryEntry_21  /**< the pointer to Dem_Cfg_SecondaryEntry_21 */
#define Dem_Cfg_GetSecondaryEntry_22OfPCConfig()                      Dem_Cfg_SecondaryEntry_22  /**< the pointer to Dem_Cfg_SecondaryEntry_22 */
#define Dem_Cfg_GetSecondaryEntry_23OfPCConfig()                      Dem_Cfg_SecondaryEntry_23  /**< the pointer to Dem_Cfg_SecondaryEntry_23 */
#define Dem_Cfg_GetSecondaryEntry_24OfPCConfig()                      Dem_Cfg_SecondaryEntry_24  /**< the pointer to Dem_Cfg_SecondaryEntry_24 */
#define Dem_Cfg_GetSecondaryEntry_25OfPCConfig()                      Dem_Cfg_SecondaryEntry_25  /**< the pointer to Dem_Cfg_SecondaryEntry_25 */
#define Dem_Cfg_GetSecondaryEntry_26OfPCConfig()                      Dem_Cfg_SecondaryEntry_26  /**< the pointer to Dem_Cfg_SecondaryEntry_26 */
#define Dem_Cfg_GetSecondaryEntry_27OfPCConfig()                      Dem_Cfg_SecondaryEntry_27  /**< the pointer to Dem_Cfg_SecondaryEntry_27 */
#define Dem_Cfg_GetSecondaryEntry_28OfPCConfig()                      Dem_Cfg_SecondaryEntry_28  /**< the pointer to Dem_Cfg_SecondaryEntry_28 */
#define Dem_Cfg_GetSecondaryEntry_29OfPCConfig()                      Dem_Cfg_SecondaryEntry_29  /**< the pointer to Dem_Cfg_SecondaryEntry_29 */
#define Dem_Cfg_GetSecondaryEntry_2OfPCConfig()                       Dem_Cfg_SecondaryEntry_2  /**< the pointer to Dem_Cfg_SecondaryEntry_2 */
#define Dem_Cfg_GetSecondaryEntry_30OfPCConfig()                      Dem_Cfg_SecondaryEntry_30  /**< the pointer to Dem_Cfg_SecondaryEntry_30 */
#define Dem_Cfg_GetSecondaryEntry_31OfPCConfig()                      Dem_Cfg_SecondaryEntry_31  /**< the pointer to Dem_Cfg_SecondaryEntry_31 */
#define Dem_Cfg_GetSecondaryEntry_32OfPCConfig()                      Dem_Cfg_SecondaryEntry_32  /**< the pointer to Dem_Cfg_SecondaryEntry_32 */
#define Dem_Cfg_GetSecondaryEntry_33OfPCConfig()                      Dem_Cfg_SecondaryEntry_33  /**< the pointer to Dem_Cfg_SecondaryEntry_33 */
#define Dem_Cfg_GetSecondaryEntry_34OfPCConfig()                      Dem_Cfg_SecondaryEntry_34  /**< the pointer to Dem_Cfg_SecondaryEntry_34 */
#define Dem_Cfg_GetSecondaryEntry_35OfPCConfig()                      Dem_Cfg_SecondaryEntry_35  /**< the pointer to Dem_Cfg_SecondaryEntry_35 */
#define Dem_Cfg_GetSecondaryEntry_36OfPCConfig()                      Dem_Cfg_SecondaryEntry_36  /**< the pointer to Dem_Cfg_SecondaryEntry_36 */
#define Dem_Cfg_GetSecondaryEntry_37OfPCConfig()                      Dem_Cfg_SecondaryEntry_37  /**< the pointer to Dem_Cfg_SecondaryEntry_37 */
#define Dem_Cfg_GetSecondaryEntry_38OfPCConfig()                      Dem_Cfg_SecondaryEntry_38  /**< the pointer to Dem_Cfg_SecondaryEntry_38 */
#define Dem_Cfg_GetSecondaryEntry_39OfPCConfig()                      Dem_Cfg_SecondaryEntry_39  /**< the pointer to Dem_Cfg_SecondaryEntry_39 */
#define Dem_Cfg_GetSecondaryEntry_3OfPCConfig()                       Dem_Cfg_SecondaryEntry_3  /**< the pointer to Dem_Cfg_SecondaryEntry_3 */
#define Dem_Cfg_GetSecondaryEntry_4OfPCConfig()                       Dem_Cfg_SecondaryEntry_4  /**< the pointer to Dem_Cfg_SecondaryEntry_4 */
#define Dem_Cfg_GetSecondaryEntry_5OfPCConfig()                       Dem_Cfg_SecondaryEntry_5  /**< the pointer to Dem_Cfg_SecondaryEntry_5 */
#define Dem_Cfg_GetSecondaryEntry_6OfPCConfig()                       Dem_Cfg_SecondaryEntry_6  /**< the pointer to Dem_Cfg_SecondaryEntry_6 */
#define Dem_Cfg_GetSecondaryEntry_7OfPCConfig()                       Dem_Cfg_SecondaryEntry_7  /**< the pointer to Dem_Cfg_SecondaryEntry_7 */
#define Dem_Cfg_GetSecondaryEntry_8OfPCConfig()                       Dem_Cfg_SecondaryEntry_8  /**< the pointer to Dem_Cfg_SecondaryEntry_8 */
#define Dem_Cfg_GetSecondaryEntry_9OfPCConfig()                       Dem_Cfg_SecondaryEntry_9  /**< the pointer to Dem_Cfg_SecondaryEntry_9 */
#define Dem_Cfg_GetSizeOfDataElementTableOfPCConfig()                 3U  /**< the number of accomplishable value elements in Dem_Cfg_DataElementTable */
#define Dem_Cfg_GetSizeOfEventTableOfPCConfig()                       75U  /**< the number of accomplishable value elements in Dem_Cfg_EventTable */
#define Dem_Cfg_GetSizeOfMemoryCommitNumberOfPCConfig()               50U  /**< the number of accomplishable value elements in Dem_Cfg_MemoryCommitNumber */
#define Dem_Cfg_GetSizeOfMemoryStatusOfPCConfig()                     50U  /**< the number of accomplishable value elements in Dem_Cfg_MemoryStatus */
#define Dem_Cfg_GetSizeOfPrimaryChronologyOfPCConfig()                8U  /**< the number of accomplishable value elements in Dem_Cfg_PrimaryChronology */
#define Dem_Cfg_GetSizeOfSecondaryChronologyOfPCConfig()              40U  /**< the number of accomplishable value elements in Dem_Cfg_SecondaryChronology */
#define Dem_Cfg_GetStatusDataOfPCConfig()                             Dem_Cfg_StatusData  /**< the pointer to Dem_Cfg_StatusData */
#define Dem_Cfg_GetTimeSeriesEntryInitOfPCConfig()                    Dem_Cfg_TimeSeriesEntryInit  /**< the pointer to Dem_Cfg_TimeSeriesEntryInit */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCGetDuplicatedRootDataMacros  Dem_Cfg Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define Dem_Cfg_GetSizeOfEventDebounceValueOfPCConfig()               Dem_Cfg_GetSizeOfEventTableOfPCConfig()  /**< the number of accomplishable value elements in Dem_Cfg_EventDebounceValue */
#define Dem_Cfg_GetSizeOfEventInternalStatusOfPCConfig()              Dem_Cfg_GetSizeOfEventTableOfPCConfig()  /**< the number of accomplishable value elements in Dem_Cfg_EventInternalStatus */
#define Dem_Cfg_GetSizeOfEventQueueStatusOfPCConfig()                 Dem_Cfg_GetSizeOfEventTableOfPCConfig()  /**< the number of accomplishable value elements in Dem_Cfg_EventQueueStatus */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCGetDataMacros  Dem_Cfg Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define Dem_Cfg_GetAdminData()                                        (Dem_Cfg_GetAdminDataOfPCConfig())
#define Dem_Cfg_GetCommitBuffer()                                     (Dem_Cfg_GetCommitBufferOfPCConfig())
#define Dem_Cfg_GetOpCycleTypeOfCycleIdTable(Index)                   (Dem_Cfg_GetCycleIdTableOfPCConfig()[(Index)].OpCycleTypeOfCycleIdTable)
#define Dem_Cfg_IsUsedForAgingOfCycleIdTable(Index)                   ((Dem_Cfg_GetCycleIdTableOfPCConfig()[(Index)].UsedForAgingOfCycleIdTable) != FALSE)
#define Dem_Cfg_GetDataElementTableCol2ElmtIndEndIdxOfDataCollectionTable(Index) (Dem_Cfg_GetDataCollectionTableOfPCConfig()[(Index)].DataElementTableCol2ElmtIndEndIdxOfDataCollectionTable)
#define Dem_Cfg_GetDataElementTableCol2ElmtIndStartIdxOfDataCollectionTable(Index) (Dem_Cfg_GetDataCollectionTableOfPCConfig()[(Index)].DataElementTableCol2ElmtIndStartIdxOfDataCollectionTable)
#define Dem_Cfg_GetIdNumberOfDataCollectionTable(Index)               (Dem_Cfg_GetDataCollectionTableOfPCConfig()[(Index)].IdNumberOfDataCollectionTable)
#define Dem_Cfg_GetMaskedBitsOfDataCollectionTable(Index)             (Dem_Cfg_GetDataCollectionTableOfPCConfig()[(Index)].MaskedBitsOfDataCollectionTable)
#define Dem_Cfg_GetStorageKindOfDataCollectionTable(Index)            (Dem_Cfg_GetDataCollectionTableOfPCConfig()[(Index)].StorageKindOfDataCollectionTable)
#define Dem_Cfg_GetDataCollectionTableEdr2CollInd(Index)              (Dem_Cfg_GetDataCollectionTableEdr2CollIndOfPCConfig()[(Index)])
#define Dem_Cfg_GetElementKindOfDataElementTable(Index)               (Dem_Cfg_GetDataElementTableOfPCConfig()[(Index)].ElementKindOfDataElementTable)
#define Dem_Cfg_GetReadDataFuncOfDataElementTable(Index)              (Dem_Cfg_GetDataElementTableOfPCConfig()[(Index)].ReadDataFuncOfDataElementTable)
#define Dem_Cfg_GetDecrementStepSizeOfDebounceTable(Index)            (Dem_Cfg_GetDebounceTableOfPCConfig()[(Index)].DecrementStepSizeOfDebounceTable)
#define Dem_Cfg_GetEventDebounceAlgorithmOfDebounceTable(Index)       (Dem_Cfg_GetDebounceTableOfPCConfig()[(Index)].EventDebounceAlgorithmOfDebounceTable)
#define Dem_Cfg_GetFailedThresholdOfDebounceTable(Index)              (Dem_Cfg_GetDebounceTableOfPCConfig()[(Index)].FailedThresholdOfDebounceTable)
#define Dem_Cfg_GetIncrementStepSizeOfDebounceTable(Index)            (Dem_Cfg_GetDebounceTableOfPCConfig()[(Index)].IncrementStepSizeOfDebounceTable)
#define Dem_Cfg_GetMaskedBitsOfDebounceTable(Index)                   (Dem_Cfg_GetDebounceTableOfPCConfig()[(Index)].MaskedBitsOfDebounceTable)
#define Dem_Cfg_GetPassedThresholdOfDebounceTable(Index)              (Dem_Cfg_GetDebounceTableOfPCConfig()[(Index)].PassedThresholdOfDebounceTable)
#define Dem_Cfg_GetUdsDtcOfDtcTable(Index)                            (Dem_Cfg_GetDtcTableOfPCConfig()[(Index)].UdsDtcOfDtcTable)
#define Dem_Cfg_GetEventDebounceValue(Index)                          (Dem_Cfg_GetEventDebounceValueOfPCConfig()[(Index)])
#define Dem_Cfg_GetEventInternalStatus(Index)                         (Dem_Cfg_GetEventInternalStatusOfPCConfig()[(Index)])
#define Dem_Cfg_GetEventQueueStatus(Index)                            (Dem_Cfg_GetEventQueueStatusOfPCConfig()[(Index)])
#define Dem_Cfg_GetAgingCycleIdOfEventTable(Index)                    (Dem_Cfg_GetEventTableOfPCConfig()[(Index)].AgingCycleIdOfEventTable)
#define Dem_Cfg_GetDebounceTableIdxOfEventTable(Index)                (Dem_Cfg_GetEventTableOfPCConfig()[(Index)].DebounceTableIdxOfEventTable)
#define Dem_Cfg_GetDtcTableIdxOfEventTable(Index)                     (Dem_Cfg_GetEventTableOfPCConfig()[(Index)].DtcTableIdxOfEventTable)
#define Dem_Cfg_GetEventDestinationOfEventTable(Index)                (Dem_Cfg_GetEventTableOfPCConfig()[(Index)].EventDestinationOfEventTable)
#define Dem_Cfg_GetExtendedDataTableIdxOfEventTable(Index)            (Dem_Cfg_GetEventTableOfPCConfig()[(Index)].ExtendedDataTableIdxOfEventTable)
#define Dem_Cfg_GetOperationCycleIdOfEventTable(Index)                (Dem_Cfg_GetEventTableOfPCConfig()[(Index)].OperationCycleIdOfEventTable)
#define Dem_Cfg_GetDataCollectionTableEdr2CollIndEndIdxOfExtendedDataTable(Index) (Dem_Cfg_GetExtendedDataTableOfPCConfig()[(Index)].DataCollectionTableEdr2CollIndEndIdxOfExtendedDataTable)
#define Dem_Cfg_GetDataCollectionTableEdr2CollIndStartIdxOfExtendedDataTable(Index) (Dem_Cfg_GetExtendedDataTableOfPCConfig()[(Index)].DataCollectionTableEdr2CollIndStartIdxOfExtendedDataTable)
#define Dem_Cfg_GetMaxRecordSizeOfExtendedDataTable(Index)            (Dem_Cfg_GetExtendedDataTableOfPCConfig()[(Index)].MaxRecordSizeOfExtendedDataTable)
#define Dem_Cfg_GetMemoryCommitNumber(Index)                          (Dem_Cfg_GetMemoryCommitNumberOfPCConfig()[(Index)])
#define Dem_Cfg_GetMemoryDataPtr(Index)                               (Dem_Cfg_GetMemoryDataPtrOfPCConfig()[(Index)])
#define Dem_Cfg_GetMemoryDataSize(Index)                              (Dem_Cfg_GetMemoryDataSizeOfPCConfig()[(Index)])
#define Dem_Cfg_GetMemoryEntryInit()                                  (Dem_Cfg_GetMemoryEntryInitOfPCConfig())
#define Dem_Cfg_GetMemoryStatus(Index)                                (Dem_Cfg_GetMemoryStatusOfPCConfig()[(Index)])
#define Dem_Cfg_GetPrimaryChronology(Index)                           (Dem_Cfg_GetPrimaryChronologyOfPCConfig()[(Index)])
#define Dem_Cfg_GetPrimaryEntry_0()                                   (Dem_Cfg_GetPrimaryEntry_0OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_1()                                   (Dem_Cfg_GetPrimaryEntry_1OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_2()                                   (Dem_Cfg_GetPrimaryEntry_2OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_3()                                   (Dem_Cfg_GetPrimaryEntry_3OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_4()                                   (Dem_Cfg_GetPrimaryEntry_4OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_5()                                   (Dem_Cfg_GetPrimaryEntry_5OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_6()                                   (Dem_Cfg_GetPrimaryEntry_6OfPCConfig())
#define Dem_Cfg_GetPrimaryEntry_7()                                   (Dem_Cfg_GetPrimaryEntry_7OfPCConfig())
#define Dem_Cfg_GetReadoutBuffer()                                    (Dem_Cfg_GetReadoutBufferOfPCConfig())
#define Dem_Cfg_GetSecondaryChronology(Index)                         (Dem_Cfg_GetSecondaryChronologyOfPCConfig()[(Index)])
#define Dem_Cfg_GetSecondaryEntry_0()                                 (Dem_Cfg_GetSecondaryEntry_0OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_1()                                 (Dem_Cfg_GetSecondaryEntry_1OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_10()                                (Dem_Cfg_GetSecondaryEntry_10OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_11()                                (Dem_Cfg_GetSecondaryEntry_11OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_12()                                (Dem_Cfg_GetSecondaryEntry_12OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_13()                                (Dem_Cfg_GetSecondaryEntry_13OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_14()                                (Dem_Cfg_GetSecondaryEntry_14OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_15()                                (Dem_Cfg_GetSecondaryEntry_15OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_16()                                (Dem_Cfg_GetSecondaryEntry_16OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_17()                                (Dem_Cfg_GetSecondaryEntry_17OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_18()                                (Dem_Cfg_GetSecondaryEntry_18OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_19()                                (Dem_Cfg_GetSecondaryEntry_19OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_2()                                 (Dem_Cfg_GetSecondaryEntry_2OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_20()                                (Dem_Cfg_GetSecondaryEntry_20OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_21()                                (Dem_Cfg_GetSecondaryEntry_21OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_22()                                (Dem_Cfg_GetSecondaryEntry_22OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_23()                                (Dem_Cfg_GetSecondaryEntry_23OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_24()                                (Dem_Cfg_GetSecondaryEntry_24OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_25()                                (Dem_Cfg_GetSecondaryEntry_25OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_26()                                (Dem_Cfg_GetSecondaryEntry_26OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_27()                                (Dem_Cfg_GetSecondaryEntry_27OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_28()                                (Dem_Cfg_GetSecondaryEntry_28OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_29()                                (Dem_Cfg_GetSecondaryEntry_29OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_3()                                 (Dem_Cfg_GetSecondaryEntry_3OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_30()                                (Dem_Cfg_GetSecondaryEntry_30OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_31()                                (Dem_Cfg_GetSecondaryEntry_31OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_32()                                (Dem_Cfg_GetSecondaryEntry_32OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_33()                                (Dem_Cfg_GetSecondaryEntry_33OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_34()                                (Dem_Cfg_GetSecondaryEntry_34OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_35()                                (Dem_Cfg_GetSecondaryEntry_35OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_36()                                (Dem_Cfg_GetSecondaryEntry_36OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_37()                                (Dem_Cfg_GetSecondaryEntry_37OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_38()                                (Dem_Cfg_GetSecondaryEntry_38OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_39()                                (Dem_Cfg_GetSecondaryEntry_39OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_4()                                 (Dem_Cfg_GetSecondaryEntry_4OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_5()                                 (Dem_Cfg_GetSecondaryEntry_5OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_6()                                 (Dem_Cfg_GetSecondaryEntry_6OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_7()                                 (Dem_Cfg_GetSecondaryEntry_7OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_8()                                 (Dem_Cfg_GetSecondaryEntry_8OfPCConfig())
#define Dem_Cfg_GetSecondaryEntry_9()                                 (Dem_Cfg_GetSecondaryEntry_9OfPCConfig())
#define Dem_Cfg_GetStatusData()                                       (Dem_Cfg_GetStatusDataOfPCConfig())
#define Dem_Cfg_GetTimeSeriesEntryInit()                              (Dem_Cfg_GetTimeSeriesEntryInitOfPCConfig())
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCGetBitDataMacros  Dem_Cfg Get Bit Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read bitcoded data elements.
  \{
*/ 
#define Dem_Cfg_IsUpdateOfDataCollectionTable(Index)                  (DEM_CFG_UPDATEOFDATACOLLECTIONTABLE_MASK == (Dem_Cfg_GetMaskedBitsOfDataCollectionTable(Index) & DEM_CFG_UPDATEOFDATACOLLECTIONTABLE_MASK))
#define Dem_Cfg_IsJumpUpOfDebounceTable(Index)                        (DEM_CFG_JUMPUPOFDEBOUNCETABLE_MASK == (Dem_Cfg_GetMaskedBitsOfDebounceTable(Index) & DEM_CFG_JUMPUPOFDEBOUNCETABLE_MASK))  /**< DemDebounceCounterJumpUp of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCGetDeduplicatedDataMacros  Dem_Cfg Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define Dem_Cfg_GetConfigurationId()                                  Dem_Cfg_GetConfigurationIdOfPCConfig()
#define Dem_Cfg_GetCollectionSizeOfDataCollectionTable(Index)         ((Dem_Cfg_CollectionSizeOfDataCollectionTableType)((Index)))
#define Dem_Cfg_IsDataElementTableCol2ElmtIndUsedOfDataCollectionTable(Index) Dem_Cfg_IsUpdateOfDataCollectionTable(Index)  /**< TRUE, if the 0:n relation has 1 relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd */
#define Dem_Cfg_GetElementSizeOfDataElementTable(Index)               ((Dem_Cfg_ElementSizeOfDataElementTableType)((Index)))  /**< Size of data element in Byte. */
#define Dem_Cfg_GetDataElementTableCol2ElmtInd(Index)                 ((Dem_Cfg_DataElementTableCol2ElmtIndType)(((Index) + 1)))  /**< the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataElementTable */
#define Dem_Cfg_IsDebounceContinuousOfDebounceTable(Index)            (((FALSE)) != FALSE)  /**< DemDebounceContinuous of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased and ~/DemDebounceTimeBase */
#define Dem_Cfg_IsEventDebounceBehaviorOfDebounceTable(Index)         (((FALSE)) != FALSE)  /**< DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/[algorithm]/DemDebounceBehavior == DEM_DEBOUNCE_RESET */
#define Dem_Cfg_GetFailTimerCyclesOfDebounceTable(Index)              0  /**< HiRes- or LoRes-Timer ticks for DemDebounceTimeFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceTimeBase */
#define Dem_Cfg_IsJumpDownOfDebounceTable(Index)                      Dem_Cfg_IsJumpUpOfDebounceTable(Index)  /**< DemDebounceCounterJumpDown of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBase */
#define Dem_Cfg_GetJumpDownValueOfDebounceTable(Index)                0  /**< DemDebounceCounterJumpDownValue of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
#define Dem_Cfg_GetJumpUpValueOfDebounceTable(Index)                  0  /**< DemDebounceCounterJumpUpValue of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
#define Dem_Cfg_GetPassTimerCyclesOfDebounceTable(Index)              0  /**< HiRes- or LoRes-Timer ticks for DemDebounceTimePassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceTimeBase */
#define Dem_Cfg_IsStorageOfDebounceTable(Index)                       (((FALSE)) != FALSE)  /**< DemDebounceCounterStorage of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
#define Dem_Cfg_GetDtcSeverityOfDtcTable(Index)                       0U
#define Dem_Cfg_GetFunctionalUnitOfDtcTable(Index)                    255U
#define Dem_Cfg_IsImmediateNvStorageOfDtcTable(Index)                 (((FALSE)) != FALSE)
#define Dem_Cfg_IsEventAvailableDefault(Index)                        (((TRUE)) != FALSE)
#define Dem_Cfg_IsEventAvailableInVariant(Index)                      (((TRUE)) != FALSE)
#define Dem_Cfg_IsAgingAllowedOfEventTable(Index)                     (((FALSE)) != FALSE)  /**< DemAgingAllowed of the DemEventParameter/DemEventClass */
#define Dem_Cfg_GetAgingCycleCounterThresholdOfEventTable(Index)      255U  /**< DemAgingCycleCounterThreshold of the DemEventParameter/DemEventClass, if AgingAllowedOfEventTable==FALSE we use '255' here, too. */
#define Dem_Cfg_GetEventFailureCycleCounterThresholdOfEventTable(Index) 0U  /**< DemEventFailureCycleCounterThreshold of the DemEventParameter/DemEventClass, '0': is also default for unset parameter */
#define Dem_Cfg_GetEventFailureCycleIdOfEventTable(Index)             /*no EventFailureCycle*/ 3U  /**< ID of the cycle, referenced by DemEventParameter/DemEventClass/DemEventFailureCycleRef */
#define Dem_Cfg_GetEventKindOfEventTable(Index)                       Dem_Cfg_GetExtendedDataTableIdxOfEventTable(Index)  /**< DemEventKind of the DemEventParameter */
#define Dem_Cfg_IsEventLatchTFOfEventTable(Index)                     (((FALSE)) != FALSE)  /**< DemEventLatchTestFailed of the DemEventParameter */
#define Dem_Cfg_GetEventPriorityOfEventTable(Index)                   2U  /**< DemEventParameter/DemEventClass/DemEventPriority, values [1..255] for the configuration range [1..255]. */
#define Dem_Cfg_GetEventSignificanceOfEventTable(Index)               DEM_CFG_DEM_EVENT_SIGNIFICANCE_FAULT_EVENTSIGNIFICANCEOFEVENTTABLE  /**< DemEventSignificance of the DemEventParameter/DemEventClass */
#define Dem_Cfg_GetFreezeFrameTableStdFFIdxOfEventTable(Index)        0U  /**< the index of the 1:1 relation pointing to Dem_Cfg_FreezeFrameTable */
#define Dem_Cfg_GetHealingTargetOfEventTable(Index)                   0U  /**< DemIndicatorHealingCycleCounterThreshold of the DemEventParameter/DemEventClass/DemIndicatorAttribute (for each event all attribute's value must be identical). Events without DemIndicatorAttribute have: 0. */
#define Dem_Cfg_GetMaskedBitsOfEventTable(Index)                      0x00U  /**< contains bitcoded the boolean data of Dem_Cfg_AgingAllowedOfEventTable, Dem_Cfg_EventLatchTFOfEventTable */
#define Dem_Cfg_IsDataCollectionTableEdr2CollIndUsedOfExtendedDataTable(Index) (((boolean)(Dem_Cfg_GetDataCollectionTableEdr2CollIndStartIdxOfExtendedDataTable(Index) != DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd */
#define Dem_Cfg_GetRecordSizeOfFreezeFrameTable(Index)                0U  /**< Summarized size of did data that is stored in Dem_Cfg_PrimaryEntryType.SnapshotData[][] (i.e. typically without size of dids containing internal data elements). */
#define Dem_Cfg_GetRecordSizeUdsOfFreezeFrameTable(Index)             0U  /**< Summarized size of did data, did numbers and snapshot header (i.e. dynamical payload size of the uds response message). */
#define Dem_Cfg_GetDataElementTableIdxOfGeneralObdInput(Index)        0U  /**< the index of the 1:1 relation pointing to Dem_Cfg_DataElementTable */
#define Dem_Cfg_GetGlobalSeverityMask()                               Dem_Cfg_GetGlobalSeverityMaskOfPCConfig()
#define Dem_Cfg_GetSizeOfDataElementTable()                           Dem_Cfg_GetSizeOfDataElementTableOfPCConfig()
#define Dem_Cfg_GetSizeOfEventDebounceValue()                         Dem_Cfg_GetSizeOfEventDebounceValueOfPCConfig()
#define Dem_Cfg_GetSizeOfEventInternalStatus()                        Dem_Cfg_GetSizeOfEventInternalStatusOfPCConfig()
#define Dem_Cfg_GetSizeOfEventQueueStatus()                           Dem_Cfg_GetSizeOfEventQueueStatusOfPCConfig()
#define Dem_Cfg_GetSizeOfEventTable()                                 Dem_Cfg_GetSizeOfEventTableOfPCConfig()
#define Dem_Cfg_GetSizeOfMemoryCommitNumber()                         Dem_Cfg_GetSizeOfMemoryCommitNumberOfPCConfig()
#define Dem_Cfg_GetSizeOfMemoryStatus()                               Dem_Cfg_GetSizeOfMemoryStatusOfPCConfig()
#define Dem_Cfg_GetSizeOfPrimaryChronology()                          Dem_Cfg_GetSizeOfPrimaryChronologyOfPCConfig()
#define Dem_Cfg_GetSizeOfSecondaryChronology()                        Dem_Cfg_GetSizeOfSecondaryChronologyOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCSetDataMacros  Dem_Cfg Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define Dem_Cfg_SetAdminData(Value)                                   Dem_Cfg_GetAdminDataOfPCConfig() = (Value)
#define Dem_Cfg_SetCommitBuffer(Value)                                Dem_Cfg_GetCommitBufferOfPCConfig() = (Value)
#define Dem_Cfg_SetEventDebounceValue(Index, Value)                   Dem_Cfg_GetEventDebounceValueOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetEventInternalStatus(Index, Value)                  Dem_Cfg_GetEventInternalStatusOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetEventQueueStatus(Index, Value)                     Dem_Cfg_GetEventQueueStatusOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetMemoryCommitNumber(Index, Value)                   Dem_Cfg_GetMemoryCommitNumberOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetMemoryStatus(Index, Value)                         Dem_Cfg_GetMemoryStatusOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetPrimaryChronology(Index, Value)                    Dem_Cfg_GetPrimaryChronologyOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetPrimaryEntry_0(Value)                              Dem_Cfg_GetPrimaryEntry_0OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_1(Value)                              Dem_Cfg_GetPrimaryEntry_1OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_2(Value)                              Dem_Cfg_GetPrimaryEntry_2OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_3(Value)                              Dem_Cfg_GetPrimaryEntry_3OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_4(Value)                              Dem_Cfg_GetPrimaryEntry_4OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_5(Value)                              Dem_Cfg_GetPrimaryEntry_5OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_6(Value)                              Dem_Cfg_GetPrimaryEntry_6OfPCConfig() = (Value)
#define Dem_Cfg_SetPrimaryEntry_7(Value)                              Dem_Cfg_GetPrimaryEntry_7OfPCConfig() = (Value)
#define Dem_Cfg_SetReadoutBuffer(Value)                               Dem_Cfg_GetReadoutBufferOfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryChronology(Index, Value)                  Dem_Cfg_GetSecondaryChronologyOfPCConfig()[(Index)] = (Value)
#define Dem_Cfg_SetSecondaryEntry_0(Value)                            Dem_Cfg_GetSecondaryEntry_0OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_1(Value)                            Dem_Cfg_GetSecondaryEntry_1OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_10(Value)                           Dem_Cfg_GetSecondaryEntry_10OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_11(Value)                           Dem_Cfg_GetSecondaryEntry_11OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_12(Value)                           Dem_Cfg_GetSecondaryEntry_12OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_13(Value)                           Dem_Cfg_GetSecondaryEntry_13OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_14(Value)                           Dem_Cfg_GetSecondaryEntry_14OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_15(Value)                           Dem_Cfg_GetSecondaryEntry_15OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_16(Value)                           Dem_Cfg_GetSecondaryEntry_16OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_17(Value)                           Dem_Cfg_GetSecondaryEntry_17OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_18(Value)                           Dem_Cfg_GetSecondaryEntry_18OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_19(Value)                           Dem_Cfg_GetSecondaryEntry_19OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_2(Value)                            Dem_Cfg_GetSecondaryEntry_2OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_20(Value)                           Dem_Cfg_GetSecondaryEntry_20OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_21(Value)                           Dem_Cfg_GetSecondaryEntry_21OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_22(Value)                           Dem_Cfg_GetSecondaryEntry_22OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_23(Value)                           Dem_Cfg_GetSecondaryEntry_23OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_24(Value)                           Dem_Cfg_GetSecondaryEntry_24OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_25(Value)                           Dem_Cfg_GetSecondaryEntry_25OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_26(Value)                           Dem_Cfg_GetSecondaryEntry_26OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_27(Value)                           Dem_Cfg_GetSecondaryEntry_27OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_28(Value)                           Dem_Cfg_GetSecondaryEntry_28OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_29(Value)                           Dem_Cfg_GetSecondaryEntry_29OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_3(Value)                            Dem_Cfg_GetSecondaryEntry_3OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_30(Value)                           Dem_Cfg_GetSecondaryEntry_30OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_31(Value)                           Dem_Cfg_GetSecondaryEntry_31OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_32(Value)                           Dem_Cfg_GetSecondaryEntry_32OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_33(Value)                           Dem_Cfg_GetSecondaryEntry_33OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_34(Value)                           Dem_Cfg_GetSecondaryEntry_34OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_35(Value)                           Dem_Cfg_GetSecondaryEntry_35OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_36(Value)                           Dem_Cfg_GetSecondaryEntry_36OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_37(Value)                           Dem_Cfg_GetSecondaryEntry_37OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_38(Value)                           Dem_Cfg_GetSecondaryEntry_38OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_39(Value)                           Dem_Cfg_GetSecondaryEntry_39OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_4(Value)                            Dem_Cfg_GetSecondaryEntry_4OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_5(Value)                            Dem_Cfg_GetSecondaryEntry_5OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_6(Value)                            Dem_Cfg_GetSecondaryEntry_6OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_7(Value)                            Dem_Cfg_GetSecondaryEntry_7OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_8(Value)                            Dem_Cfg_GetSecondaryEntry_8OfPCConfig() = (Value)
#define Dem_Cfg_SetSecondaryEntry_9(Value)                            Dem_Cfg_GetSecondaryEntry_9OfPCConfig() = (Value)
#define Dem_Cfg_SetStatusData(Value)                                  Dem_Cfg_GetStatusDataOfPCConfig() = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCGetAddressOfDataMacros  Dem_Cfg Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define Dem_Cfg_GetAddrEventDebounceValue(Index)                      &Dem_Cfg_GetEventDebounceValue(Index)
#define Dem_Cfg_GetAddrEventInternalStatus(Index)                     &Dem_Cfg_GetEventInternalStatus(Index)
#define Dem_Cfg_GetAddrEventQueueStatus(Index)                        &Dem_Cfg_GetEventQueueStatus(Index)
#define Dem_Cfg_GetAddrMemoryCommitNumber(Index)                      &Dem_Cfg_GetMemoryCommitNumber(Index)
#define Dem_Cfg_GetAddrMemoryStatus(Index)                            &Dem_Cfg_GetMemoryStatus(Index)
#define Dem_Cfg_GetAddrPrimaryChronology(Index)                       &Dem_Cfg_GetPrimaryChronology(Index)
#define Dem_Cfg_GetAddrSecondaryChronology(Index)                     &Dem_Cfg_GetSecondaryChronology(Index)
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCHasMacros  Dem_Cfg Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define Dem_Cfg_HasAdminData()                                        (TRUE != FALSE)
#define Dem_Cfg_HasCommitBuffer()                                     (TRUE != FALSE)
#define Dem_Cfg_HasConfigurationId()                                  (TRUE != FALSE)
#define Dem_Cfg_HasCycleIdTable()                                     (TRUE != FALSE)
#define Dem_Cfg_HasOpCycleTypeOfCycleIdTable()                        (TRUE != FALSE)
#define Dem_Cfg_HasUsedForAgingOfCycleIdTable()                       (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTable()                              (TRUE != FALSE)
#define Dem_Cfg_HasCollectionSizeOfDataCollectionTable()              (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableCol2ElmtIndEndIdxOfDataCollectionTable() (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableCol2ElmtIndStartIdxOfDataCollectionTable() (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableCol2ElmtIndUsedOfDataCollectionTable() (TRUE != FALSE)
#define Dem_Cfg_HasIdNumberOfDataCollectionTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasMaskedBitsOfDataCollectionTable()                  (TRUE != FALSE)
#define Dem_Cfg_HasStorageKindOfDataCollectionTable()                 (TRUE != FALSE)
#define Dem_Cfg_HasUpdateOfDataCollectionTable()                      (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableEdr2CollInd()                   (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTable()                                 (TRUE != FALSE)
#define Dem_Cfg_HasElementKindOfDataElementTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasElementSizeOfDataElementTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasReadDataFuncOfDataElementTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableCol2ElmtInd()                      (TRUE != FALSE)
#define Dem_Cfg_HasDebounceTable()                                    (TRUE != FALSE)
#define Dem_Cfg_HasDebounceContinuousOfDebounceTable()                (TRUE != FALSE)
#define Dem_Cfg_HasDecrementStepSizeOfDebounceTable()                 (TRUE != FALSE)
#define Dem_Cfg_HasEventDebounceAlgorithmOfDebounceTable()            (TRUE != FALSE)
#define Dem_Cfg_HasEventDebounceBehaviorOfDebounceTable()             (TRUE != FALSE)
#define Dem_Cfg_HasFailTimerCyclesOfDebounceTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasFailedThresholdOfDebounceTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasIncrementStepSizeOfDebounceTable()                 (TRUE != FALSE)
#define Dem_Cfg_HasJumpDownOfDebounceTable()                          (TRUE != FALSE)
#define Dem_Cfg_HasJumpDownValueOfDebounceTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasJumpUpOfDebounceTable()                            (TRUE != FALSE)
#define Dem_Cfg_HasJumpUpValueOfDebounceTable()                       (TRUE != FALSE)
#define Dem_Cfg_HasMaskedBitsOfDebounceTable()                        (TRUE != FALSE)
#define Dem_Cfg_HasPassTimerCyclesOfDebounceTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasPassedThresholdOfDebounceTable()                   (TRUE != FALSE)
#define Dem_Cfg_HasStorageOfDebounceTable()                           (TRUE != FALSE)
#define Dem_Cfg_HasDtcTable()                                         (TRUE != FALSE)
#define Dem_Cfg_HasDtcSeverityOfDtcTable()                            (TRUE != FALSE)
#define Dem_Cfg_HasFunctionalUnitOfDtcTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasImmediateNvStorageOfDtcTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasUdsDtcOfDtcTable()                                 (TRUE != FALSE)
#define Dem_Cfg_HasEventAvailableDefault()                            (TRUE != FALSE)
#define Dem_Cfg_HasEventAvailableInVariant()                          (TRUE != FALSE)
#define Dem_Cfg_HasEventDebounceValue()                               (TRUE != FALSE)
#define Dem_Cfg_HasEventInternalStatus()                              (TRUE != FALSE)
#define Dem_Cfg_HasEventQueueStatus()                                 (TRUE != FALSE)
#define Dem_Cfg_HasEventTable()                                       (TRUE != FALSE)
#define Dem_Cfg_HasAgingAllowedOfEventTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasAgingCycleCounterThresholdOfEventTable()           (TRUE != FALSE)
#define Dem_Cfg_HasAgingCycleIdOfEventTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasDebounceTableIdxOfEventTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasDtcTableIdxOfEventTable()                          (TRUE != FALSE)
#define Dem_Cfg_HasEventDestinationOfEventTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasEventFailureCycleCounterThresholdOfEventTable()    (TRUE != FALSE)
#define Dem_Cfg_HasEventFailureCycleIdOfEventTable()                  (TRUE != FALSE)
#define Dem_Cfg_HasEventKindOfEventTable()                            (TRUE != FALSE)
#define Dem_Cfg_HasEventLatchTFOfEventTable()                         (TRUE != FALSE)
#define Dem_Cfg_HasEventPriorityOfEventTable()                        (TRUE != FALSE)
#define Dem_Cfg_HasEventSignificanceOfEventTable()                    (TRUE != FALSE)
#define Dem_Cfg_HasExtendedDataTableIdxOfEventTable()                 (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameTableStdFFIdxOfEventTable()             (TRUE != FALSE)
#define Dem_Cfg_HasHealingTargetOfEventTable()                        (TRUE != FALSE)
#define Dem_Cfg_HasMaskedBitsOfEventTable()                           (TRUE != FALSE)
#define Dem_Cfg_HasOperationCycleIdOfEventTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasExtendedDataTable()                                (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableEdr2CollIndEndIdxOfExtendedDataTable() (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableEdr2CollIndStartIdxOfExtendedDataTable() (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableEdr2CollIndUsedOfExtendedDataTable() (TRUE != FALSE)
#define Dem_Cfg_HasMaxRecordSizeOfExtendedDataTable()                 (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameTable()                                 (TRUE != FALSE)
#define Dem_Cfg_HasRecordSizeOfFreezeFrameTable()                     (TRUE != FALSE)
#define Dem_Cfg_HasRecordSizeUdsOfFreezeFrameTable()                  (TRUE != FALSE)
#define Dem_Cfg_HasGeneralObdInput()                                  (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableIdxOfGeneralObdInput()             (TRUE != FALSE)
#define Dem_Cfg_HasGlobalSeverityMask()                               (TRUE != FALSE)
#define Dem_Cfg_HasMemoryCommitNumber()                               (TRUE != FALSE)
#define Dem_Cfg_HasMemoryDataPtr()                                    (TRUE != FALSE)
#define Dem_Cfg_HasMemoryDataSize()                                   (TRUE != FALSE)
#define Dem_Cfg_HasMemoryEntryInit()                                  (TRUE != FALSE)
#define Dem_Cfg_HasMemoryStatus()                                     (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryChronology()                                (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_0()                                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_1()                                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_2()                                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_3()                                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_4()                                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_5()                                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_6()                                   (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_7()                                   (TRUE != FALSE)
#define Dem_Cfg_HasReadoutBuffer()                                    (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryChronology()                              (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_0()                                 (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_1()                                 (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_10()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_11()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_12()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_13()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_14()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_15()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_16()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_17()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_18()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_19()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_2()                                 (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_20()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_21()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_22()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_23()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_24()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_25()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_26()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_27()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_28()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_29()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_3()                                 (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_30()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_31()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_32()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_33()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_34()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_35()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_36()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_37()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_38()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_39()                                (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_4()                                 (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_5()                                 (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_6()                                 (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_7()                                 (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_8()                                 (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_9()                                 (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfDataElementTable()                           (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventDebounceValue()                         (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventInternalStatus()                        (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventQueueStatus()                           (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventTable()                                 (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfMemoryCommitNumber()                         (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfMemoryStatus()                               (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfPrimaryChronology()                          (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfSecondaryChronology()                        (TRUE != FALSE)
#define Dem_Cfg_HasStatusData()                                       (TRUE != FALSE)
#define Dem_Cfg_HasTimeSeriesEntryInit()                              (TRUE != FALSE)
#define Dem_HasPCConfig()                                             (TRUE != FALSE)
#define Dem_Cfg_HasAdminDataOfPCConfig()                              (TRUE != FALSE)
#define Dem_Cfg_HasCommitBufferOfPCConfig()                           (TRUE != FALSE)
#define Dem_Cfg_HasConfigurationIdOfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasCycleIdTableOfPCConfig()                           (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableEdr2CollIndOfPCConfig()         (TRUE != FALSE)
#define Dem_Cfg_HasDataCollectionTableOfPCConfig()                    (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableCol2ElmtIndOfPCConfig()            (TRUE != FALSE)
#define Dem_Cfg_HasDataElementTableOfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasDebounceTableOfPCConfig()                          (TRUE != FALSE)
#define Dem_Cfg_HasDtcTableOfPCConfig()                               (TRUE != FALSE)
#define Dem_Cfg_HasEventAvailableDefaultOfPCConfig()                  (TRUE != FALSE)
#define Dem_Cfg_HasEventAvailableInVariantOfPCConfig()                (TRUE != FALSE)
#define Dem_Cfg_HasEventDebounceValueOfPCConfig()                     (TRUE != FALSE)
#define Dem_Cfg_HasEventInternalStatusOfPCConfig()                    (TRUE != FALSE)
#define Dem_Cfg_HasEventQueueStatusOfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasEventTableOfPCConfig()                             (TRUE != FALSE)
#define Dem_Cfg_HasExtendedDataTableOfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasFreezeFrameTableOfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasGeneralObdInputOfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasGlobalSeverityMaskOfPCConfig()                     (TRUE != FALSE)
#define Dem_Cfg_HasMemoryCommitNumberOfPCConfig()                     (TRUE != FALSE)
#define Dem_Cfg_HasMemoryDataPtrOfPCConfig()                          (TRUE != FALSE)
#define Dem_Cfg_HasMemoryDataSizeOfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasMemoryEntryInitOfPCConfig()                        (TRUE != FALSE)
#define Dem_Cfg_HasMemoryStatusOfPCConfig()                           (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryChronologyOfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_0OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_1OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_2OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_3OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_4OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_5OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_6OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasPrimaryEntry_7OfPCConfig()                         (TRUE != FALSE)
#define Dem_Cfg_HasReadoutBufferOfPCConfig()                          (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryChronologyOfPCConfig()                    (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_0OfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_10OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_11OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_12OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_13OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_14OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_15OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_16OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_17OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_18OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_19OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_1OfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_20OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_21OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_22OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_23OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_24OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_25OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_26OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_27OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_28OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_29OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_2OfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_30OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_31OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_32OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_33OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_34OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_35OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_36OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_37OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_38OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_39OfPCConfig()                      (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_3OfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_4OfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_5OfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_6OfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_7OfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_8OfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasSecondaryEntry_9OfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfDataElementTableOfPCConfig()                 (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventDebounceValueOfPCConfig()               (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventInternalStatusOfPCConfig()              (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventQueueStatusOfPCConfig()                 (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfEventTableOfPCConfig()                       (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfMemoryCommitNumberOfPCConfig()               (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfMemoryStatusOfPCConfig()                     (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfPrimaryChronologyOfPCConfig()                (TRUE != FALSE)
#define Dem_Cfg_HasSizeOfSecondaryChronologyOfPCConfig()              (TRUE != FALSE)
#define Dem_Cfg_HasStatusDataOfPCConfig()                             (TRUE != FALSE)
#define Dem_Cfg_HasTimeSeriesEntryInitOfPCConfig()                    (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCIncrementDataMacros  Dem_Cfg Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define Dem_Cfg_IncAdminData()                                        Dem_Cfg_GetAdminData()++
#define Dem_Cfg_IncCommitBuffer()                                     Dem_Cfg_GetCommitBuffer()++
#define Dem_Cfg_IncEventDebounceValue(Index)                          Dem_Cfg_GetEventDebounceValue(Index)++
#define Dem_Cfg_IncEventInternalStatus(Index)                         Dem_Cfg_GetEventInternalStatus(Index)++
#define Dem_Cfg_IncEventQueueStatus(Index)                            Dem_Cfg_GetEventQueueStatus(Index)++
#define Dem_Cfg_IncMemoryCommitNumber(Index)                          Dem_Cfg_GetMemoryCommitNumber(Index)++
#define Dem_Cfg_IncMemoryStatus(Index)                                Dem_Cfg_GetMemoryStatus(Index)++
#define Dem_Cfg_IncPrimaryChronology(Index)                           Dem_Cfg_GetPrimaryChronology(Index)++
#define Dem_Cfg_IncPrimaryEntry_0()                                   Dem_Cfg_GetPrimaryEntry_0()++
#define Dem_Cfg_IncPrimaryEntry_1()                                   Dem_Cfg_GetPrimaryEntry_1()++
#define Dem_Cfg_IncPrimaryEntry_2()                                   Dem_Cfg_GetPrimaryEntry_2()++
#define Dem_Cfg_IncPrimaryEntry_3()                                   Dem_Cfg_GetPrimaryEntry_3()++
#define Dem_Cfg_IncPrimaryEntry_4()                                   Dem_Cfg_GetPrimaryEntry_4()++
#define Dem_Cfg_IncPrimaryEntry_5()                                   Dem_Cfg_GetPrimaryEntry_5()++
#define Dem_Cfg_IncPrimaryEntry_6()                                   Dem_Cfg_GetPrimaryEntry_6()++
#define Dem_Cfg_IncPrimaryEntry_7()                                   Dem_Cfg_GetPrimaryEntry_7()++
#define Dem_Cfg_IncReadoutBuffer()                                    Dem_Cfg_GetReadoutBuffer()++
#define Dem_Cfg_IncSecondaryChronology(Index)                         Dem_Cfg_GetSecondaryChronology(Index)++
#define Dem_Cfg_IncSecondaryEntry_0()                                 Dem_Cfg_GetSecondaryEntry_0()++
#define Dem_Cfg_IncSecondaryEntry_1()                                 Dem_Cfg_GetSecondaryEntry_1()++
#define Dem_Cfg_IncSecondaryEntry_10()                                Dem_Cfg_GetSecondaryEntry_10()++
#define Dem_Cfg_IncSecondaryEntry_11()                                Dem_Cfg_GetSecondaryEntry_11()++
#define Dem_Cfg_IncSecondaryEntry_12()                                Dem_Cfg_GetSecondaryEntry_12()++
#define Dem_Cfg_IncSecondaryEntry_13()                                Dem_Cfg_GetSecondaryEntry_13()++
#define Dem_Cfg_IncSecondaryEntry_14()                                Dem_Cfg_GetSecondaryEntry_14()++
#define Dem_Cfg_IncSecondaryEntry_15()                                Dem_Cfg_GetSecondaryEntry_15()++
#define Dem_Cfg_IncSecondaryEntry_16()                                Dem_Cfg_GetSecondaryEntry_16()++
#define Dem_Cfg_IncSecondaryEntry_17()                                Dem_Cfg_GetSecondaryEntry_17()++
#define Dem_Cfg_IncSecondaryEntry_18()                                Dem_Cfg_GetSecondaryEntry_18()++
#define Dem_Cfg_IncSecondaryEntry_19()                                Dem_Cfg_GetSecondaryEntry_19()++
#define Dem_Cfg_IncSecondaryEntry_2()                                 Dem_Cfg_GetSecondaryEntry_2()++
#define Dem_Cfg_IncSecondaryEntry_20()                                Dem_Cfg_GetSecondaryEntry_20()++
#define Dem_Cfg_IncSecondaryEntry_21()                                Dem_Cfg_GetSecondaryEntry_21()++
#define Dem_Cfg_IncSecondaryEntry_22()                                Dem_Cfg_GetSecondaryEntry_22()++
#define Dem_Cfg_IncSecondaryEntry_23()                                Dem_Cfg_GetSecondaryEntry_23()++
#define Dem_Cfg_IncSecondaryEntry_24()                                Dem_Cfg_GetSecondaryEntry_24()++
#define Dem_Cfg_IncSecondaryEntry_25()                                Dem_Cfg_GetSecondaryEntry_25()++
#define Dem_Cfg_IncSecondaryEntry_26()                                Dem_Cfg_GetSecondaryEntry_26()++
#define Dem_Cfg_IncSecondaryEntry_27()                                Dem_Cfg_GetSecondaryEntry_27()++
#define Dem_Cfg_IncSecondaryEntry_28()                                Dem_Cfg_GetSecondaryEntry_28()++
#define Dem_Cfg_IncSecondaryEntry_29()                                Dem_Cfg_GetSecondaryEntry_29()++
#define Dem_Cfg_IncSecondaryEntry_3()                                 Dem_Cfg_GetSecondaryEntry_3()++
#define Dem_Cfg_IncSecondaryEntry_30()                                Dem_Cfg_GetSecondaryEntry_30()++
#define Dem_Cfg_IncSecondaryEntry_31()                                Dem_Cfg_GetSecondaryEntry_31()++
#define Dem_Cfg_IncSecondaryEntry_32()                                Dem_Cfg_GetSecondaryEntry_32()++
#define Dem_Cfg_IncSecondaryEntry_33()                                Dem_Cfg_GetSecondaryEntry_33()++
#define Dem_Cfg_IncSecondaryEntry_34()                                Dem_Cfg_GetSecondaryEntry_34()++
#define Dem_Cfg_IncSecondaryEntry_35()                                Dem_Cfg_GetSecondaryEntry_35()++
#define Dem_Cfg_IncSecondaryEntry_36()                                Dem_Cfg_GetSecondaryEntry_36()++
#define Dem_Cfg_IncSecondaryEntry_37()                                Dem_Cfg_GetSecondaryEntry_37()++
#define Dem_Cfg_IncSecondaryEntry_38()                                Dem_Cfg_GetSecondaryEntry_38()++
#define Dem_Cfg_IncSecondaryEntry_39()                                Dem_Cfg_GetSecondaryEntry_39()++
#define Dem_Cfg_IncSecondaryEntry_4()                                 Dem_Cfg_GetSecondaryEntry_4()++
#define Dem_Cfg_IncSecondaryEntry_5()                                 Dem_Cfg_GetSecondaryEntry_5()++
#define Dem_Cfg_IncSecondaryEntry_6()                                 Dem_Cfg_GetSecondaryEntry_6()++
#define Dem_Cfg_IncSecondaryEntry_7()                                 Dem_Cfg_GetSecondaryEntry_7()++
#define Dem_Cfg_IncSecondaryEntry_8()                                 Dem_Cfg_GetSecondaryEntry_8()++
#define Dem_Cfg_IncSecondaryEntry_9()                                 Dem_Cfg_GetSecondaryEntry_9()++
#define Dem_Cfg_IncStatusData()                                       Dem_Cfg_GetStatusData()++
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCDecrementDataMacros  Dem_Cfg Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define Dem_Cfg_DecAdminData()                                        Dem_Cfg_GetAdminData()--
#define Dem_Cfg_DecCommitBuffer()                                     Dem_Cfg_GetCommitBuffer()--
#define Dem_Cfg_DecEventDebounceValue(Index)                          Dem_Cfg_GetEventDebounceValue(Index)--
#define Dem_Cfg_DecEventInternalStatus(Index)                         Dem_Cfg_GetEventInternalStatus(Index)--
#define Dem_Cfg_DecEventQueueStatus(Index)                            Dem_Cfg_GetEventQueueStatus(Index)--
#define Dem_Cfg_DecMemoryCommitNumber(Index)                          Dem_Cfg_GetMemoryCommitNumber(Index)--
#define Dem_Cfg_DecMemoryStatus(Index)                                Dem_Cfg_GetMemoryStatus(Index)--
#define Dem_Cfg_DecPrimaryChronology(Index)                           Dem_Cfg_GetPrimaryChronology(Index)--
#define Dem_Cfg_DecPrimaryEntry_0()                                   Dem_Cfg_GetPrimaryEntry_0()--
#define Dem_Cfg_DecPrimaryEntry_1()                                   Dem_Cfg_GetPrimaryEntry_1()--
#define Dem_Cfg_DecPrimaryEntry_2()                                   Dem_Cfg_GetPrimaryEntry_2()--
#define Dem_Cfg_DecPrimaryEntry_3()                                   Dem_Cfg_GetPrimaryEntry_3()--
#define Dem_Cfg_DecPrimaryEntry_4()                                   Dem_Cfg_GetPrimaryEntry_4()--
#define Dem_Cfg_DecPrimaryEntry_5()                                   Dem_Cfg_GetPrimaryEntry_5()--
#define Dem_Cfg_DecPrimaryEntry_6()                                   Dem_Cfg_GetPrimaryEntry_6()--
#define Dem_Cfg_DecPrimaryEntry_7()                                   Dem_Cfg_GetPrimaryEntry_7()--
#define Dem_Cfg_DecReadoutBuffer()                                    Dem_Cfg_GetReadoutBuffer()--
#define Dem_Cfg_DecSecondaryChronology(Index)                         Dem_Cfg_GetSecondaryChronology(Index)--
#define Dem_Cfg_DecSecondaryEntry_0()                                 Dem_Cfg_GetSecondaryEntry_0()--
#define Dem_Cfg_DecSecondaryEntry_1()                                 Dem_Cfg_GetSecondaryEntry_1()--
#define Dem_Cfg_DecSecondaryEntry_10()                                Dem_Cfg_GetSecondaryEntry_10()--
#define Dem_Cfg_DecSecondaryEntry_11()                                Dem_Cfg_GetSecondaryEntry_11()--
#define Dem_Cfg_DecSecondaryEntry_12()                                Dem_Cfg_GetSecondaryEntry_12()--
#define Dem_Cfg_DecSecondaryEntry_13()                                Dem_Cfg_GetSecondaryEntry_13()--
#define Dem_Cfg_DecSecondaryEntry_14()                                Dem_Cfg_GetSecondaryEntry_14()--
#define Dem_Cfg_DecSecondaryEntry_15()                                Dem_Cfg_GetSecondaryEntry_15()--
#define Dem_Cfg_DecSecondaryEntry_16()                                Dem_Cfg_GetSecondaryEntry_16()--
#define Dem_Cfg_DecSecondaryEntry_17()                                Dem_Cfg_GetSecondaryEntry_17()--
#define Dem_Cfg_DecSecondaryEntry_18()                                Dem_Cfg_GetSecondaryEntry_18()--
#define Dem_Cfg_DecSecondaryEntry_19()                                Dem_Cfg_GetSecondaryEntry_19()--
#define Dem_Cfg_DecSecondaryEntry_2()                                 Dem_Cfg_GetSecondaryEntry_2()--
#define Dem_Cfg_DecSecondaryEntry_20()                                Dem_Cfg_GetSecondaryEntry_20()--
#define Dem_Cfg_DecSecondaryEntry_21()                                Dem_Cfg_GetSecondaryEntry_21()--
#define Dem_Cfg_DecSecondaryEntry_22()                                Dem_Cfg_GetSecondaryEntry_22()--
#define Dem_Cfg_DecSecondaryEntry_23()                                Dem_Cfg_GetSecondaryEntry_23()--
#define Dem_Cfg_DecSecondaryEntry_24()                                Dem_Cfg_GetSecondaryEntry_24()--
#define Dem_Cfg_DecSecondaryEntry_25()                                Dem_Cfg_GetSecondaryEntry_25()--
#define Dem_Cfg_DecSecondaryEntry_26()                                Dem_Cfg_GetSecondaryEntry_26()--
#define Dem_Cfg_DecSecondaryEntry_27()                                Dem_Cfg_GetSecondaryEntry_27()--
#define Dem_Cfg_DecSecondaryEntry_28()                                Dem_Cfg_GetSecondaryEntry_28()--
#define Dem_Cfg_DecSecondaryEntry_29()                                Dem_Cfg_GetSecondaryEntry_29()--
#define Dem_Cfg_DecSecondaryEntry_3()                                 Dem_Cfg_GetSecondaryEntry_3()--
#define Dem_Cfg_DecSecondaryEntry_30()                                Dem_Cfg_GetSecondaryEntry_30()--
#define Dem_Cfg_DecSecondaryEntry_31()                                Dem_Cfg_GetSecondaryEntry_31()--
#define Dem_Cfg_DecSecondaryEntry_32()                                Dem_Cfg_GetSecondaryEntry_32()--
#define Dem_Cfg_DecSecondaryEntry_33()                                Dem_Cfg_GetSecondaryEntry_33()--
#define Dem_Cfg_DecSecondaryEntry_34()                                Dem_Cfg_GetSecondaryEntry_34()--
#define Dem_Cfg_DecSecondaryEntry_35()                                Dem_Cfg_GetSecondaryEntry_35()--
#define Dem_Cfg_DecSecondaryEntry_36()                                Dem_Cfg_GetSecondaryEntry_36()--
#define Dem_Cfg_DecSecondaryEntry_37()                                Dem_Cfg_GetSecondaryEntry_37()--
#define Dem_Cfg_DecSecondaryEntry_38()                                Dem_Cfg_GetSecondaryEntry_38()--
#define Dem_Cfg_DecSecondaryEntry_39()                                Dem_Cfg_GetSecondaryEntry_39()--
#define Dem_Cfg_DecSecondaryEntry_4()                                 Dem_Cfg_GetSecondaryEntry_4()--
#define Dem_Cfg_DecSecondaryEntry_5()                                 Dem_Cfg_GetSecondaryEntry_5()--
#define Dem_Cfg_DecSecondaryEntry_6()                                 Dem_Cfg_GetSecondaryEntry_6()--
#define Dem_Cfg_DecSecondaryEntry_7()                                 Dem_Cfg_GetSecondaryEntry_7()--
#define Dem_Cfg_DecSecondaryEntry_8()                                 Dem_Cfg_GetSecondaryEntry_8()--
#define Dem_Cfg_DecSecondaryEntry_9()                                 Dem_Cfg_GetSecondaryEntry_9()--
#define Dem_Cfg_DecStatusData()                                       Dem_Cfg_GetStatusData()--
/** 
  \}
*/ 

  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/



/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
 /*  Return type of Dem_Cfg_EventIndicatorIterGet() - returns: eventIndicatorIndex  */ 
typedef uint8                                                         Dem_Cfg_IndicatorIndexType; 

typedef struct Dem_Cfg_AdminDataType_s {
  uint16 ImplementationVersion;
  uint16 ConfigurationId;
  uint16 CycleCounter[ 3 /*DEM_CFG_GLOBAL_CYCLE_COUNT*/];
  uint8  MemoryOverflow;                                                        /* (DEM_CFG_DATA_OVFLIND == STD_ON) || (DEM_CFG_SUPPORT_OVFLIND_API == STD_ON) */
}                                                                     Dem_Cfg_AdminDataType; 

typedef struct Dem_Cfg_StatusDataType_s {
  uint16         FirstFailedEvent;
  uint16         FirstConfirmedEvent;
  uint16         MostRecentFailedEvent;
  uint16         MostRecentConfmdEvent;
  volatile uint8 EventStatus[ 75 /*DEM_G_NUMBER_OF_EVENTS (incl. #0)*/];
}                                                                     Dem_Cfg_StatusDataType; 

typedef struct Dem_Cfg_PrimaryEntryType_s {
  uint32 Timestamp;
  uint16 AgingCounter;
  uint16 EventId;
  uint8  ExtendedData[ 2 /*DEM_CFG_MAX_NUM_EXT_RECORDS*/][ 2 /*DEM_CFG_MAX_SIZE_EXT_RECORD*/];  /* (DEM_CFG_SUPPORT_USER_ERECS == STD_ON) */
  uint8  State;                                                                                 /* (DEM_CFG_SUPPORT_OBDII == STD_ON) || (DEM_CFG_SUPPORT_WWHOBD == STD_ON) || (DEM_CFG_PROCESS_CDTC_ALL_DTC == STD_ON) */
  uint8  ExtendedHeader;                                                                        /* (DEM_CFG_SUPPORT_USER_ERECS == STD_ON) */
}                                                                     Dem_Cfg_PrimaryEntryType; 

typedef struct Dem_Cfg_TimeSeriesEntryType_s {
  uint32 Timestamp;
  uint16 EventId;
}                                                                     Dem_Cfg_TimeSeriesEntryType; 

typedef uint8                                                         Dem_Cfg_MemoryIndexType;               /* Number of NV blocks, see Dem_Cfg_GlobalNvBlockCount(). */ 

typedef uint8                                                         Dem_Cfg_EventInternalStatusType;       /* InternalStatus requires 2bits. Additionally following features enlarge the type: +1 (DEM_CFG_SUPPORT_EVENTAVAILABLE) */ 

typedef P2VAR(Dem_Cfg_PrimaryEntryType, TYPEDEF, DEM_SHARED_DATA)     Dem_SharedMemoryEntryPtrType; 

typedef P2CONST(Dem_Cfg_PrimaryEntryType, TYPEDEF, DEM_SHARED_DATA)   Dem_ConstSharedMemoryEntryPtrType; 

typedef uint16                                                        Dem_Cfg_IndicatorContinuousType[1];    /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

typedef uint16                                                        Dem_Cfg_IndicatorBlinkingType[1];      /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

typedef uint16                                                        Dem_Cfg_IndicatorFastFlashType[1];     /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

typedef uint16                                                        Dem_Cfg_IndicatorSlowFlashType[1];     /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

typedef uint8                                                         Dem_Cfg_GlobalSpecialIndicatorStatesType[1];    /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

 /*  Temporary buffer for interaction with NvM  */ 
typedef union Dem_Cfg_CommitBufferType_u { /* PRQA S 0750 */ /* MD_DEM_18.4 */
  uint8                    mRaw[ 1 ];
  Dem_Cfg_AdminDataType    mAdmin;
  Dem_Cfg_StatusDataType   mStatus;
  Dem_Cfg_PrimaryEntryType mPrimary;
  Dem_Cfg_PrimaryEntryType mSecondary;
}                                                                     Dem_Cfg_CommitBufferType; 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CfgPCIterableTypes  Dem_Cfg Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate Dem_Cfg_CycleIdTable */
typedef uint8_least Dem_Cfg_CycleIdTableIterType;

/**   \brief  type used to iterate Dem_Cfg_DataCollectionTable */
typedef uint8_least Dem_Cfg_DataCollectionTableIterType;

/**   \brief  type used to iterate Dem_Cfg_DataCollectionTableEdr2CollInd */
typedef uint8_least Dem_Cfg_DataCollectionTableEdr2CollIndIterType;

/**   \brief  type used to iterate Dem_Cfg_DataElementTable */
typedef uint8_least Dem_Cfg_DataElementTableIterType;

/**   \brief  type used to iterate Dem_Cfg_DataElementTableCol2ElmtInd */
typedef uint8_least Dem_Cfg_DataElementTableCol2ElmtIndIterType;

/**   \brief  type used to iterate Dem_Cfg_DebounceTable */
typedef uint8_least Dem_Cfg_DebounceTableIterType;

/**   \brief  type used to iterate Dem_Cfg_DtcTable */
typedef uint8_least Dem_Cfg_DtcTableIterType;

/**   \brief  type used to iterate Dem_Cfg_EventAvailableDefault */
typedef uint8_least Dem_Cfg_EventAvailableDefaultIterType;

/**   \brief  type used to iterate Dem_Cfg_EventAvailableInVariant */
typedef uint8_least Dem_Cfg_EventAvailableInVariantIterType;

/**   \brief  type used to iterate Dem_Cfg_EventTable */
typedef uint8_least Dem_Cfg_EventTableIterType;

/**   \brief  type used to iterate Dem_Cfg_ExtendedDataTable */
typedef uint8_least Dem_Cfg_ExtendedDataTableIterType;

/**   \brief  type used to iterate Dem_Cfg_FreezeFrameTable */
typedef uint8_least Dem_Cfg_FreezeFrameTableIterType;

/**   \brief  type used to iterate Dem_Cfg_GeneralObdInput */
typedef uint8_least Dem_Cfg_GeneralObdInputIterType;

/**   \brief  type used to iterate Dem_Cfg_MemoryCommitNumber */
typedef uint8_least Dem_Cfg_MemoryCommitNumberIterType;

/**   \brief  type used to iterate Dem_Cfg_MemoryDataPtr */
typedef uint8_least Dem_Cfg_MemoryDataPtrIterType;

/**   \brief  type used to iterate Dem_Cfg_MemoryDataSize */
typedef uint8_least Dem_Cfg_MemoryDataSizeIterType;

/**   \brief  type used to iterate Dem_Cfg_MemoryStatus */
typedef uint8_least Dem_Cfg_MemoryStatusIterType;

/**   \brief  type used to iterate Dem_Cfg_PrimaryChronology */
typedef uint8_least Dem_Cfg_PrimaryChronologyIterType;

/**   \brief  type used to iterate Dem_Cfg_SecondaryChronology */
typedef uint8_least Dem_Cfg_SecondaryChronologyIterType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCIterableTypesWithSizeRelations  Dem_Cfg Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate Dem_Cfg_EventDebounceValue */
typedef Dem_Cfg_EventTableIterType Dem_Cfg_EventDebounceValueIterType;

/**   \brief  type used to iterate Dem_Cfg_EventInternalStatus */
typedef Dem_Cfg_EventTableIterType Dem_Cfg_EventInternalStatusIterType;

/**   \brief  type used to iterate Dem_Cfg_EventQueueStatus */
typedef Dem_Cfg_EventTableIterType Dem_Cfg_EventQueueStatusIterType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCValueTypes  Dem_Cfg Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for Dem_Cfg_ConfigurationId */
typedef uint16 Dem_Cfg_ConfigurationIdType;

/**   \brief  value based type definition for Dem_Cfg_OpCycleTypeOfCycleIdTable */
typedef uint8 Dem_Cfg_OpCycleTypeOfCycleIdTableType;

/**   \brief  value based type definition for Dem_Cfg_UsedForAgingOfCycleIdTable */
typedef boolean Dem_Cfg_UsedForAgingOfCycleIdTableType;

/**   \brief  value based type definition for Dem_Cfg_CollectionSizeOfDataCollectionTable */
typedef uint8 Dem_Cfg_CollectionSizeOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_DataElementTableCol2ElmtIndEndIdxOfDataCollectionTable */
typedef uint8 Dem_Cfg_DataElementTableCol2ElmtIndEndIdxOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_DataElementTableCol2ElmtIndStartIdxOfDataCollectionTable */
typedef uint8 Dem_Cfg_DataElementTableCol2ElmtIndStartIdxOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_DataElementTableCol2ElmtIndUsedOfDataCollectionTable */
typedef boolean Dem_Cfg_DataElementTableCol2ElmtIndUsedOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_IdNumberOfDataCollectionTable */
typedef uint8 Dem_Cfg_IdNumberOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_MaskedBitsOfDataCollectionTable */
typedef uint8 Dem_Cfg_MaskedBitsOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_StorageKindOfDataCollectionTable */
typedef uint8 Dem_Cfg_StorageKindOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_UpdateOfDataCollectionTable */
typedef boolean Dem_Cfg_UpdateOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_Cfg_DataCollectionTableEdr2CollInd */
typedef uint8 Dem_Cfg_DataCollectionTableEdr2CollIndType;

/**   \brief  value based type definition for Dem_Cfg_ElementKindOfDataElementTable */
typedef uint8 Dem_Cfg_ElementKindOfDataElementTableType;

/**   \brief  value based type definition for Dem_Cfg_ElementSizeOfDataElementTable */
typedef uint8 Dem_Cfg_ElementSizeOfDataElementTableType;

/**   \brief  value based type definition for Dem_Cfg_DataElementTableCol2ElmtInd */
typedef uint8 Dem_Cfg_DataElementTableCol2ElmtIndType;

/**   \brief  value based type definition for Dem_Cfg_DebounceContinuousOfDebounceTable */
typedef boolean Dem_Cfg_DebounceContinuousOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_DecrementStepSizeOfDebounceTable */
typedef sint8 Dem_Cfg_DecrementStepSizeOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_EventDebounceAlgorithmOfDebounceTable */
typedef uint8 Dem_Cfg_EventDebounceAlgorithmOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_EventDebounceBehaviorOfDebounceTable */
typedef boolean Dem_Cfg_EventDebounceBehaviorOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_FailTimerCyclesOfDebounceTable */
typedef sint8 Dem_Cfg_FailTimerCyclesOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_FailedThresholdOfDebounceTable */
typedef sint16 Dem_Cfg_FailedThresholdOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_IncrementStepSizeOfDebounceTable */
typedef sint8 Dem_Cfg_IncrementStepSizeOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_JumpDownOfDebounceTable */
typedef boolean Dem_Cfg_JumpDownOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_JumpDownValueOfDebounceTable */
typedef sint8 Dem_Cfg_JumpDownValueOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_JumpUpOfDebounceTable */
typedef boolean Dem_Cfg_JumpUpOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_JumpUpValueOfDebounceTable */
typedef sint8 Dem_Cfg_JumpUpValueOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_MaskedBitsOfDebounceTable */
typedef uint8 Dem_Cfg_MaskedBitsOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_PassTimerCyclesOfDebounceTable */
typedef sint8 Dem_Cfg_PassTimerCyclesOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_PassedThresholdOfDebounceTable */
typedef sint8 Dem_Cfg_PassedThresholdOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_StorageOfDebounceTable */
typedef boolean Dem_Cfg_StorageOfDebounceTableType;

/**   \brief  value based type definition for Dem_Cfg_DtcSeverityOfDtcTable */
typedef uint8 Dem_Cfg_DtcSeverityOfDtcTableType;

/**   \brief  value based type definition for Dem_Cfg_FunctionalUnitOfDtcTable */
typedef uint8 Dem_Cfg_FunctionalUnitOfDtcTableType;

/**   \brief  value based type definition for Dem_Cfg_ImmediateNvStorageOfDtcTable */
typedef boolean Dem_Cfg_ImmediateNvStorageOfDtcTableType;

/**   \brief  value based type definition for Dem_Cfg_UdsDtcOfDtcTable */
typedef uint32 Dem_Cfg_UdsDtcOfDtcTableType;

/**   \brief  value based type definition for Dem_Cfg_EventAvailableDefault */
typedef boolean Dem_Cfg_EventAvailableDefaultType;

/**   \brief  value based type definition for Dem_Cfg_EventAvailableInVariant */
typedef boolean Dem_Cfg_EventAvailableInVariantType;

/**   \brief  value based type definition for Dem_Cfg_EventDebounceValue */
typedef sint16 Dem_Cfg_EventDebounceValueType;

/**   \brief  value based type definition for Dem_Cfg_EventQueueStatus */
typedef uint8 Dem_Cfg_EventQueueStatusType;

/**   \brief  value based type definition for Dem_Cfg_AgingAllowedOfEventTable */
typedef boolean Dem_Cfg_AgingAllowedOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_AgingCycleCounterThresholdOfEventTable */
typedef uint8 Dem_Cfg_AgingCycleCounterThresholdOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_AgingCycleIdOfEventTable */
typedef uint8 Dem_Cfg_AgingCycleIdOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_DebounceTableIdxOfEventTable */
typedef uint8 Dem_Cfg_DebounceTableIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_DtcTableIdxOfEventTable */
typedef uint8 Dem_Cfg_DtcTableIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventDestinationOfEventTable */
typedef uint8 Dem_Cfg_EventDestinationOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventFailureCycleCounterThresholdOfEventTable */
typedef uint8 Dem_Cfg_EventFailureCycleCounterThresholdOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventFailureCycleIdOfEventTable */
typedef uint8 Dem_Cfg_EventFailureCycleIdOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventKindOfEventTable */
typedef uint8 Dem_Cfg_EventKindOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventLatchTFOfEventTable */
typedef boolean Dem_Cfg_EventLatchTFOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventPriorityOfEventTable */
typedef uint8 Dem_Cfg_EventPriorityOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_EventSignificanceOfEventTable */
typedef uint8 Dem_Cfg_EventSignificanceOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_ExtendedDataTableIdxOfEventTable */
typedef uint8 Dem_Cfg_ExtendedDataTableIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_FreezeFrameTableStdFFIdxOfEventTable */
typedef uint8 Dem_Cfg_FreezeFrameTableStdFFIdxOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_HealingTargetOfEventTable */
typedef uint8 Dem_Cfg_HealingTargetOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_MaskedBitsOfEventTable */
typedef uint8 Dem_Cfg_MaskedBitsOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_OperationCycleIdOfEventTable */
typedef uint8 Dem_Cfg_OperationCycleIdOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_DataCollectionTableEdr2CollIndEndIdxOfExtendedDataTable */
typedef uint8 Dem_Cfg_DataCollectionTableEdr2CollIndEndIdxOfExtendedDataTableType;

/**   \brief  value based type definition for Dem_Cfg_DataCollectionTableEdr2CollIndStartIdxOfExtendedDataTable */
typedef uint8 Dem_Cfg_DataCollectionTableEdr2CollIndStartIdxOfExtendedDataTableType;

/**   \brief  value based type definition for Dem_Cfg_DataCollectionTableEdr2CollIndUsedOfExtendedDataTable */
typedef boolean Dem_Cfg_DataCollectionTableEdr2CollIndUsedOfExtendedDataTableType;

/**   \brief  value based type definition for Dem_Cfg_MaxRecordSizeOfExtendedDataTable */
typedef uint8 Dem_Cfg_MaxRecordSizeOfExtendedDataTableType;

/**   \brief  value based type definition for Dem_Cfg_RecordSizeOfFreezeFrameTable */
typedef uint8 Dem_Cfg_RecordSizeOfFreezeFrameTableType;

/**   \brief  value based type definition for Dem_Cfg_RecordSizeUdsOfFreezeFrameTable */
typedef uint8 Dem_Cfg_RecordSizeUdsOfFreezeFrameTableType;

/**   \brief  value based type definition for Dem_Cfg_DataElementTableIdxOfGeneralObdInput */
typedef uint8 Dem_Cfg_DataElementTableIdxOfGeneralObdInputType;

/**   \brief  value based type definition for Dem_Cfg_GlobalSeverityMask */
typedef uint8 Dem_Cfg_GlobalSeverityMaskType;

/**   \brief  value based type definition for Dem_Cfg_MemoryCommitNumber */
typedef uint8 Dem_Cfg_MemoryCommitNumberType;

/**   \brief  value based type definition for Dem_Cfg_MemoryDataSize */
typedef uint16 Dem_Cfg_MemoryDataSizeType;

/**   \brief  value based type definition for Dem_Cfg_MemoryStatus */
typedef uint8 Dem_Cfg_MemoryStatusType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfDataElementTable */
typedef uint8 Dem_Cfg_SizeOfDataElementTableType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfEventDebounceValue */
typedef uint8 Dem_Cfg_SizeOfEventDebounceValueType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfEventInternalStatus */
typedef uint8 Dem_Cfg_SizeOfEventInternalStatusType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfEventQueueStatus */
typedef uint8 Dem_Cfg_SizeOfEventQueueStatusType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfEventTable */
typedef uint8 Dem_Cfg_SizeOfEventTableType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfMemoryCommitNumber */
typedef uint8 Dem_Cfg_SizeOfMemoryCommitNumberType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfMemoryStatus */
typedef uint8 Dem_Cfg_SizeOfMemoryStatusType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfPrimaryChronology */
typedef uint8 Dem_Cfg_SizeOfPrimaryChronologyType;

/**   \brief  value based type definition for Dem_Cfg_SizeOfSecondaryChronology */
typedef uint8 Dem_Cfg_SizeOfSecondaryChronologyType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCStructTypes  Dem_Cfg Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in Dem_Cfg_CycleIdTable */
typedef struct sDem_Cfg_CycleIdTableType
{
  Dem_Cfg_UsedForAgingOfCycleIdTableType UsedForAgingOfCycleIdTable;  /**< DemOperationCycle is target of any DemEventParameter/DemEventClass/DemAgingCycleRef */
  Dem_Cfg_OpCycleTypeOfCycleIdTableType OpCycleTypeOfCycleIdTable;  /**< DemOperationCycleType of the DemOperationCycle: [DEM_CFG_OPCYC_IGNITION, DEM_CFG_OPCYC_OBD_DCY, DEM_CFG_OPCYC_OTHER, DEM_CFG_OPCYC_POWER, DEM_CFG_OPCYC_TIME, DEM_CFG_OPCYC_WARMUP, DEM_CFG_OPCYC_IGNITION_HYBRID, DEM_CFG_OPCYC_AGING] */
} Dem_Cfg_CycleIdTableType;

/**   \brief  type used in Dem_Cfg_DataCollectionTable */
typedef struct sDem_Cfg_DataCollectionTableType
{
  Dem_Cfg_DataElementTableCol2ElmtIndEndIdxOfDataCollectionTableType DataElementTableCol2ElmtIndEndIdxOfDataCollectionTable;  /**< the end index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd */
  Dem_Cfg_DataElementTableCol2ElmtIndStartIdxOfDataCollectionTableType DataElementTableCol2ElmtIndStartIdxOfDataCollectionTable;  /**< the start index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd */
  Dem_Cfg_IdNumberOfDataCollectionTableType IdNumberOfDataCollectionTable;
  Dem_Cfg_MaskedBitsOfDataCollectionTableType MaskedBitsOfDataCollectionTable;  /**< contains bitcoded the boolean data of Dem_Cfg_DataElementTableCol2ElmtIndUsedOfDataCollectionTable, Dem_Cfg_UpdateOfDataCollectionTable */
  Dem_Cfg_StorageKindOfDataCollectionTableType StorageKindOfDataCollectionTable;
} Dem_Cfg_DataCollectionTableType;

/**   \brief  type used in Dem_Cfg_DataElementTable */
typedef struct sDem_Cfg_DataElementTableType
{
  Dem_Cfg_ElementKindOfDataElementTableType ElementKindOfDataElementTable;  /**< DataElement kind, returned by Dem_Cfg_DataCallbackType() */
  Dem_ReadDataFPtrType ReadDataFuncOfDataElementTable;  /**< C-function for getting the data. Its signature depends on ElementKind: With value 28U or 30U use: Std_ReturnType (*)(uint8* Buffer); With value 29U or 31U use: Std_ReturnType (*)(uint8* Buffer, uint16 EventId);. */
} Dem_Cfg_DataElementTableType;

/**   \brief  type used in Dem_Cfg_DebounceTable */
typedef struct sDem_Cfg_DebounceTableType
{
  Dem_Cfg_FailedThresholdOfDebounceTableType FailedThresholdOfDebounceTable;  /**< DemDebounceCounterFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_Cfg_DecrementStepSizeOfDebounceTableType DecrementStepSizeOfDebounceTable;  /**< (-1) * DemDebounceCounterDecrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_Cfg_IncrementStepSizeOfDebounceTableType IncrementStepSizeOfDebounceTable;  /**< DemDebounceCounterIncrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_Cfg_PassedThresholdOfDebounceTableType PassedThresholdOfDebounceTable;  /**< DemDebounceCounterPassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_Cfg_EventDebounceAlgorithmOfDebounceTableType EventDebounceAlgorithmOfDebounceTable;  /**< Used DemEventParameter/DemEventClass/DemDebounceAlgorithmClass */
  Dem_Cfg_MaskedBitsOfDebounceTableType MaskedBitsOfDebounceTable;  /**< contains bitcoded the boolean data of Dem_Cfg_DebounceContinuousOfDebounceTable, Dem_Cfg_EventDebounceBehaviorOfDebounceTable, Dem_Cfg_JumpDownOfDebounceTable, Dem_Cfg_JumpUpOfDebounceTable, Dem_Cfg_StorageOfDebounceTable */
} Dem_Cfg_DebounceTableType;

/**   \brief  type used in Dem_Cfg_DtcTable */
typedef struct sDem_Cfg_DtcTableType
{
  Dem_Cfg_UdsDtcOfDtcTableType UdsDtcOfDtcTable;
} Dem_Cfg_DtcTableType;

/**   \brief  type used in Dem_Cfg_EventTable */
typedef struct sDem_Cfg_EventTableType
{
  Dem_Cfg_AgingCycleIdOfEventTableType AgingCycleIdOfEventTable;  /**< DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemAgingCycleRef */
  Dem_Cfg_DebounceTableIdxOfEventTableType DebounceTableIdxOfEventTable;  /**< the index of the 1:1 relation pointing to Dem_Cfg_DebounceTable */
  Dem_Cfg_DtcTableIdxOfEventTableType DtcTableIdxOfEventTable;  /**< the index of the 1:1 relation pointing to Dem_Cfg_DtcTable */
  Dem_Cfg_EventDestinationOfEventTableType EventDestinationOfEventTable;  /**< DemEventDestination of the DemEventParameter/DemEventClass */
  Dem_Cfg_ExtendedDataTableIdxOfEventTableType ExtendedDataTableIdxOfEventTable;  /**< the index of the 1:1 relation pointing to Dem_Cfg_ExtendedDataTable */
  Dem_Cfg_OperationCycleIdOfEventTableType OperationCycleIdOfEventTable;  /**< DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemOperationCycleRef */
} Dem_Cfg_EventTableType;

/**   \brief  type used in Dem_Cfg_ExtendedDataTable */
typedef struct sDem_Cfg_ExtendedDataTableType
{
  Dem_Cfg_DataCollectionTableEdr2CollIndEndIdxOfExtendedDataTableType DataCollectionTableEdr2CollIndEndIdxOfExtendedDataTable;  /**< the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd */
  Dem_Cfg_DataCollectionTableEdr2CollIndStartIdxOfExtendedDataTableType DataCollectionTableEdr2CollIndStartIdxOfExtendedDataTable;  /**< the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd */
  Dem_Cfg_MaxRecordSizeOfExtendedDataTableType MaxRecordSizeOfExtendedDataTable;
} Dem_Cfg_ExtendedDataTableType;

/**   \brief  type used in Dem_Cfg_FreezeFrameTable */
typedef struct sDem_Cfg_FreezeFrameTableType
{
  uint8 Dem_Cfg_FreezeFrameTableNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_Cfg_FreezeFrameTableType;

/**   \brief  type used in Dem_Cfg_GeneralObdInput */
typedef struct sDem_Cfg_GeneralObdInputType
{
  uint8 Dem_Cfg_GeneralObdInputNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_Cfg_GeneralObdInputType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CfgPCRootValueTypes  Dem_Cfg Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in Dem_PCConfig */
typedef struct sDem_PCConfigType
{
  uint8 Dem_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_PCConfigType;

typedef Dem_PCConfigType Dem_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  Dem_Cfg_CycleIdTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_CycleIdTable
  \details
  Element         Description
  UsedForAging    DemOperationCycle is target of any DemEventParameter/DemEventClass/DemAgingCycleRef
  OpCycleType     DemOperationCycleType of the DemOperationCycle: [DEM_CFG_OPCYC_IGNITION, DEM_CFG_OPCYC_OBD_DCY, DEM_CFG_OPCYC_OTHER, DEM_CFG_OPCYC_POWER, DEM_CFG_OPCYC_TIME, DEM_CFG_OPCYC_WARMUP, DEM_CFG_OPCYC_IGNITION_HYBRID, DEM_CFG_OPCYC_AGING]
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_CycleIdTableType, DEM_CONST) Dem_Cfg_CycleIdTable[3];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTable
  \details
  Element                                Description
  DataElementTableCol2ElmtIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  DataElementTableCol2ElmtIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  IdNumber                           
  MaskedBits                             contains bitcoded the boolean data of Dem_Cfg_DataElementTableCol2ElmtIndUsedOfDataCollectionTable, Dem_Cfg_UpdateOfDataCollectionTable
  StorageKind                        
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_DataCollectionTableType, DEM_CONST) Dem_Cfg_DataCollectionTable[3];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTableEdr2CollInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTableEdr2CollInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataCollectionTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_DataCollectionTableEdr2CollIndType, DEM_CONST) Dem_Cfg_DataCollectionTableEdr2CollInd[2];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataElementTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataElementTable
  \details
  Element         Description
  ElementKind     DataElement kind, returned by Dem_Cfg_DataCallbackType()
  ReadDataFunc    C-function for getting the data. Its signature depends on ElementKind: With value 28U or 30U use: Std_ReturnType (*)(uint8* Buffer); With value 29U or 31U use: Std_ReturnType (*)(uint8* Buffer, uint16 EventId);.
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_DataElementTableType, DEM_CONST) Dem_Cfg_DataElementTable[3];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DebounceTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DebounceTable
  \details
  Element                   Description
  FailedThreshold           DemDebounceCounterFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  DecrementStepSize         (-1) * DemDebounceCounterDecrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  IncrementStepSize         DemDebounceCounterIncrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  PassedThreshold           DemDebounceCounterPassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  EventDebounceAlgorithm    Used DemEventParameter/DemEventClass/DemDebounceAlgorithmClass
  MaskedBits                contains bitcoded the boolean data of Dem_Cfg_DebounceContinuousOfDebounceTable, Dem_Cfg_EventDebounceBehaviorOfDebounceTable, Dem_Cfg_JumpDownOfDebounceTable, Dem_Cfg_JumpUpOfDebounceTable, Dem_Cfg_StorageOfDebounceTable
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_DebounceTableType, DEM_CONST) Dem_Cfg_DebounceTable[3];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DtcTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DtcTable
  \details
  Element    Description
  UdsDtc 
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_DtcTableType, DEM_CONST) Dem_Cfg_DtcTable[54];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventTable
  \details
  Element                 Description
  AgingCycleId            DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemAgingCycleRef
  DebounceTableIdx        the index of the 1:1 relation pointing to Dem_Cfg_DebounceTable
  DtcTableIdx             the index of the 1:1 relation pointing to Dem_Cfg_DtcTable
  EventDestination        DemEventDestination of the DemEventParameter/DemEventClass
  ExtendedDataTableIdx    the index of the 1:1 relation pointing to Dem_Cfg_ExtendedDataTable
  OperationCycleId        DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemOperationCycleRef
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_EventTableType, DEM_CONST) Dem_Cfg_EventTable[75];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ExtendedDataTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ExtendedDataTable
  \details
  Element                                   Description
  DataCollectionTableEdr2CollIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd
  DataCollectionTableEdr2CollIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd
  MaxRecordSize                         
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_ExtendedDataTableType, DEM_CONST) Dem_Cfg_ExtendedDataTable[2];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataPtr
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataPtr
  \brief  The array contains these items: Admin, Status, 8 * Primary, 40 * Secondary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_NvDataPtrType, DEM_CONST) Dem_Cfg_MemoryDataPtr[50];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataSize
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataSize
  \brief  The array contains these items: Admin, Status, 8 * Primary, 40 * Secondary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_MemoryDataSizeType, DEM_CONST) Dem_Cfg_MemoryDataSize[50];
#define DEM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_PrimaryEntryType, DEM_CONST) Dem_Cfg_MemoryEntryInit;
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_TimeSeriesEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_TimeSeriesEntryType, DEM_CONST) Dem_Cfg_TimeSeriesEntryInit;
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_AdminData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_AdminDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_AdminData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_CommitBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_CommitBufferType, DEM_VAR_NOINIT) Dem_Cfg_CommitBuffer;  /* PRQA S 0759 */ /* MD_DEM_18.4 */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventDebounceValue
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventDebounceValue
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Dem_Cfg_EventDebounceValueType, DEM_VAR_NOINIT) Dem_Cfg_EventDebounceValue[75];
#define DEM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventInternalStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventInternalStatus
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Dem_Cfg_EventInternalStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventInternalStatus[75];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventQueueStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventQueueStatus
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Dem_Cfg_EventQueueStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventQueueStatus[75];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryCommitNumber
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryCommitNumber
  \brief  The array contains these items: Admin, Status, 8 * Primary, 40 * Secondary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Dem_Cfg_MemoryCommitNumberType, DEM_VAR_NOINIT) Dem_Cfg_MemoryCommitNumber[50];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryStatus
  \brief  The array contains these items: Admin, Status, 8 * Primary, 40 * Secondary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_MemoryStatusType, DEM_VAR_NOINIT) Dem_Cfg_MemoryStatus[50];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryChronology
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_PrimaryChronology
  \brief  size = DEM_CFG_GLOBAL_PRIMARY_SIZE
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_PrimaryChronology[8];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_0
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_0;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_1
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_1;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_2
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_2;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_3
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_3;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_4
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_4;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_5
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_5;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_6
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_6;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_7
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_7;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ReadoutBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_VAR_NOINIT) Dem_Cfg_ReadoutBuffer;
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryChronology
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_SecondaryChronology
  \brief  size = DEM_CFG_GLOBAL_SECONDARY_SIZE
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_SecondaryChronology[40];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_0
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_0;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_1
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_1;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_10
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_10;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_11
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_11;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_12
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_12;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_13
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_13;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_14
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_14;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_15
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_15;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_16
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_16;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_17
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_17;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_18
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_18;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_19
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_19;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_2
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_2;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_20
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_20;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_21
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_21;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_22
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_22;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_23
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_23;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_24
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_24;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_25
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_25;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_26
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_26;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_27
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_27;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_28
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_28;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_29
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_29;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_3
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_3;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_30
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_30;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_31
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_31;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_32
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_32;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_33
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_33;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_34
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_34;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_35
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_35;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_36
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_36;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_37
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_37;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_38
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_38;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_39
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_39;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_4
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_4;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_5
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_5;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_6
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_6;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_7
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_7;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_8
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_8;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_9
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_9;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_StatusData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_StatusDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_StatusData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

#define DEM_START_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/************************************************************************************************************
 *  Dem_Cfg_FindGroupMaskFromUdsDtc()
 ***********************************************************************************************************/
/*! \brief         Map GroupOfDtc number to (internal) GROUPMASK.
 *  \details       Test if the DTC number is a configured UDS 'groupOfDTC' number, and return the internal
 *                 representation of that group.
 *  \param[in]     DTC                           dtc number to check
 *  \return        DEM_CFG_GROUPMASK_NONE        Function not successful. The DTC number doen't represent any
 *                                               configured DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_EMISSION    Function successful. The DTC number represents the OBD-II
 *                                               emission related group.
 *  \return        DEM_CFG_GROUPMASK_POWERTRAIN  Function successful. The DTC number represents Powertrain
 *                                               Group: engine and transmission.
 *  \return        DEM_CFG_GROUPMASK_CHASSIS     Function successful. The DTC number represents the Chassis
 *                                               Group.
 *  \return        DEM_CFG_GROUPMASK_BODY        Function successful. The DTC number represents the Body
 *                                               Group.
 *  \return        DEM_CFG_GROUPMASK_NETWORK     Function successful. The DTC number represents the Network
 *                                               Communication Group.
 *  \return        DEM_CFG_GROUPMASK_ALLDTCS     Function successful. The DTC number is the wildcard 'All
 *                                               Groups (all DTCs)'.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \note          Dependent on the current configuration, not all named (possible) return values are
 *                 actually used.
 ***********************************************************************************************************/ 
extern FUNC(uint8, DEM_CODE) Dem_Cfg_FindGroupMaskFromUdsDtc(uint32 groupDtcNumber);
 
/************************************************************************************************************
 *  Dem_Cfg_EventGroupMask()
 ***********************************************************************************************************/
/*! \brief         Map EventId to groupOfDTC's (internal) GROUPMASK.
 *  \details       Test if the DTC number is a configured UDS 'groupOfDTC' number, and return the internal
 *                 representation of that group.
 *  \param[in]     eventId                       event ID to check
 *  \return        DEM_CFG_GROUPMASK_NONE        Function not successful. The event has no DemUdsDTC number
 *                                               so it is not part of a DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_EMISSION    Function successful. The event is part of the OBD-II
 *                                               emission related DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_POWERTRAIN  Function successful. The event is part of the Powertrain
 *                                               DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_CHASSIS     Function successful. The event is part of the Chassis
 *                                               DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_BODY        Function successful. The event is part of the Body
 *                                               DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_NETWORK     Function successful. The event is part of the Network
 *                                               Communication DemGroupOfDTC.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \note          Dependent on the current configuration, not all named (possible) return values are
 *                 actually used.
 *  \note          Implementation specific: the configured 'DemGroupDTCs' value is the lowest value of each
 *                 group.
 *                 In other words, the configured 'DemGroupDTCs' split the range of DTC numbers
 *                 0x000000..0xFFFFFF into groups and the proxy of each group is the 'DemGroupDTCs' value
 *                 (that never is a DemUdsDTC number in addition).
 ***********************************************************************************************************/ 
extern FUNC(uint8, DEM_CODE) Dem_Cfg_EventGroupMask(uint16 eventId);
 
#define DEM_STOP_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  Justification of MISRA deviations
**********************************************************************************************************************/


#endif  /* DEM_LCFG_H */
/**********************************************************************************************************************
  END OF FILE: Dem_Lcfg.h     [Ford (Vector), VARIANT-PRE-COMPILE]
**********************************************************************************************************************/

