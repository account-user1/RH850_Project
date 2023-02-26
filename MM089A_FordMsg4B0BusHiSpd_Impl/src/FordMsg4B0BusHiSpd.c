/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordMsg4B0BusHiSpd.c
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM089A_FordMsg4B0BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg4B0BusHiSpd
 *  Generated at:  Fri May  4 17:44:11 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordMsg4B0BusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2018 Nexteer Confidential
*
* Module File Name  : FordMsg4B0BusHiSpd.c
* Module Description: Ford Message 4B0 Bus High Speed
* Project           : CBD 
* Author            : Kathirkamu A
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz5334 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/11/18  1        AKK(TATA)    Initial version                                                              EA4#20133  
* **********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * NtcNr1
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * NtcSts1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * u16p0
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *
 * Component Types:
 * ================
 * FordMsg4B0BusHiSpd
 *   The purpose of the Ford Message 4B0 Bus High Speed function is to provide the Electric Power Steering system with signal values for the Torque Steer Compensation, Brake Oscillation Reduction, Lane Detection Warning, LKA, Traffic Jam Assist, Lane Center Assist, and Evasive Steer Assist functions from CAN. The Ford Message 4B0 function will perform the missing message and signal invalid diagnostics as well as provide a validity flag for the signal values and received message.
 *
 *
 * Port Prototypes:
 * ================
 * ClrDiagcFlgProxy
 *   When ClrDiagcFlgProxy is True, Diagnostic test is performed
 *
 * FordBrkOscnRednEnad
 *   This signal should be set to 1 in order to Test Diagnostic NTC
 *
 * FordCanDtcInhb
 *   When CAN DTC Inhibit is FALSE, Diagnostic test is performed
 *
 * FordEpsLifeCycMod
 *   This signal is used to decide calibration value to FAIL the NTC
 *
 * FordEvasSteerAssiEnad
 *   This signal should be set to 1 in order to Test Diagnostic NTC
 *
 * FordLaneCentrAssiEnad
 *   This signal should be set to 1 in order to Test Diagnostic NTC
 *
 * FordTqSteerCmpEnad
 *   This signal should be set to 1 in order to Test Diagnostic NTC
 *
 * FordVehYawStabyRaw
 *   Customer datatype should be used. Datatype: Ford_YawStabilityIndex. Elements are:  510 - "Cx1FE_NoDataExists",  511 - "Cx1FF_Fault
 *
 * FordVehYawStabyVld
 *    This signal will be true if the message is present otherwise false
 *
 * Ford_YawStabilityIndex
 *   Customer datatype should be used. Datatype: Ford_YawStabilityIndex. Elements are:  510 - "Cx1FE_NoDataExists",  511 - "Cx1FF_Fault
 *
 * GetRefTmr100MicroSec32bit
 *   It captures simulation time fromthe SimnTi value obtained at root laye'r of model and gives the RefTmr
 *
 * GetTiSpan100MicroSec32bit
 *   It Captures simulation time fromSimnTi value, handles counter wrapping, and subtracts RefTmr,provides the TiSpan
 *
 * LaneDetnWarnEnad
 *   This signal should be set to 1 in order to Test Diagnostic NTC
 *
 * LaneKeepAssiEnad
 *   This signal should be set to 1 in order to Test Diagnostic NTC
 *
 * SetNtcSts
 *   Provides the Parameter byte information
 *
 * TrfcJamAssiEnad
 *   This signal should be set to 1 in order to Test Diagnostic NTC
 *
 *
 * Runnable Entities:
 * ==================
 * FordMsg4B0BusHiSpdInit1
 *   Initialization Runnable
 *
 * FordMsg4B0BusHiSpdPer1
 *   Periodic Runnable at 10 millisecond
 *
 *
 * Per-Instance Memory:
 * ====================
 * CanDtcInhbRefTi
 *   Timer for invalid message will increment or reset based on the conditions
 *
 * ClrDiagcFlgProxyPrev
 *   It stores the previous value of ClrDiagcFlgProxy
 *
 * FordMsg4B0Miss
 *   It is used to indicate that the service ComTimeoutNotification_YawStabilityIndex is called and the message is missing
 *
 * FordVehYawStabyRawPrev
 *   Hold the Previous value of Ford Vehicle Yaw Stability Raw Previous
 *
 * FordVehYawStabyVldPrev
 *   Hold the Previous value of Ford Vehicle Yaw Stability Valid
 *
 * IniVehYawStabyInvld
 *   It is used to set FordVehYawStabyVld to True for the first time without time delay. It is set to False after FordVehYawStabyVld is set to False for the first time. Therefore, setting FordVehYawStabyVld to True has a time delay after the first time
 *
 * MsgFltNtcDiagcRefTi
 *   It is used as the reference time to calculate the elapsed time in NTC diagnostic during which the value in the message is equal to 511
 *
 * MsgFltRefTi
 *   It is used as the reference time to calculate the elapsed time during 'which the value in the message is equal to 511
 *
 * MsgMissNtcDiagcRefTi
 *   'It is used as the reference time to calculate the elapsed time in NTC diagnostic during which the message is missing.'
 *
 * MsgNoDataExistNtcDiagcRefTi
 *   It is used as the reference time to calculate the elapsed time in NTC diagnostic during which the value in the message is equal to 510
 *
 * MsgNoDataExistRefTi
 *   It is used as the reference time to calculate the elapsed time during which the value in the message is equal to 510
 *
 * MsgNotRxdRefTi
 *   It is used as the reference time to calculate the elapsed time durig which the message is not received
 *
 * MsgRxdNtcDiagcRefTi
 *   It is used as the reference time to calculate the elapsed time in NTC diagnostic during which the message is received
 *
 * MsgVldNtcDiagcRefTi
 *   It is used as the reference time to calculate the elapsed time in NTC diagnostic during which the value in the message is less than 510
 *
 * MsgVldRefTi
 *   It is used as the reference time to calculate the elapsed time during which the value in the message is less than 510
 *
 *********************************************************************************************************************/

#include "Rte_FordMsg4B0BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Read, Rte_Write and SetNtcSts */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void function; Rte generation adds standard return type but no error information is returned.
                                              [GetRefTmr100MicroSec32bit, GetTiSpan100MicroSec32bit] */

