/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  MotAgCorrln.c
 *     SW-C Type:  MotAgCorrln
 *  Generated at:  Thu Apr 14 16:56:54 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <MotAgCorrln>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : MotAgCorrln.c
* Module Description: Implementation of Motor Angle Correlation FDD ES249A
* Project           : CBD 
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 6 %
* %derived_by       : nz4qtt %
*---------------------------------------------------------------------------------------------------------------------------
* Date        Rev      Author        Change Description                                                       SCR #
* ---------  -------  ----------     -------------------------------------------------------------   -----------------------
* 05/22/15     1        SV           Initial Version                                                               EA4#536
* 06/03/15     2        SV           Used SetNtcSts   & GetNtcQlfrSts  		   									   EA4#709           
* 08/19/15     3        KPIT  		 Fault injection added for 'MotAgMeclIdptSig' signal                           EA4#1350 
* 11/11/15     4        Selva        Updated for the FDD v 2.2.1                                                   EA4#2460 
* 03/16/16     5        KK           Fixed anomalies EA4#3435 & EA4#2563(FDD v3.1.0)                     EA4#4235, EA4#2809                            
* 04/14/16     6        KK           Updates done as per FDD v4.0.0, v4.0.1					             EA4#5057, EA4#5292
* 04/19/16     7        KK           Correction to the RTE write ports added in last change						   EA4#5426
*---------------------------------------------------------------------------------------------------------------------------
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

  u0p16
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_MotAgCorrln.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "FltInj.h"

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/
#define MOTAGMAXSTALLCNTR_CNT_U08       200U
#define MOTAGCORRLNNTCPASSSTEP_CNT_U16  655U
#define MOTAGCORRLNNTCFAILSTEP_CNT_U16  3277U
#define MOTAGCORRLNERRTHD_MOTREVELEC_U0P16  14562U      /* Corresponds to Angle Difference Threshold '0.2222' */    
#define MOTAGACORRLNST_CNT_U08          1U
#define MOTAGBCORRLNST_CNT_U08          2U
#define MOTAGCCORRLNST_CNT_U08          4U
#define HALFREV_MOTREV_U0P16            32768U

#define MOTAGMECLCORRLNSTMIN_CNT_U08    Cnt22_LowerLimit          /* MotAgMeclCorrlnSt.EngMin */
#define MOTAGMECLCORRLNSTMAX_CNT_U08    Cnt22_UpperLimit          /* MotAgMeclCorrlnSt.EngMax */

#define MOTAGMECLIDPTSIGMIN_CNT_U08    Cnt13_LowerLimit          /* MotAgMeclIdptSig.EngMin */
#define MOTAGMECLIDPTSIGMAX_CNT_U08    Cnt13_UpperLimit          /* MotAgMeclIdptSig.EngMax */

   
/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/
static FUNC(boolean, MotAgCorrln_CODE) MtrAgSigAvlCheck(uint8 SigRollg_Cnt_T_u08,
                                                        SigQlfr1 SigQlfr_Cnt_T_enum,
                                                        uint8 LstRollg_Cnt_T_u08,
                                                        uint8 LstStall_Cnt_T_u08,
                                                        P2VAR(uint8, AUTOMATIC, MotAgCorrln_VAR) StallCntOutp_Cnt_T_u08);
                                                   
static FUNC(void, MotAgCorrln_CODE) MtrAgNotFailedCheck(P2VAR(boolean, AUTOMATIC, MotAgCorrln_VAR) MotAgANotFailed_Cnt_T_lgc,
                                                        P2VAR(boolean, AUTOMATIC, MotAgCorrln_VAR) MotAgBNotFailed_Cnt_T_lgc,
                                                        P2VAR(boolean, AUTOMATIC, MotAgCorrln_VAR) MotAgCNotFailed_Cnt_T_lgc,
                                                        P2VAR(uint8, AUTOMATIC, MotAgCorrln_VAR) MotAgMeclIdptSig_Cnt_T_u08,
														VAR(boolean, AUTOMATIC) MotAgSigAvlA_Cnt_T_lgc,
														VAR(boolean, AUTOMATIC) MotAgSigAvlB_Cnt_T_lgc,
														VAR(boolean, AUTOMATIC) MotAgSigAvlC_Cnt_T_lgc);

static FUNC(void, MotAgCorrln_CODE) TestOkCheck(uint16 MotAgAMecl_MotRev_T_u0p16,
                                                uint16 MotAgBMecl_MotRev_T_u0p16,
                                                uint16 MotAgCMecl_MotRev_T_u0p16,
                                                P2VAR(boolean, AUTOMATIC, MotAgCorrln_VAR) MotAgOkA_Cnt_T_lgc,
                                                P2VAR(boolean, AUTOMATIC, MotAgCorrln_VAR) MotAgOkB_Cnt_T_lgc,
                                                P2VAR(boolean, AUTOMATIC, MotAgCorrln_VAR) MotAgOkC_Cnt_T_lgc,
												P2VAR(uint16, AUTOMATIC, MotAgCorrln_VAR) MotAgABErrTerm_T_u0p16,
												P2VAR(uint16, AUTOMATIC, MotAgCorrln_VAR) MotAgACErrTerm_T_u0p16,
												P2VAR(uint16, AUTOMATIC, MotAgCorrln_VAR) MotAgBCErrTerm_T_u0p16);

