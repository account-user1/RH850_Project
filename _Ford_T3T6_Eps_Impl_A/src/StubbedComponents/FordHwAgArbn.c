/* TODO Stub file remove later */
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordHwAgArbn.c
 *        Config:  C:/Users/gz324f/Desktop/working/_Ford_T3T6_Eps_Impl_A_Working/CF075A_FordHwAgArbn_Impl/tools/Component.dpa
 *     SW-C Type:  FordHwAgArbn
 *  Generated at:  Tue Feb  6 11:42:30 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordHwAgArbn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordHwAgArbn.c
* Module Description: Implementation of Ford Handwheel Angle Arbitration(CF075A) FDD
* Project           : CBD 
* Author            : Matthew Leser
***********************************************************************************************************************
* Version Control:
* %version          : 1 %
* %derived_by       : nz2796 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 12/06/17  1        ML        Initial Version                                                                EA4#15177
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
 *********************************************************************************************************************/

#include "Rte_FordHwAgArbn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "ArchGlbPrm.h"
#include "NxtrMath.h"

#include "NxtrFixdPt.h"


/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read*, Rte_Write*,
                                              SetRamBlockStatus, GetErrorStatus */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
 
#define ACCURACY_HWDEG_F32                          4.0F
#define CNVMILLISECTOCNT_CNTPERMILLISEC_U16         ((uint16)10U)
#define DEBSTEP_CNT_U16                             ((uint16)65535U)
#define ENGVEHSPDVALLIM_KPH_F32                     (40.0F)
#define FAULTY_HWDEG_F32                            3353.5F
#define FORDCMPDHWPOSNMAX_HWDEG_F32                 3353.5F
#define FORDCMPDHWPOSNMIN_HWDEG_F32                 (-3200.0F)
#define FORDRELHWPOSNMAX_HWDEG_F32                  3353.5F
#define FORDRELHWPOSNVLDMAX_HWDEG_F32               3353.3F
#define FORDRELHWPOSNMIN_HWDEG_F32                  (-3200.0F)
#define INPTQVALLIM_HWNWTMTR_F32                    1.5F
#define NODATAEXIST_HWDEG_F32                       3353.4F
#define HWSIGIDPTMIN_CNT_U08                        ((uint8)1U)
#define POSCORRLNFLT_CNT_U08                        ((uint8)2U)
#define RACKTRVLEXCDDCMPD_CNT_U08                   ((uint8)3U)
#define RACKTRVLEXCDDREL_CNT_U08                    ((uint8)1U)
#define RELHWPOSNDE_HWDEG_F32                       20.0F
#define RELHWPOSNLIM_HWDEG_F32                      5.0F

static FUNC(boolean, FORDHWAGARBN_CODE) FordRelPosnVldProc(VAR(float32, AUTOMATIC) FordRelHwPosn_HwDeg_T_f32); 

static FUNC(boolean, FORDHWAGARBN_CODE) HwVelVldProc(VAR(boolean, AUTOMATIC) FordMotVelVld_Cnt_T_logl);

static FUNC(void, FORDHWAGARBN_CODE) AbsPrsnt(VAR(boolean, AUTOMATIC) FordSteerAgClrFlg_Cnt_T_logl,
                                              VAR(float32, AUTOMATIC) FordSteerPinionOffs_HwDeg_T_f32,
                                              VAR(Ford_StePinOffst_D_Stat, AUTOMATIC) FordSteerPinionOffsSts_Cnt_T_enum,
                                              VAR(float32, AUTOMATIC) FordRelHwPosn_HwDeg_T_f32,
											  VAR(boolean, AUTOMATIC) FordRelHwPosnVld_Cnt_T_logl,
											  VAR(boolean, AUTOMATIC) FordVehSteerPinionAgOffsVld_Cnt_T_logl,
                                              P2VAR(Ford_StePinCompAnEst_D_Qf, AUTOMATIC, FordHwAgArbn_VAR) FordCmpdHwPosnQlyFac_Cnt_T_enum,
                                              P2VAR(float32, AUTOMATIC, FordHwAgArbn_VAR) FordCmpdHwPosn_HwDeg_T_f32,
                                              P2VAR(boolean, AUTOMATIC, FordHwAgArbn_VAR) FordPosnOffsVld_Cnt_T_logl);
                                              
static FUNC(void, FORDHWAGARBN_CODE) NoAbsPrsnt(VAR(float32, AUTOMATIC) FordEngVehSpd_Kph_T_uf32,
                                                VAR(float32, AUTOMATIC) FordInpTq_HwNwtMtr_T_f32,
                                                VAR(float32, AUTOMATIC) FordRelHwPosn_HwDeg_T_f32,
                                                P2VAR(Ford_StePinCompAnEst_D_Qf, AUTOMATIC, FordHwAgArbn_VAR) FordCmpdHwPosnQlyFac_Cnt_T_enum,
                                                P2VAR(float32, AUTOMATIC, FordHwAgArbn_VAR) FordCmpdHwPosn_HwDeg_T_f32,
                                                P2VAR(boolean, AUTOMATIC, FordHwAgArbn_VAR) FordPosnOffsVld_Cnt_T_logl);            
                                                
