/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  AssiSumLim.c
 *        Config:  C:/_Synergy_Projects/Working/SF004B_AssiSumLim_Impl/tools/Component.dpa
 *     SW-C Type:  AssiSumLim
 *  Generated at:  Fri Nov 17 12:33:40 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <AssiSumLim>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017, 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : AssiSumLim.c
* Module Description: Implementation of Assist Summation and Limiting FDD SF004B
* Project           : CBD 
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 5 %
* %derived_by       : nz2796 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/08/15  1        SV        Initial Version                                                                 EA4#220
* 06/17/15  2        SV        Added "AssiSumLim" prefix to the "PullCmpLim" calibration                       EA4#220
* 05/04/17  3        ML        Added new input, multiple cals, tustin filter logic, and low pass filter.     EA4#11083 
*                              Removed requirement tags from code.      
* 06/12/17  4        SPP       Removed application data types                                                EA4#11055
* 11/16/17  5        ML        Update to fix Anomaly EA4#17417							                     EA4#17570
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
 * u10p6
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u11p5
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_AssiSumLim.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFil.h"
#include "NxtrFixdPt.h"
#include "NxtrIntrpn.h"
#include "ArchGlbPrm.h"
#include "SysGlbPrm.h"
 /******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read, Rte_Write,
                                              Rte_Call_GetNtcQlfrSts_Oper, and  Rte_Call_SetNtcSts_Oper */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/
#define CMDTHD_MOTNWTMTR_F32                    0.01F
#define LIMPERCCMPLHILIM_ULS_F32                1.0F
#define LIMPERCCMPLLOLIM_ULS_F32                0.0F
#define MOTTQZERO_MOTNWTMTR_F32                 0.0F
#define VEHSPDTHD_KPH_F32                       3.0F
#define FILTERCONSTANTNUMER_RADPERSEC_F32       1000.0F
#define FRQHILIM_HZ_F32                         1000.0F
#define FRQLOLIM_HZ_F32                         1.0F

