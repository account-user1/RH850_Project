/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  LoaMgr.c
 *        Config:  C:/_Synergy_Projects/Working/SF049B_LoaMgr_Impl/tools/Component.dpa
 *     SW-C Type:  LoaMgr
 *  Generated at:  Wed Oct 25 14:54:40 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <LoaMgr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : LoaMgr.c
* Module Description: Implements LoaMgr (SF049B) FDD
* Project           : CBD 
* Author            : Matthew Leser
***********************************************************************************************************************
* Version Control:
* %version          : 1%
* %derived_by       : nz2796%
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 09/26/17  1        ML        Initial Version                                                                 EA4#14942
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
 * IvtrFetFltTyp1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * LoaSt1
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
 * SteerMod1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_LoaMgr.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value on Rte_Read, Rte_Write, and SetNtcSts calls */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define CURRMEASLOAMTGTNBITSHIFT_CNT_U08    ((uint8)0U)
#define CURRMEASLOAMTGTNMASK_CNT_U08        ((uint8)1U)
#define FETLOAMTGTNENABITSHIFT_CNT_U08      ((uint8)2U)
#define IVTRLOAMTGTNBITSHIFT_CNT_U08        ((uint8)1U)
#define IVTRLOAMTGTNMASK_CNT_U08            ((uint8)2U)
#define LOAMAXSLEW_ULSPERSEC_F32            500.0F
#define LOAMINSLEW_ULSPERSEC_F32            0.01F
#define LOASCAONE_ULS_F32                   1.0F
#define LOASCAZERO_ULS_F32                  0.0F
#define LOASTNORM_CNT_U08                   ((uint8)LOAST_NORM)
#define LOASTIMDTSHTDWN_CNT_U08             ((uint8)LOAST_IMDTSHTDWNREQD) 
#define LOASTSWMTGTN_CNT_U08                ((uint8)LOAST_SWBASDMTGTN)
#define MAXCURRMEASIDPTSIGALLWD_CNT_U08     ((uint8)2U)
#define MAXHWTQIDPTSIGALLWD_CNT_U08         ((uint8)4U)
#define MAXIVTRIDPTSIGALLWD_CNT_U08         ((uint8)2U)
#define MAXMOTAGMECLIDPTSIGALLWD_CNT_U08    ((uint8)3U)
#define NODEBSTEP_CNT_U16                   ((uint16)65535U)


static FUNC(uint8, LoaMgr_CODE) LtchInp(uint8 IdptSig_Cnt_T_u08,
                                        uint8 MaxAllwdVal_Cnt_T_u08,
                                        P2VAR(uint8, AUTOMATIC, LoaMgr_VAR) PrevVal_Cnt_T_u08);
                                        
static FUNC(uint8, LoaMgr_CODE) CntMtgtnReq(boolean HwTqLoaMtgtnEna_Cnt_T_lgc, 
	                                        boolean MotAgLoaMtgtnEna_Cnt_T_lgc,
                                            boolean CurrMeasLoaMtgtnEna_Cnt_T_lgc,
											boolean IvtrLoaMtgtnEna_Cnt_T_lgc);

static FUNC(uint8, LoaMgr_CODE) ReqHwTqResp(uint8 HwTqIdptMin_Cnt_T_u08, 
                                            boolean TqLoaAvl_Cnt_T_lgc);

static FUNC(uint8, LoaMgr_CODE) ReqMotAgResp(uint8 MotAgIdptMin_Cnt_T_u08, 
                                             boolean MotAgSnsrlsAvl_Cnt_T_logl);

static FUNC(uint8, LoaMgr_CODE) ReqCurrMeasResp(uint8 CurrMeasIdptMin_Cnt_T_u08);

static FUNC(uint8, LoaMgr_CODE) ReqInvtrResp(uint8 IvtrIdptMin_Cnt_T_u08);

static FUNC(boolean, LoaMgr_CODE) CntSwBasdMtgtnChk(uint8 Resp_Cnt_T_u08,
                                                    uint8 PrevMtgtnEna_Cnt_T_lgc);

static FUNC(LoaSt1, LoaMgr_CODE) SelFinalResp(uint8 MultiMtgtnResp_Cnt_T_u08,
                                              uint8 HwTqResp_Cnt_T_u08,
                                              uint8 MotAgResp_Cnt_T_u08,
                                              uint8 CurrMeasResp_Cnt_T_u08,
                                              uint8 InvtrResp_Cnt_T_u08);
                                              
static FUNC(void, LoaMgr_CODE) SetFaults(LoaSt1 LoaSt_Cnt_T_enum,
                                         uint8 HwTqIdptMin_Cnt_T_u08,
                                         uint8 MotAgIdptMin_Cnt_T_u08,
                                         uint8 CurrMeasIdptMin_Cnt_T_u08,
                                         uint8 IvtrIdptMin_Cnt_T_u08);
                                         
static FUNC(void, LoaMgr_CODE) SwMtgtnEn(boolean HwTqLoaMtgtnEna_Cnt_T_lgc,
                                         boolean MotAgLoaMtgtnEna_Cnt_T_lgc,
                                         boolean CurrMeasLoaMtgtnEna_Cnt_T_lgc,
                                         boolean IvtrLoaMtgtnEna_Cnt_T_lgc,
										 SteerMod1 VehSteerMod_Cnt_T_enum,
                                         P2VAR(float32, AUTOMATIC, LoaMgr_VAR) LoaSca_Uls_T_f32,
                                         P2VAR(float32, AUTOMATIC, LoaMgr_VAR) LoaRateLim_UlsPerSec_T_f32); 
  
