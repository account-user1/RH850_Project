/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HwTq9Meas.c
 *        Config:  C:/Component/ES224A_HwTq9Meas_Impl/tools/Component.dpa
 *     SW-C Type:  HwTq9Meas
 *  Generated at:  Thu Jan  4 16:54:00 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HwTq9Meas>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
* Copyright 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : HwTq9Meas.c
* Module Description: Implementation of Hand wheel Torque 9 Measurement (ES224A)
* Project           : CBD 
* Author            : TATA ELXSI
***********************************************************************************************************************
* Version Control:
* %version          : 1 % 
* %derived_by       : nz4qtt %
*--------------------------------------------------------------------------------------------------------------------
* Date        Rev    Author    Change Description                                                            SCR #
* -------   -------  --------  -------------------------------------------------------------------------   ----------
* 01/02/18    1      KK      Initial Version                                                                    EA4#15171
*--------------------------------------------------------------------------------------------------------------------                                                                 
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

#include "Rte_HwTq9Meas.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "rsent_regs.h"
#include <v800_ghs.h>
#include "HwTq9Meas_Cfg.h"
#include "ElecGlbPrm.h"
#include "NxtrMath.h"
#include "ElecGlbPrm.h"
#include "HwTq9Meas_Cfg.h"
 
/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/* MISRA-C:2004 Rule 19.6 [NXTRDEV 19.6.1]: AUTOSAR requires deviation from this rule in Memory Mapping header files */

/* MISRA-C:2004 Rule 19.15 [NXTRDEV 19.15.1]: AUTOSAR requires deviation from this rule in Memory Mapping header files */

/* MISRA-C:2004 Rule 8.10 [NXTRDEV 8.10.1]: All declarations and definitions of objects or functions at file scope shall have internal linkage unless external linkage is Required */
 
/********************************************* Embedded Local Constants **********************************************/
#define CRCFLTPARAMBYTE_CNT_U08                         ((uint8)2U)
#define CRCIDX_CNT_U08                                          ((uint8)10U)
#define CRCTBLSEEDIDX_CNT_U08                           ((uint8)5U)
#define CRCTBLSIZE_CNT_U08                                      ((uint8) 16U)
#define DATA0IDX_CNT_U08                                        ((uint8)4U)
#define DATA1IDX_CNT_U08                                        ((uint8)6U)
#define DATA2IDX_CNT_U08                                        ((uint8)8U)
#define DATATISTAMPIDX_CNT_U08                          ((uint8)11U)
#define EVENIDXFAC_CNT_U08                              ((uint8)2U)
#define HWTQ9BUFIDX_CNT_U08                             ((uint8)32U)
#define RAWCRCIDX_CNT_U08                               ((uint8)4U)
#define RAWDATA0IDX_CNT_U08                             ((uint8)1U)
#define RAWDATA1IDX_CNT_U08                             ((uint8)2U)
#define RAWDATA2IDX_CNT_U08                             ((uint8)3U)
#define RAWSTSIDX_CNT_U08                               ((uint8)0U)
#define STSFLTPARAMBYTE_CNT_U08                         ((uint8)1U)
#define STSIDX_CNT_U08                                          ((uint8)2U)

#define SENTDATA0SHIFT_CNT_U16                          ((uint16)8U)
#define SENTDATA1SHIFT_CNT_U16                          ((uint16)4U)
#define HWTQ9PRTCLFLTFAILSTEP_CNT_U16           ((uint16)3276U)
#define HWTQ9PRTCLFLTPASSSTEP_CNT_U16           ((uint16)655U)
#define HWTQ9RAWDATAOFFS_CNT_U16                        ((uint16)12U)
#define HWTQ9STSMASK_CNT_U16                            ((uint16)3U)

#define HWTQ9TISTAMPROLLOVER_NANOSEC_S32        ((sint32)8388607U)

#define HWTQ9SNVTY_HWNWTMTRPERCNT_F32           (0.0048828125F)
#define HWTQ9OFFS_HWNWTMTR_F32                          (10.0F)
#define MILLITONANOSEC_ULS_F32                          (1000.0F)
#define ROUNDFAC_CNT_F32                                        (0.5F)
#define SYNCPLS_CNT_F32                                         (56.0F)
#define SYNCPLS_ULS_F32                                         (56.0F)
#define CLKDRIFT_ULS_F32                                        (0.2F)
#define TICKTI_MICROSEC_F32                             (1.22F)
#define DATAMAXPLS_ULS_F32                              (27.0F)
#define DATAMINPLS_ULS_F32                              (12.0F)


