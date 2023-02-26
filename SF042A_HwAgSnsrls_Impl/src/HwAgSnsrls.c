/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HwAgSnsrls.c
 *     SW-C Type:  HwAgSnsrls
 *  Generated at:  Mon Mar 27 10:28:56 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HwAgSnsrls>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : HwAgSnsrls.c
* Module Description: Implementation of Handwheel Angle Sensorless(FDD SF042A)
* Project           : CBD 
* Author            : TATA ELXSI
************************************************************************************************************************
* Version Control:
* %version          : 6 %
* %derived_by       : nz2796 %
*----------------------------------------------------------------------------------------------------------------------
* Date        Rev      Author  Change Description                                                              SCR #
* -------   -------  --------  ---------------------------------------------------------------------------  -----------
* 06/28/16     1       TATA     Initial Version                                                               EA4#6414                                                               
* 07/22/16     2       KK       Corrected SetRamBlockStatus to Synchronous Service Invocation in Init1  	  EA4#6647                                                               
* 09/19/16     3       HM       Implemented design 1.2.0, 1.3.0 and fixed anomaly 6881                        EA4#7073                                                                
* 10/21/16     4       HM       Implemented design 1.4.0 and fixed anomaly 7844                               EA4#7998
* 11/22/16     5       TATA     Updated Rev as per design 1.6.0                                     EA4#8158, EA4#8286 
* 03/24/17     6       ML		Updated Rev as per design 2.0.0												  EA4#9330  
***********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Data Types:
 ===========
  NtcNr1
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  SelnCaseSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  SigQlfr1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  s18p13
    sint32 represents integers with a minimum value of -2147483648 and a maximum 
     value of 2147483647. The order-relation on sint32 is: x < y if y - x is
     positive. sint32 has a lexical representation consisting of an optional sign 
     allowed by a finite-length sequence of decimal digits (#x30-#x39). If the 
     sign is omitted, "+" is assumed. 
     
     For example: -1, 0, -12688778, +10000, 250098675.

 *********************************************************************************************************************/

#include "Rte_HwAgSnsrls.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"
#include "NxtrFil.h"
 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/* -----[ Constant Definitions ]------------------------------------------------------------------------------------ */

#define MILLISECTO100MICROSEC_ULS_U32 10U
#define HWAGLOLIM_HWDEG_F32          (-1440.0F)
#define HWAGHILIM_HWDEG_F32          1440.0F
#define HWCONFLOLIM_ULS_F32          0.0F
#define	HWCONFHILIM_ULS_F32          1.0F


/* -----[ Local Function Declarations ]----------------------------------------------------------------------------- */

static FUNC(void, HwAgSnsrls_CODE) WhlSpdAutocentr(boolean WhlFrqVld_Cnt_T_logl, 
                                                   float32 WhlLeFrq_Hz_T_f32, 
                                                   float32 WhlRiFrq_Hz_T_f32, 
                                                   float32 VehSpd_Kph_T_f32, 
                                                   float32 RelHwAg_HwDeg_T_f32,
												   P2VAR(float32, HwAgSnsrls_CODE, AUTOMATIC) WhlSpdHwConf_Uls_T_f32);
												   
static FUNC(void,  HwAgSnsrls_CODE) VehDynAutoCentr(float32 MotTqCmdCrf_MotNwtMtr_T_f32,  
                                                    float32 HwTq_HwNwtMtr_T_f32, 
                                                    float32 VehYawRate_VehDegPerSec_T_f32, 
													float32 VehSpd_Kph_T_f32, 
													float32 MotVelCrf_MotRadPerSec_T_f32, 
													boolean VehSpdVld_Cnt_T_logl, 
													float32 RelHwAg_HwDeg_T_f32,
													P2VAR(float32, HwAgSnsrls_CODE, AUTOMATIC) VehDynHwConf_Uls_T_f32);
																   
static FUNC(boolean, HwAgSnsrls_CODE) PinionTqCalcandLpFilOneEna(float32 MotTqCmdCrf_MotNwtMtr_T_f32,  
																 float32 HwTq_HwNwtMtr_T_f32, 
																 float32 VehYawRate_VehDegPerSec_T_f32, 
																 float32 VehSpd_Kph_T_f32, 
																 float32 MotVelCrf_MotRadPerSec_T_f32, 
																 boolean VehSpdVld_Cnt_T_logl, 
																 float32 RelHwAg_HwDeg_T_f32);

static FUNC(void,  HwAgSnsrls_CODE) ArbtrtnSmthng(float32  FCentrHwConf_Uls_T_f32, 
											      float32  VehDynHwConf_Uls_T_f32, 
											      float32  WhlSpdHwConf_Uls_T_f32, 
											      float32  RelHwAg_HwDeg_T_f32, 
												  P2VAR(float32, HwAgSnsrls_CODE, AUTOMATIC) LrndHwConf_Uls_T_f32);

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
 * Boolean: Boolean
 * s18p13: Integer in interval [-2147483648...2147483647]
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
 * SelnCaseSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SELNCASEST_FCENTR (0U)
 *   SELNCASEST_VEHDYN (1U)
 *   SELNCASEST_WHLSPD (2U)
 *   SELNCASEST_STORDLSTPOSN (3U)
 *   SELNCASEST_CORRDPINIONAG (4U)
 * SigQlfr1: Enumeration of integer in interval [0...255] with enumerators
 *   SIGQLFR_NORES (0U)
 *   SIGQLFR_PASSD (1U)
 *   SIGQLFR_FAILD (2U)
 *
 * Record Types:
 * =============
 * StordLstPrmRec1: Record with elements
 *   PinionAg of type float32
 *   PinionAgVld of type boolean
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_CorrdPinionAgHwAgOffs(void)
 *   float32 *Rte_Pim_CorrdPinionAgHwConf(void)
 *   float32 *Rte_Pim_FCentrHwAgOffs(void)
 *   float32 *Rte_Pim_FCentrHwConf(void)
 *   float32 *Rte_Pim_MotAgOffs(void)
 *   float32 *Rte_Pim_PrevFildRelHwAg1(void)
 *   float32 *Rte_Pim_PrevHwAgOffs(void)
 *   float32 *Rte_Pim_PrevMaxHwConf(void)
 *   float32 *Rte_Pim_PrevSmotngHwAg(void)
 *   float32 *Rte_Pim_VehDynHwAgOffs(void)
 *   float32 *Rte_Pim_WhlSpdHwAgOffs(void)
 *   float32 *Rte_Pim_WhlSpdHwConf(void)
 *   float32 *Rte_Pim_dHwAgSnsrlsStordHwAg(void)
 *   float32 *Rte_Pim_dHwAgSnsrlsStordHwConf(void)
 *   float32 *Rte_Pim_dHwAgSnsrlsVehDynHwConf(void)
 *   float32 *Rte_Pim_dHwAgSnsrlsWhlSpdHwConf(void)
 *   uint32 *Rte_Pim_VehDynRefTmr1(void)
 *   uint32 *Rte_Pim_VehDynRefTmr2(void)
 *   uint32 *Rte_Pim_WhlSpdRefTmr(void)
 *   SelnCaseSt1 *Rte_Pim_SelnCaseSt(void)
 *   boolean *Rte_Pim_FCentrHwAgEna(void)
 *   boolean *Rte_Pim_MotAgOffsEna(void)
 *   boolean *Rte_Pim_PrevSmotngSt(void)
 *   boolean *Rte_Pim_PrevVehDynFil1Ena(void)
 *   boolean *Rte_Pim_PrevVehDynFil2Ena(void)
 *   boolean *Rte_Pim_WhlSpdHwAgLrndEna(void)
 *   FilLpRec1 *Rte_Pim_PinionTqFil(void)
 *   FilLpRec1 *Rte_Pim_RelHwAgFil1(void)
 *   FilLpRec1 *Rte_Pim_RelHwAgFil2(void)
 *   StordLstPrmRec1 *Rte_Pim_StordLstPrm(void)
 *   FilLpRec1 *Rte_Pim_YawRateFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   StordLstPrmRec1 *Rte_CData_StordLstPrmDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HwAgSnsrlsCorrdPinionAgHwConf_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsFCentrHwConf_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsPinionTqFilFrq_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsRelHwAgFil1Frq_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsRelHwAgFil2Frq_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsSmotngCoeff_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsSmotngStepThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsStordPinionConf_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsStordPinionConfThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsVehDynDifThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsVehDynHwConf_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsVehDynMotVelThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsVehDynPinionTqThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsVehDynVehSpdThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsVehDynYawRateThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsWhlFrqThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsWhlSpdHwAgCoeff1_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsWhlSpdHwAgCoeff2_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsWhlSpdHwAgThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsWhlSpdHwConf_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsWhlSpdRatThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsWhlSpdVehSpdThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsYawRateFilFrq_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysKineRat_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysTqRat_Val(void)
 *   uint32 Rte_Prm_HwAgSnsrlsVehDynTmr1Thd_Val(void)
 *   uint32 Rte_Prm_HwAgSnsrlsVehDynTmr2Thd_Val(void)
 *   uint32 Rte_Prm_HwAgSnsrlsWhlSpdTmrThd_Val(void)
 *
 *********************************************************************************************************************/


#define HwAgSnsrls_START_SEC_CODE
#include "HwAgSnsrls_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FSnsrlsHwCentr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <FSnsrlsHwCentr>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void FSnsrlsHwCentr_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, HwAgSnsrls_CODE) FSnsrlsHwCentr_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FSnsrlsHwCentr_Oper
 *********************************************************************************************************************/
	*Rte_Pim_FCentrHwAgEna() = TRUE; /* REQ: SF042A #61 I */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgSnsrlsInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_HwAgSnsrlsInit1_StordHwAg(float32 data)
 *   void Rte_IrvWrite_HwAgSnsrlsInit1_StordHwConf(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_NvmStordLstPrm_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, HwAgSnsrls_CODE) HwAgSnsrlsInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgSnsrlsInit1
 *********************************************************************************************************************/
    VAR(SigQlfr1, AUTOMATIC) NtcQlfr_Cnt_T_enum;
	VAR(float32, AUTOMATIC) StordHwAg_Cnt_T_f32;
	VAR(float32, AUTOMATIC) StordHwConf_Uls_T_f32;
	
	/*** PinionTqFilInit ***/
	FilLpInit(0.0F, Rte_Prm_HwAgSnsrlsPinionTqFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_PinionTqFil());
	/*** YawRateFilInit ***/
	FilLpInit(0.0F, Rte_Prm_HwAgSnsrlsYawRateFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_YawRateFil());
	/*** RelHwAgFil1Init ***/
	FilLpInit(0.0F, Rte_Prm_HwAgSnsrlsRelHwAgFil1Frq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_RelHwAgFil1());
	/*** RelHwAgFil2Init ***/
	FilLpInit(0.0F, Rte_Prm_HwAgSnsrlsRelHwAgFil2Frq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_RelHwAgFil2());
		
    (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X0BF, &NtcQlfr_Cnt_T_enum); /* REQ: SF042A #88 I */
    /* REQ: SF042A #63 I *//* REQ: SF042A #64 I */
    if ((TRUE == Rte_Pim_StordLstPrm()->PinionAgVld) && (NtcQlfr_Cnt_T_enum == SIGQLFR_PASSD))
    {
        StordHwAg_Cnt_T_f32 	= Rte_Pim_StordLstPrm()->PinionAg;
        StordHwConf_Uls_T_f32 	= Rte_Prm_HwAgSnsrlsStordPinionConf_Val();
    }
    else
    {
        StordHwAg_Cnt_T_f32 	= 0.0F;
        StordHwConf_Uls_T_f32 	= 0.0F;
    }
  /* ENDREQ: SF042A #63 *//* ENDREQ: SF042A #64 */
    *Rte_Pim_dHwAgSnsrlsStordHwAg() 	= StordHwAg_Cnt_T_f32;
    *Rte_Pim_dHwAgSnsrlsStordHwConf() 	= StordHwConf_Uls_T_f32; 
    
	Rte_Pim_StordLstPrm()->PinionAgVld = FALSE;
    *Rte_Pim_PrevVehDynFil1Ena() 		= TRUE;
	*Rte_Pim_PrevVehDynFil2Ena() 		= TRUE;
	*Rte_Pim_WhlSpdHwAgLrndEna() 		= TRUE;
    *Rte_Pim_MotAgOffsEna()             = TRUE;
	
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_VehDynRefTmr1());
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_WhlSpdRefTmr());
	
	(void)Rte_IrvWrite_HwAgSnsrlsInit1_StordHwAg(StordHwAg_Cnt_T_f32);
	(void)Rte_IrvWrite_HwAgSnsrlsInit1_StordHwConf(StordHwConf_Uls_T_f32);
	
	(void)Rte_Call_NvmStordLstPrm_SetRamBlockStatus(TRUE);
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgSnsrlsPer1
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
 *   Std_ReturnType Rte_Read_CmplncErrMotToPinion_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAgCumvAlgndCrf_Val(s18p13 *data)
 *   Std_ReturnType Rte_Read_MotAgCumvAlgndVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotTqCmdCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAgConf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehYawRate_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlFrqVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlLeFrq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlRiFrq_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgSnsrls_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAgSnsrlsConf_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_HwAgSnsrlsPer1_StordHwAg(void)
 *   float32 Rte_IrvRead_HwAgSnsrlsPer1_StordHwConf(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, HwAgSnsrls_CODE) HwAgSnsrlsPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgSnsrlsPer1
 *********************************************************************************************************************/
    /* REQ: SF042A #87 I */
	  
    VAR(sint32, AUTOMATIC) MotAgCumvAlgndCrf_MotDeg_T_s18p13;
	
	VAR(boolean, AUTOMATIC) WhlFrqVld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) VehSpdVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) MotAgCumvAlgndVld_Cnt_T_logl;
	
	VAR(float32, AUTOMATIC) CmplncErrMotToPinion_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) MotAgCumvAlgndCrf_MotDeg_T_f32;
	VAR(float32, AUTOMATIC) DivMotAgCumvAlgndCrf_MotDeg_T_f32;
    VAR(float32, AUTOMATIC) WhlLeFrq_Hz_T_f32;
    VAR(float32, AUTOMATIC) WhlRiFrq_Hz_T_f32;   
    VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
    VAR(float32, AUTOMATIC) WhlSpdHwConf_Uls_T_f32;
    VAR(float32, AUTOMATIC) RelHwAg_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) FCentrHwConf_Uls_T_f32;
	VAR(float32, AUTOMATIC) PinionAgConf_Uls_T_f32;
	VAR(float32, AUTOMATIC) PinionAg_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotTqCmdCrf_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotVelCrf_MotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) VehYawRate_VehDegPerSec_T_f32;
	VAR(float32, AUTOMATIC) VehDynHwConf_Uls_T_f32;
	VAR(float32, AUTOMATIC) LrndHwConf_Uls_T_f32;
	
	/*** Read inputs from RTE ***/
    (void)Rte_Read_WhlFrqVld_Logl(&WhlFrqVld_Cnt_T_logl);                        /* REQ: SF042A #53 I */
    (void)Rte_Read_WhlLeFrq_Val(&WhlLeFrq_Hz_T_f32);                             /* REQ: SF042A #10 I */
    (void)Rte_Read_WhlRiFrq_Val(&WhlRiFrq_Hz_T_f32);                             /* REQ: SF042A #54 I */
    (void)Rte_Read_MotAgCumvAlgndVld_Logl(&MotAgCumvAlgndVld_Cnt_T_logl);        /* REQ: SF042A #92 I */
    (void)Rte_Read_MotAgCumvAlgndCrf_Val(&MotAgCumvAlgndCrf_MotDeg_T_s18p13);    /* REQ: SF042A #58 I */
	(void)Rte_Read_CmplncErrMotToPinion_Val(&CmplncErrMotToPinion_HwDeg_T_f32);  /* REQ: SF042A #57 I */
	(void)Rte_Read_PinionAgConf_Val(&PinionAgConf_Uls_T_f32);                    /* REQ: SF042A #55 I */
	(void)Rte_Read_PinionAg_Val(&PinionAg_HwDeg_T_f32);                          /* REQ: SF042A #56 I */
	(void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);                               /* REQ: SF042A #49 I */
	(void)Rte_Read_MotTqCmdCrf_Val(&MotTqCmdCrf_MotNwtMtr_T_f32);                /* REQ: SF042A #48 I */
	(void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);                                /* REQ: SF042A #52 I */
	(void)Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);                 /* REQ: SF042A #50 I */
	(void)Rte_Read_VehYawRate_Val(&VehYawRate_VehDegPerSec_T_f32);               /* REQ: SF042A #47 I */
	(void)Rte_Read_VehSpdVld_Logl(&VehSpdVld_Cnt_T_logl);                        /* REQ: SF042A #51 I */
	
	/*** Start of RelHwAgCalcn ***/
    MotAgCumvAlgndCrf_MotDeg_T_f32 = FixdToFloat_f32_s32(MotAgCumvAlgndCrf_MotDeg_T_s18p13, NXTRFIXDPT_P13TOFLOAT_ULS_F32);
    /* REQ: SF042A #66 I */
    if(TRUE == MotAgCumvAlgndVld_Cnt_T_logl)
    {
        if(TRUE == *Rte_Pim_MotAgOffsEna())
        {
            *Rte_Pim_MotAgOffs() = MotAgCumvAlgndCrf_MotDeg_T_f32;
            *Rte_Pim_MotAgOffsEna() = FALSE;
        }
    }
    else
    {
        MotAgCumvAlgndCrf_MotDeg_T_f32 = 0.0F;
    }

    DivMotAgCumvAlgndCrf_MotDeg_T_f32 	= (MotAgCumvAlgndCrf_MotDeg_T_f32 - *Rte_Pim_MotAgOffs())/Rte_Prm_SysGlbPrmSysKineRat_Val();
    RelHwAg_HwDeg_T_f32 				= Lim_f32((DivMotAgCumvAlgndCrf_MotDeg_T_f32 + CmplncErrMotToPinion_HwDeg_T_f32), 
													HWAGLOLIM_HWDEG_F32, 
													HWAGHILIM_HWDEG_F32);
	/*** End of RelHwAgCalcn ***/
    /* ENDREQ: SF042A #66  */
   
   
    /*** Start of WhlSpdAutocentr ***/
    WhlSpdAutocentr(WhlFrqVld_Cnt_T_logl, 
                    WhlLeFrq_Hz_T_f32, 
					WhlRiFrq_Hz_T_f32, 
                    VehSpd_Kph_T_f32, 
                    RelHwAg_HwDeg_T_f32,
					&WhlSpdHwConf_Uls_T_f32);
	/*** End of WhlSpdAutocentr ***/
	
	
    /*** Start of VehDynAutoCentr ***/
	VehDynAutoCentr(MotTqCmdCrf_MotNwtMtr_T_f32,  
                    HwTq_HwNwtMtr_T_f32, 
					VehYawRate_VehDegPerSec_T_f32, 
	                VehSpd_Kph_T_f32, 
	                MotVelCrf_MotRadPerSec_T_f32, 
					VehSpdVld_Cnt_T_logl, 
					RelHwAg_HwDeg_T_f32,
					&VehDynHwConf_Uls_T_f32);
	/*** End of VehDynAutoCentr ***/	
	
	/* REQ: SF042A #69 I */
    /*** Start of FCentr ***/
    if(TRUE == *Rte_Pim_FCentrHwAgEna())
    {
        *Rte_Pim_FCentrHwAgOffs() 	= RelHwAg_HwDeg_T_f32;
        *Rte_Pim_FCentrHwConf() 	= Rte_Prm_HwAgSnsrlsFCentrHwConf_Val();
        *Rte_Pim_FCentrHwAgEna()	= FALSE;
    }
    FCentrHwConf_Uls_T_f32 = *Rte_Pim_FCentrHwConf();
	/*** End of FCentr ***/
	/* ENDREQ: SF042A #69 */ 
	
	/*** Start of Arbitrator and Smooting ***/
    ArbtrtnSmthng(FCentrHwConf_Uls_T_f32, 
				  VehDynHwConf_Uls_T_f32, 
				  WhlSpdHwConf_Uls_T_f32, 
				  RelHwAg_HwDeg_T_f32, 
				  &LrndHwConf_Uls_T_f32);
    /*** End of Arbitrator and Smooting ***/
	
	/* REQ: SF042A #97 I */ /* REQ: SF042A #98 I */
	if(PinionAgConf_Uls_T_f32 >= 1.0F)
	{
		*Rte_Pim_CorrdPinionAgHwAgOffs() = RelHwAg_HwDeg_T_f32 - PinionAg_HwDeg_T_f32;
		*Rte_Pim_CorrdPinionAgHwConf()   = Rte_Prm_HwAgSnsrlsCorrdPinionAgHwConf_Val();
	}
	else
	{
		/*** Do Nothing ***/
	}
	/* ENDREQ: SF042A #97 */ /* ENDREQ: SF042A #98 */
	
	
    /* REQ: SF042A #36 I*/ /* REQ: SF042A #72 I*/
	if(PinionAgConf_Uls_T_f32 >= Rte_Prm_HwAgSnsrlsStordPinionConfThd_Val())
	{
		Rte_Pim_StordLstPrm()->PinionAgVld = TRUE;
	}
	else
	{
	    PinionAg_HwDeg_T_f32 	= 0.0F;
		Rte_Pim_StordLstPrm()->PinionAgVld = FALSE;
	}
    /* ENDREQ: SF042A #36 */ /* ENDREQ: SF042A #72 */
	Rte_Pim_StordLstPrm()->PinionAg = Lim_f32(PinionAg_HwDeg_T_f32, HWAGLOLIM_HWDEG_F32, HWAGHILIM_HWDEG_F32);
		
	/*** Range Limit and Write Outputs to RTE ***/
	(void)Rte_Write_HwAgSnsrls_Val(Lim_f32(*Rte_Pim_PrevSmotngHwAg(), HWAGLOLIM_HWDEG_F32, HWAGHILIM_HWDEG_F32)); /* REQ: SF042A #12 I */
    (void)Rte_Write_HwAgSnsrlsConf_Val(Lim_f32(LrndHwConf_Uls_T_f32, HWCONFLOLIM_ULS_F32, HWCONFHILIM_ULS_F32));  /* REQ: SF042A #60 I */
   /*ENDREQ: SF042A #87 */
   
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RstSnsrlsHwCentr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <RstSnsrlsHwCentr>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RstSnsrlsHwCentr_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, HwAgSnsrls_CODE) RstSnsrlsHwCentr_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RstSnsrlsHwCentr_Oper
 *********************************************************************************************************************/
    /* REQ: SF042A #18 I */
	Rte_Pim_StordLstPrm()->PinionAg 	= 0.0F;
	Rte_Pim_StordLstPrm()->PinionAgVld 	= FALSE;
	*Rte_Pim_FCentrHwConf() 			= 0.0F;
    /* ENDREQ: SF042A #18 */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HwAgSnsrls_STOP_SEC_CODE