static FUNC(uint8, LoaMgr_CODE) LoaMgrCoder(boolean CurrMeasLoaMtgtnEna_Cnt_T_lgc,
                                            boolean IvtrLoaMtgtnEna_Cnt_T_lgc,
                                            boolean FetLoaMtgtnEna_Cnt_T_lgc);
                                            
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
 * IvtrFetFltTyp1: Enumeration of integer in interval [0...255] with enumerators
 *   IVTRFETFLTTYP_NOFETFLT (0U)
 *   IVTRFETFLTTYP_LOWRFETFLT (1U)
 *   IVTRFETFLTTYP_UPPRFETFLT (2U)
 *   IVTRFETFLTTYP_MPLFETFLT (4U)
 * LoaSt1: Enumeration of integer in interval [0...255] with enumerators
 *   LOAST_NORM (0U)
 *   LOAST_LIMD (1U)
 *   LOAST_SWBASDMTGTN (2U)
 *   LOAST_FADEOUT (3U)
 *   LOAST_CTRLDSHTDWNREQD (4U)
 *   LOAST_IMDTSHTDWNREQD (5U)
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
 * SteerMod1: Enumeration of integer in interval [0...255] with enumerators
 *   STEERMOD_BASEPS (0U)
 *   STEERMOD_SEMIATNMS (1U)
 *   STEERMOD_FULLYATNMS (2U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_PrevCurrMeasIdptSigResp(void)
 *   uint8 *Rte_Pim_PrevCurrMeasIdptSigVal(void)
 *   uint8 *Rte_Pim_PrevHwTqIdptSigResp(void)
 *   uint8 *Rte_Pim_PrevHwTqIdptSigVal(void)
 *   uint8 *Rte_Pim_PrevIvtrIdptSigResp(void)
 *   uint8 *Rte_Pim_PrevIvtrIdptSigVal(void)
 *   uint8 *Rte_Pim_PrevMotAgMeclIdptSigResp(void)
 *   uint8 *Rte_Pim_PrevMotAgMeclIdptSigVal(void)
 *   uint8 *Rte_Pim_PrevVltgModSrc(void)
 *   boolean *Rte_Pim_PrevCurrMeasLoaStSwMtgtnEna(void)
 *   boolean *Rte_Pim_PrevHwTqLoaStSwMtgtnEna(void)
 *   boolean *Rte_Pim_PrevIvtrLoaStSwMtgtnEna(void)
 *   boolean *Rte_Pim_PrevMotAgLoaMtgtnEna(void)
 *   boolean *Rte_Pim_PrevMotAgLoaStSwMtgtnEna(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_LoaMgrCurrIvtrMtgtnRate_Val(void)
 *   float32 Rte_Prm_LoaMgrCurrIvtrMtgtnSca_Val(void)
 *   float32 Rte_Prm_LoaMgrCurrMeasMtgtnRate_Val(void)
 *   float32 Rte_Prm_LoaMgrCurrMeasMtgtnSca_Val(void)
 *   float32 Rte_Prm_LoaMgrFadeOutStRate_Val(void)
 *   float32 Rte_Prm_LoaMgrIvtrMtgtnRate_Val(void)
 *   float32 Rte_Prm_LoaMgrIvtrMtgtnSca_Val(void)
 *   float32 Rte_Prm_LoaMgrLimdStRate_Val(void)
 *   float32 Rte_Prm_LoaMgrLimdStSca_Val(void)
 *   float32 Rte_Prm_LoaMgrMotAgMtgtnRate_Val(void)
 *   float32 Rte_Prm_LoaMgrMotAgMtgtnSca_Val(void)
 *   uint8 Rte_Prm_LoaMgrCurrMeasIdptSig0Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrCurrMeasIdptSig1Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrCurrMeasIdptSig2Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrCurrMeasIdptSigFltThd_Val(void)
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSig0NoTqLoaResp_Val(void)
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSig1NoTqLoaResp_Val(void)
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSig2Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSig3Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSig4Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val(void)
 *   uint8 Rte_Prm_LoaMgrHwTqLoaAvlResp_Val(void)
 *   uint8 Rte_Prm_LoaMgrIvtrIdptSig0Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrIvtrIdptSig1Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrIvtrIdptSig2Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrIvtrIdptSigFltThd_Val(void)
 *   uint8 Rte_Prm_LoaMgrMotAgAvlSnsrlsResp_Val(void)
 *   uint8 Rte_Prm_LoaMgrMotAgIdptSig0NoSnsrlsResp_Val(void)
 *   uint8 Rte_Prm_LoaMgrMotAgIdptSig1NoSnsrlsResp_Val(void)
 *   uint8 Rte_Prm_LoaMgrMotAgIdptSig2Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrMotAgIdptSig3Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrMotAgIdptSigFltThd_Val(void)
 *   boolean Rte_Prm_LoaMgrCurrIvtrMtgtnScaZeroEna_Logl(void)
 *   boolean Rte_Prm_LoaMgrCurrMeasMtgtnScaZeroEna_Logl(void)
 *   boolean Rte_Prm_LoaMgrIvtrMtgtnScaZeroEna_Logl(void)
 *   boolean Rte_Prm_LoaMgrMotAgMtgtnScaZeroEna_Logl(void)
 *
 *********************************************************************************************************************/


#define LoaMgr_START_SEC_CODE
#include "LoaMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: LoaMgrInit1
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
 * Symbol: LoaMgrInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, LoaMgr_CODE) LoaMgrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: LoaMgrInit1
 *********************************************************************************************************************/
    
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0AA, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0AB, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0AC, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0AD, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0AE, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0AF, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
    
    /* Per Instance Memory Initialization */
    *Rte_Pim_PrevHwTqIdptSigVal() = MAXHWTQIDPTSIGALLWD_CNT_U08;
    *Rte_Pim_PrevMotAgMeclIdptSigVal() = MAXMOTAGMECLIDPTSIGALLWD_CNT_U08;
    *Rte_Pim_PrevCurrMeasIdptSigVal() = MAXCURRMEASIDPTSIGALLWD_CNT_U08;
    *Rte_Pim_PrevIvtrIdptSigVal() = MAXIVTRIDPTSIGALLWD_CNT_U08;
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: LoaMgrPer1
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
 *   Std_ReturnType Rte_Read_CurrMeasIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTqIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_IvtrFetFltTyp_Val(IvtrFetFltTyp1 *data)
 *   Std_ReturnType Rte_Read_LoaScaDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotAgMeclIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotAgSnsrlsAvl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_TqLoaAvl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSteerMod_Val(SteerMod1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTqLoaMtgtnEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_LoaRateLim_Val(float32 data)
 *   Std_ReturnType Rte_Write_LoaSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_LoaSt_Val(LoaSt1 data)
 *   Std_ReturnType Rte_Write_MotAgLoaMtgtnEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotAndThermProtnLoaMod_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_LoaMgrExclusiveArea(void)
 *   void Rte_Exit_LoaMgrExclusiveArea(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: LoaMgrPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, LoaMgr_CODE) LoaMgrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: LoaMgrPer1
 *********************************************************************************************************************/
    
    VAR(uint8, AUTOMATIC) CurrMeasIdptSig_Cnt_T_u08;
    VAR(boolean, AUTOMATIC) DiagcStsIvtr1Inactv_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) DiagcStsIvtr2Inactv_Cnt_T_lgc;
    VAR(uint8, AUTOMATIC) HwTqIdptSig_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) MotAgMeclIdptSig_Cnt_T_u08;
    VAR(boolean, AUTOMATIC) TqLoaAvl_Cnt_T_lgc;
    VAR(IvtrFetFltTyp1, AUTOMATIC) IvtrFetFltTyp_Cnt_T_enum;
    
    VAR(boolean, AUTOMATIC) CurrMeasLoaMtgtnEna_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) HwTqLoaMtgtnEna_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) IvtrLoaMtgtnEna_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) FetLoaMtgtnEna_Cnt_T_lgc;
    VAR(float32, AUTOMATIC) LoaRateLim_UlsPerSec_T_f32;
    VAR(float32, AUTOMATIC) LoaSca_Uls_T_f32;
    VAR(LoaSt1, AUTOMATIC) LoaSt_Cnt_T_enum;
    VAR(boolean, AUTOMATIC) MotAgLoaMtgtnEna_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) MotAgSnsrlsAvl_Cnt_T_logl;
	VAR(SteerMod1, AUTOMATIC) VehSteerMod_Cnt_T_enum;
    VAR(uint8, AUTOMATIC) MotAndThermProtnLoaMod_Cnt_T_u08;
    
    VAR(uint8, AUTOMATIC) IvtrIdptSig_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) HwTqIdptMin_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) MotAgIdptMin_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) CurrMeasIdptMin_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) IvtrIdptMin_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) HwTqResp_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) MotAgResp_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) CurrMeasResp_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) InvtrResp_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) DiagcStsIvtr1Inactv_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) DiagcStsIvtr2Inactv_Cnt_T_u08;

    VAR(uint8, AUTOMATIC) MultiMtgtnResp_Cnt_T_u08;
	VAR(boolean, AUTOMATIC) LoaScaDi_Cnt_T_lgc;
    
    (void)Rte_Read_CurrMeasIdptSig_Val(&CurrMeasIdptSig_Cnt_T_u08);             
    (void)Rte_Read_DiagcStsIvtr1Inactv_Logl(&DiagcStsIvtr1Inactv_Cnt_T_lgc);    
    (void)Rte_Read_DiagcStsIvtr2Inactv_Logl(&DiagcStsIvtr2Inactv_Cnt_T_lgc);    
    (void)Rte_Read_HwTqIdptSig_Val(&HwTqIdptSig_Cnt_T_u08);                     
    (void)Rte_Read_MotAgMeclIdptSig_Val(&MotAgMeclIdptSig_Cnt_T_u08);           
    (void)Rte_Read_TqLoaAvl_Logl(&TqLoaAvl_Cnt_T_lgc);                          
	(void)Rte_Read_LoaScaDi_Logl(&LoaScaDi_Cnt_T_lgc);
	(void)Rte_Read_MotAgSnsrlsAvl_Logl(&MotAgSnsrlsAvl_Cnt_T_logl);
	(void)Rte_Read_VehSteerMod_Val(&VehSteerMod_Cnt_T_enum);
    (void)Rte_Read_IvtrFetFltTyp_Val(&IvtrFetFltTyp_Cnt_T_enum);
    
    /* Calc_Ivtr_State */
    
    if(DiagcStsIvtr1Inactv_Cnt_T_lgc == TRUE)
    {
        DiagcStsIvtr1Inactv_Cnt_T_u08 = 0U;
    }
    else
    {
        DiagcStsIvtr1Inactv_Cnt_T_u08 = 1U;
    }
    
    if(DiagcStsIvtr2Inactv_Cnt_T_lgc == TRUE)
    {
        DiagcStsIvtr2Inactv_Cnt_T_u08 = 0U;
    }
    else
    {
        DiagcStsIvtr2Inactv_Cnt_T_u08 = 1U;
    }
    
    IvtrIdptSig_Cnt_T_u08 = DiagcStsIvtr1Inactv_Cnt_T_u08 + DiagcStsIvtr2Inactv_Cnt_T_u08;
    
    /* Latch_Inputs */

    HwTqIdptMin_Cnt_T_u08 = LtchInp(HwTqIdptSig_Cnt_T_u08,
                                    MAXHWTQIDPTSIGALLWD_CNT_U08,
                                    Rte_Pim_PrevHwTqIdptSigVal());
                                    
    MotAgIdptMin_Cnt_T_u08 = LtchInp(MotAgMeclIdptSig_Cnt_T_u08,
                                     MAXMOTAGMECLIDPTSIGALLWD_CNT_U08,
                                     Rte_Pim_PrevMotAgMeclIdptSigVal());
                                     
    CurrMeasIdptMin_Cnt_T_u08 = LtchInp(CurrMeasIdptSig_Cnt_T_u08,
                                        MAXCURRMEASIDPTSIGALLWD_CNT_U08,
                                        Rte_Pim_PrevCurrMeasIdptSigVal());
    
    IvtrIdptMin_Cnt_T_u08 = Min_u08(IvtrIdptSig_Cnt_T_u08, *Rte_Pim_PrevIvtrIdptSigVal());
    *Rte_Pim_PrevIvtrIdptSigVal() = IvtrIdptMin_Cnt_T_u08;
    
    /**************************** Start of 'Request_Responses' ****************************/
    
    /* Hand  wheel Torque Independent Signal */
   
    HwTqResp_Cnt_T_u08 = ReqHwTqResp(HwTqIdptMin_Cnt_T_u08,TqLoaAvl_Cnt_T_lgc);
    HwTqResp_Cnt_T_u08 = Max_u08(HwTqResp_Cnt_T_u08,*Rte_Pim_PrevHwTqIdptSigResp());
    *Rte_Pim_PrevHwTqIdptSigResp() = HwTqResp_Cnt_T_u08;
	/* Fully Autonomous Steering Selection */
	if(VehSteerMod_Cnt_T_enum == STEERMOD_FULLYATNMS)
	{
		HwTqResp_Cnt_T_u08 = 0U;
	}

    
    /* Motor Position Mechanical Independent Signal */

    MotAgResp_Cnt_T_u08 = ReqMotAgResp(MotAgIdptMin_Cnt_T_u08,MotAgSnsrlsAvl_Cnt_T_logl);
    MotAgResp_Cnt_T_u08 = Max_u08(MotAgResp_Cnt_T_u08,*Rte_Pim_PrevMotAgMeclIdptSigResp());
    *Rte_Pim_PrevMotAgMeclIdptSigResp() = MotAgResp_Cnt_T_u08;
    
    /* Current Measure Independent Signal */

    CurrMeasResp_Cnt_T_u08 = ReqCurrMeasResp(CurrMeasIdptMin_Cnt_T_u08);
    CurrMeasResp_Cnt_T_u08 = Max_u08(CurrMeasResp_Cnt_T_u08,*Rte_Pim_PrevCurrMeasIdptSigResp());
    *Rte_Pim_PrevCurrMeasIdptSigResp() = CurrMeasResp_Cnt_T_u08;
    
    /* Current Measure Independent Signal */

    InvtrResp_Cnt_T_u08 = ReqInvtrResp(IvtrIdptMin_Cnt_T_u08);
    InvtrResp_Cnt_T_u08 = Max_u08(InvtrResp_Cnt_T_u08,*Rte_Pim_PrevIvtrIdptSigResp());
    *Rte_Pim_PrevIvtrIdptSigResp() = InvtrResp_Cnt_T_u08;
    /**************************** End of 'Request_Responses' ****************************/
    
    /**************************** Start of 'Arbitrate_Responses' ****************************/
    
    /* CntSwBasdMtgtn - Mutually Exclusive Requests */

    HwTqLoaMtgtnEna_Cnt_T_lgc = CntSwBasdMtgtnChk(HwTqResp_Cnt_T_u08,*Rte_Pim_PrevHwTqLoaStSwMtgtnEna());
    *Rte_Pim_PrevHwTqLoaStSwMtgtnEna() = HwTqLoaMtgtnEna_Cnt_T_lgc;

    MotAgLoaMtgtnEna_Cnt_T_lgc = CntSwBasdMtgtnChk(MotAgResp_Cnt_T_u08,*Rte_Pim_PrevMotAgLoaStSwMtgtnEna());
    *Rte_Pim_PrevMotAgLoaStSwMtgtnEna() = MotAgLoaMtgtnEna_Cnt_T_lgc;
    
    /* CntSwBasdMtgtn - Coexisting Requests */
    
    CurrMeasLoaMtgtnEna_Cnt_T_lgc = CntSwBasdMtgtnChk(CurrMeasResp_Cnt_T_u08,*Rte_Pim_PrevCurrMeasLoaStSwMtgtnEna());
    *Rte_Pim_PrevCurrMeasLoaStSwMtgtnEna() = CurrMeasLoaMtgtnEna_Cnt_T_lgc;
    
    IvtrLoaMtgtnEna_Cnt_T_lgc = CntSwBasdMtgtnChk(InvtrResp_Cnt_T_u08,*Rte_Pim_PrevIvtrLoaStSwMtgtnEna());
    *Rte_Pim_PrevIvtrLoaStSwMtgtnEna() = IvtrLoaMtgtnEna_Cnt_T_lgc;
    
    /* CntMtgtnReq now a function call SPP*/
	
	MultiMtgtnResp_Cnt_T_u08 = CntMtgtnReq(HwTqLoaMtgtnEna_Cnt_T_lgc,
	                                       MotAgLoaMtgtnEna_Cnt_T_lgc,
                                           CurrMeasLoaMtgtnEna_Cnt_T_lgc,
                                           IvtrLoaMtgtnEna_Cnt_T_lgc);

    /* SelFinalResp */ 
    LoaSt_Cnt_T_enum = SelFinalResp(MultiMtgtnResp_Cnt_T_u08,
                                    HwTqResp_Cnt_T_u08,
                                    MotAgResp_Cnt_T_u08,
                                    CurrMeasResp_Cnt_T_u08,
                                    InvtrResp_Cnt_T_u08);
                                    
    /**************************** End of 'Arbitrate_Responses' ****************************/
    
    /**************************** Start of 'Set_Faults' ****************************/
    
    SetFaults(LoaSt_Cnt_T_enum,
               HwTqIdptMin_Cnt_T_u08,
               MotAgIdptMin_Cnt_T_u08,
               CurrMeasIdptMin_Cnt_T_u08,
               IvtrIdptMin_Cnt_T_u08);
    
    /**************************** End of 'Set_Faults' ****************************/

    /**************************** Start of 'Assign_Scale' ****************************/
    
    if(LoaSt_Cnt_T_enum == LOAST_NORM)
    {
        LoaSca_Uls_T_f32 = LOASCAONE_ULS_F32;
        LoaRateLim_UlsPerSec_T_f32 = LOAMAXSLEW_ULSPERSEC_F32;
    }
    else if (LoaSt_Cnt_T_enum == LOAST_LIMD)
    {
        if(VehSteerMod_Cnt_T_enum == STEERMOD_FULLYATNMS)
		{
			LoaSca_Uls_T_f32 = LOASCAONE_ULS_F32;
			LoaRateLim_UlsPerSec_T_f32 = LOAMAXSLEW_ULSPERSEC_F32;
		}			
		else
		{
			LoaSca_Uls_T_f32 = Rte_Prm_LoaMgrLimdStSca_Val();
			LoaRateLim_UlsPerSec_T_f32 = Rte_Prm_LoaMgrLimdStRate_Val();
		}
    }
    else if (LoaSt_Cnt_T_enum == LOAST_SWBASDMTGTN)
    {
        SwMtgtnEn(HwTqLoaMtgtnEna_Cnt_T_lgc,
                  MotAgLoaMtgtnEna_Cnt_T_lgc,
                  CurrMeasLoaMtgtnEna_Cnt_T_lgc,
                  IvtrLoaMtgtnEna_Cnt_T_lgc,
				  VehSteerMod_Cnt_T_enum,
                  &LoaSca_Uls_T_f32,
                  &LoaRateLim_UlsPerSec_T_f32);                               
    }
    else if (LoaSt_Cnt_T_enum == LOAST_FADEOUT)
    {
        LoaSca_Uls_T_f32 = LOASCAZERO_ULS_F32;
        LoaRateLim_UlsPerSec_T_f32 = Rte_Prm_LoaMgrFadeOutStRate_Val(); 
       
    }
    else if (LoaSt_Cnt_T_enum == LOAST_CTRLDSHTDWNREQD)
    {
        LoaSca_Uls_T_f32 = LOASCAZERO_ULS_F32;
        LoaRateLim_UlsPerSec_T_f32 = LOAMAXSLEW_ULSPERSEC_F32;  
    }
    else 
    {   
        LoaSca_Uls_T_f32 = LOASCAZERO_ULS_F32;
        LoaRateLim_UlsPerSec_T_f32 = LOAMAXSLEW_ULSPERSEC_F32;
    }
    
    /**************************** End of 'Assign_Scale' ****************************/
	if(TRUE == LoaScaDi_Cnt_T_lgc)
	{
		LoaSca_Uls_T_f32 = 1.0F;
	}
	
    LoaSca_Uls_T_f32 = Lim_f32(LoaSca_Uls_T_f32,LOASCAZERO_ULS_F32,LOASCAONE_ULS_F32);
    
    LoaRateLim_UlsPerSec_T_f32 = Lim_f32(LoaRateLim_UlsPerSec_T_f32,LOAMINSLEW_ULSPERSEC_F32,LOAMAXSLEW_ULSPERSEC_F32);
    
    if(IvtrFetFltTyp_Cnt_T_enum != IVTRFETFLTTYP_NOFETFLT)
    {
        FetLoaMtgtnEna_Cnt_T_lgc = TRUE;
    }
    else 
    {
        FetLoaMtgtnEna_Cnt_T_lgc = FALSE;
    }
    
    MotAndThermProtnLoaMod_Cnt_T_u08 = LoaMgrCoder(CurrMeasLoaMtgtnEna_Cnt_T_lgc,
                                                   IvtrLoaMtgtnEna_Cnt_T_lgc,
                                                   FetLoaMtgtnEna_Cnt_T_lgc);
       
    (void)Rte_Write_HwTqLoaMtgtnEna_Logl(HwTqLoaMtgtnEna_Cnt_T_lgc);            

    Rte_Enter_LoaMgrExclusiveArea();
    
    (void)Rte_Write_LoaRateLim_Val(LoaRateLim_UlsPerSec_T_f32);                 
    (void)Rte_Write_LoaSca_Val(LoaSca_Uls_T_f32);
    
    Rte_Exit_LoaMgrExclusiveArea();
    
    (void)Rte_Write_LoaSt_Val(LoaSt_Cnt_T_enum);                                
    (void)Rte_Write_MotAgLoaMtgtnEna_Logl(MotAgLoaMtgtnEna_Cnt_T_lgc);     
    (void)Rte_Write_MotAndThermProtnLoaMod_Val(MotAndThermProtnLoaMod_Cnt_T_u08);
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define LoaMgr_STOP_SEC_CODE
#include "LoaMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /*****************************************************************************************************************
  * Name        :   LtchInp
  * Description :   Implementation of "Latch_Inputs" block
  * Inputs      :   IdptSig_Cnt_T_u08
  *                 MaxAllwdVal_Cnt_T_u08
  *                 *PrevVal_Cnt_T_u08
  * Returns     :   MinVal_Cnt_T_u08
  * Usage Notes :   None
  ****************************************************************************************************************/	
