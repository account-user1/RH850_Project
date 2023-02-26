/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CustDiag.c
 *        Config:  C:/Users/gz324f/Desktop/working/component/Ford003A_CustDiag_Impl/tools/Component.dpa
 *     SW-C Type:  CustDiag
 *  Generated at:  Tue May  8 11:50:43 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CustDiag>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/***********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name: CustDiag.c
* Module Description: Rte Customer Diagnostic Service handler
* Project           : Ford T3T6
* Author            : Xin Liu
************************************************************************************************************************
* Version Control:
* %version:         16 %
* %derived_by:      gz324f %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 02/01/18  1        XL        Initial creation for customer diagnostic services and flash request          EA4#20166
* 02/01/18  2        XL        Added temporary hard reset handler and DIDs                                  EA4#20166
* 02/04/18  3        XL        Updated DE DIDs                                                              EA4#20166
* 02/07/18  4        XL        Added prototype for remaining DIDs                                           EA4#20493
* 02/14/18  5        HM        Implemented DIDs 0x330C, 0xD117, 0xDD00, 0xEE07                              EA4#20619
* 02/14/18  6        XL        Updated DID 330C D117 DD00                                                   EA4#20166
* 02/16/18  7        BDO       Updated default action for FlashProgRequest ECUIdn check                     EA4#20685
* 02/16/18  8        XL        Updated DID                                                                  EA4#20166
* 02/20/18  9        XL        Updated DID                                                                  EA4#20166
* 02/20/18  10       XL        Updated Routine response                                                     EA4#20166
* 02/22/18  11       XL        Updated DID                                                                  EA4#20166
* 02/27/18  12       XL        Updated DID F188 Ford part number                                            EA4#21093
* 03/13/18  13       XL        Updated DID F188 Ford part number                                            EA4#21616
* 03/22/18  14       XL        Moved DID F188 Ford Part Number to FordHeader.c                              EA4#21938
* 03/29/18  15       XL        Updated for diagnostic service over IMC                                      EA4#22224
* 05/03/18  16       XL        Updated 330C, DE01, EE05                                                     EA4#22836
***********************************************************************************************************************/

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
 * BswM_BswMEcuResetMod
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_ConfirmationStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_NegativeResponseCodeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_OpStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * FordEpsSysSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * ImcArbnRxSts1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
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
 * s23pm8
 *   sint32 represents integers with a minimum value of -2147483648 and a maximum 
 *      value of 2147483647. The order-relation on sint32 is: x < y if y - x is
 *      positive. sint32 has a lexical representation consisting of an optional sign 
 *      allowed by a finite-length sequence of decimal digits (#x30-#x39). If the 
 *      sign is omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12688778, +10000, 250098675.
 *
 *
 * Port Prototypes:
 * ================
 * FordInpTqRaw
 *   Processed value of Input Torque Raw
 *
 *********************************************************************************************************************/

#include "Rte_CustDiag.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include <string.h>
#include "Dcm.h"
#include "NxtrFixdPt.h"
#include "NxtrMcuSuprtLib.h"
#include "CDD_ExcpnHndlg.h"
#include "ImcArbn.h"
#include "DiagcMgr_Cfg.h"
#include "Dem.h"
#include "SerlComFct.h"
#include "CustDiag.h"
#include "NxtrSwIds.h"
#include "FordHeader.h"

#define ECUID1_CNT_U08					1U
#define ECUID2_CNT_U08					2U

#define CUSTDIAGCFLSPROGREQ_CNT_U08		1U
#define CUSTDIAGCHARDRSTREQ_CNT_U08		2U
#define REQDELAYCNT_CNT_U08				100U
#define HARDRSTDELAYCNT_CNT_U08			10U
#define CONFIRMDELAYCNT_CNT_U08			4U

#define VEHSPDLOQLYTHD_KPH_F32			10.0f

#define BYTECONFIGURED_CNT_U08			0xFFU
#define DIDDE00PARAM_CNT_U08			0x01U
#define DIDDE01PARAM_CNT_U08			0x02U
#define DIDDE02PARAM_CNT_U08			0x04U
#define DIDDE03PARAM_CNT_U08			0x08U

STATIC FUNC(void, AUTOMATIC) UpdateDidDE00(void);
STATIC FUNC(void, AUTOMATIC) UpdateDidDE01(void);
STATIC FUNC(void, AUTOMATIC) UpdateDidDE02(void);
STATIC FUNC(void, AUTOMATIC) UpdateDidDE03(void);
STATIC FUNC(boolean, AUTOMATIC) CheckEolByte(VAR(uint8, AUTOMATIC)EolByte, VAR(uint8, AUTOMATIC)Parameter);
STATIC FUNC(boolean, AUTOMATIC) CompareVin(VAR(Ary1D_u08_17, AUTOMATIC) Vin1, VAR(Ary1D_u08_17, AUTOMATIC) Vin2);

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
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * s23pm8: Integer in interval [-2147483648...2147483647]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * sint32: Integer in interval [-2147483648...2147483647] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * BswM_BswMEcuResetMod: Enumeration of integer in interval [0...255] with enumerators
 *   EcuResetDisabled (0U)
 *   EcuResetEnabled (1U)
 *   EcuResetStarted (2U)
 * Dcm_ConfirmationStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_RES_POS_OK (0U)
 *   DCM_RES_POS_NOT_OK (1U)
 *   DCM_RES_NEG_OK (2U)
 *   DCM_RES_NEG_NOT_OK (3U)
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_E_POSITIVERESPONSE (0U)
 *   DCM_E_GENERALREJECT (16U)
 *   DCM_E_SERVICENOTSUPPORTED (17U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTED (18U)
 *   DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (19U)
 *   DCM_E_RESPONSETOOLONG (20U)
 *   DCM_E_BUSYREPEATREQUEST (33U)
 *   DCM_E_CONDITIONSNOTCORRECT (34U)
 *   DCM_E_REQUESTSEQUENCEERROR (36U)
 *   DCM_E_NORESPONSEFROMSUBNETCOMPONENT (37U)
 *   DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION (38U)
 *   DCM_E_REQUESTOUTOFRANGE (49U)
 *   DCM_E_SECURITYACCESSDENIED (51U)
 *   DCM_E_INVALIDKEY (53U)
 *   DCM_E_EXCEEDNUMBEROFATTEMPTS (54U)
 *   DCM_E_REQUIREDTIMEDELAYNOTEXPIRED (55U)
 *   DCM_E_UPLOADDOWNLOADNOTACCEPTED (112U)
 *   DCM_E_TRANSFERDATASUSPENDED (113U)
 *   DCM_E_GENERALPROGRAMMINGFAILURE (114U)
 *   DCM_E_WRONGBLOCKSEQUENCECOUNTER (115U)
 *   DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING (120U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
 *   DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION (127U)
 *   DCM_E_RPMTOOHIGH (129U)
 *   DCM_E_RPMTOOLOW (130U)
 *   DCM_E_ENGINEISRUNNING (131U)
 *   DCM_E_ENGINEISNOTRUNNING (132U)
 *   DCM_E_ENGINERUNTIMETOOLOW (133U)
 *   DCM_E_TEMPERATURETOOHIGH (134U)
 *   DCM_E_TEMPERATURETOOLOW (135U)
 *   DCM_E_VEHICLESPEEDTOOHIGH (136U)
 *   DCM_E_VEHICLESPEEDTOOLOW (137U)
 *   DCM_E_THROTTLE_PEDALTOOHIGH (138U)
 *   DCM_E_THROTTLE_PEDALTOOLOW (139U)
 *   DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
 *   DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
 *   DCM_E_BRAKESWITCH_NOTCLOSED (143U)
 *   DCM_E_SHIFTERLEVERNOTINPARK (144U)
 *   DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
 *   DCM_E_VOLTAGETOOHIGH (146U)
 *   DCM_E_VOLTAGETOOLOW (147U)
 *   DCM_E_VMSCNC_0 (240U)
 *   DCM_E_VMSCNC_1 (241U)
 *   DCM_E_VMSCNC_2 (242U)
 *   DCM_E_VMSCNC_3 (243U)
 *   DCM_E_VMSCNC_4 (244U)
 *   DCM_E_VMSCNC_5 (245U)
 *   DCM_E_VMSCNC_6 (246U)
 *   DCM_E_VMSCNC_7 (247U)
 *   DCM_E_VMSCNC_8 (248U)
 *   DCM_E_VMSCNC_9 (249U)
 *   DCM_E_VMSCNC_A (250U)
 *   DCM_E_VMSCNC_B (251U)
 *   DCM_E_VMSCNC_C (252U)
 *   DCM_E_VMSCNC_D (253U)
 *   DCM_E_VMSCNC_E (254U)
 * Dcm_OpStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_INITIAL (0U)
 *   DCM_PENDING (1U)
 *   DCM_CANCEL (2U)
 *   DCM_FORCE_RCRRP_OK (3U)
 *   DCM_FORCE_RCRRP_NOT_OK (64U)
 * FordEpsSysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   FORDEPSSYSST_EPS_ININ (0U)
 *   FORDEPSSYSST_EPS_NORM_OP_LIMD_ASSI (1U)
 *   FORDEPSSYSST_EPS_NORM_OP_FULL_ASSI (2U)
 *   FORDEPSSYSST_EPS_SYST_FAILR_LIMPHOME (3U)
 *   FORDEPSSYSST_EPS_SYST_FAILR_LIMPASIDE (4U)
 *   FORDEPSSYSST_EPS_SYST_FAILR_RAMPOUT (5U)
 *   FORDEPSSYSST_EPS_SYST_FAILR_ASSISTOFF (6U)
 *   FORDEPSSYSST_EPS_SHTDWN (7U)
 *   FORDEPSSYSST_EPS_PWRDWN (8U)
 * ImcArbnRxSts1: Enumeration of integer in interval [0...255] with enumerators
 *   IMCARBNRXSTS_NODATA (0U)
 *   IMCARBNRXSTS_VLD (1U)
 *   IMCARBNRXSTS_INVLD (2U)
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
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 *
 * Array Types:
 * ============
 * Ary1D_u08_17: Array with 17 element(s) of type uint8
 * Ary1D_u8_10: Array with 10 element(s) of type uint8
 * Ary1D_u8_16: Array with 16 element(s) of type uint8
 * Ary1D_u8_2: Array with 2 element(s) of type uint8
 * Ary1D_u8_20: Array with 20 element(s) of type uint8
 * Ary1D_u8_24: Array with 24 element(s) of type uint8
 * Ary1D_u8_3: Array with 3 element(s) of type uint8
 * Ary1D_u8_4: Array with 4 element(s) of type uint8
 * Ary1D_u8_40: Array with 40 element(s) of type uint8
 * Ary1D_u8_48: Array with 48 element(s) of type uint8
 * Ary1D_u8_64: Array with 64 element(s) of type uint8
 * Dcm_Data1028ByteType: Array with 1028 element(s) of type uint8
 * Dcm_Data10ByteType: Array with 10 element(s) of type uint8
 * Dcm_Data11ByteType: Array with 11 element(s) of type uint8
 * Dcm_Data159ByteType: Array with 159 element(s) of type uint8
 * Dcm_Data16ByteType: Array with 16 element(s) of type uint8
 * Dcm_Data1ByteType: Array with 1 element(s) of type uint8
 * Dcm_Data20ByteType: Array with 20 element(s) of type uint8
 * Dcm_Data24ByteType: Array with 24 element(s) of type uint8
 * Dcm_Data25ByteType: Array with 25 element(s) of type uint8
 * Dcm_Data2ByteType: Array with 2 element(s) of type uint8
 * Dcm_Data3ByteType: Array with 3 element(s) of type uint8
 * Dcm_Data40ByteType: Array with 40 element(s) of type uint8
 * Dcm_Data4ByteType: Array with 4 element(s) of type uint8
 * Dcm_Data64ByteType: Array with 64 element(s) of type uint8
 * Dcm_Data7ByteType: Array with 7 element(s) of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_MaxCurr(void)
 *   float32 *Rte_Pim_MaxTemp(void)
 *   float32 *Rte_Pim_MinVltg(void)
 *   uint8 *Rte_Pim_ClrDiagcReq(void)
 *   uint8 *Rte_Pim_DidEE01(void)
 *   uint8 *Rte_Pim_DidEE02(void)
 *   uint8 *Rte_Pim_DidEE41(void)
 *   uint8 *Rte_Pim_DidEED0(void)
 *   uint8 *Rte_Pim_DidF162(void)
 *   uint8 *Rte_Pim_DidF163(void)
 *   uint8 *Rte_Pim_EcuId(void)
 *   BswM_BswMEcuResetMod *Rte_Pim_EcuResetMode(void)
 *   uint8 *Rte_Pim_EolByteNTCPara(void)
 *   uint8 *Rte_Pim_ReqDelayCnt(void)
 *   uint8 *Rte_Pim_RstReq(void)
 *   uint8 *Rte_Pim_RstStrt(void)
 *   uint8 *Rte_Pim_RtnDC00Req(void)
 *   boolean *Rte_Pim_Did630FChk(void)
 *   boolean *Rte_Pim_Rtn0202Strt(void)
 *   uint8 *Rte_Pim_Did205A(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2
 *   uint8 *Rte_Pim_Did205B(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2
 *   uint8 *Rte_Pim_Did3003(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_Pim_Did301A(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2
 *   uint8 *Rte_Pim_Did630F(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_Pim_DidDE00(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_Pim_DidDE01(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_Pim_DidDE02(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_Pim_DidDE03(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_64
 *   uint8 *Rte_Pim_DidDE04(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2
 *   uint8 *Rte_Pim_DidDE05(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_Pim_DidEE00(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_3
 *   uint8 *Rte_Pim_DidEE21(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_20
 *   uint8 *Rte_Pim_DidEE22(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_40
 *   uint8 *Rte_Pim_DidEE23(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_40
 *   uint8 *Rte_Pim_DidEE40(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_3
 *   uint8 *Rte_Pim_DidEE81(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_Pim_DidEE82(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_Pim_DidEE83(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_Pim_DidEE84(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_Pim_DidEE85(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_Pim_DidEE86(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_Pim_DidEE87(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_Pim_DidEE88(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_Pim_DidF110(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_Pim_DidF111(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_Pim_DidF113(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_Pim_DidF15F(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_10
 *   uint8 *Rte_Pim_DidF166(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_Pim_DidF18A(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_Pim_DidF18C(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_16
 *   uint8 *Rte_Pim_DidF190(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   uint8 Rte_CData_DidEE01Dft(void)
 *   uint8 Rte_CData_DidEE02Dft(void)
 *   uint8 Rte_CData_DidEE41Dft(void)
 *   uint8 Rte_CData_DidEED0Dft(void)
 *   uint8 Rte_CData_DidF162Dft(void)
 *   uint8 Rte_CData_DidF163Dft(void)
 *   boolean Rte_CData_Did630FChkDft(void)
 *   uint8 *Rte_CData_Did205ADft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2
 *   uint8 *Rte_CData_Did205BDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2
 *   uint8 *Rte_CData_Did3003Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_CData_Did301ADft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2
 *   uint8 *Rte_CData_Did630FDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_CData_DidDE00Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_CData_DidDE01Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_CData_DidDE02Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_CData_DidDE03Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_64
 *   uint8 *Rte_CData_DidDE04Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_2
 *   uint8 *Rte_CData_DidDE05Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_CData_DidEE00Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_3
 *   uint8 *Rte_CData_DidEE21Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_20
 *   uint8 *Rte_CData_DidEE22Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_40
 *   uint8 *Rte_CData_DidEE23Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_40
 *   uint8 *Rte_CData_DidEE40Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_3
 *   uint8 *Rte_CData_DidEE81Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_CData_DidEE82Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_CData_DidEE83Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_CData_DidEE84Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_CData_DidEE85Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_CData_DidEE86Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_CData_DidEE87Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_CData_DidEE88Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_CData_DidF110Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_CData_DidF111Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_CData_DidF113Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_CData_DidF15FDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_10
 *   uint8 *Rte_CData_DidF166Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_4
 *   uint8 *Rte_CData_DidF18ADft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *   uint8 *Rte_CData_DidF18CDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_16
 *   uint8 *Rte_CData_DidF190Dft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_24
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 *Rte_Prm_NxtrCalIdsCal0DevlpDesc_Ary1D(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_48
 *   uint8 *Rte_Prm_NxtrCalIdsCal1DevlpDesc_Ary1D(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_48
 *
 *********************************************************************************************************************/


#define CustDiag_START_SEC_CODE
#include "CustDiag_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CustDiagInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EcuId_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordAppldFinalMotTq_Val(s23pm8 *data)
 *   Std_ReturnType Rte_Read_FordCmpdHwPosn_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordEpsCurr_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEpsSysSt_Val(FordEpsSysSt1 *data)
 *   Std_ReturnType Rte_Read_FordEpsVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordInpTqRaw_Val(sint16 *data)
 *   Std_ReturnType Rte_Read_FordMaxBattCurr_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordMinBattVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehGlbRealTi_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehIdnNr_Ary1D(uint8 *data)
 *     Argument data: uint8* is of type Ary1D_u08_17
 *   Std_ReturnType Rte_Read_FordVehOdom_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehSpdLoQly_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehSpdLoQlyVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehSteerPinionAgOffs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwVelToSerlCom_Val(float32 *data)
 *   Std_ReturnType Rte_Read_IgnCntr_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ClrDiagcReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CustXcpEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_RstReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RtnDC00Req_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_ClrAllDiagc_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ClrLtchCntrData_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_Did205A_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_Did205A_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_Did205B_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_Did205B_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_Did3003_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_Did3003_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_Did301A_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_Did301A_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_Did630F_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_Did630F_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_Did630FChk_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_Did630FChk_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidDE00_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidDE00_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidDE01_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidDE01_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidDE02_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidDE02_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidDE03_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidDE03_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidDE04_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidDE04_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidDE05_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidDE05_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE00_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE00_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE01_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE01_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE02_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE02_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE21_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE21_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE22_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE22_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE23_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE23_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE40_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE40_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE41_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE41_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE81_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE81_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE82_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE82_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE83_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE83_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE84_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE84_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE85_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE85_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE86_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE86_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE87_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE87_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE88_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEE88_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEED0_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidEED0_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF110_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF110_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF111_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF111_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF113_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF113_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF15F_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF15F_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF162_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF162_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF163_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF163_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF166_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF166_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF18A_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF18A_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF18C_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF18C_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF190_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_DidF190_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CustDiagInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CustDiag_CODE) CustDiagInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CustDiagInit1
 *********************************************************************************************************************/

	Rte_Read_EcuId_Val(Rte_Pim_EcuId());

	/* Preset min voltage to Level 1 value */
	*Rte_Pim_MinVltg() = 24.0f;

	UpdateDidDE00();
	UpdateDidDE01();
	UpdateDidDE02();
	UpdateDidDE03();

	/* NTC for U2100-00 */
	if (ECUID1_CNT_U08 == (*Rte_Pim_EcuId()))
	{
		if (0U != *Rte_Pim_EolByteNTCPara())
		{
			(void)Rte_Call_SetNtcSts_Oper( NTCNR_0X1F5, *Rte_Pim_EolByteNTCPara(), NTCSTS_FAILD, 0U );
		}
		else
		{
			(void)Rte_Call_SetNtcSts_Oper( NTCNR_0X1F5, 0U, NTCSTS_PASSD, 0U );
		}
	}
	else
	{	/* ECU 2 will never set this fault since it won't handle the service, instead it will directly take value from ECU 1 */
		(void)Rte_Call_SetNtcSts_Oper( NTCNR_0X1F5, 0U, NTCSTS_PASSD, 0U );
	}

	/* EE01 XCP enable */
	/* TODO add Ford tunning mode check */
	if (ECUID1_CNT_U08 == (*Rte_Pim_EcuId()))
	{
		if (0U != *Rte_Pim_DidEE01())
		{
			(void)Rte_Write_CustXcpEna_Logl(TRUE);
		}
		else
		{
			(void)Rte_Write_CustXcpEna_Logl(FALSE);
		}
	}
	else
	{
		(void)Rte_Write_CustXcpEna_Logl(FALSE);
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CustDiagPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordEpsCurr_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordEpsVltg_Val(float32 *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CustDiagPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CustDiag_CODE) CustDiagPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CustDiagPer1
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) EcuTFild_DegC_T_f32;
	VAR(float32, AUTOMATIC) FordEpsCurr_A_T_f32;
	VAR(float32, AUTOMATIC) FordEpsVltg_V_T_f32;

	/* TODO determine if this is needed or some components are already providing */
	/* EE21 max current */
	(void)Rte_Read_FordEpsCurr_Val(&FordEpsCurr_A_T_f32);
	*Rte_Pim_MaxCurr() = ((FordEpsCurr_A_T_f32 > *Rte_Pim_MaxCurr()) ? (FordEpsCurr_A_T_f32) : (*Rte_Pim_MaxCurr()));

	/* EE22 min voltage */
	(void)Rte_Read_FordEpsVltg_Val(&FordEpsVltg_V_T_f32);
	*Rte_Pim_MinVltg() =  ((FordEpsVltg_V_T_f32 < *Rte_Pim_MinVltg()) ? (FordEpsVltg_V_T_f32) : (*Rte_Pim_MinVltg()));

	/* EE23 max temperature */
	(void)Rte_Read_EcuTFild_Val(&EcuTFild_DegC_T_f32);
	*Rte_Pim_MaxTemp() = ((EcuTFild_DegC_T_f32 > *Rte_Pim_MaxTemp()) ? (EcuTFild_DegC_T_f32) : (*Rte_Pim_MaxTemp()));

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CustDiagPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod(uint8 mode)
 *   Modes of Rte_ModeType_BswMEcuResetMod:
 *   - RTE_MODE_BswMEcuResetMod_EcuResetDisabled
 *   - RTE_MODE_BswMEcuResetMod_EcuResetEnabled
 *   - RTE_MODE_BswMEcuResetMod_EcuResetStarted
 *   - RTE_TRANSITION_BswMEcuResetMod
 *   uint8 Rte_Mode_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod(void)
 *   Modes of Rte_ModeType_BswMEcuResetMod:
 *   - RTE_MODE_BswMEcuResetMod_EcuResetDisabled
 *   - RTE_MODE_BswMEcuResetMod_EcuResetEnabled
 *   - RTE_MODE_BswMEcuResetMod_EcuResetStarted
 *   - RTE_TRANSITION_BswMEcuResetMod
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetSigImcData_logl_Oper(uint16 SigId_Arg, boolean *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetSigImcData_u08_Oper(uint16 SigId_Arg, uint8 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_u08_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CustDiagPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CustDiag_CODE) CustDiagPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CustDiagPer2
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) RstReq_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) ClrDiagcReq_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) RtnDC00Req_Cnt_T_u08;
	VAR(float32, AUTOMATIC) FordVehSpdLoQly_Kph_T_f32;
	VAR(boolean, AUTOMATIC) FordVehSpdLoQlyVld_Cnt_T_logl;
	VAR(uint8, AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08;
	VAR(ImcArbnRxSts1, AUTOMATIC) ImcDataSts_Cnt_T_enum;

	/* Handle service request */
	if (ECUID1_CNT_U08 == *Rte_Pim_EcuId())
	{
		if (CUSTDIAGCHARDRSTREQ_CNT_U08 == *Rte_Pim_RstReq())
		{	/* hard reset requested */
			if (CUSTDIAGCHARDRSTREQ_CNT_U08 == *Rte_Pim_RstStrt())
			{	/* confirmation received and positive response sent */
				/* TODO this will reset right away without proper shutdown. Revise when shutdown process is finished */
				NxtrSwRst(P1MCDIAGC_HARDRST, (uint32)0u);
			}	/* else do nothing and keep waiting */
		}
		else if (CUSTDIAGCFLSPROGREQ_CNT_U08 == *Rte_Pim_RstReq())
		{	/* programming session requested */
			(void)Rte_Call_GetSigImcData_u08_Oper(IMCARBN_CUSTDIAGCRSTREQ_CNT_U16, &RstReq_Cnt_T_u08, &ImcDataSts_Cnt_T_enum);
		    /* TODO: Ignoring IMC status check for now */
			if ((CUSTDIAGCFLSPROGREQ_CNT_U08 == RstReq_Cnt_T_u08) || (0U == *Rte_Pim_ReqDelayCnt() ))
			{	/* if timed out, reset to bootloader anyway since bootloader will reject the flash request if condition not correct */
				/* TODO this will reset right away without proper shutdown. Revise when shutdown process is finished */
				NxtrSwRst(P1MCDIAGC_FLSPROGMREQ, (uint32)0u);
			}
			if (*Rte_Pim_ReqDelayCnt() > 0U)
			{
				(*Rte_Pim_ReqDelayCnt())--;
			}
	    }
		else
		{
			/* do nothing */
		}
	}
	else if (ECUID2_CNT_U08 == *Rte_Pim_EcuId())
	{
		/* programming/reset request */
		(void)Rte_Call_GetSigImcData_u08_Oper(IMCARBN_CUSTDIAGCRSTREQ_CNT_U16, &RstReq_Cnt_T_u08, &ImcDataSts_Cnt_T_enum);

	    /* Check for Flash programming session request from ECU1 */
	    /* TODO: Ignoring IMC status check for now */
		if ((0U == *Rte_Pim_RstStrt()) && (RstReq_Cnt_T_u08 != 0U))
	    {
	        (void)Rte_Write_RstReq_Val(RstReq_Cnt_T_u08);
	        *Rte_Pim_RstStrt() = RstReq_Cnt_T_u08;
	        *Rte_Pim_ReqDelayCnt() = CONFIRMDELAYCNT_CNT_U08;
	    }

	    /* Delay to allow for IMC data transfer before SW reset */
	    if (*Rte_Pim_RstStrt() != 0U)
	    {
			if(0U == *Rte_Pim_ReqDelayCnt())
			{
				if (CUSTDIAGCFLSPROGREQ_CNT_U08 == *Rte_Pim_RstStrt())
				{
					NxtrSwRst(P1MCDIAGC_FLSPROGMREQ, (uint32)0u);
				}
				else if (CUSTDIAGCHARDRSTREQ_CNT_U08 == *Rte_Pim_RstStrt())
				{
					NxtrSwRst(P1MCDIAGC_HARDRST, (uint32)0u);
				}
				else
				{
					/* we should never reach here */
				}

			}
			if (*Rte_Pim_ReqDelayCnt() > 0U)
			{
				(*Rte_Pim_ReqDelayCnt())--;
			}
	    }

	    /* Service 0x14 clear diagnostic request */
	    (void)Rte_Call_GetSigImcData_u08_Oper(IMCARBN_CUSTDIAGCCLRDIAGCREQ_CNT_U16, &ClrDiagcReq_Cnt_T_u08, &ImcDataSts_Cnt_T_enum);

	    if (*Rte_Pim_ClrDiagcReq() != ClrDiagcReq_Cnt_T_u08)
	    {	/* status flag toggled, meaning we got a new request */
	    	(void)Rte_Call_ClrAllDiagc_Oper();

	    	*Rte_Pim_ClrDiagcReq() = ClrDiagcReq_Cnt_T_u08;
	    	(void)Rte_Write_ClrDiagcReq_Val(*Rte_Pim_ClrDiagcReq());
	    }

	    /* routine DC00 request */
	    (void)Rte_Call_GetSigImcData_u08_Oper(IMCARBN_CUSTDIAGCCLRDIAGCREQ_CNT_U16, &RtnDC00Req_Cnt_T_u08, &ImcDataSts_Cnt_T_enum);

	    if (*Rte_Pim_RtnDC00Req() != RtnDC00Req_Cnt_T_u08)
	    {	/* status flag toggled, meaning we got a new request */
	    	(void)Rte_Call_ClrLtchCntrData_Oper();

	    	*Rte_Pim_RtnDC00Req() = RtnDC00Req_Cnt_T_u08;
	    	(void)Rte_Write_RtnDC00Req_Val(*Rte_Pim_RtnDC00Req());
	    }
	}
	else
	{
	    /* TODO:
	       Determine action if EcuId is INVALID. Default action is to reject the request, only added else case for clarity.
	       Final component design pending */
	}

	/* update mode port for ECU reset condition check */
	if (EcuResetStarted != (Rte_Mode_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod()))
	{
		(void)Rte_Read_FordEpsLifeCycMod_Val(&FordEpsLifeCycMod_Cnt_T_u08);
		(void)Rte_Read_FordVehSpdLoQly_Val(&FordVehSpdLoQly_Kph_T_f32);
		(void)Rte_Read_FordVehSpdLoQlyVld_Logl(&FordVehSpdLoQlyVld_Cnt_T_logl);

		if (((FordVehSpdLoQly_Kph_T_f32 < VEHSPDLOQLYTHD_KPH_F32) && (TRUE == FordVehSpdLoQlyVld_Cnt_T_logl))
				|| (1U == FordEpsLifeCycMod_Cnt_T_u08))
		{
			(void)Rte_Switch_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod(EcuResetEnabled);
		}
		else
		{
			(void)Rte_Switch_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod(EcuResetDisabled);
		}
	}


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CustDiagPer3
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_FordVehIdnNr_Ary1D(uint8 *data)
 *     Argument data: uint8* is of type Ary1D_u08_17
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordAbsPrsnt_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordActvNiblCtrlEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordActvParkAssiEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordActvRtnEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordAfsEquid_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordBrkPlsRejctnEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordDrvrSteerRcmdnEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordEngTqClass_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordEscPrsnt_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordLaneCentrAssiEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordLaneDprtrWarnEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordLaneKeepAssiEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordResrchFctEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordSelDrvModEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordSoftEndStopEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordSrvPullDriftCmpRstVal_Val(sint16 data)
 *   Std_ReturnType Rte_Write_FordStrtStopSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordTqSteerCmpEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordTrfcJamAssiEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordTrlrBackupAssi5WhlEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordTrlrBackupAssiEnad_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordTrlrBackupAssiTrigEnad_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetSigImcData_logl_Oper(uint16 SigId_Arg, boolean *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetSigImcData_u08_Oper(uint16 SigId_Arg, uint8 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_u08_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CustDiagPer3_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CustDiag_CODE) CustDiagPer3(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CustDiagPer3
 *********************************************************************************************************************/

	CONST(Ary1D_u08_17, AUTOMATIC) InvldVin1 = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
	CONST(Ary1D_u08_17, AUTOMATIC) InvldVin2 = {0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU};
	VAR(Ary1D_u08_17, AUTOMATIC) FordVehIdnNr_Cnt_T_u08;
	VAR(boolean, AUTOMATIC) FordAbsPrsnt_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordEscPrsnt_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordAfsEquid_Cnt_T_logl;
	VAR(uint8, AUTOMATIC) FordEngTqClass_Cnt_T_u08;
	VAR(boolean, AUTOMATIC) FordActvParkAssiEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordActvRtnEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordSoftEndStopEnad_Cnt_T_logl;
	VAR(uint8, AUTOMATIC) FordStrtStopSt_Cnt_T_u08;
	VAR(boolean, AUTOMATIC) FordDrvrSteerRcmdnEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordSelDrvModEnad_Cnt_T_logl;
	VAR(ImcArbnRxSts1, AUTOMATIC) ImcDataSts_Cnt_T_enum;


	/* NTC for U2100-00 */
	if (ECUID1_CNT_U08 == (*Rte_Pim_EcuId()))
	{
		if (0U != *Rte_Pim_EolByteNTCPara())
		{
			(void)Rte_Call_SetNtcSts_Oper( NTCNR_0X1F5, *Rte_Pim_EolByteNTCPara(), NTCSTS_FAILD, 0U );
		}
		else
		{
			(void)Rte_Call_SetNtcSts_Oper( NTCNR_0X1F5, 0U, NTCSTS_PASSD, 0U );
		}
	}
	else
	{	/* ECU 2 will never set this fault since it won't handle the service, instead it will directly take value from ECU 1 */
		(void)Rte_Call_SetNtcSts_Oper( NTCNR_0X1F5, 0U, NTCSTS_PASSD, 0U );
	}


	/* VIN */
	(void)Rte_Read_FordVehIdnNr_Ary1D(FordVehIdnNr_Cnt_T_u08);
	if ((FALSE == CompareVin(FordVehIdnNr_Cnt_T_u08, (uint8 *)InvldVin1)) && (FALSE == CompareVin(FordVehIdnNr_Cnt_T_u08, (uint8 *)InvldVin2)))
	{
		/* DID 630F First VIN */
		if (FALSE == *Rte_Pim_Did630FChk())
		{
			/* No VIN is saved */
			memcpy(Rte_Pim_Did630F(), FordVehIdnNr_Cnt_T_u08, sizeof(Ary1D_u08_17));
			*Rte_Pim_Did630FChk() = TRUE;
			(void)Rte_Call_Did630F_SetRamBlockStatus(TRUE);
			(void)Rte_Call_Did630FChk_SetRamBlockStatus(TRUE);
		}

		/* DID F190 Last VIN */
		memcpy(Rte_Pim_DidF190(), FordVehIdnNr_Cnt_T_u08, sizeof(Ary1D_u08_17));
		(void)Rte_Call_DidF190_SetRamBlockStatus(TRUE);
	}


	/* update DE00, DE02 for ECU 2 */
	if (ECUID2_CNT_U08 == (*Rte_Pim_EcuId()))
	{
		/* TODO: Ignoring IMC status check for now */
		/* DE00 */
		(void)Rte_Call_GetSigImcData_logl_Oper(IMCARBN_CUSTDIAGCFORDABSPRSNT_CNT_U16, &FordAbsPrsnt_Cnt_T_logl, &ImcDataSts_Cnt_T_enum);
		(void)Rte_Call_GetSigImcData_logl_Oper(IMCARBN_CUSTDIAGCFORDESCPRSNT_CNT_U16, &FordEscPrsnt_Cnt_T_logl, &ImcDataSts_Cnt_T_enum);
		if (TRUE == FordEscPrsnt_Cnt_T_logl)
		{
			Rte_Pim_DidDE00()[4] = 2U;
		}
		else if (TRUE == FordAbsPrsnt_Cnt_T_logl)
		{
			Rte_Pim_DidDE00()[4] = 1U;
		}
		else
		{
			Rte_Pim_DidDE00()[4] = 0U;
		}

		(void)Rte_Call_GetSigImcData_logl_Oper(IMCARBN_CUSTDIAGCFORDAFSEQUID_CNT_U16, &FordAfsEquid_Cnt_T_logl, &ImcDataSts_Cnt_T_enum);
		Rte_Pim_DidDE00()[5] = ((TRUE == FordAfsEquid_Cnt_T_logl)? BYTECONFIGURED_CNT_U08 : 0x00U);

		(void)Rte_Call_GetSigImcData_logl_Oper(IMCARBN_CUSTDIAGCFORDENGTQCLASS_CNT_U16, &FordEngTqClass_Cnt_T_u08, &ImcDataSts_Cnt_T_enum);
		Rte_Pim_DidDE00()[6] = FordEngTqClass_Cnt_T_u08;

		UpdateDidDE00();

		
		/* DE02 */
		(void)Rte_Call_GetSigImcData_logl_Oper(IMCARBN_CUSTDIAGCFORDACTVPARKASSIENAD_CNT_U16, &FordActvParkAssiEnad_Cnt_T_logl, &ImcDataSts_Cnt_T_enum);
		Rte_Pim_DidDE02()[1] = ((TRUE == FordActvParkAssiEnad_Cnt_T_logl)? BYTECONFIGURED_CNT_U08 : 0x00U);

		/* Byte 2: currently this is connected to RtnCmdDiagcDi so the logic needs to be reversed */
		(void)Rte_Call_GetSigImcData_logl_Oper(IMCARBN_CUSTDIAGCFORDACTVRTNENAD_CNT_U16, &FordActvRtnEnad_Cnt_T_logl, &ImcDataSts_Cnt_T_enum);
		Rte_Pim_DidDE02()[2] = ((FALSE == FordActvParkAssiEnad_Cnt_T_logl)? BYTECONFIGURED_CNT_U08 : 0x00U);

		(void)Rte_Call_GetSigImcData_logl_Oper(IMCARBN_CUSTDIAGCFORDSOFTENDSTOPENAD_CNT_U16, &FordSoftEndStopEnad_Cnt_T_logl, &ImcDataSts_Cnt_T_enum);
		Rte_Pim_DidDE02()[3] = ((TRUE == FordSoftEndStopEnad_Cnt_T_logl)? 0x01U : 0x00U);

		(void)Rte_Call_GetSigImcData_u08_Oper(IMCARBN_CUSTDIAGCFORDSTRTSTOPST_CNT_U16, &FordStrtStopSt_Cnt_T_u08, &ImcDataSts_Cnt_T_enum);
		Rte_Pim_DidDE02()[4] = FordStrtStopSt_Cnt_T_u08;

		(void)Rte_Call_GetSigImcData_logl_Oper(IMCARBN_CUSTDIAGCFORDDRVRSTEERRCMDNENAD_CNT_U16, &FordDrvrSteerRcmdnEnad_Cnt_T_logl, &ImcDataSts_Cnt_T_enum);
		Rte_Pim_DidDE02()[5] = ((TRUE == FordDrvrSteerRcmdnEnad_Cnt_T_logl)? BYTECONFIGURED_CNT_U08 : 0x00U);

		(void)Rte_Call_GetSigImcData_logl_Oper(IMCARBN_CUSTDIAGCFORDSELDRVMODENAD_CNT_U16, &FordSelDrvModEnad_Cnt_T_logl, &ImcDataSts_Cnt_T_enum);
		Rte_Pim_DidDE02()[6] = ((TRUE == FordSelDrvModEnad_Cnt_T_logl)? BYTECONFIGURED_CNT_U08 : 0x00U);
		
		UpdateDidDE02();
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Customer_DID_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_3003_Gear_Hardware_Part_Number>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_301A_Pull_Drift_Compensation_Value>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_301F_Steering_Pinion_Rotation_Speed>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_3020_Steering_Pinion_Angle>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_D100_Active_Diagnostic_Session>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_D111_ECU_Power_Supply_Voltage>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_D117_ECU_Internal_Temperature>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_D118_Motor_Current>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_DD00_Global_Real_Time>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_DD01_Total_Distance>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_DD09_Vehicle_Speed>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_DE00_VehicleData>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_DE01_FIHSwFeatureConfig>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_DE02_FeatureConfig>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_DE03_Enable_DisableDTCs>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_DE04_PDCResetValue>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_DE05_Unused>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE00_DevMessConfig>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE01_XCP_Enable_Disable>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE02_Assist_On_Off>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE03_IgnCycleCounter>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE04_IgnOnTime>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE05_FinalMotTq>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE06_VINChanged>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE07_EPSSystemState>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE20_LoAFaultReporting>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE21_CurrentLvlCounter>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE22_VoltageLvlCounters>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE23_TempLvlCounters>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE40_ResearchMessConfig>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE41_ResearchFeatureSwitch>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE42_ActiveFeatures>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE43_SDMSteeringMode>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE80_FIHSwVer>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE81_FIHSwReserved0>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE82_FIHSwReserved1>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE83_FIHSwReserved2>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE84_FIHSwReserved3>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE85_FIHSwReserved4>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE86_FIHSwReserved5>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE87_FIHSwReserved6>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EE88_FIHSwReserved7>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EED0_SupplierFactoryMode>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EED1_SupplierInternalFaultCode>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_EED2_SupplierInternalErrorMemory>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_F10A_ECU_Cal_Config_Part_Number>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_F111_ECU_Core_Assembly_Number>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_F113_ECU_Delivery_Assembly_Number>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_F124_ECU_Calibration_Data_1_Number>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_F15F_NOS_Generation_Tool_Version_Number>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_F162_Software_Download_Specification_Version>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_F163_Diagnostic_Specification_Version>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_F166_NOS_Message_Database_1_Version_Number>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_F180_Boot_Software_Identification>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_F18A_System_Supplier_Identifier>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_F18C_ECU_Serial_Number>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DID_F190_Vehicle_Identification_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Customer_DID_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_DCM_E_PENDING
 *   RTE_E_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Customer_DID_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) Customer_DID_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Customer_DID_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

	/* TODO add condition check */
	
	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_DCM_E_PENDING
 *   RTE_E_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_DCM_E_PENDING
 *   RTE_E_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_DCM_E_PENDING
 *   RTE_E_DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_DCM_E_PENDING
 *   RTE_E_DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_3003_Gear_Hardware_Part_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_3003_Gear_Hardware_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_3003_Gear_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_3003_Gear_Hardware_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_3003_Gear_Hardware_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_3003_Gear_Hardware_Part_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_3003_Gear_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_3003_Gear_Hardware_Part_Number_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;
	
	for (i=0;i<24;i++)
	{
		Data[i] = Rte_Pim_Did3003()[i];
	}
	
	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_3003_Gear_Hardware_Part_Number_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_3003_Gear_Hardware_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_3003_Gear_Hardware_Part_Number_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_3003_Gear_Hardware_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_3003_Gear_Hardware_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_3003_Gear_Hardware_Part_Number_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_3003_Gear_Hardware_Part_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_3003_Gear_Hardware_Part_Number_WriteData (returns application error)
 *********************************************************************************************************************/
	
	VAR(uint8, AUTOMATIC) i;
	
	for (i=0;i<24;i++)
	{
		Rte_Pim_Did3003()[i] = Data[i];
	}
	
	Rte_Call_Did3003_SetRamBlockStatus(TRUE);
	
	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_301A_Pull_Drift_Compensation_Value_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_301A_Pull_Drift_Compensation_Value>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_301A_Pull_Drift_Compensation_Value_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_301A_Pull_Drift_Compensation_Value_DCM_E_PENDING
 *   RTE_E_DataServices_DID_301A_Pull_Drift_Compensation_Value_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_301A_Pull_Drift_Compensation_Value_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_301A_Pull_Drift_Compensation_Value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_301A_Pull_Drift_Compensation_Value_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_301A_Pull_Drift_Compensation_Value_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_301A_Pull_Drift_Compensation_Value>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_301A_Pull_Drift_Compensation_Value_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_301A_Pull_Drift_Compensation_Value_DCM_E_PENDING
 *   RTE_E_DataServices_DID_301A_Pull_Drift_Compensation_Value_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_301A_Pull_Drift_Compensation_Value_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_301A_Pull_Drift_Compensation_Value_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_301A_Pull_Drift_Compensation_Value_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_301F_Steering_Pinion_Rotation_Speed_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_301F_Steering_Pinion_Rotation_Speed>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_301F_Steering_Pinion_Rotation_Speed_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_301F_Steering_Pinion_Rotation_Speed_DCM_E_PENDING
 *   RTE_E_DataServices_DID_301F_Steering_Pinion_Rotation_Speed_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_301F_Steering_Pinion_Rotation_Speed_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_301F_Steering_Pinion_Rotation_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_301F_Steering_Pinion_Rotation_Speed_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) HwVelToSerlCom_DegS_T_f32;
	VAR(uint8, AUTOMATIC) HwVelToSerlCom_Cnt_T_u08;

	(void)Rte_Read_HwVelToSerlCom_Val(&HwVelToSerlCom_DegS_T_f32);

	HwVelToSerlCom_Cnt_T_u08 = ScaleSignal_u8(HwVelToSerlCom_DegS_T_f32, -0.0f, 1020.0f, 0.25f, 0.0f);

	Data[0U] = HwVelToSerlCom_Cnt_T_u08;

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_3020_Steering_Pinion_Angle_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_3020_Steering_Pinion_Angle>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_3020_Steering_Pinion_Angle_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_3020_Steering_Pinion_Angle_DCM_E_PENDING
 *   RTE_E_DataServices_DID_3020_Steering_Pinion_Angle_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_3020_Steering_Pinion_Angle_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_3020_Steering_Pinion_Angle_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_3020_Steering_Pinion_Angle_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) FordCmpdHwPosn_Deg_T_f32;
	VAR(uint16, AUTOMATIC) FordCmpdHwPosn_Cnt_T_u16;

	(void)Rte_Read_FordCmpdHwPosn_Val(&FordCmpdHwPosn_Deg_T_f32);

	FordCmpdHwPosn_Cnt_T_u16 = ScaleSignal_u16(FordCmpdHwPosn_Deg_T_f32, -780.0f, 5773.5f, 10.0f, 780.0f);

	CmnMfgSrvFct_Decompose16(FordCmpdHwPosn_Cnt_T_u16, Data);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_DCM_E_PENDING
 *   RTE_E_DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_ReadData (returns application error)
 *********************************************************************************************************************/
	VAR(sint16, AUTOMATIC) FordInpTqRaw_HwNwtMtr_T_s16;
	VAR(float32, AUTOMATIC) FordInpTqRaw_HwNwtMtr_T_f32;
	VAR(uint8, AUTOMATIC) FordInpTqRaw_Cnt_T_u08;

	(void)Rte_Read_FordInpTqRaw_Val(&FordInpTqRaw_HwNwtMtr_T_s16);

	FordInpTqRaw_HwNwtMtr_T_f32 = FixdToFloat_f32_s16(FordInpTqRaw_HwNwtMtr_T_s16, NXTRFIXDPT_P10TOFLOAT_ULS_F32);

	FordInpTqRaw_Cnt_T_u08 = ScaleSignal_u8(FordInpTqRaw_HwNwtMtr_T_f32, -12.7f, 12.8f, 10.0f, 12.7f);

	Data[0U] = FordInpTqRaw_Cnt_T_u08;

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_DCM_E_PENDING
 *   RTE_E_DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) FordVehSteerPinionAgOffs_Deg_T_f32;
	VAR(sint16, AUTOMATIC) FordVehSteerPinionAgOffs_Cnt_T_s16;

	(void)Rte_Read_FordCmpdHwPosn_Val(&FordVehSteerPinionAgOffs_Deg_T_f32);

	FordVehSteerPinionAgOffs_Cnt_T_s16 = ScaleSignal_s16(FordVehSteerPinionAgOffs_Deg_T_f32, -3276.8f, 3276.7f, 10.0f, 0.0f);

	CmnMfgSrvFct_Decompose16((uint16)FordVehSteerPinionAgOffs_Cnt_T_s16, Data);

	return RTE_E_OK;


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_DCM_E_PENDING
 *   RTE_E_DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;

	for (i=0;i<24;i++)
	{
		Data[i] = Rte_Pim_Did630F()[i];
	}

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_D100_Active_Diagnostic_Session_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_D100_Active_Diagnostic_Session>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_D100_Active_Diagnostic_Session_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_D100_Active_Diagnostic_Session_DCM_E_PENDING
 *   RTE_E_DataServices_DID_D100_Active_Diagnostic_Session_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_D100_Active_Diagnostic_Session_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_D100_Active_Diagnostic_Session_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_D100_Active_Diagnostic_Session_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(Dcm_SesCtrlType, AUTOMATIC)SesCtrlType;
	
	(void)Dcm_GetSesCtrlType(&SesCtrlType);
	
	*Data = (uint8)SesCtrlType;
	
	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_D111_ECU_Power_Supply_Voltage_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_D111_ECU_Power_Supply_Voltage>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_D111_ECU_Power_Supply_Voltage_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_D111_ECU_Power_Supply_Voltage_DCM_E_PENDING
 *   RTE_E_DataServices_DID_D111_ECU_Power_Supply_Voltage_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_D111_ECU_Power_Supply_Voltage_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_D111_ECU_Power_Supply_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_D111_ECU_Power_Supply_Voltage_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) FordEpsVltg_V_T_f32;
	VAR(uint8, AUTOMATIC) FordEpsVltg_Cnt_T_u08;

	(void)Rte_Read_FordEpsVltg_Val(&FordEpsVltg_V_T_f32);

	FordEpsVltg_Cnt_T_u08 = ScaleSignal_u8(FordEpsVltg_V_T_f32, 0.0f, 25.5f, 10.0f, 0.0f);

	Data[0U] = FordEpsVltg_Cnt_T_u08;

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_D117_ECU_Internal_Temperature_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_D117_ECU_Internal_Temperature>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_D117_ECU_Internal_Temperature_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_D117_ECU_Internal_Temperature_DCM_E_PENDING
 *   RTE_E_DataServices_DID_D117_ECU_Internal_Temperature_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_D117_ECU_Internal_Temperature_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_D117_ECU_Internal_Temperature_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_D117_ECU_Internal_Temperature_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) EcuT_DegC_T_f32;
	VAR(uint8, AUTOMATIC) EcuT_Cnt_T_u08;

	(void)Rte_Read_EcuTFild_Val(&EcuT_DegC_T_f32);

	EcuT_Cnt_T_u08 = ScaleSignal_u8(EcuT_DegC_T_f32, -40.0f, 215.0f, 1.0f, 40.0f);

	Data[0U] = EcuT_Cnt_T_u08;

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_D118_Motor_Current_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_D118_Motor_Current>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_D118_Motor_Current_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_D118_Motor_Current_DCM_E_PENDING
 *   RTE_E_DataServices_DID_D118_Motor_Current_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_D118_Motor_Current_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_D118_Motor_Current_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_D118_Motor_Current_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) MotCurrQax_A_T_f32;
	VAR(sint16, AUTOMATIC) MotCurrQax_Cnt_T_s16;

	(void)Rte_Read_MotCurrQax_Val(&MotCurrQax_A_T_f32);

	MotCurrQax_Cnt_T_s16 = ScaleSignal_s16(MotCurrQax_A_T_f32, -3276.8f, 3276.7f, 10.0f, 0.0f);

	CmnMfgSrvFct_Decompose16((uint16)MotCurrQax_Cnt_T_s16, Data);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_DD00_Global_Real_Time_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_DD00_Global_Real_Time>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_FordVehGlbRealTi_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_DD00_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_DD00_Global_Real_Time_DCM_E_PENDING
 *   RTE_E_DataServices_DID_DD00_Global_Real_Time_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DD00_Global_Real_Time_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DD00_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DD00_Global_Real_Time_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) FordVehGlbRealTi_Sec_T_f32;
	VAR(uint32, AUTOMATIC) FordVehGlbRealTi_Cnt_T_u32;

	/* TODO will change to u32 instead of f32 in the future */
	(void)Rte_Read_FordVehGlbRealTi_Val(&FordVehGlbRealTi_Sec_T_f32);

	/* Convert from Sec to Min first */
	FordVehGlbRealTi_Cnt_T_u32 = ScaleSignal_u32((FordVehGlbRealTi_Sec_T_f32 / 60.0f), 0.0f, 7158278.0f, 600.0f, 0.0f);

	CmnMfgSrvFct_Decompose32(FordVehGlbRealTi_Cnt_T_u32, Data);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_DD01_Total_Distance_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_DD01_Total_Distance>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_DD01_Total_Distance_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data3ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_DD01_Total_Distance_DCM_E_PENDING
 *   RTE_E_DataServices_DID_DD01_Total_Distance_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DD01_Total_Distance_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DD01_Total_Distance_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DD01_Total_Distance_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) FordVehOdom_Km_T_f32;
	VAR(uint32, AUTOMATIC) FordVehOdom_Cnt_T_u32;

	(void)Rte_Read_FordVehOdom_Val(&FordVehOdom_Km_T_f32);

	FordVehOdom_Cnt_T_u32 = ScaleSignal_u32(FordVehOdom_Km_T_f32, 0.0f, 16777215.0f, 1.0f, 0.0f);

	Data[0U] = (uint8)(FordVehOdom_Cnt_T_u32 >> 16U);
	Data[1U] = (uint8)(FordVehOdom_Cnt_T_u32 >> 8U);
	Data[2U] = (uint8)(FordVehOdom_Cnt_T_u32);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_DD09_Vehicle_Speed_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_DD09_Vehicle_Speed>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_DD09_Vehicle_Speed_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_DD09_Vehicle_Speed_DCM_E_PENDING
 *   RTE_E_DataServices_DID_DD09_Vehicle_Speed_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DD09_Vehicle_Speed_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DD09_Vehicle_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DD09_Vehicle_Speed_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
	VAR(uint8, AUTOMATIC) VehSpd_Cnt_T_u08;

	(void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);

	VehSpd_Cnt_T_u08 = ScaleSignal_u8(VehSpd_Kph_T_f32, 0.0f, 255.0f, 1.0f, 0.0f);

	Data[0U] = VehSpd_Cnt_T_u08;

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_DE00_VehicleData_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_DE00_VehicleData>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_DE00_VehicleData_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_DE00_VehicleData_DCM_E_PENDING
 *   RTE_E_DataServices_DID_DE00_VehicleData_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE00_VehicleData_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE00_VehicleData_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE00_VehicleData_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;
	
	for (i=0;i<24;i++)
	{
		Data[i] = Rte_Pim_DidDE00()[i];
	}
	
	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_DE00_VehicleData_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_DE00_VehicleData>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_DE00_VehicleData_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_DE00_VehicleData_DCM_E_PENDING
 *   RTE_E_DataServices_DID_DE00_VehicleData_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE00_VehicleData_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE00_VehicleData_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE00_VehicleData_WriteData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;
	
	for (i=0;i<24;i++)
	{
		Rte_Pim_DidDE00()[i] = Data[i];
	}
	
	(void)Rte_Call_DidDE00_SetRamBlockStatus(TRUE);
	
	UpdateDidDE00();
	
	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_DE01_FIHSwFeatureConfig_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_DE01_FIHSwFeatureConfig>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_DE01_FIHSwFeatureConfig_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_DE01_FIHSwFeatureConfig_DCM_E_PENDING
 *   RTE_E_DataServices_DID_DE01_FIHSwFeatureConfig_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE01_FIHSwFeatureConfig_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE01_FIHSwFeatureConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE01_FIHSwFeatureConfig_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;

	for (i=0;i<24;i++)
	{
		Data[i] = Rte_Pim_DidDE01()[i];
	}

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_DE01_FIHSwFeatureConfig_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_DE01_FIHSwFeatureConfig>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_DE01_FIHSwFeatureConfig_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_DE01_FIHSwFeatureConfig_DCM_E_PENDING
 *   RTE_E_DataServices_DID_DE01_FIHSwFeatureConfig_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE01_FIHSwFeatureConfig_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE01_FIHSwFeatureConfig_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE01_FIHSwFeatureConfig_WriteData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;

	for (i=0;i<24;i++)
	{
		Rte_Pim_DidDE01()[i] = Data[i];
	}

	(void)Rte_Call_DidDE01_SetRamBlockStatus(TRUE);

	UpdateDidDE01();

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_DE02_FeatureConfig_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_DE02_FeatureConfig>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_DE02_FeatureConfig_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_DE02_FeatureConfig_DCM_E_PENDING
 *   RTE_E_DataServices_DID_DE02_FeatureConfig_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE02_FeatureConfig_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE02_FeatureConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE02_FeatureConfig_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;
	
	for (i=0;i<24;i++)
	{
		Data[i] = Rte_Pim_DidDE02()[i];
	}
	
	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_DE02_FeatureConfig_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_DE02_FeatureConfig>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_DE02_FeatureConfig_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_DE02_FeatureConfig_DCM_E_PENDING
 *   RTE_E_DataServices_DID_DE02_FeatureConfig_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE02_FeatureConfig_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE02_FeatureConfig_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE02_FeatureConfig_WriteData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;
	
	for (i=0;i<24;i++)
	{
		Rte_Pim_DidDE02()[i] = Data[i];
	}
	
	(void)Rte_Call_DidDE02_SetRamBlockStatus(TRUE);
	
	UpdateDidDE02();
	
	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_DE03_Enable_DisableDTCs_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_DE03_Enable_DisableDTCs>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_DE03_Enable_DisableDTCs_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data64ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_DE03_Enable_DisableDTCs_DCM_E_PENDING
 *   RTE_E_DataServices_DID_DE03_Enable_DisableDTCs_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE03_Enable_DisableDTCs_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE03_Enable_DisableDTCs_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE03_Enable_DisableDTCs_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;

	for (i=0;i<64;i++)
	{
		Data[i] = Rte_Pim_DidDE03()[i];
	}

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_DE03_Enable_DisableDTCs_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_DE03_Enable_DisableDTCs>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_DE03_Enable_DisableDTCs_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data64ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_DE03_Enable_DisableDTCs_DCM_E_PENDING
 *   RTE_E_DataServices_DID_DE03_Enable_DisableDTCs_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE03_Enable_DisableDTCs_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE03_Enable_DisableDTCs_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE03_Enable_DisableDTCs_WriteData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;

	for (i=0;i<64;i++)
	{
		Rte_Pim_DidDE03()[i] = Data[i];
	}

	(void)Rte_Call_DidDE03_SetRamBlockStatus(TRUE);

	UpdateDidDE03();

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_DE04_PDCResetValue_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_DE04_PDCResetValue>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_DE04_PDCResetValue_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_DE04_PDCResetValue_DCM_E_PENDING
 *   RTE_E_DataServices_DID_DE04_PDCResetValue_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE04_PDCResetValue_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE04_PDCResetValue_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE04_PDCResetValue_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;

	for (i=0;i<2;i++)
	{
		Data[i] = Rte_Pim_DidDE04()[i];
	}

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_DE04_PDCResetValue_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_DE04_PDCResetValue>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_DE04_PDCResetValue_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_DE04_PDCResetValue_DCM_E_PENDING
 *   RTE_E_DataServices_DID_DE04_PDCResetValue_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE04_PDCResetValue_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE04_PDCResetValue_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE04_PDCResetValue_WriteData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;

	for (i=0;i<2;i++)
	{
		Rte_Pim_DidDE04()[i] = Data[i];
	}

	(void)Rte_Call_DidDE04_SetRamBlockStatus(TRUE);

	(void)Rte_Write_FordSrvPullDriftCmpRstVal_Val((sint16)CmnMfgSrvFct_Synthesize16(Rte_Pim_DidDE04()));

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_DE05_Unused_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_DE05_Unused>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_DE05_Unused_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_DE05_Unused_DCM_E_PENDING
 *   RTE_E_DataServices_DID_DE05_Unused_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE05_Unused_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE05_Unused_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE05_Unused_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_DE05_Unused_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_DE05_Unused>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_DE05_Unused_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_DE05_Unused_DCM_E_PENDING
 *   RTE_E_DataServices_DID_DE05_Unused_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE05_Unused_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_DE05_Unused_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_DE05_Unused_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE00_DevMessConfig_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE00_DevMessConfig>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE00_DevMessConfig_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data3ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE00_DevMessConfig_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE00_DevMessConfig_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE00_DevMessConfig_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE00_DevMessConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE00_DevMessConfig_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE00_DevMessConfig_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_EE00_DevMessConfig>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE00_DevMessConfig_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data3ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE00_DevMessConfig_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE00_DevMessConfig_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE00_DevMessConfig_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE00_DevMessConfig_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE00_DevMessConfig_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE01_XCP_Enable_Disable_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE01_XCP_Enable_Disable>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE01_XCP_Enable_Disable_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE01_XCP_Enable_Disable_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE01_XCP_Enable_Disable_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE01_XCP_Enable_Disable_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE01_XCP_Enable_Disable_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE01_XCP_Enable_Disable_ReadData (returns application error)
 *********************************************************************************************************************/

	*Data = *Rte_Pim_DidEE01();
	
	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE01_XCP_Enable_Disable_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_EE01_XCP_Enable_Disable>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE01_XCP_Enable_Disable_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE01_XCP_Enable_Disable_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE01_XCP_Enable_Disable_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE01_XCP_Enable_Disable_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE01_XCP_Enable_Disable_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE01_XCP_Enable_Disable_WriteData (returns application error)
 *********************************************************************************************************************/

	*Rte_Pim_DidEE01() = *Data;
	
	Rte_Call_DidEE01_SetRamBlockStatus(TRUE);
	
	if (0U != *Rte_Pim_DidEE01())
	{
		(void)Rte_Write_CustXcpEna_Logl(TRUE);
	}
	else
	{
		(void)Rte_Write_CustXcpEna_Logl(FALSE);
	}
	
	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE02_Assist_On_Off_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE02_Assist_On_Off>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE02_Assist_On_Off_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE02_Assist_On_Off_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE02_Assist_On_Off_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE02_Assist_On_Off_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE02_Assist_On_Off_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE02_Assist_On_Off_ReadData (returns application error)
 *********************************************************************************************************************/

	*Data = *Rte_Pim_DidEE02();
	
	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE02_Assist_On_Off_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_EE02_Assist_On_Off>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE02_Assist_On_Off_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE02_Assist_On_Off_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE02_Assist_On_Off_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE02_Assist_On_Off_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE02_Assist_On_Off_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE02_Assist_On_Off_WriteData (returns application error)
 *********************************************************************************************************************/
/* 	VAR(Std_ReturnType, AUTOMATIC) ret;

	switch (*Data) {
		case 0U :
			*ErrorCode = 0x22U;
			ret = E_NOT_OK;
		break;

		case 1U :
			*ErrorCode = 0x22U;
			ret = E_NOT_OK;
		break;

		case 2U :
			*Rte_Pim_DidEE02() = *Data;
			Rte_Call_DidEE02_SetRamBlockStatus(TRUE);

			(void)Rte_Call_SetMotTqCmdSca_Oper(0.0f);
			ret = RTE_E_OK;
		break;

		case 0xFFU :
			*Rte_Pim_DidEE02() = *Data;
			Rte_Call_DidEE02_SetRamBlockStatus(TRUE);

			(void)Rte_Call_SetMotTqCmdSca_Oper(1.0f);
			ret = RTE_E_OK;
		break;

		default:
			*ErrorCode = 0x22U;
			ret = E_NOT_OK;
	}
	
	return ret; */

	/* TODO modify this when CF is ready to handle this service */
	
	*Rte_Pim_DidEE02() = *Data;
	Rte_Call_DidEE02_SetRamBlockStatus(TRUE);
	
	return RTE_E_OK;
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE03_IgnCycleCounter_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE03_IgnCycleCounter>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE03_IgnCycleCounter_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE03_IgnCycleCounter_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE03_IgnCycleCounter_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE03_IgnCycleCounter_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE03_IgnCycleCounter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE03_IgnCycleCounter_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint32, AUTOMATIC) IgnCntr_Cnt_T_u32;
	VAR(uint16, AUTOMATIC) IgnCntr_Cnt_T_u16;

	(void)Rte_Read_IgnCntr_Val(&IgnCntr_Cnt_T_u32);

	IgnCntr_Cnt_T_u16 = ScaleSignal_u16((float32)IgnCntr_Cnt_T_u32, 0.0f, 65535.0f, 1.0f, 0.0f);

	CmnMfgSrvFct_Decompose16(IgnCntr_Cnt_T_u16, Data);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE04_IgnOnTime_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE04_IgnOnTime>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE04_IgnOnTime_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE04_IgnOnTime_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE04_IgnOnTime_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE04_IgnOnTime_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE04_IgnOnTime_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE04_IgnOnTime_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint32, AUTOMATIC) IgnOnTime_Cnt_T_u32;
	VAR(uint16, AUTOMATIC) IgnOnTime_Cnt_T_u16;

	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&IgnOnTime_Cnt_T_u32);

	IgnOnTime_Cnt_T_u16 = ScaleSignal_u16(((float32)IgnOnTime_Cnt_T_u32 * 0.0001f), 0.0f, 65535.0f, 1.0f, 0.0f);

	CmnMfgSrvFct_Decompose16(IgnOnTime_Cnt_T_u16, Data);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE05_FinalMotTq_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE05_FinalMotTq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE05_FinalMotTq_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE05_FinalMotTq_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE05_FinalMotTq_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE05_FinalMotTq_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE05_FinalMotTq_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE05_FinalMotTq_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(sint32, AUTOMATIC) FordAppldFinalMotTq_Nm_T_s32;
	VAR(float32, AUTOMATIC) FordAppldFinalMotTq_Nm_T_f32;
	VAR(uint16, AUTOMATIC) FordAppldFinalMotTq_Cnt_T_u16;

	(void)Rte_Read_FordAppldFinalMotTq_Val(&FordAppldFinalMotTq_Nm_T_s32);

	FordAppldFinalMotTq_Nm_T_f32 = FixdToFloat_f32_s32(FordAppldFinalMotTq_Nm_T_s32, NXTRFIXDPT_P8TOFLOAT_ULS_F32);

	FordAppldFinalMotTq_Cnt_T_u16 = ScaleSignal_u16(FordAppldFinalMotTq_Nm_T_f32, 0.0f, 65535.0f, 1.0f, 0.0f);

	CmnMfgSrvFct_Decompose16(FordAppldFinalMotTq_Cnt_T_u16, Data);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE06_VINChanged_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE06_VINChanged>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE06_VINChanged_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE06_VINChanged_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE06_VINChanged_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE06_VINChanged_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE06_VINChanged_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE06_VINChanged_ReadData (returns application error)
 *********************************************************************************************************************/

	*Data = !(CompareVin(Rte_Pim_Did630F(), Rte_Pim_DidF190()));

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE07_EPSSystemState_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE07_EPSSystemState>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_FordEpsSysSt_Val(FordEpsSysSt1 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE07_EPSSystemState_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE07_EPSSystemState_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE07_EPSSystemState_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE07_EPSSystemState_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE07_EPSSystemState_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE07_EPSSystemState_ReadData (returns application error)
 *********************************************************************************************************************/
  VAR(FordEpsSysSt1, AUTOMATIC) FordEpsSysSt_Cnt_T_enum;

  (void)Rte_Read_FordEpsSysSt_Val(&FordEpsSysSt_Cnt_T_enum);

  Data[0U] = (uint8)FordEpsSysSt_Cnt_T_enum;

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE20_LoAFaultReporting_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE20_LoAFaultReporting>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE20_LoAFaultReporting_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE20_LoAFaultReporting_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE20_LoAFaultReporting_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE20_LoAFaultReporting_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE20_LoAFaultReporting_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE20_LoAFaultReporting_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE21_CurrentLvlCounter_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE21_CurrentLvlCounter>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE21_CurrentLvlCounter_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data20ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE21_CurrentLvlCounter_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE21_CurrentLvlCounter_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE21_CurrentLvlCounter_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE21_CurrentLvlCounter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE21_CurrentLvlCounter_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;

	for (i=0;i<20;i++)
	{
		Data[i] = Rte_Pim_DidEE21()[i];
	}

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE22_VoltageLvlCounters_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE22_VoltageLvlCounters>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE22_VoltageLvlCounters_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data40ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE22_VoltageLvlCounters_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE22_VoltageLvlCounters_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE22_VoltageLvlCounters_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE22_VoltageLvlCounters_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE22_VoltageLvlCounters_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;

	for (i=0;i<40;i++)
	{
		Data[i] = Rte_Pim_DidEE22()[i];
	}

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE23_TempLvlCounters_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE23_TempLvlCounters>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE23_TempLvlCounters_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data40ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE23_TempLvlCounters_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE23_TempLvlCounters_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE23_TempLvlCounters_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE23_TempLvlCounters_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE23_TempLvlCounters_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;

	for (i=0;i<40;i++)
	{
		Data[i] = Rte_Pim_DidEE23()[i];
	}

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE40_ResearchMessConfig_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE40_ResearchMessConfig>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE40_ResearchMessConfig_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data3ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE40_ResearchMessConfig_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE40_ResearchMessConfig_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE40_ResearchMessConfig_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE40_ResearchMessConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE40_ResearchMessConfig_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE40_ResearchMessConfig_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_EE40_ResearchMessConfig>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE40_ResearchMessConfig_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data3ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE40_ResearchMessConfig_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE40_ResearchMessConfig_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE40_ResearchMessConfig_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE40_ResearchMessConfig_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE40_ResearchMessConfig_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE41_ResearchFeatureSwitch_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE41_ResearchFeatureSwitch>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE41_ResearchFeatureSwitch_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE41_ResearchFeatureSwitch_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE41_ResearchFeatureSwitch_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE41_ResearchFeatureSwitch_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE41_ResearchFeatureSwitch_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE41_ResearchFeatureSwitch_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE41_ResearchFeatureSwitch_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_EE41_ResearchFeatureSwitch>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE41_ResearchFeatureSwitch_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE41_ResearchFeatureSwitch_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE41_ResearchFeatureSwitch_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE41_ResearchFeatureSwitch_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE41_ResearchFeatureSwitch_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE41_ResearchFeatureSwitch_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE42_ActiveFeatures_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE42_ActiveFeatures>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE42_ActiveFeatures_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE42_ActiveFeatures_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE42_ActiveFeatures_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE42_ActiveFeatures_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE42_ActiveFeatures_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE42_ActiveFeatures_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE43_SDMSteeringMode_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE43_SDMSteeringMode>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE43_SDMSteeringMode_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE43_SDMSteeringMode_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE43_SDMSteeringMode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE43_SDMSteeringMode_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE43_SDMSteeringMode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE43_SDMSteeringMode_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE80_FIHSwVer_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE80_FIHSwVer>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE80_FIHSwVer_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE80_FIHSwVer_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE80_FIHSwVer_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE80_FIHSwVer_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE80_FIHSwVer_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE80_FIHSwVer_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE81_FIHSwReserved0_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE81_FIHSwReserved0>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE81_FIHSwReserved0_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE81_FIHSwReserved0_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE81_FIHSwReserved0_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE81_FIHSwReserved0_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE81_FIHSwReserved0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE81_FIHSwReserved0_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE81_FIHSwReserved0_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_EE81_FIHSwReserved0>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE81_FIHSwReserved0_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE81_FIHSwReserved0_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE81_FIHSwReserved0_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE81_FIHSwReserved0_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE81_FIHSwReserved0_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE81_FIHSwReserved0_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE82_FIHSwReserved1_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE82_FIHSwReserved1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE82_FIHSwReserved1_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE82_FIHSwReserved1_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE82_FIHSwReserved1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE82_FIHSwReserved1_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE82_FIHSwReserved1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE82_FIHSwReserved1_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE82_FIHSwReserved1_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_EE82_FIHSwReserved1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE82_FIHSwReserved1_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE82_FIHSwReserved1_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE82_FIHSwReserved1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE82_FIHSwReserved1_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE82_FIHSwReserved1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE82_FIHSwReserved1_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE83_FIHSwReserved2_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE83_FIHSwReserved2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE83_FIHSwReserved2_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE83_FIHSwReserved2_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE83_FIHSwReserved2_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE83_FIHSwReserved2_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE83_FIHSwReserved2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE83_FIHSwReserved2_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE83_FIHSwReserved2_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_EE83_FIHSwReserved2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE83_FIHSwReserved2_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE83_FIHSwReserved2_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE83_FIHSwReserved2_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE83_FIHSwReserved2_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE83_FIHSwReserved2_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE83_FIHSwReserved2_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE84_FIHSwReserved3_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE84_FIHSwReserved3>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE84_FIHSwReserved3_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE84_FIHSwReserved3_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE84_FIHSwReserved3_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE84_FIHSwReserved3_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE84_FIHSwReserved3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE84_FIHSwReserved3_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE84_FIHSwReserved3_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_EE84_FIHSwReserved3>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE84_FIHSwReserved3_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE84_FIHSwReserved3_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE84_FIHSwReserved3_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE84_FIHSwReserved3_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE84_FIHSwReserved3_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE84_FIHSwReserved3_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE85_FIHSwReserved4_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE85_FIHSwReserved4>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE85_FIHSwReserved4_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE85_FIHSwReserved4_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE85_FIHSwReserved4_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE85_FIHSwReserved4_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE85_FIHSwReserved4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE85_FIHSwReserved4_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE85_FIHSwReserved4_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_EE85_FIHSwReserved4>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE85_FIHSwReserved4_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE85_FIHSwReserved4_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE85_FIHSwReserved4_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE85_FIHSwReserved4_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE85_FIHSwReserved4_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE85_FIHSwReserved4_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE86_FIHSwReserved5_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE86_FIHSwReserved5>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE86_FIHSwReserved5_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE86_FIHSwReserved5_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE86_FIHSwReserved5_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE86_FIHSwReserved5_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE86_FIHSwReserved5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE86_FIHSwReserved5_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE86_FIHSwReserved5_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_EE86_FIHSwReserved5>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE86_FIHSwReserved5_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE86_FIHSwReserved5_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE86_FIHSwReserved5_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE86_FIHSwReserved5_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE86_FIHSwReserved5_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE86_FIHSwReserved5_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE87_FIHSwReserved6_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE87_FIHSwReserved6>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE87_FIHSwReserved6_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE87_FIHSwReserved6_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE87_FIHSwReserved6_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE87_FIHSwReserved6_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE87_FIHSwReserved6_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE87_FIHSwReserved6_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE87_FIHSwReserved6_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_EE87_FIHSwReserved6>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE87_FIHSwReserved6_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE87_FIHSwReserved6_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE87_FIHSwReserved6_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE87_FIHSwReserved6_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE87_FIHSwReserved6_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE87_FIHSwReserved6_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE88_FIHSwReserved7_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EE88_FIHSwReserved7>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE88_FIHSwReserved7_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE88_FIHSwReserved7_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE88_FIHSwReserved7_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE88_FIHSwReserved7_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE88_FIHSwReserved7_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE88_FIHSwReserved7_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EE88_FIHSwReserved7_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_EE88_FIHSwReserved7>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EE88_FIHSwReserved7_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EE88_FIHSwReserved7_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EE88_FIHSwReserved7_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE88_FIHSwReserved7_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EE88_FIHSwReserved7_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EE88_FIHSwReserved7_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EED0_SupplierFactoryMode_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EED0_SupplierFactoryMode>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EED0_SupplierFactoryMode_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EED0_SupplierFactoryMode_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EED0_SupplierFactoryMode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EED0_SupplierFactoryMode_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EED0_SupplierFactoryMode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EED0_SupplierFactoryMode_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EED0_SupplierFactoryMode_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_EED0_SupplierFactoryMode>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EED0_SupplierFactoryMode_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EED0_SupplierFactoryMode_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EED0_SupplierFactoryMode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EED0_SupplierFactoryMode_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EED0_SupplierFactoryMode_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EED0_SupplierFactoryMode_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EED1_SupplierInternalFaultCode_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EED1_SupplierInternalFaultCode>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EED1_SupplierInternalFaultCode_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data7ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EED1_SupplierInternalFaultCode_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EED1_SupplierInternalFaultCode_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EED1_SupplierInternalFaultCode_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EED1_SupplierInternalFaultCode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EED1_SupplierInternalFaultCode_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_EED2_SupplierInternalErrorMemory_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_EED2_SupplierInternalErrorMemory>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_EED2_SupplierInternalErrorMemory_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_EED2_SupplierInternalErrorMemory_DCM_E_PENDING
 *   RTE_E_DataServices_DID_EED2_SupplierInternalErrorMemory_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EED2_SupplierInternalErrorMemory_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_EED2_SupplierInternalErrorMemory_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_EED2_SupplierInternalErrorMemory_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F10A_ECU_Cal_Config_Part_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_F10A_ECU_Cal_Config_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F10A_ECU_Cal_Config_Part_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F10A_ECU_Cal_Config_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F10A_ECU_Cal_Config_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F10A_ECU_Cal_Config_Part_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F10A_ECU_Cal_Config_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F10A_ECU_Cal_Config_Part_Number_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;

	for (i=0; i<24; i++)
	{
		Data[i] = Rte_Prm_NxtrCalIdsCal1DevlpDesc_Ary1D()[i];
	}

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F111_ECU_Core_Assembly_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_F111_ECU_Core_Assembly_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F111_ECU_Core_Assembly_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F111_ECU_Core_Assembly_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F111_ECU_Core_Assembly_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F111_ECU_Core_Assembly_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F111_ECU_Core_Assembly_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F111_ECU_Core_Assembly_Number_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;
	
	for (i=0;i<24;i++)
	{
		Data[i] = Rte_Pim_DidF111()[i];
	}
	
	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F111_ECU_Core_Assembly_Number_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_F111_ECU_Core_Assembly_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F111_ECU_Core_Assembly_Number_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F111_ECU_Core_Assembly_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F111_ECU_Core_Assembly_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F111_ECU_Core_Assembly_Number_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F111_ECU_Core_Assembly_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F111_ECU_Core_Assembly_Number_WriteData (returns application error)
 *********************************************************************************************************************/

 	VAR(uint8, AUTOMATIC) i;
	
	for (i=0;i<24;i++)
	{
		Rte_Pim_DidF111()[i] = Data[i];
	}
	
	Rte_Call_DidF111_SetRamBlockStatus(TRUE);
	
	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F113_ECU_Delivery_Assembly_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_F113_ECU_Delivery_Assembly_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F113_ECU_Delivery_Assembly_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F113_ECU_Delivery_Assembly_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F113_ECU_Delivery_Assembly_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F113_ECU_Delivery_Assembly_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F113_ECU_Delivery_Assembly_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F113_ECU_Delivery_Assembly_Number_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;
	
	for (i=0;i<24;i++)
	{
		Data[i] = Rte_Pim_DidF113()[i];
	}
	
	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F113_ECU_Delivery_Assembly_Number_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_F113_ECU_Delivery_Assembly_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F113_ECU_Delivery_Assembly_Number_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F113_ECU_Delivery_Assembly_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F113_ECU_Delivery_Assembly_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F113_ECU_Delivery_Assembly_Number_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F113_ECU_Delivery_Assembly_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F113_ECU_Delivery_Assembly_Number_WriteData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;
	
	for (i=0;i<24;i++)
	{
		Rte_Pim_DidF113()[i] = Data[i];
	}
	
	Rte_Call_DidF113_SetRamBlockStatus(TRUE);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F124_ECU_Calibration_Data_1_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_F124_ECU_Calibration_Data_1_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F124_ECU_Calibration_Data_1_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F124_ECU_Calibration_Data_1_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F124_ECU_Calibration_Data_1_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F124_ECU_Calibration_Data_1_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F124_ECU_Calibration_Data_1_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F124_ECU_Calibration_Data_1_Number_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;

	for (i=0; i<24; i++)
	{
		Data[i] = Rte_Prm_NxtrCalIdsCal0DevlpDesc_Ary1D()[i];
	}

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_F15F_NOS_Generation_Tool_Version_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data10ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F162_Software_Download_Specification_Version_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_F162_Software_Download_Specification_Version>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F162_Software_Download_Specification_Version_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F162_Software_Download_Specification_Version_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F162_Software_Download_Specification_Version_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F162_Software_Download_Specification_Version_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F162_Software_Download_Specification_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F162_Software_Download_Specification_Version_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F162_Software_Download_Specification_Version_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_F162_Software_Download_Specification_Version>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F162_Software_Download_Specification_Version_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F162_Software_Download_Specification_Version_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F162_Software_Download_Specification_Version_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F162_Software_Download_Specification_Version_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F162_Software_Download_Specification_Version_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F162_Software_Download_Specification_Version_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F163_Diagnostic_Specification_Version_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_F163_Diagnostic_Specification_Version>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F163_Diagnostic_Specification_Version_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F163_Diagnostic_Specification_Version_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F163_Diagnostic_Specification_Version_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F163_Diagnostic_Specification_Version_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F163_Diagnostic_Specification_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F163_Diagnostic_Specification_Version_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F163_Diagnostic_Specification_Version_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_F163_Diagnostic_Specification_Version>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F163_Diagnostic_Specification_Version_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F163_Diagnostic_Specification_Version_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F163_Diagnostic_Specification_Version_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F163_Diagnostic_Specification_Version_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F163_Diagnostic_Specification_Version_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F163_Diagnostic_Specification_Version_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F166_NOS_Message_Database_1_Version_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_F166_NOS_Message_Database_1_Version_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F166_NOS_Message_Database_1_Version_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F166_NOS_Message_Database_1_Version_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F166_NOS_Message_Database_1_Version_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F166_NOS_Message_Database_1_Version_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F166_NOS_Message_Database_1_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F166_NOS_Message_Database_1_Version_Number_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F166_NOS_Message_Database_1_Version_Number_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_F166_NOS_Message_Database_1_Version_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F166_NOS_Message_Database_1_Version_Number_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F166_NOS_Message_Database_1_Version_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F166_NOS_Message_Database_1_Version_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F166_NOS_Message_Database_1_Version_Number_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F166_NOS_Message_Database_1_Version_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F166_NOS_Message_Database_1_Version_Number_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data11ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F180_Boot_Software_Identification_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_F180_Boot_Software_Identification>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F180_Boot_Software_Identification_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data25ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F180_Boot_Software_Identification_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F180_Boot_Software_Identification_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F180_Boot_Software_Identification_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F180_Boot_Software_Identification_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F180_Boot_Software_Identification_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;

	Data[0] = 1U;
	for (i=1; i<17; i++)
	{
		Data[i] = NxtrSwIds_BootSwRelNrPtr_Cnt_str->Nr[i-1];
	}
	for (i=17; i<25; i++)
	{
		/* Pad with space */
		Data[i] = ' ';
	}

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_ReadData (returns application error)
 *********************************************************************************************************************/

	memcpy(Data, FordPartNr, 24u);

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F18A_System_Supplier_Identifier_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_F18A_System_Supplier_Identifier>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F18A_System_Supplier_Identifier_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F18A_System_Supplier_Identifier_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F18A_System_Supplier_Identifier_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F18A_System_Supplier_Identifier_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F18A_System_Supplier_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F18A_System_Supplier_Identifier_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F18A_System_Supplier_Identifier_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_F18A_System_Supplier_Identifier>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F18A_System_Supplier_Identifier_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F18A_System_Supplier_Identifier_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F18A_System_Supplier_Identifier_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F18A_System_Supplier_Identifier_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F18A_System_Supplier_Identifier_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F18A_System_Supplier_Identifier_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F18C_ECU_Serial_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_F18C_ECU_Serial_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F18C_ECU_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data16ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F18C_ECU_Serial_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F18C_ECU_Serial_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F18C_ECU_Serial_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F18C_ECU_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F18C_ECU_Serial_Number_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F18C_ECU_Serial_Number_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_DID_F18C_ECU_Serial_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F18C_ECU_Serial_Number_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data16ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F18C_ECU_Serial_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F18C_ECU_Serial_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F18C_ECU_Serial_Number_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F18C_ECU_Serial_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F18C_ECU_Serial_Number_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DID_F190_Vehicle_Identification_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DID_F190_Vehicle_Identification_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DID_F190_Vehicle_Identification_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DID_F190_Vehicle_Identification_Number_DCM_E_PENDING
 *   RTE_E_DataServices_DID_F190_Vehicle_Identification_Number_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F190_Vehicle_Identification_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) DataServices_DID_F190_Vehicle_Identification_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DID_F190_Vehicle_Identification_Number_ReadData (returns application error)
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;

	for (i=0;i<24;i++)
	{
		Data[i] = Rte_Pim_DidF190()[i];
	}

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_0202_On_Demand_Self_Test_RequestResults
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <RequestResults> of PortPrototype <RoutineServices_RTN_0202_On_Demand_Self_Test>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_0202_On_Demand_Self_Test_RequestResults(Dcm_OpStatusType OpStatus, uint8 *Out_ResData, uint16 *DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Out_ResData: uint8* is of type Dcm_Data159ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_0202_On_Demand_Self_Test_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_0202_On_Demand_Self_Test_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_0202_On_Demand_Self_Test_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_0202_On_Demand_Self_Test_RequestResults_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) RoutineServices_RTN_0202_On_Demand_Self_Test_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(uint16, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_0202_On_Demand_Self_Test_RequestResults (returns application error)
 *********************************************************************************************************************/

	VAR(Std_ReturnType, AUTOMATIC) ret;

	if (TRUE == *Rte_Pim_Rtn0202Strt())
	{
		ret = RTE_E_OK;
		/* TODO report certain list of DTCs that are set */
	}
	else
	{
		ret = E_NOT_OK;
		*ErrorCode = 0x22U;
	}

	return ret;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_0202_On_Demand_Self_Test_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_0202_On_Demand_Self_Test>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_0202_On_Demand_Self_Test_Start(Dcm_OpStatusType OpStatus, uint8 *Out_ResData, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_0202_On_Demand_Self_Test_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_0202_On_Demand_Self_Test_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_0202_On_Demand_Self_Test_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_0202_On_Demand_Self_Test_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) RoutineServices_RTN_0202_On_Demand_Self_Test_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_0202_On_Demand_Self_Test_Start (returns application error)
 *********************************************************************************************************************/

	VAR(float32, AUTOMATIC) FordInpTqRaw_Nm_T_f32;
	VAR(float32, AUTOMATIC) HwVelToSerlCom_DegS_T_f32;
	VAR(float32, AUTOMATIC) FordVehSpdLoQly_Kph_T_f32;
	VAR(boolean, AUTOMATIC) FordVehSpdLoQlyVld_Cnt_T_Logl;
	VAR(Std_ReturnType, AUTOMATIC) ret;

	(void)Rte_Read_FordInpTqRaw_Val(&FordInpTqRaw_Nm_T_f32);
	(void)Rte_Read_HwVelToSerlCom_Val(&HwVelToSerlCom_DegS_T_f32);
	(void)Rte_Read_FordVehSpdLoQly_Val(&FordVehSpdLoQly_Kph_T_f32);
	(void)Rte_Read_FordVehSpdLoQlyVld_Logl(&FordVehSpdLoQlyVld_Cnt_T_Logl);

	if ((FordInpTqRaw_Nm_T_f32 < 1.0f) &&
		(HwVelToSerlCom_DegS_T_f32 < 10.0f) &&
		(TRUE == FordVehSpdLoQlyVld_Cnt_T_Logl) && (FordVehSpdLoQly_Kph_T_f32 < VEHSPDLOQLYTHD_KPH_F32))
	{
		*Rte_Pim_Rtn0202Strt() = TRUE;
		*Out_ResData = 0x10U;
		ret = RTE_E_OK;
	}
	else
	{
		ret = E_NOT_OK;
		*ErrorCode = 0x22U;
	}

	return ret;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_0202_On_Demand_Self_Test_Stop
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Stop> of PortPrototype <RoutineServices_RTN_0202_On_Demand_Self_Test>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_0202_On_Demand_Self_Test_Stop(Dcm_OpStatusType OpStatus, uint8 *Out_ResData, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_0202_On_Demand_Self_Test_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_0202_On_Demand_Self_Test_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_0202_On_Demand_Self_Test_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_0202_On_Demand_Self_Test_Stop_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) RoutineServices_RTN_0202_On_Demand_Self_Test_Stop(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_0202_On_Demand_Self_Test_Stop (returns application error)
 *********************************************************************************************************************/

	VAR(Std_ReturnType, AUTOMATIC) ret;

	if (TRUE == *Rte_Pim_Rtn0202Strt())
	{
		*Out_ResData = 0x10U;
		ret = RTE_E_OK;
	}
	else
	{
		ret = E_NOT_OK;
		*ErrorCode = 0x22U;
	}

	return ret;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_Start(Dcm_OpStatusType OpStatus, uint8 *Out_ResData, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_Start (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_Start(Dcm_OpStatusType OpStatus, uint8 *Out_ResData, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_Start (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_Start(Dcm_OpStatusType OpStatus, uint8 *Out_ResData, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_Start (returns application error)
 *********************************************************************************************************************/

	VAR(Std_ReturnType, AUTOMATIC) ret;
	VAR(uint8, AUTOMATIC) RtnDC00Req_Cnt_T_u08;
	VAR(ImcArbnRxSts1, AUTOMATIC) ImcDataSts_Cnt_T_enum;

	if (DCM_INITIAL == OpStatus)
	{	/* First time we got the reset request */
		*Rte_Pim_RtnDC00Req() ^= 1U;	/* toggle flag */
		(void)Rte_Write_RtnDC00Req_Val(*Rte_Pim_RtnDC00Req());	/* send request to ECU 2 */
		*Rte_Pim_ReqDelayCnt() = REQDELAYCNT_CNT_U08;	/* used in 10ms loop, in total 1s of possible delay for synchronization of both ECU */

		(void)Rte_Call_ClrLtchCntrData_Oper();

		ret = DCM_E_PENDING;
	}
	else if (DCM_PENDING == OpStatus)
	{	/* subsequent calls */
		if (0U == *Rte_Pim_ReqDelayCnt())
		{	/* time out */
			/* TODO determine what we should do in this case */
			*Out_ResData = 0x10U;
			ret = DCM_E_PROCESSINGDONE;
		}
		else
		{
			(void)Rte_Call_GetSigImcData_u08_Oper(IMCARBN_CUSTDIAGCRTNDC00REQ_CNT_U16, &RtnDC00Req_Cnt_T_u08, &ImcDataSts_Cnt_T_enum);

		    /* TODO: Ignoring IMC status check for now */
			if (*Rte_Pim_RtnDC00Req() == RtnDC00Req_Cnt_T_u08)
			{	/* received confirmation */
				/* give positive response and clear delay counter */
				*Rte_Pim_ReqDelayCnt() = 0;

				*Out_ResData = 0x10U;
				ret = DCM_E_PROCESSINGDONE;
			}
			else
			{
				ret = DCM_E_PENDING;
			}
		}
		if (*Rte_Pim_ReqDelayCnt() > 0U)
		{
			(*Rte_Pim_ReqDelayCnt())--;
		}
	}
	else
	{	/* we should never reach here */
		ret = E_NOT_OK;
	}

	return ret;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ServiceRequestNotification_Confirmation
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Confirmation> of PortPrototype <ServiceRequestNotification>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType ServiceRequestNotification_Confirmation(uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_ServiceRequestNotification_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ServiceRequestNotification_Confirmation_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) ServiceRequestNotification_Confirmation(uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ServiceRequestNotification_Confirmation (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ServiceRequestNotification_Indication
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Indication> of PortPrototype <ServiceRequestNotification>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType ServiceRequestNotification_Indication(uint8 SID, const uint8 *RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument RequestData: uint8* is of type Dcm_Data1028ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_ServiceRequestNotification_E_NOT_OK
 *   RTE_E_ServiceRequestNotification_E_REQUEST_NOT_ACCEPTED
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ServiceRequestNotification_Indication_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CustDiag_CODE) ServiceRequestNotification_Indication(uint8 SID, P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ServiceRequestNotification_Indication (returns application error)
 *********************************************************************************************************************/

    VAR(Std_ReturnType, AUTOMATIC) retValue_Cnt_T_u08;

    retValue_Cnt_T_u08 = RTE_E_OK;
    
    /* TODO return DCM_E_REQUEST_NOT_ACCEPTED for all services for ECU 2 to suppress any response */
    
    return retValue_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CustDiag_STOP_SEC_CODE
#include "CustDiag_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DCM_CALLOUT_CODE) DcmDspSessionCallback(Dcm_SesCtrlType formerState, Dcm_SesCtrlType newState)
{
	if (DcmConf_DcmDspSessionRow_Programming == newState)
	{
		/* SW reset will be invoked from periodic function after confirmation from ECU2 */
	    *Rte_Pim_RstReq() = CUSTDIAGCFLSPROGREQ_CNT_U08;
	    (void)Rte_Write_RstReq_Val(CUSTDIAGCFLSPROGREQ_CNT_U08);	/* send reset request code to ECU 2 */
	    *Rte_Pim_ReqDelayCnt() = REQDELAYCNT_CNT_U08;	/* used in 10ms loop, in total 1s of possible delay for synchronization of both ECU */
		(void)Rte_Switch_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod(EcuResetStarted);
	}
}

FUNC(Std_ReturnType, DCM_CALLOUT_CODE) EcuReset_Hard(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext)
{
	VAR(Std_ReturnType, AUTOMATIC) ret;
	VAR(uint8, AUTOMATIC) RstReq_Cnt_T_u08;
	VAR(ImcArbnRxSts1, AUTOMATIC) ImcDataSts_Cnt_T_enum;

	if (DCM_INITIAL == opStatus)
	{	/* First time we got the reset request */
		*Rte_Pim_RstReq() = CUSTDIAGCHARDRSTREQ_CNT_U08;
		(void)Rte_Write_RstReq_Val(CUSTDIAGCHARDRSTREQ_CNT_U08);	/* send reset request code to ECU 2 */
		*Rte_Pim_ReqDelayCnt() = HARDRSTDELAYCNT_CNT_U08;	/* used in 10ms loop, in total 100ms of possible delay for synchronization of both ECU */
		ret = DCM_E_PENDING;
	}
	else if (DCM_PENDING == opStatus)
	{	/* subsequent calls */
		if (0U == *Rte_Pim_ReqDelayCnt())
		{	/* time out */
			/* TODO determine what we should do in this case */
			*Rte_Pim_RstStrt() = CUSTDIAGCHARDRSTREQ_CNT_U08;
			ret = DCM_E_PROCESSINGDONE;
		}
		else
		{
			(void)Rte_Call_GetSigImcData_u08_Oper(IMCARBN_CUSTDIAGCRSTREQ_CNT_U16, &RstReq_Cnt_T_u08, &ImcDataSts_Cnt_T_enum);

		    /* TODO: Ignoring IMC status check for now */
			if (CUSTDIAGCHARDRSTREQ_CNT_U08 == RstReq_Cnt_T_u08)
			{	/* received confirmation */
				/* give positive response and set flag to execute reset in the next periodic */
				*Rte_Pim_RstStrt() = CUSTDIAGCHARDRSTREQ_CNT_U08;
				ret = DCM_E_PROCESSINGDONE;
			}
			else
			{
				ret = DCM_E_PENDING;
			}
		}
		if (*Rte_Pim_ReqDelayCnt() > 0U)
		{
			(*Rte_Pim_ReqDelayCnt())--;
		}
	}
	else
	{	/* we should never reach here */
		ret = E_NOT_OK;
	}

	return ret;
}

FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Srv14ClrDiagcInfo(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext)
{
	VAR(Std_ReturnType, AUTOMATIC) ret;
	VAR(uint8, AUTOMATIC) ClrDiagcReq_Cnt_T_u08;
	VAR(ImcArbnRxSts1, AUTOMATIC) ImcDataSts_Cnt_T_enum;

	if (DCM_INITIAL == opStatus)
	{	/* First time we got the reset request */
		*Rte_Pim_ClrDiagcReq() ^= 1U;	/* toggle flag */
		(void)Rte_Write_ClrDiagcReq_Val(*Rte_Pim_ClrDiagcReq());	/* send request to ECU 2 */
		*Rte_Pim_ReqDelayCnt() = REQDELAYCNT_CNT_U08;	/* used in 10ms loop, in total 1s of possible delay for synchronization of both ECU */

		Rte_Call_ClrAllDiagc_Oper();

		ret = DCM_E_PENDING;
	}
	else if (DCM_PENDING == opStatus)
	{	/* subsequent calls */
		if (0U == *Rte_Pim_ReqDelayCnt())
		{	/* time out */
			/* TODO determine what we should do in this case */
			ret = DCM_E_PROCESSINGDONE;
		}
		else
		{
			(void)Rte_Call_GetSigImcData_u08_Oper(IMCARBN_CUSTDIAGCCLRDIAGCREQ_CNT_U16, &ClrDiagcReq_Cnt_T_u08, &ImcDataSts_Cnt_T_enum);

		    /* TODO: Ignoring IMC status check for now */
			if (*Rte_Pim_ClrDiagcReq() == ClrDiagcReq_Cnt_T_u08)
			{	/* received confirmation */
				/* give positive response and clear delay counter */
				*Rte_Pim_ReqDelayCnt() = 0;
				ret = DCM_E_PROCESSINGDONE;
			}
			else
			{
				ret = DCM_E_PENDING;
			}
		}
		if (*Rte_Pim_ReqDelayCnt() > 0U)
		{
			(*Rte_Pim_ReqDelayCnt())--;
		}
	}
	else
	{	/* we should never reach here */
		ret = E_NOT_OK;
	}

	return ret;
}

STATIC FUNC(void, AUTOMATIC) UpdateDidDE00(void)
{
	(void)CheckEolByte(Rte_Pim_DidDE00()[0], DIDDE00PARAM_CNT_U08);

	if (1u == (Rte_Pim_DidDE00()[4]))
	{
		(void)Rte_Write_FordAbsPrsnt_Logl(TRUE);
		(void)Rte_Write_FordEscPrsnt_Logl(FALSE);
	}
	else if (2u == (Rte_Pim_DidDE00()[4]))
	{
		(void)Rte_Write_FordAbsPrsnt_Logl(TRUE);
		(void)Rte_Write_FordEscPrsnt_Logl(TRUE);
	}
	else
	{
		(void)Rte_Write_FordAbsPrsnt_Logl(FALSE);
		(void)Rte_Write_FordEscPrsnt_Logl(FALSE);
	}
	(void)Rte_Write_FordAfsEquid_Logl((BYTECONFIGURED_CNT_U08 == (Rte_Pim_DidDE00()[5])) ? TRUE : FALSE);
	/* Byte 6: 0x05~0xFF is invalid, default is 0x02 */
	(void)Rte_Write_FordEngTqClass_Val(((Rte_Pim_DidDE00()[6]) < 5U) ? Rte_Pim_DidDE00()[6] : 2U);
}

STATIC FUNC(void, AUTOMATIC) UpdateDidDE01(void)
{
	(void)CheckEolByte(Rte_Pim_DidDE01()[0], DIDDE01PARAM_CNT_U08);
	(void)Rte_Write_FordActvNiblCtrlEnad_Logl((BYTECONFIGURED_CNT_U08 == (Rte_Pim_DidDE01()[1])) ? TRUE : FALSE);
	(void)Rte_Write_FordPullDriftCmpEnad_Logl((BYTECONFIGURED_CNT_U08 == (Rte_Pim_DidDE01()[2])) ? TRUE : FALSE);
	(void)Rte_Write_FordTqSteerCmpEnad_Logl((BYTECONFIGURED_CNT_U08 == (Rte_Pim_DidDE01()[3])) ? TRUE : FALSE);
	(void)Rte_Write_FordBrkPlsRejctnEnad_Logl((BYTECONFIGURED_CNT_U08 == (Rte_Pim_DidDE01()[4])) ? TRUE : FALSE);
	(void)Rte_Write_FordLaneDprtrWarnEnad_Logl((BYTECONFIGURED_CNT_U08 == (Rte_Pim_DidDE01()[5])) ? TRUE : FALSE);
	(void)Rte_Write_FordLaneKeepAssiEnad_Logl((BYTECONFIGURED_CNT_U08 == (Rte_Pim_DidDE01()[6])) ? TRUE : FALSE);
	(void)Rte_Write_FordTrfcJamAssiEnad_Logl((BYTECONFIGURED_CNT_U08 == (Rte_Pim_DidDE01()[7])) ? TRUE : FALSE);
	(void)Rte_Write_FordLaneCentrAssiEnad_Logl((BYTECONFIGURED_CNT_U08 == (Rte_Pim_DidDE01()[8])) ? TRUE : FALSE);
	(void)Rte_Write_FordTrlrBackupAssiEnad_Logl((((Rte_Pim_DidDE01()[9]) > 0u) && ((Rte_Pim_DidDE01()[9]) < 5u)) ? TRUE : FALSE);
	(void)Rte_Write_FordTrlrBackupAssi5WhlEnad_Logl(((0x02U == (Rte_Pim_DidDE01()[9])) || (0x04U == (Rte_Pim_DidDE01()[9]))) ? TRUE : FALSE);
	(void)Rte_Write_FordTrlrBackupAssiTrigEnad_Logl(((0x03U == (Rte_Pim_DidDE01()[9])) || (0x04U == (Rte_Pim_DidDE01()[9]))) ? TRUE : FALSE);
	(void)Rte_Write_FordEvasSteerAssiEnad_Logl((BYTECONFIGURED_CNT_U08 == (Rte_Pim_DidDE01()[10])) ? TRUE : FALSE);
	(void)Rte_Write_FordResrchFctEnad_Logl((BYTECONFIGURED_CNT_U08 == (Rte_Pim_DidDE01()[23])) ? TRUE : FALSE);
}

STATIC FUNC(void, AUTOMATIC) UpdateDidDE02(void)
{
	(void)CheckEolByte(Rte_Pim_DidDE02()[0], DIDDE02PARAM_CNT_U08);

	(void)Rte_Write_FordActvParkAssiEnad_Logl((BYTECONFIGURED_CNT_U08 == (Rte_Pim_DidDE02()[1])) ? TRUE : FALSE);
	/* Byte 2: currently this is connected to RtnCmdDiagcDi so the logic needs to be reversed */
	(void)Rte_Write_FordActvRtnEnad_Logl((BYTECONFIGURED_CNT_U08 == (Rte_Pim_DidDE02()[2])) ? FALSE : TRUE);
	(void)Rte_Write_FordSoftEndStopEnad_Logl((0x01U == (Rte_Pim_DidDE02()[3])) ? TRUE : FALSE);
	/* Byte 4: 0x03~0xFF is invalid, default is 0x00 */
	(void)Rte_Write_FordStrtStopSt_Val(((Rte_Pim_DidDE00()[4]) < 3U) ? Rte_Pim_DidDE00()[4] : 0U);
	(void)Rte_Write_FordDrvrSteerRcmdnEnad_Logl((BYTECONFIGURED_CNT_U08 == (Rte_Pim_DidDE02()[5])) ? TRUE : FALSE);
	(void)Rte_Write_FordSelDrvModEnad_Logl((BYTECONFIGURED_CNT_U08 == (Rte_Pim_DidDE02()[6])) ? TRUE : FALSE);
}

STATIC FUNC(void, AUTOMATIC) UpdateDidDE03(void)
{
	VAR(uint8, AUTOMATIC) i;

	(void)CheckEolByte(Rte_Pim_DidDE03()[0], DIDDE03PARAM_CNT_U08);

	for (i = 1u; i <= TOTNROFDTC_CNT_U08; i++)
	{
		(void)Dem_SetEventAvailable(DEMDTCEVEIDMAP[i], ((BYTECONFIGURED_CNT_U08 == Rte_Pim_DidDE03()[i]) ? TRUE : FALSE));
	}

}

STATIC FUNC(boolean, AUTOMATIC) CheckEolByte(VAR(uint8, AUTOMATIC)EolByte, VAR(uint8, AUTOMATIC)Parameter)
{
	VAR(boolean, AUTOMATIC) ret;

	/* TODO byte 0 currently has default value 0 so we can skip NvM status check, if this configuration changes then modify following logic */
	if (BYTECONFIGURED_CNT_U08 != EolByte)
	{
		*Rte_Pim_EolByteNTCPara() |= Parameter;
		ret = FALSE;
	}
	else
	{
		*Rte_Pim_EolByteNTCPara() &= (!Parameter);
		ret = TRUE;
	}

	return ret;
}

STATIC FUNC(boolean, AUTOMATIC) CompareVin(VAR(Ary1D_u08_17, AUTOMATIC) Vin1, VAR(Ary1D_u08_17, AUTOMATIC) Vin2)
{
	VAR(boolean, AUTOMATIC) ret = TRUE;
	VAR(uint8, AUTOMATIC) i;

	for (i=0u; i<17u; i++)
	{
		if (Vin1[i] != Vin2[i])
		{
			ret = FALSE;
			break;
		}
	}

	return ret;
}

FUNC(void, AUTOMATIC) ShutDownUpdateNvM(void)
{
	VAR(float32, AUTOMATIC) FordMaxBattCurr_A_T_f32;
	VAR(float32, AUTOMATIC) FordMinBattVltg_V_T_f32;

	/* EE21 max current */
	(void)Rte_Read_FordMaxBattCurr_Val(&FordMaxBattCurr_A_T_f32);
	if ((FordMaxBattCurr_A_T_f32 > 2.0f) && (FordMaxBattCurr_A_T_f32 <= 20.0f))
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE21()[0u])) + 1u), &(Rte_Pim_DidEE21()[0u]));
	}
	else if ((FordMaxBattCurr_A_T_f32 > 20.0f) && (FordMaxBattCurr_A_T_f32 <= 40.0f))
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE21()[4u])) + 1u), &(Rte_Pim_DidEE21()[4u]));
	}
	else if ((FordMaxBattCurr_A_T_f32 > 40.0f) && (FordMaxBattCurr_A_T_f32 <= 60.0f))
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE21()[8u])) + 1u), &(Rte_Pim_DidEE21()[8u]));
	}
	else if ((FordMaxBattCurr_A_T_f32 > 60.0f) && (FordMaxBattCurr_A_T_f32 <= 80.0f))
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE21()[12u])) + 1u), &(Rte_Pim_DidEE21()[12u]));
	}
	else
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE21()[16u])) + 1u), &(Rte_Pim_DidEE21()[16u]));
	}
	(void)Rte_Call_DidEE21_SetRamBlockStatus(TRUE);

	/* EE22 min voltage */
	(void)Rte_Read_FordMinBattVltg_Val(&FordMinBattVltg_V_T_f32);
	if (FordMinBattVltg_V_T_f32 >= 16.0f)
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE22()[0u])) + 1u), &(Rte_Pim_DidEE22()[0u]));
	}
	else if ((FordMinBattVltg_V_T_f32 < 16.0f) && (FordMinBattVltg_V_T_f32 >= 12.0f))
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE22()[4u])) + 1u), &(Rte_Pim_DidEE22()[4u]));
	}
	else if ((FordMinBattVltg_V_T_f32 < 12.0f) && (FordMinBattVltg_V_T_f32 >= 11.5f))
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE22()[8u])) + 1u), &(Rte_Pim_DidEE22()[8u]));
	}
	else if ((FordMinBattVltg_V_T_f32 < 11.5f) && (FordMinBattVltg_V_T_f32 >= 11.0f))
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE22()[12u])) + 1u), &(Rte_Pim_DidEE22()[12u]));
	}
	else if ((FordMinBattVltg_V_T_f32 < 11.0f) && (FordMinBattVltg_V_T_f32 >= 10.5f))
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE22()[16u])) + 1u), &(Rte_Pim_DidEE22()[16u]));
	}
	else if ((FordMinBattVltg_V_T_f32 < 10.5f) && (FordMinBattVltg_V_T_f32 >= 10.0f))
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE22()[20u])) + 1u), &(Rte_Pim_DidEE22()[20u]));
	}
	else if ((FordMinBattVltg_V_T_f32 < 10.0f) && (FordMinBattVltg_V_T_f32 >= 9.5f))
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE22()[24u])) + 1u), &(Rte_Pim_DidEE22()[24u]));
	}
	else if ((FordMinBattVltg_V_T_f32 < 9.5f) && (FordMinBattVltg_V_T_f32 >= 9.0f))
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE22()[28u])) + 1u), &(Rte_Pim_DidEE22()[28u]));
	}
	else if ((FordMinBattVltg_V_T_f32 < 9.0f) && (FordMinBattVltg_V_T_f32 >= 6.5f))
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE22()[32u])) + 1u), &(Rte_Pim_DidEE22()[32u]));
	}
	else
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE22()[36u])) + 1u), &(Rte_Pim_DidEE22()[36u]));
	}
	(void)Rte_Call_DidEE22_SetRamBlockStatus(TRUE);

	/* EE23 max temperature */
	if (*Rte_Pim_MaxTemp() <= 60.0f)
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE23()[0u])) + 1u), &(Rte_Pim_DidEE23()[0u]));
	}
	else if ((*Rte_Pim_MaxTemp() > 60.0f) && (*Rte_Pim_MaxTemp() <= 80.0f))
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE23()[4u])) + 1u), &(Rte_Pim_DidEE23()[4u]));
	}
	else if ((*Rte_Pim_MaxTemp() > 80.0f) && (*Rte_Pim_MaxTemp() <= 100.0f))
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE23()[8u])) + 1u), &(Rte_Pim_DidEE23()[8u]));
	}
	else if ((*Rte_Pim_MaxTemp() > 100.0f) && (*Rte_Pim_MaxTemp() <= 120.0f))
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE23()[12u])) + 1u), &(Rte_Pim_DidEE23()[12u]));
	}
	else
	{
		CmnMfgSrvFct_Decompose32((CmnMfgSrvFct_Synthesize32(&(Rte_Pim_DidEE23()[16u])) + 1u), &(Rte_Pim_DidEE23()[16u]));
	}
	/* remaing 20 bytes has value FF from default */
	(void)Rte_Call_DidEE23_SetRamBlockStatus(TRUE);

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
