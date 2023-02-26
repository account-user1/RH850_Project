/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_HwTq1Meas.c
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/CM660A_HwTq1Meas_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_HwTq1Meas
 *  Generated at:  Fri Apr 13 08:36:34 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_HwTq1Meas>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
* Copyright 2015, 2016, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_HwTq1Meas.c
* Module Description: HandWheel Torque 1 SENT - complex device driver
* Project           : CBD
* Author            : Rijvi Ahmed
***********************************************************************************************************************
* Version Control:
* %version:          8 %
* %derived_by:       nz3541 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 08/11/15   1       Rijvi     Initial Version                                                                EA4#1030
* 09/17/15   2       Rijvi     Implement Software Rack Limiter EOT. (CM660A_HwTq1Meas_Design_1.2.0)           EA4#1378
* 10/14/15   3       Selva     Updated for CM660A_HwTq1Meas_Design_1.4.0                                      EA4#1922
* 10/23/15   4       Rijvi     Updated for CM660A_HwTq1Meas_Design_1.5.0                                      EA4#2218
* 12/21/15   5       Selva     CM660A HwTq1Meas Rev1.6.0 - Implementation (A3079)                             EA4#3158 
* 01/21/16   6       Selva     CM660A HwTq1Meas Rev1.7.0 - Implementation (A3079)                             EA4#3375 
* 03/28/16   7       KK        CM660A HwTq1Meas Rev1.9.0 - Implementation (A3079) (Fix for EA4#4799)          EA4#4929
* 03/29/18   8       SPP       Fault injection added and anomaly fixes                                        EA4#15981
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

#include "Rte_CDD_HwTq1Meas.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "rsent_regs.h"
#include "ElecGlbPrm.h"
#include "NxtrMath.h"
#include "CDD_HwTq1Meas_Cfg.h"
#include "CDD_HwTq1Meas.h"
#include <v800_ghs.h>
#include "FltInj.h"
/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Read_*, 
   Rte_Write_*, SetRamBlockStatus, GetNtcQlfrSts, SetNtcSts, and IoHwAb_SetFctPrphlHwTq1 */

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]:Server runnable is a void functon; Rte generation adds standard return type 
   but no error information is returned for GetRefTmr1MicroSec32bit, GetTiSpan1MicroSec32bit, FltInj_f32 */



/********************************************* Embedded Local Constants **********************************************/
#define  EOTIDTWO_CNT_U08				((uint8)2U)
#define  EOTIDTHREE_CNT_U08				((uint8)3U)
#define  EOTIDFOUR_CNT_U08				((uint8)4U)
#define  ROLLGCNTRMAXVAL_CNT_U08        ((uint8)255U)
#define  EOTLNMASK_CNT_U16              ((uint16)15U)
#define  EOTUNMASK_CNT_U16              ((uint16)240U)
#define  SENTSYNCTRIG_CNT_U32			((uint32)16UL)
#define  REGCFGWAITTI_CNT_U32			((uint32)2UL)

#define  RACKLIMRCCWEOTSCA_ULS_F32		(-0.1953F)
#define  RACKLIMRCWEOTSCA_ULS_F32		(0.1953F)
#define  RACKLIMREOTSIGHILIM_HWDEG_F32	(800.0F)  
#define  RACKLIMREOTSIGLOLIM_HWDEG_F32	(-800.0F)  




