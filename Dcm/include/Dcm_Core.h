/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Dcm_Core.h
 *        \brief  Public interface of DCM for other components
 *
 *      \details  MICROSAR DCM based on AR 4.0.3
 *
 *********************************************************************************************************************/
/*********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Mishel Shishmanyan            vissa         Vector Informatik GmbH
 *  Patrick Rieder                visrpk        Vector Informatik GmbH
 *  Vitalij Krieger               visvkr        Vector Informatik GmbH
 *  Alexander Ditte               visade        Vector Informatik GmbH
 *  Matthias Heil                 vismhe        Vector Informatik GmbH
 *  Savas Ates                    vissat        Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2012-08-20  vissa   ESCAN00057163 AR4-92: DCM 4.x
 *                        vissa   N/A           First release
 *  01.01.00  2012-09-20  vissa   ESCAN00061110 Compiler warning: Function Dcm_ModeTaskMonitor() declared but never referenced
 *                        vissa   ESCAN00061115 Compiler warning: Function type does not match pointer declaration
 *                        vissa   ESCAN00061329 AR4-223: Support of diagnostic services 0x2A, 0x19, 0x2F
 *                        vissa   ESCAN00061347 Compiler error: BswM for AR 4.0.3 does not compile
 *                        vissa   ESCAN00061543 Os exception "WaitEvent called with disabled interrupts" due to critical section handling
 *                        vissa   ESCAN00061609 Dcm shall always reset the reprogramming flag after transition from FBL into the application software
 *                        vissa   ESCAN00061613 Wrong sub-function for any SID other than 0x10 is sent in the positive response after FBL->application software transition
 *                        vissa   ESCAN00061616 Dcm shall be able to perform a transition to non-default session at ECU initialization time
 *                        vissa   ESCAN00061626 Support for jump into FBL after the final response to SID 0x10 is sent
 *                        vissa   ESCAN00061632 Rte_Switch API evaluated for possible error return values
 *                        vissa   ESCAN00061633 Explicit compiler optimization inhibition by volatile qualified variables
 *                        vissa   ESCAN00061642 Link error: Undefined function Dcm_Svc19UtiDemGetExtRecord
 *                        vissa   ESCAN00061645 Long time security access execution rejection due to wrongly started penalty timers
 *                        vissa   ESCAN00061646 Minor ROM/RAM usage, ISR latency and overall run-time usage improvements
 *                        vissa   ESCAN00061659 Change the FreezeFrame and ExtDataRecord number list termination from 0x00 to 0xFF to match OBD2 requirements
 *  01.01.01  2012-10-12  vissa   ESCAN00061970 Wrongly reported DET within the Dcm_TpRxIndication function
 *                        vissa   ESCAN00062060 Dcm causes Dem to report a Det on diagnostic request 0x19 0x06/0x10 [DTC] 0xFE
 *                        vissa   ESCAN00062169 Dcm responds with an wrongly formatted positive response on an invalid IO control parameter
 *                        vissa   ESCAN00062556 Dcm service 0x2F does not support enable mask record
 *                        vissa   ESCAN00062557 Compile error for service 0x2A and enabled DET
 *                        vissa   ESCAN00062558 DET called if more than 128 tester connections or communication channels are to be supported
 *  01.02.00  2013-01-31  vissa   ESCAN00062720 AR4-288: RfC 54767 - [Dcm]: Description of parameter opStatus does not match with syntax of C/S-Interface and C-API
 *                        vissa   ESCAN00062738 Compiler warning: 'initializing' : conversion from 'PduLengthType' to 'Dcm_CfgNetBufferSizeOptType', possible loss of data
 *                        vissa   ESCAN00062999 Wrong opStatus parameter value on DataService_ReadData operation call for SID 0x22 with multiple DIDs
 *                        vissa   ESCAN00063465 Add module version information for delivery version checks
 *                        vissa   ESCAN00063613 SYS notifications shall be called after the SID session and security checks
 *                        vissa   ESCAN00063614 Optimization: Unused OEM and SYS notifications management code
 *                        vissa   ESCAN00063615 Compiler warning: Dcm_Svc2AReadData declared but not referenced
 *                        vissa   ESCAN00063741 Compiler error: "doSuppressResponse" is not a member of DCM_DIAGCONTEXTTYPE_TAG
 *                        vissa   ESCAN00064607 Provide periodic reading speed limitation
 *                        vissa   ESCAN00064628 The ECU does not respond on a diagnostic request with required response
 *                        vissa   ESCAN00064643 Dcm accepts "send key" request after "zero seed" response for the same level
 *                        vissa   ESCAN00064721 Compiler warning: unreferenced parameter in function Dcm_TriggerTransmit
 *  01.03.00  2013-04-17  vissa   ESCAN00065115 Compiler warning: static function Dcm_Svc2ASchdCancelReadByDid declared but not referenced
 *                        vissa   ESCAN00065478 Compiler error: function Dcm_Svc2FCheckAccess not defined
 *                        vissa   ESCAN00066711 Dcm reports DTC from primary memory instead of mirror memory on requested service 0x19 0x0F
 *                        vissa   ESCAN00066728 Service 0x27 sends NRC 0x36 on first failed send key attempt
 *                        vissa   ESCAN00066730 Service 0x27 sends NRC 0x37 for a security level that is not yet locked by penalty time
 *                        vissa   ESCAN00066759 Dcm uses wrong txPduId in the Dcm_TpTxConfirmation for failed USDT transmission attempts
 *                        vissa   ESCAN00066837 Add consistency check for service 0x2A and at least one periodic transmission channel
 *                        vissa   ESCAN00066864 Invalid request type transfered to the OEM/SYS specific confirmation notifications
 *                        vissa   ESCAN00066865 Modifications for improved MISRA compliance
 *                        vissa   ESCAN00067397 Dcm accepts a send key request after a zero seed positive response for the same security level
 *  01.03.01  2013-05-28  vissa   ESCAN00067694 The ECU sends endless RCR-RP responses on request 0x10 0x02
 *  01.04.00  2013-06-17  vissa   ESCAN00067473 Provide Dcm_CommunicationModeType unconditionally
 *                        vissa   ESCAN00068082 AR4-81: Support of OBDII w/o Multiprotocol
 *                        vissa   ESCAN00068171 Dcm deadlock on forced RCRRP and reaching RCRRP limit
 *                        vissa   ESCAN00068374 Provide means for calibrate-able OBD2 support
 *                        vissa   ESCAN00068376 Support use case enable rapid shutdown without a concrete time
 *                        vissa   ESCAN00068411 During waiting for processing end (reset) delegate the repeater proxy to a dead end
 *  01.05.00  2013-07-26  vissa   ESCAN00067206 Service 0x2F does not return the actual IOport values in the positive response
 *                        vissa   ESCAN00068083 AR4-81: Support of OBDII with Multiprotocol
 *                        vissa   ESCAN00069349 Dcm sends a negative response even the called C/S port has returned E_OK
 *                        vissa   ESCAN00069674 Do not throw DET exception in case of Dcm_CopyTxData with SduLength == 0
 *                        vissa   ESCAN00069828 Removed function Dcm_OnTimeoutSvc2AScheduler when not used
 *                        vissa   ESCAN00069829 Make DID data signal operation CheckConditionRead optional
 *                        vissa   ESCAN00069830 SID 0x2F (IOControlByDataIdentifier) shall not allow dynamic length signals
 *                        vissa   ESCAN00069849 NRC 0x10 not send on canceled SID 0x19 with paged buffer support
 *                        vissa   ESCAN00069852 Concurrent client requests are not rejected with NRC 0x21
 *                        vissa   ESCAN00069854 No response on some diagnostic clients even if DCM is free
 *                        vissa   ESCAN00069855 Improved RCR-RP limitation notification within the DCM internal code
 *                        vissa   ESCAN00069857 Service 0x2F could accept invalid IOControlOperation with ID greater than 0x03
 *                        vissa   ESCAN00069858 DCM does not reset the changed IO ports on transition to the default session
 *                        vissa   ESCAN00069859 DIDs defined by service 0x2C does not have correct data or cannot be read at all
 *                        vissa   ESCAN00069867 Paged-buffer access not protected against early response transmission termination
 *                        vissa   ESCAN00069924 While in a non-default session Dcm accepts diagnostic requests from clients other than the one that has started the session
 *                        vissa   ESCAN00069934 Do not call Xxx_MODE_DcmEcuReset_EXECUTE for the rapid power shutdown resets
 *                        vissa   ESCAN00069958 Dcm restarts the S3 timer after RoE responses
 *                        vissa   ESCAN00070056 Dcm either does not send the final positive response after FBL reset at all or sends it to the wrong tester
 *                        vissa   ESCAN00070110 Dcm may not send final FBL response after the reprogramming sequence
 *                        vissa   ESCAN00070113 Dcm executes RoE service to respond to during a non-full communication mode
 *  02.00.00  2013-07-18  vissa   ESCAN00068252 AR4-371: Support signal interface
 *                        vissa   ESCAN00070601 Tester connection released immediately after FBL positive response
 *                        vissa   ESCAN00070741 Remove IODID from the session change reset queue on ReturnControlToEcu operation execution
 *                        vissa   ESCAN00070743 Run time limitation performed on any diagnostic service
 *                        vissa   ESCAN00070879 OEM/System-Supplier confirmations called with wrong SID parameter value
 *                        vissa   ESCAN00070980 Compiler error: Dcm does not compile if service 0x2F is to be supported
 *                        vissa   ESCAN00070981 Compiler error: Dcm does not compile if service 0x2C is to be supported
 *  02.00.01  2013-12-05  vissa   ESCAN00072164 Dcm sends RCR-RP or BusyRepeatRequest (NRC 0x21) responses with wrong SID
 *                        vissa   ESCAN00072187 Dcm returns BUFREQ_E_BUSY on zero SduLength function argument
 *                        vissa   ESCAN00072512 SID 0x2A: No periodic DID can be read
 *                        vissa   ESCAN00072525 UUDT periodic message transmission has no timeout monitoring
 *                        vissa   ESCAN00072616 Avoid coping of response data during paged buffer defragmentation
 *  02.01.00  2013-12-03  vissa   ESCAN00071362 AR4-569: Reject diagnostic requests if the ecu resets with service 0x11
 *                        vissa   ESCAN00071382 AR4-465: Support for J1939 Diagnostics - API to DEM according AR 4.1.2
 *                        vissa   ESCAN00072966 SID 0x2A: periodic message transmission causes nondeterministic behavior due to corrupted memory
 *                        vissa   ESCAN00073064 Dcm does not accept diagnostic requests when started in a non-default session
 *                        vissa   ESCAN00073092 No Dem included when only OBD and no UDS DTC related service active
 *                        vissa   ESCAN00073093 Suppress NRCs: 0x7E,0x7F on functional requests
 *                        vissa   ESCAN00073094 Compile error: Macro Dcm_UtiAssignStruct uses braces for the right-hand side expression
 *                        vissa   ESCAN00073095 SID 0x19 0x05: DEM return WRONG_RECORD to be considered as DET situation
 *                        vissa   ESCAN00073096 SID 0x19: Support new ISO14229-1:2013 sub-functions: 0x17,0x18 and 0x19
 *                        vissa   ESCAN00073097 Removed useless assignment in Dcm_Svc2FReturnControlToEcu
 *                        vissa   ESCAN00073295 DCM invokes DET for request indication function returned REQUEST_NOT_ACCEPTED without setting any NRC
 *                        vissa   ESCAN00073506 SID 0x28: Allow user implementation of sub-functions 0x04 and 0x05
 *                        vissa   ESCAN00073510 SID 0x2C: Reserves too much RAM for temporary reading of static DIDs
 *                        vissa   ESCAN00073534 Dcm does not accept any new diagnostic request after FBL final response
 *                        vissa   ESCAN00073538 Possible S3 timeout while processing first diagnostic request after FBL final response
 *                        vissa   ESCAN00073548 Remove unused code for final FBL response cancellation
 *  02.02.00  2014-04-11  vissa   ESCAN00074268 ECU sends RCR-RP responses endlessly for SID 0x27 for get seed
 *                        vissa   ESCAN00074270 ECU sends RCR-RP responses endlessly for SID 0x31
 *                        visrpk  ESCAN00074999 Support NvRam signal access for DIDs
 *                        vissa   ESCAN00075355 Dcm accepts new requests while waiting for jump into the FBL on SID 0x10 0x02/0x82
 *                        vissa   ESCAN00075443 Changed NRC behavior for services 0x19 0x06, 0x10 and 0x19
 *                        vissa   ESCAN00075554 Optimized code overhead for DID related services
 *                        vissa   ESCAN00076173 Unexpected response for service 0x19 0x05 0x00
 *                        vissa   ESCAN00076270 ECU sends NRC 0x11 for valid requests after a RCR-RP has been sent
 *                        vissa   ESCAN00076276 Use Dcm_UtiAssignStruct in Dcm_TriggerTransmit
 *                        vissa   ESCAN00076317 Dcm calls DEM SetDTCFilter API with wrong DTC kind for service 0x19 0x15
 *                        vissa   ESCAN00076318 Compiler warning: 'opStatus' : unreferenced formal parameter in Dcm_Svc22CheckCondition
 *  02.02.01  2014-07-31  vissa   ESCAN00067170 Compiler warning: cast truncates constant value
 *                        vissa   ESCAN00076755 A request from a different protocol interrupts a current ongoing service processing independent of protocol priority
 *                        vissa   ESCAN00076810 A 0x19 0x02 request leads to an endless pending DCM
 *                        vissa   ESCAN00076956 DCM responds with wrong NRC 0x22 if CompareKey Operation returns E_NOT_OK
 *                        vissa   ESCAN00077499 Wrongly reported DET within the Dcm_TpRxIndication function
 *                        vissa   ESCAN00077676 ECU may send two RCR-RP back-to-back responses
 *                        vissa   ESCAN00077682 Fast post-processors execution shall not be skipped on protocol interruption
 *                        vissa   ESCAN00077691 Minor CPU load reduction on back-to-back requests of different diagnostic clients
 *                        vissa   ESCAN00077692 After protocol interruption an application function can be called unexpectedly with OpStatus==DCM_FORCE_RCRRP_OK
 *                        vissa   ESCAN00077704 ECU may send the complete multi-frame response of interrupted diagnostic job
 *                        vissa   ESCAN00077735 Updating paged data for service 0x19 is not always stopped on protocol preemption
 *                        vissa   ESCAN00077736 Compiler warning: conditional expression is constant
 *  02.02.02  2014-08-11  vissa   ESCAN00077740 Application called with wrong opStatus set to DCM_PENDING instead of DCM_INITIAL
 *                        vissa   ESCAN00077741 DCM performs invalid data access while processing service 0x22
 *                        vissa   ESCAN00077763 ECU sends positive response even if SPRMIB was set and no RCR-RP response has been sent
 *  03.00.00  2014-10-30  vissa   ESCAN00076508 AR4-538: Support post-build loadable for communication
 *                        vissa   ESCAN00076511 AR4-572: Feature Complete - Service 0x24
 *                        vissa   ESCAN00076532 Incorrect timeout detection of UUDT a transmission
 *                        vissa   ESCAN00077644 Security access sequence not reset on SID 0x27 request with total length of only one byte sent
 *                        vissa   ESCAN00078135 Wrong DET-SID used for DET reports in API Dcm_GetActiveProtocol
 *                        vissa   ESCAN00078137 Diagnostic client cannot communicate with the ECU
 *                        vissa   ESCAN00078139 AR4-698: Support post-build selectable for communication
 *                        vissa   ESCAN00078707 ECU always sends NRC 0x21 on clients with protocol priority set to 255
 *                        vissa   ESCAN00079241 Unified internal and external diagnostic request reception behavior
 *                        vissa   ESCAN00079242 Compiler warning: in Dcm_Svc22GetLength 'opStatus': unreferenced formal parameter
 *  03.01.00  2014-11-11  visvkr  ESCAN00076193 ECU returns NRC 0x13 instead of 0x7E for services with a sub-function parameter
 *                        visvkr  ESCAN00079197 ECU returns NRC 0x13 instead of 0x31 for services without a sub-function parameter
 *                        vissa   ESCAN00079540 FEAT-520: ModeDeclarationGroup DcmResponseOnEvent_<RoeEventID>
 *                        vissa   ESCAN00079541 FEAT-627: DID_Ranges
 *                        visvkr  ESCAN00079847 Support DID 0xF186 (ActiveDiagnosticSessionDataIdentifier)
 *                        vissa   ESCAN00079959 The ECU cannot process any interrupt driven event
 *                        visvkr  ESCAN00080237 Service 0x19 0x05 0xFF shall return positive response for SSR 0x00
 *                        vissa   ESCAN00080581 Support for DCM interaction with AR3 BSWs
 *                        vissa   ESCAN00080782 ECU will not go back to the default session if an RoE event occurs during active non-default session
 *  04.00.00  2015-01-30  vissa   ESCAN00079600 FEAT-1154: DCM AR3 BSW environment compatibility
 *                        visvkr  ESCAN00080037 Support general suppression on functional requests
 *                        vissa   ESCAN00080282 FEAT-427: SafeBSW Step I
 *                        vissa   ESCAN00080700 DIDranges ReadDidData returned length validated upon maximum configured length
 *                        vissa   ESCAN00080812 Provide notification functions for session and security transitions and API to get the tester source address from the RxPduId
 *                        vissa   ESCAN00080846 ECU does not respond to a diagnostic request after FBL/APPL software context switch
 *                        vissa   ESCAN00080907 DCM rejects a direct memory access request with valid ALFID parameter value 0x[1-4]5 with NRC 0x31
 *                        vissa   ESCAN00081392 Support DCM 4.2.1 Dem_DcmClearDTC return value DEM_CLEAR_MEMORY_ERROR
 *                        vissa   ESCAN00081439 Possible request data corruption after an interrupted by tester paged-buffer response
 *                        vissa   ESCAN00081541 Use post-build variant specific number of transport objects
 *                        vissa   ESCAN00081663 Compiler warning: conversion from 'const Dcm_CfgDidMgrAbstractOpRefType' to 'Dcm_CfgDidMgrDynDidHandleMemType', possible loss of data
 *                        vissa   ESCAN00081913 Compiler error: Dcm_TriggerTransmit does not fit the PduR function signature for <UpLayer>_TriggerTransmit
 *                        vissa   ESCAN00081917 Service 0x2F might not execute the requested IOcontrol operation on requests without ControlEnableMaskRecord (CEMR)
 *                        vissa   ESCAN00081919 Service 0x2F executes the read DID operation even when the control operation has failed
 *                        vissa   ESCAN00081998 Add de-initialization API Dcm_DeInit
 *                        vissa   ESCAN00082008 Possible undefined behavior of the ECU after request for SID 0x27
 *                        vissa   ESCAN00082016 The ECU might not process all IO controllable signals of a SID 0x2F request with CEMR
 *  04.01.00  2015-04-07  vissa   ESCAN00073619 Service 0x19 0x04/0x06/0x10 with RecID 0xFF has different behavior depending on the PagedBuffer support
 *                        vissa   ESCAN00073625 Service 0x19 0x18/0x19 with RecID 0xFF has different behavior depending on the PagedBuffer support
 *                        vissa   ESCAN00075748 Provide support for service 0x2C 0x02 without the need of service 0x23
 *                        vissa   ESCAN00082102 Remove unnecessary DET check from Dcm_CopyRxData
 *                        vissa   ESCAN00082104 An UUDT transmission can be confirmed by an USDT PduId from the same connection
 *                        vissa   ESCAN00082303 The ECU responds with NRC 0x21 to the tester that has initiated a reset command
 *                        vissa   ESCAN00082337 Service 0x23 may cause memory out of boundary write access
 *                        visade  ESCAN00082354 FEAT-397: Support of WWH-OBD in Dcm
 *                        visvkr  ESCAN00082369 FEAT-461: Add extensions to DCM
 *                        visvkr  ESCAN00082371 FEAT-861: Keep awake after Diag [AR4-872]
 *                        visvkr  ESCAN00082372 FEAT-1333: Provide possibility to control current state of DCM & DEM by application SW-C or CDD
 *                        visvkr  ESCAN00082373 FEAT-1349: Provide paged data support for DIDs
 *                        vismhe  ESCAN00082378 FEAT-1476: Support Security Fixed Bytes
 *                        vissa   ESCAN00082440 Compiler warning: unreferenced parameter "txPduId" in function Dcm_TriggerTransmit
 *                        vissa   ESCAN00082526 Service 0x28 may disrupt ECU communication when user defined sub-function implementation is configured
 *                        vissa   ESCAN00082794 SID 0x22 and 0x2A consider DID not supported in session state twice
 *                        vissa   ESCAN00082932 DCM may perform a transition to the default session twice
 *                        vissa   ESCAN00082952 ECU may unexpectedly send a positive response after power-on/reset
 *                        vissa   ESCAN00083483 Deactivated OBD DIDs still accessible for service 0x2C
 *                        vissa   ESCAN00083597 ECU sends endlessly RCR-RP (NRC 0x78) responses
 *                        vissa   ESCAN00083615 Make EcuReset/RapidPowerShutDown mode switching more reliable
 *                        vissa   ESCAN00083808 Unpredictable behavior on a DID read/write/define operation request
 *                        vissa   ESCAN00083985 Compiler warning: implicit cast of unsigned integer to unsigned char/short
 *  04.01.01  2015-09-10  visvkr  ESCAN00084477 Dcm_ProvideRecoveryStates API always returns DCM_E_NOT_OK
 *                        vissa   ESCAN00084976 ECU sends final response to SID 0x19 even if the SPRMIB was set
 *                        visvkr  ESCAN00085052 Compiler error: Unknown function name Dcm_DidMgrCancelOperation
 *                        vissa   ESCAN00085100 DTC record update remains disabled after request for service 0x19 0x04/0x06/0x10/0x18/0x19
 *                        visvkr  ESCAN00085101 Wrong behavior on simultaneous reading of the same DID by services 0x2A and 0x22
 *                        vissa   ESCAN00085131 Compiler error: Service 0x85 processor uses unknown structure element DtcGroup
 *  05.00.00  2015-11-27  vissa   ESCAN00080649 Service 0x28 will be reset (re-enable communication) also on not modified channels
 *                        vissa   ESCAN00084906 Service 0x2A: Remove single periodic DID optimization
 *                        vissa   ESCAN00084913 FEAT-1593: Variant handling in runtime via API (DCM)
 *                        vissa   ESCAN00085142 FEAT-1527: SafeBSW Step 3
 *                        vissa   ESCAN00085183 ECU responds with NRC 0x72 instead of NRC 0x22 for SID 0x04
 *                        vissa   ESCAN00085339 ECU may send empty positive response for service 0x19 0x05 0x00
 *                        vissa   ESCAN00085364 Make DEM API version 4.2.1 explicitly configurable
 *                        vissa   ESCAN00085545 FEAT-1660: RfC 57196 - [Dcm] doubts to usage of NRC 0x72 for Dcm_ReadMemory()
 *                        vissa   ESCAN00085656 Service 0x27: the ECU returns unexpectedly NRC 0x36 instead of 0x35
 *                        vissa   ESCAN00085705 Service 0x2E: ECU sends NRC 0x13 to a valid request for a DID from a configured DID range
 *                        vissa   ESCAN00085778 Service 0x22: DET reported on DID range with DCM_E_PENDING usage
 *                        vissa   ESCAN00085781 Service 0x2C: Sub-function processors mapped to wrong memory section
 *                        vissa   ESCAN00085783 Service 0x3E: now its possible to define sub-service specific execution preconditions
 *                        vissa   ESCAN00085784 Unified service validation for services with a sub-function
 *                        vissa   ESCAN00085792 Service 0x27: avoided unnecessary RCR-RPs prior sub-function validation
 *                        vissa   ESCAN00085825 Service 0x2C: service specific minimum length check now done after execution precondition validation
 *                        vissa   ESCAN00085902 Possible incorrect DCM state restored after power on/reset
 *                        vissa   ESCAN00085903 DCM states not recovered after power on/reset
 *                        vissa   ESCAN00085904 Service 0x85 will be reset (re-enable DTC setting) even if not disabled
 *                        vissa   ESCAN00085950 RfC  61742 - [Dcm] Stop Dcm to call ComM_DCM_ActiveDiagnostic
 *                        vissa   ESCAN00086015 RfC  64765 - Functional Request via CAN-ID 0x7DF without any response CAN-ID
 *                        vissa   ESCAN00086068 Service 0x2F:  RfC  58607 - Necessity of DcmDspDataReturnControlToEcuFnc/operation ReturnControlToECU of interface DataServices_<Data>
 *                        vissa   ESCAN00086199 Reduced RAM usage for DIDs
 *                        vissa   ESCAN00086203 Removed DET checks for not initialized DCM for all service (post-)processors
 *                        vissa   ESCAN00086206 Positive response sent on unexpected RTE return value for Xxx_Indication
 *                        vissa   ESCAN00086207 Unified ECU behavior on any RTE/FNC API call with unexpected returned value
 *                        vissa   ESCAN00086317 Service 0x2F: automatic IOControl reset does not reset all IODID signals
 *                        vissa   ESCAN00086321 Random P2 timings responded in final response for SID 0x10 after FBL<->APPL transition
 *                        vissa   ESCAN00086322 Service 0x02: DEM API Dem_(Dcm)GetDTCOfOBDFreezeFrame now called only for PID 0x02
 *                        vissa   ESCAN00086323 Service 0x2F: positive response instead of NRC 0x13 for IODID with dynamic length
 *                        vissa   ESCAN00086346 Service 0x2F: unintended IO signals put/remained not under control
 *                        vissa   ESCAN00086347 Design change: handle DCM_CANCEL signal on the most top level
 *                        vissa   ESCAN00086763 Service 0x02 may overwrite two bytes behind the DCM buffer
 *                        vissa   ESCAN00086823 Compiler error: Mismatching pointer initialization value in Dcm.c
 *                        vissa   ESCAN00086853 Wrongly reported DET within the Dcm_Svc2ASchdCommit function
 *                        visvkr  ESCAN00087258 A switch to default session is not performed for the very first request after reset
 *                        visvkr  ESCAN00087259 Session specific P2 timings not updated when Dcm_ResetToDefaultSession() is called
 *                        visvkr  ESCAN00087261 Session specific P2 timings are not updated if jump from FBL is performed
 *                        visvkr  ESCAN00087262 Sessions specific P2 timings are not recovered on ECU Reset/Power On
 *  05.01.00  2016-02-28  vissa   ESCAN00086371 In an AR3 ComStack ECU does not accept a diagnostic request on all communication channels
 *                        vissa   ESCAN00087622 Compiler error: Undefined symbol Dcm_Service11FastPostProcessor
 *                        vissa   ESCAN00087635 FEAT-1730: Support bit-mapped IO control signals
 *                        vissa   ESCAN00087716 Service 0x2F: Optimized IO DID signal ROM and run time usage
 *                        vissa   ESCAN00087735 FEAT-507: DCM Support native API for MSR3 BSWs
 *                        vissa   ESCAN00087875 Compiler error: Undefined symbol DynDidHandleInUse
 *                        vissa   ESCAN00087923 Compiler warning: local variables copyLength and copyOffset is possibly not initialized
 *                        vissa   ESCAN00088345 Improved robustness against called APIs that can return E_NOT_OK and NRC
 *                        vissa   ESCAN00088507 FEAT-1866: SafeBSW Step 4
 *                        vissa   ESCAN00088510 Service 0x2F: Request for ShortTermAdjustment with no data will result in a positive response
 *                        vissa   ESCAN00088603 Not AR 4.x compatible interface implementation
 *                        vissa   ESCAN00088967 Service 0x2F: ECU sends NRC 0x33 prior NRC 0x13 in case of invalid request
 *  05.02.00  2016-04-07  vissa   ESCAN00088831 Service 0x03/0x04/0x07/0x0A: Returns NRC 0x13 instead of 0x31 resp. no response
 *                        vissa   ESCAN00088873 Service 0x09: Remove unused code from service processor
 *                        vissa   ESCAN00089327 Compiler error: Used empty expression Dcm_NetGetSessionConnection
 *                        vissa   ESCAN00089439 Service 0x22/0x2A: Unexpected response behavior for DDDIDs
 *                        vissa   ESCAN00089458 Compiler warning: Function Dcm_Svc11_ProcessEcuReset defined but never referenced
 *                        vissa   ESCAN00089460 Compiler warning: Relational operator '<' always evaluates to 'false'
 *                        vissa   ESCAN00089965 Compiler error: For invalid inline function usage'
 *  07.00.00  2016-05-02  vissa   ESCAN00089342 FEAT-1807: Implement DCM Multi Identity /selectable post build
 *                        vissat  ESCAN00089344 FEAT-1922: Support for OBD2 Mode 0x09 with variable length
 *                        vissat  ESCAN00089352 FEAT-1724: OBD: Support for DTR (Diag Test Results)
 *                        vissa   ESCAN00089383 FEAT-371: S/R Communication for DCM
 *                        vissa   ESCAN00089385 FEAT-1734: SafeBSW Step 5
 *                        vissa   ESCAN00089669 Service 0x3E 0x80 sent via functional addressing may result in negative response with NRC 0x21
 *                        vissa   ESCAN00090077 Service 0x2F: Active IO controls are not reset after session/security state change
 *                        vissa   ESCAN00090107 Compiler error: Wrong function prototype used for AR 3.x API NvM_GetErrorStatus
 *                        vissat  ESCAN00090556 Services 0x23/0x3D/0x2C 0x02: Dcm_Read-/WriteMemory AR 4.2.2 API
 *  07.01.00  2016-09-22  vissat  ESCAN00091059 Service 0x86: No RoE message sent on DTC status change after ECU reset
 *                        vissat  ESCAN00091212 Service 0x06: Possible buffer overflow on too small diagnostic buffer
 *                        vissat  ESCAN00092683 Service 0x22: NRC 0x31 sent back for valid OBD MID DID (0xF6XX)
 *                        vissa   ESCAN00092755 Unexpected DET error or communication behavior
 *                        vissa   ESCAN00092766 ECU stops responding to diagnostic clients and is not able to switch into sleep mode
 *                        vissa   ESCAN00092768 ECU does not send RCR-RP response after P2server time
 *                        vissat  FEAT-1841     Support Routine Info Byte
 *                        vissat  FEAT-1901     I/O Control S/R style
 *********************************************************************************************************************/
