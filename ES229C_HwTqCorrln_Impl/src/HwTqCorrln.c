/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HwTqCorrln.c
 *        Config:  C:/Users/nz2796/Documents/Matt/TestComponent/ES229C_HwTqCorrln_Impl/tools/Component.dpa
 *     SW-C Type:  HwTqCorrln
 *  Generated at:  Wed Mar  8 13:48:08 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HwTqCorrln>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : HwTqArbn.c
* Module Description: Implementation of Handwheel Torque Correlation FDD ES229C
* Project           : CBD
* Author            : Matthew Leser
***********************************************************************************************************************
* Version Control:
* %version:           2 %
* %derived_by:        nz2796 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 02/21/17   1       ML        Initial version                                                                EA4#9638
* 04/18/17   2       ML        Updated for Anomaly fix EA4#11034                                              EA4#11134
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
 * SigQlfr1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_HwTqCorrln.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "FltInj.h"
#include "NxtrMath.h"
#include "HwTqCorrln_Cfg.h"
 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */ 
 
#define HWTQCORRLNSTSMAXLMT_CNT_U08					15U
#define HWTQCORRLNSTSMINLMT_CNT_U08					 0U
#define HWTQIDPDTSIGMAXLMT_CNT_U08					 4U
#define HWTQIDPDTSIGMINLMT_CNT_U08					 0U
#define HWTQIDPDTSIGVLDMINLMT_CNT_U08   			 2U
#define BITSHIFTB_CNT_U08							 1U
#define BITSHIFTC_CNT_U08							 2U
#define BITSHIFTD_CNT_U08							 3U
#define BITSHIFTAC_CNT_U08							 1U
#define BITSHIFTAD_CNT_U08							 2U
#define BITSHIFTBC_CNT_U08							 3U
#define BITSHIFTBD_CNT_U08							 4U
#define BITSHIFTCD_CNT_U08							 5U
#define DHWTQCORRLNIMDTCORRLNSTSMINLMT_CNT_U08		 0U
#define DHWTQCORRLNIMDTCORRLNSTSMAXLMT_CNT_U08		63U

static FUNC(boolean, HWTQCORRLN_CODE) HwTqSigAvl(VAR(uint8, AUTOMATIC) HwTqRollgCntr_Cnt_T_u08,
												 VAR(SigQlfr1, AUTOMATIC) HwTqQlfr_Cnt_T_enum,
												 P2VAR(uint8, AUTOMATIC, AUTOMATIC) RollgCntrPrev_Cnt_T_u08,
												 P2VAR(uint8, AUTOMATIC, AUTOMATIC) StallCntr_Cnt_T_u08,
												 P2VAR(uint8, AUTOMATIC, AUTOMATIC) SigAvl_Cnt_T_u08);
												 
static FUNC(boolean, HWTQCORRLN_CODE) HwTqCorrlnFunc(VAR(float32, AUTOMATIC) Sig1_HwNwtMtr_T_f32,
													 VAR(float32, AUTOMATIC) Sig2_HwNwtMtr_T_f32,
													 P2VAR(uint8, AUTOMATIC, AUTOMATIC) SigCorrln_Cnt_T_u08);												 

static FUNC(boolean, HWTQCORRLN_CODE) LongTermCorrln(VAR(boolean, AUTOMATIC) HwTqCorrln_Cnt_T_logl,
													 VAR(NtcNr1, AUTOMATIC) NtcNr_Cnt_T_enum,
													 VAR(uint8, AUTOMATIC) NtcStInfo_Cnt_T_u08);
													 
static FUNC(boolean, HWTQCORRLN_CODE) ANDFunc(VAR(boolean, AUTOMATIC) Input1_Cnt_T_logl,
											  VAR(boolean, AUTOMATIC) Input2_Cnt_T_logl,
											  VAR(boolean, AUTOMATIC) Input3_Cnt_T_logl);
											  
