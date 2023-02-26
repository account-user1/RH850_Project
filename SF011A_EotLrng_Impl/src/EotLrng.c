/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  EotLrng.c
 *     SW-C Type:  EotLrng
 *  Generated at:  Mon Feb 27 13:15:01 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <EotLrng>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : EotLrng.c
* Module Description: Implementation of End of Travel Learning SF011A. 
* Project           : CBD 
* Author            : Akhil Krishna N D (Tata Elxsi)
***********************************************************************************************************************
* Version Control:
* %version          : 6 %
* %derived_by       : nz2796 %
*-------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                            SCR #
* -------   -------  --------  --------------------------------------------------------------------------  ---------
* 09/21/15  1         AK       Initial Version                                                          	EA4#1217  
* 03/15/16  2         KK       Update as per v 1.4.0 of FDD                                        			EA4#4484
* 05/19/16  3         NS       Updated per v2.0.0 of FDD                                                    EA4#5533  
* 06/16/16  4         NS       Added over travel diagnostics                                                EA4#6116
* 12/05/16  5         TATA     Updated per v3.1.0 of FDD                                                    EA4#8186
* 02/27/17	6		  ML	   Updated per v3.2.0 of FDD													EA4#9960
* 06/28/17  7         ML       Updated to fix Anomaly EA4#12356                                            EA4#12511 
**********************************************************************************************************************/

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

  NtcSts1
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

 *********************************************************************************************************************/

#include "Rte_EotLrng.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"
#include "ArchGlbPrm.h"

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read_*, Rte_Write_*,
											  Rte_Call_SetNtcSts_Oper */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void functon; Rte generation adds standard return type but no error information is returned.
											  [Rte_Call_MaxHwAgCwAndCcw_GetErrorStatus, Rte_Call_EotNvmData_GetErrorStatus, Rte_Call_GetRefTmr100MicroSec32bit_Oper, 
                                               Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus, Rte_Call_EotNvmData_SetRamBlockStatus] */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define CNVTOMILLISEC_MILLISECPERCNT_F32 (0.1F)
#define CORRLNFLT_CNT_U08                (2U)
#define DEBSTEP_CNT_U16                  (656U)
#define EOTLIMDETD_CNT_LOGL              (TRUE)
#define EOTLIMNOTDETD_CNT_LOGL           (FALSE)
#define HWAGEOTCCWHILIM_HWDEG_F32        (-360.0F)
#define HWAGEOTCCWLOWLIM_HWDEG_F32       (-900.0F)
#define HWAGEOTCWHILIM_HWDEG_F32         (900.0F)
#define HWAGEOTCWLOWLIM_HWDEG_F32        (360.0F)
#define NODEBSTEP_CNT_U16                (65535U)
#define OUTOFRNGFLT_CNT_U08              (4U)
#define SIGAVLFLT_CNT_U08                (1U)
#define HWAGOVERTRVLMAXCNT_CNT_U08       (255U)

static FUNC(void, EotLrng_CODE) LrngEotCmplSts(float32 HwAgAuthy_Uls_T_f32,
                                                float32 HwTq_HwNwtMtr_T_f32,
                                                float32 MotVelCrf_MotRadPerSec_T_f32,
                                                float32 HwAg_HwDeg_T_f32);
                                                
static FUNC(void, EotLrng_CODE)ChkEotSigForNtc (boolean HwAgEotSig0Avl_Cnt_T_logl,
                                                boolean HwAgEotSig1Avl_Cnt_T_logl,
                                                float32 HwAgEotSig0Cw_HwDeg_T_f32,
                                                float32 HwAgEotSig0Ccw_HwDeg_T_f32,
                                                float32 HwAgEotSig1Cw_HwDeg_T_f32,
                                                float32 HwAgEotSig1Ccw_HwDeg_T_f32);
												