#if !defined(DCM_CORE_H)
# define DCM_CORE_H
/* ----------------------------------------------
 ~&&&   Versions
---------------------------------------------- */

/* Implementation version */
# define DCM_CORE_MAJOR_VERSION                                      7u
# define DCM_CORE_MINOR_VERSION                                      1u
# define DCM_CORE_PATCH_VERSION                                      0u
/* ----------------------------------------------
 ~&&&   Defines
---------------------------------------------- */
# if (DCM_BSW_ENV_ASR_VERSION_3XX_ENABLED == STD_ON)                                                                                                 /* COV_DCM_UNSUPPORTED XF */
/* DCM API identifier used in the Det_ReportError call as "ApiId" (ServiceId) parameter value */
#  define DCM_SID_PROVIDERXBUFFER                                    (Dcm_DetApiIdType)0x02u
#  define DCM_SID_RXINDICATION                                       (Dcm_DetApiIdType)0x03u
#  define DCM_SID_PROVIDETXBUFFER                                    (Dcm_DetApiIdType)0x04u
#  define DCM_SID_TXCONFIRMATION                                     (Dcm_DetApiIdType)0x05u
# endif /* (DCM_BSW_ENV_ASR_VERSION_3XX_ENABLED == STD_ON) */
# if (DCM_BSW_ENV_ASR_VERSION_4XX_ENABLED == STD_ON) || \
     (DCM_BSW_ENV_ASR_VERSION_401_ENABLED == STD_ON)                                                                                                 /* COV_DCM_SUPPORT_PARTIALLY TX tx xf */
