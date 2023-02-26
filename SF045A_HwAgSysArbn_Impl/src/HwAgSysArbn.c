/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HwAgSysArbn.c
 *        Config:  C:/_Synergy_Projects/Working/SF045A_HwAgSysArbn_Impl/tools/Component.dpa
 *     SW-C Type:  HwAgSysArbn
 *  Generated at:  Tue Oct 31 08:27:38 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HwAgSysArbn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : HwAgSysArbn.c
* Module Description: Implements the SF045A_HwAgSysArbn_Design FDD. 
                       This function accepts inputs from the various angle sources available in the EPS system and selects the angle 
                       source to be used for the system handwheel angle value. It also provides for compliance compensation of the
                       angle value and determines the angle value and angle validity to be output on the vehicle data bus.
* Project           : CBD 
* Author            : Sarika Natu (KPIT Technologies)
***********************************************************************************************************************
* Version Control:
* %version          : 10%
* %derived_by       : nz2796%
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 09/02/15   1       SN(KPIT)   Initial implementation  of SF045A                                               EA4#1166
* 06/20/16   2       SB         Updated to SF045A ver 2.0.0                                                     EA4#5840
* 08/24/16   3       NS         Fix for anomaly EA4#6903                                                        EA4#7026
* 12/07/16   4       TATA       Updated to SF045A ver 2.2.0                                                     EA4#8181
* 01/23/17   5       KK         Updated to SF045A ver 2.3.0                                                     EA4#9282
* 02/28/17   6       KK         Updated to SF045A ver 2.4.0                                                     EA4#9532
* 03/29/17   7       JK         Updated to SF045A ver 2.5.0                                                     EA4#10594
* 07/19/17   8       ML         Added new Cal and NTC with logic                                                EA4#13403
* 10/11/17   9       ML         Added new Fault PIM with logic                                                  EA4#15911
* 10/31/17   10      ML         Updated to fix Anomaly EA4#16682                                                EA4#16783 
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

#include "Rte_HwAgSysArbn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"
#include "FltInj.h"
#include "ArchGlbPrm.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 8.8 [NXTRDEV 8.8.1]:Deviation allowed for functions required to be declared in two headers to be accessible 
                                        via the RTE as well as outside of the RTE. Function Names: GetRefTmr100MicroSec32bit_Oper, 
                                        GetRefTmr1MicroSec32bit_Oper, GetTiSpan100MicroSec32bit_Oper, GetTiSpan1MicroSec32bit_Oper*/                                        
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Call_SetNtcSts_Oper() */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void function; Rte generation adds standard return type but
                                              no error information is returned for Rte_Call_GetRefTmr100MicroSec32bit_Oper(), 
                                              Rte_Call_GetTiSpan100MicroSec32bit_Oper(), Rte_Call_FltInj_f32_Oper() */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/
#define CNVSECTOCNT_ULS_U32                 10000U
#define CNVTOMILLISEC_MILLISECPERCNT_F32    0.1F
#define HWAGTHD_ULS_FLOAT32                 0.001F
#define INVLDSRC_CNT_S08                    (-1)
#define LRGSLEW_HWDEGPERSEC_F32             1400000.0F
#define NODEBSTEP_CNT_U16                   65535U
#define PINIONAGCONFHILIM_ULS_F32           1.0F
#define PINIONAGCONFLOWLIM_ULS_F32          0.0F
#define PINIONAGHILIM_HWDEG_F32             1440.0F
#define PINIONAGLOWLIM_HWDEG_F32            (-1440.0F)
#define SLEWINPROGS_CNT_LGC                 TRUE
#define SLEWNOTINPROGS_CNT_LGC              FALSE
#define SNSRDATASRCSELD_CNT_S08             0
#define SNSRLSDATASRCSELD_CNT_S08           1
#define ZEROTMR_MILLISEC_F32                0.0F
#define PINIONVELLOWLIM_HWRADPERSEC_F32     (-42.0F)
#define PINIONVELHILIM_HWRADPERSEC_F32      42.0F
#define HWVELLOWLIM_HWRADPERSEC_F32         (-42.0F)
#define HWVELHILIM_HWRADPERSEC_F32          42.0F
                                                
/******************************************** Local Function Prototypes **********************************************/
static FUNC(float32, HwAgSysArbn_CODE) VldtSnsrlsData(float32 HwAgSnsrls_HwDeg_T_f32,
                                                      float32 HwAgSnsrlsConfIn_Uls_T_f32);

static FUNC(float32, HwAgSysArbn_CODE) HwAgVelSerlCom (float32 HwAgCorrdConf_Uls_T_f32,
                                                       float32 HwAgSnsrlsConf_Uls_T_f32, 
                                                       float32 HwAgCorrd_HwDeg_T_f32, 
                                                       float32 HwAgSnsrls_HwDeg_T_f32, 
													   float32 HwVel_HwRadPerSec_T_f32,
													   float32 PinionVelConf_Uls_T_f32,
                                                       P2VAR(boolean, AUTOMATIC, HwAgSysArbn_VAR) HwAgStsToSerlCom_Cnt_T_lgc,
													   P2VAR(float32, HwAgSysArbn_CODE, AUTOMATIC) HwVelToSerlCom_HwRadPerSec_T_f32);