/********************************************* Embedded Local Constants **********************************************/
#define CNVMILLISECTOCNT_CNTPERMILLISEC_U16 	((uint16)10U)
#define FORDVEHYAWSATBYRAWMAX_CNT_U16           ((uint16)511U)
#define FORDVEHYAWSATBYRAWMIN_CNT_U16           ((uint16)0U)
#define MODSEL_CNT_U08                          ((uint8)1U)
#define MSGFLT_CNT_U16							((uint16)511U)
#define MSGNODATAEXIST_CNT_U16                  ((uint16)510U)
#define NODEBSTEP_CNT_U16                       ((uint16)65535U)
#define NTCDIAGCCONTITHD_MILLISEC_U32           (5000U)
/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/
static FUNC(void, FordMsg4B0BusHiSpd_CODE)SetNtc(VAR(boolean, AUTOMATIC) FordTqSteerCmpEnad_Cnt_T_logl,
												 VAR(boolean, AUTOMATIC) FordBrkOscnRednEnad_Cnt_T_logl,
												 VAR(boolean, AUTOMATIC) LaneDetnWarnEnad_Cnt_T_logl,
												 VAR(boolean, AUTOMATIC) LaneKeepAssiEnad_Cnt_T_logl,
												 VAR(boolean, AUTOMATIC) TrfcJamAssiEnad_Cnt_T_logl,
												 VAR(boolean, AUTOMATIC) FordLaneCentrAssiEnad_Cnt_T_logl,
												 VAR(boolean, AUTOMATIC) FordEvasSteerAssiEnad_Cnt_T_logl,
												 VAR(boolean, AUTOMATIC) FordCanDtcInhb_Cnt_T_logl,
												 VAR(uint8, AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08,
												 VAR(uint8, AUTOMATIC)   ClrDiagcFlgProxy_Cnt_T_u08,
												 VAR(uint16, AUTOMATIC)  FordVehYawStabyRaw_Cnt_T_u16);
												
static FUNC(void, FordMsg4B0BusHiSpd_CODE)SetNtc18D(VAR(boolean, AUTOMATIC) FeatCdn_Cnt_T_logl,
												       VAR(boolean, AUTOMATIC) CanDtcInhbEna_Cnt_T_logl,
													   VAR(uint32, AUTOMATIC) MsgMissNtcDiagcTiThd_Cnt_T_u32);
													  
static FUNC(void, FordMsg4B0BusHiSpd_CODE)SetNtc18E(VAR(boolean, AUTOMATIC) FeatCdn_Cnt_T_logl,
													   VAR(boolean, AUTOMATIC) CanDtcInhbEna_Cnt_T_logl,
													   VAR(uint32, AUTOMATIC)  MsgFltNtcDiagcTiThd_Cnt_T_u32,
													   VAR(uint16, AUTOMATIC)  FordVehYawStabyRaw_Cnt_T_u16);	

static FUNC(boolean, FordMsg4B0BusHiSpd_CODE)MsgVldChk(VAR(boolean, AUTOMATIC) MsgVld_Cnt_T_logl);	

static FUNC(boolean, FordMsg4B0BusHiSpd_CODE)MsgMissChk(void);
	
static FUNC(boolean, FordMsg4B0BusHiSpd_CODE)MsgNoDataExistChk(VAR(uint16, AUTOMATIC)  FordVehYawStabyRaw_Cnt_T_u16);
														  
static FUNC(boolean, FordMsg4B0BusHiSpd_CODE)MsgFltChk(VAR(uint16, AUTOMATIC)  FordVehYawStabyRaw_Cnt_T_u16);														 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * boolean: Boolean (standard type)
 * u16p0: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Ford_YawStabilityIndex: Enumeration of integer in interval [0...511] with enumerators
 *   Cx1FE_NoDataExists (510U)
 *   Cx1FF_Fault (511U)
 *   Unit: [%], Factor: 1, Offset: -256
 * NtcNr1: Enumeration of integer in interval [0...65535] with enumerators
 *   NTCNR_0X001 (1U)
 *   NTCNR_0X002 (2U)
 *   NTCNR_0X003 (3U)
 *   NTCNR_0X004 (4U)
 *   NTCNR_0X005 (5U)
 *   NTCNR_0X006 (6U)
 *   NTCNR_0X007 (7U)
 *   NTCNR_0X008 (8U)
 *   NTCNR_0X009 (9U)
 *   NTCNR_0X00A (10U)
 *   NTCNR_0X00B (11U)
 *   NTCNR_0X00C (12U)
 *   NTCNR_0X00D (13U)
 *   NTCNR_0X00E (14U)
 *   NTCNR_0X00F (15U)
 *   NTCNR_0X010 (16U)
 *   NTCNR_0X011 (17U)
 *   NTCNR_0X012 (18U)
 *   NTCNR_0X013 (19U)
 *   NTCNR_0X014 (20U)
 *   NTCNR_0X015 (21U)
 *   NTCNR_0X016 (22U)
 *   NTCNR_0X017 (23U)
 *   NTCNR_0X018 (24U)
 *   NTCNR_0X019 (25U)
 *   NTCNR_0X01A (26U)
 *   NTCNR_0X01B (27U)
 *   NTCNR_0X01C (28U)
 *   NTCNR_0X01D (29U)
 *   NTCNR_0X01E (30U)
 *   NTCNR_0X01F (31U)
 *   NTCNR_0X020 (32U)
 *   NTCNR_0X021 (33U)
 *   NTCNR_0X022 (34U)
 *   NTCNR_0X023 (35U)
 *   NTCNR_0X024 (36U)
 *   NTCNR_0X025 (37U)
 *   NTCNR_0X026 (38U)
 *   NTCNR_0X027 (39U)
 *   NTCNR_0X028 (40U)
 *   NTCNR_0X029 (41U)
 *   NTCNR_0X02A (42U)
 *   NTCNR_0X02B (43U)
 *   NTCNR_0X02C (44U)
 *   NTCNR_0X02D (45U)
 *   NTCNR_0X02E (46U)
 *   NTCNR_0X02F (47U)
 *   NTCNR_0X030 (48U)
 *   NTCNR_0X031 (49U)
 *   NTCNR_0X032 (50U)
 *   NTCNR_0X033 (51U)
 *   NTCNR_0X034 (52U)
 *   NTCNR_0X035 (53U)
 *   NTCNR_0X036 (54U)
 *   NTCNR_0X037 (55U)
 *   NTCNR_0X038 (56U)
 *   NTCNR_0X039 (57U)
 *   NTCNR_0X03A (58U)
 *   NTCNR_0X03B (59U)
 *   NTCNR_0X03C (60U)
 *   NTCNR_0X03D (61U)
 *   NTCNR_0X03E (62U)
 *   NTCNR_0X03F (63U)
 *   NTCNR_0X040 (64U)
 *   NTCNR_0X041 (65U)
 *   NTCNR_0X042 (66U)
 *   NTCNR_0X043 (67U)
 *   NTCNR_0X044 (68U)
 *   NTCNR_0X045 (69U)
 *   NTCNR_0X046 (70U)
 *   NTCNR_0X047 (71U)
 *   NTCNR_0X048 (72U)
 *   NTCNR_0X049 (73U)
 *   NTCNR_0X04A (74U)
 *   NTCNR_0X04B (75U)
 *   NTCNR_0X04C (76U)
 *   NTCNR_0X04D (77U)
 *   NTCNR_0X04E (78U)
 *   NTCNR_0X04F (79U)
 *   NTCNR_0X050 (80U)
 *   NTCNR_0X051 (81U)
 *   NTCNR_0X052 (82U)
 *   NTCNR_0X053 (83U)
 *   NTCNR_0X054 (84U)
 *   NTCNR_0X055 (85U)
 *   NTCNR_0X056 (86U)
 *   NTCNR_0X057 (87U)
 *   NTCNR_0X058 (88U)
 *   NTCNR_0X059 (89U)
 *   NTCNR_0X05A (90U)
 *   NTCNR_0X05B (91U)
 *   NTCNR_0X05C (92U)
 *   NTCNR_0X05D (93U)
 *   NTCNR_0X05E (94U)
 *   NTCNR_0X05F (95U)
 *   NTCNR_0X060 (96U)
 *   NTCNR_0X061 (97U)
 *   NTCNR_0X062 (98U)
 *   NTCNR_0X063 (99U)
 *   NTCNR_0X064 (100U)
 *   NTCNR_0X065 (101U)
 *   NTCNR_0X066 (102U)
 *   NTCNR_0X067 (103U)
 *   NTCNR_0X068 (104U)
 *   NTCNR_0X069 (105U)
 *   NTCNR_0X06A (106U)
 *   NTCNR_0X06B (107U)
 *   NTCNR_0X06C (108U)
 *   NTCNR_0X06D (109U)
 *   NTCNR_0X06E (110U)
 *   NTCNR_0X06F (111U)
 *   NTCNR_0X070 (112U)
 *   NTCNR_0X071 (113U)
 *   NTCNR_0X072 (114U)
 *   NTCNR_0X073 (115U)
 *   NTCNR_0X074 (116U)
 *   NTCNR_0X075 (117U)
 *   NTCNR_0X076 (118U)
 *   NTCNR_0X077 (119U)
 *   NTCNR_0X078 (120U)
 *   NTCNR_0X079 (121U)
 *   NTCNR_0X07A (122U)
 *   NTCNR_0X07B (123U)
 *   NTCNR_0X07C (124U)
 *   NTCNR_0X07D (125U)
 *   NTCNR_0X07E (126U)
 *   NTCNR_0X07F (127U)
 *   NTCNR_0X080 (128U)
 *   NTCNR_0X081 (129U)
 *   NTCNR_0X082 (130U)
 *   NTCNR_0X083 (131U)
 *   NTCNR_0X084 (132U)
 *   NTCNR_0X085 (133U)
 *   NTCNR_0X086 (134U)
 *   NTCNR_0X087 (135U)
 *   NTCNR_0X088 (136U)
 *   NTCNR_0X089 (137U)
 *   NTCNR_0X08A (138U)
 *   NTCNR_0X08B (139U)
 *   NTCNR_0X08C (140U)
 *   NTCNR_0X08D (141U)
 *   NTCNR_0X08E (142U)
 *   NTCNR_0X08F (143U)
 *   NTCNR_0X090 (144U)
 *   NTCNR_0X091 (145U)
 *   NTCNR_0X092 (146U)
 *   NTCNR_0X093 (147U)
 *   NTCNR_0X094 (148U)
 *   NTCNR_0X095 (149U)
 *   NTCNR_0X096 (150U)
 *   NTCNR_0X097 (151U)
 *   NTCNR_0X098 (152U)
 *   NTCNR_0X099 (153U)
 *   NTCNR_0X09A (154U)
 *   NTCNR_0X09B (155U)
 *   NTCNR_0X09C (156U)
 *   NTCNR_0X09D (157U)
 *   NTCNR_0X09E (158U)
 *   NTCNR_0X09F (159U)
 *   NTCNR_0X0A0 (160U)
 *   NTCNR_0X0A1 (161U)
 *   NTCNR_0X0A2 (162U)
 *   NTCNR_0X0A3 (163U)
 *   NTCNR_0X0A4 (164U)
 *   NTCNR_0X0A5 (165U)
 *   NTCNR_0X0A6 (166U)
 *   NTCNR_0X0A7 (167U)
 *   NTCNR_0X0A8 (168U)
 *   NTCNR_0X0A9 (169U)
 *   NTCNR_0X0AA (170U)
 *   NTCNR_0X0AB (171U)
 *   NTCNR_0X0AC (172U)
 *   NTCNR_0X0AD (173U)
 *   NTCNR_0X0AE (174U)
 *   NTCNR_0X0AF (175U)
 *   NTCNR_0X0B0 (176U)
 *   NTCNR_0X0B1 (177U)
 *   NTCNR_0X0B2 (178U)
 *   NTCNR_0X0B3 (179U)
 *   NTCNR_0X0B4 (180U)
 *   NTCNR_0X0B5 (181U)
 *   NTCNR_0X0B6 (182U)
 *   NTCNR_0X0B7 (183U)
 *   NTCNR_0X0B8 (184U)
 *   NTCNR_0X0B9 (185U)
 *   NTCNR_0X0BA (186U)
 *   NTCNR_0X0BB (187U)
 *   NTCNR_0X0BC (188U)
 *   NTCNR_0X0BD (189U)
 *   NTCNR_0X0BE (190U)
 *   NTCNR_0X0BF (191U)
 *   NTCNR_0X0C0 (192U)
 *   NTCNR_0X0C1 (193U)
 *   NTCNR_0X0C2 (194U)
 *   NTCNR_0X0C3 (195U)
 *   NTCNR_0X0C4 (196U)
 *   NTCNR_0X0C5 (197U)
 *   NTCNR_0X0C6 (198U)
 *   NTCNR_0X0C7 (199U)
 *   NTCNR_0X0C8 (200U)
 *   NTCNR_0X0C9 (201U)
 *   NTCNR_0X0CA (202U)
 *   NTCNR_0X0CB (203U)
 *   NTCNR_0X0CC (204U)
 *   NTCNR_0X0CD (205U)
 *   NTCNR_0X0CE (206U)
 *   NTCNR_0X0CF (207U)
 *   NTCNR_0X0D0 (208U)
 *   NTCNR_0X0D1 (209U)
 *   NTCNR_0X0D2 (210U)
 *   NTCNR_0X0D3 (211U)
 *   NTCNR_0X0D4 (212U)
 *   NTCNR_0X0D5 (213U)
 *   NTCNR_0X0D6 (214U)
 *   NTCNR_0X0D7 (215U)
 *   NTCNR_0X0D8 (216U)
 *   NTCNR_0X0D9 (217U)
 *   NTCNR_0X0DA (218U)
 *   NTCNR_0X0DB (219U)
 *   NTCNR_0X0DC (220U)
 *   NTCNR_0X0DD (221U)
 *   NTCNR_0X0DE (222U)
 *   NTCNR_0X0DF (223U)
 *   NTCNR_0X0E0 (224U)
 *   NTCNR_0X0E1 (225U)
 *   NTCNR_0X0E2 (226U)
 *   NTCNR_0X0E3 (227U)
 *   NTCNR_0X0E4 (228U)
 *   NTCNR_0X0E5 (229U)
 *   NTCNR_0X0E6 (230U)
 *   NTCNR_0X0E7 (231U)
 *   NTCNR_0X0E8 (232U)
 *   NTCNR_0X0E9 (233U)
 *   NTCNR_0X0EA (234U)
 *   NTCNR_0X0EB (235U)
 *   NTCNR_0X0EC (236U)
 *   NTCNR_0X0ED (237U)
 *   NTCNR_0X0EE (238U)
 *   NTCNR_0X0EF (239U)
 *   NTCNR_0X0F0 (240U)
 *   NTCNR_0X0F1 (241U)
 *   NTCNR_0X0F2 (242U)
 *   NTCNR_0X0F3 (243U)
 *   NTCNR_0X0F4 (244U)
 *   NTCNR_0X0F5 (245U)
 *   NTCNR_0X0F6 (246U)
 *   NTCNR_0X0F7 (247U)
 *   NTCNR_0X0F8 (248U)
 *   NTCNR_0X0F9 (249U)
 *   NTCNR_0X0FA (250U)
 *   NTCNR_0X0FB (251U)
 *   NTCNR_0X0FC (252U)
 *   NTCNR_0X0FD (253U)
 *   NTCNR_0X0FE (254U)
 *   NTCNR_0X0FF (255U)
 *   NTCNR_0X100 (256U)
 *   NTCNR_0X101 (257U)
 *   NTCNR_0X102 (258U)
 *   NTCNR_0X103 (259U)
 *   NTCNR_0X104 (260U)
 *   NTCNR_0X105 (261U)
 *   NTCNR_0X106 (262U)
 *   NTCNR_0X107 (263U)
 *   NTCNR_0X108 (264U)
 *   NTCNR_0X109 (265U)
 *   NTCNR_0X10A (266U)
 *   NTCNR_0X10B (267U)
 *   NTCNR_0X10C (268U)
 *   NTCNR_0X10D (269U)
 *   NTCNR_0X10E (270U)
 *   NTCNR_0X10F (271U)
 *   NTCNR_0X110 (272U)
 *   NTCNR_0X111 (273U)
 *   NTCNR_0X112 (274U)
 *   NTCNR_0X113 (275U)
 *   NTCNR_0X114 (276U)
 *   NTCNR_0X115 (277U)
 *   NTCNR_0X116 (278U)
 *   NTCNR_0X117 (279U)
 *   NTCNR_0X118 (280U)
 *   NTCNR_0X119 (281U)
 *   NTCNR_0X11A (282U)
 *   NTCNR_0X11B (283U)
 *   NTCNR_0X11C (284U)
 *   NTCNR_0X11D (285U)
 *   NTCNR_0X11E (286U)
 *   NTCNR_0X11F (287U)
 *   NTCNR_0X120 (288U)
 *   NTCNR_0X121 (289U)
 *   NTCNR_0X122 (290U)
 *   NTCNR_0X123 (291U)
 *   NTCNR_0X124 (292U)
 *   NTCNR_0X125 (293U)
 *   NTCNR_0X126 (294U)
 *   NTCNR_0X127 (295U)
 *   NTCNR_0X128 (296U)
 *   NTCNR_0X129 (297U)
 *   NTCNR_0X12A (298U)
 *   NTCNR_0X12B (299U)
 *   NTCNR_0X12C (300U)
 *   NTCNR_0X12D (301U)
 *   NTCNR_0X12E (302U)
 *   NTCNR_0X12F (303U)
 *   NTCNR_0X130 (304U)
 *   NTCNR_0X131 (305U)
 *   NTCNR_0X132 (306U)
 *   NTCNR_0X133 (307U)
 *   NTCNR_0X134 (308U)
 *   NTCNR_0X135 (309U)
 *   NTCNR_0X136 (310U)
 *   NTCNR_0X137 (311U)
 *   NTCNR_0X138 (312U)
 *   NTCNR_0X139 (313U)
 *   NTCNR_0X13A (314U)
 *   NTCNR_0X13B (315U)
 *   NTCNR_0X13C (316U)
 *   NTCNR_0X13D (317U)
 *   NTCNR_0X13E (318U)
 *   NTCNR_0X13F (319U)
 *   NTCNR_0X140 (320U)
 *   NTCNR_0X141 (321U)
 *   NTCNR_0X142 (322U)
 *   NTCNR_0X143 (323U)
 *   NTCNR_0X144 (324U)
 *   NTCNR_0X145 (325U)
 *   NTCNR_0X146 (326U)
 *   NTCNR_0X147 (327U)
 *   NTCNR_0X148 (328U)
 *   NTCNR_0X149 (329U)
 *   NTCNR_0X14A (330U)
 *   NTCNR_0X14B (331U)
 *   NTCNR_0X14C (332U)
 *   NTCNR_0X14D (333U)
 *   NTCNR_0X14E (334U)
 *   NTCNR_0X14F (335U)
 *   NTCNR_0X150 (336U)
 *   NTCNR_0X151 (337U)
 *   NTCNR_0X152 (338U)
 *   NTCNR_0X153 (339U)
 *   NTCNR_0X154 (340U)
 *   NTCNR_0X155 (341U)
 *   NTCNR_0X156 (342U)
 *   NTCNR_0X157 (343U)
 *   NTCNR_0X158 (344U)
 *   NTCNR_0X159 (345U)
 *   NTCNR_0X15A (346U)
 *   NTCNR_0X15B (347U)
 *   NTCNR_0X15C (348U)
 *   NTCNR_0X15D (349U)
 *   NTCNR_0X15E (350U)
 *   NTCNR_0X15F (351U)
 *   NTCNR_0X160 (352U)
 *   NTCNR_0X161 (353U)
 *   NTCNR_0X162 (354U)
 *   NTCNR_0X163 (355U)
 *   NTCNR_0X164 (356U)
 *   NTCNR_0X165 (357U)
 *   NTCNR_0X166 (358U)
 *   NTCNR_0X167 (359U)
 *   NTCNR_0X168 (360U)
 *   NTCNR_0X169 (361U)
 *   NTCNR_0X16A (362U)
 *   NTCNR_0X16B (363U)
 *   NTCNR_0X16C (364U)
 *   NTCNR_0X16D (365U)
 *   NTCNR_0X16E (366U)
 *   NTCNR_0X16F (367U)
 *   NTCNR_0X170 (368U)
 *   NTCNR_0X171 (369U)
 *   NTCNR_0X172 (370U)
 *   NTCNR_0X173 (371U)
 *   NTCNR_0X174 (372U)
 *   NTCNR_0X175 (373U)
 *   NTCNR_0X176 (374U)
 *   NTCNR_0X177 (375U)
 *   NTCNR_0X178 (376U)
 *   NTCNR_0X179 (377U)
 *   NTCNR_0X17A (378U)
 *   NTCNR_0X17B (379U)
 *   NTCNR_0X17C (380U)
 *   NTCNR_0X17D (381U)
 *   NTCNR_0X17E (382U)
 *   NTCNR_0X17F (383U)
 *   NTCNR_0X180 (384U)
 *   NTCNR_0X181 (385U)
 *   NTCNR_0X182 (386U)
 *   NTCNR_0X183 (387U)
 *   NTCNR_0X184 (388U)
 *   NTCNR_0X185 (389U)
 *   NTCNR_0X186 (390U)
 *   NTCNR_0X187 (391U)
 *   NTCNR_0X188 (392U)
 *   NTCNR_0X189 (393U)
 *   NTCNR_0X18A (394U)
 *   NTCNR_0X18B (395U)
 *   NTCNR_0X18C (396U)
 *   NTCNR_0X18D (397U)
 *   NTCNR_0X18E (398U)
 *   NTCNR_0X18F (399U)
 *   NTCNR_0X190 (400U)
 *   NTCNR_0X191 (401U)
 *   NTCNR_0X192 (402U)
 *   NTCNR_0X193 (403U)
 *   NTCNR_0X194 (404U)
 *   NTCNR_0X195 (405U)
 *   NTCNR_0X196 (406U)
 *   NTCNR_0X197 (407U)
 *   NTCNR_0X198 (408U)
 *   NTCNR_0X199 (409U)
 *   NTCNR_0X19A (410U)
 *   NTCNR_0X19B (411U)
 *   NTCNR_0X19C (412U)
 *   NTCNR_0X19D (413U)
 *   NTCNR_0X19E (414U)
 *   NTCNR_0X19F (415U)
 *   NTCNR_0X1A0 (416U)
 *   NTCNR_0X1A1 (417U)
 *   NTCNR_0X1A2 (418U)
 *   NTCNR_0X1A3 (419U)
 *   NTCNR_0X1A4 (420U)
 *   NTCNR_0X1A5 (421U)
 *   NTCNR_0X1A6 (422U)
 *   NTCNR_0X1A7 (423U)
 *   NTCNR_0X1A8 (424U)
 *   NTCNR_0X1A9 (425U)
 *   NTCNR_0X1AA (426U)
 *   NTCNR_0X1AB (427U)
 *   NTCNR_0X1AC (428U)
 *   NTCNR_0X1AD (429U)
 *   NTCNR_0X1AE (430U)
 *   NTCNR_0X1AF (431U)
 *   NTCNR_0X1B0 (432U)
 *   NTCNR_0X1B1 (433U)
 *   NTCNR_0X1B2 (434U)
 *   NTCNR_0X1B3 (435U)
 *   NTCNR_0X1B4 (436U)
 *   NTCNR_0X1B5 (437U)
 *   NTCNR_0X1B6 (438U)
 *   NTCNR_0X1B7 (439U)
 *   NTCNR_0X1B8 (440U)
 *   NTCNR_0X1B9 (441U)
 *   NTCNR_0X1BA (442U)
 *   NTCNR_0X1BB (443U)
 *   NTCNR_0X1BC (444U)
 *   NTCNR_0X1BD (445U)
 *   NTCNR_0X1BE (446U)
 *   NTCNR_0X1BF (447U)
 *   NTCNR_0X1C0 (448U)
 *   NTCNR_0X1C1 (449U)
 *   NTCNR_0X1C2 (450U)
 *   NTCNR_0X1C3 (451U)
 *   NTCNR_0X1C4 (452U)
 *   NTCNR_0X1C5 (453U)
 *   NTCNR_0X1C6 (454U)
 *   NTCNR_0X1C7 (455U)
 *   NTCNR_0X1C8 (456U)
 *   NTCNR_0X1C9 (457U)
 *   NTCNR_0X1CA (458U)
 *   NTCNR_0X1CB (459U)
 *   NTCNR_0X1CC (460U)
 *   NTCNR_0X1CD (461U)
 *   NTCNR_0X1CE (462U)
 *   NTCNR_0X1CF (463U)
 *   NTCNR_0X1D0 (464U)
 *   NTCNR_0X1D1 (465U)
 *   NTCNR_0X1D2 (466U)
 *   NTCNR_0X1D3 (467U)
 *   NTCNR_0X1D4 (468U)
 *   NTCNR_0X1D5 (469U)
 *   NTCNR_0X1D6 (470U)
 *   NTCNR_0X1D7 (471U)
 *   NTCNR_0X1D8 (472U)
 *   NTCNR_0X1D9 (473U)
 *   NTCNR_0X1DA (474U)
 *   NTCNR_0X1DB (475U)
 *   NTCNR_0X1DC (476U)
 *   NTCNR_0X1DD (477U)
 *   NTCNR_0X1DE (478U)
 *   NTCNR_0X1DF (479U)
 *   NTCNR_0X1E0 (480U)
 *   NTCNR_0X1E1 (481U)
 *   NTCNR_0X1E2 (482U)
 *   NTCNR_0X1E3 (483U)
 *   NTCNR_0X1E4 (484U)
 *   NTCNR_0X1E5 (485U)
 *   NTCNR_0X1E6 (486U)
 *   NTCNR_0X1E7 (487U)
 *   NTCNR_0X1E8 (488U)
 *   NTCNR_0X1E9 (489U)
 *   NTCNR_0X1EA (490U)
 *   NTCNR_0X1EB (491U)
 *   NTCNR_0X1EC (492U)
 *   NTCNR_0X1ED (493U)
 *   NTCNR_0X1EE (494U)
 *   NTCNR_0X1EF (495U)
 *   NTCNR_0X1F0 (496U)
 *   NTCNR_0X1F1 (497U)
 *   NTCNR_0X1F2 (498U)
 *   NTCNR_0X1F3 (499U)
 *   NTCNR_0X1F4 (500U)
 *   NTCNR_0X1F5 (501U)
 *   NTCNR_0X1F6 (502U)
 *   NTCNR_0X1F7 (503U)
 *   NTCNR_0X1F8 (504U)
 *   NTCNR_0X1F9 (505U)
 *   NTCNR_0X1FA (506U)
 *   NTCNR_0X1FB (507U)
 *   NTCNR_0X1FC (508U)
 *   NTCNR_0X1FD (509U)
 *   NTCNR_0X1FE (510U)
 *   NTCNR_0X1FF (511U)
 * NtcSts1: Enumeration of integer in interval [0...255] with enumerators
 *   NTCSTS_PASSD (0U)
 *   NTCSTS_FAILD (1U)
 *   NTCSTS_PREPASSD (2U)
 *   NTCSTS_PREFAILD (3U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_CanDtcInhbRefTi(void)
 *   uint32 *Rte_Pim_MsgFltNtcDiagcRefTi(void)
 *   uint32 *Rte_Pim_MsgFltRefTi(void)
 *   uint32 *Rte_Pim_MsgMissNtcDiagcRefTi(void)
 *   uint32 *Rte_Pim_MsgNoDataExistNtcDiagcRefTi(void)
 *   uint32 *Rte_Pim_MsgNoDataExistRefTi(void)
 *   uint32 *Rte_Pim_MsgNotRxdRefTi(void)
 *   uint32 *Rte_Pim_MsgRxdNtcDiagcRefTi(void)
 *   uint32 *Rte_Pim_MsgVldNtcDiagcRefTi(void)
 *   uint32 *Rte_Pim_MsgVldRefTi(void)
 *   uint16 *Rte_Pim_FordVehYawStabyRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   boolean *Rte_Pim_FordMsg4B0Miss(void)
 *   boolean *Rte_Pim_FordVehYawStabyVldPrev(void)
 *   boolean *Rte_Pim_IniVehYawStabyInvld(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u16p0 Rte_Prm_FordMsg4B0BusHiSpdCanDtcInhbTiThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg4B0BusHiSpdMsgFltTiThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg4B0BusHiSpdMsgMissTiThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg4B0BusHiSpdMsgVldTiThd_Val(void)
 *
 *********************************************************************************************************************/


#define FordMsg4B0BusHiSpd_START_SEC_CODE
#include "FordMsg4B0BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg4B0BusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg4B0BusHiSpdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg4B0BusHiSpd_CODE) FordMsg4B0BusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg4B0BusHiSpdInit1
 *********************************************************************************************************************/
	VAR(uint32, AUTOMATIC) GetRefTmr_Cnt_T_u32;
	
	(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
	*Rte_Pim_MsgVldRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_MsgNotRxdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_MsgNoDataExistRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_MsgFltRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_CanDtcInhbRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_MsgRxdNtcDiagcRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_MsgVldNtcDiagcRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_MsgNoDataExistNtcDiagcRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_MsgFltNtcDiagcRefTi() = GetRefTmr_Cnt_T_u32;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg4B0BusHiSpdPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ClrDiagcFlgProxy_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordBrkOscnRednEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneCentrAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTqSteerCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_YawStabilityIndex_Ford_YawStabilityIndex(Ford_YawStabilityIndex *data)
 *   Std_ReturnType Rte_Read_LaneDetnWarnEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_LaneKeepAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_TrfcJamAssiEnad_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehYawStabyRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehYawStabyVld_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg4B0BusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg4B0BusHiSpd_CODE) FordMsg4B0BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg4B0BusHiSpdPer1
 *********************************************************************************************************************/
	VAR(uint8, AUTOMATIC)   ClrDiagcFlgProxy_Cnt_T_u08;
	VAR(uint8, AUTOMATIC)   FordEpsLifeCycMod_Cnt_T_u08;
	
	VAR(Ford_YawStabilityIndex, AUTOMATIC)   FordYawStabilityIndex_Cnt_T_enum;	
	VAR(uint16, AUTOMATIC)   FordVehYawStabyRaw_Cnt_T_u16;
	
	VAR(boolean, AUTOMATIC) FordBrkOscnRednEnad_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) FordCanDtcInhb_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordEvasSteerAssiEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordLaneCentrAssiEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordTqSteerCmpEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) LaneDetnWarnEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) LaneKeepAssiEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) TrfcJamAssiEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehYawStabyVld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) VehYawStabyvldCond_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) MsgVld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) MsgVldFlg_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) MsgNotRxdFlg_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) MsgFltFlg_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) MsgNoDataExistFlg_Cnt_T_logl;
	
 
 	 /*** Read Inputs from RTE ***/
	(void) Rte_Read_ClrDiagcFlgProxy_Val(&ClrDiagcFlgProxy_Cnt_T_u08);
	(void) Rte_Read_FordBrkOscnRednEnad_Logl(&FordBrkOscnRednEnad_Cnt_T_logl);
	(void) Rte_Read_FordCanDtcInhb_Logl(&FordCanDtcInhb_Cnt_T_logl);
	(void) Rte_Read_FordEpsLifeCycMod_Val(&FordEpsLifeCycMod_Cnt_T_u08);
	(void) Rte_Read_FordEvasSteerAssiEnad_Logl(&FordEvasSteerAssiEnad_Cnt_T_logl);
	(void) Rte_Read_FordLaneCentrAssiEnad_Logl(&FordLaneCentrAssiEnad_Cnt_T_logl);
	(void) Rte_Read_FordTqSteerCmpEnad_Logl(&FordTqSteerCmpEnad_Cnt_T_logl);
	(void) Rte_Read_Ford_YawStabilityIndex_Ford_YawStabilityIndex(&FordYawStabilityIndex_Cnt_T_enum);
	(void) Rte_Read_LaneDetnWarnEnad_Logl(&LaneDetnWarnEnad_Cnt_T_logl);
	(void) Rte_Read_LaneKeepAssiEnad_Logl(&LaneKeepAssiEnad_Cnt_T_logl);
	(void) Rte_Read_TrfcJamAssiEnad_Logl(&TrfcJamAssiEnad_Cnt_T_logl);
		
	if (TRUE == *Rte_Pim_FordMsg4B0Miss())
	{
		FordVehYawStabyRaw_Cnt_T_u16 = *Rte_Pim_FordVehYawStabyRawPrev();
	}
	else
	{
		FordVehYawStabyRaw_Cnt_T_u16 = (uint16)FordYawStabilityIndex_Cnt_T_enum;
		*Rte_Pim_FordVehYawStabyRawPrev() = FordVehYawStabyRaw_Cnt_T_u16;
	}
	
	FordVehYawStabyRaw_Cnt_T_u16 = Lim_u16(FordVehYawStabyRaw_Cnt_T_u16,FORDVEHYAWSATBYRAWMIN_CNT_U16,FORDVEHYAWSATBYRAWMAX_CNT_U16);
	
	SetNtc(FordTqSteerCmpEnad_Cnt_T_logl,
	       FordBrkOscnRednEnad_Cnt_T_logl,
		   LaneDetnWarnEnad_Cnt_T_logl,
		   LaneKeepAssiEnad_Cnt_T_logl,
		   TrfcJamAssiEnad_Cnt_T_logl,
		   FordLaneCentrAssiEnad_Cnt_T_logl,
		   FordEvasSteerAssiEnad_Cnt_T_logl,
		   FordCanDtcInhb_Cnt_T_logl,
		   FordEpsLifeCycMod_Cnt_T_u08,
		   ClrDiagcFlgProxy_Cnt_T_u08,
		   FordVehYawStabyRaw_Cnt_T_u16);
	
	
	if ((FordVehYawStabyRaw_Cnt_T_u16 < MSGNODATAEXIST_CNT_U16)&&
		(FALSE == *Rte_Pim_FordMsg4B0Miss()))
	{
		MsgVld_Cnt_T_logl = TRUE;
	}
	else
	{
		MsgVld_Cnt_T_logl = FALSE;
	}
	
	if ((FALSE == *Rte_Pim_IniVehYawStabyInvld())&&
	    (TRUE == MsgVld_Cnt_T_logl))
	{
		VehYawStabyvldCond_Cnt_T_logl = TRUE;
    }
    else
    {
		VehYawStabyvldCond_Cnt_T_logl = FALSE;
	}
	
	MsgVldFlg_Cnt_T_logl = MsgVldChk (MsgVld_Cnt_T_logl);

    MsgNotRxdFlg_Cnt_T_logl = MsgMissChk ();

    MsgNoDataExistFlg_Cnt_T_logl = MsgNoDataExistChk (FordVehYawStabyRaw_Cnt_T_u16);	
	
    MsgFltFlg_Cnt_T_logl = MsgFltChk (FordVehYawStabyRaw_Cnt_T_u16);
	
	if ((TRUE == VehYawStabyvldCond_Cnt_T_logl) ||
       (TRUE == MsgVldFlg_Cnt_T_logl))
	{
		FordVehYawStabyVld_Cnt_T_logl = TRUE;
		*Rte_Pim_IniVehYawStabyInvld() = TRUE;
	}
	else if((TRUE == MsgNotRxdFlg_Cnt_T_logl) ||
	       (TRUE == MsgNoDataExistFlg_Cnt_T_logl) ||
		   (TRUE == MsgFltFlg_Cnt_T_logl))
	{
		FordVehYawStabyVld_Cnt_T_logl = FALSE;
	}
	else
	{
		FordVehYawStabyVld_Cnt_T_logl = *Rte_Pim_FordVehYawStabyVldPrev();
	}
	
	*Rte_Pim_FordVehYawStabyVldPrev() = FordVehYawStabyVld_Cnt_T_logl;
	
	/*** Write Outputs to RTE ***/
	(void)Rte_Write_FordVehYawStabyRaw_Val(FordVehYawStabyRaw_Cnt_T_u16);
    (void)Rte_Write_FordVehYawStabyVld_Logl(FordVehYawStabyVld_Cnt_T_logl);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordMsg4B0BusHiSpd_STOP_SEC_CODE
