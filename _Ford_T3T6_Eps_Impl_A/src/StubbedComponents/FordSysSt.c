/* TODO Stub file remove later */
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordSysSt.c
 *        Config:  E:/EA4NewTemplate/CF052A_FordSysSt_Impl/tools/Component.dpa
 *     SW-C Type:  FordSysSt
 *  Generated at:  Tue Feb 13 11:21:13 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordSysSt>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordSysSt.c
* Module Description: Implementation of Ford System State - SF052A
* Project           : CBD 
* Author            : Shawn Penning
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       gz324f %
*------------------------------------------------------------------------------------------------------------------------
* Date       Rev     Author    Change Description                                                                SCR #
* -------   -------  --------  ---------------------------------------------------------------------------    -----------
* 11/27/17   1       SPP       Initial Version                                                                EA4#15162
* 11/27/17   2       AJM       Updates found during integration                                               EA4#15162
*------------------------------------------------------------------------------------------------------------------------
**********************************************************************************************************************/
/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

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
 * FordEpsSysSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * FordVltgOperSt1
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
 * SigQlfr1
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

#include "Rte_FordSysSt.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 #include "NxtrFil.h"
 
/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for 
   Rte_Read_*, Rte_Write_*, and Rte_Call_GetNtcQlfrSts_*.    */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

#define VEHSPDTHD_KPH_F32                         (3.0F)

static FUNC(void, FordSysSt_CODE) ChkLvngInit(VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum, 
                                              VAR(LoaSt1, AUTOMATIC) LoaSt_Cnt_T_enum,
                                              VAR(boolean, AUTOMATIC) SysStWrmIninCmpl_Cnt_T_logl,
                                              VAR(FordVltgOperSt1, AUTOMATIC) FordVltgOperSt_Cnt_T_enum,
                                              P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum,
                                              P2VAR(float32, AUTOMATIC, AUTOMATIC)OperScaFctr_Cnt_T_f32,
                                              P2VAR(float32, AUTOMATIC, AUTOMATIC)OperRampRate_Cnt_T_f32);
static FUNC(void, FordSysSt_CODE) ChkLvngLimpHome(VAR(LoaSt1, AUTOMATIC) LoaSt_Cnt_T_enum,
                                                  P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum);
static FUNC(void, FordSysSt_CODE) ChkLvngLimpAside(VAR(LoaSt1, AUTOMATIC) LoaSt_Cnt_T_enum,
                                                   P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum);
static FUNC(void, FordSysSt_CODE) ChkLvngRampOut(VAR(LoaSt1, AUTOMATIC) LoaSt_Cnt_T_enum,
                                                 P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum);

static FUNC(void, FordSysSt_CODE) ChkLvngEpsNormOperLimAssi(VAR(LoaSt1, AUTOMATIC) LoaSt_Cnt_T_enum,
                                                     VAR(FordVltgOperSt1, AUTOMATIC) FordVltgOperSt_Cnt_T_enum,
                                                     VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum,
                                                     VAR(boolean, AUTOMATIC) FordVehSpdVld_Cnt_T_logl,
                                                     VAR(float32, AUTOMATIC) FordVehSpd_Kph_T_f32,
                                                     VAR(Ford_PwPckTq_D_Stat, AUTOMATIC) FordVehPwrpkTqSts_Cnt_T_enum,
                                                     VAR(SigQlfr1, AUTOMATIC) NtcQlfr_Cnt_T_enum,
                                                     P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum,
                                                     P2VAR(float32, AUTOMATIC, AUTOMATIC)OperScaFctr_Cnt_T_f32,
                                                     P2VAR(float32, AUTOMATIC, AUTOMATIC)OperRampRate_Cnt_T_f32);
                                                     
static FUNC(void, FordSysSt_CODE) ChkLvngEpsNormOperFullAssi(VAR(LoaSt1, AUTOMATIC) LoaSt_Cnt_T_enum,
                                                     VAR(FordVltgOperSt1, AUTOMATIC) FordVltgOperSt_Cnt_T_enum,
                                                     VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum,
                                                     VAR(boolean, AUTOMATIC) FordVehSpdVld_Cnt_T_logl,
                                                     VAR(float32, AUTOMATIC) FordVehSpd_Kph_T_f32,
                                                     VAR(Ford_PwPckTq_D_Stat, AUTOMATIC) FordVehPwrpkTqSts_Cnt_T_enum,
                                                     VAR(SigQlfr1, AUTOMATIC) NtcQlfr_Cnt_T_enum,
                                                     P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum,
                                                     P2VAR(float32, AUTOMATIC, AUTOMATIC)OperScaFctr_Cnt_T_f32,
                                                     P2VAR(float32, AUTOMATIC, AUTOMATIC)OperRampRate_Cnt_T_f32);

static FUNC(void, FordSysSt_CODE) PowerDown(P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum);
/* WarmInit is same as Initialization block in the state machine. */
static FUNC(void, FordSysSt_CODE) WarmInit(P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum,
                                           P2VAR(float32, AUTOMATIC, AUTOMATIC)OperScaFctr_Cnt_T_f32,
                                           P2VAR(float32, AUTOMATIC, AUTOMATIC)OperRampRate_Cnt_T_f32);
static FUNC(void, FordSysSt_CODE) EpsSystemFailure(void);
                        
static FUNC(boolean, FordSysSt_CODE) EpsSystemFailureExitCheck(
                        VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum,
                        VAR(float32, AUTOMATIC) FordVehSpd_Kph_T_f32,
                        VAR(boolean, AUTOMATIC) FordVehSpdVld_Cnt_T_logl,
                        VAR(Ford_PwPckTq_D_Stat, AUTOMATIC) FordVehPwrpkTqSts_Cnt_T_enum,
                        VAR(SigQlfr1, AUTOMATIC) NtcQlfr_Cnt_T_enum);
                        
static FUNC(void, FordSysSt_CODE) ShutDown(P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum,
                                           P2VAR(float32, AUTOMATIC, AUTOMATIC)OperScaFctr_Cnt_T_f32,
                                           P2VAR(float32, AUTOMATIC, AUTOMATIC)OperRampRate_Cnt_T_f32);
static FUNC(void, FordSysSt_CODE) LimAssist(VAR(FordVltgOperSt1, AUTOMATIC) FordVltgOperSt_Cnt_T_enum,
                                            P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum,
                                            P2VAR(float32, AUTOMATIC, AUTOMATIC)OperScaFctr_Cnt_T_f32,
                                            P2VAR(float32, AUTOMATIC, AUTOMATIC)OperRampRate_Cnt_T_f32);
