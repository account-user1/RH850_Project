/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordMsg167BusHiSpd.c
 *        Config:  C:/_Synergy_Projects/Working/MM059A_FordMsg167BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg167BusHiSpd
 *  Generated at:  Tue Feb 20 14:21:07 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordMsg167BusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
* Copyright 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name	 : FordMsg167BusHiSpd.c
* Module Description : Implementation of FordMsg167BusHiSpd FDD MM059A
* Project            : CBD 
* Author             : Krishna Kanth Anne
***********************************************************************************************************************
* Version Control:
* %version:           3 %
* %derived_by:        nz2796 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                      		                                   SCR #
* -------   -------  --------  ---------------------------------------------------------------------------  -----------
* 10/12/17  1        KK        Initial Version                                                               EA4#17166
* 01/03/18  2        KK        Per1 now runs at 10ms                                                         EA4#18698
* 02/20/18  3        ML        Updated Input Data Types and Initial Values                                   EA4#20806
*----------------------------------------------------------------------------------------------------------------------
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

#include "Rte_FordMsg167BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Read_*, Rte_Write_*, Rte_Call_SetNtcSts */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]:   Rte_Call_GetRefTmr100MicroSec32bit_Oper, Rte_Call_GetTiSpan100MicroSec32bit_Oper  */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#include "NxtrMath.h"
#include "NxtrFixdPt.h"
#include "ArchGlbPrm.h"
/********************************************* Embedded Local Constants **********************************************/
#define BUSHISPDFIXDTITHD_MILLISEC_U16   		(5000U)
#define CNVMILLISECTOCNT_CNTPERMILLISEC_U16   	(10U)
#define DEBSTEP_CNT_U16   						(65535U)
#define DIAGENA_CNT_U08   						(0U)
#define FORDVEHPRPNWHLTQFLT_CNT_U16   			(65535U)
#define FORDVEHPRPNWHLTQFLT_NWTMTR_F32   		(131068.0F)
#define FORDVEHPRPNWHLTQMINVLD_NWTMTR_F32   	(-131072.0F)
#define FORDVEHPRPNWHLTQNODATA_CNT_U16   		(65534U)
#define MODSEL_CNT_U08   						(1U)
#define PRPNWHLTQMAX_CNT_U16					(65535U)
#define PRPNWHLTQMIN_CNT_U16				    (0U)
#define PRPNWHLTQOFFSET_NWTMTR_F32   			(131072.0F)
#define PRPNWHLTQSCA_NWTMTRPERCNT_F32   		(4.0F)

/******************************************** Local Function Prototypes **********************************************/
static FUNC(void, FordMsg415BusHiSpd_CODE)Ntc0x11D0x11ESetRst(VAR(boolean, AUTOMATIC) MissMsgDiagEna_Cnt_T_logl,
															   VAR(boolean, AUTOMATIC) FordVehPrpnWhlTqSigInvldDiagEna_Cnt_T_logl,
															   VAR(boolean, AUTOMATIC) FordVehPrpnWhlTqVldnp_Cnt_T_logl,
															   VAR(uint16, AUTOMATIC) BusHiSpdPrpnWhlTqSigInvldTiThd_T_u16);
															   
static FUNC(void, FordMsg167BusHiSpd_CODE)MsgMiss(VAR(boolean, AUTOMATIC) MissMsgDiagEna_Cnt_T_logl,
												  VAR(uint16, AUTOMATIC) BusHiSpdMissTiThd_MilliSec_T_u16,
												  P2VAR(Ford_PwPckTq_D_Stat, AUTOMATIC, FordMsg167BusHiSpd_CODE) FordVehPwrpkTqSts_Cnt_T_enum, 		
												  P2VAR(float32, AUTOMATIC, FordMsg167BusHiSpd_CODE) FordVehPrpnWhlTq_NwtMtr_T_f32, 		
                                                  P2VAR(uint16, AUTOMATIC, FordMsg167BusHiSpd_CODE) FordVehPrpnWhlTqRaw_Cnt_T_u16,		
												  P2VAR(Ford_ElPw_D_Stat, AUTOMATIC, FordMsg167BusHiSpd_CODE) FordVehElecPwrSts_Cnt_T_enum,		
												  P2VAR(Ford_ElPw_D_StatStrtStop, AUTOMATIC, FordMsg167BusHiSpd_CODE) FordVehElecPwrStrtStopSts_Cnt_T_enum,
												  P2VAR(boolean, AUTOMATIC, FordMsg167BusHiSpd_CODE) FordVehPrpnWhlTqVld_Cnt_T_logl);
												  
