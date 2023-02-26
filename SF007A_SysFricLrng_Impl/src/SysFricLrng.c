/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  SysFricLrng.c
 *        Config:  C:/_Synergy_Projects/Working/SF007A_SysFricLrng_Impl/tools/Component.dpa
 *     SW-C Type:  SysFricLrng
 *  Generated at:  Fri Oct 13 09:00:47 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <SysFricLrng>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*********************************************************************************************************************
* Copyright 2016, 2017 Nexteer
* Nexteer Confidential
*
* Module File Name: SysFricLrng.c
* Module Description: Implementation of SF007A_SysFricLrng FDD 
* Project           : CBD 
* Author            : Shreenivas Koude & Basavaraja Ganeshappa (KPIT Technologies)
***********************************************************************************************************************
* Version Control:
* %version          :  9%
* %derived_by       :  nz2796%
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author           Change Description                                                        SCR #
* -------   -------  --------  -------------------------------------------------------------------------  ------------
* 03/31/16    1      SK & BG (KPIT) Initial implementation of SF007A                               			 EA4#2720
* 08/25/16    2      KK				Implementation of SF007A v1.1.0                               			 EA4#7208
* 09/25/16    3      KK				Implementation of SF007A v2.0.0 & v2.1.0                       			 EA4#7571
* 10/06/16    4      KK				Correct the Indexing in FricLearning function                  			 EA4#7896
* 12/07/16    5      TATA			updated as per design SF007A v2.2.0                  			         EA4#8322
* 02/28/17    6      KK  			updated as per design SF007A v2.4.0                  			         EA4#9725
* 03/28/17    7      KK  			Fixing Out of Range / Overflow & Integrator Settings                  	 EA4#10445
* 05/16/17    8      KK  			Fixing anomaly EA4#11587							                  	 EA4#11897
* 10/03/17    9      ML             Added new calibration and logic for it. Removed logic and moved it       EA4#15390
*                                   to NonRTE C Files
*---------------------------------------------------------------------------------------------------------------------*
*/
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
 * SysFricLrngOperMod1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * u11p5
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u6p10
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_SysFricLrng.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"
#include "ArchGlbPrm.h"
#include "NxtrFil.h" 
#include "NxtrIntrpn.h"
								
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/* MISRA-C:2004 Rule 19.11 : AUTOSAR requires deviation not required as this rule has not been deviated. */

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for 
							[Rte_Read, Rte_Write]*/

#define NODEBSTEP_CNT_U16				65535U
#define FLTINJ_SYSFRICLRNG_SYSFRICOFFS	4U
#define HWPTNUMSUB1_CNT_U08				3U
#define HWPTNUM_CNT_U08					4U
#define HWVELDECDIR_ULS_U08				1U
#define HWVELINCDIR_ULS_U08				0U
#define IDXCALCNSCAGFAC_ULS_U08			2U
#define IDXSELN1_ULS_U08				12U
#define IDXSELN2_ULS_U08				13U
#define IDXSELN3_ULS_U08				6U
#define LRNGENASCAFAC_MILLISEC_U32		120U
#define SCAGFACQUARTER_CNT_F32			0.25F
#define SCAGFACTEN_CNT_U16				10U
#define SECIDXSELN_ULS_U08				2U
#define VEHLRNDFRICHILIM_ULS_F32		127.0F
#define VEHLRNDFRICLOLIM_ULS_F32		0.0F
#define VEHSPDPTNUM1_ULS_U08			4U
#define VEHSPDPTNUM2_ULS_U08			8U

#define INDEX0_CNT_U08 0U 
#define INDEX1_CNT_U08 1U
#define INDEX2_CNT_U08 2U
#define INDEX3_CNT_U08 3U

/*Constants used in Fric Learning*/
#define SYSSATNFRICESTIMDLOLIM_HWNWTMTR_F32 	 0.0F		 
#define SYSSATNFRICESTIMDHILIM_HWNWTMTR_F32 	 20.0F
#define SYSFRICOFFSLIM_HWNWTMTR_F32 		 	 5.0F
#define SYSFRICESTIMDHILIM_HWNWTMTR_F32  		 20.0F
#define SYSFRICESTIMDLOLIM_HWNWTMTR_F32  		 0.0F	
#define MAXLRNDFRICLOLIM_HWNWTMTR_F32	 		 0.0F
#define MAXLRNDFRICHILIM_HWNWTMTR_F32	 		 254.0F

#define PrmSysFricLrngBasLineHys        (*(const Ary2D_f32_8_4 *) 	Rte_Prm_SysFricLrngBasLineHys_Ary2D()) 			
#define PrmSysFricLrngBasLineRngCntr	(*(const Ary2D_u16_8_3 *) 	Rte_Prm_SysFricLrngBasLineRngCntr_Ary2D()) 
#define PrmSysFricLrngIvsTrsmRatX       (*(const Ary1D_u11p5_10 *) 	Rte_Prm_SysFricLrngIvsTrsmRatX_Ary1D())
#define PrmSysFricLrngVehSpd			(*(const Ary2D_f32_4_2 *) 	Rte_Prm_SysFricLrngVehSpd_Ary2D())



static FUNC(void, SysFricLrng_CODE) RunningAndCalibrationModes(P2VAR(float32, AUTOMATIC, SysFricLrng_VAR) FricOffs_HwNwtMtr_T_f32,
															   P2VAR(boolean, AUTOMATIC, SysFricLrng_VAR) LrngEna_Cnt_T_Logl);
										
static FUNC(void, SysFricLrng_CODE) FricLearning(VAR(float32,AUTOMATIC) SelHwAg_HwDeg_T_f32,
                                                 VAR(float32,AUTOMATIC) SelColTq_HwNwtMtr_T_f32,
                                                 VAR(uint8, AUTOMATIC) VehSpdIdx_Cnt_T_u08,
                                                 VAR(uint8, AUTOMATIC) HwVelDir_Cnt_T_u08,
												 VAR(boolean, AUTOMATIC) LrngEna_Cnt_T_Logl);
												 
static FUNC(void, SysFricLrng_CODE) RawAvrgCalc(VAR(uint8, AUTOMATIC) VehSpdIdx_Cnt_T_u08, 
												VAR(uint16, AUTOMATIC) DeltaIdxOffsDec_Cnt_T_u16,
												VAR(uint16, AUTOMATIC) DeltaIdxOffsInc_Cnt_T_u16, 
												VAR(uint32, AUTOMATIC) TotalCounter_Cnt_T_u32,
												VAR(boolean, AUTOMATIC) LrngEna_Cnt_T_Logl);

static FUNC(void, SysFricLrng_CODE) PhiCalc(VAR(float32, AUTOMATIC) SelHwAg_HwDeg_T_f32, VAR(uint16, AUTOMATIC) Gate_Cnt_T_u16, VAR(uint16, AUTOMATIC) DeltaIdxOffs_Cnt_T_u16, 
											VAR(float32, AUTOMATIC) SelColTq_HwNwtMtr_T_f32);	
											
static FUNC(void, SysFricLrng_CODE)  RangeCounterManager(VAR(uint16, AUTOMATIC) DeltaIdxOffs_Cnt_T_u16, VAR(uint16, AUTOMATIC) DeltaIdxOffsDec_Cnt_T_u16, VAR(uint16, AUTOMATIC) DeltaIdxOffsInc_Cnt_T_u16,  
															VAR(uint16, AUTOMATIC) Gate_Cnt_T_u16);
											
static FUNC(void, SysFricLrng_CODE)  NTCSetReset(VAR(float32,AUTOMATIC) MaxRawAvrgFric_HwNwtMtr_T_f32);											
										
static FUNC(void, SysFricLrng_CODE) ClearingMode(void);

static FUNC(void, SysFricLrng_CODE) ResettingMode(P2VAR(float32, AUTOMATIC, SysFricLrng_VAR)FricOffs_HwNwtMtr_T_f32);

static FUNC(void, SysFricLrng_CODE) HwAngConstraint(VAR(float32,AUTOMATIC) FilHwAg_HwDeg_T_f32, P2VAR(boolean, AUTOMATIC, SysFricLrng_VAR)HwAgOK_Cnt_T_Logl,
													P2VAR(float32, AUTOMATIC, SysFricLrng_VAR)SelHwAg_HwDeg_T_f32);
													
static FUNC(void, SysFricLrng_CODE) HwVelConstraint(VAR(float32,AUTOMATIC) FilHwVel_HwDegPerSec_T_f32, P2VAR(boolean, AUTOMATIC, SysFricLrng_VAR)HwVelOK_Cnt_T_Logl,
													P2VAR(uint8, AUTOMATIC, SysFricLrng_VAR)HwVelDir_Cnt_T_u08);
													
static FUNC(void, SysFricLrng_CODE) VehSpdConstraint(VAR(float32,AUTOMATIC) FilVehSpd_Kph_T_f32, P2VAR(boolean, AUTOMATIC, SysFricLrng_VAR)VehSpdOK_Cnt_T_Logl,
													P2VAR(uint8, AUTOMATIC, SysFricLrng_VAR)VehSpdIdx_Cnt_T_u08);
													