/* DCM API identifier used in the Det_ReportError call as "ApiId" (ServiceId) parameter value */
#  define DCM_SID_STARTOFRECEPTION                                   (Dcm_DetApiIdType)0x00u
#  define DCM_SID_COPYRXDATA                                         (Dcm_DetApiIdType)0x02u
#  define DCM_SID_TPRXINDICATION                                     (Dcm_DetApiIdType)0x03u
#  define DCM_SID_COPYTXDATA                                         (Dcm_DetApiIdType)0x04u
#  define DCM_SID_TPTXCONFIRMATION                                   (Dcm_DetApiIdType)0x05u

#  define DCM_SID_TXCONFIRMATION                                     (Dcm_DetApiIdType)0xA1u /* AR DCM SWS 4.2.0 does not specify a SID -> using vendor specific one */
# endif /* (DCM_BSW_ENV_ASR_VERSION_4XX_ENABLED == STD_ON) || \
 (DCM_BSW_ENV_ASR_VERSION_401_ENABLED == STD_ON) */
/* DCM ErrorCode identifier used in the Det_ReportError call as ErrorId parameter value */

# define DCM_E_NO_ERROR                                              (Dcm_DetErrorCodeType)0x00u
/* Currently not used:
# define  DCM_E_INTERFACE_TIMEOUT                                    (Dcm_DetErrorCodeType)0x01u
*/
# define DCM_E_INTERFACE_RETURN_VALUE                                (Dcm_DetErrorCodeType)0x02u
# define DCM_E_INTERFACE_BUFFER_OVERFLOW                             (Dcm_DetErrorCodeType)0x03u
# define DCM_E_UNINIT                                                (Dcm_DetErrorCodeType)0x05u
# define DCM_E_PARAM                                                 (Dcm_DetErrorCodeType)0x06u
# define DCM_E_PARAM_POINTER                                         (Dcm_DetErrorCodeType)0x07u
/* Vendor DCM specific DET situations */
# define DCM_E_ILLEGAL_STATE                                         (Dcm_DetErrorCodeType)0x40u
# define DCM_E_INVALID_CONFIG                                        (Dcm_DetErrorCodeType)0x41u
/* DCM API identifier used in the Det_ReportError call as "ApiId" (ServiceId) parameter value */
# define DCM_SID_INIT                                                (Dcm_DetApiIdType)0x01u
# define DCM_SID_GETSESCTRLTYPE                                      (Dcm_DetApiIdType)0x06u
# define DCM_SID_GETSECLEVEL                                         (Dcm_DetApiIdType)0x0Du
# define DCM_SID_GETACTIVEPROTOCOL                                   (Dcm_DetApiIdType)0x0Fu