static FUNC(uint8, LoaMgr_CODE) LtchInp(uint8 IdptSig_Cnt_T_u08,
                                        uint8 MaxAllwdVal_Cnt_T_u08,
                                        P2VAR(uint8, AUTOMATIC, LoaMgr_VAR) PrevVal_Cnt_T_u08)
{
    VAR(uint8, AUTOMATIC) MinVal_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) RngLimdIdptSig_Cnt_T_u08;
    
    if(IdptSig_Cnt_T_u08 > MaxAllwdVal_Cnt_T_u08)
    {
        RngLimdIdptSig_Cnt_T_u08 = 0U;
    }
    else
    {
        RngLimdIdptSig_Cnt_T_u08 = IdptSig_Cnt_T_u08;
    }
    
    MinVal_Cnt_T_u08 = Min_u08(RngLimdIdptSig_Cnt_T_u08, *PrevVal_Cnt_T_u08);
    
    *PrevVal_Cnt_T_u08 = MinVal_Cnt_T_u08;
    
    return MinVal_Cnt_T_u08;
    
}                                        
  
 /*****************************************************************************************************************
  * Name        :   CntMtgtnReq - Count Mitigation Request
  * Description :   Creates a "combined response" whose value depends on the combination of individual responses asking for s/w-based mitigation. 
  * Inputs      :   HwTqLoaMtgtnEna_Cnt_T_lgc - Handwheel Torque Loss of Assist Mitigation Enable Count Logic
  *                 MotAgLoaMtgtnEna_Cnt_T_lgc - Motor Angle Loss of Assist Mitigation Enable Count Logic
  *                 CurrMeasLoaMtgtnEna_Cnt_T_lgc - Current Measure Loss of Assist Mitigation Enable Count Logic
  *                 IvtrLoaMtgtnEna_Cnt_T_lgc - Inverter Loss of Assist Mitigation Enable Count Logic
  * Returns     :   Mtgtn_Cnt_T_u08 - assigned a value of LOASTNORM_CNT_U08 or LOASTIMDTSHTDWN_CNT_U08 based on sum of input combinations
  * Usage Notes :   None
  ****************************************************************************************************************/								   
