/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CurrMeasCorrln.c
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/ES209B_CurrMeasCorrln_Impl/tools/Component.dpa
 *     SW-C Type:  CurrMeasCorrln
 *  Generated at:  Mon Feb 26 13:20:02 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CurrMeasCorrln>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**************************************************************************************************************************
* Copyright 2018, 2017, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CurrMeasCorrln.c
* Module Description: Implementation of Current Measurement Correlation -- ES209B
* Project           : CBD
* Author            : Nick Saxton
***************************************************************************************************************************
* Version Control:
* %version:          6 %
* %derived_by:       nz3541 %
*--------------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------------
* 04/25/16   1       NS        Initial version                                                                EA4#3236/4029
* 06/13/16   2       NS        Signal availability check enabled in only enable/operate state                 EA4#6205
* 06/22/16   3       KK        Added new FltInj point for output CurrMeasIdptSig as per FDD v1.4.0            EA4#6376
* 10/10/16   4       KK        RTE Update Only - FltInj port added in Davinci, already present in code        EA4#9194
* 05/15/17   5       SPP       Bring ES209B up to date with latest changes of the dual inverter design        EA4#10804
* 02/16/18   6       SPP       Removed input, added PIM, changed logic associated with new PIM                EA4#15467/19698
**************************************************************************************************************************/

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

#include "Rte_CurrMeasCorrln.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "NxtrMath.h"
#include "FltInj.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value.  Applicable to all casts to void for 
                                              all Rte_Read, Rte_Write, SetNtcSts, and GetNtcQlfrSts.                   */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void functon; Rte generation adds standard return type but no error information is returned for FltInj_u08_Oper */
/********************************************* Embedded Local Constants **********************************************/
#define   CORRLNSTSABC_CNT_U08          0x07U   /* Set bit 0-2 for indicating correlation status of ABC */ 
#define   CURRMOTSUMLOLIM_AMPR_F32      0.0F
#define   CURRMOTSUMHILIM_AMPR_F32      600.0F

/******************************************** Local Function Prototypes **********************************************/
static  FUNC(boolean, CurrMeasCorrln_APPL_CODE) SigAvlChk(uint8 MotCurrRollgCntr1_Cnt_T_u08, 
                                                          SigQlfr1 MotCurrQlfr1_Cnt_T_enum);