static FUNC(void, FordMsg167BusHiSpd_CODE)VldElpdTi(P2VAR(boolean, AUTOMATIC, FordMsg167BusHiSpd_CODE) VldElpdTi_Cnt_T_logl,
												    P2VAR(boolean, AUTOMATIC, FordMsg167BusHiSpd_CODE) InvldElpdTi_Cnt_T_logl);

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
 * Ford_ElPw_D_Stat: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_Not_Supported (0U)
 *   Cx1_Supported (1U)
 *   Cx2_Not_Supported_Imminent (2U)
 *   Cx3_LV_Event_In_Progress (3U)
 *   Cx4_Fault_Limited (4U)
 *   Cx5_NotUsed_1 (5U)
 *   Cx6_NotUsed_2 (6U)
 *   Cx7_NotUsed_3 (7U)
 * Ford_ElPw_D_StatStrtStop: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_Not_Supported (0U)
 *   Cx1_Supported_All (1U)
 *   Cx2_Not_Supported_Imminent (2U)
 *   Cx3_LV_Event_in_Progress (3U)
 *   Cx4_Fault_Limited (4U)
 *   Cx5_Limited_Support (5U)
 *   Cx6_Supported_Level_1 (6U)
 *   Cx7_Supported_Level_2 (7U)
 *   Cx8_Supported_Level_3 (8U)
 *   Cx9_Supported_Level_4 (9U)
 *   CxA_NotUsed1 (10U)
 *   CxB_NotUsed2 (11U)
 *   CxC_NotUsed3 (12U)
 *   CxD_NotUsed4 (13U)
 *   CxE_NotUsed5 (14U)
 *   CxF_NotUsed6 (15U)
 * Ford_PrplWhlTot2_Tq_Actl: Enumeration of integer in interval [0...65535] with enumerators
 *   CxFFFE_NoDataExists (65534U)
 *   CxFFFF_Fault (65535U)
 *   Unit: [Nm], Factor: 4, Offset: -131072
 * Ford_PwPckTq_D_Stat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PwPckOff_TqNotAvailable (0U)
 *   Cx1_PwPckOn_TqNotAvailable (1U)
 *   Cx2_StartInPrgrss_TqNotAvail (2U)
 *   Cx3_PwPckOn_TqAvailable (3U)
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
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordVehPrpnWhlTqPrev(void)
 *   uint32 *Rte_Pim_FordVehPrpnWhlTqSigInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehPrpnWhlTqSigInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint32 *Rte_Pim_PrpnWhlTqVldFaildRefTi(void)
 *   uint32 *Rte_Pim_PrpnWhlTqVldMissRefTi(void)
 *   uint32 *Rte_Pim_PrpnWhlTqVldPassdRefTi(void)
 *   uint16 *Rte_Pim_FordVehPrpnWhlTqRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   Ford_ElPw_D_StatStrtStop *Rte_Pim_FordVehElecPwrStrtStopStsPrev(void)
 *   Ford_ElPw_D_Stat *Rte_Pim_FordVehElecPwrStsPrev(void)
 *   Ford_PwPckTq_D_Stat *Rte_Pim_FordVehPwrpkTqStsPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehMsg167Miss(void)
 *   boolean *Rte_Pim_FordVehMsg167Rxd(void)
 *   boolean *Rte_Pim_FordVehPrpnWhlTqVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg167BusHiSpdMissMsgFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg167BusHiSpdMissMsgPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqMissTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd_Val(void)
 *
 *********************************************************************************************************************/