static FUNC(uint8, LoaMgr_CODE) CntMtgtnReq(boolean HwTqLoaMtgtnEna_Cnt_T_lgc, 
	                                        boolean MotAgLoaMtgtnEna_Cnt_T_lgc,
											boolean CurrMeasLoaMtgtnEna_Cnt_T_lgc,
											boolean IvtrLoaMtgtnEna_Cnt_T_lgc)
{
    VAR(uint8, AUTOMATIC) Mtgtn_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) HwTqReq_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) MotAgReq_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) VltgModReq_Cnt_T_u08;
    
    if(HwTqLoaMtgtnEna_Cnt_T_lgc == TRUE)
    {
        HwTqReq_Cnt_T_u08 = 1U;
    }
    else
    {
        HwTqReq_Cnt_T_u08 = 0U;
    }
    
    if(MotAgLoaMtgtnEna_Cnt_T_lgc == TRUE)
    {
        MotAgReq_Cnt_T_u08 = 1U;
    }
    else
    {
        MotAgReq_Cnt_T_u08 = 0U;
    }
    
    if((CurrMeasLoaMtgtnEna_Cnt_T_lgc == TRUE) || (IvtrLoaMtgtnEna_Cnt_T_lgc == TRUE))
    {
        VltgModReq_Cnt_T_u08 = 1U;
    }
    else
    {
        VltgModReq_Cnt_T_u08 = 0U;
    }
   
    Mtgtn_Cnt_T_u08 = HwTqReq_Cnt_T_u08 + MotAgReq_Cnt_T_u08 + VltgModReq_Cnt_T_u08;
    
    if((Mtgtn_Cnt_T_u08 == 0U) || (Mtgtn_Cnt_T_u08 == 1U))
    {
        Mtgtn_Cnt_T_u08 = LOASTNORM_CNT_U08;
    }
    else
    {
        Mtgtn_Cnt_T_u08 = LOASTIMDTSHTDWN_CNT_U08;
    }
   
	return Mtgtn_Cnt_T_u08;
}
/*****************************************************************************************************************
  * Name        :   ReqHwTqResp - Request Handwheel Torque Response
  * Description :   Response check of 'Hand wheel Torque Independent Signal'. Corresponds to 'HwTqResp' part
  *                 functionality in 'Request_Responses' block.
  * Inputs      :   HwTqIdptMin_Cnt_T_u08 - Handwheel Torque Independent Minimum Count
  *                 TqLoaAvl_Cnt_T_lgc - Torque Loss of Assist Availabe
  * Returns     :   HwTqResp_Cnt_T_u08 - Handwheel Torque Response Count
  * Usage Notes :   None
  ****************************************************************************************************************/
