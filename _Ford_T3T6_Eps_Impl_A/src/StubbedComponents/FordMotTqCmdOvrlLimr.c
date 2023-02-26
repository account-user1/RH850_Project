/* TODO Stub file remove later */
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordMotTqCmdOvrlLimr.c
 *        Config:  E:/EA4NewTemplate/CF066A_FordMotTqCmdOvrlLimr_Impl/tools/Component.dpa
 *     SW-C Type:  FordMotTqCmdOvrlLimr
 *  Generated at:  Tue May  8 14:07:19 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordMotTqCmdOvrlLimr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

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
 * FordArbnCmd1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
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
 * s5p10
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * u16p0
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u9p7
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_FordMotTqCmdOvrlLimr.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"
#include "NxtrIntrpn.h"
#include "NxtrFil.h"
#include "ImcArbn.h"
#include "ArchGlbPrm.h"

static FUNC(float32, FordMotTqCmdOvrlLimr_CODE) LatCtrlqShapeLimr(float32 TqReq_HwNwtMtr_T_f32,float32 LimrVehSpd_Kph_T_f32 );
static FUNC(float32, FordMotTqCmdOvrlLimr_CODE) InpCdng(float32 TqReq_HwNwtMtr_T_f32,FordArbnCmd1 ArbnCmd_Cnt_T_enum,boolean FctCallSts_Cnt_T_logl );
static FUNC(float32, FordMotTqCmdOvrlLimr_CODE) CombdSteerReactnLimr(float32 LimrVehSpd_Kph_T_f32, float32 FildHwTq_HwNwtMtr_f32 ,float32 HwVel_HwDegPerSec_f32,
                                                        float32 FordLatCtrlCdnTqReqShapeLim_HwNwtMtr_T_f32,float32 FordSteerTqDstbcRejctnCdnTqReq_HwNwtMtr_T_f32);
static FUNC(float32, FordMotTqCmdOvrlLimr_CODE) ActvNiblCtrlHiFrqMonr(float32 FordActvNiblCtrlCdnTqReq_HwNwtMtr_T_f32,uint8* ActvNiblCtrlHiFrqMonrFltDiagFlg_Cnt_T_u08 );
static FUNC(float32, FordMotTqCmdOvrlLimr_CODE) LaneDprtrWarnHiFrqMonr(float32 FordLaneDprtrWarnCdnTqReq_HwNwtMtr_T_f32,uint8* LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08 );
static FUNC(float32, FordMotTqCmdOvrlLimr_CODE) LoFrqLimr(float32 FordPullDriftCmpCdnTqReq_HwNwtMtr_T_f32,float32 LimrVehSpd_Kph_T_f32 );
static FUNC(void, FordMotTqCmdOvrlLimr_CODE) NtcHndlr(VAR(uint8, AUTOMATIC) ActvNiblCtrlHiFrqMonrFltDiagFlg_Cnt_T_u08,
                                                      VAR(uint8, AUTOMATIC) LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08);
/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Read and Rte_Write */

/********************************************* Embedded Local Constants **********************************************/

#define CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32  (1000.0F)

#define ECUID1_CNT_U08       	                        (1U)
#define ECUID2_CNT_U08       	 						(2U)
#define ECUIDINVLD_CNT_U08       	 					(3U)

#define FAILRBANDST_CNT_U08     						(4U)
#define FORDMOTTQCMDOVRLMAXVAL_MOTNWTMTR_F32     		(8.0F)
#define FORDMOTTQCMDOVRLMINVAL_MOTNWTMTR_F32     		(-8.0F)
#define LOFRQFLT_CNT_U08     			    ((uint8)1U)
#define MAXAMPFLT_CNT_U08    			((uint8)2U)
#define DCTRENDFLT_CNT_U08                  ((uint8)3U)
#define MAXERRDIFF_CNT_F32                           (0.0F)
#define MOTTQREQDFTVAL_MOTNWTMTR_F32                 (0.0F)
#define MPLRFAC_ULS_F32                              (0.5F)
#define NEGBANDST_CNT_U08    			(1U)
#define NODEBSTEP_CNT_U16    			(65535U)
#define NOFLT_CNT_U08    				(0U)
#define POSBANDST_CNT_U08    			(2U)
#define RSTTMR_CNT_U32    				(0U)
#define SAMPLETI_SEC_F32    			(0.001F)
#define SPDDIFTHD_KPH_F32                            (10.0F)
#define ZEROBANDST_CNT_U08    			(0U)

#define PrmFordMotTqCmdOvrlLimrLatCtrlBwY_s5p10                                     (*(const Ary1D_s5p10_8 *) Rte_Prm_FordMotTqCmdOvrlLimrLatCtrlBwY_Val())
#define PrmFordMotTqCmdOvrlLimrLatCtrlTqRateY_s16                                   (*(const Ary1D_s16_8 *) Rte_Prm_FordMotTqCmdOvrlLimrLatCtrlTqRateY_Ary1D())
#define PrmFordMotTqCmdOvrlLimrLatCtrlTqSatnY_s16                                   (*(const Ary1D_s16_8 *) Rte_Prm_FordMotTqCmdOvrlLimrLatCtrlTqSatnY_Ary1D())
#define PrmFordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX_u9p7                           (*(const Ary1D_u9p7_8 *) Rte_Prm_FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX_Ary1D())
#define PrmFordMotTqCmdOvrlLimrPullDriftCmpTqSatnY_s16                              (*(const Ary1D_s16_8 *) Rte_Prm_FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY_Ary1D())
#define PrmFordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX_u16p0                     (*(const Ary1D_u16p0_8 *) Rte_Prm_FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX_Ary1D())
#define PrmFordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX_u16p0               (*(const Ary1D_u16p0_8 *) Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX_Ary1D())
#define PrmFordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY_u16p0               (*(const Ary1D_u16p0_8 *) Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY_Ary1D())
#define PrmFordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX_u16p0     (*(const Ary1D_u16p0_6 *) Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX_Ary1D())
#define PrmFordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY_u16p0          (*(const Ary1D_u16p0_6 *) Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY_Ary1D())
#define PrmFordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX_s16p0                     (*(const Ary2D_s16p0_8_9 *) Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX_Ary2D())
#define PrmFordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY_s16p0                 (*(const Ary2D_s16p0_8_9 *) Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY_Ary2D())
#define PrmFordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd_u16p0                 (*(const Ary1D_u16p0_8 *) Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd_Ary1D())

 
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
 * s5p10: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * u16p0: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * FordArbnCmd1: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_PASSIVE (0U)
 *   Cx3_ACTIVE (3U)
 *   Cx5_LOCKED (5U)
 *   Cx99_DONT_CARE (99U)
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
 *
 * Array Types:
 * ============
 * Ary1D_s16_8: Array with 8 element(s) of type sint16
 * Ary1D_s16_9: Array with 9 element(s) of type sint16
 * Ary1D_s5p10_8: Array with 8 element(s) of type s5p10
 * Ary1D_u16p0_6: Array with 6 element(s) of type uint16
 * Ary1D_u16p0_8: Array with 8 element(s) of type u16p0
 * Ary1D_u9p7_8: Array with 8 element(s) of type u9p7
 * Ary2D_s16p0_8_9: Array with 8 element(s) of type Ary1D_s16_9
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
 *   float32 *Rte_Pim_DftVehSpd(void)
 *   float32 *Rte_Pim_PrevAmpLim(void)
 *   float32 *Rte_Pim_PrevDftVehSpd(void)
 *   float32 *Rte_Pim_PrevLimdTqReq(void)
 *   float32 *Rte_Pim_PrevLimrVehSpd(void)
 *   float32 *Rte_Pim_PrevTqTrend(void)
 *   uint32 *Rte_Pim_ActvNiblCtrlLoFrqElpdTiVari(void)
 *   uint32 *Rte_Pim_ActvNiblCtrlLoFrqTmrVari(void)
 *   uint32 *Rte_Pim_LaneDprtrWarnLoFrqElpdTiVari(void)
 *   uint32 *Rte_Pim_LaneDprtrWarnLoFrqTmrVari(void)
 *   uint8 *Rte_Pim_ActvNiblCtrlLoFrqFlt(void)
 *   uint8 *Rte_Pim_ActvNiblCtrlLoFrqSt(void)
 *   uint8 *Rte_Pim_LaneDprtrWarnLoFrqFlt(void)
 *   uint8 *Rte_Pim_LaneDprtrWarnLoFrqSt(void)
 *   boolean *Rte_Pim_ActvNiblCtrlLoFrqTmrFlgVari(void)
 *   boolean *Rte_Pim_LaneDprtrWarnLoFrqTmrFlgVari(void)
 *   boolean *Rte_Pim_LimrDftVehSpd(void)
 *   FilLpRec1 *Rte_Pim_HwVelFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrDftSpdRate_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrDftSpdRcvrRate_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrHwVelLoPassFrq_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1_Val(void)
 *   float32 Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2_Val(void)
 *   s5p10 *Rte_Prm_FordMotTqCmdOvrlLimrLatCtrlBwY_Val(void)
 *     Returnvalue: s5p10* is of type Ary1D_s5p10_8
 *   sint16 *Rte_Prm_FordMotTqCmdOvrlLimrLatCtrlTqRateY_Ary1D(void)
 *     Returnvalue: sint16* is of type Ary1D_s16_8
 *   sint16 *Rte_Prm_FordMotTqCmdOvrlLimrLatCtrlTqSatnY_Ary1D(void)
 *     Returnvalue: sint16* is of type Ary1D_s16_8
 *   u9p7 *Rte_Prm_FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_8
 *   sint16 *Rte_Prm_FordMotTqCmdOvrlLimrPullDriftCmpTqRateY_Ary1D(void)
 *     Returnvalue: sint16* is of type Ary1D_s16_8
 *   sint16 *Rte_Prm_FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY_Ary1D(void)
 *     Returnvalue: sint16* is of type Ary1D_s16_8
 *   u16p0 *Rte_Prm_FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX_Ary1D(void)
 *     Returnvalue: u16p0* is of type Ary1D_u16p0_8
 *   u16p0 *Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX_Ary1D(void)
 *     Returnvalue: u16p0* is of type Ary1D_u16p0_8
 *   u16p0 *Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY_Ary1D(void)
 *     Returnvalue: u16p0* is of type Ary1D_u16p0_8
 *   uint16 *Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX_Ary1D(void)
 *     Returnvalue: uint16* is of type Ary1D_u16p0_6
 *   uint16 *Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY_Ary1D(void)
 *     Returnvalue: uint16* is of type Ary1D_u16p0_6
 *   sint16 *Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX_Ary2D(void)
 *     Returnvalue: sint16* is of type Ary2D_s16p0_8_9
 *   sint16 *Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY_Ary2D(void)
 *     Returnvalue: sint16* is of type Ary2D_s16p0_8_9
 *   u16p0 *Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd_Ary1D(void)
 *     Returnvalue: u16p0* is of type Ary1D_u16p0_8
 *
 *********************************************************************************************************************/