static FUNC(boolean, HWTQCORRLN_CODE) ORFunc(VAR(boolean, AUTOMATIC) Input1_Cnt_T_logl,
											 VAR(boolean, AUTOMATIC) Input2_Cnt_T_logl,
											 VAR(boolean, AUTOMATIC) Input3_Cnt_T_logl);											  
													 
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
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
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
 * SigQlfr1: Enumeration of integer in interval [0...255] with enumerators
 *   SIGQLFR_NORES (0U)
 *   SIGQLFR_PASSD (1U)
 *   SIGQLFR_FAILD (2U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_HwTqARollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqAStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqBRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqBStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqCRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqCStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqDRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqDStallCntrPrev(void)
 *   uint8 *Rte_Pim_dHwTqCorrlnAvl(void)
 *   uint8 *Rte_Pim_dHwTqCorrlnImdtCorrlnSts(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HwTqCorrlnImdtCorrlnChkFailThd_Val(void)
 *   uint16 Rte_Prm_HwTqCorrlnNtcFailStep_Val(void)
 *   uint16 Rte_Prm_HwTqCorrlnNtcPassStep_Val(void)
 *   uint8 Rte_Prm_HwTqArbnHwTqMaxStallCnt_Val(void)
 *
 *********************************************************************************************************************/


#define HwTqCorrln_START_SEC_CODE
#include "HwTqCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTqCorrlnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTqCorrlnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwTqCorrln_CODE) HwTqCorrlnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTqCorrlnInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTqCorrlnPer1
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
 *   Std_ReturnType Rte_Read_HwTqA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqAQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqARollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqBQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqBRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqCQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqCRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqD_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqDQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqDRollgCntr_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTqCorrlnSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_HwTqIdptSig_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTqCorrlnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwTqCorrln_CODE) HwTqCorrlnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTqCorrlnPer1
 *********************************************************************************************************************/

 VAR(float32, AUTOMATIC) HwTqA_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) HwTqB_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) HwTqC_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) HwTqD_HwNwtMtr_T_f32;
 
 VAR(SigQlfr1, AUTOMATIC) HwTqAQlfr_Cnt_T_enum;
 VAR(SigQlfr1, AUTOMATIC) HwTqBQlfr_Cnt_T_enum;
 VAR(SigQlfr1, AUTOMATIC) HwTqCQlfr_Cnt_T_enum;
 VAR(SigQlfr1, AUTOMATIC) HwTqDQlfr_Cnt_T_enum;

 VAR(uint8, AUTOMATIC) HwTqARollgCntr_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqBRollgCntr_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqCRollgCntr_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqDRollgCntr_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqAAvl_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqBAvl_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqCAvl_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqDAvl_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) SigABCorrln_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) SigACCorrln_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) SigADCorrln_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) SigBCCorrln_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) SigBDCorrln_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) SigCDCorrln_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqCorrlnImdtCorrlnSts_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) InvHwTqCorrlnImdtCorrlnSts_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) TmpHwTqASts_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) TmpHwTqBSts_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) TmpHwTqCSts_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) TmpHwTqDSts_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) TmpHwTqCorrlnSts_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqCorrlnSts_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqAIdptSig_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqBIdptSig_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqCIdptSig_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqDIdptSig_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqIdptSig_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) TmpHwTqIdptSig_Cnt_T_u08;
 
 VAR(boolean, AUTOMATIC) HwTqAAvl_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) HwTqBAvl_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) HwTqCAvl_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) HwTqDAvl_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) HwTqACorrln_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) HwTqBCorrln_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) HwTqCCorrln_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) HwTqDCorrln_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) SigABCorrln_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) SigACCorrln_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) SigADCorrln_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) SigBCCorrln_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) SigBDCorrln_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) SigCDCorrln_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) HwTqANotFaild_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) HwTqBNotFaild_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) HwTqCNotFaild_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) HwTqDNotFaild_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) TrueInp_Uls_T_lgc = TRUE;
 
 
 (void)Rte_Read_HwTqA_Val(&HwTqA_HwNwtMtr_T_f32);
 (void)Rte_Read_HwTqB_Val(&HwTqB_HwNwtMtr_T_f32);
 (void)Rte_Read_HwTqC_Val(&HwTqC_HwNwtMtr_T_f32);
 (void)Rte_Read_HwTqD_Val(&HwTqD_HwNwtMtr_T_f32);
 (void)Rte_Read_HwTqAQlfr_Val(&HwTqAQlfr_Cnt_T_enum);
 (void)Rte_Read_HwTqBQlfr_Val(&HwTqBQlfr_Cnt_T_enum);
 (void)Rte_Read_HwTqCQlfr_Val(&HwTqCQlfr_Cnt_T_enum);
 (void)Rte_Read_HwTqDQlfr_Val(&HwTqDQlfr_Cnt_T_enum);
 (void)Rte_Read_HwTqARollgCntr_Val(&HwTqARollgCntr_Cnt_T_u08);
 (void)Rte_Read_HwTqBRollgCntr_Val(&HwTqBRollgCntr_Cnt_T_u08);
 (void)Rte_Read_HwTqCRollgCntr_Val(&HwTqCRollgCntr_Cnt_T_u08);
 (void)Rte_Read_HwTqDRollgCntr_Val(&HwTqDRollgCntr_Cnt_T_u08);
 
 /*** Signal Availability ***/
 
 HwTqAAvl_Cnt_T_logl = HwTqSigAvl(HwTqARollgCntr_Cnt_T_u08,
								 HwTqAQlfr_Cnt_T_enum,
								 Rte_Pim_HwTqARollgCntrPrev(),
								 Rte_Pim_HwTqAStallCntrPrev(),
								 &HwTqAAvl_Cnt_T_u08);
			
 HwTqBAvl_Cnt_T_logl = HwTqSigAvl(HwTqBRollgCntr_Cnt_T_u08,
								 HwTqBQlfr_Cnt_T_enum,
								 Rte_Pim_HwTqBRollgCntrPrev(),
								 Rte_Pim_HwTqBStallCntrPrev(), 
								 &HwTqBAvl_Cnt_T_u08);
			
 HwTqCAvl_Cnt_T_logl = HwTqSigAvl(HwTqCRollgCntr_Cnt_T_u08,
								 HwTqCQlfr_Cnt_T_enum,
								 Rte_Pim_HwTqCRollgCntrPrev(),
								 Rte_Pim_HwTqCStallCntrPrev(),
								 &HwTqCAvl_Cnt_T_u08);
			
 HwTqDAvl_Cnt_T_logl = HwTqSigAvl(HwTqDRollgCntr_Cnt_T_u08,
								 HwTqDQlfr_Cnt_T_enum,
								 Rte_Pim_HwTqDRollgCntrPrev(),
								 Rte_Pim_HwTqDStallCntrPrev(),
								 &HwTqDAvl_Cnt_T_u08);

  *Rte_Pim_dHwTqCorrlnAvl() = HwTqAAvl_Cnt_T_u08 + (uint8)(HwTqBAvl_Cnt_T_u08 << BITSHIFTB_CNT_U08) + (uint8)(HwTqCAvl_Cnt_T_u08 << BITSHIFTC_CNT_U08) + (uint8)(HwTqDAvl_Cnt_T_u08 << BITSHIFTD_CNT_U08);

 /***Immediate Correlation Status ***/
 
 SigABCorrln_Cnt_T_logl = HwTqCorrlnFunc(HwTqA_HwNwtMtr_T_f32,
										HwTqB_HwNwtMtr_T_f32,
										&SigABCorrln_Cnt_T_u08);
									  
 SigACCorrln_Cnt_T_logl = HwTqCorrlnFunc(HwTqA_HwNwtMtr_T_f32,
										HwTqC_HwNwtMtr_T_f32,
										&SigACCorrln_Cnt_T_u08);
									  
 SigADCorrln_Cnt_T_logl = HwTqCorrlnFunc(HwTqA_HwNwtMtr_T_f32,
										HwTqD_HwNwtMtr_T_f32,
										&SigADCorrln_Cnt_T_u08);
									  
 SigBCCorrln_Cnt_T_logl = HwTqCorrlnFunc(HwTqB_HwNwtMtr_T_f32,
										HwTqC_HwNwtMtr_T_f32,
										&SigBCCorrln_Cnt_T_u08);
									  
 SigBDCorrln_Cnt_T_logl = HwTqCorrlnFunc(HwTqB_HwNwtMtr_T_f32,
										HwTqD_HwNwtMtr_T_f32,
										&SigBDCorrln_Cnt_T_u08);
									  
 SigCDCorrln_Cnt_T_logl = HwTqCorrlnFunc(HwTqC_HwNwtMtr_T_f32,
										HwTqD_HwNwtMtr_T_f32,
										&SigCDCorrln_Cnt_T_u08);
										
 HwTqACorrln_Cnt_T_logl = ORFunc(SigABCorrln_Cnt_T_logl,
								SigACCorrln_Cnt_T_logl,
								SigADCorrln_Cnt_T_logl);
 
 HwTqBCorrln_Cnt_T_logl = ORFunc(SigABCorrln_Cnt_T_logl,
								SigBCCorrln_Cnt_T_logl,
								SigBDCorrln_Cnt_T_logl);

 HwTqCCorrln_Cnt_T_logl = ORFunc(SigACCorrln_Cnt_T_logl,
								SigBCCorrln_Cnt_T_logl,
								SigCDCorrln_Cnt_T_logl);

 HwTqDCorrln_Cnt_T_logl = ORFunc(SigADCorrln_Cnt_T_logl,
								SigBDCorrln_Cnt_T_logl,
								SigCDCorrln_Cnt_T_logl);								 
 									
 HwTqCorrlnImdtCorrlnSts_Cnt_T_u08    = SigABCorrln_Cnt_T_u08 + (uint8)(SigACCorrln_Cnt_T_u08 << BITSHIFTAC_CNT_U08) + (uint8)(SigADCorrln_Cnt_T_u08 << BITSHIFTAD_CNT_U08) + 
										(uint8)(SigBCCorrln_Cnt_T_u08 << BITSHIFTBC_CNT_U08) + (uint8)(SigBDCorrln_Cnt_T_u08 <<BITSHIFTBD_CNT_U08) + (uint8)(SigCDCorrln_Cnt_T_u08 << BITSHIFTCD_CNT_U08);
 *Rte_Pim_dHwTqCorrlnImdtCorrlnSts()  = HwTqCorrlnImdtCorrlnSts_Cnt_T_u08; 
 InvHwTqCorrlnImdtCorrlnSts_Cnt_T_u08 = Lim_u08((uint8)~HwTqCorrlnImdtCorrlnSts_Cnt_T_u08, DHWTQCORRLNIMDTCORRLNSTSMINLMT_CNT_U08, DHWTQCORRLNIMDTCORRLNSTSMAXLMT_CNT_U08);

 /*** Long Term Correlation ***/
 
 HwTqANotFaild_Cnt_T_logl = LongTermCorrln(HwTqACorrln_Cnt_T_logl,
										  HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM,
										  InvHwTqCorrlnImdtCorrlnSts_Cnt_T_u08);
 HwTqBNotFaild_Cnt_T_logl = LongTermCorrln(HwTqBCorrln_Cnt_T_logl,
										  HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM,
										  InvHwTqCorrlnImdtCorrlnSts_Cnt_T_u08);
 HwTqCNotFaild_Cnt_T_logl = LongTermCorrln(HwTqCCorrln_Cnt_T_logl,
										  HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM,
										  InvHwTqCorrlnImdtCorrlnSts_Cnt_T_u08);
 HwTqDNotFaild_Cnt_T_logl = LongTermCorrln(HwTqDCorrln_Cnt_T_logl,
										  HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM,
										  InvHwTqCorrlnImdtCorrlnSts_Cnt_T_u08);
										  
 /*** Generate CorrlnSts Output ***/
 
 TmpHwTqASts_Cnt_T_u08 = ANDFunc(HwTqAAvl_Cnt_T_logl, 
								 HwTqACorrln_Cnt_T_logl, 
								 HwTqANotFaild_Cnt_T_logl);
									  
 TmpHwTqBSts_Cnt_T_u08 = ANDFunc(HwTqBAvl_Cnt_T_logl, 
								 HwTqBCorrln_Cnt_T_logl, 
								 HwTqBNotFaild_Cnt_T_logl);

 TmpHwTqCSts_Cnt_T_u08 = ANDFunc(HwTqCAvl_Cnt_T_logl, 
								 HwTqCCorrln_Cnt_T_logl, 
								 HwTqCNotFaild_Cnt_T_logl);
								 
 TmpHwTqDSts_Cnt_T_u08 = ANDFunc(HwTqDAvl_Cnt_T_logl, 
								 HwTqDCorrln_Cnt_T_logl, 
								 HwTqDNotFaild_Cnt_T_logl);
 
 TmpHwTqCorrlnSts_Cnt_T_u08 = TmpHwTqASts_Cnt_T_u08 + (uint8)(TmpHwTqBSts_Cnt_T_u08 << BITSHIFTB_CNT_U08) + (uint8)(TmpHwTqCSts_Cnt_T_u08 << BITSHIFTC_CNT_U08) + (uint8)(TmpHwTqDSts_Cnt_T_u08 << BITSHIFTD_CNT_U08);
 HwTqCorrlnSts_Cnt_T_u08 = Lim_u08(TmpHwTqCorrlnSts_Cnt_T_u08, HWTQCORRLNSTSMINLMT_CNT_U08, HWTQCORRLNSTSMAXLMT_CNT_U08);
 
 /*** Generate Idpt Signals ***/
 
 HwTqAIdptSig_Cnt_T_u08 = ANDFunc(HwTqAAvl_Cnt_T_logl, 
								  HwTqANotFaild_Cnt_T_logl, 
								  TrueInp_Uls_T_lgc);
									   
 HwTqBIdptSig_Cnt_T_u08 = ANDFunc(HwTqBAvl_Cnt_T_logl, 
								  HwTqBNotFaild_Cnt_T_logl, 
								  TrueInp_Uls_T_lgc);
								  
 HwTqCIdptSig_Cnt_T_u08 = ANDFunc(HwTqCAvl_Cnt_T_logl, 
								  HwTqCNotFaild_Cnt_T_logl, 
								  TrueInp_Uls_T_lgc);
								  
 HwTqDIdptSig_Cnt_T_u08 = ANDFunc(HwTqDAvl_Cnt_T_logl, 
								  HwTqDNotFaild_Cnt_T_logl, 
								  TrueInp_Uls_T_lgc);	
								  
 TmpHwTqIdptSig_Cnt_T_u08 = HwTqAIdptSig_Cnt_T_u08 + HwTqBIdptSig_Cnt_T_u08 + HwTqCIdptSig_Cnt_T_u08 + HwTqDIdptSig_Cnt_T_u08;
 
 if(TmpHwTqIdptSig_Cnt_T_u08 < HWTQIDPDTSIGVLDMINLMT_CNT_U08)
 {
	TmpHwTqIdptSig_Cnt_T_u08 = HWTQIDPDTSIGMINLMT_CNT_U08;
 }
 HwTqIdptSig_Cnt_T_u08 = Lim_u08(TmpHwTqIdptSig_Cnt_T_u08, HWTQIDPDTSIGMINLMT_CNT_U08, HWTQIDPDTSIGMAXLMT_CNT_U08);
 
 #if (STD_ON == FLTINJENA)    
    (void) Rte_Call_FltInj_u08_Oper(&HwTqIdptSig_Cnt_T_u08,FLTINJ_HWTQCORRLN_HWTQIDPTSIG);          
 #endif
 
 (void)Rte_Write_HwTqCorrlnSts_Val(HwTqCorrlnSts_Cnt_T_u08);
 (void)Rte_Write_HwTqIdptSig_Val(HwTqIdptSig_Cnt_T_u08);
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HwTqCorrln_STOP_SEC_CODE
#include "HwTqCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/****************************************************************************************************
* Name          :   HwTqSigAvl
* Description   :   This function implements the "HwTq Signal Avlability" blocks for A, B, C, & D                 
* Inputs        :   HwTqRollgCntr_Cnt_T_u08, HwTqQlfr_Cnt_T_enum, *RollgCntrPrev_Cnt_T_u08
*					*StallCntr_Cnt_T_u08		
* Outputs       :   HwTqArbnAvl_Cnt_T_logl, *RollgCntrPrev_Cnt_T_u08, *StallCntr_Cnt_T_u08
* Usage Notes   :	None
****************************************************************************************************/
static FUNC(boolean, HWTQCORRLN_CODE) HwTqSigAvl(VAR(uint8, AUTOMATIC) HwTqRollgCntr_Cnt_T_u08,
												 VAR(SigQlfr1, AUTOMATIC) HwTqQlfr_Cnt_T_enum,
												 P2VAR(uint8, AUTOMATIC, AUTOMATIC) RollgCntrPrev_Cnt_T_u08,
												 P2VAR(uint8, AUTOMATIC, AUTOMATIC) StallCntr_Cnt_T_u08,
												 P2VAR(uint8, AUTOMATIC, AUTOMATIC) SigAvl_Cnt_T_u08)
{
	VAR(boolean, AUTOMATIC) SigAvl_Cnt_T_logl;
	
	if(HwTqRollgCntr_Cnt_T_u08 == *RollgCntrPrev_Cnt_T_u08)
	{
		if(*StallCntr_Cnt_T_u08 < Rte_Prm_HwTqArbnHwTqMaxStallCnt_Val())
		{
			*StallCntr_Cnt_T_u08 = *StallCntr_Cnt_T_u08 + 1U;
		}
	}
	else
	{
		*StallCntr_Cnt_T_u08 = 0U;
	}
		
	*RollgCntrPrev_Cnt_T_u08 = HwTqRollgCntr_Cnt_T_u08;	
			
	if((*StallCntr_Cnt_T_u08 < Rte_Prm_HwTqArbnHwTqMaxStallCnt_Val()) && (HwTqQlfr_Cnt_T_enum < SIGQLFR_FAILD))
	{
		SigAvl_Cnt_T_logl = TRUE;
		*SigAvl_Cnt_T_u08 = 1U;
	}
	else
	{
		SigAvl_Cnt_T_logl = FALSE;
		*SigAvl_Cnt_T_u08 = 0U;
	}
	
	return SigAvl_Cnt_T_logl;
}