static FUNC(uint16, MotAgCorrln_CODE) CalcErrTerm(uint16 MotAgXMecl_MotRev_T_u0p16,
                                                uint16 MotAgYMecl_MotRev_T_u0p16);												
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
 * Primitive Types:
 * ================
 * u0p16: Integer in interval [0...65535]
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
 *   u0p16 *Rte_Pim_MotAgCorrlnErrThd(void)
 *   uint8 *Rte_Pim_MotAgCorrlnMotAgARollgCntPrev(void)
 *   uint8 *Rte_Pim_MotAgCorrlnMotAgAStallCntPrev(void)
 *   uint8 *Rte_Pim_MotAgCorrlnMotAgBRollgCntPrev(void)
 *   uint8 *Rte_Pim_MotAgCorrlnMotAgBStallCntPrev(void)
 *   uint8 *Rte_Pim_MotAgCorrlnMotAgCRollgCntPrev(void)
 *   uint8 *Rte_Pim_MotAgCorrlnMotAgCStallCntPrev(void)
 *   boolean *Rte_Pim_dMotAgCorrlnMotAgAOk(void)
 *   boolean *Rte_Pim_dMotAgCorrlnMotAgBOk(void)
 *   boolean *Rte_Pim_dMotAgCorrlnMotAgCOk(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
 *
 *********************************************************************************************************************/


#define MotAgCorrln_START_SEC_CODE
#include "MotAgCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAgCorrlnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, MotAgCorrln_CODE) MotAgCorrlnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAgCorrlnInit1
 *********************************************************************************************************************/

 *Rte_Pim_MotAgCorrlnErrThd() =(uint16)(((uint32)MOTAGCORRLNERRTHD_MOTREVELEC_U0P16*(uint32)2U*(((uint32)1U <<16U)/Rte_Prm_SysGlbPrmMotPoleCnt_Val()))>>16U);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAgCorrlnPer1
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
 *   Std_ReturnType Rte_Read_MotAgAMecl_Val(u0p16 *data)
 *   Std_ReturnType Rte_Read_MotAgAMeclQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_MotAgAMeclRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotAgBMecl_Val(u0p16 *data)
 *   Std_ReturnType Rte_Read_MotAgBMeclQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_MotAgBMeclRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotAgCMecl_Val(u0p16 *data)
 *   Std_ReturnType Rte_Read_MotAgCMeclQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_MotAgCMeclRollgCntr_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotAgABErrTerm_Val(u0p16 data)
 *   Std_ReturnType Rte_Write_MotAgACErrTerm_Val(u0p16 data)
 *   Std_ReturnType Rte_Write_MotAgBCErrTerm_Val(u0p16 data)
 *   Std_ReturnType Rte_Write_MotAgMeclCorrlnSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_MotAgMeclIdptSig_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr, uint8 NtcStInfo, NtcSts1 NtcSts, uint16 DebStep)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, MotAgCorrln_CODE) MotAgCorrlnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAgCorrlnPer1
 *********************************************************************************************************************/
    VAR(uint16, AUTOMATIC) MotAgAMecl_MotRev_T_u0p16;    
    VAR(uint8, AUTOMATIC) MotAgAMeclRollgCntr_Cnt_T_u08;
    VAR(SigQlfr1, AUTOMATIC) MotAgAMeclQlfr_Cnt_T_enum;

    VAR(uint16, AUTOMATIC) MotAgBMecl_MotRev_T_u0p16;   
    VAR(uint8, AUTOMATIC) MotAgBMeclRollgCntr_Cnt_T_u08;
    VAR(SigQlfr1, AUTOMATIC) MotAgBMeclQlfr_Cnt_T_enum;
    
    VAR(uint16, AUTOMATIC) MotAgCMecl_MotRev_T_u0p16;   
    VAR(uint8, AUTOMATIC) MotAgCMeclRollgCntr_Cnt_T_u08;
    VAR(SigQlfr1, AUTOMATIC) MotAgCMeclQlfr_Cnt_T_enum; 
    
    VAR(uint8, AUTOMATIC) MotAgMeclCorrlnSt_Cnt_T_u08 = 0U;  
    VAR(uint8, AUTOMATIC) MotAgMeclIdptSig_Cnt_T_u08;   
    
    VAR(boolean, AUTOMATIC) MotAgSigAvlA_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) MotAgSigAvlB_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) MotAgSigAvlC_Cnt_T_lgc;
    VAR(uint8, AUTOMATIC) MotAgAStallCntOutp_Cnt_T_u08; 
    VAR(uint8, AUTOMATIC) MotAgBStallCntOutp_Cnt_T_u08; 
    VAR(uint8, AUTOMATIC) MotAgCStallCntOutp_Cnt_T_u08; 
    VAR(boolean, AUTOMATIC) MotAgANotFailed_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) MotAgBNotFailed_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) MotAgCNotFailed_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) MotAgOkA_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) MotAgOkB_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) MotAgOkC_Cnt_T_lgc;

	VAR(uint16, AUTOMATIC) MotAgABErrTerm_T_u0p16; 
	VAR(uint16, AUTOMATIC) MotAgACErrTerm_T_u0p16; 
	VAR(uint16, AUTOMATIC) MotAgBCErrTerm_T_u0p16; 
	
    /* read inputs */
    (void)Rte_Read_MotAgAMecl_Val(&MotAgAMecl_MotRev_T_u0p16);              /* REQ: ES249A #48 I */
    (void)Rte_Read_MotAgAMeclRollgCntr_Val(&MotAgAMeclRollgCntr_Cnt_T_u08); /* REQ: ES249A #49 I */
    (void)Rte_Read_MotAgAMeclQlfr_Val(&MotAgAMeclQlfr_Cnt_T_enum);          /* REQ: ES249A #65 I */
    
    (void)Rte_Read_MotAgBMecl_Val(&MotAgBMecl_MotRev_T_u0p16);              /* REQ: ES249A #66 I */
    (void)Rte_Read_MotAgBMeclRollgCntr_Val(&MotAgBMeclRollgCntr_Cnt_T_u08); /* REQ: ES249A #67 I */
    (void)Rte_Read_MotAgBMeclQlfr_Val(&MotAgBMeclQlfr_Cnt_T_enum);          /* REQ: ES249A #68 I */
    
    (void)Rte_Read_MotAgCMecl_Val(&MotAgCMecl_MotRev_T_u0p16);              /* REQ: ES249A #69 I */
    (void)Rte_Read_MotAgCMeclRollgCntr_Val(&MotAgCMeclRollgCntr_Cnt_T_u08); /* REQ: ES249A #70 I */
    (void)Rte_Read_MotAgCMeclQlfr_Val(&MotAgCMeclQlfr_Cnt_T_enum);          /* REQ: ES249A #71 I */
    
    /* REQ: ES249A #53 I */
    /* 'Signal Availability' checks*/
    MotAgSigAvlA_Cnt_T_lgc = MtrAgSigAvlCheck(MotAgAMeclRollgCntr_Cnt_T_u08, MotAgAMeclQlfr_Cnt_T_enum, /* Motor Signal A */
                                              *Rte_Pim_MotAgCorrlnMotAgARollgCntPrev(), *Rte_Pim_MotAgCorrlnMotAgAStallCntPrev(), &MotAgAStallCntOutp_Cnt_T_u08);
    *Rte_Pim_MotAgCorrlnMotAgARollgCntPrev() = MotAgAMeclRollgCntr_Cnt_T_u08;
    *Rte_Pim_MotAgCorrlnMotAgAStallCntPrev() = MotAgAStallCntOutp_Cnt_T_u08;
    
    MotAgSigAvlB_Cnt_T_lgc = MtrAgSigAvlCheck(MotAgBMeclRollgCntr_Cnt_T_u08, MotAgBMeclQlfr_Cnt_T_enum, /* Motor Signal B */
                                              *Rte_Pim_MotAgCorrlnMotAgBRollgCntPrev(), *Rte_Pim_MotAgCorrlnMotAgBStallCntPrev(), &MotAgBStallCntOutp_Cnt_T_u08);   
    *Rte_Pim_MotAgCorrlnMotAgBRollgCntPrev() = MotAgBMeclRollgCntr_Cnt_T_u08;
    *Rte_Pim_MotAgCorrlnMotAgBStallCntPrev() = MotAgBStallCntOutp_Cnt_T_u08;
    
    MotAgSigAvlC_Cnt_T_lgc = MtrAgSigAvlCheck(MotAgCMeclRollgCntr_Cnt_T_u08, MotAgCMeclQlfr_Cnt_T_enum, /* Motor Signal C */
                                              *Rte_Pim_MotAgCorrlnMotAgCRollgCntPrev(), *Rte_Pim_MotAgCorrlnMotAgCStallCntPrev(), &MotAgCStallCntOutp_Cnt_T_u08);   
    *Rte_Pim_MotAgCorrlnMotAgCRollgCntPrev() = MotAgCMeclRollgCntr_Cnt_T_u08;
    *Rte_Pim_MotAgCorrlnMotAgCStallCntPrev() = MotAgCStallCntOutp_Cnt_T_u08;
    /* ENDREQ: ES249A #53 */
    
    /* 'TestOk' checks*/
    TestOkCheck(MotAgAMecl_MotRev_T_u0p16, MotAgBMecl_MotRev_T_u0p16, MotAgCMecl_MotRev_T_u0p16,
                &MotAgOkA_Cnt_T_lgc, &MotAgOkB_Cnt_T_lgc, &MotAgOkC_Cnt_T_lgc,
				&MotAgABErrTerm_T_u0p16, &MotAgACErrTerm_T_u0p16, &MotAgBCErrTerm_T_u0p16);
				
    *Rte_Pim_dMotAgCorrlnMotAgAOk() = MotAgOkA_Cnt_T_lgc;
    *Rte_Pim_dMotAgCorrlnMotAgBOk() = MotAgOkB_Cnt_T_lgc;
    *Rte_Pim_dMotAgCorrlnMotAgCOk() = MotAgOkC_Cnt_T_lgc;
    
    /* NTC status check */
    MtrAgNotFailedCheck(&MotAgANotFailed_Cnt_T_lgc, &MotAgBNotFailed_Cnt_T_lgc, &MotAgCNotFailed_Cnt_T_lgc, 
                        &MotAgMeclIdptSig_Cnt_T_u08, MotAgSigAvlA_Cnt_T_lgc, MotAgSigAvlB_Cnt_T_lgc, MotAgSigAvlC_Cnt_T_lgc);
    
 
    /* REQ: ES249A #90 I */
    /* calculate 'MotAgMeclCorrlnSt_Cnt_T_u08' output */
    if((MotAgSigAvlA_Cnt_T_lgc == TRUE) && (MotAgOkA_Cnt_T_lgc == TRUE) && (MotAgANotFailed_Cnt_T_lgc == TRUE))
    {
        MotAgMeclCorrlnSt_Cnt_T_u08 = MOTAGACORRLNST_CNT_U08;
    }
    
    if((MotAgSigAvlB_Cnt_T_lgc == TRUE) && (MotAgOkB_Cnt_T_lgc == TRUE) && (MotAgBNotFailed_Cnt_T_lgc == TRUE))
    {
        MotAgMeclCorrlnSt_Cnt_T_u08 = MotAgMeclCorrlnSt_Cnt_T_u08 + MOTAGBCORRLNST_CNT_U08;
    }
    
    if((MotAgSigAvlC_Cnt_T_lgc == TRUE) && (MotAgOkC_Cnt_T_lgc == TRUE) && (MotAgCNotFailed_Cnt_T_lgc == TRUE))
    {
        MotAgMeclCorrlnSt_Cnt_T_u08 = MotAgMeclCorrlnSt_Cnt_T_u08 + MOTAGCCORRLNST_CNT_U08;
    }
    /* ENDREQ: ES249A #90 */
    
    MotAgMeclCorrlnSt_Cnt_T_u08 = Lim_u08(MotAgMeclCorrlnSt_Cnt_T_u08, MOTAGMECLCORRLNSTMIN_CNT_U08, MOTAGMECLCORRLNSTMAX_CNT_U08);
	
	/* REQ: ES249A #110 I */
	if(MotAgMeclIdptSig_Cnt_T_u08 > 1U)
	{
		/* Do nothing*/
	}
	else
	{
		MotAgMeclIdptSig_Cnt_T_u08 = 0U;
	}
    /* ENDREQ: ES249A #110 */
	
	MotAgMeclIdptSig_Cnt_T_u08 = Lim_u08(MotAgMeclIdptSig_Cnt_T_u08, MOTAGMECLIDPTSIGMIN_CNT_U08, MOTAGMECLIDPTSIGMAX_CNT_U08);
    
    /* REQ: ES249A #106 F */
    #if (STD_ON == FLTINJENA)    
    (void)Rte_Call_FltInj_u08_Oper(&MotAgMeclIdptSig_Cnt_T_u08,FLTINJ_MOTAGCORRLN_MOTAGIDPTSIG);          
    #endif
    /* ENDREQ: ES249A #106 */
    
    /*write outputs */
    (void)Rte_Write_MotAgMeclCorrlnSt_Val(MotAgMeclCorrlnSt_Cnt_T_u08);     /* REQ: ES249A #51 I */
    (void)Rte_Write_MotAgMeclIdptSig_Val(MotAgMeclIdptSig_Cnt_T_u08);       /* REQ: ES249A #52 I */
	(void)Rte_Write_MotAgABErrTerm_Val(MotAgABErrTerm_T_u0p16);				/* REQ: ES249A #111 I */
	(void)Rte_Write_MotAgACErrTerm_Val(MotAgACErrTerm_T_u0p16);				/* REQ: ES249A #112 I */
	(void)Rte_Write_MotAgBCErrTerm_Val(MotAgBCErrTerm_T_u0p16);				/* REQ: ES249A #115 I */
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define MotAgCorrln_STOP_SEC_CODE
#include "MotAgCorrln_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /*****************************************************************************************************************
  * Name        :   MtrAgSigAvlCheck
  * Description :   Implementation of 'MtrAgA SigAvlCheck', 'MtrAgB SigAvlCheck' and 'MtrAgC SigAvlCheck' blocks.
  *                 Checks Signal Availability of Motor.
  * Inputs      :   SigRollg_Cnt_T_u08, SigQlfr_Cnt_T_enum, LstRollg_Cnt_T_u08, LstStall_Cnt_T_u08
  * Outputs     :   *StallCntOutp_Cnt_T_u08
  * Returns     :   SigAvl_Cnt_T_lgc
  * Usage Notes :   None
  ****************************************************************************************************************/