#include "HwAgSnsrls_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Name        :   WhlSpdAutocentr
* Description :   Implements "WhlSpdAutoCentr" block of FDD model
* Inputs      :   WhlFrqVld_Cnt_T_logl, WhlLeFrq_Hz_T_f32, WhlRiFrq_Hz_T_f32, VehSpd_Kph_T_f32, RelHwAg_HwDeg_T_f32.
* Outputs     :   Calculates WhlSpdHwConf_Uls_T_f32
* Usage Notes :   None
**********************************************************************************************************************/
static FUNC(void, HwAgSnsrls_CODE) WhlSpdAutocentr(boolean WhlFrqVld_Cnt_T_logl, 
                                                   float32 WhlLeFrq_Hz_T_f32, 
                                                   float32 WhlRiFrq_Hz_T_f32, 
                                                   float32 VehSpd_Kph_T_f32, 
                                                   float32 RelHwAg_HwDeg_T_f32,
												   P2VAR(float32, HwAgSnsrls_CODE, AUTOMATIC) WhlSpdHwConf_Uls_T_f32)
{
	
	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32 = 0U;
    VAR(float32, AUTOMATIC)	WhlSpdRat_Hz_T_f32;											 
	VAR(float32, AUTOMATIC) WhlSpdCalcdHwAg_Hz_T_f32;
	
	/* REQ: SF042A #65 I */ /* REQ: SF042A #85 I */
	/*** Start of WhlSpdAutoCentr ***/
	/*** WhlSpd ***/
	
	if(TRUE == WhlFrqVld_Cnt_T_logl)
    {
        if((Abslt_f32_f32(WhlLeFrq_Hz_T_f32) > Rte_Prm_HwAgSnsrlsWhlFrqThd_Val()) &&
		   (Abslt_f32_f32(WhlRiFrq_Hz_T_f32) > Rte_Prm_HwAgSnsrlsWhlFrqThd_Val()))
        {
            WhlSpdRat_Hz_T_f32	= ((WhlLeFrq_Hz_T_f32 - WhlRiFrq_Hz_T_f32) / (WhlRiFrq_Hz_T_f32 + WhlLeFrq_Hz_T_f32) );
        }
		else
        {
            WhlSpdRat_Hz_T_f32	= 0.0F;
        }

        if(Abslt_f32_f32(VehSpd_Kph_T_f32) >= Rte_Prm_HwAgSnsrlsWhlSpdVehSpdThd_Val())
        {
            (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_WhlSpdRefTmr(), &TiSpan_Cnt_T_u32);
        }
        else 
        {
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_WhlSpdRefTmr());
        } 

        if( (Abslt_f32_f32(WhlSpdRat_Hz_T_f32) >= Rte_Prm_HwAgSnsrlsWhlSpdRatThd_Val()) &&
		    (TiSpan_Cnt_T_u32 >= (Rte_Prm_HwAgSnsrlsWhlSpdTmrThd_Val() * MILLISECTO100MICROSEC_ULS_U32)) && 
			(TRUE == *Rte_Pim_WhlSpdHwAgLrndEna()) )
        {
			WhlSpdCalcdHwAg_Hz_T_f32 = ((WhlSpdRat_Hz_T_f32 * Rte_Prm_HwAgSnsrlsWhlSpdHwAgCoeff1_Val()) + Rte_Prm_HwAgSnsrlsWhlSpdHwAgCoeff2_Val());
			
			if (Abslt_f32_f32(WhlSpdCalcdHwAg_Hz_T_f32) <= Rte_Prm_HwAgSnsrlsWhlSpdHwAgThd_Val())
			{
				*Rte_Pim_WhlSpdHwAgOffs()	= RelHwAg_HwDeg_T_f32 - WhlSpdCalcdHwAg_Hz_T_f32;
				*Rte_Pim_WhlSpdHwConf()			= Rte_Prm_HwAgSnsrlsWhlSpdHwConf_Val();
				*Rte_Pim_WhlSpdHwAgLrndEna()	= FALSE;
			}
        }
		*WhlSpdHwConf_Uls_T_f32			= *Rte_Pim_WhlSpdHwConf();
    }
	/*** WhlFrqNotVld ***/
	else
	{
		*WhlSpdHwConf_Uls_T_f32			= 0.0F;
	}
	*Rte_Pim_dHwAgSnsrlsWhlSpdHwConf() = *WhlSpdHwConf_Uls_T_f32;
	/*** End of WhlSpdAutoCentr ***/
	 /* ENDREQ: SF042A #65 I */ /* ENDREQ: SF042A #85 I */
}