/****************************************************************************************************
* Name          :   HwTqCorrlnFunc
* Description   :   This function implements the "HwTq Correlation" blocks                 
* Inputs        :   Sig1_HwNwtMtr_T_f32, Sig2_HwNwtMtr_T_f32		
* Outputs       :   SigCorrln_Cnt_T_logl
* Usage Notes   :	None
****************************************************************************************************/
static FUNC(boolean, HWTQCORRLN_CODE) HwTqCorrlnFunc(VAR(float32, AUTOMATIC) Sig1_HwNwtMtr_T_f32,
													 VAR(float32, AUTOMATIC) Sig2_HwNwtMtr_T_f32,
													 P2VAR(uint8, AUTOMATIC, AUTOMATIC) SigCorrln_Cnt_T_u08)
{
	VAR(boolean, AUTOMATIC) SigCorrln_Cnt_T_logl;
	
	if((Abslt_f32_f32(Sig1_HwNwtMtr_T_f32 - Sig2_HwNwtMtr_T_f32)) < Rte_Prm_HwTqCorrlnImdtCorrlnChkFailThd_Val())
	{
		SigCorrln_Cnt_T_logl = TRUE;
		*SigCorrln_Cnt_T_u08 = 1U;
	}
	else
	{
		SigCorrln_Cnt_T_logl = FALSE;
		*SigCorrln_Cnt_T_u08 = 0U;
	}
	
	return SigCorrln_Cnt_T_logl;
}