static FUNC(void, SysFricLrng_CODE) ColTqconstraint(VAR(float32,AUTOMATIC) FilColTq_HwNwtMtr_T_f32, P2VAR(float32, AUTOMATIC, SysFricLrng_VAR)SelColTq_HwNwtMtr_T_f32);


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
 * u11p5: Integer in interval [0...65535]
 * u6p10: Integer in interval [0...65535]
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
 * SigQlfr1: Enumeration of integer in interval [0...255] with enumerators
 *   SIGQLFR_NORES (0U)
 *   SIGQLFR_PASSD (1U)
 *   SIGQLFR_FAILD (2U)
 * SysFricLrngOperMod1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSFRICLRNGOPERMOD_CALIBRATION (0U)
 *   SYSFRICLRNGOPERMOD_NORMAL (1U)
 *   SYSFRICLRNGOPERMOD_CLEAR (2U)
 *   SYSFRICLRNGOPERMOD_IDLE (3U)
 *   SYSFRICLRNGOPERMOD_BASELINE (4U)
 *
 * Array Types:
 * ============
 * Ary1D_boolean_4: Array with 4 element(s) of type boolean
 * Ary1D_f32_12: Array with 12 element(s) of type float32
 * Ary1D_f32_2: Array with 2 element(s) of type float32
 * Ary1D_f32_4: Array with 4 element(s) of type float32
 * Ary1D_u11p5_10: Array with 10 element(s) of type u11p5
 * Ary1D_u16_3: Array with 3 element(s) of type uint16
 * Ary1D_u6p10_10: Array with 10 element(s) of type u6p10
 * Ary2D_f32_4_2: Array with 4 element(s) of type Ary1D_f32_2
 * Ary2D_f32_8_4: Array with 8 element(s) of type Ary1D_f32_4
 * Ary2D_u16_8_3: Array with 8 element(s) of type Ary1D_u16_3
 *
 * Record Types:
 * =============
 * FilLpRec1: Record with elements
 *   FilSt of type float32
 *   FilGain of type float32
 * SysFricDataRec1: Record with elements
 *   FricOffs of type float32
 *   BasLineFric of type Ary1D_f32_4
 *   VehLrndFric of type Ary1D_f32_4
 *   Hys of type Ary2D_f32_8_4
 *   RngCntr of type Ary2D_u16_8_3
 *   SysFricLrngOperMod of type SysFricLrngOperMod1
 * SysFricNonLrngDataRec1: Record with elements
 *   EolFric of type float32
 *   EnaFricLrng of type boolean
 *   EnaFricOffsOutp of type boolean
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_EstimdFric(void)
 *   float32 *Rte_Pim_FricOffs(void)
 *   float32 *Rte_Pim_PrevMaxRawAvrgFric(void)
 *   float32 *Rte_Pim_SatnEstimdFric(void)
 *   uint32 *Rte_Pim_RefTmrLrngConstr(void)
 *   SysFricLrngOperMod1 *Rte_Pim_FricLrngOperModPrev(void)
 *   boolean *Rte_Pim_FricLrngRunOneTi(void)
 *   boolean *Rte_Pim_FricOffsOutpDi(void)
 *   float32 *Rte_Pim_ColTqAry(void)
 *     Returnvalue: float32* is of type Ary1D_f32_12
 *   float32 *Rte_Pim_FilAvrgFric(void)
 *     Returnvalue: float32* is of type Ary1D_f32_4
 *   float32 *Rte_Pim_HwAgBuf(void)
 *     Returnvalue: float32* is of type Ary1D_f32_12
 *   float32 *Rte_Pim_HwVelBuf(void)
 *     Returnvalue: float32* is of type Ary1D_f32_12
 *   float32 *Rte_Pim_RawAvrgFric(void)
 *     Returnvalue: float32* is of type Ary1D_f32_4
 *   float32 *Rte_Pim_SatnAvrgFric(void)
 *     Returnvalue: float32* is of type Ary1D_f32_4
 *   float32 *Rte_Pim_VehBasLineFric(void)
 *     Returnvalue: float32* is of type Ary1D_f32_4
 *   FilLpRec1 *Rte_Pim_AssiMechTLpFil(void)
 *   FilLpRec1 *Rte_Pim_AvrgFricLpFil1(void)
 *   FilLpRec1 *Rte_Pim_AvrgFricLpFil2(void)
 *   FilLpRec1 *Rte_Pim_AvrgFricLpFil3(void)
 *   FilLpRec1 *Rte_Pim_AvrgFricLpFil4(void)
 *   FilLpRec1 *Rte_Pim_ColTqLpFil(void)
 *   FilLpRec1 *Rte_Pim_FricChgLpFil(void)
 *   SysFricDataRec1 *Rte_Pim_FricLrngData(void)
 *   SysFricNonLrngDataRec1 *Rte_Pim_FricNonLrngData(void)
 *   FilLpRec1 *Rte_Pim_HwAgAuthyLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwAgLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwVelLpFil(void)
 *   FilLpRec1 *Rte_Pim_LatALpFil(void)
 *   FilLpRec1 *Rte_Pim_VehSpdLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   SysFricDataRec1 *Rte_CData_FricLrngDataDft(void)
 *   SysFricNonLrngDataRec1 *Rte_CData_FricNonLrngDataDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_SysFricLrngAvrgFricFrq_Val(void)
 *   float32 Rte_Prm_SysFricLrngBasLineEolFric_Val(void)
 *   float32 Rte_Prm_SysFricLrngDataPrepLpFilFrq_Val(void)
 *   float32 Rte_Prm_SysFricLrngEolFricDifHiLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngEolFricDifLoLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngEolFricDifScagFac_Val(void)
 *   float32 Rte_Prm_SysFricLrngFricDiagcThd_Val(void)
 *   float32 Rte_Prm_SysFricLrngFricOffs_Val(void)
 *   float32 Rte_Prm_SysFricLrngFricOffsHiLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngFricOffsLoLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngFricOffsLpFilFrq_Val(void)
 *   float32 Rte_Prm_SysFricLrngGain_Val(void)
 *   float32 Rte_Prm_SysFricLrngHiFricDiagcThd_Val(void)
 *   float32 Rte_Prm_SysFricLrngHwPosnAuthyThd_Val(void)
 *   float32 Rte_Prm_SysFricLrngHwVelConstrLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngHwVelHiLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngHwVelLoLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngIgnCycFricChgLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngIgnCycFricOffs_Val(void)
 *   float32 Rte_Prm_SysFricLrngLatAHiLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngLatALoLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngTHiLim_Val(void)
 *   float32 Rte_Prm_SysFricLrngTLoLim_Val(void)
 *   uint32 Rte_Prm_SysFricLrngThd_Val(void)
 *   uint16 Rte_Prm_SysFricLrngDebStep_Val(void)
 *   uint16 Rte_Prm_SysFricLrngHiFricDebStep_Val(void)
 *   uint16 Rte_Prm_SysFricLrngRngCntrThd_Val(void)
 *   float32 *Rte_Prm_SysFricLrngBasLineFric_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_4
 *   float32 *Rte_Prm_SysFricLrngBasLineHys_Ary2D(void)
 *     Returnvalue: float32* is of type Ary2D_f32_8_4
 *   uint16 *Rte_Prm_SysFricLrngBasLineRngCntr_Ary2D(void)
 *     Returnvalue: uint16* is of type Ary2D_u16_8_3
 *   float32 *Rte_Prm_SysFricLrngFricChgWght_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_4
 *   float32 *Rte_Prm_SysFricLrngFricHysHwAgPt_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_4
 *   u11p5 *Rte_Prm_SysFricLrngIvsTrsmRatX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_10
 *   u6p10 *Rte_Prm_SysFricLrngIvsTrsmRatY_Ary1D(void)
 *     Returnvalue: u6p10* is of type Ary1D_u6p10_10
 *   boolean *Rte_Prm_SysFricLrngMaskVehSpd_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_boolean_4
 *   float32 *Rte_Prm_SysFricLrngVehSpd_Ary2D(void)
 *     Returnvalue: float32* is of type Ary2D_f32_4_2
 *
 *********************************************************************************************************************/