#define FordMotTqCmdOvrlLimr_START_SEC_CODE
#include "FordMotTqCmdOvrlLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMotTqCmdOvrlLimrInit1
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
 * Symbol: FordMotTqCmdOvrlLimrInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMotTqCmdOvrlLimr_CODE) FordMotTqCmdOvrlLimrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMotTqCmdOvrlLimrInit1
 *********************************************************************************************************************/

    *Rte_Pim_LimrDftVehSpd() = FALSE;
    *Rte_Pim_ActvNiblCtrlLoFrqFlt()  = 0U;
    *Rte_Pim_LaneDprtrWarnLoFrqFlt() = 0U;
     
    *Rte_Pim_ActvNiblCtrlLoFrqTmrVari()  = 0U;
    *Rte_Pim_LaneDprtrWarnLoFrqTmrVari() = 0U;
    
    FilLpInit(0.0F, Rte_Prm_FordMotTqCmdOvrlLimrHwVelLoPassFrq_Val(),
              SAMPLETI_SEC_F32, Rte_Pim_HwVelFil());
              
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0E8, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMotTqCmdOvrlLimrPer1
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
 *   Std_ReturnType Rte_Read_EcuId_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FildHwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FildVehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordActvNiblCtrlArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordActvNiblCtrlFctCallSts_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordActvNiblCtrlTqReq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordLaneDprtrWarnArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordLaneDprtrWarnFctCallSts_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneDprtrWarnTqReq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordLatCtrlArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordLatCtrlFctCallSts_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLatCtrlTqReq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpFctCallSts_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpTqReq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordSteerTqDstbcRejctnArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordSteerTqDstbcRejctnFctCallSts_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordSteerTqDstbcRejctnTqReq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordMotTqCmdOvrl_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetSigImcData_f32_Oper(uint16 SigId_Arg, float32 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_f32_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMotTqCmdOvrlLimrPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMotTqCmdOvrlLimr_CODE) FordMotTqCmdOvrlLimrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMotTqCmdOvrlLimrPer1
 *********************************************************************************************************************/

    VAR(float32, AUTOMATIC) FildHwTq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) FildVehSpd_Kph_T_f32;

    VAR(float32, AUTOMATIC) FordLatCtrlTqReq_HwNwtMtr_T_f32;
    VAR(FordArbnCmd1, AUTOMATIC) FordLatCtrlArbnCmd_Cnt_T_enum;
    VAR(boolean, AUTOMATIC) FordLatCtrlFctCallSts_Cnt_T_logl;
    VAR(float32, AUTOMATIC) FordLatCtrlCdnTqReq_HwNwtMtr_T_f32;

    VAR(float32, AUTOMATIC) FordSteerTqDstbcRejctnTqReq_HwNwtMtr_T_f32;
    VAR(FordArbnCmd1, AUTOMATIC) FordSteerTqDstbcRejctnArbnCmd_Cnt_T_enum;
    VAR(boolean, AUTOMATIC) FordSteerTqDstbcRejctnFctCallSts_Cnt_T_logl;
    VAR(float32, AUTOMATIC) FordSteerTqDstbcRejctnCdnTqReq_HwNwtMtr_T_f32;

    VAR(float32, AUTOMATIC) FordActvNiblCtrlTqReq_HwNwtMtr_T_f32;
    VAR(FordArbnCmd1, AUTOMATIC) FordActvNiblCtrlArbnCmd_Cnt_T_enum;
    VAR(boolean, AUTOMATIC) FordActvNiblCtrlFctCallSts_Cnt_T_logl;
    VAR(float32, AUTOMATIC) FordActvNiblCtrlCdnTqReq_HwNwtMtr_T_f32;

    VAR(float32, AUTOMATIC) FordLaneDprtrWarnTqReq_HwNwtMtr_T_f32;
    VAR(FordArbnCmd1, AUTOMATIC) FordLaneDprtrWarnArbnCmd_Cnt_T_enum;
    VAR(boolean, AUTOMATIC) FordLaneDprtrWarnFctCallSts_Cnt_T_logl;
    VAR(float32, AUTOMATIC) FordLaneDprtrWarnCdnTqReq_HwNwtMtr_T_f32;

    VAR(float32, AUTOMATIC) FordPullDriftCmpTqReq_HwNwtMtr_T_f32;
    VAR(FordArbnCmd1, AUTOMATIC) FordPullDriftCmpArbnCmd_Cnt_T_enum;
    VAR(boolean, AUTOMATIC) FordPullDriftCmpFctCallSts_Cnt_T_logl;
    VAR(float32, AUTOMATIC) FordPullDriftCmpCdnTqReq_HwNwtMtr_T_f32;
    
    VAR(float32, AUTOMATIC) LatCtrlqShapeLimr_HwNwtMtr_T_f32;
    
    VAR(float32, AUTOMATIC) HwVel_HwDegPerSec_T_f32;
    VAR(boolean, AUTOMATIC) VehSpdVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) LimrVehSpd_Kph_T_f32;
    VAR(float32, AUTOMATIC) LimrSpd_Kph_T_f32;
    VAR(float32, AUTOMATIC) FordMotTqCmdOvrlLo_NwtMtr_T_f32;
    VAR(float32, AUTOMATIC) FordMotTqCmdOvrlHi_NwtMtr_T_f32;

    VAR(float32, AUTOMATIC)SteerReactnLimrLimdTqReq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC)ActvNiblCtrlLimdTqReq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC)LaneDprtrWarnLimdTqReq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC)PDCLimdTqReq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC)FordMotTqCmdOvrl_HwNwtMtr_T_f32 = 0U;
    
    VAR(uint8,AUTOMATIC) EcuId_Cnt_T_u08;
    VAR(Std_ReturnType,AUTOMATIC) ImcFordMotTqCmdOvrlRtnSts_Cnt_T_logl;
    VAR(ImcArbnRxSts1,AUTOMATIC) ImcFordMotTqCmdOvrlSts_Cnt_T_enum;
    VAR(float32,AUTOMATIC) ImcFordMotTqCmdOvrl_Cnt_T_f32 = 0.0F;
    VAR(uint8,AUTOMATIC) ActvNiblCtrlHiFrqMonrFltDiagFlg_Cnt_T_u08 = 0U;
    VAR(uint8,AUTOMATIC) LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08 = 0U;
  
    /* Read the ECU Id */
    (void)Rte_Read_EcuId_Val(&EcuId_Cnt_T_u08);

    /* If ECU2 read the IMC signal value for FordMotTqCmdOvrl and pass as output */
    if (EcuId_Cnt_T_u08 == ECUID2_CNT_U08)
    {
        ImcFordMotTqCmdOvrlRtnSts_Cnt_T_logl = Rte_Call_GetSigImcData_f32_Oper(IMCARBN_FORDMOTTQCMDOVRLLIMRFORDMOTTQCMDOVRL_CNT_U16, &ImcFordMotTqCmdOvrl_Cnt_T_f32, &ImcFordMotTqCmdOvrlSts_Cnt_T_enum);
        FordMotTqCmdOvrl_HwNwtMtr_T_f32 = ImcFordMotTqCmdOvrl_Cnt_T_f32;
    }
    else if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
    {
        (void)Rte_Read_FildHwTq_Val(&FildHwTq_HwNwtMtr_T_f32);
        (void)Rte_Read_FildVehSpd_Val(&FildVehSpd_Kph_T_f32);
        (void)Rte_Read_VehSpdVld_Logl(&VehSpdVld_Cnt_T_logl);
        (void)Rte_Read_FordLatCtrlTqReq_Val(&FordLatCtrlTqReq_HwNwtMtr_T_f32);
        (void)Rte_Read_FordLatCtrlArbnCmd_Val(&FordLatCtrlArbnCmd_Cnt_T_enum);
        (void)Rte_Read_FordLatCtrlFctCallSts_Logl(&FordLatCtrlFctCallSts_Cnt_T_logl);
        (void)Rte_Read_FordSteerTqDstbcRejctnTqReq_Val(&FordSteerTqDstbcRejctnTqReq_HwNwtMtr_T_f32);
        (void)Rte_Read_FordSteerTqDstbcRejctnArbnCmd_Val(&FordSteerTqDstbcRejctnArbnCmd_Cnt_T_enum);
        (void)Rte_Read_FordSteerTqDstbcRejctnFctCallSts_Logl(&FordSteerTqDstbcRejctnFctCallSts_Cnt_T_logl);
        (void)Rte_Read_FordActvNiblCtrlTqReq_Val(&FordActvNiblCtrlTqReq_HwNwtMtr_T_f32);
        (void)Rte_Read_FordActvNiblCtrlArbnCmd_Val(&FordActvNiblCtrlArbnCmd_Cnt_T_enum);
        (void)Rte_Read_FordActvNiblCtrlFctCallSts_Logl(&FordActvNiblCtrlFctCallSts_Cnt_T_logl);
        (void)Rte_Read_FordLaneDprtrWarnTqReq_Val(&FordLaneDprtrWarnTqReq_HwNwtMtr_T_f32);
        (void)Rte_Read_FordLaneDprtrWarnArbnCmd_Val(&FordLaneDprtrWarnArbnCmd_Cnt_T_enum);
        (void)Rte_Read_FordLaneDprtrWarnFctCallSts_Logl(&FordLaneDprtrWarnFctCallSts_Cnt_T_logl);
        (void)Rte_Read_FordPullDriftCmpTqReq_Val(&FordPullDriftCmpTqReq_HwNwtMtr_T_f32);
        (void)Rte_Read_FordPullDriftCmpArbnCmd_Val(&FordPullDriftCmpArbnCmd_Cnt_T_enum);
        (void)Rte_Read_FordPullDriftCmpFctCallSts_Logl(&FordPullDriftCmpFctCallSts_Cnt_T_logl);
        (void)Rte_Read_HwVel_Val(&HwVel_HwDegPerSec_T_f32);

        /*Start of ProcgFildVehSpd*/
        if ((VehSpdVld_Cnt_T_logl == TRUE ) && (*Rte_Pim_LimrDftVehSpd() == FALSE ))
        {
            /* Start of PassThru */
            LimrVehSpd_Kph_T_f32 = FildVehSpd_Kph_T_f32;
            /* End of PassThru */
        }
        else if (VehSpdVld_Cnt_T_logl == FALSE )
        { 
            /* Start of RampLimrVehSpd */
            *Rte_Pim_LimrDftVehSpd() = TRUE;
            
            FordMotTqCmdOvrlLo_NwtMtr_T_f32 = ((-Rte_Prm_FordMotTqCmdOvrlLimrDftSpdRcvrRate_Val() * SAMPLETI_SEC_F32) + *Rte_Pim_PrevDftVehSpd());
            FordMotTqCmdOvrlHi_NwtMtr_T_f32 = ((Rte_Prm_FordMotTqCmdOvrlLimrDftSpdRcvrRate_Val() * SAMPLETI_SEC_F32) + *Rte_Pim_PrevDftVehSpd());
            LimrVehSpd_Kph_T_f32 = Lim_f32(*Rte_Pim_PrevLimrVehSpd(), FordMotTqCmdOvrlLo_NwtMtr_T_f32,FordMotTqCmdOvrlHi_NwtMtr_T_f32);
            /* End of RampLimrVehSpd */
        }
        else /*((VehSpdVld_Cnt_T_logl == TRUE ) && (*Rte_Pim_LimrDftVehSpd() == TRUE )) */
        {
            /* Start of RateLimrVehSpd */
            FordMotTqCmdOvrlLo_NwtMtr_T_f32 = ((-Rte_Prm_FordMotTqCmdOvrlLimrDftSpdRcvrRate_Val() * SAMPLETI_SEC_F32) + *Rte_Pim_PrevDftVehSpd());
            FordMotTqCmdOvrlHi_NwtMtr_T_f32 = ((Rte_Prm_FordMotTqCmdOvrlLimrDftSpdRcvrRate_Val() * SAMPLETI_SEC_F32) + *Rte_Pim_PrevDftVehSpd());
            LimrSpd_Kph_T_f32 = Lim_f32(FildVehSpd_Kph_T_f32, FordMotTqCmdOvrlLo_NwtMtr_T_f32,FordMotTqCmdOvrlHi_NwtMtr_T_f32);
            
            if( Abslt_f32_f32(LimrSpd_Kph_T_f32 - FildVehSpd_Kph_T_f32) < SPDDIFTHD_KPH_F32)
            {
                /* Start of PassFildVehSpd */
                LimrVehSpd_Kph_T_f32 = FildVehSpd_Kph_T_f32;
                *Rte_Pim_LimrDftVehSpd() = FALSE;
                /* End of PassFildVehSpd */
            }
            else
            {
                /* Start of PassLimrSpd */
                LimrVehSpd_Kph_T_f32 = LimrSpd_Kph_T_f32;
                *Rte_Pim_LimrDftVehSpd() = TRUE;
                /* End of PassLimrSpd */
            }
            /* End of RateLimrVehSpd */
        }
        
        *Rte_Pim_PrevLimrVehSpd() = LimrVehSpd_Kph_T_f32;
        /*End of ProcgFildVehSpd*/
        
        /* Start of Input Conditioning */
        /* Start of FordLatCtrlTqReqProcg */
        FordLatCtrlCdnTqReq_HwNwtMtr_T_f32 = InpCdng (FordLatCtrlTqReq_HwNwtMtr_T_f32, FordLatCtrlArbnCmd_Cnt_T_enum, FordLatCtrlFctCallSts_Cnt_T_logl);
        /* End of FordLatCtrlTqReqProcg*/
        /* Start of FordSteerTqDstbcRejctnTqReqProcg */
        FordSteerTqDstbcRejctnCdnTqReq_HwNwtMtr_T_f32 = InpCdng (FordSteerTqDstbcRejctnTqReq_HwNwtMtr_T_f32, FordSteerTqDstbcRejctnArbnCmd_Cnt_T_enum, FordSteerTqDstbcRejctnFctCallSts_Cnt_T_logl);
        /* End of FordSteerTqDstbcRejctnTqReqProcg*/
        /* Start of FordActvNiblCtrlTqReqProcg */
        FordActvNiblCtrlCdnTqReq_HwNwtMtr_T_f32 = InpCdng (FordActvNiblCtrlTqReq_HwNwtMtr_T_f32, FordActvNiblCtrlArbnCmd_Cnt_T_enum, FordActvNiblCtrlFctCallSts_Cnt_T_logl);
        /* End of FordActvNiblCtrlTqReqProcg*/
        /* Start of FordLaneDprtrWarnTqReqProcg */
        FordLaneDprtrWarnCdnTqReq_HwNwtMtr_T_f32 = InpCdng (FordLaneDprtrWarnTqReq_HwNwtMtr_T_f32, FordLaneDprtrWarnArbnCmd_Cnt_T_enum, FordLaneDprtrWarnFctCallSts_Cnt_T_logl);
        /* End of FordLaneDprtrWarnTqReqProcg*/
        /* Start of FordPullDriftCmpTqReqProcg */
        FordPullDriftCmpCdnTqReq_HwNwtMtr_T_f32 = InpCdng (FordPullDriftCmpTqReq_HwNwtMtr_T_f32, FordPullDriftCmpArbnCmd_Cnt_T_enum, FordPullDriftCmpFctCallSts_Cnt_T_logl);
        /* End of FordPullDriftCmpTqReqProcg*/
        
        LatCtrlqShapeLimr_HwNwtMtr_T_f32  = LatCtrlqShapeLimr(FordLatCtrlCdnTqReq_HwNwtMtr_T_f32,LimrVehSpd_Kph_T_f32 );
        
        SteerReactnLimrLimdTqReq_HwNwtMtr_T_f32 = CombdSteerReactnLimr(LimrVehSpd_Kph_T_f32,FildHwTq_HwNwtMtr_T_f32,HwVel_HwDegPerSec_T_f32,
                                        LatCtrlqShapeLimr_HwNwtMtr_T_f32, FordSteerTqDstbcRejctnCdnTqReq_HwNwtMtr_T_f32);
        ActvNiblCtrlLimdTqReq_HwNwtMtr_T_f32 = ActvNiblCtrlHiFrqMonr(FordActvNiblCtrlCdnTqReq_HwNwtMtr_T_f32,&ActvNiblCtrlHiFrqMonrFltDiagFlg_Cnt_T_u08);
        LaneDprtrWarnLimdTqReq_HwNwtMtr_T_f32 = LaneDprtrWarnHiFrqMonr(FordLaneDprtrWarnCdnTqReq_HwNwtMtr_T_f32,&LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08);
        PDCLimdTqReq_HwNwtMtr_T_f32 = LoFrqLimr(FordPullDriftCmpCdnTqReq_HwNwtMtr_T_f32,LimrVehSpd_Kph_T_f32);
        
        FordMotTqCmdOvrl_HwNwtMtr_T_f32 = SteerReactnLimrLimdTqReq_HwNwtMtr_T_f32 + ActvNiblCtrlLimdTqReq_HwNwtMtr_T_f32 + LaneDprtrWarnLimdTqReq_HwNwtMtr_T_f32
                                            + PDCLimdTqReq_HwNwtMtr_T_f32;
        NtcHndlr(ActvNiblCtrlHiFrqMonrFltDiagFlg_Cnt_T_u08,LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08);
    }
    else
    {
        /* Do Nothing - Invalid ECU ID*/
    }
    (void)Rte_Write_FordMotTqCmdOvrl_Val(Lim_f32(FordMotTqCmdOvrl_HwNwtMtr_T_f32,FORDMOTTQCMDOVRLMINVAL_MOTNWTMTR_F32,FORDMOTTQCMDOVRLMAXVAL_MOTNWTMTR_F32));
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordMotTqCmdOvrlLimr_STOP_SEC_CODE
#include "FordMotTqCmdOvrlLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
#define FordMotTqCmdOvrlLimr_START_SEC_CODE
#include "FordMotTqCmdOvrlLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/************************************************************************************************************************
 * Name         : InpCdng
 * Description  : Conditioning of the input signal.
 *                Equivalent logic as required in InpCdng in the FDD.
 * Inputs       : TqReq_HwNwtMtr_T_f32,ArbnCmd_Cnt_T_enum,FctCallSts_Cnt_T_logl
 * Outputs      : CdnTqReq_HwNwtMtr_T_f32
 * Usage Notes  : None
 ************************************************************************************************************************/
 