static  FUNC(boolean, CurrMeasCorrln_APPL_CODE) CurrMeasCorrlnChk(
                          float32 MotCurrCorrdA_Ampr_T_f32, 
                          float32 MotCurrCorrdB_Ampr_T_f32, 
                          float32 MotCurrCorrdC_Ampr_T_f32, 
                          P2VAR(boolean, AUTOMATIC, CurrMeasCorrln_APPL_VAR) CurrMeasLongTermCorrlnStsVldABC_Cnt_T_logl,
						  P2VAR(float32, AUTOMATIC, CurrMeasCorrln_APPL_VAR) CurrMotSumABC_Ampr_T_f32);

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
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
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
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_Snsr0RollgCntPrev(void)
 *   uint8 *Rte_Pim_Snsr0StallCntPrev(void)
 *   boolean *Rte_Pim_LongTermCorrlnStsABC(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val(void)
 *   uint16 Rte_Prm_CurrMeasCorrlnNtc0x04DFailStep_Val(void)
 *   uint16 Rte_Prm_CurrMeasCorrlnNtc0x04DPassStep_Val(void)
 *   uint8 Rte_Prm_CurrMeasCorrlnMaxStallCntr_Val(void)
 *
 *********************************************************************************************************************/


#define CurrMeasCorrln_START_SEC_CODE
#include "CurrMeasCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasCorrlnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasCorrlnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CurrMeasCorrln_CODE) CurrMeasCorrlnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasCorrlnInit1
 *********************************************************************************************************************/
  *Rte_Pim_LongTermCorrlnStsABC() = TRUE;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CurrMeasCorrlnPer1
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
 *   Std_ReturnType Rte_Read_MotCurrCorrdA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrCorrdB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrCorrdC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrEolCalSt_Val(MotCurrEolCalSt2 *data)
 *   Std_ReturnType Rte_Read_MotCurrRollgCntr1_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CurrMeasCorrlnSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrMeasIdptSig_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CurrMotSumABC_Val(float32 data)
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
 * Symbol: CurrMeasCorrlnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CurrMeasCorrln_CODE) CurrMeasCorrlnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CurrMeasCorrlnPer1
 *********************************************************************************************************************/
 
    /* Inputs */
    VAR(boolean, AUTOMATIC)             DiagcStsIvtr1Inactv_Cnt_T_logl;
    VAR(float32, AUTOMATIC)             MotCurrCorrdA_Ampr_T_f32;
    VAR(float32, AUTOMATIC)             MotCurrCorrdB_Ampr_T_f32;
    VAR(float32, AUTOMATIC)             MotCurrCorrdC_Ampr_T_f32;
    VAR(MotCurrEolCalSt2, AUTOMATIC)    MotCurrEolCalSt_Cnt_T_enum;
    VAR(SigQlfr1, AUTOMATIC)            MotCurrQlfr1_Cnt_T_enum;
    VAR(uint8, AUTOMATIC)               MotCurrRollgCntr1_Cnt_T_u08;
    VAR(SysSt1, AUTOMATIC)              SysSt_Cnt_T_enum;

    /* Outputs */
    VAR(uint8, AUTOMATIC)               CurrMeasCorrlnSts_Cnt_T_u08 = 0U;
    VAR(uint8, AUTOMATIC)               CurrMeasIdptSig_Cnt_T_u08;
	VAR(float32, AUTOMATIC)             CurrMotSumABC_Ampr_T_f32;

    VAR(boolean, AUTOMATIC)             SigAvlABC_Cnt_T_logl;
    VAR(boolean, AUTOMATIC)             CurrMeasImdtCorrlnStsVldABC_Cnt_T_logl;
    VAR(boolean, AUTOMATIC)             CurrMeasLongTermCorrlnStsVldABC_Cnt_T_logl;


    /*** Read inputs ***/
    (void)Rte_Read_DiagcStsIvtr1Inactv_Logl(&DiagcStsIvtr1Inactv_Cnt_T_logl);   
    (void)Rte_Read_MotCurrCorrdA_Val(&MotCurrCorrdA_Ampr_T_f32);                
    (void)Rte_Read_MotCurrCorrdB_Val(&MotCurrCorrdB_Ampr_T_f32);                
    (void)Rte_Read_MotCurrCorrdC_Val(&MotCurrCorrdC_Ampr_T_f32);                
    (void)Rte_Read_MotCurrEolCalSt_Val(&MotCurrEolCalSt_Cnt_T_enum);            
                 
    (void)Rte_Read_MotCurrRollgCntr1_Val(&MotCurrRollgCntr1_Cnt_T_u08);         
    (void)Rte_Read_SysSt_Val(&SysSt_Cnt_T_enum);                                


    /*** Signal Availability ***/
    if (SysSt_Cnt_T_enum == SYSST_ENA)
    {
		/*** Signal Availability Check En ***/
		(void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X05D, &MotCurrQlfr1_Cnt_T_enum);
		/*** Call CurrMeas Signal Availability ***/
        SigAvlABC_Cnt_T_logl = SigAvlChk(MotCurrRollgCntr1_Cnt_T_u08, 
		                                 MotCurrQlfr1_Cnt_T_enum); 
    }
    else
    {
		/*** Signal Availability Check Disable ***/
        SigAvlABC_Cnt_T_logl = TRUE; 
    }
    
    /*** CorrlnChkABC ***/
    if (SysSt_Cnt_T_enum == SYSST_ENA)
    {
        if ( (DiagcStsIvtr1Inactv_Cnt_T_logl == FALSE) && (MotCurrEolCalSt_Cnt_T_enum == MCECS_OFFSCMDSTRT) )
        {
            CurrMeasImdtCorrlnStsVldABC_Cnt_T_logl = CurrMeasCorrlnChk(MotCurrCorrdA_Ampr_T_f32, 
			                                                           MotCurrCorrdB_Ampr_T_f32, 
																	   MotCurrCorrdC_Ampr_T_f32,
                                                                       &CurrMeasLongTermCorrlnStsVldABC_Cnt_T_logl,
																	   &CurrMotSumABC_Ampr_T_f32);
        }
		else 
		{
	        CurrMeasImdtCorrlnStsVldABC_Cnt_T_logl = FALSE;
            CurrMeasLongTermCorrlnStsVldABC_Cnt_T_logl = FALSE;
		    CurrMotSumABC_Ampr_T_f32 = 0.0F;
		}
    }
    else
    { 
        CurrMeasImdtCorrlnStsVldABC_Cnt_T_logl = TRUE;
        CurrMeasLongTermCorrlnStsVldABC_Cnt_T_logl = TRUE;
		CurrMotSumABC_Ampr_T_f32 = 0.0F;
    }


    /*** CorrlnStsLogic ***/
    if ( (SigAvlABC_Cnt_T_logl == TRUE) && 
	     (CurrMeasImdtCorrlnStsVldABC_Cnt_T_logl == TRUE) && 
		 (CurrMeasLongTermCorrlnStsVldABC_Cnt_T_logl == TRUE) && 
		 (*Rte_Pim_LongTermCorrlnStsABC() == TRUE) )
    {
        CurrMeasCorrlnSts_Cnt_T_u08 = CORRLNSTSABC_CNT_U08; /* Set to 0 when declared, so only change if True, otherwise, it remains 0 */
    }


    /*** IdptSigLogic ***/
    if ( (SigAvlABC_Cnt_T_logl == TRUE) && 
	     (CurrMeasLongTermCorrlnStsVldABC_Cnt_T_logl == TRUE) &&
         (*Rte_Pim_LongTermCorrlnStsABC() == TRUE) )
    {
        CurrMeasIdptSig_Cnt_T_u08 = 1U;
    }
    else
    {
        CurrMeasIdptSig_Cnt_T_u08 = 0U;
		*Rte_Pim_LongTermCorrlnStsABC() = FALSE; /* Only need PIM = FALSE in else case because PIM = TRUE is part of if condition. */
    }
    
 /* Start of  FltInj_f32 client */ 
	#if (STD_ON == FLTINJENA)   
		(void) Rte_Call_FltInj_u08_Oper(&CurrMeasIdptSig_Cnt_T_u08, FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG);  
    #endif
 /* End of  FltInj_f32 client */ 
 
    /* Output limiting */
    CurrMotSumABC_Ampr_T_f32 = Lim_f32(CurrMotSumABC_Ampr_T_f32, CURRMOTSUMLOLIM_AMPR_F32, CURRMOTSUMHILIM_AMPR_F32);
 
    /*** Write outputs ***/
    (void)Rte_Write_CurrMeasCorrlnSts_Val(CurrMeasCorrlnSts_Cnt_T_u08); 
    (void)Rte_Write_CurrMeasIdptSig_Val(CurrMeasIdptSig_Cnt_T_u08);
    (void)Rte_Write_CurrMotSumABC_Val(CurrMotSumABC_Ampr_T_f32);    

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CurrMeasCorrln_STOP_SEC_CODE
#include "CurrMeasCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************************************************
  * Name         :  SigAvlChk
  * Description  :  Implementation of "Signal Availability" block.
  * Inputs       :  MotCurrRollgCntr1_Cnt_T_u08 - motor current rolling counter
  *                 MotCurrQlfr1_Cnt_T_enum     - motor current qualifier
  * Output       :  SigAvlABC_Cnt_T_logl        - TRUE if signal is available, FALSE otherwise
  * Usage Notes  :  None
  ****************************************************************************************************************/