#define SysFricLrng_START_SEC_CODE
#include "SysFricLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClrFricLrngOperMod_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ClrFricLrngOperMod>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ClrFricLrngOperMod_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ClrFricLrngOperMod_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SysFricLrng_CODE) ClrFricLrngOperMod_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ClrFricLrngOperMod_Oper
 *********************************************************************************************************************/
	*Rte_Pim_FricLrngRunOneTi() = FALSE;
	*Rte_Pim_FricLrngOperModPrev() = Rte_Pim_FricLrngData()->SysFricLrngOperMod;
	 Rte_Pim_FricLrngData()->SysFricLrngOperMod = SYSFRICLRNGOPERMOD_CLEAR;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetFricData_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetFricData>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetFricData_Oper(float32 *FricOffs_Arg, float32 *BasLineFric_Arg, float32 *VehLrndFric_Arg, float32 *Hys_Arg, uint16 *RngCntr_Arg)
 *     Argument BasLineFric_Arg: float32* is of type Ary1D_f32_4
 *     Argument VehLrndFric_Arg: float32* is of type Ary1D_f32_4
 *     Argument Hys_Arg: float32* is of type Ary2D_f32_8_4
 *     Argument RngCntr_Arg: uint16* is of type Ary2D_u16_8_3
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetFricData_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SysFricLrng_CODE) GetFricData_Oper(P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricOffs_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) BasLineFric_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) VehLrndFric_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) Hys_Arg, P2VAR(uint16, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) RngCntr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetFricData_Oper
 *********************************************************************************************************************/
    
	VAR(uint8, AUTOMATIC) Idx1_cnt_T_u08;
	VAR(uint8, AUTOMATIC) NumElements_cnt_T_u08;
	
	*FricOffs_Arg = Rte_Pim_FricLrngData()->FricOffs;
    
	for (Idx1_cnt_T_u08 = 0U; Idx1_cnt_T_u08 < TblSize_m(Rte_Pim_FricLrngData()->BasLineFric); Idx1_cnt_T_u08++)
	{
		BasLineFric_Arg[Idx1_cnt_T_u08] = Rte_Pim_FricLrngData()->BasLineFric[Idx1_cnt_T_u08];
	}
	
	for (Idx1_cnt_T_u08 = 0U; Idx1_cnt_T_u08 < TblSize_m(Rte_Pim_FricLrngData()->VehLrndFric); Idx1_cnt_T_u08++)
	{
		VehLrndFric_Arg[Idx1_cnt_T_u08] = Rte_Pim_FricLrngData()->VehLrndFric[Idx1_cnt_T_u08];
	}
    
	NumElements_cnt_T_u08 = (uint8)((uint16)sizeof(Rte_Pim_FricLrngData()->Hys) / (uint16)sizeof (Rte_Pim_FricLrngData()->Hys[0][0]));
	
	for (Idx1_cnt_T_u08 = 0U; Idx1_cnt_T_u08 < NumElements_cnt_T_u08; Idx1_cnt_T_u08++)
	{
		Hys_Arg[Idx1_cnt_T_u08] = ((float32*)(Rte_Pim_FricLrngData()->Hys))[Idx1_cnt_T_u08];
	}
	
	NumElements_cnt_T_u08 = (uint8)((uint16)sizeof(Rte_Pim_FricLrngData()->RngCntr) / (uint16)sizeof (Rte_Pim_FricLrngData()->RngCntr[0][0]));
	
	for (Idx1_cnt_T_u08 = 0U; Idx1_cnt_T_u08 < NumElements_cnt_T_u08; Idx1_cnt_T_u08++)
	{
		RngCntr_Arg[Idx1_cnt_T_u08] = ((uint16*)(Rte_Pim_FricLrngData()->RngCntr))[Idx1_cnt_T_u08];
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetFricLrngData_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetFricLrngData>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetFricLrngData_Oper(boolean *FricLrngEna_Arg, boolean *FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 *FricLrngOperMod_Arg, float32 *EolFric_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetFricLrngData_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SysFricLrng_CODE) GetFricLrngData_Oper(P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricLrngEna_Arg, P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricLrngOffsOutpEna_Arg, P2VAR(SysFricLrngOperMod1, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricLrngOperMod_Arg, P2VAR(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) EolFric_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetFricLrngData_Oper
 *********************************************************************************************************************/
	*FricLrngEna_Arg = Rte_Pim_FricNonLrngData()->EnaFricLrng;
	*FricLrngOffsOutpEna_Arg = Rte_Pim_FricNonLrngData()->EnaFricOffsOutp;
	*EolFric_Arg = Rte_Pim_FricNonLrngData()->EolFric;	
	*FricLrngOperMod_Arg = Rte_Pim_FricLrngData()->SysFricLrngOperMod;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetFricOffsOutpDi_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetFricOffsOutpDi>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetFricOffsOutpDi_Oper(boolean *FricOffsOutpDi_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetFricOffsOutpDi_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SysFricLrng_CODE) GetFricOffsOutpDi_Oper(P2VAR(boolean, AUTOMATIC, RTE_SYSFRICLRNG_APPL_VAR) FricOffsOutpDi_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetFricOffsOutpDi_Oper
 *********************************************************************************************************************/
	*FricOffsOutpDi_Arg = *Rte_Pim_FricOffsOutpDi();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: InitFricLrngTbl_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <InitFricLrngTbl>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void InitFricLrngTbl_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: InitFricLrngTbl_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SysFricLrng_CODE) InitFricLrngTbl_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: InitFricLrngTbl_Oper
 *********************************************************************************************************************/
	*Rte_Pim_FricLrngRunOneTi() = FALSE;
	*Rte_Pim_FricLrngOperModPrev() = Rte_Pim_FricLrngData()->SysFricLrngOperMod;
	Rte_Pim_FricLrngData()->SysFricLrngOperMod = SYSFRICLRNGOPERMOD_BASELINE;
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetFricData_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetFricData>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetFricData_Oper(float32 FricOffs_Arg, const float32 *BasLineFric_Arg, const float32 *VehLrndFric_Arg, const float32 *Hys_Arg, const uint16 *RngCntr_Arg)
 *     Argument BasLineFric_Arg: float32* is of type Ary1D_f32_4
 *     Argument VehLrndFric_Arg: float32* is of type Ary1D_f32_4
 *     Argument Hys_Arg: float32* is of type Ary2D_f32_8_4
 *     Argument RngCntr_Arg: uint16* is of type Ary2D_u16_8_3
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetFricData_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SysFricLrng_CODE) SetFricData_Oper(float32 FricOffs_Arg, P2CONST(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) BasLineFric_Arg, P2CONST(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) VehLrndFric_Arg, P2CONST(float32, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) Hys_Arg, P2CONST(uint16, AUTOMATIC, RTE_SYSFRICLRNG_APPL_DATA) RngCntr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetFricData_Oper
 *********************************************************************************************************************/
    
	VAR(uint8, AUTOMATIC) Idx1_cnt_T_u08;
	VAR(uint8, AUTOMATIC) NumElements_cnt_T_u08;
	
	Rte_Pim_FricLrngData()->FricOffs = FricOffs_Arg;
	
	for (Idx1_cnt_T_u08 = 0U; Idx1_cnt_T_u08 < TblSize_m(Rte_Pim_FricLrngData()->BasLineFric); Idx1_cnt_T_u08++)
	{
		Rte_Pim_FricLrngData()->BasLineFric[Idx1_cnt_T_u08] = BasLineFric_Arg[Idx1_cnt_T_u08];
	}
	
	for (Idx1_cnt_T_u08 = 0U; Idx1_cnt_T_u08 < TblSize_m(Rte_Pim_FricLrngData()->VehLrndFric); Idx1_cnt_T_u08++)
	{
		Rte_Pim_FricLrngData()->VehLrndFric[Idx1_cnt_T_u08] = VehLrndFric_Arg[Idx1_cnt_T_u08];
	}
    
	NumElements_cnt_T_u08 = (uint8)((uint16)sizeof(Rte_Pim_FricLrngData()->Hys) / (uint16)sizeof (Rte_Pim_FricLrngData()->Hys[0][0]));
	
	for (Idx1_cnt_T_u08 = 0U; Idx1_cnt_T_u08 < NumElements_cnt_T_u08; Idx1_cnt_T_u08++)
	{
		((float32*)(Rte_Pim_FricLrngData()->Hys))[Idx1_cnt_T_u08] = Hys_Arg[Idx1_cnt_T_u08];
	}
	
	NumElements_cnt_T_u08 = (uint8)((uint16)sizeof(Rte_Pim_FricLrngData()->RngCntr) / (uint16)sizeof (Rte_Pim_FricLrngData()->RngCntr[0][0]));
	
	for (Idx1_cnt_T_u08 = 0U; Idx1_cnt_T_u08 < NumElements_cnt_T_u08; Idx1_cnt_T_u08++)
	{
		((uint16*)(Rte_Pim_FricLrngData()->RngCntr))[Idx1_cnt_T_u08] = RngCntr_Arg[Idx1_cnt_T_u08];
	}


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetFricLrngData_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetFricLrngData>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_FricNonLrngData_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetFricLrngData_Oper(boolean FricLrngEna_Arg, boolean FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 FricLrngOperMod_Arg, float32 EolFric_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetFricLrngData_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SysFricLrng_CODE) SetFricLrngData_Oper(boolean FricLrngEna_Arg, boolean FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 FricLrngOperMod_Arg, float32 EolFric_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetFricLrngData_Oper
 *********************************************************************************************************************/

	Rte_Pim_FricNonLrngData()->EnaFricLrng = FricLrngEna_Arg;
	Rte_Pim_FricNonLrngData()->EnaFricOffsOutp = FricLrngOffsOutpEna_Arg;
	Rte_Pim_FricNonLrngData()->EolFric = EolFric_Arg;	
	
	Rte_Pim_FricLrngData()->SysFricLrngOperMod = FricLrngOperMod_Arg;	
	*Rte_Pim_FricLrngOperModPrev() =  FricLrngOperMod_Arg;
	
	(void)Rte_Call_FricNonLrngData_SetRamBlockStatus(TRUE); 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetFricOffsOutpDi_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetFricOffsOutpDi>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetFricOffsOutpDi_Oper(boolean FricOffsOutpDi_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetFricOffsOutpDi_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SysFricLrng_CODE) SetFricOffsOutpDi_Oper(boolean FricOffsOutpDi_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetFricOffsOutpDi_Oper
 *********************************************************************************************************************/
	*Rte_Pim_FricOffsOutpDi() = FricOffsOutpDi_Arg;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SysFricLrngInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SysFricOffs_Val(float32 data)
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
 *   Std_ReturnType Rte_Call_FricLrngData_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SysFricLrngInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SysFricLrng_CODE) SysFricLrngInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SysFricLrngInit1
 *********************************************************************************************************************/
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	*Rte_Pim_FricLrngOperModPrev() = Rte_Pim_FricLrngData()->SysFricLrngOperMod;
	
	FilLpInit(Rte_Pim_FricLrngData()->VehLrndFric[INDEX0_CNT_U08], Rte_Prm_SysFricLrngAvrgFricFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_AvrgFricLpFil1());
	FilLpInit(Rte_Pim_FricLrngData()->VehLrndFric[INDEX1_CNT_U08], Rte_Prm_SysFricLrngAvrgFricFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_AvrgFricLpFil2());
	FilLpInit(Rte_Pim_FricLrngData()->VehLrndFric[INDEX2_CNT_U08], Rte_Prm_SysFricLrngAvrgFricFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_AvrgFricLpFil3());
	FilLpInit(Rte_Pim_FricLrngData()->VehLrndFric[INDEX3_CNT_U08], Rte_Prm_SysFricLrngAvrgFricFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_AvrgFricLpFil4());
	

	for(Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08< VEHSPDPTNUM1_ULS_U08; Index_Cnt_T_u08++)
	{
		Rte_Pim_VehBasLineFric()[Index_Cnt_T_u08] = Rte_Prm_SysFricLrngBasLineFric_Ary1D()[Index_Cnt_T_u08];
		Rte_Pim_RawAvrgFric()[Index_Cnt_T_u08] = Rte_Pim_FricLrngData()->VehLrndFric[Index_Cnt_T_u08];
		Rte_Pim_FilAvrgFric()[Index_Cnt_T_u08] = Rte_Pim_FricLrngData()->VehLrndFric[Index_Cnt_T_u08];
		Rte_Pim_SatnAvrgFric()[Index_Cnt_T_u08] = Rte_Pim_FricLrngData()->VehLrndFric[Index_Cnt_T_u08];		
	}	
	
	(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_RefTmrLrngConstr());
	
	FilLpInit(0.0F, Rte_Prm_SysFricLrngDataPrepLpFilFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_HwVelLpFil());
	FilLpInit(0.0F, Rte_Prm_SysFricLrngDataPrepLpFilFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_LatALpFil());
	FilLpInit(0.0F, Rte_Prm_SysFricLrngDataPrepLpFilFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_VehSpdLpFil());
	FilLpInit(0.0F, Rte_Prm_SysFricLrngDataPrepLpFilFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_ColTqLpFil());
	
	FilLpInit(0.0F, Rte_Prm_SysFricLrngDataPrepLpFilFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_HwAgAuthyLpFil());
	FilLpInit(0.0F, Rte_Prm_SysFricLrngDataPrepLpFilFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_AssiMechTLpFil());
	FilLpInit(0.0F, Rte_Prm_SysFricLrngDataPrepLpFilFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_HwAgLpFil());
	FilLpInit(0.0F, Rte_Prm_SysFricLrngFricOffsLpFilFrq_Val(), ARCHGLBPRM_10MILLISEC_SEC_F32, Rte_Pim_FricChgLpFil());
	
	(void)Rte_Call_FricLrngData_SetRamBlockStatus(TRUE); 
	(void)Rte_Write_SysFricOffs_Val(Rte_Pim_FricLrngData()->FricOffs);
	
	(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A2, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
	(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0D7, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SysFricLrngPer1
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
 *   Std_ReturnType Rte_Read_AssiMechT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FricLrngCustEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FricLrngDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAuthy_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLatA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MaxLrndFric_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysFricEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysFricOffs_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysSatnFricEstimd_Val(float32 data)
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
 * Symbol: SysFricLrngPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SysFricLrng_CODE) SysFricLrngPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SysFricLrngPer1
 *********************************************************************************************************************/

	/* Local Variable Definition*/	
	VAR(float32, AUTOMATIC) FricOffs_HwNwtMtr_T_f32;
	VAR(boolean, AUTOMATIC) LrngEna_Cnt_T_Logl;
	
	*Rte_Pim_FricLrngRunOneTi() = TRUE;
	
	switch(Rte_Pim_FricLrngData()->SysFricLrngOperMod)
	{
		case SYSFRICLRNGOPERMOD_CALIBRATION:
		case SYSFRICLRNGOPERMOD_NORMAL:
			 RunningAndCalibrationModes(&FricOffs_HwNwtMtr_T_f32, &LrngEna_Cnt_T_Logl);
		break;
		
		case SYSFRICLRNGOPERMOD_CLEAR:  
			ClearingMode();
			FricOffs_HwNwtMtr_T_f32 = 0.0F;
		break;
		
		case SYSFRICLRNGOPERMOD_IDLE:
			FricOffs_HwNwtMtr_T_f32 = Rte_Pim_FricLrngData()->FricOffs;
		break;
		
		default:
			ResettingMode(&FricOffs_HwNwtMtr_T_f32);
		break;
	}
	
	 #if (STD_ON == FLTINJENA)
	(void)Rte_Call_FltInj_f32_Oper(&FricOffs_HwNwtMtr_T_f32, FLTINJ_SYSFRICLRNG_SYSFRICOFFS); 
	 #endif
	 
	FricOffs_HwNwtMtr_T_f32 = Lim_f32(FricOffs_HwNwtMtr_T_f32, Rte_Prm_SysFricLrngFricOffsLoLim_Val(), Rte_Prm_SysFricLrngFricOffsHiLim_Val());
	
	/*Implementation of 'UpdateNvmPrm' subsystem - start*/
    
	Rte_Pim_FricLrngData()->FricOffs = FricOffs_HwNwtMtr_T_f32;
	
	/*Implementation of 'UpdateNvmPrm' subsystem - end*/
		
	if((*Rte_Pim_FricOffsOutpDi() == FALSE) && (Rte_Pim_FricNonLrngData()->EnaFricOffsOutp == TRUE))
	{
		/* FricOffs_HwNwtMtr_T_f32 remains unchanged */
	}
	else
	{
		FricOffs_HwNwtMtr_T_f32 = 0.0F;
	}
	
	if((*Rte_Pim_FricLrngOperModPrev() != Rte_Pim_FricLrngData()->SysFricLrngOperMod))
	{
		Rte_Pim_FricLrngData()->SysFricLrngOperMod = *Rte_Pim_FricLrngOperModPrev(); 
	}
	
	(void)Rte_Write_SysFricOffs_Val(Lim_f32(FricOffs_HwNwtMtr_T_f32, -SYSFRICOFFSLIM_HWNWTMTR_F32, SYSFRICOFFSLIM_HWNWTMTR_F32));
	
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define SysFricLrng_STOP_SEC_CODE
#include "SysFricLrng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 
 
 
 
/*****************************************************************************************************************
  * Name        	:   RunningAndCalibrationModes
  * Description 	:   Implementation of 'RunningAndCalibrationModes' subsystem. 
  *			    
  * Inputs      	:   None
  * Outputs    		:   FricOffs_HwNwtMtr_T_f32, LrngEna_Cnt_T_Logl
  * Returns    		:   None 
  * Usage Notes 	:   None
  ****************************************************************************************************************/

static FUNC(void, SysFricLrng_CODE) RunningAndCalibrationModes(P2VAR(float32, AUTOMATIC, SysFricLrng_VAR) FricOffs_HwNwtMtr_T_f32,
															   P2VAR(boolean, AUTOMATIC, SysFricLrng_VAR) LrngEna_Cnt_T_Logl)
{

    VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
	
	VAR(float32, AUTOMATIC) ColTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) FilColTq_HwNwtMtr_T_f32;
	VAR(float32,AUTOMATIC) FilHwVel_HwDegPerSec_T_f32;
	VAR(float32,AUTOMATIC) FilVehLatA_MtrPerSecSqd_T_f32;
	VAR(float32,AUTOMATIC) FilHwAgAuthy_Uls_T_f32;
	VAR(float32,AUTOMATIC) FilHwAg_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) SelHwAg_HwDeg_T_f32;
	VAR(uint8, AUTOMATIC) HwVelDir_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) VehSpdIdx_Cnt_T_u08;
	VAR(float32, AUTOMATIC) SelColTq_HwNwtMtr_T_f32;
	VAR(float32,AUTOMATIC) FilVehSpd_Kph_T_f32;
	VAR(float32,AUTOMATIC) FilAssiMechT_DegCgrd_T_f32;
	
	VAR(uint16, AUTOMATIC) AbsHwAg_HwDeg_T_u11p5;
	VAR(boolean, AUTOMATIC)HwAgOK_Cnt_T_Logl;
	VAR(boolean, AUTOMATIC)HwVelOK_Cnt_T_Logl;
	VAR(boolean, AUTOMATIC)VehSpdOK_Cnt_T_Logl;
	VAR(uint32, AUTOMATIC) TiSpan_MilliSecPerCnt_T_u32 = 0U;	
	VAR(uint16, AUTOMATIC) SysFricLrngIvsTrsmRatY_HwNwtMtrPerMotNwtMtr_T_u6p10;
	
	/*Auto variables for reading input signals*/
	VAR(float32, AUTOMATIC) HwAg_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) HwVel_HwRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) VehLatA_MtrPerSecSqd_T_f32;
	VAR(float32, AUTOMATIC) HwAgAuthy_Uls_T_f32;
	VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
	VAR(float32, AUTOMATIC) AssiMechT_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotTqCmdCrf_MotNwtMtr_T_f32;
	VAR(boolean, AUTOMATIC) VehSpdVld_Cnt_T_Logl;
	VAR(boolean, AUTOMATIC) FricLrngDi_Cnt_T_Logl;
	VAR(boolean, AUTOMATIC) FricLrngCustEna_Cnt_T_Logl;	
	
		/* Read Input Signals*/
	(void)Rte_Read_HwAg_Val(&HwAg_HwDeg_T_f32);
	(void)Rte_Read_HwVel_Val(&HwVel_HwRadPerSec_T_f32);
	(void)Rte_Read_VehLatA_Val(&VehLatA_MtrPerSecSqd_T_f32);
	(void)Rte_Read_HwAgAuthy_Val(&HwAgAuthy_Uls_T_f32);
	(void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);
	(void)Rte_Read_AssiMechT_Val(&AssiMechT_DegCgrd_T_f32);
	(void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
	(void)Rte_Read_MotTqCmdCrf_Val(&MotTqCmdCrf_MotNwtMtr_T_f32);
	(void)Rte_Read_VehSpdVld_Logl(&VehSpdVld_Cnt_T_Logl);
	(void)Rte_Read_FricLrngDi_Logl(&FricLrngDi_Cnt_T_Logl);
	(void)Rte_Read_FricLrngCustEna_Logl(&FricLrngCustEna_Cnt_T_Logl);
	
	/* Implementation of subsystem 'prepdata' - start*/
	FilHwVel_HwDegPerSec_T_f32 = FilLpUpdOutp_f32((HwVel_HwRadPerSec_T_f32 * ARCHGLBPRM_180OVERPI_ULS_F32), Rte_Pim_HwVelLpFil()); 
	
	FilVehLatA_MtrPerSecSqd_T_f32 = FilLpUpdOutp_f32(VehLatA_MtrPerSecSqd_T_f32, Rte_Pim_LatALpFil());
	
	FilHwAgAuthy_Uls_T_f32 = FilLpUpdOutp_f32(HwAgAuthy_Uls_T_f32, Rte_Pim_HwAgAuthyLpFil());
	
	FilVehSpd_Kph_T_f32 = FilLpUpdOutp_f32(VehSpd_Kph_T_f32, Rte_Pim_VehSpdLpFil());
	
	FilAssiMechT_DegCgrd_T_f32 = FilLpUpdOutp_f32(AssiMechT_DegCgrd_T_f32, Rte_Pim_AssiMechTLpFil());
	
	AbsHwAg_HwDeg_T_u11p5 = FloatToFixd_u16_f32(Abslt_f32_f32(HwAg_HwDeg_T_f32), NXTRFIXDPT_FLOATTOP5_ULS_F32);  

	FilHwAg_HwDeg_T_f32 = FilLpUpdOutp_f32(HwAg_HwDeg_T_f32, Rte_Pim_HwAgLpFil());
	
	
	SysFricLrngIvsTrsmRatY_HwNwtMtrPerMotNwtMtr_T_u6p10 = LnrIntrpn_u16_u16VariXu16VariY(PrmSysFricLrngIvsTrsmRatX, 
															Rte_Prm_SysFricLrngIvsTrsmRatY_Ary1D(), 
															(uint16)TblSize_m(PrmSysFricLrngIvsTrsmRatX), 
															AbsHwAg_HwDeg_T_u11p5);
	
	ColTq_HwNwtMtr_T_f32 = (MotTqCmdCrf_MotNwtMtr_T_f32 * FixdToFloat_f32_u16(SysFricLrngIvsTrsmRatY_HwNwtMtrPerMotNwtMtr_T_u6p10, NXTRFIXDPT_P10TOFLOAT_ULS_F32)) + HwTq_HwNwtMtr_T_f32;
	FilColTq_HwNwtMtr_T_f32 = FilLpUpdOutp_f32(ColTq_HwNwtMtr_T_f32, Rte_Pim_ColTqLpFil());
	/* Implementation of subsystem 'prepdata' - end*/

	
	/* Implementation of LearningConstraint subsystem - start*/
	HwAngConstraint(FilHwAg_HwDeg_T_f32, &HwAgOK_Cnt_T_Logl, &SelHwAg_HwDeg_T_f32);
	HwVelConstraint(FilHwVel_HwDegPerSec_T_f32, &HwVelOK_Cnt_T_Logl, &HwVelDir_Cnt_T_u08);
	VehSpdConstraint(FilVehSpd_Kph_T_f32, &VehSpdOK_Cnt_T_Logl, &VehSpdIdx_Cnt_T_u08);
	ColTqconstraint(FilColTq_HwNwtMtr_T_f32, &SelColTq_HwNwtMtr_T_f32);
	
	if((Abslt_f32_f32(FilVehLatA_MtrPerSecSqd_T_f32) > Rte_Prm_SysFricLrngLatAHiLim_Val()) || 
		(Abslt_f32_f32(FilVehLatA_MtrPerSecSqd_T_f32) < Rte_Prm_SysFricLrngLatALoLim_Val()) ||
		(FilHwAgAuthy_Uls_T_f32 < Rte_Prm_SysFricLrngHwPosnAuthyThd_Val()) ||
		(FilAssiMechT_DegCgrd_T_f32 > Rte_Prm_SysFricLrngTHiLim_Val()) ||
		(FilAssiMechT_DegCgrd_T_f32 < Rte_Prm_SysFricLrngTLoLim_Val()) ||
		(VehSpdVld_Cnt_T_Logl == FALSE))
	{
		/* Get System Time */
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_RefTmrLrngConstr());
	}
	else
	{
		/* Existing System Time */
	}
	
	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_RefTmrLrngConstr(),&TiSpan_MilliSecPerCnt_T_u32);	
	
	if(((uint32)(float32)((float32)TiSpan_MilliSecPerCnt_T_u32 * ARCHGLBPRM_100MILLISEC_SEC_F32) > LRNGENASCAFAC_MILLISEC_U32) &&
		(HwAgOK_Cnt_T_Logl == TRUE) &&
		(HwVelOK_Cnt_T_Logl == TRUE) &&
		(VehSpdOK_Cnt_T_Logl == TRUE))
	{
		*LrngEna_Cnt_T_Logl = TRUE;
	}
	else
	{
		*LrngEna_Cnt_T_Logl = FALSE;
	}											
	/* Implementation of LearningConstraint subsystem - end*/	
	
	if ((*LrngEna_Cnt_T_Logl == TRUE) && (FricLrngDi_Cnt_T_Logl == FALSE) && (Rte_Pim_FricNonLrngData()->EnaFricLrng == TRUE) &&
		(FricLrngCustEna_Cnt_T_Logl == TRUE))
	{
		*LrngEna_Cnt_T_Logl = TRUE;
	}
	else
	{
		*LrngEna_Cnt_T_Logl = FALSE;
	}	
	
	if(((SysFricLrngOperMod1)Rte_Pim_FricLrngData()->SysFricLrngOperMod) == SYSFRICLRNGOPERMOD_CALIBRATION)
	{
		/* Cal Mode*/				
		for( Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < HWPTNUM_CNT_U08; Index_Cnt_T_u08++ )
        {
			Rte_Pim_VehBasLineFric()[Index_Cnt_T_u08] = Rte_Pim_SatnAvrgFric()[Index_Cnt_T_u08];
        }
		Rte_Pim_FricChgLpFil()->FilSt = 0.0F;
		*FricOffs_HwNwtMtr_T_f32 = 0.0F;
	}
	else
	{
		/* Running Mode*/	
		if(Rte_Prm_SysFricLrngMaskVehSpd_Ary1D()[VehSpdIdx_Cnt_T_u08] == TRUE)
		{
			*FricOffs_HwNwtMtr_T_f32 = FilLpUpdOutp_f32((Rte_Prm_SysFricLrngFricChgWght_Ary1D()[VehSpdIdx_Cnt_T_u08] * 
													(Rte_Pim_SatnAvrgFric()[VehSpdIdx_Cnt_T_u08] - Rte_Pim_VehBasLineFric()[VehSpdIdx_Cnt_T_u08])), 
													Rte_Pim_FricChgLpFil());		
		}
		else
		{
			*FricOffs_HwNwtMtr_T_f32 = *Rte_Pim_FricOffs();
		}
		*Rte_Pim_FricOffs() = *FricOffs_HwNwtMtr_T_f32;
			
	}
	
	if(TRUE == *LrngEna_Cnt_T_Logl)
	{
		FricLearning(SelHwAg_HwDeg_T_f32, SelColTq_HwNwtMtr_T_f32, VehSpdIdx_Cnt_T_u08, HwVelDir_Cnt_T_u08, *LrngEna_Cnt_T_Logl);
	}
	else
	{
		(void)Rte_Write_MaxLrndFric_Val(Lim_f32(*Rte_Pim_PrevMaxRawAvrgFric(), MAXLRNDFRICLOLIM_HWNWTMTR_F32, MAXLRNDFRICHILIM_HWNWTMTR_F32));
		(void)Rte_Write_SysFricEstimd_Val(Lim_f32(*Rte_Pim_EstimdFric(), SYSFRICESTIMDLOLIM_HWNWTMTR_F32, SYSFRICESTIMDHILIM_HWNWTMTR_F32));
		(void)Rte_Write_SysSatnFricEstimd_Val(Lim_f32(*Rte_Pim_SatnEstimdFric(), SYSSATNFRICESTIMDLOLIM_HWNWTMTR_F32, SYSSATNFRICESTIMDHILIM_HWNWTMTR_F32));		
	}
}