# define DCM_SID_COMMENTERNOCOMMODE                                  (Dcm_DetApiIdType)0x21u
# define DCM_SID_COMMENTERSILENTCOMMODE                              (Dcm_DetApiIdType)0x22u
# define DCM_SID_COMMENTERFULLCOMMODE                                (Dcm_DetApiIdType)0x23u
# define DCM_SID_GETVERSIONINFO                                      (Dcm_DetApiIdType)0x24u
# define DCM_SID_MAINFUNCTION                                        (Dcm_DetApiIdType)0x25u

# define DCM_SID_RESET2DEFAULTSESSION                                (Dcm_DetApiIdType)0x2Au
# define DCM_SID_DEMTRIGGERONDTCSTATUS                               (Dcm_DetApiIdType)0x2Bu
# define DCM_SID_TRIGGERONEVENT                                      (Dcm_DetApiIdType)0x2Du

# define DCM_SID_EXT_SETNEGRESPONSE                                  (Dcm_DetApiIdType)0x30u
# define DCM_SID_EXT_PROCESSINGDONE                                  (Dcm_DetApiIdType)0x31u
# define DCM_SID_EXT_DIAGSVC_PROCESSOR                               (Dcm_DetApiIdType)0x32u

/* Service ports */
# define DCM_SID_SVCPORT_DATASVCS_OP_READDATA_SYNC                   (Dcm_DetApiIdType)0x34u
# define DCM_SID_SVCPORT_DATASVCS_OP_READDATA_ASYNC                  (Dcm_DetApiIdType)0x3Bu
# define DCM_SID_SVCPORT_DATASVCS_OP_ISAVAILABLEDIDRANGE             (Dcm_DetApiIdType)0x3Fu
# define DCM_SID_SVCPORT_DATASVCS_OP_READDIDRANGE                    (Dcm_DetApiIdType)0x40u
# define DCM_SID_SVCPORT_DATASVCS_OP_WRITEDIDRANGE                   (Dcm_DetApiIdType)0x41u