static FUNC(void, FORDHWAGARBN_CODE) SteerAgFltDiag(VAR(boolean, AUTOMATIC) RackTrvlExcdd_Cnt_T_logl,
                                                    VAR(boolean, AUTOMATIC) PosCorrlnFlt_Cnt_T_logl,
                                                    VAR(boolean, AUTOMATIC) RackTrvlExcddCmpd_Cnt_T_logl);
                                                                                                       
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
 * Ford_StePinCompAnEst_D_Qf: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_Faulty (0U)
 *   Cx1_No_Data_Exists (1U)
 *   Cx2_Degraded (2U)
 *   Cx3_OK (3U)
 * Ford_StePinOffst_D_Stat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_OffsetNotCalculated (0U)
 *   Cx1_StoredOffset (1U)
 *   Cx2_CoarseOffset (2U)
 *   Cx3_FineOffset (3U)
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
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordCmpdHwPosnPrev(void)
 *   float32 *Rte_Pim_NonAbsOffs(void)
 *   float32 *Rte_Pim_PrevIgnCycVal(void)
 *   float32 *Rte_Pim_RelHwPosnPrev(void)
 *   uint32 *Rte_Pim_MotVelVldTrueTi(void)
 *   uint32 *Rte_Pim_NonAbsCentrNotDetdTi(void)
 *   uint32 *Rte_Pim_RelPosnVldFlgRcvryTi(void)
 *   Ford_StePinCompAnEst_D_Qf *Rte_Pim_FordCmpdHwPosnQlyFacPrev(void)
 *   Ford_StePinOffst_D_Stat *Rte_Pim_FordSteerPinionOffsStsPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_NoDataExistFlg(void)
 *   boolean *Rte_Pim_NonAbsOffsVldFlg(void)
 *   boolean *Rte_Pim_RelHwPosnVld(void)
 *   boolean *Rte_Pim_RelPosnLossFlg(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   float32 Rte_CData_PrevIgnCycValDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_FordHwAgArbnPhyRackTrvlThd_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysKineRat_Val(void)
 *   uint16 Rte_Prm_FordHwAgArbnMotVelVldFlgRcvrTiThd_Val(void)
 *   uint16 Rte_Prm_FordHwAgArbnNonAbsCentrNotDetdTiThd_Val(void)
 *   uint16 Rte_Prm_FordHwAgArbnRelPosnVldFlgRcvryTiThd_Val(void)
 *
 *********************************************************************************************************************/


#define FordHwAgArbn_START_SEC_CODE
#include "FordHwAgArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordHwAgArbnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_FordHwAgArbnInit1_FordSnsrOutp(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_NonAbsOffs_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NonAbsOffs_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NonAbsOffsVldFlg_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NonAbsOffsVldFlg_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_PrevIgnCycVal_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordHwAgArbnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordHwAgArbn_CODE) FordHwAgArbnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordHwAgArbnInit1
 *********************************************************************************************************************/

    VAR(Std_ReturnType, AUTOMATIC) PrevIgnCycValErrSts_Cnt_T_enum;
    VAR(Std_ReturnType, AUTOMATIC) NonAbsOffsErrSts_Cnt_T_enum;
    VAR(Std_ReturnType, AUTOMATIC) NonAbsOffsVldFlgErrSts_Cnt_T_enum;
    
    VAR(float32, AUTOMATIC) FordSnsrInp_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) FordSnsrOutp_HwDeg_T_f32;
    
    (void)Rte_Read_FordSnsrInp_Val(&FordSnsrInp_HwDeg_T_f32);
 
    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MotVelVldTrueTi());
    *Rte_Pim_NonAbsCentrNotDetdTi() = *Rte_Pim_MotVelVldTrueTi();
    *Rte_Pim_RelPosnVldFlgRcvryTi() = *Rte_Pim_MotVelVldTrueTi();
    
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0E0, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0EA, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
    
    (void)Rte_Call_PrevIgnCycVal_GetErrorStatus(&PrevIgnCycValErrSts_Cnt_T_enum);
    
  //  if(PrevIgnCycValErrSts_Cnt_T_enum == NVM_REQ_OK)
 //   {
        FordSnsrOutp_HwDeg_T_f32 = FordSnsrInp_HwDeg_T_f32; // + *Rte_Pim_PrevIgnCycVal();
 //   }
 //   else
 //  {
 //       FordSnsrOutp_HwDeg_T_f32 = 0.0F;
 //   }
 
    *Rte_Pim_RelPosnLossFlg() = FALSE;
    *Rte_Pim_RelHwPosnVld() = FALSE;
    *Rte_Pim_NoDataExistFlg() = FALSE;
    *Rte_Pim_FirstTranVldFlg() = TRUE;
    *Rte_Pim_FordCmpdHwPosnPrev() = 0.0F;
    
    (void)Rte_Call_NonAbsOffs_GetErrorStatus(&NonAbsOffsErrSts_Cnt_T_enum);
    
    if(NonAbsOffsErrSts_Cnt_T_enum == NVM_REQ_NOT_OK)
    {
        *Rte_Pim_NonAbsOffs() = 0.0F;
        (void)Rte_Call_NonAbsOffs_SetRamBlockStatus(TRUE);
    }
    
    (void)Rte_Call_NonAbsOffsVldFlg_GetErrorStatus(&NonAbsOffsVldFlgErrSts_Cnt_T_enum);
    
    if(NonAbsOffsVldFlgErrSts_Cnt_T_enum == NVM_REQ_NOT_OK)
    {
        *Rte_Pim_NonAbsOffsVldFlg() = FALSE;
        (void)Rte_Call_NonAbsOffsVldFlg_SetRamBlockStatus(TRUE);
    }
    
    (void)Rte_IrvWrite_FordHwAgArbnInit1_FordSnsrOutp(FordSnsrOutp_HwDeg_T_f32);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordHwAgArbnPer1
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
 *   Std_ReturnType Rte_Read_FordAbsPrsnt_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEngVehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordInpTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordMotPosn_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordMotVelVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordSnsrInp_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordSteerAgClrFlg_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordSteerPinionOffs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordSteerPinionOffsSts_Ford_StePinOffst_D_Stat(Ford_StePinOffst_D_Stat *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordCmpdHwPosn_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordCmpdHwPosnQlyFac_Ford_StePinCompAnEst_D_Qf(Ford_StePinCompAnEst_D_Qf data)
 *   Std_ReturnType Rte_Write_FordHwVelVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordPosnOffsVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordRelHwPosn_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordRelHwPosnVld_Logl(boolean data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_FordHwAgArbnPer1_FordSnsrOutp(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetGpioMcuEna_Oper(boolean *PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_NonAbsOffs_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NonAbsOffsVldFlg_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_PrevIgnCycVal_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordHwAgArbnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordHwAgArbn_CODE) FordHwAgArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordHwAgArbnPer1
 *********************************************************************************************************************/

    /*** Inputs ***/
    VAR(boolean, AUTOMATIC) FordAbsPrsnt_Cnt_T_logl;
	VAR(float32, AUTOMATIC) FordEngVehSpd_Kph_T_uf32;
    VAR(uint8,   AUTOMATIC) FordEpsEna_Cnt_T_u08;
    VAR(float32, AUTOMATIC) FordInpTq_HwNwtMtr_T_f32;
    VAR(boolean, AUTOMATIC) FordMotVelVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) FordSteerAgClrFlg_Cnt_T_logl;
    VAR(float32, AUTOMATIC) FordSteerPinionOffs_HwDeg_T_f32;
    VAR(Ford_StePinOffst_D_Stat, AUTOMATIC) FordSteerPinionOffsSts_Cnt_T_enum; 
	VAR(uint8, AUTOMATIC) HwAgIdptSig_Cnt_T_u08;
    
    /*** Outputs ***/
    VAR(float32, AUTOMATIC) FordCmpdHwPosn_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) FordCmpdHwPosntoSerlCom_HwDeg_T_f32; // For CAN Polarity
    VAR(boolean, AUTOMATIC) FordHwVelVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) FordPosnOffsVld_Cnt_T_logl = FALSE;
    VAR(float32, AUTOMATIC) FordRelHwPosnFinal_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) FordRelHwPosntoSerlCom_HwDeg_T_f32; // For CAN Polarity
    VAR(boolean, AUTOMATIC) FordRelHwPosnVld_Cnt_T_logl;
    VAR(Ford_StePinCompAnEst_D_Qf, AUTOMATIC) FordCmpdHwPosnQlyFac_Cnt_T_enum;
	VAR(boolean, AUTOMATIC) FordVehSteerPinionAgOffsVld_Cnt_T_logl;
    
    /*** Temporary Variables ***/
    VAR(boolean, AUTOMATIC) RackTrvlExcdd_Cnt_T_logl = FALSE;
    VAR(boolean, AUTOMATIC) RackTrvlExcddCmpd_Cnt_T_logl = FALSE;
    VAR(boolean, AUTOMATIC) PosCorrlnFlt_Cnt_T_logl = FALSE;
    VAR(float32, AUTOMATIC) FordRelHwPosn_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) FordSnsrInp_HwDeg_T_f32;
    VAR(boolean, AUTOMATIC) Ntc0A1Actv_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) Ntc0A6Actv_Cnt_T_logl;

	
	Rte_Call_GetGpioMcuEna_Oper(&FordEpsEna_Cnt_T_u08);
	
    (void)Rte_Read_FordAbsPrsnt_Logl(&FordAbsPrsnt_Cnt_T_logl);
    (void)Rte_Read_FordEngVehSpd_Val(&FordEngVehSpd_Kph_T_uf32);
    (void)Rte_Read_FordInpTq_Val(&FordInpTq_HwNwtMtr_T_f32);
    (void)Rte_Read_FordMotVelVld_Logl(&FordMotVelVld_Cnt_T_logl);
    (void)Rte_Read_FordSteerAgClrFlg_Logl(&FordSteerAgClrFlg_Cnt_T_logl);
    (void)Rte_Read_FordSteerPinionOffs_Val(&FordSteerPinionOffs_HwDeg_T_f32);
    (void)Rte_Read_FordSteerPinionOffsSts_Ford_StePinOffst_D_Stat(&FordSteerPinionOffsSts_Cnt_T_enum);   
    (void)Rte_Read_FordSnsrInp_Val(&FordSnsrInp_HwDeg_T_f32);
	(void)Rte_Read_HwAgIdptSig_Val(&HwAgIdptSig_Cnt_T_u08);
    (void)Rte_Read_FordVehSteerPinionAgOffsVld_Logl(&FordVehSteerPinionAgOffsVld_Cnt_T_logl);
	
    /*** RelHwPosnProcessing ***/
    (void)Rte_Call_GetNtcActv_Oper(NTCNR_0X0A6, &Ntc0A6Actv_Cnt_T_logl);
    (void)Rte_Call_GetNtcActv_Oper(NTCNR_0X0A1, &Ntc0A1Actv_Cnt_T_logl);

    if ( (HwAgIdptSig_Cnt_T_u08 < HWSIGIDPTMIN_CNT_U08)
			|| (TRUE == Ntc0A1Actv_Cnt_T_logl)
			|| (TRUE == Ntc0A6Actv_Cnt_T_logl))
    {
    	FordRelHwPosn_HwDeg_T_f32 = FAULTY_HWDEG_F32;
    }
    else
    {
    	FordRelHwPosn_HwDeg_T_f32 = FordSnsrInp_HwDeg_T_f32;
    }

    FordRelHwPosnFinal_HwDeg_T_f32 = Lim_f32(FordRelHwPosn_HwDeg_T_f32, FORDRELHWPOSNMIN_HWDEG_F32, FORDRELHWPOSNMAX_HWDEG_F32);
    *Rte_Pim_RelHwPosnPrev() = FordRelHwPosnFinal_HwDeg_T_f32;
    
	if (FAULTY_HWDEG_F32 == FordRelHwPosn_HwDeg_T_f32)
	{
		FordRelHwPosntoSerlCom_HwDeg_T_f32 = FAULTY_HWDEG_F32;
	}
	else
	{
		FordRelHwPosntoSerlCom_HwDeg_T_f32 = Lim_f32((-FordRelHwPosn_HwDeg_T_f32), FORDRELHWPOSNMIN_HWDEG_F32, FORDRELHWPOSNMAX_HWDEG_F32);
	}
    
    FordRelHwPosnVld_Cnt_T_logl = FordRelPosnVldProc(FordRelHwPosn_HwDeg_T_f32);
    
    /*** HwVelVld Processing ***/
    FordHwVelVld_Cnt_T_logl = HwVelVldProc(FordMotVelVld_Cnt_T_logl);
    
    if(FordAbsPrsnt_Cnt_T_logl == TRUE)
    {
        AbsPrsnt(FordSteerAgClrFlg_Cnt_T_logl,
                 FordSteerPinionOffs_HwDeg_T_f32,
                 FordSteerPinionOffsSts_Cnt_T_enum,
                 FordRelHwPosn_HwDeg_T_f32,
				 FordRelHwPosnVld_Cnt_T_logl,
				 FordVehSteerPinionAgOffsVld_Cnt_T_logl,
                 &FordCmpdHwPosnQlyFac_Cnt_T_enum,
                 &FordCmpdHwPosn_HwDeg_T_f32,
                 &FordPosnOffsVld_Cnt_T_logl);       
    }
    else
    {
        NoAbsPrsnt(FordEngVehSpd_Kph_T_uf32,
                   FordInpTq_HwNwtMtr_T_f32,
                   FordRelHwPosn_HwDeg_T_f32,
                   &FordCmpdHwPosnQlyFac_Cnt_T_enum,
                   &FordCmpdHwPosn_HwDeg_T_f32,
                   &FordPosnOffsVld_Cnt_T_logl);
    }
    
    /*** CheckFordCmpdHwPosn ***/
    if(FordCmpdHwPosn_HwDeg_T_f32 > Rte_Prm_FordHwAgArbnPhyRackTrvlThd_Val())
    {
        RackTrvlExcddCmpd_Cnt_T_logl = TRUE;
        FordCmpdHwPosnQlyFac_Cnt_T_enum = Cx0_Faulty;
    }

    *Rte_Pim_FordCmpdHwPosnQlyFacPrev() = FordCmpdHwPosnQlyFac_Cnt_T_enum;
    
    SteerAgFltDiag(RackTrvlExcdd_Cnt_T_logl,
                   PosCorrlnFlt_Cnt_T_logl,
                   RackTrvlExcddCmpd_Cnt_T_logl);

	FordCmpdHwPosntoSerlCom_HwDeg_T_f32 = Lim_f32((-FordCmpdHwPosn_HwDeg_T_f32), FORDCMPDHWPOSNMIN_HWDEG_F32, FORDCMPDHWPOSNMAX_HWDEG_F32);
    FordCmpdHwPosn_HwDeg_T_f32 = Lim_f32(FordCmpdHwPosn_HwDeg_T_f32, FORDCMPDHWPOSNMIN_HWDEG_F32, FORDCMPDHWPOSNMAX_HWDEG_F32);
    *Rte_Pim_FordCmpdHwPosnPrev() = FordCmpdHwPosn_HwDeg_T_f32;
    
    (void)Rte_Write_FordRelHwPosn_Val(FordRelHwPosnFinal_HwDeg_T_f32);
	(void)Rte_Write_FordRelHwPosntoSerlCom_Val(FordRelHwPosntoSerlCom_HwDeg_T_f32);
    (void)Rte_Write_FordRelHwPosnVld_Logl(FordRelHwPosnVld_Cnt_T_logl);
    (void)Rte_Write_FordCmpdHwPosn_Val(FordCmpdHwPosn_HwDeg_T_f32);
	(void)Rte_Write_FordCmpdHwPosntoSerlCom_Val(FordCmpdHwPosntoSerlCom_HwDeg_T_f32);
    (void)Rte_Write_FordCmpdHwPosnQlyFac_Ford_StePinCompAnEst_D_Qf(FordCmpdHwPosnQlyFac_Cnt_T_enum);
	(void)Rte_Write_FordCmpdHwPosnQlyFac8_Val((uint8)FordCmpdHwPosnQlyFac_Cnt_T_enum);
    (void)Rte_Write_FordPosnOffsVld_Logl(FordPosnOffsVld_Cnt_T_logl);
    (void)Rte_Write_FordHwVelVld_Logl(FordHwVelVld_Cnt_T_logl);
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordHwAgArbn_STOP_SEC_CODE
#include "FordHwAgArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**************************************************************************************************************************
  * Name         :  FordRelPosnVldProc
  * Description  :  Implementation of 'FordRelPosnVld Processing' block in FDD.
  * Inputs       :  FordRelHwPosn_HwDeg_T_f32 - Calculated in Per1
  * Outputs		 :  FordRelHwPosnVld_Cnt_T_logl - RTE Output
  * Usage Notes  :  None
  ************************************************************************************************************************/