/*****************************************************************************************************************
  * Name        	:   FricLearning
  * Description 	:   Implementation of 'FricLearning' subsystem. 
  *			    
  * Inputs      	:   SelHwAg_HwDeg_T_f32, SelColTq_HwNwtMtr_T_f32,  
						VehSpdIdx_Cnt_T_u08, HwVelDir_Cnt_T_u08,LrngEna_Cnt_T_Logl
  * Outputs    		:   SatnAvrg_HwNwtMtr_T_f32, RawAvg_HwNwtMtr_T_f32
  * Returns    		:   None
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(void, SysFricLrng_CODE) FricLearning(VAR(float32,AUTOMATIC) SelHwAg_HwDeg_T_f32,
                                                 VAR(float32,AUTOMATIC) SelColTq_HwNwtMtr_T_f32,
                                                 VAR(uint8, AUTOMATIC) VehSpdIdx_Cnt_T_u08,
                                                 VAR(uint8, AUTOMATIC) HwVelDir_Cnt_T_u08,
												 VAR(boolean, AUTOMATIC) LrngEna_Cnt_T_Logl)
																							  
															
{
    VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
    VAR(uint16, AUTOMATIC) DeltaIdxOffsInc_Cnt_T_u16;
    VAR(uint16, AUTOMATIC) DeltaIdxOffsDec_Cnt_T_u16;
    VAR(uint16, AUTOMATIC) DeltaIdxOffs_Cnt_T_u16;
    VAR(uint16, AUTOMATIC) Gate_Cnt_T_u16;        
    VAR(uint32, AUTOMATIC) TotalCounter_Cnt_T_u32;
	VAR(float32, AUTOMATIC) MaxRawAvrgFric_HwNwtMtr_T_f32;
    
	
	MaxRawAvrgFric_HwNwtMtr_T_f32 = 0.0F;
		
	Gate_Cnt_T_u16 = 0U;
    
    /* Indices calculation subsystem implementation - start */
    DeltaIdxOffsInc_Cnt_T_u16 = (uint16)((uint16)VehSpdIdx_Cnt_T_u08 * (uint16)IDXCALCNSCAGFAC_ULS_U08); 
    DeltaIdxOffsDec_Cnt_T_u16 = DeltaIdxOffsInc_Cnt_T_u16 + 1U;
    DeltaIdxOffs_Cnt_T_u16 = DeltaIdxOffsInc_Cnt_T_u16 + HwVelDir_Cnt_T_u08;
    /* Indices calculation subsystem implementation - end */
	
    /* Gate Calculation Subsystem Implementation - Start*/	
	while((Gate_Cnt_T_u16 < HWPTNUMSUB1_CNT_U08) &&
          (SelHwAg_HwDeg_T_f32 >= Rte_Prm_SysFricLrngFricHysHwAgPt_Ary1D()[Gate_Cnt_T_u16 + 1U]))	
	{
		Gate_Cnt_T_u16++;		
	}
	
	/* Gate Calculation Subsystem Implementation - End*/	
		
	/* Phi calculation subsystem implementation */	
	if(Gate_Cnt_T_u16 < HWPTNUMSUB1_CNT_U08)
	{
		PhiCalc(SelHwAg_HwDeg_T_f32, Gate_Cnt_T_u16, DeltaIdxOffs_Cnt_T_u16, SelColTq_HwNwtMtr_T_f32);		    
	} 
	
	/*Range Counter Manager Subsystem */
	RangeCounterManager(DeltaIdxOffs_Cnt_T_u16, DeltaIdxOffsDec_Cnt_T_u16, DeltaIdxOffsInc_Cnt_T_u16, Gate_Cnt_T_u16 );
	
        
    /* "Calculate average friction - > TotalCounter updation" subsystem implementation - start*/	
    TotalCounter_Cnt_T_u32 = 1U;
	
    for( Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < HWPTNUMSUB1_CNT_U08; Index_Cnt_T_u08++ )
    {
        TotalCounter_Cnt_T_u32 += (uint32)Rte_Pim_FricLrngData()->RngCntr[DeltaIdxOffsDec_Cnt_T_u16][Index_Cnt_T_u08];
        TotalCounter_Cnt_T_u32 += (uint32)Rte_Pim_FricLrngData()->RngCntr[DeltaIdxOffsInc_Cnt_T_u16][Index_Cnt_T_u08];
    }
	
   	/* "Calculate average friction - > TotalCounter updation" subsystem implementation - end*/
   	/* "TotalCounter updation" subsystem implementation - end*/

	/* "Raw average friction calculation" subsystem implementation -start*/
	if(TotalCounter_Cnt_T_u32 >= Rte_Prm_SysFricLrngThd_Val())
	{	
		RawAvrgCalc(VehSpdIdx_Cnt_T_u08, DeltaIdxOffsDec_Cnt_T_u16, DeltaIdxOffsInc_Cnt_T_u16, TotalCounter_Cnt_T_u32, LrngEna_Cnt_T_Logl);
	}
	
	for(Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < VEHSPDPTNUM1_ULS_U08; Index_Cnt_T_u08++)
	{		
		if(Rte_Pim_RawAvrgFric()[Index_Cnt_T_u08] > MaxRawAvrgFric_HwNwtMtr_T_f32)
		{
			MaxRawAvrgFric_HwNwtMtr_T_f32 = Rte_Pim_RawAvrgFric()[Index_Cnt_T_u08];
		}
	}		
	
	NTCSetReset(MaxRawAvrgFric_HwNwtMtr_T_f32);
		
	MaxRawAvrgFric_HwNwtMtr_T_f32 = Lim_f32(MaxRawAvrgFric_HwNwtMtr_T_f32, MAXLRNDFRICLOLIM_HWNWTMTR_F32, MAXLRNDFRICHILIM_HWNWTMTR_F32);
	
	*Rte_Pim_PrevMaxRawAvrgFric()	= MaxRawAvrgFric_HwNwtMtr_T_f32;
	
	(void)Rte_Write_MaxLrndFric_Val(MaxRawAvrgFric_HwNwtMtr_T_f32);
}

