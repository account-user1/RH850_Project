/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_RamMem.c
 *        Config:  C:/_EA4SynWrkgCpy/CM103B_RamMem_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_RamMem
 *  Generated at:  Wed Nov  1 11:39:45 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_RamMem>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_RamMemNonRte.c 
* Module Description: Implements the RTE functionality of CM103B RAM Memory
* Project           : CBD
* Author            : Shruthi Raghavan
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz2554 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  ----------------------------------------------------------------------------- ---------
* 09/28/17   1       SR        Initial Version                                                               EA4#12606
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

#include "Rte_CDD_RamMem.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 /* For Access to Registers ECCCSIHnCTL(n=0-3), ECCCSIHnEAD0(n=0-3) and ECCCSIHnEAD0(n=0-3) */
 #include "ECCCSIH0_RegDefns.h"  
 #include "ECCCSIH1_RegDefns.h"
 #include "ECCCSIH2_RegDefns.h"
 #include "ECCCSIH3_RegDefns.h"
 
 #include "ECCTTCAN0_RegDefns.h" /* For Access to Registers ECCTTCAN0CTL and ECCTTCAN0EAD0 */
 #include "ECCMCAN0_RegDefns.h"  /* For Access to Registers ECCMCAN0CTL  and ECCMCAN0EAD0  */
 #include "ECCMCAN1_RegDefns.h"  /* For Access to Registers ECCMCAN1CTL  and ECCMCAN1EAD0  */
 #include "ECCFLX0_RegDefns.h"   /* For Access to Registers ECCFLX0CTL   and ECCFLX0EAD0   */
 #include "ECCFLX0T0_RegDefns.h" /* For Access to Registers ECCFLX0T0CTL and ECCFLX0T0EAD0 */
 #include "ECCFLX0T1_RegDefns.h" /* For Access to Registers ECCFLX0T1CTL and ECCFLX0T1EAD0 */
 #include "ECCGTM0_RegDefns.h"
 #include "ECCGTM1_RegDefns.h"
 #include "ECCPE1_RegDefns.h"
 #include "ECM0_RegDefns.h"
 #include "DMACH_RegDefns.h"
 
 #include "NxtrMcuSuprtLib.h"

 /* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1] : There is no appropriate action to take on the return value for Rte_Write and SetNtcSts calls */
 /* MISRA-C:2004 Rule 19.1  [NXTRDEV 19.1.1 ] : AUTOSAR requires deviation from this rule for Memory Mapping include statements */
 
 #define LCLRAMSNGBITCNTRMAX_CNT_U08               ((uint8)100U)
 #define GLBRAMSNGBITCNTRMAX_CNT_U08               ((uint8)100U)
 
 #define PRPHLRAMSNGBITECCRDACSERRDETD_CNT_U32     ((uint32)0x00000002U)
 #define PRPHLRAMSNGBITECCERRADDRSAVED_CNT_U32     ((uint32)0x00010000U)
 #define PRPHLRAMSNGBITECCERRDETDFLGCLRMASK_CNT_U32 ((uint32)0X00000200U)

 #define PRPHLRAMDBLBITECCRDACSERRDETD_CNT_U32     ((uint32)0x00000004U)
 #define PRPHLRAMDBLBITECCERRADDRSAVED_CNT_U32     ((uint32)0x00020000U)
 #define PRPHLRAMDBLBITECCERRDETDFLGCLRMASK_CNT_U32 ((uint32)0X00000400U)

 #define DTSRAMSNGBITECCRDACSERRDETD_CNT_U32       ((uint32)0X00008000U)
 #define DTSRAMSNGBITECCERRADRMASK_CNT_U32          ((uint32)0X00000FFFU)
 #define DTSRAMSNGBITECCERRDETDFLGCLRMASK_CNT_U32   ((uint32)0X00008000U)
 
 #define INSTRCACHEBNK0SNGBITECCERRDETD_CNT_U32    ((uint32)0x00000001U)
 #define INSTRCACHEBNK1SNGBITECCERRDETD_CNT_U32    ((uint32)0x00000100U)
 #define INSTRCACHEBNK0DBLBITECCERRDETD_CNT_U32    ((uint32)0x00000002U)
 #define INSTRCACHEBNK1DBLBITECCERRDETD_CNT_U32    ((uint32)0x00000200U)
 #define INSTRCACHESNGBITECCFLGCLRMASK_CNT_U32      ((uint32)0X00000003U)
 #define INSTRCACHEDBLBITECCFLGCLRMASK_CNT_U32      ((uint32)0X00000003U)

 /* ECM n Error Source Status Clear Trigger Register 0 Bit Masks*/
 #define INSTRCACHEECCFLTECMCLRMASK_CNT_U32         ((uint32)0x00040000U) /*ECMCLSSE018*/
 #define CSIHRAMECCDBLBITECMCLRMASK_CNT_U32         ((uint32)0x00200000U) /*ECMCLSSE021*/
 #define MCANRAMECCDBLBITECMCLRMASK_CNT_U32         ((uint32)0x00400000U) /*ECMCLSSE022*/
 #define FRRAMECCDBLBITECMCLRMASK_CNT_U32           ((uint32)0x01000000U) /*ECMCLSSE024*/
 #define GTMRAMECCDBLBITECMCLRMASK_CNT_U32          ((uint32)0x02000000U) /*ECMCLSSE025*/
 /* ECM n Error Source Status Clear Trigger Register 1 Bit Masks*/
 #define DTSRAMECCSNGBITECMCLRMASK_CNT_U32          ((uint32)0x00000200U) /*ECMCLSSE109*/
 #define CSIHRAMECCSNGBITECMCLRMASK_CNT_U32         ((uint32)0x00200000U) /*ECMCLSSE121*/
 #define MCANRAMECCSNGBITECMCLRMASK_CNT_U32         ((uint32)0x00400000U) /*ECMCLSSE122*/
 #define FRRAMECCSNGBITECMCLRMASK_CNT_U32           ((uint32)0x01000000U) /*ECMCLSSE124*/
 #define GTMRAMECCSNGBITECMCLRMASK_CNT_U32          ((uint32)0x02000000U) /*ECMCLSSE125*/

 /* Parameter Bytes for NTC 0x012 */
 #define LCLRAMECCSNGBITSOFTFLTPRMBYTE_CNT_U08     ((uint8)0x01U) /* Bit 0 */
 #define GLBRAMECCSNGBITSOFTFLTPRMBYTE_CNT_U08     ((uint8)0x02U) /* Bit 1 */
 #define INSTRCACHEECCFLTPRMBYTE_CNT_U08           ((uint8)0x04U) /* Bit 2 */
 #define DTSRAMECCSNGBITFLTPRMBYTE_CNT_U08         ((uint8)0x08U) /* Bit 3 */
 #define MCANRAMECCSNGBITFLTPRMBYTE_CNT_U08        ((uint8)0x10U) /* Bit 4 */
 #define FRRAMECCSNGBITFLTPRMBYTE_CNT_U08          ((uint8)0x20U) /* Bit 5 */
 #define CSIHRAMECCSNGBITFLTPRMBYTE_CNT_U08        ((uint8)0x40U) /* Bit 6 */
 #define GTMRAMECCSNGBITFLTPRMBYTE_CNT_U08         ((uint8)0x80U) /* Bit 7 */
 /* Parameter Bytes for NTC 0x017-0X01A */
 #define CSIHRAMECCDBLBITFLTPRMBYTE_CNT_U08        ((uint8)0x02U) /* Bit 1 */
 /* Parameter Bytes for NTC 0X01B */
 #define MTTCANRAMDBLBITECCERRPRMBYTE_CNT_U08      ((uint8)0x02U) /* Bit 1 */
 #define MCAN0RAMDBLBITECCERRPRMBYTE_CNT_U08       ((uint8)0x08U) /* Bit 3 */
 #define MCAN1RAMDBLBITECCERRPRMBYTE_CNT_U08       ((uint8)0x20U) /* Bit 5 */
 /* Parameter Bytes for NTC 0X01D */
 #define FRMRAMDBLBITECCERRPRMBYTE_CNT_U08         ((uint8)0x02U) /* Bit 1 */
 #define FRTBUFADBLBITECCERRPRMBYTE_CNT_U08        ((uint8)0x08U) /* Bit 3 */
 #define FRTBUFBDBLBITECCERRPRMBYTE_CNT_U08        ((uint8)0x20U) /* Bit 5 */


 static FUNC(void, AUTOMATIC) SpiEccErrChkAndHndlg(void);
 static FUNC(void, AUTOMATIC) MCanEccErrChkAndHndlg(void);
 static FUNC(void, AUTOMATIC) FrEccErrChkAndHndlg(void);
 static FUNC(void, AUTOMATIC) GtmRamEccErrChkAndHndlg(void);

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
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_GlbRamFailrAdr(void)
 *   uint32 *Rte_Pim_GlbRamWordLineRead(void)
 *   uint32 *Rte_Pim_LclRamFailrAdr(void)
 *   uint32 *Rte_Pim_LclRamWordLineRead(void)
 *   uint32 *Rte_Pim_dRamMemCanRamDblBitEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemCanRamSngBitEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemDtsRamEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemFrRamDblBitEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemFrRamSngBitEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemFrRamTmpBufADblBitEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemFrRamTmpBufBDblBitEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemGtmRamSngBitEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemMCan0RamDblBitEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemMCan1RamDblBitEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemSpi0RamEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemSpi1RamEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemSpi2RamEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemSpi3RamEccErrAdr(void)
 *   uint32 *Rte_Pim_dRamMemSpiRamEccErrAdr(void)
 *   uint8 *Rte_Pim_GlbRamEccSngBitCntr(void)
 *   uint8 *Rte_Pim_LclRamEccSngBitCntr(void)
 *   boolean *Rte_Pim_GlbRamEccSngBitSoftFailr(void)
 *   boolean *Rte_Pim_LclRamEccSngBitSoftFailr(void)
 *
 *********************************************************************************************************************/