static FUNC(void, FordSysSt_CODE) FullAssist(P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum,
                                            P2VAR(float32, AUTOMATIC, AUTOMATIC)OperScaFctr_Cnt_T_f32,
                                            P2VAR(float32, AUTOMATIC, AUTOMATIC)OperRampRate_Cnt_T_f32);


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
 * FordEpsSysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   FORDEPSSYSST_EPS_ININ (0U)
 *   FORDEPSSYSST_EPS_NORM_OP_LIMD_ASSI (1U)
 *   FORDEPSSYSST_EPS_NORM_OP_FULL_ASSI (2U)
 *   FORDEPSSYSST_EPS_SYST_FAILR_LIMPHOME (3U)
 *   FORDEPSSYSST_EPS_SYST_FAILR_LIMPASIDE (4U)
 *   FORDEPSSYSST_EPS_SYST_FAILR_RAMPOUT (5U)
 *   FORDEPSSYSST_EPS_SYST_FAILR_ASSISTOFF (6U)
 *   FORDEPSSYSST_EPS_SHTDWN (7U)
 *   FORDEPSSYSST_EPS_PWRDWN (8U)
 * FordVltgOperSt1: Enumeration of integer in interval [0...255] with enumerators
 *   FORDVLTGOPERST_NORMVLTGOP (0U)
 *   FORDVLTGOPERST_LOVLTGOP_MONR (1U)
 *   FORDVLTGOPERST_LOVLTGOP_HICURR (2U)
 *   FORDVLTGOPERST_LOVLTGOP_TQSCAG (3U)
 *   FORDVLTGOPERST_LOVLTGOP_NOASSI (4U)
 *   FORDVLTGOPERST_HIVLTGOP (5U)
 *   FORDVLTGOPERST_HIVLTG_NOASSI (6U)
 * Ford_EPAS_Failure: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_EPAS_OK_NO_MESSAGE (0U)
 *   Cx1_POWER_STRG_ASSIST_FAULT (1U)
 *   Cx2_SERVICE_POWER_STEERING (2U)
 *   Cx3_SERVICE_POWER_STEERING_NOW (3U)
 * Ford_PwPckTq_D_Stat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PwPckOff_TqNotAvailable (0U)
 *   Cx1_PwPckOn_TqNotAvailable (1U)
 *   Cx2_StartInPrgrss_TqNotAvail (2U)
 *   Cx3_PwPckOn_TqAvailable (3U)
 * Ford_SteMdule_D_Stat: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_EPAS_Initialization (0U)
 *   Cx1_Normal_Op_Limited_Assist (1U)
 *   Cx2_Normal_Op_Full_Assist (2U)
 *   Cx3_EPAS_Shutdown (3U)
 *   Cx4_System_Failure (4U)
 *   Cx5_EPAS_Failure2 (5U)
 *   Cx6_EPAS_Failure3 (6U)
 *   Cx7_NotUsed (7U)
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
 * SigQlfr1: Enumeration of integer in interval [0...255] with enumerators
 *   SIGQLFR_NORES (0U)
 *   SIGQLFR_PASSD (1U)
 *   SIGQLFR_FAILD (2U)
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordVltgOperRamp(void)
 *   float32 *Rte_Pim_FordVltgOperScar(void)
 *   float32 *Rte_Pim_OperRampRatePrev(void)
 *   float32 *Rte_Pim_OperScaFctrPrev(void)
 *   Ford_EPAS_Failure *Rte_Pim_FordEpsFailrPrev(void)
 *   FordEpsSysSt1 *Rte_Pim_FordEpsSysStPrev(void)
 *   Ford_SteMdule_D_Stat *Rte_Pim_FordSteerModlStsPrev(void)
 *   boolean *Rte_Pim_SysStReqEnaPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_FullAssiRampUpRate_Val(void)
 *   float32 Rte_Prm_InitLimpHomeRamp_Val(void)
 *   float32 Rte_Prm_InitLimpHomeScar_Val(void)
 *   float32 Rte_Prm_LimdAssiRamp_Val(void)
 *   float32 Rte_Prm_LimdAssiRampUpRate_Val(void)
 *   float32 Rte_Prm_LimdAssiRampUpRateFaild_Val(void)
 *   float32 Rte_Prm_LimdAssiScar_Val(void)
 *   float32 Rte_Prm_NormLimpHomeRamp_Val(void)
 *   float32 Rte_Prm_NormLimpHomeScar_Val(void)
 *   float32 Rte_Prm_ShtdwnRamp_Val(void)
 *
 *********************************************************************************************************************/