/*****************************************************************************************************************
  * Name        	:   RangeCounterManager
  * Description 	:   Range Counter Manager subsystem implementation
  *			    
  * Inputs      	:   DeltaIdxOffs_Cnt_T_u16, DeltaIdxOffsDec_Cnt_T_u16, DeltaIdxOffsInc_Cnt_T_u16, Gate_Cnt_T_u16
  * Outputs    		:   Rte_Pim_FricLrngData()->RngCntr[DeltaIdxOffsDec_Cnt_T_u16][], Rte_Pim_FricLrngData()->RngCntr[DeltaIdxOffsInc_Cnt_T_u16][]
  * Returns    		:   None
  * Usage Notes 	:   None
  ****************************************************************************************************************/

static FUNC(void, SysFricLrng_CODE) RangeCounterManager(VAR(uint16, AUTOMATIC) DeltaIdxOffs_Cnt_T_u16, 
													    VAR(uint16, AUTOMATIC) DeltaIdxOffsDec_Cnt_T_u16, 
														VAR(uint16, AUTOMATIC) DeltaIdxOffsInc_Cnt_T_u16, 
														VAR(uint16, AUTOMATIC) Gate_Cnt_T_u16)
{

	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
	VAR(boolean, AUTOMATIC) RngCntrThdExcdd_Uls_T_logl;

	
    /* Implementation of "Range Counter Manager" subsystem implementation*/    
    RngCntrThdExcdd_Uls_T_logl = FALSE;
	
    for(Index_Cnt_T_u08 = 0U; (Index_Cnt_T_u08 < HWPTNUMSUB1_CNT_U08); Index_Cnt_T_u08++) 
    {
        if( Rte_Pim_FricLrngData()->RngCntr[DeltaIdxOffs_Cnt_T_u16][Index_Cnt_T_u08] >= Rte_Prm_SysFricLrngRngCntrThd_Val())
        {
            RngCntrThdExcdd_Uls_T_logl = TRUE;
        }
    }
    
	/* "Range Counter Control" subsystem implementation start*/
	if( (Gate_Cnt_T_u16 < HWPTNUMSUB1_CNT_U08)&&
		(RngCntrThdExcdd_Uls_T_logl != TRUE) )
    {
        Rte_Pim_FricLrngData()->RngCntr[DeltaIdxOffs_Cnt_T_u16][Gate_Cnt_T_u16] = Rte_Pim_FricLrngData()->RngCntr[DeltaIdxOffs_Cnt_T_u16][Gate_Cnt_T_u16] + 1U;
    }
	/* "Range Counter Control" subsystem implementation end*/
	
    /* "UpdateBaselineFric" subsystem implementation start*/
    if(TRUE == RngCntrThdExcdd_Uls_T_logl)
    {
        for(Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < HWPTNUMSUB1_CNT_U08; Index_Cnt_T_u08++ )
        {
            Rte_Pim_FricLrngData()->RngCntr[DeltaIdxOffsDec_Cnt_T_u16][Index_Cnt_T_u08] /= SCAGFACTEN_CNT_U16;
            Rte_Pim_FricLrngData()->RngCntr[DeltaIdxOffsInc_Cnt_T_u16][Index_Cnt_T_u08] /= SCAGFACTEN_CNT_U16;
        }
    }	
	/* "UpdateBaselineFric" subsystem implementation end*/
}	