static FUNC(uint8, LoaMgr_CODE) ReqHwTqResp(uint8 HwTqIdptMin_Cnt_T_u08, boolean TqLoaAvl_Cnt_T_lgc)
{
    VAR(uint8, AUTOMATIC) HwTqResp_Cnt_T_u08;
        
    switch(HwTqIdptMin_Cnt_T_u08)
    {
        case 1u:                                                   
            if(TqLoaAvl_Cnt_T_lgc == TRUE)
            {
                HwTqResp_Cnt_T_u08 = Rte_Prm_LoaMgrHwTqLoaAvlResp_Val();
            }
            else
            {
                HwTqResp_Cnt_T_u08 = Rte_Prm_LoaMgrHwTqIdptSig1NoTqLoaResp_Val();
            }
            
            break;
        
        case 2u: 
            HwTqResp_Cnt_T_u08 = Rte_Prm_LoaMgrHwTqIdptSig2Resp_Val();
            break;
			
		case 3u:
			HwTqResp_Cnt_T_u08 = Rte_Prm_LoaMgrHwTqIdptSig3Resp_Val();
			break;
        
        case 4u: 
            HwTqResp_Cnt_T_u08 = Rte_Prm_LoaMgrHwTqIdptSig4Resp_Val();
            break;
        
        default:                                              
            if(TqLoaAvl_Cnt_T_lgc == TRUE)
            {
                HwTqResp_Cnt_T_u08 = Rte_Prm_LoaMgrHwTqLoaAvlResp_Val();
            }
            else
            {
                HwTqResp_Cnt_T_u08 = Rte_Prm_LoaMgrHwTqIdptSig0NoTqLoaResp_Val();
            }
            break;
    }   
    return HwTqResp_Cnt_T_u08;
}

