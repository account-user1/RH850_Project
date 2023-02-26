/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TunSelnMngt.c
 *     SW-C Type:  TunSelnMngt
 *  Generated at:  Fri May  6 13:19:08 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <TunSelnMngt>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name:   TunSelnMngt.c
* Module Description: Implementation of Tuning Selection Management FDD ES400A
* Project           : CBD 
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       cz7lt6 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 10/08/15  1        KJS        Initial Version                                                                 EA4#1840
* 03/31/16  2        KJS        Updated to version 1 of ES400A                                                  EA4#5092
* 05/06/16  3        NS         Removed exclusive area portion of IdxChngMngt per anomaly EA4#5522              EA4#5687
* 08/29/16  4        KJS        Updated source for anomaly EA4#6672 correction. Multiple changes, refer to 
*                               changes in the anomaly for details.                                             EA4#7236
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
  AdrMpgReqTyp1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  CalCopySts1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  GetSegMod1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

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

 *********************************************************************************************************************/

#include "Rte_TunSelnMngt.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 #include "TunSelnMngt_Cfg_private.h"
  
/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.1]: Cast of a register address to an integer type is required for writing a register address to a register. */
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.5]: Cast of variable pointers to pointers of other types is allowed for the purpose of efficient memory copying in calibration tuning set operations. */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
 
/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

static FUNC(void, TunSelnMngt_CODE) SwtCalIdx( void );

static FUNC(boolean, TunSelnMngt_CODE) IdxChgMngt( uint8 SeldIdx_Cnt_T_u08, uint8 GendCalTblSize_Cnt_T_u08,
                                                   P2CONST(TunSelnIdxTblRec1, AUTOMATIC, AUTOMATIC) GendCalTbl_T_rec );

static FUNC(void, TunSelnMngt_CODE) MemCopy32Bit( P2VAR(void, AUTOMATIC, AUTOMATIC) Dest_Uls_T_ptr,
                                                  P2CONST(void, AUTOMATIC, AUTOMATIC) Src_Uls_T_ptr,
                                                  uint16 Len_Cnt_T_u16);

static FUNC(void, TunSelnMngt_CODE) MemCopy8Bit( P2VAR( void, AUTOMATIC, AUTOMATIC ) Dest_Uls_T_ptr,
                                                 P2CONST( void, AUTOMATIC, AUTOMATIC ) Src_Uls_T_ptr,
                                                 uint16 Len_Cnt_T_u16 );

static FUNC(uint8, TunSElnMngt_CODE) SegModAdrInfo( uint8 Seg_Arg, GetSegModSegInfo1 SegInfo_Arg,
                                                    P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Resp_Arg,
                                                    P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) RespLen_Arg);

static FUNC(uint8, TunSElnMngt_CODE) SegModStdInfo( uint8 Seg_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Resp_Arg,
                                                    P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) RespLen_Arg);

static FUNC(uint8, TunSElnMngt_CODE) SegModAdrMpg( uint8 Seg_Arg, GetSegModMpgIdx1 MpgIdxInfo_Arg, uint8 MpgIdx_Arg,
                                                   P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Resp_Arg,
                                                   P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) RespLen_Arg);

/*********************************************** Function Definitions ************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Enumeration Types:
 * ==================
 * AdrMpgReqTyp1: Enumeration of integer in interval [0...255] with enumerators
 *   ADRMPGREQTYP_READ (0U)
 *   ADRMPGREQTYP_WR (1U)
 * CalCopySts1: Enumeration of integer in interval [0...255] with enumerators
 *   CALCOPYSTS_NOTRDY (0U)
 *   CALCOPYSTS_COPYPNDING (1U)
 *   CALCOPYSTS_COPYCMPL (2U)
 *   CALCOPYSTS_PROCERR (3U)
 * GetSegMod1: Enumeration of integer in interval [0...255] with enumerators
 *   GETSEGMOD_ADRINFO (0U)
 *   GETSEGMOD_STDINFO (1U)
 *   GETSEGMOD_ADRMPG (2U)
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
 * Record Types:
 * =============
 * OnlineCalStsRec1: Record with elements
 *   Seg of type Ary1D_OnlineCalSegInfoRec1_TunSelnMngt1
 *   CopySts of type CalCopySts1
 *   ActvGroup of type uint8
 *   ActvInin of type uint8
 *   ActvRt of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_PrevActvIninIdx(void)
 *   uint8 *Rte_Pim_PrevActvRtIdx(void)
 *   uint8 *Rte_Pim_PrevRamPageAcs(void)
 *   uint8 *Rte_Pim_RamTblSwt(void)
 *   OnlineCalStsRec1 *Rte_Pim_OnlineCalSts(void)
 *
 *********************************************************************************************************************/