static FUNC(float32, FordMotTqCmdOvrlLimr_CODE) InpCdng(float32 TqReq_HwNwtMtr_T_f32,FordArbnCmd1 ArbnCmd_Cnt_T_enum,boolean FctCallSts_Cnt_T_logl )
{
    VAR (float32, AUTOMATIC) CdnTqReq_HwNwtMtr_T_f32;
    
    if((ArbnCmd_Cnt_T_enum == Cx5_LOCKED) || (FctCallSts_Cnt_T_logl == TRUE))
    {
        /* Start of SetToZero */
        CdnTqReq_HwNwtMtr_T_f32 = 0.0F;
        /* End of SetToZero */
    }
    else
    {
        /* Start of PassThru */
        CdnTqReq_HwNwtMtr_T_f32 = TqReq_HwNwtMtr_T_f32;
        /* Start of PassThru */
    }

    return (CdnTqReq_HwNwtMtr_T_f32);
}


/************************************************************************************************************************
 * Name         : LatCtrlqShapeLimr
 * Description : Calculates the Lateral Control Shape Limiter. 
 *               Equivalent logic as required in LatCtrlqShapeLimr in the FDD.
 * Inputs      : TqReq_HwNwtMtr_T_f32, LimrVehSpd_Kph_T_f32
 * Outputs     : FordLatCtrlCdnTqReqShapeLim_HwNwtMtr_T_f32
 * Usage Notes  : None
 ************************************************************************************************************************/
