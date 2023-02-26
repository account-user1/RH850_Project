/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_CurrMeas.c
 *        Config:  C:/Component/ES200B_CurrMeas_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_CurrMeas
 *  Generated at:  Mon Oct 16 14:40:46 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_CurrMeas>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * Copyright 2016, 2017 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : CDD_CurrMeas.c
 * Module Description: Implementation of Offset and Gain for CurrMeas
 * Project           : CBD
 * Author            : Nick Saxton
 **********************************************************************************************************************
 * Version Control:
 * %version:           4 %
 * %derived_by:        nz4qtt %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                         SCR #
 * --------  -------  --------  --------------------------------------------------------------------------    ---------
 * 06/17/16  1        Nick      Initial Version                                                               EA4#5602
 * 05/11/17  2        KByrski   Updated as per Design_2.0.0                                                   EA4#10116
 * 07/10/17  3        KByrski   Fixed implementation issue inside GainCalibration function                    EA4#13142
 * 10/16/17  4        Krishna   Fixed anomaly EA4#13330 by using required NVM blocks as applicable            EA4#15188
 *********************************************************************************************************************/
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
 * MotCurrEolCalSt2
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
 * SigQlfr1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * SysSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_CDD_CurrMeas.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "CDD_CurrMeas.h"
#include "CDD_MotCtrlMgr_Data.h"
#include "NxtrMath.h"
#include "ElecGlbPrm.h"
#include "ArchGlbPrm.h"

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

#define CALPROCNOTSTRTD_CNT_U08                 0U      /* 0  = Not Started */
#define CALPROCSTRTD_CNT_U08                    1U      /* 1  = Started/In Process */
#define CALPROCPASS_CNT_U08                     2U      /* 2  = Successful */
#define CALPROCPHAABCEOLOUTOFRNG_CNT_U08        4U      /* 4  = Phase A, B, C EOL Calculated Gains are Out Of Range */
#define CALPROCVEHSPDCNDNOTMET_CNT_U08          16U     /* 16 = VehSpd, VehSpdVld, condition not met */
#define CALPROCMOTVELMRFCNDNOTMET_CNT_U08       32U     /* 32 = MotVelMrf condition not met */
#define CALPROCBOTHIVTRINACTV_CNT_U08           64U     /* 64 = DiagcStsIvtr1Inactv and DiagcStsIvtr1Inactv both TRUE */

#define VEHSPDCDNNOTMET_CNT_U08                 4U      /* NTC 0x1EC 0x1ED VehSpd, VehSpdVld condition not met */
#define MOTVELMRFCDNNOTMET_CNT_U08              8U      /* NTC 0x1EC 0x1ED MotVelMrf condition not met */

#define FAILDDURGSTRTUPTEST_CNT_U08             1U      /* NTC 0x05D Failed during start-up test */
#define FAILDATENA_CNT_U08                      2U      /* NTC 0x05D Failed at enable */
#define FAILDATWRMININ_CNT_U08                  3U      /* NTC 0x05D Failed at warm init */

#define DIFOFFSRNGCHKMAX_VOLT_F32               1.0F    /* Offset Range Check Maximum */



/********************************************* Local Function Prototypes *********************************************/

static FUNC(void, CDD_CurrMeas_APPL_CODE) OffsetCalibration(float32 MotCurrAdcVlyA_Volt_T_f32,
                                                            float32 MotCurrAdcVlyB_Volt_T_f32,
                                                            float32 MotCurrAdcVlyC_Volt_T_f32,
                                                            float32 MotVelMrf_MotRadPerSec_T_f32,
                                                            float32 VehSpd_Kph_T_f32,
                                                            boolean VehSpdVld_Cnt_T_logl,
                                                            float32 BrdgVltg_Volt_T_f32,
                                                            boolean DiagcStsIvtr1Inactv_Cnt_T_logl);

static FUNC(void, CDD_CurrMeas_APPL_CODE) GainCalibration(boolean MotCurrEolOffsProcFlg_Cnt_T_logl,
                                                          float32 MotCurrAdcVlyA_Volt_T_f32,
                                                          float32 MotCurrAdcVlyB_Volt_T_f32,
                                                          float32 MotCurrAdcVlyC_Volt_T_f32,
                                                          float32 MotVelMrf_MotRadPerSec_T_f32,
                                                          float32 MotCurrOffsZeroAvrgA_Volt_T_f32,
                                                          float32 MotCurrOffsZeroAvrgB_Volt_T_f32,
                                                          float32 MotCurrOffsZeroAvrgC_Volt_T_f32,
                                                          float32 VehSpd_Kph_T_f32,
                                                          boolean VehSpdVld_Cnt_T_logl,
                                                          boolean DiagcStsIvtr1Inactv_Cnt_T_logl,
                                                          MotCurrEolCalSt2 MotCurrEolCalStPrev_Cnt_T_enum);