static  FUNC(boolean, CurrMeasCorrln_APPL_CODE) SigAvlChk(uint8 MotCurrRollgCntr1_Cnt_T_u08, 
                                                          SigQlfr1 MotCurrQlfr1_Cnt_T_enum)
{
    VAR(boolean, AUTOMATIC) SigAvlABC_Cnt_T_logl;
	/* Determine Stall Counter */
	/* If the current rolling count is equal to previous rolling count, then check Stall count */	
    if (MotCurrRollgCntr1_Cnt_T_u08 == *Rte_Pim_Snsr0RollgCntPrev())
    {
		/*** Stalled Rolling Counter ***/
		/* If max Stall count not reached, increment counter otherwise do nothing because Stall Counter at Max */
        if (*Rte_Pim_Snsr0StallCntPrev() < Rte_Prm_CurrMeasCorrlnMaxStallCntr_Val())
        {
            *Rte_Pim_Snsr0StallCntPrev() += 1U;
        }
    }
	/* Else if current Rolling count is not equal to previous Rolling count, reset Stall counter to 0 */
    else
    {
        *Rte_Pim_Snsr0StallCntPrev() = 0U;
    }
	/* Conditions for CurrMeas Signal Availability */
     /* Signal is available under two conditions
       1) There is no Stall in the rolling counter value (has not reached Max Stall Count).
       2) Signal Qualifier is not in a failed state.
     */
    if ( (*Rte_Pim_Snsr0StallCntPrev() < Rte_Prm_CurrMeasCorrlnMaxStallCntr_Val()) && (MotCurrQlfr1_Cnt_T_enum != SIGQLFR_FAILD))
    {
        SigAvlABC_Cnt_T_logl = TRUE;
    } 
	else
	{
		SigAvlABC_Cnt_T_logl = FALSE;
	}

    *Rte_Pim_Snsr0RollgCntPrev() = MotCurrRollgCntr1_Cnt_T_u08;

    return SigAvlABC_Cnt_T_logl;   
}

