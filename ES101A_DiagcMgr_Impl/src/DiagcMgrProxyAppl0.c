/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  DiagcMgrProxyAppl0.c
 *        Config:  C:/_EA4SynWrkgCpy/ES101A_DiagcMgr_Impl/tools/Component.dpa
 *     SW-C Type:  DiagcMgrProxyAppl0
 *  Generated at:  Fri Sep 29 09:25:29 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <DiagcMgrProxyAppl0>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name: DiagcMgrProxyAppl0.c
* Module Description: Implementation of Diagnostic Manager Proxy component FDD ES101A
* Project           : CBD 
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:             8 %
* %derived_by:          nz2554 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                         SCR #
* -------   -------  --------  ---------------------------------------------------------------------------   ----------
* 02/26/16  1        SB         ES101A_DiagcMgr_Design version 2 implementation                              EA4#3421
* 04/19/16  2        SB         ES101A_DiagcMgr_Design version 3 implementation                              EA4#5110
* 06/20/16  3        SB         ES101A_DiagcMgr_Design version 4 implementation                              EA4#6251
* 08/30/16  4        SB         Updated to fix anomaly EA4#6663                                              EA4#6905
* 09/23/16  5        SB         Removed requirement mapping                                                  EA4#7191
* 11/29/16  6        SB         Added DET to check DiagcMgr over indexing issue                              EA4#8334
* 04/07/17  7        SR         Type changes for constants and calibrations. Removed constant from ES999A
                                that was being used to decide DiagcSts based on IvtrCnt. Using NtcPptyAry
                                for the FltRespTbl bits that were moved. Logic for RampResp processing in
                                Per1 changed. Added SetNtcStsAndSnpshtData server runnable.                  EA4#10779
* 10/26/17  8        SR         Generated content changed because the DaVinci generate was rerun with new 
*                               version of the RteGen tool while moving to new folder structure.             EA4#14411
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

#include "Rte_DiagcMgrProxyAppl0.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrDet.h"
#include "DiagcMgr.h"
#include "DiagcMgr_private.h"

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value of Rte Read/Write,Det_ReportError*/
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void functon. Rte generation adds standard return type but no error information is returned.
                           List of Functions: Rte_Call_DiagcMgrIninCore_Oper,Rte_Call_GetNtcActvCore_Oper,Rte_Call_GetNtcQlfrStsCore_Oper,Rte_Call_GetNtcStsCore_Oper*/
/* MISRA-C:2004 Rule 19.1  [NXTRDEV 19.1.1 ]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */ 
 