#define TunSelnMngt_START_SEC_CODE
#include "TunSelnMngt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CopyCalPageReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CopyCalPageReq>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_TunSelnMngtIntDataProtnExclsvArea(void)
 *   void Rte_Exit_TunSelnMngtIntDataProtnExclsvArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CopyCalPageReq_Oper(uint8 Seg_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CopyCalPageReq_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, TunSelnMngt_CODE) CopyCalPageReq_Oper(uint8 Seg_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CopyCalPageReq_Oper (returns application error)
 *********************************************************************************************************************/
    /* REQ: ES400A #49 I */ /* REQ: ES400A #85 I */
    VAR(Std_ReturnType, AUTOMATIC) Rtn_Cnt_T_u08 = E_OK;
    
    if(XCPIF_MAXCALSEG_CNT_U08 > Seg_Arg )
    {
        /* Update status */
        Rte_Enter_TunSelnMngtIntDataProtnExclsvArea();
        (*Rte_Pim_OnlineCalSts()).ActvGroup = Seg_Arg;
        (*Rte_Pim_OnlineCalSts()).ActvInin = *Rte_Pim_PrevActvIninIdx();
        (*Rte_Pim_OnlineCalSts()).ActvRt = *Rte_Pim_PrevActvRtIdx();
        (*Rte_Pim_OnlineCalSts()).CopySts = CALCOPYSTS_COPYPNDING;
        Rte_Exit_TunSelnMngtIntDataProtnExclsvArea();
    }
    else
    {
        /* Requested segment out of range */
        Rtn_Cnt_T_u08 = E_NOT_OK;
    }

    return Rtn_Cnt_T_u08;
    /* ENDREQ: ES400A #49 I */ /* ENDREQ: ES400A #85 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetCalPageReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetCalPageReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, uint8 *Page_Arg, uint8 *Rtn_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, TunSelnMngt_CODE) GetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Page_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Rtn_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetCalPageReq_Oper
 *********************************************************************************************************************/
    /* REQ: ES400A #49 I */ /* REQ: ES400A #80 I */
    VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
    VAR(boolean, AUTOMATIC) CalPageFound_Cnt_T_logl;
    
    if ( (Mod_Arg & (uint8)XCPIF_ONLINECALXCPANDECUACS_CNT_U08) != 0U)
    {
        if( XCPIF_MAXCALSEG_CNT_U08 > Seg_Arg )
        {
            Idx_Cnt_T_u08 = 0U;
            CalPageFound_Cnt_T_logl = FALSE;
            do
            {
                /* Search each page within the segment to find the access mode requested. */
                if( (Mod_Arg & (*Rte_Pim_OnlineCalSts()).Seg[Seg_Arg].Page[Idx_Cnt_T_u08].PageAcs) > 0U)
                {
                    *Page_Arg = Idx_Cnt_T_u08;
                    *Rtn_Arg = (uint8)XCPIF_XCPCMDOK_CNT_U08;
                    CalPageFound_Cnt_T_logl = TRUE;
                }
                else
                {
                    /* Mode was not found on any page */
                    *Rtn_Arg = (uint8)XCPIF_CRCPAGEMODNOTVLD_CNT_U08;
                }
                
                Idx_Cnt_T_u08++;
            } while ((Idx_Cnt_T_u08 < XCPIF_MAXCALPAGE_CNT_U08) && (CalPageFound_Cnt_T_logl == FALSE));
            
        }
        else
        {
            /* Segment was invalid */
            *Rtn_Arg = (uint8)XCPIF_SEGNOTVLD_CNT_U08;
        }
    }
    else
    {
        /* Mode not valid */
        *Rtn_Arg = (uint8)XCPIF_CRCPAGEMODNOTVLD_CNT_U08;
    }
    
    return;
    /* ENDREQ: ES400A #49 I */ /* ENDREQ: ES400A #80 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSegInfoReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSegInfoReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetSegInfoReq_Oper(GetSegMod1 Mod_Arg, uint8 Seg_Arg, uint8 SegInfo_Arg, uint8 MpgIdx_Arg, uint8 *Resp_Arg, uint8 *RespLen_Arg, uint8 *Rtn_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, TunSelnMngt_CODE) GetSegInfoReq_Oper(GetSegMod1 Mod_Arg, uint8 Seg_Arg, uint8 SegInfo_Arg, uint8 MpgIdx_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Resp_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) RespLen_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Rtn_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetSegInfoReq_Oper
 *********************************************************************************************************************/
    /* REQ: ES400A #49 I */ /* REQ: ES400A #84 I */
    if( XCPIF_MAXCALSEG_CNT_U08 > Seg_Arg )
    {
        switch(Mod_Arg)
        {
            case GETSEGMOD_ADRINFO:
                *Rtn_Arg = SegModAdrInfo(Seg_Arg, (GetSegModSegInfo1)SegInfo_Arg, Resp_Arg, RespLen_Arg);
            break;
            case GETSEGMOD_STDINFO:
                *Rtn_Arg = SegModStdInfo(Seg_Arg, Resp_Arg, RespLen_Arg);
            break;
            case GETSEGMOD_ADRMPG:
                /* In this mode, the SegInfo_Arg takes on a different definition from the other modes. Hence it is cast
                 * as the data type the address mapping function is expecting. */
                *Rtn_Arg = SegModAdrMpg(Seg_Arg, (GetSegModMpgIdx1)SegInfo_Arg, MpgIdx_Arg, Resp_Arg, RespLen_Arg);
            break;
            default:
                *Rtn_Arg = (uint8)XCPIF_OUTOFRNG_CNT_U08;
            break;
        }
    }
    else
    {
        /* Do nothing, return error */
        *Rtn_Arg = (uint8)XCPIF_SEGNOTVLD_CNT_U08;
    }

    return;
    /* ENDREQ: ES400A #49 I */ /* ENDREQ: ES400A #84 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: OnlineTunRamAdrMpg_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <OnlineTunRamAdrMpg>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType OnlineTunRamAdrMpg_Oper(uint32 ReqAdr_Arg, uint32 *CorrdAdr_Arg, AdrMpgReqTyp1 ReqTyp_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_OnlineTunRamAdrMpg_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, TunSelnMngt_CODE) OnlineTunRamAdrMpg_Oper(uint32 ReqAdr_Arg, P2VAR(uint32, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) CorrdAdr_Arg, AdrMpgReqTyp1 ReqTyp_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: OnlineTunRamAdrMpg_Oper (returns application error)
 *********************************************************************************************************************/
    /* REQ: ES400A #49 I */ /* REQ: ES400A #82 I */
    VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
    VAR(Std_ReturnType, AUTOMATIC) Rtn_Cnt_T_u08 = E_NOT_OK;
    VAR(boolean, AUTOMATIC) CalIdxSeld_Cnt_T_logl = FALSE;
    VAR(uint32, AUTOMATIC) AdrOffs_Cnt_T_u32;

    /* Set the Corrected address to 0 to indicate failure */
    *CorrdAdr_Arg = 0U;
    Idx_Cnt_T_u08 = 0U;

    if( ReqAdr_Arg <= XCPIF_MAXFLSADR_CNT_U32 )
    {
        if( ((*Rte_Pim_OnlineCalSts()).Seg[(*Rte_Pim_OnlineCalSts()).ActvGroup].Page[XCPIF_RAMPAGE_CNT_U08].PageAcs & XCPIF_ONLINECALXCPACS_CNT_U08) != 0U )
        {
            do
            {
                /* Check if the requested address is within range of one of the calibration component's flash address range. If within a range, and that
                 * calibration component is loaded in RAM, translate the address to the RAM location and allow the write to be completed, otherwise ignore request
                 * and the function will return a negative response */
                if( (ReqAdr_Arg >= ( (uint32)(RteParameterRefTab[ONLINECALCFGTBL_REC[Idx_Cnt_T_u08].TblIdx_u16]) )) &&
                    (ReqAdr_Arg <= ( (uint32)(RteParameterRefTab[ONLINECALCFGTBL_REC[Idx_Cnt_T_u08].TblIdx_u16]) + ((uint32)(ONLINECALCFGTBL_REC[Idx_Cnt_T_u08].StructSize_u16) - 1U) ) ) &&
                    (ONLINECALCFGTBL_REC[Idx_Cnt_T_u08].GroupIdx_u08 == (*Rte_Pim_OnlineCalSts()).ActvGroup) )
                {
                    CalIdxSeld_Cnt_T_logl = TRUE;
                    AdrOffs_Cnt_T_u32 = ReqAdr_Arg - (uint32)(RteParameterRefTab[ONLINECALCFGTBL_REC[Idx_Cnt_T_u08].TblIdx_u16]);
                    *CorrdAdr_Arg = (uint32)ONLINECALCFGTBL_REC[Idx_Cnt_T_u08].RamStructPtr_u08 + AdrOffs_Cnt_T_u32;
                    Rtn_Cnt_T_u08 = E_OK;
                }
                else
                {
                    Idx_Cnt_T_u08++;
                }
            } while( (Idx_Cnt_T_u08 < MAXONLINECALCFGCNT_CNT_U08) && (CalIdxSeld_Cnt_T_logl == FALSE) );
            
            if ( (CalIdxSeld_Cnt_T_logl == FALSE) && (ReqTyp_Arg == ADRMPGREQTYP_READ) )
            {
                /* Read of flash value outside of online calibration ranges, no adjustment required */
                *CorrdAdr_Arg = ReqAdr_Arg;
                Rtn_Cnt_T_u08 = E_OK;
            }
            else
            {
                /* Do nothing */
            }
        }
        else
        {
            if( ReqTyp_Arg == ADRMPGREQTYP_READ)
            {
                /* No adjustment needed for reading flash addresses */
                *CorrdAdr_Arg = ReqAdr_Arg;
                Rtn_Cnt_T_u08 = E_OK;
            }
            else
            {
                /* Flash writes not allowed in flash. Do nothing, Rtn is already set to E_NOT_OK */
            }
        }
    }
    else
    {
        if( ReqTyp_Arg == ADRMPGREQTYP_WR )
        {
            if ( (TunSelnMngt_ChkXcpWrAcs(ReqAdr_Arg) == TRUE) )
            {
                /* No need to adjust the RAM address, just return it back with an OK response */
                *CorrdAdr_Arg = ReqAdr_Arg;
                Rtn_Cnt_T_u08 = E_OK;
            }
            else
            {
                /* Do nothing, Rtn is already set to E_NOT_OK */
            }
        }
        else
        {
            /* Read access always allowed */
            *CorrdAdr_Arg = ReqAdr_Arg;
            Rtn_Cnt_T_u08 = E_OK;
        }
    }

    return Rtn_Cnt_T_u08;
    /* ENDREQ: ES400A #49 I */ /* ENDREQ: ES400A #82 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetCalPageReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetCalPageReq>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_TunSelnMngtIntDataProtnExclsvArea(void)
 *   void Rte_Exit_TunSelnMngtIntDataProtnExclsvArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, uint8 Page_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, TunSelnMngt_CODE) SetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, uint8 Page_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetCalPageReq_Oper
 *********************************************************************************************************************/
    /* REQ: ES400A #49 I */ /* REQ: ES400A #86 I */
    VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
    
    /* Function is called from an XCP service outside of the application that this function resides in. Since return
       values cannot currently be provided to the caller, the assumption is that the service will call this function
       and verify the results by checking with the GetCalpage request */
    if ( ( (Mod_Arg & (uint8)XCPIF_ONLINECALXCPANDECUACS_CNT_U08) != 0U) &&
         ( XCPIF_MAXCALSEG_CNT_U08 > Seg_Arg ) && 
         ( XCPIF_MAXCALPAGE_CNT_U08 > Page_Arg ) &&
         ( (*Rte_Pim_OnlineCalSts()).ActvGroup == Seg_Arg ) )
    {
        Rte_Enter_TunSelnMngtIntDataProtnExclsvArea();
        for(Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < XCPIF_MAXCALPAGE_CNT_U08; Idx_Cnt_T_u08++)
        {
            if( Page_Arg == Idx_Cnt_T_u08 )
            {
                (*Rte_Pim_OnlineCalSts()).Seg[Seg_Arg].Page[Idx_Cnt_T_u08].PageAcs |= Mod_Arg;
            }
            else
            {
                /* Remove access from other pages */
                (*Rte_Pim_OnlineCalSts()).Seg[Seg_Arg].Page[Idx_Cnt_T_u08].PageAcs &= ((uint8)(~Mod_Arg) & (uint8)XCPIF_ONLINECALXCPANDECUACS_CNT_U08);
            }
        }
        Rte_Exit_TunSelnMngtIntDataProtnExclsvArea();
    }

    return;
    /* ENDREQ: ES400A #49 I */ /* ENDREQ: ES400A #86 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TunSelnMngtInit1
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
 *   Std_ReturnType Rte_Read_DesIninIdx_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DesRtIdx_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ActvIninIdx_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ActvRtIdx_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_Calc32BitCrc_u32_Oper(uint32 *DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, uint32 *CalcCrcRes_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Calc32BitCrc_u32_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, TunSelnMngt_CODE) TunSelnMngtInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TunSelnMngtInit1
 *********************************************************************************************************************/
    VAR(uint8, AUTOMATIC) DesIninIdx_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) DesRtIdx_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) SegIdx_Cnt_T_u08;
    VAR(boolean, AUTOMATIC) IninIdxFound_Cnt_T_logl = FALSE;
    VAR(boolean, AUTOMATIC) RtIdxFound_Cnt_T_logl = FALSE;

    /* Read in the desired initialization and run-time indexes */
    (void)Rte_Read_DesIninIdx_Val(&DesIninIdx_Cnt_T_u08);
    (void)Rte_Read_DesRtIdx_Val(&DesRtIdx_Cnt_T_u08);

    /* Set PIMs to default values */
    *Rte_Pim_RamTblSwt() = 0U;
    *Rte_Pim_PrevActvIninIdx() = 0U;
    *Rte_Pim_PrevActvRtIdx() = 0U;
    
    /* Set Online calibration status to default values */
    (*Rte_Pim_OnlineCalSts()).CopySts = CALCOPYSTS_NOTRDY;
    (*Rte_Pim_OnlineCalSts()).ActvGroup = 0U;
    (*Rte_Pim_OnlineCalSts()).ActvRt = 0U;
    (*Rte_Pim_OnlineCalSts()).ActvInin = 0U;
    for( SegIdx_Cnt_T_u08 = 0U; SegIdx_Cnt_T_u08 < XCPIF_MAXCALSEG_CNT_U08; SegIdx_Cnt_T_u08++)
    {
        (*Rte_Pim_OnlineCalSts()).Seg[SegIdx_Cnt_T_u08].Page[XCPIF_FLSPAGE_CNT_U08].PageAcs = XCPIF_ONLINECALXCPANDECUACS_CNT_U08;
        (*Rte_Pim_OnlineCalSts()).Seg[SegIdx_Cnt_T_u08].Page[XCPIF_RAMPAGE_CNT_U08].PageAcs = XCPIF_ONLINECALNOACS_CNT_U08;
    }

    /* REQ: ES400A #50 I */
    /* Load RTE generated table into the RAM table */
    MemCopy32Bit(&MngtRamTbl_C[0].PrmRefTblPtr, RteParameterRefTab, PRMPTRTBLSIZEINWORD_CNT_U16);
    MemCopy32Bit(&MngtRamTbl_C[1].PrmRefTblPtr, RteParameterRefTab, PRMPTRTBLSIZEINWORD_CNT_U16);
    /* ENDREQ: ES400A #50 I */

    /* REQ: ES400A #51 I */
    /* Calculate the CRC over the flash table, and store in both RAM locations. This will be validated 
     * on the first run of the periodic. */
    (void)Rte_Call_Calc32BitCrc_u32_Oper( (uint32 *)&(RteParameterRefTab[0]), PRMPTRTBLSIZEINWORD_CNT_U16, 
                                          0U, TRUE, &(MngtRamTbl_C[0].PrmTblCrc_u32) );
    MngtRamTbl_C[1].PrmTblCrc_u32 = MngtRamTbl_C[0].PrmTblCrc_u32;
    /* ENDREQ: ES400A #51 I */
    
    /* REQ: ES400A #18 I */ /* REQ: ES400A #38 I */ /* REQ: ES400A #41 I */ /* REQ: ES400A #44 I */
    /* Update initialization index if it is not the same as the default (0) */
    if(DesIninIdx_Cnt_T_u08 != *Rte_Pim_PrevActvIninIdx())
    {
        IninIdxFound_Cnt_T_logl = IdxChgMngt( DesIninIdx_Cnt_T_u08, MAXINITIDXCNT_CNT_U08,
                                              ININCALCFGTBL_REC);
                                              
        /* Update previous values and output ports */
        if(TRUE == IninIdxFound_Cnt_T_logl)
        {
            /* Fault passed */
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1F6, 0x00U, NTCSTS_PASSD, 0U);
            *Rte_Pim_PrevActvIninIdx() = DesIninIdx_Cnt_T_u08;
            (void)Rte_Write_ActvIninIdx_Val(DesIninIdx_Cnt_T_u08);
        }
        else
        {
            /* Fault failed, do not update ports or PIMs */
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1F6, 0x01U, NTCSTS_FAILD, 0U);
        }
    }
    else
    {
        /* Index is the default state, set the active index and pass the NTC */
        (void)Rte_Write_ActvIninIdx_Val(DesIninIdx_Cnt_T_u08);
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1F6, 0x00U, NTCSTS_PASSD, 0U);
    }
    /* ENDREQ: ES400A #38 I */ /* ENDREQ: ES400A #41 I */ /* ENDREQ: ES400A #44 I */

    /* REQ: ES400A #58 I */ /* REQ: ES400A #61 I */ /* REQ: ES400A #64 I */
    /* Update run-time index if it is not the same as the default (0) */
    if(DesRtIdx_Cnt_T_u08 != *Rte_Pim_PrevActvRtIdx())
    {
        RtIdxFound_Cnt_T_logl = IdxChgMngt( DesRtIdx_Cnt_T_u08, MAXRTIDXCNT_CNT_U08,
                                            RTCALCFGTBL_REC);
                                            
        if(TRUE == RtIdxFound_Cnt_T_logl)
        {
            /* Fault passed */
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1F7, 0x00U, NTCSTS_PASSD, 0U);
            *Rte_Pim_PrevActvRtIdx() = DesRtIdx_Cnt_T_u08;
            (void)Rte_Write_ActvRtIdx_Val(DesRtIdx_Cnt_T_u08);
        }
        else
        {
            /* Fault failed, do not update ports or PIMs */
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1F7, 0x01U, NTCSTS_FAILD, 0U);
        }
    }
    else
    {
        /* Index is the default state, set the active index and pass the NTC */
        (void)Rte_Write_ActvIninIdx_Val(DesRtIdx_Cnt_T_u08);
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1F7, 0x00U, NTCSTS_PASSD, 0U);
    }
     /* ENDREQ: ES400A #58 I */ /* ENDREQ: ES400A #61 I */ /* ENDREQ: ES400A #64 I */

    /* If the initialization or run-time indexes changed, update the table and switch the pointer */
    if( (TRUE == IninIdxFound_Cnt_T_logl) || (TRUE == RtIdxFound_Cnt_T_logl) )
    {
        /* Switch pointer to new table */
        SwtCalIdx();
    }
    /* ENDREQ: ES400A #18 I */
    
    return;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TunSelnMngtPer1
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
 *   Std_ReturnType Rte_Read_DesRtIdx_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ActvGroup_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ActvRtIdx_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CalCopySts_Val(CalCopySts1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_Calc32BitCrc_u32_Oper(uint32 *DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, uint32 *CalcCrcRes_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Calc32BitCrc_u32_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_RtCalChgReq_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_RtCalChgReq_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, TunSelnMngt_CODE) TunSelnMngtPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TunSelnMngtPer1
 *********************************************************************************************************************/

    VAR(boolean, AUTOMATIC) RtIdxFound_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) CrcFltActv_Cnt_T_logl;
    VAR(uint8, AUTOMATIC) DesRtIdx_Cnt_T_u08;
    VAR(uint32, AUTOMATIC) CrcVal_Cnt_T_u32;
    VAR(Std_ReturnType, AUTOMATIC) RtCalChgReq_Cnt_T_enum = E_NOT_OK;
    VAR(uint8, AUTOMATIC) OnlineCalTblIdx_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) Swt_Cnt_T_u08;
    
    (void)Rte_Read_DesRtIdx_Val(&DesRtIdx_Cnt_T_u08);
    
    /* REQ: ES400A #51 I */
    /* Check CRC calibration table */
    (void)Rte_Call_Calc32BitCrc_u32_Oper( (uint32 *)(MngtRamTbl_C[*Rte_Pim_RamTblSwt()].PrmRefTblPtr),
                                          PRMPTRTBLSIZEINWORD_CNT_U16, 0U, TRUE, &CrcVal_Cnt_T_u32 );
    /* ENDREQ: ES400A #51 I */

    /* REQ: ES400A #69 I */ /* REQ: ES400A #71 I */ /* REQ: ES400A #77 I */
    if( CrcVal_Cnt_T_u32 != MngtRamTbl_C[*Rte_Pim_RamTblSwt()].PrmTblCrc_u32 )
    {
        /* Set fault 0x1F8 - Used Table */
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1F8, 0x01U, NTCSTS_FAILD, 0U);
        CrcFltActv_Cnt_T_logl = TRUE;
    }
    else
    {
        /* Pass Fault 0x1F8 */
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1F8, 0x00U, NTCSTS_PASSD, 0U);
        CrcFltActv_Cnt_T_logl = FALSE;
        RtCalChgReq_Cnt_T_enum = Rte_Call_RtCalChgReq_Oper();
    }
    /* ENDREQ: ES400A #69 I */ /* ENDREQ: ES400A #71 I */ /* ENDREQ: ES400A #77 I */

    /* Copy Cals in CALCOPYSTS_COPYPNDING State */
    if ((*Rte_Pim_OnlineCalSts()).CopySts == CALCOPYSTS_COPYPNDING)
    {
        for( OnlineCalTblIdx_Cnt_T_u08 = 0U; OnlineCalTblIdx_Cnt_T_u08 < MAXONLINECALCFGCNT_CNT_U08; OnlineCalTblIdx_Cnt_T_u08++ )
        {
            /* Only copy indexes are are part of the active online tuning group */
            if((*Rte_Pim_OnlineCalSts()).ActvGroup == ONLINECALCFGTBL_REC[OnlineCalTblIdx_Cnt_T_u08].GroupIdx_u08)
            {
                /* Move values into RAM */
                Swt_Cnt_T_u08 = (*Rte_Pim_RamTblSwt() ^ 1U);
                MemCopy8Bit( (uint8 *)(ONLINECALCFGTBL_REC[OnlineCalTblIdx_Cnt_T_u08].RamStructPtr_u08),
                                         (const uint8 *)(MngtRamTbl_C[Swt_Cnt_T_u08].PrmRefTblPtr[ONLINECALCFGTBL_REC[OnlineCalTblIdx_Cnt_T_u08].TblIdx_u16]),
                                         ONLINECALCFGTBL_REC[OnlineCalTblIdx_Cnt_T_u08].StructSize_u16 );
            }
        }
        
        (*Rte_Pim_OnlineCalSts()).CopySts = CALCOPYSTS_COPYCMPL;
    }

    /* Change the indexes under the following conditions 
     * 1) CRC fault is not active
     * 2) SF-23 gives permission 
     * 3) The desired run time index has changed
     * 4) The online calibration mode has changed AND the calibrations have been written to RAM (COPYCMPL) */
    /* REQ: ES400A #18 I */
    if ( CrcFltActv_Cnt_T_logl == FALSE )
    {
        if ( (E_OK == RtCalChgReq_Cnt_T_enum) && 
             ( (*Rte_Pim_PrevActvRtIdx() != DesRtIdx_Cnt_T_u08) || 
               (((*Rte_Pim_OnlineCalSts()).Seg[(*Rte_Pim_OnlineCalSts()).ActvGroup].Page[XCPIF_RAMPAGE_CNT_U08].PageAcs != *Rte_Pim_PrevRamPageAcs() ) && 
               ((*Rte_Pim_OnlineCalSts()).CopySts == CALCOPYSTS_COPYCMPL)) ) )
        {
            /* Update RAM table with new indexes */
            RtIdxFound_Cnt_T_logl = IdxChgMngt(DesRtIdx_Cnt_T_u08, MAXRTIDXCNT_CNT_U08, RTCALCFGTBL_REC);
        
            /* Verify an index was found */
            if( FALSE == RtIdxFound_Cnt_T_logl )
            {
                /* Set Fault */
                (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1F7, 0x01U, NTCSTS_FAILD, 0U);
            }
            else
            {
                /* Calculate CRC and switch index */
                SwtCalIdx();

                (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1F7, 0x00U, NTCSTS_PASSD, 0U);
                *Rte_Pim_PrevActvRtIdx() = DesRtIdx_Cnt_T_u08;
                (void)Rte_Write_ActvRtIdx_Val(DesRtIdx_Cnt_T_u08);
            }
        }
        else
        {
            /* Do nothing */
        }
    }
    else
    {
        /* REQ: ES400A #52 I */
        /* CRC fault occurred, default back to flash table */
        RteParameterBase = &RteParameterRefTab[0];
        /* ENDREQ: ES400A #52 I */
    }
    /* ENDREQ: ES400A #18 I */
    
    /* Update other outputs */
    (void)Rte_Write_ActvGroup_Val((*Rte_Pim_OnlineCalSts()).ActvGroup);
    (void)Rte_Write_CalCopySts_Val((*Rte_Pim_OnlineCalSts()).CopySts);

    return;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define TunSelnMngt_STOP_SEC_CODE