#define FordSysSt_START_SEC_CODE
#include "FordSysSt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordSysStInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordSysStInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordSysSt_CODE) FordSysStInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordSysStInit1
 *********************************************************************************************************************/

    *Rte_Pim_OperScaFctrPrev() = 0.0F;
    *Rte_Pim_OperRampRatePrev() = 50.0F; 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordSysStPer1
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
 *   Std_ReturnType Rte_Read_EngOnSerlComSrvDft_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat(Ford_PwPckTq_D_Stat *data)
 *   Std_ReturnType Rte_Read_FordVehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVltgOperRamp_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVltgOperScar_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVltgOperSt_Val(FordVltgOperSt1 *data)
 *   Std_ReturnType Rte_Read_LoaSt_Val(LoaSt1 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_SysStReqEnaOvrd_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysStWrmIninCmpl_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordEpsFailr_Ford_EPAS_Failure(Ford_EPAS_Failure data)
 *   Std_ReturnType Rte_Write_FordEpsSysSt_Val(FordEpsSysSt1 data)
 *   Std_ReturnType Rte_Write_FordPwrSplyEnaReq_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordSteerModlSts_Ford_SteMdule_D_Stat(Ford_SteMdule_D_Stat data)
 *   Std_ReturnType Rte_Write_OperRampRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_OperScaFctr_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysStReqEna_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetGpioMcuEna_Oper(boolean *PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_FordSysStExclusiveArea(void)
 *   void Rte_Exit_FordSysStExclusiveArea(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordSysStPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordSysSt_CODE) FordSysStPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordSysStPer1
 *********************************************************************************************************************/
    
 
    /* inputs */
    VAR(SigQlfr1, AUTOMATIC) NtcQlfr_Cnt_T_enum;
    VAR(boolean, AUTOMATIC) EpsEna_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) PwrSplyEnaReq_Cnt_T_logl; 
    VAR(FordVltgOperSt1, AUTOMATIC) FordVltgOperSt_Cnt_T_enum;
    VAR(boolean, AUTOMATIC) FordVehSpdVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) FordVehSpd_Kph_T_f32;
    VAR(Ford_PwPckTq_D_Stat, AUTOMATIC) FordVehPwrpkTqSts_Cnt_T_enum;
    VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum;
    VAR(LoaSt1, AUTOMATIC) LoaSt_Cnt_T_enum;
    VAR(boolean, AUTOMATIC) EngOnSer1ComSrvDft_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) SysStWrmIninCmpl_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) SysStReqEnaOvrd_Cnt_T_logl;
    
    /* outputs */
    VAR(boolean, AUTOMATIC) SysStReqEna_Cnt_T_logl = FALSE;
    VAR(float32, AUTOMATIC) OperScaFctr_Cnt_T_f32;
    VAR(float32, AUTOMATIC) OperRampRate_Cnt_T_f32;
    
    /* Other Temps */
    VAR(FordEpsSysSt1, AUTOMATIC)FordEpsSysSt_Cnt_T_enum;
    OperScaFctr_Cnt_T_f32 = *Rte_Pim_OperScaFctrPrev();
    OperRampRate_Cnt_T_f32 = *Rte_Pim_OperRampRatePrev();
    
    /* Per1 input reads */
    (void)Rte_Read_FordVltgOperSt_Val(&FordVltgOperSt_Cnt_T_enum);
    (void)Rte_Read_FordVehSpdVld_Logl(&FordVehSpdVld_Cnt_T_logl);
    (void)Rte_Read_FordVehSpd_Val(&FordVehSpd_Kph_T_f32);
    (void)Rte_Read_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat(&FordVehPwrpkTqSts_Cnt_T_enum);
    (void)Rte_Read_SysSt_Val(&SysSt_Cnt_T_enum);
    (void)Rte_Read_LoaSt_Val(&LoaSt_Cnt_T_enum);
    (void)Rte_Read_EngOnSerlComSrvDft_Logl(&EngOnSer1ComSrvDft_Cnt_T_logl);
    (void)Rte_Read_FordVltgOperRamp_Val(Rte_Pim_FordVltgOperRamp());
    (void)Rte_Read_FordVltgOperScar_Val(Rte_Pim_FordVltgOperScar());
    (void)Rte_Read_SysStWrmIninCmpl_Logl(&SysStWrmIninCmpl_Cnt_T_logl);
    (void)Rte_Read_SysStReqEnaOvrd_Logl(&SysStReqEnaOvrd_Cnt_T_logl);
    
    /*** NTC check at top of Per1 block ***/
    (void) Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X11D, &NtcQlfr_Cnt_T_enum);
    
    /*** A and C Term Bit Logic ***/
       /* GetGpioMcuEna Client Call */
    (void)Rte_Call_GetGpioMcuEna_Oper(&EpsEna_Cnt_T_logl);
    /*** A Term Bit Logic ***/
    if ((SysSt_Cnt_T_enum == SYSST_ENA) || (EpsEna_Cnt_T_logl == TRUE))
    { 
        PwrSplyEnaReq_Cnt_T_logl = TRUE;
    }    
    else 
    {
        PwrSplyEnaReq_Cnt_T_logl = FALSE;
    }
    (void)Rte_Write_FordPwrSplyEnaReq_Logl(PwrSplyEnaReq_Cnt_T_logl);    
    
    /*** C Term Bit Logic ***/
    if (SysSt_Cnt_T_enum == SYSST_ENA)
    {
        /*** SysStOperate  ***/
        if (*Rte_Pim_SysStReqEnaPrev() == TRUE)
        {
            /*** Prev C Term True ***/
            if (((EpsEna_Cnt_T_logl != TRUE) && 
                ((FordVehPwrpkTqSts_Cnt_T_enum == Cx3_PwPckOn_TqAvailable) || 
                     (NtcQlfr_Cnt_T_enum == SIGQLFR_FAILD)) &&
                (((FordVehSpd_Kph_T_f32 <= 3.0F) && (FordVehSpdVld_Cnt_T_logl == TRUE)) ||
                     (FordVehSpdVld_Cnt_T_logl == FALSE))) &&
               (EngOnSer1ComSrvDft_Cnt_T_logl != TRUE))
            {
                SysStReqEna_Cnt_T_logl = FALSE;
            }
            else
            {
                SysStReqEna_Cnt_T_logl = TRUE;
            }
        }
        else
        {
            /*** Prev C Term False ***/
            if (((FordVehSpd_Kph_T_f32 > 3.0F) && (FordVehSpdVld_Cnt_T_logl == TRUE)) ||
                (FordVehSpdVld_Cnt_T_logl == FALSE) ||
                (FordVehPwrpkTqSts_Cnt_T_enum == Cx3_PwPckOn_TqAvailable) || 
                (NtcQlfr_Cnt_T_enum == SIGQLFR_FAILD) ||
                (EngOnSer1ComSrvDft_Cnt_T_logl == TRUE))
            {
                SysStReqEna_Cnt_T_logl = TRUE;
            }
        }
    }
    else
        /*** SysStNotOperate ***/
    {
        if((FordVehPwrpkTqSts_Cnt_T_enum == Cx3_PwPckOn_TqAvailable) ||     
          (EngOnSer1ComSrvDft_Cnt_T_logl == TRUE) ||
          (NtcQlfr_Cnt_T_enum == SIGQLFR_FAILD))
          {
             SysStReqEna_Cnt_T_logl = TRUE;
          }          
    }
    /* Update SysStReqEnaPrev PIM and write to ouput */
    *Rte_Pim_SysStReqEnaPrev() = SysStReqEna_Cnt_T_logl;
    (void)Rte_Write_SysStReqEna_Logl(SysStReqEna_Cnt_T_logl);
    

    
    /*** Chart (state machine) ***/
    
       /* Initial state machine state is WarmInit and corresponds to Rte_Pim_FordEpsSysStPrev = 0 */    
       /* Write prev value to temporary variable before entering state machine */
       FordEpsSysSt_Cnt_T_enum = *Rte_Pim_FordEpsSysStPrev();   
    switch (FordEpsSysSt_Cnt_T_enum) 
    {
        /* Initialization (WarmInit)*/
        case (FORDEPSSYSST_EPS_ININ):
        {
            if(SysStReqEnaOvrd_Cnt_T_logl == TRUE)
            {
                /* Call FullAssist */
                FullAssist(&FordEpsSysSt_Cnt_T_enum,
                            &OperScaFctr_Cnt_T_f32,
                            &OperRampRate_Cnt_T_f32);
                /* End FullAssist */
            }
            else
            {
                /* Check conditions to leave Initialization (WarmInit) */
                ChkLvngInit(SysSt_Cnt_T_enum,
                            LoaSt_Cnt_T_enum,
                            SysStWrmIninCmpl_Cnt_T_logl,
                            FordVltgOperSt_Cnt_T_enum,
                            &FordEpsSysSt_Cnt_T_enum,
                            &OperScaFctr_Cnt_T_f32,
                            &OperRampRate_Cnt_T_f32);
            }
        }
        break;
        
        /*** Begin EpsSystemFailure Block ***/
        /* LIMPHOME */
        case (FORDEPSSYSST_EPS_SYST_FAILR_LIMPHOME):
        {
            /* Check to move to new substate within EPSSystemFailure */
            ChkLvngLimpHome(LoaSt_Cnt_T_enum,
                            &FordEpsSysSt_Cnt_T_enum);
            /* Check exit conditions for leaving EpsSystemFailure */
            if (EpsSystemFailureExitCheck(SysSt_Cnt_T_enum, 
                                           FordVehSpd_Kph_T_f32,
                                           FordVehSpdVld_Cnt_T_logl,
                                           FordVehPwrpkTqSts_Cnt_T_enum,
                                           NtcQlfr_Cnt_T_enum) == TRUE)
            {
                /* Call ShutDown */
                ShutDown(&FordEpsSysSt_Cnt_T_enum,
                         &OperScaFctr_Cnt_T_f32, 
                         &OperRampRate_Cnt_T_f32);
                /* End ShutDown */
            }
        }
        break;
        /* LIMPASIDE */
        case (FORDEPSSYSST_EPS_SYST_FAILR_LIMPASIDE):
        {
            /* Check to move to new substate within EPSSystemFailure */
            ChkLvngLimpAside(LoaSt_Cnt_T_enum,
                             &FordEpsSysSt_Cnt_T_enum);

            /* Check exit conditions for leaving EpsSystemFailure */
            if (EpsSystemFailureExitCheck(SysSt_Cnt_T_enum, 
                                           FordVehSpd_Kph_T_f32,
                                           FordVehSpdVld_Cnt_T_logl,
                                           FordVehPwrpkTqSts_Cnt_T_enum,
                                           NtcQlfr_Cnt_T_enum) == TRUE)
            {
                /* Call ShutDown */
                ShutDown(&FordEpsSysSt_Cnt_T_enum,
                         &OperScaFctr_Cnt_T_f32, 
                         &OperRampRate_Cnt_T_f32);
                /* End ShutDown */
            }
        }
        break;
        /* RAMPOUT */
        case (FORDEPSSYSST_EPS_SYST_FAILR_RAMPOUT):
        {
            /* Check to move to new substate within EPSSystemFailure */
            ChkLvngRampOut(LoaSt_Cnt_T_enum,
                           &FordEpsSysSt_Cnt_T_enum);
        
            /* Check exit conditions for leaving EpsSystemFailure */
            if (EpsSystemFailureExitCheck(SysSt_Cnt_T_enum, 
                                           FordVehSpd_Kph_T_f32,
                                           FordVehSpdVld_Cnt_T_logl,
                                           FordVehPwrpkTqSts_Cnt_T_enum,
                                           NtcQlfr_Cnt_T_enum) == TRUE)
            {
                /* Call ShutDown */
                ShutDown(&FordEpsSysSt_Cnt_T_enum,
                         &OperScaFctr_Cnt_T_f32, 
                         &OperRampRate_Cnt_T_f32);
                /* End ShutDown */
            }
        }
        break;
        /* ASSISTOFF */
        case (FORDEPSSYSST_EPS_SYST_FAILR_ASSISTOFF):
        {
            /* Check exit conditions for leaving EpsSystemFailure */
            if (EpsSystemFailureExitCheck(SysSt_Cnt_T_enum, 
                                           FordVehSpd_Kph_T_f32,
                                           FordVehSpdVld_Cnt_T_logl,
                                           FordVehPwrpkTqSts_Cnt_T_enum,
                                           NtcQlfr_Cnt_T_enum) == TRUE)
            {
                /* Call ShutDown */
                ShutDown(&FordEpsSysSt_Cnt_T_enum,
                         &OperScaFctr_Cnt_T_f32, 
                         &OperRampRate_Cnt_T_f32);
                /* End ShutDown */
            }
        }
        break;
        
        /*** End of EpsSystemFailure Block ***/
        
        /*** Start of EPSNormOper Block ***/
        /* LimAssist */
        case (FORDEPSSYSST_EPS_NORM_OP_LIMD_ASSI):
        {
            /* Check conditions for leaving LimAssist or common condition for leaving EpsNormalOperation */
            ChkLvngEpsNormOperLimAssi(LoaSt_Cnt_T_enum, 
                               FordVltgOperSt_Cnt_T_enum, 
                               SysSt_Cnt_T_enum, 
                               FordVehSpdVld_Cnt_T_logl, 
                               FordVehSpd_Kph_T_f32, 
                               FordVehPwrpkTqSts_Cnt_T_enum, 
                               NtcQlfr_Cnt_T_enum,
                               &FordEpsSysSt_Cnt_T_enum, 
                               &OperScaFctr_Cnt_T_f32,
                               &OperRampRate_Cnt_T_f32);                                       
        }
        break;
        
        /* FullAssist */
        case (FORDEPSSYSST_EPS_NORM_OP_FULL_ASSI):
        {
            /* Check conditions for leaving FullAssist or common condition for leaving EpsNormalOperation */
            ChkLvngEpsNormOperFullAssi(LoaSt_Cnt_T_enum,
                                       FordVltgOperSt_Cnt_T_enum,
                                       SysSt_Cnt_T_enum,
                                       FordVehSpdVld_Cnt_T_logl,
                                       FordVehSpd_Kph_T_f32,
                                       FordVehPwrpkTqSts_Cnt_T_enum,
                                       NtcQlfr_Cnt_T_enum,
                                       &FordEpsSysSt_Cnt_T_enum, 
                                       &OperScaFctr_Cnt_T_f32,
                                       &OperRampRate_Cnt_T_f32);
        }
        break;
        
        /* ShutDown */
        case (FORDEPSSYSST_EPS_SHTDWN):
        {
            /* Check exit conditions for leaving ShutDown */
            if (SysSt_Cnt_T_enum == SYSST_OFF)
            {
                /* Call PowerDown */
                PowerDown(&FordEpsSysSt_Cnt_T_enum);
                /* End PowerDown */
            }
            else if (SysSt_Cnt_T_enum == SYSST_WRMININ)
            {
                WarmInit(&FordEpsSysSt_Cnt_T_enum, 
                         &OperScaFctr_Cnt_T_f32,
                         &OperRampRate_Cnt_T_f32);
            }
            else 
            {
                /* Do Nothing */
            }
        }
        break;
        /* PowerDown */
        /* Make case statement a comment to allow a default case to satisfy MISRA-C */
        /* case (FORDEPSSYSST_EPS_PWRDWN): */
        default:
        {            
            if (SysSt_Cnt_T_enum == SYSST_WRMININ)
            {
                WarmInit(&FordEpsSysSt_Cnt_T_enum, 
                         &OperScaFctr_Cnt_T_f32,
                         &OperRampRate_Cnt_T_f32);
            }
        }
        break;
    }
    /* Update PIM FordEpsSysStPrev */
    *Rte_Pim_FordEpsSysStPrev() = FordEpsSysSt_Cnt_T_enum;
    *Rte_Pim_OperScaFctrPrev() = OperScaFctr_Cnt_T_f32;
    *Rte_Pim_OperRampRatePrev() = OperRampRate_Cnt_T_f32; 
    /* Per1 output writes */
    (void)Rte_Write_OperScaFctr_Val(OperScaFctr_Cnt_T_f32);
    (void)Rte_Write_OperRampRate_Val(OperRampRate_Cnt_T_f32);
    (void)Rte_Write_FordEpsFailr_Ford_EPAS_Failure(*Rte_Pim_FordEpsFailrPrev());
    (void)Rte_Write_FordEpsSysSt_Val(*Rte_Pim_FordEpsSysStPrev());
    (void)Rte_Write_FordSteerModlSts_Ford_SteMdule_D_Stat(*Rte_Pim_FordSteerModlStsPrev());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordSysSt_STOP_SEC_CODE