/*****************************************************************************************************************
  * Name        	:   NTCSetReset
  * Description 	:   Set NTC 0X0A2 to to either pass or fail
  *			    
  * Inputs      	:   MaxRawAvrgFric_HwNwtMtr_T_f32
  * Outputs    		:   Sets NTC 0X0A2 to either pass or fail
  * Returns    		:   None
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(void, SysFricLrng_CODE)  NTCSetReset(VAR(float32,AUTOMATIC) MaxRawAvrgFric_HwNwtMtr_T_f32)
{
	VAR(SigQlfr1, AUTOMATIC)  NtcA2QlfrSts_Cnt_T_enum;
	
	if(MaxRawAvrgFric_HwNwtMtr_T_f32 >= Rte_Prm_SysFricLrngFricDiagcThd_Val())
	{
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A2, 1U, NTCSTS_PREFAILD, Rte_Prm_SysFricLrngDebStep_Val());
	}
	
	(void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X0A2, &NtcA2QlfrSts_Cnt_T_enum);
	
	if((NtcA2QlfrSts_Cnt_T_enum == SIGQLFR_FAILD) && (MaxRawAvrgFric_HwNwtMtr_T_f32 >= Rte_Prm_SysFricLrngHiFricDiagcThd_Val()))
	{
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0D7, 1U, NTCSTS_PREFAILD, Rte_Prm_SysFricLrngHiFricDebStep_Val());
	}
}

/*****************************************************************************************************************
  * Name        	:   PhiCalc
  * Description 	:   Implementation of 'Phi calculation' subsystem. 
  *			    
  * Inputs      	:   SelHwAg_HwDeg_T_f32, Gate_Cnt_T_u16, DeltaIdxOffs_Cnt_T_u16, SelColTq_HwNwtMtr_T_f32
  * Outputs    		:   Rte_Pim_FricLrngData()->Hys[DeltaIdxOffs_Cnt_T_u16][Gate_Cnt_T_u16], Rte_Pim_FricLrngData()->Hys[DeltaIdxOffs_Cnt_T_u16][Gate_Cnt_T_u16 + 1U]
  * Returns    		:   None
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(void, SysFricLrng_CODE) PhiCalc(VAR(float32, AUTOMATIC) SelHwAg_HwDeg_T_f32, VAR(uint16, AUTOMATIC) Gate_Cnt_T_u16, VAR(uint16, AUTOMATIC) DeltaIdxOffs_Cnt_T_u16, VAR(float32, AUTOMATIC) SelColTq_HwNwtMtr_T_f32)
{
	VAR(float32,AUTOMATIC) Phi_Uls_T_f32;
	VAR(float32,AUTOMATIC) PLFMultFactor_HwNwMtr_T_f32;	
	
	/* Calc phi */
    Phi_Uls_T_f32 = ((SelHwAg_HwDeg_T_f32 - Rte_Prm_SysFricLrngFricHysHwAgPt_Ary1D()[Gate_Cnt_T_u16]) / 
				    (Rte_Prm_SysFricLrngFricHysHwAgPt_Ary1D()[Gate_Cnt_T_u16 + 1U] - Rte_Prm_SysFricLrngFricHysHwAgPt_Ary1D()[Gate_Cnt_T_u16]));
        
    /*Calc PLF */
    PLFMultFactor_HwNwMtr_T_f32 = Rte_Prm_SysFricLrngGain_Val() * (SelColTq_HwNwtMtr_T_f32 - 
								  ((Phi_Uls_T_f32 * Rte_Pim_FricLrngData()->Hys[DeltaIdxOffs_Cnt_T_u16][Gate_Cnt_T_u16 + 1U]) +
                                  ((1.0F - Phi_Uls_T_f32) * Rte_Pim_FricLrngData()->Hys[DeltaIdxOffs_Cnt_T_u16][Gate_Cnt_T_u16])));
									  
    /* Update FricLrngData */
    Rte_Pim_FricLrngData()->Hys[DeltaIdxOffs_Cnt_T_u16][Gate_Cnt_T_u16 + 1U]  = Rte_Pim_FricLrngData()->Hys[DeltaIdxOffs_Cnt_T_u16][Gate_Cnt_T_u16 + 1U] +
																					(Phi_Uls_T_f32 * PLFMultFactor_HwNwMtr_T_f32); 
																					
    Rte_Pim_FricLrngData()->Hys[DeltaIdxOffs_Cnt_T_u16][Gate_Cnt_T_u16] = Rte_Pim_FricLrngData()->Hys[DeltaIdxOffs_Cnt_T_u16][Gate_Cnt_T_u16] + 
																			  ((1.0F - Phi_Uls_T_f32) * PLFMultFactor_HwNwMtr_T_f32);     
	
}