/*********************************************************************************************************************
* Name        :   VehDynAutoCentr
* Description :   Implements "VehDynAutoCentr" block of FDD
* Inputs      :   MotTqCmdCrf_MotNwtMtr_T_f32,  HwTq_HwNwtMtr_T_f32,  VehYawRate_VehDegPerSec_T_f32,  
*                 MotVelCrf_MotRadPerSec_T_f32,  VehSpdVld_Cnt_T_logl,  VehSpd_Kph_T_f32,  RelHwAg_HwDeg_T_f32 
* Outputs     :   Calculates VehDynHwConf_Uls_T_f32 
* Usage Notes :   None
*********************************************************************************************************************/
static FUNC(void,  HwAgSnsrls_CODE) VehDynAutoCentr(float32 MotTqCmdCrf_MotNwtMtr_T_f32,  
                                                    float32 HwTq_HwNwtMtr_T_f32, 
                                                    float32 VehYawRate_VehDegPerSec_T_f32, 
													float32 VehSpd_Kph_T_f32, 
													float32 MotVelCrf_MotRadPerSec_T_f32, 
													boolean VehSpdVld_Cnt_T_logl, 
													float32 RelHwAg_HwDeg_T_f32,
													P2VAR(float32, HwAgSnsrls_CODE, AUTOMATIC) VehDynHwConf_Uls_T_f32)
{
	VAR(uint32, AUTOMATIC) TiSpan_Cnt_T_u32 = 0U;
		
	VAR(boolean, AUTOMATIC) FilOneEna_MilliSec_T_logl;
		
	VAR(float32, AUTOMATIC) FildRelHwAg1_Uls_T_f32;
		
	FilOneEna_MilliSec_T_logl = PinionTqCalcandLpFilOneEna(MotTqCmdCrf_MotNwtMtr_T_f32,  
														  HwTq_HwNwtMtr_T_f32, 
														  VehYawRate_VehDegPerSec_T_f32, 
														  VehSpd_Kph_T_f32, 
														  MotVelCrf_MotRadPerSec_T_f32, 
														  VehSpdVld_Cnt_T_logl, 
														  RelHwAg_HwDeg_T_f32);
	/* REQ: SF042A #74 I */ 
	/*** Start of LpFilOne ***/
	if(TRUE == FilOneEna_MilliSec_T_logl)
	{
	    FildRelHwAg1_Uls_T_f32 = FilLpUpdOutp_f32(RelHwAg_HwDeg_T_f32,  Rte_Pim_RelHwAgFil1());
	}
	else
	{
	    FildRelHwAg1_Uls_T_f32 = *Rte_Pim_PrevFildRelHwAg1();
	}
	/* ENDREQ: SF042A #74 */ 
	
	*Rte_Pim_PrevFildRelHwAg1() = FildRelHwAg1_Uls_T_f32;
	/*** End of LpFilOne ***/
	
	/* REQ: SF042A #75 I */
	/*** Start of LpFilTwoEna ***/
	if( ((Abslt_f32_f32(RelHwAg_HwDeg_T_f32 - FildRelHwAg1_Uls_T_f32)) <= Rte_Prm_HwAgSnsrlsVehDynDifThd_Val()) && (TRUE == FilOneEna_MilliSec_T_logl) )
	{
	    (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_VehDynRefTmr2(), &TiSpan_Cnt_T_u32);
	}
	else
	{
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_VehDynRefTmr2());
	}
		
	if( (TiSpan_Cnt_T_u32 >= (Rte_Prm_HwAgSnsrlsVehDynTmr2Thd_Val() * MILLISECTO100MICROSEC_ULS_U32)) && (TRUE == *Rte_Pim_PrevVehDynFil2Ena()) )
	{
			Rte_Pim_RelHwAgFil2()->FilSt 	= FildRelHwAg1_Uls_T_f32;
			*Rte_Pim_PrevVehDynFil2Ena() 	= FALSE;
	}
	else
	{
	    /* Do nothing */
	}
	/*** End of LpFilTwoEna ***/
	
	/* ENDREQ: SF042A #75 */
	
	/* REQ: SF042A #76 I */ /* REQ: SF042A #77 I */
	/*** Start of LpFilTwo ***/
	if(TiSpan_Cnt_T_u32 >= (Rte_Prm_HwAgSnsrlsVehDynTmr2Thd_Val() * MILLISECTO100MICROSEC_ULS_U32))
	{
	    *Rte_Pim_VehDynHwAgOffs() = FilLpUpdOutp_f32(RelHwAg_HwDeg_T_f32,  Rte_Pim_RelHwAgFil2());
		*VehDynHwConf_Uls_T_f32 = Rte_Prm_HwAgSnsrlsVehDynHwConf_Val();
	}
	else
	{
		*VehDynHwConf_Uls_T_f32 = 0.0F;
	}
	*Rte_Pim_dHwAgSnsrlsVehDynHwConf() 	= *VehDynHwConf_Uls_T_f32;
	/*** End of LpFilTwo ***/
	/* ENDREQ: SF042A #76  */ /* ENDREQ: SF042A #77  */

}