#include "TunSelnMngt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
* Name:         SwtCalIdx
*
* Description:  Function is used to move switch the RAM buffer index being used by the application.
*
* Inputs:       N/A
*
* Outputs:      N/A
*
* Usage Notes:  Function shall only be called by TunSelnMngt functions.
**********************************************************************************************************************/
static FUNC(void, TunSelnMngt_CODE) SwtCalIdx( void )
{
    VAR(uint8, AUTOMATIC) Swt_Cnt_T_u08;

    Swt_Cnt_T_u08 = (*Rte_Pim_RamTblSwt() ^ 1U);
    
    /* Update RTE pointer to new RAM index */
    RteParameterBase = &(MngtRamTbl_C[Swt_Cnt_T_u08].PrmRefTblPtr[0]);

    /* Copy new table to replace older one, note the switch has not been assigned to the PIM yet. */
    MemCopy32Bit( &MngtRamTbl_C[*Rte_Pim_RamTblSwt()].PrmRefTblPtr, 
                  &MngtRamTbl_C[Swt_Cnt_T_u08].PrmRefTblPtr, PRMPTRTBLSIZEINWORD_CNT_U16 );
    
    /* Assign the newly calculated CRC in the unused table to the current table. */
    MngtRamTbl_C[*Rte_Pim_RamTblSwt()].PrmTblCrc_u32 = MngtRamTbl_C[Swt_Cnt_T_u08].PrmTblCrc_u32;
    
    /* Write the previous page access for the active segment */
    *Rte_Pim_PrevRamPageAcs() = (*Rte_Pim_OnlineCalSts()).Seg[(*Rte_Pim_OnlineCalSts()).ActvGroup].Page[XCPIF_RAMPAGE_CNT_U08].PageAcs;
    
    /* Update PIM with new index */
    *Rte_Pim_RamTblSwt() = Swt_Cnt_T_u08;

    return;
}