# define DCM_SID_GETSEED                                             (Dcm_DetApiIdType)0x44u
# define DCM_SID_GETSEED_ACCESSDATA_RECORD                           (Dcm_DetApiIdType)0x45u
# define DCM_SID_COMPARE_KEY                                         (Dcm_DetApiIdType)0x47u

# define DCM_SID_SETACTIVEDIAGNOSTIC                                 (Dcm_DetApiIdType)0x56u
# define DCM_SID_GETSECURITYATTEMPTCOUNTER                           (Dcm_DetApiIdType)0x59u
# define DCM_SID_SETSECURITYATTEMPTCOUNTER                           (Dcm_DetApiIdType)0x5Au

# define DCM_SID_SVCPORT_DATASVCS_OP_READVID                         (Dcm_DetApiIdType)0x60u /* Specified in AR DCM SWS 4.3 */

/* Vendor specific DET service ids for more detailed analysis */
/*
  SID 0xA1 is used in AR version specific part.
*/
# define DCM_SID_TRIGGERTRANSMIT                                     (Dcm_DetApiIdType)0xA2u/* AR DCM SWS 4.2.0 does not specify a SID -> using vendor specific one */
# define DCM_SID_PROVIDERECOVERYSTATES                               (Dcm_DetApiIdType)0xA3u
# define DCM_SID_ONREQUESTDETECTION                                  (Dcm_DetApiIdType)0xA4u
# define DCM_SID_GETRECOVERYSTATES                                   (Dcm_DetApiIdType)0xA5u
# define DCM_SID_GETTESTERSOURCEADDRESS                              (Dcm_DetApiIdType)0xA6u
# define DCM_SID_GETSECLEVELFIXEDBYTES                               (Dcm_DetApiIdType)0xA7u
# define DCM_SID_PROCESSVIRTUALREQUEST                               (Dcm_DetApiIdType)0xA8u
# define DCM_SID_SETSECLEVEL                                         (Dcm_DetApiIdType)0xA9u
# define DCM_SID_SVCPORT_DATASVCS_OP_READPAGEDDID                    (Dcm_DetApiIdType)0xAAu
# define DCM_SID_GETREQUESTKIND                                      (Dcm_DetApiIdType)0xABu

# define DCM_SID_INTERNAL                                            (Dcm_DetApiIdType)0xF0u
# define DCM_SID_SERVICE_PROCESSOR                                   DCM_SID_INTERNAL
/* ----------------------------------------------
 ~&&&   Function-like macros
---------------------------------------------- */
/* Compose a word from single bytes */
# define Dcm_UtiMake16Bit(hiByte,loByte)                             ((uint16)((((uint16)(hiByte))<<8)| \
                                                                     ((uint16)(loByte))))                                                            /* PRQA S 3453 */ /* MD_MSR_19.7 */
/* Compose a DWORD from single bytes */
# define Dcm_UtiMake32Bit(hiHiByte,hiLoByte,loHiByte,loLoByte)       ((uint32)((((uint32)(hiHiByte))<<24)| \
                                                                     (((uint32)(hiLoByte))<<16)| \
                                                                     (((uint32)(loHiByte))<<8) | \
                                                                     ((uint32)(loLoByte))))                                                          /* PRQA S 3453 */ /* MD_MSR_19.7 */
/* Extract a concrete byte of a WORD */
# define Dcm_UtiGetHiByte(data16)                                    ((uint8)(((uint16)(data16))>>8))                                                /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiGetLoByte(data16)                                    ((uint8)(((uint16)(data16)) & 0xFFu))                                           /* PRQA S 3453 */ /* MD_MSR_19.7 */

/* Extract a concrete byte of a DWORD */
# define Dcm_UtiGetHiHiByte(data32)                                  ((uint8)(((uint32)(data32))>>24))                                               /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiGetHiLoByte(data32)                                  ((uint8)(((uint32)(data32))>>16))                                               /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiGetLoHiByte(data32)                                  ((uint8)(((uint32)(data32))>>8))                                                /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiGetLoLoByte(data32)                                  ((uint8)(((uint32)(data32)) & 0xFFu))                                           /* PRQA S 3453 */ /* MD_MSR_19.7 */

/* Extract a concrete word of a DWORD */
# define Dcm_UtiGetHiWord(data32)                                    ((uint16)(((uint32)(data32))>>16))                                              /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiGetLoWord(data32)                                    ((uint16)(((uint32)(data32)) & 0xFFFFu))                                        /* PRQA S 3453 */ /* MD_MSR_19.7 */

/* Extract a concrete nibble of a BYTE */
# define Dcm_UtiGetHiNibble(data8)                                   ((uint8)(((uint8)(data8))>>4))                                                  /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Dcm_UtiGetLoNibble(data8)                                   ((uint8)(((uint8)(data8)) & 0x0Fu))                                             /* PRQA S 3453 */ /* MD_MSR_19.7 */


/* Avoid warnings of unused API parameters */
# define DCM_IGNORE_UNREF_PARAM(param)                               ((void)(param))                                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */
# if (DCM_DIAG_EXTERN_SVC_HANDLING_ENABLED == STD_ON)
/* Since the message context is always the same, reduce code size by keeping the AR API prototype, but remove unused parameters */
#  define Dcm_ExternalProcessingDone(pMsgContext)                    (Dcm_OptimizedProcessingDone())                                                 /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Dcm_ExternalSetNegResponse(pMsgContext, errorCode)         (Dcm_OptimizedSetNegResponse((errorCode)))                                      /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif
/* ----------------------------------------------
 ~&&&   Module API function declarations
---------------------------------------------- */
# define DCM_START_SEC_CODE
/*lint -save -esym(961, 19.1)*/
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
# if (DCM_VERSION_INFO_API == STD_ON)
/**********************************************************************************************************************
 *  Dcm_GetVersionInfo()
 *********************************************************************************************************************/
/*! \brief          Reports component's version information.
 *  \details        Returns the version information of the used DCM implementation.
 *  \param[out]     versioninfo    pointer to the application structure
 *  \context        ISR1|ISR2|TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \config         This function is only available if DCM_VERSION_INFO_API = STD_ON.
 *  \pre            -
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_GetVersionInfo(P2VAR(Std_VersionInfoType, AUTOMATIC, DCM_APPL_DATA) versioninfo);
# endif
/**********************************************************************************************************************
 *  Dcm_GetActiveProtocol()
 *********************************************************************************************************************/
/*! \brief          Returns the currently active protocol.
 *  \details        This function returns the active protocol Id.
 *  \param[out]     ActiveProtocol    Will contain the currently active protocol ID
 *  \return         DCM_E_OK          This value is always returned (also in error case)
 *  \context        ISR1|ISR2|TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_GetActiveProtocol(P2VAR(Dcm_ProtocolType, AUTOMATIC, DCM_APPL_DATA) ActiveProtocol);

/**********************************************************************************************************************
 *  Dcm_GetTesterSourceAddress()
 *********************************************************************************************************************/
/*! \brief          Returns a DCM tester's SourceAddress.
 *  \details        Returns a DCM tester's SourceAddress for a given RxPduId.
 *  \param[in]      DcmRxPduId             The DCM RxPduId of the tester connection which SourceAddress will be read
 *  \param[out]     TesterSourceAddress    Will contain the corresponding tester's SourceAddress
 *  \return         DCM_E_OK               The TesterSourceAddress out parameter contains a valid value
 *  \return         DCM_E_NOT_OK           The TesterSourceAddress out parameter does not have a valid return value
 *  \context        ISR1|ISR2|TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_GetTesterSourceAddress(PduIdType DcmRxPduId
                                                         ,P2VAR(uint16, AUTOMATIC, DCM_APPL_DATA) TesterSourceAddress);

# if (DCM_DIAG_VIRTUAL_REQUEST_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_ProcessVirtualRequest()
 *********************************************************************************************************************/