/*****************************************************************************************************************
* Name        :   PinionTqCalcandLpFilOneEna
* Description :   Implements "PinionTqCalc" and "LpFilOneEna" blocks of FDD.
* Inputs      :   MotTqCmdCrf_MotNwtMtr_T_f32,  HwTq_HwNwtMtr_T_f32,  VehYawRate_VehDegPerSec_T_f32,  
*                 MotVelCrf_MotRadPerSec_T_f32,  VehSpdVld_Cnt_T_logl,  VehSpd_Kph_T_f32,  RelHwAg_HwDeg_T_f32 
* Outputs     :   FilOneEna_MilliSec_T_logl 
* Usage Notes :   None
*****************************************************************************************************************/
static FUNC(boolean, HwAgSnsrls_CODE) PinionTqCalcandLpFilOneEna(float32 MotTqCmdCrf_MotNwtMtr_T_f32,  
																 float32 HwTq_HwNwtMtr_T_f32, 
																 float32 VehYawRate_VehDegPerSec_T_f32, 
																 float32 VehSpd_Kph_T_f32, 
																 float32 MotVelCrf_MotRadPerSec_T_f32, 
																 boolean VehSpdVld_Cnt_T_logl, 
																 float32 RelHwAg_HwDeg_T_f32)
{
    VAR(float32, AUTOMATIC) Sum_NwtMtr_T_f32;
	VAR(float32, AUTOMATIC) FildPinionTq_Uls_T_f32;	
	VAR(float32, AUTOMATIC) YawRate_Uls_T_f32;
	
	VAR(uint32, AUTOMATIC) TiSpan_Cnt_T_u32 = 0U;
		
	VAR(boolean, AUTOMATIC) FilOneEna_MilliSec_T_logl;
	
	/* REQ: SF042A #67 I */
	Sum_NwtMtr_T_f32 		= (MotTqCmdCrf_MotNwtMtr_T_f32 * Rte_Prm_SysGlbPrmSysTqRat_Val()) + (HwTq_HwNwtMtr_T_f32);
	FildPinionTq_Uls_T_f32 	= FilLpUpdOutp_f32(Sum_NwtMtr_T_f32, Rte_Pim_PinionTqFil());
	YawRate_Uls_T_f32 		= FilLpUpdOutp_f32(VehYawRate_VehDegPerSec_T_f32, Rte_Pim_YawRateFil());
	/* ENDREQ: SF042A #67 */
	
	if( (Abslt_f32_f32(FildPinionTq_Uls_T_f32) <= Rte_Prm_HwAgSnsrlsVehDynPinionTqThd_Val()) &&      /* REQ: SF042A #73 I */
	    (Abslt_f32_f32(VehSpd_Kph_T_f32) >= Rte_Prm_HwAgSnsrlsVehDynVehSpdThd_Val()) &&              /* REQ: SF042A #73 I */
	    (Abslt_f32_f32(MotVelCrf_MotRadPerSec_T_f32) <= Rte_Prm_HwAgSnsrlsVehDynMotVelThd_Val()) &&  /* REQ: SF042A #73 I */
	    (Abslt_f32_f32(YawRate_Uls_T_f32) <= Rte_Prm_HwAgSnsrlsVehDynYawRateThd_Val()) &&            /* REQ: SF042A #73 I */
	    (VehSpdVld_Cnt_T_logl == TRUE) )                                                             /* REQ: SF042A #73 I */
		
    /* REQ: SF042A #74 I */
	{
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_VehDynRefTmr1(), &TiSpan_Cnt_T_u32);  
	}
	else
	{
	    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_VehDynRefTmr1());
	}
	
	if (TiSpan_Cnt_T_u32 >= (Rte_Prm_HwAgSnsrlsVehDynTmr1Thd_Val() * MILLISECTO100MICROSEC_ULS_U32))
	{
	    FilOneEna_MilliSec_T_logl = TRUE;	
	}
		
	else
	{
	    FilOneEna_MilliSec_T_logl = FALSE;
	}
	
	if ( (TRUE == FilOneEna_MilliSec_T_logl) && (TRUE == *Rte_Pim_PrevVehDynFil1Ena()))
	{
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_VehDynRefTmr2());
		Rte_Pim_RelHwAgFil1()->FilSt 	= RelHwAg_HwDeg_T_f32;
		*Rte_Pim_PrevVehDynFil1Ena() 	= FALSE;
	}
	
	/* ENDREQ: SF042A #74 */
    
	return(FilOneEna_MilliSec_T_logl);
}												 