static FUNC(boolean, FORDHWAGARBN_CODE) FordRelPosnVldProc(VAR(float32, AUTOMATIC) FordRelHwPosn_HwDeg_T_f32)
{
    VAR(boolean, AUTOMATIC) FordRelHwPosnVld_Cnt_T_logl;
    VAR(uint32,  AUTOMATIC) SpanTi_Cnt_T_u32;
    
//    if(((Abslt_f32_f32(FordRelHwPosn_HwDeg_T_f32 - NODATAEXIST_HWDEG_F32)) <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32) ||
//       ((FordRelHwPosn_HwDeg_T_f32 - FAULTY_HWDEG_F32) <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32))
//    {
//        FordRelHwPosnVld_Cnt_T_logl = FALSE;
//        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_RelPosnVldFlgRcvryTi());
//    }
    if(*Rte_Pim_RelHwPosnVld() == FALSE)
    {
        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_RelPosnVldFlgRcvryTi(), &SpanTi_Cnt_T_u32);
        
        if(SpanTi_Cnt_T_u32 >= ((uint32)Rte_Prm_FordHwAgArbnRelPosnVldFlgRcvryTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
        {
            FordRelHwPosnVld_Cnt_T_logl = TRUE;
        }
        else
        {
            FordRelHwPosnVld_Cnt_T_logl = FALSE;
        }
    }
    else
    {
        FordRelHwPosnVld_Cnt_T_logl = TRUE;
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_RelPosnVldFlgRcvryTi());
    }
    
    *Rte_Pim_RelHwPosnVld() = FordRelHwPosnVld_Cnt_T_logl;
    
    return FordRelHwPosnVld_Cnt_T_logl;
}
                                              