/******************************************** Local Function Prototypes **********************************************/
static FUNC(uint8,   HwTq10Meas_CODE) StuckNoDataSeln(void);
static FUNC(boolean, HwTq10Meas_CODE) RngChk(uint32 Temp_Cnt_T_u32);
static FUNC(uint8,   HwTq10Meas_CODE) CrcChk(uint16 ComputedCrc_Cnt_T_u16, uint16 ExpectedCrc_Cnt_T_u16);
                                                                                                
                                                                                                
                                                                                                
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
 * sint8: Integer in interval [-128...127] (standard type)
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
 * Ary1D_u16_5: Array with 5 element(s) of type uint16
 *
 * Record Types:
 * =============
 * HwTqOffsRec1: Record with elements
 *   OffsTrim of type float32
 *   OffsTrimPrfmdSts of type boolean
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwTq9PrevHwTq(void)
 *   uint32 *Rte_Pim_HwTq9DataPlsHiLim(void)
 *   uint32 *Rte_Pim_HwTq9DataPlsLoLim(void)
 *   uint32 *Rte_Pim_HwTq9SyncPlsHiLim(void)
 *   uint32 *Rte_Pim_HwTq9SyncPlsLoLim(void)
 *   uint32 *Rte_Pim_HwTq9TiStamp(void)
 *   uint32 *Rte_Pim_HwTq9TiStampPrev(void)
 *   uint8 *Rte_Pim_HwTq9RollgCntrPrev(void)
 *   uint16 *Rte_Pim_HwTq9RawDataBuf(void)
 *     Returnvalue: uint16* is of type Ary1D_u16_5
 *   HwTqOffsRec1 *Rte_Pim_HwTq9Offs(void)
 *
 *********************************************************************************************************************/


#define HwTq9Meas_START_SEC_CODE
#include "HwTq9Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq9MeasHwTq9AutTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq9MeasHwTq9AutTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq9Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq9MeasHwTq9AutTrim_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq9MeasHwTq9AutTrim_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwTq9Meas_CODE) HwTq9MeasHwTq9AutTrim_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq9MeasHwTq9AutTrim_Oper
 *********************************************************************************************************************/
        
        Rte_Pim_HwTq9Offs()->OffsTrim = *Rte_Pim_HwTq9PrevHwTq();
        Rte_Pim_HwTq9Offs()->OffsTrimPrfmdSts = TRUE;
        (void)Rte_Call_HwTq9Offs_SetRamBlockStatus(TRUE);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq9MeasHwTq9ClrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq9MeasHwTq9ClrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq9Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq9MeasHwTq9ClrTrim_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq9MeasHwTq9ClrTrim_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwTq9Meas_CODE) HwTq9MeasHwTq9ClrTrim_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq9MeasHwTq9ClrTrim_Oper
 *********************************************************************************************************************/
        
        Rte_Pim_HwTq9Offs()->OffsTrim = 0.0F;
        Rte_Pim_HwTq9Offs()->OffsTrimPrfmdSts = FALSE;
        (void)Rte_Call_HwTq9Offs_SetRamBlockStatus(TRUE);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq9MeasHwTq9ReadTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq9MeasHwTq9ReadTrim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq9MeasHwTq9ReadTrim_Oper(float32 *HwTqReadTrimData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq9MeasHwTq9ReadTrim_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwTq9Meas_CODE) HwTq9MeasHwTq9ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_HWTQ9MEAS_APPL_VAR) HwTqReadTrimData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq9MeasHwTq9ReadTrim_Oper
 *********************************************************************************************************************/
        
        *HwTqReadTrimData_Arg = Rte_Pim_HwTq9Offs()->OffsTrim; 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq9MeasHwTq9TrimPrfmdSts_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq9MeasHwTq9TrimPrfmdSts>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq9MeasHwTq9TrimPrfmdSts_Oper(boolean *HwTqOffsTrimPrfmdStsData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq9MeasHwTq9TrimPrfmdSts_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwTq9Meas_CODE) HwTq9MeasHwTq9TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_HWTQ9MEAS_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq9MeasHwTq9TrimPrfmdSts_Oper
 *********************************************************************************************************************/
        
        *HwTqOffsTrimPrfmdStsData_Arg = Rte_Pim_HwTq9Offs()->OffsTrimPrfmdSts;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq9MeasHwTq9WrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq9MeasHwTq9WrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq9Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq9MeasHwTq9WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq9MeasHwTq9WrTrim_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwTq9Meas_CODE) HwTq9MeasHwTq9WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq9MeasHwTq9WrTrim_Oper
 *********************************************************************************************************************/
        
        Rte_Pim_HwTq9Offs()->OffsTrim = HwTqWrOffsTrimData_Arg;
        Rte_Pim_HwTq9Offs()->OffsTrimPrfmdSts = TRUE;
        (void)Rte_Call_HwTq9Offs_SetRamBlockStatus(TRUE);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq9MeasInit1
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
 *   Std_ReturnType Rte_Call_HwTq9Offs_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq9MeasInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwTq9Meas_CODE) HwTq9MeasInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq9MeasInit1
 *********************************************************************************************************************/