static FUNC(boolean, MotAgCorrln_CODE) MtrAgSigAvlCheck(uint8 SigRollg_Cnt_T_u08,
                                                        SigQlfr1 SigQlfr_Cnt_T_enum,
                                                        uint8 LstRollg_Cnt_T_u08,
                                                        uint8 LstStall_Cnt_T_u08,
                                                        P2VAR(uint8, AUTOMATIC, MotAgCorrln_VAR) StallCntOutp_Cnt_T_u08)
{                      
    VAR(boolean, AUTOMATIC) SigAvl_Cnt_T_lgc;
    
    if (SigRollg_Cnt_T_u08 == LstRollg_Cnt_T_u08)
    {
        if(LstStall_Cnt_T_u08 == 255U)
        {
            *StallCntOutp_Cnt_T_u08 = 255U;
        }
        else
        {
            *StallCntOutp_Cnt_T_u08 = LstStall_Cnt_T_u08 + 1U;
        }
    }
    else
    {
        *StallCntOutp_Cnt_T_u08 = 0U;
    }
    
    if (*StallCntOutp_Cnt_T_u08 >= MOTAGMAXSTALLCNTR_CNT_U08)
    {
        SigAvl_Cnt_T_lgc = FALSE;
    }
    else
    {
        if(SigQlfr_Cnt_T_enum < SIGQLFR_FAILD)                                                           
        {
            SigAvl_Cnt_T_lgc = TRUE;
        }
        else
        {
            SigAvl_Cnt_T_lgc = FALSE;
        }
    }
    return SigAvl_Cnt_T_lgc;
}
/*****************************************************************************************************************
  * Name        :   TestOkCheck
  * Description :   Implementation of 'TestOk' check functionality. This function corresponds to blocks
                    'MotAgA vs MotAgB', 'MotAgA vs MotAgC', 'MotAgB vs MotAgC' and 'TestOk'.
  * Inputs      :   MotAgAMecl_MotRev_T_u0p16, MotAgBMecl_MotRev_T_u0p16, MotAgCMecl_MotRev_T_u0p16
  * Outputs     :   *MotAgOkA_Cnt_T_lgc, *MotAgOkB_Cnt_T_lgc, *MotAgOkC_Cnt_T_lgc,
  *				:	*MotAgABErrTerm_T_u0p16, *MotAgACErrTerm_T_u0p16, *MotAgBCErrTerm_T_u0p16.
  * Returns     :   None
  * Usage Notes :   None
  ****************************************************************************************************************/