/******************************************** Local Function Prototypes **********************************************/
static FUNC(void, CDD_HwTq1Meas_CODE) RackLimrEotSigRead( uint32 RackLimrEotSig1CS_Cnt_T_u32, uint32 RackLimrEotSig1SND_Cnt_T_u32 );
static FUNC(uint32, CDD_HwTq1Meas_CODE)  ReadRegister(volatile VAR(uint32, AUTOMATIC) RegisterDummyRead_Cnt_T_u32);
static FUNC(void, CDD_HwTq0Meas_CODE) UpdRollgCntr(void);


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
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
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
 *   float32 *Rte_Pim_HwTq1MeasPrevHwTq1(void)
 *   float32 *Rte_Pim_RackLimrCcwEot1(void)
 *   float32 *Rte_Pim_RackLimrCwEot1(void)
 *   uint32 *Rte_Pim_HwTq1MsgMissRxCnt(void)
 *   uint8 *Rte_Pim_HwTq1ComStsErrCntr(void)
 *   uint8 *Rte_Pim_HwTq1IntSnsrErrCntr(void)
 *   uint8 *Rte_Pim_HwTq1MeasPrevRollgCntr(void)
 *   uint8 *Rte_Pim_RackLimrEot1Data0(void)
 *   uint8 *Rte_Pim_RackLimrEot1Data1(void)
 *   uint8 *Rte_Pim_RackLimrEot1Data2(void)
 *   boolean *Rte_Pim_RackLimrEot1Avl(void)
 *   boolean *Rte_Pim_RackLimrEot1Id2DataReadCmpl(void)
 *   boolean *Rte_Pim_RackLimrEot1Id3DataReadCmpl(void)
 *   boolean *Rte_Pim_RackLimrEot1Id4DataReadCmpl(void)
 *   HwTqOffsRec1 *Rte_Pim_HwTq1Offs(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   HwTqOffsRec1 *Rte_CData_HwTq1OffsDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_HwTq1MeasHwTq1PrtclFltFailStep_Val(void)
 *   uint16 Rte_Prm_HwTq1MeasHwTq1PrtclFltPassStep_Val(void)
 *
 *********************************************************************************************************************/


#define CDD_HwTq1Meas_START_SEC_CODE
#include "CDD_HwTq1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasHwTq1AutTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq1MeasHwTq1AutTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq1Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq1MeasHwTq1AutTrim_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasHwTq1AutTrim_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasHwTq1AutTrim_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasHwTq1AutTrim_Oper
 *********************************************************************************************************************/
	
	Rte_Pim_HwTq1Offs()->OffsTrim = *Rte_Pim_HwTq1MeasPrevHwTq1();
	Rte_Pim_HwTq1Offs()->OffsTrimPrfmdSts = TRUE;
	
	(void) Rte_Call_HwTq1Offs_SetRamBlockStatus( TRUE );


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasHwTq1ClrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq1MeasHwTq1ClrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq1Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq1MeasHwTq1ClrTrim_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasHwTq1ClrTrim_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasHwTq1ClrTrim_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasHwTq1ClrTrim_Oper
 *********************************************************************************************************************/
	
	Rte_Pim_HwTq1Offs()->OffsTrim = 0.0F;
	Rte_Pim_HwTq1Offs()->OffsTrimPrfmdSts = FALSE;
	
	(void) Rte_Call_HwTq1Offs_SetRamBlockStatus( TRUE );

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasHwTq1ReadTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq1MeasHwTq1ReadTrim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq1MeasHwTq1ReadTrim_Oper(float32 *HwTqReadTrimData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasHwTq1ReadTrim_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasHwTq1ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_HWTQ1MEAS_APPL_VAR) HwTqReadTrimData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasHwTq1ReadTrim_Oper
 *********************************************************************************************************************/

	*HwTqReadTrimData_Arg = Rte_Pim_HwTq1Offs()->OffsTrim;
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasHwTq1TrimPrfmdSts_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq1MeasHwTq1TrimPrfmdSts>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq1MeasHwTq1TrimPrfmdSts_Oper(boolean *HwTqOffsTrimPrfmdStsData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasHwTq1TrimPrfmdSts_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasHwTq1TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CDD_HWTQ1MEAS_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasHwTq1TrimPrfmdSts_Oper
 *********************************************************************************************************************/

	*HwTqOffsTrimPrfmdStsData_Arg = Rte_Pim_HwTq1Offs()->OffsTrimPrfmdSts; 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasHwTq1WrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq1MeasHwTq1WrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq1Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq1MeasHwTq1WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasHwTq1WrTrim_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasHwTq1WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasHwTq1WrTrim_Oper
 *********************************************************************************************************************/
	
	Rte_Pim_HwTq1Offs()->OffsTrim = HwTqWrOffsTrimData_Arg;
	Rte_Pim_HwTq1Offs()->OffsTrimPrfmdSts = TRUE;
	
	(void) Rte_Call_HwTq1Offs_SetRamBlockStatus( TRUE );

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasInit1
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
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPrphlHwTq1_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasInit1
 *********************************************************************************************************************/

	VAR(uint32,   AUTOMATIC) RefTmr_Cnt_T_u32; 
	VAR(uint32,   AUTOMATIC) TiSpan_Cnt_T_u32; 
	
 
	RSENT1MDC = 1ul;						/* 1 - Configuration */
	
	(void) Rte_Call_GetRefTmr1MicroSec32bit_Oper( &RefTmr_Cnt_T_u32 );
	
	do
	{	/* Wait until the SENT peripheral goes to the configuration mode */
		
		(void) Rte_Call_GetTiSpan1MicroSec32bit_Oper( RefTmr_Cnt_T_u32, &TiSpan_Cnt_T_u32 );
	} while( (TiSpan_Cnt_T_u32 < REGCFGWAITTI_CNT_U32) && (RSENT1MST != 1ul) ); /* 1 - Configuration */
	
	
	RSENT1TSPC = ((uint32)(0ul << 16)) |	/* Master Mode */
				 ((uint32)(0ul << 8))  |	/* Tick Multiplier = 1 */
				 79ul;						/* Tick Prescaler value = 80 */
	
	RSENT1CC = ((uint32)(1ul << 12)) |		/* SPC Pulse Active low */
			   ((uint32)(1ul << 11)) |		/* Frame Check Against Previous Calibration Pulse */
			   ((uint32)(0ul << 10)) |		/* Slow Channel CRC Check enable */
			   ((uint32)(0ul << 9))  |		/* Fast Channel CRC Check Enable */
			   ((uint32)(1ul << 6))  |		/* Short Serial Message Format */
			   ((uint32)(0ul << 5))  |		/* Pause Pulse for Variable Message Length */
			   ((uint32)(0ul << 4))  |		/* Pause Pulse Absent */
			   ((uint32)(2ul << 1))  |		/* 3 data nibble */
			   1ul;							/* SPC mode enable */
	
	RSENT1BRP = ((uint32)(2ul << 24)) |		/* Tick Time Decimal Fraction = 0.2 us */
				((uint32)(0ul << 16)) |		/* Time Tick Integer 1 us */
				((uint32)(4ul << 8))  |		/* Sample Clock Division Value: 5 (80/5 = 16) */
				0ul;						/* Sample Clock Multiplication Value: 1 */
	
	RSENT1IDE = ((uint32)(0ul << 10)) |		/* Slow Channel Encoding Error Interrupt Enable: Disabled */
				((uint32)(0ul << 9))  |		/* Slow Channel Message Lost Interrupt Enable: Disabled */
				((uint32)(0ul << 8))  |		/* Slow Channel CRC Error Interrupt Enable: Disabled */
				((uint32)(0ul << 7))  |		/* No Response Error Interrupt Enable: Disabled */
				((uint32)(0ul << 6))  |		/* Calibration Pulse Length Variation Error Interrupt Enable: Disabled */
				((uint32)(0ul << 5))  |		/* Calibration Pulse Length Error Interrupt Enable: Disabled */
				((uint32)(0ul << 4))  |		/* Fast Channel Nibble Count Error Interrupt Enable: Disabled */
				((uint32)(0ul << 3))  |		/* Fast Channel Nibble Encoding Error Interrupt Enable: Disabled */
				((uint32)(0ul << 2))  |		/* Fast Channel Message Lost Interrupt Enable: Disabled */
				((uint32)(0ul << 1))  |		/* Fast Channel CRC Error Interrupt Enable: Disabled */
				0ul;						/* Fast Channel Receive Interrupt Enable: Disabled */
	
	RSENT1SPCT = 16ul;						/* 17 Tick => 1.22*17 = 20.74us */
	
	RSENT1MDC = 5ul;						/* 5 - Operation Active */
	
	(void) Rte_Call_GetRefTmr1MicroSec32bit_Oper( &RefTmr_Cnt_T_u32 );
	
	do
	{	/* Wait until the SENT peripheral goes to the Active mode */
		
		(void) Rte_Call_GetTiSpan1MicroSec32bit_Oper( RefTmr_Cnt_T_u32, &TiSpan_Cnt_T_u32 );
	} while( (TiSpan_Cnt_T_u32 < REGCFGWAITTI_CNT_U32) && (RSENT1MST != 5ul) ); /* 5 - Operation Active */
	
        (void)Rte_Call_IoHwAb_SetFctPrphlHwTq1_Oper();
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasPer1
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
 *   Std_ReturnType Rte_Read_HwTq1Polarity_Val(sint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTq1_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTq1Qlfr_Val(SigQlfr1 data)
 *   Std_ReturnType Rte_Write_HwTq1RollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RackLimrCcwEotSig1_Val(float32 data)
 *   Std_ReturnType Rte_Write_RackLimrCwEotSig1_Val(float32 data)
 *   Std_ReturnType Rte_Write_RackLimrEotSig1Avl_Logl(boolean data)
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
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasPer1
 *********************************************************************************************************************/
	
	/*** Temporary variables ***/
	VAR(sint8,    AUTOMATIC) HwTq1Polarity_Uls_T_s08;
	VAR(uint32,   AUTOMATIC) RawHwTq_Cnt_T_u32;
	VAR(NtcSts1,  AUTOMATIC) TestOk_Cnt_T_enum;
	VAR(uint8,    AUTOMATIC) ParamByte_Cnt_T_u08;
	VAR(float32,  AUTOMATIC) HwTqData_HwNwtMtr_T_f32;
	VAR(float32,  AUTOMATIC) HwTq1_HwNwtMtr_T_f32;
	VAR(SigQlfr1, AUTOMATIC) NtcHwTq1PrtclQlfrSts_Cnt_T_enum;
	VAR(SigQlfr1, AUTOMATIC) NtcHwTq1MfgQlfrSts_Cnt_T_enum;
	VAR(SigQlfr1, AUTOMATIC) HwTq1Qlfr_Cnt_T_enum;
	
	VAR(uint32,   AUTOMATIC) RegInpRSENT1CS_Cnt_T_u32;    	/* Used for RSENT1CS register level access */
	VAR(uint32,   AUTOMATIC) HwTq1FRS_Cnt_T_u32;  			/* Used for RSENT1CS register field level access */
	VAR(uint8,    AUTOMATIC) HwTq1CS_Cnt_T_u08; 			/* Used for RSENT1CS register field level access */
	VAR(uint32,   AUTOMATIC) RackLimrEotSig1CS_Cnt_T_u32;   /* Used for RSENT1CS register field level access */
	
	VAR(uint32,   AUTOMATIC) RegInpRSENT1FRXD_Cnt_T_u32; 	/* Used for RSENT1FRXD register level access */
	VAR(uint32,   AUTOMATIC) HwTq1FCCN_Cnt_T_u32; 			/* Used for RSENT1FRXD register field level access */
	VAR(uint32,   AUTOMATIC) HwTq1Data_Cnt_T_u32; 			/* Used for RSENT1FRXD register field level access */
	VAR(uint32,   AUTOMATIC) RackLimrEotSig1SND_Cnt_T_u32;  /* Used for RSENT1FRXD register field level access */
	
	
	/*** Read Module input ***/
	(void) Rte_Read_HwTq1Polarity_Val( &HwTq1Polarity_Uls_T_s08 ); 
	
	/*** Read from registers ***/
	RegInpRSENT1CS_Cnt_T_u32 = RSENT1CS;
	RegInpRSENT1FRXD_Cnt_T_u32 = RSENT1FRXD;
	
	/* Extract field level data from the register i/p */
	HwTq1FRS_Cnt_T_u32 			 = RegInpRSENT1CS_Cnt_T_u32  & ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32;
	HwTq1CS_Cnt_T_u08 			 = (uint8)(RegInpRSENT1CS_Cnt_T_u32  & ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32);
	RackLimrEotSig1CS_Cnt_T_u32  = RegInpRSENT1CS_Cnt_T_u32  & ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32;

	HwTq1FCCN_Cnt_T_u32 		 = RegInpRSENT1FRXD_Cnt_T_u32 & ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32;
	HwTq1Data_Cnt_T_u32 		 = RegInpRSENT1FRXD_Cnt_T_u32 & ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32;
	RackLimrEotSig1SND_Cnt_T_u32 = RegInpRSENT1FRXD_Cnt_T_u32 & ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32;
		
	
	
	/******************************************************************************************/
	/*** ----------------------------- START: PrtclFltEvln -------------------------------- ***/
	/******************************************************************************************/
	if( HwTq1FRS_Cnt_T_u32 != 0U ) 
	{	/*** NewMsg ***/
		
		if( HwTq1CS_Cnt_T_u08 == 0U )
		{	/*** NoStsFlt ***/
			
			if( HwTq1FCCN_Cnt_T_u32 == 0U )
			{	/*** TestPass ***/
				
				RawHwTq_Cnt_T_u32 = HwTq1Data_Cnt_T_u32; 
				TestOk_Cnt_T_enum = NTCSTS_PREPASSD; 
				ParamByte_Cnt_T_u08 = ELECGLBPRM_NOFLT_CNT_U08; 
			}
			else
			{	/*** ComFlt ***/
				
				RawHwTq_Cnt_T_u32 = 0UL;
				TestOk_Cnt_T_enum = NTCSTS_PREFAILD; 
				ParamByte_Cnt_T_u08 = ELECGLBPRM_SNSRINTFLT_CNT_U08;
				*Rte_Pim_HwTq1IntSnsrErrCntr() = *Rte_Pim_HwTq1IntSnsrErrCntr() +1U; /* Overflow is intended here to recycle to 0 */
			}
		}
		else
		{	/*** STSFLT ***/

			RawHwTq_Cnt_T_u32 = 0UL;
			TestOk_Cnt_T_enum = NTCSTS_PREFAILD; 
			ParamByte_Cnt_T_u08 = ELECGLBPRM_PRTCLFLT_CNT_U08;
			*Rte_Pim_HwTq1ComStsErrCntr() = *Rte_Pim_HwTq1ComStsErrCntr() +1U; /* Overflow is intended here to recycle to 0 */
		}
		
	}
	else
	{	/*** NoNewMsg ***/

		RawHwTq_Cnt_T_u32 = 0UL;
		TestOk_Cnt_T_enum = NTCSTS_PREFAILD; 
		ParamByte_Cnt_T_u08 = ELECGLBPRM_PRTCLFLT_CNT_U08;
		*Rte_Pim_HwTq1MsgMissRxCnt() = *Rte_Pim_HwTq1MsgMissRxCnt() + 1U; /* Overflow is intended here to recycle to 0 */
	}
	/******************************************************************************************/
	/*** ------------------------------- END: PrtclFltEvln -------------------------------- ***/
	/******************************************************************************************/
	
	
	/*** HwTqCalculation ***/
	HwTqData_HwNwtMtr_T_f32 = ( ((float32)RawHwTq_Cnt_T_u32) * ELECGLBPRM_HWTQSCA_ULS_F32 ) - ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32;
	
	
	/*** PolarityEvaluation ***/
	if( TestOk_Cnt_T_enum == NTCSTS_PREPASSD )
	{
		HwTq1_HwNwtMtr_T_f32 = HwTqData_HwNwtMtr_T_f32 * ((float32)HwTq1Polarity_Uls_T_s08); 
		*Rte_Pim_HwTq1MeasPrevHwTq1() = HwTq1_HwNwtMtr_T_f32;
	}
	else
		/* PREFAILED */
	{
		HwTq1_HwNwtMtr_T_f32 = *Rte_Pim_HwTq1MeasPrevHwTq1();  
	}
	
	HwTq1_HwNwtMtr_T_f32 = Lim_f32( (HwTq1_HwNwtMtr_T_f32 - Rte_Pim_HwTq1Offs()->OffsTrim), 
									ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32, 
									ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32 ); 
	#if (STD_ON == FLTINJENA)  
		(void)FltInj_f32_Oper(&HwTq1_HwNwtMtr_T_f32,FLTINJ_HWTQ1MEAS_HWTQ1);
    #endif
	
	/*** ------------------ Update Rolling Counter ------------------- ***/
	if( TestOk_Cnt_T_enum == NTCSTS_PREPASSD )
	{
		UpdRollgCntr();		
	} 
	
	/*** --------------- SetNtcSts -------------- ***/
	if( TestOk_Cnt_T_enum == NTCSTS_PREPASSD )
	{
		(void) Rte_Call_SetNtcSts_Oper( HWTQ1MEAS_HWTQ1PRTCLNTCNR_CNT_ENUM, ParamByte_Cnt_T_u08, TestOk_Cnt_T_enum, Rte_Prm_HwTq1MeasHwTq1PrtclFltPassStep_Val() );
	}
	else
	{
		(void) Rte_Call_SetNtcSts_Oper( HWTQ1MEAS_HWTQ1PRTCLNTCNR_CNT_ENUM, ParamByte_Cnt_T_u08, TestOk_Cnt_T_enum, Rte_Prm_HwTq1MeasHwTq1PrtclFltFailStep_Val() );
	}
		
	
	/*** ---------- GetNtcQlfr --------- ***/
	(void) Rte_Call_GetNtcQlfrSts_Oper( HWTQ1MEAS_HWTQ1PRTCLNTCNR_CNT_ENUM, &NtcHwTq1PrtclQlfrSts_Cnt_T_enum );
	(void) Rte_Call_GetNtcQlfrSts_Oper( HWTQ1MEAS_HWTQ1MFGNTCNR_CNT_ENUM, &NtcHwTq1MfgQlfrSts_Cnt_T_enum );
	
	if( (NtcHwTq1PrtclQlfrSts_Cnt_T_enum != SIGQLFR_FAILD) && (NtcHwTq1MfgQlfrSts_Cnt_T_enum != SIGQLFR_FAILD) )
	{
		HwTq1Qlfr_Cnt_T_enum = SIGQLFR_PASSD;
	}
	else
	{
		HwTq1Qlfr_Cnt_T_enum = SIGQLFR_FAILD;
	}
	
	/**********************************************************************/
	/*** --------------------- START: RackLimrEot --------------------- ***/
	/**********************************************************************/
	if( *Rte_Pim_RackLimrEot1Avl() == FALSE )
	{
		RackLimrEotSigRead( RackLimrEotSig1CS_Cnt_T_u32, RackLimrEotSig1SND_Cnt_T_u32 );
	}
	/**********************************************************************/
	/*** ---------------------   END: RackLimrEot --------------------- ***/
	/**********************************************************************/
	
	RSENT1CSC = (uint16)ELECGLBPRM_SENTCOMSTSCLR_CNT_U32;
	
	if(RSENT1FRS == 1U)
	{
	
		/***********Dummy read into a Volatile variable to clear FRS register. Keyword is volatile to avoid any optimization*********/
		(void)ReadRegister((uint32)RSENT1FND);
	}
	
	/*** Write module outputs ***/
	(void) Rte_Write_HwTq1_Val( HwTq1_HwNwtMtr_T_f32 ); 
	(void) Rte_Write_HwTq1Qlfr_Val( HwTq1Qlfr_Cnt_T_enum );
	(void) Rte_Write_HwTq1RollgCntr_Val( *Rte_Pim_HwTq1MeasPrevRollgCntr() );
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasPer2
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
 * Symbol: HwTq1MeasPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasPer2
 *********************************************************************************************************************/

	if( Rte_Pim_HwTq1Offs()->OffsTrimPrfmdSts != FALSE )
	{
		(void) Rte_Call_SetNtcSts_Oper( HWTQ1MEAS_HWTQ1MFGNTCNR_CNT_ENUM, ELECGLBPRM_NOFLT_CNT_U08, NTCSTS_PASSD, 0U );
	}
	else
	{
		(void) Rte_Call_SetNtcSts_Oper( HWTQ1MEAS_HWTQ1MFGNTCNR_CNT_ENUM, ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08, NTCSTS_FAILD, 0U );
	}
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasTrigStrt_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq1MeasTrigStrt>
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
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq1MeasTrigStrt_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasTrigStrt_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasTrigStrt_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTq1MeasTrigStrt_Oper
 *********************************************************************************************************************/
   
   VAR(uint32,   AUTOMATIC) RefTmr_Cnt_T_u32; 
   VAR(uint32,   AUTOMATIC) TiSpan_Cnt_T_u32; 

 RSENT1CSC = 2046U;
 RSENT1SPCT = SENTSYNCTRIG_CNT_U32;
 __SYNCM();
 if(RSENT1NRS == 1U)
	{
		RSENT1NRC = 1U;
		(void)Rte_Call_GetRefTmr1MicroSec32bit_Oper(&RefTmr_Cnt_T_u32 );
		/* Wait for 2 micro secs */
		do
		{   
			(void)Rte_Call_GetTiSpan1MicroSec32bit_Oper(RefTmr_Cnt_T_u32, &TiSpan_Cnt_T_u32 );
		} 
		while (TiSpan_Cnt_T_u32 < REGCFGWAITTI_CNT_U32);
		RSENT1SPCT = SENTSYNCTRIG_CNT_U32;
	}	

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_HwTq1Meas_STOP_SEC_CODE
#include "CDD_HwTq1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define CDD_HwTq1Meas_START_SEC_CODE
#include "CDD_HwTq1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
 
/**********************************************************************************************************************
* Name:        RackLimrEotSigRead
* Description: Rack Limiter End Of Travel signal read
* Inputs:      RackLimrEotSig1CS_Cnt_T_u32, RackLimrEotSig1SND_Cnt_T_u32
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, CDD_HwTq1Meas_CODE) RackLimrEotSigRead( uint32 RackLimrEotSig1CS_Cnt_T_u32, uint32 RackLimrEotSig1SND_Cnt_T_u32 )
{
	
	/* RSENT1SND:	Bit SND of RSENT1SRXD (Slow Channel Receive Data Register).
					This bit is cleared automatically whenever it is read. 
	   RSENT1IDD:	Bit_0 to Bit_19 of RSENT1SRXD (Slow Channel Receive Data Register). 
	   RSENT1CS:	32 bit Communication Status register. */
	   
	VAR(uint32,   AUTOMATIC) RegInpRSENT1SRXD_Cnt_T_u32; 		/* Used for RSENT1SRXD register level access */
	VAR(uint8,    AUTOMATIC) RackLimrEotSig1MsgID_Cnt_T_u08; 	/* Used for RSENT1SRXD register field level access */
	VAR(uint8,    AUTOMATIC) RackLimrEotSig1MsgData_Cnt_T_u08;  /* Used for RSENT1SRXD register field level access */
	
	
	/*** Read from registers ***/
	RegInpRSENT1SRXD_Cnt_T_u32 = RSENT1SRXD;
	
	/* Extract field level data from the register i/p */
	RackLimrEotSig1MsgID_Cnt_T_u08 	  =  (uint8)((RegInpRSENT1SRXD_Cnt_T_u32 & ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32) >> 8U);
	RackLimrEotSig1MsgData_Cnt_T_u08  =  (uint8)(RegInpRSENT1SRXD_Cnt_T_u32 & ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32);
	
	
	if( (RackLimrEotSig1SND_Cnt_T_u32 != 0UL) && (RackLimrEotSig1CS_Cnt_T_u32 == 0UL) )
	{
		if( (*Rte_Pim_RackLimrEot1Id2DataReadCmpl() == TRUE) && 
			(*Rte_Pim_RackLimrEot1Id3DataReadCmpl() == TRUE) && 
			(*Rte_Pim_RackLimrEot1Id4DataReadCmpl() == TRUE) )
		{
			/* EOTDataReceived */

			*Rte_Pim_RackLimrCwEot1()  = (float32)(uint16)( (uint16)*Rte_Pim_RackLimrEot1Data0() + (uint16)(((uint16)*Rte_Pim_RackLimrEot1Data1() & EOTLNMASK_CNT_U16) << 8U) )
										 * RACKLIMRCWEOTSCA_ULS_F32;
			
			*Rte_Pim_RackLimrCcwEot1() = (float32)(uint16)( (((uint16)*Rte_Pim_RackLimrEot1Data1() & EOTUNMASK_CNT_U16) >> 4U) + (uint16)((uint16)*Rte_Pim_RackLimrEot1Data2() << 4U) )
										 * RACKLIMRCCWEOTSCA_ULS_F32;
			
			*Rte_Pim_RackLimrEot1Avl() = TRUE;
			
			/* Write RTE outputs */
			(void) Rte_Write_RackLimrCwEotSig1_Val( Lim_f32( *Rte_Pim_RackLimrCwEot1(), RACKLIMREOTSIGLOLIM_HWDEG_F32, RACKLIMREOTSIGHILIM_HWDEG_F32 ) ); 
			(void) Rte_Write_RackLimrCcwEotSig1_Val( Lim_f32( *Rte_Pim_RackLimrCcwEot1(), RACKLIMREOTSIGLOLIM_HWDEG_F32, RACKLIMREOTSIGHILIM_HWDEG_F32 ) ); 
			(void) Rte_Write_RackLimrEotSig1Avl_Logl( *Rte_Pim_RackLimrEot1Avl() );

		}
		else
		{
			/* EOTDataPending */
			
			switch( RackLimrEotSig1MsgID_Cnt_T_u08 )
			{
				case EOTIDTWO_CNT_U08:
					*Rte_Pim_RackLimrEot1Data0() = RackLimrEotSig1MsgData_Cnt_T_u08;
					*Rte_Pim_RackLimrEot1Id2DataReadCmpl() = TRUE;
				break;
				
				case EOTIDTHREE_CNT_U08:
					*Rte_Pim_RackLimrEot1Data1() = RackLimrEotSig1MsgData_Cnt_T_u08;
					*Rte_Pim_RackLimrEot1Id3DataReadCmpl() = TRUE;
				break;
				
				case EOTIDFOUR_CNT_U08:
					*Rte_Pim_RackLimrEot1Data2() = RackLimrEotSig1MsgData_Cnt_T_u08;
					*Rte_Pim_RackLimrEot1Id4DataReadCmpl() = TRUE;
				break;
				
				default :
					/* Do nothing */
				break;
			}
			
		}
			
	}

	
}
 
/**********************************************************************************************************************
* Name:        UpdRollgCntr
* Description: This function used to update the rolling counter. 
* Inputs:      *Rte_Pim_HwTq1MeasPrevRollgCntr()
* Outputs:     *Rte_Pim_HwTq1MeasPrevRollgCntr()
* Usage Notes: Added to reduce path count.
**********************************************************************************************************************/ 
static FUNC(void, CDD_HwTq0Meas_CODE) UpdRollgCntr(void)
{
    if(*Rte_Pim_HwTq1MeasPrevRollgCntr() == ROLLGCNTRMAXVAL_CNT_U08)
		{
			*Rte_Pim_HwTq1MeasPrevRollgCntr() = 0U;
		}
		else
	    {
		    *Rte_Pim_HwTq1MeasPrevRollgCntr() = *Rte_Pim_HwTq1MeasPrevRollgCntr() + 1U;
	    }
	/* if TestOk is not PREPASSD, then we do nothing to the rolling counter, so there is no else case. */
} 
 
/**********************************************************************************************************************
* Name:        ReadRegister
* Description: This function can be used both for read-and-use and for read-and-discard.
* Inputs:       Address RegisterDummyRead_Cnt_T_u32
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/ 
static FUNC(uint32, CDD_HwTq0Meas_CODE)  ReadRegister(volatile VAR(uint32, AUTOMATIC) RegisterDummyRead_Cnt_T_u32)
{
    return RegisterDummyRead_Cnt_T_u32;
}


#define CDD_HwTq1Meas_STOP_SEC_CODE
#include "CDD_HwTq1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