VAR(NvM_RequestResultType, AUTOMATIC) HwTq9ErrSts_Cnt_T_enum;

/* Reading the NVM Error Status */
(void)Rte_Call_HwTq9Offs_GetErrorStatus(&HwTq9ErrSts_Cnt_T_enum);

if(NVM_REQ_OK == HwTq9ErrSts_Cnt_T_enum)
{
        /***Do Nothing*/
}
else
{
        Rte_Pim_HwTq9Offs()->OffsTrim                           = 0.0F;
        Rte_Pim_HwTq9Offs()->OffsTrimPrfmdSts           = FALSE;
}

/* Initialize PIMs */   
*Rte_Pim_HwTq9SyncPlsHiLim() = (uint32)( ((TICKTI_MICROSEC_F32*SYNCPLS_ULS_F32)*MILLITONANOSEC_ULS_F32) + 
                                                                                  (((TICKTI_MICROSEC_F32*SYNCPLS_ULS_F32)*MILLITONANOSEC_ULS_F32)*CLKDRIFT_ULS_F32) );
                                                                          
*Rte_Pim_HwTq9SyncPlsLoLim() = (uint32)( ((TICKTI_MICROSEC_F32*SYNCPLS_ULS_F32)*MILLITONANOSEC_ULS_F32) - 
                                                                                   (((TICKTI_MICROSEC_F32*SYNCPLS_ULS_F32)*MILLITONANOSEC_ULS_F32)*CLKDRIFT_ULS_F32) );
                                                                                   
*Rte_Pim_HwTq9DataPlsHiLim() = (uint32)( ((TICKTI_MICROSEC_F32*DATAMAXPLS_ULS_F32)*MILLITONANOSEC_ULS_F32) + 
                                                                                  (((TICKTI_MICROSEC_F32*DATAMAXPLS_ULS_F32)*MILLITONANOSEC_ULS_F32)*CLKDRIFT_ULS_F32) );
                                                                                  