#include "FordSysSt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*******************************************************************************
* Name          :   ChkLvngInit
* Description   :   Implementation ChkLvngInit
* Inputs        :   SysSt_Cnt_T_enum, LoaSt_Cnt_T_enum               
* Outputs       :   *Rte_Pim_FordEpsSysStPrev()
* Usage Notes   :   Check the conditions for leaving ChkLvngInit. 
*****************************************************************************/
static FUNC(void, FordSysSt_CODE) ChkLvngInit(VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum, 
                                              VAR(LoaSt1, AUTOMATIC) LoaSt_Cnt_T_enum,
                                              VAR(boolean, AUTOMATIC) SysStWrmIninCmpl_Cnt_T_logl,
                                              VAR(FordVltgOperSt1, AUTOMATIC) FordVltgOperSt_Cnt_T_enum,
                                              P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum,
                                              P2VAR(float32, AUTOMATIC, AUTOMATIC)OperScaFctr_Cnt_T_f32,
                                              P2VAR(float32, AUTOMATIC, AUTOMATIC)OperRampRate_Cnt_T_f32)
{
    /* Condition 1 */
    if ((SysStWrmIninCmpl_Cnt_T_logl == TRUE) &&
       ((LoaSt_Cnt_T_enum == LOAST_NORM)||(LoaSt_Cnt_T_enum == LOAST_LIMD)))
    {
        /* Call LimAssist */
        LimAssist(FordVltgOperSt_Cnt_T_enum, 
                  FordEpsSysSt_Cnt_T_enum, 
                  OperScaFctr_Cnt_T_f32, 
                  OperRampRate_Cnt_T_f32);
        /* End LimAssist */
    }
    /* Condition 2 */
    else if ((LoaSt_Cnt_T_enum == LOAST_SWBASDMTGTN)||
            (LoaSt_Cnt_T_enum == LOAST_FADEOUT)||
            (LoaSt_Cnt_T_enum == LOAST_CTRLDSHTDWNREQD))
    {
        /* Set LimpHome and call EpsSystemFailure */
        *FordEpsSysSt_Cnt_T_enum = FORDEPSSYSST_EPS_SYST_FAILR_LIMPHOME;
        EpsSystemFailure();
        /* End LimpHome */                
    }
    /* Condition 3 */
    else if (LoaSt_Cnt_T_enum == LOAST_IMDTSHTDWNREQD)
    {
        /* Set AssistOff and call EpsSystemFailure */
        *FordEpsSysSt_Cnt_T_enum = FORDEPSSYSST_EPS_SYST_FAILR_ASSISTOFF;
        EpsSystemFailure();
        /* End AssistOff */
    }
    /* Condition 4 */
    else if (SysSt_Cnt_T_enum == SYSST_DI)
    {
        /* Call ShutDown */
        ShutDown(FordEpsSysSt_Cnt_T_enum,
                 OperScaFctr_Cnt_T_f32, 
                 OperRampRate_Cnt_T_f32);
        /* End of ShutDown */
    }
    else
    {
        /* Do Nothing */
    }
}