/**********************************************************************************************************************
* Name:         IdxChgMngt
*
* Description:  This function moves the indexes between the selected init or runtime selectable calibration sets. This 
*               function also will reference the RTE generated flash table for restoring indexes back to index 0 or 
*               default. 
*
* Inputs:       SeldIdx_Cnt_T_u08 - Index that is selected by the application.
*               GendCalTblSize_Cnt_T_u08 - Size of the generated calibration table. 
*               GendCalTbl_T_rec - Pointer to the calibration structure being read from and written to.
*
* Outputs:      N/A
*
* Usage Notes:  Function shall only be called by TunSelnMngt functions.
**********************************************************************************************************************/
static FUNC(boolean, TunSelnMngt_CODE) IdxChgMngt ( uint8 SeldIdx_Cnt_T_u08, uint8 GendCalTblSize_Cnt_T_u08,
                                                    P2CONST(TunSelnIdxTblRec1, AUTOMATIC, AUTOMATIC) GendCalTbl_T_rec )
{
    VAR(boolean, AUTOMATIC) IdxFound_Cnt_T_logl = FALSE;
    VAR(uint8, AUTOMATIC) GendTblIdx_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) OnlineCalTblIdx_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) Swt_Cnt_T_u08;
    VAR(uint32, AUTOMATIC) CalcCrcVal_Cnt_T_u32;
    VAR(uint8, AUTOMATIC) IninCalTblIdx_Cnt_T_u08;
    VAR(boolean, AUTOMATIC) CalCopySts_Cnt_logl = FALSE; 
    VAR(boolean, AUTOMATIC) CalCopyStsAndEcuAcs_Cnt_T_logl = FALSE;

    Swt_Cnt_T_u08 = (*Rte_Pim_RamTblSwt() ^ 1U);


    /* REQ: ES400A #51 I */
    /* Calculate the CRC to validate the RAM value hasn't been modified */
    (void)Rte_Call_Calc32BitCrc_u32_Oper( (uint32 *)(MngtRamTbl_C[Swt_Cnt_T_u08].PrmRefTblPtr),
                                          PRMPTRTBLSIZEINWORD_CNT_U16, 0U, TRUE, &CalcCrcVal_Cnt_T_u32 );
    /* ENDREQ: ES400A #51 I */
    
    /* REQ: ES400A #69 I */ /* REQ: ES400A #71 I */ /* REQ: ES400A #77 I */
    if ( CalcCrcVal_Cnt_T_u32 != MngtRamTbl_C[Swt_Cnt_T_u08].PrmTblCrc_u32 )
    {
        /* Set fault 0x1F8 - Not Used Table */
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X1F8, 0x02U, NTCSTS_FAILD, 0U);
    }
    /* ENDREQ: ES400A #69 I */ /* ENDREQ: ES400A #71 I */ /* ENDREQ: ES400A #77 I */
    else
    {
        if( ((*Rte_Pim_OnlineCalSts()).Seg[(*Rte_Pim_OnlineCalSts()).ActvGroup].Page[XCPIF_RAMPAGE_CNT_U08].PageAcs & XCPIF_ONLINECALECUACS_CNT_U08) != 0U )
        {
            CalCopySts_Cnt_logl = TRUE;
        }
        
        /* Check ECU access for online calibration */
        if ( (CALCOPYSTS_COPYCMPL == (*Rte_Pim_OnlineCalSts()).CopySts) && 
             ((*Rte_Pim_OnlineCalSts()).Seg[(*Rte_Pim_OnlineCalSts()).ActvGroup].Page[XCPIF_RAMPAGE_CNT_U08].PageAcs != *Rte_Pim_PrevRamPageAcs() ) )
        {
            /* Check to see if the ECU Page is set to RAM, if so, move the pointer to RAM */
            if ( CalCopySts_Cnt_logl == TRUE )
            {
                /* Search online calibration table for entries that need to be moved into RAM */
                for (OnlineCalTblIdx_Cnt_T_u08 = 0U; OnlineCalTblIdx_Cnt_T_u08 < MAXONLINECALCFGCNT_CNT_U08; OnlineCalTblIdx_Cnt_T_u08++)
                {
                    /* Check to make sure entry is part of the active tuning group */
                    if((*Rte_Pim_OnlineCalSts()).ActvGroup == ONLINECALCFGTBL_REC[OnlineCalTblIdx_Cnt_T_u08].GroupIdx_u08)
                    {
                        /* Move RAM pointer into the main table */
                        MemCopy32Bit( &MngtRamTbl_C[Swt_Cnt_T_u08].PrmRefTblPtr[ONLINECALCFGTBL_REC[OnlineCalTblIdx_Cnt_T_u08].TblIdx_u16],
                                                  (const uint32 *)&(ONLINECALCFGTBL_REC[OnlineCalTblIdx_Cnt_T_u08].RamStructPtr_u08), 1U);
                    }
                }
            }
            else
            {
                /* Restore the entire flash table into the RAM table. This will restore all common, init, and runtime cals back to RTE defaults. */
                MemCopy32Bit(&MngtRamTbl_C[Swt_Cnt_T_u08].PrmRefTblPtr, RteParameterRefTab, PRMPTRTBLSIZEINWORD_CNT_U16);

                /* Place the init cal pointers back to what was initialized at start up */
                for( IninCalTblIdx_Cnt_T_u08 = 0U; IninCalTblIdx_Cnt_T_u08 < MAXINITIDXCNT_CNT_U08; IninCalTblIdx_Cnt_T_u08++)
                {
                    if( (*Rte_Pim_OnlineCalSts()).ActvInin == ININCALCFGTBL_REC[IninCalTblIdx_Cnt_T_u08].SigIdx_u08 )
                    {
                        MemCopy32Bit( &MngtRamTbl_C[Swt_Cnt_T_u08].PrmRefTblPtr[ININCALCFGTBL_REC[IninCalTblIdx_Cnt_T_u08].DestIdx_u16],
                                      &RteParameterRefTab[ININCALCFGTBL_REC[IninCalTblIdx_Cnt_T_u08].SrcIdx_u16], 1U);
                    }
                }
            }
        }

        /* Change tuning */
        if( (CALCOPYSTS_COPYCMPL == (*Rte_Pim_OnlineCalSts()).CopySts) && (CalCopySts_Cnt_logl == TRUE) )
        {
            CalCopyStsAndEcuAcs_Cnt_T_logl = TRUE;
        }

        for (GendTblIdx_Cnt_T_u08 = 0U; GendTblIdx_Cnt_T_u08 < GendCalTblSize_Cnt_T_u08; GendTblIdx_Cnt_T_u08++)
        {
            if(GendCalTbl_T_rec[GendTblIdx_Cnt_T_u08].SigIdx_u08 == SeldIdx_Cnt_T_u08)
            {
                /* If online calibration is active, this path will adjust the pointer from flash to RAM */
                if( (CalCopyStsAndEcuAcs_Cnt_T_logl == TRUE) && ((*Rte_Pim_OnlineCalSts()).ActvRt == GendCalTbl_T_rec[GendTblIdx_Cnt_T_u08].SigIdx_u08) )
                {
                    for (OnlineCalTblIdx_Cnt_T_u08 = 0U; OnlineCalTblIdx_Cnt_T_u08 < MAXONLINECALCFGCNT_CNT_U08; OnlineCalTblIdx_Cnt_T_u08++)
                    {
                        if( ((*Rte_Pim_OnlineCalSts()).ActvGroup == ONLINECALCFGTBL_REC[OnlineCalTblIdx_Cnt_T_u08].GroupIdx_u08) &&
                            (GendCalTbl_T_rec[GendTblIdx_Cnt_T_u08].DestIdx_u16 == ONLINECALCFGTBL_REC[OnlineCalTblIdx_Cnt_T_u08].TblIdx_u16) )
                        {
                            MemCopy32Bit( &MngtRamTbl_C[Swt_Cnt_T_u08].PrmRefTblPtr[ONLINECALCFGTBL_REC[OnlineCalTblIdx_Cnt_T_u08].TblIdx_u16],
                                          (const uint32 *)&(ONLINECALCFGTBL_REC[OnlineCalTblIdx_Cnt_T_u08].RamStructPtr_u08), 1U);
                        }
                    }
                }
                else
                {
                    /* Online calibration is not enabled, restore value from flash */
                    if( MngtRamTbl_C[Swt_Cnt_T_u08].PrmRefTblPtr[GendCalTbl_T_rec[GendTblIdx_Cnt_T_u08].DestIdx_u16] == 
                        MngtRamTbl_C[Swt_Cnt_T_u08].PrmRefTblPtr[GendCalTbl_T_rec[GendTblIdx_Cnt_T_u08].SrcIdx_u16])
                    {
                        /* If the source and destination addresses are the same, use the flash value as this is the RTE default */
                        MemCopy32Bit( &MngtRamTbl_C[Swt_Cnt_T_u08].PrmRefTblPtr[GendCalTbl_T_rec[GendTblIdx_Cnt_T_u08].DestIdx_u16], 
                                      &RteParameterRefTab[GendCalTbl_T_rec[GendTblIdx_Cnt_T_u08].SrcIdx_u16], 1U);
                    }
                    else
                    {
                        /* If the source and destination are different, this means that a different run-time is active then the 
                         * flash default, so restore that value */
                        MemCopy32Bit( &MngtRamTbl_C[Swt_Cnt_T_u08].PrmRefTblPtr[GendCalTbl_T_rec[GendTblIdx_Cnt_T_u08].DestIdx_u16], 
                                      &MngtRamTbl_C[Swt_Cnt_T_u08].PrmRefTblPtr[GendCalTbl_T_rec[GendTblIdx_Cnt_T_u08].SrcIdx_u16], 1U);
                    }
                }
                IdxFound_Cnt_T_logl = TRUE;
            }
        }

        if (IdxFound_Cnt_T_logl == TRUE)
        {
            /* REQ: ES400A #51 I */
            /* Calculate CRC over the newly modified table */
            (void)Rte_Call_Calc32BitCrc_u32_Oper( (uint32 *)(MngtRamTbl_C[Swt_Cnt_T_u08].PrmRefTblPtr),
                                                  PRMPTRTBLSIZEINWORD_CNT_U16, 0U, TRUE, &(MngtRamTbl_C[Swt_Cnt_T_u08].PrmTblCrc_u32) );
            /* ENDREQ: ES400A #51 I */
        }
    }

   
    return IdxFound_Cnt_T_logl;
}

