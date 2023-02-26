/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HwAg1Meas.c
 *        Config:  C:/Users/nz3893/Documents/Synergy/EA4/Working/CM670A_HwAg1Meas_Impl/tools/Component.dpa
 *     SW-C Type:  HwAg1Meas
 *  Generated at:  Fri Aug 18 08:36:39 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HwAg1Meas>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : HwAg1Meas.c
* Module Description: Implementation of SENT HW AG1 - CM670A
* Project           : CBD 
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version          : 15%
* %derived_by       : nz3893 %
*--------------------------------------------------------------------------------------------------------------------
* Date       Rev      Author   Change Description                                                             SCR #
* -------   -------  --------  ------------------------------------------------------------------------     ---------
* 07/21/15    1        Selva   Initial Version                                                               EA4#911                                                                 
* 09/08/15    2        Selva   Fixed A1354 and A1508                                                         EA4#1531     
* 10/01/15    3        Selva   Fixed A1647. (changed 3 nibble to 4 nibble data)                              EA4#1788  
* 10/06/15    4        Selva   Fixed A1856 (SkipStep error Corrected)                                        EA4#1874  
* 12/23/15    5        Selva   Updated for v1.4.0 of the FDD                                                 EA4#2685 
* 01/21/16    6        Selva   Updated for v1.5.0 of the FDD                                                 EA4#3384  
* 02/26/16    7        Selva   Updated for v1.6.0 of the FDD                                                 EA4#4012
* 03/28/16    8        KK      Updated for v1.7.0 of the FDD (Fix for EA4#4799)            					 EA4#4932                 
* 06/21/16    9        TATA    Updated for v1.8.0 of the FDD             					                 EA4#6133
* 06/27/16    10       TATA    Updated for StdDef port usage for client port				                 EA4#6437
* 04/03/17    11       KK      Implemented Latch Skipped SAS Step Error		                 				 EA4#10585
* 05/19/17    12       KK      Fixed resetting Rte_Pim_HwAg1IfFltLtch		                 			 	 EA4#12021
* 05/29/17    13       KK      Updated The Latch clear Service to avoid setting NVM in Periodic              EA4#12292
* 07/10/17    14       KK      Update for Optional Sensor Configuration              						 EA4#12754
* 08/18/17    15       BLS     Removed application data types                                                EA4#12552
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
 * HwAgSnsrTyp1
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
 * SigQlfr1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_HwAg1Meas.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include <v800_ghs.h>
#include "HwAg1Meas_Cfg.h"
#include "ElecGlbPrm.h"
#include "NxtrMath.h"
#include "rsent_regs.h"

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for:
                                              Rte_Read_*, Rte_Write_*, IoHwAb_SetFctPrphlHwAg1, GetNtcQlfrSts, SetNtcSts,
                                              GetErrorStatus, and SetRamBlockStatus */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void function; Rte generation adds standard return type
                                              but no error information is returned for: GetRefTmr1MicroSec32bit and
                                              GetTiSpan1MicroSec32bit */
/* MISRA-C:2004 Rule 19.1  [NXTRDEV 19.1.1]:  AUTOSAR requires deviation from this rule for Memory Mapping include statements */
 
#define MAXWAITININ_MICROSEC_U32          ((uint32)2U)
#define DATAAVLMAXWAIT_MICROSEC_U32       ((uint32)300U)
#define COMSTSMAXWAIT_MICROSEC_U32        ((uint32)5U)
#define PRTCLFLTMASK_CNT_U32              (0xFEU)
#define SNSRIDMASK_CNT_U08                (0x00FU)
#define MSGSTSMASK_CNT_U08                (0x01U)
#define COMSTSMASK_CNT_U32                (0x30000000UL)
#define DATAMASK_CNT_U16                  (0xFFF0U)
#define REGCFGWAITTI_CNT_U32              (2UL)
#define HWAG11THTOOTHTRIG_CNT_U08         (2U)
#define HWAG10THTOOTHTRIG_CNT_U08         (1U)
#define PrmHwAg1MeasStep                  (*(const Ary1D_s16_22 *) Rte_Prm_HwAg1MeasStep_Ary1D())
#define HWAG1SNSRFLTPASSSTEP_CNT_U16	  (65535U)


static FUNC(uint8 , HwAg1Meas_CODE) CalcHwAgIdx(float32 HwAgStep_HwDeg_T_f32);
static FUNC(uint32, HwAg1Meas_CODE) ReadRegister(volatile VAR(uint32, AUTOMATIC) RegisterDummyRead_Cnt_T_u32);
static FUNC(void  , HwAg1Meas_CODE) UpdtLthOnValChng(VAR(SigQlfr1, AUTOMATIC) SigQlfrIfNtc_T_enum);

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
 * sint16: Integer in interval [-32768...32767] (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * HwAgSnsrTyp1: Enumeration of integer in interval [0...255] with enumerators
 *   HWAGSNSRTYP_NOSNSR (0U)
 *   HWAGSNSRTYP_A1335 (1U)
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
 * Ary1D_s16_22: Array with 22 element(s) of type sint16
 * Ary1D_u08_22: Array with 22 element(s) of type uint8
 *
 * Record Types:
 * =============
 * HwAgOffsRec1: Record with elements
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
 *   float32 *Rte_Pim_HwAg1PrevHwAg1(void)
 *   float32 *Rte_Pim_PrevHwAg1(void)
 *   float32 *Rte_Pim_dHwAg1MeasSnsr0Abs(void)
 *   float32 *Rte_Pim_dHwAg1MeasSnsr0Rel(void)
 *   float32 *Rte_Pim_dHwAg1MeasSnsr1Abs(void)
 *   float32 *Rte_Pim_dHwAg1MeasSnsr1Rel(void)
 *   uint32 *Rte_Pim_HwAg1RawDataAvlStrtTi(void)
 *   uint32 *Rte_Pim_dHwAg1MeasSnsr0CS(void)
 *   uint32 *Rte_Pim_dHwAg1MeasSnsr0FRXD(void)
 *   uint32 *Rte_Pim_dHwAg1MeasSnsr1CS(void)
 *   uint32 *Rte_Pim_dHwAg1MeasSnsr1FRXD(void)
 *   uint16 *Rte_Pim_PrevHwAg1Snsr0Raw(void)
 *   uint16 *Rte_Pim_PrevHwAg1Snsr1Raw(void)
 *   uint8 *Rte_Pim_HwAg1PrevRollCnt(void)
 *   uint8 *Rte_Pim_HwAg1PrevStepSeqNr(void)
 *   uint8 *Rte_Pim_HwAg1Snsr0ComStsErrCntr(void)
 *   uint8 *Rte_Pim_HwAg1Snsr0IdErrCntr(void)
 *   uint8 *Rte_Pim_HwAg1Snsr0IntSnsrErrCntr(void)
 *   uint8 *Rte_Pim_HwAg1Snsr0NoMsgErrCntr(void)
 *   uint8 *Rte_Pim_HwAg1Snsr1ComStsErrCntr(void)
 *   uint8 *Rte_Pim_HwAg1Snsr1IdErrCntr(void)
 *   uint8 *Rte_Pim_HwAg1Snsr1IntSnsrErrCntr(void)
 *   uint8 *Rte_Pim_HwAg1Snsr1NoMsgErrCntr(void)
 *   uint8 *Rte_Pim_HwAg1SnsrTrigNr(void)
 *   SigQlfr1 *Rte_Pim_PrevHwAg1Qlfr(void)
 *   uint8 *Rte_Pim_PrevHwAg1Snsr0TestOk(void)
 *   uint8 *Rte_Pim_PrevHwAg1Snsr1TestOk(void)
 *   Boolean *Rte_Pim_HwAg1IfFltLtch(void)
 *   boolean *Rte_Pim_HwAg1InitStepSeqNrCmpl(void)
 *   boolean *Rte_Pim_HwAg1LtchClr(void)
 *   HwAgOffsRec1 *Rte_Pim_HwAg1Offs(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_HwAg1MeasHwAg1IfFltFailStep_Val(void)
 *   uint16 Rte_Prm_HwAg1MeasHwAg1IfFltPassStep_Val(void)
 *   uint16 Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val(void)
 *   uint16 Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltPassStep_Val(void)
 *   uint16 Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val(void)
 *   uint16 Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltPassStep_Val(void)
 *   uint8 Rte_Prm_HwAg1MeasVrnrErrThd_Val(void)
 *   uint8 *Rte_Prm_HwAg1MeasSnsr0Rev_Ary1D(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_22
 *   uint8 *Rte_Prm_HwAg1MeasSnsr1Rev_Ary1D(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_22
 *   sint16 *Rte_Prm_HwAg1MeasStep_Ary1D(void)
 *     Returnvalue: sint16* is of type Ary1D_s16_22
 *
 *********************************************************************************************************************/


#define HwAg1Meas_START_SEC_CODE
#include "HwAg1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1AutTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg1AutTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAg1Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg1AutTrim_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1AutTrim_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAg1Meas_CODE) HwAg1AutTrim_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1AutTrim_Oper
 *********************************************************************************************************************/
      
  Rte_Pim_HwAg1Offs()->OffsTrim = *Rte_Pim_HwAg1PrevHwAg1();
  Rte_Pim_HwAg1Offs()->OffsTrimPrfmdSts = TRUE;
  (void)Rte_Call_HwAg1Offs_SetRamBlockStatus(TRUE);  

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1ClrLtch_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg1ClrLtch>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAg1IfFltLtch_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg1ClrLtch_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1ClrLtch_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAg1Meas_CODE) HwAg1ClrLtch_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1ClrLtch_Oper
 *********************************************************************************************************************/

 *Rte_Pim_HwAg1IfFltLtch() = FALSE;
 (void)Rte_Call_HwAg1IfFltLtch_SetRamBlockStatus(TRUE);
 *Rte_Pim_HwAg1LtchClr() = TRUE;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1ClrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg1ClrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAg1Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg1ClrTrim_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1ClrTrim_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAg1Meas_CODE) HwAg1ClrTrim_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1ClrTrim_Oper
 *********************************************************************************************************************/
  Rte_Pim_HwAg1Offs()->OffsTrim = 0.0F;
  Rte_Pim_HwAg1Offs()->OffsTrimPrfmdSts = FALSE;
  (void)Rte_Call_HwAg1Offs_SetRamBlockStatus(TRUE); 


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1MeasInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwAg1SnsrTyp_Val(HwAgSnsrTyp1 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPrphlHwAg1_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAg1IfFltLtch_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_HwAg1IfFltLtch_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_HwAg1Offs_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_HwAg1Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1MeasInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAg1Meas_CODE) HwAg1MeasInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1MeasInit1
 *********************************************************************************************************************/
    VAR(uint32, AUTOMATIC)  Tmr1_MicroSec_T_u32;    
    VAR(uint32, AUTOMATIC)  ElapsedTime1_MicroSec_T_u32;
    VAR(uint32, AUTOMATIC)  Tmr2_MicroSec_T_u32;    
    VAR(uint32, AUTOMATIC)  ElapsedTime2_MicroSec_T_u32;
    
	VAR(HwAgSnsrTyp1, AUTOMATIC) HwAg1SnsrTyp_Cnt_T_enum;
	
    VAR(NvM_RequestResultType, AUTOMATIC) ErrSts_Cnt_T_u08;
    VAR(NvM_RequestResultType, AUTOMATIC) HwAg1IfFltLtchErrSts_Cnt_T_u08;
    VAR(NvM_RequestResultType, AUTOMATIC) HwAg1OffsErrSts_Cnt_T_u08;
	
	(void)Rte_Read_HwAg1SnsrTyp_Val(&HwAg1SnsrTyp_Cnt_T_enum);
	
    if(HwAg1SnsrTyp_Cnt_T_enum == HWAGSNSRTYP_A1335)
	{		
		RSENT2OMC =  1U;
		
		(void)Rte_Call_GetRefTmr1MicroSec32bit_Oper(&Tmr1_MicroSec_T_u32);
		do
		{
			(void)Rte_Call_GetTiSpan1MicroSec32bit_Oper(Tmr1_MicroSec_T_u32, &ElapsedTime1_MicroSec_T_u32);
		}
		while((ElapsedTime1_MicroSec_T_u32 < MAXWAITININ_MICROSEC_U32)&&(RSENT2OMS !=  1U));
		
		RSENT2TSPC = ((uint32)0U << 16U) |     /* Master Mode                                                           */
					 ((uint32)0U << 8U ) |     /* Tick Multiplier = 1                                                   */
					 ((uint32)79U);            /* Tick Prescaler value = 80                                             */

		RSENT2CC   =    ((uint32)1U << 12U) |  /* SPC Pulse Active low*/
						((uint32)1U << 11U) |  /* Frame Check Against Previous Calibration Pulse                        */
						((uint32)1U << 10U) |  /* Slow Channel CRC Check disable                                        */
						((uint32)0U << 9U ) |  /* Fast Channel CRC Check Enable                                         */
						((uint32)0U << 6U ) |  /* No Serial Message Extraction                                          */
						((uint32)0U << 5U ) |  /* Pause Pulse for Variable Message Length                               */
						((uint32)0U << 4U ) |  /* Pause Pulse Absent                                                    */
						((uint32)3U << 1U ) |  /* 4 data nibble                                                         */
						(1U);                  /* SPC mode enable                                                       */

	   
		RSENT2BRP  =    ((uint32)0U << 24U)  |  /* Tick Time Decimal Fraction = 0.0 us                                  */
						((uint32)0U << 16U ) |  /* Time Tick Integer 1us                                                */
						((uint32)4U << 8U )  |  /* Sample Clock Division Value: 5 (80/5=16)                             */
						(0U );                  /* Sample Clock Multiplication Value: 1                                 */

		RSENT2IDE  =    ((uint32)0U <<  10U) |  /* Slow Channel Encoding Error Interrupt Enable              : Disabled */
						((uint32)0U <<  9U ) |  /* Slow Channel Message Lost Interrupt Enable                : Disabled */
						((uint32)0U <<  8U ) |  /* Slow Channel CRC Error Interrupt Enable                   : Disabled */
						((uint32)0U <<  7U ) |  /* No Response Error Interrupt Enable                        : Disabled */
						((uint32)0U <<  6U ) |  /* Calibration Pulse Length Variation Error Interrupt Enable : Disabled */
						((uint32)0U <<  5U ) |  /* Calibration Pulse Length Error Interrupt Enable           : Disabled */
						((uint32)0U <<  4U ) |  /* Fast Channel Nibble Count Error Interrupt Enable          : Disabled */
						((uint32)0U <<  3U ) |  /* Fast Channel Nibble Encoding Error Interrupt Enable       : Disabled */
						((uint32)0U <<  2U ) |  /* Fast Channel Message Lost Interrupt Enable                : Disabled */
						((uint32)0U <<  1U ) |  /* Fast Channel CRC Error Interrupt Enable                   : Disabled */
						(0U) ;                  /* Fast Channel Receive Interrupt Enable                     : Disabled */
			
		RSENT2OMC =  5U;

        (void)Rte_Call_GetRefTmr1MicroSec32bit_Oper(&Tmr2_MicroSec_T_u32);

		do
		{
			(void)Rte_Call_GetTiSpan1MicroSec32bit_Oper(Tmr2_MicroSec_T_u32, &ElapsedTime2_MicroSec_T_u32);
		}
		while((ElapsedTime2_MicroSec_T_u32 < MAXWAITININ_MICROSEC_U32)&&(RSENT2OMS != 5U));
		
		(void)Rte_Call_IoHwAb_SetFctPrphlHwAg1_Oper();
		
		(void)Rte_Call_HwAg1IfFltLtch_GetErrorStatus(&ErrSts_Cnt_T_u08);	
		if(ErrSts_Cnt_T_u08 == NVM_REQ_OK)
		{
			if((*Rte_Pim_HwAg1IfFltLtch() == TRUE) && (ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC == TRUE))
			{
				*Rte_Pim_HwAg1IfFltLtch() = TRUE;
			}
			else
			{
				*Rte_Pim_HwAg1IfFltLtch() = FALSE;
			}
		}
		else
		{
			*Rte_Pim_HwAg1IfFltLtch() = FALSE;
			(void)Rte_Call_HwAg1IfFltLtch_SetRamBlockStatus(TRUE);
			
		}
	}
	else
	{
		/* NVM Checks */
		(void)Rte_Call_HwAg1IfFltLtch_GetErrorStatus(&HwAg1IfFltLtchErrSts_Cnt_T_u08);	
		if(HwAg1IfFltLtchErrSts_Cnt_T_u08 == NVM_REQ_OK)
		{
			/* Do nothing */
		}
		else
		{
			*Rte_Pim_HwAg1IfFltLtch() = FALSE;
			(void)Rte_Call_HwAg1IfFltLtch_SetRamBlockStatus(TRUE);
		}
		
		(void)Rte_Call_HwAg1Offs_GetErrorStatus(&HwAg1OffsErrSts_Cnt_T_u08);	
		if(HwAg1OffsErrSts_Cnt_T_u08 == NVM_REQ_OK)
		{
			/* Do nothing */
		}
		else
		{
			Rte_Pim_HwAg1Offs()->OffsTrim = 0.0F;
			Rte_Pim_HwAg1Offs()->OffsTrimPrfmdSts= FALSE;
			(void)Rte_Call_HwAg1Offs_SetRamBlockStatus(TRUE);
		}
		
		/* Passed NTC */
		(void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM, 		   ELECGLBPRM_NOFLT_CNT_U08, NTCSTS_PREPASSD,  HWAG1SNSRFLTPASSSTEP_CNT_U16);
		(void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM, ELECGLBPRM_NOFLT_CNT_U08, NTCSTS_PREPASSD,  HWAG1SNSRFLTPASSSTEP_CNT_U16);
		(void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM, ELECGLBPRM_NOFLT_CNT_U08, NTCSTS_PREPASSD,  HWAG1SNSRFLTPASSSTEP_CNT_U16);
		(void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM,        ELECGLBPRM_NOFLT_CNT_U08, NTCSTS_PASSD   ,  0U);
	}
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1MeasPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1MeasPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAg1Meas_CODE) HwAg1MeasPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1MeasPer1
 *********************************************************************************************************************/
   VAR(uint32, AUTOMATIC) RefTmr_Cnt_T_u32;
   VAR(uint32, AUTOMATIC) TiSpan_Cnt_T_u32;
   
   RSENT2CSC  = 2046U;
   RSENT2SPCT =  16U;
   __SYNCM();

   if(RSENT2NRS == 1U)
   {
		RSENT2NRC = 1U;
		(void)Rte_Call_GetRefTmr1MicroSec32bit_Oper(&RefTmr_Cnt_T_u32);
		/* Wait for 2 micro secs */
		do
		{   
			(void)Rte_Call_GetTiSpan1MicroSec32bit_Oper(RefTmr_Cnt_T_u32, &TiSpan_Cnt_T_u32);
		} 
		while (TiSpan_Cnt_T_u32 < REGCFGWAITTI_CNT_U32);
		RSENT2SPCT = 16U;
   }
    
  if(*Rte_Pim_HwAg1SnsrTrigNr() < HWAG11THTOOTHTRIG_CNT_U08)
  {
     *Rte_Pim_HwAg1SnsrTrigNr()	= *Rte_Pim_HwAg1SnsrTrigNr() + 1U;
  }
  else
  {
     *Rte_Pim_HwAg1SnsrTrigNr()	= HWAG10THTOOTHTRIG_CNT_U08;
  }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1MeasPer2
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
 *   Std_ReturnType Rte_Read_HwAg1SnsrTyp_Val(HwAgSnsrTyp1 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0Raw(uint16 data)
 *   void Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0TestOk(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1MeasPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAg1Meas_CODE) HwAg1MeasPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1MeasPer2
 *********************************************************************************************************************/
	VAR(uint8 , AUTOMATIC) NewMsgRcd_Cnt_T_u08;
	VAR(uint32, AUTOMATIC) Snsr0CS_Cnt_T_u32;
	VAR(uint8 , AUTOMATIC) Snsr0FRS_Cnt_T_u08;
	VAR(uint32, AUTOMATIC) Snsr0FRXD_Cnt_T_u32;
	VAR(uint8 , AUTOMATIC) Snsr0FCCN_Cnt_T_u08;
	VAR(uint8 , AUTOMATIC) Snsr0SnsrId_Cnt_T_u08;
	VAR(uint16, AUTOMATIC) Snsr0Nibble_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) RawAvrg_Cnt_T_u16 = 0U;
	VAR(uint8 , AUTOMATIC) TestOk_Cnt_T_u08;

	VAR(HwAgSnsrTyp1, AUTOMATIC) HwAg1SnsrTyp_Cnt_T_enum;
	
	(void)Rte_Read_HwAg1SnsrTyp_Val(&HwAg1SnsrTyp_Cnt_T_enum);
	
    if(HwAg1SnsrTyp_Cnt_T_enum == HWAGSNSRTYP_A1335)
	{
		if (*Rte_Pim_HwAg1SnsrTrigNr()== HWAG10THTOOTHTRIG_CNT_U08)
		{
			Snsr0CS_Cnt_T_u32     =  RSENT2CS;
			Snsr0FRS_Cnt_T_u08    = (uint8)(Snsr0CS_Cnt_T_u32 & MSGSTSMASK_CNT_U08);
			Snsr0FRXD_Cnt_T_u32   = (uint32)RSENT2FRXD;
			Snsr0FCCN_Cnt_T_u08   = (uint8)((Snsr0FRXD_Cnt_T_u32 & COMSTSMASK_CNT_U32) >> 28U);
			Snsr0SnsrId_Cnt_T_u08 = (uint8)(Snsr0FRXD_Cnt_T_u32 & SNSRIDMASK_CNT_U08);
			Snsr0Nibble_Cnt_T_u16 = (uint16)((Snsr0FRXD_Cnt_T_u32 & DATAMASK_CNT_U16) >> 4U);
			
			*Rte_Pim_dHwAg1MeasSnsr0CS() = Snsr0CS_Cnt_T_u32;
			*Rte_Pim_dHwAg1MeasSnsr0FRXD() = Snsr0FRXD_Cnt_T_u32;
			
			if(Snsr0FRS_Cnt_T_u08 != 0U)				
			{  /* NewMsg*/
			   NewMsgRcd_Cnt_T_u08 = (uint8)(Snsr0CS_Cnt_T_u32 & PRTCLFLTMASK_CNT_U32) ;
			   
			   if (NewMsgRcd_Cnt_T_u08 == 0U)
			   {
					if(Snsr0FCCN_Cnt_T_u08 == 0U)								
				   {
						if (Snsr0SnsrId_Cnt_T_u08 == 0U)
						{
							(void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM,
                                                          ELECGLBPRM_NOFLT_CNT_U08,
                                                          NTCSTS_PREPASSD,
                                                          Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltPassStep_Val());
							RawAvrg_Cnt_T_u16 = (uint16)Snsr0Nibble_Cnt_T_u16;
							TestOk_Cnt_T_u08 = (uint8)NTCSTS_PREPASSD;
						}
						else
						{
							(void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM,
                                                          ELECGLBPRM_PRTCLFLT_CNT_U08,
                                                          NTCSTS_PREFAILD,
                                                          Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val());
							RawAvrg_Cnt_T_u16 = 0U;
							TestOk_Cnt_T_u08 = (uint8)NTCSTS_PREFAILD;
							*Rte_Pim_HwAg1Snsr0IdErrCntr() = *Rte_Pim_HwAg1Snsr0IdErrCntr() + 1U;
						}
				   }
				   else
				   {   
					   /*CommFlt*/
					   (void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM,
                                                     ELECGLBPRM_SNSRINTFLT_CNT_U08,
                                                     NTCSTS_PREFAILD,
                                                     Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val());
					   RawAvrg_Cnt_T_u16 = 0U;
					   TestOk_Cnt_T_u08 = (uint8)NTCSTS_PREFAILD; 
					   *Rte_Pim_HwAg1Snsr0IntSnsrErrCntr() = *Rte_Pim_HwAg1Snsr0IntSnsrErrCntr() + 1U;
				   }
				   
			   }
			   else
			   {
				   /*STSFLT*/
				   (void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM,
                                                 ELECGLBPRM_PRTCLFLT_CNT_U08,
                                                 NTCSTS_PREFAILD,
                                                 Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val());
				   RawAvrg_Cnt_T_u16 = 0U;
				   TestOk_Cnt_T_u08 = (uint8)NTCSTS_PREFAILD;
				   *Rte_Pim_HwAg1Snsr0ComStsErrCntr() = *Rte_Pim_HwAg1Snsr0ComStsErrCntr() + 1U;
			   }
			}
			else
			{
               /* NoNewMsg*/
			   (void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM,
                                             ELECGLBPRM_PRTCLFLT_CNT_U08,
                                             NTCSTS_PREFAILD,
                                             Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val());
			   TestOk_Cnt_T_u08 = (uint8)NTCSTS_PREFAILD;
			   *Rte_Pim_HwAg1Snsr0NoMsgErrCntr() = *Rte_Pim_HwAg1Snsr0NoMsgErrCntr() + 1U;
			}
			
			*Rte_Pim_PrevHwAg1Snsr0Raw() = RawAvrg_Cnt_T_u16;
			(void)Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0Raw(RawAvrg_Cnt_T_u16);
			*Rte_Pim_PrevHwAg1Snsr0TestOk() = TestOk_Cnt_T_u08;
			(void)Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0TestOk(TestOk_Cnt_T_u08);
		   
			RSENT2CSC = 2046U;
			
			if(RSENT2FRS == 1U)
			{
            /***** Dummy read into a Volatile variable to clear FRS register *****/
            /***** Keyword is volatile to avoid any optimization             *****/
				(void)ReadRegister((uint32)RSENT2FND);
			}   
		}
		
		else 
		{
			(void)Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0Raw(*Rte_Pim_PrevHwAg1Snsr0Raw());
			(void)Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0TestOk(*Rte_Pim_PrevHwAg1Snsr0TestOk());
		}
	}
	else 
	{
		(void)Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0Raw(0U);
		(void)Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0TestOk(NTCSTS_PREPASSD);
	}
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1MeasPer3
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
 *   Std_ReturnType Rte_Read_HwAg1SnsrTyp_Val(HwAgSnsrTyp1 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1Raw(uint16 data)
 *   void Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1TestOk(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1MeasPer3_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAg1Meas_CODE) HwAg1MeasPer3(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1MeasPer3
 *********************************************************************************************************************/
    VAR(uint8  , AUTOMATIC) NewMsgRcd_Cnt_T_u08;
	VAR(uint8  , AUTOMATIC) Snsr1FRS_Cnt_T_u08;
	VAR(uint32 , AUTOMATIC) Snsr1FRXD_Cnt_T_u32;
	VAR(uint8  , AUTOMATIC) Snsr1FCCN_Cnt_T_u08;
	VAR(uint8  , AUTOMATIC) Snsr1SnsrId_Cnt_T_u08;
	VAR(uint16 , AUTOMATIC) Snsr1Nibble_Cnt_T_u16;
	VAR(uint32 , AUTOMATIC) Snsr1CS_Cnt_T_u32;
    VAR(boolean, AUTOMATIC) SyncPulse_Cnt_T_logl;
	VAR(uint32 , AUTOMATIC) RefTmr_Cnt_T_u32;
    VAR(uint32 , AUTOMATIC) TiSpan_Cnt_T_u32;
    VAR(uint16 , AUTOMATIC) RawAvrg_Cnt_T_u16;
	VAR(uint8  , AUTOMATIC) TestOk_Cnt_T_u08;

	VAR(HwAgSnsrTyp1, AUTOMATIC) HwAg1SnsrTyp_Cnt_T_enum;
	
	(void)Rte_Read_HwAg1SnsrTyp_Val(&HwAg1SnsrTyp_Cnt_T_enum);
   
    if(HwAg1SnsrTyp_Cnt_T_enum == HWAGSNSRTYP_A1335)
	{
		if (*Rte_Pim_HwAg1SnsrTrigNr()==HWAG11THTOOTHTRIG_CNT_U08)
		{
			Snsr1CS_Cnt_T_u32     =  RSENT2CS;
			Snsr1FRS_Cnt_T_u08    = (uint8)(Snsr1CS_Cnt_T_u32 & MSGSTSMASK_CNT_U08);
			Snsr1FRXD_Cnt_T_u32   = (uint32)RSENT2FRXD;
			Snsr1FCCN_Cnt_T_u08   = (uint8)((Snsr1FRXD_Cnt_T_u32 & COMSTSMASK_CNT_U32) >> 28U);
			Snsr1SnsrId_Cnt_T_u08 = (uint8)(Snsr1FRXD_Cnt_T_u32 & SNSRIDMASK_CNT_U08);
			Snsr1Nibble_Cnt_T_u16 = (uint16)((Snsr1FRXD_Cnt_T_u32 & DATAMASK_CNT_U16) >> 4U);
			*Rte_Pim_dHwAg1MeasSnsr1CS()   =  Snsr1CS_Cnt_T_u32;
			*Rte_Pim_dHwAg1MeasSnsr1FRXD() = Snsr1FRXD_Cnt_T_u32;   
			/*RawHwAgRead1*/
		
			if(Snsr1FRS_Cnt_T_u08 != 0U)				
			{
			   /*NewMsg*/	
			   NewMsgRcd_Cnt_T_u08  = (uint8)(Snsr1CS_Cnt_T_u32 & PRTCLFLTMASK_CNT_U32);
			   
			   if (NewMsgRcd_Cnt_T_u08 == 0U)
			   {
				   if(Snsr1FCCN_Cnt_T_u08 == 0U)								
				   {
						if ((Snsr1SnsrId_Cnt_T_u08) == 1U)
						{
							(void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM,
                                                          ELECGLBPRM_NOFLT_CNT_U08,
                                                          NTCSTS_PREPASSD,
                                                          Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltPassStep_Val());
							RawAvrg_Cnt_T_u16 = Snsr1Nibble_Cnt_T_u16;
							TestOk_Cnt_T_u08 = (uint8)NTCSTS_PREPASSD;
							SyncPulse_Cnt_T_logl = TRUE;
						}
						else
						{   
							
							(void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM,
                                                          ELECGLBPRM_PRTCLFLT_CNT_U08,
                                                          NTCSTS_PREFAILD,
                                                          Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val());
							RawAvrg_Cnt_T_u16 = 0U;
							TestOk_Cnt_T_u08 = (uint8)NTCSTS_PREFAILD;
							(void)Rte_Call_GetRefTmr1MicroSec32bit_Oper(Rte_Pim_HwAg1RawDataAvlStrtTi());
							*Rte_Pim_HwAg1Snsr1IdErrCntr() = *Rte_Pim_HwAg1Snsr1IdErrCntr() + 1U;
							SyncPulse_Cnt_T_logl = FALSE;
						}
				   }
				   else
				   {
					   /*CommFlt*/
						(void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM,
                                                      ELECGLBPRM_SNSRINTFLT_CNT_U08,
                                                      NTCSTS_PREFAILD,
                                                      Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val());
						RawAvrg_Cnt_T_u16 = 0U;
						TestOk_Cnt_T_u08 = (uint8)NTCSTS_PREFAILD; 
						*Rte_Pim_HwAg1Snsr1IntSnsrErrCntr() = *Rte_Pim_HwAg1Snsr1IntSnsrErrCntr() + 1U;
						SyncPulse_Cnt_T_logl = FALSE;
				   }
			   }
			   else
			   {
				   /*STSFLT*/
				   (void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM,
                                                 ELECGLBPRM_PRTCLFLT_CNT_U08,
                                                 NTCSTS_PREFAILD,
                                                 Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val());
					RawAvrg_Cnt_T_u16 = 0U;
					TestOk_Cnt_T_u08 = (uint8)NTCSTS_PREFAILD; 
					*Rte_Pim_HwAg1Snsr1ComStsErrCntr() = *Rte_Pim_HwAg1Snsr1ComStsErrCntr() + 1U;
					SyncPulse_Cnt_T_logl = FALSE;
			   }   
			}
			else
			{  
			   /*NoNewMsg*/
			   (void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM,
                                             ELECGLBPRM_PRTCLFLT_CNT_U08,
                                             NTCSTS_PREFAILD,
                                             Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val());
			   RawAvrg_Cnt_T_u16 = 0U;
			   TestOk_Cnt_T_u08 = (uint8)NTCSTS_PREFAILD;
			   *Rte_Pim_HwAg1Snsr1NoMsgErrCntr() = *Rte_Pim_HwAg1Snsr1NoMsgErrCntr() + 1U;
			   SyncPulse_Cnt_T_logl = FALSE;
			}
			
			*Rte_Pim_PrevHwAg1Snsr1Raw() = RawAvrg_Cnt_T_u16;
			Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1Raw(RawAvrg_Cnt_T_u16);
			*Rte_Pim_PrevHwAg1Snsr1TestOk() = TestOk_Cnt_T_u08;
			Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1TestOk(TestOk_Cnt_T_u08);
			
			RSENT2CSC = 2046U;

			if(RSENT2FRS == 1U)
			{
                /***** Dummy read into a Volatile variable to clear FRS register *****/
                /***** Keyword is volatile to avoid any optimization *****/
				(void)ReadRegister((uint32)RSENT2FND);
			}
			/*Sync Pulse logic*/
			if(SyncPulse_Cnt_T_logl ==FALSE)
			{    
				RSENT2SPCT = 103U;  /*Snsr Synchronization */
				__SYNCM();
				if(RSENT2NRS == 1U)
				{
					RSENT2NRC = 1U;
					(void)Rte_Call_GetRefTmr1MicroSec32bit_Oper(&RefTmr_Cnt_T_u32);
					/* Wait for 2 micro secs */
					do
					{   
						(void)Rte_Call_GetTiSpan1MicroSec32bit_Oper(RefTmr_Cnt_T_u32, &TiSpan_Cnt_T_u32);
					} 
					while (TiSpan_Cnt_T_u32 < REGCFGWAITTI_CNT_U32);
					RSENT2SPCT = 103U;  /*Snsr Synchronization */
				}		 
			}
		}
		/*RawHwAgRead1*/
		else 
		{
			(void)Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1Raw(*Rte_Pim_PrevHwAg1Snsr1Raw());
			(void)Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1TestOk(*Rte_Pim_PrevHwAg1Snsr1TestOk());
		}
	}
	else	
	{
		(void)Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1Raw(0U);
		(void)Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1TestOk(NTCSTS_PREPASSD);
	}
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1MeasPer4
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
 *   Std_ReturnType Rte_Read_HwAg1Polarity_Val(sint8 *data)
 *   Std_ReturnType Rte_Read_HwAg1SnsrTyp_Val(HwAgSnsrTyp1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAg1_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAg1Qlfr_Val(SigQlfr1 data)
 *   Std_ReturnType Rte_Write_HwAg1RollgCntr_Val(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint16 Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0Raw(void)
 *   uint8 Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0TestOk(void)
 *   uint16 Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1Raw(void)
 *   uint8 Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1TestOk(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1MeasPer4_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAg1Meas_CODE) HwAg1MeasPer4(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1MeasPer4
 *********************************************************************************************************************/
    
	VAR(float32, AUTOMATIC) HwAg1MeasSnsr0Rel_Uls_T_f32 ;
	VAR(float32, AUTOMATIC) HwAg1MeasSnsr1Rel_Uls_T_f32 ;
	VAR(float32, AUTOMATIC) HwAg1Step_Uls_T_f32;
	VAR(float32, AUTOMATIC) HwAg1MeasSnsr0Rev_Cnt_T_f32 ;
	VAR(float32, AUTOMATIC) HwAg1MeasSnsr1Rev_Cnt_T_f32 ;
	VAR(float32, AUTOMATIC) HwAg1Snsr0Abs_Rev_T_f32;
	VAR(float32, AUTOMATIC) HwAg1Snsr1Abs_Rev_T_f32;
	VAR(float32, AUTOMATIC) HwAg1Meas_Deg_T_f32 ;
	VAR(float32, AUTOMATIC) HwAg1Meas_HwDeg_T_f32 ;
	VAR(float32, AUTOMATIC) HwAg1_HwDeg_T_f32 ;
	
	VAR(uint8 , AUTOMATIC) HwAg1Snsr0TestOk_Cnt_T_u08;
	VAR(uint8 , AUTOMATIC) HwAg1Snsr1TestOk_Cnt_T_u08;
	VAR(uint8 , AUTOMATIC) HwAg1StepSeqNr_Cnt_T_u08 ;
	VAR(uint8 , AUTOMATIC) HwAg1DiffStep_Cnt_T_u08 ;
	VAR(sint8 , AUTOMATIC) HwAg1Polarity_Uls_T_s08;
	VAR(uint16, AUTOMATIC) HwAg1Snsr1Raw_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) HwAg1Snsr0Raw_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) Index_Cnt_T_u16;
	
	VAR(SigQlfr1, AUTOMATIC) SigQlfrSnsr0PrtclNtc_T_enum;
	VAR(SigQlfr1, AUTOMATIC) SigQlfrIfNtc_T_enum;
	VAR(SigQlfr1, AUTOMATIC) SigQlfrSnsr1PrtclNtc_T_enum;
	VAR(SigQlfr1, AUTOMATIC) SigQlfrMfgNtc_T_enum;
	VAR(SigQlfr1, AUTOMATIC) HwAg1Qlfr_Cnt_T_enum;

	VAR(HwAgSnsrTyp1, AUTOMATIC) HwAg1SnsrTyp_Cnt_T_enum;
	
	(void)Rte_Read_HwAg1SnsrTyp_Val(&HwAg1SnsrTyp_Cnt_T_enum);
		
    HwAg1Snsr0Raw_Cnt_T_u16 	= Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0Raw();
    HwAg1Snsr0TestOk_Cnt_T_u08 	= Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0TestOk();
    HwAg1Snsr1Raw_Cnt_T_u16 	= Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1Raw();
    HwAg1Snsr1TestOk_Cnt_T_u08 	= Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1TestOk();
    (void)Rte_Read_HwAg1Polarity_Val(&HwAg1Polarity_Uls_T_s08);
	
	if(HwAg1SnsrTyp_Cnt_T_enum == HWAGSNSRTYP_A1335)
	{
		/*HwAgRead*/
		if (*Rte_Pim_HwAg1SnsrTrigNr() == HWAG11THTOOTHTRIG_CNT_U08)
		{
			if((HwAg1Snsr0TestOk_Cnt_T_u08 == 2U) &&(HwAg1Snsr1TestOk_Cnt_T_u08 == 2U))
			{
				/*HwAg1Snsr0RelCalc*/
				HwAg1MeasSnsr0Rel_Uls_T_f32   = (float32)HwAg1Snsr0Raw_Cnt_T_u16 * ELECGLBPRM_HWAGSCA_ULS_F32; 
				*Rte_Pim_dHwAg1MeasSnsr0Rel() = HwAg1MeasSnsr0Rel_Uls_T_f32;
				/*HwAg1Snsr1RelCalc*/
				HwAg1MeasSnsr1Rel_Uls_T_f32   = (float32)HwAg1Snsr1Raw_Cnt_T_u16 * ELECGLBPRM_HWAGSCA_ULS_F32; 
				*Rte_Pim_dHwAg1MeasSnsr1Rel() = HwAg1MeasSnsr1Rel_Uls_T_f32;
				/*AdjStepCalc*/
				
				/************Intpn************/
				
				/*StepCalc*/
				HwAg1Step_Uls_T_f32 = HwAg1MeasSnsr0Rel_Uls_T_f32 - (ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32 * HwAg1MeasSnsr1Rel_Uls_T_f32);
				Index_Cnt_T_u16 =CalcHwAgIdx(HwAg1Step_Uls_T_f32);
				
				HwAg1MeasSnsr0Rev_Cnt_T_f32 = (float32)Rte_Prm_HwAg1MeasSnsr0Rev_Ary1D()[Index_Cnt_T_u16];
				HwAg1MeasSnsr1Rev_Cnt_T_f32 = (float32)Rte_Prm_HwAg1MeasSnsr1Rev_Ary1D()[Index_Cnt_T_u16];
				HwAg1StepSeqNr_Cnt_T_u08 = (uint8)(Index_Cnt_T_u16 + 1U);
				/* SkipStep Error*/
				if(*Rte_Pim_HwAg1InitStepSeqNrCmpl() == FALSE)
				{
					*Rte_Pim_HwAg1PrevStepSeqNr() = HwAg1StepSeqNr_Cnt_T_u08;
					*Rte_Pim_HwAg1InitStepSeqNrCmpl() = TRUE;
				}
				/*Diagc*/
				HwAg1DiffStep_Cnt_T_u08 = Abslt_u08_s08( (sint8)HwAg1StepSeqNr_Cnt_T_u08 - (sint8)*Rte_Pim_HwAg1PrevStepSeqNr());
				if((HwAg1DiffStep_Cnt_T_u08 <= 1U) || (HwAg1DiffStep_Cnt_T_u08 == 21U))
				{
					HwAg1Snsr0Abs_Rev_T_f32 =(HwAg1MeasSnsr0Rel_Uls_T_f32 + (HwAg1MeasSnsr0Rev_Cnt_T_f32 * ELECGLBPRM_DEGPERREV_DEGPERREV_F32))* ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32;
					HwAg1Snsr1Abs_Rev_T_f32 =(HwAg1MeasSnsr1Rel_Uls_T_f32 + (HwAg1MeasSnsr1Rev_Cnt_T_f32 * ELECGLBPRM_DEGPERREV_DEGPERREV_F32))* ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32;
					*Rte_Pim_dHwAg1MeasSnsr0Abs() = HwAg1Snsr0Abs_Rev_T_f32;
					*Rte_Pim_dHwAg1MeasSnsr1Abs() = HwAg1Snsr1Abs_Rev_T_f32;

					if(Abslt_f32_f32(HwAg1Snsr0Abs_Rev_T_f32-HwAg1Snsr1Abs_Rev_T_f32) < (float32)Rte_Prm_HwAg1MeasVrnrErrThd_Val())		
					{
						/********The implementation brings in the block "HwAg1Final" inside the  True Condition of the "finalAbsAg"  as the other error condition will just retain the previous value and rolling counter will not change.
						It saves extra instructions in the implemenetation to the match the FDD. Final Functionality is still the same.**************/
						HwAg1Meas_Deg_T_f32  = ((HwAg1Snsr0Abs_Rev_T_f32 + HwAg1Snsr1Abs_Rev_T_f32) * 0.5F) - ((float32)ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32);
						(void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM, ELECGLBPRM_NOFLT_CNT_U08, NTCSTS_PREPASSD, Rte_Prm_HwAg1MeasHwAg1IfFltPassStep_Val());   
						HwAg1Meas_HwDeg_T_f32 = (float32)HwAg1Polarity_Uls_T_s08 * HwAg1Meas_Deg_T_f32; 
						*Rte_Pim_HwAg1PrevHwAg1()  = HwAg1Meas_HwDeg_T_f32;
						/****** Roll Over is intentional. Thus counter acts in circular.********/
						*Rte_Pim_HwAg1PrevRollCnt() = *Rte_Pim_HwAg1PrevRollCnt() + 1U;		
					}
					else
					{
						(void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM,
                                                      ELECGLBPRM_VRNRERRFLT_CNT_U08,
                                                      NTCSTS_PREFAILD,
                                                      Rte_Prm_HwAg1MeasHwAg1IfFltFailStep_Val());
					}
					*Rte_Pim_HwAg1PrevStepSeqNr()= HwAg1StepSeqNr_Cnt_T_u08;
				}
				else
				{
					(void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM,
                                                  ELECGLBPRM_SKIPSTEPFLT_CNT_U08,
                                                  NTCSTS_PREFAILD,
                                                  Rte_Prm_HwAg1MeasHwAg1IfFltFailStep_Val());
				}
				
				if(*Rte_Pim_HwAg1IfFltLtch() == TRUE)
				{
					(void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM,
                                                  ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08,
                                                  NTCSTS_PREFAILD,
                                                  Rte_Prm_HwAg1MeasHwAg1IfFltFailStep_Val());
				}
			}
			
			HwAg1_HwDeg_T_f32 = *Rte_Pim_HwAg1PrevHwAg1() - Rte_Pim_HwAg1Offs()->OffsTrim;
			
			if(HwAg1_HwDeg_T_f32 < ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32)
			{
				HwAg1_HwDeg_T_f32 = HwAg1_HwDeg_T_f32 + (2.0F * ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32 );
			}
			else if(HwAg1_HwDeg_T_f32 > (float32)ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32)
			{
				HwAg1_HwDeg_T_f32 = HwAg1_HwDeg_T_f32 + (2.0F * ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32);
			}
			else
			{
				/* Do nothing*/
			}
			HwAg1_HwDeg_T_f32	 = Lim_f32(HwAg1_HwDeg_T_f32, ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32, ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32);
			*Rte_Pim_PrevHwAg1() = HwAg1_HwDeg_T_f32;
				
			(void)Rte_Call_GetNtcQlfrSts_Oper(HWAG1MEAS_HWAG1SNSR0PRTCLNTCNR_CNT_ENUM, &SigQlfrSnsr0PrtclNtc_T_enum);
			(void)Rte_Call_GetNtcQlfrSts_Oper(HWAG1MEAS_HWAG1SNSR1PRTCLNTCNR_CNT_ENUM, &SigQlfrSnsr1PrtclNtc_T_enum);
			(void)Rte_Call_GetNtcQlfrSts_Oper(HWAG1MEAS_HWAG1IFNTCNR_CNT_ENUM, &SigQlfrIfNtc_T_enum);
			(void)Rte_Call_GetNtcQlfrSts_Oper(HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM, &SigQlfrMfgNtc_T_enum);
			
			if ((SigQlfrSnsr0PrtclNtc_T_enum != SIGQLFR_FAILD) &&
				(SigQlfrSnsr1PrtclNtc_T_enum != SIGQLFR_FAILD) &&
				(SigQlfrIfNtc_T_enum  != SIGQLFR_FAILD) &&
				(SigQlfrMfgNtc_T_enum != SIGQLFR_FAILD))
			{
				 HwAg1Qlfr_Cnt_T_enum = SIGQLFR_PASSD;
			}
			else
			{
				 HwAg1Qlfr_Cnt_T_enum	 = SIGQLFR_FAILD;
			}
			*Rte_Pim_PrevHwAg1Qlfr() = HwAg1Qlfr_Cnt_T_enum;
			
			/* Update Latch on value change */
			UpdtLthOnValChng(SigQlfrIfNtc_T_enum);
		}
		
		/*HwAgPrevRead*/
		else 
		{
			HwAg1_HwDeg_T_f32    = *Rte_Pim_PrevHwAg1();
			HwAg1Qlfr_Cnt_T_enum = *Rte_Pim_PrevHwAg1Qlfr();
		}
		
		(void)Rte_Write_HwAg1RollgCntr_Val(*Rte_Pim_HwAg1PrevRollCnt());
	}
	else
	{
		HwAg1_HwDeg_T_f32    = 0.0F;
		HwAg1Qlfr_Cnt_T_enum = SIGQLFR_PASSD;
		(void)Rte_Write_HwAg1RollgCntr_Val(0U);
	}
	
	(void)Rte_Write_HwAg1Qlfr_Val(HwAg1Qlfr_Cnt_T_enum);
	(void)Rte_Write_HwAg1_Val(HwAg1_HwDeg_T_f32);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1MeasPer5
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
 * Symbol: HwAg1MeasPer5_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAg1Meas_CODE) HwAg1MeasPer5(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1MeasPer5
 *********************************************************************************************************************/
   
   if (Rte_Pim_HwAg1Offs()->OffsTrimPrfmdSts != FALSE)
   {
	   (void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM,
                                     ELECGLBPRM_NOFLT_CNT_U08,
                                     NTCSTS_PASSD,
                                     0U);
   }
   else
   {
	   (void)Rte_Call_SetNtcSts_Oper(HWAG1MEAS_HWAG1MFGNTCNR_CNT_ENUM,
                                     ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08,
                                     NTCSTS_FAILD,
                                     0U);
   }
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1ReadTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg1ReadTrim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg1ReadTrim_Oper(float32 *HwAgReadTrimData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1ReadTrim_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAg1Meas_CODE) HwAg1ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_HWAG1MEAS_APPL_VAR) HwAgReadTrimData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1ReadTrim_Oper
 *********************************************************************************************************************/
     *HwAgReadTrimData_Arg = Rte_Pim_HwAg1Offs()->OffsTrim; 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1TrimPrfmdSts_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg1TrimPrfmdSts>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg1TrimPrfmdSts_Oper(boolean *HwAgOffsTrimPrfmdStsData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1TrimPrfmdSts_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAg1Meas_CODE) HwAg1TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_HWAG1MEAS_APPL_VAR) HwAgOffsTrimPrfmdStsData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1TrimPrfmdSts_Oper
 *********************************************************************************************************************/
	 *HwAgOffsTrimPrfmdStsData_Arg = Rte_Pim_HwAg1Offs()->OffsTrimPrfmdSts; 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAg1WrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwAg1WrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwAg1Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwAg1WrTrim_Oper(float32 HwAgWrOffsTrimData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1WrTrim_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HwAg1Meas_CODE) HwAg1WrTrim_Oper(float32 HwAgWrOffsTrimData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAg1WrTrim_Oper
 *********************************************************************************************************************/
  Rte_Pim_HwAg1Offs()->OffsTrim = HwAgWrOffsTrimData_Arg;
  Rte_Pim_HwAg1Offs()->OffsTrimPrfmdSts = TRUE;
  (void)Rte_Call_HwAg1Offs_SetRamBlockStatus(TRUE);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HwAg1Meas_STOP_SEC_CODE
#include "HwAg1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/*********************************************************************************************************************
 * Name        : CalcHwAgIdx
 * Description : The implementation finds the minimum of absolute values of the difference between HwAg1Step with all
 *               the values from the Calibration table and find the index associated with minimum value of the
 *               difference in the calibration table.
 * Inputs      : HwAgStep_HwDeg_T_f32
 * Outputs     : Index_Cnt_T_u08
 * Usage Notes : None
 **********************************************************************************************************************/
static FUNC(uint8, HwAg1Meas_CODE) CalcHwAgIdx(float32 HwAgStep_HwDeg_T_f32)
{
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Search_Cnt_T_u08;
    
	VAR(float32, AUTOMATIC) HwAg1Min_HwDeg_T_f32;

	Index_Cnt_T_u08 = 0U;
	HwAg1Min_HwDeg_T_f32 = Abslt_f32_f32((float32)PrmHwAg1MeasStep[0]- HwAgStep_HwDeg_T_f32);
	for (Search_Cnt_T_u08 = 1U;
			 Search_Cnt_T_u08 < ((uint8)TblSize_m(PrmHwAg1MeasStep));
			 Search_Cnt_T_u08++)
	{
			/* Check if the level is in this range */
		if (Abslt_f32_f32((float32)PrmHwAg1MeasStep[Search_Cnt_T_u08]- HwAgStep_HwDeg_T_f32) < HwAg1Min_HwDeg_T_f32)
		{
			HwAg1Min_HwDeg_T_f32 = Abslt_f32_f32((float32)PrmHwAg1MeasStep[Search_Cnt_T_u08] - HwAgStep_HwDeg_T_f32);
			Index_Cnt_T_u08 = Search_Cnt_T_u08;
		}
	}
    
    return (Index_Cnt_T_u08);
}

/*********************************************************************************************************************
 * Name        : ReadRegister
 * Description : This function can be used both for read-and-use and for read-and-discard. Since a register read
 *               is required to clear FRS register, it is only used for read-and-discard within this component.
 * Inputs      : Address RegisterDummyRead_Cnt_T_u32
 * Outputs     : None
 * Usage Notes : None
 **********************************************************************************************************************/
static FUNC(uint32, HwAg1Meas_CODE)  ReadRegister(volatile VAR(uint32, AUTOMATIC) RegisterDummyRead_Cnt_T_u32)
{
    return RegisterDummyRead_Cnt_T_u32;
}

/*********************************************************************************************************************
 * Name		   : UpdtLthOnValChng
 * Description : This function is split from Per4 to reduce path count ad cyclomatic complexity.
 * Inputs	   : SigQlfrIfNtc_T_enum
 * Outputs	   : None
 * Usage Notes : Path in Model: CM670A_HwAg1Meas/HwAg1Meas/HwAg1MeasPer4/HwAgRead/Update Latch on value change
 **********************************************************************************************************************/
static FUNC(void, HwAg1Meas_CODE)  UpdtLthOnValChng(VAR(SigQlfr1, AUTOMATIC) SigQlfrIfNtc_T_enum)
{
	/* Update Latch on value change */
	if( (SigQlfrIfNtc_T_enum == SIGQLFR_FAILD) &&  
		(*Rte_Pim_HwAg1IfFltLtch() == FALSE) &&
		(*Rte_Pim_HwAg1LtchClr() == FALSE) )
	{
		*Rte_Pim_HwAg1IfFltLtch() = TRUE;
		(void)Rte_Call_HwAg1IfFltLtch_SetRamBlockStatus(TRUE);
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