/*****************************************************************************************************************
* Name        :   ReqMotAgResp - Request Motor Angle Response
* Description :   Response check of 'Motor Position Mechanical Independent Signal'. Corresponds to 'MotAgResp' part
*                   functionality in 'Request_Responses' block.
* Inputs      :   MotAgIdptMin_Cnt_T_u08 - Motor Angle Independent Minimum Count
                  MotAgSnsrlsAvl_Cnt_T_logl - Motor Angle Sensorless Available Count
* Returns     :   MotAgResp_Cnt_T_u08 - Motor Angle Response Count
* Usage Notes :   None
****************************************************************************************************************/
static FUNC(uint8, LoaMgr_CODE) ReqMotAgResp(uint8 MotAgIdptMin_Cnt_T_u08, boolean MotAgSnsrlsAvl_Cnt_T_logl)
{
    VAR(uint8, AUTOMATIC) MotAgResp_Cnt_T_u08;
        
    switch(MotAgIdptMin_Cnt_T_u08)
    {
        case 1u:                                                
            if(MotAgSnsrlsAvl_Cnt_T_logl == TRUE)
            {
                MotAgResp_Cnt_T_u08 = Rte_Prm_LoaMgrMotAgAvlSnsrlsResp_Val();
            }
            else
            {
                MotAgResp_Cnt_T_u08 = Rte_Prm_LoaMgrMotAgIdptSig1NoSnsrlsResp_Val();
            }
            break;
        
        case 2u: 
            MotAgResp_Cnt_T_u08 = Rte_Prm_LoaMgrMotAgIdptSig2Resp_Val();
            break;
        
        case 3u: 
            MotAgResp_Cnt_T_u08 = Rte_Prm_LoaMgrMotAgIdptSig3Resp_Val();
            break;
        
        default:                                              
            if(MotAgSnsrlsAvl_Cnt_T_logl == TRUE)
            {
                MotAgResp_Cnt_T_u08 = Rte_Prm_LoaMgrMotAgAvlSnsrlsResp_Val();
            }
            else
            {
                MotAgResp_Cnt_T_u08 = Rte_Prm_LoaMgrMotAgIdptSig0NoSnsrlsResp_Val();
            }
            break;
    }   
    return MotAgResp_Cnt_T_u08;
}
/*****************************************************************************************************************
* Name        :   ReqCurrMeasResp - Request Current Measure Response
* Description :   Response check of 'Current Measure Independent Signal'. Corresponds to 'CurrMeasResp' part
*                   functionality in 'Request_Responses' block.
* Inputs      :   CurrMeasIdptMin_Cnt_T_u08 - Current Measure Independent Minimum Count
* Returns     :   CurrMeasResp_Cnt_T_u08 - Current Measure Response Count
* Usage Notes :   None
****************************************************************************************************************/
static FUNC(uint8, LoaMgr_CODE) ReqCurrMeasResp(uint8 CurrMeasIdptMin_Cnt_T_u08)
{
    VAR(uint8, AUTOMATIC) CurrMeasResp_Cnt_T_u08;
        
    switch(CurrMeasIdptMin_Cnt_T_u08)
    {
        case 1u: 
            CurrMeasResp_Cnt_T_u08 = Rte_Prm_LoaMgrCurrMeasIdptSig1Resp_Val();
            break;
        
        case 2u: 
            CurrMeasResp_Cnt_T_u08 = Rte_Prm_LoaMgrCurrMeasIdptSig2Resp_Val();
            break;
        
        default:
            CurrMeasResp_Cnt_T_u08 = Rte_Prm_LoaMgrCurrMeasIdptSig0Resp_Val();
            break;
    }   
    return CurrMeasResp_Cnt_T_u08;
}
/*****************************************************************************************************************
* Name        :   ReqInvtrResp - Request Inverter Response
* Description :   Response check of 'Inverter Signal'. Corresponds to 'InvtrResp' part
*                   functionality in 'Request_Responses' block.
* Inputs      :   IvtrIdptMin_Cnt_T_u08 - Inverter Independent Minimum Count
* Returns     :   InvtrResp_Cnt_T_u08 - Inverter Response Count
****************************************************************************************************************/
static FUNC(uint8, LoaMgr_CODE) ReqInvtrResp(uint8 IvtrIdptMin_Cnt_T_u08)
{
    VAR(uint8, AUTOMATIC) InvtrResp_Cnt_T_u08;
        
    switch(IvtrIdptMin_Cnt_T_u08)
    {
        case 1u: 
            InvtrResp_Cnt_T_u08 = Rte_Prm_LoaMgrIvtrIdptSig1Resp_Val();
            break;
        
        case 2u: 
            InvtrResp_Cnt_T_u08 = Rte_Prm_LoaMgrIvtrIdptSig2Resp_Val();
            break;
        
        default:
            InvtrResp_Cnt_T_u08 = Rte_Prm_LoaMgrIvtrIdptSig0Resp_Val();
            break;
    }   
    return InvtrResp_Cnt_T_u08;
}
/*****************************************************************************************************************
* Name        :   CntSwBasdMtgtnChk - Count Software-Based Mitigation Check
* Description :   Mitigation Enable Output calculation. Refer to 'CntSwBasdMtgtn' block in FDD
* Inputs      :   Resp_Cnt_T_u08 - 'Request_Responses' status 
*                 PrevMtgtnEna_Cnt_T_lgc - Previous Mitigation Enable Output.
* Returns     :   MtgtnEna_Cnt_T_lgc - Mitigation Enable Status
* Usage Notes :   None
****************************************************************************************************************/
static FUNC(boolean, LoaMgr_CODE) CntSwBasdMtgtnChk(uint8 Resp_Cnt_T_u08,
                                                    uint8 PrevMtgtnEna_Cnt_T_lgc)
{
    VAR(boolean, AUTOMATIC) MtgtnEna_Cnt_T_lgc;
    
    if((Resp_Cnt_T_u08 == LOASTSWMTGTN_CNT_U08) ||
        (PrevMtgtnEna_Cnt_T_lgc == TRUE))
    {
        MtgtnEna_Cnt_T_lgc = TRUE;
    }
    else
    {
        MtgtnEna_Cnt_T_lgc = FALSE;
    }
    
    return MtgtnEna_Cnt_T_lgc;
}
/*****************************************************************************************************************
* Name        :   SelFinalResp - Select Final Response
* Description :   Corresponds to 'SelFinalResp' block in FDD
* Inputs      :   MultiMtgtnResp_Cnt_T_u08 - Multi Mitigation Response Count
*		          MotAgResp_Cnt_T_u08 - Motor Angle Response Count
*                 CurrMeasResp_Cnt_T_u08 - Current Measure Response Count
*                 InvtrResp_Cnt_T_u08 - Inverter Response Count
* Returns     :   LoaSt_Cnt_T_enum - Loss of Assist State 
* Usage Notes :   None
****************************************************************************************************************/
static FUNC(LoaSt1, LoaMgr_CODE) SelFinalResp(uint8 MultiMtgtnResp_Cnt_T_u08,
                                              uint8 HwTqResp_Cnt_T_u08,
                                              uint8 MotAgResp_Cnt_T_u08,
                                              uint8 CurrMeasResp_Cnt_T_u08,
                                              uint8 InvtrResp_Cnt_T_u08)
{
    VAR(uint8, AUTOMATIC) MaxMtgtnResp_Cnt_T_u08;
    VAR(LoaSt1, AUTOMATIC) LoaSt_Cnt_T_enum;
    
    MaxMtgtnResp_Cnt_T_u08 = Max_u08(MultiMtgtnResp_Cnt_T_u08,
                                     Max_u08(HwTqResp_Cnt_T_u08,
                                             Max_u08(MotAgResp_Cnt_T_u08,
                                                     Max_u08(CurrMeasResp_Cnt_T_u08,InvtrResp_Cnt_T_u08))));
                                                            
    switch (MaxMtgtnResp_Cnt_T_u08)
    {
        case 0U:
            LoaSt_Cnt_T_enum = LOAST_NORM;
        break;

        case 1U:
            LoaSt_Cnt_T_enum = LOAST_LIMD;
        break;

        case 2U:
            LoaSt_Cnt_T_enum = LOAST_SWBASDMTGTN;
        break;

        case 3U:
            LoaSt_Cnt_T_enum = LOAST_FADEOUT;
        break;

        case 4U:
            LoaSt_Cnt_T_enum = LOAST_CTRLDSHTDWNREQD;
        break;

        default:
            LoaSt_Cnt_T_enum = LOAST_IMDTSHTDWNREQD;
        break;
    }
    
    return LoaSt_Cnt_T_enum;
}
/*****************************************************************************************************************
* Name        :   SetFaults - Set Faults
* Description :   Corresponds to 'Set_Faults' block in FDD
* Inputs      :   LoaSt_Cnt_T_enum - Loss of Assist State Count
*                 HwTqIdptMin_Cnt_T_u08 - Handwheel Torque Independent Minimum Count
*                 MotAgIdptMin_Cnt_T_u08 - Motor Angle Independent Minimum Count
*                 CurrMeasIdptMin_Cnt_T_u08 - Current Measure Independent Count
*                 IvtrIdptMin_Cnt_T_u08 - Inverter Independent Minimum Count
* Returns     :   None
* Usage Notes :   None
****************************************************************************************************************/
static FUNC(void, LoaMgr_CODE) SetFaults(LoaSt1 LoaSt_Cnt_T_enum,
                                         uint8 HwTqIdptMin_Cnt_T_u08,
                                         uint8 MotAgIdptMin_Cnt_T_u08,
                                         uint8 CurrMeasIdptMin_Cnt_T_u08,
                                         uint8 IvtrIdptMin_Cnt_T_u08)
{   
    if(LoaSt_Cnt_T_enum == LOAST_IMDTSHTDWNREQD)    
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0AA, 0U, NTCSTS_FAILD, NODEBSTEP_CNT_U16);    
    }
    else if (LoaSt_Cnt_T_enum == LOAST_CTRLDSHTDWNREQD)  
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0AB, 0U, NTCSTS_FAILD, NODEBSTEP_CNT_U16);
    }
    else
    {       
    }
    
    if(HwTqIdptMin_Cnt_T_u08 <= Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val()) 
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0AC, 0U, NTCSTS_FAILD, NODEBSTEP_CNT_U16);
    }
    
    if(MotAgIdptMin_Cnt_T_u08 <= Rte_Prm_LoaMgrMotAgIdptSigFltThd_Val())   
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0AD, 0U, NTCSTS_FAILD, NODEBSTEP_CNT_U16);
    }
    
    if(CurrMeasIdptMin_Cnt_T_u08 <= Rte_Prm_LoaMgrCurrMeasIdptSigFltThd_Val()) 
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0AE, 0U, NTCSTS_FAILD, NODEBSTEP_CNT_U16);
    }
    
    if(IvtrIdptMin_Cnt_T_u08 <= Rte_Prm_LoaMgrIvtrIdptSigFltThd_Val())
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0AF, 0U, NTCSTS_FAILD, NODEBSTEP_CNT_U16);
    }
}
/*****************************************************************************************************************
* Name        :   SwMtgtnEn - Software Mitigation Enable
* Description :   Corresponds to 'SwMtgtn' block in FDD
* Inputs      :   HwTqLoaMtgtnEna_Cnt_T_lgc - Handwheel Torque Loss of Assist Mitigation Enable Count
*                 MotAgLoaMtgtnEna_Cnt_T_lgc - Motor Angle Loss of Assist Mitigation Enable Count
*                 CurrMeasLoaMtgtnEna_Cnt_T_lgc - Current Measure Loss of Assist Mitigation Enable Count
*                 IvtrLoaMtgtnEna_Cnt_T_lgc - Inverter Loss of Assist Mitigation Enable Count
*                 VehSteerMod_Cnt_T_enum - Vehicle Steering Mode Count
* Outputs     :   *LoaSca_Uls_T_f32 - Loss of Assist Scalar Unitless
*                 *LoaRateLim_UlsPerSec_T_f32 - Loss of Assist Rate Limit Unitless
* Returns     :   None
* Usage Notes :   None
****************************************************************************************************************/
static FUNC(void, LoaMgr_CODE) SwMtgtnEn(boolean HwTqLoaMtgtnEna_Cnt_T_lgc,
                                         boolean MotAgLoaMtgtnEna_Cnt_T_lgc,
                                         boolean CurrMeasLoaMtgtnEna_Cnt_T_lgc,
                                         boolean IvtrLoaMtgtnEna_Cnt_T_lgc,
										 SteerMod1 VehSteerMod_Cnt_T_enum,
                                         P2VAR(float32, AUTOMATIC, LoaMgr_VAR) LoaSca_Uls_T_f32,
                                         P2VAR(float32, AUTOMATIC, LoaMgr_VAR) LoaRateLim_UlsPerSec_T_f32)  
{
    VAR(uint8, AUTOMATIC) VltgModSrc_Cnt_T_u08;
    VAR(boolean, AUTOMATIC) NewValFlg_Cnt_T_lgc;
    VAR(uint8, AUTOMATIC) CurrMeasLoaMtgtn_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) IvtrLoaMtgtn_Cnt_T_u08;
    
    /* MaskBooleans */                  
    if(CurrMeasLoaMtgtnEna_Cnt_T_lgc == TRUE)
    {
        CurrMeasLoaMtgtn_Cnt_T_u08 = CURRMEASLOAMTGTNMASK_CNT_U08;
    }
    else
    {
        CurrMeasLoaMtgtn_Cnt_T_u08 = 0U;
    }
    
    if(IvtrLoaMtgtnEna_Cnt_T_lgc == TRUE)
    {
        IvtrLoaMtgtn_Cnt_T_u08 = IVTRLOAMTGTNMASK_CNT_U08;
    }
    else
    {
        IvtrLoaMtgtn_Cnt_T_u08 = 0U;
    }
                            
    VltgModSrc_Cnt_T_u08 = CurrMeasLoaMtgtn_Cnt_T_u08 + IvtrLoaMtgtn_Cnt_T_u08;
    
    if(HwTqLoaMtgtnEna_Cnt_T_lgc == TRUE)  
    {
        /* HwTqTrue */
        
        *LoaSca_Uls_T_f32 = LOASCAONE_ULS_F32;
        *LoaRateLim_UlsPerSec_T_f32 = LOAMAXSLEW_ULSPERSEC_F32;
    }
    else if(MotAgLoaMtgtnEna_Cnt_T_lgc == TRUE) 
    {
        /* MotAgTrue */
        
        if((Rte_Prm_LoaMgrMotAgMtgtnScaZeroEna_Logl() == TRUE) && (*Rte_Pim_PrevMotAgLoaMtgtnEna() == FALSE))
        {
            *LoaSca_Uls_T_f32 = LOASCAZERO_ULS_F32;
            *LoaRateLim_UlsPerSec_T_f32 = LOAMAXSLEW_ULSPERSEC_F32;
        }
        else
        {
            *LoaSca_Uls_T_f32 = Rte_Prm_LoaMgrMotAgMtgtnSca_Val();
            *LoaRateLim_UlsPerSec_T_f32 = Rte_Prm_LoaMgrMotAgMtgtnRate_Val();
        }
    }
    else
    {   
        
        if(VltgModSrc_Cnt_T_u08 != *Rte_Pim_PrevVltgModSrc())
        {
            NewValFlg_Cnt_T_lgc = TRUE;
        }
        else
        {
            NewValFlg_Cnt_T_lgc = FALSE;
        }
        
        switch (VltgModSrc_Cnt_T_u08)
        {
            case 1U:            
                if((Rte_Prm_LoaMgrCurrMeasMtgtnScaZeroEna_Logl() == TRUE) && (NewValFlg_Cnt_T_lgc == TRUE))
                {
                    *LoaSca_Uls_T_f32 = LOASCAZERO_ULS_F32;
                    *LoaRateLim_UlsPerSec_T_f32 = LOAMAXSLEW_ULSPERSEC_F32;
                }
                else
                {
                    *LoaSca_Uls_T_f32 = Rte_Prm_LoaMgrCurrMeasMtgtnSca_Val();
                    *LoaRateLim_UlsPerSec_T_f32 = Rte_Prm_LoaMgrCurrMeasMtgtnRate_Val();
                }
            break;

            case 2U:
                if((Rte_Prm_LoaMgrIvtrMtgtnScaZeroEna_Logl() == TRUE) && (NewValFlg_Cnt_T_lgc == TRUE))
                {
                    *LoaSca_Uls_T_f32 = LOASCAZERO_ULS_F32;
                    *LoaRateLim_UlsPerSec_T_f32 = LOAMAXSLEW_ULSPERSEC_F32;
                }
                else
                {
                    *LoaSca_Uls_T_f32 = Rte_Prm_LoaMgrIvtrMtgtnSca_Val();
                    *LoaRateLim_UlsPerSec_T_f32 = Rte_Prm_LoaMgrIvtrMtgtnRate_Val();
                }
            break;

            default:
                if((Rte_Prm_LoaMgrCurrIvtrMtgtnScaZeroEna_Logl() == TRUE) && (NewValFlg_Cnt_T_lgc == TRUE))
                {
                    *LoaSca_Uls_T_f32 = LOASCAZERO_ULS_F32;
                    *LoaRateLim_UlsPerSec_T_f32 = LOAMAXSLEW_ULSPERSEC_F32;
                }
                else
                {
                    *LoaSca_Uls_T_f32 = Rte_Prm_LoaMgrCurrIvtrMtgtnSca_Val();
                    *LoaRateLim_UlsPerSec_T_f32 = Rte_Prm_LoaMgrCurrIvtrMtgtnRate_Val();
                }
            break;
        }
    }
	if(VehSteerMod_Cnt_T_enum == STEERMOD_FULLYATNMS)
	{
		*LoaSca_Uls_T_f32 = LOASCAONE_ULS_F32;
		*LoaRateLim_UlsPerSec_T_f32 = LOAMAXSLEW_ULSPERSEC_F32;
	}
	
    *Rte_Pim_PrevMotAgLoaMtgtnEna() = MotAgLoaMtgtnEna_Cnt_T_lgc;
    *Rte_Pim_PrevVltgModSrc() = VltgModSrc_Cnt_T_u08;
}                