/**********************************************************************************************************************
* Name:         MemCopy32Bit
*
* Description:  Function is used to move pointers in the calibration parameters from one index to another, or to copy
*               the parameter table from flash to RAM. All moves are done at a 32-bit level.
*
* Inputs:       Dest_Uls_T_ptr - Pointer to the address where the data shall be written
*               Src_Uls_T_ptr - Pointer to the address where the data shall be read
*               Len_Cnt_T_u16 - Number of iterations in the for loop.
*
* Outputs:      N/A
*
* Usage Notes:  Function shall only be called by TunSelnMngt functions. Pointers must be 32-bit aligned.
**********************************************************************************************************************/
static FUNC(void, TunSelnMngt_CODE) MemCopy32Bit( P2VAR( void, AUTOMATIC, AUTOMATIC ) Dest_Uls_T_ptr, 
                                                  P2CONST( void, AUTOMATIC, AUTOMATIC ) Src_Uls_T_ptr, 
                                                  uint16 Len_Cnt_T_u16 )
{
    /* Local variables */
    P2CONST(uint32, AUTOMATIC, AUTOMATIC) SrcAdr_Uls_T_ptr = Src_Uls_T_ptr;
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;

    for (Idx_Cnt_T_u16 = 0U; Idx_Cnt_T_u16 < Len_Cnt_T_u16; Idx_Cnt_T_u16++)
    {
        ((uint32 *)Dest_Uls_T_ptr)[Idx_Cnt_T_u16] = SrcAdr_Uls_T_ptr[Idx_Cnt_T_u16];
    }

    return;
}