/*****************************************************************************************************************************
* Name        :   ArbtrtnSmthng
* Description :   Implements "Arbitrator" and "Smoothing" blocks of FDD.
* Inputs      :   FCentrHwConf_Uls_T_f32,  VehDynHwConf_Uls_T_f32,  WhlSpdHwConf_Uls_T_f32,  RelHwAg_HwDeg_T_f32
* Outputs     :   Calculates HwAgSnsrls_HwDeg_T_f32 and PinionAgSnsrlsConf_Uls_T_f32
* Usage Notes :   None
******************************************************************************************************************************/
static FUNC(void,  HwAgSnsrls_CODE) ArbtrtnSmthng(float32 FCentrHwConf_Uls_T_f32, 
												  float32 VehDynHwConf_Uls_T_f32, 
												  float32 WhlSpdHwConf_Uls_T_f32, 
												  float32 RelHwAg_HwDeg_T_f32, 
												  P2VAR(float32, HwAgSnsrls_CODE, AUTOMATIC) LrndHwConf_Uls_T_f32)
{
	VAR(SelnCaseSt1, AUTOMATIC) SelnCaseSt_Cnt_T_enum;
	VAR(SelnCaseSt1, AUTOMATIC) SelnCaseSt1_Cnt_T_enum;
	VAR(SelnCaseSt1, AUTOMATIC) SelnCaseSt2_Cnt_T_enum;
	VAR(SelnCaseSt1, AUTOMATIC) SelnCaseSt3_Cnt_T_enum;
	
	VAR(float32, AUTOMATIC) MaxHwConf3_Uls_T_f32;
	VAR(float32, AUTOMATIC) StordHwAg_Cnt_T_f32;
	VAR(float32, AUTOMATIC) LrndHwAg_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) StordHwConf_Uls_T_f32;
	VAR(float32, AUTOMATIC) LrndHwAgDif_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) MaxHwConf1_Uls_T_f32;
	VAR(float32, AUTOMATIC) MaxHwConf2_Uls_T_f32;
	
	/* REQ: SF042A #80 I */ /* REQ: SF042A #90 I */
	/*** Start of Arbitrator ***/	
	StordHwAg_Cnt_T_f32		= Rte_IrvRead_HwAgSnsrlsPer1_StordHwAg();
	StordHwConf_Uls_T_f32	= Rte_IrvRead_HwAgSnsrlsPer1_StordHwConf();
	
	if(FCentrHwConf_Uls_T_f32 >= VehDynHwConf_Uls_T_f32)
	{
		MaxHwConf1_Uls_T_f32 = FCentrHwConf_Uls_T_f32;
		SelnCaseSt1_Cnt_T_enum = SELNCASEST_FCENTR;
	}
	else
	{
		MaxHwConf1_Uls_T_f32 = VehDynHwConf_Uls_T_f32;
		SelnCaseSt1_Cnt_T_enum = SELNCASEST_VEHDYN;
	}
	
	if(WhlSpdHwConf_Uls_T_f32 >= StordHwConf_Uls_T_f32)
	{
		MaxHwConf2_Uls_T_f32 = WhlSpdHwConf_Uls_T_f32;
		SelnCaseSt2_Cnt_T_enum = SELNCASEST_WHLSPD;
	}
	else
	{
		MaxHwConf2_Uls_T_f32 = StordHwConf_Uls_T_f32;
		SelnCaseSt2_Cnt_T_enum = SELNCASEST_STORDLSTPOSN;
	}
	
	if(MaxHwConf1_Uls_T_f32 >= MaxHwConf2_Uls_T_f32)
	{
		MaxHwConf3_Uls_T_f32= MaxHwConf1_Uls_T_f32;
		SelnCaseSt3_Cnt_T_enum = SelnCaseSt1_Cnt_T_enum;
	}
	else
	{
		MaxHwConf3_Uls_T_f32 = MaxHwConf2_Uls_T_f32;
		SelnCaseSt3_Cnt_T_enum = SelnCaseSt2_Cnt_T_enum;
	}
	
	if(*Rte_Pim_CorrdPinionAgHwConf() >= MaxHwConf3_Uls_T_f32)
	{
		*LrndHwConf_Uls_T_f32  = *Rte_Pim_CorrdPinionAgHwConf();
		SelnCaseSt_Cnt_T_enum = SELNCASEST_CORRDPINIONAG;
	}
	else
	{
		*LrndHwConf_Uls_T_f32  = MaxHwConf3_Uls_T_f32;
		SelnCaseSt_Cnt_T_enum = SelnCaseSt3_Cnt_T_enum;
	}	
		
	if(*LrndHwConf_Uls_T_f32 <= *Rte_Pim_PrevMaxHwConf())
	{
		LrndHwAg_HwDeg_T_f32 = *Rte_Pim_PrevHwAgOffs();
		*LrndHwConf_Uls_T_f32 = *Rte_Pim_PrevMaxHwConf();
		SelnCaseSt_Cnt_T_enum = *Rte_Pim_SelnCaseSt();
	}
	else
	{
		/*** Start of HwAgOffsSeln ***/
		switch(SelnCaseSt_Cnt_T_enum)
		{
			case SELNCASEST_FCENTR:
			{
				LrndHwAg_HwDeg_T_f32 = *Rte_Pim_FCentrHwAgOffs();
			}
			break;
			
			case SELNCASEST_VEHDYN:
			{
				LrndHwAg_HwDeg_T_f32 = *Rte_Pim_VehDynHwAgOffs();
			}
			break;
			
			case SELNCASEST_WHLSPD:
			{
				LrndHwAg_HwDeg_T_f32 = *Rte_Pim_WhlSpdHwAgOffs();
			}
			break;
			
			case SELNCASEST_STORDLSTPOSN:
			{
		        LrndHwAg_HwDeg_T_f32 = -(StordHwAg_Cnt_T_f32);
			}
			break;
			
			default: /*SELNCASEST_CORRDPINIONAG */
			{
		        LrndHwAg_HwDeg_T_f32 = *Rte_Pim_CorrdPinionAgHwAgOffs();
			}
			break;
		}
		/*** End of HwAgOffsSeln ***/
		/* ENDREQ: SF042A #80  */ /* ENDREQ: SF042A #90 */
	}

	*Rte_Pim_PrevHwAgOffs() = LrndHwAg_HwDeg_T_f32;
	LrndHwAg_HwDeg_T_f32 = RelHwAg_HwDeg_T_f32 - LrndHwAg_HwDeg_T_f32; /* REQ: SF042A #91 I */ 

	*Rte_Pim_PrevMaxHwConf() = *LrndHwConf_Uls_T_f32;
	
	/*** End of Arbitrator ***/	
	
	/* REQ: SF042A #89 I */
	/*** Start of Smoothing ***/
	LrndHwAgDif_HwDeg_T_f32 	= LrndHwAg_HwDeg_T_f32 - *Rte_Pim_PrevSmotngHwAg();
	
    if( (Abslt_f32_f32(LrndHwAgDif_HwDeg_T_f32) > Rte_Prm_HwAgSnsrlsSmotngStepThd_Val()) &&
	    ((*Rte_Pim_SelnCaseSt() != SelnCaseSt_Cnt_T_enum) || (TRUE == *Rte_Pim_PrevSmotngSt())) )
	{
	    LrndHwAg_HwDeg_T_f32 = ( (LrndHwAgDif_HwDeg_T_f32 * Rte_Prm_HwAgSnsrlsSmotngCoeff_Val()) + (*Rte_Pim_PrevSmotngHwAg()) );
	    *Rte_Pim_PrevSmotngSt() = TRUE;
	}
	else
	{
		*Rte_Pim_PrevSmotngSt() = FALSE;
	}
	/* ENDREQ: SF042A #89 */
	
	/*** PIMs update for next cycle ***/
	*Rte_Pim_PrevSmotngHwAg() = LrndHwAg_HwDeg_T_f32;
	*Rte_Pim_SelnCaseSt() 	  = SelnCaseSt_Cnt_T_enum;         /* REQ: SF042A #81 I */
	
	/*** End of Smoothing ***/
	
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