static FUNC(float32, HwAgSysArbn_CODE) CalcPinionVel (float32 HwTq_HwNwtMtr_T_f32,
                                                      float32 MotVelCrf_MotRadPerSec_T_f32, 
                                                      boolean MotVelVld_Cnt_T_logl, 
                                                      float32 PinionAgConf_Uls_T_f32,
													  float32 HwAg_HwDeg_T_f32,
													  P2VAR(float32, HwAgSysArbn_CODE, AUTOMATIC) PinionVel_HwRadPerSec_T_f32,
                                                      P2VAR(float32, HwAgSysArbn_CODE, AUTOMATIC) PinionVelConf_Uls_T_f32);
                                                      
static FUNC(void, HwAgSysArbn_CODE) HwPosnSigLoNTCSet(uint8 HwAgIdptSig_Cnt_T_u08);
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
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
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
 *   float32 *Rte_Pim_HwAgPrev(void)
 *   float32 *Rte_Pim_PrevHwAgNotCorrd(void)
 *   float32 *Rte_Pim_PrevPinionAgConf(void)
 *   float32 *Rte_Pim_PrevSeldHwAg(void)
 *   float32 *Rte_Pim_SeldHwAgConf(void)
 *   float32 *Rte_Pim_TqSnsrAgPrev(void)
 *   uint32 *Rte_Pim_HwAgToMotAgCorrlnDurnRefTmr(void)
 *   uint32 *Rte_Pim_SlewElpdRefTmr(void)
 *   sint8 *Rte_Pim_PrevSrcSeln(void)
 *   boolean *Rte_Pim_HwAgKineFlt(void)
 *   boolean *Rte_Pim_HwAgLtch(void)
 *   boolean *Rte_Pim_HwAgToMotAgCorrln(void)
 *   boolean *Rte_Pim_SlewSts(void)
 *   FilLpRec1 *Rte_Pim_TqSnsrVelFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HwAgSysArbnHwAgConf1Snsr_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnHwAgConf2Snsr_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnHwAgConfNoSnsr_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnHwAgCorrdCorrlnThd_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnHwAgCorrlnRng_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnHwAgSlewRate_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnHwAgSnsrlsCorrlnThd_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnHwAgSnsrlsKineThd_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnSerlComHwAgCorrdConf_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnSerlComHwAgSnsrlsConf_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnSlewRateTmr_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnTqSnsrVelFilFrq_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysKineRat_Val(void)
 *   float32 Rte_Prm_SysGlbPrmTorsBarStfn_Val(void)
 *   uint32 Rte_Prm_HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim_Val(void)
 *   uint16 Rte_Prm_HwAgSysArbnHwAgCorrlnFailDebStep_Val(void)
 *   uint16 Rte_Prm_HwAgSysArbnHwAgCorrlnPassDebStep_Val(void)
 *   uint8 Rte_Prm_HwAgSysArbnHwAgIdptSigLim_Val(void)
 *
 *********************************************************************************************************************/


