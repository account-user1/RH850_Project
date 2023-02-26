/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  ImcSigArbn.c
 *        Config:  E:/EA4NewTemplate/SF063A_ImcSigArbn_Impl/tools/Component.dpa
 *     SW-C Type:  ImcSigArbn
 *  Generated at:  Wed Aug 16 17:13:37 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <ImcSigArbn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
/*********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : ImcSigArbn.c
* Module Description: IMC Signal Arbitration defines requirements for sharing signals and serves as a single function
*                     of contact to obtain information from the other controller in a dual ECU structure. It also
*                     defines requirements for arbitration of signals and integrator states to ensure performance.
* Project           : CBD
* Author            : Shruthi Raghavan
**********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       rzk04c %
*----------------------------------------------------------------------------------------------------------------------
*   Date      Rev     Author                            Change Description                                     SCR#
* --------  -------  --------  --------------------------------------------------------------------------   -----------
* 02/01/17     1       SR       Initial Implementation of ImcSigArbn from FDD                               EA4#7154
*                               Fix for Issues in Requirement verification attributes found during MIL Test EA4#9349
* 05/11/17     2       KK       Fix for Issues in using Return value of ImcData  							EA4#11626
* 08/16/17     3       AJM      Added check for system state in Per2              							EA4#14396
***********************************************************************************************************************/

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
 * ImcArbnRxSts1
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
 * SysSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_ImcSigArbn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 /* ---- [ File Includes ] ---- */
  #include "NxtrMath.h"
  #include "NxtrFil.h"
  #include "NxtrFixdPt.h"
  #include "ImcArbn.h"
  #include "ElecGlbPrm.h"
  #include "ArchGlbPrm.h"


 /* ---- [ MISRA Deviation Comments ] ---- */
 /* MISRA-C:2004 Rule 19.1  [NXTRDEV 19.1.1]  : AUTOSAR requires deviation from this rule for Memory Mapping include statements  */
 /* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1] : There is no appropriate action to take on the return value for RTE Read/Writes &
                                                SetNtcSts, GetImcSigData_u08, GetImcSigData_logl and GetImcSigData_f32           */
 /* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2] : Server runnable is a void functon; Rte generation adds standard return type but 
                                                no error information is returned [Rte_Call_GetRefTmr100MicroSec32bit_Oper and 
                                                Rte_Call_GetTiSpan100MicroSec32bit_Oper]                                         */


 /* ---- [ Local Constant Definitions ] --- */
  #define CNV100MICROSECTOMILLISEC_ULS_F32 0.1F
  #define ECUIDNTOSETFLT_ULS_U08 2U
  #define HWAGSATNLOWLIM_HWDEG_F32 (-1440.0F)
  #define HWAGSATNUPPRLIM_HWDEG_F32 1440.0F
  #define IMCOFFS_ULS_F32 0.5F
  #define INTGTROFFSSATNLOWLIM_ULS_F32 (-32767.5F)
  #define INTGTROFFSSATNUPPRLIM_ULS_F32 32767.5F
  #define MOTVELCRFSATNLOWLIM_MOTRADPERSEC_F32 (-1350.0F)
  #define MOTVELCRFSATNUPPRLIM_MOTRADPERSEC_F32 1350.0F
  #define NODEBSTEP_CNT_U16 65535U
  #define POSNTRAKGINTGTRST2SATNLOWLIM_NWT_F32 (-20000.0F)
  #define POSNTRAKGINTGTRST2SATNUPPRLIM_NWT_F32 20000.0F
  #define VEHSPDSATNLOWLIM_KPH_F32 0.0F
  #define VEHSPDSATNUPPRLIM_KPH_F32 511.0F


  /* ---- [ Local Function Declarations ]---- */
  static FUNC(float32,ImcSigArbn_CODE)CalcImcSigOffs(VAR(boolean      , AUTOMATIC) ImcSigArbnEna_Cnt_T_logl,
                                                     VAR(float32      , AUTOMATIC) InpSig_Uls_T_f32,
                                                     VAR(float32      , AUTOMATIC) ImcSig_Uls_T_f32,
                                                     P2VAR(FilLpRec1    , AUTOMATIC, AUTOMATIC) SigLpFil_Uls_T_str,
                                                     P2VAR(float32      , AUTOMATIC, AUTOMATIC) OutSigPrev_Uls_T_f32,
                                                     VAR(float32      , AUTOMATIC) ImcSigArbnSigOffsLim_Uls_T_f32,
												     VAR(ImcArbnRxSts1, AUTOMATIC) Sts_Cnt_T_enum,
												     VAR(Std_ReturnType, AUTOMATIC) Rtn_Cnt_T_enum);

  static FUNC(void,ImcSigArbn_CODE) SetArbnNtc(VAR(float32, AUTOMATIC) ElpdTi_MilliSec_T_f32);

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
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * ImcArbnRxSts1: Enumeration of integer in interval [0...255] with enumerators
 *   IMCARBNRXSTS_NODATA (0U)
 *   IMCARBNRXSTS_VLD (1U)
 *   IMCARBNRXSTS_INVLD (2U)
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
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
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
 *   float32 *Rte_Pim_HwAgOffsPrev(void)
 *   float32 *Rte_Pim_HwAgTarOffsPrev(void)
 *   float32 *Rte_Pim_HwTqOffsPrev(void)
 *   float32 *Rte_Pim_MotVelCrfOffsPrev(void)
 *   float32 *Rte_Pim_PosnServoIntgtrOffsPrev(void)
 *   float32 *Rte_Pim_PullCmpLongTermIntgtrStOffsPrev(void)
 *   float32 *Rte_Pim_PullCmpShoTermIntgtrStOffsPrev(void)
 *   float32 *Rte_Pim_TrakgIntgtrSt1Offs(void)
 *   float32 *Rte_Pim_TrakgIntgtrSt2Offs(void)
 *   float32 *Rte_Pim_VehSpdOffsPrev(void)
 *   uint32 *Rte_Pim_ArbnFltRefTiEnaLrng(void)
 *   uint32 *Rte_Pim_SysStRefTiEnaLrng(void)
 *   boolean *Rte_Pim_ArbnErrPrev(void)
 *   boolean *Rte_Pim_ArbnFltPrev(void)
 *   boolean *Rte_Pim_SysStLrngEnaPrev(void)
 *   FilLpRec1 *Rte_Pim_HwAgLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwAgTarLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqLpFil(void)
 *   FilLpRec1 *Rte_Pim_MotVelLpFil(void)
 *   FilLpRec1 *Rte_Pim_PosnServoIntgtrLpFil(void)
 *   FilLpRec1 *Rte_Pim_PullCmpLongTermCmpLpFil(void)
 *   FilLpRec1 *Rte_Pim_PullCmpShoTermCmpLpFil(void)
 *   FilLpRec1 *Rte_Pim_TrakgIntgtrSt1LpFil(void)
 *   FilLpRec1 *Rte_Pim_TrakgIntgtrSt2LpFil(void)
 *   FilLpRec1 *Rte_Pim_VehSpdLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_ImcSigArbnArbnFltTmr_Val(void)
 *   float32 Rte_Prm_ImcSigArbnHwAgArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnHwAgArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnHwAgTarArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnHwAgTarArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnHwTqArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnHwTqArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnMotVelArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnMotVelArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnPosnServoArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnPosnServoIntgtrStArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnPosnTrakg1ArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnPosnTrakg2ArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnPullCmpLongTermArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnPullCmpShoTermArbnOffsLim_Val(void)
 *   float32 Rte_Prm_ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnSysStTmr_Val(void)
 *   float32 Rte_Prm_ImcSigArbnTrakgIntgtrSt1ArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnTrakgIntgtrSt2ArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnVehSpdArbnLpFil_Val(void)
 *   float32 Rte_Prm_ImcSigArbnVehSpdArbnOffsLim_Val(void)
 *   boolean Rte_Prm_ImcSigArbnHwAgArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnHwAgTarArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnHwTqArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnMotVelArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnPosnServoIntgtrStArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnPullCmpLongTermIntgtrStArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnPullCmpShoTermIntgtrStArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnTrakgIntgtrSt1ArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnTrakgIntgtrSt2ArbnEna_Logl(void)
 *   boolean Rte_Prm_ImcSigArbnVehSpdArbnEna_Logl(void)
 *
 *********************************************************************************************************************/