/*******************************************************************************
* Name          :   ChkLvngLimpHome
* Description   :   Implementation LimpHome
* Inputs        :   LoaSt_Cnt_T_enum               
* Outputs       :   *Rte_Pim_FordEpsSysStPrev()
* Usage Notes   :   Check the conditions for leaving LimpHome for another substate of EPSSystemFailure. 
*****************************************************************************/
static FUNC(void, FordSysSt_CODE) ChkLvngLimpHome(VAR(LoaSt1, AUTOMATIC) LoaSt_Cnt_T_enum,
                                                  P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum)
{
    if ((LoaSt_Cnt_T_enum == LOAST_FADEOUT)||
       (LoaSt_Cnt_T_enum == LOAST_CTRLDSHTDWNREQD)||
       (LoaSt_Cnt_T_enum == LOAST_IMDTSHTDWNREQD))
    {
        *FordEpsSysSt_Cnt_T_enum = FORDEPSSYSST_EPS_SYST_FAILR_LIMPASIDE;
    }
    else
    {
        /* Do Nothing */
    }
}

/*******************************************************************************
* Name          :   ChkLvngLimpAside
* Description   :   Implementation LimpAside
* Inputs        :   LoaSt_Cnt_T_enum               
* Outputs       :   *Rte_Pim_FordEpsSysStPrev()
* Usage Notes   :   Check the conditions for leaving LimpAside for another substate of EPSSystemFailure. 
*****************************************************************************/
static FUNC(void, FordSysSt_CODE) ChkLvngLimpAside(VAR(LoaSt1, AUTOMATIC) LoaSt_Cnt_T_enum,
                                                   P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum)
{
    if ((LoaSt_Cnt_T_enum == LOAST_CTRLDSHTDWNREQD)||
        (LoaSt_Cnt_T_enum == LOAST_IMDTSHTDWNREQD))
    {
        *FordEpsSysSt_Cnt_T_enum = FORDEPSSYSST_EPS_SYST_FAILR_RAMPOUT;
    }
    else
    {
        /* Do Nothing */
    }
}
/*******************************************************************************
* Name          :   ChkLvngRampOut
* Description   :   Implementation RampOut
* Inputs        :   LoaSt_Cnt_T_enum               
* Outputs       :   *Rte_Pim_FordEpsSysStPrev()
* Usage Notes   :   Check the conditions for leaving RampOut for another substate of EPSSystemFailure. 
*****************************************************************************/
static FUNC(void, FordSysSt_CODE) ChkLvngRampOut(VAR(LoaSt1, AUTOMATIC) LoaSt_Cnt_T_enum,
                                                 P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum)
{
    if (LoaSt_Cnt_T_enum == LOAST_IMDTSHTDWNREQD)
    {
        *FordEpsSysSt_Cnt_T_enum = FORDEPSSYSST_EPS_SYST_FAILR_ASSISTOFF;
    }
}