#define CDD_RamMem_START_SEC_CODE
#include "CDD_RamMem_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RamMemInit1
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
 * Symbol: RamMemInit1_doc
 *********************************************************************************************************************/
/*
 * 012.0: Local RAM ECC – Single Bit Correction (Soft Fault)
 * 012.1: Global RAM ECC -Single Bit Correction (Soft Fault)
 * 012.2: I-Cache ECC Error Detection (Cache Miss)
 * 012.3: DTS ECC single Bit Detection
 * 012.4: CAN RAM ECC Single Bit Correction (Soft Fault)
 * 012.5: FR Single Bit ECC Error
 * 012.6: CSIH0-3 RAM ECC Single Bit Correction (Soft Fault)
 * 012.7: GTM Single Bit ECC Error 
 * 017.1: CSIH0 RAM ECC Double Bit (Hard Fault)
 * 018.1: CSIH1 RAM ECC Double Bit (Hard Fault)
 * 019.1: CSIH 2 RAM ECC Double Bit (Hard Fault)
 * 01A.1: CSIH 3 RAM ECC Double Bit (Hard Fault)
 * 01B.1: CAN RAM ECC Double Bit Fault
 * 01B.3: MCAN0 ECC Double Bit Fault
 * 01B.5: MCAN1 ECC Double Bit Fault
 * 01D.1: Flexray Message RAM ECC Double Bit Fault
 * 01D.3: Flexray Buffer A RAM ECC Double Bit Fault
 * 01D.5: Flexray Buffer B RAM ECC Double Bit Fault
 */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_RamMem_CODE) RamMemInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RamMemInit1
 *********************************************************************************************************************/

 /* Pass NTCNR_0X012 : RAM Single Bit ECC Error */
 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,(uint8)0x00U,NTCSTS_PASSD,(uint16)0U);

 /* Pass NTCNR_0x017 - NTCNR_0X01A : CSIH 0-3 RAM Double Bit ECC Error */
 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X017,(uint8)0x00U,NTCSTS_PASSD,(uint16)0U);
 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X018,(uint8)0x00U,NTCSTS_PASSD,(uint16)0U);
 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X019,(uint8)0x00U,NTCSTS_PASSD,(uint16)0U);
 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X01A,(uint8)0x00U,NTCSTS_PASSD,(uint16)0U);

 /* Pass NTCNR_0X01B : CAN/MCAN0/MCAN1 RAM Double Bit ECC Error */
 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X01B,(uint8)0x00U,NTCSTS_PASSD,(uint16)0U);

 /* Pass NTCNR_0X01D : FlexRay Message/BufferA/BufferB RAM Double Bit ECC Error */
 (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X01D,(uint8)0x00U,NTCSTS_PASSD,(uint16)0U);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RamMemPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_GlbRamEccSngBitCntrOutp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_LclRamEccSngBitCntrOutp_Val(uint8 data)
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
 * Symbol: RamMemPer1_doc
 *********************************************************************************************************************/

    /*ECM n Error Source Status Clear Trigger Register 1 : This is a protected register
      Writing can only be done using a write protected register write sequence.
      Setting a bit to 1 clears corresponding bit in ECM Master/Checker Error Source Status regiser*/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_RamMem_CODE) RamMemPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RamMemPer1
 *********************************************************************************************************************/

  /*** SPI ECC Error Handling ***/
  SpiEccErrChkAndHndlg();

  /*** MCAN ECC Error Handling ***/
  MCanEccErrChkAndHndlg();

  /*** FLEXRAY ECC Error Handling ***/
  FrEccErrChkAndHndlg();

  /*** GTM RAM ECC Error Handling ***/
  GtmRamEccErrChkAndHndlg();

  /***---- START : [DTS RAM ECC Single Bit Error Handling] ----***/
  if( (DTSER2 & DTSRAMSNGBITECCRDACSERRDETD_CNT_U32) != 0U)
  {
    /* Store DTS RAM ECC Error Address Information For Debug */
    *Rte_Pim_dRamMemDtsRamEccErrAdr() = (DTSER2 & DTSRAMSNGBITECCERRADRMASK_CNT_U32);

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE109 bit of the ECM0ESSTC1 register*/
    WrProtdRegEcm0_u32(DTSRAMECCSNGBITECMCLRMASK_CNT_U32,&ECM0ESSTC1);

    /*Clear DTSRAM SEC error flag (RAMSED of DTSER2 register)*/
    DTSERC = DTSRAMSNGBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x012 to Failed with Parameter byte indicating ECC SngBitFailr on DTS RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,DTSRAMECCSNGBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  /***----  END  : [DTS RAM ECC Single Bit Error Handling] ----***/

  /***---- START : [Local RAM Single Bit Soft Failures Error Handling] ----***/
  if(*Rte_Pim_LclRamEccSngBitSoftFailr() == TRUE)
  {
    /*Set NTC 0x012 to Failed with Parameter byte indicating Local RAM Single Bit Soft Failure*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,LCLRAMECCSNGBITSOFTFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);

    *Rte_Pim_LclRamEccSngBitSoftFailr() = FALSE;

    /* Increment counter and saturate at LCLRAMSNGBITCNTRMAX_CNT_U08 */
    if(*Rte_Pim_LclRamEccSngBitCntr() < LCLRAMSNGBITCNTRMAX_CNT_U08)
    {
        *Rte_Pim_LclRamEccSngBitCntr() += 1U;
    }
  }
  /***----  END  : [Local RAM Single Bit Soft Failures Error Handling] ----***/

  /***---- START : [Global RAM Single Bit Soft Failures Error Handling] ----***/
  if(*Rte_Pim_GlbRamEccSngBitSoftFailr() == TRUE)
  {
    /*Set NTC 0x012 to Failed with Parameter byte indicating Global RAM Single Bit Soft Failure*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,GLBRAMECCSNGBITSOFTFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);

    *Rte_Pim_GlbRamEccSngBitSoftFailr() = FALSE;

    /* Increment counter and saturate at GLBRAMSNGBITCNTRMAX_CNT_U08 */
    if(*Rte_Pim_GlbRamEccSngBitCntr() < GLBRAMSNGBITCNTRMAX_CNT_U08)
    {
        *Rte_Pim_GlbRamEccSngBitCntr() += 1U;
    }
  }
  /***----  END  : [Global RAM Single Bit Soft Failures Error Handling] ----***/

  /***---- START : [I-Cache ECC Error Handling] ----***/
  if(((IDSERSTR_PE1 & (INSTRCACHEBNK0SNGBITECCERRDETD_CNT_U32 | INSTRCACHEBNK1SNGBITECCERRDETD_CNT_U32)) != 0U) ||
     ((IDDERSTR_PE1 & (INSTRCACHEBNK0DBLBITECCERRDETD_CNT_U32 | INSTRCACHEBNK1DBLBITECCERRDETD_CNT_U32)) != 0U))
  {
      /*Clear ECM Error Flag by writing 1 to the ECMCLSSE018 bit of the ECM0ESSTC0 register*/
      WrProtdRegEcm0_u32(INSTRCACHEECCFLTECMCLRMASK_CNT_U32,&ECM0ESSTC0);

      /* Clear the Error Flags in the Error Status Register */
      IDSERSTCLR_PE1 = INSTRCACHESNGBITECCFLGCLRMASK_CNT_U32;
      IDDERSTCLR_PE1 = INSTRCACHEDBLBITECCFLGCLRMASK_CNT_U32;

      /*Set NTC 0x012 to Failed with Parameter byte indicating Instrucction Cache ECC Error */
      (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,INSTRCACHEECCFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  /***----  END  : [I-Cache ECC Error Handling] ----***/

  (void)Rte_Write_GlbRamEccSngBitCntrOutp_Val(*Rte_Pim_GlbRamEccSngBitCntr());
  (void)Rte_Write_LclRamEccSngBitCntrOutp_Val(*Rte_Pim_LclRamEccSngBitCntr());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_RamMem_STOP_SEC_CODE
#include "CDD_RamMem_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/********************************************************************************************************************
 * Name        : SpiEccErrChkAndHndlg
 * Description : Check for Spi Single/Double Bit ECC Errors and set the NTC. Save error Address in Display Variable.
 * Inputs      : None
 * Outputs     : None
 * Usage Notes : None
 *******************************************************************************************************************/
static FUNC(void, AUTOMATIC) SpiEccErrChkAndHndlg(void)
{
  /***---- START : [SPI ECC Single Bit Error Handling] ----***/
  if((ECCCSIH0CTL & (PRPHLRAMSNGBITECCERRADDRSAVED_CNT_U32|PRPHLRAMSNGBITECCRDACSERRDETD_CNT_U32))!= 0U)
  {
    /*Store CSIH0 Error Address Information for Debug*/
    *Rte_Pim_dRamMemSpiRamEccErrAdr() = ECCCSIH0EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE121 bit of the ECM0ESSTC1 register*/
    WrProtdRegEcm0_u32(CSIHRAMECCSNGBITECMCLRMASK_CNT_U32,&ECM0ESSTC1);

    /*Clear SngBitEccErrDetd flag (Bit1 of CTL register)*/
    ECCCSIH0CTL = PRPHLRAMSNGBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x012 to Failed with Parameter byte indicating ECC Single Bit Failr on CSIH RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,CSIHRAMECCSNGBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  else if((ECCCSIH1CTL & (PRPHLRAMSNGBITECCERRADDRSAVED_CNT_U32|PRPHLRAMSNGBITECCRDACSERRDETD_CNT_U32))!= 0U)
  {
    /*Store CSIH1 Error Address Information for Debug*/
    *Rte_Pim_dRamMemSpiRamEccErrAdr() = ECCCSIH1EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE121 bit of the ECM0ESSTC1 register*/
    WrProtdRegEcm0_u32(CSIHRAMECCSNGBITECMCLRMASK_CNT_U32,&ECM0ESSTC1);

    /*Clear SngBitEccErrDetd flag (Bit1 of CTL register)*/
    ECCCSIH1CTL = PRPHLRAMSNGBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x012 to Failed with Parameter byte indicating ECC Single Bit Failr on CSIH RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,CSIHRAMECCSNGBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  else if((ECCCSIH2CTL & (PRPHLRAMSNGBITECCERRADDRSAVED_CNT_U32|PRPHLRAMSNGBITECCRDACSERRDETD_CNT_U32))!= 0U)
  {
    /*Store CSIH2 Error Address Information for Debug*/
    *Rte_Pim_dRamMemSpiRamEccErrAdr() = ECCCSIH2EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE121 bit of the ECM0ESSTC1 register*/
    WrProtdRegEcm0_u32(CSIHRAMECCSNGBITECMCLRMASK_CNT_U32,&ECM0ESSTC1);

    /*Clear SngBitEccErrDetd flag (Bit1 of CTL register)*/
    ECCCSIH2CTL = PRPHLRAMSNGBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x012 to Failed with Parameter byte indicating ECC Single Bit Failr on CSIH RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,CSIHRAMECCSNGBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  else if((ECCCSIH3CTL & (PRPHLRAMSNGBITECCERRADDRSAVED_CNT_U32|PRPHLRAMSNGBITECCRDACSERRDETD_CNT_U32))!= 0U)
  {
    /*Store CSIH3 Error Address Information for Debug*/
    *Rte_Pim_dRamMemSpiRamEccErrAdr() = ECCCSIH3EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE121 bit of the ECM0ESSTC1 register*/
    WrProtdRegEcm0_u32(CSIHRAMECCSNGBITECMCLRMASK_CNT_U32,&ECM0ESSTC1);

    /*Clear SngBitEccErrDetd flag (Bit1 of CTL register)*/
    ECCCSIH3CTL = PRPHLRAMSNGBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x012 to Failed with Parameter byte indicating ECC Single Bit Failr on CSIH RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,CSIHRAMECCSNGBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  else
  {
      /* Do Nothing */
  }
  /***----  END  : [SPI ECC Single Bit Error Handling] ----***/

  /***---- START : [SPI ECC Double Bit Error Handling] ----***/
  /* CSIH0 */
  if((ECCCSIH0CTL & (PRPHLRAMDBLBITECCERRADDRSAVED_CNT_U32|PRPHLRAMDBLBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X017,CSIHRAMECCDBLBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);

    /* Store CSIH0 Error Address Information For Debug */
    *Rte_Pim_dRamMemSpi0RamEccErrAdr() = ECCCSIH0EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE021 bit of the ECM0ESSTC0 register*/
    WrProtdRegEcm0_u32(CSIHRAMECCDBLBITECMCLRMASK_CNT_U32,&ECM0ESSTC0);

    /*Clear DblBitEccErrDetd flag (Bit2 of CTL register)*/
    ECCCSIH0CTL = PRPHLRAMDBLBITECCERRDETDFLGCLRMASK_CNT_U32;
  }
  /* CSIH1 */
  if((ECCCSIH1CTL & (PRPHLRAMDBLBITECCERRADDRSAVED_CNT_U32|PRPHLRAMDBLBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X018,CSIHRAMECCDBLBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);

    /* Store CSIH1 Error Address Information For Debug */
    *Rte_Pim_dRamMemSpi1RamEccErrAdr() = ECCCSIH1EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE021 bit of the ECM0ESSTC0 register*/
    WrProtdRegEcm0_u32(CSIHRAMECCDBLBITECMCLRMASK_CNT_U32,&ECM0ESSTC0);

    /*Clear DblBitEccErrDetd flag (Bit2 of CTL register)*/
    ECCCSIH1CTL = PRPHLRAMDBLBITECCERRDETDFLGCLRMASK_CNT_U32;
  }
  /* CSIH2 */
  if((ECCCSIH2CTL & (PRPHLRAMDBLBITECCERRADDRSAVED_CNT_U32|PRPHLRAMDBLBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X019,CSIHRAMECCDBLBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);

    /* Store CSIH2 Error Address Information For Debug */
    *Rte_Pim_dRamMemSpi2RamEccErrAdr() = ECCCSIH2EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE021 bit of the ECM0ESSTC0 register*/
    WrProtdRegEcm0_u32(CSIHRAMECCDBLBITECMCLRMASK_CNT_U32,&ECM0ESSTC0);

    /*Clear DblBitEccErrDetd flag (Bit2 of CTL register)*/
    ECCCSIH2CTL = PRPHLRAMDBLBITECCERRDETDFLGCLRMASK_CNT_U32;
  }
  /* CSIH3 */
  if((ECCCSIH3CTL & (PRPHLRAMDBLBITECCERRADDRSAVED_CNT_U32|PRPHLRAMDBLBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X01A,CSIHRAMECCDBLBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);

    /* Store CSIH3 Error Address Information For Debug */
    *Rte_Pim_dRamMemSpi3RamEccErrAdr() = ECCCSIH3EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE021 bit of the ECM0ESSTC0 register*/
    WrProtdRegEcm0_u32(CSIHRAMECCDBLBITECMCLRMASK_CNT_U32,&ECM0ESSTC0);

    /*Clear DblBitEccErrDetd flag (Bit2 of CTL register)*/
    ECCCSIH3CTL = PRPHLRAMDBLBITECCERRDETDFLGCLRMASK_CNT_U32;
  }
  /***----  END  : [SPI ECC Double Bit Error Handling] ----***/
}

/********************************************************************************************************************
 * Name        : MCanEccErrChkAndHndlg
 * Description : Check for MCAN Single/Double Bit ECC Errors and set NTC. Save error Address in Display Variable.
 * Inputs      : None
 * Outputs     : None
 * Usage Notes : None
 *******************************************************************************************************************/
static FUNC(void, AUTOMATIC) MCanEccErrChkAndHndlg(void)
{
  /***---- START : [MCAN ECC Single Bit Error Handling] ----***/
  if((ECCTTCAN0CTL & (PRPHLRAMSNGBITECCERRADDRSAVED_CNT_U32|PRPHLRAMSNGBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    /* Store MTTCAN0 Error Address Information For Debug */
    *Rte_Pim_dRamMemCanRamSngBitEccErrAdr() = ECCTTCAN0EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE122 bit of the ECM0ESSTC1 register*/
    WrProtdRegEcm0_u32(MCANRAMECCSNGBITECMCLRMASK_CNT_U32,&ECM0ESSTC1);

    /*Clear SngBitEccErrDetd flag (Bit1 of CTL register)*/
    ECCTTCAN0CTL = PRPHLRAMSNGBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x012 to Failed with Parameter byte indicating ECC Single Bit Failr on MCAN RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,MCANRAMECCSNGBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  else if((ECCMCAN0CTL & (PRPHLRAMSNGBITECCERRADDRSAVED_CNT_U32|PRPHLRAMSNGBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    /* Store MCAN0 Error Address Information For Debug */
    *Rte_Pim_dRamMemCanRamSngBitEccErrAdr() = ECCMCAN0EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE122 bit of the ECM0ESSTC1 register*/
    WrProtdRegEcm0_u32(MCANRAMECCSNGBITECMCLRMASK_CNT_U32,&ECM0ESSTC1);

    /*Clear SngBitEccErrDetd flag (Bit1 of CTL register)*/
    ECCMCAN0CTL = PRPHLRAMSNGBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x012 to Failed with Parameter byte indicating ECC Single Bit Failr on MCAN RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,MCANRAMECCSNGBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  else if((ECCMCAN1CTL & (PRPHLRAMSNGBITECCERRADDRSAVED_CNT_U32|PRPHLRAMSNGBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    /* Store MCAN1 Error Address Information For Debug */
    *Rte_Pim_dRamMemCanRamSngBitEccErrAdr() = ECCMCAN1EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE122 bit of the ECM0ESSTC1 register*/
    WrProtdRegEcm0_u32(MCANRAMECCSNGBITECMCLRMASK_CNT_U32,&ECM0ESSTC1);

    /*Clear SngBitEccErrDetd flag (Bit1 of CTL register)*/
    ECCMCAN1CTL = PRPHLRAMSNGBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x012 to Failed with Parameter byte indicating ECC Single Bit Failr on MCAN RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,MCANRAMECCSNGBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  else
  {
    /*Do Nothing*/
  }
  /***----  END  : [MCAN ECC Single Bit Error Handling] ----***/

  /***---- START : [MCAN ECC Double Bit Error Handling] ----***/
  /*MTTCAN0*/
  if((ECCTTCAN0CTL & (PRPHLRAMDBLBITECCERRADDRSAVED_CNT_U32|PRPHLRAMDBLBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    /* Store MTTCAN0 Error Address Information For Debug */
    *Rte_Pim_dRamMemCanRamDblBitEccErrAdr() = ECCTTCAN0EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE022 bit of the ECM0ESSTC0 register*/
    WrProtdRegEcm0_u32(MCANRAMECCDBLBITECMCLRMASK_CNT_U32,&ECM0ESSTC0);

    /*Clear DblBitEccErrDetd flag (Bit2 of CTL register)*/
    ECCTTCAN0CTL = PRPHLRAMDBLBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x01B to Failed with Parameter byte indicating ECC DblBitFailr on MTTCAN0 RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X01B,MTTCANRAMDBLBITECCERRPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  /*MCAN0*/
  if((ECCMCAN0CTL & (PRPHLRAMDBLBITECCERRADDRSAVED_CNT_U32|PRPHLRAMDBLBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    /* Store MCAN0 Error Address Information For Debug */
    *Rte_Pim_dRamMemMCan0RamDblBitEccErrAdr() = ECCMCAN0EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE022 bit of the ECM0ESSTC0 register*/
    WrProtdRegEcm0_u32(MCANRAMECCDBLBITECMCLRMASK_CNT_U32,&ECM0ESSTC0);

    /*Clear DblBitEccErrDetd flag (Bit2 of CTL register)*/
    ECCMCAN0CTL = PRPHLRAMDBLBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x01B to Failed with Parameter byte indicating ECC DblBitFailr on MCAN0 RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X01B,MCAN0RAMDBLBITECCERRPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  /*MCAN1*/
  if((ECCMCAN1CTL & (PRPHLRAMDBLBITECCERRADDRSAVED_CNT_U32|PRPHLRAMDBLBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    /* Store MCAN1 Error Address Information For Debug */
    *Rte_Pim_dRamMemMCan1RamDblBitEccErrAdr() = ECCMCAN1EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE022 bit of the ECM0ESSTC0 register*/
    WrProtdRegEcm0_u32(MCANRAMECCDBLBITECMCLRMASK_CNT_U32,&ECM0ESSTC0);

    /*Clear DblBitEccErrDetd flag (Bit2 of CTL register)*/
    ECCMCAN1CTL = PRPHLRAMDBLBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x01B to Failed with Parameter byte indicating ECC DblBitFailr on MCAN1 RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X01B,MCAN1RAMDBLBITECCERRPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  /***----  END  : [MCAN ECC Double Bit Error Handling] ----***/
}

/********************************************************************************************************************
 * Name        : FrEccErrChkAndHndlg
 * Description : Check for FlexRay Single/Double Bit ECC Errors and set NTC. Save error Address in Display Variable.
 * Inputs      : None
 * Outputs     : None
 * Usage Notes : None
 *******************************************************************************************************************/
static FUNC(void, AUTOMATIC) FrEccErrChkAndHndlg(void)
{
  /***---- START : [FlexRay ECC Single Bit Error Handling] ----***/
  if((ECCFLX0CTL & (PRPHLRAMSNGBITECCERRADDRSAVED_CNT_U32|PRPHLRAMSNGBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    /* Store FlexRay Message ECC Error Address Information For Debug */
    *Rte_Pim_dRamMemFrRamSngBitEccErrAdr() = ECCFLX0EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE124 bit of the ECM0ESSTC1 register*/
    WrProtdRegEcm0_u32(FRRAMECCSNGBITECMCLRMASK_CNT_U32,&ECM0ESSTC1);

    /*Clear SngBitEccErrDetd flag (Bit1 of CTL register)*/
    ECCFLX0CTL = PRPHLRAMSNGBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x012 to Failed with Parameter byte indicating ECC Single Bit Failr on FlexRay RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,FRRAMECCSNGBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  else if((ECCFLX0T0CTL & (PRPHLRAMSNGBITECCERRADDRSAVED_CNT_U32|PRPHLRAMSNGBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    /* Store FlexRay TBUFA ECC Error Address Information For Debug */
    *Rte_Pim_dRamMemFrRamSngBitEccErrAdr() = ECCFLX0T0EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE124 bit of the ECM0ESSTC1 register*/
    WrProtdRegEcm0_u32(FRRAMECCSNGBITECMCLRMASK_CNT_U32,&ECM0ESSTC1);

    /*Clear SngBitEccErrDetd flag (Bit1 of CTL register)*/
    ECCFLX0T0CTL = PRPHLRAMSNGBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x012 to Failed with Parameter byte indicating ECC Single Bit Failr on FlexRay RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,FRRAMECCSNGBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  else if((ECCFLX0T1CTL  & (PRPHLRAMSNGBITECCERRADDRSAVED_CNT_U32|PRPHLRAMSNGBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    /* Store FlexRay TBUFB ECC Error Address Information For Debug */
    *Rte_Pim_dRamMemFrRamSngBitEccErrAdr() = ECCFLX0T1EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE124 bit of the ECM0ESSTC1 register*/
    WrProtdRegEcm0_u32(FRRAMECCSNGBITECMCLRMASK_CNT_U32,&ECM0ESSTC1);

    /*Clear SngBitEccErrDetd flag (Bit1 of CTL register)*/
    ECCFLX0T1CTL = PRPHLRAMSNGBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x012 to Failed with Parameter byte indicating ECC Single Bit Failr on FlexRay RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,FRRAMECCSNGBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  else
  {
    /*Do Nothing*/
  }
  /***----  END  : [FlexRay ECC Single Bit Error Handling] ----***/

  /***---- START : [FlexRay ECC Double Bit Error Handling] ----***/
  /* FlexRay RAM */
  if((ECCFLX0CTL & (PRPHLRAMDBLBITECCERRADDRSAVED_CNT_U32|PRPHLRAMDBLBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    /* Store FlexRay MRAM) Error Address Information for Debug */
    *Rte_Pim_dRamMemFrRamDblBitEccErrAdr() = ECCFLX0EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE024 bit of the ECM0ESSTC0 register*/
    WrProtdRegEcm0_u32(FRRAMECCDBLBITECMCLRMASK_CNT_U32,&ECM0ESSTC0);

    /*Clear DblBitEccErrDetd flag (Bit2 of CTL register)*/
    ECCFLX0CTL = PRPHLRAMDBLBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x01D to Failed with Parameter byte indicating ECC DblBitFailr on FlexRay RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X01D,FRMRAMDBLBITECCERRPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  /* FlexRay Temporary buffer (TBF A) RAM */
  if((ECCFLX0T0CTL & (PRPHLRAMDBLBITECCERRADDRSAVED_CNT_U32|PRPHLRAMDBLBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    /* Store FlexRay TBF A Error Address Information for Debug */
    *Rte_Pim_dRamMemFrRamTmpBufADblBitEccErrAdr() = ECCFLX0T0EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE024 bit of the ECM0ESSTC0 register*/
    WrProtdRegEcm0_u32(FRRAMECCDBLBITECMCLRMASK_CNT_U32,&ECM0ESSTC0);

    /*Clear DblBitEccErrDetd flag (Bit2 of CTL register)*/
    ECCFLX0T0CTL = PRPHLRAMDBLBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x01D to Failed with Parameter byte indicating ECC DblBitFailr on FlexRay RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X01D,FRTBUFADBLBITECCERRPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  /* FlexRay Temporary buffer (TBF B) RAM */
  if((ECCFLX0T1CTL & (PRPHLRAMDBLBITECCERRADDRSAVED_CNT_U32|PRPHLRAMDBLBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    /* Store FlexRay TBF B Error Address Information for Debug */
    *Rte_Pim_dRamMemFrRamTmpBufBDblBitEccErrAdr() = ECCFLX0T1EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE024 bit of the ECM0ESSTC0 register*/
    WrProtdRegEcm0_u32(FRRAMECCDBLBITECMCLRMASK_CNT_U32,&ECM0ESSTC0);

    /*Clear DblBitEccErrDetd flag (Bit2 of CTL register)*/
    ECCFLX0T1CTL = PRPHLRAMDBLBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x01D to Failed with Parameter byte indicating ECC DblBitFailr on FlexRay RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X01D,FRTBUFBDBLBITECCERRPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  /***----  END  : [FlexRay ECC Double Bit Error Handling] ----***/
}


/********************************************************************************************************************
 * Name        : GtmRamEccErrChkAndHndlg
 * Description : Check for GTM RAM Single bit ECC Errors and set the NTC. Save error Address in Display Variable.
 *               Double bit errors are handled via FE level interrupts and can be found in CM101B.
 * Inputs      : None
 * Outputs     : None
 * Usage Notes : None
 *******************************************************************************************************************/
static FUNC(void, AUTOMATIC) GtmRamEccErrChkAndHndlg(void)
{
  /***---- START : [GTM RAM ECC Single Bit Error Handling] ----***/
  if((ECCGTM0CTL & (PRPHLRAMSNGBITECCERRADDRSAVED_CNT_U32|PRPHLRAMSNGBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    /* Store GTM ECC Error Address Information For Debug */
    *Rte_Pim_dRamMemGtmRamSngBitEccErrAdr() = ECCGTM0EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE125 bit of the ECM0ESSTC1 register*/
    WrProtdRegEcm0_u32(GTMRAMECCSNGBITECMCLRMASK_CNT_U32,&ECM0ESSTC1);

    /*Clear SngBitEccErrDetd flag (Bit1 of CTL register)*/
    ECCGTM0CTL = PRPHLRAMSNGBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x012 to Failed with Parameter byte indicating ECC SngBitFailr on GTM0 RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,GTMRAMECCSNGBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  else if((ECCGTM1CTL & (PRPHLRAMSNGBITECCERRADDRSAVED_CNT_U32|PRPHLRAMSNGBITECCRDACSERRDETD_CNT_U32)) != 0U)
  {
    /* Store GTM ECC Error Address Information For Debug */
    *Rte_Pim_dRamMemGtmRamSngBitEccErrAdr() = ECCGTM1EAD0;

    /*Clear ECM Error Flag by writing 1 to the ECMCLSSE125 bit of the ECM0ESSTC1 register*/
    WrProtdRegEcm0_u32(GTMRAMECCSNGBITECMCLRMASK_CNT_U32,&ECM0ESSTC1);

    /*Clear SngBitEccErrDetd flag (Bit1 of CTL register)*/
    ECCGTM1CTL = PRPHLRAMSNGBITECCERRDETDFLGCLRMASK_CNT_U32;

    /*Set NTC 0x012 to Failed with Parameter byte indicating ECC SngBitFailr on GTM0 RAM*/
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X012,GTMRAMECCSNGBITFLTPRMBYTE_CNT_U08,NTCSTS_FAILD,(uint16)0U);
  }
  else
  {
      /* Do Nothing */
  }
  /***----  END  : [GTM RAM ECC Single Bit Error Handling] ----***/
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