static FUNC(void, EotLrng_CODE)	 OverTrvlDiagc(float32 HwAg_HwDeg_T_f32);
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
 * SigQlfr1: Enumeration of integer in interval [0...255] with enumerators
 *   SIGQLFR_NORES (0U)
 *   SIGQLFR_PASSD (1U)
 *   SIGQLFR_FAILD (2U)
 *
 * Record Types:
 * =============
 * EotNvmDataRec1: Record with elements
 *   CwEot of type float32
 *   CcwEot of type float32
 *   CwEotDetd of type boolean
 *   CcwEotDetd of type boolean
 * MaxHwAgCwAndCcwRec2: Record with elements
 *   HwAgCcwMax of type float32
 *   HwAgCwMax of type float32
 *   HwAgOverTrvlCnt of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevCcwEot(void)
 *   float32 *Rte_Pim_PrevCwEot(void)
 *   uint32 *Rte_Pim_CcwEotRefTmr(void)
 *   uint32 *Rte_Pim_CwEotRefTmr(void)
 *   boolean *Rte_Pim_HwAgOverTrvlCntrNegDi()(void)
 *   boolean *Rte_Pim_HwAgOverTrvlCntrPosDi()(void)
 *   boolean *Rte_Pim_RstLimReq(void)
 *   EotNvmDataRec1 *Rte_Pim_EotNvmData(void)
 *   MaxHwAgCwAndCcwRec2 *Rte_Pim_MaxHwAgCwAndCcw(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   EotNvmDataRec1 *Rte_CData_EotNvmDataDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_EotLrngAuthyStrtLrn_Val(void)
 *   float32 Rte_Prm_EotLrngEntrAndExitHysRngLimr_Val(void)
 *   float32 Rte_Prm_EotLrngHwTqEotLrn_Val(void)
 *   float32 Rte_Prm_EotLrngMotVelEotLrn_Val(void)
 *   float32 Rte_Prm_EotLrngRackTrvlMax_Val(void)
 *   float32 Rte_Prm_EotLrngRackTrvlMin_Val(void)
 *   float32 Rte_Prm_EotLrngRstAuthyMin_Val(void)
 *   float32 Rte_Prm_EotProtnRackTrvlLimrRngLimd_Val(void)
 *   uint16 Rte_Prm_EotLrngEotLrnTmr_Val(void)
 *   uint8 Rte_Prm_EotLrngHwAgOverTrvlCntThd_Val(void)
 *   boolean Rte_Prm_EotProtnRackTrvlLimrEna_Logl(void)
 *
 *********************************************************************************************************************/


#define EotLrng_START_SEC_CODE
#include "EotLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: EotLrngInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgCcwDetd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwAgCwDetd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwAgEotCcw_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAgEotCw_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
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
 *   Std_ReturnType Rte_Call_EotNvmData_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_EotNvmData_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MaxHwAgCwAndCcw_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, EotLrng_CODE) EotLrngInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: EotLrngInit1
 *********************************************************************************************************************/
    
    VAR(NvM_RequestResultType, AUTOMATIC)	EotLrngErrSts_Cnt_T_enum;
    VAR(NvM_RequestResultType, AUTOMATIC)   MaxHwAgCwAndCcwErrSts_Cnt_T_enum;
    VAR(uint32, AUTOMATIC)  				RefTmr_Cnt_T_u32;
    
    /*** Reading the NVM Error Status ***/
    /* REQ: SF011A #124 I */
	(void)Rte_Call_EotNvmData_GetErrorStatus(&EotLrngErrSts_Cnt_T_enum);

    if(NVM_REQ_OK != EotLrngErrSts_Cnt_T_enum)
    {
        Rte_Pim_EotNvmData()->CwEot 		= Rte_Prm_EotLrngRackTrvlMin_Val();
        Rte_Pim_EotNvmData()->CcwEot 		= -(Rte_Prm_EotLrngRackTrvlMin_Val());
        Rte_Pim_EotNvmData()->CwEotDetd 	= EOTLIMNOTDETD_CNT_LOGL;
        Rte_Pim_EotNvmData()->CcwEotDetd 	= EOTLIMNOTDETD_CNT_LOGL;
        
        /*** Set the RAMBlockStatus to TRUE ***/
        (void)Rte_Call_EotNvmData_SetRamBlockStatus(TRUE);
    }
	/* ENDREQ: SF011A #124 */
	
	/* REQ: SF011A #70 I */ /* REQ: SF011A #71 I */
	if(((Rte_Pim_EotNvmData()->CwEot  < Rte_Prm_EotLrngRackTrvlMin_Val()) ||			 /* REQ: SF011A #48 I */
		(Rte_Pim_EotNvmData()->CwEot  > Rte_Prm_EotLrngRackTrvlMax_Val())) ||			 /* REQ: SF011A #49 I */
	   ((Rte_Pim_EotNvmData()->CcwEot > (-Rte_Prm_EotLrngRackTrvlMin_Val())) || 		 /* REQ: SF011A #48 I */
		(Rte_Pim_EotNvmData()->CcwEot < (-Rte_Prm_EotLrngRackTrvlMax_Val()))))			 /* REQ: SF011A #49 I */
		{
			/*** Reset Eot ***/
			Rte_Pim_EotNvmData()->CwEot 		= Rte_Prm_EotLrngRackTrvlMin_Val();
			Rte_Pim_EotNvmData()->CcwEot 		= -(Rte_Prm_EotLrngRackTrvlMin_Val());
			Rte_Pim_EotNvmData()->CwEotDetd 	= EOTLIMNOTDETD_CNT_LOGL;
			Rte_Pim_EotNvmData()->CcwEotDetd 	= EOTLIMNOTDETD_CNT_LOGL;
	/* ENDREQ: SF011A #70 */ /* ENDREQ: SF011A #71 */
			
			if(TRUE != Rte_Prm_EotProtnRackTrvlLimrEna_Logl())
			{
				if(TRUE == (*Rte_Pim_RstLimReq()))
				{
					*Rte_Pim_RstLimReq() = FALSE;
				}
			}
		}
	
    /*** Start of SRLNotEna ***/
	/* REQ: SF011A #125 I */
	if(TRUE != Rte_Prm_EotProtnRackTrvlLimrEna_Logl())
    {
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&RefTmr_Cnt_T_u32);
        
        *Rte_Pim_CwEotRefTmr() 	= RefTmr_Cnt_T_u32;
        *Rte_Pim_CcwEotRefTmr() = RefTmr_Cnt_T_u32;
    /* ENDREQ: SF011A #125 */    
	
        /*** Set the RAMBlockStatus to TRUE ***/
		(void)Rte_Call_EotNvmData_SetRamBlockStatus(TRUE);
    }
    /*** End of SRLNotEna ***/
    
    /*** Write Outputs to RTE ***/
	/* REQ: SF011A #59 I */
    (void)Rte_Write_HwAgEotCw_Val(Lim_f32(Rte_Pim_EotNvmData()->CwEot, HWAGEOTCWLOWLIM_HWDEG_F32, HWAGEOTCWHILIM_HWDEG_F32));		/* REQ: SF011A #60 I */ /* REQ: SF011A #72 I */
    (void)Rte_Write_HwAgEotCcw_Val(Lim_f32(Rte_Pim_EotNvmData()->CcwEot, HWAGEOTCCWLOWLIM_HWDEG_F32, HWAGEOTCCWHILIM_HWDEG_F32));	/* REQ: SF011A #61 I */ /* REQ: SF011A #73 I */
    (void)Rte_Write_HwAgCwDetd_Logl(Rte_Pim_EotNvmData()->CwEotDetd);	 															/* REQ: SF011A #62 I */ /* REQ: SF011A #74 I */
    (void)Rte_Write_HwAgCcwDetd_Logl(Rte_Pim_EotNvmData()->CcwEotDetd);	 															/* REQ: SF011A #63 I */ /* REQ: SF011A #75 I */
	/* ENDREQ: SF011A #59 */

    (void)Rte_Call_MaxHwAgCwAndCcw_GetErrorStatus(&MaxHwAgCwAndCcwErrSts_Cnt_T_enum);

    /* REQ: SF011A #124 I */
    if(NVM_REQ_OK != MaxHwAgCwAndCcwErrSts_Cnt_T_enum)
    {
        Rte_Pim_MaxHwAgCwAndCcw()->HwAgCcwMax = 0.0F;
        Rte_Pim_MaxHwAgCwAndCcw()->HwAgCwMax = 0.0F;
        (void)Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(TRUE);
    }
    /* ENDREQ: SF011A #124 */
    
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A7, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: EotLrngPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAuthy_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgDiDiagSts_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgEotSig0Avl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgEotSig0Ccw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotSig0Cw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotSig1Avl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAgEotSig1Ccw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotSig1Cw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgCcwDetd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwAgCwDetd_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwAgEotCcw_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAgEotCw_Val(float32 data)
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
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_EotNvmData_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_EotNvmData_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, EotLrng_CODE) EotLrngPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: EotLrngPer1
 *********************************************************************************************************************/
    
    VAR(float32, AUTOMATIC) HwAgAuthy_Uls_T_f32;
    VAR(float32, AUTOMATIC) HwAg_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MotVelCrf_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) HwAgEotSig0Cw_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwAgEotSig0Ccw_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwAgEotSig1Cw_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwAgEotSig1Ccw_HwDeg_T_f32;

    VAR(boolean, AUTOMATIC) HwAgDiDiagSts_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) HwAgEotSig0Avl_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) HwAgEotSig1Avl_Cnt_T_logl;	
    
    VAR(SigQlfr1, AUTOMATIC) NtcQlfr_Cnt_T_enum;
    
    /*** Read Inputs from RTE ***/
    (void)Rte_Read_HwAg_Val(&HwAg_HwDeg_T_f32);							/* REQ: SF011A #9 I */
    (void)Rte_Read_HwAgAuthy_Val(&HwAgAuthy_Uls_T_f32);					/* REQ: SF011A #32 I */
    (void)Rte_Read_HwAgDiDiagSts_Logl(&HwAgDiDiagSts_Cnt_T_logl);		/* REQ: SF011A #36 I */
    (void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);						/* REQ: SF011A #34 I */
    (void)Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);		/* REQ: SF011A #33 I */
    (void)Rte_Read_HwAgEotSig0Avl_Logl(&HwAgEotSig0Avl_Cnt_T_logl);		/* REQ: SF011A #116 I */
    (void)Rte_Read_HwAgEotSig1Avl_Logl(&HwAgEotSig1Avl_Cnt_T_logl);		/* REQ: SF011A #116 I */
    (void)Rte_Read_HwAgEotSig0Cw_Val(&HwAgEotSig0Cw_HwDeg_T_f32);		/* REQ: SF011A #117 I */
    (void)Rte_Read_HwAgEotSig0Ccw_Val(&HwAgEotSig0Ccw_HwDeg_T_f32);		/* REQ: SF011A #118 I */
    (void)Rte_Read_HwAgEotSig1Cw_Val(&HwAgEotSig1Cw_HwDeg_T_f32);		/* REQ: SF011A #117 I */
    (void)Rte_Read_HwAgEotSig1Ccw_Val(&HwAgEotSig1Ccw_HwDeg_T_f32);		/* REQ: SF011A #118 I */
    
	
	 /* REQ: SF011A #128 I */ /* REQ: SF011A #143 I */
    if(TRUE != Rte_Prm_EotProtnRackTrvlLimrEna_Logl())					/* REQ: SF011A #119 I */
		{
			/*** Start of CalcResetEot ***/
			/* REQ: SF011A #78 I */ /* REQ: SF011A #79 I */ /* REQ: SF011A #80 I */ /* REQ: SF011A #81 I */ 
			if((TRUE == *Rte_Pim_RstLimReq()) ||									
			   (TRUE == HwAgDiDiagSts_Cnt_T_logl) ||								 
			   ((HwAgAuthy_Uls_T_f32 >= Rte_Prm_EotLrngRstAuthyMin_Val()) &&		
				((HwAg_HwDeg_T_f32 > Rte_Prm_EotLrngRackTrvlMax_Val()) || 			
				 (HwAg_HwDeg_T_f32 < -(Rte_Prm_EotLrngRackTrvlMax_Val())))))		
			/* ENDREQ: SF011A #78 */ /* ENDREQ: SF011A #79 */ /* ENDREQ: SF011A #80 */ /* ENDREQ: SF011A #81 */ 
				{
					/*** Start of Reset Eot ***/
					/* REQ: SF011A #65 I */ /* REQ: SF011A #66 I */  /* REQ: SF011A #67 I */  /* REQ: SF011A #68 I */ 
					Rte_Pim_EotNvmData()->CwEot 		= Rte_Prm_EotLrngRackTrvlMin_Val();
					Rte_Pim_EotNvmData()->CcwEot 		= -(Rte_Prm_EotLrngRackTrvlMin_Val());
					Rte_Pim_EotNvmData()->CwEotDetd 	= EOTLIMNOTDETD_CNT_LOGL;
					Rte_Pim_EotNvmData()->CcwEotDetd 	= EOTLIMNOTDETD_CNT_LOGL;
					/* ENDREQ: SF011A #65 */ /* ENDREQ: SF011A #66 */  /* ENDREQ: SF011A #67 */  /* ENDREQ: SF011A #68 */ 
					
					if(*Rte_Pim_RstLimReq() == TRUE)
					{
						*Rte_Pim_RstLimReq() = FALSE;
					}
					
					/*** End of Reset Eot ***/
				}
			else
				{
					/* REQ: SF011A #129 I */
					/*** Start of LrngEotLim ***/
					if(HwAgAuthy_Uls_T_f32 >= Rte_Prm_EotLrngAuthyStrtLrn_Val())
						{
							/*** Start of CmpLim ***/
							*Rte_Pim_PrevCwEot() 	= Rte_Pim_EotNvmData()->CwEot;		/* REQ: SF011A #130 I */
							*Rte_Pim_PrevCcwEot() 	= Rte_Pim_EotNvmData()->CcwEot;		/* REQ: SF011A #133 I */
							
							/* REQ: SF011A #152 I */ 
							/* REQ: SF011A #130 I */ /* REQ: SF011A #131 I */ /* REQ: SF011A #132 I */
							Rte_Pim_EotNvmData()->CwEot 	= Max_f32(*Rte_Pim_PrevCwEot(), 
																   (Min_f32(Max_f32(HwAg_HwDeg_T_f32, 
																	Rte_Prm_EotLrngRackTrvlMin_Val()), 
																	Rte_Prm_EotLrngRackTrvlMax_Val())));
							/* ENDREQ: SF011A #130 */ /* ENDREQ: SF011A #131 */ /* ENDREQ: SF011A #132 */
							
							
							/* REQ: SF011A #133  I */ /* REQ: SF011A #134 I */ /* REQ: SF011A #135 I */
							Rte_Pim_EotNvmData()->CcwEot 	= Min_f32(*Rte_Pim_PrevCcwEot(), 
																	  (Max_f32(Min_f32(HwAg_HwDeg_T_f32,
																	  (-Rte_Prm_EotLrngRackTrvlMin_Val())), 
																	  (-Rte_Prm_EotLrngRackTrvlMax_Val()))));
							/* ENDREQ: SF011A #133 */ /* ENDREQ: SF011A #134 */ /* ENDREQ: SF011A #135 */
							/* ENDREQ: SF011A #152 */ 
							/*** End of CmpLim ***/
						}
					/*** End of LrngEotLim ***/
					/* ENDREQ: SF011A #129 */
					
					/*** Start of LrngEotCmplSts ***/
					LrngEotCmplSts( HwAgAuthy_Uls_T_f32,
									HwTq_HwNwtMtr_T_f32,
									MotVelCrf_MotRadPerSec_T_f32,
									HwAg_HwDeg_T_f32);
					/*** End of LrngEotCmplSts ***/
					
					/*** End of CalcResetEot ***/
				}
			
		}
	else
		{
			/* REQ: SF011A #144 I */
			(void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X0E1, &NtcQlfr_Cnt_T_enum);
			
			if(SIGQLFR_NORES == NtcQlfr_Cnt_T_enum)
			{
				/*** Start of ChkEotSigForNtc ***/
				ChkEotSigForNtc ( HwAgEotSig0Avl_Cnt_T_logl,
								  HwAgEotSig1Avl_Cnt_T_logl,
								  HwAgEotSig0Cw_HwDeg_T_f32,
								  HwAgEotSig0Ccw_HwDeg_T_f32,
								  HwAgEotSig1Cw_HwDeg_T_f32,
								  HwAgEotSig1Ccw_HwDeg_T_f32);
				
				/*** End of ChkEotSigForNtc ***/
			}
			/* ENDREQ: SF011A #144 */
		}
		/* ENDREQ: SF011A #128 */ /* ENDREQ: SF011A #143 */

	Rte_Pim_EotNvmData()->CwEot = Lim_f32(Rte_Pim_EotNvmData()->CwEot, HWAGEOTCWLOWLIM_HWDEG_F32, HWAGEOTCWHILIM_HWDEG_F32);
	Rte_Pim_EotNvmData()->CcwEot = Lim_f32(Rte_Pim_EotNvmData()->CcwEot, HWAGEOTCCWLOWLIM_HWDEG_F32, HWAGEOTCCWHILIM_HWDEG_F32);
	
    /*** HwAgCwAndCcwMax ***/
    /* REQ: SF011A #156 I */ /* REQ: SF011A #158 I */
    if ( (Abslt_f32_f32(1.0F - HwAgAuthy_Uls_T_f32)) < ARCHGLBPRM_FLOATZEROTHD_ULS_F32 )
    {
        if ( HwAg_HwDeg_T_f32 < Rte_Pim_MaxHwAgCwAndCcw()->HwAgCcwMax)
        {
            Rte_Pim_MaxHwAgCwAndCcw()->HwAgCcwMax = HwAg_HwDeg_T_f32;
            (void)Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(TRUE);
        }

        if (HwAg_HwDeg_T_f32 > Rte_Pim_MaxHwAgCwAndCcw()->HwAgCwMax)
        {
            Rte_Pim_MaxHwAgCwAndCcw()->HwAgCwMax = HwAg_HwDeg_T_f32;
            (void)Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(TRUE);
        }	
		
		if ((Rte_Pim_EotNvmData()->CwEotDetd == TRUE) && (Rte_Pim_EotNvmData()->CcwEotDetd == TRUE))
		{
			OverTrvlDiagc(HwAg_HwDeg_T_f32);
		}
    }
    /* ENDREQ: SF011A #156 */ /* ENDREQ: SF011A #158 */
    /*** End of HwAgCwAndCcwMax ***/
    
    /*** Write outputs to RTE ***/
	/* REQ: SF011A #152 I */
    (void)Rte_Write_HwAgEotCw_Val(Rte_Pim_EotNvmData()->CwEot);			/* REQ: SF011A #11 I */ /* REQ: SF011A #151 I */
    (void)Rte_Write_HwAgEotCcw_Val(Rte_Pim_EotNvmData()->CcwEot);		/* REQ: SF011A #39 I */ /* REQ: SF011A #151 I */
    (void)Rte_Write_HwAgCwDetd_Logl(Rte_Pim_EotNvmData()->CwEotDetd);																	/* REQ: SF011A #40 I */  
    (void)Rte_Write_HwAgCcwDetd_Logl(Rte_Pim_EotNvmData()->CcwEotDetd);																	/* REQ: SF011A #41 I */ 
	/* ENDREQ: SF011A #152 */
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetHwAgOverTrvlCnt_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetHwAgOverTrvlCnt>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetHwAgOverTrvlCnt_Oper(uint8 *HwAgOverTrvlCnt_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, EotLrng_CODE) GetHwAgOverTrvlCnt_Oper(P2VAR(uint8, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) HwAgOverTrvlCnt_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetHwAgOverTrvlCnt_Oper
 *********************************************************************************************************************/
    *HwAgOverTrvlCnt_Arg = Rte_Pim_MaxHwAgCwAndCcw()->HwAgOverTrvlCnt;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RstHwAgOverTrvlCnt_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <RstHwAgOverTrvlCnt>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RstHwAgOverTrvlCnt_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, EotLrng_CODE) RstHwAgOverTrvlCnt_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RstHwAgOverTrvlCnt_Oper
 *********************************************************************************************************************/
    Rte_Pim_MaxHwAgCwAndCcw()->HwAgOverTrvlCnt = 0U;
    (void)Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(TRUE);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RstMaxHwAgCwAndCcw_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <RstMaxHwAgCwAndCcw>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RstMaxHwAgCwAndCcw_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, EotLrng_CODE) RstMaxHwAgCwAndCcw_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RstMaxHwAgCwAndCcw_Oper
 *********************************************************************************************************************/
    Rte_Pim_MaxHwAgCwAndCcw()->HwAgCcwMax = 0.0F;
    Rte_Pim_MaxHwAgCwAndCcw()->HwAgCwMax = 0.0F;
    
    (void)Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(TRUE);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RtnMaxHwAgCwAndCcw_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <RtnMaxHwAgCwAndCcw>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RtnMaxHwAgCwAndCcw_Oper(float32 *HwAgCcwMax_Arg, float32 *HwAgCwMax_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, EotLrng_CODE) RtnMaxHwAgCwAndCcw_Oper(P2VAR(float32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) HwAgCcwMax_Arg, P2VAR(float32, AUTOMATIC, RTE_EOTLRNG_APPL_VAR) HwAgCwMax_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RtnMaxHwAgCwAndCcw_Oper
 *********************************************************************************************************************/
    *HwAgCcwMax_Arg = Rte_Pim_MaxHwAgCwAndCcw()->HwAgCcwMax;
    *HwAgCwMax_Arg = Rte_Pim_MaxHwAgCwAndCcw()->HwAgCwMax;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SerlComRstEot_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SerlComRstEot>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SerlComRstEot_Oper(void)
 *
 *********************************************************************************************************************/

FUNC(void, EotLrng_CODE) SerlComRstEot_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SerlComRstEot_Oper
 *********************************************************************************************************************/
    
	if(TRUE != Rte_Prm_EotProtnRackTrvlLimrEna_Logl())	/* REQ: SF011A #122 I */
		{
  			
			*Rte_Pim_RstLimReq() = TRUE;	/* REQ: SF011A #35 I */ /* REQ: SF011A #123 I */
			
	    }
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetHwAgOverTrvlCnt_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetHwAgOverTrvlCnt>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetHwAgOverTrvlCnt_Oper(uint8 HwAgOverTrvlCnt_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, EotLrng_CODE) SetHwAgOverTrvlCnt_Oper(uint8 HwAgOverTrvlCnt_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetHwAgOverTrvlCnt_Oper
 *********************************************************************************************************************/

    Rte_Pim_MaxHwAgCwAndCcw()->HwAgOverTrvlCnt = HwAgOverTrvlCnt_Arg;
    (void)Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(TRUE);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define EotLrng_STOP_SEC_CODE
#include "EotLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************************************************
* Name        :   LrngEotCmplSts
* Description :   Sub function to set the Eot Learning complete status, reducing the path count.
* Inputs      :   HwAgAuthy_Uls_T_f32, HwTq_HwNwtMtr_T_f32, MotVelCrf_MotRadPerSec_T_f32
*                 HwAg_HwDeg_T_f32
* Returns     :   None 
* Usage Notes :   None
****************************************************************************************************************/
static FUNC(void, EotLrng_CODE) LrngEotCmplSts(float32 HwAgAuthy_Uls_T_f32,
                                                float32 HwTq_HwNwtMtr_T_f32,
                                                float32 MotVelCrf_MotRadPerSec_T_f32,
                                                float32 HwAg_HwDeg_T_f32)
{

    VAR(boolean, AUTOMATIC) EotFound_Cnt_T_logl;
    
	VAR(uint32, AUTOMATIC)  RefTmr_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	
	VAR(float32, AUTOMATIC)	AbsltHwTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	AbsltMotVelCrf_MotRadPerSec_T_f32;
	

	/* REQ: SF011A #137 I */
	AbsltHwTq_HwNwtMtr_T_f32				= Abslt_f32_f32(HwTq_HwNwtMtr_T_f32);
	AbsltMotVelCrf_MotRadPerSec_T_f32		= Abslt_f32_f32(MotVelCrf_MotRadPerSec_T_f32);
     
    if((HwAgAuthy_Uls_T_f32 >= Rte_Prm_EotLrngAuthyStrtLrn_Val()) &&
	   (AbsltHwTq_HwNwtMtr_T_f32 >= Rte_Prm_EotLrngHwTqEotLrn_Val()) &&
	   (AbsltMotVelCrf_MotRadPerSec_T_f32 <= Rte_Prm_EotLrngMotVelEotLrn_Val()))
		{
			EotFound_Cnt_T_logl = TRUE;
		}
	else
		{
			EotFound_Cnt_T_logl = FALSE;
		}
	/* ENDREQ: SF011A #137 */
	
	/*** Start of EotCwLrngDetn ***/ 
	 /* REQ: SF011A #138 I */
    if((FALSE == EotFound_Cnt_T_logl) || (HwAg_HwDeg_T_f32 < Rte_Prm_EotLrngRackTrvlMin_Val()))
    {
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&RefTmr_Cnt_T_u32);
        
        *Rte_Pim_CwEotRefTmr() = RefTmr_Cnt_T_u32;
    }
    else
    {
        /* REQ: SF011A #139 I */
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper((*Rte_Pim_CwEotRefTmr()), &TiSpan_Cnt_T_u32);
                                    
        if(((FixdToFloat_f32_u32(TiSpan_Cnt_T_u32, NXTRFIXDPT_P0TOFLOAT_ULS_F32) * CNVTOMILLISEC_MILLISECPERCNT_F32)) >= 
            (FixdToFloat_f32_u16(Rte_Prm_EotLrngEotLrnTmr_Val(), NXTRFIXDPT_P0TOFLOAT_ULS_F32)))
        {
            /* REQ: SF011A #152 I */
			Rte_Pim_EotNvmData()->CwEotDetd = EOTLIMDETD_CNT_LOGL; 	
        }
		/* ENDREQ: SF011A #139 */
    }
    /* ENDREQ: SF011A #138 */
	/*** End of EotCwLrngDetn ***/
    
    /*** Start of EotCcwLrngDetn ***/
	/* REQ: SF011A #140 I */
    if((FALSE == EotFound_Cnt_T_logl) || (HwAg_HwDeg_T_f32 > (-Rte_Prm_EotLrngRackTrvlMin_Val())))
    {
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&RefTmr_Cnt_T_u32);
        
        *Rte_Pim_CcwEotRefTmr() = RefTmr_Cnt_T_u32;
    }
    else
    {
        /* REQ: SF011A #141 I */
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper((*Rte_Pim_CcwEotRefTmr()), &TiSpan_Cnt_T_u32);
                                    
        if(((FixdToFloat_f32_u32(TiSpan_Cnt_T_u32, NXTRFIXDPT_P0TOFLOAT_ULS_F32) * CNVTOMILLISEC_MILLISECPERCNT_F32)) >=
            (FixdToFloat_f32_u16(Rte_Prm_EotLrngEotLrnTmr_Val(), NXTRFIXDPT_P0TOFLOAT_ULS_F32)))
        {
            /* REQ: SF011A #152 I */
			Rte_Pim_EotNvmData()->CcwEotDetd = EOTLIMDETD_CNT_LOGL;
        }
		/* ENDREQ: SF011A #141 */
    }
    /* ENDREQ: SF011A #140 */
	/*** End of EotCcwLrngDetn ***/
}
/*****************************************************************************************************************
* Name        :   ChkEotSigForNtc
* Description :   Sub function to check the EOT signal for NTC, reducing the path count.
* Inputs      :   HwAgEotSig0Avl_Cnt_T_logl, HwAgEotSig1Avl_Cnt_T_logl, HwAgEotSig0Cw_HwDeg_T_f32
*                 HwAgEotSig0Ccw_HwDeg_T_f32, HwAgEotSig1Cw_HwDeg_T_f32, HwAgEotSig1Ccw_HwDeg_T_f32
* Returns     :   None 
* Usage Notes :   None
****************************************************************************************************************/
static FUNC(void, EotLrng_CODE)ChkEotSigForNtc (boolean HwAgEotSig0Avl_Cnt_T_logl,
                                                boolean HwAgEotSig1Avl_Cnt_T_logl,
                                                float32 HwAgEotSig0Cw_HwDeg_T_f32,
                                                float32 HwAgEotSig0Ccw_HwDeg_T_f32,
                                                float32 HwAgEotSig1Cw_HwDeg_T_f32,
                                                float32 HwAgEotSig1Ccw_HwDeg_T_f32)
{
    VAR(boolean, AUTOMATIC) EotCwCcwCrltn_Uls_T_logl;
    VAR(boolean, AUTOMATIC) EotCwCcwRangeChk_Uls_T_logl;
	
	VAR(float32, AUTOMATIC) AbsltHwAgEotCw_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) AbsltHwAgEotCcw_HwDeg_T_f32;
	
	
	AbsltHwAgEotCw_HwDeg_T_f32		= Abslt_f32_f32(HwAgEotSig0Cw_HwDeg_T_f32  - HwAgEotSig1Cw_HwDeg_T_f32);
	AbsltHwAgEotCcw_HwDeg_T_f32		= Abslt_f32_f32(HwAgEotSig0Ccw_HwDeg_T_f32 - HwAgEotSig1Ccw_HwDeg_T_f32);
  
    /*** Start of ChkEotSigForNtc ***/
	/* REQ: SF011A #145 I */
    if((TRUE == HwAgEotSig0Avl_Cnt_T_logl) && (TRUE == HwAgEotSig1Avl_Cnt_T_logl))
    {
        /*** Perform correlation and in range check ***/
        
        /*** Check Eot Cw and Ccw signal correlation ***/
        if((AbsltHwAgEotCw_HwDeg_T_f32  < ARCHGLBPRM_FLOATZEROTHD_ULS_F32) &&
		   (AbsltHwAgEotCcw_HwDeg_T_f32 < ARCHGLBPRM_FLOATZEROTHD_ULS_F32))
			{
				EotCwCcwCrltn_Uls_T_logl = TRUE;
			}
		else
			{
				EotCwCcwCrltn_Uls_T_logl = FALSE;
			} 
	
        /*** Check Eot Cw and Ccw signals are within range ***/
        if(((HwAgEotSig0Cw_HwDeg_T_f32		> Rte_Prm_EotLrngRackTrvlMin_Val()) &&
			 (HwAgEotSig0Cw_HwDeg_T_f32		< Rte_Prm_EotLrngRackTrvlMax_Val())) &&
			((HwAgEotSig0Ccw_HwDeg_T_f32	< (-Rte_Prm_EotLrngRackTrvlMin_Val())) &&
			 (HwAgEotSig0Ccw_HwDeg_T_f32	> (-Rte_Prm_EotLrngRackTrvlMax_Val()))) &&
			((HwAgEotSig1Cw_HwDeg_T_f32		> Rte_Prm_EotLrngRackTrvlMin_Val()) &&
			 (HwAgEotSig1Cw_HwDeg_T_f32		< Rte_Prm_EotLrngRackTrvlMax_Val())) &&
			((HwAgEotSig1Ccw_HwDeg_T_f32	< (-Rte_Prm_EotLrngRackTrvlMin_Val())) &&
			 (HwAgEotSig1Ccw_HwDeg_T_f32	> (-Rte_Prm_EotLrngRackTrvlMax_Val()))))
			{
				EotCwCcwRangeChk_Uls_T_logl = TRUE;
			}

		else
			{
				EotCwCcwRangeChk_Uls_T_logl = FALSE;
			}
                
        if((TRUE == EotCwCcwCrltn_Uls_T_logl) && (TRUE == EotCwCcwRangeChk_Uls_T_logl))
        {
            /*** Update NVM ***/
            Rte_Pim_EotNvmData()->CwEot 		= HwAgEotSig0Cw_HwDeg_T_f32;
			Rte_Pim_EotNvmData()->CcwEot 		= HwAgEotSig0Ccw_HwDeg_T_f32;
            Rte_Pim_EotNvmData()->CwEotDetd 	= EOTLIMDETD_CNT_LOGL;
            Rte_Pim_EotNvmData()->CcwEotDetd 	= EOTLIMDETD_CNT_LOGL;
            
            /*** Set the RAMBlockStatus to TRUE ***/
            (void)Rte_Call_EotNvmData_SetRamBlockStatus( TRUE );
            
            /*** Set NTC pass ***/
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0E1,
                                           0U,
                                           NTCSTS_PASSD,
                                           NODEBSTEP_CNT_U16);
        }
        /* REQ: SF011A #147 I */
		else if((TRUE != EotCwCcwCrltn_Uls_T_logl) && (TRUE == EotCwCcwRangeChk_Uls_T_logl))
        {
            /*** Set Correlation fault NTC ***/
            (void)Rte_Call_SetNtcSts_Oper( NTCNR_0X0E1,
                                           CORRLNFLT_CNT_U08,
                                           NTCSTS_FAILD,
                                           NODEBSTEP_CNT_U16);
        }
		/* ENDREQ: SF011A #147 */
		
        /* REQ: SF011A #148 I */
		else
        {
            /*** Set out of range NTC ***/
            (void)Rte_Call_SetNtcSts_Oper( NTCNR_0X0E1,
                                           OUTOFRNGFLT_CNT_U08,
                                           NTCSTS_FAILD,
                                           NODEBSTEP_CNT_U16);
        }
		/* ENDREQ: SF011A #148 */
    }
	/* ENDREQ: SF011A #145 */ 
    else
    {
        /* REQ: SF011A #149 I */
		/*** Set Signal Available Fault NTC ***/
        (void)Rte_Call_SetNtcSts_Oper( NTCNR_0X0E1,
                                       SIGAVLFLT_CNT_U08,
                                       NTCSTS_PREFAILD,
                                       DEBSTEP_CNT_U16);
        /* ENDREQ: SF011A #149 */
    }
	/*** End of ChkEotSigForNtc ***/
	
}