/**********************************************************************************************************************
* Name:         MemCopy8Bit
*
* Description:  Function is used to calibration groups into the RAM space from flash. Only 8-bit moves are performed
*
* Inputs:       Dest_Uls_T_ptr - Pointer to the address where the data shall be written
*               Src_Uls_T_ptr - Pointer to the address where the data shall be read
*               Len_Cnt_T_u16 - Number of iterations in the for loop.
*
* Outputs:      N/A
*
* Usage Notes:  Function shall only be called by TunSelnMngt functions.
**********************************************************************************************************************/
static FUNC(void, TunSelnMngt_CODE) MemCopy8Bit( P2VAR( void, AUTOMATIC, AUTOMATIC ) Dest_Uls_T_ptr, 
                                                 P2CONST( void, AUTOMATIC, AUTOMATIC ) Src_Uls_T_ptr, 
                                                 uint16 Len_Cnt_T_u16 )
{
    /* Local variables */
    P2CONST(uint8, AUTOMATIC, AUTOMATIC) SrcAdr_Uls_T_ptr = Src_Uls_T_ptr;
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;

    for (Idx_Cnt_T_u16 = 0U; Idx_Cnt_T_u16 < Len_Cnt_T_u16; Idx_Cnt_T_u16++)
    {
        ((uint8 *)Dest_Uls_T_ptr)[Idx_Cnt_T_u16] = SrcAdr_Uls_T_ptr[Idx_Cnt_T_u16];
    }

    return;
}