#define FordMsg167BusHiSpd_START_SEC_CODE
#include "FordMsg167BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg167BusHiSpdInit1
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
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg167BusHiSpdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg167BusHiSpd_CODE) FordMsg167BusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg167BusHiSpdInit1
 *********************************************************************************************************************/
	
	*Rte_Pim_FirstTranVldFlg() = TRUE;
	
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgFaildRefTi());
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgPassdRefTi());
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehPrpnWhlTqSigInvldPassdRefTi());
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehPrpnWhlTqSigInvldFaildRefTi());
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_PrpnWhlTqVldMissRefTi());
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_PrpnWhlTqVldFaildRefTi());
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_PrpnWhlTqVldPassdRefTi());
	
	*Rte_Pim_FordVehPrpnWhlTqPrev() = FORDVEHPRPNWHLTQMINVLD_NWTMTR_F32;
	

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg167BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordBrkOscnRednEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordInvldMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMfgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMissMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordTqSteerCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackUpAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_ElPw_D_Stat1_Ford_ElPw_D_Stat(Ford_ElPw_D_Stat *data)
 *   Std_ReturnType Rte_Read_Ford_ElPw_D_StatStrtStop1_Ford_ElPw_D_StatStrtStop(Ford_ElPw_D_StatStrtStop *data)
 *   Std_ReturnType Rte_Read_Ford_PrplWhlTot2_Tq_Actl_Ford_PrplWhlTot2_Tq_Actl(Ford_PrplWhlTot2_Tq_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_PwPckTq_D_Stat1_Ford_PwPckTq_D_Stat(Ford_PwPckTq_D_Stat *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehElecPwrStrtStopSts_Ford_ElPw_D_StatStrtStop(Ford_ElPw_D_StatStrtStop data)
 *   Std_ReturnType Rte_Write_FordVehElecPwrSts_Ford_ElPw_D_Stat(Ford_ElPw_D_Stat data)
 *   Std_ReturnType Rte_Write_FordVehPrpnWhlTq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehPrpnWhlTqRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehPrpnWhlTqVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat(Ford_PwPckTq_D_Stat data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
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
 * Symbol: FordMsg167BusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg167BusHiSpd_CODE) FordMsg167BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg167BusHiSpdPer1
 *********************************************************************************************************************/

 VAR(float32, AUTOMATIC) FordVehPrpnWhlTq_NwtMtr_T_f32;
 
 VAR(Ford_PrplWhlTot2_Tq_Actl, AUTOMATIC) Ford_PrplWhlTot2_Tq_Actl_Cnt_T_u16;
 VAR(uint16, AUTOMATIC) FordVehPrpnWhlTqRaw_Cnt_T_u16;
 VAR(uint16, AUTOMATIC) BusHiSpdMissTiThd_MilliSec_T_u16;
 VAR(uint16, AUTOMATIC) BusHiSpdPrpnWhlTqSigInvldTiThd_T_u16;
  
 VAR(boolean, AUTOMATIC) FordBrkOscnRednEnad_Cnt_T_logl;
 VAR(uint8, AUTOMATIC) FordCanDtcInhb_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) FordClrDiagcFlgProxy_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) FordInvldMsgDiagcInhb_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) FordMfgDiagcInhb_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) FordMissMsgDiagcInhb_Cnt_T_u08;
 VAR(boolean, AUTOMATIC) FordTqSteerCmpEnad_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) FordTrlrBackUpAssiEnad_Cnt_T_logl;
 
 VAR(Ford_ElPw_D_Stat, AUTOMATIC) Ford_ElPw_D_Stat1_Cnt_T_enum;
 VAR(Ford_ElPw_D_Stat, AUTOMATIC) FordVehElecPwrSts_Cnt_T_enum;
 VAR(Ford_ElPw_D_StatStrtStop, AUTOMATIC) Ford_ElPw_D_StatStrtStop1_Cnt_T_enum;
 VAR(Ford_ElPw_D_StatStrtStop, AUTOMATIC) FordVehElecPwrStrtStopSts_Cnt_T_enum;
 VAR(Ford_PwPckTq_D_Stat, AUTOMATIC) FordVehPwrpkTqSts_Cnt_T_enum;
 VAR(Ford_PwPckTq_D_Stat, AUTOMATIC) Ford_PwPckTq_D_Stat1_Cnt_T_enum;
 
 VAR(boolean, AUTOMATIC) FordVehPrpnWhlTqVld_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) MissMsgDiagEna_Cnt_T_logl = FALSE;
 VAR(boolean, AUTOMATIC) FordVehPrpnWhlTqSigInvldDiagEna_Cnt_T_logl = FALSE;
 VAR(boolean, AUTOMATIC) VldElpdTi_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) InvldElpdTi_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) FordVehPrpnWhlTqVldnp_Cnt_T_logl;
 
 /* Reading inputs from RTE */
 (void)Rte_Read_FordBrkOscnRednEnad_Logl(&FordBrkOscnRednEnad_Cnt_T_logl);
 (void)Rte_Read_FordCanDtcInhb_Val(&FordCanDtcInhb_Cnt_T_u08);
 (void)Rte_Read_ClrDiagcFlgProxy_Val(&FordClrDiagcFlgProxy_Cnt_T_u08);
 (void)Rte_Read_FordEpsLifeCycMod_Val(&FordEpsLifeCycMod_Cnt_T_u08);
 (void)Rte_Read_FordInvldMsgDiagcInhb_Val(&FordInvldMsgDiagcInhb_Cnt_T_u08);
 (void)Rte_Read_FordMfgDiagcInhb_Val(&FordMfgDiagcInhb_Cnt_T_u08);
 (void)Rte_Read_FordMissMsgDiagcInhb_Val(&FordMissMsgDiagcInhb_Cnt_T_u08);
 (void)Rte_Read_FordTqSteerCmpEnad_Logl(&FordTqSteerCmpEnad_Cnt_T_logl);
 (void)Rte_Read_FordTrlrBackUpAssiEnad_Logl(&FordTrlrBackUpAssiEnad_Cnt_T_logl);
 (void)Rte_Read_Ford_ElPw_D_Stat1_Ford_ElPw_D_Stat(&Ford_ElPw_D_Stat1_Cnt_T_enum);
 (void)Rte_Read_Ford_ElPw_D_StatStrtStop1_Ford_ElPw_D_StatStrtStop(&Ford_ElPw_D_StatStrtStop1_Cnt_T_enum);
 (void)Rte_Read_Ford_PrplWhlTot2_Tq_Actl_Ford_PrplWhlTot2_Tq_Actl(&Ford_PrplWhlTot2_Tq_Actl_Cnt_T_u16);
 (void)Rte_Read_Ford_PwPckTq_D_Stat1_Ford_PwPckTq_D_Stat(&Ford_PwPckTq_D_Stat1_Cnt_T_enum);
       
  
 /* DiagEna */
 if( (FordCanDtcInhb_Cnt_T_u08 == DIAGENA_CNT_U08) &&
	 (FordMissMsgDiagcInhb_Cnt_T_u08 == DIAGENA_CNT_U08) &&
	 (FordMfgDiagcInhb_Cnt_T_u08 == DIAGENA_CNT_U08) &&
	 (FordClrDiagcFlgProxy_Cnt_T_u08 == *Rte_Pim_ClrDiagcFlgProxyPrev()) )
 {
	MissMsgDiagEna_Cnt_T_logl = TRUE;
 }
 
 if( (FordCanDtcInhb_Cnt_T_u08 == DIAGENA_CNT_U08) &&
	 (FordInvldMsgDiagcInhb_Cnt_T_u08 == DIAGENA_CNT_U08) &&
	 (FordMfgDiagcInhb_Cnt_T_u08 == DIAGENA_CNT_U08) &&
	 (FordClrDiagcFlgProxy_Cnt_T_u08 == *Rte_Pim_ClrDiagcFlgProxyPrev()) &&
	 ( (FordTqSteerCmpEnad_Cnt_T_logl == TRUE) ||
	   (FordTrlrBackUpAssiEnad_Cnt_T_logl == TRUE) ||
	   (FordBrkOscnRednEnad_Cnt_T_logl == TRUE) ) )
 {
	FordVehPrpnWhlTqSigInvldDiagEna_Cnt_T_logl = TRUE;
 }
	*Rte_Pim_ClrDiagcFlgProxyPrev() = FordClrDiagcFlgProxy_Cnt_T_u08;  
 /* CalSeln */
 if(FordEpsLifeCycMod_Cnt_T_u08 == 	MODSEL_CNT_U08)
 {
	/* FixdTi */ 
	BusHiSpdMissTiThd_MilliSec_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
	BusHiSpdPrpnWhlTqSigInvldTiThd_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
 }
 else
 {
	/* CalTi */ 
	BusHiSpdMissTiThd_MilliSec_T_u16 = Rte_Prm_FordMsg167BusHiSpdMissMsgFaildTiThd_Val(); 
	BusHiSpdPrpnWhlTqSigInvldTiThd_T_u16 = Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd_Val(); 
 }
 
 if(*Rte_Pim_FordVehMsg167Miss() == TRUE)
 {
 	/* Msg_Miss */
	MsgMiss(MissMsgDiagEna_Cnt_T_logl,
 			BusHiSpdMissTiThd_MilliSec_T_u16,
 			&FordVehPwrpkTqSts_Cnt_T_enum, 		
 			&FordVehPrpnWhlTq_NwtMtr_T_f32, 		
 			&FordVehPrpnWhlTqRaw_Cnt_T_u16,		
 			&FordVehElecPwrSts_Cnt_T_enum,		
 			&FordVehElecPwrStrtStopSts_Cnt_T_enum,
 			&FordVehPrpnWhlTqVld_Cnt_T_logl);
 }
 else if(*Rte_Pim_FordVehMsg167Rxd() == TRUE)
 {
	/* Msg_Prsnt */
	/* OutputProcessing */
	FordVehPwrpkTqSts_Cnt_T_enum = Ford_PwPckTq_D_Stat1_Cnt_T_enum;
	FordVehElecPwrSts_Cnt_T_enum = Ford_ElPw_D_Stat1_Cnt_T_enum;
	FordVehElecPwrStrtStopSts_Cnt_T_enum = Ford_ElPw_D_StatStrtStop1_Cnt_T_enum;
	FordVehPrpnWhlTqRaw_Cnt_T_u16 = Ford_PrplWhlTot2_Tq_Actl_Cnt_T_u16;
	FordVehPrpnWhlTq_NwtMtr_T_f32 = (FixdToFloat_f32_u16(Ford_PrplWhlTot2_Tq_Actl_Cnt_T_u16, NXTRFIXDPT_P0TOFLOAT_ULS_F32) * PRPNWHLTQSCA_NWTMTRPERCNT_F32) - PRPNWHLTQOFFSET_NWTMTR_F32;
	
	if((Ford_PrplWhlTot2_Tq_Actl_Cnt_T_u16 != FORDVEHPRPNWHLTQNODATA_CNT_U16) && (Ford_PrplWhlTot2_Tq_Actl_Cnt_T_u16 != FORDVEHPRPNWHLTQFLT_CNT_U16))
	{
		FordVehPrpnWhlTqVldnp_Cnt_T_logl = TRUE;
	}
	else
	{
		FordVehPrpnWhlTqVldnp_Cnt_T_logl = FALSE;
	}
	
	/* VldElpdTi */
	VldElpdTi(&VldElpdTi_Cnt_T_logl, &InvldElpdTi_Cnt_T_logl);
		
	if(*Rte_Pim_FirstTranVldFlg() == TRUE)
	{
		*Rte_Pim_FirstTranVldFlg() = FALSE;
		FordVehPrpnWhlTqVld_Cnt_T_logl = FordVehPrpnWhlTqVldnp_Cnt_T_logl;
	}
	else
	{
		if(FordVehPrpnWhlTqVldnp_Cnt_T_logl == TRUE)
		{
			/* Vld */
			if(VldElpdTi_Cnt_T_logl == TRUE)
			{
				FordVehPrpnWhlTqVld_Cnt_T_logl = TRUE;
			}
			else
			{
				FordVehPrpnWhlTqVld_Cnt_T_logl = *Rte_Pim_FordVehPrpnWhlTqVldPrev();
			}
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_PrpnWhlTqVldFaildRefTi());
		}
		else
		{
			/* Invld */
			if(InvldElpdTi_Cnt_T_logl == TRUE)
			{
				FordVehPrpnWhlTqVld_Cnt_T_logl = FALSE;
			}
			else
			{
				FordVehPrpnWhlTqVld_Cnt_T_logl = *Rte_Pim_FordVehPrpnWhlTqVldPrev();
			}
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_PrpnWhlTqVldPassdRefTi());
		}
	}
	
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgFaildRefTi());
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_PrpnWhlTqVldMissRefTi());
	*Rte_Pim_FordVehMsg167Rxd() = FALSE;
	
	/* Implementation of Ntc0x11D and 0x11E Setting and Resetting */
	Ntc0x11D0x11ESetRst(MissMsgDiagEna_Cnt_T_logl, 
						FordVehPrpnWhlTqSigInvldDiagEna_Cnt_T_logl, 
						FordVehPrpnWhlTqVldnp_Cnt_T_logl, 
						BusHiSpdPrpnWhlTqSigInvldTiThd_T_u16);
	
 }
 else
 {
	/* LastStored_Value */
	FordVehPwrpkTqSts_Cnt_T_enum 			= *Rte_Pim_FordVehPwrpkTqStsPrev();
	FordVehPrpnWhlTq_NwtMtr_T_f32 			= *Rte_Pim_FordVehPrpnWhlTqPrev();
	FordVehPrpnWhlTqVld_Cnt_T_logl			= *Rte_Pim_FordVehPrpnWhlTqVldPrev();
	FordVehPrpnWhlTqRaw_Cnt_T_u16 			= *Rte_Pim_FordVehPrpnWhlTqRawPrev();
	FordVehElecPwrSts_Cnt_T_enum 			= *Rte_Pim_FordVehElecPwrStsPrev();
	FordVehElecPwrStrtStopSts_Cnt_T_enum 	= *Rte_Pim_FordVehElecPwrStrtStopStsPrev();
 }
 
 FordVehPrpnWhlTq_NwtMtr_T_f32 = Lim_f32(FordVehPrpnWhlTq_NwtMtr_T_f32,FORDVEHPRPNWHLTQMINVLD_NWTMTR_F32,FORDVEHPRPNWHLTQFLT_NWTMTR_F32); 
 *Rte_Pim_FordVehPrpnWhlTqPrev() = FordVehPrpnWhlTq_NwtMtr_T_f32; 
 FordVehPrpnWhlTqRaw_Cnt_T_u16 = Lim_u16(FordVehPrpnWhlTqRaw_Cnt_T_u16,PRPNWHLTQMIN_CNT_U16,PRPNWHLTQMAX_CNT_U16); 
 *Rte_Pim_FordVehPrpnWhlTqRawPrev() = FordVehPrpnWhlTqRaw_Cnt_T_u16; 
 *Rte_Pim_FordVehPwrpkTqStsPrev() =FordVehPwrpkTqSts_Cnt_T_enum;
 *Rte_Pim_FordVehElecPwrStsPrev() = FordVehElecPwrSts_Cnt_T_enum;
 *Rte_Pim_FordVehElecPwrStrtStopStsPrev() = FordVehElecPwrStrtStopSts_Cnt_T_enum;
 *Rte_Pim_FordVehPrpnWhlTqVldPrev() = FordVehPrpnWhlTqVld_Cnt_T_logl;
 
  /* Write outputs */
 (void)Rte_Write_FordVehElecPwrStrtStopSts_Ford_ElPw_D_StatStrtStop(FordVehElecPwrStrtStopSts_Cnt_T_enum);
 (void)Rte_Write_FordVehElecPwrSts_Ford_ElPw_D_Stat(FordVehElecPwrSts_Cnt_T_enum);
 (void)Rte_Write_FordVehPrpnWhlTq_Val(FordVehPrpnWhlTq_NwtMtr_T_f32);
 (void)Rte_Write_FordVehPrpnWhlTqRaw_Val(FordVehPrpnWhlTqRaw_Cnt_T_u16);
 (void)Rte_Write_FordVehPrpnWhlTqVld_Logl(FordVehPrpnWhlTqVld_Cnt_T_logl);
 (void)Rte_Write_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat(FordVehPwrpkTqSts_Cnt_T_enum); 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordMsg167BusHiSpd_STOP_SEC_CODE