#define HwAgSysArbn_START_SEC_CODE
#include "HwAgSysArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgSysArbnInit1
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
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgSysArbnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAgSysArbn_CODE) HwAgSysArbnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgSysArbnInit1
 *********************************************************************************************************************/
    *Rte_Pim_SlewSts() = SLEWNOTINPROGS_CNT_LGC;
    *Rte_Pim_PrevSrcSeln() = INVLDSRC_CNT_S08;
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A1, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X09C, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HwAgToMotAgCorrlnDurnRefTmr());
	/*** TqSnsrVelFilInit ***/
	FilLpInit(0.0F, Rte_Prm_HwAgSysArbnTqSnsrVelFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_TqSnsrVelFil());
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgSysArbnPer1
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
 *   Std_ReturnType Rte_Read_CmplncErrPinionToHw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgCorrd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwAgSnsrls_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgSnsrlsConf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgFinal_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAgNotCorrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAgToSerlCom_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAgVldToSerlCom_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwVel_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwVelToSerlCom_Val(float32 data)
 *   Std_ReturnType Rte_Write_PinionAg_Val(float32 data)
 *   Std_ReturnType Rte_Write_PinionAgConf_Val(float32 data)
 *   Std_ReturnType Rte_Write_PinionVel_Val(float32 data)
 *   Std_ReturnType Rte_Write_PinionVelConf_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
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
 * Symbol: HwAgSysArbnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAgSysArbn_CODE) HwAgSysArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgSysArbnPer1
 *********************************************************************************************************************/
    VAR(float32, AUTOMATIC) CmplncErrPinionToHw_HwDeg_T_f32; 
    VAR(float32, AUTOMATIC) HwAg_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwAgCorrd_HwDeg_T_f32;
    VAR(uint8, AUTOMATIC) HwAgIdptSig_Cnt_T_u08; 
    VAR(float32, AUTOMATIC) HwAgSnsrls_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwAgSnsrlsConfIn_Uls_T_f32;
    
    VAR(float32, AUTOMATIC) HwAgCorrdConf_Uls_T_f32;    
    VAR(float32, AUTOMATIC) HwAgSnsrlsConf_Uls_T_f32;
    VAR(float32, AUTOMATIC) SeldPinionAg_HwDeg_T_f32; 
    VAR(float32, AUTOMATIC) SeldHwAgConf_Uls_T_f32;
    VAR(float32, AUTOMATIC) SeldHwAgNotCorrd_HwDeg_T_f32;
    VAR(sint8, AUTOMATIC) SrcSeln_Cnt_T_S08;
    VAR(float32, AUTOMATIC) HwAgToSerlCom_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) HwVelToSerlCom_HwRadPerSec_T_f32 = 0.0F;
    VAR(boolean, AUTOMATIC) HwAgStsToSerlCom_Cnt_T_lgc = FALSE;
	
    VAR(boolean, AUTOMATIC) MotVelVld_Cnt_T_logl;
	
    VAR(float32, AUTOMATIC) SlewRate_HwDegPerSec_T_f32; 
    VAR(float32, AUTOMATIC) SlewElpdTiLim_MilliSec_T_f32;    
    
    VAR(float32, AUTOMATIC) PinionAg_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) PinionAgConf_Uls_T_f32;
    VAR(float32, AUTOMATIC) HwAgNotCorrd_HwDeg_T_f32; 
    VAR(float32, AUTOMATIC) AbsltHwAgNotCorrd_HwDeg_T_f32; 
    VAR(float32, AUTOMATIC) AbsltPinionAg_HwDeg_T_f32_HwDeg_T_f32; 
    VAR(float32, AUTOMATIC) HwAgFinal_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotVelCrf_MotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) PinionVel_HwRadPerSec_T_f32 = 0.0F;
	VAR(float32, AUTOMATIC) PinionVelConf_Uls_T_f32 = 0.0F;
	VAR(float32, AUTOMATIC) HwVel_HwRadPerSec_T_f32;
	
    VAR(uint32, AUTOMATIC) TiSpan_MilliSecPerCnt_T_u32; 
    VAR(float32, AUTOMATIC) TiSpan_MilliSecPerCnt_T_f32;
    VAR(SigQlfr1, AUTOMATIC) NtcSts_Cnt_T_enum;
    
    /*Reading inputs from RTE*/ 
    (void)Rte_Read_HwAgCorrd_Val(&HwAgCorrd_HwDeg_T_f32);
    (void)Rte_Read_HwAgIdptSig_Val(&HwAgIdptSig_Cnt_T_u08);
    (void)Rte_Read_HwAgSnsrls_Val(&HwAgSnsrls_HwDeg_T_f32);
    (void)Rte_Read_HwAgSnsrlsConf_Val(&HwAgSnsrlsConfIn_Uls_T_f32);
    (void)Rte_Read_HwAg_Val(&HwAg_HwDeg_T_f32);
    (void)Rte_Read_CmplncErrPinionToHw_Val(&CmplncErrPinionToHw_HwDeg_T_f32);   
    (void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
	(void)Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);
	(void)Rte_Read_MotVelVld_Logl(&MotVelVld_Cnt_T_logl);
	
    /* 'CalcHwAgCorrdConf' Subsystem Implementation */
    switch(HwAgIdptSig_Cnt_T_u08)
    {
        case 0U: /* NoSensor */
            HwAgCorrdConf_Uls_T_f32 = Rte_Prm_HwAgSysArbnHwAgConfNoSnsr_Val();
        break;
        case 1U: /* OneSensor */
            HwAgCorrdConf_Uls_T_f32 = Rte_Prm_HwAgSysArbnHwAgConf1Snsr_Val();
        break;
        case 2U: /* TwoSensors */
            HwAgCorrdConf_Uls_T_f32 = Rte_Prm_HwAgSysArbnHwAgConf2Snsr_Val();
        break;
        default: /* Zero */
            HwAgCorrdConf_Uls_T_f32 = 0.0F;
        break;
    }
        
    /* 'VldtSnsrlsData' Subsystem Implementation */
    HwAgSnsrlsConf_Uls_T_f32 = VldtSnsrlsData(HwAgSnsrls_HwDeg_T_f32,
                                              HwAgSnsrlsConfIn_Uls_T_f32);
                                              
     /* 'HwAgSrcSeln' Subsystem Implementation */
     (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X0A6, &NtcSts_Cnt_T_enum);
     
    if((HwAgCorrdConf_Uls_T_f32 >= HwAgSnsrlsConf_Uls_T_f32) || (NtcSts_Cnt_T_enum == SIGQLFR_FAILD))
    {
        /* 'VrfyHwAgCorrln' Subsystem Implementation */
		/* HwAgCorrdLatch */
		if( (*Rte_Pim_HwAgLtch() == FALSE) && 
			(Abslt_f32_f32(HwAg_HwDeg_T_f32) > ARCHGLBPRM_FLOATZEROTHD_ULS_F32) )
		{
			*Rte_Pim_HwAgLtch() = TRUE;
		}
		/* HwAgCorrdConfCalc */
		if(*Rte_Pim_HwAgLtch() == TRUE)
		{
			SeldHwAgConf_Uls_T_f32 = HwAgCorrdConf_Uls_T_f32;
		}
		/* ZeroStateAgCong */
		else
		{
			SeldHwAgConf_Uls_T_f32 = 0.0F;
		}
        SeldPinionAg_HwDeg_T_f32 = HwAgCorrd_HwDeg_T_f32;
        SeldHwAgNotCorrd_HwDeg_T_f32 = HwAg_HwDeg_T_f32;
        SrcSeln_Cnt_T_S08 = SNSRDATASRCSELD_CNT_S08;
    }
    else
    {
        /* 'SnsrlsHwAgSeln' Subsystem Implementation */
        SeldPinionAg_HwDeg_T_f32 = HwAgSnsrls_HwDeg_T_f32;
        SeldHwAgConf_Uls_T_f32 = HwAgSnsrlsConf_Uls_T_f32;
        SeldHwAgNotCorrd_HwDeg_T_f32 = HwAgSnsrls_HwDeg_T_f32;
        SrcSeln_Cnt_T_S08 = SNSRLSDATASRCSELD_CNT_S08;
    }
      
    /* 'TestHwAgSrcChg' Subsystem Implementation */
    if(SrcSeln_Cnt_T_S08 != *Rte_Pim_PrevSrcSeln())
    {
        /* SetSlewRate */
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_SlewElpdRefTmr());
        *Rte_Pim_SeldHwAgConf() = *Rte_Pim_PrevPinionAgConf();
        SlewRate_HwDegPerSec_T_f32 = Rte_Prm_HwAgSysArbnHwAgSlewRate_Val();
        SlewElpdTiLim_MilliSec_T_f32 = Rte_Prm_HwAgSysArbnSlewRateTmr_Val();
        *Rte_Pim_PrevSrcSeln() = SrcSeln_Cnt_T_S08; 
    }
    else if(*Rte_Pim_SlewSts() == SLEWINPROGS_CNT_LGC)
    {
        /* RetainSlewRate */
        SlewRate_HwDegPerSec_T_f32 = Rte_Prm_HwAgSysArbnHwAgSlewRate_Val();
        SlewElpdTiLim_MilliSec_T_f32 = Rte_Prm_HwAgSysArbnSlewRateTmr_Val();
    }
    else 
    {
        /* ApplyLrgSlew */
        SlewRate_HwDegPerSec_T_f32 = LRGSLEW_HWDEGPERSEC_F32;
        SlewElpdTiLim_MilliSec_T_f32 = ZEROTMR_MILLISEC_F32;
    }
    
    /*'ApplyRateLim' Subsystem Implementation*/
    PinionAg_HwDeg_T_f32 = Lim_f32(SeldPinionAg_HwDeg_T_f32,
                                    ((-SlewRate_HwDegPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_PrevSeldHwAg()),
                                    ((SlewRate_HwDegPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_PrevSeldHwAg()));
    *Rte_Pim_PrevSeldHwAg() = PinionAg_HwDeg_T_f32;
    HwAgNotCorrd_HwDeg_T_f32 = Lim_f32(SeldHwAgNotCorrd_HwDeg_T_f32, 
                                      ((-SlewRate_HwDegPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_PrevHwAgNotCorrd()),
                                      ((SlewRate_HwDegPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_PrevHwAgNotCorrd()));
    *Rte_Pim_PrevHwAgNotCorrd() = HwAgNotCorrd_HwDeg_T_f32;
    (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_SlewElpdRefTmr(),&TiSpan_MilliSecPerCnt_T_u32); 
    AbsltPinionAg_HwDeg_T_f32_HwDeg_T_f32 = Abslt_f32_f32(PinionAg_HwDeg_T_f32 - SeldPinionAg_HwDeg_T_f32);
    AbsltHwAgNotCorrd_HwDeg_T_f32 = Abslt_f32_f32(HwAgNotCorrd_HwDeg_T_f32 - SeldHwAgNotCorrd_HwDeg_T_f32);
    TiSpan_MilliSecPerCnt_T_f32 = FixdToFloat_f32_u32(TiSpan_MilliSecPerCnt_T_u32, NXTRFIXDPT_P0TOFLOAT_ULS_F32);
    
    if(((AbsltPinionAg_HwDeg_T_f32_HwDeg_T_f32 > HWAGTHD_ULS_FLOAT32) || (AbsltHwAgNotCorrd_HwDeg_T_f32 > HWAGTHD_ULS_FLOAT32)) &&
       ((TiSpan_MilliSecPerCnt_T_f32 * CNVTOMILLISEC_MILLISECPERCNT_F32) < SlewElpdTiLim_MilliSec_T_f32))
    {
        /* RetainHwAgConf */
        PinionAgConf_Uls_T_f32 = *Rte_Pim_SeldHwAgConf();
        *Rte_Pim_SlewSts() = SLEWINPROGS_CNT_LGC;
    }
    else
    {       
        PinionAgConf_Uls_T_f32 = SeldHwAgConf_Uls_T_f32;
        *Rte_Pim_SlewSts() = SLEWNOTINPROGS_CNT_LGC;
    }
    *Rte_Pim_PrevPinionAgConf() = PinionAgConf_Uls_T_f32;
	
    HwPosnSigLoNTCSet(HwAgIdptSig_Cnt_T_u08);
    
	HwVel_HwRadPerSec_T_f32 = CalcPinionVel (HwTq_HwNwtMtr_T_f32,
                                             MotVelCrf_MotRadPerSec_T_f32, 
                                             MotVelVld_Cnt_T_logl, 
                                             PinionAgConf_Uls_T_f32,
							                 HwAg_HwDeg_T_f32,
											 &PinionVel_HwRadPerSec_T_f32,
                                             &PinionVelConf_Uls_T_f32);
											 
	HwAgToSerlCom_HwDeg_T_f32 = HwAgVelSerlCom (HwAgCorrdConf_Uls_T_f32,
                                                HwAgSnsrlsConf_Uls_T_f32, 
                                                HwAgCorrd_HwDeg_T_f32, 
                                                HwAgSnsrls_HwDeg_T_f32, 
								                HwVel_HwRadPerSec_T_f32,
												PinionVelConf_Uls_T_f32,
                                                &HwAgStsToSerlCom_Cnt_T_lgc,
												&HwVelToSerlCom_HwRadPerSec_T_f32);
											 
	
    
    /*Limiting the outputs*/
    PinionAg_HwDeg_T_f32 = Lim_f32(PinionAg_HwDeg_T_f32, PINIONAGLOWLIM_HWDEG_F32, PINIONAGHILIM_HWDEG_F32);
    PinionAgConf_Uls_T_f32 = Lim_f32(PinionAgConf_Uls_T_f32, PINIONAGCONFLOWLIM_ULS_F32, PINIONAGCONFHILIM_ULS_F32);
    HwAgNotCorrd_HwDeg_T_f32 = Lim_f32(HwAgNotCorrd_HwDeg_T_f32, PINIONAGLOWLIM_HWDEG_F32, PINIONAGHILIM_HWDEG_F32);
    HwAgToSerlCom_HwDeg_T_f32 = Lim_f32(HwAgToSerlCom_HwDeg_T_f32, PINIONAGLOWLIM_HWDEG_F32, PINIONAGHILIM_HWDEG_F32);  
    PinionVel_HwRadPerSec_T_f32 = Lim_f32(PinionVel_HwRadPerSec_T_f32, PINIONVELLOWLIM_HWRADPERSEC_F32, PINIONVELHILIM_HWRADPERSEC_F32);
	HwVel_HwRadPerSec_T_f32 = Lim_f32(HwVel_HwRadPerSec_T_f32, HWVELLOWLIM_HWRADPERSEC_F32, HWVELHILIM_HWRADPERSEC_F32);
	PinionVelConf_Uls_T_f32 = Lim_f32(PinionVelConf_Uls_T_f32,PINIONAGCONFLOWLIM_ULS_F32, PINIONAGCONFHILIM_ULS_F32);
	HwVelToSerlCom_HwRadPerSec_T_f32 = Lim_f32(HwVelToSerlCom_HwRadPerSec_T_f32, HWVELLOWLIM_HWRADPERSEC_F32, HWVELHILIM_HWRADPERSEC_F32);
	
    /*Fault injecting conditions*/
    #if (STD_ON == FLTINJENA)    
    (void)Rte_Call_FltInj_f32_Oper(&PinionAg_HwDeg_T_f32,FLTINJ_HWAGSYSARBN_HWAG);  
    #endif
    
    #if (STD_ON == FLTINJENA)    
    (void)Rte_Call_FltInj_f32_Oper(&HwAgToSerlCom_HwDeg_T_f32,FLTINJ_HWAGSYSARBN_SERLCOMHWAG);          
    #endif
    
    HwAgFinal_HwDeg_T_f32 = Lim_f32(PinionAg_HwDeg_T_f32 - CmplncErrPinionToHw_HwDeg_T_f32, PINIONAGLOWLIM_HWDEG_F32, PINIONAGHILIM_HWDEG_F32);
    
    /*Writing outputs to RTE*/
    (void)Rte_Write_HwAgFinal_Val(HwAgFinal_HwDeg_T_f32);
    (void)Rte_Write_PinionAg_Val(PinionAg_HwDeg_T_f32);
    (void)Rte_Write_PinionAgConf_Val(PinionAgConf_Uls_T_f32);
    (void)Rte_Write_HwAgNotCorrd_Val(HwAgNotCorrd_HwDeg_T_f32); 
    (void)Rte_Write_HwAgToSerlCom_Val(HwAgToSerlCom_HwDeg_T_f32);   
    (void)Rte_Write_HwAgVldToSerlCom_Logl(HwAgStsToSerlCom_Cnt_T_lgc); 
	(void)Rte_Write_PinionVel_Val(PinionVel_HwRadPerSec_T_f32);
    (void)Rte_Write_HwVel_Val(HwVel_HwRadPerSec_T_f32);
	(void)Rte_Write_PinionVelConf_Val(PinionVelConf_Uls_T_f32);
	(void)Rte_Write_HwVelToSerlCom_Val(HwVelToSerlCom_HwRadPerSec_T_f32);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HwAgSysArbn_STOP_SEC_CODE
#include "HwAgSysArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

  /*****************************************************************************************************************
  * Name            :   VldtSnsrlsData
  * Description     :   Implementation of 'VldtSnsrlsData' subsystem. 
  * Inputs          :   HwAgSnsrls_HwDeg_T_f32 - RTE Input
  *                     HwAgSnsrlsConfIn_Uls_T_f32 - RTE Input
  * Outputs         :   HwAgSnsrlsConf_Uls_T_f32 - Handwheel Angle Sensorless Confidence
  * Usage Notes     :   None
  ****************************************************************************************************************/
 static FUNC(float32, HwAgSysArbn_CODE) VldtSnsrlsData(float32 HwAgSnsrls_HwDeg_T_f32,
                                                       float32 HwAgSnsrlsConfIn_Uls_T_f32)
{    
    VAR(float32, AUTOMATIC) HwAgSnsrlsConf_Uls_T_f32;
    
    if((Abslt_f32_f32(HwAgSnsrls_HwDeg_T_f32) <= Rte_Prm_HwAgSysArbnHwAgSnsrlsKineThd_Val()) && 
        (*Rte_Pim_HwAgKineFlt() == FALSE))
    {
        HwAgSnsrlsConf_Uls_T_f32 = HwAgSnsrlsConfIn_Uls_T_f32;
    }
    else
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A1, 0U, NTCSTS_FAILD, NODEBSTEP_CNT_U16);
        HwAgSnsrlsConf_Uls_T_f32 = 0.0F;
        *Rte_Pim_HwAgKineFlt() = TRUE;
    }

    return HwAgSnsrlsConf_Uls_T_f32;
}    
 /*****************************************************************************************************************
  * Name            :   HwAgVelSerlCom
  * Description     :   Implementation of 'HwAgVelSerlCom' subsystem. 
  *                     This function performs Handwheel signal serial communication arbitration functionality
  * Inputs          :   HwAgCorrdConf_Uls_T_f32 - Calculated in Per1
  *                     HwAgSnsrlsConf_Uls_T_f32 - Calculated in Per1
  *                     HwAgCorrd_HwDeg_T_f32 - RTE Input
  *                     HwAgSnsrls_HwDeg_T_f32 - RTE Input
  *                     HwVel_HwRadPerSec_T_f32 - Calculated in 'CalcPinionVel' Function
  *                     PinionVelConf_Uls_T_f32 - Calculated in Per1
  *                     *HwAgStsToSerlCom_Cnt_T_lgc - RTE Output
  *                     *HwVelToSerlCom_HwRadPerSec_T_f32 - RTE Output
  * Outputs         :   HwAgToSerlCom_HwDeg_T_f32 - RTE Output
  * Usage Notes     :   None
  ****************************************************************************************************************/
static FUNC(float32, HwAgSysArbn_CODE) HwAgVelSerlCom (float32 HwAgCorrdConf_Uls_T_f32,
                                                       float32 HwAgSnsrlsConf_Uls_T_f32, 
                                                       float32 HwAgCorrd_HwDeg_T_f32, 
                                                       float32 HwAgSnsrls_HwDeg_T_f32, 
													   float32 HwVel_HwRadPerSec_T_f32,
													   float32 PinionVelConf_Uls_T_f32,
                                                       P2VAR(boolean, AUTOMATIC, HwAgSysArbn_VAR) HwAgStsToSerlCom_Cnt_T_lgc,
													   P2VAR(float32, HwAgSysArbn_CODE, AUTOMATIC) HwVelToSerlCom_HwRadPerSec_T_f32)
{
    VAR(uint32, AUTOMATIC) TiSpan_MilliSecPerCnt_T_u32;    
    VAR(float32, AUTOMATIC) HwAgToSerlCom_HwDeg_T_f32;
	
    if( (HwAgCorrdConf_Uls_T_f32 >= Rte_Prm_HwAgSysArbnHwAgCorrdCorrlnThd_Val()) &&
		(HwAgSnsrlsConf_Uls_T_f32 >= Rte_Prm_HwAgSysArbnHwAgSnsrlsCorrlnThd_Val()) && 
		((Abslt_f32_f32(1.0F - PinionVelConf_Uls_T_f32)) <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32) )
    {
        if(Abslt_f32_f32(HwAgCorrd_HwDeg_T_f32 - HwAgSnsrls_HwDeg_T_f32) < Rte_Prm_HwAgSysArbnHwAgCorrlnRng_Val())
        {
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A6, 0U, NTCSTS_PREPASSD, Rte_Prm_HwAgSysArbnHwAgCorrlnPassDebStep_Val());
            *Rte_Pim_HwAgToMotAgCorrln() = TRUE;
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HwAgToMotAgCorrlnDurnRefTmr());
        }
        else
        {
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A6, 0U, NTCSTS_PREFAILD, Rte_Prm_HwAgSysArbnHwAgCorrlnFailDebStep_Val());
            *Rte_Pim_HwAgToMotAgCorrln() = FALSE;
        }       
        HwAgToSerlCom_HwDeg_T_f32 = HwAgCorrd_HwDeg_T_f32;
        if(HwAgCorrdConf_Uls_T_f32 >= Rte_Prm_HwAgSysArbnSerlComHwAgCorrdConf_Val())
        {
            *HwAgStsToSerlCom_Cnt_T_lgc = TRUE;
        }
		*HwVelToSerlCom_HwRadPerSec_T_f32 = HwVel_HwRadPerSec_T_f32;
    }       
    else if( (HwAgCorrdConf_Uls_T_f32 >= Rte_Prm_HwAgSysArbnHwAgCorrdCorrlnThd_Val()) && 
			 ((Abslt_f32_f32(1.0F - PinionVelConf_Uls_T_f32)) <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32) )
		{
			/* 'SnsrDataToSerlCom' Subsystem Implementation */
			HwAgToSerlCom_HwDeg_T_f32 = HwAgCorrd_HwDeg_T_f32;
			if(HwAgCorrdConf_Uls_T_f32 >= Rte_Prm_HwAgSysArbnSerlComHwAgCorrdConf_Val())
			{
				*HwAgStsToSerlCom_Cnt_T_lgc = TRUE;
			}
			*Rte_Pim_HwAgToMotAgCorrln() = FALSE;
			*HwVelToSerlCom_HwRadPerSec_T_f32 = HwVel_HwRadPerSec_T_f32;
		}
    else if( (HwAgSnsrlsConf_Uls_T_f32 >= Rte_Prm_HwAgSysArbnHwAgSnsrlsCorrlnThd_Val()) && 
			 ((Abslt_f32_f32(1.0F - PinionVelConf_Uls_T_f32)) <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32) )
		{
			/* 'SnsrlsDataToSerlCom' Subsystem Implementation */    
			(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_HwAgToMotAgCorrlnDurnRefTmr(), &TiSpan_MilliSecPerCnt_T_u32);
			
			if((*Rte_Pim_HwAgToMotAgCorrln() == TRUE) && 
			  (TiSpan_MilliSecPerCnt_T_u32 < (Rte_Prm_HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim_Val() * CNVSECTOCNT_ULS_U32)))
			{
				/* 'CorrlnStsTrue' Subsystem Implementation */
				HwAgToSerlCom_HwDeg_T_f32 = HwAgSnsrls_HwDeg_T_f32;
				if(HwAgSnsrlsConf_Uls_T_f32 >= Rte_Prm_HwAgSysArbnSerlComHwAgSnsrlsConf_Val())
				{
					*HwAgStsToSerlCom_Cnt_T_lgc = TRUE;
				}
			}
			else
			{
				/* 'CorrlnStsFalse' Subsystem Implementation */
				HwAgToSerlCom_HwDeg_T_f32 = 0.0F;
				*HwAgStsToSerlCom_Cnt_T_lgc = FALSE;
			}
			*HwVelToSerlCom_HwRadPerSec_T_f32 = HwVel_HwRadPerSec_T_f32;
		}
    else
    {
        /* 'NoHwAgDataToSerlCom' Subsystem Implementation */
        HwAgToSerlCom_HwDeg_T_f32 = 0.0F;
        *HwAgStsToSerlCom_Cnt_T_lgc = FALSE;
        *Rte_Pim_HwAgToMotAgCorrln() = FALSE;
		*HwVelToSerlCom_HwRadPerSec_T_f32 = 0.0F;
    }
    
    return HwAgToSerlCom_HwDeg_T_f32;
}


 /*****************************************************************************************************************
  * Name            :   CalcPinionVel
  * Description     :   Implementation of 'CalcPinionVel' subsystem. 
  * Inputs          :   HwTq_HwNwtMtr_T_f32 - RTE Input
                        MotVelCrf_MotRadPerSec_T_f32 - RTE Input
                        MotVelVld_Cnt_T_logl - RTE Input
                        PinionAgConf_Uls_T_f32 - Calculated in Per1
                        HwAg_HwDeg_T_f32 - RTE Input
                        *PinionVel_HwRadPerSec_T_f32 - RTE Output
                        *PinionVelConf_Uls_T_f32 - RTE Output
  * Outputs         :   HwVel_HwRadPerSec_T_f32 - RTE Output
  * Usage Notes     :   None
  ****************************************************************************************************************/
