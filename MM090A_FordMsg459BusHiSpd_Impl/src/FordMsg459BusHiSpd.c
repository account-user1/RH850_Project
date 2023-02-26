/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordMsg459BusHiSpd.c
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM090A_FordMsg459BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg459BusHiSpd
 *  Generated at:  Sat May  5 14:24:27 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordMsg459BusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/**********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name  : FordMsg459BusHiSpd.c
* Module Description: FordMsg459BusHiSpd - MM086A
* Project           : CBD
* Author            : Nexteer ISC
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz5334 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  --------------------------------------------------------------------------  ------------
* 04/26/18   1       KK  	   Initial Version                                                               EA4#20134
* 05/05/18   1       SNH  	   Changed input port data types with Ford data types                            EA4#20134
*----------------------------------------------------------------------------------------------------------------------
**********************************************************************************************************************/

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
 *********************************************************************************************************************/

#include "Rte_FordMsg459BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 #include "NxtrMath.h"
 #include "NxtrFixdPt.h"
 
/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Read and Rte_Write */


/********************************************* Embedded Local Constants **********************************************/
#define BALLTOAXLEINIT_CNT_U8               			(255U)
#define BUSHISPDFIXDTITHD_MILLISEC_U16              	(5000U)
#define CNVMILLISECTOCNT_CNTPERMILLISEC_U16             (10U)
#define DEBSTEP_CNT_U16               					(65535U)
#define DIAGENA_CNT_LGC               					(FALSE)
#define FEATACTV_CNT_LGC               					(TRUE)
#define FORDVEHTRLRAIDHITCHAGMAX_CNT_U16               	(2047U)
#define FORDVEHTRLRAIDHITCHAGMIN_CNT_U16               	(0U)
#define FORDVEHTRLRAIDHITCHAGRATEMAX_CNT_U16            (1023U)
#define FORDVEHTRLRAIDHITCHAGRATEMIN_CNT_U16            (0U)
#define FORDVEHTRLRAIDIDNVALMAX_CNT_U8               	(31U)
#define FORDVEHTRLRAIDIDNVALMIN_CNT_U8               	(0U)
#define FORDVEHTRLRBALLTOAXLEMAX_CNT_U8               	(255U)
#define FORDVEHTRLRBALLTOAXLEMIN_CNT_U8               	(0U)
#define HITCHAGINIT_CNT_U16               				(720U)
#define HITCHAGRATEINIT_CNT_U16               			(400U)
#define MODSEL_CNT_U08               					(1U)
#define PREVINIT_CNT_U8               					(0U)
#define VALIDINIT_CNT_LGC               				(0U)

/******************************************** Local Function Prototypes **********************************************/

static FUNC(void, FordMsg459BusHiSpd_CODE) DiagEna(VAR(boolean, AUTOMATIC)FordCanDtcInhb_Cnt_T_logl,
                  VAR(boolean, AUTOMATIC)FordTrlrBackupAssiEnad_Cnt_T_logl, 
				  P2VAR(boolean, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR) DiagEna_Cnt_T_log1);