#include "FordMsg167BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /**********************************************************************************************************************************
  * Name         :  Ntc0x11D0x11ESetRst
  * Description  :  Implementation of Ntc0x11D and 0x11E Setting and Resetting
  * Input        :  MissMsgDiagEna_Cnt_T_logl, FordVehPrpnWhlTqSigInvldDiagEna_Cnt_T_logl, FordVehPrpnWhlTqVldnp_Cnt_T_logl
  *					BusHiSpdChksBrkModlInvldValue_Cnt_T_u16.				
  * Output       :  None			
  * Usage Notes  :  None
 **********************************************************************************************************************************/	
 static FUNC(void, FordMsg167BusHiSpd_CODE)Ntc0x11D0x11ESetRst(VAR(boolean, AUTOMATIC) MissMsgDiagEna_Cnt_T_logl,
															   VAR(boolean, AUTOMATIC) FordVehPrpnWhlTqSigInvldDiagEna_Cnt_T_logl,
															   VAR(boolean, AUTOMATIC) FordVehPrpnWhlTqVldnp_Cnt_T_logl,
															   VAR(uint16, AUTOMATIC) BusHiSpdPrpnWhlTqSigInvldTiThd_T_u16)
{
	
	VAR(uint32, AUTOMATIC) TiSpan5_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) TiSpan6_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) TiSpan7_Cnt_T_u32;
		
	if(MissMsgDiagEna_Cnt_T_logl == TRUE)
	{
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MissMsgPassdRefTi(),&TiSpan5_Cnt_T_u32);
		if(TiSpan5_Cnt_T_u32 > (((uint32)Rte_Prm_FordMsg167BusHiSpdMissMsgPassdTiThd_Val()) * ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X11D, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		}
	}
	else
	{
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X11D, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgPassdRefTi());
	}
	
	if(FordVehPrpnWhlTqSigInvldDiagEna_Cnt_T_logl == TRUE)
	{
		if(FordVehPrpnWhlTqVldnp_Cnt_T_logl == TRUE)
		{
			(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehPrpnWhlTqSigInvldPassdRefTi(),&TiSpan6_Cnt_T_u32);
			if(TiSpan6_Cnt_T_u32 > (((uint32)Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd_Val()) * ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))
			{
				(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X11E, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
				
			}
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehPrpnWhlTqSigInvldFaildRefTi());
		}
		else
		{
			(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehPrpnWhlTqSigInvldFaildRefTi(),&TiSpan7_Cnt_T_u32);
			if(TiSpan7_Cnt_T_u32 > (((uint32)BusHiSpdPrpnWhlTqSigInvldTiThd_T_u16) * ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))
			{
				(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X11E, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
				
			}
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehPrpnWhlTqSigInvldPassdRefTi());
		}
	}
	else
	{
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X11E, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehPrpnWhlTqSigInvldFaildRefTi());
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehPrpnWhlTqSigInvldPassdRefTi());
	}
	 
 }
 
 
 
  /**********************************************************************************************************************************
  * Name         :  MsgMiss
  * Description  :  Implementation of "Msg_Miss" block
  * Input        :  MissMsgDiagEna_Cnt_T_logl, BusHiSpdMissTiThd_MilliSec_T_u16, FordVehPrpnWhlTqVldnp_Cnt_T_logl
  *					BusHiSpdChksBrkModlInvldValue_Cnt_T_u16.				
  * Output       :  FordVehPwrpkTqSts_Cnt_T_enum, FordVehPrpnWhlTq_NwtMtr_T_f32, FordVehPrpnWhlTqRaw_Cnt_T_u16,		
  *					FordVehElecPwrSts_Cnt_T_enum, FordVehElecPwrStrtStopSts_Cnt_T_enum, FordVehPrpnWhlTqVld_Cnt_T_logl
  * Usage Notes  :  None
 **********************************************************************************************************************************/	
