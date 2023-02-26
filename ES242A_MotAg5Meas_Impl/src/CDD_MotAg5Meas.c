/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_MotAg5Meas.c
 *        Config:  C:/_EA4SynWrkgCpy/ES242A_MotAg5Meas_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_MotAg5Meas
 *  Generated at:  Mon Oct 16 11:03:35 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_MotAg5Meas>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAg5Meas.c
* Module Description: MotAg5Meas function shall compute motor angle from Sine and Cosine ADC signals
* Project           : CBD
* Author            : Shruthi Raghavan
***********************************************************************************************************************
* Version Control:
* %version:            2 %
* %derived_by:         nz2554 %
*----------------------------------------------------------------------------------------------------------------------
*   Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  ---------- --------------------------------------------------------------------------- ----------
* 07/24/17   1        Shruthi   Initial Version                                                             EA4#7274
* 10/16/17   2        Shruthi   Updated to change the input to 4ms periodic to be the Raw Mot angle signal
*                               without polarity correction to fix anomaly EA4#15926                        EA4#15815
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
 * s2p13
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * sm6p13
 *   sint8 represents integers with a minimum value of -128 and a maximum value of 127.
 *      The order-relation on sint8 is: x < y if y - x is positive.
 *      sint8 has a lexical representation consisting of an optional sign followed 
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is 
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, 12678, +10000.
 *
 * u0p16
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u1p15
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u3p13
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_CDD_MotAg5Meas.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"
#include "NxtrFil.h"
#include "ArchGlbPrm.h"
#include "CDD_MotAg5Meas_Cfg_private.h"

/*MISRA-C:2004 Rule 19.1  [NXTRDEV 19.1.1 ] : AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/*MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1] : There is no appropriate action to take on the return value for:
                                              Rte_Read, Rte_Write, Rte_IrvRead, SetNtcStsAndSnpshtData, GetNtcQlfrSts, Rte_IrvWrite,
                                              SetRamBlockStatus, GetErrorStatus*/
/*MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2] : Server runnable is a void functon; Rte generation adds standard return type but no error information is returned.
                                              CnvSnpshtData_logl, CnvSnpshtData_f32*/

#define RTPRMCON_ULS_F32                  0.5F
#define MOTAGADCSIGMINAMP_VOLT_F32        0.25F
#define MOTAGADCSIGMAXAMP_VOLT_F32        2.5F
#define RTOFFSLOLIM_VOLT_F32              0.25F
#define RTOFFSHILIM_VOLT_F32              3.75F
#define SCAGFAC_ULS_F32                   2.0F
#define RTAMPRECPRLOLIM_IVSVOLT_F32       0.32F
#define RTAMPRECPRHILIM_IVSVOLT_F32       5.1F
#define NOMOFFSVAL_ULS_F32                1.65F