#include "FordMsg4B0BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************************************************
  * Name         :  SetNtc
  * Description  :  Implementation of 'SetNTC' Subsystem
  * Input        :  FordTqSteerCmpEnad_Cnt_T_logl,
  *                 FordBrkOscnRednEnad_Cnt_T_logl,
  *                 LaneDetnWarnEnad_Cnt_T_logl,
  *                 LaneKeepAssiEnad_Cnt_T_logl,
  *                 TrfcJamAssiEnad_Cnt_T_logl,
  *                 FordLaneCentrAssiEnad_Cnt_T_logl,
  *                 FordEvasSteerAssiEnad_Cnt_T_logl,
  *                 FordCanDtcInhb_Cnt_T_logl,
  *                 FordEpsLifeCycMod_Cnt_T_u08,
  *                 ClrDiagcFlgProxy_Cnt_T_u08,
  *                 FordVehYawStabyRaw_Cnt_T_u16
  * Output       :  None 
  * Usage Notes  :  None
*****************************************************************************************************************/	 
static FUNC(void, FordMsg4B0BusHiSpd_CODE)SetNtc(VAR(boolean, AUTOMATIC) FordTqSteerCmpEnad_Cnt_T_logl,
												 VAR(boolean, AUTOMATIC) FordBrkOscnRednEnad_Cnt_T_logl,
												 VAR(boolean, AUTOMATIC) LaneDetnWarnEnad_Cnt_T_logl,
												 VAR(boolean, AUTOMATIC) LaneKeepAssiEnad_Cnt_T_logl,
												 VAR(boolean, AUTOMATIC) TrfcJamAssiEnad_Cnt_T_logl,
												 VAR(boolean, AUTOMATIC) FordLaneCentrAssiEnad_Cnt_T_logl,
												 VAR(boolean, AUTOMATIC) FordEvasSteerAssiEnad_Cnt_T_logl,
												 VAR(boolean, AUTOMATIC) FordCanDtcInhb_Cnt_T_logl,
												 VAR(uint8, AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08,
												 VAR(uint8, AUTOMATIC)   ClrDiagcFlgProxy_Cnt_T_u08,
												 VAR(uint16, AUTOMATIC)  FordVehYawStabyRaw_Cnt_T_u16)
{
    VAR(boolean, AUTOMATIC) CanDtcInhbEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FeatCdn_Cnt_T_logl;
	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	VAR(uint32, AUTOMATIC)  MsgMissNtcDiagcTiThd_Cnt_T_u32;
	VAR(uint32, AUTOMATIC)  MsgFltNtcDiagcTiThd_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) GetRefTmr_Cnt_T_u32;
	
    if (ClrDiagcFlgProxy_Cnt_T_u08 != *Rte_Pim_ClrDiagcFlgProxyPrev())
	{
	   	/** Start of ResetNTCTimers**/
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
	    *Rte_Pim_MsgRxdNtcDiagcRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_MsgMissNtcDiagcRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_MsgVldNtcDiagcRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_MsgFltNtcDiagcRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_MsgNoDataExistNtcDiagcRefTi() = GetRefTmr_Cnt_T_u32;
	    /** End of  of ResetNTCTimers**/
	}
    *Rte_Pim_ClrDiagcFlgProxyPrev() = ClrDiagcFlgProxy_Cnt_T_u08;
	
	if (FALSE == FordCanDtcInhb_Cnt_T_logl)
	{
		/** Start of CanDtcInhbCountTime ***/
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_CanDtcInhbRefTi(),&TiSpan_Cnt_T_u32);
		/** End of CanDtcInhbCountTime ***/
	}
	else
	{
		/** Start of CanDtcInhbResetTime ***/
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_CanDtcInhbRefTi());
		TiSpan_Cnt_T_u32 = 0U;
		/** End of CanDtcInhbResetTime ***/
	}
	
	if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg4B0BusHiSpdCanDtcInhbTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		CanDtcInhbEna_Cnt_T_logl = TRUE;
	}
	else
	{
		CanDtcInhbEna_Cnt_T_logl = FALSE;
    }
	
	if ((TRUE == FordTqSteerCmpEnad_Cnt_T_logl) ||
	   (TRUE == FordBrkOscnRednEnad_Cnt_T_logl) || 
	   (TRUE == LaneDetnWarnEnad_Cnt_T_logl) ||
	   (TRUE == LaneKeepAssiEnad_Cnt_T_logl) ||
	   (TRUE == TrfcJamAssiEnad_Cnt_T_logl) ||
	   (TRUE == FordLaneCentrAssiEnad_Cnt_T_logl) ||
	   (TRUE == FordEvasSteerAssiEnad_Cnt_T_logl))
	{
		FeatCdn_Cnt_T_logl = TRUE;
	}
	else
	{
		FeatCdn_Cnt_T_logl = FALSE;
	}
	
	if (MODSEL_CNT_U08 == FordEpsLifeCycMod_Cnt_T_u08)
	{
		/***  Start of ConstantThreshold ***/
		MsgMissNtcDiagcTiThd_Cnt_T_u32 = NTCDIAGCCONTITHD_MILLISEC_U32 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16;
		MsgFltNtcDiagcTiThd_Cnt_T_u32 = MsgMissNtcDiagcTiThd_Cnt_T_u32;
		
		/***  End of ConstantThreshold ***/
	}
	else
	{
		/***  Start of CalibrationThreshold ***/
		MsgMissNtcDiagcTiThd_Cnt_T_u32 = (uint32)Rte_Prm_FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16;
		MsgFltNtcDiagcTiThd_Cnt_T_u32 = (uint32)Rte_Prm_FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16;
		/***  End of CalibrationThreshold ***/
	}
	
	SetNtc18D(FeatCdn_Cnt_T_logl,
				 CanDtcInhbEna_Cnt_T_logl,
				 MsgMissNtcDiagcTiThd_Cnt_T_u32);
				 
    SetNtc18E(FeatCdn_Cnt_T_logl,
				 CanDtcInhbEna_Cnt_T_logl,
				 MsgFltNtcDiagcTiThd_Cnt_T_u32,
				 FordVehYawStabyRaw_Cnt_T_u16);	
}