/*****************************************************************************************************************
  * Name        	:   RawAvrgCalc
  * Description 	:   Implementation of 'Raw Average Calculation' subsystem. 
  *			    
  * Inputs      	:   VehSpdIdx_Cnt_T_u08, DeltaIdxOffsDec_Cnt_T_u16, DeltaIdxOffsInc_Cnt_T_u16,TotalCounter_Cnt_T_u32, LrngEna_Cnt_T_Logl
  * Outputs    		:   SatnAvrgFric_HwNwtMtr_T_f32, RawAvg_HwNwtMtr_T_f32
  * Returns    		:   None
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(void, SysFricLrng_CODE) RawAvrgCalc(VAR(uint8, AUTOMATIC) VehSpdIdx_Cnt_T_u08, 
												VAR(uint16, AUTOMATIC) DeltaIdxOffsDec_Cnt_T_u16,
												VAR(uint16, AUTOMATIC) DeltaIdxOffsInc_Cnt_T_u16, 
												VAR(uint32, AUTOMATIC) TotalCounter_Cnt_T_u32,
												VAR(boolean, AUTOMATIC) LrngEna_Cnt_T_Logl)
{ 
	VAR(float32, AUTOMATIC) RawAvg_HwNwtMtr_T_f32 = 0.0F;
	VAR(float32, AUTOMATIC) HysRawAvg_HwNwtMtr_T_f32;	
	VAR(float32, AUTOMATIC) SatnAvrgFric_HwNwtMtr_T_f32;
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
	VAR(uint16, AUTOMATIC) RngCntrRawAvg_HwNwtMtr_T_u16;


    for(Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < HWPTNUMSUB1_CNT_U08; Index_Cnt_T_u08++ )
    {
		HysRawAvg_HwNwtMtr_T_f32 = ((Rte_Pim_FricLrngData()->Hys[DeltaIdxOffsInc_Cnt_T_u16][Index_Cnt_T_u08] - Rte_Pim_FricLrngData()->Hys[DeltaIdxOffsDec_Cnt_T_u16][Index_Cnt_T_u08]) + 
									 (Rte_Pim_FricLrngData()->Hys[DeltaIdxOffsInc_Cnt_T_u16][Index_Cnt_T_u08 + 1U] - Rte_Pim_FricLrngData()->Hys[DeltaIdxOffsDec_Cnt_T_u16][Index_Cnt_T_u08 + 1U])); 
		
		RngCntrRawAvg_HwNwtMtr_T_u16 = (Rte_Pim_FricLrngData()->RngCntr[DeltaIdxOffsInc_Cnt_T_u16][Index_Cnt_T_u08] + Rte_Pim_FricLrngData()->RngCntr[DeltaIdxOffsDec_Cnt_T_u16][Index_Cnt_T_u08]);
		
        RawAvg_HwNwtMtr_T_f32 =  RawAvg_HwNwtMtr_T_f32 + (HysRawAvg_HwNwtMtr_T_f32 *  (float32)((float32)RngCntrRawAvg_HwNwtMtr_T_u16 / ((float32)TotalCounter_Cnt_T_u32))); 
    }
		
    RawAvg_HwNwtMtr_T_f32 *= SCAGFACQUARTER_CNT_F32;	
		
    Rte_Pim_RawAvrgFric()[VehSpdIdx_Cnt_T_u08] = RawAvg_HwNwtMtr_T_f32;
		
	if(VehSpdIdx_Cnt_T_u08 == INDEX0_CNT_U08)
	{			
		Rte_Pim_FilAvrgFric()[VehSpdIdx_Cnt_T_u08] = FilLpUpdOutp_f32(RawAvg_HwNwtMtr_T_f32,Rte_Pim_AvrgFricLpFil1());
	}
	else if(VehSpdIdx_Cnt_T_u08 == INDEX1_CNT_U08)
	{
		Rte_Pim_FilAvrgFric()[VehSpdIdx_Cnt_T_u08] = FilLpUpdOutp_f32(RawAvg_HwNwtMtr_T_f32,Rte_Pim_AvrgFricLpFil2());
	}
	else if(VehSpdIdx_Cnt_T_u08 == INDEX2_CNT_U08)
	{
			
		Rte_Pim_FilAvrgFric()[VehSpdIdx_Cnt_T_u08] = FilLpUpdOutp_f32(RawAvg_HwNwtMtr_T_f32,Rte_Pim_AvrgFricLpFil3());
	}
	else 
	{
		Rte_Pim_FilAvrgFric()[VehSpdIdx_Cnt_T_u08] = FilLpUpdOutp_f32(RawAvg_HwNwtMtr_T_f32,Rte_Pim_AvrgFricLpFil4());
	}

			
    Rte_Pim_SatnAvrgFric()[VehSpdIdx_Cnt_T_u08] = Lim_f32(Rte_Pim_FilAvrgFric()[VehSpdIdx_Cnt_T_u08],
														  Rte_Pim_FricLrngData()->VehLrndFric[VehSpdIdx_Cnt_T_u08] - Rte_Prm_SysFricLrngIgnCycFricOffs_Val(),
														  Rte_Pim_FricLrngData()->VehLrndFric[VehSpdIdx_Cnt_T_u08] + Rte_Prm_SysFricLrngIgnCycFricOffs_Val());
																			
		
	SatnAvrgFric_HwNwtMtr_T_f32 = Rte_Pim_SatnAvrgFric()[VehSpdIdx_Cnt_T_u08]; 
	
	RawAvg_HwNwtMtr_T_f32 			= Lim_f32(RawAvg_HwNwtMtr_T_f32, SYSFRICESTIMDLOLIM_HWNWTMTR_F32, SYSFRICESTIMDHILIM_HWNWTMTR_F32);
	SatnAvrgFric_HwNwtMtr_T_f32 	= Lim_f32(SatnAvrgFric_HwNwtMtr_T_f32, SYSSATNFRICESTIMDLOLIM_HWNWTMTR_F32, SYSSATNFRICESTIMDHILIM_HWNWTMTR_F32);
	
	*Rte_Pim_EstimdFric()		= RawAvg_HwNwtMtr_T_f32;
	*Rte_Pim_SatnEstimdFric()	= SatnAvrgFric_HwNwtMtr_T_f32;
	
	(void)Rte_Write_SysFricEstimd_Val(RawAvg_HwNwtMtr_T_f32);
	(void)Rte_Write_SysSatnFricEstimd_Val(SatnAvrgFric_HwNwtMtr_T_f32);
	
}


/*****************************************************************************************************************
  * Name        	:   ClearingMode
  * Description 	:   Implementation of 'ClearingMode' subsystem. Clears all the elements of Structure and Friction Offset to Zero 
  *			    
  * Inputs      	:   None
  * Outputs    		:   
  * Returns    		:   None
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(void, SysFricLrng_CODE) ClearingMode(void)
{
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Index2_Cnt_T_u08;
	
	Rte_Pim_FricChgLpFil()->FilSt = 0.0F;
	
	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < VEHSPDPTNUM1_ULS_U08; Index_Cnt_T_u08++)
	{
		Rte_Pim_VehBasLineFric()[Index_Cnt_T_u08]   = 0.0F;
		Rte_Pim_FricLrngData()->VehLrndFric[Index_Cnt_T_u08] = 0.0F;	
		Rte_Pim_FricLrngData()->BasLineFric[Index_Cnt_T_u08] = 0.0F;	
		Rte_Pim_RawAvrgFric()[Index_Cnt_T_u08]      = 0.0F;
		Rte_Pim_FilAvrgFric()[Index_Cnt_T_u08]      = 0.0F;
		Rte_Pim_SatnAvrgFric()[Index_Cnt_T_u08]     = 0.0F;
	}
	
	Rte_Pim_AvrgFricLpFil1()->FilSt  = 0.0F;
	Rte_Pim_AvrgFricLpFil2()->FilSt  = 0.0F;
	Rte_Pim_AvrgFricLpFil3()->FilSt  = 0.0F;
	Rte_Pim_AvrgFricLpFil4()->FilSt  = 0.0F;
	
	for (Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < VEHSPDPTNUM2_ULS_U08; Index_Cnt_T_u08++)
	{
		for (Index2_Cnt_T_u08 = 0U; Index2_Cnt_T_u08 < HWPTNUMSUB1_CNT_U08; Index2_Cnt_T_u08++)
		{
			Rte_Pim_FricLrngData()->RngCntr[Index_Cnt_T_u08][Index2_Cnt_T_u08] = 0U;
		}	
		for (Index2_Cnt_T_u08 = 0U; Index2_Cnt_T_u08 < HWPTNUM_CNT_U08; Index2_Cnt_T_u08++)
		{
			Rte_Pim_FricLrngData()->Hys[Index_Cnt_T_u08][Index2_Cnt_T_u08] = 0.0F;
		}
	}	
}

/*****************************************************************************************************************
  * Name        	:   ResettingMode
  * Description 	:   Implementation of 'ResettingMode' subsystem. Resets all the elements of Structure and Friction Offset to Zero 
  *			    
  * Inputs      	:   None
  * Outputs    		:   FricOffs_HwNwtMtr_T_f32
  * Returns    		:   None
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(void, SysFricLrng_CODE) ResettingMode(P2VAR(float32, AUTOMATIC, SysFricLrng_VAR)FricOffs_HwNwtMtr_T_f32)
{
	VAR(uint8, AUTOMATIC) Index1_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Index2_Cnt_T_u08;
	VAR(float32, AUTOMATIC) Fric_HwNwtMtr_f32;
	
	Rte_Pim_FricChgLpFil()->FilSt = 0.0F;
	
	*FricOffs_HwNwtMtr_T_f32 = Lim_f32(((Rte_Pim_FricNonLrngData()->EolFric - Rte_Prm_SysFricLrngBasLineEolFric_Val()) * Rte_Prm_SysFricLrngEolFricDifScagFac_Val()), 
										Rte_Prm_SysFricLrngEolFricDifLoLim_Val(), Rte_Prm_SysFricLrngEolFricDifHiLim_Val());
	/* UpdateBaselineFric - START*/
	for(Index1_Cnt_T_u08 = 0U; Index1_Cnt_T_u08 < VEHSPDPTNUM1_ULS_U08; Index1_Cnt_T_u08++)
	{
		Fric_HwNwtMtr_f32 = (Rte_Prm_SysFricLrngBasLineFric_Ary1D()[Index1_Cnt_T_u08] + *FricOffs_HwNwtMtr_T_f32);
		
		Rte_Pim_VehBasLineFric()[Index1_Cnt_T_u08] = Rte_Prm_SysFricLrngBasLineFric_Ary1D()[Index1_Cnt_T_u08];
		Rte_Pim_FricLrngData()->BasLineFric[Index1_Cnt_T_u08] = Rte_Prm_SysFricLrngBasLineFric_Ary1D()[Index1_Cnt_T_u08];
		
		Rte_Pim_RawAvrgFric()[Index1_Cnt_T_u08] = Fric_HwNwtMtr_f32;
		Rte_Pim_FilAvrgFric()[Index1_Cnt_T_u08] = Fric_HwNwtMtr_f32;
		Rte_Pim_SatnAvrgFric()[Index1_Cnt_T_u08] = Fric_HwNwtMtr_f32;
		
		Rte_Pim_FricLrngData()->VehLrndFric[Index1_Cnt_T_u08] = Lim_f32(Fric_HwNwtMtr_f32, VEHLRNDFRICLOLIM_ULS_F32, VEHLRNDFRICHILIM_ULS_F32);	
	}

	Rte_Pim_AvrgFricLpFil1()->FilSt = Rte_Pim_RawAvrgFric()[0U];
	Rte_Pim_AvrgFricLpFil2()->FilSt = Rte_Pim_RawAvrgFric()[1U];
	Rte_Pim_AvrgFricLpFil3()->FilSt = Rte_Pim_RawAvrgFric()[2U];
	Rte_Pim_AvrgFricLpFil4()->FilSt = Rte_Pim_RawAvrgFric()[3U];		
	/* UpdateBaselineFric - END*/

	/*UpdateFricLrngHys_RngCntr - START*/
	for(Index1_Cnt_T_u08 = 0U; Index1_Cnt_T_u08 < VEHSPDPTNUM2_ULS_U08; Index1_Cnt_T_u08++)
	{		
		/* UpdateFricLrngHys  - START*/
		for(Index2_Cnt_T_u08 = 0U; Index2_Cnt_T_u08 < HWPTNUM_CNT_U08; Index2_Cnt_T_u08++)
		{
			if((Index1_Cnt_T_u08 & 1U) == 1U)
			{
				/* Update Odd Rows*/ 
				Rte_Pim_FricLrngData()->Hys[Index1_Cnt_T_u08][Index2_Cnt_T_u08] = (PrmSysFricLrngBasLineHys[Index1_Cnt_T_u08][Index2_Cnt_T_u08] - *FricOffs_HwNwtMtr_T_f32);
				
			}
			else
			{
				/* Update Even Rows */
				Rte_Pim_FricLrngData()->Hys[Index1_Cnt_T_u08][Index2_Cnt_T_u08] = (PrmSysFricLrngBasLineHys[Index1_Cnt_T_u08][Index2_Cnt_T_u08] + *FricOffs_HwNwtMtr_T_f32);
			}			
		}			
		/* UpdateFricLrngHys  - END */
		 
		 
		/* Update BaseLine Range Counter - START */
		for(Index2_Cnt_T_u08 = 0U; Index2_Cnt_T_u08 < HWPTNUMSUB1_CNT_U08; Index2_Cnt_T_u08++)
		{
			Rte_Pim_FricLrngData()->RngCntr[Index1_Cnt_T_u08][Index2_Cnt_T_u08] = PrmSysFricLrngBasLineRngCntr[Index1_Cnt_T_u08][Index2_Cnt_T_u08];
		}
		/* Update BaseLine Range Counter - END */		
	}	
	/* UpdateFricLrngHys_RngCntr - END */
	
}