/**************************************************************************************************************************
  * Name         :  HwVelVldProc
  * Description  :  Implementation of 'HwVelVld Processing' block in FDD.
  * Inputs       :  FordMotVelVld_Cnt_T_logl - Calculated in Per1
  * Outputs		 :  FordHwVelVld_Cnt_T_logl - RTE Output
  * Usage Notes  :  None
  ************************************************************************************************************************/
static FUNC(boolean, FORDHWAGARBN_CODE) HwVelVldProc(VAR(boolean, AUTOMATIC) FordMotVelVld_Cnt_T_logl)
{
    VAR(boolean, AUTOMATIC) FordHwVelVld_Cnt_T_logl;
    VAR(uint32,  AUTOMATIC) SpanTi_Cnt_T_u32;
    
    if(*Rte_Pim_FirstTranVldFlg() == TRUE)
    {
        if(FordMotVelVld_Cnt_T_logl == TRUE)
        {
            FordHwVelVld_Cnt_T_logl = TRUE;
        }
        else
        {
            FordHwVelVld_Cnt_T_logl = FALSE;
        }
        
        *Rte_Pim_FirstTranVldFlg() = FALSE;
    }
    else
    {
        if(FordMotVelVld_Cnt_T_logl == FALSE)
        {
            FordHwVelVld_Cnt_T_logl = FALSE;
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MotVelVldTrueTi());
        }
        else
        {
            (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MotVelVldTrueTi(), &SpanTi_Cnt_T_u32);
            
            if(SpanTi_Cnt_T_u32 >= ((uint32)Rte_Prm_FordHwAgArbnMotVelVldFlgRcvrTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
            {
                FordHwVelVld_Cnt_T_logl = TRUE;
            }
            else
            {
                FordHwVelVld_Cnt_T_logl = FALSE;
            }
        }
    }
    
    return FordHwVelVld_Cnt_T_logl;
}

                                              
/**************************************************************************************************************************
  * Name         :  AbsPrsnt
  * Description  :  Implementation of 'ABSPresent' block in FDD.
  * Inputs       :  FordSteerAgClrFlg_Cnt_T_logl - RTE Input
  *                 FordSteerPinionOffs_HwDeg_T_f32 - Rte Input
  *                 FordSteerPinionOffsSts_Cnt_T_enum - RTE Input
  *                 FordRelHwPosn_HwDeg_T_f32 - Calculated in Per1
  *                 *FordCmpdHwPosnQlyFac_Cnt_T_enum - Ford Compared Handwheel Position Quality Factor
  *                 *FordCmpdHwPosn_HwDeg_T_f32 - Ford Compared Handwheel Position
  *                 *FordPosnOffsVld_Cnt_T_logl - Ford Position Offset Valid
  * Outputs		 :  None
  * Usage Notes  :  None
  ************************************************************************************************************************/
static FUNC(void, FORDHWAGARBN_CODE) AbsPrsnt(VAR(boolean, AUTOMATIC) FordSteerAgClrFlg_Cnt_T_logl,
                                              VAR(float32, AUTOMATIC) FordSteerPinionOffs_HwDeg_T_f32,
                                              VAR(Ford_StePinOffst_D_Stat, AUTOMATIC) FordSteerPinionOffsSts_Cnt_T_enum,
                                              VAR(float32, AUTOMATIC) FordRelHwPosn_HwDeg_T_f32,
											  VAR(boolean, AUTOMATIC) FordRelHwPosnVld_Cnt_T_logl,
											  VAR(boolean, AUTOMATIC) FordVehSteerPinionAgOffsVld_Cnt_T_logl,
                                              P2VAR(Ford_StePinCompAnEst_D_Qf, AUTOMATIC, FordHwAgArbn_VAR) FordCmpdHwPosnQlyFac_Cnt_T_enum,
                                              P2VAR(float32, AUTOMATIC, FordHwAgArbn_VAR) FordCmpdHwPosn_HwDeg_T_f32,
                                              P2VAR(boolean, AUTOMATIC, FordHwAgArbn_VAR) FordPosnOffsVld_Cnt_T_logl)
{
     /* CompensatedPosnProcessing */
     if(FordSteerAgClrFlg_Cnt_T_logl == TRUE)
     {
         *FordCmpdHwPosn_HwDeg_T_f32 = 0.0F;
     }
     else
     {
         if((FordSteerPinionOffsSts_Cnt_T_enum == Cx3_FineOffset) || (FordSteerPinionOffsSts_Cnt_T_enum == Cx1_StoredOffset))
         {
			if (FALSE == FordVehSteerPinionAgOffsVld_Cnt_T_logl)
			{
				*FordCmpdHwPosn_HwDeg_T_f32 = 0.0F;
			}
			else
			{
				*FordCmpdHwPosn_HwDeg_T_f32 = FordRelHwPosn_HwDeg_T_f32 - FordSteerPinionOffs_HwDeg_T_f32;
			}
         }
         else if((FordRelHwPosnVld_Cnt_T_logl) ||
                  (*Rte_Pim_FordCmpdHwPosnQlyFacPrev() == Cx1_No_Data_Exists))
         {
             *FordCmpdHwPosn_HwDeg_T_f32 = 0.0F;    
         }
         else
         {
             *FordCmpdHwPosn_HwDeg_T_f32 = *Rte_Pim_FordCmpdHwPosnPrev();
         } 
     }

     /* Compensated Position Quality Factor Processing */
     
     if((*Rte_Pim_RelPosnLossFlg() == TRUE) || (*Rte_Pim_NoDataExistFlg()== TRUE))
     {
         *FordCmpdHwPosnQlyFac_Cnt_T_enum = Cx1_No_Data_Exists;
         
         if(FordSteerPinionOffsSts_Cnt_T_enum == Cx0_OffsetNotCalculated)
         {
             *Rte_Pim_NoDataExistFlg() = FALSE;
         }
         else
         {
             *Rte_Pim_NoDataExistFlg() = TRUE;
         }
     }
     else
     {
         if ((FordSteerPinionOffsSts_Cnt_T_enum == Cx3_FineOffset) || (FordSteerPinionOffsSts_Cnt_T_enum == Cx1_StoredOffset))
         {
			if (FALSE == FordVehSteerPinionAgOffsVld_Cnt_T_logl)
			{
				*FordCmpdHwPosnQlyFac_Cnt_T_enum = Cx0_Faulty;   
			}
			else
			{
				*FordCmpdHwPosnQlyFac_Cnt_T_enum = Cx3_OK;
			}
         }                
         else if (FordSteerPinionOffsSts_Cnt_T_enum == Cx2_CoarseOffset)
         {
            *FordCmpdHwPosnQlyFac_Cnt_T_enum = Cx2_Degraded;
         }
         else if (FordRelHwPosnVld_Cnt_T_logl)
         {
             *FordCmpdHwPosnQlyFac_Cnt_T_enum = Cx0_Faulty;        
         }
         else
         {
             *FordCmpdHwPosnQlyFac_Cnt_T_enum = Cx1_No_Data_Exists;
         }
     }
     
     *Rte_Pim_FordSteerPinionOffsStsPrev() = FordSteerPinionOffsSts_Cnt_T_enum;
     
     /* PosnOffsVldProcessing */
     
     if((FordSteerPinionOffsSts_Cnt_T_enum == Cx1_StoredOffset) || (FordSteerPinionOffsSts_Cnt_T_enum == Cx3_FineOffset))
     {
         *FordPosnOffsVld_Cnt_T_logl = TRUE;    
     }   
}
 
/**************************************************************************************************************************
  * Name         :  NoAbsPrsnt
  * Description  :  Implementation of 'NoABS' block in FDD.
  * Inputs       :  FordEngVehSpd_Kph_T_uf32 - RTE Input
  *                 FordInpTq_HwNwtMtr_T_f32 - RTE Input
  *                 FordRelHwPosn_HwDeg_T_f32 - Calculated in Per1
  *                 *FordCmpdHwPosnQlyFac_Cnt_T_enum - Ford Compared Handwheel Position Quality Factor
  *                 *FordCmpdHwPosn_HwDeg_T_f32 - Ford Compared Handwheel Position
  *                 *FordPosnOffsVld_Cnt_T_logl - Ford Position Offset Valid
  * Outputs		 :  None
  * Usage Notes  :  None
  ************************************************************************************************************************/
static FUNC(void, FORDHWAGARBN_CODE) NoAbsPrsnt(VAR(float32, AUTOMATIC) FordEngVehSpd_Kph_T_uf32,
                                                VAR(float32, AUTOMATIC) FordInpTq_HwNwtMtr_T_f32,
                                                VAR(float32, AUTOMATIC) FordRelHwPosn_HwDeg_T_f32,
                                                P2VAR(Ford_StePinCompAnEst_D_Qf, AUTOMATIC, FordHwAgArbn_VAR) FordCmpdHwPosnQlyFac_Cnt_T_enum,
                                                P2VAR(float32, AUTOMATIC, FordHwAgArbn_VAR) FordCmpdHwPosn_HwDeg_T_f32,
                                                P2VAR(boolean, AUTOMATIC, FordHwAgArbn_VAR) FordPosnOffsVld_Cnt_T_logl)
{
    VAR(uint32, AUTOMATIC) SpanTi_Cnt_T_u32;
    
    if((FordEngVehSpd_Kph_T_uf32 > ENGVEHSPDVALLIM_KPH_F32) &&
           (FordInpTq_HwNwtMtr_T_f32 < INPTQVALLIM_HWNWTMTR_F32) &&
           (FordRelHwPosn_HwDeg_T_f32 < RELHWPOSNLIM_HWDEG_F32))
        {
            *Rte_Pim_NonAbsOffs() = FordRelHwPosn_HwDeg_T_f32;
            *FordCmpdHwPosn_HwDeg_T_f32 = 0.0F;
            *Rte_Pim_NonAbsOffsVldFlg() = TRUE;
            
            (void)Rte_Call_NonAbsOffs_SetRamBlockStatus(TRUE);
            (void)Rte_Call_NonAbsOffsVldFlg_SetRamBlockStatus(TRUE);
        }
        else
        {
            if(*Rte_Pim_NonAbsOffsVldFlg() == TRUE)
            {
                *FordCmpdHwPosn_HwDeg_T_f32 = FordRelHwPosn_HwDeg_T_f32 - *Rte_Pim_NonAbsOffs();
            }
            else
            {
                *FordCmpdHwPosn_HwDeg_T_f32 = 0.0F;
            }
        }
        
        if((FordEngVehSpd_Kph_T_uf32 > ENGVEHSPDVALLIM_KPH_F32) &&
           (FordInpTq_HwNwtMtr_T_f32 < INPTQVALLIM_HWNWTMTR_F32) &&
           (FordRelHwPosn_HwDeg_T_f32 < RELHWPOSNLIM_HWDEG_F32) &&
           (*Rte_Pim_NonAbsOffsVldFlg() == FALSE))
        {
             (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_NonAbsCentrNotDetdTi(), &SpanTi_Cnt_T_u32);

             if(SpanTi_Cnt_T_u32 >= ((uint32)Rte_Prm_FordHwAgArbnNonAbsCentrNotDetdTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
             {
                 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0EA, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
             }
        }
        else
        {
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_NonAbsCentrNotDetdTi());
        }
        
        *FordCmpdHwPosnQlyFac_Cnt_T_enum = Cx0_Faulty;
        *FordPosnOffsVld_Cnt_T_logl = FALSE;
}
                                              
/**************************************************************************************************************************
  * Name         :  SteerAgFltDiag
  * Description  :  Implementation of 'SteerAgFltDiag' block in FDD.
  * Inputs       :  RackTrvlExcdd_Cnt_T_logl - Calculated in Per1
  *                 PosCorrlnFlt_Cnt_T_logl - Calculated in Per1
  *                 RackTrvlExcddCmpd_Cnt_T_logl - Calculated in Per1
  * Outputs		 :  None
  * Usage Notes  :  None
  ************************************************************************************************************************/
static FUNC(void, FORDHWAGARBN_CODE) SteerAgFltDiag(VAR(boolean, AUTOMATIC) RackTrvlExcdd_Cnt_T_logl,
                                                    VAR(boolean, AUTOMATIC) PosCorrlnFlt_Cnt_T_logl,
                                                    VAR(boolean, AUTOMATIC) RackTrvlExcddCmpd_Cnt_T_logl)
{
    VAR(uint8, AUTOMATIC) NtcSt_Cnt_T_u08;
    
    if((RackTrvlExcdd_Cnt_T_logl == TRUE) ||
       (RackTrvlExcddCmpd_Cnt_T_logl == TRUE) ||
       (PosCorrlnFlt_Cnt_T_logl == TRUE))
    {
        if(RackTrvlExcdd_Cnt_T_logl == TRUE)
        {
            NtcSt_Cnt_T_u08 = RACKTRVLEXCDDREL_CNT_U08;
        }
        else
        {
            NtcSt_Cnt_T_u08 = 0U;
        }
        
        if(PosCorrlnFlt_Cnt_T_logl == TRUE)
        {
            NtcSt_Cnt_T_u08 += POSCORRLNFLT_CNT_U08;
        }
        else
        {
            NtcSt_Cnt_T_u08 += 0U;
        }
        
        if(RackTrvlExcddCmpd_Cnt_T_logl == TRUE)
        {
            NtcSt_Cnt_T_u08 += RACKTRVLEXCDDCMPD_CNT_U08;
        }
        else
        {
            NtcSt_Cnt_T_u08 += 0U;
        }
        
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0E0, NtcSt_Cnt_T_u08, NTCSTS_FAILD, DEBSTEP_CNT_U16);
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