#define PimDiagcMgrNtcInfo0Ary_rec      (*(Ary1D_NtcInfoRec4_DiagcMgrProxyAppl0 *)(Rte_Pim_DiagcMgrNtcInfo0Ary()))  
#define PimDiagcMgrNtcInfo0DebCntrAry_s16       (*(Ary1D_s16_DiagcMgrProxyAppl0 *)(Rte_Pim_DiagcMgrNtcInfo0DebCntrAry()))  
#define PrmDiagcMgrFltResp_u16                  (*(const Ary1D_u16_512 *)(Rte_Prm_DiagcMgrFltResp_Ary1D()))  

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
 * sint16: Integer in interval [-32768...32767] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
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
 * Array Types:
 * ============
 * Ary1D_NtcInfoRec4_DiagcMgr: Array with 65535 element(s) of type NtcInfoRec4
 * Ary1D_NtcInfoRec4_DiagcMgrProxyAppl0: Array with 65535 element(s) of type NtcInfoRec4
 * Ary1D_s16_DiagcMgrProxyAppl0: Array with 65535 element(s) of type sint16
 * Ary1D_u16_512: Array with 512 element(s) of type uint16
 *
 * Record Types:
 * =============
 * DiagcDataRec2: Record with elements
 *   DiagcSts of type uint8
 *   ActvRampRate of type float32
 *   ActvMotTqCmdSca of type float32
 * NtcInfoRec4: Record with elements
 *   NtcStInfo of type uint8
 *   Sts of type uint8
 *   AgiCntr of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_PrevClrNtcFlg0(void)
 *   NtcInfoRec4 *Rte_Pim_DiagcMgrNtcInfo0Ary(void)
 *     Returnvalue: NtcInfoRec4* is of type Ary1D_NtcInfoRec4_DiagcMgrProxyAppl0
 *   sint16 *Rte_Pim_DiagcMgrNtcInfo0DebCntrAry(void)
 *     Returnvalue: sint16* is of type Ary1D_s16_DiagcMgrProxyAppl0
 *   DiagcDataRec2 *Rte_Pim_DiagcData0(void)
 *   DiagcDataRec2 *Rte_Pim_ProxySetNtcData0(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 *Rte_Prm_DiagcMgrFltResp_Ary1D(void)
 *     Returnvalue: uint16* is of type Ary1D_u16_512
 *
 *********************************************************************************************************************/


#define DiagcMgrProxyAppl0_START_SEC_CODE
#include "DiagcMgrProxyAppl0_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagcMgrProxyAppl0Init1
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
 *   Std_ReturnType Rte_Call_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 *NtcInfoAry_Arg, DiagcDataRec2 *DiagcData_Arg, DiagcDataRec2 *ProxySetNtcData_Arg)
 *     Argument NtcInfoAry_Arg: NtcInfoRec4* is of type Ary1D_NtcInfoRec4_DiagcMgr
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagcMgrProxyAppl0Init1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgrProxyAppl0_CODE) DiagcMgrProxyAppl0Init1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagcMgrProxyAppl0Init1
 *********************************************************************************************************************/
     
	 VAR(uint16, AUTOMATIC) LoopCntr_Cnt_T_u16;
    
     #if ((STD_ON == NXTRDET_DIAGCMGR) && (STD_ON == DIAGCMGR_DEMCHK))
     for (LoopCntr_Cnt_T_u16=0U; LoopCntr_Cnt_T_u16<TblSize_m(NTCNRARYAPPL0_CNT_U16); LoopCntr_Cnt_T_u16++)
     {
         if ((PrmDiagcMgrFltResp_u16[NTCNRARYAPPL0_CNT_U16[LoopCntr_Cnt_T_u16]] & FLTRESPDTCIDX_CNT_U16) > TOTNROFDTC_CNT_U08)
         {
             /* DET for over-indexing issue - Check to ensure fault response table is set to have mappings 
             to DTCs that are larger than the total number of DTCs in the code configuration*/
             (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, DIAGCMGR_APPLIDX0_CNT_U08, 4U, 0U);
         }
     }       
     #endif
	 
     (void) Rte_Call_DiagcMgrIninCore_Oper(DIAGCMGR_APPLIDX0_CNT_U08, 
                                             (uint8)TblSize_m(PimDiagcMgrNtcInfo0Ary_rec), 
                                             PimDiagcMgrNtcInfo0Ary_rec, 
                                             Rte_Pim_DiagcData0(), 
                                             Rte_Pim_ProxySetNtcData0() );   

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagcMgrProxyAppl0Per1
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
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_DiagcMgrProxyAppl0(void)
 *   void Rte_Exit_DiagcMgrProxyAppl0(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagcMgrProxyAppl0Per1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgrProxyAppl0_CODE) DiagcMgrProxyAppl0Per1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagcMgrProxyAppl0Per1
 *********************************************************************************************************************/
    VAR(uint16, AUTOMATIC) NtcInfoIdx_Cnt_T_u16; 
    VAR(uint8, AUTOMATIC)  ClrNtcFlg_Cnt_T_u08;
    VAR(DiagcDataRec2, AUTOMATIC) ProxyPerData_T_rec;   

    (void) Rte_Read_ClrDiagcFlgProxy_Val(&ClrNtcFlg_Cnt_T_u08);

    /* if ClrNtcFlg has changed, clear faults service call was made */ 
    if (ClrNtcFlg_Cnt_T_u08 != *Rte_Pim_PrevClrNtcFlg0())
    {
        for (NtcInfoIdx_Cnt_T_u16 = 0U; NtcInfoIdx_Cnt_T_u16 < (uint16)TblSize_m(PimDiagcMgrNtcInfo0Ary_rec); NtcInfoIdx_Cnt_T_u16++) 
        {
            /* Clear the NTCs that are active */
            if(((DIAGCMGRNTCPPTYARY_CNT_U08[NTCNRARYAPPL0_CNT_U16[NtcInfoIdx_Cnt_T_u16]] & NTCPPTYSTSLOCKDTHISIGNCYC_CNT_U08) != 0U) &&
                    ((PimDiagcMgrNtcInfo0Ary_rec[NtcInfoIdx_Cnt_T_u16].Sts & DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08) == 0U) &&
                    ((PimDiagcMgrNtcInfo0Ary_rec[NtcInfoIdx_Cnt_T_u16].AgiCntr >= 1U) && 
                    (PimDiagcMgrNtcInfo0Ary_rec[NtcInfoIdx_Cnt_T_u16].AgiCntr <= MAXCYCINHIST_CNT_U08)))
            {
                /* Status 0, AC 255, DebCntr Same */
                PimDiagcMgrNtcInfo0Ary_rec[NtcInfoIdx_Cnt_T_u16].Sts = 0U;
                PimDiagcMgrNtcInfo0Ary_rec[NtcInfoIdx_Cnt_T_u16].NtcStInfo = 0U;
                PimDiagcMgrNtcInfo0Ary_rec[NtcInfoIdx_Cnt_T_u16].AgiCntr = DFTAGICNTR_CNT_U08;
                
            }
            else if(((DIAGCMGRNTCPPTYARY_CNT_U08[NTCNRARYAPPL0_CNT_U16[NtcInfoIdx_Cnt_T_u16]] & NTCPPTYSTSLOCKDTHISIGNCYC_CNT_U08) != 0U) &&
               ((PimDiagcMgrNtcInfo0Ary_rec[NtcInfoIdx_Cnt_T_u16].Sts & DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08) == 0U) &&
               ((PimDiagcMgrNtcInfo0Ary_rec[NtcInfoIdx_Cnt_T_u16].AgiCntr == 0U) || 
                (PimDiagcMgrNtcInfo0Ary_rec[NtcInfoIdx_Cnt_T_u16].AgiCntr == 255U)))
            {
                /* Do Nothing */
            } 
            else
            {
                /* Status 64, AC 255, DebCntr 0 */
                PimDiagcMgrNtcInfo0Ary_rec[NtcInfoIdx_Cnt_T_u16].Sts = DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08;
                PimDiagcMgrNtcInfo0Ary_rec[NtcInfoIdx_Cnt_T_u16].NtcStInfo = 0U;
                PimDiagcMgrNtcInfo0Ary_rec[NtcInfoIdx_Cnt_T_u16].AgiCntr = DFTAGICNTR_CNT_U08;
                
                PimDiagcMgrNtcInfo0DebCntrAry_s16[DIAGCMGRNTCMAP_CNT_REC[NTCNRARYAPPL0_CNT_U16[NtcInfoIdx_Cnt_T_u16]].DebCntrIdx] = 0;
            }
        }
        Rte_Enter_DiagcMgrProxyAppl0();  
        Rte_Pim_DiagcData0()->ActvMotTqCmdSca = SCAMOTTQCMDTOONE_ULS_F32;
        Rte_Pim_DiagcData0()->ActvRampRate = MINRAMPRATE_ULSPERSEC_F32; 
        Rte_Pim_DiagcData0()->DiagcSts = DIAGCSTSININVAL_CNT_U08;
        Rte_Pim_ProxySetNtcData0()->ActvMotTqCmdSca = SCAMOTTQCMDTOONE_ULS_F32;
        Rte_Pim_ProxySetNtcData0()->ActvRampRate = MINRAMPRATE_ULSPERSEC_F32; 
        Rte_Pim_ProxySetNtcData0()->DiagcSts = DIAGCSTSININVAL_CNT_U08;
        Rte_Exit_DiagcMgrProxyAppl0();

        *Rte_Pim_PrevClrNtcFlg0() = ClrNtcFlg_Cnt_T_u08;
    }
    else 
    {      
        Rte_Enter_DiagcMgrProxyAppl0();  
        Rte_Pim_ProxySetNtcData0()->ActvMotTqCmdSca = SCAMOTTQCMDTOONE_ULS_F32; 
        Rte_Pim_ProxySetNtcData0()->ActvRampRate = MINRAMPRATE_ULSPERSEC_F32; 
        Rte_Pim_ProxySetNtcData0()->DiagcSts = DIAGCSTSININVAL_CNT_U08;
        Rte_Exit_DiagcMgrProxyAppl0();

        ProxyPerData_T_rec.ActvMotTqCmdSca = SCAMOTTQCMDTOONE_ULS_F32;
        ProxyPerData_T_rec.ActvRampRate = MINRAMPRATE_ULSPERSEC_F32; 
        ProxyPerData_T_rec.DiagcSts = DIAGCSTSININVAL_CNT_U08;
        
        for (NtcInfoIdx_Cnt_T_u16 = 0U; NtcInfoIdx_Cnt_T_u16 < (uint16)TblSize_m(PimDiagcMgrNtcInfo0Ary_rec); NtcInfoIdx_Cnt_T_u16++) 
        {   
            if (((PimDiagcMgrNtcInfo0Ary_rec[NtcInfoIdx_Cnt_T_u16].Sts & DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08) != 0U) &&
                ((PimDiagcMgrNtcInfo0Ary_rec[NtcInfoIdx_Cnt_T_u16].Sts & DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08) != 0U))
            {
                /* ProcessRampResponseAndDiagcSts */
                ProcProxyRampRespAndDiagcSts (NTCNRARYAPPL0_CNT_U16[NtcInfoIdx_Cnt_T_u16], &ProxyPerData_T_rec);             
            }
        }
        Rte_Enter_DiagcMgrProxyAppl0();
        Rte_Pim_DiagcData0()->ActvMotTqCmdSca = Min_f32(ProxyPerData_T_rec.ActvMotTqCmdSca, Rte_Pim_ProxySetNtcData0()->ActvMotTqCmdSca);
        Rte_Pim_DiagcData0()->ActvRampRate = Max_f32(ProxyPerData_T_rec.ActvRampRate, Rte_Pim_ProxySetNtcData0()->ActvRampRate); 
        Rte_Pim_DiagcData0()->DiagcSts = ProxyPerData_T_rec.DiagcSts | Rte_Pim_ProxySetNtcData0()->DiagcSts;        
        Rte_Exit_DiagcMgrProxyAppl0();
    }
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetDiagcDataAppl0_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetDiagcDataAppl0>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetDiagcDataAppl0_Oper(DiagcDataRec2 *DiagcData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetDiagcDataAppl0_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgrProxyAppl0_CODE) GetDiagcDataAppl0_Oper(P2VAR(DiagcDataRec2, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL0_APPL_VAR) DiagcData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetDiagcDataAppl0_Oper
 *********************************************************************************************************************/
    *DiagcData_Arg = *Rte_Pim_DiagcData0();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcActv0_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcActv0>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean *NtcActv_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetNtcActv0_Oper(NtcNr1 NtcNr_Arg, boolean *NtcActv_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetNtcActv_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcActv0_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagcMgrProxyAppl0_CODE) GetNtcActv0_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL0_APPL_VAR) NtcActv_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcActv0_Oper (returns application error)
 *********************************************************************************************************************/

    VAR (Std_ReturnType, AUTOMATIC) RtnVal_Cnt_T_enum;   