static FUNC(float32, FordMotTqCmdOvrlLimr_CODE) LatCtrlqShapeLimr(float32 TqReq_HwNwtMtr_T_f32,float32 LimrVehSpd_Kph_T_f32 )
{
    VAR (float32, AUTOMATIC) TqSatn_HwNwtMtr_T_f32;
    VAR (u9p7, AUTOMATIC) LimrVehSpd_Kph_T_u9p7;
    VAR (sint16, AUTOMATIC) MaxRate_HwNwtMtrPerSec_T_s16;
    VAR (float32, AUTOMATIC) MaxRate_HwNwtMtrPerSec_T_f32;
    VAR (s5p10, AUTOMATIC) Bw_HwNwtMtr_T_f32;
    VAR (float32, AUTOMATIC) FordLatCtrlCdnTqReqTqLim_HwNwtMtr_T_f32;
    VAR (float32, AUTOMATIC) FordLatCtrlCdnTqReqRateLim_HwNwtMtr_T_f32;
    VAR (float32, AUTOMATIC) FordLatCtrlCdnTqReqShapeLim_HwNwtMtr_T_f32;

    LimrVehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(LimrVehSpd_Kph_T_f32,NXTRFIXDPT_FLOATTOP7_ULS_F32);
    TqSatn_HwNwtMtr_T_f32 = FixdToFloat_f32_s16(LnrIntrpn_s16_u16VariXs16VariY(PrmFordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX_u9p7,
                            PrmFordMotTqCmdOvrlLimrLatCtrlTqSatnY_s16,
                            (uint16)TblSize_m(PrmFordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX_u9p7),
                            LimrVehSpd_Kph_T_u9p7),
                            NXTRFIXDPT_P0TOFLOAT_ULS_F32);
    MaxRate_HwNwtMtrPerSec_T_s16 = LnrIntrpn_s16_u16VariXs16VariY(PrmFordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX_u9p7,
                            PrmFordMotTqCmdOvrlLimrLatCtrlTqRateY_s16,
                            (uint16)TblSize_m(PrmFordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX_u9p7),
                            LimrVehSpd_Kph_T_u9p7);
    MaxRate_HwNwtMtrPerSec_T_f32 = FixdToFloat_f32_s16(MaxRate_HwNwtMtrPerSec_T_s16,NXTRFIXDPT_P0TOFLOAT_ULS_F32);
    
    Bw_HwNwtMtr_T_f32 = FixdToFloat_f32_s16(LnrIntrpn_s16_u16VariXs16VariY(PrmFordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX_u9p7,
                            PrmFordMotTqCmdOvrlLimrLatCtrlBwY_s5p10,
                            (uint16)TblSize_m(PrmFordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX_u9p7),
                            LimrVehSpd_Kph_T_u9p7),
                            NXTRFIXDPT_P10TOFLOAT_ULS_F32);
                            
    FordLatCtrlCdnTqReqTqLim_HwNwtMtr_T_f32 = Lim_f32(TqReq_HwNwtMtr_T_f32, -TqSatn_HwNwtMtr_T_f32, TqSatn_HwNwtMtr_T_f32);
    
    FordLatCtrlCdnTqReqRateLim_HwNwtMtr_T_f32 = Lim_f32(FordLatCtrlCdnTqReqTqLim_HwNwtMtr_T_f32, (-MaxRate_HwNwtMtrPerSec_T_f32*ARCHGLBPRM_4MILLISEC_SEC_F32 + *Rte_Pim_PrevLimdTqReq())
                                , (MaxRate_HwNwtMtrPerSec_T_f32*ARCHGLBPRM_4MILLISEC_SEC_F32 + *Rte_Pim_PrevLimdTqReq()));
    *Rte_Pim_PrevLimdTqReq() = FordLatCtrlCdnTqReqRateLim_HwNwtMtr_T_f32;
    
    FordLatCtrlCdnTqReqShapeLim_HwNwtMtr_T_f32 = Lim_f32(TqReq_HwNwtMtr_T_f32,FordLatCtrlCdnTqReqRateLim_HwNwtMtr_T_f32 - Bw_HwNwtMtr_T_f32,
                                                FordLatCtrlCdnTqReqRateLim_HwNwtMtr_T_f32 + Bw_HwNwtMtr_T_f32);
    return (FordLatCtrlCdnTqReqShapeLim_HwNwtMtr_T_f32);
}