static FUNC(void, MotAgCorrln_CODE) TestOkCheck(uint16 MotAgAMecl_MotRev_T_u0p16,
                                                uint16 MotAgBMecl_MotRev_T_u0p16,
                                                uint16 MotAgCMecl_MotRev_T_u0p16,
                                                P2VAR(boolean, AUTOMATIC, MotAgCorrln_VAR) MotAgOkA_Cnt_T_lgc,
                                                P2VAR(boolean, AUTOMATIC, MotAgCorrln_VAR) MotAgOkB_Cnt_T_lgc,
                                                P2VAR(boolean, AUTOMATIC, MotAgCorrln_VAR) MotAgOkC_Cnt_T_lgc,
												P2VAR(uint16, AUTOMATIC, MotAgCorrln_VAR) MotAgABErrTerm_T_u0p16,
												P2VAR(uint16, AUTOMATIC, MotAgCorrln_VAR) MotAgACErrTerm_T_u0p16,
												P2VAR(uint16, AUTOMATIC, MotAgCorrln_VAR) MotAgBCErrTerm_T_u0p16)
{
    VAR(boolean, AUTOMATIC) MotAgAvsMotAgB_Cnt_T_lgc = FALSE;
    VAR(boolean, AUTOMATIC) MotAgAvsMotAgC_Cnt_T_lgc = FALSE;
    VAR(boolean, AUTOMATIC) MotAgBvsMotAgC_Cnt_T_lgc = FALSE;
    
    /* REQ: ES249A #91 I */
    /* REQ: ES249A #93 I */
    /* REQ: ES249A #22 I */
    /* REQ: ES249A #28 I */
    /* REQ: ES249A #107 I */
    /* REQ: ES249A #31 I */
    
    /* MotAgA vs MotAgB */
	
    *MotAgABErrTerm_T_u0p16 = CalcErrTerm(MotAgAMecl_MotRev_T_u0p16, MotAgBMecl_MotRev_T_u0p16 );
	
	
    if(*MotAgABErrTerm_T_u0p16 < *Rte_Pim_MotAgCorrlnErrThd())
    {
        MotAgAvsMotAgB_Cnt_T_lgc = TRUE;
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X080, 0U, NTCSTS_PREPASSD, MOTAGCORRLNNTCPASSSTEP_CNT_U16);
    }   
    else
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X080, 1U, NTCSTS_PREFAILD, MOTAGCORRLNNTCFAILSTEP_CNT_U16);
    }   
    /* ENDREQ: ES249A #91 */
    /* ENDREQ: ES249A #93 */
    /* ENDREQ: ES249A #22 */
    /* ENDREQ: ES249A #28 */
    /* ENDREQ: ES249A #107 */
    /* ENDREQ: ES249A #31 */
    
    /* REQ: ES249A #91 I */
    /* REQ: ES249A #95 I */
    /* REQ: ES249A #74 I */
    /* REQ: ES249A #108 I */
    /* REQ: ES249A #78 I */
    /* REQ: ES249A #80 I */
    
    /* MotAgA vs MotAgC */
    *MotAgACErrTerm_T_u0p16 = CalcErrTerm(MotAgAMecl_MotRev_T_u0p16, MotAgCMecl_MotRev_T_u0p16 );
	
    if(*MotAgACErrTerm_T_u0p16 < *Rte_Pim_MotAgCorrlnErrThd())
    {
        MotAgAvsMotAgC_Cnt_T_lgc = TRUE;
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X081, 0U, NTCSTS_PREPASSD, MOTAGCORRLNNTCPASSSTEP_CNT_U16);
    }   
    else
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X081, 1U, NTCSTS_PREFAILD, MOTAGCORRLNNTCFAILSTEP_CNT_U16);
    }
    /* ENDREQ: ES249A #91 */
    /* ENDREQ: ES249A #95 */
    /* ENDREQ: ES249A #74 */
    /* ENDREQ: ES249A #108 */
    /* ENDREQ: ES249A #78 */
    /* ENDREQ: ES249A #80 */
    
    /* REQ: ES249A #93 I */
    /* REQ: ES249A #95 I */
    /* REQ: ES249A #83 I */
    /* REQ: ES249A #109 I */
    /* REQ: ES249A #87 I */
    
    /* MotAgB vs MotAgC */
    *MotAgBCErrTerm_T_u0p16 = CalcErrTerm(MotAgBMecl_MotRev_T_u0p16, MotAgCMecl_MotRev_T_u0p16 );
	
    if(*MotAgBCErrTerm_T_u0p16 < *Rte_Pim_MotAgCorrlnErrThd())
    {
        MotAgBvsMotAgC_Cnt_T_lgc = TRUE;
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X082, 0U, NTCSTS_PREPASSD, MOTAGCORRLNNTCPASSSTEP_CNT_U16);
    }   
    else
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X082, 1U, NTCSTS_PREFAILD, MOTAGCORRLNNTCFAILSTEP_CNT_U16);
    }
    /* ENDREQ: ES249A #93 */
    /* ENDREQ: ES249A #95 */
    /* ENDREQ: ES249A #83 */
    /* ENDREQ: ES249A #109 */
    /* ENDREQ: ES249A #87 */
    
    /* REQ: ES249A #91 I */
    /* REQ: ES249A #93 I */
    /* REQ: ES249A #95 I */
    
    /* TestOk */
    if (MotAgAvsMotAgB_Cnt_T_lgc == TRUE)
    {
        if((MotAgAvsMotAgC_Cnt_T_lgc == TRUE)||(MotAgBvsMotAgC_Cnt_T_lgc == TRUE))
        {
            *MotAgOkA_Cnt_T_lgc = TRUE;                             /* Condition D1,D2,D3; Action #1 */
            *MotAgOkB_Cnt_T_lgc = TRUE;
            *MotAgOkC_Cnt_T_lgc = TRUE;
        }
        else
        {
            *MotAgOkA_Cnt_T_lgc = TRUE;                             /* Condition D4; Action #2 */
            *MotAgOkB_Cnt_T_lgc = TRUE;
            *MotAgOkC_Cnt_T_lgc = FALSE;
        }
    }
    else
    {
        if((MotAgAvsMotAgC_Cnt_T_lgc == TRUE)&&(MotAgBvsMotAgC_Cnt_T_lgc == TRUE))
        {
            *MotAgOkA_Cnt_T_lgc = TRUE;                             /* Condition D5; Action #1 */
            *MotAgOkB_Cnt_T_lgc = TRUE;
            *MotAgOkC_Cnt_T_lgc = TRUE;
        }
        else if (MotAgAvsMotAgC_Cnt_T_lgc == TRUE)
        {
            *MotAgOkA_Cnt_T_lgc = TRUE;                             /* Condition D6; Action #3 */
            *MotAgOkB_Cnt_T_lgc = FALSE;
            *MotAgOkC_Cnt_T_lgc = TRUE;
        }
        else if (MotAgBvsMotAgC_Cnt_T_lgc == TRUE)
        {
            *MotAgOkA_Cnt_T_lgc = FALSE;                            /* Condition D7; Action #4 */
            *MotAgOkB_Cnt_T_lgc = TRUE;
            *MotAgOkC_Cnt_T_lgc = TRUE;
        }
        else
        {
            *MotAgOkA_Cnt_T_lgc = FALSE;                            /* Condition D8; Action #5 */
            *MotAgOkB_Cnt_T_lgc = FALSE;
            *MotAgOkC_Cnt_T_lgc = FALSE;
        }
    }
    /* ENDREQ: ES249A #91 */
    /* ENDREQ: ES249A #93 */
    /* ENDREQ: ES249A #95 */
}
/*****************************************************************************************************************
  * Name        :   MtrAgNotFailedCheck
  * Description :   Implementation of 'NotFailed' block functionality.
  * Inputs      :   MotAgSigAvlA_Cnt_T_lgc, MotAgSigAvlB_Cnt_T_lgc, MotAgSigAvlC_Cnt_T_lgc,
  *					*MotAgANotFailed_Cnt_T_lgc, *MotAgBNotFailed_Cnt_T_lgc, *MotAgCNotFailed_Cnt_T_lgc, *MotAgMeclIdptSig_Cnt_T_u08
  * Outputs     :   None
  * Returns     :   None
  * Usage Notes :   MotAgANotFailed_Cnt_T_lgc, MotAgBNotFailed_Cnt_T_lgc, MotAgCNotFailed_Cnt_T_lgc and MotAgMeclIdptSig_Cnt_T_u08
  *			        values are determined in this function.
  ****************************************************************************************************************/