#if (STD_ON == NXTRDET_DIAGCMGR)
    if((NtcNr_Arg < NTCNR_0X001) || (NtcNr_Arg > NTCNR_0X1FF))
    {
        RtnVal_Cnt_T_enum = E_NOT_OK;
        /* NtcNr is out of range */
            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, DIAGCMGR_APPLIDX0_CNT_U08, 3U, 0U);
    }   
    else if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].ApplIdx == 0xFFU)
    {
        RtnVal_Cnt_T_enum = E_NOT_OK;
        /* NtcNr is not configured in any application */
            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, DIAGCMGR_APPLIDX0_CNT_U08, 3U, 1U);
    }           
    else
    {
#endif  
        (void)Rte_Call_GetNtcActvCore_Oper(NtcNr_Arg, NtcActv_Arg);
        RtnVal_Cnt_T_enum = E_OK;
#if (STD_ON == NXTRDET_DIAGCMGR)
    }
#endif
    return(RtnVal_Cnt_T_enum);
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcDebCntrAppl0_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcDebCntrAppl0>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcDebCntrAppl0_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcDebCntrAppl0_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgrProxyAppl0_CODE) GetNtcDebCntrAppl0_Oper(uint8 DebCntrIdx_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL0_APPL_VAR) DebCntr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcDebCntrAppl0_Oper
 *********************************************************************************************************************/

    *DebCntr_Arg = (Rte_Pim_DiagcMgrNtcInfo0DebCntrAry()[DebCntrIdx_Arg]);
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcInfoAppl0_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcInfoAppl0>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcInfoAppl0_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcInfoAppl0_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgrProxyAppl0_CODE) GetNtcInfoAppl0_Oper(uint8 NtcInfoIdx_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL0_APPL_VAR) NtcInfo_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcInfoAppl0_Oper
 *********************************************************************************************************************/

    *NtcInfo_Arg = (Rte_Pim_DiagcMgrNtcInfo0Ary()[NtcInfoIdx_Arg]);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcQlfrSts0_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcQlfrSts0>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetNtcQlfrSts0_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcQlfrSts0_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagcMgrProxyAppl0_CODE) GetNtcQlfrSts0_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL0_APPL_VAR) NtcQlfr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcQlfrSts0_Oper (returns application error)
 *********************************************************************************************************************/

    VAR (Std_ReturnType, AUTOMATIC) RtnVal_Cnt_T_enum;