/************************************************************************************************************************
 * Name         : CombdSteerReactnLimr
 * Description  : Calculates the Combined Steering Reaction Limit.
 *                Equivalent logic as required in CombdSteerReactnLimr in the FDD.
 * Inputs       : LimrVehSpd_Kph_T_f32,FildHwTq_HwNwtMtr_f32,HwVel_HwDegPerSec_f32
                  FordLatCtrlCdnTqReqShapeLim_HwNwtMtr_T_s5p10,FordSteerTqDstbcRejctnCdnTqReq_HwNwtMtr_T_s5p10
 *                LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08
 * Outputs      : SteerReactnLimrLimdTqReq_HwNwtMtr_T_f32
 * Usage Notes  : None
 ************************************************************************************************************************/
static FUNC(float32, FordMotTqCmdOvrlLimr_CODE) CombdSteerReactnLimr(float32 LimrVehSpd_Kph_T_f32, float32 FildHwTq_HwNwtMtr_f32 ,float32 HwVel_HwDegPerSec_f32,
                                                        float32 FordLatCtrlCdnTqReqShapeLim_HwNwtMtr_T_f32,float32 FordSteerTqDstbcRejctnCdnTqReq_HwNwtMtr_T_f32)
{
    VAR (sint16, AUTOMATIC) FildHwTq_HwNwtMtr_T_s16;
    VAR (uint16, AUTOMATIC) LimrVehSpd_Kph_T_u16;
    VAR (float32, AUTOMATIC) HwVelMax_HwDegPerSec_T_f32;
    VAR (float32, AUTOMATIC) HwVelMin_HwDegPerSec_T_f32;
    VAR (float32, AUTOMATIC) MaxTotLimHys_HwDegPerSec_T_f32;
    VAR (float32, AUTOMATIC) MinTotLimHys_HwDegPerSec_T_f32;
    VAR (float32, AUTOMATIC) HwVelFild_HwDegPerSec_T_f32;
    VAR (float32, AUTOMATIC) HwVelErr_HwDegPerSec_T_f32;
    VAR (float32, AUTOMATIC) UpprRateLim_Kph_T_f32;
    VAR (float32, AUTOMATIC) OvrrunRampRate_Kph_T_f32;
    VAR (float32, AUTOMATIC) RcvryRampRate_Kph_T_f32;
    VAR (float32, AUTOMATIC) AmpLim_Kph_T_f32;
    VAR (float32, AUTOMATIC) SteerReactnLimrLimdTqReq_HwNwtMtr_T_f32;
    VAR (float32, AUTOMATIC) PinionTqRq_HwNwtMtr_T_f32;

    FildHwTq_HwNwtMtr_T_s16 = FloatToFixd_s16_f32(FildHwTq_HwNwtMtr_f32,NXTRFIXDPT_FLOATTOP0_ULS_F32);
   
    LimrVehSpd_Kph_T_u16 = FloatToFixd_u16_f32(LimrVehSpd_Kph_T_f32,NXTRFIXDPT_FLOATTOP0_ULS_F32);
    HwVelMax_HwDegPerSec_T_f32 = FixdToFloat_f32_s16(BilnrIntrpnWithRound_s16_s16MplXs16MplY(LimrVehSpd_Kph_T_u16,FildHwTq_HwNwtMtr_T_s16,
                                    PrmFordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd_u16p0,
                                    (uint16)TblSize_m(PrmFordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd_u16p0),
                                    Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX_Ary2D(),
                                    Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY_Ary2D(),
                                    TblSize_m(PrmFordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX_s16p0[0])),
                                    NXTRFIXDPT_P0TOFLOAT_ULS_F32);
    HwVelMin_HwDegPerSec_T_f32 = -HwVelMax_HwDegPerSec_T_f32;
    
    MaxTotLimHys_HwDegPerSec_T_f32 = HwVelMax_HwDegPerSec_T_f32  - (Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys_Val() * (HwVelMax_HwDegPerSec_T_f32 - HwVelMin_HwDegPerSec_T_f32));
    MinTotLimHys_HwDegPerSec_T_f32 = HwVelMin_HwDegPerSec_T_f32  - (Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys_Val() * (HwVelMax_HwDegPerSec_T_f32 - HwVelMin_HwDegPerSec_T_f32));

    HwVelFild_HwDegPerSec_T_f32 = FilLpUpdOutp_f32(HwVel_HwDegPerSec_f32,Rte_Pim_HwVelFil());
    
    UpprRateLim_Kph_T_f32 = FixdToFloat_f32_u16(LnrIntrpn_u16_u16VariXu16VariY(PrmFordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX_u16p0,
                            PrmFordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY_u16p0,
                            (uint16)TblSize_m(PrmFordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX_u16p0),
                            LimrVehSpd_Kph_T_u16),
                            NXTRFIXDPT_P0TOFLOAT_ULS_F32);
    if(Max_f32((HwVelFild_HwDegPerSec_T_f32 - HwVelMax_HwDegPerSec_T_f32), (HwVelMin_HwDegPerSec_T_f32 - HwVelFild_HwDegPerSec_T_f32)) < MAXERRDIFF_CNT_F32)
    {
        HwVelErr_HwDegPerSec_T_f32 = 0.0F;
    }
    else
    {
        HwVelErr_HwDegPerSec_T_f32 = ((HwVelFild_HwDegPerSec_T_f32 - HwVelMax_HwDegPerSec_T_f32) - (HwVelMin_HwDegPerSec_T_f32 - HwVelFild_HwDegPerSec_T_f32));
    }
    
    if(*Rte_Pim_PrevAmpLim() <= (UpprRateLim_Kph_T_f32 * Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun_Val()))
    {
        OvrrunRampRate_Kph_T_f32 = Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate_Val();
    }
    else
    {
        OvrrunRampRate_Kph_T_f32 = FixdToFloat_f32_u16(LnrIntrpn_u16_u16VariXu16VariY(PrmFordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX_u16p0,
                            PrmFordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY_u16p0,
                            (uint16)TblSize_m(PrmFordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX_u16p0),
                            FloatToFixd_u16_f32(HwVelErr_HwDegPerSec_T_f32,NXTRFIXDPT_FLOATTOP0_ULS_F32)),
                            NXTRFIXDPT_P0TOFLOAT_ULS_F32);
    }
    
    OvrrunRampRate_Kph_T_f32 = Abslt_f32_f32(OvrrunRampRate_Kph_T_f32 * SAMPLETI_SEC_F32) * (-1.0F);

    if(*Rte_Pim_PrevAmpLim() <= (UpprRateLim_Kph_T_f32 * Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry_Val()))
    {
        RcvryRampRate_Kph_T_f32 = Abslt_f32_f32(Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2_Val() * SAMPLETI_SEC_F32);
    }
    else
    {
        RcvryRampRate_Kph_T_f32 = Abslt_f32_f32(Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1_Val() * SAMPLETI_SEC_F32);
    }
    
    if((HwVelFild_HwDegPerSec_T_f32 > HwVelMax_HwDegPerSec_T_f32) || (HwVelFild_HwDegPerSec_T_f32 < HwVelMin_HwDegPerSec_T_f32))
    {
        /* Over run TRUE */
        AmpLim_Kph_T_f32 = *Rte_Pim_PrevAmpLim() - OvrrunRampRate_Kph_T_f32;
    }
    else if((HwVelFild_HwDegPerSec_T_f32 < MaxTotLimHys_HwDegPerSec_T_f32) || (HwVelFild_HwDegPerSec_T_f32 > MinTotLimHys_HwDegPerSec_T_f32))
    {
        /* Recovery TRUE */
        AmpLim_Kph_T_f32 = *Rte_Pim_PrevAmpLim() - RcvryRampRate_Kph_T_f32;
    }
    else
    {
        /* Over run and Recovery FALSE */        
        AmpLim_Kph_T_f32 = *Rte_Pim_PrevAmpLim() + Rte_Prm_FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate_Val();
    }
    
    *Rte_Pim_PrevAmpLim() = Lim_f32(AmpLim_Kph_T_f32, 0.0F, UpprRateLim_Kph_T_f32);
    
    PinionTqRq_HwNwtMtr_T_f32 = FordLatCtrlCdnTqReqShapeLim_HwNwtMtr_T_f32 + FordSteerTqDstbcRejctnCdnTqReq_HwNwtMtr_T_f32;

    SteerReactnLimrLimdTqReq_HwNwtMtr_T_f32 = Lim_f32(PinionTqRq_HwNwtMtr_T_f32,-AmpLim_Kph_T_f32,AmpLim_Kph_T_f32);
        
    return (SteerReactnLimrLimdTqReq_HwNwtMtr_T_f32);
}