static FUNC(void, MotAgCorrln_CODE) MtrAgNotFailedCheck(P2VAR(boolean, AUTOMATIC, MotAgCorrln_VAR) MotAgANotFailed_Cnt_T_lgc,
                                                        P2VAR(boolean, AUTOMATIC, MotAgCorrln_VAR) MotAgBNotFailed_Cnt_T_lgc,
                                                        P2VAR(boolean, AUTOMATIC, MotAgCorrln_VAR) MotAgCNotFailed_Cnt_T_lgc,
                                                        P2VAR(uint8, AUTOMATIC, MotAgCorrln_VAR) MotAgMeclIdptSig_Cnt_T_u08,
														VAR(boolean, AUTOMATIC) MotAgSigAvlA_Cnt_T_lgc,
														VAR(boolean, AUTOMATIC) MotAgSigAvlB_Cnt_T_lgc,
														VAR(boolean, AUTOMATIC) MotAgSigAvlC_Cnt_T_lgc)
{
    VAR(SigQlfr1, AUTOMATIC) MotAgAvsMotAgB_Cnt_T_enum;
    VAR(SigQlfr1, AUTOMATIC) MotAgAvsMotAgC_Cnt_T_enum;
    VAR(SigQlfr1, AUTOMATIC) MotAgBvsMotAgC_Cnt_T_enum;
	VAR(uint8, AUTOMATIC) MotAgSigAvlA_Cnt_T_u08 = (uint8)MotAgSigAvlA_Cnt_T_lgc;
	VAR(uint8, AUTOMATIC) MotAgSigAvlB_Cnt_T_u08 = (uint8)MotAgSigAvlB_Cnt_T_lgc;
	VAR(uint8, AUTOMATIC) MotAgSigAvlC_Cnt_T_u08 = (uint8)MotAgSigAvlC_Cnt_T_lgc;	
    
    /* REQ: ES249A #92 I */
    /* REQ: ES249A #96 I */
    /* REQ: ES249A #97 I */
    /* REQ: ES249A #98 I */
    /* REQ: ES249A #100 I */
    /* REQ: ES249A #101 I */
    /* REQ: ES249A #102 I */
    /* REQ: ES249A #103 I */
    /* REQ: ES249A #104 I */
    (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X080, &MotAgAvsMotAgB_Cnt_T_enum);
    (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X081, &MotAgAvsMotAgC_Cnt_T_enum);
    (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X082, &MotAgBvsMotAgC_Cnt_T_enum);
    /* ENDREQ: ES249A #92 */
    
    if(MotAgAvsMotAgB_Cnt_T_enum < SIGQLFR_FAILD)
    {
        if((MotAgAvsMotAgC_Cnt_T_enum < SIGQLFR_FAILD)||(MotAgBvsMotAgC_Cnt_T_enum < SIGQLFR_FAILD))
        {
            *MotAgANotFailed_Cnt_T_lgc = TRUE;              /* Condition D1,D2,D3; Action #1 */ 
            *MotAgBNotFailed_Cnt_T_lgc = TRUE;
            *MotAgCNotFailed_Cnt_T_lgc = TRUE;
            *MotAgMeclIdptSig_Cnt_T_u08 = MotAgSigAvlA_Cnt_T_u08 + MotAgSigAvlB_Cnt_T_u08 + MotAgSigAvlC_Cnt_T_u08;
        }
        else
        {
            *MotAgANotFailed_Cnt_T_lgc = TRUE;              /* Condition D4; Action #2 */ 
            *MotAgBNotFailed_Cnt_T_lgc = TRUE;
            *MotAgCNotFailed_Cnt_T_lgc = FALSE;
            *MotAgMeclIdptSig_Cnt_T_u08 = MotAgSigAvlA_Cnt_T_u08 + MotAgSigAvlB_Cnt_T_u08;
        }
    }
    else
    {
        if((MotAgAvsMotAgC_Cnt_T_enum < SIGQLFR_FAILD)&&(MotAgBvsMotAgC_Cnt_T_enum < SIGQLFR_FAILD))
        {
            *MotAgANotFailed_Cnt_T_lgc = TRUE;              /* Condition D5; Action #1 */ 
            *MotAgBNotFailed_Cnt_T_lgc = TRUE;
            *MotAgCNotFailed_Cnt_T_lgc = TRUE;
            *MotAgMeclIdptSig_Cnt_T_u08 = MotAgSigAvlA_Cnt_T_u08 + MotAgSigAvlB_Cnt_T_u08 + MotAgSigAvlC_Cnt_T_u08;
        }
        else if (MotAgAvsMotAgC_Cnt_T_enum < SIGQLFR_FAILD)
        {
            *MotAgANotFailed_Cnt_T_lgc = TRUE;              /* Condition D6; Action #3 */ 
            *MotAgBNotFailed_Cnt_T_lgc = FALSE;
            *MotAgCNotFailed_Cnt_T_lgc = TRUE;
            *MotAgMeclIdptSig_Cnt_T_u08 = MotAgSigAvlA_Cnt_T_u08 + MotAgSigAvlC_Cnt_T_u08;
        }
        else if (MotAgBvsMotAgC_Cnt_T_enum < SIGQLFR_FAILD)
        {
            *MotAgANotFailed_Cnt_T_lgc = FALSE;             /* Condition D7; Action #4 */ 
            *MotAgBNotFailed_Cnt_T_lgc = TRUE;
            *MotAgCNotFailed_Cnt_T_lgc = TRUE;
            *MotAgMeclIdptSig_Cnt_T_u08 = MotAgSigAvlB_Cnt_T_u08 + MotAgSigAvlC_Cnt_T_u08;
        }
        else
        {
            *MotAgANotFailed_Cnt_T_lgc = FALSE;             /*Condition D8; Action #5 */ 
            *MotAgBNotFailed_Cnt_T_lgc = FALSE;
            *MotAgCNotFailed_Cnt_T_lgc = FALSE;
            *MotAgMeclIdptSig_Cnt_T_u08 = 0U;
        }   
    }
    /* ENDREQ: ES249A #96 */
    /* ENDREQ: ES249A #97 */
    /* ENDREQ: ES249A #98 */
    /* ENDREQ: ES249A #100 */
    /* ENDREQ: ES249A #101 */
    /* ENDREQ: ES249A #102 */
    /* ENDREQ: ES249A #103 */
    /* ENDREQ: ES249A #104 */
}   