/**********************************************************************************************************************
* Name:         SegModAdrInfo
*
* Description:  Function is used to report the segment address information for a XCP service request. 
*
* Inputs:       Seg_Arg - Segment (Calibration group) the request is asking for address information.
*               SegInfo_Arg - Sets the request to return the segment address or length information.
*               Resp_Arg - Response data to be returned to the user.
*               RespLen_Arg - Length of the response. 
*
* Outputs:      Rtn_Cnt_T_u08 - Returns XCP OK or an error to the caller.
*
* Usage Notes:  Function shall only be called by GetSegInfoReq_Oper. This mode has a slight deviation from the XCP 
*               specification. Since all the segments use the same RAM buffer and are made up of different components 
*               of varying sizes, this mode will return the starting address of the RAM buffer and the length of 
*               the requested segment.
**********************************************************************************************************************/
static FUNC(uint8, TunSElnMngt_CODE) SegModAdrInfo( uint8 Seg_Arg, GetSegModSegInfo1 SegInfo_Arg,
                                                    P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Resp_Arg,
                                                    P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) RespLen_Arg)
{
    VAR(uint8, AUTOMATIC) Rtn_Cnt_T_u08 = (uint8)XCPIF_XCPCMDOK_CNT_U08;
    VAR(uint32, AUTOMATIC) Data_Cnt_T_u32;

    switch(SegInfo_Arg)
    {
        case GETSEGMODSEGINFO_ADR:
             /* Return the starting address of the RAM buffer */
            Data_Cnt_T_u32 = (uint32)&(OnlineRamCalTbl_C.byte[0]);
        break;
        case GETSEGMODSEGINFO_LEN:
            /* Return the length of the segment */
            Data_Cnt_T_u32 = (uint32)ONLINECALSEGINFOTBL_U32[Seg_Arg];
        break;
        default:
            /* Do nothing, return error*/
            Rtn_Cnt_T_u08 = (uint8)XCPIF_OUTOFRNG_CNT_U08;
        break;
    }
    
    if((uint8)XCPIF_XCPCMDOK_CNT_U08 == Rtn_Cnt_T_u08)
    {
        /* Populate response */
        Resp_Arg[0] = 0xFFU;
        Resp_Arg[1] = 0x00U; /* bytes 1 to 3 are reserved */
        Resp_Arg[2] = 0x00U;
        Resp_Arg[3] = 0x00U;
        #if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
            /* Little Endian format */
            Resp_Arg[4] = (uint8)(Data_Cnt_T_u32 & 0xFFU);
            Resp_Arg[5] = (uint8)((Data_Cnt_T_u32 >> 8U) & 0xFFU);
            Resp_Arg[6] = (uint8)((Data_Cnt_T_u32 >> 16U) & 0xFFU);
            Resp_Arg[7] = (uint8)(Data_Cnt_T_u32 >> 24U);
        #else
            /* Big Endian format */
            Resp_Arg[4] = (uint8)(Data_Cnt_T_u32 >> 24U);
            Resp_Arg[5] = (uint8)((Data_Cnt_T_u32 >> 16U) & 0xFFU);
            Resp_Arg[6] = (uint8)((Data_Cnt_T_u32 >> 8U) & 0xFFU);
            Resp_Arg[7] = (uint8)(Data_Cnt_T_u32 & 0xFFU);
        #endif
        *RespLen_Arg = 8U;
    }

    return Rtn_Cnt_T_u08;
}