#if (STD_ON == NXTRDET_DIAGCMGR)
    if((NtcNr_Arg < NTCNR_0X001) || (NtcNr_Arg > NTCNR_0X1FF))
    {
        RtnVal_Cnt_T_enum = E_NOT_OK;
        /* NtcNr is out of range */ 
            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, DIAGCMGR_APPLIDX0_CNT_U08, 2U, 0U);
    }   
    else if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].ApplIdx == 0xFFU)
    {
        RtnVal_Cnt_T_enum = E_NOT_OK;
        /* NtcNr is not configured in any application */
            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, DIAGCMGR_APPLIDX0_CNT_U08, 2U, 1U);
    }           
    else
    {
#endif  
        (void)Rte_Call_GetNtcQlfrStsCore_Oper(NtcNr_Arg, NtcQlfr_Arg);
        RtnVal_Cnt_T_enum = E_OK;
#if (STD_ON == NXTRDET_DIAGCMGR)
    }
#endif
    return(RtnVal_Cnt_T_enum);
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcSts0_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcSts0>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 *NtcInfoSts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetNtcSts0_Oper(NtcNr1 NtcNr_Arg, uint8 *NtcInfoSts_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcSts0_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagcMgrProxyAppl0_CODE) GetNtcSts0_Oper(NtcNr1 NtcNr_Arg, P2VAR(uint8, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL0_APPL_VAR) NtcInfoSts_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcSts0_Oper (returns application error)
 *********************************************************************************************************************/

    VAR (Std_ReturnType, AUTOMATIC) RtnVal_Cnt_T_enum;
#if (STD_ON == NXTRDET_DIAGCMGR)
    if((NtcNr_Arg < NTCNR_0X001) || (NtcNr_Arg > NTCNR_0X1FF))
    {
        RtnVal_Cnt_T_enum = E_NOT_OK;
        /* NtcNr is out of range */
            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, DIAGCMGR_APPLIDX0_CNT_U08, 1U, 0U);
    }   
    else if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].ApplIdx == 0xFFU)
    {
        RtnVal_Cnt_T_enum = E_NOT_OK;
        /* NtcNr is not configured in any application */
            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, DIAGCMGR_APPLIDX0_CNT_U08, 1U, 1U);
    }           
    else
    {
#endif  
        (void)Rte_Call_GetNtcStsCore_Oper(NtcNr_Arg, NtcInfoSts_Arg);
        RtnVal_Cnt_T_enum = E_OK;
#if (STD_ON == NXTRDET_DIAGCMGR)
    }