/*****************************************************************************************************************
  * Name         :  SetNtc18D
  * Description  :  Implementation Subsystem of 'SetNTC' Subsystem
  * Input        :  FeatCdn_Cnt_T_logl,
  *                 CanDtcInhbEna_Cnt_T_logl,MsgMissNtcDiagcTiThd_Cnt_T_u32
  * Output       :  None 
  * Usage Notes  :  None
*****************************************************************************************************************/	 
static FUNC(void, FordMsg4B0BusHiSpd_CODE)SetNtc18D(VAR(boolean, AUTOMATIC) FeatCdn_Cnt_T_logl,
													VAR(boolean, AUTOMATIC) CanDtcInhbEna_Cnt_T_logl,
													VAR(uint32, AUTOMATIC) MsgMissNtcDiagcTiThd_Cnt_T_u32)
													
	
{	
    VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	VAR(uint32, AUTOMATIC)  GetRefTmr_Cnt_T_u32;

	if ((TRUE == FeatCdn_Cnt_T_logl) &&
	   (TRUE == CanDtcInhbEna_Cnt_T_logl))
    {
		/*** Start of PerformDiagnosticNTC0x18D ***/
		if (FALSE == *Rte_Pim_FordMsg4B0Miss())
		{
			/** Start of MsgRxdNtcDiagcCountTime ***/
			(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MsgRxdNtcDiagcRefTi(),&TiSpan_Cnt_T_u32);
			/** End of MsgRxdNtcDiagcCountTime ***/
		}
		else
		{
			/** Start of MsgRxdNtcDiagcResetTime ***/
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MsgRxdNtcDiagcRefTi());
			TiSpan_Cnt_T_u32 = 0U;
			/** End of MsgRxdNtcDiagcResetTime ***/
		}	

		if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X18D,0U,NTCSTS_PASSD,NODEBSTEP_CNT_U16);
		}
		
		if (TRUE == *Rte_Pim_FordMsg4B0Miss())
		{
			/** Start of MsgMissNtcDiagcCountTime ***/
			(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MsgMissNtcDiagcRefTi(),&TiSpan_Cnt_T_u32);
			/** End of MsgMissNtcDiagcCountTime ***/
		}
		else
		{
			/** Start of MsgMissDiagcResetTime ***/
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MsgMissNtcDiagcRefTi());
			TiSpan_Cnt_T_u32 = 0U;
			/** End of MsgMissDiagcResetTime ***/
		}	

		if (TiSpan_Cnt_T_u32 > MsgMissNtcDiagcTiThd_Cnt_T_u32)
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X18D,0U,NTCSTS_FAILD,NODEBSTEP_CNT_U16);
		}
		
		/*** End of PerformDiagnosticNTC0x18D   ***/
    }	
	else
	{
		/*** Start of ResetNTC0x18DRelatedTimer ***/
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
		*Rte_Pim_MsgRxdNtcDiagcRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_MsgMissNtcDiagcRefTi() = GetRefTmr_Cnt_T_u32;
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X18D,0U,NTCSTS_PASSD,NODEBSTEP_CNT_U16);
		/*** End of ResetNTC0x18DRelatedTimer   ***/	
	}	
}