/*****************************************************************************************************************
  * Name         :  CurrMeasCorrlnChk
  * Description  :  Implements portion of "CorrlnChkABC" block. Determines correlation status and sets 
  *                 associated NTC.
  * Inputs       :  MotCurrCorrdA_Ampr_T_f32 - motor current corrected A
  *                 MotCurrCorrdB_Ampr_T_f32 - motor current corrected B
  *                 MotCurrCorrdC_Ampr_T_f32 - motor current corrected C
  * Output       :  *CurrMeasLongTermCorrlnStsVldABC_Cnt_T_logl - longterm correlation status ABC
  *                 CurrMeasImdtCorrlnStsVldABC_Cnt_T_logl      - immediate correlation status ABC
  *                 *CurrMotSumABC_Ampr_T_f32 - Summation of Motor current A,B,C
  * Usage Notes  :  None
  ****************************************************************************************************************/
static  FUNC(boolean, CurrMeasCorrln_APPL_CODE) CurrMeasCorrlnChk(
                          float32 MotCurrCorrdA_Ampr_T_f32, 
                          float32 MotCurrCorrdB_Ampr_T_f32, 
                          float32 MotCurrCorrdC_Ampr_T_f32, 
                          P2VAR(boolean, AUTOMATIC, CurrMeasCorrln_APPL_VAR) CurrMeasLongTermCorrlnStsVldABC_Cnt_T_logl,
                          P2VAR(float32, AUTOMATIC, CurrMeasCorrln_APPL_VAR) CurrMotSumABC_Ampr_T_f32)
{
    VAR(boolean, AUTOMATIC)     CurrMeasImdtCorrlnStsVldABC_Cnt_T_logl;
    VAR(SigQlfr1, AUTOMATIC)    NtcSts_Cnt_T_enum;
    /* Add MotCurrCoord A, B, and C and assign to CurrMotSumABC */
    *CurrMotSumABC_Ampr_T_f32 =Abslt_f32_f32(MotCurrCorrdA_Ampr_T_f32 + MotCurrCorrdB_Ampr_T_f32 + MotCurrCorrdC_Ampr_T_f32);
    if (*CurrMotSumABC_Ampr_T_f32 < Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val())
    {
        CurrMeasImdtCorrlnStsVldABC_Cnt_T_logl = TRUE;
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X04D, 0U, NTCSTS_PREPASSD, Rte_Prm_CurrMeasCorrlnNtc0x04DPassStep_Val());
    }
    else
    {
        CurrMeasImdtCorrlnStsVldABC_Cnt_T_logl = FALSE;
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X04D, 1U, NTCSTS_PREFAILD, Rte_Prm_CurrMeasCorrlnNtc0x04DFailStep_Val());
    }

    (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X04D, &NtcSts_Cnt_T_enum);

    if (NtcSts_Cnt_T_enum == SIGQLFR_FAILD)
    {
        *CurrMeasLongTermCorrlnStsVldABC_Cnt_T_logl = FALSE;
    }
    else
    {
        *CurrMeasLongTermCorrlnStsVldABC_Cnt_T_logl = TRUE;
    }

    return CurrMeasImdtCorrlnStsVldABC_Cnt_T_logl;
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