static FUNC(void, FordMsg167BusHiSpd_CODE)MsgMiss(VAR(boolean, AUTOMATIC) MissMsgDiagEna_Cnt_T_logl,
												  VAR(uint16, AUTOMATIC) BusHiSpdMissTiThd_MilliSec_T_u16,
												  P2VAR(Ford_PwPckTq_D_Stat, AUTOMATIC, FordMsg167BusHiSpd_CODE) FordVehPwrpkTqSts_Cnt_T_enum, 		
												  P2VAR(float32, AUTOMATIC, FordMsg167BusHiSpd_CODE) FordVehPrpnWhlTq_NwtMtr_T_f32, 		
                                                  P2VAR(uint16, AUTOMATIC, FordMsg167BusHiSpd_CODE) FordVehPrpnWhlTqRaw_Cnt_T_u16,		
												  P2VAR(Ford_ElPw_D_Stat, AUTOMATIC, FordMsg167BusHiSpd_CODE) FordVehElecPwrSts_Cnt_T_enum,		
												  P2VAR(Ford_ElPw_D_StatStrtStop, AUTOMATIC, FordMsg167BusHiSpd_CODE) FordVehElecPwrStrtStopSts_Cnt_T_enum,
												  P2VAR(boolean, AUTOMATIC, FordMsg167BusHiSpd_CODE) FordVehPrpnWhlTqVld_Cnt_T_logl)
{	
	VAR(uint32, AUTOMATIC) TiSpan1_Cnt_T_u32;  
	VAR(uint32, AUTOMATIC) TiSpan2_Cnt_T_u32;  
	
	if(MissMsgDiagEna_Cnt_T_logl == TRUE)
	{
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MissMsgFaildRefTi(),&TiSpan1_Cnt_T_u32);
		if(TiSpan1_Cnt_T_u32 > (((uint32)BusHiSpdMissTiThd_MilliSec_T_u16) * ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X11D, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
		}
	}
	else
	{
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X11D, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgFaildRefTi());
	}
	
	(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X11E, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
	
	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_PrpnWhlTqVldMissRefTi(),&TiSpan2_Cnt_T_u32);
	if(TiSpan2_Cnt_T_u32 > (((uint32)Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqMissTiThd_Val()) * ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))
	{
		*FordVehPrpnWhlTqVld_Cnt_T_logl = FALSE;
	}
	else
	{
		*FordVehPrpnWhlTqVld_Cnt_T_logl = *Rte_Pim_FordVehPrpnWhlTqVldPrev();
	}
	
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgPassdRefTi());
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehPrpnWhlTqSigInvldFaildRefTi());
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehPrpnWhlTqSigInvldPassdRefTi());
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_PrpnWhlTqVldFaildRefTi());
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_PrpnWhlTqVldPassdRefTi());
	
	*FordVehPwrpkTqSts_Cnt_T_enum 			= *Rte_Pim_FordVehPwrpkTqStsPrev();
	*FordVehPrpnWhlTq_NwtMtr_T_f32 			= *Rte_Pim_FordVehPrpnWhlTqPrev();
	*FordVehPrpnWhlTqRaw_Cnt_T_u16 			= *Rte_Pim_FordVehPrpnWhlTqRawPrev();
	*FordVehElecPwrSts_Cnt_T_enum 			= *Rte_Pim_FordVehElecPwrStsPrev();
	*FordVehElecPwrStrtStopSts_Cnt_T_enum 	= *Rte_Pim_FordVehElecPwrStrtStopStsPrev();
	
	
}


  /**********************************************************************************************************************************
  * Name         :  VldElpdTi
  * Description  :  Implementation of "VldElpdTi" block
  * Input        :  None.				
  * Output       :  VldElpdTi_Cnt_T_logl, InvldElpdTi_Cnt_T_logl.
  * Usage Notes  :  None
 **********************************************************************************************************************************/	