static FUNC(boolean, CDD_CurrMeas_APPL_CODE) RangeChkWIABC(float32 MotCtrlMotCurrAdcVlyA_Volt_T_f32,
                                                           float32 MotCtrlMotCurrAdcVlyB_Volt_T_f32,
                                                           float32 MotCtrlMotCurrAdcVlyC_Volt_T_f32);

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
 * boolean: Boolean (standard type)
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * MotCurrEolCalSt2: Enumeration of integer in interval [0...255] with enumerators
 *   MCECS_OFFSCMDSTRT (0U)
 *   MCECS_OFFSCMDHI (1U)
 *   MCECS_OFFSCMDLO (2U)
 *   MCECS_OFFSCMDZERO (3U)
 *   MCECS_OFFSCMDEND (4U)
 *   MCECS_GAINCMDAD (5U)
 *   MCECS_GAINCMDBE (6U)
 *   MCECS_GAINCMDCF (7U)
 *   MCECS_CMDSAFEST (8U)
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
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 * Record Types:
 * =============
 * CurrMeasEolGainCal3PhaRec1: Record with elements
 *   CurrMeasMotCurrEolGainA of type float32
 *   CurrMeasMotCurrEolGainB of type float32
 *   CurrMeasMotCurrEolGainC of type float32
 * CurrMeasEolOffsCal3PhaRec1: Record with elements
 *   CurrMeasEolOffsHiBrdgVltg of type float32
 *   CurrMeasMotCurrEolOffsDifA of type float32
 *   CurrMeasMotCurrEolOffsDifB of type float32
 *   CurrMeasMotCurrEolOffsDifC of type float32
 *   CurrMeasMotCurrOffsLoAvrgA of type float32
 *   CurrMeasMotCurrOffsLoAvrgB of type float32
 *   CurrMeasMotCurrOffsLoAvrgC of type float32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_BrdgVltgSumPrev(void)
 *   float32 *Rte_Pim_EolOffsHiBrdgVltg(void)
 *   float32 *Rte_Pim_MotCurrEolGainA(void)
 *   float32 *Rte_Pim_MotCurrEolGainB(void)
 *   float32 *Rte_Pim_MotCurrEolGainC(void)
 *   float32 *Rte_Pim_MotCurrOffsDeltaA(void)
 *   float32 *Rte_Pim_MotCurrOffsDeltaB(void)
 *   float32 *Rte_Pim_MotCurrOffsDeltaC(void)
 *   float32 *Rte_Pim_MotCurrOffsHiAvrgA(void)
 *   float32 *Rte_Pim_MotCurrOffsHiAvrgB(void)
 *   float32 *Rte_Pim_MotCurrOffsHiAvrgC(void)
 *   float32 *Rte_Pim_MotCurrOffsLoAvrgA(void)
 *   float32 *Rte_Pim_MotCurrOffsLoAvrgB(void)
 *   float32 *Rte_Pim_MotCurrOffsLoAvrgC(void)
 *   float32 *Rte_Pim_MotCurrOffsZeroAvrgA(void)
 *   float32 *Rte_Pim_MotCurrOffsZeroAvrgB(void)
 *   float32 *Rte_Pim_MotCurrOffsZeroAvrgC(void)
 *   float32 *Rte_Pim_MotCurrSumAPrev(void)
 *   float32 *Rte_Pim_MotCurrSumBPrev(void)
 *   float32 *Rte_Pim_MotCurrSumCPrev(void)
 *   float32 *Rte_Pim_TmpMotCurrAdcVlySum1Prev(void)
 *   uint16 *Rte_Pim_GainEolAvrgCntrPrev(void)
 *   uint16 *Rte_Pim_MotCtrlNtc5DErrCntPrev(void)
 *   uint16 *Rte_Pim_Ntc5DErrCnt2MilliSecPrev(void)
 *   uint16 *Rte_Pim_OffsEolAvrgCntrPrev(void)
 *   uint16 *Rte_Pim_PhaOnTiErrCntPrev(void)
 *   uint8 *Rte_Pim_EolGainSts(void)
 *   uint8 *Rte_Pim_EolGainTranCntrPrev(void)
 *   uint8 *Rte_Pim_EolOffsSts(void)
 *   uint8 *Rte_Pim_EolOffsTranCntrPrev(void)
 *   MotCurrEolCalSt2 *Rte_Pim_MotCurrEolCalStPrev(void)
 *   uint8 *Rte_Pim_MotCurrRollgCnt1Prev(void)
 *   boolean *Rte_Pim_MotCurrEolOffsProcFlg(void)
 *   boolean *Rte_Pim_WrmIninTestCmplPrev(void)
 *   CurrMeasEolGainCal3PhaRec1 *Rte_Pim_CurrMeasEolGainCalSetABC(void)
 *   CurrMeasEolOffsCal3PhaRec1 *Rte_Pim_CurrMeasEolOffsCalSetABC(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   CurrMeasEolGainCal3PhaRec1 *Rte_CData_CurrMeasEolGainCalSetABCDft(void)
 *   CurrMeasEolOffsCal3PhaRec1 *Rte_CData_CurrMeasEolOffsCalSetABCDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_CurrMeasEolGainMax_Val(void)
 *   float32 Rte_Prm_CurrMeasEolGainMin_Val(void)
 *   float32 Rte_Prm_CurrMeasEolGainNom_Val(void)
 *   float32 Rte_Prm_CurrMeasEolGainNumer_Val(void)
 *   float32 Rte_Prm_CurrMeasEolMaxMotVel_Val(void)
 *   float32 Rte_Prm_CurrMeasEolOffsHiBrdgVltgMin_Val(void)
 *   float32 Rte_Prm_CurrMeasEolOffsMax_Val(void)
 *   float32 Rte_Prm_CurrMeasEolOffsMin_Val(void)
 *   float32 Rte_Prm_CurrMeasEolOffsNom_Val(void)
 *   float32 Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMax_Val(void)
 *   float32 Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMin_Val(void)
 *   uint32 Rte_Prm_CurrMeasEolFixdPwmPerd_Val(void)
 *   uint32 Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val(void)
 *   uint32 Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val(void)
 *   uint32 Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val(void)
 *   uint32 Rte_Prm_CurrMeasMotAgCompuDly_Val(void)
 *   uint16 Rte_Prm_CurrMeasEolGainNrOfSample_Val(void)
 *   uint16 Rte_Prm_CurrMeasEolOffsNrOfSample_Val(void)
 *   uint16 Rte_Prm_CurrMeasNtc0x05DFailStep_Val(void)
 *   uint16 Rte_Prm_CurrMeasNtc0x05DPassStep_Val(void)
 *   uint8 Rte_Prm_CurrMeasEolTranCntrThd_Val(void)
 *   uint8 Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
 *
 *********************************************************************************************************************/


#define CDD_CurrMeas_START_SEC_CODE
#include "CDD_CurrMeas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasEolGainReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasEolGainReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasEolGainReq_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasEolGainReq_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasEolGainReq_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasEolGainReq_Oper
 *********************************************************************************************************************/

    *Rte_Pim_EolGainSts() = CALPROCSTRTD_CNT_U08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasEolGainStsReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasEolGainStsReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasEolGainStsReq_Oper(uint8 *CurrMeasEolGainSt_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasEolGainStsReq_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasEolGainStsReq_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasEolGainSt_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasEolGainStsReq_Oper
 *********************************************************************************************************************/

    *CurrMeasEolGainSt_Arg = *Rte_Pim_EolGainSts();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasEolOffsReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasEolOffsReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasEolOffsReq_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasEolOffsReq_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasEolOffsReq_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasEolOffsReq_Oper
 *********************************************************************************************************************/

    *Rte_Pim_EolOffsSts() = CALPROCSTRTD_CNT_U08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasEolOffsStsReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasEolOffsStsReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasEolOffsStsReq_Oper(uint8 *CurrMeasEolOffsSt_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasEolOffsStsReq_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasEolOffsStsReq_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasEolOffsSt_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasEolOffsStsReq_Oper
 *********************************************************************************************************************/

    *CurrMeasEolOffsSt_Arg = *Rte_Pim_EolOffsSts();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasGainReadReqSngIvtr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasGainReadReqSngIvtr>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasGainReadReqSngIvtr_Oper(float32 *CurrMeasMotCurrGainA_Arg, float32 *CurrMeasMotCurrGainB_Arg, float32 *CurrMeasMotCurrGainC_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasGainReadReqSngIvtr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasGainReadReqSngIvtr_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainA_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainB_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrGainC_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasGainReadReqSngIvtr_Oper
 *********************************************************************************************************************/

    *CurrMeasMotCurrGainA_Arg = Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainA;
    *CurrMeasMotCurrGainB_Arg = Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainB;
    *CurrMeasMotCurrGainC_Arg = Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainC;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasGainWrReqSngIvtr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasGainWrReqSngIvtr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CurrMeasEolGainCalSetABC_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasGainWrReqSngIvtr_Oper(float32 CurrMeasMotCurrGainA_Arg, float32 CurrMeasMotCurrGainB_Arg, float32 CurrMeasMotCurrGainC_Arg, uint8 *CurrMeasGainWrReqSts_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasGainWrReqSngIvtr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasGainWrReqSngIvtr_Oper(float32 CurrMeasMotCurrGainA_Arg, float32 CurrMeasMotCurrGainB_Arg, float32 CurrMeasMotCurrGainC_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasGainWrReqSts_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasGainWrReqSngIvtr_Oper
 *********************************************************************************************************************/

    if ((CurrMeasMotCurrGainA_Arg >= Rte_Prm_CurrMeasEolGainMin_Val()) && (CurrMeasMotCurrGainA_Arg <= Rte_Prm_CurrMeasEolGainMax_Val()) &&
        (CurrMeasMotCurrGainB_Arg >= Rte_Prm_CurrMeasEolGainMin_Val()) && (CurrMeasMotCurrGainB_Arg <= Rte_Prm_CurrMeasEolGainMax_Val()) &&
        (CurrMeasMotCurrGainC_Arg >= Rte_Prm_CurrMeasEolGainMin_Val()) && (CurrMeasMotCurrGainC_Arg <= Rte_Prm_CurrMeasEolGainMax_Val()))
    {
        Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainA = CurrMeasMotCurrGainA_Arg;
        Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainB = CurrMeasMotCurrGainB_Arg;
        Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainC = CurrMeasMotCurrGainC_Arg;

        (void) Rte_Call_CurrMeasEolGainCalSetABC_SetRamBlockStatus(TRUE);

        *CurrMeasGainWrReqSts_Arg = 0U;
    }
    else
    {
        *CurrMeasGainWrReqSts_Arg = 1U;
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CurrMeasEolGainCalSetABC_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_CurrMeasEolOffsCalSetABC_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasInit1
 *********************************************************************************************************************/

    VAR(float32, AUTOMATIC) CurrMeasEolOffsHiBrdgVltg_VoltNanoSec_T_f32;
	
    VAR(NvM_RequestResultType, AUTOMATIC) EolOffsCalABCErrSts_Cnt_T_enum;
    VAR(NvM_RequestResultType, AUTOMATIC) EolGainCalABCErrSts_Cnt_T_enum;

    CurrMeasEolOffsHiBrdgVltg_VoltNanoSec_T_f32 = Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasEolOffsHiBrdgVltg;

    (void)Rte_Call_CurrMeasEolOffsCalSetABC_GetErrorStatus(&EolOffsCalABCErrSts_Cnt_T_enum);
	
	if ( (EolOffsCalABCErrSts_Cnt_T_enum == NVM_REQ_OK) &&
		 (CurrMeasEolOffsHiBrdgVltg_VoltNanoSec_T_f32 > Rte_Prm_CurrMeasEolOffsHiBrdgVltgMin_Val()) )
    {
        *Rte_Pim_MotCurrOffsDeltaA() = Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrEolOffsDifA / CurrMeasEolOffsHiBrdgVltg_VoltNanoSec_T_f32;
        *Rte_Pim_MotCurrOffsDeltaB() = Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrEolOffsDifB / CurrMeasEolOffsHiBrdgVltg_VoltNanoSec_T_f32;
        *Rte_Pim_MotCurrOffsDeltaC() = Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrEolOffsDifC / CurrMeasEolOffsHiBrdgVltg_VoltNanoSec_T_f32;
    }
    else
    {
        *Rte_Pim_MotCurrOffsDeltaA() = 0.0F;
        *Rte_Pim_MotCurrOffsDeltaB() = 0.0F;
        *Rte_Pim_MotCurrOffsDeltaC() = 0.0F;
		
		Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgA = Rte_Prm_CurrMeasEolOffsNom_Val();
        Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgB = Rte_Prm_CurrMeasEolOffsNom_Val();
        Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgC = Rte_Prm_CurrMeasEolOffsNom_Val();
	}
	
	/* Eol Gain Range Check */
	(void)Rte_Call_CurrMeasEolGainCalSetABC_GetErrorStatus(&EolGainCalABCErrSts_Cnt_T_enum);
	
	
	if( (Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainA > Rte_Prm_CurrMeasEolGainMax_Val()) ||
	    (Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainB > Rte_Prm_CurrMeasEolGainMax_Val()) ||
	    (Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainC > Rte_Prm_CurrMeasEolGainMax_Val()) ||
	    (Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainA < Rte_Prm_CurrMeasEolGainMin_Val()) ||
	    (Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainB < Rte_Prm_CurrMeasEolGainMin_Val()) ||
	    (Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainC < Rte_Prm_CurrMeasEolGainMin_Val()) ||
	    (EolGainCalABCErrSts_Cnt_T_enum != NVM_REQ_OK) ) 
    {
	   Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainA = Rte_Prm_CurrMeasEolGainNom_Val();
       Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainB = Rte_Prm_CurrMeasEolGainNom_Val();
       Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainC = Rte_Prm_CurrMeasEolGainNom_Val();
    }
	
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasOffsReadReqSngIvtr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasOffsReadReqSngIvtr>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasOffsReadReqSngIvtr_Oper(float32 *CurrMeasEolOffsHiBrdgVltg_Arg, float32 *CurrMeasMotCurrOffsDifA_Arg, float32 *CurrMeasMotCurrOffsDifB_Arg, float32 *CurrMeasMotCurrOffsDifC_Arg, float32 *CurrMeasMotCurrOffsLoAvrgA_Arg, float32 *CurrMeasMotCurrOffsLoAvrgB_Arg, float32 *CurrMeasMotCurrOffsLoAvrgC_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasOffsReadReqSngIvtr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasOffsReadReqSngIvtr_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasEolOffsHiBrdgVltg_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifA_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifB_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsDifC_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgA_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgB_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasMotCurrOffsLoAvrgC_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasOffsReadReqSngIvtr_Oper
 *********************************************************************************************************************/

    *CurrMeasEolOffsHiBrdgVltg_Arg  = Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasEolOffsHiBrdgVltg;
    *CurrMeasMotCurrOffsDifA_Arg    = Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrEolOffsDifA;
    *CurrMeasMotCurrOffsDifB_Arg    = Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrEolOffsDifB;
    *CurrMeasMotCurrOffsDifC_Arg    = Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrEolOffsDifC;
    *CurrMeasMotCurrOffsLoAvrgA_Arg = Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgA;
    *CurrMeasMotCurrOffsLoAvrgB_Arg = Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgB;
    *CurrMeasMotCurrOffsLoAvrgC_Arg = Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgC;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasOffsWrReqSngIvtr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CurrMeasOffsWrReqSngIvtr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CurrMeasEolGainCalSetABC_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_CurrMeasEolOffsCalSetABC_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CurrMeasOffsWrReqSngIvtr_Oper(float32 CurrMeasEolOffsHiBrdgVltg_Arg, float32 CurrMeasMotCurrOffsDifA_Arg, float32 CurrMeasMotCurrOffsDifB_Arg, float32 CurrMeasMotCurrOffsDifC_Arg, float32 CurrMeasMotCurrOffsLoAvrgA_Arg, float32 CurrMeasMotCurrOffsLoAvrgB_Arg, float32 CurrMeasMotCurrOffsLoAvrgC_Arg, uint8 *CurrMeasOffsWrReqSts_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasOffsWrReqSngIvtr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasOffsWrReqSngIvtr_Oper(float32 CurrMeasEolOffsHiBrdgVltg_Arg, float32 CurrMeasMotCurrOffsDifA_Arg, float32 CurrMeasMotCurrOffsDifB_Arg, float32 CurrMeasMotCurrOffsDifC_Arg, float32 CurrMeasMotCurrOffsLoAvrgA_Arg, float32 CurrMeasMotCurrOffsLoAvrgB_Arg, float32 CurrMeasMotCurrOffsLoAvrgC_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_CURRMEAS_APPL_VAR) CurrMeasOffsWrReqSts_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasOffsWrReqSngIvtr_Oper
 *********************************************************************************************************************/

    if ((CurrMeasEolOffsHiBrdgVltg_Arg  >= Rte_Prm_CurrMeasEolOffsHiBrdgVltgMin_Val()) && (CurrMeasEolOffsHiBrdgVltg_Arg  <= (Rte_Prm_CurrMeasEolOffsHiBrdgVltgMin_Val() * 2.0F)) &&
        (CurrMeasMotCurrOffsDifA_Arg    >= -DIFOFFSRNGCHKMAX_VOLT_F32)                 && (CurrMeasMotCurrOffsDifA_Arg    <= DIFOFFSRNGCHKMAX_VOLT_F32) &&
        (CurrMeasMotCurrOffsDifB_Arg    >= -DIFOFFSRNGCHKMAX_VOLT_F32)                 && (CurrMeasMotCurrOffsDifB_Arg    <= DIFOFFSRNGCHKMAX_VOLT_F32) &&
        (CurrMeasMotCurrOffsDifC_Arg    >= -DIFOFFSRNGCHKMAX_VOLT_F32)                 && (CurrMeasMotCurrOffsDifC_Arg    <= DIFOFFSRNGCHKMAX_VOLT_F32) &&
        (CurrMeasMotCurrOffsLoAvrgA_Arg >= Rte_Prm_CurrMeasEolOffsMin_Val())           && (CurrMeasMotCurrOffsLoAvrgA_Arg <= Rte_Prm_CurrMeasEolOffsMax_Val()) &&
        (CurrMeasMotCurrOffsLoAvrgB_Arg >= Rte_Prm_CurrMeasEolOffsMin_Val())           && (CurrMeasMotCurrOffsLoAvrgB_Arg <= Rte_Prm_CurrMeasEolOffsMax_Val()) &&
        (CurrMeasMotCurrOffsLoAvrgC_Arg >= Rte_Prm_CurrMeasEolOffsMin_Val())           && (CurrMeasMotCurrOffsLoAvrgC_Arg <= Rte_Prm_CurrMeasEolOffsMax_Val()))
    {
        Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasEolOffsHiBrdgVltg  = CurrMeasEolOffsHiBrdgVltg_Arg;
        Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrEolOffsDifA = CurrMeasMotCurrOffsDifA_Arg;
        Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrEolOffsDifB = CurrMeasMotCurrOffsDifB_Arg;
        Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrEolOffsDifC = CurrMeasMotCurrOffsDifC_Arg;
        Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgA = CurrMeasMotCurrOffsLoAvrgA_Arg;
        Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgB = CurrMeasMotCurrOffsLoAvrgB_Arg;
        Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgC = CurrMeasMotCurrOffsLoAvrgC_Arg;

        (void) Rte_Call_CurrMeasEolOffsCalSetABC_SetRamBlockStatus(TRUE);

        *CurrMeasOffsWrReqSts_Arg = 0U;
    }
    else
    {
        *CurrMeasOffsWrReqSts_Arg = 1U;
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasPer1
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
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotCurrEolCalSt_Val(MotCurrEolCalSt2 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CurrMeasEolGainCalSetABC_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_CurrMeasEolOffsCalSetABC_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasPer1
 *********************************************************************************************************************/

    /*** Inputs ***/
    VAR(float32, AUTOMATIC) MotCurrAdcVlyA_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotCurrAdcVlyB_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotCurrAdcVlyC_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVelMrf_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
    VAR(boolean, AUTOMATIC) VehSpdVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) BrdgVltg_Volt_T_f32;
    VAR(boolean, AUTOMATIC) DiagcStsIvtr1Inactv_Cnt_T_logl;

    /*** Temporary ***/
    VAR(boolean, AUTOMATIC) MotCurrEolOffsProcFlgPrev_Cnt_T_logl;
    VAR(float32, AUTOMATIC) MotCurrOffsZeroAvrgAPrev_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotCurrOffsZeroAvrgBPrev_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotCurrOffsZeroAvrgCPrev_Volt_T_f32;
    VAR(MotCurrEolCalSt2, AUTOMATIC) MotCurrEolCalStPrev_Cnt_T_enum;

    /*** Read inputs ***/
    (void) Rte_Read_MotCurrAdcVlyA_Val(&MotCurrAdcVlyA_Volt_T_f32);
    (void) Rte_Read_MotCurrAdcVlyB_Val(&MotCurrAdcVlyB_Volt_T_f32);
    (void) Rte_Read_MotCurrAdcVlyC_Val(&MotCurrAdcVlyC_Volt_T_f32);
    (void) Rte_Read_MotVelMrf_Val(&MotVelMrf_MotRadPerSec_T_f32);
    (void) Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);
    (void) Rte_Read_VehSpdVld_Logl(&VehSpdVld_Cnt_T_logl);
    (void) Rte_Read_BrdgVltg_Val(&BrdgVltg_Volt_T_f32);
    (void) Rte_Read_DiagcStsIvtr1Inactv_Logl(&DiagcStsIvtr1Inactv_Cnt_T_logl);

    /*** Unit delays ***/
    MotCurrEolOffsProcFlgPrev_Cnt_T_logl = *Rte_Pim_MotCurrEolOffsProcFlg();
    MotCurrOffsZeroAvrgAPrev_Volt_T_f32  = *Rte_Pim_MotCurrOffsZeroAvrgA();
    MotCurrOffsZeroAvrgBPrev_Volt_T_f32  = *Rte_Pim_MotCurrOffsZeroAvrgB();
    MotCurrOffsZeroAvrgCPrev_Volt_T_f32  = *Rte_Pim_MotCurrOffsZeroAvrgC();
    MotCurrEolCalStPrev_Cnt_T_enum       = *Rte_Pim_MotCurrEolCalStPrev();

    /*** Offset Calibration ***/
    OffsetCalibration(MotCurrAdcVlyA_Volt_T_f32,
            MotCurrAdcVlyB_Volt_T_f32,
            MotCurrAdcVlyC_Volt_T_f32,
            MotVelMrf_MotRadPerSec_T_f32,
            VehSpd_Kph_T_f32,
            VehSpdVld_Cnt_T_logl,
            BrdgVltg_Volt_T_f32,
            DiagcStsIvtr1Inactv_Cnt_T_logl);

    /*** Gain Calibration ***/
    GainCalibration(MotCurrEolOffsProcFlgPrev_Cnt_T_logl,
            MotCurrAdcVlyA_Volt_T_f32,
            MotCurrAdcVlyB_Volt_T_f32,
            MotCurrAdcVlyC_Volt_T_f32,
            MotVelMrf_MotRadPerSec_T_f32,
            MotCurrOffsZeroAvrgAPrev_Volt_T_f32,
            MotCurrOffsZeroAvrgBPrev_Volt_T_f32,
            MotCurrOffsZeroAvrgCPrev_Volt_T_f32,
            VehSpd_Kph_T_f32,
            VehSpdVld_Cnt_T_logl,
            DiagcStsIvtr1Inactv_Cnt_T_logl,
            MotCurrEolCalStPrev_Cnt_T_enum);

    (void) Rte_Write_MotCurrEolCalSt_Val(*Rte_Pim_MotCurrEolCalStPrev());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasPer3
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
 *   Std_ReturnType Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrAdcVlyC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_Ntc5DErrCnt_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CurrMeasWrmIninTestCmpl_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotCurrQlfr1_Val(SigQlfr1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
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
 * Symbol: CurrMeasPer3_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_CurrMeas_CODE) CurrMeasPer3(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasPer3
 *********************************************************************************************************************/

    /*** Inputs ***/
    VAR(boolean,  AUTOMATIC) DiagcStsIvtr1Inactv_Cnt_T_logl;
    VAR(float32,  AUTOMATIC) MotCtrlMotCurrAdcVlyA_Volt_T_f32;
    VAR(float32,  AUTOMATIC) MotCtrlMotCurrAdcVlyB_Volt_T_f32;
    VAR(float32,  AUTOMATIC) MotCtrlMotCurrAdcVlyC_Volt_T_f32;
    VAR(uint16,   AUTOMATIC) Ntc5DErrCnt_Cnt_T_u16;
    VAR(uint8,    AUTOMATIC) StrtUpSt_Cnt_T_u08;
    VAR(SysSt1,   AUTOMATIC) SysSt_Cnt_T_enum;

    /*** Outputs ***/
    VAR(boolean,  AUTOMATIC) CurrMeasWrmIninTestCmpl_Cnt_T_logl;
    VAR(SigQlfr1, AUTOMATIC) MotCurrQlfr1_Cnt_T_enum;

    /*** Temporary ***/
    VAR(uint8,    AUTOMATIC) ParamABC_Cnt_T_u08;
    VAR(boolean,  AUTOMATIC) RangeCheckWIABC_Cnt_T_logl;

    /*** Read inputs ***/
    MotCtrlMotCurrAdcVlyA_Volt_T_f32 = MOTCTRLMGR_MotCtrlMotCurrAdcVlyA;
    MotCtrlMotCurrAdcVlyB_Volt_T_f32 = MOTCTRLMGR_MotCtrlMotCurrAdcVlyB;
    MotCtrlMotCurrAdcVlyC_Volt_T_f32 = MOTCTRLMGR_MotCtrlMotCurrAdcVlyC;
    (void) Rte_Read_DiagcStsIvtr1Inactv_Logl(&DiagcStsIvtr1Inactv_Cnt_T_logl);
    (void) Rte_Read_Ntc5DErrCnt_Val(&Ntc5DErrCnt_Cnt_T_u16);
    (void) Rte_Read_StrtUpSt_Val(&StrtUpSt_Cnt_T_u08);
    (void) Rte_Read_SysSt_Val(&SysSt_Cnt_T_enum);

    CurrMeasWrmIninTestCmpl_Cnt_T_logl = *Rte_Pim_WrmIninTestCmplPrev();

    if ( ( (SysSt_Cnt_T_enum == SYSST_ENA) || (SysSt_Cnt_T_enum == SYSST_WRMININ) ) && (CurrMeasWrmIninTestCmpl_Cnt_T_logl == TRUE) )
    {
        if (Ntc5DErrCnt_Cnt_T_u16 == *Rte_Pim_Ntc5DErrCnt2MilliSecPrev())
        {
            /*** Ntc5DErrCnt NOT incremented - PassStep ***/
            (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X05D, 0U, NTCSTS_PREPASSD, Rte_Prm_CurrMeasNtc0x05DPassStep_Val());
        }
        else
        {
            /*** Ntc5DErrCnt incremented - FailStep ***/
            if (SysSt_Cnt_T_enum == SYSST_ENA)
            {
                /*** Failed at ENABLE ***/
                ParamABC_Cnt_T_u08 = FAILDATENA_CNT_U08;
            }
            else
            {
                /*** Failed at Warm Init ***/
                ParamABC_Cnt_T_u08 = FAILDATWRMININ_CNT_U08;
            }

            (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X05D, ParamABC_Cnt_T_u08, NTCSTS_PREFAILD, Rte_Prm_CurrMeasNtc0x05DFailStep_Val());
        }

        (void) Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X05D, &MotCurrQlfr1_Cnt_T_enum);

        *Rte_Pim_Ntc5DErrCnt2MilliSecPrev() = Ntc5DErrCnt_Cnt_T_u16;
    }
    else
    {
        if ( (SysSt_Cnt_T_enum == SYSST_WRMININ) && (StrtUpSt_Cnt_T_u08 == ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08) )
        {
            if (DiagcStsIvtr1Inactv_Cnt_T_logl == FALSE)
            {
                /*** Range check ***/
                RangeCheckWIABC_Cnt_T_logl = RangeChkWIABC(MotCtrlMotCurrAdcVlyA_Volt_T_f32, MotCtrlMotCurrAdcVlyB_Volt_T_f32, MotCtrlMotCurrAdcVlyC_Volt_T_f32);

                if (RangeCheckWIABC_Cnt_T_logl == TRUE)
                {
                    (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X05D, 0U, NTCSTS_PREPASSD, Rte_Prm_CurrMeasNtc0x05DPassStep_Val());
                }
                else
                {
                    /*** Failed during start-up test ***/
                    (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X05D, FAILDDURGSTRTUPTEST_CNT_U08, NTCSTS_PREFAILD, Rte_Prm_CurrMeasNtc0x05DFailStep_Val());
                }
            }

            (void) Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X05D, &MotCurrQlfr1_Cnt_T_enum);

            if (MotCurrQlfr1_Cnt_T_enum > SIGQLFR_NORES)
            {
                CurrMeasWrmIninTestCmpl_Cnt_T_logl = TRUE;
            }
        }
        else
        {
            CurrMeasWrmIninTestCmpl_Cnt_T_logl = FALSE;
            (void) Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X05D, &MotCurrQlfr1_Cnt_T_enum);
        }
    }

    *Rte_Pim_WrmIninTestCmplPrev() = CurrMeasWrmIninTestCmpl_Cnt_T_logl;

    /*** Write outputs ***/
    Rte_Write_MotCurrQlfr1_Val(MotCurrQlfr1_Cnt_T_enum);
    Rte_Write_CurrMeasWrmIninTestCmpl_Logl(CurrMeasWrmIninTestCmpl_Cnt_T_logl);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_CurrMeas_STOP_SEC_CODE
#include "CDD_CurrMeas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define CDD_CurrMeas_START_SEC_CODE
#include "CDD_CurrMeas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Name:        OffsetCalibration
 * Description: Created for Current measurement
 * Inputs:      MotCurrAdcVlyA                   <- MotCurrAdcVlyA_Volt_T_f32
 *              MotCurrAdcVlyB                   <- MotCurrAdcVlyB_Volt_T_f32
 *              MotCurrAdcVlyC                   <- MotCurrAdcVlyC_Volt_T_f32
 *              MotVelMrf                        <- MotVelMrf_MotRadPerSec_T_f32
 *              VehSpd                           <- VehSpd_Kph_T_f32
 *              VehSpdVld                        <- VehSpdVld_Cnt_T_logl
 *              BrdgVltg                         <- BrdgVltg_Volt_T_f32
 *              DiagcStsIvtr1Inactv              <- DiagcStsIvtr1Inactv_Cnt_T_logl
 *              CurrMeasEolOffsNrOfSample        <- Rte_Prm_CurrMeasEolOffsNrOfSample_Val()
 *              CurrMeasEolOffsMax               <- Rte_Prm_CurrMeasEolOffsMax_Val()
 *              CurrMeasEolOffsMin               <- Rte_Prm_CurrMeasEolOffsMin_Val()
 *              CurrMeasEolMaxMotVel             <- Rte_Prm_CurrMeasEolMaxMotVel_Val()
 *              CurrMeasEolTranCntrThd           <- Rte_Prm_CurrMeasEolTranCntrThd_Val()
 *              CurrMeasEolOffsHiCmuOffs         <- Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val()
 *              CurrMeasEolOffsLoCmuOffs         <- Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val()
 *              CurrMeasMotCurrEolCalStPrev      <- Rte_Pim_MotCurrEolCalStPrev()
 *              EolOffsStsPrev                   <- Rte_Pim_EolOffsSts()
 *              CurrMeasMotCurrSumAPrev          <- Rte_Pim_MotCurrSumAPrev()
 *              CurrMeasMotCurrSumBPrev          <- Rte_Pim_MotCurrSumBPrev()
 *              CurrMeasMotCurrSumCPrev          <- Rte_Pim_MotCurrSumCPrev()
 *              CurrMeasEolTranCntrPrev          <- Rte_Pim_EolOffsTranCntrPrev()
 *              CurrMeasEolAvrgCntrPrev          <- Rte_Pim_OffsEolAvrgCntrPrev()
 *              CurrMeasBrdgVltgSumPrev          <- Rte_Pim_BrdgVltgSumPrev()
 * Outputs:     MotCurrEolOffsProcFlg            -> Rte_Pim_MotCurrEolOffsProcFlg()
 *              MotCurrOffsZeroAvrgA             -> Rte_Pim_MotCurrOffsZeroAvrgA()
 *              MotCurrOffsZeroAvrgB             -> Rte_Pim_MotCurrOffsZeroAvrgB()
 *              MotCurrOffsZeroAvrgC             -> Rte_Pim_MotCurrOffsZeroAvrgC()
 *              CurrMeasMotCurrEolCalSt          -> Rte_Pim_MotCurrEolCalStPrev()
 *              EolOffsSts                       -> Rte_Pim_EolOffsSts()
 *              MotCurrEolOffsHiBrdgVltg         -> Rte_Pim_EolOffsHiBrdgVltg()
 *              MotCurrOffsHiAvrgA               -> Rte_Pim_MotCurrOffsHiAvrgA()
 *              MotCurrOffsHiAvrgB               -> Rte_Pim_MotCurrOffsHiAvrgB()
 *              MotCurrOffsHiAvrgC               -> Rte_Pim_MotCurrOffsHiAvrgC()
 *              MotCurrOffsLoAvrgA               -> Rte_Pim_MotCurrOffsLoAvrgA()
 *              MotCurrOffsLoAvrgB               -> Rte_Pim_MotCurrOffsLoAvrgB()
 *              MotCurrOffsLoAvrgC               -> Rte_Pim_MotCurrOffsLoAvrgC()
 *              CurrMeasEolTranCntr              -> Rte_Pim_EolOffsTranCntrPrev()
 *              CurrMeasMotCurrSumA              -> Rte_Pim_MotCurrSumAPrev()
 *              CurrMeasMotCurrSumB              -> Rte_Pim_MotCurrSumBPrev()
 *              CurrMeasMotCurrSumC              -> Rte_Pim_MotCurrSumCPrev()
 *              CurrMeasEolAvrgCntr              -> Rte_Pim_OffsEolAvrgCntrPrev()
 *              CurrMeasBrdgVltgSum              -> Rte_Pim_BrdgVltgSumPrev()
 * Usage Notes: None
 *********************************************************************************************************************/
static FUNC(void, CDD_CurrMeas_APPL_CODE) OffsetCalibration(float32 MotCurrAdcVlyA_Volt_T_f32,
                                                            float32 MotCurrAdcVlyB_Volt_T_f32,
                                                            float32 MotCurrAdcVlyC_Volt_T_f32,
                                                            float32 MotVelMrf_MotRadPerSec_T_f32,
                                                            float32 VehSpd_Kph_T_f32,
                                                            boolean VehSpdVld_Cnt_T_logl,
                                                            float32 BrdgVltg_Volt_T_f32,
                                                            boolean DiagcStsIvtr1Inactv_Cnt_T_logl)
{
    /*** Temporary ***/
    VAR(uint8,   AUTOMATIC) OffsFltParam_Cnt_T_u08;
    VAR(boolean, AUTOMATIC) OffsRngChkABC_Cnt_T_logl;

    if (*Rte_Pim_EolOffsSts() == CALPROCSTRTD_CNT_U08)
    {
        if ((VehSpd_Kph_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32) && (VehSpdVld_Cnt_T_logl == TRUE))
        {
            if (Abslt_f32_f32(MotVelMrf_MotRadPerSec_T_f32) < Rte_Prm_CurrMeasEolMaxMotVel_Val())
            {
                switch (*Rte_Pim_MotCurrEolCalStPrev())
                {
                    case MCECS_OFFSCMDSTRT:
                    case MCECS_OFFSCMDHI:
                        *Rte_Pim_MotCurrEolCalStPrev() = MCECS_OFFSCMDHI;

                        if (*Rte_Pim_EolOffsTranCntrPrev() == Rte_Prm_CurrMeasEolTranCntrThd_Val())
                        {
                            *Rte_Pim_MotCurrSumAPrev() += MotCurrAdcVlyA_Volt_T_f32;
                            *Rte_Pim_MotCurrSumBPrev() += MotCurrAdcVlyB_Volt_T_f32;
                            *Rte_Pim_MotCurrSumCPrev() += MotCurrAdcVlyC_Volt_T_f32;
                            *Rte_Pim_BrdgVltgSumPrev() += BrdgVltg_Volt_T_f32;

                            *Rte_Pim_OffsEolAvrgCntrPrev() += 1U;

                            if (*Rte_Pim_OffsEolAvrgCntrPrev() == Rte_Prm_CurrMeasEolOffsNrOfSample_Val())
                            {
                                *Rte_Pim_MotCurrOffsHiAvrgA() = *Rte_Pim_MotCurrSumAPrev() / (float32) Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
                                *Rte_Pim_MotCurrOffsHiAvrgB() = *Rte_Pim_MotCurrSumBPrev() / (float32) Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
                                *Rte_Pim_MotCurrOffsHiAvrgC() = *Rte_Pim_MotCurrSumCPrev() / (float32) Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
                                *Rte_Pim_EolOffsHiBrdgVltg() = (*Rte_Pim_BrdgVltgSumPrev() / (float32) Rte_Prm_CurrMeasEolOffsNrOfSample_Val())
                                        * ((float32) Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val() - (float32) Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val());

                                *Rte_Pim_MotCurrEolCalStPrev() = MCECS_OFFSCMDLO;

                                *Rte_Pim_OffsEolAvrgCntrPrev() = 0U;
                                *Rte_Pim_EolOffsTranCntrPrev() = 0U;

                                *Rte_Pim_MotCurrSumAPrev() = 0.0F;
                                *Rte_Pim_MotCurrSumBPrev() = 0.0F;
                                *Rte_Pim_MotCurrSumCPrev() = 0.0F;
                            }
                        }
                        else
                        {
                            *Rte_Pim_EolOffsTranCntrPrev() += 1U;
                        }
                    break;

                    case MCECS_OFFSCMDLO:
                        if (*Rte_Pim_EolOffsTranCntrPrev() == Rte_Prm_CurrMeasEolTranCntrThd_Val())
                        {
                            *Rte_Pim_MotCurrSumAPrev() += MotCurrAdcVlyA_Volt_T_f32;
                            *Rte_Pim_MotCurrSumBPrev() += MotCurrAdcVlyB_Volt_T_f32;
                            *Rte_Pim_MotCurrSumCPrev() += MotCurrAdcVlyC_Volt_T_f32;

                            *Rte_Pim_OffsEolAvrgCntrPrev() += 1U;

                            if (*Rte_Pim_OffsEolAvrgCntrPrev() == Rte_Prm_CurrMeasEolOffsNrOfSample_Val())
                            {
                                *Rte_Pim_MotCurrOffsLoAvrgA() = *Rte_Pim_MotCurrSumAPrev() / (float32) Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
                                *Rte_Pim_MotCurrOffsLoAvrgB() = *Rte_Pim_MotCurrSumBPrev() / (float32) Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
                                *Rte_Pim_MotCurrOffsLoAvrgC() = *Rte_Pim_MotCurrSumCPrev() / (float32) Rte_Prm_CurrMeasEolOffsNrOfSample_Val();

                                *Rte_Pim_MotCurrEolCalStPrev() = MCECS_OFFSCMDZERO;

                                *Rte_Pim_OffsEolAvrgCntrPrev() = 0U;
                                *Rte_Pim_EolOffsTranCntrPrev() = 0U;

                                *Rte_Pim_MotCurrSumAPrev() = 0.0F;
                                *Rte_Pim_MotCurrSumBPrev() = 0.0F;
                                *Rte_Pim_MotCurrSumCPrev() = 0.0F;
                            }
                        }
                        else
                        {
                            *Rte_Pim_EolOffsTranCntrPrev() += 1U;
                        }
                    break;

                    case MCECS_OFFSCMDZERO:
                        if (*Rte_Pim_EolOffsTranCntrPrev() == Rte_Prm_CurrMeasEolTranCntrThd_Val())
                        {
                            *Rte_Pim_MotCurrSumAPrev() += MotCurrAdcVlyA_Volt_T_f32;
                            *Rte_Pim_MotCurrSumBPrev() += MotCurrAdcVlyB_Volt_T_f32;
                            *Rte_Pim_MotCurrSumCPrev() += MotCurrAdcVlyC_Volt_T_f32;

                            *Rte_Pim_OffsEolAvrgCntrPrev() += 1U;

                            if (*Rte_Pim_OffsEolAvrgCntrPrev() == Rte_Prm_CurrMeasEolOffsNrOfSample_Val())
                            {
                                *Rte_Pim_MotCurrOffsZeroAvrgA() = *Rte_Pim_MotCurrSumAPrev() / (float32) Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
                                *Rte_Pim_MotCurrOffsZeroAvrgB() = *Rte_Pim_MotCurrSumBPrev() / (float32) Rte_Prm_CurrMeasEolOffsNrOfSample_Val();
                                *Rte_Pim_MotCurrOffsZeroAvrgC() = *Rte_Pim_MotCurrSumCPrev() / (float32) Rte_Prm_CurrMeasEolOffsNrOfSample_Val();

                                *Rte_Pim_MotCurrEolCalStPrev() = MCECS_OFFSCMDEND;

                                *Rte_Pim_OffsEolAvrgCntrPrev() = 0U;
                                *Rte_Pim_EolOffsTranCntrPrev() = 0U;

                                *Rte_Pim_MotCurrSumAPrev() = 0.0F;
                                *Rte_Pim_MotCurrSumBPrev() = 0.0F;
                                *Rte_Pim_MotCurrSumCPrev() = 0.0F;
                            }
                        }
                        else
                        {
                            *Rte_Pim_EolOffsTranCntrPrev() += 1U;
                        }
                    break;

                    case MCECS_OFFSCMDEND:
                        if (*Rte_Pim_MotCurrEolOffsProcFlg() != TRUE)
                        {
                            OffsFltParam_Cnt_T_u08 = CALPROCNOTSTRTD_CNT_U08;

                            if (DiagcStsIvtr1Inactv_Cnt_T_logl == FALSE)
                            {
                                if ((*Rte_Pim_MotCurrOffsHiAvrgA() >= Rte_Prm_CurrMeasEolOffsMin_Val()) && (*Rte_Pim_MotCurrOffsHiAvrgA() <= Rte_Prm_CurrMeasEolOffsMax_Val()) &&
                                    (*Rte_Pim_MotCurrOffsHiAvrgB() >= Rte_Prm_CurrMeasEolOffsMin_Val()) && (*Rte_Pim_MotCurrOffsHiAvrgB() <= Rte_Prm_CurrMeasEolOffsMax_Val()) &&
                                    (*Rte_Pim_MotCurrOffsHiAvrgC() >= Rte_Prm_CurrMeasEolOffsMin_Val()) && (*Rte_Pim_MotCurrOffsHiAvrgC() <= Rte_Prm_CurrMeasEolOffsMax_Val()) &&
                                    (*Rte_Pim_MotCurrOffsLoAvrgA() >= Rte_Prm_CurrMeasEolOffsMin_Val()) && (*Rte_Pim_MotCurrOffsLoAvrgA() <= Rte_Prm_CurrMeasEolOffsMax_Val()) &&
                                    (*Rte_Pim_MotCurrOffsLoAvrgB() >= Rte_Prm_CurrMeasEolOffsMin_Val()) && (*Rte_Pim_MotCurrOffsLoAvrgB() <= Rte_Prm_CurrMeasEolOffsMax_Val()) &&
                                    (*Rte_Pim_MotCurrOffsLoAvrgC() >= Rte_Prm_CurrMeasEolOffsMin_Val()) && (*Rte_Pim_MotCurrOffsLoAvrgC() <= Rte_Prm_CurrMeasEolOffsMax_Val()))
                                {
                                    OffsRngChkABC_Cnt_T_logl = TRUE;
                                }
                                else
                                {
                                    OffsFltParam_Cnt_T_u08 = CALPROCSTRTD_CNT_U08;
                                    OffsRngChkABC_Cnt_T_logl = FALSE;
                                }
                            }
                            else
                            {
                                OffsFltParam_Cnt_T_u08 = CALPROCVEHSPDCNDNOTMET_CNT_U08;
                                OffsRngChkABC_Cnt_T_logl = FALSE;
                            }

                            if (OffsRngChkABC_Cnt_T_logl == TRUE)
                            {
                                *Rte_Pim_MotCurrEolCalStPrev() = MCECS_OFFSCMDEND;
                                *Rte_Pim_OffsEolAvrgCntrPrev() = 0U;
                                *Rte_Pim_EolOffsTranCntrPrev() = 0U;

                                (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X1EC, 0U, NTCSTS_PASSD, 0U);

                                /*** WrNvm ***/
                                Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasEolOffsHiBrdgVltg  = *Rte_Pim_EolOffsHiBrdgVltg();
                                Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrEolOffsDifA = *Rte_Pim_MotCurrOffsHiAvrgA() - *Rte_Pim_MotCurrOffsLoAvrgA();
                                Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrEolOffsDifB = *Rte_Pim_MotCurrOffsHiAvrgB() - *Rte_Pim_MotCurrOffsLoAvrgB();
                                Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrEolOffsDifC = *Rte_Pim_MotCurrOffsHiAvrgC() - *Rte_Pim_MotCurrOffsLoAvrgC();
                                Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgA = *Rte_Pim_MotCurrOffsLoAvrgA();
                                Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgB = *Rte_Pim_MotCurrOffsLoAvrgB();
                                Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgC = *Rte_Pim_MotCurrOffsLoAvrgC();

                                (void) Rte_Call_CurrMeasEolOffsCalSetABC_SetRamBlockStatus(TRUE);

                                *Rte_Pim_MotCurrEolOffsProcFlg() = TRUE;
                                *Rte_Pim_EolOffsSts() = CALPROCPASS_CNT_U08;
                            }
                            else
                            {
                                *Rte_Pim_MotCurrEolCalStPrev() = MCECS_CMDSAFEST;
                                (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X1EC, OffsFltParam_Cnt_T_u08, NTCSTS_FAILD, 0U);
                                *Rte_Pim_EolOffsSts() = OffsFltParam_Cnt_T_u08 * 4;
                                *Rte_Pim_OffsEolAvrgCntrPrev() = 0U;
                                *Rte_Pim_EolOffsTranCntrPrev() = 0U;
                            }
                        }
                    break;

                    default:
                    break;
                }
            }
            else
            {
                *Rte_Pim_MotCurrEolCalStPrev() = MCECS_CMDSAFEST;
                (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X1EC, MOTVELMRFCDNNOTMET_CNT_U08, NTCSTS_FAILD, 0U);
                *Rte_Pim_EolOffsSts() = CALPROCMOTVELMRFCNDNOTMET_CNT_U08;
            }
        }
        else
        {
            *Rte_Pim_MotCurrEolCalStPrev() = MCECS_CMDSAFEST;
            (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X1EC, VEHSPDCDNNOTMET_CNT_U08, NTCSTS_FAILD, 0U);
            *Rte_Pim_EolOffsSts() = CALPROCVEHSPDCNDNOTMET_CNT_U08;
        }
    }
}

/**********************************************************************************************************************
 * Name:        GainCalibration
 * Description: Created for Current measurement
 * Inputs:      MotCurrEolOffsProcFlg            <- MotCurrEolOffsProcFlg_Cnt_T_logl
 *              MotCurrAdcVlyA                   <- MotCurrAdcVlyA_Volt_T_f32
 *              MotCurrAdcVlyB                   <- MotCurrAdcVlyB_Volt_T_f32
 *              MotCurrAdcVlyC                   <- MotCurrAdcVlyC_Volt_T_f32
 *              MotVelMrf                        <- MotVelMrf_MotRadPerSec_T_f32
 *              MotCurrOffsZeroAvrgA             <- MotCurrOffsZeroAvrgA_Volt_T_f32
 *              MotCurrOffsZeroAvrgB             <- MotCurrOffsZeroAvrgB_Volt_T_f32
 *              MotCurrOffsZeroAvrgC             <- MotCurrOffsZeroAvrgC_Volt_T_f32
 *              VehSpd                           <- VehSpd_Kph_T_f32
 *              VehSpdVld                        <- VehSpdVld_Cnt_T_logl
 *              DiagcStsIvtr1Inactv              <- DiagcStsIvtr1Inactv_Cnt_T_logl
 *              CurrMeasEolGainNrOfSample        <- Rte_Prm_CurrMeasEolGainNrOfSample_Val()
 *              CurrMeasEolGainMin               <- Rte_Prm_CurrMeasEolGainMin_Val()
 *              CurrMeasEolGainMax               <- Rte_Prm_CurrMeasEolGainMax_Val()
 *              CurrMeasEolGainNumer             <- Rte_Prm_CurrMeasEolGainNumer_Val()
 *              CurrMeasEolMaxMotVel             <- Rte_Prm_CurrMeasEolMaxMotVel_Val()
 *              CurrMeasEolTranCntrThd           <- Rte_Prm_CurrMeasEolTranCntrThd_Val()
 *              CurrMeasMotCurrEolCalStPrev      <- MotCurrEolCalStPrev_Cnt_T_enum
 *              EolOffsStsPrev                   <- Rte_Pim_EolOffsSts()
 *              CurrMeasEolAvrgCntr              <- Rte_Pim_GainEolAvrgCntrPrev()
 *              CurrMeasEolTranCntrPrev          <- Rte_Pim_EolGainTranCntrPrev()
 *              CurrMeasTmpMotCurrAdcVlySum1     <- Rte_Pim_TmpMotCurrAdcVlySum1Prev()
 * Outputs:     CurrMeasMotCurrEolCalSt          -> Rte_Pim_MotCurrEolCalStPrev()
 *              CurrMeasMotCurrEolGainA          -> Rte_Pim_MotCurrEolGainA()
 *              CurrMeasMotCurrEolGainB          -> Rte_Pim_MotCurrEolGainB()
 *              CurrMeasMotCurrEolGainC          -> Rte_Pim_MotCurrEolGainC()
 *              EolOffsSts                       -> Rte_Pim_EolOffsSts()
 *              CurrMeasEolAvrgCntr              -> Rte_Pim_GainEolAvrgCntrPrev()
 *              CurrMeasEolTranCntr              -> Rte_Pim_EolGainTranCntrPrev()
 *              CurrMeasTmpMotCurrAdcVlySum1     -> Rte_Pim_TmpMotCurrAdcVlySum1Prev()
 * Usage Notes: None
 *********************************************************************************************************************/
static FUNC(void, CDD_CurrMeas_APPL_CODE) GainCalibration(boolean MotCurrEolOffsProcFlg_Cnt_T_logl,
                                                          float32 MotCurrAdcVlyA_Volt_T_f32,
                                                          float32 MotCurrAdcVlyB_Volt_T_f32,
                                                          float32 MotCurrAdcVlyC_Volt_T_f32,
                                                          float32 MotVelMrf_MotRadPerSec_T_f32,
                                                          float32 MotCurrOffsZeroAvrgA_Volt_T_f32,
                                                          float32 MotCurrOffsZeroAvrgB_Volt_T_f32,
                                                          float32 MotCurrOffsZeroAvrgC_Volt_T_f32,
                                                          float32 VehSpd_Kph_T_f32,
                                                          boolean VehSpdVld_Cnt_T_logl,
                                                          boolean DiagcStsIvtr1Inactv_Cnt_T_logl,
                                                          MotCurrEolCalSt2 MotCurrEolCalStPrev_Cnt_T_enum)
{
    /*** Temporary ***/
    VAR(float32, AUTOMATIC) MotCurrAvrg_Uls_T_f32;
    VAR(float32, AUTOMATIC) MotCurrAbsltDiff_Uls_T_f32;
    VAR(uint8,   AUTOMATIC) GainFltParam_Cnt_T_u08;
    VAR(boolean, AUTOMATIC) GainRngChkABC_Cnt_T_logl;

    if ((*Rte_Pim_EolGainSts() == CALPROCSTRTD_CNT_U08) && (MotCurrEolOffsProcFlg_Cnt_T_logl == TRUE))
    {
        if ((VehSpd_Kph_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32) && (VehSpdVld_Cnt_T_logl == TRUE))
        {
            if (Abslt_f32_f32(MotVelMrf_MotRadPerSec_T_f32) < Rte_Prm_CurrMeasEolMaxMotVel_Val())
            {
                switch (MotCurrEolCalStPrev_Cnt_T_enum)
                {
                    case MCECS_OFFSCMDEND:
                    case MCECS_GAINCMDAD:
                        *Rte_Pim_MotCurrEolCalStPrev() = MCECS_GAINCMDAD;
                        if (*Rte_Pim_EolGainTranCntrPrev() == Rte_Prm_CurrMeasEolTranCntrThd_Val())
                        {
                            *Rte_Pim_TmpMotCurrAdcVlySum1Prev() += MotCurrAdcVlyA_Volt_T_f32;

                            *Rte_Pim_GainEolAvrgCntrPrev() += 1U;

                            if (*Rte_Pim_GainEolAvrgCntrPrev() == Rte_Prm_CurrMeasEolGainNrOfSample_Val())
                            {
                                MotCurrAvrg_Uls_T_f32 = *Rte_Pim_TmpMotCurrAdcVlySum1Prev() / (float32) Rte_Prm_CurrMeasEolGainNrOfSample_Val();
                                MotCurrAbsltDiff_Uls_T_f32 = Abslt_f32_f32(MotCurrAvrg_Uls_T_f32 - MotCurrOffsZeroAvrgA_Volt_T_f32);

                                if (MotCurrAbsltDiff_Uls_T_f32 > ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
                                {
                                    *Rte_Pim_MotCurrEolGainA() = Rte_Prm_CurrMeasEolGainNumer_Val() / MotCurrAbsltDiff_Uls_T_f32;

                                    *Rte_Pim_MotCurrEolCalStPrev() = MCECS_GAINCMDBE;

                                    *Rte_Pim_GainEolAvrgCntrPrev() = 0U;
                                    *Rte_Pim_EolGainTranCntrPrev() = 0U;
                                    *Rte_Pim_TmpMotCurrAdcVlySum1Prev() = 0.0F;
                                }
                                else
                                {
                                    *Rte_Pim_GainEolAvrgCntrPrev() = 0U;
                                    *Rte_Pim_TmpMotCurrAdcVlySum1Prev() = 0.0F;
                                }
                            }
                        }
                        else
                        {
                            *Rte_Pim_EolGainTranCntrPrev() += 1U;
                        }
                    break;

                    case MCECS_GAINCMDBE:
                        if (*Rte_Pim_EolGainTranCntrPrev() == Rte_Prm_CurrMeasEolTranCntrThd_Val())
                        {
                            *Rte_Pim_TmpMotCurrAdcVlySum1Prev() += MotCurrAdcVlyB_Volt_T_f32;

                            *Rte_Pim_GainEolAvrgCntrPrev() += 1U;

                            if (*Rte_Pim_GainEolAvrgCntrPrev() == Rte_Prm_CurrMeasEolGainNrOfSample_Val())
                            {
                                MotCurrAvrg_Uls_T_f32 = *Rte_Pim_TmpMotCurrAdcVlySum1Prev() / (float32) Rte_Prm_CurrMeasEolGainNrOfSample_Val();
                                MotCurrAbsltDiff_Uls_T_f32 = Abslt_f32_f32(MotCurrAvrg_Uls_T_f32 - MotCurrOffsZeroAvrgB_Volt_T_f32);

                                if (MotCurrAbsltDiff_Uls_T_f32 > ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
                                {
                                    *Rte_Pim_MotCurrEolGainB() = Rte_Prm_CurrMeasEolGainNumer_Val() / MotCurrAbsltDiff_Uls_T_f32;

                                    *Rte_Pim_MotCurrEolCalStPrev() = MCECS_GAINCMDCF;

                                    *Rte_Pim_GainEolAvrgCntrPrev() = 0U;
                                    *Rte_Pim_EolGainTranCntrPrev() = 0U;
                                    *Rte_Pim_TmpMotCurrAdcVlySum1Prev() = 0.0F;
                                }
                                else
                                {
                                    *Rte_Pim_GainEolAvrgCntrPrev() = 0U;
                                    *Rte_Pim_TmpMotCurrAdcVlySum1Prev() = 0.0F;
                                }
                            }
                        }
                        else
                        {
                            *Rte_Pim_EolGainTranCntrPrev() += 1U;
                        }
                    break;

                    case MCECS_GAINCMDCF:
                        if (*Rte_Pim_EolGainTranCntrPrev() == Rte_Prm_CurrMeasEolTranCntrThd_Val())
                        {
                            *Rte_Pim_TmpMotCurrAdcVlySum1Prev() += MotCurrAdcVlyC_Volt_T_f32;

                            *Rte_Pim_GainEolAvrgCntrPrev() += 1U;

                            if (*Rte_Pim_GainEolAvrgCntrPrev() == Rte_Prm_CurrMeasEolGainNrOfSample_Val())
                            {
                                MotCurrAvrg_Uls_T_f32 = *Rte_Pim_TmpMotCurrAdcVlySum1Prev() / (float32) Rte_Prm_CurrMeasEolGainNrOfSample_Val();
                                MotCurrAbsltDiff_Uls_T_f32 = Abslt_f32_f32(MotCurrAvrg_Uls_T_f32 - MotCurrOffsZeroAvrgC_Volt_T_f32);

                                if (MotCurrAbsltDiff_Uls_T_f32 > ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
                                {
                                    *Rte_Pim_MotCurrEolGainC() = Rte_Prm_CurrMeasEolGainNumer_Val() / MotCurrAbsltDiff_Uls_T_f32;

                                    *Rte_Pim_MotCurrEolCalStPrev() = MCECS_CMDSAFEST;

                                    *Rte_Pim_GainEolAvrgCntrPrev() = 0U;
                                    *Rte_Pim_EolGainTranCntrPrev() = 0U;
                                    *Rte_Pim_TmpMotCurrAdcVlySum1Prev() = 0.0F;
                                }
                                else
                                {
                                    *Rte_Pim_GainEolAvrgCntrPrev() = 0U;
                                    *Rte_Pim_TmpMotCurrAdcVlySum1Prev() = 0.0F;
                                }
                            }
                        }
                        else
                        {
                            *Rte_Pim_EolGainTranCntrPrev() += 1U;
                        }
                    break;

                    case MCECS_CMDSAFEST:
                        GainFltParam_Cnt_T_u08 = CALPROCNOTSTRTD_CNT_U08;

                        if (DiagcStsIvtr1Inactv_Cnt_T_logl == FALSE)
                        {
                            if ((*Rte_Pim_MotCurrEolGainA() >= Rte_Prm_CurrMeasEolGainMin_Val()) && (*Rte_Pim_MotCurrEolGainA() <= Rte_Prm_CurrMeasEolGainMax_Val()) &&
                                (*Rte_Pim_MotCurrEolGainB() >= Rte_Prm_CurrMeasEolGainMin_Val()) && (*Rte_Pim_MotCurrEolGainB() <= Rte_Prm_CurrMeasEolGainMax_Val()) &&
                                (*Rte_Pim_MotCurrEolGainC() >= Rte_Prm_CurrMeasEolGainMin_Val()) && (*Rte_Pim_MotCurrEolGainC() <= Rte_Prm_CurrMeasEolGainMax_Val()))
                            {
                                GainRngChkABC_Cnt_T_logl = TRUE;
                            }
                            else
                            {
                                GainFltParam_Cnt_T_u08 = CALPROCSTRTD_CNT_U08;
                                GainRngChkABC_Cnt_T_logl = FALSE;
                            }
                        }
                        else
                        {
                            GainFltParam_Cnt_T_u08 = CALPROCVEHSPDCNDNOTMET_CNT_U08;
                            GainRngChkABC_Cnt_T_logl = FALSE;
                        }

                        if (GainRngChkABC_Cnt_T_logl == TRUE)
                        {
                            *Rte_Pim_MotCurrEolCalStPrev() = MCECS_OFFSCMDSTRT;
                            *Rte_Pim_GainEolAvrgCntrPrev() = 0U;
                            *Rte_Pim_EolGainTranCntrPrev() = 0U;

                            (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X1ED, 0U, NTCSTS_PASSD, 0U);

                            /*** WrNvm ***/
                            Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainA = *Rte_Pim_MotCurrEolGainA();
                            Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainB = *Rte_Pim_MotCurrEolGainB();
                            Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainC = *Rte_Pim_MotCurrEolGainC();

                            (void) Rte_Call_CurrMeasEolGainCalSetABC_SetRamBlockStatus(TRUE);

                            *Rte_Pim_EolGainSts() = CALPROCPASS_CNT_U08;
                        }
                        else
                        {
                            *Rte_Pim_MotCurrEolCalStPrev() = MCECS_CMDSAFEST;
                            (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X1ED, GainFltParam_Cnt_T_u08, NTCSTS_FAILD, 0U);
                            *Rte_Pim_GainEolAvrgCntrPrev() = 0U;
                            *Rte_Pim_EolGainTranCntrPrev() = 0U;
                            *Rte_Pim_EolGainSts() = GainFltParam_Cnt_T_u08 * 4;
                        }
                    break;

                    default:
                    break;
                }
            }
            else
            {
                *Rte_Pim_MotCurrEolCalStPrev() = MCECS_CMDSAFEST;
                (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X1ED, MOTVELMRFCDNNOTMET_CNT_U08, NTCSTS_FAILD, 0U);
                *Rte_Pim_EolGainSts() = CALPROCMOTVELMRFCNDNOTMET_CNT_U08;
            }
        }
        else
        {
            *Rte_Pim_MotCurrEolCalStPrev() = MCECS_CMDSAFEST;
            (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X1ED, VEHSPDCDNNOTMET_CNT_U08, NTCSTS_FAILD, 0U);
            *Rte_Pim_EolGainSts() = CALPROCVEHSPDCNDNOTMET_CNT_U08;
        }
    }
}

/**********************************************************************************************************************
 * Name:        RangeChkWIABC
 * Description: None
 * Inputs:      MotCtrlMotCurrAdcVlyA            <- MotCtrlMotCurrAdcVlyA_Volt_T_f32
 *              MotCtrlMotCurrAdcVlyB            <- MotCtrlMotCurrAdcVlyB_Volt_T_f32
 *              MotCtrlMotCurrAdcVlyC            <- MotCtrlMotCurrAdcVlyC_Volt_T_f32
 *              CurrMeasMotCurrAdcVlyWrmIninMin  <- Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMin_Val()
 *              CurrMeasMotCurrAdcVlyWrmIninMax  <- Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMax_Val()
 * Outputs:     RangeCheckWIABC                  -> InRng_Cnt_T_logl
 * Usage Notes: None
 *********************************************************************************************************************/
static FUNC(boolean, CDD_CurrMeas_APPL_CODE) RangeChkWIABC(float32 MotCtrlMotCurrAdcVlyA_Volt_T_f32,
                                                           float32 MotCtrlMotCurrAdcVlyB_Volt_T_f32,
                                                           float32 MotCtrlMotCurrAdcVlyC_Volt_T_f32)
{
    VAR(boolean, AUTOMATIC) InRng_Cnt_T_logl;

    if ((MotCtrlMotCurrAdcVlyA_Volt_T_f32 > Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMin_Val()) && (MotCtrlMotCurrAdcVlyA_Volt_T_f32 < Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMax_Val()) &&
        (MotCtrlMotCurrAdcVlyB_Volt_T_f32 > Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMin_Val()) && (MotCtrlMotCurrAdcVlyB_Volt_T_f32 < Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMax_Val()) &&
        (MotCtrlMotCurrAdcVlyC_Volt_T_f32 > Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMin_Val()) && (MotCtrlMotCurrAdcVlyC_Volt_T_f32 < Rte_Prm_CurrMeasMotCurrAdcVlyWrmIninMax_Val()))
    {
        InRng_Cnt_T_logl = TRUE;
    }
    else
    {
        InRng_Cnt_T_logl = FALSE;
    }

    return InRng_Cnt_T_logl;
}

#define CDD_CurrMeas_STOP_SEC_CODE
#include "CDD_CurrMeas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