/*******************************************************************************
* Name          :   ChkLvngEpsNormOperLimAssi
* Description   :   Implementation ChkLvngEpsNormOperLimAssi
* Inputs        :   SysSt_Cnt_T_enum, LoaSt_Cnt_T_enum,
                    FordVltgOperSt_Cnt_T_enum, FordVehSpdVld_Cnt_T_logl, FordVehSpd_Kph_T_f32,
                    FordVehPwrpkTqSts_Cnt_T_enum, NtcQlfr_Cnt_T_enum,                
* Outputs       :   *FordEpsSysSt_Cnt_T_enum
* Usage Notes   :   Check the conditions for leaving EpsNormOper-->LimAssi. 
*****************************************************************************/            
static FUNC(void, FordSysSt_CODE) ChkLvngEpsNormOperLimAssi(VAR(LoaSt1, AUTOMATIC) LoaSt_Cnt_T_enum,
                                                     VAR(FordVltgOperSt1, AUTOMATIC) FordVltgOperSt_Cnt_T_enum,
                                                     VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum,
                                                     VAR(boolean, AUTOMATIC) FordVehSpdVld_Cnt_T_logl,
                                                     VAR(float32, AUTOMATIC) FordVehSpd_Kph_T_f32,
                                                     VAR(Ford_PwPckTq_D_Stat, AUTOMATIC) FordVehPwrpkTqSts_Cnt_T_enum,
                                                     VAR(SigQlfr1, AUTOMATIC) NtcQlfr_Cnt_T_enum,
                                                     P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum,
                                                     P2VAR(float32, AUTOMATIC, AUTOMATIC)OperScaFctr_Cnt_T_f32,
                                                     P2VAR(float32, AUTOMATIC, AUTOMATIC)OperRampRate_Cnt_T_f32)
{

    /* Check common condition to transition from EpsNormOper block to EpsSystemFailure -> LimpHome. */
    if ((LoaSt_Cnt_T_enum == LOAST_SWBASDMTGTN)||
        (LoaSt_Cnt_T_enum == LOAST_FADEOUT)||
        (LoaSt_Cnt_T_enum == LOAST_CTRLDSHTDWNREQD)||
        (LoaSt_Cnt_T_enum == LOAST_IMDTSHTDWNREQD))
    {
        /* Set LimpHome and call EpsSystemFailure */
        *FordEpsSysSt_Cnt_T_enum = FORDEPSSYSST_EPS_SYST_FAILR_LIMPHOME;
        EpsSystemFailure();
        /*** LimpHomeScar and LimpHomeRamp ***/
        if (*Rte_Pim_FordEpsSysStPrev() != FORDEPSSYSST_EPS_ININ)
        {
            *OperScaFctr_Cnt_T_f32 = Rte_Prm_NormLimpHomeScar_Val();
            *OperRampRate_Cnt_T_f32 = Rte_Prm_NormLimpHomeRamp_Val();
        }    
        else 
        {
            *OperScaFctr_Cnt_T_f32 = Rte_Prm_InitLimpHomeScar_Val();
            *OperRampRate_Cnt_T_f32 = Rte_Prm_InitLimpHomeRamp_Val();
        }
        
        /* End LimpHome */        
    }
    /* Check for conditions to transition from LimAssist to FullAssist. */
    else if (((FordVltgOperSt_Cnt_T_enum == FORDVLTGOPERST_NORMVLTGOP)&&
                (SysSt_Cnt_T_enum == SYSST_ENA)&&
                (LoaSt_Cnt_T_enum == LOAST_NORM))&&
            ((FordVehSpdVld_Cnt_T_logl == FALSE)|| 
              ((FordVehSpdVld_Cnt_T_logl == TRUE) && 
                   (FordVehSpd_Kph_T_f32 > VEHSPDTHD_KPH_F32))||
              (FordVehPwrpkTqSts_Cnt_T_enum == Cx3_PwPckOn_TqAvailable)|| 
              (NtcQlfr_Cnt_T_enum == SIGQLFR_FAILD)))
    {
        /* Call FullAssist */
        FullAssist(FordEpsSysSt_Cnt_T_enum,
                        OperScaFctr_Cnt_T_f32,
                        OperRampRate_Cnt_T_f32);
        /* End FullAssist */
    }
    /* Check for conditions to transition from LimAssist to ShutDown */
    else if ((SysSt_Cnt_T_enum == SYSST_DI)&&
             ((FordVehSpdVld_Cnt_T_logl == FALSE) || 
                ((FordVehSpdVld_Cnt_T_logl == TRUE) && 
                   (FordVehSpd_Kph_T_f32 <= VEHSPDTHD_KPH_F32)))&&
             (FordVehPwrpkTqSts_Cnt_T_enum != Cx3_PwPckOn_TqAvailable))
    {
        /* Call ShutDown */
        ShutDown(FordEpsSysSt_Cnt_T_enum,
                 OperScaFctr_Cnt_T_f32, 
                 OperRampRate_Cnt_T_f32);
        /* End ShutDown */ 
    }
    else
    {
        /* Do Nothing */
    }
}        