/************************************************************************************************************************
 * Name         : ActvNiblCtrlHiFrqMonr
 * Description  : Outputs the ActvNiblCtrlLimdTqReq value as per the FDD block ActvNiblCtrlHiFrqMonr.
 * Inputs       : FordActvNiblCtrlCdnTqReq_HwNwtMtr_T_f32
 * Outputs      : ActvNiblCtrlLimdTqReq_HwNwtMtr_T_f32,ActvNiblCtrlHiFrqMonrFltDiagFlg_Cnt_T_u08
 * Usage Notes  : None
 ************************************************************************************************************************/

static FUNC(float32, FordMotTqCmdOvrlLimr_CODE) ActvNiblCtrlHiFrqMonr(float32 FordActvNiblCtrlCdnTqReq_HwNwtMtr_T_f32,uint8* ActvNiblCtrlHiFrqMonrFltDiagFlg_Cnt_T_u08 )
{
    VAR (float32, AUTOMATIC) TqReq_HwNwtMtr_T_f32;
    VAR (float32, AUTOMATIC) ActvNiblCtrlLimdTqReq_HwNwtMtr_T_f32;

    VAR (boolean, AUTOMATIC) ActvNiblCtrlDcTrendFlt_Cnt_T_logl;
    VAR (boolean, AUTOMATIC) ActvNiblCtrlMaxTqFlt_Cnt_T_logl;
    VAR (boolean, AUTOMATIC) ActvNiblCtrlLoFrqTmr_Cnt_T_logl;
    VAR (float32, AUTOMATIC) TmrThd_MilliSec_T_f32;

    /*Start of DcTrend*/

    *Rte_Pim_PrevTqTrend() = ((Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha_Val() * (( FordActvNiblCtrlCdnTqReq_HwNwtMtr_T_f32 - *Rte_Pim_PrevTqTrend())))  +  *Rte_Pim_PrevTqTrend());

    if ((( Abslt_f32_f32 (*Rte_Pim_PrevTqTrend() ) > Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd_Val())) && 
       ( Abslt_f32_f32 (FordActvNiblCtrlCdnTqReq_HwNwtMtr_T_f32) < Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd_Val()))
    {
        ActvNiblCtrlDcTrendFlt_Cnt_T_logl = TRUE;
    }
    else
    {
        ActvNiblCtrlDcTrendFlt_Cnt_T_logl = FALSE;
    }
    /*End of DcTrend*/

    /*Start of MaxTqReq*/

    if (( Abslt_f32_f32 (FordActvNiblCtrlCdnTqReq_HwNwtMtr_T_f32) > Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq_Val()))
    {
        ActvNiblCtrlMaxTqFlt_Cnt_T_logl = TRUE;
        TqReq_HwNwtMtr_T_f32 = 0.0F;
    }
    else
    {
        ActvNiblCtrlMaxTqFlt_Cnt_T_logl = FALSE;
        TqReq_HwNwtMtr_T_f32 = FordActvNiblCtrlCdnTqReq_HwNwtMtr_T_f32;
    }
    /*End of MaxTqReq*/

    /*Start of FrqChkr*/

    TmrThd_MilliSec_T_f32 = (Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd_Val() * ( MPLRFAC_ULS_F32 / SAMPLETI_SEC_F32));
             
    if(( Abslt_f32_f32 (TqReq_HwNwtMtr_T_f32) <= Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq_Val()) && ( *Rte_Pim_ActvNiblCtrlLoFrqTmrFlgVari() == FALSE))
    {
        ActvNiblCtrlLoFrqTmr_Cnt_T_logl = FALSE;
        if(*Rte_Pim_ActvNiblCtrlLoFrqSt() != ZEROBANDST_CNT_U08)
        {
            *Rte_Pim_ActvNiblCtrlLoFrqSt()   = ZEROBANDST_CNT_U08;            
            *Rte_Pim_ActvNiblCtrlLoFrqTmrVari()  = RSTTMR_CNT_U32;
            *Rte_Pim_ActvNiblCtrlLoFrqFlt()  = 0U;
        }
    }
    else if (( Abslt_f32_f32 (TqReq_HwNwtMtr_T_f32) < (-Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq_Val ())) && (*Rte_Pim_ActvNiblCtrlLoFrqTmrFlgVari() == FALSE))
    {
        ActvNiblCtrlLoFrqTmr_Cnt_T_logl = TRUE;
        if(*Rte_Pim_ActvNiblCtrlLoFrqSt() != NEGBANDST_CNT_U08)
        {
            *Rte_Pim_ActvNiblCtrlLoFrqSt() = NEGBANDST_CNT_U08;
        }
    }
    else if (( Abslt_f32_f32 (TqReq_HwNwtMtr_T_f32) > (Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq_Val())) && (*Rte_Pim_ActvNiblCtrlLoFrqTmrFlgVari() == FALSE))
    {
        ActvNiblCtrlLoFrqTmr_Cnt_T_logl = TRUE;
        if(*Rte_Pim_ActvNiblCtrlLoFrqSt() != POSBANDST_CNT_U08)
        {
            *Rte_Pim_ActvNiblCtrlLoFrqSt() = POSBANDST_CNT_U08;
        }
    }
    else 
    {
        ActvNiblCtrlLoFrqTmr_Cnt_T_logl = FALSE;
        if(*Rte_Pim_LaneDprtrWarnLoFrqSt() != FAILRBANDST_CNT_U08)
        {
            *Rte_Pim_ActvNiblCtrlLoFrqSt() = FAILRBANDST_CNT_U08;
            *Rte_Pim_ActvNiblCtrlLoFrqSt() = RSTTMR_CNT_U32;
            *Rte_Pim_ActvNiblCtrlLoFrqFlt() = 1U;
        }
    }
    /*IntlFctCdnBasdTmr*/

    Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_ActvNiblCtrlLoFrqTmrVari(), Rte_Pim_ActvNiblCtrlLoFrqElpdTiVari());

    if ((ActvNiblCtrlLoFrqTmr_Cnt_T_logl == TRUE ) && (*Rte_Pim_ActvNiblCtrlLoFrqSt() != FAILRBANDST_CNT_U08))
    {
        
        if ((float32)(*Rte_Pim_ActvNiblCtrlLoFrqElpdTiVari() * CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32) >= TmrThd_MilliSec_T_f32)
        {
            *Rte_Pim_ActvNiblCtrlLoFrqTmrFlgVari() = TRUE;;
        }
        else
        {
            *Rte_Pim_ActvNiblCtrlLoFrqTmrFlgVari() = FALSE;
        }
        
    }
    else /*if (*Rte_Pim_ActvNiblCtrlLoFrqSt() != FAILRBANDST_CNT_U08) */
    {
        Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_ActvNiblCtrlLoFrqElpdTiVari());
        *Rte_Pim_ActvNiblCtrlLoFrqTmrFlgVari() = FALSE;
    }

    /*End of FrqChkr*/


    /* Start of DiagcFlg*/
    if ( ActvNiblCtrlDcTrendFlt_Cnt_T_logl == TRUE)
    {
        *ActvNiblCtrlHiFrqMonrFltDiagFlg_Cnt_T_u08 = DCTRENDFLT_CNT_U08;
        ActvNiblCtrlLimdTqReq_HwNwtMtr_T_f32 = 0.0F;
    }
    else if (ActvNiblCtrlMaxTqFlt_Cnt_T_logl == TRUE)
    {
        *ActvNiblCtrlHiFrqMonrFltDiagFlg_Cnt_T_u08 = MAXAMPFLT_CNT_U08;
        ActvNiblCtrlLimdTqReq_HwNwtMtr_T_f32 = 0.0F;
    }
    else if (*Rte_Pim_ActvNiblCtrlLoFrqFlt() == (uint8)TRUE)
    {
        *ActvNiblCtrlHiFrqMonrFltDiagFlg_Cnt_T_u08 = LOFRQFLT_CNT_U08;
        ActvNiblCtrlLimdTqReq_HwNwtMtr_T_f32 = 0.0F;
    }
    else
    {
        *ActvNiblCtrlHiFrqMonrFltDiagFlg_Cnt_T_u08 = NOFLT_CNT_U08;
        ActvNiblCtrlLimdTqReq_HwNwtMtr_T_f32 = FordActvNiblCtrlCdnTqReq_HwNwtMtr_T_f32;
    }
    /* End of DiagcFlg*/
   return ActvNiblCtrlLimdTqReq_HwNwtMtr_T_f32;
}