/*****************************************************************************************************************
  * Name         :  SetNtc18E
  * Description  :  Implementation Subsystem of 'SetNTC' Subsystem
  * Input        :  FeatCdn_Cnt_T_logl,
  *                 
  *					MsgFltNtcDiagcTiThd_Cnt_T_u32,
  *				    FordVehYawStabyRaw_Cnt_T_u16
  * Output       :  None 
  * Usage Notes  :  None
*****************************************************************************************************************/	 
static FUNC(void, FordMsg4B0BusHiSpd_CODE)SetNtc18E(VAR(boolean, AUTOMATIC) FeatCdn_Cnt_T_logl,
													   VAR(boolean, AUTOMATIC) CanDtcInhbEna_Cnt_T_logl,
													   VAR(uint32, AUTOMATIC)  MsgFltNtcDiagcTiThd_Cnt_T_u32,
													   VAR(uint16, AUTOMATIC)  FordVehYawStabyRaw_Cnt_T_u16)
													
	
{	
    VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	VAR(uint32, AUTOMATIC)  MsgNoDataExistNtcDiagcElpdTi_Cnt_T_u32;
	VAR(uint32, AUTOMATIC)  MsgFltNtcDiagcElpdTiVal_Cnt_T_u32;
	VAR(uint32, AUTOMATIC)  GetRefTmr_Cnt_T_u32;
	
	if ((FALSE == *Rte_Pim_FordMsg4B0Miss()) &&
	    (TRUE == FeatCdn_Cnt_T_logl) &&
	    (TRUE == CanDtcInhbEna_Cnt_T_logl))
    {
		/*** Start of PerformDiagnostic0x18E ***/
		if (FordVehYawStabyRaw_Cnt_T_u16 < MSGNODATAEXIST_CNT_U16)
		{
			/** Start of MsgVldNtcDiagcCountTime ***/
			(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MsgVldNtcDiagcRefTi(),&TiSpan_Cnt_T_u32);
			/** End of MsgVldNtcDiagcCountTime ***/
		}
		else
		{
			/** Start of MsgVldNtcDiagcResetTime ***/
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MsgVldNtcDiagcRefTi());
			TiSpan_Cnt_T_u32 = 0U;
			/** End of MsgVldNtcDiagcResetTime ***/
		}	

		if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X18E,0U,NTCSTS_PASSD,NODEBSTEP_CNT_U16);
		}
		
		if (MSGNODATAEXIST_CNT_U16 == FordVehYawStabyRaw_Cnt_T_u16)
		{
			/** Start of MsgNoDataExistNtcDiagcCountTime ***/
			(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MsgNoDataExistNtcDiagcRefTi(),&MsgNoDataExistNtcDiagcElpdTi_Cnt_T_u32);
			/** End of MsgNoDataExistNtcDiagcCountTime ***/
		}
		else
		{
			/** Start of MsgNoDataExistNtcDiagcResetTime ***/
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MsgNoDataExistNtcDiagcRefTi());
			MsgNoDataExistNtcDiagcElpdTi_Cnt_T_u32 = 0U;
			/** End of MsgNoDataExistNtcDiagcResetTime ***/
		}	
		
		if (MSGFLT_CNT_U16 == FordVehYawStabyRaw_Cnt_T_u16)
		{
			/** Start of MsgFltNtcDiagcCountTime ***/
			(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MsgFltNtcDiagcRefTi(),&MsgFltNtcDiagcElpdTiVal_Cnt_T_u32);
			/** End of MsgFltNtcDiagcCountTime ***/
		}
		else
		{
			/** Start of MsgFltNtcDiagcResetTime ***/
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MsgFltNtcDiagcRefTi());
			MsgFltNtcDiagcElpdTiVal_Cnt_T_u32 = 0U;
			/** End of MsgFltNtcDiagcResetTime ***/
		}	
		
		if ((MsgNoDataExistNtcDiagcElpdTi_Cnt_T_u32 >  MsgFltNtcDiagcTiThd_Cnt_T_u32) ||
		    (MsgFltNtcDiagcElpdTiVal_Cnt_T_u32 >  MsgFltNtcDiagcTiThd_Cnt_T_u32))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X18E,0U,NTCSTS_FAILD,NODEBSTEP_CNT_U16);
		}		
		/*** End of PerformDiagnostic0x18E ***/
	}
	else
	{
		/*** Start of ResetNTC0x18ERelatedTimer ***/
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
		*Rte_Pim_MsgVldNtcDiagcRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_MsgFltNtcDiagcRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_MsgNoDataExistNtcDiagcRefTi() = GetRefTmr_Cnt_T_u32;
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X18E,0U,NTCSTS_PASSD,NODEBSTEP_CNT_U16);
		/*** End of ResetNTC0x18ERelatedTimer ***/
	}	
}