#define PrmAssiSumLimBlndCmdSumFrqLimX_u10p6        (*(const Ary1D_u10p6_2 *)(Rte_Prm_AssiSumLimBlndCmdSumFrqLimX_Ary1D()))
#define PrmAssiSumLimBlndCmdSumFrqLimY_u10p6        (*(const Ary1D_u10p6_2 *)(Rte_Prm_AssiSumLimBlndCmdSumFrqLimY_Ary1D()))
#define PrmAssiSumLimHiSpdCmdSumFrqLimX_u11p5       (*(const Ary1D_u11p5_8 *)(Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimX_Ary1D()))
#define PrmAssiSumLimHiSpdCmdSumFrqLimY_u10p6       (*(const Ary1D_u10p6_8 *)(Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimY_Ary1D()))
#define PrmAssiSumLimLoSpdCmdSumFrqLimX_u11p5        (*(const Ary1D_u11p5_8 *)(Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimX_Ary1D()))
#define PrmAssiSumLimLoSpdCmdSumFrqLimY_u10p6       (*(const Ary1D_u10p6_8 *)(Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimY_Ary1D())) 

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/                                                     
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
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * u10p6: Integer in interval [0...65535]
 * u11p5: Integer in interval [0...65535]
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
 * Array Types:
 * ============
 * Ary1D_u10p6_2: Array with 2 element(s) of type u10p6
 * Ary1D_u10p6_8: Array with 8 element(s) of type u10p6
 * Ary1D_u11p5_8: Array with 8 element(s) of type u11p5
 *
 * Record Types:
 * =============
 * FilLpRec1: Record with elements
 *   FilSt of type float32
 *   FilGain of type float32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_CmdSumInpPrev(void)
 *   float32 *Rte_Pim_CmdSumOutpPrev(void)
 *   FilLpRec1 *Rte_Pim_MotVelFilLp(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_AssiSumLimMotVelLpFilFrq_Val(void)
 *   float32 Rte_Prm_AssiSumLimPullCmpLim_Val(void)
 *   uint16 Rte_Prm_AssiSumLimNtc0x0C4FailStep_Val(void)
 *   uint16 Rte_Prm_AssiSumLimNtc0x0C4PassStep_Val(void)
 *   boolean Rte_Prm_AssiSumLimCmdSumFilActv_Logl(void)
 *   u10p6 *Rte_Prm_AssiSumLimBlndCmdSumFrqLimX_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_2
 *   u10p6 *Rte_Prm_AssiSumLimBlndCmdSumFrqLimY_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_2
 *   u11p5 *Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_8
 *   u10p6 *Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimY_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_8
 *   u11p5 *Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_8
 *   u10p6 *Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimY_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_8
 *
 *********************************************************************************************************************/


#define AssiSumLim_START_SEC_CODE
#include "AssiSumLim_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiSumLimInit1
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
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AssiSumLimInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AssiSumLim_CODE) AssiSumLimInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AssiSumLimInit1
 *********************************************************************************************************************/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0C4, 0U, NTCSTS_PASSD, Rte_Prm_AssiSumLimNtc0x0C4PassStep_Val());
    
    FilLpInit(0.0F, Rte_Prm_AssiSumLimMotVelLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_MotVelFilLp());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiSumLimPer1
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
 *   Std_ReturnType Rte_Read_AssiCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DampgCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotActvCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotAssiSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotDampgCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqLoaMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotTqCmdLimDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotTqCmdOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionCentrLrnCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionCentrLrnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_PullCmpCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PwrLimrRednFac_Val(float32 *data)
 *   Std_ReturnType Rte_Read_RtnCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_StallMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ThermMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ThermRednFac_Val(float32 *data)
 *   Std_ReturnType Rte_Read_TqLoaCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_TqSteerMtgtnCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotTqCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqCmdLimdPreStall_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqCmdLimrMin_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqCmdPreLim_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysProtnRednFac_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmd(void)
 *   boolean Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmdEna(void)
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
 * Symbol: AssiSumLimPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AssiSumLim_CODE) AssiSumLimPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AssiSumLimPer1
 *********************************************************************************************************************/
    
    /* Inputs */
    VAR(float32, AUTOMATIC) AssiCmd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) DampgCmd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) EotActvCmd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) EotAssiSca_Uls_T_f32;
    VAR(float32, AUTOMATIC) EotDampgCmd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) EotMotTqLim_MotNwtMtr_T_f32;
    VAR(boolean, AUTOMATIC) HwTqLoaMtgtnEna_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) MotTqCmdLimDi_Cnt_T_lgc;
    VAR(float32, AUTOMATIC) MotTqCmdOvrl_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) PinCtrLrnCmd_MotNwtMtr_T_f32;
    VAR(boolean, AUTOMATIC) PinCtrLrnEna_Cnt_T_lgc;
    VAR(float32, AUTOMATIC) PullCmpCmd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) PwrLimrRednFac_Uls_T_f32;
    VAR(float32, AUTOMATIC) RtnCmd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) StallMotTqLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) SysMotTqCmdSca_Uls_T_f32;
    VAR(float32, AUTOMATIC) ThermMotTqLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) ThermRednFac_Uls_T_f32;
    VAR(float32, AUTOMATIC) TqLoaCmd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) TqSteerMtgtnCmd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
    VAR(float32, AUTOMATIC) VehSpdMotTqLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) WhlImbRejctnCmd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MotVelMrf_MotRadPerSec_T_f32;
    
    /* Safety Check outputs */
    VAR(boolean, AUTOMATIC) ManTqCmdEnaOut_Cnt_T_lgc;
    VAR(float32, AUTOMATIC) ManTqCmdOut_MotNwtMtr_T_f32;
    VAR(boolean, AUTOMATIC) PinCrLnEnaOut_Cnt_T_lgc;
    VAR(float32, AUTOMATIC) PinCrLnCmdOut_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) PullCmpCmdOut_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) TqSteerMtgtnCmdOut_MotNwtMtr_T_f32;
    
    /* CmdSummation output */
    VAR(float32, AUTOMATIC) CmdSum_MotNwtMtr_T_f32;
    
    /* CmdSumFilter Variables */
    VAR(uint16, AUTOMATIC) MotVelMrfFild_MotRadPerSec_T_u11p5;
    VAR(uint16, AUTOMATIC) HiSpdCmdSumFrq_Hz_T_u10p6;
    VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u10p6;
    VAR(uint16, AUTOMATIC) BlndCmdSumFrqFac_Cnt_T_u10p6;
    VAR(uint16, AUTOMATIC) LoSpdCmdSumFrq_Hz_T_u10p6;
    VAR(float32, AUTOMATIC) HiSpdCmdSumFrq_Hz_T_f32;
    VAR(float32, AUTOMATIC) MotVelMrfFild_MotRadPerSec_T_f32;    
    VAR(float32, AUTOMATIC) LoSpdCmdSumFrq_Hz_T_f32;
    VAR(float32, AUTOMATIC) BlndCmdSumFrqFac_Cnt_T_f32;
    VAR(float32, AUTOMATIC) CombdSpdCmdSumFrq_Hz_T_f32;
    VAR(float32, AUTOMATIC) CutOffFrq_RadPerSec_T_f32;
    VAR(float32, AUTOMATIC) TermN_Uls_T_f32;
    VAR(float32, AUTOMATIC) TermD_Uls_T_f32;
    VAR(float32, AUTOMATIC) CmdSumFild_MotNwtMtr_T_f32;
    
    /* CmdSelection variables*/
    VAR(float32, AUTOMATIC) PreCmdSlctnTq_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) PreLimTq_MotNwtMtr_T_f32;
    
    /* CmdLimiting variables */
    VAR(float32, AUTOMATIC) OverallCmdLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) TmpPreLimForStall_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) TmpOverallCmdLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) PreLimForStall_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) TqLimMinv_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) TqCmdLimd_MotNwtMtr_T_f32;
    
    /* Outputs */
    VAR(float32, AUTOMATIC) MotTqCmd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MotTqCmdLimdPreStall_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MotTqCmdLimrMin_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MotTqCmdPreLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) SysProtnRednFac_Uls_T_f32; 
    
	VAR(SigQlfr1, AUTOMATIC) UnintendedLrnPinCentr_Cnt_T_enum;
	
    /*read Inputs */
    (void)Rte_Read_AssiCmd_Val(&AssiCmd_MotNwtMtr_T_f32);               
    (void)Rte_Read_DampgCmd_Val(&DampgCmd_MotNwtMtr_T_f32);             
    (void)Rte_Read_EotActvCmd_Val(&EotActvCmd_MotNwtMtr_T_f32);         
    (void)Rte_Read_EotAssiSca_Val(&EotAssiSca_Uls_T_f32);               
    (void)Rte_Read_EotDampgCmd_Val(&EotDampgCmd_MotNwtMtr_T_f32);       
    (void)Rte_Read_EotMotTqLim_Val(&EotMotTqLim_MotNwtMtr_T_f32);       
    (void)Rte_Read_HwTqLoaMtgtnEna_Logl(&HwTqLoaMtgtnEna_Cnt_T_lgc);    
    (void)Rte_Read_MotTqCmdLimDi_Logl(&MotTqCmdLimDi_Cnt_T_lgc);        
    (void)Rte_Read_MotTqCmdOvrl_Val(&MotTqCmdOvrl_MotNwtMtr_T_f32);     
    (void)Rte_Read_PinionCentrLrnCmd_Val(&PinCtrLrnCmd_MotNwtMtr_T_f32);
    (void)Rte_Read_PinionCentrLrnEna_Logl(&PinCtrLrnEna_Cnt_T_lgc);     
    (void)Rte_Read_PullCmpCmd_Val(&PullCmpCmd_MotNwtMtr_T_f32);         
    (void)Rte_Read_PwrLimrRednFac_Val(&PwrLimrRednFac_Uls_T_f32);       
    (void)Rte_Read_RtnCmd_Val(&RtnCmd_MotNwtMtr_T_f32);                 
    (void)Rte_Read_StallMotTqLim_Val(&StallMotTqLim_MotNwtMtr_T_f32);   
    (void)Rte_Read_SysMotTqCmdSca_Val(&SysMotTqCmdSca_Uls_T_f32);       
    (void)Rte_Read_ThermMotTqLim_Val(&ThermMotTqLim_MotNwtMtr_T_f32);   
    (void)Rte_Read_ThermRednFac_Val(&ThermRednFac_Uls_T_f32);           
    (void)Rte_Read_TqLoaCmd_Val(&TqLoaCmd_MotNwtMtr_T_f32);             
    (void)Rte_Read_TqSteerMtgtnCmd_Val(&TqSteerMtgtnCmd_MotNwtMtr_T_f32);
    (void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);                     
    (void)Rte_Read_VehSpdMotTqLim_Val(&VehSpdMotTqLim_MotNwtMtr_T_f32); 
    (void)Rte_Read_WhlImbRejctnCmd_Val(&WhlImbRejctnCmd_MotNwtMtr_T_f32);
    (void)Rte_Read_MotVelMrf_Val(&MotVelMrf_MotRadPerSec_T_f32);
      
    /******* Safety Checks *******/
    /* Manual Torque Command  and Learn Pinion Centre */
	if(VehSpd_Kph_T_f32 > VEHSPDTHD_KPH_F32) 
    {
        ManTqCmdEnaOut_Cnt_T_lgc = FALSE;
        ManTqCmdOut_MotNwtMtr_T_f32 = MOTTQZERO_MOTNWTMTR_F32;  
		
		if((Abslt_f32_f32(PinCtrLrnCmd_MotNwtMtr_T_f32) > CMDTHD_MOTNWTMTR_F32) ||
			(PinCtrLrnEna_Cnt_T_lgc == TRUE))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0C4, 0U, NTCSTS_PREFAILD, Rte_Prm_AssiSumLimNtc0x0C4FailStep_Val());  
		}
		else
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0C4, 0U, NTCSTS_PREPASSD, Rte_Prm_AssiSumLimNtc0x0C4PassStep_Val());  
		} 
				
    }
    else
    {
        ManTqCmdEnaOut_Cnt_T_lgc = Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmdEna();
        ManTqCmdOut_MotNwtMtr_T_f32 = Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmd();
		
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0C4, 0U, NTCSTS_PREPASSD, Rte_Prm_AssiSumLimNtc0x0C4PassStep_Val());		
    }
	
	(void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X0C4, &UnintendedLrnPinCentr_Cnt_T_enum);
    
    if(UnintendedLrnPinCentr_Cnt_T_enum == SIGQLFR_FAILD)
    {
        PinCrLnEnaOut_Cnt_T_lgc = FALSE; 
        PinCrLnCmdOut_MotNwtMtr_T_f32 = MOTTQZERO_MOTNWTMTR_F32; 

    }
    else
    {
        PinCrLnEnaOut_Cnt_T_lgc = PinCtrLrnEna_Cnt_T_lgc;
        PinCrLnCmdOut_MotNwtMtr_T_f32 = PinCtrLrnCmd_MotNwtMtr_T_f32;
    }
	    
    /* Pull Compensation */  
    PullCmpCmdOut_MotNwtMtr_T_f32 = Lim_f32(PullCmpCmd_MotNwtMtr_T_f32,-Rte_Prm_AssiSumLimPullCmpLim_Val(),Rte_Prm_AssiSumLimPullCmpLim_Val());
    
    /* Torque Steer Mitigation */    
    TqSteerMtgtnCmdOut_MotNwtMtr_T_f32 = Lim_f32(TqSteerMtgtnCmd_MotNwtMtr_T_f32,-Rte_Prm_AssiSumLimPullCmpLim_Val(),Rte_Prm_AssiSumLimPullCmpLim_Val());
    
    /******* CmdSummation *******/
    CmdSum_MotNwtMtr_T_f32 =  (AssiCmd_MotNwtMtr_T_f32 * EotAssiSca_Uls_T_f32) + 
                               (-RtnCmd_MotNwtMtr_T_f32) +
                               (-DampgCmd_MotNwtMtr_T_f32) +
                               (-EotDampgCmd_MotNwtMtr_T_f32) +
                               WhlImbRejctnCmd_MotNwtMtr_T_f32 +
                               TqSteerMtgtnCmdOut_MotNwtMtr_T_f32 +
                               PullCmpCmdOut_MotNwtMtr_T_f32 +
                               EotActvCmd_MotNwtMtr_T_f32;

    /******* CmdSumFilter *******/
    
    if(Rte_Prm_AssiSumLimCmdSumFilActv_Logl() == TRUE)
    {
       /* Known overflow issue has been addressed in MDD under CR EA4#12283 due to incorrect MoveVelFilLp.EngMax in DataDict.m */
       MotVelMrfFild_MotRadPerSec_T_f32 = Abslt_f32_f32(FilLpUpdOutp_f32(MotVelMrf_MotRadPerSec_T_f32, Rte_Pim_MotVelFilLp()));
       MotVelMrfFild_MotRadPerSec_T_u11p5 = FloatToFixd_u16_f32(MotVelMrfFild_MotRadPerSec_T_f32, NXTRFIXDPT_FLOATTOP5_ULS_F32);
       
       /* HighSpeed */
       
       HiSpdCmdSumFrq_Hz_T_u10p6 = LnrIntrpn_u16_u16VariXu16VariY(PrmAssiSumLimHiSpdCmdSumFrqLimX_u11p5,
                                                                  PrmAssiSumLimHiSpdCmdSumFrqLimY_u10p6,
                                                                  (uint16)TblSize_m(PrmAssiSumLimHiSpdCmdSumFrqLimX_u11p5),
                                                                  MotVelMrfFild_MotRadPerSec_T_u11p5);
       HiSpdCmdSumFrq_Hz_T_f32 = FixdToFloat_f32_u16(HiSpdCmdSumFrq_Hz_T_u10p6, NXTRFIXDPT_P6TOFLOAT_ULS_F32);
       
       /* LowSpeed */
       
       LoSpdCmdSumFrq_Hz_T_u10p6 = LnrIntrpn_u16_u16VariXu16VariY(PrmAssiSumLimLoSpdCmdSumFrqLimX_u11p5,
                                                                  PrmAssiSumLimLoSpdCmdSumFrqLimY_u10p6,
                                                                  (uint16)TblSize_m(PrmAssiSumLimLoSpdCmdSumFrqLimX_u11p5),
                                                                  MotVelMrfFild_MotRadPerSec_T_u11p5);
       LoSpdCmdSumFrq_Hz_T_f32 = FixdToFloat_f32_u16(LoSpdCmdSumFrq_Hz_T_u10p6, NXTRFIXDPT_P6TOFLOAT_ULS_F32);
       
       VehSpd_Kph_T_u10p6 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP6_ULS_F32);
       BlndCmdSumFrqFac_Cnt_T_u10p6 = LnrIntrpn_u16_u16VariXu16VariY(PrmAssiSumLimBlndCmdSumFrqLimX_u10p6,
                                                                 PrmAssiSumLimBlndCmdSumFrqLimY_u10p6,
                                                                 (uint16)TblSize_m(PrmAssiSumLimBlndCmdSumFrqLimX_u10p6),
                                                                 VehSpd_Kph_T_u10p6);
       BlndCmdSumFrqFac_Cnt_T_f32 = FixdToFloat_f32_u16(BlndCmdSumFrqFac_Cnt_T_u10p6, NXTRFIXDPT_P6TOFLOAT_ULS_F32);
       
       CombdSpdCmdSumFrq_Hz_T_f32 = Blnd_f32(HiSpdCmdSumFrq_Hz_T_f32, LoSpdCmdSumFrq_Hz_T_f32, BlndCmdSumFrqFac_Cnt_T_f32);
       CombdSpdCmdSumFrq_Hz_T_f32 = Lim_f32(CombdSpdCmdSumFrq_Hz_T_f32, FRQLOLIM_HZ_F32, FRQHILIM_HZ_F32);
       
       CutOffFrq_RadPerSec_T_f32 = CombdSpdCmdSumFrq_Hz_T_f32 * ARCHGLBPRM_2PI_ULS_F32;
       
       /* Tustin Filter */
       
       TermN_Uls_T_f32 = (FILTERCONSTANTNUMER_RADPERSEC_F32 / CutOffFrq_RadPerSec_T_f32) - 1.0F;
       TermD_Uls_T_f32 = 1.0F / (1.0F + (FILTERCONSTANTNUMER_RADPERSEC_F32 / CutOffFrq_RadPerSec_T_f32));
       
       CmdSumFild_MotNwtMtr_T_f32 = ((CmdSum_MotNwtMtr_T_f32 + *Rte_Pim_CmdSumInpPrev()) + (TermN_Uls_T_f32 * (*Rte_Pim_CmdSumOutpPrev()))) * TermD_Uls_T_f32;
       *Rte_Pim_CmdSumInpPrev() = CmdSum_MotNwtMtr_T_f32;
       *Rte_Pim_CmdSumOutpPrev() = CmdSumFild_MotNwtMtr_T_f32;
   
    }
    else
    {
        CmdSumFild_MotNwtMtr_T_f32 = CmdSum_MotNwtMtr_T_f32;
    }
    
    /******* CmdSelection *******/                         
    if(ManTqCmdEnaOut_Cnt_T_lgc == TRUE)    
    {
        PreCmdSlctnTq_MotNwtMtr_T_f32 = ManTqCmdOut_MotNwtMtr_T_f32;
    }
    else if (PinCrLnEnaOut_Cnt_T_lgc == TRUE)
    {
        PreCmdSlctnTq_MotNwtMtr_T_f32 = PinCrLnCmdOut_MotNwtMtr_T_f32;
    }
    else if (HwTqLoaMtgtnEna_Cnt_T_lgc == TRUE)
    {
        PreCmdSlctnTq_MotNwtMtr_T_f32 = TqLoaCmd_MotNwtMtr_T_f32;
    }
    else
    {
        PreCmdSlctnTq_MotNwtMtr_T_f32 = CmdSumFild_MotNwtMtr_T_f32;
    }
    PreLimTq_MotNwtMtr_T_f32 = PreCmdSlctnTq_MotNwtMtr_T_f32 + MotTqCmdOvrl_MotNwtMtr_T_f32;     
 
    
    /******* CmdLimiting *******/
    /* PreLimForStall */
    TmpPreLimForStall_MotNwtMtr_T_f32 = Min_f32(EotMotTqLim_MotNwtMtr_T_f32,VehSpdMotTqLim_MotNwtMtr_T_f32); 
    PreLimForStall_MotNwtMtr_T_f32 = Min_f32(Abslt_f32_f32(PreLimTq_MotNwtMtr_T_f32),TmpPreLimForStall_MotNwtMtr_T_f32);  

    /* OverallCmdLim */
    TmpOverallCmdLim_MotNwtMtr_T_f32 = Min_f32(StallMotTqLim_MotNwtMtr_T_f32,ThermMotTqLim_MotNwtMtr_T_f32);
    OverallCmdLim_MotNwtMtr_T_f32 = Min_f32(PreLimForStall_MotNwtMtr_T_f32,TmpOverallCmdLim_MotNwtMtr_T_f32);
    
    /* TqLimMin */
    TqLimMinv_MotNwtMtr_T_f32 = Min_f32(TmpPreLimForStall_MotNwtMtr_T_f32,TmpOverallCmdLim_MotNwtMtr_T_f32);
    
    /* TqCmdLimd */
    if(MotTqCmdLimDi_Cnt_T_lgc == TRUE)
    {
        TqCmdLimd_MotNwtMtr_T_f32 = (Abslt_f32_f32(PreLimTq_MotNwtMtr_T_f32)) * (float32)(Sign_s08_f32(PreLimTq_MotNwtMtr_T_f32));
    }
    else
    {
        TqCmdLimd_MotNwtMtr_T_f32 = OverallCmdLim_MotNwtMtr_T_f32 * (float32)(Sign_s08_f32(PreLimTq_MotNwtMtr_T_f32));
    }

    /******* Outputs Calculations *******/
    
    SysProtnRednFac_Uls_T_f32 = Lim_f32((Max_f32(ThermRednFac_Uls_T_f32,PwrLimrRednFac_Uls_T_f32)),LIMPERCCMPLLOLIM_ULS_F32,LIMPERCCMPLHILIM_ULS_F32);
    MotTqCmdPreLim_MotNwtMtr_T_f32 = Lim_f32(PreLimTq_MotNwtMtr_T_f32,SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32,SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
    MotTqCmdLimdPreStall_MotNwtMtr_T_f32 = Lim_f32(PreLimForStall_MotNwtMtr_T_f32,MOTTQZERO_MOTNWTMTR_F32,SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
    MotTqCmdLimrMin_MotNwtMtr_T_f32 = Lim_f32(TqLimMinv_MotNwtMtr_T_f32,MOTTQZERO_MOTNWTMTR_F32,SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
    MotTqCmd_MotNwtMtr_T_f32 = Lim_f32((TqCmdLimd_MotNwtMtr_T_f32 * SysMotTqCmdSca_Uls_T_f32),SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32,SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
    
    (void)Rte_Write_MotTqCmd_Val(MotTqCmd_MotNwtMtr_T_f32);                         
    (void)Rte_Write_MotTqCmdLimdPreStall_Val(MotTqCmdLimdPreStall_MotNwtMtr_T_f32); 
    (void)Rte_Write_MotTqCmdLimrMin_Val(MotTqCmdLimrMin_MotNwtMtr_T_f32);           
    (void)Rte_Write_MotTqCmdPreLim_Val(MotTqCmdPreLim_MotNwtMtr_T_f32);             
    (void)Rte_Write_SysProtnRednFac_Val(SysProtnRednFac_Uls_T_f32);                 
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetManTqCmd_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetManTqCmd>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmd(float32 data)
 *   void Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmdEna(boolean data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SetManTqCmd_Oper(float32 ManTqCmd_Arg, boolean ManTqCmdEna_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SetManTqCmd_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetManTqCmd_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, AssiSumLim_CODE) SetManTqCmd_Oper(float32 ManTqCmd_Arg, boolean ManTqCmdEna_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetManTqCmd_Oper (returns application error)
 *********************************************************************************************************************/
 
    VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;   
    VAR(Std_ReturnType, AUTOMATIC) ManTqCmdRtn_Uls_T_enum;
    
    (void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);
    
    if(ManTqCmdEna_Arg == TRUE)
    {
        if(VehSpd_Kph_T_f32 < VEHSPDTHD_KPH_F32)
        {
            Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmd(ManTqCmd_Arg);
            Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmdEna(TRUE);
            ManTqCmdRtn_Uls_T_enum =  E_OK;  
        } 
        else
        {
            Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmd(MOTTQZERO_MOTNWTMTR_F32);
            Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmdEna(FALSE);
            ManTqCmdRtn_Uls_T_enum = E_NOT_OK;  
            
        } 
    }
    else
    {       
        Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmd(MOTTQZERO_MOTNWTMTR_F32);
        Rte_IrvWrite_SetManTqCmd_Oper_ProcdManTqCmdEna(FALSE);
        ManTqCmdRtn_Uls_T_enum =  E_OK;   
    } 
    
    return ManTqCmdRtn_Uls_T_enum;
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define AssiSumLim_STOP_SEC_CODE
#include "AssiSumLim_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