/************************************************************************************************************************
 * Name         : LaneDprtrWarnHiFrqMonr
 * Description  : Outputs the LaneDprtrWarnLimdTqReq value as per the FDD block ActvNiblCtrlHiFrqMonr.
 * Inputs       : FordLaneDprtrWarnCdnTqReq_HwNwtMtr_T_s5p10
 * Outputs      : LaneDprtrWarnLimdTqReq_HwNwtMtr_T_f32,LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08
 * Usage Notes  : None
 ************************************************************************************************************************/
static FUNC(float32, FordMotTqCmdOvrlLimr_CODE) LaneDprtrWarnHiFrqMonr(float32 FordLaneDprtrWarnCdnTqReq_HwNwtMtr_T_f32,uint8* LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08 )
{
    VAR (float32, AUTOMATIC) LaneDprtrWarnLimdTqReq_HwNwtMtr_T_f32;
    VAR (float32, AUTOMATIC) TqReq_HwNwtMtr_T_f32;
    VAR (boolean, AUTOMATIC) LaneDprtrWarnDcTrendFlt_Cnt_T_logl;
    VAR (boolean, AUTOMATIC) LaneDprtrWarnMaxTqFlt_Cnt_T_logl;
    VAR (boolean, AUTOMATIC) LaneDprtrWarnLoFreqTmr_Cnt_T_logl;
    VAR	(float32, AUTOMATIC) TmrThd_MilliSec_T_f32;

    /*Start of DcTrend*/
    *Rte_Pim_PrevTqTrend() = ((Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha_Val() * ( FordLaneDprtrWarnCdnTqReq_HwNwtMtr_T_f32 - *Rte_Pim_PrevTqTrend())) + *Rte_Pim_PrevTqTrend());

    if (( Abslt_f32_f32(*Rte_Pim_PrevTqTrend()) > Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd_Val()) && 
       ( Abslt_f32_f32 (FordLaneDprtrWarnCdnTqReq_HwNwtMtr_T_f32) < Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd_Val()))
    {
        LaneDprtrWarnDcTrendFlt_Cnt_T_logl = TRUE;
    }
    else
    {
        LaneDprtrWarnDcTrendFlt_Cnt_T_logl = FALSE;
    }
    /*End of DcTrend*/

    /*Start of MaxTqReq*/

    if ( Abslt_f32_f32 (FordLaneDprtrWarnCdnTqReq_HwNwtMtr_T_f32) > Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq_Val())
    {
        LaneDprtrWarnMaxTqFlt_Cnt_T_logl = TRUE;
        TqReq_HwNwtMtr_T_f32 = 0U;
    }
    else
    {
        LaneDprtrWarnMaxTqFlt_Cnt_T_logl = FALSE;
        TqReq_HwNwtMtr_T_f32 = FordLaneDprtrWarnCdnTqReq_HwNwtMtr_T_f32;
    }
    /*End of MaxTqReq*/

    /*Start of FrqChkr*/

    TmrThd_MilliSec_T_f32 = (Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd_Val() * ( MPLRFAC_ULS_F32 / SAMPLETI_SEC_F32));
     
    if(( Abslt_f32_f32 (TqReq_HwNwtMtr_T_f32) <= Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq_Val()) && ( *Rte_Pim_LaneDprtrWarnLoFrqTmrFlgVari() == FALSE))
    {
        LaneDprtrWarnLoFreqTmr_Cnt_T_logl = FALSE;
        if(*Rte_Pim_LaneDprtrWarnLoFrqSt() != ZEROBANDST_CNT_U08)
        {
            *Rte_Pim_LaneDprtrWarnLoFrqSt() = ZEROBANDST_CNT_U08;
            *Rte_Pim_LaneDprtrWarnLoFrqTmrVari() = RSTTMR_CNT_U32;
            *Rte_Pim_LaneDprtrWarnLoFrqFlt() = 0U;
        }
    }
    else if (( Abslt_f32_f32 (TqReq_HwNwtMtr_T_f32) < (-Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq_Val ())) && (*Rte_Pim_LaneDprtrWarnLoFrqTmrFlgVari() == FALSE))
    {
        LaneDprtrWarnLoFreqTmr_Cnt_T_logl = TRUE;
        if(*Rte_Pim_LaneDprtrWarnLoFrqSt() != NEGBANDST_CNT_U08)
        {
            *Rte_Pim_LaneDprtrWarnLoFrqSt() = NEGBANDST_CNT_U08;
        }
    }
    else if (( Abslt_f32_f32 (TqReq_HwNwtMtr_T_f32) > (Rte_Prm_FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq_Val())) && (*Rte_Pim_LaneDprtrWarnLoFrqTmrFlgVari() == FALSE))                        
    {
        LaneDprtrWarnLoFreqTmr_Cnt_T_logl = TRUE;
        if(*Rte_Pim_LaneDprtrWarnLoFrqSt() != POSBANDST_CNT_U08)
        {
            *Rte_Pim_LaneDprtrWarnLoFrqSt() = POSBANDST_CNT_U08;
        }
    }
    else /* if (*Rte_Pim_ActvNiblCtrlLoFrqTmrFlgVari() == TRUE) */
    {
        LaneDprtrWarnLoFreqTmr_Cnt_T_logl = FALSE;
        if(*Rte_Pim_LaneDprtrWarnLoFrqSt() != FAILRBANDST_CNT_U08)
        {
            *Rte_Pim_LaneDprtrWarnLoFrqSt() = FAILRBANDST_CNT_U08;
            *Rte_Pim_LaneDprtrWarnLoFrqTmrVari() = RSTTMR_CNT_U32;
            *Rte_Pim_LaneDprtrWarnLoFrqFlt() = 1U;
        }
    }
    /*IntlFctCdnBasdTmr*/

    Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LaneDprtrWarnLoFrqTmrVari(), Rte_Pim_LaneDprtrWarnLoFrqElpdTiVari());

    if ((LaneDprtrWarnLoFreqTmr_Cnt_T_logl == TRUE ) && (*Rte_Pim_LaneDprtrWarnLoFrqSt() != FAILRBANDST_CNT_U08))
    {
        /* conversion missed*/
        if ((float32)(*Rte_Pim_LaneDprtrWarnLoFrqElpdTiVari() * CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32) >= TmrThd_MilliSec_T_f32)
        {
            *Rte_Pim_LaneDprtrWarnLoFrqTmrFlgVari() = TRUE;
        }
        else
        {
            *Rte_Pim_LaneDprtrWarnLoFrqTmrFlgVari() = FALSE;
        }
        
    }
    else
    {
        Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LaneDprtrWarnLoFrqTmrVari());
        *Rte_Pim_LaneDprtrWarnLoFrqTmrFlgVari() = FALSE;
    }

    if(LaneDprtrWarnDcTrendFlt_Cnt_T_logl == TRUE)
    {
        *LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08 = DCTRENDFLT_CNT_U08;
        LaneDprtrWarnLimdTqReq_HwNwtMtr_T_f32 = 0.0F;
    }
    else if(LaneDprtrWarnMaxTqFlt_Cnt_T_logl == TRUE)
    {
        *LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08 = MAXAMPFLT_CNT_U08;
        LaneDprtrWarnLimdTqReq_HwNwtMtr_T_f32 = 0.0F;
    }
    else if(*Rte_Pim_LaneDprtrWarnLoFrqTmrFlgVari() == TRUE)
    {
        *LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08 = LOFRQFLT_CNT_U08;
        LaneDprtrWarnLimdTqReq_HwNwtMtr_T_f32 = 0.0F;
    }
    else
    {
        *LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08 = NOFLT_CNT_U08;
        LaneDprtrWarnLimdTqReq_HwNwtMtr_T_f32 = FordLaneDprtrWarnCdnTqReq_HwNwtMtr_T_f32;
    }
    /*End of FrqChkr*/
    
   return LaneDprtrWarnLimdTqReq_HwNwtMtr_T_f32;
}