*Rte_Pim_HwTq9DataPlsLoLim() = (uint32)( ((TICKTI_MICROSEC_F32*DATAMINPLS_ULS_F32)*MILLITONANOSEC_ULS_F32) - 
                                                                                  (((TICKTI_MICROSEC_F32*DATAMINPLS_ULS_F32)*MILLITONANOSEC_ULS_F32)*CLKDRIFT_ULS_F32) );
                                                           
                                                           
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq9MeasPer1
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
 *   Std_ReturnType Rte_Read_HwTq9Polarity_Val(sint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTq9_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTq9Qlfr_Val(SigQlfr1 data)
 *   Std_ReturnType Rte_Write_HwTq9RollgCntr_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GtmGetSent0Data_Oper(uint32 *BufStrtAdr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GtmGetSentData_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq9MeasPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwTq9Meas_CODE) HwTq9MeasPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq9MeasPer1
 *********************************************************************************************************************/
        CONST(uint16, AUTOMATIC) CRCTBL_CNT_U16[CRCTBLSIZE_CNT_U08] =   {0U, 13U, 7U, 10U, 14U, 3U, 9U, 4U, 1U, 12U, 6U, 11U, 15U, 2U, 8U, 5U};
        
        VAR(uint32,  AUTOMATIC) HwTq9GlbBuf_Cnt_T_u32[HWTQ9BUFIDX_CNT_U08];
        VAR(uint8,   AUTOMATIC) IdxData_Cnt_T_u08;
        VAR(uint32,  AUTOMATIC) TempSts_Cnt_T_u32;
        VAR(uint32,  AUTOMATIC) TempData0_Cnt_T_u32;
        VAR(uint32,  AUTOMATIC) TempData1_Cnt_T_u32;
        VAR(uint32,  AUTOMATIC) TempData2_Cnt_T_u32;
        VAR(uint32,  AUTOMATIC) TempCrc_Cnt_T_u32;
        VAR(uint32,  AUTOMATIC) TempTiStamp_Cnt_T_u32;
        
        VAR(boolean, AUTOMATIC) StsRngChk_Cnt_T_logl;
        VAR(boolean, AUTOMATIC) Data0RngChk_Cnt_T_logl;
        VAR(boolean, AUTOMATIC) Data1RngChk_Cnt_T_logl;
        VAR(boolean, AUTOMATIC) Data2RngChk_Cnt_T_logl;
        VAR(boolean, AUTOMATIC) CrcRngChk_Cnt_T_logl;
        
        VAR(float32, AUTOMATIC)ScagFac_Cnt_T_f32;
        
        VAR(uint8,   AUTOMATIC) MissMsgEna_Uls_T_u08;
        VAR(sint8,   AUTOMATIC) HwTq9Polarity_Uls_T_s08;
        VAR(uint16,  AUTOMATIC) HwTq9RawData0_Cnt_T_u16;
        VAR(uint16,  AUTOMATIC) HwTq9RawData1_Cnt_T_u16;
        VAR(uint16,  AUTOMATIC) HwTq9RawData2_Cnt_T_u16;
        VAR(uint16,  AUTOMATIC) ComputedCrc_Cnt_T_u16;
        VAR(uint16,  AUTOMATIC) ExpectedCrc_Cnt_T_u16;
        VAR(uint8,       AUTOMATIC) OutpNr2_Cnt_T_u08;
        VAR(uint8,   AUTOMATIC) CRCFaildPrmByte_Cnt_T_u08;
        VAR(uint16,  AUTOMATIC) HwTqStatus_Cnt_T_u16;
        VAR(uint8,   AUTOMATIC) StsFltEnaPrmByte_Cnt_T_u08;
        VAR(float32, AUTOMATIC) HwTq9HwNm_HwNwtMtr_T_f32;
        VAR(float32, AUTOMATIC) HwTq9_HwNwtMtr_T_f32;
        VAR(uint8,   AUTOMATIC) HwTq9RollgCntr_Cnt_T_u08;
        VAR(uint8,   AUTOMATIC) NtcStInfo_Cnt_T_u08;
        VAR(NtcSts1, AUTOMATIC) NtcSts_Cnt_T_enum;
        VAR(uint16,  AUTOMATIC) DebStep_Cnt_T_u16;
        
        VAR(uint16,  AUTOMATIC) CrcDataExclsvOr1_Cnt_T_u16;
        VAR(uint16,  AUTOMATIC) CrcDataExclsvOr2_Cnt_T_u16;
        VAR(uint16,  AUTOMATIC) CrcDataExclsvOr3_Cnt_T_u16;
        
        VAR(uint16,  AUTOMATIC) TempOutpBitOr_Cnt_T_u16;
        
        VAR(SigQlfr1, AUTOMATIC) NtcHwTq9PrtclQlfrSts_Cnt_T_enum;
        VAR(SigQlfr1, AUTOMATIC) NtcHwTq9MfgQlfrSts_Cnt_T_enum;
        VAR(SigQlfr1, AUTOMATIC) HwTq9Qlfr_Cnt_T_enum;
        
        /* Read Inputs from RTE */
        (void)Rte_Read_HwTq9Polarity_Val(&HwTq9Polarity_Uls_T_s08);
        
        /* Raw Data Processing */
        (void)Rte_Call_GtmGetSent0Data_Oper(HwTq9GlbBuf_Cnt_T_u32);
        
        
        /* Data Processing */
        for (IdxData_Cnt_T_u08 = 0; IdxData_Cnt_T_u08 < HWTQ9BUFIDX_CNT_U08; IdxData_Cnt_T_u08++)
        {
                if ( (IdxData_Cnt_T_u08 % EVENIDXFAC_CNT_U08) == 0U )
                {
                        if( (HwTq9GlbBuf_Cnt_T_u32[IdxData_Cnt_T_u08] <= *Rte_Pim_HwTq9SyncPlsHiLim()) && (HwTq9GlbBuf_Cnt_T_u32[IdxData_Cnt_T_u08] >= *Rte_Pim_HwTq9SyncPlsLoLim()) )
                        {
                                TempSts_Cnt_T_u32 = HwTq9GlbBuf_Cnt_T_u32[(IdxData_Cnt_T_u08 + STSIDX_CNT_U08) % HWTQ9BUFIDX_CNT_U08];
                                TempData0_Cnt_T_u32 = HwTq9GlbBuf_Cnt_T_u32[(IdxData_Cnt_T_u08 + DATA0IDX_CNT_U08) % HWTQ9BUFIDX_CNT_U08];
                                TempData1_Cnt_T_u32 = HwTq9GlbBuf_Cnt_T_u32[(IdxData_Cnt_T_u08 + DATA1IDX_CNT_U08) % HWTQ9BUFIDX_CNT_U08];
                                TempData2_Cnt_T_u32 = HwTq9GlbBuf_Cnt_T_u32[(IdxData_Cnt_T_u08 + DATA2IDX_CNT_U08) % HWTQ9BUFIDX_CNT_U08];
                                TempCrc_Cnt_T_u32 = HwTq9GlbBuf_Cnt_T_u32[(IdxData_Cnt_T_u08 + CRCIDX_CNT_U08) % HWTQ9BUFIDX_CNT_U08];
                                TempTiStamp_Cnt_T_u32 = HwTq9GlbBuf_Cnt_T_u32[(IdxData_Cnt_T_u08 + DATATISTAMPIDX_CNT_U08) % HWTQ9BUFIDX_CNT_U08];
                                
                                StsRngChk_Cnt_T_logl = RngChk(TempSts_Cnt_T_u32);
                                Data0RngChk_Cnt_T_logl = RngChk(TempData0_Cnt_T_u32);
                                Data1RngChk_Cnt_T_logl = RngChk(TempData1_Cnt_T_u32);
                                Data2RngChk_Cnt_T_logl = RngChk(TempData2_Cnt_T_u32);
                                CrcRngChk_Cnt_T_logl = RngChk(TempCrc_Cnt_T_u32);
                                
                                        
                                ScagFac_Cnt_T_f32 = SYNCPLS_CNT_F32 / ((float32)(HwTq9GlbBuf_Cnt_T_u32[IdxData_Cnt_T_u08]));
                                
                                
                                if( (StsRngChk_Cnt_T_logl == TRUE) && 
                                        (Data0RngChk_Cnt_T_logl == TRUE) && 
                                        (Data1RngChk_Cnt_T_logl == TRUE) && 
                                        (Data2RngChk_Cnt_T_logl == TRUE) && 
                                        (CrcRngChk_Cnt_T_logl == TRUE) )
                                {
                                        /* Polyspace flags for Overflow issue for below steps but they have been checked and found to be okay */
                                        Rte_Pim_HwTq9RawDataBuf()[RAWSTSIDX_CNT_U08] =   (uint16)( (uint32)(float32)(((float32)(TempSts_Cnt_T_u32)*ScagFac_Cnt_T_f32) + ROUNDFAC_CNT_F32) )- HWTQ9RAWDATAOFFS_CNT_U16;
                                        Rte_Pim_HwTq9RawDataBuf()[RAWDATA0IDX_CNT_U08] = (uint16)( (uint32)(float32)(((float32)(TempData0_Cnt_T_u32)*ScagFac_Cnt_T_f32) + ROUNDFAC_CNT_F32) )- HWTQ9RAWDATAOFFS_CNT_U16;
                                        Rte_Pim_HwTq9RawDataBuf()[RAWDATA1IDX_CNT_U08] = (uint16)( (uint32)(float32)(((float32)(TempData1_Cnt_T_u32)*ScagFac_Cnt_T_f32) + ROUNDFAC_CNT_F32) )- HWTQ9RAWDATAOFFS_CNT_U16;
                                        Rte_Pim_HwTq9RawDataBuf()[RAWDATA2IDX_CNT_U08] = (uint16)( (uint32)(float32)(((float32)(TempData2_Cnt_T_u32)*ScagFac_Cnt_T_f32) + ROUNDFAC_CNT_F32) )- HWTQ9RAWDATAOFFS_CNT_U16;
                                        Rte_Pim_HwTq9RawDataBuf()[RAWCRCIDX_CNT_U08] =   (uint16)( (uint32)(float32)(((float32)(TempCrc_Cnt_T_u32)*ScagFac_Cnt_T_f32) + ROUNDFAC_CNT_F32) )- HWTQ9RAWDATAOFFS_CNT_U16;
                                        
                                        *Rte_Pim_HwTq9TiStamp() = TempTiStamp_Cnt_T_u32;                
                                }
                        }
                }
        }
        /* End of Data Processing */
        /* End of Raw Data Processing */
        /* Torque Data Processing */
        
        /* Stuck/No Data Detection*/
        
        MissMsgEna_Uls_T_u08 = StuckNoDataSeln();
        
        
        /* End of Stuck/No Data Detection */
        
        /* Processing */
        HwTq9RawData0_Cnt_T_u16 = Rte_Pim_HwTq9RawDataBuf()[RAWDATA0IDX_CNT_U08];
        HwTq9RawData1_Cnt_T_u16 = Rte_Pim_HwTq9RawDataBuf()[RAWDATA1IDX_CNT_U08];
        HwTq9RawData2_Cnt_T_u16 = Rte_Pim_HwTq9RawDataBuf()[RAWDATA2IDX_CNT_U08];
        
        /* CRC Check */
        CrcDataExclsvOr1_Cnt_T_u16 = CRCTBL_CNT_U16[CRCTBLSEEDIDX_CNT_U08] ^ HwTq9RawData0_Cnt_T_u16;
        CrcDataExclsvOr2_Cnt_T_u16 = CRCTBL_CNT_U16[CrcDataExclsvOr1_Cnt_T_u16] ^ HwTq9RawData1_Cnt_T_u16;
        CrcDataExclsvOr3_Cnt_T_u16 = CRCTBL_CNT_U16[CrcDataExclsvOr2_Cnt_T_u16] ^ HwTq9RawData2_Cnt_T_u16;
        
        ComputedCrc_Cnt_T_u16 = CRCTBL_CNT_U16[CrcDataExclsvOr3_Cnt_T_u16];
        ExpectedCrc_Cnt_T_u16 = Rte_Pim_HwTq9RawDataBuf()[RAWCRCIDX_CNT_U08];
        
        CRCFaildPrmByte_Cnt_T_u08 = CrcChk(ComputedCrc_Cnt_T_u16, ExpectedCrc_Cnt_T_u16);
        
        /* End of CRC Check */
        
        /* Status Check */
        HwTqStatus_Cnt_T_u16 = Rte_Pim_HwTq9RawDataBuf()[RAWSTSIDX_CNT_U08];
        if ( (HwTqStatus_Cnt_T_u16 & HWTQ9STSMASK_CNT_U16) > 0U )
        {
                OutpNr2_Cnt_T_u08 = 1U; 
        }
        else
        {
                OutpNr2_Cnt_T_u08 = 0U;
        }
        
        StsFltEnaPrmByte_Cnt_T_u08 = OutpNr2_Cnt_T_u08 << STSFLTPARAMBYTE_CNT_U08; 
        /* End of Status Check */
        
        /* HwTqCalcn */
        TempOutpBitOr_Cnt_T_u16 = (((uint16)(HwTq9RawData0_Cnt_T_u16 <<  SENTDATA0SHIFT_CNT_U16)) | 
                                                                ((uint16)(HwTq9RawData1_Cnt_T_u16 << SENTDATA1SHIFT_CNT_U16)) | 
                                                                HwTq9RawData2_Cnt_T_u16);
        if ( (CRCFaildPrmByte_Cnt_T_u08 | StsFltEnaPrmByte_Cnt_T_u08 | MissMsgEna_Uls_T_u08) == 0U )
        {
                HwTq9HwNm_HwNwtMtr_T_f32 = (((float32)(TempOutpBitOr_Cnt_T_u16)*HWTQ9SNVTY_HWNWTMTRPERCNT_F32) - HWTQ9OFFS_HWNWTMTR_F32)*
                                                                        (float32)(HwTq9Polarity_Uls_T_s08);
        }
        else
        {
                HwTq9HwNm_HwNwtMtr_T_f32 = *Rte_Pim_HwTq9PrevHwTq();
        }
        *Rte_Pim_HwTq9PrevHwTq() = HwTq9HwNm_HwNwtMtr_T_f32;
        
        HwTq9_HwNwtMtr_T_f32 = *Rte_Pim_HwTq9PrevHwTq() - Rte_Pim_HwTq9Offs()->OffsTrim;
        /* End of HwTqCalcn */
        
        /* Fault Handler */
        
        /* Rolling Counter */
        if ( (CRCFaildPrmByte_Cnt_T_u08 | StsFltEnaPrmByte_Cnt_T_u08 | MissMsgEna_Uls_T_u08) == 0U )
        {
                HwTq9RollgCntr_Cnt_T_u08 = *Rte_Pim_HwTq9RollgCntrPrev() + 1U;
        }
        else
        {
                HwTq9RollgCntr_Cnt_T_u08 = *Rte_Pim_HwTq9RollgCntrPrev(); 
        }
        *Rte_Pim_HwTq9RollgCntrPrev() = HwTq9RollgCntr_Cnt_T_u08;
        /* End of Rolling Counter */
        
        /* NTC Status */
        if ( (CRCFaildPrmByte_Cnt_T_u08 | StsFltEnaPrmByte_Cnt_T_u08 | MissMsgEna_Uls_T_u08) == 0U )
        {
                NtcStInfo_Cnt_T_u08 = 0U;
                NtcSts_Cnt_T_enum = NTCSTS_PREPASSD;
                DebStep_Cnt_T_u16 = HWTQ9PRTCLFLTPASSSTEP_CNT_U16;
        }
        else
        {
                NtcStInfo_Cnt_T_u08 = (CRCFaildPrmByte_Cnt_T_u08 | StsFltEnaPrmByte_Cnt_T_u08 | MissMsgEna_Uls_T_u08);
                NtcSts_Cnt_T_enum = NTCSTS_PREFAILD;
                DebStep_Cnt_T_u16 = HWTQ9PRTCLFLTFAILSTEP_CNT_U16; 
        }
        
        (void) Rte_Call_SetNtcStsAndSnpshtData_Oper(HwTq9MEAS_HwTq9PRTCLFLTNTCNR_CNT_ENUM, 
                                                                                                                NtcStInfo_Cnt_T_u08, 
                                                                                                                NtcSts_Cnt_T_enum, 
                                                                                                                DebStep_Cnt_T_u16,
                                                                                                                (uint32)ExpectedCrc_Cnt_T_u16,
                                                                                                                (uint32)ComputedCrc_Cnt_T_u16,
                                                                                                                (uint32)HwTqStatus_Cnt_T_u16);
        /*  End of NTC Status */
        
        /*** Qualifier Calculation */
        (void) Rte_Call_GetNtcQlfrSts_Oper(HwTq9MEAS_HwTq9PRTCLFLTNTCNR_CNT_ENUM, &NtcHwTq9PrtclQlfrSts_Cnt_T_enum);
        (void) Rte_Call_GetNtcQlfrSts_Oper(HwTq9MEAS_HwTq9MFGNTCNR_CNT_ENUM, &NtcHwTq9MfgQlfrSts_Cnt_T_enum);
        if( (NtcHwTq9PrtclQlfrSts_Cnt_T_enum != SIGQLFR_FAILD) && (NtcHwTq9MfgQlfrSts_Cnt_T_enum != SIGQLFR_FAILD) )
        {
                        HwTq9Qlfr_Cnt_T_enum = SIGQLFR_PASSD;
        }
        else
        {
                        HwTq9Qlfr_Cnt_T_enum = SIGQLFR_FAILD;
        }
        /*** End of Qualifier Calculation */
        
        /**** End of Fault Handler **/
        
        /***** End of Processing */
        
        /****** Torque Data Processing **/
        
        /*** Range Limit and Write Outputs to RTE */
        (void) Rte_Write_HwTq9_Val(Lim_f32(HwTq9_HwNwtMtr_T_f32, ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32, ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32));
        (void) Rte_Write_HwTq9RollgCntr_Val(HwTq9RollgCntr_Cnt_T_u08);
        (void) Rte_Write_HwTq9Qlfr_Val(HwTq9Qlfr_Cnt_T_enum); 
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq9MeasPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
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
 * Symbol: HwTq9MeasPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwTq9Meas_CODE) HwTq9MeasPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq9MeasPer2
 *********************************************************************************************************************/
        /*** Trim Performed */
        if( Rte_Pim_HwTq9Offs()->OffsTrimPrfmdSts != FALSE )
        {
                (void)Rte_Call_SetNtcSts_Oper(HwTq9MEAS_HwTq9MFGNTCNR_CNT_ENUM, ELECGLBPRM_NOFLT_CNT_U08, NTCSTS_PASSD, 0U);
        }
        else  /*** Trim Not Performed */
        {
                (void)Rte_Call_SetNtcSts_Oper(HwTq9MEAS_HwTq9MFGNTCNR_CNT_ENUM, ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08, NTCSTS_FAILD, 0U);
        }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HwTq9Meas_STOP_SEC_CODE