/*****************************************************************************************************************
  * Name         :  MsgVldChk
  * Description  :  Implementation of 'MsgVldChk' Subsystem
  * Input        :  MsgVld_Cnt_T_logl
  * Output       :  MsgVldFlg_Cnt_T_logl 
  * Usage Notes  :  None
*****************************************************************************************************************/	 
static FUNC(boolean, FordMsg4B0BusHiSpd_CODE)MsgVldChk(VAR(boolean, AUTOMATIC) MsgVld_Cnt_T_logl)
{

	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	VAR(boolean, AUTOMATIC) MsgVldFlg_Cnt_T_logl;
	
	/*** Start of MsgVldChk ***/
	if (TRUE == MsgVld_Cnt_T_logl)
	{
		/** Start of MsgVldCountTime ***/
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MsgVldRefTi(),&TiSpan_Cnt_T_u32);
		/** End of MsgVldCountTime ***/
	}
	else
	{
		/** Start of MsgVldResetTime ***/
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MsgVldRefTi());
		TiSpan_Cnt_T_u32 = 0U;
		/** End of MsgVldResetTime ***/
	}
	
	if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg4B0BusHiSpdMsgVldTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		MsgVldFlg_Cnt_T_logl = TRUE;
	}
	else
	{
		MsgVldFlg_Cnt_T_logl = FALSE;
	}
	
	return MsgVldFlg_Cnt_T_logl;
	/*** End of MsgVldChk ***/
}	