/**********************************************************************************************************************
* Name:         SegModStdInfo
*
* Description:  Function is used to report the segment standard information for a XCP service request. 
*
* Inputs:       Seg_Arg - Specific segment of the request. 
*               Resp_Arg - Response data buffer.
*               RespLen_Arg - Response data length. 
*
* Outputs:      Rtn_Cnt_T_u08 - Returns XCP OK or an error to the caller.
*
* Usage Notes:  Function shall only be called by GetSegInfoReq_Oper. 
**********************************************************************************************************************/
static FUNC(uint8, TunSElnMngt_CODE) SegModStdInfo( uint8 Seg_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Resp_Arg,
                                                    P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) RespLen_Arg)
{
    VAR(uint8, AUTOMATIC) Cntr_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;

    Resp_Arg[0] = 0xFFU;
    Resp_Arg[1] = XCPIF_MAXCALPAGE_CNT_U08;
    Resp_Arg[2] = 0x00U; /* Address extension hard coded 0 until extension use is desired */
    
    /* Count the members within the segment */
    Cntr_Cnt_T_u08 = 0U;
    for(Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < MAXONLINECALCFGCNT_CNT_U08; Idx_Cnt_T_u08++)
    {
        if(ONLINECALCFGTBL_REC[Idx_Cnt_T_u08].GroupIdx_u08 == Seg_Arg)
        {
            Cntr_Cnt_T_u08++;
        }
    }
    Resp_Arg[3] = Cntr_Cnt_T_u08;
    Resp_Arg[4] = 0U; /* No compression */
    Resp_Arg[5] = 0U; /* No encryption */
    *RespLen_Arg = 6U;
    
    return (uint8)XCPIF_XCPCMDOK_CNT_U08;
}

/**********************************************************************************************************************
* Name:         SegModAdrMpg
*
* Description:  Function is used to report the segment address information for a XCP service request. 
*
* Inputs:       Seg_Arg - Specific segment of the request. 
*               MpgIdxInfo_Arg - Selection argument for the source address, destination address, or length of a segment.
*               Resp_Arg - Response data buffer.
*               RespLen_Arg - Response buffer length. 
*
* Outputs:      Rtn_Cnt_T_u08 - Returns XCP OK or an error to the caller.
*
* Usage Notes:  Function shall only be called by GetSegInfoReq_Oper. This mode has a slight deviation from the XCP 
*               specification. Since all the segments use the same RAM buffer and are made up of different components 
*               of varying sizes, this mode will return the starting address of the RAM buffer and the length of 
*               the requested segment.
**********************************************************************************************************************/
static FUNC(uint8, TunSElnMngt_CODE) SegModAdrMpg( uint8 Seg_Arg, GetSegModMpgIdx1 MpgIdxInfo_Arg, uint8 MpgIdx_Arg,
                                                   P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Resp_Arg,
                                                   P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) RespLen_Arg)
{
    VAR(uint8, AUTOMATIC) Rtn_Cnt_T_u08 = (uint8)XCPIF_OUTOFRNG_CNT_U08;
    VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) Cntr_Cnt_T_u08;
    VAR(uint32, AUTOMATIC) Data_Cnt_T_u32;
    VAR(uint8, AUTOMATIC) SubOnlineCalTbl_Cnt_T_u08[MAXONLINECALCFGCNT_CNT_U08];

    /* Count the members within the segment */
    Cntr_Cnt_T_u08 = 0U;
    for(Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < MAXONLINECALCFGCNT_CNT_U08; Idx_Cnt_T_u08++)
    {
        SubOnlineCalTbl_Cnt_T_u08[Idx_Cnt_T_u08] = 0U; /* Set the sub table value to zero */
        if(ONLINECALCFGTBL_REC[Idx_Cnt_T_u08].GroupIdx_u08 == Seg_Arg)
        {
            SubOnlineCalTbl_Cnt_T_u08[Cntr_Cnt_T_u08] = Idx_Cnt_T_u08;
            Cntr_Cnt_T_u08++;
        }
    }

    if( MpgIdx_Arg < Cntr_Cnt_T_u08 )
    {
        Rtn_Cnt_T_u08 = (uint8)XCPIF_XCPCMDOK_CNT_U08;

        /* In address mapping mode (2), the SegInfo argument takes on a different meaning than in the basic address mode (0). */
        switch(MpgIdxInfo_Arg)
        {
            case GETSEGMODMPGIDX_SRCADR:
                /* Source Address */
                Data_Cnt_T_u32 = (uint32)(RteParameterRefTab[ONLINECALCFGTBL_REC[SubOnlineCalTbl_Cnt_T_u08[MpgIdx_Arg]].TblIdx_u16]);
            break;
            case GETSEGMODMPGIDX_DESTADR:
                /* Destination Address */
                Data_Cnt_T_u32 = (uint32)(&(ONLINECALCFGTBL_REC[SubOnlineCalTbl_Cnt_T_u08[MpgIdx_Arg]].RamStructPtr_u08)[0]);
            break;
            case GETSEGMODMPGIDX_LEN:
                /* Structure Size */
                Data_Cnt_T_u32 = ONLINECALCFGTBL_REC[SubOnlineCalTbl_Cnt_T_u08[MpgIdx_Arg]].StructSize_u16;
            break;
            default:
                Rtn_Cnt_T_u08 = (uint8)XCPIF_OUTOFRNG_CNT_U08;
            break;
        }

        if(Rtn_Cnt_T_u08 == (uint8)XCPIF_XCPCMDOK_CNT_U08)
        {
            /* Populate response buffer */
            Resp_Arg[0] = 0xFFU;
            Resp_Arg[1] = 0x00U; /* byte 1 is reserved by the XCP Specification*/
            Resp_Arg[2] = 0x00U; /* byte 2 is reserved by the XCP Specification*/
            Resp_Arg[3] = 0x00U; /* byte 3 is reserved by the XCP Specification*/
            #if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
                /* Little Endian format */
                Resp_Arg[4] = (uint8)(Data_Cnt_T_u32 & 0xFFU);
                Resp_Arg[5] = (uint8)((Data_Cnt_T_u32 >> 8U) & 0xFFU);
                Resp_Arg[6] = (uint8)((Data_Cnt_T_u32 >> 16U) & 0xFFU);
                Resp_Arg[7] = (uint8)(Data_Cnt_T_u32 >> 24U);
            #else
                /* Big Endian format */
                Resp_Arg[4] = (uint8)(Data_Cnt_T_u32 >> 24U);
                Resp_Arg[5] = (uint8)((Data_Cnt_T_u32 >> 16U) & 0xFFU);
                Resp_Arg[6] = (uint8)((Data_Cnt_T_u32 >> 8U) & 0xFFU);
                Resp_Arg[7] = (uint8)(Data_Cnt_T_u32 & 0xFFU);
            #endif
            *RespLen_Arg = 8U;
        }
    }

    return Rtn_Cnt_T_u08;
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