/*****************************************************************************************************************
* Name        :   OverTrvlDiagc
* Description :   Sub function implement the OverTrvlDiagc block, reducing the path count.
* Inputs      :   HwAg_HwDeg_T_f32
* Returns     :   None 
* Usage Notes :   None
****************************************************************************************************************/
static FUNC(void, EotLrng_CODE)	 OverTrvlDiagc(float32 HwAg_HwDeg_T_f32)
{		
	VAR(boolean, AUTOMATIC) CwEntrCdn_Cnt_T_logl = FALSE;
	VAR(boolean, AUTOMATIC) CwExitCdn_Cnt_T_logl = FALSE;
	VAR(boolean, AUTOMATIC) CcwEntrCdn_Cnt_T_logl = FALSE;
	VAR(boolean, AUTOMATIC) CcwExitCdn_Cnt_T_logl = FALSE;

	VAR(float32, AUTOMATIC) CwBas_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) CcwBas_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) CwUpprLim_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) CwLowrLim_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) CcwUpprLim_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) CcwLowrLim_HwDeg_T_f32;
		
	CwBas_HwDeg_T_f32 = Rte_Pim_EotNvmData()->CwEot - Rte_Prm_EotProtnRackTrvlLimrRngLimd_Val();
	CcwBas_HwDeg_T_f32 = Rte_Pim_EotNvmData()->CcwEot + Rte_Prm_EotProtnRackTrvlLimrRngLimd_Val();
	
	/*** EotLim ***/
	CwUpprLim_HwDeg_T_f32 = CwBas_HwDeg_T_f32 + Rte_Prm_EotLrngEntrAndExitHysRngLimr_Val();
	CwLowrLim_HwDeg_T_f32 = CwBas_HwDeg_T_f32 - Rte_Prm_EotLrngEntrAndExitHysRngLimr_Val();
	
	CcwUpprLim_HwDeg_T_f32 = CcwBas_HwDeg_T_f32 - Rte_Prm_EotLrngEntrAndExitHysRngLimr_Val();
	CcwLowrLim_HwDeg_T_f32 = CcwBas_HwDeg_T_f32 + Rte_Prm_EotLrngEntrAndExitHysRngLimr_Val();

	/*** OverTrvlTrig ***/
	if((HwAg_HwDeg_T_f32 > CwUpprLim_HwDeg_T_f32) && (*Rte_Pim_HwAgOverTrvlCntrPosDi() == FALSE))
	{
		CwEntrCdn_Cnt_T_logl = TRUE;
	}
	if(HwAg_HwDeg_T_f32 < CwLowrLim_HwDeg_T_f32)
	{
		CwExitCdn_Cnt_T_logl = TRUE;
	}
	
	if((HwAg_HwDeg_T_f32 < CcwUpprLim_HwDeg_T_f32) && (*Rte_Pim_HwAgOverTrvlCntrNegDi() == FALSE))
	{
		CcwEntrCdn_Cnt_T_logl = TRUE;
	}
	if(HwAg_HwDeg_T_f32 > CcwLowrLim_HwDeg_T_f32)
	{
		CcwExitCdn_Cnt_T_logl = TRUE;
	}
	
	if((CwEntrCdn_Cnt_T_logl == TRUE) || (CcwEntrCdn_Cnt_T_logl == TRUE))
	{
		if(HwAg_HwDeg_T_f32 > 0.0F)
		{
			*Rte_Pim_HwAgOverTrvlCntrPosDi() = TRUE;
			*Rte_Pim_HwAgOverTrvlCntrNegDi() = FALSE;
		}
		else
		{
			*Rte_Pim_HwAgOverTrvlCntrPosDi() = FALSE;
			*Rte_Pim_HwAgOverTrvlCntrNegDi() = TRUE;
		}
	
		/*** OvfChk ***/
		if(Rte_Pim_MaxHwAgCwAndCcw()->HwAgOverTrvlCnt < HWAGOVERTRVLMAXCNT_CNT_U08)
		{
			Rte_Pim_MaxHwAgCwAndCcw()->HwAgOverTrvlCnt = Rte_Pim_MaxHwAgCwAndCcw()->HwAgOverTrvlCnt + 1U;
			(void)Rte_Call_MaxHwAgCwAndCcw_SetRamBlockStatus(TRUE);
		}
		
		/*** SetOverTrvlDiagc ***/
		if(Rte_Pim_MaxHwAgCwAndCcw()->HwAgOverTrvlCnt >= Rte_Prm_EotLrngHwAgOverTrvlCntThd_Val())
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A7, 0U, NTCSTS_FAILD, NODEBSTEP_CNT_U16);
		}
		
	}
	else if((CwExitCdn_Cnt_T_logl == TRUE) && (CcwExitCdn_Cnt_T_logl == TRUE))
	{
		*Rte_Pim_HwAgOverTrvlCntrPosDi() = FALSE;
		*Rte_Pim_HwAgOverTrvlCntrNegDi() = FALSE;
	}
	else
	{
		/*** *Rte_Pim_HwAgOverTrvlCntrPosDi() & *Rte_Pim_HwAgOverTrvlCntrNegDi() previous values pass through ***/
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