/*****************************************************************************************************************
  * Name         :  MsgMissChk
  * Description  :  Implementation of 'MsgMissChk' Subsystem
  * Input        :  None
  * Output       :  MsgNotRxdFlg_Cnt_T_logl 
  * Usage Notes  :  None
*****************************************************************************************************************/	 
static FUNC(boolean, FordMsg4B0BusHiSpd_CODE)MsgMissChk(void)
{			
    VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	VAR(boolean, AUTOMATIC) MsgNotRxdFlg_Cnt_T_logl;
	
	/*** Start of MsgMissChk ***/
	if (TRUE == *Rte_Pim_FordMsg4B0Miss())
	{
		/** Start of MsgNotRxdCountTime ***/
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MsgNotRxdRefTi(),&TiSpan_Cnt_T_u32);
		/** End of MsgNotRxdCountTime ***/
	}
	else
	{
		/** Start of MsgNotRxdResetTime ***/
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MsgNotRxdRefTi());
		TiSpan_Cnt_T_u32 = 0U;
		/** End of MsgNotRxdResetTime ***/
	}
	
	if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg4B0BusHiSpdMsgMissTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		MsgNotRxdFlg_Cnt_T_logl = TRUE;
	}
	else
	{
		MsgNotRxdFlg_Cnt_T_logl = FALSE;
	}
	return MsgNotRxdFlg_Cnt_T_logl;
	/*** End of MsgMissChk ***/
}
	