#include "HwTq9Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*********************************************************************************************************************
* Name        : StuckNoDataSeln
* Description : The implementation for Stuck/No data selection..
* Inputs      : None
* Outputs     : MissMsgEna_Uls_T_u08
* Usage Notes : None
**********************************************************************************************************************/
static FUNC(uint8, HwTq9Meas_CODE) StuckNoDataSeln(void)
{
        VAR(uint32,  AUTOMATIC) TempTiStampAbslt_Cnt_T_u32;
        VAR(boolean, AUTOMATIC) TempTiStampComp1_Cnt_T_Logl;
        VAR(boolean, AUTOMATIC) TempTiStampComp2_Cnt_T_Logl;
        VAR(uint8,   AUTOMATIC) MissMsgEna_Uls_T_u08;
        
        if ( *Rte_Pim_HwTq9TiStamp() > *Rte_Pim_HwTq9TiStampPrev() )
        {
                TempTiStampComp1_Cnt_T_Logl = TRUE;
        }
        else
        {
                TempTiStampComp1_Cnt_T_Logl = FALSE;
        }
        if ( *Rte_Pim_HwTq9TiStamp() < *Rte_Pim_HwTq9TiStampPrev() )
        {
                TempTiStampComp2_Cnt_T_Logl = TRUE;
        }
        else
        {
                TempTiStampComp2_Cnt_T_Logl = FALSE;
        }
        TempTiStampAbslt_Cnt_T_u32 = Abslt_u32_s32((sint32)*Rte_Pim_HwTq9TiStampPrev() - (sint32)*Rte_Pim_HwTq9TiStamp());
                
        if ( (TempTiStampComp1_Cnt_T_Logl == TRUE) ||
                ((TempTiStampComp2_Cnt_T_Logl == TRUE) && (TempTiStampAbslt_Cnt_T_u32 > HWTQ9TISTAMPROLLOVER_NANOSEC_S32)) )
        {
                MissMsgEna_Uls_T_u08 = 0U;
        }
        else 
        {
                MissMsgEna_Uls_T_u08 = 1U;
        }
        *Rte_Pim_HwTq9TiStampPrev() = *Rte_Pim_HwTq9TiStamp();
        
        return MissMsgEna_Uls_T_u08;
}