/*! \brief          Provides a means for internal (ROE) requests triggered by the application.
 *  \details        -
 *  \param[in]      RxPduId            The RxPDUID of the request
 *  \param[in]      Data               The data of the request
 *  \param[in]      Length             The length of the request
 *  \return         DCM_E_OK           Reception was successful
 *  \return         DCM_E_NOT_OK       Reception was not successful
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            DCM_DIAG_VIRTUAL_REQUEST_ENABLED == STD_ON
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_ProcessVirtualRequest(PduIdType     RxPduId
                                                        ,Dcm_MsgType   Data
                                                        ,PduLengthType Length);
# endif

/**********************************************************************************************************************
 *  Dcm_SetActiveDiagnostic()
 *********************************************************************************************************************/
/*! \brief          Notifies DCM to (not) keep ComM channels awake.
 *  \details        -
 *  \param[in]      active             The new DCM ComM interaction mode
 *  \return         DCM_E_OK           This value is always returned (also in error case)
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_SetActiveDiagnostic(boolean active);

/**********************************************************************************************************************
 *  Dcm_GetRequestKind()
 *********************************************************************************************************************/
/*! \brief          Returns the request kind of a DCM tester SourceAddress.
 *  \details        Returns the request kind for a given diagnostic client.
 *  \param[in]      TesterSourceAddress    Will contain the corresponding tester's SourceAddress
 *  \param[out]     RequestKind            The request kind ([DCM_REQ_KIND]_NONE, _EXTERNAL and _ROE)
 *  \return         DCM_E_OK               The RequestKind out parameter contains a valid value
 *  \return         DCM_E_NOT_OK           The RequestKind out parameter does not have a valid return value
 *  \context        ISR1|ISR2|TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_GetRequestKind(uint16 TesterSourceAddress
                                                 ,P2VAR(Dcm_RequestKindType, AUTOMATIC, DCM_APPL_DATA) RequestKind);
/**********************************************************************************************************************
 *  Dcm_ResetToDefaultSession()
 *********************************************************************************************************************/
/*! \brief          Provides a means for enforced resetting to the default session.
 *  \details        The call to this function allows the application to reset the current session to Default session.
 *                  Example: Automatic termination of an extended diagnostic session upon exceeding of a speed limit.
 *                  Note: The time between the function call and the termination of the session depends on the current
 *                        DCM state. The minimum time to be expected is one DCM task cycle. If this service is called
 *                        while the DCM is processing a diagnostic request, the session termination will be postponed
 *                        till the end of this service processing, to avoid unpredictable behavior.
 *  \return         E_OK    This value is always returned (also in error case)
 *  \context        ISR1|ISR2|TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_ResetToDefaultSession(void);

/**********************************************************************************************************************
 *  Dcm_GetSesCtrlType()
 *********************************************************************************************************************/
/*! \brief          Provides read access to the DCM's diagnostic session register.
 *  \details        This function provides the active session control type value.
 *  \param[out]     SesCtrlType    Pointer to a RAM address where DCM will store the current session
 *  \return         E_OK           This value is always returned (also in error case)
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_GetSesCtrlType(P2VAR(Dcm_SesCtrlType, AUTOMATIC, DCM_APPL_DATA) SesCtrlType);

# if (DCM_STATE_SECURITY_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_GetSecurityLevel()
 *********************************************************************************************************************/
/*! \brief          Provides read access to the DCM's security access register.
 *  \details        This function provides the active security level value.
 *  \param[out]     SecLevel    Pointer to a RAM address where DCM will store the current security level
 *  \return         E_OK        This value is always returned (also in error case)
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \config         This function is only available if DCM_STATE_SECURITY_ENABLED = STD_ON.
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_GetSecurityLevel(P2VAR(Dcm_SecLevelType, AUTOMATIC, DCM_APPL_DATA) SecLevel);
# endif

# if (DCM_STATE_SECURITY_EXT_SETTER_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_SetSecurityLevel()
 *********************************************************************************************************************/
/*! \brief          Provides write access to the DCM's security access register.
 *  \details        This function performs security level transition. 
 *  \param[in]      SecLevel    The new security level to switch into
 *  \return         E_OK        State change has been performed.
 *  \return         E_NOT_OK    State change failed. Possible reasons:
 *                              - wrong/invalid security level;
 *                              - called while DCM is busy with a diagnostic request;
 *                              - called from wrong task context (not from Dcm_MainFunctionWorker);
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \config         This function is only available if DCM_STATE_SECURITY_EXT_SETTER_ENABLED = STD_ON.
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_SetSecurityLevel(Dcm_SecLevelType SecLevel);
# endif


# if (DCM_STATE_SECURITY_FIXED_BYTES_ENABLED == STD_ON)                                                                                              /* COV_DCM_UNSUPPORTED XF */
/**********************************************************************************************************************
 *  Dcm_GetSecurityLevelFixedBytes()
 *********************************************************************************************************************/
/*! \brief          Provides fixed bytes set up for a specific security level.
 *  \details        This function provides the fixed bytes for the requested security level.
 *                  A security level without configured fixed bytes will return E_OK and no bytes (bufferSize = 0)
 *  \param[in]      SecLevel              The requested security level
 *  \param[out]     FixedBytes            Buffer to receive the fixed byte values
 *  \param[in,out]  BufferSize
 *                  IN                    The provided buffer size
 *                  OUT                   The number of fixed bytes for the requested level
 *  \return         E_OK                  The security bytes were copied to the provided buffer
 *  \return         DCM_E_NOT_OK          The security level is not configured
 *  \return         DCM_E_BUFFERTOOLOW    The buffer was too small, bufferSize will contain the number of bytes needed
 *  \context        TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \config         This function is only available if DCM_STATE_SECURITY_FIXED_BYTES_ENABLED = STD_ON
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_GetSecurityLevelFixedBytes(Dcm_SecLevelType SecLevel
                                                             ,P2VAR(uint8, AUTOMATIC, DCM_APPL_DATA) FixedBytes
                                                             ,P2VAR(uint8, AUTOMATIC, DCM_APPL_DATA) BufferSize);
# endif
# if (DCM_DIDMGR_SUPPORT_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
#  if (DCM_DIDMGR_EXTENDED_LOOKUP_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_FilterDidLookUpResult()
 *********************************************************************************************************************/
/*! \brief          Provides a means to get supported DID suppressed by the application.
 *  \details        -
 *  \param[in]      OpStatus                Current operation status.
 *  \param[in]      Did                     The requested DID the filtering shall be done.
 *  \param[in]      DidOperation            The requested DID operation the filtering shall be done.
 *  \return         DCM_E_OK                The DID is (still) active.
 *  \return         DCM_E_PENDING           The DID validation needs more time. Call me again.
 *  \return         DCM_E_NOT_OK            The DID is not active.
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    FALSE
 *  \config         This function is only available if DCM_DIDMGR_EXTENDED_LOOKUP_ENABLED = STD_ON.
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_FilterDidLookUpResult(Dcm_OpStatusType OpStatus, uint16 Did, Dcm_DidOpType DidOperation);
#  endif
# endif /* (DCM_DIDMGR_SUPPORT_ENABLED == STD_ON) */
# if (DCM_RIDMGR_SUPPORT_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
#  if (DCM_RIDMGR_EXTENDED_LOOKUP_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_FilterRidLookUpResult()
 *********************************************************************************************************************/
/*! \brief          Provides a means to get supported RID suppressed by the application.
 *  \details        -
 *  \param[in]      OpStatus                Current operation status.
 *  \param[in]      Rid                     The requested RID the filtering shall be done.
 *  \return         DCM_E_OK                The RID is (still) active.
 *  \return         DCM_E_PENDING           The RID validation needs more time. Call me again.
 *  \return         DCM_E_NOT_OK            The RID is not active.
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    FALSE
 *  \config         This function is only available if DCM_RIDMGR_EXTENDED_LOOKUP_ENABLED = STD_ON.
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_FilterRidLookUpResult(Dcm_OpStatusType OpStatus, uint16 Rid);
#  endif
# endif /* (DCM_RIDMGR_SUPPORT_ENABLED == STD_ON) */
/**********************************************************************************************************************
 *  Dcm_Init()
 *********************************************************************************************************************/
/*! \brief          Modules initialization.
 *  \details        Service for basic initialization of DCM module.
 *                  In all cases where this API does expect a non-null pointer argument, a validation of the passed
 *                  argument is performed.
 *  \param[in]      configPtr    Pointer to a concrete configuration root - not used for now
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \pre            Global interrupts shall be disabled.
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_Init(Dcm_ConfigPtrType configPtr);

/**********************************************************************************************************************
 *  Dcm_DeInit()
 *********************************************************************************************************************/
/*! \brief          Sets the module in uninitialized state.
 *  \details        This function resets the Diagnostic Communication Manager to the
 *                  uninitialized state.
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \pre            Global interrupts shall be disabled.
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_DeInit(void);

/**********************************************************************************************************************
 *  Dcm_InitMemory()
 *********************************************************************************************************************/