/*****************************************************************************************************************
  * Name        :   CalcErrTerm
  * Description :   Implementation of 'CalcErrTerm' check functionality. This function corresponds to blocks
                    'MotAgA vs MotAgB', 'MotAgA vs MotAgC', 'MotAgB vs MotAgC' '.
  * Inputs      :   MotAgXMecl_MotRev_T_u0p16, MotAgYMecl_MotRev_T_u0p16
  * Outputs     :   None        
  * Returns     :   ErrorTerm_Rev_T_u0p16
  * Usage Notes :   None
  ****************************************************************************************************************/
static FUNC(uint16, MotAgCorrln_CODE) CalcErrTerm(uint16 MotAgXMecl_MotRev_T_u0p16,
                                                uint16 MotAgYMecl_MotRev_T_u0p16)
{
	
	VAR(uint16, AUTOMATIC) ErrorTerm_Rev_T_u0p16;
	
    ErrorTerm_Rev_T_u0p16 = (uint16)(uint32)(Abslt_u32_s32((sint32)(uint32)MotAgXMecl_MotRev_T_u0p16 - (sint32)(uint32)MotAgYMecl_MotRev_T_u0p16)); 
	
        
    if( ErrorTerm_Rev_T_u0p16 > HALFREV_MOTREV_U0P16)
    {
        ErrorTerm_Rev_T_u0p16 = (uint16)((uint32)(HALFREV_MOTREV_U0P16*2U) - ErrorTerm_Rev_T_u0p16);
    }	
	
	return  ErrorTerm_Rev_T_u0p16;
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