#define ImcSigArbn_START_SEC_CODE
#include "ImcSigArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcSigArbnInit1
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
 * Symbol: ImcSigArbnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ImcSigArbn_CODE) ImcSigArbnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcSigArbnInit1
 *********************************************************************************************************************/
    /*Filter Initializations*/
    (void)FilLpInit(0.0F,Rte_Prm_ImcSigArbnHwAgArbnLpFil_Val(),ARCHGLBPRM_10MILLISEC_SEC_F32,Rte_Pim_HwAgLpFil());
    (void)FilLpInit(0.0F,Rte_Prm_ImcSigArbnHwTqArbnLpFil_Val(),ARCHGLBPRM_10MILLISEC_SEC_F32,Rte_Pim_HwTqLpFil());
    (void)FilLpInit(0.0F,Rte_Prm_ImcSigArbnMotVelArbnLpFil_Val(),ARCHGLBPRM_10MILLISEC_SEC_F32,Rte_Pim_MotVelLpFil());
    (void)FilLpInit(0.0F,Rte_Prm_ImcSigArbnVehSpdArbnLpFil_Val(),ARCHGLBPRM_10MILLISEC_SEC_F32,Rte_Pim_VehSpdLpFil());
    (void)FilLpInit(0.0F,Rte_Prm_ImcSigArbnHwAgTarArbnLpFil_Val(),ARCHGLBPRM_10MILLISEC_SEC_F32,Rte_Pim_HwAgTarLpFil());
    (void)FilLpInit(0.0F,Rte_Prm_ImcSigArbnTrakgIntgtrSt1ArbnLpFil_Val(),ARCHGLBPRM_10MILLISEC_SEC_F32,Rte_Pim_TrakgIntgtrSt1LpFil());
    (void)FilLpInit(0.0F,Rte_Prm_ImcSigArbnTrakgIntgtrSt2ArbnLpFil_Val(),ARCHGLBPRM_10MILLISEC_SEC_F32,Rte_Pim_TrakgIntgtrSt2LpFil());
    (void)FilLpInit(0.0F,Rte_Prm_ImcSigArbnPosnServoIntgtrStArbnLpFil_Val(),ARCHGLBPRM_10MILLISEC_SEC_F32,Rte_Pim_PosnServoIntgtrLpFil());
    (void)FilLpInit(0.0F,Rte_Prm_ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil_Val(),ARCHGLBPRM_10MILLISEC_SEC_F32 ,Rte_Pim_PullCmpShoTermCmpLpFil());
    (void)FilLpInit(0.0F,Rte_Prm_ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil_Val(),ARCHGLBPRM_10MILLISEC_SEC_F32,Rte_Pim_PullCmpLongTermCmpLpFil());
    /*SetNtcSts*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0D6,0U,NTCSTS_PASSD,NODEBSTEP_CNT_U16);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcSigArbnPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnServoHwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgImcCorrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTqImcCorrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_ImcSysSt_Val(SysSt1 data)
 *   Std_ReturnType Rte_Write_ImcSysStVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotVelCrfImcCorrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_PosnServoHwAgImcCorrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehSpdImcCorrd_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_ImcSigArbnPer1_HwAgOffs(void)
 *   float32 Rte_IrvRead_ImcSigArbnPer1_HwAgTarOffs(void)
 *   float32 Rte_IrvRead_ImcSigArbnPer1_HwTqOffs(void)
 *   SysSt1 Rte_IrvRead_ImcSigArbnPer1_ImcSysSt10MilliSec(void)
 *   boolean Rte_IrvRead_ImcSigArbnPer1_ImcSysStVld10MilliSec(void)
 *   float32 Rte_IrvRead_ImcSigArbnPer1_MotVelCrfOffs(void)
 *   float32 Rte_IrvRead_ImcSigArbnPer1_VehSpdOffs(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetImcSigData_u08_Oper(uint16 SigId_Arg, uint8 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_u08_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcSigArbnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ImcSigArbn_CODE) ImcSigArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcSigArbnPer1
 *********************************************************************************************************************/
    /*Temporary Variables*/
    VAR(float32      , AUTOMATIC) HwAg_HwDeg_T_f32;
    VAR(float32      , AUTOMATIC) HwTq_HwNwtMtr_T_f32;
    VAR(float32      , AUTOMATIC) MotVelCrf_MotRadPerSec_T_f32;
    VAR(float32      , AUTOMATIC) PosnServoHwAg_HwDeg_T_f32;
    VAR(float32      , AUTOMATIC) VehSpd_Kph_T_f32;
    VAR(float32      , AUTOMATIC) HwAgOffs_HwDeg_T_f32;
    VAR(float32      , AUTOMATIC) HwAgTarOffs_HwDeg_T_f32;
    VAR(float32      , AUTOMATIC) HwTqOffs_HwNwtMtr_T_f32;
    VAR(SysSt1       , AUTOMATIC) ImcSysSt10MilliSec_Cnt_T_enum;
    VAR(boolean		 , AUTOMATIC) ImcSysStVld10MilliSec_Cnt_T_logl;
    VAR(float32      , AUTOMATIC) MotVelOffs_MotRadPerSec_T_f32;
    VAR(float32      , AUTOMATIC) VehSpdOffs_Kph_T_f32;
    VAR(SysSt1       , AUTOMATIC) ImcSysSt2MilliSec_Cnt_T_enum;
    VAR(ImcArbnRxSts1, AUTOMATIC) ImcSysStVld2MilliSecSts_Cnt_T_enum;
    VAR(Std_ReturnType, AUTOMATIC) ImcSysStVld2MilliSecRtn_Cnt_T_enum;
    VAR(float32      , AUTOMATIC) ElpdTi_MilliSec_T_f32;
    VAR(uint32       , AUTOMATIC) ElpdTi_Cnt_T_u32;
    VAR(SysSt1       , AUTOMATIC) ImcSysSt_Cnt_T_enum;
    VAR(boolean		 , AUTOMATIC) ImcSysStVld_Cnt_T_logl;
    VAR(boolean		 , AUTOMATIC) ImcSysStVld2MilliSec_Cnt_T_logl = FALSE;

    /*Read RTE Inputs*/
    (void)Rte_Read_HwAg_Val(&HwAg_HwDeg_T_f32);
    (void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
    (void)Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);
    (void)Rte_Read_PosnServoHwAg_Val(&PosnServoHwAg_HwDeg_T_f32);
    (void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);

    /*Read Inter-runnable Variables*/
    HwAgOffs_HwDeg_T_f32             = Rte_IrvRead_ImcSigArbnPer1_HwAgOffs();
    HwAgTarOffs_HwDeg_T_f32          = Rte_IrvRead_ImcSigArbnPer1_HwAgTarOffs();
    HwTqOffs_HwNwtMtr_T_f32          = Rte_IrvRead_ImcSigArbnPer1_HwTqOffs();
    ImcSysSt10MilliSec_Cnt_T_enum    = Rte_IrvRead_ImcSigArbnPer1_ImcSysSt10MilliSec();
    ImcSysStVld10MilliSec_Cnt_T_logl = Rte_IrvRead_ImcSigArbnPer1_ImcSysStVld10MilliSec();
    MotVelOffs_MotRadPerSec_T_f32    = Rte_IrvRead_ImcSigArbnPer1_MotVelCrfOffs();
    VehSpdOffs_Kph_T_f32             = Rte_IrvRead_ImcSigArbnPer1_VehSpdOffs();

    /*Get IMC Data*/
    ImcSysStVld2MilliSecRtn_Cnt_T_enum = Rte_Call_GetImcSigData_u08_Oper(IMCARBN_IMCSIGARBNSYSSTSCI_CNT_U16,&ImcSysSt2MilliSec_Cnt_T_enum,&ImcSysStVld2MilliSecSts_Cnt_T_enum);

    if((ImcSysStVld2MilliSecSts_Cnt_T_enum == IMCARBNRXSTS_VLD) && (ImcSysStVld2MilliSecRtn_Cnt_T_enum != E_NOT_OK))
	{
		ImcSysStVld2MilliSec_Cnt_T_logl = TRUE;
	}
		
	/*Determine Elapsed Time since Valid 2Millisec Imc signal & update SysStLrngEnaPrev*/
    if(ImcSysStVld2MilliSec_Cnt_T_logl != TRUE)
    {
        ElpdTi_MilliSec_T_f32 = 0.0F;
        *Rte_Pim_SysStLrngEnaPrev() = FALSE;
    }
    else
    {
        if(*Rte_Pim_SysStLrngEnaPrev() == FALSE)
        {
            ElpdTi_MilliSec_T_f32 = 0.0F;
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_SysStRefTiEnaLrng());
        }
        else
        {
            (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_SysStRefTiEnaLrng(),&ElpdTi_Cnt_T_u32);
            ElpdTi_MilliSec_T_f32 = FixdToFloat_f32_u32(ElpdTi_Cnt_T_u32,NXTRFIXDPT_P0TOFLOAT_ULS_F32)*CNV100MICROSECTOMILLISEC_ULS_F32;
        }
        *Rte_Pim_SysStLrngEnaPrev() = TRUE;
    }

    if(ElpdTi_MilliSec_T_f32 >= Rte_Prm_ImcSigArbnSysStTmr_Val())
    {
        /*10ms SysSt*/
        ImcSysSt_Cnt_T_enum     = ImcSysSt10MilliSec_Cnt_T_enum;
        ImcSysStVld_Cnt_T_logl  = ImcSysStVld10MilliSec_Cnt_T_logl;
    }
    else
    {
        /*2ms SysSt*/
        ImcSysSt_Cnt_T_enum     = ImcSysSt2MilliSec_Cnt_T_enum;
        ImcSysStVld_Cnt_T_logl  = ImcSysStVld2MilliSec_Cnt_T_logl;
    }
    
    /*Calculate outputs & Limit them*/
    /*Write all RTE Outputs*/
    (void)Rte_Write_HwAgImcCorrd_Val(Lim_f32((HwAg_HwDeg_T_f32-HwAgOffs_HwDeg_T_f32),HWAGSATNLOWLIM_HWDEG_F32,HWAGSATNUPPRLIM_HWDEG_F32));
    (void)Rte_Write_HwTqImcCorrd_Val(Lim_f32((HwTq_HwNwtMtr_T_f32-HwTqOffs_HwNwtMtr_T_f32),ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32,ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32));
    (void)Rte_Write_ImcSysSt_Val(ImcSysSt_Cnt_T_enum);
    (void)Rte_Write_ImcSysStVld_Logl(ImcSysStVld_Cnt_T_logl);
    (void)Rte_Write_MotVelCrfImcCorrd_Val(Lim_f32((MotVelCrf_MotRadPerSec_T_f32-MotVelOffs_MotRadPerSec_T_f32),
                                                                          MOTVELCRFSATNLOWLIM_MOTRADPERSEC_F32,
                                                                          MOTVELCRFSATNUPPRLIM_MOTRADPERSEC_F32));
    (void)Rte_Write_PosnServoHwAgImcCorrd_Val(Lim_f32((PosnServoHwAg_HwDeg_T_f32-HwAgTarOffs_HwDeg_T_f32),HWAGSATNLOWLIM_HWDEG_F32,HWAGSATNUPPRLIM_HWDEG_F32));
    (void)Rte_Write_VehSpdImcCorrd_Val(Lim_f32((VehSpd_Kph_T_f32-VehSpdOffs_Kph_T_f32),VEHSPDSATNLOWLIM_KPH_F32,VEHSPDSATNUPPRLIM_KPH_F32));

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ImcSigArbnPer2
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
 *   Std_ReturnType Rte_Read_EcuIdn_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnServoHwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnServoIntgtrSt_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnTrakgIntgtrSt1_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnTrakgIntgtrSt2_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PullCmpLongTermIntgtrSt_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PullCmpShoTermIntgtrSt_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PosnServoIntgtrOffs_Val(float32 data)
 *   Std_ReturnType Rte_Write_PosnTrakgArbnFltMtgtnEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_PosnTrakgIntgtrSt1Offs_Val(float32 data)
 *   Std_ReturnType Rte_Write_PosnTrakgIntgtrSt2Offs_Val(float32 data)
 *   Std_ReturnType Rte_Write_PullCmpLongTermIntgtrStOffs_Val(float32 data)
 *   Std_ReturnType Rte_Write_PullCmpShoTermIntgtrStOffs_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_ImcSigArbnPer2_HwAgOffs(float32 data)
 *   void Rte_IrvWrite_ImcSigArbnPer2_HwAgTarOffs(float32 data)
 *   void Rte_IrvWrite_ImcSigArbnPer2_HwTqOffs(float32 data)
 *   void Rte_IrvWrite_ImcSigArbnPer2_ImcSysSt10MilliSec(SysSt1 data)
 *   void Rte_IrvWrite_ImcSigArbnPer2_ImcSysStVld10MilliSec(boolean data)
 *   void Rte_IrvWrite_ImcSigArbnPer2_MotVelCrfOffs(float32 data)
 *   void Rte_IrvWrite_ImcSigArbnPer2_VehSpdOffs(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetImcSigData_f32_Oper(uint16 SigId_Arg, float32 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_f32_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetImcSigData_logl_Oper(uint16 SigId_Arg, boolean *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetImcSigData_u08_Oper(uint16 SigId_Arg, uint8 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_u08_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcSigArbnPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ImcSigArbn_CODE) ImcSigArbnPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ImcSigArbnPer2
 *********************************************************************************************************************/
    /*Temporary Variables*/
    VAR(uint8        , AUTOMATIC) EcuIdn_Cnt_T_u08;
    VAR(float32      , AUTOMATIC) HwAg_HwDeg_T_f32;
    VAR(float32      , AUTOMATIC) HwAgTar_HwDeg_T_f32;
    VAR(float32      , AUTOMATIC) MotVelCrf_MotRadPerSec_T_f32;
    VAR(float32      , AUTOMATIC) VehSpd_Kph_T_f32;
    VAR(float32      , AUTOMATIC) PosnTrakgIntgtrSt1_HwDegPerSec_T_f32;
    VAR(float32      , AUTOMATIC) HwTq_HwNwtMtr_T_f32;
    VAR(float32      , AUTOMATIC) PosnTrakgIntgtrSt2_Nwt_T_f32;
    VAR(float32      , AUTOMATIC) PullCmpLongTermSt_HwNwtMtr_T_f32;
    VAR(float32      , AUTOMATIC) PullCmpShoTermSt_HwNwtMtr_T_f32;
    VAR(float32      , AUTOMATIC) PosnServoIntgtrSt_HwNwtMtr_T_f32;
    VAR(float32      , AUTOMATIC) ImcHwAg_HwDeg_T_f32;
    VAR(ImcArbnRxSts1, AUTOMATIC) ImcHwAgVldSts_Cnt_T_enum;
    VAR(float32      , AUTOMATIC) ImcHwAgTar_HwDeg_T_f32;
    VAR(ImcArbnRxSts1, AUTOMATIC) ImcHwAgTarVldSts_Cnt_T_enum;
    VAR(float32      , AUTOMATIC) ImcMotVelCrf_MotRadPerSec_T_f32;
    VAR(ImcArbnRxSts1, AUTOMATIC) ImcMotVelCrfVldSts_Cnt_T_enum;
    VAR(float32      , AUTOMATIC) ImcVehSpd_Kph_T_f32;
    VAR(ImcArbnRxSts1, AUTOMATIC) ImcVehSpdVldSts_Cnt_T_enum;
    VAR(float32      , AUTOMATIC) ImcHwTq_HwNwtMtr_T_f32;
    VAR(ImcArbnRxSts1, AUTOMATIC) ImcHwTqVldSts_Cnt_T_enum;
    VAR(float32      , AUTOMATIC) ImcPosnTrakgIntgtrSt1_HwDegPerSec_T_f32;
    VAR(ImcArbnRxSts1, AUTOMATIC) ImcPosnTrakgIntgtrSt1VldSts_Cnt_T_enum;
    VAR(float32      , AUTOMATIC) ImcPosnTrakgIntgtrSt2_Nwt_T_f32;
    VAR(ImcArbnRxSts1, AUTOMATIC) ImcPosnTrakgIntgtrSt2VldSts_Cnt_T_enum;
    VAR(float32      , AUTOMATIC) ImcPullCmpLongTermSt_HwNwtMtr_T_f32;
    VAR(ImcArbnRxSts1, AUTOMATIC) ImcPullCmpLongTermStVldSts_Cnt_T_enum;
    VAR(float32      , AUTOMATIC) ImcPullCmpShoTermSt_HwNwtMtr_T_f32;
    VAR(ImcArbnRxSts1, AUTOMATIC) ImcPullCmpShoTermStVldSts_Cnt_T_enum;
    VAR(float32      , AUTOMATIC) ImcPosnServoIntgtrSt_HwNwtMtr_T_f32;
    VAR(ImcArbnRxSts1, AUTOMATIC) ImcPosnServoIntgtrStVldSts_Cnt_T_enum;
    VAR(boolean      , AUTOMATIC) ImcDftVehSpdVld_Cnt_T_logl;
    VAR(ImcArbnRxSts1, AUTOMATIC) DftVehSpdVldImcVldSts_Cnt_T_enum;
    VAR(float32      , AUTOMATIC) DftVehSpdOffsCorrd_Kph_T_f32;
    VAR(uint32       , AUTOMATIC) ElpdTi_Cnt_T_u32;
    VAR(float32      , AUTOMATIC) ElpdTi_MilliSec_T_f32;
    VAR(float32      , AUTOMATIC) PosnServoIntgtrOffs_HwNwtMtr_T_f32;
    VAR(boolean      , AUTOMATIC) DftVehSpdVldImcVld_Cnt_T_logl = FALSE;
    VAR(boolean      , AUTOMATIC) ImcSysStVld10MilliSec_Cnt_T_logl = FALSE;
    VAR(boolean      , AUTOMATIC) PosnTrakgArbnFltMtgtnEna_Cnt_T_logl = FALSE;
    VAR(float32      , AUTOMATIC) PosnTrakgIntgtrSt1Offs_HwDegPerSec_T_f32;
    VAR(float32      , AUTOMATIC) PosnTrakgIntgtrSt2Offs_Nwt_T_f32;
    VAR(float32      , AUTOMATIC) PullCmpLongTermIntgtrStOffs_HwNwtMtr_T_f32;
    VAR(float32      , AUTOMATIC) PullCmpShoTermIntgtrStOffs_HwNwtMtr_T_f32;
    VAR(float32      , AUTOMATIC) HwAgOffs_HwDeg_T_f32;
    VAR(float32      , AUTOMATIC) HwAgTarOffs_HwDeg_T_f32;
    VAR(float32      , AUTOMATIC) HwTqOffs_HwNwtMtr_T_f32;
    VAR(SysSt1       , AUTOMATIC) ImcSysSt10MilliSec_Cnt_T_enum;
    VAR(ImcArbnRxSts1, AUTOMATIC) ImcSysStVld10MilliSecSts_Cnt_T_enum;
    VAR(float32      , AUTOMATIC) MotVelCrfOffs_MotRadPerSec_T_f32;
    VAR(float32      , AUTOMATIC) VehSpdOffs_Kph_T_f32;
	
	VAR(Std_ReturnType, AUTOMATIC) ImcHwAgVldRtn_Cnt_T_enum; 					
	VAR(Std_ReturnType, AUTOMATIC) ImcHwAgTarVldRtn_Cnt_T_enum; 				
	VAR(Std_ReturnType, AUTOMATIC) ImcMotVelCrfVldRtn_Cnt_T_enum; 				
	VAR(Std_ReturnType, AUTOMATIC) ImcVehSpdVldRtn_Cnt_T_enum; 					
	VAR(Std_ReturnType, AUTOMATIC) ImcHwTqVldRtn_Cnt_T_enum; 					
	VAR(Std_ReturnType, AUTOMATIC) ImcPosnTrakgIntgtrSt1VldRtn_Cnt_T_enum; 		
	VAR(Std_ReturnType, AUTOMATIC) ImcPosnTrakgIntgtrSt2VldRtn_Cnt_T_enum; 		
	VAR(Std_ReturnType, AUTOMATIC) ImcPullCmpLongTermStVldRtn_Cnt_T_enum; 		
	VAR(Std_ReturnType, AUTOMATIC) ImcSysStVld10MilliSecRtn_Cnt_T_enum; 		
	VAR(Std_ReturnType, AUTOMATIC) ImcPullCmpShoTermStVldRtn_Cnt_T_enum; 		
	VAR(Std_ReturnType, AUTOMATIC) ImcPosnServoIntgtrStVldRtn_Cnt_T_enum; 		
	VAR(Std_ReturnType, AUTOMATIC) DftVehSpdVldImcVldRtn_Cnt_T_enum;
	
	/*Read RTE inputs*/
    (void)Rte_Read_EcuIdn_Val(&EcuIdn_Cnt_T_u08);
    (void)Rte_Read_HwAg_Val(&HwAg_HwDeg_T_f32);
    (void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
    (void)Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);
    (void)Rte_Read_PosnServoHwAg_Val(&HwAgTar_HwDeg_T_f32);
    (void)Rte_Read_PosnServoIntgtrSt_Val(&PosnServoIntgtrSt_HwNwtMtr_T_f32);
    (void)Rte_Read_PosnTrakgIntgtrSt1_Val(&PosnTrakgIntgtrSt1_HwDegPerSec_T_f32);
    (void)Rte_Read_PosnTrakgIntgtrSt2_Val(&PosnTrakgIntgtrSt2_Nwt_T_f32);
    (void)Rte_Read_PullCmpLongTermIntgtrSt_Val(&PullCmpLongTermSt_HwNwtMtr_T_f32);
    (void)Rte_Read_PullCmpShoTermIntgtrSt_Val(&PullCmpShoTermSt_HwNwtMtr_T_f32);
    (void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);

    /*Read Imc Signals from other controller*/
    ImcHwAgVldRtn_Cnt_T_enum = Rte_Call_GetImcSigData_f32_Oper(IMCARBN_IMCSIGARBNHWAG_CNT_U16,&ImcHwAg_HwDeg_T_f32,&ImcHwAgVldSts_Cnt_T_enum);
	ImcHwAgTarVldRtn_Cnt_T_enum = Rte_Call_GetImcSigData_f32_Oper(IMCARBN_IMCSIGARBNHWAGTAR_CNT_U16,&ImcHwAgTar_HwDeg_T_f32,&ImcHwAgTarVldSts_Cnt_T_enum);
    ImcMotVelCrfVldRtn_Cnt_T_enum = Rte_Call_GetImcSigData_f32_Oper(IMCARBN_IMCSIGARBNMOTVEL_CNT_U16,&ImcMotVelCrf_MotRadPerSec_T_f32,&ImcMotVelCrfVldSts_Cnt_T_enum);
    ImcVehSpdVldRtn_Cnt_T_enum = Rte_Call_GetImcSigData_f32_Oper(IMCARBN_IMCSIGARBNVEHSPD_CNT_U16,&ImcVehSpd_Kph_T_f32,&ImcVehSpdVldSts_Cnt_T_enum);
    ImcHwTqVldRtn_Cnt_T_enum = Rte_Call_GetImcSigData_f32_Oper(IMCARBN_IMCSIGARBNHWTQ_CNT_U16,&ImcHwTq_HwNwtMtr_T_f32,&ImcHwTqVldSts_Cnt_T_enum);
    ImcPosnTrakgIntgtrSt1VldRtn_Cnt_T_enum = Rte_Call_GetImcSigData_f32_Oper(IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST1_CNT_U16,&ImcPosnTrakgIntgtrSt1_HwDegPerSec_T_f32,&ImcPosnTrakgIntgtrSt1VldSts_Cnt_T_enum);
    ImcPosnTrakgIntgtrSt2VldRtn_Cnt_T_enum = Rte_Call_GetImcSigData_f32_Oper(IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST2_CNT_U16,&ImcPosnTrakgIntgtrSt2_Nwt_T_f32,&ImcPosnTrakgIntgtrSt2VldSts_Cnt_T_enum);
    ImcPullCmpLongTermStVldRtn_Cnt_T_enum = Rte_Call_GetImcSigData_f32_Oper(IMCARBN_IMCSIGARBNPULLCMPLONGTERMCMPST_CNT_U16,&ImcPullCmpLongTermSt_HwNwtMtr_T_f32,&ImcPullCmpLongTermStVldSts_Cnt_T_enum);
    ImcSysStVld10MilliSecRtn_Cnt_T_enum = Rte_Call_GetImcSigData_u08_Oper(IMCARBN_IMCSIGARBNSYSST_CNT_U16,&ImcSysSt10MilliSec_Cnt_T_enum,&ImcSysStVld10MilliSecSts_Cnt_T_enum);
	if((ImcSysStVld10MilliSecSts_Cnt_T_enum == IMCARBNRXSTS_VLD) && (ImcSysStVld10MilliSecRtn_Cnt_T_enum != E_NOT_OK))
	{
		ImcSysStVld10MilliSec_Cnt_T_logl = TRUE;
	}
    ImcPullCmpShoTermStVldRtn_Cnt_T_enum = Rte_Call_GetImcSigData_f32_Oper(IMCARBN_IMCSIGARBNPULLCMPSHOTERMCMPST_CNT_U16,&ImcPullCmpShoTermSt_HwNwtMtr_T_f32,&ImcPullCmpShoTermStVldSts_Cnt_T_enum);
    ImcPosnServoIntgtrStVldRtn_Cnt_T_enum = Rte_Call_GetImcSigData_f32_Oper(IMCARBN_IMCSIGARBNPOSNSERVOINTGTRST_CNT_U16,&ImcPosnServoIntgtrSt_HwNwtMtr_T_f32,&ImcPosnServoIntgtrStVldSts_Cnt_T_enum);
    DftVehSpdVldImcVldRtn_Cnt_T_enum = Rte_Call_GetImcSigData_logl_Oper(IMCARBN_IMCSIGARBNVEHSPDVLD_CNT_U16,&ImcDftVehSpdVld_Cnt_T_logl,&DftVehSpdVldImcVldSts_Cnt_T_enum);
	if((DftVehSpdVldImcVldSts_Cnt_T_enum == IMCARBNRXSTS_VLD) && (DftVehSpdVldImcVldRtn_Cnt_T_enum != E_NOT_OK))
	{
		DftVehSpdVldImcVld_Cnt_T_logl = TRUE;		
	}
	
	/*Calculate Offsets*/
    HwAgOffs_HwDeg_T_f32                       = CalcImcSigOffs(Rte_Prm_ImcSigArbnHwAgArbnEna_Logl(),
                                                                HwAg_HwDeg_T_f32,
                                                                ImcHwAg_HwDeg_T_f32,
                                                                Rte_Pim_HwAgLpFil(),
                                                                Rte_Pim_HwAgOffsPrev(),
                                                                Rte_Prm_ImcSigArbnHwAgArbnOffsLim_Val(),
																ImcHwAgVldSts_Cnt_T_enum,
																ImcHwAgVldRtn_Cnt_T_enum);

    HwAgTarOffs_HwDeg_T_f32                    = CalcImcSigOffs(Rte_Prm_ImcSigArbnHwAgTarArbnEna_Logl(),
                                                                HwAgTar_HwDeg_T_f32,
                                                                ImcHwAgTar_HwDeg_T_f32,
                                                                Rte_Pim_HwAgTarLpFil(),
                                                                Rte_Pim_HwAgTarOffsPrev(),
                                                                Rte_Prm_ImcSigArbnHwAgTarArbnOffsLim_Val(),
																ImcHwAgTarVldSts_Cnt_T_enum,
																ImcHwAgTarVldRtn_Cnt_T_enum);

    MotVelCrfOffs_MotRadPerSec_T_f32           = CalcImcSigOffs(Rte_Prm_ImcSigArbnMotVelArbnEna_Logl(),
                                                                MotVelCrf_MotRadPerSec_T_f32,
                                                                ImcMotVelCrf_MotRadPerSec_T_f32,
                                                                Rte_Pim_MotVelLpFil(),
                                                                Rte_Pim_MotVelCrfOffsPrev(),
                                                                Rte_Prm_ImcSigArbnMotVelArbnOffsLim_Val(),
																ImcMotVelCrfVldSts_Cnt_T_enum,
																ImcMotVelCrfVldRtn_Cnt_T_enum);

    VehSpdOffs_Kph_T_f32                       = CalcImcSigOffs(Rte_Prm_ImcSigArbnVehSpdArbnEna_Logl(),
                                                                VehSpd_Kph_T_f32,
                                                                ImcVehSpd_Kph_T_f32,
                                                                Rte_Pim_VehSpdLpFil(),
                                                                Rte_Pim_VehSpdOffsPrev(),
                                                                Rte_Prm_ImcSigArbnVehSpdArbnOffsLim_Val(),
																ImcVehSpdVldSts_Cnt_T_enum,
																ImcVehSpdVldRtn_Cnt_T_enum);

    HwTqOffs_HwNwtMtr_T_f32                    = CalcImcSigOffs(Rte_Prm_ImcSigArbnHwTqArbnEna_Logl(),
                                                                HwTq_HwNwtMtr_T_f32,
                                                                ImcHwTq_HwNwtMtr_T_f32,
                                                                Rte_Pim_HwTqLpFil(),
                                                                Rte_Pim_HwTqOffsPrev(),
                                                                Rte_Prm_ImcSigArbnHwTqArbnOffsLim_Val(),
																ImcHwTqVldSts_Cnt_T_enum,
																ImcHwTqVldRtn_Cnt_T_enum);

    PosnTrakgIntgtrSt1Offs_HwDegPerSec_T_f32   = CalcImcSigOffs(Rte_Prm_ImcSigArbnTrakgIntgtrSt1ArbnEna_Logl(),
                                                                PosnTrakgIntgtrSt1_HwDegPerSec_T_f32,
                                                                ImcPosnTrakgIntgtrSt1_HwDegPerSec_T_f32,
                                                                Rte_Pim_TrakgIntgtrSt1LpFil(),
                                                                Rte_Pim_TrakgIntgtrSt1Offs(),
                                                                Rte_Prm_ImcSigArbnPosnTrakg1ArbnOffsLim_Val(),
																ImcPosnTrakgIntgtrSt1VldSts_Cnt_T_enum,
																ImcPosnTrakgIntgtrSt1VldRtn_Cnt_T_enum);

    PosnTrakgIntgtrSt2Offs_Nwt_T_f32           = CalcImcSigOffs(Rte_Prm_ImcSigArbnTrakgIntgtrSt2ArbnEna_Logl(),
                                                                PosnTrakgIntgtrSt2_Nwt_T_f32,
                                                                ImcPosnTrakgIntgtrSt2_Nwt_T_f32,
                                                                Rte_Pim_TrakgIntgtrSt2LpFil(),
                                                                Rte_Pim_TrakgIntgtrSt2Offs(),
                                                                Rte_Prm_ImcSigArbnPosnTrakg2ArbnOffsLim_Val(),
																ImcPosnTrakgIntgtrSt2VldSts_Cnt_T_enum,
																ImcPosnTrakgIntgtrSt2VldRtn_Cnt_T_enum);

    PullCmpShoTermIntgtrStOffs_HwNwtMtr_T_f32  = CalcImcSigOffs(Rte_Prm_ImcSigArbnPullCmpShoTermIntgtrStArbnEna_Logl(),
                                                                PullCmpShoTermSt_HwNwtMtr_T_f32,
                                                                ImcPullCmpShoTermSt_HwNwtMtr_T_f32,
                                                                Rte_Pim_PullCmpShoTermCmpLpFil(),
                                                                Rte_Pim_PullCmpShoTermIntgtrStOffsPrev(),
                                                                Rte_Prm_ImcSigArbnPullCmpShoTermArbnOffsLim_Val(),
																ImcPullCmpShoTermStVldSts_Cnt_T_enum,
																ImcPullCmpShoTermStVldRtn_Cnt_T_enum);

    PullCmpLongTermIntgtrStOffs_HwNwtMtr_T_f32 = CalcImcSigOffs(Rte_Prm_ImcSigArbnPullCmpLongTermIntgtrStArbnEna_Logl(),
                                                                PullCmpLongTermSt_HwNwtMtr_T_f32,
                                                                ImcPullCmpLongTermSt_HwNwtMtr_T_f32,
                                                                Rte_Pim_PullCmpLongTermCmpLpFil(),
                                                                Rte_Pim_PullCmpLongTermIntgtrStOffsPrev(),
                                                                Rte_Prm_ImcSigArbnPullCmpLongTermArbnOffsLim_Val(),
																ImcPullCmpLongTermStVldSts_Cnt_T_enum,
																ImcPullCmpLongTermStVldRtn_Cnt_T_enum);

    PosnServoIntgtrOffs_HwNwtMtr_T_f32         = CalcImcSigOffs(Rte_Prm_ImcSigArbnPosnServoIntgtrStArbnEna_Logl(),
                                                                PosnServoIntgtrSt_HwNwtMtr_T_f32,
                                                                ImcPosnServoIntgtrSt_HwNwtMtr_T_f32,
                                                                Rte_Pim_PosnServoIntgtrLpFil(),
                                                                Rte_Pim_PosnServoIntgtrOffsPrev(),
                                                                Rte_Prm_ImcSigArbnPosnServoArbnOffsLim_Val(),
																ImcPosnServoIntgtrStVldSts_Cnt_T_enum,
																ImcPosnServoIntgtrStVldRtn_Cnt_T_enum);

    /***Fault Mitigation***/

    /*Default VehSpd Check*/
    if((ImcDftVehSpdVld_Cnt_T_logl == TRUE) && (DftVehSpdVldImcVld_Cnt_T_logl == TRUE))
    {   /*VehSpdOffsCalcd*/
        DftVehSpdOffsCorrd_Kph_T_f32 = VehSpdOffs_Kph_T_f32;
    }
    else
    {   /*Zero DftVehSpdOffsCorrd*/
        DftVehSpdOffsCorrd_Kph_T_f32 = 0.0F;
    }

    /*Arbitration Error Check*/
    if( ((Abslt_f32_f32(HwAgOffs_HwDeg_T_f32)                     < Rte_Prm_ImcSigArbnHwAgArbnOffsLim_Val()))       &&
        ((Abslt_f32_f32(HwAgTarOffs_HwDeg_T_f32)                  < Rte_Prm_ImcSigArbnHwAgTarArbnOffsLim_Val()))    &&
        ((Abslt_f32_f32(MotVelCrfOffs_MotRadPerSec_T_f32)         < Rte_Prm_ImcSigArbnMotVelArbnOffsLim_Val()))     &&
        ((Abslt_f32_f32(HwTqOffs_HwNwtMtr_T_f32)                  < Rte_Prm_ImcSigArbnHwTqArbnOffsLim_Val()))       &&
        ((Abslt_f32_f32(DftVehSpdOffsCorrd_Kph_T_f32)             < Rte_Prm_ImcSigArbnVehSpdArbnOffsLim_Val()))     &&
        ((Abslt_f32_f32(PosnTrakgIntgtrSt1Offs_HwDegPerSec_T_f32) < Rte_Prm_ImcSigArbnPosnTrakg1ArbnOffsLim_Val())) &&
        ((Abslt_f32_f32(PosnTrakgIntgtrSt2Offs_Nwt_T_f32)         < Rte_Prm_ImcSigArbnPosnTrakg2ArbnOffsLim_Val())) &&
        ((Abslt_f32_f32(PosnServoIntgtrOffs_HwNwtMtr_T_f32)       < Rte_Prm_ImcSigArbnPosnServoArbnOffsLim_Val())))
    {
        ElpdTi_MilliSec_T_f32 = 0.0F;
        *Rte_Pim_ArbnFltPrev() = FALSE;
    }
    else
    {
        if(*Rte_Pim_ArbnFltPrev() == FALSE)
        {
            ElpdTi_MilliSec_T_f32 = 0.0F;
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_ArbnFltRefTiEnaLrng());
        }
        else
        {
            (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_ArbnFltRefTiEnaLrng(),&ElpdTi_Cnt_T_u32);
            ElpdTi_MilliSec_T_f32 = FixdToFloat_f32_u32(ElpdTi_Cnt_T_u32,NXTRFIXDPT_P0TOFLOAT_ULS_F32)*CNV100MICROSECTOMILLISEC_ULS_F32;
        }
        *Rte_Pim_ArbnFltPrev() = TRUE;
    }

    SetArbnNtc(ElpdTi_MilliSec_T_f32);
	
	
    /*Offset Reset based on Arbitration Error*/
    if((*Rte_Pim_ArbnErrPrev() != FALSE) ||
        (ImcSysSt10MilliSec_Cnt_T_enum == SYSST_DI) ||
        (ImcSysStVld10MilliSec_Cnt_T_logl == FALSE))
    {   /*Zero Offset*/
        HwAgOffs_HwDeg_T_f32                     = 0.0F;
        HwAgTarOffs_HwDeg_T_f32                  = 0.0F;
        MotVelCrfOffs_MotRadPerSec_T_f32         = 0.0F;
        HwTqOffs_HwNwtMtr_T_f32                  = 0.0F;
        DftVehSpdOffsCorrd_Kph_T_f32             = 0.0F;
        PosnTrakgIntgtrSt1Offs_HwDegPerSec_T_f32 = 0.0F;
        PosnTrakgIntgtrSt2Offs_Nwt_T_f32         = 0.0F;
        PosnServoIntgtrOffs_HwNwtMtr_T_f32       = 0.0F;
    }
    /*else Provide Calculated Offs : This is the value they already have*/

    if((*Rte_Pim_ArbnErrPrev() != FALSE) &&
       (EcuIdn_Cnt_T_u08 == ECUIDNTOSETFLT_ULS_U08))
    {
        PosnTrakgArbnFltMtgtnEna_Cnt_T_logl = TRUE;
    }
    /*else case will make this variable false, which it has already been initialized to*/

    /*Write Inter-runnable Variables*/
    (void)Rte_IrvWrite_ImcSigArbnPer2_HwAgOffs(HwAgOffs_HwDeg_T_f32);
    (void)Rte_IrvWrite_ImcSigArbnPer2_HwAgTarOffs(HwAgTarOffs_HwDeg_T_f32);
    (void)Rte_IrvWrite_ImcSigArbnPer2_HwTqOffs(HwTqOffs_HwNwtMtr_T_f32);
    (void)Rte_IrvWrite_ImcSigArbnPer2_ImcSysSt10MilliSec(ImcSysSt10MilliSec_Cnt_T_enum);
    (void)Rte_IrvWrite_ImcSigArbnPer2_ImcSysStVld10MilliSec(ImcSysStVld10MilliSec_Cnt_T_logl);
    (void)Rte_IrvWrite_ImcSigArbnPer2_MotVelCrfOffs(MotVelCrfOffs_MotRadPerSec_T_f32);
    (void)Rte_IrvWrite_ImcSigArbnPer2_VehSpdOffs(DftVehSpdOffsCorrd_Kph_T_f32);

    /*Limit RTE Outputs*/
    PosnTrakgIntgtrSt1Offs_HwDegPerSec_T_f32   = Lim_f32(PosnTrakgIntgtrSt1Offs_HwDegPerSec_T_f32   ,INTGTROFFSSATNLOWLIM_ULS_F32           , INTGTROFFSSATNUPPRLIM_ULS_F32);
    PosnTrakgIntgtrSt2Offs_Nwt_T_f32           = Lim_f32(PosnTrakgIntgtrSt2Offs_Nwt_T_f32           ,POSNTRAKGINTGTRST2SATNLOWLIM_NWT_F32   , POSNTRAKGINTGTRST2SATNUPPRLIM_NWT_F32);
    PullCmpShoTermIntgtrStOffs_HwNwtMtr_T_f32  = Lim_f32(PullCmpShoTermIntgtrStOffs_HwNwtMtr_T_f32  ,ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32, ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32);
    PullCmpLongTermIntgtrStOffs_HwNwtMtr_T_f32 = Lim_f32(PullCmpLongTermIntgtrStOffs_HwNwtMtr_T_f32 ,ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32, ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32);
    PosnServoIntgtrOffs_HwNwtMtr_T_f32         = Lim_f32(PosnServoIntgtrOffs_HwNwtMtr_T_f32         ,INTGTROFFSSATNLOWLIM_ULS_F32           , INTGTROFFSSATNUPPRLIM_ULS_F32);

    /*Write RTE Outputs*/
    (void)Rte_Write_PosnTrakgIntgtrSt1Offs_Val(PosnTrakgIntgtrSt1Offs_HwDegPerSec_T_f32);
    (void)Rte_Write_PosnTrakgIntgtrSt2Offs_Val(PosnTrakgIntgtrSt2Offs_Nwt_T_f32);
    (void)Rte_Write_PullCmpShoTermIntgtrStOffs_Val(PullCmpShoTermIntgtrStOffs_HwNwtMtr_T_f32);
    (void)Rte_Write_PullCmpLongTermIntgtrStOffs_Val(PullCmpLongTermIntgtrStOffs_HwNwtMtr_T_f32);
    (void)Rte_Write_PosnServoIntgtrOffs_Val(PosnServoIntgtrOffs_HwNwtMtr_T_f32);
    (void)Rte_Write_PosnTrakgArbnFltMtgtnEna_Logl(PosnTrakgArbnFltMtgtnEna_Cnt_T_logl);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define ImcSigArbn_STOP_SEC_CODE
#include "ImcSigArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/***************************************************************************************************************************
* Name         : CalcImcSigOffs
* Description  : To handle cyclomatic complexity
* Inputs       : ImcSigArbnEna_Cnt_T_logl, InpSig_Uls_T_f32, ImcSig_Uls_T_f32, SigLpFil_Uls_T_str, OutSigPrev_Uls_T_f32.
*              : ImcSigArbnSigOffsLim_Uls_T_f32, Sts_Cnt_T_enum, Rtn_Cnt_T_enum.
* Outputs	   : OutSigPrev_Uls_T_f32
* Usage Notes  : None
**************************************************************************************************************************/
static FUNC(float32,ImcSigArbn_CODE) CalcImcSigOffs(VAR(boolean      , AUTOMATIC) ImcSigArbnEna_Cnt_T_logl,
                                                    VAR(float32      , AUTOMATIC) InpSig_Uls_T_f32,
                                                    VAR(float32      , AUTOMATIC) ImcSig_Uls_T_f32,
                                                    P2VAR(FilLpRec1    , AUTOMATIC, AUTOMATIC) SigLpFil_Uls_T_str,
                                                    P2VAR(float32      , AUTOMATIC, AUTOMATIC) OutSigPrev_Uls_T_f32,
                                                    VAR(float32      , AUTOMATIC) ImcSigArbnSigOffsLim_Uls_T_f32,
												    VAR(ImcArbnRxSts1, AUTOMATIC) Sts_Cnt_T_enum,
												    VAR(Std_ReturnType, AUTOMATIC) Rtn_Cnt_T_enum)
{
    VAR(float32, AUTOMATIC) InpSigArbdFild_Uls_T_f32;
    VAR(float32, AUTOMATIC) OutSigOffs_Uls_T_f32;
    VAR(boolean, AUTOMATIC) ImcSigVld_Cnt_T_logl = FALSE;
	
	if((Sts_Cnt_T_enum == IMCARBNRXSTS_VLD) && (Rtn_Cnt_T_enum != E_NOT_OK))
	{
		ImcSigVld_Cnt_T_logl = TRUE;
	}
	
    if(ImcSigArbnEna_Cnt_T_logl != FALSE)
    {   /*Do Arbitration*/
        InpSigArbdFild_Uls_T_f32 = FilLpUpdOutp_f32((InpSig_Uls_T_f32 - ImcSig_Uls_T_f32)*IMCOFFS_ULS_F32, SigLpFil_Uls_T_str);
        if(ImcSigVld_Cnt_T_logl == TRUE)
        {   /*Valid to do Offs*/
            OutSigOffs_Uls_T_f32 = InpSigArbdFild_Uls_T_f32;
        }
        else
        {   /*Send Prev Offs*/
            OutSigOffs_Uls_T_f32 = *OutSigPrev_Uls_T_f32;
        }
    }
    else
    {   /*Don't Do Arbitration*/
        OutSigOffs_Uls_T_f32 = 0.0F;
    }
    *OutSigPrev_Uls_T_f32  = Lim_f32(OutSigOffs_Uls_T_f32,-ImcSigArbnSigOffsLim_Uls_T_f32,ImcSigArbnSigOffsLim_Uls_T_f32);

    return *OutSigPrev_Uls_T_f32;
}

/***************************************************************************************************************************
* Name         : SetArbnNtc
* Description  : To handle cyclomatic complexity
* Inputs       : ElpdTi_MilliSec_T_f32.
* Outputs	   : *Rte_Pim_ArbnErrPrev()
* Usage Notes  : None
**************************************************************************************************************************/
static FUNC(void,ImcSigArbn_CODE) SetArbnNtc(VAR(float32, AUTOMATIC) ElpdTi_MilliSec_T_f32)
{
	if(ElpdTi_MilliSec_T_f32 >= Rte_Prm_ImcSigArbnArbnFltTmr_Val())
    {
        *Rte_Pim_ArbnErrPrev() = TRUE;
    }
    /*Else case retains Pim value, which is default behavior, so this is not implemented*/

    if(*Rte_Pim_ArbnErrPrev() != FALSE)
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0D6, 1U, NTCSTS_FAILD, NODEBSTEP_CNT_U16);
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