/*****************************************************************************************************************
* Name        :   LoaMgrCoder
* Description :   Corresponds to 'Coder' block in FDD
* Inputs      :   CurrMeasLoaMtgtnEna_Cnt_T_lgc - Current Measure Loss of Assist Mitigation Enable
                  IvtrLoaMtgtnEna_Cnt_T_lgc - Inverter Loss of Assist Mitigation Enable
                  FetLoaMtgtnEna_Cnt_T_lgc - FET Loss of Assist Mitigation Enable
* Outputs     :   MotAndThermProtnLoaMod_Cnt_T_u08 - Motor and Thermal Protection Loss of Assist Mode
* Returns     :   None
* Usage Notes :   None
****************************************************************************************************************/
static FUNC(uint8, LoaMgr_CODE) LoaMgrCoder(boolean CurrMeasLoaMtgtnEna_Cnt_T_lgc,
                                            boolean IvtrLoaMtgtnEna_Cnt_T_lgc,
                                            boolean FetLoaMtgtnEna_Cnt_T_lgc)
{
    VAR(uint8, AUTOMATIC) CurrMeasLoaMtgtnEna_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) IvtrLoaMtgtnEna_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) FetLoaMtgtnEna_Cnt_T_u08;
    VAR(uint8, AUTOMATIC) MotAndThermProtnLoaMod_Cnt_T_u08;
    
    if(CurrMeasLoaMtgtnEna_Cnt_T_lgc == TRUE)
    {
        CurrMeasLoaMtgtnEna_Cnt_T_u08 = 1U;
    }
    else
    {
        CurrMeasLoaMtgtnEna_Cnt_T_u08 = 0U;
    }
    
    if(IvtrLoaMtgtnEna_Cnt_T_lgc == TRUE)
    {
        IvtrLoaMtgtnEna_Cnt_T_u08 = 1U;
    }
    else
    {
        IvtrLoaMtgtnEna_Cnt_T_u08 = 0U;
    }
    
    if(FetLoaMtgtnEna_Cnt_T_lgc == TRUE)
    {
        FetLoaMtgtnEna_Cnt_T_u08 = 1U;
    }
    else
    {
        FetLoaMtgtnEna_Cnt_T_u08 = 0U;
    }
    
    CurrMeasLoaMtgtnEna_Cnt_T_u08 = CurrMeasLoaMtgtnEna_Cnt_T_u08 << CURRMEASLOAMTGTNBITSHIFT_CNT_U08;
    IvtrLoaMtgtnEna_Cnt_T_u08     = IvtrLoaMtgtnEna_Cnt_T_u08 << IVTRLOAMTGTNBITSHIFT_CNT_U08;
    FetLoaMtgtnEna_Cnt_T_u08      = FetLoaMtgtnEna_Cnt_T_u08 << FETLOAMTGTNENABITSHIFT_CNT_U08;
    
    MotAndThermProtnLoaMod_Cnt_T_u08 = CurrMeasLoaMtgtnEna_Cnt_T_u08 | IvtrLoaMtgtnEna_Cnt_T_u08 | FetLoaMtgtnEna_Cnt_T_u08;
    
    return MotAndThermProtnLoaMod_Cnt_T_u08;
    
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