static FUNC(void, FordMsg167BusHiSpd_CODE)VldElpdTi(P2VAR(boolean, AUTOMATIC, FordMsg167BusHiSpd_CODE) VldElpdTi_Cnt_T_logl,
												    P2VAR(boolean, AUTOMATIC, FordMsg167BusHiSpd_CODE) InvldElpdTi_Cnt_T_logl)
{
	
	VAR(uint32, AUTOMATIC) TiSpan3_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) TiSpan4_Cnt_T_u32;
	
	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_PrpnWhlTqVldPassdRefTi(),&TiSpan3_Cnt_T_u32);
	if(TiSpan3_Cnt_T_u32 > (((uint32)Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqPassdTiThd_Val()) * ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))
	{
		*VldElpdTi_Cnt_T_logl = TRUE;
	}
	else
	{
		*VldElpdTi_Cnt_T_logl = FALSE;
	}
	
	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_PrpnWhlTqVldFaildRefTi(),&TiSpan4_Cnt_T_u32);
	if(TiSpan4_Cnt_T_u32 > (((uint32)Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqFaildTiThd_Val()) * ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))
	{
		*InvldElpdTi_Cnt_T_logl = TRUE;
	}
	else
	{
		*InvldElpdTi_Cnt_T_logl = FALSE;
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