/*! \brief          Initialization function.
 *  \details        Module's memory initialization.
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \pre            Global interrupts shall be disabled. If used, then always prior calling Dcm_Init.
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_InitMemory(void);

# if (DCM_SPLIT_TASKS_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_MainFunctionTimer()
 *********************************************************************************************************************/
/*! \brief          Modules main timing scheduling.
 *  \details        This service is used for time critical tasks (high priority task).
 *                  Function will be called at high level task only for better timing accuracy.
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \config         This function is only available if DCM_SPLIT_TASKS_ENABLED = STD_ON.
 *  \pre            -
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_MainFunctionTimer(void);
# endif

# if (DCM_SPLIT_TASKS_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_MainFunctionWorker()
 *********************************************************************************************************************/
/*! \brief          Modules main processing task.
 *  \details        This service is used for diagnostic service processing (low priority task).
 *                  Function will be called at low level task only, to allow long service execution times.
 *                  Note: All application call outs the DCM executes are performed only from within this task.
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \config         This function is only available if DCM_SPLIT_TASKS_ENABLED = STD_ON.
 *  \pre            -
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_MainFunctionWorker(void);
# endif

# if (DCM_SPLIT_TASKS_ENABLED == STD_OFF)
/**********************************************************************************************************************
 *  Dcm_MainFunction()
 *********************************************************************************************************************/
/*! \brief          Modules main run-time scheduling.
 *  \details        This service is used for processing the tasks of the main loop.
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \config         This function is only available if DCM_SPLIT_TASKS_ENABLED = STD_OFF.
 *  \pre            -
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_MainFunction(void);
# endif
# if (DCM_DIAG_EXTERN_SVC_HANDLING_ENABLED == STD_ON)
/* --- Diagnostic service processing management -------------------------------------------------------------------- */
/**********************************************************************************************************************
 *  Dcm_OptimizedProcessingDone()
 *********************************************************************************************************************/
/*! \brief          Finalizes the service processing task.
 *  \details        -
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \config         This function is only available if DCM_DIAG_EXTERN_SVC_HANDLING_ENABLED = STD_ON.
 *  \pre            -
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_OptimizedProcessingDone(void);
# endif

# if (DCM_DIAG_EXTERN_SVC_HANDLING_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_OptimizedSetNegResponse()
 *********************************************************************************************************************/
/*! \brief          Registers a NRC to the request in progress.
 *  \details        Only the very first registered NRC will be stored. Any further call of this API within the same
 *                  diagnostic request will have no effect.
 *  \param[in]      errorCode    The error code to be registered
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \config         This function is only available if DCM_DIAG_EXTERN_SVC_HANDLING_ENABLED = STD_ON.
 *  \pre            -
 *********************************************************************************************************************/
FUNC(void, DCM_CODE) Dcm_OptimizedSetNegResponse(Dcm_NegativeResponseCodeType errorCode);
# endif

# if (DCM_DIAG_STATE_RECOVERY_ENABLED == STD_ON)                                                                                                     /* COV_DCM_UNSUPPORTED XF */
/**********************************************************************************************************************
 *  Dcm_ProvideRecoveryStates()
 *********************************************************************************************************************/
/*! \brief          Returns the internal Dcm state.
 *  \details        This function can be used to gather the internal DCM states to be able to recover them after reset.
 *                  It shall be called by DCM application just before performing the reset operation. 
 *  \param[out]     RecoveryInfo    Parameter to be written by the DCM with all the information to be recovered.
 *  \return         DCM_E_OK        Result is valid and shall be processed
 *  \return         DCM_E_NOT_OK    Some error has occurred e.g. DCM is not yet initialized
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    FALSE
 *  \config         This function is only available if DCM_DIAG_STATE_RECOVERY_ENABLED = STD_ON
 *  \pre            Once this API is called, the states may change due to external events (e.g. session timeout).
 *                  Therefore always perform this call right before executing the reset.
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_ProvideRecoveryStates(
                                                   P2VAR(Dcm_RecoveryInfoType, AUTOMATIC, DCM_APPL_DATA) RecoveryInfo);
# endif
# define DCM_STOP_SEC_CODE
/*lint -save -esym(961, 19.1)*/
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
/* ----------------------------------------------
 ~&&&   Call-back function declarations
---------------------------------------------- */
# define DCM_START_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1)*/
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
# if (DCM_MEMMGR_SUPPORT_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
#  if (DCM_MEMMGR_MEMOP_WRITE_ENABLED == STD_ON)
#   if (DCM_DCM_AR_VERSION >= DCM_DCM_AR_VERSION_422)
/**********************************************************************************************************************
  Dcm_WriteMemory()
 **********************************************************************************************************************/
/*! \brief          Call-out to write to memory.
 *  \details        The Dcm_WriteMemory call-out is used to write memory data identified by the parameter memoryAddress
 *                  and memorySize.
 *                  This service is needed for the implementation of UDS services:
 *                      - WriteMemoryByAdress
 *                      - RequestDownload
 *  \param[in]      OpStatus                Operation status
 *  \param[in]      MemoryIdentifier        Identifier of the Memory Block
 *  \param[in]      MemoryAddress           Starting address of server memory from which data is to be written.
 *  \param[in]      MemorySize              Number of bytes in the MemoryData
 *  \param[in]      MemoryData              Data to be written (points to the diagnostic buffer in DCM).
 *  \param[out]     ErrorCode               If the operation Dcm_WriteMemory returns value 
 *                                          DCM_WRITE_FAILED, the Dcm module shall 
 *                                          send a negative response with NRC code equal to 
 *                                          the parameter ErrorCode parameter value
 *  \return         DCM_WRITE_OK            Write was successful
 *  \return         DCM_WRITE_FAILED        Write was not successful
 *  \return         DCM_WRITE_PENDING       Write is not yet finished
 *  \return         DCM_WRITE_FORCE_RCRRP   Enforce RCR-RP transmission (vendor extension)
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    FALSE
 *  \config         This function is only available if DCM_MEMMGR_MEMOP_WRITE_ENABLED = STD_ON.
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Dcm_ReturnWriteMemoryType, DCM_CALLOUT_CODE) Dcm_WriteMemory(Dcm_OpStatusType OpStatus
                                                                 ,uint8  MemoryIdentifier
                                                                 ,uint32 MemoryAddress
                                                                 ,uint32 MemorySize
                                                                 ,Dcm_MsgType MemoryData
                                                                 ,Dcm_NegativeResponseCodePtrType ErrorCode);
#   else
/**********************************************************************************************************************
  Dcm_WriteMemory()
 **********************************************************************************************************************/
/*! \brief          Call-out to write to memory.
 *  \details        The Dcm_WriteMemory call-out is used to write memory data identified by the parameter memoryAddress
 *                  and memorySize.
 *                  This service is needed for the implementation of UDS services:
 *                      - WriteMemoryByAdress
 *                      - RequestDownload
 *  \param[in]      OpStatus                Operation status
 *  \param[in]      MemoryIdentifier        Identifier of the Memory Block
 *  \param[in]      MemoryAddress           Starting address of server memory from which data is to be written.
 *  \param[in]      MemorySize              Number of bytes in the MemoryData
 *  \param[in]      MemoryData              Data to be written (points to the diagnostic buffer in DCM).
 *  \return         DCM_WRITE_OK            Write was successful
 *  \return         DCM_WRITE_FAILED        Write was not successful
 *  \return         DCM_WRITE_PENDING       Write is not yet finished
 *  \return         DCM_WRITE_FORCE_RCRRP   Enforce RCR-RP transmission (vendor extension)
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    FALSE
 *  \config         This function is only available if DCM_MEMMGR_MEMOP_WRITE_ENABLED = STD_ON.
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Dcm_ReturnWriteMemoryType, DCM_CALLOUT_CODE) Dcm_WriteMemory(Dcm_OpStatusType OpStatus
                                                                 ,uint8  MemoryIdentifier
                                                                 ,uint32 MemoryAddress
                                                                 ,uint32 MemorySize
                                                                 ,Dcm_MsgType MemoryData);
#   endif
#  endif

#  if (DCM_MEMMGR_MEMOP_READ_ENABLED == STD_ON)
#   if (DCM_DCM_AR_VERSION >= DCM_DCM_AR_VERSION_422)
/**********************************************************************************************************************
 *  Dcm_ReadMemory()
 *********************************************************************************************************************/