/****************************************************************************************************
* Name          : LongTermCorrln  
* Description   : This function implements "HwTq Long Term Correlation" block                   
* Inputs        : HwTqCorrln_Cnt_T_logl, NtcNr_Cnt_T_enum, NtcStInfo_Cnt_T_u08		
* Outputs       : HwTqNotFaild_Cnt_T_logl  
* Usage Notes   : None
****************************************************************************************************/
static FUNC(boolean, HWTQCORRLN_CODE) LongTermCorrln(VAR(boolean, AUTOMATIC) HwTqCorrln_Cnt_T_logl,
													 VAR(NtcNr1, AUTOMATIC) NtcNr_Cnt_T_enum,
													 VAR(uint8, AUTOMATIC) NtcStInfo_Cnt_T_u08)
{
	VAR(boolean, AUTOMATIC) HwTqNotFaild_Cnt_T_logl = FALSE;
	VAR(NtcSts1, AUTOMATIC) NtcSts_Cnt_T_enum;
	VAR(uint16, AUTOMATIC) Debstep_Cnt_T_u16;
	VAR(SigQlfr1, AUTOMATIC) SigQlfr_Cnt_T_enum;
	
	if(HwTqCorrln_Cnt_T_logl == FALSE)
	{
		NtcSts_Cnt_T_enum = NTCSTS_PREFAILD;
		Debstep_Cnt_T_u16 = Rte_Prm_HwTqCorrlnNtcFailStep_Val();
	}
	else
	{
		NtcSts_Cnt_T_enum = NTCSTS_PREPASSD;
		Debstep_Cnt_T_u16 = Rte_Prm_HwTqCorrlnNtcPassStep_Val();
	}
	
	(void)Rte_Call_SetNtcSts_Oper(NtcNr_Cnt_T_enum, NtcStInfo_Cnt_T_u08, NtcSts_Cnt_T_enum, Debstep_Cnt_T_u16);
	(void)Rte_Call_GetNtcQlfrSts_Oper(NtcNr_Cnt_T_enum, &SigQlfr_Cnt_T_enum);
	
	if(SigQlfr_Cnt_T_enum < SIGQLFR_FAILD)
	{
		HwTqNotFaild_Cnt_T_logl = TRUE;
	}
	
	return HwTqNotFaild_Cnt_T_logl;
}