/*****************************************************************************************************************
  * Name        	:   HwAngConstraint
  * Description 	:   Implementation of 'HwAngConstraint' subsystem. 
  *			    
  * Inputs      	:   FilHwAg_HwDeg_T_f32 
  * Outputs    		:   HwAgOK_Cnt_T_Logl, and SelHwAg_HwDeg_T_f32
  * Returns    		:   None
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(void, SysFricLrng_CODE) HwAngConstraint(float32 FilHwAg_HwDeg_T_f32, P2VAR(boolean, AUTOMATIC, SysFricLrng_VAR)HwAgOK_Cnt_T_Logl,
													P2VAR(float32, AUTOMATIC, SysFricLrng_VAR)SelHwAg_HwDeg_T_f32)
{
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
		
	*HwAgOK_Cnt_T_Logl = TRUE;
	
	for(Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < IDXSELN1_ULS_U08; Index_Cnt_T_u08++)
	{
		if((Rte_Pim_HwAgBuf()[Index_Cnt_T_u08] <= Rte_Prm_SysFricLrngFricHysHwAgPt_Ary1D()[HWPTNUMSUB1_CNT_U08]) &&
			(Rte_Pim_HwAgBuf()[Index_Cnt_T_u08] >= Rte_Prm_SysFricLrngFricHysHwAgPt_Ary1D()[0]))
		{
			/* Do Nothing */
		}
		else
		{
			*HwAgOK_Cnt_T_Logl = FALSE;
		}		
	}
	
	*SelHwAg_HwDeg_T_f32 = Rte_Pim_HwAgBuf()[IDXSELN3_ULS_U08 - 1U];
		
	/* Hand wheel Angle Buffer -START */
	for(Index_Cnt_T_u08 = IDXSELN1_ULS_U08 - 1U; Index_Cnt_T_u08 >= 1U  ; Index_Cnt_T_u08--)
	{
		Rte_Pim_HwAgBuf()[Index_Cnt_T_u08] = Rte_Pim_HwAgBuf()[Index_Cnt_T_u08 - 1U];		
	}
	
	Rte_Pim_HwAgBuf()[0] = FilHwAg_HwDeg_T_f32;
	/* Hand wheel Angle Buffer - END */
}
	
/*****************************************************************************************************************
  * Name        	:   HwVelConstraint
  * Description 	:   Implementation of 'HwVelConstraint' subsystem. 
  *			    
  * Inputs      	:   FilHwVel_HwDegPerSec_T_f32
  * Outputs    		:   HwVelOK_Cnt_T_Logl and HwVelDir_Cnt_T_u08
  * Returns    		:   None
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(void, SysFricLrng_CODE) HwVelConstraint(float32 FilHwVel_HwDegPerSec_T_f32, P2VAR(boolean, AUTOMATIC, SysFricLrng_VAR)HwVelOK_Cnt_T_Logl,
													P2VAR(uint8, AUTOMATIC, SysFricLrng_VAR)HwVelDir_Cnt_T_u08)
{
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
	VAR(float32, AUTOMATIC) HwVelBufSum_HwDegPerSec_T_f32;
	VAR(float32, AUTOMATIC) HwVelBufAvg_HwRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) HwVelBufMin_HwDegPerSec_T_f32;
	VAR(float32, AUTOMATIC) HwVelBufMax_HwDegPerSec_T_f32;
	VAR(boolean, AUTOMATIC) VariNegRng_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) VariPosRng_Cnt_T_logl;

	
	HwVelBufSum_HwDegPerSec_T_f32 = 0.0F;
	HwVelBufMin_HwDegPerSec_T_f32 = Rte_Pim_HwVelBuf()[0U];
	HwVelBufMax_HwDegPerSec_T_f32 = Rte_Pim_HwVelBuf()[0U];
	
	VariNegRng_Cnt_T_logl = TRUE;
	VariPosRng_Cnt_T_logl = TRUE;
	
	/* Range_Monotonicity Calculation  - START*/
	for(Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < IDXSELN1_ULS_U08; Index_Cnt_T_u08++)
	{
		if(Rte_Pim_HwVelBuf()[Index_Cnt_T_u08] > 0.0F)
		{
			VariNegRng_Cnt_T_logl = FALSE; /* AllLTZ */
		}
		if(Rte_Pim_HwVelBuf()[Index_Cnt_T_u08] < 0.0F)
		{
			VariPosRng_Cnt_T_logl = FALSE; /* AllGTZ */
		}
		/* Average */
		HwVelBufSum_HwDegPerSec_T_f32 += Rte_Pim_HwVelBuf()[Index_Cnt_T_u08];
		/* Range */
		HwVelBufMin_HwDegPerSec_T_f32 = Min_f32(HwVelBufMin_HwDegPerSec_T_f32, Rte_Pim_HwVelBuf()[Index_Cnt_T_u08]);
        HwVelBufMax_HwDegPerSec_T_f32 = Max_f32(HwVelBufMax_HwDegPerSec_T_f32, Rte_Pim_HwVelBuf()[Index_Cnt_T_u08]);
	}
	/* Range_Monotonicity Calculation  -  END*/
	
	/* Apply Criteria  - START */
	HwVelBufAvg_HwRadPerSec_T_f32 = Abslt_f32_f32(HwVelBufSum_HwDegPerSec_T_f32/(float32)IDXSELN1_ULS_U08);
	
	if((HwVelBufAvg_HwRadPerSec_T_f32 <= Rte_Prm_SysFricLrngHwVelHiLim_Val())&&
		(HwVelBufAvg_HwRadPerSec_T_f32 >= Rte_Prm_SysFricLrngHwVelLoLim_Val())&&
		((HwVelBufMax_HwDegPerSec_T_f32 - HwVelBufMin_HwDegPerSec_T_f32) <= Rte_Prm_SysFricLrngHwVelConstrLim_Val()) &&
		((VariNegRng_Cnt_T_logl == TRUE) || (VariPosRng_Cnt_T_logl == TRUE)))
	{
		*HwVelOK_Cnt_T_Logl = TRUE;
	}
	else
	{
		*HwVelOK_Cnt_T_Logl = FALSE;
	}
		
	if(VariPosRng_Cnt_T_logl == TRUE)
	{
		*HwVelDir_Cnt_T_u08 = HWVELINCDIR_ULS_U08;
	}
	else if(VariNegRng_Cnt_T_logl == TRUE)
	{
		*HwVelDir_Cnt_T_u08 = HWVELDECDIR_ULS_U08;
	}
	else
	{
		*HwVelDir_Cnt_T_u08 = HWVELINCDIR_ULS_U08;
	}
	
		/* Create Buffer - START */
	/* Hand wheel Velocity Buffer - START */
	for(Index_Cnt_T_u08 = IDXSELN1_ULS_U08 - 1U; Index_Cnt_T_u08 >= 1U  ; Index_Cnt_T_u08--)
	{
		Rte_Pim_HwVelBuf()[Index_Cnt_T_u08] = Rte_Pim_HwVelBuf()[Index_Cnt_T_u08 - 1U];
	}
	/* Hand wheel Velocity Buffer - END  */

	Rte_Pim_HwVelBuf()[0] = FilHwVel_HwDegPerSec_T_f32;

	/* Apply Criteria  - END */
}

/*****************************************************************************************************************
  * Name        	:   VehSpdConstraint
  * Description 	:   Implementation of 'VehSpdConstraint' subsystem. 
  *			    
  * Inputs      	:   FilVehSpd_Kph_T_f32
  * Outputs    		:   VehSpdOK_Cnt_T_Logl and VehSpdIdx_Cnt_T_u08
  * Returns    		:   None
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(void, SysFricLrng_CODE) VehSpdConstraint(float32 FilVehSpd_Kph_T_f32, P2VAR(boolean, AUTOMATIC, SysFricLrng_VAR)VehSpdOK_Cnt_T_Logl,
													P2VAR(uint8, AUTOMATIC, SysFricLrng_VAR)VehSpdIdx_Cnt_T_u08)
{
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
	
	*VehSpdOK_Cnt_T_Logl = FALSE;
	*VehSpdIdx_Cnt_T_u08 = 1U;	
	
	/* VehSpdIdxCalcn  - START*/
	for(Index_Cnt_T_u08 = 0U; (Index_Cnt_T_u08 < VEHSPDPTNUM1_ULS_U08); Index_Cnt_T_u08++)
	{
		if((FilVehSpd_Kph_T_f32 < PrmSysFricLrngVehSpd[Index_Cnt_T_u08][SECIDXSELN_ULS_U08 - 1U]) &&
			(FilVehSpd_Kph_T_f32 >= PrmSysFricLrngVehSpd[Index_Cnt_T_u08][0U]) && (*VehSpdOK_Cnt_T_Logl == FALSE)) 
		{
			*VehSpdOK_Cnt_T_Logl = TRUE;	
			*VehSpdIdx_Cnt_T_u08 = Index_Cnt_T_u08;
		}		
	}
	/*  VehSpdIdxCalcn  - END */
}	
/*****************************************************************************************************************
  * Name        	:   ColTqconstraint
  * Description 	:   Implementation of 'ColTqconstraint' subsystem. 
  *			    
  * Inputs      	:   ColTq_HwNwtMtr_T_f32
  * Outputs    		:   SelColTq_HwNwtMtr_T_f32
  * Returns    		:   None
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(void, SysFricLrng_CODE) ColTqconstraint(float32 FilColTq_HwNwtMtr_T_f32, P2VAR(float32, AUTOMATIC, SysFricLrng_VAR)SelColTq_HwNwtMtr_T_f32)
{
    VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	
	*SelColTq_HwNwtMtr_T_f32 = Rte_Pim_ColTqAry()[IDXSELN3_ULS_U08 - 1U];
	
	/* ColTqAryCalcn */
	for(Index_Cnt_T_u08 = IDXSELN1_ULS_U08 - 1U; Index_Cnt_T_u08 >= 1U  ; Index_Cnt_T_u08--)
	{
		Rte_Pim_ColTqAry()[Index_Cnt_T_u08] = Rte_Pim_ColTqAry()[Index_Cnt_T_u08 - 1U];
	}
	
	Rte_Pim_ColTqAry()[0] = FilColTq_HwNwtMtr_T_f32;
	
    /* ColTqAryCalcn - END */	
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