static FUNC(void, FordMsg459BusHiSpd_CODE)DiagcChk(VAR(boolean, AUTOMATIC) DiagEna_Cnt_T_log1,
                VAR(uint8, AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08,
                P2VAR(uint16, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR)BusHiSpdMissTiThd_Cnt_T_u16);
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
 * Ford_TrlrAidTrgtId_No_Actl: Integer in interval [0...31]
 *   Unit: [unitless], Factor: 1, Offset: 0
 * boolean: Boolean (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Ford_HitchToVehAxle_L_Calc: Enumeration of integer in interval [0...255] with enumerators
 *   CxFF_Faulty (255U)
 *   Unit: [meter], Factor: 0.0127, Offset: -0.508
 * Ford_TrlrAid_An3_Actl: Enumeration of integer in interval [0...2047] with enumerators
 *   Cx7FF_Faulty (2047U)
 *   Unit: [degrees], Factor: 0.125, Offset: -90
 * Ford_TrlrAid_AnRate2_Actl: Enumeration of integer in interval [0...1023] with enumerators
 *   Cx3FF_Faulty (1023U)
 *   Unit: [degrees/second], Factor: 0.125, Offset: -50
 * Ford_TrlrAid_D2_Stat: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_NotTracking (0U)
 *   Cx1_Initializing (1U)
 *   Cx2_DriveStraighRequested (2U)
 *   Cx3_TurnRequested (3U)
 *   Cx4_TrackingLowConfidence (4U)
 *   Cx5_TrackingMediumConfidence (5U)
 *   Cx6_TrackingHighConfidence (6U)
 *   Cx7_TrackingUnknownConfidence (7U)
 *   Cx8_TrackingLost (8U)
 *   Cx9_IncorrectLighting (9U)
 *   CxA_DirtyCamera (10U)
 *   CxB_NotUsed_1 (11U)
 *   CxC_NotUsed_2 (12U)
 *   CxD_NotUsed_3 (13U)
 *   CxE_NotUsed_4 (14U)
 *   CxF_Faulty (15U)
 * Ford_TrlrRvrse_D_Stat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_Off (0U)
 *   Cx1_On (1U)
 *   Cx2_TrailerReverseGuidanceLite (2U)
 *   Cx3_Faulty (3U)
 * Ford_TrlrTrgtAcquire_D_Stat: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_Null (0U)
 *   Cx1_TargetAcquired (1U)
 *   Cx2_TargetNotAcquired (2U)
 *   Cx3_Processing (3U)
 *   Cx4_RVCforTBA_Activated (4U)
 *   Cx5_NotUsed_1 (5U)
 *   Cx6_NotUsed_2 (6U)
 *   Cx7_Faulty (7U)
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
 *   uint32 *Rte_Pim_FordVehMsg459MissTmr(void)
 *   uint32 *Rte_Pim_FordVehMsg459RxdTmr(void)
 *   uint32 *Rte_Pim_FordVehTrlrAidTrackStFaildTmr(void)
 *   uint32 *Rte_Pim_FordVehTrlrAidTrackStPassdTmr(void)
 *   uint32 *Rte_Pim_FordVehTrlrHitchAgFaildTmr(void)
 *   uint32 *Rte_Pim_FordVehTrlrHitchAgPassdTmr(void)
 *   uint32 *Rte_Pim_FordVehTrlrHitchAgRateFaildTmr(void)
 *   uint32 *Rte_Pim_FordVehTrlrHitchAgRatePassdTmr(void)
 *   uint16 *Rte_Pim_FordVehTrlrAidHitchAgPrev(void)
 *   uint16 *Rte_Pim_FordVehTrlrAidHitchAgRatePrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   uint8 *Rte_Pim_FordVehTrlrAidAcqStsPrev(void)
 *   uint8 *Rte_Pim_FordVehTrlrAidGuidcRevsStsPrev(void)
 *   uint8 *Rte_Pim_FordVehTrlrAidIdnValPrev(void)
 *   uint8 *Rte_Pim_FordVehTrlrAidTrackStPrev(void)
 *   uint8 *Rte_Pim_FordVehTrlrBallToAxlePrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehMsg459Miss(void)
 *   boolean *Rte_Pim_FordVehTrlrHitchAgVldPrev(void)
 *   boolean *Rte_Pim_FordVehTrlrHitchRateVldPrev(void)
 *   boolean *Rte_Pim_FordVehTrlrTarVldPrev(void)
 *   boolean *Rte_Pim_FordVehTrlrTrackStVldPrev(void)
 *   boolean *Rte_Pim_TrlrAidStsThreePrsntIntPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg459BusHiSpdDiagMsgMissTmrThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdHitchAgInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdHitchAgInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdHitchAgRateInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdHitchAgRateInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdRcvrPrsntFlgTmrThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrackStInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrackStInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrRcvrTarVldThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrRcvrTrackStVldThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrTarVldMissMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd_Val(void)
 *
 *********************************************************************************************************************/


#define FordMsg459BusHiSpd_START_SEC_CODE
#include "FordMsg459BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg459BusHiSpdInit1
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
 * Symbol: FordMsg459BusHiSpdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg459BusHiSpd_CODE) FordMsg459BusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg459BusHiSpdInit1
 *********************************************************************************************************************/
*Rte_Pim_FirstTranVldFlg() = TRUE;

(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehMsg459MissTmr());
(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehMsg459RxdTmr());
(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgRatePassdTmr());
(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgRateFaildTmr());
(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrAidTrackStPassdTmr());
(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrAidTrackStFaildTmr());
(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgPassdTmr());
(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgFaildTmr());

*Rte_Pim_ClrDiagcFlgProxyPrev() = PREVINIT_CNT_U8;
*Rte_Pim_FordVehTrlrAidIdnValPrev() = PREVINIT_CNT_U8;

*Rte_Pim_FordVehTrlrBallToAxlePrev() = BALLTOAXLEINIT_CNT_U8;
*Rte_Pim_FordVehTrlrAidHitchAgPrev() = HITCHAGINIT_CNT_U16;
*Rte_Pim_FordVehTrlrAidHitchAgRatePrev() = HITCHAGRATEINIT_CNT_U16;

*Rte_Pim_FordVehTrlrAidTrackStPrev() = Cx0_NotTracking;
*Rte_Pim_FordVehTrlrAidAcqStsPrev() = Cx0_Null;

*Rte_Pim_FordVehTrlrAidGuidcRevsStsPrev() = Cx0_Off;

*Rte_Pim_FordVehTrlrTarVldPrev() = VALIDINIT_CNT_LGC;
*Rte_Pim_FordVehTrlrHitchAgVldPrev() = VALIDINIT_CNT_LGC;
*Rte_Pim_FordVehTrlrHitchRateVldPrev() = VALIDINIT_CNT_LGC;
*Rte_Pim_FordVehTrlrTrackStVldPrev() = VALIDINIT_CNT_LGC;
*Rte_Pim_TrlrAidStsThreePrsntIntPrev() = VALIDINIT_CNT_LGC;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg459BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackupAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_HitchToVehAxle_L_Calc_Ford_HitchToVehAxle_L_Calc(Ford_HitchToVehAxle_L_Calc *data)
 *   Std_ReturnType Rte_Read_Ford_TrlrAidTrgtId_No_Actl_Ford_TrlrAidTrgtId_No_Actl(Ford_TrlrAidTrgtId_No_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_TrlrAid_An3_Actl_Ford_TrlrAid_An3_Actl(Ford_TrlrAid_An3_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_TrlrAid_AnRate2_Actl_Ford_TrlrAid_AnRate2_Actl(Ford_TrlrAid_AnRate2_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_TrlrAid_D2_Stat_Ford_TrlrAid_D2_Stat(Ford_TrlrAid_D2_Stat *data)
 *   Std_ReturnType Rte_Read_Ford_TrlrRvrse_D_Stat_Ford_TrlrRvrse_D_Stat(Ford_TrlrRvrse_D_Stat *data)
 *   Std_ReturnType Rte_Read_Ford_TrlrTrgtAcquire_D_Stat_Ford_TrlrTrgtAcquire_D_Stat(Ford_TrlrTrgtAcquire_D_Stat *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehTrlrAidAcqSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidHitchAg_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidHitchAgRate_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidIdnVal_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidTrakgSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidTrakgStVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidTrlrRvsGuidcSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrBallToAxle_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrHitchAgVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehTrlrHitchRateVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehTrlrTarVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_TrlrAidStsThreePrsntInt_Logl(boolean data)
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
 * Symbol: FordMsg459BusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg459BusHiSpd_CODE) FordMsg459BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg459BusHiSpdPer1
 *********************************************************************************************************************/

 VAR(Ford_TrlrAid_An3_Actl, AUTOMATIC) FordTrlrAidAn3Actl_Cnt_T_enum;
 VAR(Ford_TrlrAid_AnRate2_Actl, AUTOMATIC) FordTrlrAidAnRate2Actl_Cnt_T_enum;
 VAR(uint16, AUTOMATIC) FordVehTrlrAidHitchAg_Cnt_T_u16;
 VAR(uint16, AUTOMATIC) FordVehTrlrAidHitchAgRate_Cnt_T_u16;
 
 VAR(uint8, AUTOMATIC) ClrDiagcFlgProxy_Cnt_T_u08;
 VAR(Ford_HitchToVehAxle_L_Calc, AUTOMATIC) Ford_HitchToVehAxleLCalc_Cnt_T_enum;
 VAR(Ford_TrlrAidTrgtId_No_Actl, AUTOMATIC) FordTrlrAidTrgtIdNoActl_Cnt_T_enum;
 VAR(uint8, AUTOMATIC) FordVehTrlrAidIdnVal_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) FordVehTrlrBallToAxle_Cnt_T_u08;
 
 VAR(Ford_TrlrAid_D2_Stat, AUTOMATIC) FordTrlrAidD2Stat_Cnt_T_enum;
 VAR(Ford_TrlrRvrse_D_Stat, AUTOMATIC) FordTrlrRvrseDStat_Cnt_T_enum;
 VAR(Ford_TrlrTrgtAcquire_D_Stat, AUTOMATIC) FordTrlrTrgtAcquireDStat_Cnt_T_enum;
 VAR(uint8, AUTOMATIC) FordVehTrlrAidAcqSts_Cnt_T_enum;
 VAR(uint8, AUTOMATIC) FordVehTrlrAidTrakgSt_Cnt_T_enum;
 VAR(uint8, AUTOMATIC) FordVehTrlrAidTrlrRvsGuidcSts_Cnt_T_enum;
 
 VAR(boolean, AUTOMATIC) FordCanDtcInhb_Cnt_T_logl;
 VAR(uint8, AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08;
 VAR(boolean, AUTOMATIC) FordTrlrBackupAssiEnad_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) FordVehTrlrHitchAgVld_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) FordVehTrlrHitchRateVld_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) FordVehTrlrTarVld_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) FordVehTrlrTrakgStVld_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) TrlrAidStsThreePrsntInt_Cnt_T_logl;
 
 VAR(boolean, AUTOMATIC) DiagEna_Cnt_T_log1;
 
 VAR(uint16, AUTOMATIC) BusHiSpdMissTiThd_Cnt_T_u16;	

 VAR(uint16, AUTOMATIC) BusHiSpdPresentTiThd_Cnt_T_u16;
 VAR(uint32,AUTOMATIC)TiSpan_MilliSec_T_u32;
 
 
 