static FUNC(float32, HwAgSysArbn_CODE) CalcPinionVel (float32 HwTq_HwNwtMtr_T_f32,
                                                      float32 MotVelCrf_MotRadPerSec_T_f32, 
                                                      boolean MotVelVld_Cnt_T_logl, 
                                                      float32 PinionAgConf_Uls_T_f32,
													  float32 HwAg_HwDeg_T_f32,
													  P2VAR(float32, HwAgSysArbn_CODE, AUTOMATIC) PinionVel_HwRadPerSec_T_f32,
                                                      P2VAR(float32, HwAgSysArbn_CODE, AUTOMATIC) PinionVelConf_Uls_T_f32)
{

    VAR(float32, AUTOMATIC) FilLpInp_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) FildLpInp_Uls_T_f32;
	VAR(float32, AUTOMATIC) TbarVel_HwRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) HwVel_HwRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) PrdtHwAg_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) DivHwTq_HwDeg_T_f32;

    if(TRUE == MotVelVld_Cnt_T_logl)
    {

        *PinionVel_HwRadPerSec_T_f32 = MotVelCrf_MotRadPerSec_T_f32 / Rte_Prm_SysGlbPrmSysKineRat_Val();
		
		DivHwTq_HwDeg_T_f32 = (HwTq_HwNwtMtr_T_f32 / Rte_Prm_SysGlbPrmTorsBarStfn_Val());
        FilLpInp_HwDeg_T_f32 = ((DivHwTq_HwDeg_T_f32 - *Rte_Pim_TqSnsrAgPrev())/ARCHGLBPRM_2MILLISEC_SEC_F32);
        FildLpInp_Uls_T_f32 = FilLpUpdOutp_f32(FilLpInp_HwDeg_T_f32,  Rte_Pim_TqSnsrVelFil());
		TbarVel_HwRadPerSec_T_f32 = FildLpInp_Uls_T_f32 * ARCHGLBPRM_PIOVER180_ULS_F32;
		HwVel_HwRadPerSec_T_f32 = *PinionVel_HwRadPerSec_T_f32 + TbarVel_HwRadPerSec_T_f32;
        *Rte_Pim_TqSnsrAgPrev() = DivHwTq_HwDeg_T_f32;
		
		*PinionVelConf_Uls_T_f32 = 1.0F;
	
	}
	else if((Abslt_f32_f32(1.0F - PinionAgConf_Uls_T_f32)) <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
	{
	    PrdtHwAg_HwDeg_T_f32 = (HwAg_HwDeg_T_f32 - *Rte_Pim_HwAgPrev()) /ARCHGLBPRM_2MILLISEC_SEC_F32;
	    *PinionVel_HwRadPerSec_T_f32 = PrdtHwAg_HwDeg_T_f32 * ARCHGLBPRM_PIOVER180_ULS_F32;
		*Rte_Pim_HwAgPrev() = HwAg_HwDeg_T_f32;
		
		DivHwTq_HwDeg_T_f32 = (HwTq_HwNwtMtr_T_f32 / Rte_Prm_SysGlbPrmTorsBarStfn_Val());
        FilLpInp_HwDeg_T_f32 = ((DivHwTq_HwDeg_T_f32 - *Rte_Pim_TqSnsrAgPrev()) / ARCHGLBPRM_2MILLISEC_SEC_F32);
        FildLpInp_Uls_T_f32 = FilLpUpdOutp_f32(FilLpInp_HwDeg_T_f32,  Rte_Pim_TqSnsrVelFil());
		TbarVel_HwRadPerSec_T_f32 = FildLpInp_Uls_T_f32 * ARCHGLBPRM_PIOVER180_ULS_F32;
		HwVel_HwRadPerSec_T_f32 = *PinionVel_HwRadPerSec_T_f32 + TbarVel_HwRadPerSec_T_f32;
		*Rte_Pim_TqSnsrAgPrev() = DivHwTq_HwDeg_T_f32;
        
		*PinionVelConf_Uls_T_f32 = 1.0F;
	}
	else
	{
	    *PinionVel_HwRadPerSec_T_f32 = 0.0F;
	
	    HwVel_HwRadPerSec_T_f32 = 0.0F;
	
	    *PinionVelConf_Uls_T_f32 = 0.0F;
	}

	return HwVel_HwRadPerSec_T_f32;
	}
	
 /*****************************************************************************************************************
  * Name            :   HwPosnSigLoNTCSet
  * Description     :   Sets NTC if HwAgIdptSig is greater or equal to limit. Done to reduce path count.
  * Inputs          :   HwAgIdptSig_Cnt_T_u08 - RTE Input
  * Outputs         :   None
  * Usage Notes     :   None
  ****************************************************************************************************************/
static FUNC(void, HwAgSysArbn_CODE) HwPosnSigLoNTCSet(uint8 HwAgIdptSig_Cnt_T_u08)
{
    if(HwAgIdptSig_Cnt_T_u08 >= Rte_Prm_HwAgSysArbnHwAgIdptSigLim_Val())
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X09C, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
    }
    else
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X09C, 0U, NTCSTS_FAILD, NODEBSTEP_CNT_U16);
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