/*! \brief          Call-out to read from memory.
 *  \details        The Dcm_ReadMemory call-out is used to request memory data identified by the parameter
 *                  memoryAddress and memorySize from the UDS request message. This service is needed for the
 *                  implementation of UDS services:
 *                      - ReadMemoryByAdress
 *                      - RequestUpload
 *                      - ReadDataByIdentifier (in case of Dynamical DID defined by memory address)
 *  \param[in]      OpStatus                Operation status
 *  \param[in]      MemoryIdentifier        Identifier of the Memory Block
 *  \param[in]      MemoryAddress           Starting address of server memory from which data is to be retrieved
 *  \param[in]      MemorySize              Number of bytes in the MemoryData
 *  \param[in]      MemoryData              Data read (points to the diagnostic buffer in DCM)
 *  \param[out]     ErrorCode               If the operation Dcm_ReadMemory returns value 
 *                                          DCM_READ_FAILED, the Dcm module shall send 
 *                                          a negative response with NRC code equal to the 
 *                                          parameter ErrorCode parameter value
 *  \return         DCM_READ_OK             Read was successful
 *  \return         DCM_READ_FAILED         Read was not successful
 *  \return         DCM_READ_PENDING        Read is not yet finished
 *  \return         DCM_READ_FORCE_RCRRP    Enforce RCR-RP transmission (vendor extension)
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    FALSE
 *  \config         This function is only available if DCM_MEMMGR_MEMOP_READ_ENABLED = STD_ON.
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Dcm_ReturnReadMemoryType, DCM_CALLOUT_CODE) Dcm_ReadMemory(Dcm_OpStatusType OpStatus
                                                               ,uint8  MemoryIdentifier
                                                               ,uint32 MemoryAddress
                                                               ,uint32 MemorySize
                                                               ,Dcm_MsgType MemoryData
                                                               ,Dcm_NegativeResponseCodePtrType ErrorCode);
#   else
/**********************************************************************************************************************
 *  Dcm_ReadMemory()
 *********************************************************************************************************************/
/*! \brief          Call-out to read from memory.
 *  \details        The Dcm_ReadMemory call-out is used to request memory data identified by the parameter
 *                  memoryAddress and memorySize from the UDS request message. This service is needed for the
 *                  implementation of UDS services:
 *                      - ReadMemoryByAdress
 *                      - RequestUpload
 *                      - ReadDataByIdentifier (in case of Dynamical DID defined by memory address)
 *  \param[in]      OpStatus                Operation status
 *  \param[in]      MemoryIdentifier        Identifier of the Memory Block
 *  \param[in]      MemoryAddress           Starting address of server memory from which data is to be retrieved
 *  \param[in]      MemorySize              Number of bytes in the MemoryData
 *  \param[in]      MemoryData              Data read (points to the diagnostic buffer in DCM)
 *  \return         DCM_READ_OK             Read was successful
 *  \return         DCM_READ_FAILED         Read was not successful
 *  \return         DCM_READ_PENDING        Read is not yet finished
 *  \return         DCM_READ_FORCE_RCRRP    Enforce RCR-RP transmission (vendor extension)
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    FALSE
 *  \config         This function is only available if DCM_MEMMGR_MEMOP_READ_ENABLED = STD_ON.
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Dcm_ReturnReadMemoryType, DCM_CALLOUT_CODE) Dcm_ReadMemory(Dcm_OpStatusType OpStatus
                                                               ,uint8  MemoryIdentifier
                                                               ,uint32 MemoryAddress
                                                               ,uint32 MemorySize
                                                               ,Dcm_MsgType MemoryData);
#   endif
#  endif
# endif /* (DCM_MEMMGR_SUPPORT_ENABLED == STD_ON) */
# if (DCM_DEBUG_ERROR_DETECT == STD_ON)                                                                                                              /* COV_DCM_DEV_DEBUG XF */
/**********************************************************************************************************************
 *  Dcm_DebugAssertReport()
 *********************************************************************************************************************/
/*! \brief          Will be called on any detected DCM internal error.
 *  \details        -
 *  \param[in]      apiId         The DCM function ID that has detected/caused the problem. These are the same 
 *                                DCM_SID_xxx macros used for DET reporting.
 *  \param[in]      errorId       The detected error type. These are the same DCM_E_xxx macros used for DET reporting.
 *  \context        ISR1|ISR2|TASK
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            This callback is available only during troubleshooting DCM by enabling DCM_DEBUG_ERROR_DETECT.
 *********************************************************************************************************************/
FUNC(void, DCM_CALLOUT_CODE) Dcm_DebugAssertReport(uint8 apiId, uint8 errorId);
# endif
/**********************************************************************************************************************
 *  Dcm_Confirmation()
 *********************************************************************************************************************/
/*! \brief          Confirms the diagnostic job finalization.
 *  \details        This function confirms the successful transmission or a transmission error of a diagnostic
 *                  service. The idContext and the dcmRxPduId are required to identify the message which was processed.
 *                  If there was no response for this request, this call out is invoked at service processing finish.
 *                  Note: This call out is invoked only then when a DCM internal or external
 *                        <Module>_<DiagnosticService> service handler has been executed.
 *  \param[in]      idContext     Current context identifier which can be used to retrieve the relation between
 *                                request and confirmation. Within the confirmation, the Dcm_MsgContext is no more
 *                                available, so the idContext can be used to represent this relation.
 *                                The idContext is also part of the Dcm_MsgContext
 *  \param[in]      dcmRxPduId    DcmRxPduId on which the request was received. The source of the request
 *                                can have consequences for message processing.
 *  \param[in]      status        Status indication about confirmation
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(void, DCM_CALLOUT_CODE) Dcm_Confirmation(Dcm_IdContextType idContext
                                             ,PduIdType dcmRxPduId
                                             ,Dcm_ConfirmationStatusType status);

# if (DCM_DIAG_JUMPTOFBL_ENABLED   == STD_ON) || \
     (DCM_DIAG_JUMPFROMFBL_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_SetProgConditions()
 *********************************************************************************************************************/
/*! \brief          Sets the programming conditions.
 *  \details        The Dcm_SetProgConditions call-out allows the integrator to store relevant information prior
 *                  jumping to boot loader. The context parameters are defined in Dcm_ProgConditionsType.
 *  \param[in]      progConditions    Conditions on which the jump to boot loader has been requested.
 *  \return         E_OK              Conditions have correctly been set
 *  \return         E_NOT_OK          Conditions cannot be set
 *  \return         DCM_E_PENDING     Conditions set is in progress, a further call to this API is needed to end the
                                      setting
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \config         This function is only available if (DCM_DIAG_JUMPTOFBL_ENABLED = STD_ON) ||
 *                  (DCM_DIAG_JUMPFROMFBL_ENABLED = STD_ON).
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_SetProgConditions(Dcm_ProgConditionsPtrType progConditions);
# endif

# if (DCM_DIAG_JUMPFROMFBL_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_GetProgConditions()
 *********************************************************************************************************************/
/*! \brief          Returns the programming conditions.
 *  \details        The Dcm_GetProgConditions call-out is called upon DCM initialization and allows determining if a
 *                  response (0x50 or 0x51) has to be sent depending on request within the boot-loader.
 *                  The context parameters are defined in Dcm_ProgConditionsType.
 *  \param[in]      progConditions    Conditions on which the jump from the boot-loader has been requested.
 *  \return         DCM_COLD_START    The ECU starts normally
 *  \return         DCM_WARM_START    The ECU starts from a boot-loader jump
 *                                    The function parameter values will be evaluated for further processing.
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \config         This function is only available if DCM_DIAG_JUMPFROMFBL_ENABLED = STD_ON.
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Dcm_EcuStartModeType, DCM_CALLOUT_CODE) Dcm_GetProgConditions(Dcm_ProgConditionsPtrType progConditions);
# endif

# if (DCM_DIAG_STATE_RECOVERY_ENABLED == STD_ON)                                                                                                     /* COV_DCM_UNSUPPORTED XF */
/**********************************************************************************************************************
 *  Dcm_GetRecoveryStates()
 *********************************************************************************************************************/
/*! \brief          Collects the external stored internal Dcm state.
 *  \details        The Dcm_GetRecoveryStates() call-out is called upon DCM initialization and allows to restore the
 *                  previously via Dcm_ProvideRecoveryStates() stored internal Dcm state.
 *  \param[out]     RecoveryInfo    Parameter to be written by the DCM with all the information to be recovered.
 *  \return         DCM_E_OK         Result is valid and shall be processed
 *  \return         DCM_E_PENDING    Result is pending (e.g. NvM not yet ready)
 *  \return         DCM_E_NOT_OK     No information to be recovered or result reading failed
 *                                   DCM shall continue with the default initialized states.
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    FALSE
 *  \config         This function is only available if DCM_DIAG_STATE_RECOVERY_ENABLED = STD_ON
 *  \pre            Once this API is called, DCM will lock any external connection until the result is processed.
 *                  This is required in order to be able to switch into a consistent state without any influence from
 *                  outside.
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_GetRecoveryStates(
                                                  P2VAR(Dcm_RecoveryInfoType, AUTOMATIC, DCM_VAR_NOINIT) RecoveryInfo);
# endif
# define DCM_STOP_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1)*/
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore*/
#endif /* !defined(DCM_CORE_H) */
/* ********************************************************************************************************************
 * END OF FILE: Dcm_Core.h
 * ******************************************************************************************************************** */