/*******************************************************************************
* Name          :   ChkLvngEpsNormOperFullAssi
* Description   :   Implementation ChkLvngEpsNormOperFullAssi
* Inputs        :   SysSt_Cnt_T_enum, LoaSt_Cnt_T_enum,
                    FordVltgOperSt_Cnt_T_enum, FordVehSpdVld_Cnt_T_logl, FordVehSpd_Kph_T_f32,
                    FordVehPwrpkTqSts_Cnt_T_enum, NtcQlfr_Cnt_T_enum
* Outputs       :   *FordEpsSysSt_Cnt_T_enum
* Usage Notes   :   Check the conditions for leaving EpsNormOper-->FullAssist. 
*****************************************************************************/            
static FUNC(void, FordSysSt_CODE) ChkLvngEpsNormOperFullAssi(VAR(LoaSt1, AUTOMATIC) LoaSt_Cnt_T_enum,
                                                     VAR(FordVltgOperSt1, AUTOMATIC) FordVltgOperSt_Cnt_T_enum,
                                                     VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum,
                                                     VAR(boolean, AUTOMATIC) FordVehSpdVld_Cnt_T_logl,
                                                     VAR(float32, AUTOMATIC) FordVehSpd_Kph_T_f32,
                                                     VAR(Ford_PwPckTq_D_Stat, AUTOMATIC) FordVehPwrpkTqSts_Cnt_T_enum,
                                                     VAR(SigQlfr1, AUTOMATIC) NtcQlfr_Cnt_T_enum,
                                                     P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum,
                                                     P2VAR(float32, AUTOMATIC, AUTOMATIC)OperScaFctr_Cnt_T_f32,
                                                     P2VAR(float32, AUTOMATIC, AUTOMATIC)OperRampRate_Cnt_T_f32)
{
/* Check common condition for leaving EpsNormOper block */
            if ((LoaSt_Cnt_T_enum == LOAST_SWBASDMTGTN)||
                (LoaSt_Cnt_T_enum == LOAST_FADEOUT)||
                (LoaSt_Cnt_T_enum == LOAST_CTRLDSHTDWNREQD)||
                (LoaSt_Cnt_T_enum == LOAST_IMDTSHTDWNREQD))
            {
                /* Set LimpHome and call EpsSystemFailure */
                *FordEpsSysSt_Cnt_T_enum = FORDEPSSYSST_EPS_SYST_FAILR_LIMPHOME;
                EpsSystemFailure();
                /*** LimpHomeScar and LimpHomeRamp ***/
               if (*Rte_Pim_FordEpsSysStPrev() != FORDEPSSYSST_EPS_ININ)
               {
                    *OperScaFctr_Cnt_T_f32 = Rte_Prm_NormLimpHomeScar_Val();
                    *OperRampRate_Cnt_T_f32 = Rte_Prm_NormLimpHomeRamp_Val();
               }    
               else 
               {
                    *OperScaFctr_Cnt_T_f32 = Rte_Prm_InitLimpHomeScar_Val();
                    *OperRampRate_Cnt_T_f32 = Rte_Prm_InitLimpHomeRamp_Val();
               }
               /* End LimpHome */
            }
            /* Check for conditions to transition from FullAssistAssist to LimAssist. */
            else if ((FordVltgOperSt_Cnt_T_enum != FORDVLTGOPERST_NORMVLTGOP)||
                     (LoaSt_Cnt_T_enum == LOAST_LIMD)||
                     ((FordVehSpdVld_Cnt_T_logl == TRUE) && (FordVehSpd_Kph_T_f32 <= VEHSPDTHD_KPH_F32) &&
                         ((FordVehPwrpkTqSts_Cnt_T_enum == Cx0_PwPckOff_TqNotAvailable)||(FordVehPwrpkTqSts_Cnt_T_enum == Cx2_StartInPrgrss_TqNotAvail))))
            {
                /* Call LimAssist */
                LimAssist(FordVltgOperSt_Cnt_T_enum, 
                          FordEpsSysSt_Cnt_T_enum, 
                          OperScaFctr_Cnt_T_f32, 
                          OperRampRate_Cnt_T_f32);
                /* End LimAssist */
            }
            /* Check for conditions to transition from EpsNormOper --> FullAssist to ShutDown */
            else if ((SysSt_Cnt_T_enum == SYSST_DI)&&
                     ((FordVehSpdVld_Cnt_T_logl == FALSE) || 
                        ((FordVehSpdVld_Cnt_T_logl == TRUE) && (FordVehSpd_Kph_T_f32 <= VEHSPDTHD_KPH_F32)))&&
                     ((NtcQlfr_Cnt_T_enum == SIGQLFR_FAILD) || (FordVehPwrpkTqSts_Cnt_T_enum != Cx3_PwPckOn_TqAvailable))) 
            {
                /* Call ShutDown */
                ShutDown(FordEpsSysSt_Cnt_T_enum,
                         OperScaFctr_Cnt_T_f32, 
                         OperRampRate_Cnt_T_f32);
                /* End ShutDown */
            }    
            else
            {
                /* Do Nothing */
            }
}

/*******************************************************************************
* Name          :   PowerDown
* Description   :   Implementation PowerDown
* Inputs        :   none              
* Outputs       :   *FordEpsSysSt_Cnt_T_enum
* Usage Notes   :   Set FordEpsSystemSt to PowerDown
*****************************************************************************/

static FUNC(void, FordSysSt_CODE) PowerDown(P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum)
{
    *FordEpsSysSt_Cnt_T_enum = FORDEPSSYSST_EPS_PWRDWN;
}
 
/*******************************************************************************
* Name          :   WarmInit
* Description   :   Implementation of Initialization block in state machine renamed WarmInit
* Inputs        :   none                
* Outputs       :   *FordEpsSysSt_Cnt_T_enum, *Rte_Pim_FordEpsFailrPrev(), *Rte_Pim_FordSteerModlStsPrev()
* Usage Notes   :   Set Initialization (WarmInit) conditions.
*****************************************************************************/

static FUNC(void, FordSysSt_CODE) WarmInit(P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum,
                                           P2VAR(float32, AUTOMATIC, AUTOMATIC)OperScaFctr_Cnt_T_f32,
                                           P2VAR(float32, AUTOMATIC, AUTOMATIC)OperRampRate_Cnt_T_f32)
{
    *Rte_Pim_FordSteerModlStsPrev() = Cx0_EPAS_Initialization;    
    *Rte_Pim_FordEpsFailrPrev() = Cx0_EPAS_OK_NO_MESSAGE;    
    *FordEpsSysSt_Cnt_T_enum = FORDEPSSYSST_EPS_ININ;
    *OperScaFctr_Cnt_T_f32 = 0.0F;
    *OperRampRate_Cnt_T_f32 = 50.0F;
    
    
}                        

/*******************************************************************************
* Name          :   EpsSystemFailure
* Description   :   Implementation EpsSystemFailure
* Inputs        :   none                  
* Outputs       :   *Rte_Pim_FordEpsFailrPrev(), *Rte_Pim_FordSteerModlStsPrev()
* Usage Notes   :   Set EpsSystemFailure variables common to the entire block.
*****************************************************************************/

static FUNC(void, FordSysSt_CODE) EpsSystemFailure(void)
{
    /* Set EpsSystemFailure common variables */
    *Rte_Pim_FordSteerModlStsPrev() = Cx4_System_Failure;
    *Rte_Pim_FordEpsFailrPrev() = Cx1_POWER_STRG_ASSIST_FAULT;     
}            

/******************************************************************************
* Name          :   EpsSystemFailureExitCheck
* Description   :   Checks to see if conditions exist to leave EpsSystemFailure
* Inputs        :   SysSt_Cnt_T_enum, FordVehSpd_Kph_T_f32,
*                   FordVehSpdVld_Cnt_T_logl, FordVehPwrpkTqSts_Cnt_T_enum,
*                   NtcQlfr_Cnt_T_enum                   
* Outputs       :   returns boolean
* Usage Notes   :   Called whenever FordEpsSysSt is already in an EpsSystemFailure state.
*****************************************************************************/