/*********************************************************************************************************************
 * Name        : RngChk
 * Description : The implementation for Stuck/No data selection..
 * Inputs      : Temp_Cnt_T_u32
 * Outputs     : RngChk_Cnt_T_logl
 * Usage Notes : None
 **********************************************************************************************************************/
static FUNC(boolean, HwTq9Meas_CODE) RngChk(uint32 Temp_Cnt_T_u32)
{
        VAR(boolean, AUTOMATIC) RngChk_Cnt_T_logl;
        
        if ( (Temp_Cnt_T_u32 <= *Rte_Pim_HwTq9DataPlsHiLim()) && (Temp_Cnt_T_u32 >= *Rte_Pim_HwTq9DataPlsLoLim()) )
        {
                RngChk_Cnt_T_logl = TRUE;
        }
        else
        {
                RngChk_Cnt_T_logl = FALSE;
        }
        return RngChk_Cnt_T_logl;
}

/*********************************************************************************************************************
 * Name        : CrcChk
 * Description : The implementation for Stuck/No data selection..
 * Inputs      : ComputedCrc_Cnt_T_u16, ExpectedCrc_Cnt_T_u16
 * Outputs     : CRCFaildPrmByte_Cnt_T_u08
 * Usage Notes : None
 **********************************************************************************************************************/
static FUNC(uint8, HwTq9Meas_CODE) CrcChk(uint16 ComputedCrc_Cnt_T_u16, uint16 ExpectedCrc_Cnt_T_u16)
{
        VAR(uint8,   AUTOMATIC) CRCFaildPrmByte_Cnt_T_u08;
        VAR(uint8,       AUTOMATIC) OutpNr_Cnt_T_u08;
        
        if ( ComputedCrc_Cnt_T_u16 != ExpectedCrc_Cnt_T_u16 )
        {
                OutpNr_Cnt_T_u08 = 1U; 
        }
        else
        {
                OutpNr_Cnt_T_u08 = 0U;
        }
        
        CRCFaildPrmByte_Cnt_T_u08 = OutpNr_Cnt_T_u08 << CRCFLTPARAMBYTE_CNT_U08;
        return CRCFaildPrmByte_Cnt_T_u08;
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