#endif
    return(RtnVal_Cnt_T_enum); 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetNtcSts0_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetNtcSts0>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec2 *DiagcData_Arg, DiagcDataRec2 *ProxySetNtcData_Arg, NtcInfoRec4 *NtcInfo_Arg, sint16 *NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcStsCore_PortIf2_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SetNtcSts0_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetNtcSts0_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagcMgrProxyAppl0_CODE) SetNtcSts0_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetNtcSts0_Oper (returns application error)
 *********************************************************************************************************************/

    VAR (Std_ReturnType, AUTOMATIC) RtnVal_Cnt_T_enum;
#if (STD_ON == NXTRDET_DIAGCMGR)
    if((NtcNr_Arg < NTCNR_0X001) || (NtcNr_Arg > NTCNR_0X1FF))
    {
        RtnVal_Cnt_T_enum = E_NOT_OK;
        /* NtcNr is out of range */
            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, DIAGCMGR_APPLIDX0_CNT_U08, 0U, 0U);
    }   
    else if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].ApplIdx != DIAGCMGR_APPLIDX0_CNT_U08)
    {
        RtnVal_Cnt_T_enum = E_NOT_OK;
        /* NtcNr is not configured in this application */
            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, DIAGCMGR_APPLIDX0_CNT_U08, 0U, 1U);
    }           
    else
    {           
#endif  
    RtnVal_Cnt_T_enum = Rte_Call_SetNtcStsCore_Oper(NtcNr_Arg,
                                                    NtcStInfo_Arg,
                                                    NtcSts_Arg,
                                                    DebStep_Arg,
                                                    Rte_Pim_DiagcData0(),
                                                    Rte_Pim_ProxySetNtcData0(),
                                                    (&PimDiagcMgrNtcInfo0Ary_rec[DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].NtcInfoIdx]),
                                                    (&PimDiagcMgrNtcInfo0DebCntrAry_s16[DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx]),
                                                    DFTSPCLSNPSHTDATA_CNT_U32,
                                                    DFTSPCLSNPSHTDATA_CNT_U32,
                                                    DFTSPCLSNPSHTDATA_CNT_U32,
                                                    FALSE);