FordVehTrlrAidTrlrRvsGuidcSts_Cnt_T_enum = 0;
FordVehTrlrHitchAgVld_Cnt_T_logl = FALSE;
FordVehTrlrHitchRateVld_Cnt_T_logl = FALSE;
FordVehTrlrTarVld_Cnt_T_logl = FALSE;
FordVehTrlrTrakgStVld_Cnt_T_logl = FALSE;
TrlrAidStsThreePrsntInt_Cnt_T_logl = FALSE;
 
/* Read RTE Inputs */ 
(void)Rte_Read_ClrDiagcFlgProxy_Val(&ClrDiagcFlgProxy_Cnt_T_u08);
(void)Rte_Read_FordCanDtcInhb_Logl(&FordCanDtcInhb_Cnt_T_logl);
(void)Rte_Read_FordEpsLifeCycMod_Val(&FordEpsLifeCycMod_Cnt_T_u08);
(void)Rte_Read_FordTrlrBackupAssiEnad_Logl(&FordTrlrBackupAssiEnad_Cnt_T_logl);
(void)Rte_Read_Ford_HitchToVehAxle_L_Calc_Ford_HitchToVehAxle_L_Calc(&Ford_HitchToVehAxleLCalc_Cnt_T_enum);
(void)Rte_Read_Ford_TrlrAidTrgtId_No_Actl_Ford_TrlrAidTrgtId_No_Actl(&FordTrlrAidTrgtIdNoActl_Cnt_T_enum);
(void)Rte_Read_Ford_TrlrAid_An3_Actl_Ford_TrlrAid_An3_Actl(&FordTrlrAidAn3Actl_Cnt_T_enum);
(void)Rte_Read_Ford_TrlrAid_AnRate2_Actl_Ford_TrlrAid_AnRate2_Actl(&FordTrlrAidAnRate2Actl_Cnt_T_enum);
(void)Rte_Read_Ford_TrlrAid_D2_Stat_Ford_TrlrAid_D2_Stat(&FordTrlrAidD2Stat_Cnt_T_enum);
(void)Rte_Read_Ford_TrlrRvrse_D_Stat_Ford_TrlrRvrse_D_Stat(&FordTrlrRvrseDStat_Cnt_T_enum);
(void)Rte_Read_Ford_TrlrTrgtAcquire_D_Stat_Ford_TrlrTrgtAcquire_D_Stat(&FordTrlrTrgtAcquireDStat_Cnt_T_enum);
 
 
 /* Start of DiagEna */
  
  (void)DiagEna(FordCanDtcInhb_Cnt_T_logl,FordTrlrBackupAssiEnad_Cnt_T_logl,&DiagEna_Cnt_T_log1);
  

 /* End of DiagEna */
 
 if (*Rte_Pim_FordVehMsg459MissTmr() == TRUE )
 {
	 /* Start of MsgMiss */
	 
	     /* Start of Diagnostics_check */
		 
		 (void)DiagcChk(DiagEna_Cnt_T_log1,FordEpsLifeCycMod_Cnt_T_u08,&BusHiSpdMissTiThd_Cnt_T_u16);

	     /* End of Diagnostics_check */
		 
	     /* Start of Clear_Diagnostics_Flg_Proxy_check */
		 
		 if (ClrDiagcFlgProxy_Cnt_T_u08 != *Rte_Pim_ClrDiagcFlgProxyPrev())
		 {
			 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehMsg459MissTmr());
		 }
		 else
		 {
			 /* Do Nothing */
		 }
		 *Rte_Pim_ClrDiagcFlgProxyPrev() = ClrDiagcFlgProxy_Cnt_T_u08;
	     /* End of Clear_Diagnostics_Flg_Proxy_check */
	 
	 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehMsg459RxdTmr());
	 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgRateFaildTmr());
	 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgRatePassdTmr());
	 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrAidTrackStFaildTmr());
	 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrAidTrackStPassdTmr());
	 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgFaildTmr());
	 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgPassdTmr());
	 
	 FordVehTrlrBallToAxle_Cnt_T_u08 = *Rte_Pim_FordVehTrlrBallToAxlePrev();
	 FordVehTrlrAidHitchAg_Cnt_T_u16 = *Rte_Pim_FordVehTrlrAidHitchAgPrev();
	 FordVehTrlrAidHitchAgRate_Cnt_T_u16 = *Rte_Pim_FordVehTrlrAidHitchAgRatePrev();
	 FordVehTrlrAidTrakgSt_Cnt_T_enum = *Rte_Pim_FordVehTrlrAidTrackStPrev();
	 FordVehTrlrAidAcqSts_Cnt_T_enum = *Rte_Pim_FordVehTrlrAidAcqStsPrev();
	 FordVehTrlrAidIdnVal_Cnt_T_u08 = *Rte_Pim_FordVehTrlrAidIdnValPrev();
	 FordVehTrlrAidTrlrRvsGuidcSts_Cnt_T_enum = *Rte_Pim_FordVehTrlrAidGuidcRevsStsPrev();
	 
	 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1A5, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
	 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1A6, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
	 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1A7, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
	 
	 /* Start of Output Transition */
	 
	 (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehMsg459MissTmr(), &TiSpan_MilliSec_T_u32);
	 if(TiSpan_MilliSec_T_u32 > ((uint32)Rte_Prm_FordMsg459BusHiSpdTrlrTarVldMissMsgThd_Val()	* (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	 {
		 FordVehTrlrTarVld_Cnt_T_logl = FALSE;	
		 FordVehTrlrHitchAgVld_Cnt_T_logl = FALSE;	
		 FordVehTrlrHitchRateVld_Cnt_T_logl = FALSE;	
		 FordVehTrlrTrakgStVld_Cnt_T_logl = FALSE;	
		 TrlrAidStsThreePrsntInt_Cnt_T_logl = FALSE;	
	 }
	 else
	 {
		 /* Do Nothing */
	 }
	 

	 
	 /* End of Output Transition */
	 
	 
	 /* End of MsgMiss */
 }
 else
 {
	 /* Start of MsgPresent */
	 
	     /* DiagEna */
		 if(DiagEna_Cnt_T_log1 == TRUE)
		 {
			 /* Start of Enabled */
			 
			 (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehMsg459RxdTmr(), &TiSpan_MilliSec_T_u32);
			 if(TiSpan_MilliSec_T_u32 > ((uint32)Rte_Prm_FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd_Val()	* (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
			 {
				 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1A4, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
			 }			 
			 /* End of Enabled */
		 }
		 else
		 {
			 /* Start of Disabled */
			 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1A4, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
			 /* End of Disabled */
		 }
		 
	     /* DiagEna */
	 
	 /* Start of MsgPresentNTC1A5 */
		/* Start of Diagnostics_check */
		if(DiagEna_Cnt_T_log1 == TRUE)
		{
			/* Start of Enabled */
			if (*Rte_Pim_FordVehTrlrAidHitchAgRatePrev() < FORDVEHTRLRAIDHITCHAGRATEMAX_CNT_U16 )
			{
				/*Start of setNTCpass*/
				(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehTrlrHitchAgRatePassdTmr(), &TiSpan_MilliSec_T_u32);
				if(TiSpan_MilliSec_T_u32 > ((uint32)Rte_Prm_FordMsg459BusHiSpdHitchAgRateInvldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
				{
					(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1A5, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
				}
				(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgRateFaildTmr());
				/*End of setNTCpass*/
			}
			
			else
			{
				/* Do Nothing */
			}
			
			if(*Rte_Pim_FordVehTrlrAidHitchAgRatePrev() == FORDVEHTRLRAIDHITCHAGRATEMAX_CNT_U16)
			{
				/* Start of setNTCfail */				
				if(FordEpsLifeCycMod_Cnt_T_u08 == MODSEL_CNT_U08)
				{
					BusHiSpdPresentTiThd_Cnt_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
				}
				else
				{
					BusHiSpdPresentTiThd_Cnt_T_u16 = Rte_Prm_FordMsg459BusHiSpdHitchAgRateInvldFaildThd_Val();
				}
				(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehTrlrHitchAgRateFaildTmr(), &TiSpan_MilliSec_T_u32);
				if(TiSpan_MilliSec_T_u32 > ((uint32)BusHiSpdPresentTiThd_Cnt_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
				{
					(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1A5, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
				}
				(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgRatePassdTmr());
		        /* End of setNTCfail */
			}
			else
			{
				/* Do Nothing */
			}
			/* End of Enabled */
		}
		else
		{
			/* Start of Reset TImers */
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgRateFaildTmr());
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgRatePassdTmr());
			
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1A5, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
			/* End of Reset TImers */
		}
		
		/* End of Diagnostics_check */
		
		/* Start of Clear_Diagnostics_Flg_Proxy_check */
		if(ClrDiagcFlgProxy_Cnt_T_u08 != *Rte_Pim_ClrDiagcFlgProxyPrev())
		{
			/* Start of Reset Timers1 */
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgRateFaildTmr());
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgRatePassdTmr());
			/* End of Reset Timers1 */
		}
		else
		{
			/* Do Nothing */
		}
		 *Rte_Pim_ClrDiagcFlgProxyPrev() = ClrDiagcFlgProxy_Cnt_T_u08;
		/* End of Clear_Diagnostics_Flg_Proxy_check */
	    
	    
	 
	 /* End of MsgPresentNTC1A5 */
	 
	 /* Start of MsgPresentNTC1A6 */
	      /* Start of Diagnostics_check */
	      if(DiagEna_Cnt_T_log1 == TRUE)
		  {
			  /* Start of Enabled */
			  if(*Rte_Pim_FordVehTrlrAidTrackStPrev() < CxF_Faulty)
			  {
				  /* Start of setNTCpass */
				(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehTrlrAidTrackStPassdTmr(), &TiSpan_MilliSec_T_u32);
	            if(TiSpan_MilliSec_T_u32 > ((uint32)Rte_Prm_FordMsg459BusHiSpdTrackStInvldPassdThd_Val()	* (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
				{
					(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1A6, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
				}
				(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrAidTrackStFaildTmr());	            
				  /* Start of setNTCpass */
			  }
			  else
			  {
				  /* Do Nothing */
			  }
			  
		      if(*Rte_Pim_FordVehTrlrAidTrackStPrev() == CxF_Faulty)
		      {
			      /* Start of setNTCfail */
			      if(FordEpsLifeCycMod_Cnt_T_u08 == MODSEL_CNT_U08)
				  {
					  BusHiSpdPresentTiThd_Cnt_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
				  }
				  else
				  {
					  BusHiSpdPresentTiThd_Cnt_T_u16 = Rte_Prm_FordMsg459BusHiSpdTrackStInvldFaildThd_Val();
				  }
				  (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehTrlrAidTrackStFaildTmr(), &TiSpan_MilliSec_T_u32);
	              if(TiSpan_MilliSec_T_u32 > ((uint32)BusHiSpdPresentTiThd_Cnt_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
				  {
					  (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1A6, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
				  }
				  (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrAidTrackStPassdTmr());
			      /* End of setNTCfail */
		      }
		      else
		      {
			      /* Do Nothing */
		      }
			  /* End of Enabled */
			  
			  
		  }
		  else
		  {
			  /* Start of Reset TImers */
			  (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrAidTrackStFaildTmr());
			  (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrAidTrackStPassdTmr());
			  (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1A6, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
			  /* End of Reset TImers */
		  }
		  
		  
	      /* End of Diagnostics_check */
		  
		  /* Start of Clear_Diagnostics_Flg_Proxy_check */		  
		if(ClrDiagcFlgProxy_Cnt_T_u08 != *Rte_Pim_ClrDiagcFlgProxyPrev())
		{
			/* Start of Reset Timers1 */
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrAidTrackStFaildTmr());
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrAidTrackStPassdTmr());
			/* End of Reset Timers1 */
		}
		else
		{
			/* Do Nothing */
		}
		 *Rte_Pim_ClrDiagcFlgProxyPrev() = ClrDiagcFlgProxy_Cnt_T_u08;
	      /* End of Clear_Diagnostics_Flg_Proxy_check */
		
	 /* End of MsgPresentNTC1A6 */
	 
	 /* Start of MsgPresentNTC1A7 */
	      /*Start of Diagnostics_check*/
          if(DiagEna_Cnt_T_log1 == TRUE)
		  {
			  /* Start of Enabled */
			  if(*Rte_Pim_FordVehTrlrAidHitchAgPrev() < FORDVEHTRLRAIDHITCHAGMAX_CNT_U16)
			  {
				  /* Start of setNTCpass */
				(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehTrlrHitchAgPassdTmr(), &TiSpan_MilliSec_T_u32);
	            if(TiSpan_MilliSec_T_u32 > ((uint32)Rte_Prm_FordMsg459BusHiSpdHitchAgInvldPassdThd_Val()	* (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
				{
					(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1A7, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
				}
				(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgFaildTmr());	            
				  /* Start of setNTCpass */
			  }
			  else
			  {
				  /* Do Nothing */
			  }
			  
		      if(*Rte_Pim_FordVehTrlrAidHitchAgPrev() == FORDVEHTRLRAIDHITCHAGMAX_CNT_U16)
		      {
			      /* Start of setNTCfail */
			      if(FordEpsLifeCycMod_Cnt_T_u08 == MODSEL_CNT_U08)
				  {
					  BusHiSpdPresentTiThd_Cnt_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
				  }
				  else
				  {
					  BusHiSpdPresentTiThd_Cnt_T_u16 = Rte_Prm_FordMsg459BusHiSpdHitchAgInvldFaildThd_Val();
				  }
				  (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehTrlrHitchAgFaildTmr(), &TiSpan_MilliSec_T_u32);
	              if(TiSpan_MilliSec_T_u32 > ((uint32)BusHiSpdPresentTiThd_Cnt_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
				  {
					  (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1A7, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
				  }
				  (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgPassdTmr());
			      /* End of setNTCfail */
		      }
		      else
		      {
			      /* Do Nothing */
		      }
			  /* End of Enabled */
			  
			  
		  }
		  else
		  {
			  /* Start of Reset TImers */
			  (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgFaildTmr());
			  (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgPassdTmr());
			  (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1A7, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
			  /* End of Reset TImers */
		  }
		  
		  
	      /*End of Diagnostics_check*/
		  
		  /*Start of Clear_Diagnostics_Flg_Proxy_check*/
		if(ClrDiagcFlgProxy_Cnt_T_u08 != *Rte_Pim_ClrDiagcFlgProxyPrev())
		{
			/* Start of Reset Timers1 */
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgFaildTmr());
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrHitchAgPassdTmr());
			/* End of Reset Timers1 */
		}
		else
		{
			/* Do Nothing */
		}
		 *Rte_Pim_ClrDiagcFlgProxyPrev() = ClrDiagcFlgProxy_Cnt_T_u08;
		  
	      /*End of Clear_Diagnostics_Flg_Proxy_check*/
	 /* End of MsgPresentNTC1A7 */
	 
	 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehMsg459MissTmr());
	 FordVehTrlrBallToAxle_Cnt_T_u08     = (uint8)Ford_HitchToVehAxleLCalc_Cnt_T_enum;
	 FordVehTrlrAidHitchAg_Cnt_T_u16     = (uint16)FordTrlrAidAn3Actl_Cnt_T_enum;
	 FordVehTrlrAidHitchAgRate_Cnt_T_u16 = (uint16)FordTrlrAidAnRate2Actl_Cnt_T_enum;
	 FordVehTrlrAidTrakgSt_Cnt_T_enum     = (uint8)FordTrlrAidD2Stat_Cnt_T_enum;
	 FordVehTrlrAidAcqSts_Cnt_T_enum     = FordTrlrTrgtAcquireDStat_Cnt_T_enum;
	 FordVehTrlrAidIdnVal_Cnt_T_u08      = (uint8)FordTrlrAidTrgtIdNoActl_Cnt_T_enum;
	 *Rte_Pim_FordVehTrlrAidGuidcRevsStsPrev() = (uint8)FordTrlrRvrseDStat_Cnt_T_enum; 
	 
	 
	 if(*Rte_Pim_FirstTranVldFlg() == TRUE)
	 {
		 /* Start of First Transition */
		 *Rte_Pim_FirstTranVldFlg() = FALSE;
		 *Rte_Pim_FordVehTrlrTarVldPrev() = TRUE;
		 *Rte_Pim_TrlrAidStsThreePrsntIntPrev() = TRUE;
		 if(FordVehTrlrAidHitchAg_Cnt_T_u16 < FORDVEHTRLRAIDHITCHAGMAX_CNT_U16)
		 {
			 FordVehTrlrHitchAgVld_Cnt_T_logl = TRUE;
		 }
		 else
		 {
			 /* Do Nothing */
		 }
		 
		 if(FordVehTrlrAidHitchAgRate_Cnt_T_u16 < FORDVEHTRLRAIDHITCHAGRATEMAX_CNT_U16)
		 {
			 FordVehTrlrHitchRateVld_Cnt_T_logl = TRUE;
		 }
		 else
		 {
			 /* Do Nothing */
		 }
	    if(FordVehTrlrAidTrakgSt_Cnt_T_enum < CxF_Faulty)
		{
			FordVehTrlrTrakgStVld_Cnt_T_logl = TRUE;
		} 
		else
		 {
			 /* Do Nothing */
		 }
		 /* End of First Transition */
	 }
	 else
	 {
		 /* Start of After First Transition */
		  (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehMsg459RxdTmr(), &TiSpan_MilliSec_T_u32);
	       if(TiSpan_MilliSec_T_u32 > ((uint32)Rte_Prm_FordMsg459BusHiSpdTrlrRcvrTarVldThd_Val()	* (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		   {
			   FordVehTrlrTarVld_Cnt_T_logl = TRUE;
		   }
		   else
		   {
			   FordVehTrlrTarVld_Cnt_T_logl = *Rte_Pim_FordVehTrlrTarVldPrev();
		   }
		   
		   (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehMsg459RxdTmr(), &TiSpan_MilliSec_T_u32);
	       if(TiSpan_MilliSec_T_u32 > ((uint32)Rte_Prm_FordMsg459BusHiSpdRcvrPrsntFlgTmrThd_Val()	* (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		   {
			   TrlrAidStsThreePrsntInt_Cnt_T_logl = TRUE;
		   }
		   else
		   {
			   TrlrAidStsThreePrsntInt_Cnt_T_logl = *Rte_Pim_TrlrAidStsThreePrsntIntPrev();
		   }
		   
		 if(FordVehTrlrAidHitchAg_Cnt_T_u16 < FORDVEHTRLRAIDHITCHAGMAX_CNT_U16)
		 {
			(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehMsg459RxdTmr(), &TiSpan_MilliSec_T_u32);
	       if(TiSpan_MilliSec_T_u32 > ((uint32)Rte_Prm_FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd_Val()	* (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		   {
			   FordVehTrlrHitchAgVld_Cnt_T_logl = TRUE;
		   }
		   else
		   {
			   FordVehTrlrHitchAgVld_Cnt_T_logl = *Rte_Pim_FordVehTrlrHitchAgVldPrev();
		   }
			 
		 }
		 else
		 {
			 /* Do Nothing */
		 }
		 
		  if(FordVehTrlrAidHitchAg_Cnt_T_u16 == FORDVEHTRLRAIDHITCHAGMAX_CNT_U16)
		 {
			(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehTrlrHitchAgFaildTmr(), &TiSpan_MilliSec_T_u32);
	       if(TiSpan_MilliSec_T_u32 > ((uint32)Rte_Prm_FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd_Val()	* (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		   {
			   FordVehTrlrHitchAgVld_Cnt_T_logl = FALSE;
		   }
		   else
		   {
			   FordVehTrlrHitchAgVld_Cnt_T_logl = *Rte_Pim_FordVehTrlrHitchAgVldPrev();
		   }
			 
		 }
		 else
		 {
			 /* Do Nothing */
		 }
		 
		 if(FordVehTrlrAidHitchAgRate_Cnt_T_u16 < FORDVEHTRLRAIDHITCHAGRATEMAX_CNT_U16)
		 {
			(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehMsg459RxdTmr(), &TiSpan_MilliSec_T_u32);
	       if(TiSpan_MilliSec_T_u32 > ((uint32)Rte_Prm_FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd_Val()	* (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		   {
			   FordVehTrlrHitchRateVld_Cnt_T_logl = TRUE;
		   }
		   else
		   {
			   FordVehTrlrHitchRateVld_Cnt_T_logl = *Rte_Pim_FordVehTrlrHitchRateVldPrev();
		   }
			 
		 }
		 else
		 {
			 /* Do Nothing */
		 }
		 
		  if(FordVehTrlrAidHitchAgRate_Cnt_T_u16 == FORDVEHTRLRAIDHITCHAGRATEMAX_CNT_U16)
		 {
			(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehTrlrHitchAgRateFaildTmr(), &TiSpan_MilliSec_T_u32);
	       if(TiSpan_MilliSec_T_u32 > ((uint32)Rte_Prm_FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd_Val()	* (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		   {
			   FordVehTrlrHitchRateVld_Cnt_T_logl = FALSE;
		   }
		   else
		   {
			   FordVehTrlrHitchRateVld_Cnt_T_logl = *Rte_Pim_FordVehTrlrHitchRateVldPrev();
		   }
			 
		 }
		 else
		 {
			 /* Do Nothing */
		 } 
		 if(FordVehTrlrAidTrakgSt_Cnt_T_enum < CxF_Faulty)
		 {
			 (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehMsg459RxdTmr(), &TiSpan_MilliSec_T_u32);
	         if(TiSpan_MilliSec_T_u32 > ((uint32)Rte_Prm_FordMsg459BusHiSpdTrlrRcvrTrackStVldThd_Val()	* (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
			 {
				 FordVehTrlrTrakgStVld_Cnt_T_logl = TRUE;
			 }
			 else
			 {
				 FordVehTrlrTrakgStVld_Cnt_T_logl = *Rte_Pim_FordVehTrlrTrackStVldPrev();
			 }
		 }
		 else
		 {
			 /* Do Nothing */
		 }
		 
		  if(FordVehTrlrAidTrakgSt_Cnt_T_enum == CxF_Faulty)
		 {
			 (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehTrlrAidTrackStFaildTmr(), &TiSpan_MilliSec_T_u32);
	         if(TiSpan_MilliSec_T_u32 > ((uint32)Rte_Prm_FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd_Val()	* (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
			 {
				 FordVehTrlrTrakgStVld_Cnt_T_logl = TRUE;
			 }
			 else
			 {
				 FordVehTrlrTrakgStVld_Cnt_T_logl = *Rte_Pim_FordVehTrlrTrackStVldPrev();
			 }
		 }
		 else
		 {
			 /* Do Nothing */
		 }
		 
		 /* End of After First Transition */
	 }
	 /* End of MsgPresent */
 }
 
 /* Limit outputs */
    FordVehTrlrBallToAxle_Cnt_T_u08 = Lim_u08(FordVehTrlrBallToAxle_Cnt_T_u08, FORDVEHTRLRBALLTOAXLEMIN_CNT_U8, FORDVEHTRLRBALLTOAXLEMAX_CNT_U8);
    FordVehTrlrAidHitchAg_Cnt_T_u16 = Lim_u16(FordVehTrlrAidHitchAg_Cnt_T_u16, FORDVEHTRLRAIDHITCHAGMIN_CNT_U16, FORDVEHTRLRAIDHITCHAGMAX_CNT_U16);
    FordVehTrlrAidHitchAgRate_Cnt_T_u16 = Lim_u16(FordVehTrlrAidHitchAgRate_Cnt_T_u16, FORDVEHTRLRAIDHITCHAGRATEMIN_CNT_U16, FORDVEHTRLRAIDHITCHAGRATEMAX_CNT_U16);
    FordVehTrlrAidIdnVal_Cnt_T_u08 = Lim_u08(FordVehTrlrAidIdnVal_Cnt_T_u08, FORDVEHTRLRAIDIDNVALMIN_CNT_U8, FORDVEHTRLRAIDIDNVALMAX_CNT_U8);
 
 /* Write to RTE Outputs */ 
(void)Rte_Write_FordVehTrlrAidAcqSts_Val(FordVehTrlrAidAcqSts_Cnt_T_enum);
(void)Rte_Write_FordVehTrlrAidHitchAg_Val(FordVehTrlrAidHitchAg_Cnt_T_u16);
(void)Rte_Write_FordVehTrlrAidHitchAgRate_Val(FordVehTrlrAidHitchAgRate_Cnt_T_u16);
(void)Rte_Write_FordVehTrlrAidIdnVal_Val(FordVehTrlrAidIdnVal_Cnt_T_u08);
(void)Rte_Write_FordVehTrlrAidTrakgSt_Val(FordVehTrlrAidTrakgSt_Cnt_T_enum);
(void)Rte_Write_FordVehTrlrAidTrlrRvsGuidcSts_Val(FordVehTrlrAidTrlrRvsGuidcSts_Cnt_T_enum);
(void)Rte_Write_FordVehTrlrBallToAxle_Val(FordVehTrlrBallToAxle_Cnt_T_u08);
(void)Rte_Write_FordVehTrlrHitchAgVld_Logl(FordVehTrlrHitchAgVld_Cnt_T_logl);
(void)Rte_Write_FordVehTrlrHitchRateVld_Logl(FordVehTrlrHitchRateVld_Cnt_T_logl);
(void)Rte_Write_FordVehTrlrTarVld_Logl(FordVehTrlrTarVld_Cnt_T_logl);
(void)Rte_Write_FordVehTrlrAidTrakgStVld_Logl(FordVehTrlrTrakgStVld_Cnt_T_logl);
(void)Rte_Write_TrlrAidStsThreePrsntInt_Logl(TrlrAidStsThreePrsntInt_Cnt_T_logl);
 
 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordMsg459BusHiSpd_STOP_SEC_CODE
#include "FordMsg459BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 
 /*****************************************************************************
  * Name            : DiagEna
  * Description     : Implementation of "DiagEna" subsystem in model.
  * Inputs          : FordCanDtcInhb_Cnt_T_logl,
					  FordTrlrBackupAssiEnad_Cnt_T_logl,
					  *DiagEna_Cnt_T_log1.
  * Outputs         : NA.
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg459BusHiSpd_CODE) DiagEna(VAR(boolean, AUTOMATIC)FordCanDtcInhb_Cnt_T_logl,
                                                   VAR(boolean, AUTOMATIC)FordTrlrBackupAssiEnad_Cnt_T_logl, 
				                                   P2VAR(boolean, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR) DiagEna_Cnt_T_log1)
{
  if ((FordCanDtcInhb_Cnt_T_logl == DIAGENA_CNT_LGC) && (FordTrlrBackupAssiEnad_Cnt_T_logl == FEATACTV_CNT_LGC))
  {
	*DiagEna_Cnt_T_log1 = TRUE;
  }
  else
  {
	*DiagEna_Cnt_T_log1 = FALSE;
  }
}
 
 /*****************************************************************************
  * Name            : DiagcChk
  * Description     : Implementation of "DiagcChk" subsystem in model.
  * Inputs          : DiagEna_Cnt_T_log1,
					  FordEpsLifeCycMod_Cnt_T_u08,
					  *BusHiSpdMissTiThd_Cnt_T_u16.
  * Outputs         : NA.
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg459BusHiSpd_CODE)DiagcChk(VAR(boolean, AUTOMATIC) DiagEna_Cnt_T_log1,
                                                       VAR(uint8, AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08,
                                                       P2VAR(uint16, AUTOMATIC, RTE_FORDMSG459BUSHISPD_APPL_VAR)BusHiSpdMissTiThd_Cnt_T_u16)
 {
	VAR(uint32,AUTOMATIC)TiSpan_MilliSec_T_u32;
	
	if (DiagEna_Cnt_T_log1 == TRUE)
	{
	 
	 /* Start of Enabled */
	 if(FordEpsLifeCycMod_Cnt_T_u08 == MODSEL_CNT_U08)
	 {
		 *BusHiSpdMissTiThd_Cnt_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
	 }
	 else
	 {
		 *BusHiSpdMissTiThd_Cnt_T_u16 = Rte_Prm_FordMsg459BusHiSpdDiagMsgMissTmrThd_Val();
	 }
	 
	 (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehMsg459MissTmr(), &TiSpan_MilliSec_T_u32);
	 
	 if (TiSpan_MilliSec_T_u32 > ((uint32)(*BusHiSpdMissTiThd_Cnt_T_u16) * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	 {
		 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1A4, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
	 }
	 
	  /* End of Enabled */
	}
	else
	{
	 /* Start of Reset TImers*/
	 
	 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehMsg459MissTmr());
	 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1A4, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
	 /* End of Reset TImers*/
	 
	}
		 
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