static FUNC(boolean, FordSysSt_CODE) EpsSystemFailureExitCheck(
                        SysSt1 SysSt_Cnt_T_enum,
                        float32 FordVehSpd_Kph_T_f32,
                        boolean FordVehSpdVld_Cnt_T_logl,
                        Ford_PwPckTq_D_Stat FordVehPwrpkTqSts_Cnt_T_enum,
                        SigQlfr1 NtcQlfr_Cnt_T_enum)
{   
    VAR (boolean, AUTOMATIC) EpsSystemFailureExitCheck_Cnt_T_logl = FALSE;
    
    /* Check exit condition to Leave EpsSystemFailure and return the boolean result. */
    if ((SysSt_Cnt_T_enum == SYSST_DI)&&
        ((FordVehSpdVld_Cnt_T_logl == FALSE)||
             ((FordVehSpdVld_Cnt_T_logl == TRUE)&&(FordVehSpd_Kph_T_f32 <= VEHSPDTHD_KPH_F32)))&&
        ((NtcQlfr_Cnt_T_enum == SIGQLFR_FAILD)||(FordVehPwrpkTqSts_Cnt_T_enum != Cx3_PwPckOn_TqAvailable)))
    {
        EpsSystemFailureExitCheck_Cnt_T_logl = TRUE;
    }
    return EpsSystemFailureExitCheck_Cnt_T_logl;
}

/*******************************************************************************
* Name          :   LimAssist
* Description   :   Implementation LimAssist
* Inputs        :   none                  
* Outputs       :   *FordEpsSysSt_Cnt_T_enum, *Rte_Pim_FordSteerModlStsPrev()
* Usage Notes   :   Set variables when entering LimAssist.
*****************************************************************************/

static FUNC(void, FordSysSt_CODE) LimAssist(VAR(FordVltgOperSt1, AUTOMATIC) FordVltgOperSt_Cnt_T_enum,
                                            P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum,
                                            P2VAR(float32, AUTOMATIC, AUTOMATIC)OperScaFctr_Cnt_T_f32,
                                            P2VAR(float32, AUTOMATIC, AUTOMATIC)OperRampRate_Cnt_T_f32)
{
    VAR(SigQlfr1, AUTOMATIC) NtcQlfr_Cnt_T_enum;
    
    *FordEpsSysSt_Cnt_T_enum = FORDEPSSYSST_EPS_NORM_OP_LIMD_ASSI;  
    *Rte_Pim_FordSteerModlStsPrev() = Cx1_Normal_Op_Limited_Assist;    
    if (*Rte_Pim_FordEpsSysStPrev() == FORDEPSSYSST_EPS_NORM_OP_FULL_ASSI) 
    {
        if (FordVltgOperSt_Cnt_T_enum == FORDVLTGOPERST_NORMVLTGOP)
        {
            *OperScaFctr_Cnt_T_f32 = Rte_Prm_LimdAssiScar_Val();
            *OperRampRate_Cnt_T_f32 = Rte_Prm_LimdAssiRamp_Val();
        }
        else
        {
            *OperScaFctr_Cnt_T_f32 = *Rte_Pim_FordVltgOperScar();
            *OperRampRate_Cnt_T_f32 = *Rte_Pim_FordVltgOperRamp();
        }
    }
    else
    {
        *OperScaFctr_Cnt_T_f32 = 0.001F;
        
        (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X0BF, &NtcQlfr_Cnt_T_enum);
        if(NtcQlfr_Cnt_T_enum == SIGQLFR_FAILD)
        {
            *OperRampRate_Cnt_T_f32 = Rte_Prm_LimdAssiRampUpRateFaild_Val();
        }
        else
        {
            *OperRampRate_Cnt_T_f32 = Rte_Prm_LimdAssiRampUpRate_Val();
        }
    }
}

/*******************************************************************************
* Name          :   FullAssist
* Description   :   Implementation FullAssist
* Inputs        :   none                  
* Outputs       :   *FordEpsSysSt_Cnt_T_enum, *Rte_Pim_FordSteerModlStsPrev()
* Usage Notes   :   Set variables when entering FullAssist.
*****************************************************************************/

static FUNC(void, FordSysSt_CODE) FullAssist(P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum,
                                            P2VAR(float32, AUTOMATIC, AUTOMATIC)OperScaFctr_Cnt_T_f32,
                                            P2VAR(float32, AUTOMATIC, AUTOMATIC)OperRampRate_Cnt_T_f32)
{
    *FordEpsSysSt_Cnt_T_enum = FORDEPSSYSST_EPS_NORM_OP_FULL_ASSI;
    *Rte_Pim_FordSteerModlStsPrev() = Cx2_Normal_Op_Full_Assist;
    
    if (*Rte_Pim_FordEpsSysStPrev() != FORDEPSSYSST_EPS_ININ) 
    {
        *OperScaFctr_Cnt_T_f32 = *Rte_Pim_FordVltgOperScar();
        *OperRampRate_Cnt_T_f32 = *Rte_Pim_FordVltgOperRamp();
    }
    else
    {
        *OperScaFctr_Cnt_T_f32 = 1.0F;
        *OperRampRate_Cnt_T_f32 = Rte_Prm_FullAssiRampUpRate_Val();
    }
}

/*******************************************************************************
* Name          :   ShutDown
* Description   :   Implementation ShutDown
* Inputs        :   none
* Outputs       :   *FordEpsSysSt_Cnt_T_enum, *Rte_Pim_FordSteerModlStsPrev()
                    OperScaFctr_Cnt_T_f32,OperRampRate_Cnt_T_f32
* Usage Notes   :   Set variables when entering ShutDown.
*****************************************************************************/

static FUNC(void, FordSysSt_CODE) ShutDown(P2VAR(FordEpsSysSt1, AUTOMATIC, AUTOMATIC) FordEpsSysSt_Cnt_T_enum,
                                           P2VAR(float32, AUTOMATIC, AUTOMATIC)OperScaFctr_Cnt_T_f32,
                                           P2VAR(float32, AUTOMATIC, AUTOMATIC)OperRampRate_Cnt_T_f32)
{
    *FordEpsSysSt_Cnt_T_enum = FORDEPSSYSST_EPS_SHTDWN;
    *Rte_Pim_FordSteerModlStsPrev() = Cx3_EPAS_Shutdown;
    *OperScaFctr_Cnt_T_f32 = 0.0F;
    *OperRampRate_Cnt_T_f32 = Rte_Prm_ShtdwnRamp_Val();
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