/*****************************************************************************************************************
  * Name         :  MsgNoDataExistChk
  * Description  :  Implementation of 'MsgNoDataExistChk' Subsystem
  * Input        :  FordVehYawStabyRaw_Cnt_T_u16
  * Output       :  MsgNoDataExistFlg_Cnt_T_logl 
  * Usage Notes  :  None
*****************************************************************************************************************/	 
static FUNC(boolean, FordMsg4B0BusHiSpd_CODE)MsgNoDataExistChk(VAR(uint16, AUTOMATIC) FordVehYawStabyRaw_Cnt_T_u16)
{		
	VAR(boolean, AUTOMATIC) MsgNoDataExistFlg_Cnt_T_logl;
	
	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	
	/*** Start of MsgNoDataExistChk ***/
	if (MSGNODATAEXIST_CNT_U16 == FordVehYawStabyRaw_Cnt_T_u16)
	{
		/** Start of MsgNoDataExistCountTime ***/
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MsgNoDataExistRefTi(),&TiSpan_Cnt_T_u32);
		/** End of MsgNoDataExistCountTime ***/
	}
	else
	{
		/** Start of MsgNoDataExistResetTime ***/
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MsgNoDataExistRefTi());
		TiSpan_Cnt_T_u32 = 0U;
		/** End of MsgNoDataExistResetTime ***/
	}	
	
	if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg4B0BusHiSpdMsgFltTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		MsgNoDataExistFlg_Cnt_T_logl = TRUE;
	}
	else
	{
		MsgNoDataExistFlg_Cnt_T_logl = FALSE;
	}
	
	return MsgNoDataExistFlg_Cnt_T_logl;
	/*** End of MsgNoDataExistChk ***/
}

/*****************************************************************************************************************
  * Name         :  MsgFltChk
  * Description  :  Implementation of 'MsgFltChk' Subsystem
  * Input        :  FordVehYawStabyRaw_Cnt_T_u16
  * Output       :  MsgFltFlg_Cnt_T_logl 
  * Usage Notes  :  None
*****************************************************************************************************************/	 													  
static FUNC(boolean, FordMsg4B0BusHiSpd_CODE)MsgFltChk(VAR(uint16, AUTOMATIC) FordVehYawStabyRaw_Cnt_T_u16)
{	

	VAR(boolean, AUTOMATIC) MsgFltFlg_Cnt_T_logl;
	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	
	/*** Start of MsgFltChk ***/
	if (MSGFLT_CNT_U16 == FordVehYawStabyRaw_Cnt_T_u16)
	{
		/** Start of MsgFltCountTime ***/
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MsgFltRefTi(),&TiSpan_Cnt_T_u32);
		/** End of MsgFltCountTime ***/
	}
	else
	{
		/** Start of MsgFltResetTime ***/
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MsgFltRefTi());
		TiSpan_Cnt_T_u32 = 0U;
		/** End of MsgFltResetTime ***/
	}
	
	if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg4B0BusHiSpdMsgFltTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16)) 
	{
		MsgFltFlg_Cnt_T_logl = TRUE;
	}
	else
	{
		MsgFltFlg_Cnt_T_logl = FALSE;
	}
	
	return MsgFltFlg_Cnt_T_logl;
	/*** End of MsgFltChk ***/
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