#define HRMNCTBLSIZE_CNT_U16              ((uint16)TblSize_m(Rte_Pim_MotAg5EolPrm()->SinHrmncTbl))
#define ADCLORNGFAILDBIT_CNT_U08          0U
#define ADCHIRNGFAILDBIT_CNT_U08          1U
#define NVMFAILRBIT_CNT_U08               2U
#define ADCFAILRBIT_CNT_U08               3U
#define MOTAG5PRTCLFLTPASSSTEP_CNT_U16    655U
#define MOTAG5PRTCLFLTFAILSTEP_CNT_U16    3276U

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
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * s2p13: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * sm6p13: Integer in interval [-128...127]
 * u0p16: Integer in interval [0...65535]
 * u1p15: Integer in interval [0...65535]
 * u3p13: Integer in interval [0...65535]
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
 * Array Types:
 * ============
 * Ary1D_sm6p13_144: Array with 144 element(s) of type sm6p13
 *
 * Record Types:
 * =============
 * FilLpRec1: Record with elements
 *   FilSt of type float32
 *   FilGain of type float32
 * MotAgEolPrmRec1: Record with elements
 *   SinOffs of type u3p13
 *   CosOffs of type u3p13
 *   SinAmpRecpr of type u3p13
 *   CosAmpRecpr of type u3p13
 *   SinDelta of type s2p13
 *   SinHrmncTbl of type Ary1D_sm6p13_144
 *   CosHrmncTbl of type Ary1D_sm6p13_144
 *   SinGainCorrd of type u1p15
 *   CosGainCorrd of type u1p15
 *   SinOffsCorrd of type s2p13
 *   CosOffsCorrd of type s2p13
 *   CosDeltaRecpr of type u3p13
 * MotAgRtPrmRec1: Record with elements
 *   SinRtOffs of type float32
 *   SinRtAmpRecpr of type float32
 *   CosRtOffs of type float32
 *   CosRtAmpRecpr of type float32
 *   SinGainCorrd of type float32
 *   CosGainCorrd of type float32
 *   SinOffsCorrd of type float32
 *   CosOffsCorrd of type float32
 *   CosSinNomRatio of type float32
 *   SinCosNomRatio of type float32
 *   RtToNomRatioLoLim of type float32
 *   RtToNomRatioHiLim of type float32
 *   PrevSinRtOffs of type float32
 *   PrevCosRtOffs of type float32
 * MotAgStVariRec1: Record with elements
 *   MotAgSinMax of type float32
 *   MotAgSinMin of type float32
 *   MotAgCosMax of type float32
 *   MotAgCosMin of type float32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotAg5MeasAmpVal(void)
 *   u0p16 *Rte_Pim_PrevMotAg5Mecl(void)
 *   uint8 *Rte_Pim_MotAg5PrevRollgCntr(void)
 *   boolean *Rte_Pim_MotAg5NvmFltEna(void)
 *   FilLpRec1 *Rte_Pim_MotAg5CosMaxLpFil(void)
 *   FilLpRec1 *Rte_Pim_MotAg5CosMinLpFil(void)
 *   MotAgEolPrmRec1 *Rte_Pim_MotAg5EolPrm(void)
 *   MotAgRtPrmRec1 *Rte_Pim_MotAg5RtPrm(void)
 *   FilLpRec1 *Rte_Pim_MotAg5SinMaxLpFil(void)
 *   FilLpRec1 *Rte_Pim_MotAg5SinMinLpFil(void)
 *   MotAgStVariRec1 *Rte_Pim_MotAg5StVari(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotAg5MeasAmpSqdMaxThd_Val(void)
 *   float32 Rte_Prm_MotAg5MeasAmpSqdMinThd_Val(void)
 *   float32 Rte_Prm_MotAg5MeasLpFilFrq_Val(void)
 *   float32 Rte_Prm_MotAg5MeasRtAmpRecprLim_Val(void)
 *   float32 Rte_Prm_MotAg5MeasRtFilEnaThd_Val(void)
 *   float32 Rte_Prm_MotAg5MeasRtMotVelFilEnaThd_Val(void)
 *   float32 Rte_Prm_MotAg5MeasRtOffsLim_Val(void)
 *   float32 Rte_Prm_MotAg5MeasRtToNomRatLim_Val(void)
 *   u0p16 Rte_Prm_MotAg5MeasOffs_Val(void)
 *
 *********************************************************************************************************************/


#define CDD_MotAg5Meas_START_SEC_CODE
#include "CDD_MotAg5Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg5EolPrmRead_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <MotAg5EolPrmRead>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void MotAg5EolPrmRead_Oper(MotAgEolPrmRec1 *MotAgEolPrmData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAg5EolPrmRead_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotAg5Meas_CODE) MotAg5EolPrmRead_Oper(P2VAR(MotAgEolPrmRec1, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_VAR) MotAgEolPrmData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAg5EolPrmRead_Oper
 *********************************************************************************************************************/

 VAR(uint16 , AUTOMATIC) LoopCnt_Cnt_T_u16;

 MotAgEolPrmData_Arg->SinOffs       = Rte_Pim_MotAg5EolPrm()->SinOffs;
 MotAgEolPrmData_Arg->CosOffs       = Rte_Pim_MotAg5EolPrm()->CosOffs;
 MotAgEolPrmData_Arg->SinAmpRecpr   = Rte_Pim_MotAg5EolPrm()->SinAmpRecpr;
 MotAgEolPrmData_Arg->CosAmpRecpr   = Rte_Pim_MotAg5EolPrm()->CosAmpRecpr;
 MotAgEolPrmData_Arg->SinDelta      = Rte_Pim_MotAg5EolPrm()->SinDelta;
 for(LoopCnt_Cnt_T_u16 = 0U; LoopCnt_Cnt_T_u16 < HRMNCTBLSIZE_CNT_U16; LoopCnt_Cnt_T_u16++)
 {
   (MotAgEolPrmData_Arg->SinHrmncTbl)[LoopCnt_Cnt_T_u16] = (Rte_Pim_MotAg5EolPrm()->SinHrmncTbl)[LoopCnt_Cnt_T_u16];
   (MotAgEolPrmData_Arg->CosHrmncTbl)[LoopCnt_Cnt_T_u16] = (Rte_Pim_MotAg5EolPrm()->CosHrmncTbl)[LoopCnt_Cnt_T_u16];
 }
 MotAgEolPrmData_Arg->SinGainCorrd  = Rte_Pim_MotAg5EolPrm()->SinGainCorrd;
 MotAgEolPrmData_Arg->CosGainCorrd  = Rte_Pim_MotAg5EolPrm()->CosGainCorrd;
 MotAgEolPrmData_Arg->SinOffsCorrd  = Rte_Pim_MotAg5EolPrm()->SinOffsCorrd;
 MotAgEolPrmData_Arg->CosOffsCorrd  = Rte_Pim_MotAg5EolPrm()->CosOffsCorrd;
 MotAgEolPrmData_Arg->CosDeltaRecpr = Rte_Pim_MotAg5EolPrm()->CosDeltaRecpr;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg5EolPrmWr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <MotAg5EolPrmWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotAg5EolPrm_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void MotAg5EolPrmWr_Oper(const MotAgEolPrmRec1 *MotAgEolPrmData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAg5EolPrmWr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotAg5Meas_CODE) MotAg5EolPrmWr_Oper(P2CONST(MotAgEolPrmRec1, AUTOMATIC, RTE_CDD_MOTAG5MEAS_APPL_DATA) MotAgEolPrmData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAg5EolPrmWr_Oper
 *********************************************************************************************************************/
VAR(uint16 , AUTOMATIC) LoopCnt_Cnt_T_u16;

 Rte_Pim_MotAg5EolPrm()->SinOffs     = MotAgEolPrmData_Arg->SinOffs;
 Rte_Pim_MotAg5EolPrm()->CosOffs     = MotAgEolPrmData_Arg->CosOffs;
 Rte_Pim_MotAg5EolPrm()->SinAmpRecpr = MotAgEolPrmData_Arg->SinAmpRecpr;
 Rte_Pim_MotAg5EolPrm()->CosAmpRecpr = MotAgEolPrmData_Arg->CosAmpRecpr;
 Rte_Pim_MotAg5EolPrm()->SinDelta    = MotAgEolPrmData_Arg->SinDelta;
 for(LoopCnt_Cnt_T_u16 = 0U; LoopCnt_Cnt_T_u16 < HRMNCTBLSIZE_CNT_U16; LoopCnt_Cnt_T_u16++)
 {
   (Rte_Pim_MotAg5EolPrm()->SinHrmncTbl)[LoopCnt_Cnt_T_u16] = (MotAgEolPrmData_Arg->SinHrmncTbl)[LoopCnt_Cnt_T_u16];
   (Rte_Pim_MotAg5EolPrm()->CosHrmncTbl)[LoopCnt_Cnt_T_u16] = (MotAgEolPrmData_Arg->CosHrmncTbl)[LoopCnt_Cnt_T_u16];
 }
 Rte_Pim_MotAg5EolPrm()->SinGainCorrd  = MotAgEolPrmData_Arg->SinGainCorrd;
 Rte_Pim_MotAg5EolPrm()->CosGainCorrd  = MotAgEolPrmData_Arg->CosGainCorrd;
 Rte_Pim_MotAg5EolPrm()->SinOffsCorrd  = MotAgEolPrmData_Arg->SinOffsCorrd;
 Rte_Pim_MotAg5EolPrm()->CosOffsCorrd  = MotAgEolPrmData_Arg->CosOffsCorrd;
 Rte_Pim_MotAg5EolPrm()->CosDeltaRecpr = MotAgEolPrmData_Arg->CosDeltaRecpr;

 (void)Rte_Call_MotAg5EolPrm_SetRamBlockStatus(TRUE);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg5MeasInit1
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
 *   Std_ReturnType Rte_Call_MotAg5EolPrm_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotAg5StVari_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAg5MeasInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotAg5Meas_CODE) MotAg5MeasInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAg5MeasInit1
 *********************************************************************************************************************/
    VAR(NvM_RequestResultType, AUTOMATIC) EolPrmNvmErrSts_Cnt_T_enum;
    VAR(NvM_RequestResultType, AUTOMATIC) StVariNvmErrSts_Cnt_T_enum;

    VAR(float32, AUTOMATIC) SinAmpRecpr_IvsVolt_T_f32;
    VAR(float32, AUTOMATIC) CosAmpRecpr_IvsVolt_T_f32;
    VAR(float32, AUTOMATIC) SinOffs_Volt_T_f32;
    VAR(float32, AUTOMATIC) CosOffs_Volt_T_f32;
    VAR(float32, AUTOMATIC) SinMaxStVari_Volt_T_f32;
    VAR(float32, AUTOMATIC) SinMinStVari_Volt_T_f32;
    VAR(float32, AUTOMATIC) CosMaxStVari_Volt_T_f32;
    VAR(float32, AUTOMATIC) CosMinStVari_Volt_T_f32;
    VAR(float32, AUTOMATIC) StordSinRtOffs_Volt_T_f32;
    VAR(float32, AUTOMATIC) SinRtOffs_Volt_T_f32;
    VAR(float32, AUTOMATIC) StordCosRtOffs_Volt_T_f32;
    VAR(float32, AUTOMATIC) CosRtOffs_Volt_T_f32;
    VAR(float32, AUTOMATIC) TotSinAmp_Volt_T_f32;
    VAR(float32, AUTOMATIC) TotCosAmp_Volt_T_f32;
    VAR(float32, AUTOMATIC) SinAmpRecprLimd_IvsVolt_T_f32;
    VAR(float32, AUTOMATIC) SinRtAmpRecpr_IvsVolt_T_f32;
    VAR(float32, AUTOMATIC) RtToNomRatioLimd_Uls_T_f32;

    VAR(uint16 , AUTOMATIC) LoopCnt_Cnt_T_u16;

    (void)Rte_Call_MotAg5EolPrm_GetErrorStatus(&EolPrmNvmErrSts_Cnt_T_enum);

    if(EolPrmNvmErrSts_Cnt_T_enum == NVM_REQ_OK) /*** MotAg5MeasInit1/NVM_Ok ***/
    {
        /***----[Start of '/MotAg5MeasInit1/NVM_Ok']-----***/
        *Rte_Pim_MotAg5NvmFltEna() = FALSE;
        SinAmpRecpr_IvsVolt_T_f32 = FixdToFloat_f32_u16(Rte_Pim_MotAg5EolPrm()->SinAmpRecpr, NXTRFIXDPT_P13TOFLOAT_ULS_F32);
        CosAmpRecpr_IvsVolt_T_f32 = FixdToFloat_f32_u16(Rte_Pim_MotAg5EolPrm()->CosAmpRecpr, NXTRFIXDPT_P13TOFLOAT_ULS_F32);
        SinOffs_Volt_T_f32        = FixdToFloat_f32_u16(Rte_Pim_MotAg5EolPrm()->SinOffs    , NXTRFIXDPT_P13TOFLOAT_ULS_F32);
        CosOffs_Volt_T_f32        = FixdToFloat_f32_u16(Rte_Pim_MotAg5EolPrm()->CosOffs    , NXTRFIXDPT_P13TOFLOAT_ULS_F32);
        (void)Rte_Call_MotAg5StVari_GetErrorStatus(&StVariNvmErrSts_Cnt_T_enum);
        if(StVariNvmErrSts_Cnt_T_enum != NVM_REQ_OK)
        {
            /***----[Start of '/MotAg5MeasInit1/NVM_Ok/NVM_NOK ']-----***/
            /*In the event of a NVM failure use Eol Values to update the St Variables.*/
                Rte_Pim_MotAg5StVari()->MotAgSinMax = 1.0F/SinAmpRecpr_IvsVolt_T_f32;
                Rte_Pim_MotAg5StVari()->MotAgSinMin = (-1.0F)*(Rte_Pim_MotAg5StVari()->MotAgSinMax);
                Rte_Pim_MotAg5StVari()->MotAgCosMax = 1.0F/CosAmpRecpr_IvsVolt_T_f32;
                Rte_Pim_MotAg5StVari()->MotAgCosMin = (-1.0F)*(Rte_Pim_MotAg5StVari()->MotAgCosMax);
            /***----[ End  of '/MotAg5MeasInit1/NVM_Ok/NVM_NOK ']-----***/
        }
        else
        {
            /* When NVM is Ok, use St Variable values from NVM */
        }

        /***----[Start of 'RtPrmInit/SinCosRtPrm']-----***/
        Rte_Pim_MotAg5RtPrm()->SinGainCorrd      = FixdToFloat_f32_u16(Rte_Pim_MotAg5EolPrm()->SinGainCorrd,NXTRFIXDPT_P15TOFLOAT_ULS_F32);
        Rte_Pim_MotAg5RtPrm()->CosGainCorrd      = FixdToFloat_f32_u16(Rte_Pim_MotAg5EolPrm()->CosGainCorrd,NXTRFIXDPT_P15TOFLOAT_ULS_F32);
        Rte_Pim_MotAg5RtPrm()->SinOffsCorrd      = FixdToFloat_f32_s16(Rte_Pim_MotAg5EolPrm()->SinOffsCorrd,NXTRFIXDPT_P13TOFLOAT_ULS_F32);
        Rte_Pim_MotAg5RtPrm()->CosOffsCorrd      = FixdToFloat_f32_s16(Rte_Pim_MotAg5EolPrm()->CosOffsCorrd,NXTRFIXDPT_P13TOFLOAT_ULS_F32);
        Rte_Pim_MotAg5RtPrm()->CosSinNomRatio    = CosAmpRecpr_IvsVolt_T_f32/SinAmpRecpr_IvsVolt_T_f32;
        Rte_Pim_MotAg5RtPrm()->SinCosNomRatio    = 1.0F/(Rte_Pim_MotAg5RtPrm()->CosSinNomRatio);
        Rte_Pim_MotAg5RtPrm()->RtToNomRatioLoLim = 1.0F - Rte_Prm_MotAg5MeasRtToNomRatLim_Val();
        Rte_Pim_MotAg5RtPrm()->RtToNomRatioHiLim = 1.0F + Rte_Prm_MotAg5MeasRtToNomRatLim_Val();

        /*----[Start of 'SinOffsInit']-----***/
        StordSinRtOffs_Volt_T_f32 = ((Rte_Pim_MotAg5StVari()->MotAgSinMax)+(Rte_Pim_MotAg5StVari()->MotAgSinMin))*RTPRMCON_ULS_F32;
        if( (Abslt_f32_f32(StordSinRtOffs_Volt_T_f32) > Rte_Prm_MotAg5MeasRtOffsLim_Val()) ||
            (  (Rte_Pim_MotAg5StVari()->MotAgSinMax) < MOTAGADCSIGMINAMP_VOLT_F32)      ||
            ( -(Rte_Pim_MotAg5StVari()->MotAgSinMin) < MOTAGADCSIGMINAMP_VOLT_F32)      ||
            (  (Rte_Pim_MotAg5StVari()->MotAgSinMax) > MOTAGADCSIGMAXAMP_VOLT_F32)      ||
            ( -(Rte_Pim_MotAg5StVari()->MotAgSinMin) > MOTAGADCSIGMAXAMP_VOLT_F32))
        {
            SinMaxStVari_Volt_T_f32 = 1.0F/SinAmpRecpr_IvsVolt_T_f32;
            SinMinStVari_Volt_T_f32 = (-1.0F)*SinMaxStVari_Volt_T_f32;
            SinRtOffs_Volt_T_f32    = SinOffs_Volt_T_f32;
        }
        else
        {
            SinMaxStVari_Volt_T_f32 = Rte_Pim_MotAg5StVari()->MotAgSinMax;
            SinMinStVari_Volt_T_f32 = Rte_Pim_MotAg5StVari()->MotAgSinMin;
            SinRtOffs_Volt_T_f32    = (SinOffs_Volt_T_f32+StordSinRtOffs_Volt_T_f32);
        }
        TotSinAmp_Volt_T_f32 = SinMaxStVari_Volt_T_f32 - SinMinStVari_Volt_T_f32;
        /*----[ End  of 'SinOffsInit']-----*/

        /*----[Start of 'CosOffsInit']-----***/
        StordCosRtOffs_Volt_T_f32 = ((Rte_Pim_MotAg5StVari()->MotAgCosMax)+(Rte_Pim_MotAg5StVari()->MotAgCosMin))*RTPRMCON_ULS_F32;
        if( (Abslt_f32_f32(StordCosRtOffs_Volt_T_f32) > Rte_Prm_MotAg5MeasRtOffsLim_Val()) ||
            (  (Rte_Pim_MotAg5StVari()->MotAgCosMax) < MOTAGADCSIGMINAMP_VOLT_F32)      ||
            ( -(Rte_Pim_MotAg5StVari()->MotAgCosMin) < MOTAGADCSIGMINAMP_VOLT_F32)      ||
            (  (Rte_Pim_MotAg5StVari()->MotAgCosMax) > MOTAGADCSIGMAXAMP_VOLT_F32)      ||
            ( -(Rte_Pim_MotAg5StVari()->MotAgCosMin) > MOTAGADCSIGMAXAMP_VOLT_F32))
        {
            CosMaxStVari_Volt_T_f32 = 1.0F/CosAmpRecpr_IvsVolt_T_f32;
            CosMinStVari_Volt_T_f32 = (-1.0F)*CosMaxStVari_Volt_T_f32;
            CosRtOffs_Volt_T_f32    = CosOffs_Volt_T_f32;
        }
        else
        {
            CosMaxStVari_Volt_T_f32 = Rte_Pim_MotAg5StVari()->MotAgCosMax;
            CosMinStVari_Volt_T_f32 = Rte_Pim_MotAg5StVari()->MotAgCosMin;
            CosRtOffs_Volt_T_f32    = (CosOffs_Volt_T_f32+StordCosRtOffs_Volt_T_f32);
        }
        TotCosAmp_Volt_T_f32 = CosMaxStVari_Volt_T_f32 - CosMinStVari_Volt_T_f32;
        /*----[ End  of 'CosOffsInit']-----*/

        Rte_Pim_MotAg5RtPrm()->SinRtOffs     = Lim_f32((Rte_Pim_MotAg5RtPrm()->SinOffsCorrd + SinRtOffs_Volt_T_f32), RTOFFSLOLIM_VOLT_F32,RTOFFSHILIM_VOLT_F32);
        Rte_Pim_MotAg5RtPrm()->PrevSinRtOffs = Rte_Pim_MotAg5RtPrm()->SinRtOffs;
        Rte_Pim_MotAg5RtPrm()->CosRtOffs     = Lim_f32((Rte_Pim_MotAg5RtPrm()->CosOffsCorrd + CosRtOffs_Volt_T_f32), RTOFFSLOLIM_VOLT_F32,RTOFFSHILIM_VOLT_F32);
        Rte_Pim_MotAg5RtPrm()->PrevCosRtOffs = Rte_Pim_MotAg5RtPrm()->CosRtOffs;

        /*----[Start of 'SinAmprRecprInit']-----*/
        SinAmpRecprLimd_IvsVolt_T_f32         = Lim_f32(((SCAGFAC_ULS_F32/TotSinAmp_Volt_T_f32) - SinAmpRecpr_IvsVolt_T_f32),
                                                         -Rte_Prm_MotAg5MeasRtAmpRecprLim_Val(),
                                                          Rte_Prm_MotAg5MeasRtAmpRecprLim_Val());
        SinRtAmpRecpr_IvsVolt_T_f32           = (SinAmpRecprLimd_IvsVolt_T_f32 + SinAmpRecpr_IvsVolt_T_f32)*(Rte_Pim_MotAg5RtPrm()->SinGainCorrd);
        Rte_Pim_MotAg5RtPrm()->SinRtAmpRecpr  = Lim_f32(SinRtAmpRecpr_IvsVolt_T_f32,RTAMPRECPRLOLIM_IVSVOLT_F32,RTAMPRECPRHILIM_IVSVOLT_F32);
        /*----[ End  of 'SinAmprRecprInit']-----*/

        /*----[Start of 'CosAmprRecprInit']-----*/
        RtToNomRatioLimd_Uls_T_f32           = Lim_f32(((TotSinAmp_Volt_T_f32/TotCosAmp_Volt_T_f32)*(Rte_Pim_MotAg5RtPrm()->CosSinNomRatio)),
                                                        Rte_Pim_MotAg5RtPrm()->RtToNomRatioLoLim,
                                                        Rte_Pim_MotAg5RtPrm()->RtToNomRatioHiLim);
        Rte_Pim_MotAg5RtPrm()->CosRtAmpRecpr = Lim_f32((RtToNomRatioLimd_Uls_T_f32*(Rte_Pim_MotAg5RtPrm()->SinCosNomRatio)*SinRtAmpRecpr_IvsVolt_T_f32*(Rte_Pim_MotAg5RtPrm()->CosGainCorrd)),
                                                        RTAMPRECPRLOLIM_IVSVOLT_F32,
                                                        RTAMPRECPRHILIM_IVSVOLT_F32);
        /*----[ End  of 'CosAmprRecprInit']-----*/

        /*----[Start of 'LpFil Init']-----*/
        /* Implementation is optimized: Refer MDD design Rationale */
        FilLpInit(SinMaxStVari_Volt_T_f32,Rte_Prm_MotAg5MeasLpFilFrq_Val(),ARCHGLBPRM_4MILLISEC_SEC_F32,Rte_Pim_MotAg5SinMaxLpFil());
        FilLpInit(CosMaxStVari_Volt_T_f32,Rte_Prm_MotAg5MeasLpFilFrq_Val(),ARCHGLBPRM_4MILLISEC_SEC_F32,Rte_Pim_MotAg5CosMaxLpFil());
        FilLpInit(SinMinStVari_Volt_T_f32,Rte_Prm_MotAg5MeasLpFilFrq_Val(),ARCHGLBPRM_4MILLISEC_SEC_F32,Rte_Pim_MotAg5SinMinLpFil());
        FilLpInit(CosMinStVari_Volt_T_f32,Rte_Prm_MotAg5MeasLpFilFrq_Val(),ARCHGLBPRM_4MILLISEC_SEC_F32,Rte_Pim_MotAg5CosMinLpFil());
        /*----[ End  of 'LpFil Init']-----*/
        /***----[ End  of 'RtPrmInit/SinCosRtPrm']-----***/
    }
    else /*** MotAg5MeasInit1/NVM_NOK ***/
    {
        /*Set the flag in such a way that it triggers Protocol Fault */
        *Rte_Pim_MotAg5NvmFltEna() = TRUE;

        /*---[Start of 'EolPrmInit']---*/
        /* Set NVM Shadow RAM for MotAg5EolPrmNvm to Default Values */
        Rte_Pim_MotAg5EolPrm()->SinOffs       = FloatToFixd_u16_f32(NOMOFFSVAL_ULS_F32,NXTRFIXDPT_FLOATTOP13_ULS_F32);
        Rte_Pim_MotAg5EolPrm()->SinAmpRecpr   = FloatToFixd_u16_f32(1.0F,NXTRFIXDPT_FLOATTOP13_ULS_F32);
        Rte_Pim_MotAg5EolPrm()->CosOffs       = FloatToFixd_u16_f32(NOMOFFSVAL_ULS_F32,NXTRFIXDPT_FLOATTOP13_ULS_F32);
        Rte_Pim_MotAg5EolPrm()->CosAmpRecpr   = FloatToFixd_u16_f32(1.0F,NXTRFIXDPT_FLOATTOP13_ULS_F32);
        Rte_Pim_MotAg5EolPrm()->SinDelta      = FloatToFixd_s16_f32(0.0F,NXTRFIXDPT_FLOATTOP13_ULS_F32);
        for(LoopCnt_Cnt_T_u16 = 0U; LoopCnt_Cnt_T_u16 < HRMNCTBLSIZE_CNT_U16; LoopCnt_Cnt_T_u16++)
        {
            (Rte_Pim_MotAg5EolPrm()->SinHrmncTbl)[LoopCnt_Cnt_T_u16] = (sint8)FloatToFixd_s16_f32(0.0F,NXTRFIXDPT_FLOATTOP13_ULS_F32);
            (Rte_Pim_MotAg5EolPrm()->CosHrmncTbl)[LoopCnt_Cnt_T_u16] = (Rte_Pim_MotAg5EolPrm()->SinHrmncTbl)[LoopCnt_Cnt_T_u16];
        }
        Rte_Pim_MotAg5EolPrm()->SinGainCorrd  = FloatToFixd_u16_f32(1.0F,NXTRFIXDPT_FLOATTOP15_ULS_F32);
        Rte_Pim_MotAg5EolPrm()->CosGainCorrd  = FloatToFixd_u16_f32(1.0F,NXTRFIXDPT_FLOATTOP15_ULS_F32);
        Rte_Pim_MotAg5EolPrm()->SinOffsCorrd  = FloatToFixd_s16_f32(0.0F,NXTRFIXDPT_FLOATTOP13_ULS_F32);
        Rte_Pim_MotAg5EolPrm()->CosOffsCorrd  = FloatToFixd_s16_f32(0.0F,NXTRFIXDPT_FLOATTOP13_ULS_F32);
        Rte_Pim_MotAg5EolPrm()->CosDeltaRecpr = FloatToFixd_u16_f32(1.0F,NXTRFIXDPT_FLOATTOP13_ULS_F32);
        /*---[ End  of 'EolPrmInit']---*/

        /*---[Start of 'StVariInit']---*/
        Rte_Pim_MotAg5StVari()->MotAgSinMax = 1.0F;
        Rte_Pim_MotAg5StVari()->MotAgSinMin = (-1.0F);
        Rte_Pim_MotAg5StVari()->MotAgCosMax = 1.0F;
        Rte_Pim_MotAg5StVari()->MotAgCosMin = (-1.0F);
        /*---[ End  of 'StVariInit']---*/
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg5MeasPer1
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
 *   Std_ReturnType Rte_Read_MotAg5Cos_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAg5CosAdcFaild_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotAg5Sin_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAg5SinAdcFaild_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotAg5CosRtAmpRecpr_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotAg5CosRtOffs_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotAg5MeclQlfr_Val(SigQlfr1 data)
 *   Std_ReturnType Rte_Write_MotAg5MeclRollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_MotAg5SinRtAmpRecpr_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotAg5SinRtOffs_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   void Rte_IrvRead_MotAg5MeasPer1_MotAg5RtVari(MotAgRtPrmRec1 *data)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_MotAg5MeasPer1_MotAg5PrtclOk(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CnvSnpshtData_f32_Oper(uint32 *SnpshtDataCnvd_Arg, float32 SnpshtData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CnvSnpshtData_logl_Oper(uint32 *SnpshtDataCnvd_Arg, boolean SnpshtData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr, SigQlfr1 *NtcQlfr)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts1_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAg5MeasPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotAg5Meas_CODE) MotAg5MeasPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAg5MeasPer1
 *********************************************************************************************************************/

 /*** Temporary Variables ***/
 /*Inputs*/
 VAR(boolean       , AUTOMATIC) MotAg5SinAdcFaild_Cnt_T_logl;
 VAR(boolean       , AUTOMATIC) MotAg5CosAdcFaild_Cnt_T_logl;
 VAR(float32       , AUTOMATIC) MotAg5Sin_Volt_T_f32;
 VAR(float32       , AUTOMATIC) MotAg5Cos_Volt_T_f32;
 VAR(MotAgRtPrmRec1, AUTOMATIC) MotAg5RtVari_Cnt_T_rec;

 /*Intermediate*/
 VAR(float32       , AUTOMATIC) MotAg5SinAbsltCalcd_Volt_T_f32;
 VAR(float32       , AUTOMATIC) MotAg5CosAbsltCalcd_Volt_T_f32;
 VAR(float32       , AUTOMATIC) MotAg5SinCosAmpSqd_VoltSqd_T_f32;
 VAR(uint32        , AUTOMATIC) SpclSnpshtData0NvmFaildSts_Cnt_T_u32;
 VAR(uint32        , AUTOMATIC) SpclSnpshtData1SinCosAmpSqd_Cnt_T_u32;
 VAR(uint32        , AUTOMATIC) SpclSnpshtData2AdcFaildSts_Cnt_T_u32;
 VAR(uint8         , AUTOMATIC) MotAg5PrtclFltParamByte_Cnt_T_u08 = 0U;
 VAR(uint8         , AUTOMATIC) NtcStInfo_Cnt_T_u08;
 VAR(NtcSts1       , AUTOMATIC) NtcSts_Cnt_T_enum;
 VAR(uint16        , AUTOMATIC) DebStep_Cnt_T_u16;

 /*Outputs*/
 VAR(SigQlfr1      , AUTOMATIC) NtcQlfr_Cnt_T_enum;
 VAR(boolean       , AUTOMATIC) MotAg5SinCosTestOk_Cnt_T_logl = TRUE;

 (void)Rte_Read_MotAg5Cos_Val(&MotAg5Cos_Volt_T_f32);
 (void)Rte_Read_MotAg5CosAdcFaild_Logl(&MotAg5CosAdcFaild_Cnt_T_logl);
 (void)Rte_Read_MotAg5Sin_Val(&MotAg5Sin_Volt_T_f32);
 (void)Rte_Read_MotAg5SinAdcFaild_Logl(&MotAg5SinAdcFaild_Cnt_T_logl);

 (void)Rte_IrvRead_MotAg5MeasPer1_MotAg5RtVari(&MotAg5RtVari_Cnt_T_rec);

 /***-----[Start of 'Amplitude computation']-----***/
 MotAg5SinAbsltCalcd_Volt_T_f32 = Abslt_f32_f32(MotAg5Sin_Volt_T_f32 - (MotAg5RtVari_Cnt_T_rec.SinRtOffs));
 MotAg5CosAbsltCalcd_Volt_T_f32 = Abslt_f32_f32(MotAg5Cos_Volt_T_f32 - (MotAg5RtVari_Cnt_T_rec.CosRtOffs));
 MotAg5SinCosAmpSqd_VoltSqd_T_f32  = (MotAg5SinAbsltCalcd_Volt_T_f32*MotAg5SinAbsltCalcd_Volt_T_f32) +
                                     (MotAg5CosAbsltCalcd_Volt_T_f32*MotAg5CosAbsltCalcd_Volt_T_f32);
 *Rte_Pim_dMotAg5MeasAmpVal()   = MotAg5SinCosAmpSqd_VoltSqd_T_f32;
 /***-----[ End  of 'Amplitude computation']-----***/
 
 /***-----[Start of 'Compute SnapShotData']-----***/
 (void)Rte_Call_CnvSnpshtData_logl_Oper(&SpclSnpshtData0NvmFaildSts_Cnt_T_u32 ,*Rte_Pim_MotAg5NvmFltEna());
 (void)Rte_Call_CnvSnpshtData_f32_Oper(&SpclSnpshtData1SinCosAmpSqd_Cnt_T_u32 ,MotAg5SinCosAmpSqd_VoltSqd_T_f32);
 (void)Rte_Call_CnvSnpshtData_logl_Oper(&SpclSnpshtData2AdcFaildSts_Cnt_T_u32 ,MotAg5SinAdcFaild_Cnt_T_logl);
 /***-----[ End  of 'Compute SnapShotData']-----***/

 /***-----[Start of 'Validation']-----***/
 if(*Rte_Pim_MotAg5NvmFltEna() == FALSE)
 {
   /**---[Start of 'Validate Sin/Cos']---**/
   if((MotAg5SinAdcFaild_Cnt_T_logl==TRUE) ||
      (MotAg5CosAdcFaild_Cnt_T_logl==TRUE))
   {
     /*--[Start of 'Adc Failed']--*/
     MotAg5PrtclFltParamByte_Cnt_T_u08 = (uint8)(1U<<ADCFAILRBIT_CNT_U08);
     MotAg5SinCosTestOk_Cnt_T_logl     =  FALSE;
     /*--[ End  of 'Adc Failed']--*/
   }
   else
   {
     /*--[Start of 'SinCosDiag']--*/
     if(MotAg5SinCosAmpSqd_VoltSqd_T_f32 < Rte_Prm_MotAg5MeasAmpSqdMinThd_Val())
     {
         MotAg5SinCosTestOk_Cnt_T_logl      =  FALSE;
         MotAg5PrtclFltParamByte_Cnt_T_u08 |= (uint8)(1U<<ADCLORNGFAILDBIT_CNT_U08);
     }
     if(MotAg5SinCosAmpSqd_VoltSqd_T_f32 > Rte_Prm_MotAg5MeasAmpSqdMaxThd_Val())
     {
        MotAg5SinCosTestOk_Cnt_T_logl       =  FALSE;
        MotAg5PrtclFltParamByte_Cnt_T_u08  |= (uint8)(1U<<ADCHIRNGFAILDBIT_CNT_U08);
     }
     /*--[ End  of 'SinCosDiag']--*/
   }
   /**---[ End  of 'Validate Sin/Cos']---**/
 }
 else
 {
   /**---[Start of 'NvM Failed']---**/
   MotAg5PrtclFltParamByte_Cnt_T_u08 = (uint8)(1U<<NVMFAILRBIT_CNT_U08);
   MotAg5SinCosTestOk_Cnt_T_logl     =  FALSE;
   /**---[ End  of 'NvM Failed']---**/
 }
 /***-----[ End  of 'Validation']-----***/

 /***-----[Start of 'Fault Handler']-----***/
 /*--[Start of 'Rolling Counter']--*/
 if(MotAg5SinCosTestOk_Cnt_T_logl == TRUE)
 {
   /*Test Pass*/
   *Rte_Pim_MotAg5PrevRollgCntr() += 1U; /*Rollover is intentional, same functionality as FDD*/
 }
 else
 {
   /*Test Faild : Do Nothing, Pim retains value*/
 }
 /*--[ End  of 'Rolling Counter']--*/

 /*--[Start of 'NTCStatus']--*/
 if(MotAg5SinCosTestOk_Cnt_T_logl == TRUE)
 {
     /*Pass State*/
     NtcStInfo_Cnt_T_u08 = 0U;
     NtcSts_Cnt_T_enum   = NTCSTS_PREPASSD;
     DebStep_Cnt_T_u16   = MOTAG5PRTCLFLTPASSSTEP_CNT_U16;
 }
 else
 {
   /*Fail State*/
   NtcStInfo_Cnt_T_u08 = MotAg5PrtclFltParamByte_Cnt_T_u08;
   NtcSts_Cnt_T_enum   = NTCSTS_PREFAILD;
   DebStep_Cnt_T_u16   = MOTAG5PRTCLFLTFAILSTEP_CNT_U16;
 }
 (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM,
                                            NtcStInfo_Cnt_T_u08,
                                            NtcSts_Cnt_T_enum,
                                            DebStep_Cnt_T_u16,
                                            SpclSnpshtData0NvmFaildSts_Cnt_T_u32,
                                            SpclSnpshtData1SinCosAmpSqd_Cnt_T_u32,
                                            SpclSnpshtData2AdcFaildSts_Cnt_T_u32);
 /*--[ End  of 'NTCStatus']--*/

 /*--[Start of 'Qualifier Calculation']--*/
 (void)Rte_Call_GetNtcQlfrSts_Oper(MOTAG5MEAS_MOTAG5PRTCLFLTNTCNR_CNT_ENUM, &NtcQlfr_Cnt_T_enum);
 /*--[ End  of 'Qualifier Calculation']--*/
 /***-----[ End  of 'Fault Handler']-----***/

 (void)Rte_Write_MotAg5CosRtAmpRecpr_Val(MotAg5RtVari_Cnt_T_rec.CosRtAmpRecpr);
 (void)Rte_Write_MotAg5CosRtOffs_Val(MotAg5RtVari_Cnt_T_rec.CosRtOffs);
 (void)Rte_Write_MotAg5MeclQlfr_Val(NtcQlfr_Cnt_T_enum);
 (void)Rte_Write_MotAg5MeclRollgCntr_Val(*Rte_Pim_MotAg5PrevRollgCntr());
 (void)Rte_Write_MotAg5SinRtAmpRecpr_Val(MotAg5RtVari_Cnt_T_rec.SinRtAmpRecpr);
 (void)Rte_Write_MotAg5SinRtOffs_Val(MotAg5RtVari_Cnt_T_rec.SinRtOffs);
 (void)Rte_IrvWrite_MotAg5MeasPer1_MotAg5PrtclOk(MotAg5SinCosTestOk_Cnt_T_logl);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg5MeasPer3
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MotAg5Cos_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAg5RawMecl_Val(u0p16 *data)
 *   Std_ReturnType Rte_Read_MotAg5Sin_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_MotAg5MeasPer3_MotAg5PrtclOk(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_MotAg5MeasPer3_MotAg5RtVari(const MotAgRtPrmRec1 *data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotAg5StVari_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAg5MeasPer3_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotAg5Meas_CODE) MotAg5MeasPer3(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAg5MeasPer3
 *********************************************************************************************************************/

 /*** Temporary Variables ***/
 /*Inputs*/
 VAR(uint16 , AUTOMATIC) MotAg5RawMecl_MotRev_T_u0p16;
 VAR(float32, AUTOMATIC) MotAg5Cos_Volt_T_f32;
 VAR(float32, AUTOMATIC) MotAg5Sin_Volt_T_f32;
 VAR(float32, AUTOMATIC) MotVelMrf_MotRadPerSec_T_f32;
 VAR(float32, AUTOMATIC) MotAg5Raw_MotRad_T_f32;
 VAR(float32, AUTOMATIC) MotAg5SinEstimd_Uls_T_f32;
 VAR(float32, AUTOMATIC) MotAg5CosEstimd_Uls_T_f32;
 VAR(float32, AUTOMATIC) SinCorrd_Volt_T_f32;
 VAR(float32, AUTOMATIC) CosCorrd_Volt_T_f32;
 VAR(float32, AUTOMATIC) SinOffsDelta_Volt_T_f32;
 VAR(float32, AUTOMATIC) CosOffsDelta_Volt_T_f32;
 VAR(float32, AUTOMATIC) SinOffs_Volt_T_f32;
 VAR(float32, AUTOMATIC) SinOffsCalcd_Volt_T_f32;
 VAR(float32, AUTOMATIC) TotSinAmp_Volt_T_f32;
 VAR(float32, AUTOMATIC) SinAmpRecpr_IvsVolt_T_f32;
 VAR(float32, AUTOMATIC) SinAmpRecprRtOffs_IvsVolt_T_f32;
 VAR(float32, AUTOMATIC) CosOffs_Volt_T_f32;
 VAR(float32, AUTOMATIC) CosOffsCalcd_Volt_T_f32;
 VAR(float32, AUTOMATIC) TotCosAmp_Volt_T_f32;
 VAR(float32, AUTOMATIC) RtToNomRatioLimd_Uls_T_f32;
 VAR(boolean, AUTOMATIC) MotAg5PrtclOk_Cnt_T_logl;
 VAR(MotAgRtPrmRec1, AUTOMATIC) MotAg5RtVari_Cnt_T_rec;

 (void)Rte_Read_MotAg5Cos_Val(&MotAg5Cos_Volt_T_f32);
 (void)Rte_Read_MotAg5RawMecl_Val(&MotAg5RawMecl_MotRev_T_u0p16);
 (void)Rte_Read_MotAg5Sin_Val(&MotAg5Sin_Volt_T_f32);
 (void)Rte_Read_MotVelMrf_Val(&MotVelMrf_MotRadPerSec_T_f32);

 MotAg5PrtclOk_Cnt_T_logl = Rte_IrvRead_MotAg5MeasPer3_MotAg5PrtclOk();

 /***----['Enable Criteria']-----***/
 if((Abslt_f32_f32(MotVelMrf_MotRadPerSec_T_f32) > Rte_Prm_MotAg5MeasRtMotVelFilEnaThd_Val()) &&
    (MotAg5PrtclOk_Cnt_T_logl == TRUE))
 {
   /**---[Start of 'SinCosRuntime Filter']---**/
   /*---[Start of 'Filter Update']---*/
   MotAg5Raw_MotRad_T_f32 = FixdToFloat_f32_u16(MotAg5RawMecl_MotRev_T_u0p16,NXTRFIXDPT_P16TOFLOAT_ULS_F32)*ARCHGLBPRM_2PI_ULS_F32;
   SinCos_f32(MotAg5Raw_MotRad_T_f32,&MotAg5SinEstimd_Uls_T_f32,&MotAg5CosEstimd_Uls_T_f32);

   /***---SinEna---***/
   if(Abslt_f32_f32(MotAg5SinEstimd_Uls_T_f32) > Rte_Prm_MotAg5MeasRtFilEnaThd_Val())
   {
       /*--[Start of 'Sine RunTime Filter']--*/
       SinCorrd_Volt_T_f32  = (MotAg5Sin_Volt_T_f32 - Rte_Pim_MotAg5RtPrm()->PrevSinRtOffs);
       SinOffsDelta_Volt_T_f32 = (Rte_Pim_MotAg5RtPrm()->PrevSinRtOffs - FixdToFloat_f32_u16(Rte_Pim_MotAg5EolPrm()->SinOffs,NXTRFIXDPT_P13TOFLOAT_ULS_F32));
       if(MotAg5SinEstimd_Uls_T_f32 > 0.0F)
       {
           /*SinMaxFilter*/
           Rte_Pim_MotAg5StVari()->MotAgSinMax = FilLpUpdOutp_f32(((SinCorrd_Volt_T_f32/MotAg5SinEstimd_Uls_T_f32) + SinOffsDelta_Volt_T_f32), Rte_Pim_MotAg5SinMaxLpFil());
       }
       else
       {
           /*SinMinFilter*/
           Rte_Pim_MotAg5StVari()->MotAgSinMin = FilLpUpdOutp_f32(((SinCorrd_Volt_T_f32/(-1.0F*MotAg5SinEstimd_Uls_T_f32)) + SinOffsDelta_Volt_T_f32), Rte_Pim_MotAg5SinMinLpFil());
       }
       /*--[ End  of 'Sine RunTime Filter']--*/
   }

   /***---CosEna---***/
   if(Abslt_f32_f32(MotAg5CosEstimd_Uls_T_f32) > Rte_Prm_MotAg5MeasRtFilEnaThd_Val())
   {
       /*--[Start of 'Cosine RunTime Filter']--*/
       CosCorrd_Volt_T_f32  = (MotAg5Cos_Volt_T_f32 - Rte_Pim_MotAg5RtPrm()->PrevCosRtOffs);
       CosOffsDelta_Volt_T_f32 = (Rte_Pim_MotAg5RtPrm()->PrevCosRtOffs - FixdToFloat_f32_u16(Rte_Pim_MotAg5EolPrm()->CosOffs,NXTRFIXDPT_P13TOFLOAT_ULS_F32));
       if(MotAg5CosEstimd_Uls_T_f32 > 0.0F)
       {
           /*CosMaxFil*/
           Rte_Pim_MotAg5StVari()->MotAgCosMax = FilLpUpdOutp_f32(((CosCorrd_Volt_T_f32/MotAg5CosEstimd_Uls_T_f32) + CosOffsDelta_Volt_T_f32), Rte_Pim_MotAg5CosMaxLpFil());
       }
       else
       {
           /*CosMinFil*/
           Rte_Pim_MotAg5StVari()->MotAgCosMin = FilLpUpdOutp_f32(((CosCorrd_Volt_T_f32/(-1.0F*MotAg5CosEstimd_Uls_T_f32)) + CosOffsDelta_Volt_T_f32), Rte_Pim_MotAg5CosMinLpFil());
       }
       /*--[ End  of 'Cosine RunTime Filter']--*/
   }
   /*---[ End  of 'Filter Update']---*/

   /**---[Start of 'RtSinCosCalcn']---**/
   /*---[Start of 'SinRtOffs']---*/

   SinOffs_Volt_T_f32               = FixdToFloat_f32_u16(Rte_Pim_MotAg5EolPrm()->SinOffs, NXTRFIXDPT_P13TOFLOAT_ULS_F32);
   SinOffsCalcd_Volt_T_f32          = Lim_f32(((Rte_Pim_MotAg5StVari()->MotAgSinMax + Rte_Pim_MotAg5StVari()->MotAgSinMin)*RTPRMCON_ULS_F32),
                                               -Rte_Prm_MotAg5MeasRtOffsLim_Val(),
                                                Rte_Prm_MotAg5MeasRtOffsLim_Val());
   Rte_Pim_MotAg5RtPrm()->SinRtOffs = Lim_f32((SinOffsCalcd_Volt_T_f32 + SinOffs_Volt_T_f32 + Rte_Pim_MotAg5RtPrm()->SinOffsCorrd),
                                               RTOFFSLOLIM_VOLT_F32,
                                               RTOFFSHILIM_VOLT_F32);
   /*---[ End  of 'SinRtOffs']---*/

   /*---[Start of 'SinRtAmprRecpr']---*/
   TotSinAmp_Volt_T_f32             = Rte_Pim_MotAg5StVari()->MotAgSinMax - Rte_Pim_MotAg5StVari()->MotAgSinMin;
   SinAmpRecpr_IvsVolt_T_f32 = FixdToFloat_f32_u16(Rte_Pim_MotAg5EolPrm()->SinAmpRecpr, NXTRFIXDPT_P13TOFLOAT_ULS_F32);
   SinAmpRecprRtOffs_IvsVolt_T_f32 = Lim_f32(((SCAGFAC_ULS_F32/TotSinAmp_Volt_T_f32)-SinAmpRecpr_IvsVolt_T_f32), -Rte_Prm_MotAg5MeasRtAmpRecprLim_Val(),Rte_Prm_MotAg5MeasRtAmpRecprLim_Val());
   Rte_Pim_MotAg5RtPrm()->SinRtAmpRecpr = Lim_f32(((SinAmpRecpr_IvsVolt_T_f32+SinAmpRecprRtOffs_IvsVolt_T_f32)*(Rte_Pim_MotAg5RtPrm()->SinGainCorrd)),
                                                    RTAMPRECPRLOLIM_IVSVOLT_F32,
                                                    RTAMPRECPRHILIM_IVSVOLT_F32);
   /*---[ End  of 'SinRtAmprRecpr']---*/

   /*---[Start of 'CosRtOffs']---*/

   CosOffs_Volt_T_f32               = FixdToFloat_f32_u16(Rte_Pim_MotAg5EolPrm()->CosOffs, NXTRFIXDPT_P13TOFLOAT_ULS_F32);
   CosOffsCalcd_Volt_T_f32          = Lim_f32(((Rte_Pim_MotAg5StVari()->MotAgCosMax + Rte_Pim_MotAg5StVari()->MotAgCosMin)*RTPRMCON_ULS_F32),
                                               -Rte_Prm_MotAg5MeasRtOffsLim_Val(),
                                                Rte_Prm_MotAg5MeasRtOffsLim_Val());
   Rte_Pim_MotAg5RtPrm()->CosRtOffs = Lim_f32((CosOffsCalcd_Volt_T_f32 + CosOffs_Volt_T_f32 + Rte_Pim_MotAg5RtPrm()->CosOffsCorrd),
                                               RTOFFSLOLIM_VOLT_F32,
                                               RTOFFSHILIM_VOLT_F32);
   /*---[ End  of 'CosRtOffs']---*/

   /*---[Start of 'CosRtAmpRecpr']---*/
   TotCosAmp_Volt_T_f32       = Rte_Pim_MotAg5StVari()->MotAgCosMax - Rte_Pim_MotAg5StVari()->MotAgCosMin;
   RtToNomRatioLimd_Uls_T_f32 = Lim_f32(((TotSinAmp_Volt_T_f32/TotCosAmp_Volt_T_f32)*(Rte_Pim_MotAg5RtPrm()->CosSinNomRatio)),
                                          Rte_Pim_MotAg5RtPrm()->RtToNomRatioLoLim,
                                          Rte_Pim_MotAg5RtPrm()->RtToNomRatioHiLim);
   Rte_Pim_MotAg5RtPrm()->CosRtAmpRecpr = Lim_f32((RtToNomRatioLimd_Uls_T_f32*(Rte_Pim_MotAg5RtPrm()->SinCosNomRatio)*
                                                   (Rte_Pim_MotAg5RtPrm()->SinRtAmpRecpr)*(Rte_Pim_MotAg5RtPrm()->CosGainCorrd)),
                                                   RTAMPRECPRLOLIM_IVSVOLT_F32,
                                                   RTAMPRECPRHILIM_IVSVOLT_F32);
   /*---[ End  of 'CosRtAmpRecpr']---*/
   /**---[ End  of 'RtSinCosCalcn']---**/

   (void)Rte_Call_MotAg5StVari_SetRamBlockStatus(TRUE);
   /**---[ End  of 'SinCosRuntime Filter']---**/
 }

 MotAg5RtVari_Cnt_T_rec.SinRtOffs     = Rte_Pim_MotAg5RtPrm()->SinRtOffs;
 MotAg5RtVari_Cnt_T_rec.CosRtOffs     = Rte_Pim_MotAg5RtPrm()->CosRtOffs;
 MotAg5RtVari_Cnt_T_rec.SinRtAmpRecpr = Rte_Pim_MotAg5RtPrm()->SinRtAmpRecpr;
 MotAg5RtVari_Cnt_T_rec.CosRtAmpRecpr = Rte_Pim_MotAg5RtPrm()->CosRtAmpRecpr;

 (void)Rte_IrvWrite_MotAg5MeasPer3_MotAg5RtVari(&MotAg5RtVari_Cnt_T_rec);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_MotAg5Meas_STOP_SEC_CODE
#include "CDD_MotAg5Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