/****************************************************************************************************
* Name          :   ANDFunc
* Description   :   This function ANDs inputs. Done to reduce path count                 
* Inputs        :   Input1_Cnt_T_logl, Input2_Cnt_T_logl, Input3_Cnt_T_logl		
* Outputs       :   Outp1_Cnt_T_u08
* Usage Notes   :	None
****************************************************************************************************/
static FUNC(boolean, HWTQCORRLN_CODE) ANDFunc(VAR(boolean, AUTOMATIC) Input1_Cnt_T_logl,
											  VAR(boolean, AUTOMATIC) Input2_Cnt_T_logl,
											  VAR(boolean, AUTOMATIC) Input3_Cnt_T_logl)
{
	VAR(boolean, AUTOMATIC) Outp1_Cnt_T_u08 = 0U;
	
 if((Input1_Cnt_T_logl == TRUE) && (Input2_Cnt_T_logl == TRUE) && (Input3_Cnt_T_logl == TRUE))
 {
	Outp1_Cnt_T_u08 = 1U;
 }
 
 return Outp1_Cnt_T_u08;
 
}

/****************************************************************************************************
* Name          :   ORFunc
* Description   :   This function ORs inputs. Done to reduce path count                 
* Inputs        :   Input1_Cnt_T_logl, Input2_Cnt_T_logl, Input3_Cnt_T_logl		
* Outputs       :   Outp1_Cnt_T_logl
* Usage Notes   :	None
****************************************************************************************************/
static FUNC(boolean, HWTQCORRLN_CODE) ORFunc(VAR(boolean, AUTOMATIC) Input1_Cnt_T_logl,
											 VAR(boolean, AUTOMATIC) Input2_Cnt_T_logl,
											 VAR(boolean, AUTOMATIC) Input3_Cnt_T_logl)
{
	VAR(boolean, AUTOMATIC) Outp1_Cnt_T_logl = FALSE;
	
 if((Input1_Cnt_T_logl == TRUE) || (Input2_Cnt_T_logl == TRUE) || (Input3_Cnt_T_logl == TRUE))
 {
	Outp1_Cnt_T_logl = TRUE;
 }
 
 return Outp1_Cnt_T_logl;
 
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