/************************************************************************************************************************
 * Name         : LoFrqLimr
 * Description  : Outputs the PDCLimdTqReq value as per the FDD block LoFrqLimr.
 * Inputs       : FordPullDriftCmpCdnTqReq_HwNwtMtr_T_s5p10
 *                LimrVehSpd_Kph_T_f32
 * Outputs      : PDCLimdTqReq_HwNwtMtr_T_f32
 * Usage Notes  : None
 ************************************************************************************************************************/
static FUNC(float32, FordMotTqCmdOvrlLimr_CODE) LoFrqLimr (VAR(float32, AUTOMATIC) FordPullDriftCmpCdnTqReq_HwNwtMtr_T_f32,
                                                           VAR(float32, AUTOMATIC) LimrVehSpd_Kph_T_f32 )
{
    VAR (sint16, AUTOMATIC) TqSatn_HwNwtMtr_T_s16;
    VAR (float32, AUTOMATIC) TqSatn_HwNwtMtr_T_f32;
    VAR (uint16, AUTOMATIC) LimrVehSpd_Kph_T_u16;
    VAR (sint16, AUTOMATIC) MaxRate_HwNwtMtrPerSec_T_s16;
    VAR (float32, AUTOMATIC) MaxRate_HwNwtMtrPerSec_T_f32;
    VAR (float32, AUTOMATIC) FordPullDriftCmpCdnTqReqLim_HwNwtMtr_T_f32;
    VAR (float32, AUTOMATIC) PDCLimdTqReq_HwNwtMtr_T_f32;
    
    LimrVehSpd_Kph_T_u16 = FloatToFixd_u16_f32(LimrVehSpd_Kph_T_f32,NXTRFIXDPT_FLOATTOP0_ULS_F32);
   
    TqSatn_HwNwtMtr_T_s16 = LnrIntrpn_s16_u16VariXs16VariY(PrmFordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX_u16p0,
                            PrmFordMotTqCmdOvrlLimrPullDriftCmpTqSatnY_s16,
                            (uint16)TblSize_m(PrmFordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX_u16p0),
                            LimrVehSpd_Kph_T_u16);
    MaxRate_HwNwtMtrPerSec_T_s16 = LnrIntrpn_s16_u16VariXs16VariY(PrmFordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX_u16p0,
                            PrmFordMotTqCmdOvrlLimrLatCtrlTqRateY_s16,
                            (uint16)TblSize_m(PrmFordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX_u16p0),
                            LimrVehSpd_Kph_T_u16);
    TqSatn_HwNwtMtr_T_f32 = FixdToFloat_f32_s16(TqSatn_HwNwtMtr_T_s16,NXTRFIXDPT_P0TOFLOAT_ULS_F32);
    MaxRate_HwNwtMtrPerSec_T_f32 = FixdToFloat_f32_s16(MaxRate_HwNwtMtrPerSec_T_s16,NXTRFIXDPT_P0TOFLOAT_ULS_F32);
    
    FordPullDriftCmpCdnTqReqLim_HwNwtMtr_T_f32 = Lim_f32(FordPullDriftCmpCdnTqReq_HwNwtMtr_T_f32,-TqSatn_HwNwtMtr_T_f32,TqSatn_HwNwtMtr_T_f32);
    
    PDCLimdTqReq_HwNwtMtr_T_f32 = Lim_f32(FordPullDriftCmpCdnTqReqLim_HwNwtMtr_T_f32,(-MaxRate_HwNwtMtrPerSec_T_f32*ARCHGLBPRM_4MILLISEC_SEC_F32 + *Rte_Pim_PrevLimdTqReq())
                                , (MaxRate_HwNwtMtrPerSec_T_f32*ARCHGLBPRM_4MILLISEC_SEC_F32 + *Rte_Pim_PrevLimdTqReq()));
                                
    return PDCLimdTqReq_HwNwtMtr_T_f32;    
}

/************************************************************************************************************************
 * Name         : NtcHndlr
 * Description  : Sets the appropriate NTC based on the values of the two input flags.
 *                Equivalent logic as required in FordMotTqCmdOvrlLimrPer1 in the FDD.
 * Inputs       : ActvNiblCtrlHiFrqMonrFltDiagFlg_Cnt_T_u08
 *                LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08
 * Outputs      : None
 * Usage Notes  : None
 ************************************************************************************************************************/
static FUNC(void, FordMotTqCmdOvrlLimr_CODE) NtcHndlr(VAR(uint8, AUTOMATIC) ActvNiblCtrlHiFrqMonrFltDiagFlg_Cnt_T_u08,
                                                      VAR(uint8, AUTOMATIC) LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08)
{
    if((ActvNiblCtrlHiFrqMonrFltDiagFlg_Cnt_T_u08 == LOFRQFLT_CNT_U08) ||
       (LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08 == LOFRQFLT_CNT_U08))
    {
        /*---[Start of 'LoFrqFltNtc']---*/
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0E8,
                                      LOFRQFLT_CNT_U08,
                                      NTCSTS_FAILD,
                                      NODEBSTEP_CNT_U16);
        /*---[ End  of 'LoFrqFltNtc']---*/
    }
    else if((ActvNiblCtrlHiFrqMonrFltDiagFlg_Cnt_T_u08 == MAXAMPFLT_CNT_U08) ||
           (LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08 == MAXAMPFLT_CNT_U08))
    {
        /*---[Start of 'MaxAmpFltNtc']---*/
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0E8,
                                      MAXAMPFLT_CNT_U08,
                                      NTCSTS_FAILD,
                                      NODEBSTEP_CNT_U16);
        /*---[ End  of 'MaxAmpFltNtc']---*/
    }
    else if((ActvNiblCtrlHiFrqMonrFltDiagFlg_Cnt_T_u08 == DCTRENDFLT_CNT_U08) ||
           (LaneDprtrWarnHiFrqMonrFltDiagFlg_Cnt_T_u08 == DCTRENDFLT_CNT_U08))
    {
        /*---[Start of 'DcTrendFltNtc']---*/
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0E8,
                                      DCTRENDFLT_CNT_U08,
                                      NTCSTS_FAILD,
                                      NODEBSTEP_CNT_U16);
        /*---[ End  of 'DcTrendFltNtc']---*/
    }
    else
    {
        /*---[Start of 'NTCPassd']---*/
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0E8,
                                      0U,
                                      NTCSTS_PREPASSD,
                                      NODEBSTEP_CNT_U16);
        /*---[ End  of 'NTCPassd']---*/
    }
}

#define FordMotTqCmdOvrlLimr_STOP_SEC_CODE
#include "FordMotTqCmdOvrlLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