#if (STD_ON == NXTRDET_DIAGCMGR)
    }
#endif
    return(RtnVal_Cnt_T_enum);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetNtcStsAndSnpshtData0_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetNtcStsAndSnpshtData0>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec2 *DiagcData_Arg, DiagcDataRec2 *ProxySetNtcData_Arg, NtcInfoRec4 *NtcInfo_Arg, sint16 *NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcStsCore_PortIf2_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SetNtcStsAndSnpshtData0_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetNtcStsAndSnpshtData0_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagcMgrProxyAppl0_CODE) SetNtcStsAndSnpshtData0_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetNtcStsAndSnpshtData0_Oper (returns application error)
 *********************************************************************************************************************/
    VAR (Std_ReturnType, AUTOMATIC) RtnVal_Cnt_T_enum;
#if (STD_ON == NXTRDET_DIAGCMGR)
    if((NtcNr_Arg < NTCNR_0X001) || (NtcNr_Arg > NTCNR_0X1FF))
    {
        RtnVal_Cnt_T_enum = E_NOT_OK;
        /* NtcNr is out of range */
            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, DIAGCMGR_APPLIDX0_CNT_U08, 5U, 0U);
    }   
    else if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].ApplIdx != DIAGCMGR_APPLIDX0_CNT_U08)
    {
        RtnVal_Cnt_T_enum = E_NOT_OK;
        /* NtcNr is not configured in this application */
            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, DIAGCMGR_APPLIDX0_CNT_U08, 5U, 1U);
    }           
    else
    {           
#endif
    RtnVal_Cnt_T_enum = Rte_Call_SetNtcStsCore_Oper(NtcNr_Arg,
                                                    NtcStInfo_Arg,
                                                    NtcSts_Arg,
                                                    DebStep_Arg,
                                                    Rte_Pim_DiagcData0(),
                                                    Rte_Pim_ProxySetNtcData0(),
                                                    (&PimDiagcMgrNtcInfo0Ary_rec[DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].NtcInfoIdx]),
                                                    (&PimDiagcMgrNtcInfo0DebCntrAry_s16[DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx]),
                                                    SpclSnpshtData0_Arg,
                                                    SpclSnpshtData1_Arg,
                                                    SpclSnpshtData2_Arg,
                                                    TRUE);
#if (STD_ON == NXTRDET_DIAGCMGR)
    }
#endif

    return(RtnVal_Cnt_T_enum);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define DiagcMgrProxyAppl0_STOP_SEC_CODE
#include "DiagcMgrProxyAppl0_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
