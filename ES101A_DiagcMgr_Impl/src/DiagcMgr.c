/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  DiagcMgr.c
 *        Config:  C:/_EA4SynWrkgCpy/ES101A_DiagcMgr_Impl/tools/Component.dpa
 *     SW-C Type:  DiagcMgr
 *  Generated at:  Fri Sep 29 09:25:27 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <DiagcMgr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name: DiagcMgr.c
* Module Description: Implementation of Diagnostic Manager FDD ES101A
* Project           : CBD 
* Author            : Spandana Balani
***************************************************************************************************************************
* Version Control:
* %version:           18 %
* %derived_by:        nz2554 %
*--------------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ------------
* 04/13/15  1        SB         Initial Version                                                                 EA4#447
* 06/03/15  2        KMC        Temporary change -- PIMs and IRVs changed to module level variables             EA4#677
*                               Also corrected name of PrmDiagcMgrFltResp, added include of DiagcMgr.h,
*                               removed include of Std_Types.h 
* 08/13/15  3        KMC        Temporary/partial implementation of version 2.0.0 design -- add debounce        EA4#1292
*                               counters and fault response outputs for handwheel angle to version 1 
*                               implementation. Will not support multiple MPU design as well as other features.
* 08/08/15  4        SB         Partial Implementation of to ES101A_DiagcMgr_Design version 2                   EA4#1388
* 09/01/15  5        SB         Partial Implementation of to ES101A_DiagcMgr_Design version 2 - Added NvM       EA4#1241
* 09/03/15  6        SB         Corrected the limits on SysDiMotTqCmdSca                                        EA4#1241
* 09/30/15  7        SB         Fix Anomaly EA4#1632                                                            EA4#1771
* 10/20/15  8        SB         Fix Anomaly EA4#1906 - DiagcMgrIninCore_Oper() is updated to properly           EA4#2150
                                determine which application's info array to use when reading data from NVM 
* 02/26/16  9        SB         ES101A_DiagcMgr_Design version 2 implementation                                EA4#3421
* 04/19/16  10       SB         ES101A_DiagcMgr_Design version 3 implementation                                EA4#5110
* 06/20/16  11       SB         ES101A_DiagcMgr_Design version 4 implementation                                EA4#6251
* 08/30/16  12       SB         Updated to fix anomaly EA4#6663                                                EA4#6905
* 09/22/16  13       SB         Updated to fix anomaly EA4#7031, EA4#7495 and removed requirement mapping      EA4#7191, EA4#7594
* 10/04/16  14       SB         Updated to fix anomaly EA4#7857                                                EA4#7865
* 11/29/16  15       SB         Updated to fix anomalies EA4#8118 and EA4#8115                                 EA4#8250, EA34# 8662, EA4#8668
* 12/07/16  16       SB         Updates to SetRamBlock function call                                 		   EA4#8822
* 04/08/17  17       SR         Added latching NTC logic. Give up the reduced performance flags & remove the
                                respective bits from FltRespTbl. 3 bits from FltRespTbl moved to NtcPptyAry    EA4#10779
* 09/12/17  18       SR         Implemented fix for anomaly EA4#13895 per the design.                          EA4#14411
**************************************************************************************************************************/

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
 * MfgEnaSt1
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
 * NtcNrWithResd1
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
 * SysSt1
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
 * s8p7
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
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

#include "Rte_DiagcMgr.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Dem.h"
#include "DiagcMgr.h"
#include "DiagcMgr_private.h"
#include "NxtrDet.h"
#include "NxtrFixdPt.h"
#include "NxtrMath.h"

/* MISRA-C:2004 Rule 11.4  [NXTRDEV 11.4.5] : Cast of a variable pointer to a pointer of a different type is allowed
                                              for the purpose of efficient memory copying in CnvSnpshtData_f32_Oper in
                                              ES101A_DiagcMgr */

/* MISRA-C:2004 Rule 12.12 [NXTRDEV 12.12.1]: Cast of a uint32 pointer to a float32 pointer is allowed for the purpose
                                              of efficient memory copying in CnvSnpshtData_f32_Oper in
                                              ES101A_DiagcMgr */
                                            
/* MISRA-C:2004 Rule 13.7  [NXTRDEV 13.7.1] : Boolean operations with invariant results are allowed when checking configurable
                                              array sizes in code conditionally compiled when DET is enabled. */

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value of Functions - 
                                              Dem_ClearDTC(), Det_ReportError(), Rte_Read/Write, SetRamBlockStatus, SetNtcSts */ 

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void functon. Rte generation adds standard return type but no error information is returned.
                           List of Functions: Rte_Call_GetDiagcDataApplX_Oper,Rte_Call_GetNtcDebCntrApplX_Oper,Rte_Call_GetNtcInfoApplX_Oper, GetMcuDiagcSpplData.
                                        Note: X in above functions is a value in [0,10] */

/* MISRA-C:2004 Rule 19.1  [NXTRDEV 19.1.1] : AUTOSAR requires deviation from this rule for Memory Mapping include statements */

    #define PimDiagcMgrNtcFltAry_rec                (*(Ary1D_NtcFltInfoRec2_20 *)(Rte_Pim_DiagcMgrNtcFltAry()))
    #define PimDiagcMgrLtchCntrAry_u08              (*(Ary1D_u08_20 *)(Rte_Pim_DiagcMgrLtchCntrAry()))
    #define PrmDiagcMgrFltResp_u16                  (*(const Ary1D_u16_512 *)(Rte_Prm_DiagcMgrFltResp_Ary1D()))  
    #define PimDtcIdxPrevSts_u08                    (*(Ary1D_u08_DiagcMgr1 *)(Rte_Pim_DtcIdxPrevSts())) 

     /* define SnpshtData PIM array to _M array */
    #define PimSnpshtDataAry_rec     (SnpshtDataAry_M)

    /* Move SnpshtData Nvm array to Global shared memory */
    #define GlobalShared_START_SEC_VAR_NOINIT_UNSPECIFIED
    #include "MemMap.h"
    /*This is not marked static because the NVM driver and DiagMgrNonRTE needs access to it.*/
    VAR(SnpshtDataRec2, DiagcMgr_CODE) SnpshtDataAry_M[8]; /*Despite the naming, this is not a module level variable.*/

    #define GlobalShared_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #include "MemMap.h"


static FUNC(void, DiagcMgr_CODE) ProcRampResp(VAR(uint16, AUTOMATIC) NtcNr_Cnt_T_u16,
                                              CONSTP2VAR(DiagcDataRec2, AUTOMATIC, AUTOMATIC) DiagcData_T_rec,
                                              CONSTP2VAR(DiagcDataRec2, AUTOMATIC, AUTOMATIC) ProxySetNtcData_T_rec);
                                                  
static FUNC(void, DiagcMgr_CODE) UpdSnpshtData(VAR(uint32, AUTOMATIC) McuDiagcSpplData_Cnt_T_u32, 
                                               VAR(sint16, AUTOMATIC) HwTq_HwNwtMtr_T_s5p10,
                                               VAR(sint16, AUTOMATIC) MotTqCmdMrfScad_MotNwtMtr_T_s5p10, 
                                               VAR(uint32, AUTOMATIC) IgnCntr_Cnt_T_u32, 
                                               VAR(uint16, AUTOMATIC) BrdgVltg_Volt_T_u6p10, 
                                               VAR(sint16, AUTOMATIC) EcuTFild_DegCgrd_T_s8p7, 
                                               VAR(NtcNr1, AUTOMATIC) NtcNr_Cnt_T_u16, 
                                               VAR(uint8 , AUTOMATIC) NtcStInfo_Cnt_T_u08, 
                                               VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum,
                                               VAR(uint32, AUTOMATIC) SpclSnpshtData0_Cnt_T_u32,
                                               VAR(uint32, AUTOMATIC) SpclSnpshtData1_Cnt_T_u32,
                                               VAR(uint32, AUTOMATIC) SpclSnpshtData2_Cnt_T_u32);

static FUNC(boolean, DiagcMgr_CODE) GetNtcInfoApplXRte(VAR(uint8, AUTOMATIC) ApplIdx_Cnt_T_u08,
                                                       VAR(uint8, AUTOMATIC) NtcInfoIdx_Cnt_T_u08,
                                                       P2VAR(NtcInfoRec4, AUTOMATIC, AUTOMATIC) NtcInfoPtr_Cnt_T_rec);

static FUNC(void, DiagcMgr_CODE) UpdDtcSts(VAR(uint16, AUTOMATIC) NtcMapIdx_Cnt_T_u16,
                                           VAR(uint8 , AUTOMATIC) NtcInfoRecSts_Cnt_T_u08,
                                           VAR(uint8 , AUTOMATIC) DtctempIdx_Cnt_T_u08,
                                           P2VAR(uint8, AUTOMATIC, AUTOMATIC) DtcIdxCurrSts_Cnt_T_u08);

static FUNC(void, DiagcMgr_CODE) ProcNtcStsPassd(VAR(NtcNr1, AUTOMATIC)                   NtcNr_Cnt_T_enum,
                                                 P2VAR(NtcInfoRec4, AUTOMATIC, AUTOMATIC) NtcInfo_Cnt_T_rec,
                                                 P2VAR(sint16, AUTOMATIC, AUTOMATIC)      NtcInfoDebCntr_Cnt_T_s16);

static FUNC(void, DiagcMgr_CODE) ProcNtcStsPrePassd(VAR(NtcNr1, AUTOMATIC)                   NtcNr_Cnt_T_enum,
                                                    VAR(uint16, AUTOMATIC)                   DebStep_Cnt_T_u16,
                                                    P2VAR(NtcInfoRec4, AUTOMATIC, AUTOMATIC) NtcInfo_Cnt_T_rec,
                                                    P2VAR(sint16, AUTOMATIC, AUTOMATIC)      NtcInfoDebCntr_Cnt_T_s16);

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
 * s5p10: Integer in interval [-32768...32767]
 * s8p7: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * sint32: Integer in interval [-2147483648...2147483647] (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * u6p10: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * MfgEnaSt1: Enumeration of integer in interval [0...255] with enumerators
 *   MFGENAST_PRDNMOD (0U)
 *   MFGENAST_MFGMOD (1U)
 *   MFGENAST_TESTMOD (2U)
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
 * NtcNrWithResd1: Enumeration of integer in interval [0...65535] with enumerators
 *   NTCNR_RESD (0U)
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
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 * Array Types:
 * ============
 * Ary1D_NtcFltInfoRec2_20: Array with 20 element(s) of type NtcFltInfoRec2
 * Ary1D_NtcInfoRec4_DiagcMgr: Array with 65535 element(s) of type NtcInfoRec4
 * Ary1D_ReadFltInfoRec1_20: Array with 20 element(s) of type ReadFltInfoRec1
 * Ary1D_SnpshtDataRec2_8: Array with 8 element(s) of type SnpshtDataRec2
 * Ary1D_u08_20: Array with 20 element(s) of type uint8
 * Ary1D_u08_DiagcMgr1: Array with 65535 element(s) of type uint8
 * Ary1D_u16_512: Array with 512 element(s) of type uint16
 *
 * Record Types:
 * =============
 * DiagcDataRec2: Record with elements
 *   DiagcSts of type uint8
 *   ActvRampRate of type float32
 *   ActvMotTqCmdSca of type float32
 * NtcFltInfoRec2: Record with elements
 *   NtcNr of type NtcNrWithResd1
 *   AgiCntr of type uint8
 *   Sts of type uint8
 * NtcInfoRec4: Record with elements
 *   NtcStInfo of type uint8
 *   Sts of type uint8
 *   AgiCntr of type uint8
 * ReadFltInfoRec1: Record with elements
 *   NtcNr of type NtcNrWithResd1
 *   AgiCntr of type uint8
 *   Sts of type uint8
 *   NtcStInfo of type uint8
 * SnpshtDataRec2: Record with elements
 *   SpclSnpshtData0 of type uint32
 *   SpclSnpshtData1 of type uint32
 *   SpclSnpshtData2 of type uint32
 *   MicroDiagcData of type uint32
 *   IgnCntr of type uint32
 *   HwTq of type s5p10
 *   MotTq of type s5p10
 *   BrdgVltg of type u6p10
 *   EcuT of type s8p7
 *   NtcNr of type NtcNrWithResd1
 *   NtcStInfo of type uint8
 *   SysSt of type SysSt1
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_DiagcMgrApplCrc(void)
 *   uint16 *Rte_Pim_DtcEnaSts(void)
 *   uint8 *Rte_Pim_ClrDiagcFlg(void)
 *   uint8 *Rte_Pim_PrevClrDtcFlg(void)
 *   uint8 *Rte_Pim_DiagcMgrLtchCntrAry(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_20
 *   NtcFltInfoRec2 *Rte_Pim_DiagcMgrNtcFltAry(void)
 *     Returnvalue: NtcFltInfoRec2* is of type Ary1D_NtcFltInfoRec2_20
 *   uint8 *Rte_Pim_DtcIdxPrevSts(void)
 *     Returnvalue: uint8* is of type Ary1D_u08_DiagcMgr1
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   uint32 Rte_CData_DiagcMgrApplCrcDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 *Rte_Prm_DiagcMgrFltResp_Ary1D(void)
 *     Returnvalue: uint16* is of type Ary1D_u16_512
 *
 *********************************************************************************************************************/


#define DiagcMgr_START_SEC_CODE
#include "DiagcMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClrAllDiagc_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ClrAllDiagc>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ClrDiagcFlgProxy_Val(uint8 data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ClrAllDiagc_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ClrAllDiagc_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) ClrAllDiagc_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ClrAllDiagc_Oper
 *********************************************************************************************************************/

    VAR(uint8, AUTOMATIC) ClrDiagcFlg_Cnt_T_u08;

    if(*Rte_Pim_ClrDiagcFlg() == 1U)
    {
        ClrDiagcFlg_Cnt_T_u08 = 0U;
    }
    else
    {
        ClrDiagcFlg_Cnt_T_u08 = 1U;
    }
    *Rte_Pim_ClrDiagcFlg() = ClrDiagcFlg_Cnt_T_u08;
     
    /* Write Output */
    (void) Rte_Write_ClrDiagcFlgProxy_Val(ClrDiagcFlg_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClrLtchCntrData_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ClrLtchCntrData>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DiagcMgrLtchCntrAry_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ClrLtchCntrData_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ClrLtchCntrData_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) ClrLtchCntrData_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ClrLtchCntrData_Oper
 *********************************************************************************************************************/
    VAR(uint8, AUTOMATIC) LoopCnt_Cnt_T_u08;

    for(LoopCnt_Cnt_T_u08=0U;LoopCnt_Cnt_T_u08<TblSize_m(PimDiagcMgrLtchCntrAry_u08);LoopCnt_Cnt_T_u08++)
    {
        (Rte_Pim_DiagcMgrLtchCntrAry())[LoopCnt_Cnt_T_u08] = 0U;
    }
    (void)Rte_Call_DiagcMgrLtchCntrAry_SetRamBlockStatus(TRUE);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClrSnpshtData_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ClrSnpshtData>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnpshtDataAry_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ClrSnpshtData_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ClrSnpshtData_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) ClrSnpshtData_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ClrSnpshtData_Oper
 *********************************************************************************************************************/

    VAR(uint8,  AUTOMATIC) SnpshtAryIdx_Cnt_T_u08;

    for (SnpshtAryIdx_Cnt_T_u08 = 0U; SnpshtAryIdx_Cnt_T_u08 < (uint8)TblSize_m(PimSnpshtDataAry_rec);( SnpshtAryIdx_Cnt_T_u08++)) 
    {
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].SpclSnpshtData0 = DFTSPCLSNPSHTDATA_CNT_U32;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].SpclSnpshtData1 = DFTSPCLSNPSHTDATA_CNT_U32;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].SpclSnpshtData2 = DFTSPCLSNPSHTDATA_CNT_U32;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].MicroDiagcData = 0U;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].IgnCntr = 0U;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].HwTq = 0;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].MotTq = 0;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].BrdgVltg = 0U;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].EcuT = 0;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].NtcNr = NTCNR_RESD;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].NtcStInfo = 0U;
        PimSnpshtDataAry_rec[SnpshtAryIdx_Cnt_T_u08].SysSt = SYSST_WRMININ;
    }
    
    /* Write to NvM */
    (void) Rte_Call_SnpshtDataAry_SetRamBlockStatus(TRUE);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CnvSnpshtData_f32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CnvSnpshtData_f32>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CnvSnpshtData_f32_Oper(uint32 *SnpshtDataCnvd_Arg, float32 SnpshtData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CnvSnpshtData_f32_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) CnvSnpshtData_f32_Oper(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SnpshtDataCnvd_Arg, float32 SnpshtData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CnvSnpshtData_f32_Oper
 *********************************************************************************************************************/
    *SnpshtDataCnvd_Arg = *((uint32*)(&SnpshtData_Arg)); /* See integration manual (Appendix) for justification of compiler warning */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CnvSnpshtData_logl_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CnvSnpshtData_logl>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CnvSnpshtData_logl_Oper(uint32 *SnpshtDataCnvd_Arg, boolean SnpshtData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CnvSnpshtData_logl_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) CnvSnpshtData_logl_Oper(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SnpshtDataCnvd_Arg, boolean SnpshtData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CnvSnpshtData_logl_Oper
 *********************************************************************************************************************/
    if(SnpshtData_Arg != FALSE)
    {
        *SnpshtDataCnvd_Arg = 1UL;
    }
    else
    {
        *SnpshtDataCnvd_Arg = 0UL;
    }
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CnvSnpshtData_s08_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CnvSnpshtData_s08>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CnvSnpshtData_s08_Oper(uint32 *SnpshtDataCnvd_Arg, sint8 SnpshtData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CnvSnpshtData_s08_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) CnvSnpshtData_s08_Oper(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SnpshtDataCnvd_Arg, sint8 SnpshtData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CnvSnpshtData_s08_Oper
 *********************************************************************************************************************/
    *SnpshtDataCnvd_Arg = (uint32)((uint8)SnpshtData_Arg);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CnvSnpshtData_s16_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CnvSnpshtData_s16>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CnvSnpshtData_s16_Oper(uint32 *SnpshtDataCnvd_Arg, sint16 SnpshtData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CnvSnpshtData_s16_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) CnvSnpshtData_s16_Oper(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SnpshtDataCnvd_Arg, sint16 SnpshtData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CnvSnpshtData_s16_Oper
 *********************************************************************************************************************/
    *SnpshtDataCnvd_Arg = (uint32)((uint16)SnpshtData_Arg);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CnvSnpshtData_s32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CnvSnpshtData_s32>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CnvSnpshtData_s32_Oper(uint32 *SnpshtDataCnvd_Arg, sint32 SnpshtData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CnvSnpshtData_s32_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) CnvSnpshtData_s32_Oper(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SnpshtDataCnvd_Arg, sint32 SnpshtData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CnvSnpshtData_s32_Oper
 *********************************************************************************************************************/
    *SnpshtDataCnvd_Arg = (uint32)SnpshtData_Arg;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CnvSnpshtData_u08_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CnvSnpshtData_u08>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CnvSnpshtData_u08_Oper(uint32 *SnpshtDataCnvd_Arg, uint8 SnpshtData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CnvSnpshtData_u08_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) CnvSnpshtData_u08_Oper(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SnpshtDataCnvd_Arg, uint8 SnpshtData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CnvSnpshtData_u08_Oper
 *********************************************************************************************************************/
    *SnpshtDataCnvd_Arg = (uint32)SnpshtData_Arg;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CnvSnpshtData_u16_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CnvSnpshtData_u16>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CnvSnpshtData_u16_Oper(uint32 *SnpshtDataCnvd_Arg, uint16 SnpshtData_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CnvSnpshtData_u16_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) CnvSnpshtData_u16_Oper(P2VAR(uint32, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) SnpshtDataCnvd_Arg, uint16 SnpshtData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CnvSnpshtData_u16_Oper
 *********************************************************************************************************************/
    *SnpshtDataCnvd_Arg = (uint32)SnpshtData_Arg;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagcMgrIninCore_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <DiagcMgrIninCore>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 *NtcInfoAry_Arg, DiagcDataRec2 *DiagcData_Arg, DiagcDataRec2 *ProxySetNtcData_Arg)
 *     Argument NtcInfoAry_Arg: NtcInfoRec4* is of type Ary1D_NtcInfoRec4_DiagcMgr
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagcMgrIninCore_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoAry_Arg, P2VAR(DiagcDataRec2, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec2, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ProxySetNtcData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagcMgrIninCore_Oper
 *********************************************************************************************************************/
    VAR(uint16, AUTOMATIC) NtcFltAryIdx_Cnt_T_u16;
    VAR(uint8, AUTOMATIC) NtcInfoIdx_Cnt_T_u08;     
    VAR(uint16, AUTOMATIC) NtcMapIdx_Cnt_T_u16;  
    VAR(uint8, AUTOMATIC) InfoIdx_Cnt_T_u08;                
     
    #if ((STD_ON == NXTRDET_DIAGCMGR) && (STD_ON == DIAGCMGR_DEMCHK))
        if (DEMTOTNROFDTC_CNT_U08 != (TOTNROFDTC_CNT_U08 + 1U))
        {
            /* Dem Configuration and DiagcMgr Configuration not consistent */
            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, 0xFFU, 0U, 1U);
        }           
    #endif
    for (NtcFltAryIdx_Cnt_T_u16 = 0U; NtcFltAryIdx_Cnt_T_u16 < (uint16)TblSize_m(PimDiagcMgrNtcFltAry_rec); NtcFltAryIdx_Cnt_T_u16++)
    {   
        NtcMapIdx_Cnt_T_u16 = (uint16)PimDiagcMgrNtcFltAry_rec[NtcFltAryIdx_Cnt_T_u16].NtcNr;                              
        if((NtcMapIdx_Cnt_T_u16 > NTCNR_RESD) && (NtcMapIdx_Cnt_T_u16 < (uint16)TblSize_m(DIAGCMGRNTCMAP_CNT_REC)))
        {
            /* Update NtcInfoAry Update Aging Counter And Confirmed Bit */
            if(ApplIdx_Arg == (DIAGCMGRNTCMAP_CNT_REC[NtcMapIdx_Cnt_T_u16].ApplIdx))
            {                
                /* 0 < AgingCntr <= 64 */
                if((PimDiagcMgrNtcFltAry_rec[NtcFltAryIdx_Cnt_T_u16].AgiCntr > 0U) &&
                   (PimDiagcMgrNtcFltAry_rec[NtcFltAryIdx_Cnt_T_u16].AgiCntr <= MAXCYCINHIST_CNT_U08))                                        
                {
                    InfoIdx_Cnt_T_u08 = DIAGCMGRNTCMAP_CNT_REC[NtcMapIdx_Cnt_T_u16].NtcInfoIdx; /*NTCInfoIdx*/
                    NtcInfoAry_Arg[InfoIdx_Cnt_T_u08].Sts = PimDiagcMgrNtcFltAry_rec[NtcFltAryIdx_Cnt_T_u16].Sts;           
                    NtcInfoAry_Arg[InfoIdx_Cnt_T_u08].AgiCntr = PimDiagcMgrNtcFltAry_rec[NtcFltAryIdx_Cnt_T_u16].AgiCntr;   
                }
                else
                {
                     /* AgingCntr > 64 - Do not copy data into NtcInfoAry*/
                }   
            }           
        }
        else
        {
            #if (STD_ON == NXTRDET_DIAGCMGR)
                if(NtcMapIdx_Cnt_T_u16 != NTCNR_RESD)
                {
                    /* NtcNr in Nvm is greater then 511 */                                  
                    (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, 0xFFU, 0U, 0U);                
                }
            #endif
        }     
    }       
    /* Initialize the NtcInfo Array */ 
    /* Update the ISO bits of each NTC */
    for (NtcInfoIdx_Cnt_T_u08 = 0U; NtcInfoIdx_Cnt_T_u08 < NtcInfoArySize_Arg; NtcInfoIdx_Cnt_T_u08++) 
    {
        if((NtcInfoAry_Arg[NtcInfoIdx_Cnt_T_u08].AgiCntr == 0U) || (NtcInfoAry_Arg[NtcInfoIdx_Cnt_T_u08].AgiCntr > MAXCYCINHIST_CNT_U08))
        {  
            NtcInfoAry_Arg[NtcInfoIdx_Cnt_T_u08].AgiCntr = DFTAGICNTR_CNT_U08;            
        }
        else
        {             
            DiagcMgrClrBits_u08(&NtcInfoAry_Arg[NtcInfoIdx_Cnt_T_u08].Sts, DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08);
        }               
        DiagcMgrSetBits_u08(&NtcInfoAry_Arg[NtcInfoIdx_Cnt_T_u08].Sts, DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08);
    }
    /* Update DiagcSts and DiagcMgrActv */ /* Exclusive area not needed because it is an Init function */
    DiagcData_Arg->ActvMotTqCmdSca = SCAMOTTQCMDTOONE_ULS_F32; 
    DiagcData_Arg->ActvRampRate = MINRAMPRATE_ULSPERSEC_F32; 
    DiagcData_Arg->DiagcSts = DIAGCSTSININVAL_CNT_U08;
    ProxySetNtcData_Arg->ActvMotTqCmdSca = SCAMOTTQCMDTOONE_ULS_F32;   
    ProxySetNtcData_Arg->ActvRampRate = MINRAMPRATE_ULSPERSEC_F32; 
    ProxySetNtcData_Arg->DiagcSts = DIAGCSTSININVAL_CNT_U08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagcMgrInit1
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
 *   Std_ReturnType Rte_Read_SwApplCrc_Val(uint32 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DiagcMgrApplCrc_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagcMgrInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) DiagcMgrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagcMgrInit1
 *********************************************************************************************************************/

    VAR(uint32, AUTOMATIC) SwApplCrc_Cnt_T_u32;
    VAR(uint8, AUTOMATIC) FaildLtchCntrIdx_Cnt_T_u08 = 0U;
    VAR(boolean, AUTOMATIC) Ntc0x0A0Faild_Cnt_T_logl =FALSE;
    VAR(uint8, AUTOMATIC) LoopCnt_Cnt_T_u08 = 0U;
    (void)Rte_Read_SwApplCrc_Val(&SwApplCrc_Cnt_T_u32);

    if((*Rte_Pim_DiagcMgrApplCrc()) != SwApplCrc_Cnt_T_u32)
    {
        /*** Clear the Latch Counter Array ***/
        for(LoopCnt_Cnt_T_u08 = 0U; LoopCnt_Cnt_T_u08 < TblSize_m(PimDiagcMgrLtchCntrAry_u08); LoopCnt_Cnt_T_u08++)
        {
            (Rte_Pim_DiagcMgrLtchCntrAry())[LoopCnt_Cnt_T_u08] = 0U;
        }
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A0, 0U, NTCSTS_PASSD, 0U);
        *Rte_Pim_DiagcMgrApplCrc() = SwApplCrc_Cnt_T_u32;
        (void)Rte_Call_DiagcMgrApplCrc_SetRamBlockStatus(TRUE);
    }
    else
    {
        /*** Update the Latch Counter Array ***/
        while((Ntc0x0A0Faild_Cnt_T_logl == FALSE)&&(LoopCnt_Cnt_T_u08 < TblSize_m(PimDiagcMgrLtchCntrAry_u08)))
        {
            if( (((Rte_Pim_DiagcMgrLtchCntrAry())[LoopCnt_Cnt_T_u08]) >= DIAGCMGRNTCLTCHCNTRTHD_CNT_U08[LoopCnt_Cnt_T_u08]) &&
                (DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM[LoopCnt_Cnt_T_u08]   != NTCNR_RESD))
            {
                /*** Update Ntc0x0A0Faild ***/
                Ntc0x0A0Faild_Cnt_T_logl = TRUE;
                FaildLtchCntrIdx_Cnt_T_u08 = LoopCnt_Cnt_T_u08;
            }
            LoopCnt_Cnt_T_u08++;
        }
        
        if(Ntc0x0A0Faild_Cnt_T_logl != FALSE)
        {
            /*** Fail NTC  0x0A0 ***/
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A0, FaildLtchCntrIdx_Cnt_T_u08, NTCSTS_FAILD, 0U);
        }
        else
        {
            /*** Pass NTC 0x0A0 ***/
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A0, 0U, NTCSTS_PASSD, 0U);
        }
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagcMgrPer1
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
 *   Std_ReturnType Rte_Write_DiagcStsCtrldShtDwnFltPrsnt_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DiagcStsNonRcvrlReqDiFltPrsnt_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SysDiMotTqCmdSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysDiRampRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysStFltOutpReqDi_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl0_Oper(DiagcDataRec2 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl1_Oper(DiagcDataRec2 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl10_Oper(DiagcDataRec2 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl2_Oper(DiagcDataRec2 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl3_Oper(DiagcDataRec2 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl4_Oper(DiagcDataRec2 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl5_Oper(DiagcDataRec2 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl6_Oper(DiagcDataRec2 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl7_Oper(DiagcDataRec2 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl8_Oper(DiagcDataRec2 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetDiagcDataAppl9_Oper(DiagcDataRec2 *DiagcData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagcMgrPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) DiagcMgrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagcMgrPer1
 *********************************************************************************************************************/
    VAR(DiagcDataRec2, AUTOMATIC) OutpDiagcData_Cnt_T_rec; 
    VAR(DiagcDataRec2, AUTOMATIC) TempDiagcData_Cnt_T_rec;
    VAR(float32, AUTOMATIC) SysDiRampRate_UlsPerSec_T_f32;
    VAR(float32, AUTOMATIC) SysDiMotTqCmdSca_Uls_T_f32;
    VAR(boolean, AUTOMATIC) SysStFltOutpReqDi_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) DiagcStsNonRcvrlReqDiFltPrsnt_Cnt_T_logl;

    OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = SCAMOTTQCMDTOONE_ULS_F32;
    OutpDiagcData_Cnt_T_rec.ActvRampRate = MINRAMPRATE_ULSPERSEC_F32; 
    OutpDiagcData_Cnt_T_rec.DiagcSts = DIAGCSTSININVAL_CNT_U08;

    #ifdef NTCCNTAPPL0_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl0_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL1_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl1_Oper(&TempDiagcData_Cnt_T_rec);    
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL2_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl2_Oper(&TempDiagcData_Cnt_T_rec);   
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca); 
    #endif    

    #ifdef NTCCNTAPPL3_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl3_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL4_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl4_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL5_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl5_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL6_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl6_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL7_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl7_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL8_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl8_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL9_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl9_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    #ifdef NTCCNTAPPL10_CNT_U16
        (void) Rte_Call_GetDiagcDataAppl10_Oper(&TempDiagcData_Cnt_T_rec);
        OutpDiagcData_Cnt_T_rec.DiagcSts |= TempDiagcData_Cnt_T_rec.DiagcSts;    
        OutpDiagcData_Cnt_T_rec.ActvRampRate = Max_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, TempDiagcData_Cnt_T_rec.ActvRampRate);
        OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca = Min_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, TempDiagcData_Cnt_T_rec.ActvMotTqCmdSca);
    #endif

    /* Update the Reduced Performance Outputs */
    SysDiRampRate_UlsPerSec_T_f32            = Lim_f32(OutpDiagcData_Cnt_T_rec.ActvRampRate, MINRAMPRATE_ULSPERSEC_F32, MAXRAMPRATE_ULSPERSEC_F32);
    SysDiMotTqCmdSca_Uls_T_f32               = Lim_f32(OutpDiagcData_Cnt_T_rec.ActvMotTqCmdSca, SCAMOTTQCMDTOZERO_ULS_F32, SCAMOTTQCMDTOONE_ULS_F32);
    SysStFltOutpReqDi_Cnt_T_logl             = DiagcMgrReadBit_u08(OutpDiagcData_Cnt_T_rec.DiagcSts, DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U08);
    DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_logl   = DiagcMgrReadBit_u08(OutpDiagcData_Cnt_T_rec.DiagcSts, DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U08);
    DiagcStsNonRcvrlReqDiFltPrsnt_Cnt_T_logl = DiagcMgrReadBit_u08(OutpDiagcData_Cnt_T_rec.DiagcSts, DIAGCSTSNONRCVRLREQDIFLTPRSNT_CNT_U08);   
    
    /* Write Outputs */
    (void) Rte_Write_SysDiRampRate_Val(SysDiRampRate_UlsPerSec_T_f32);
    (void) Rte_Write_SysDiMotTqCmdSca_Val(SysDiMotTqCmdSca_Uls_T_f32);
    (void) Rte_Write_SysStFltOutpReqDi_Logl(SysStFltOutpReqDi_Cnt_T_logl);
    (void) Rte_Write_DiagcStsCtrldShtDwnFltPrsnt_Logl(DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_logl);
    (void) Rte_Write_DiagcStsNonRcvrlReqDiFltPrsnt_Logl(DiagcStsNonRcvrlReqDiFltPrsnt_Cnt_T_logl);
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagcMgrPer2
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
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl0_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl1_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl10_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl2_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl3_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl4_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl5_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl6_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl7_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl8_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl9_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagcMgrPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) DiagcMgrPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagcMgrPer2
 *********************************************************************************************************************/
    VAR(uint16, AUTOMATIC) DtcIdx_Cnt_T_u16;
    VAR(uint8, AUTOMATIC) DtctempIdx_Cnt_T_u08;
    VAR(Dem_ReturnClearDTCType, AUTOMATIC) DemClrDTCRtnVal_Cnt_T_enum; 
    VAR(Std_ReturnType, AUTOMATIC) RtnVal_Cnt_T_enum; 
    VAR(uint16, AUTOMATIC) NtcMapIdx_Cnt_T_u16 = 0U;
    VAR(NtcInfoRec4, AUTOMATIC) NtcInfo_Cnt_T_rec;
    VAR(uint8, AUTOMATIC) DtcIdxCurrSts_Cnt_T_u08[TOTNROFDTC_CNT_U08 + 1U]; 
    VAR(boolean, AUTOMATIC) ApplIDValid_Cnt_T_logl;

    if(*Rte_Pim_ClrDiagcFlg() != *Rte_Pim_PrevClrDtcFlg())
    {
        /* Call DEM & Update DtcIdxPrevSts */
        DemClrDTCRtnVal_Cnt_T_enum = Dem_ClearDTC(DEM_DTC_GROUP_ALL_DTCS, DEM_DTC_FORMAT_UDS, DEM_DTC_ORIGIN_PRIMARY_MEMORY);
        if(DemClrDTCRtnVal_Cnt_T_enum != DEM_CLEAR_PENDING)
        {
            /* Update DtcIdxPrevSts and PrevClrDtcFlg */
            *Rte_Pim_PrevClrDtcFlg() = *Rte_Pim_ClrDiagcFlg();
            /* Clear All DTCs */
            for (DtcIdx_Cnt_T_u16 = 1U; DtcIdx_Cnt_T_u16 <= TOTNROFDTC_CNT_U08; DtcIdx_Cnt_T_u16++)
            {
                PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] = DTCIDXSTSNORES_CNT_U08;
            }
        }
    }
    else
    {
        /** Normal Periodic Processing **/
        /* Initialize DtcIdxCurrSts */
        for(DtcIdx_Cnt_T_u16 = 0U; DtcIdx_Cnt_T_u16 <= TOTNROFDTC_CNT_U08; DtcIdx_Cnt_T_u16++)
        {
            DtcIdxCurrSts_Cnt_T_u08[DtcIdx_Cnt_T_u16] = DTCIDXSTSNONTC_CNT_U08; 
        }
        /** For All NTCs **/
        while(NtcMapIdx_Cnt_T_u16 < (uint16)TblSize_m(DIAGCMGRNTCMAP_CNT_REC))
        {
            ApplIDValid_Cnt_T_logl = GetNtcInfoApplXRte(DIAGCMGRNTCMAP_CNT_REC[NtcMapIdx_Cnt_T_u16].ApplIdx,
                                                        DIAGCMGRNTCMAP_CNT_REC[NtcMapIdx_Cnt_T_u16].NtcInfoIdx,
                                                        &NtcInfo_Cnt_T_rec);
            if(ApplIDValid_Cnt_T_logl==FALSE)
            {
                /*Default Case : Invalid Appl ID*/
                NtcInfo_Cnt_T_rec.Sts = DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08;
            }
            DtctempIdx_Cnt_T_u08 = (uint8)(PrmDiagcMgrFltResp_u16[NtcMapIdx_Cnt_T_u16] & FLTRESPDTCIDX_CNT_U16);
            UpdDtcSts(NtcMapIdx_Cnt_T_u16,NtcInfo_Cnt_T_rec.Sts,DtctempIdx_Cnt_T_u08,DtcIdxCurrSts_Cnt_T_u08);
            NtcMapIdx_Cnt_T_u16++;
        }
        
        /** For All DTCs **/ 
        for(DtcIdx_Cnt_T_u16 = 0U; DtcIdx_Cnt_T_u16 <= TOTNROFDTC_CNT_U08; DtcIdx_Cnt_T_u16++)
        {
            /* Check If DTC Status has Changed */
            /* DTC Status Changed OR DTC Update NOT Confirmed */     /* Use masks */
            if(((DtcIdxCurrSts_Cnt_T_u08[DtcIdx_Cnt_T_u16]) != (PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] & DTCIDXSTSNONTC_CNT_U08)) ||
                ((PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] & DTCIDXSTSUPDCFMD_CNT_U08) == 0U))
            {
                /* Update DTC Index Previous Status with DTC Index Current Status */
                PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] = DtcIdxCurrSts_Cnt_T_u08[DtcIdx_Cnt_T_u16];     
                /** Update DTC Status **/   
                /* Dtc Status is Passed */      
                if(DtcIdxCurrSts_Cnt_T_u08[DtcIdx_Cnt_T_u16] == DTCIDXSTSPASS_CNT_U08)
                {
                    /* Dem_SetEventStatus */
                    RtnVal_Cnt_T_enum = Dem_SetEventStatus(DEMDTCEVEIDMAP[DtcIdx_Cnt_T_u16], DEM_EVENT_STATUS_PASSED);
                    /* Update 'DTC Index Update Confirmed' Bit */
                    if(RtnVal_Cnt_T_enum == E_OK)
                    {
                        /* Set Bit 7 (DTC Update Confirmed) */
                        PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] = PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] | DTCIDXSTSUPDCFMD_CNT_U08;
                    }
                }
                /* Dtc Status is Failed */
                else if(DtcIdxCurrSts_Cnt_T_u08[DtcIdx_Cnt_T_u16] == DTCIDXSTSFAIL_CNT_U08)
                {
                    /* Dem_SetEventStatus */
                    RtnVal_Cnt_T_enum = Dem_SetEventStatus(DEMDTCEVEIDMAP[DtcIdx_Cnt_T_u16], DEM_EVENT_STATUS_FAILED);
                    /* Update 'DTC Index Update Confirmed' Bit */
                    if(RtnVal_Cnt_T_enum == E_OK)
                    {
                        /* Set Bit 7 (DTC Update Confirmed) */
                        PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] = (PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] | DTCIDXSTSUPDCFMD_CNT_U08);
                    }
                }
                else
                {
                    /* Set Bit 7 (DTC Update Confirmed) */
                    PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] = (PimDtcIdxPrevSts_u08[DtcIdx_Cnt_T_u16] | DTCIDXSTSUPDCFMD_CNT_U08);               
                }
            }
        }
    }
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcActvCore_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcActvCore>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl0_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl1_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl10_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl2_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl3_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl4_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl5_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl6_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl7_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl8_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl9_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean *NtcActv_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcActvCore_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(boolean, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcActv_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcActvCore_Oper
 *********************************************************************************************************************/
    VAR(NtcInfoRec4, AUTOMATIC) NtcInfo_Cnt_T_rec;
    VAR(boolean, AUTOMATIC)     ApplIDValid_Cnt_T_logl;

    ApplIDValid_Cnt_T_logl = GetNtcInfoApplXRte(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].ApplIdx,
                                                DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].NtcInfoIdx,
                                                &NtcInfo_Cnt_T_rec);         
    if(ApplIDValid_Cnt_T_logl == FALSE)
    {
        /*Default Case : Invalid Appl ID*/
        NtcInfo_Cnt_T_rec.Sts = DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08;
    }
        
    if((((NtcInfo_Cnt_T_rec.Sts) & DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08) != 0U)&&  
       (((NtcInfo_Cnt_T_rec.Sts) & DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08) != 0U))
    {
        *NtcActv_Arg = TRUE;
    }
    else
    {
        *NtcActv_Arg = FALSE;
    }    

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcQlfrStsCore_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcQlfrStsCore>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl0_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl1_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl10_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl2_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl3_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl4_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl5_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl6_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl7_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl8_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl9_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcQlfrStsCore_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcQlfr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcQlfrStsCore_Oper
 *********************************************************************************************************************/
    VAR(NtcInfoRec4, AUTOMATIC) NtcInfo_Cnt_T_rec;
    VAR(boolean, AUTOMATIC)     ApplIDValid_Cnt_T_logl;

    ApplIDValid_Cnt_T_logl = GetNtcInfoApplXRte(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].ApplIdx,
                                                DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].NtcInfoIdx,
                                                &NtcInfo_Cnt_T_rec);                  
    if(ApplIDValid_Cnt_T_logl == FALSE)
    {
        /*Default Case : Invalid Appl ID*/
        NtcInfo_Cnt_T_rec.Sts = DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08;
    }

    if(DiagcMgrReadBit_u08((NtcInfo_Cnt_T_rec.Sts), DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08) == TRUE) 
    {
        *NtcQlfr_Arg = SIGQLFR_NORES;
    }
    else if(DiagcMgrReadBit_u08((NtcInfo_Cnt_T_rec.Sts), DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08) == FALSE)
    {
        *NtcQlfr_Arg = SIGQLFR_PASSD;
    }   
    else 
    {
        *NtcQlfr_Arg = SIGQLFR_FAILD;
    }
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetNtcStsCore_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetNtcStsCore>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl0_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl1_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl10_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl2_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl3_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl4_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl5_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl6_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl7_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl8_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl9_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 *NtcInfoSts_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcStsCore_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, P2VAR(uint8, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoSts_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetNtcStsCore_Oper
 *********************************************************************************************************************/
    VAR(NtcInfoRec4, AUTOMATIC) NtcInfo_Cnt_T_rec;
    VAR(boolean, AUTOMATIC)     ApplIDValid_Cnt_T_logl;

    ApplIDValid_Cnt_T_logl = GetNtcInfoApplXRte(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].ApplIdx,
                                                DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].NtcInfoIdx,
                                                &NtcInfo_Cnt_T_rec);                  
    if(ApplIDValid_Cnt_T_logl == FALSE)
    {
        /*Default Case*/
        NtcInfo_Cnt_T_rec.Sts = DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08;
    }
    
    *NtcInfoSts_Arg = NtcInfo_Cnt_T_rec.Sts;
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadLtchCntrData_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ReadLtchCntrData>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ReadLtchCntrData_Oper(uint8 *ReadLtchCntrAry_Arg)
 *     Argument ReadLtchCntrAry_Arg: uint8* is of type Ary1D_u08_20
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadLtchCntrData_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) ReadLtchCntrData_Oper(P2VAR(uint8, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ReadLtchCntrAry_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadLtchCntrData_Oper
 *********************************************************************************************************************/
    VAR(uint8, AUTOMATIC) LoopCnt_Cnt_T_u08;
    
    for(LoopCnt_Cnt_T_u08 = 0U;LoopCnt_Cnt_T_u08 < TblSize_m(PimDiagcMgrLtchCntrAry_u08); LoopCnt_Cnt_T_u08++)
    {
        ReadLtchCntrAry_Arg[LoopCnt_Cnt_T_u08] = (Rte_Pim_DiagcMgrLtchCntrAry())[LoopCnt_Cnt_T_u08];
    }
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadNtcFltAry_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ReadNtcFltAry>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl0_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl1_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl10_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl2_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl3_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl4_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl5_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl6_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl7_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl8_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl9_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ReadNtcFltAry_Oper(ReadFltInfoRec1 *DiagcMgrReadFltInfo_Arg)
 *     Argument DiagcMgrReadFltInfo_Arg: ReadFltInfoRec1* is of type Ary1D_ReadFltInfoRec1_20
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadNtcFltAry_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) ReadNtcFltAry_Oper(P2VAR(ReadFltInfoRec1, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcMgrReadFltInfo_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadNtcFltAry_Oper
 *********************************************************************************************************************/
    VAR(uint16, AUTOMATIC) NtcMapIdx_Cnt_T_u16;
    VAR(uint8, AUTOMATIC) ReadFltInfoIdx_Cnt_T_u08 = 0U;            /* Clear Read Flt Array Idx ReadFltInfoIdx_Cnt_T_u08 */
    VAR(uint16, AUTOMATIC) HistReadFltAryIdx_Cnt_T_u16 = 0U;        /* Clear Hist Flt Array Idx HistReadFltAryIdx_Cnt_T_u16 */
    VAR(ReadFltInfoRec1, AUTOMATIC) HistReadFltAry_T_rec[SIZEOFREADFLTARY_CNT_U08];
    VAR(uint16, AUTOMATIC) HistReadFltAryTempIdx_Cnt_T_u16 = 0U;    /* Initialize the HistReadFltAryTempIdx_Cnt_T_u16 */
    VAR(NtcInfoRec4, AUTOMATIC) NtcInfo_Cnt_T_rec;
    VAR(boolean, AUTOMATIC)     ApplIDValid_Cnt_T_logl;

    NtcMapIdx_Cnt_T_u16 = 1U;
    
    while((NtcMapIdx_Cnt_T_u16 < (uint16)TblSize_m(DIAGCMGRNTCMAP_CNT_REC)) && ((ReadFltInfoIdx_Cnt_T_u08 < SIZEOFREADFLTARY_CNT_U08))) 
    {
        ApplIDValid_Cnt_T_logl = GetNtcInfoApplXRte(DIAGCMGRNTCMAP_CNT_REC[NtcMapIdx_Cnt_T_u16].ApplIdx,
                                                    DIAGCMGRNTCMAP_CNT_REC[NtcMapIdx_Cnt_T_u16].NtcInfoIdx,
                                                    &NtcInfo_Cnt_T_rec);                  
        if(ApplIDValid_Cnt_T_logl == FALSE)
        {
            /*Default Case : Invalid Appl ID*/
            NtcInfo_Cnt_T_rec.AgiCntr = DFTAGICNTR_CNT_U08;
            NtcInfo_Cnt_T_rec.Sts = 0U;
            NtcInfo_Cnt_T_rec.NtcStInfo = 0U;    
        } 

        /* Update DiagcMgrReadFltInfo_Arg and HistReadFltAry_T_rec */ 
        if(NtcInfo_Cnt_T_rec.AgiCntr == 0U)
        {           
            /* Update ReadFltInfo */
            DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08].NtcNr = NtcMapIdx_Cnt_T_u16;
            DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08].AgiCntr = 0U;
            DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08].Sts = NtcInfo_Cnt_T_rec.Sts;                                      
            DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08].NtcStInfo = NtcInfo_Cnt_T_rec.NtcStInfo;                                      

            ReadFltInfoIdx_Cnt_T_u08++;
        }
        else if(NtcInfo_Cnt_T_rec.AgiCntr  < MAXCYCINHIST_CNT_U08)
        {
            if(HistReadFltAryIdx_Cnt_T_u16 < (uint16)TblSize_m(HistReadFltAry_T_rec))
            {
                /* Update History Fault Array */
                HistReadFltAry_T_rec[HistReadFltAryIdx_Cnt_T_u16].NtcNr = NtcMapIdx_Cnt_T_u16;
                HistReadFltAry_T_rec[HistReadFltAryIdx_Cnt_T_u16].AgiCntr = NtcInfo_Cnt_T_rec.AgiCntr;
                HistReadFltAry_T_rec[HistReadFltAryIdx_Cnt_T_u16].Sts = NtcInfo_Cnt_T_rec.Sts;                                       
                HistReadFltAry_T_rec[HistReadFltAryIdx_Cnt_T_u16].NtcStInfo = NtcInfo_Cnt_T_rec.NtcStInfo;                                       

                HistReadFltAryIdx_Cnt_T_u16++;
            }
        }
        else /* For DFTAGICNTR_CNT_U08 */
        {
         /* Do Nothing */
        }   
        NtcMapIdx_Cnt_T_u16++;
    }
     /* While(HistFltIdx < Length[HistFltAry]) */     
    while((ReadFltInfoIdx_Cnt_T_u08 < SIZEOFREADFLTARY_CNT_U08) &&
          (HistReadFltAryTempIdx_Cnt_T_u16 < HistReadFltAryIdx_Cnt_T_u16))
    {      
         /* Update DiagcMgrReadFltInfo_Arg with History Fault Array values */
         DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08] = HistReadFltAry_T_rec[HistReadFltAryTempIdx_Cnt_T_u16];   
                
         /* Increment Indices */
         ReadFltInfoIdx_Cnt_T_u08++;
         HistReadFltAryTempIdx_Cnt_T_u16++;      
    }   
    while(ReadFltInfoIdx_Cnt_T_u08 < SIZEOFREADFLTARY_CNT_U08)
    {
        /* Update DiagcMgrReadFltInfo_Arg */
        DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08].NtcNr = NTCNR_RESD;
        DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08].AgiCntr = DFTAGICNTR_CNT_U08;
        DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08].Sts = 0U;
        DiagcMgrReadFltInfo_Arg[ReadFltInfoIdx_Cnt_T_u08].NtcStInfo = 0U;
         
        ReadFltInfoIdx_Cnt_T_u08++;
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadNtcInfoAndDebCntr_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ReadNtcInfoAndDebCntr>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl0_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl1_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl10_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl2_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl3_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl4_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl5_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl6_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl7_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl8_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcDebCntrAppl9_Oper(uint8 DebCntrIdx_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl0_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl1_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl10_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl2_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl3_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl4_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl5_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl6_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl7_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl8_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcInfoAppl9_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 *NtcInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ReadNtcInfoAndDebCntr_Oper(NtcNr1 NtcNr_Arg, NtcInfoRec4 *NtcInfo_Arg, sint16 *DebCntr_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadNtcInfoAndDebCntr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) ReadNtcInfoAndDebCntr_Oper(NtcNr1 NtcNr_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DebCntr_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadNtcInfoAndDebCntr_Oper
 *********************************************************************************************************************/

    switch(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].ApplIdx)
    {
        #ifdef NTCCNTAPPL0_CNT_U16
            case 0x00U:
            {
                if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl0_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl0_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);
            }
            break;
        #endif
                      
        #ifdef NTCCNTAPPL1_CNT_U16
            case 0x01U:
            {
                if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl1_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl1_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);              
            }
            break;
        #endif
                  
        #ifdef NTCCNTAPPL2_CNT_U16
            case 0x02U:
            {
                if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl2_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl2_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);              
            }
            break;
        #endif           
        
        #ifdef NTCCNTAPPL3_CNT_U16
            case 0x03U:
            {
                if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl3_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl3_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);              
            }
            break;
        #endif          
            
        #ifdef NTCCNTAPPL4_CNT_U16
            case 0x04U:
            {
                if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl4_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl4_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);              
            }
            break;
        #endif          
           
        #ifdef NTCCNTAPPL5_CNT_U16
            case 0x05U:
            {
                if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl5_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl5_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);              
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL6_CNT_U16
            case 0x06U:
            {
                if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl6_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl6_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL7_CNT_U16
            case 0x07U:
            {
                if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl7_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl7_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);              
            }
            break;
        #endif          
          
        #ifdef NTCCNTAPPL8_CNT_U16
            case 0x08U:
            {
                if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl8_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl8_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL9_CNT_U16
            case 0x09U:
            {
                if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl9_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl9_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);              
            }
            break;
        #endif          
        
        #ifdef NTCCNTAPPL10_CNT_U16
            case 0x0AU:
            {
                if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx == 0U)
                {
                    /* Non Debounced */
                    DebCntr_Arg = 0;
                }
                else
                {
                    /* Debounced */
                    (void) Rte_Call_GetNtcDebCntrAppl10_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx, DebCntr_Arg);
                }
                (void) Rte_Call_GetNtcInfoAppl10_Oper(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].NtcInfoIdx, NtcInfo_Arg);              
            }
            break;
        #endif  

        default: /*case 0xFFU:*/
        {  
            /* Do Nothing */        
        }
        break;                  
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ReadSnpshtData_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ReadSnpshtData>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ReadSnpshtData_Oper(SnpshtDataRec2 *ReadSnpshtDataAry_Arg)
 *     Argument ReadSnpshtDataAry_Arg: SnpshtDataRec2* is of type Ary1D_SnpshtDataRec2_8
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadSnpshtData_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagcMgr_CODE) ReadSnpshtData_Oper(P2VAR(SnpshtDataRec2, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ReadSnpshtDataAry_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ReadSnpshtData_Oper
 *********************************************************************************************************************/
    
    VAR(uint8, AUTOMATIC) ReadSnpshtDataAryIdx_Cnt_T_u08;
    for(ReadSnpshtDataAryIdx_Cnt_T_u08 = 0U; (ReadSnpshtDataAryIdx_Cnt_T_u08 < (uint8)TblSize_m(PimSnpshtDataAry_rec)); ReadSnpshtDataAryIdx_Cnt_T_u08++)
    {   
        ReadSnpshtDataAry_Arg[ReadSnpshtDataAryIdx_Cnt_T_u08] = PimSnpshtDataAry_rec[ReadSnpshtDataAryIdx_Cnt_T_u08];
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetNtcStsCore_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetNtcStsCore>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_IgnCntr_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_MfgDiagcInhb_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdMrfScad_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetMcuDiagcSpplData_Oper(uint32 *McuDiagcData1_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SnpshtDataAry_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_DiagcMgrExclusiveArea(void)
 *   void Rte_Exit_DiagcMgrExclusiveArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec2 *DiagcData_Arg, DiagcDataRec2 *ProxySetNtcData_Arg, NtcInfoRec4 *NtcInfo_Arg, sint16 *NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SetNtcStsCore_PortIf2_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetNtcStsCore_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagcMgr_CODE) SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, P2VAR(DiagcDataRec2, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) DiagcData_Arg, P2VAR(DiagcDataRec2, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) ProxySetNtcData_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfo_Arg, P2VAR(sint16, AUTOMATIC, RTE_DIAGCMGR_APPL_VAR) NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetNtcStsCore_Oper (returns application error)
 *********************************************************************************************************************/
    VAR(Std_ReturnType, AUTOMATIC) Return_Cnt_T_u08 = E_OK;      
    VAR(boolean, AUTOMATIC) MfgDiagcInhb_Cnt_T_logl;        
    VAR(MfgEnaSt1, AUTOMATIC) MfgEnaSt_Cnt_T_enum;  
    VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum;   
    VAR(uint8, AUTOMATIC) DtctempIdx_Cnt_T_u08;
    VAR(uint32, AUTOMATIC) McuDiagcSpplData_Cnt_T_u32;
    VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MotTqCmdMrfScad_MotNwtMtr_T_f32;
    VAR(uint32, AUTOMATIC) IgnCntr_Cnt_T_u32;
    VAR(float32, AUTOMATIC) BrdgVltg_Volt_T_f32;
    VAR(float32, AUTOMATIC) EcuTFild_DegCgrd_T_f32;

    VAR(sint16, AUTOMATIC) HwTq_HwNwtMtr_T_s5p10;
    VAR(sint16, AUTOMATIC) MotTqCmdMrfScad_MotNwtMtr_T_s5p10;
    VAR(uint16, AUTOMATIC) BrdgVltg_Volt_T_u6p10;
    VAR(sint16, AUTOMATIC) EcuTFild_DegCgrd_T_s8p7;
    
    /* Read Inputs */
    (void) Rte_Read_BrdgVltg_Val(&BrdgVltg_Volt_T_f32);  
    (void) Rte_Read_EcuTFild_Val(&EcuTFild_DegCgrd_T_f32);
    (void) Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32); 
    (void) Rte_Read_IgnCntr_Val(&IgnCntr_Cnt_T_u32); 
    (void) Rte_Read_MfgDiagcInhb_Logl(&MfgDiagcInhb_Cnt_T_logl);
    (void) Rte_Read_MfgEnaSt_Val(&MfgEnaSt_Cnt_T_enum); 
    (void) Rte_Read_MotTqCmdMrfScad_Val(&MotTqCmdMrfScad_MotNwtMtr_T_f32);
    (void) Rte_Read_SysSt_Val(&SysSt_Cnt_T_enum);

    /*Read BRAMDAT1 register*/
    (void)Rte_Call_GetMcuDiagcSpplData_Oper(&McuDiagcSpplData_Cnt_T_u32);
    
    /* Create SnapshotDataBus */ 
    HwTq_HwNwtMtr_T_s5p10        = FloatToFixd_s16_f32(HwTq_HwNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP10_ULS_F32);
    MotTqCmdMrfScad_MotNwtMtr_T_s5p10 = FloatToFixd_s16_f32(MotTqCmdMrfScad_MotNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP10_ULS_F32);
    BrdgVltg_Volt_T_u6p10    = FloatToFixd_u16_f32(BrdgVltg_Volt_T_f32, NXTRFIXDPT_FLOATTOP10_ULS_F32);
    EcuTFild_DegCgrd_T_s8p7     = FloatToFixd_s16_f32(EcuTFild_DegCgrd_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
    
    if(((NtcNr_Arg) >= NTCNR_0X001 ) && ((NtcNr_Arg) <= NTCNR_0X1FF)) 
    {
        /* NtcNr is Valid */ 

        /* Ntc Freeze Condition */  

        /*      
        (((u1 == 1) & (u4 == 1) & (u5 == 1)) | 
        ((u2 == 1) & (u4 == 1) & (u3 ~= 2))) | 
        ((u6 ~= u7) & (u8 >= 176) & (u8 <= 463)) 
        
        u1 - (DIAGCMGRNTCPPTYARY_CNT_U08[NtcNr_Arg] & NTCPPTYMFGINHBINENAST_CNT_U08)
        u2 - (DIAGCMGRNTCPPTYARY_CNT_U08[NtcNr_Arg] & NTCPPTYMFGINHBNOTINENAST_CNT_U08)
        u3 - SysSt_Cnt_T_enum
        u4 - MfgEnaSt_Cnt_T_enum
        u5 - MfgDiagcInhb_Cnt_T_logl
        u6 - DTCENAMASK[(PrmDiagcMgrFltResp_u16[NtcNr_Arg] & FLTRESPDTCIDX_CNT_U16)]
        u7 - DTCENAMASK[(PrmDiagcMgrFltResp_u16[NtcNr_Arg] & FLTRESPDTCIDX_CNT_U16)] & DtcEnaSts
        u8 - NtcNrRange
        u9 - (DIAGCMGRNTCPPTYARY_CNT_U08[NtcNr_Arg] & NTCPPTYSTSLOCKDTHISIGNCYC_CNT_U08)
        */
        DtctempIdx_Cnt_T_u08 = (uint8)(PrmDiagcMgrFltResp_u16[NtcNr_Arg] & FLTRESPDTCIDX_CNT_U16);
        if((((((DIAGCMGRNTCPPTYARY_CNT_U08[NtcNr_Arg] & NTCPPTYMFGINHBINENAST_CNT_U08) != 0U) && (MfgDiagcInhb_Cnt_T_logl == TRUE)) ||
             (((DIAGCMGRNTCPPTYARY_CNT_U08[NtcNr_Arg] & NTCPPTYMFGINHBNOTINENAST_CNT_U08) != 0U) && (SysSt_Cnt_T_enum != SYSST_ENA))) && 
             (MfgEnaSt_Cnt_T_enum == MFGENAST_MFGMOD )) ||
             ((DTCENAMASK[DtctempIdx_Cnt_T_u08] != (DTCENAMASK[DtctempIdx_Cnt_T_u08] & *Rte_Pim_DtcEnaSts())) && 
             ((NtcNr_Arg >= NTCNR_0X0B0) && (NtcNr_Arg <= NTCNR_0X1CF)) &&
             ((DIAGCMGRNTCPPTYARY_CNT_U08[NtcNr_Arg] & NTCPPTYSTSLOCKDTHISIGNCYC_CNT_U08) == 0U)))
        {
            /* Diagnostics Inhibited */
        }    
        else
        {
            /* Diagnostics Not Inhibited */
            if(DiagcMgrReadBit_u16((PrmDiagcMgrFltResp_u16[NtcNr_Arg]), FLTRESPNTCENAD_CNT_U16) == TRUE)
            {
                /** Ntc Enabled **/ 
                /* NTCSTS_PASSD */
                if(NtcSts_Arg == NTCSTS_PASSD) 
                {
                    ProcNtcStsPassd(NtcNr_Arg,
                                    NtcInfo_Arg,
                                    NtcInfoDebCntr_Arg);
                }
                /* NTCSTS_FAILD */
                else if(NtcSts_Arg == NTCSTS_FAILD)
                {
                    /*** Update logic of Called NTC ***/
                    /** Update ISO Bits, Parameter Byte and Ageing Counter of Called NTC **/
                    /** UpdSnpshtData **/
                    if( ((NtcInfo_Arg->Sts & DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08) == 0U) &&
                        ((NtcNr_Arg <= NTCNR_0X0FF) || (SpclSnpshtDataPrsnt_Arg == TRUE)))
                    {
                        UpdSnpshtData(McuDiagcSpplData_Cnt_T_u32, 
                                      HwTq_HwNwtMtr_T_s5p10, 
                                      MotTqCmdMrfScad_MotNwtMtr_T_s5p10, 
                                      IgnCntr_Cnt_T_u32,
                                      BrdgVltg_Volt_T_u6p10, 
                                      EcuTFild_DegCgrd_T_s8p7, 
                                      NtcNr_Arg,
                                      NtcStInfo_Arg,                      
                                      SysSt_Cnt_T_enum,
                                      SpclSnpshtData0_Arg,
                                      SpclSnpshtData1_Arg,
                                      SpclSnpshtData2_Arg);
                    }

                    /* Update ISO Bits */
                    /* Set Bits: DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08, DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08, 
                                    DIAGCMGR_NTCINFOCFMDNTC_CNT_U08 */
                    DiagcMgrSetBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08); 
                    DiagcMgrSetBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08); 
                    DiagcMgrSetBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOCFMDNTC_CNT_U08);                                                                      
                    /* Clear Bits: DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08 */
                    DiagcMgrClrBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08); 
                     
                    /* Update Parameter Byte and Ageing Counter of Called NTC */
                    NtcInfo_Arg->NtcStInfo = NtcInfo_Arg->NtcStInfo | NtcStInfo_Arg;    
                    NtcInfo_Arg->AgiCntr = 0U;                   
                    *NtcInfoDebCntr_Arg = MAXDEBCNTRVAL_CNT_S16;
                    
                    /** ProcessRampResponse and DiagcSts **/
                    /* ProcessRampResponse */
                    ProcRampResp(NtcNr_Arg, DiagcData_Arg, ProxySetNtcData_Arg); 
                }
                /* NTCSTS_PREPASSD */                
                else if(NtcSts_Arg == NTCSTS_PREPASSD)
                {
                    #if (STD_ON == NXTRDET_DIAGCMGR)
                        if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx == 0U)
                        {                           
                            /* Non Debounced NTC using debounce values */
                            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, 0xFFU, 1U, 0U);
                        } 
                    #endif
                    ProcNtcStsPrePassd(NtcNr_Arg,
                                       DebStep_Arg,
                                       NtcInfo_Arg,
                                       NtcInfoDebCntr_Arg);
                }   
                /*NTCSTS_PREFAILD */            
                else if(NtcSts_Arg == NTCSTS_PREFAILD)
                {                    
                     #if (STD_ON == NXTRDET_DIAGCMGR)
                        if(DIAGCMGRNTCMAP_CNT_REC[NtcNr_Arg].DebCntrIdx == 0U)
                        {                           
                            /* Non Debounced NTC using debounce values */
                            (void)Det_ReportError(NXTRDET_DIAGCMGRMODID_CNT_U16, 0xFFU, 1U, 1U);
                        } 
                    #endif

                    /** Update NtcInfoSts, DebCntr and Process RampRate **/ 
                    if((((sint32)*NtcInfoDebCntr_Arg) >= (((sint32)MAXDEBCNTRVAL_CNT_S16) - (sint32)(uint32)DebStep_Arg)) || 
                        (DebStep_Arg >= (uint16)MAXDEBCNTRVAL_CNT_S16))
                    /* Increment Counter */
                    {
                        /** UpdSnpshtData **/
                        if( ((NtcInfo_Arg->Sts & DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08) == 0U) &&
                            ((NtcNr_Arg <= NTCNR_0X0FF) || (SpclSnpshtDataPrsnt_Arg == TRUE)))
                        {
                        UpdSnpshtData(McuDiagcSpplData_Cnt_T_u32, 
                                      HwTq_HwNwtMtr_T_s5p10, 
                                      MotTqCmdMrfScad_MotNwtMtr_T_s5p10, 
                                      IgnCntr_Cnt_T_u32,
                                      BrdgVltg_Volt_T_u6p10, 
                                      EcuTFild_DegCgrd_T_s8p7, 
                                      NtcNr_Arg,
                                      NtcStInfo_Arg,                      
                                      SysSt_Cnt_T_enum,
                                      SpclSnpshtData0_Arg,
                                      SpclSnpshtData1_Arg,
                                      SpclSnpshtData2_Arg);
                        }

                        /* Deb Counter >= MAXDEBCNTRVAL_CNT_S16 */
                        *NtcInfoDebCntr_Arg = MAXDEBCNTRVAL_CNT_S16;
                        /** Update the NTC and DiagcSts Word **/
                        /* Set DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08, DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08, DIAGCMGR_NTCINFOCFMDNTC_CNT_U08 */
                        DiagcMgrSetBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08); 
                        DiagcMgrSetBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08); 
                        DiagcMgrSetBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOCFMDNTC_CNT_U08);  
                        
                        /* Clear DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08 */ 
                        DiagcMgrClrBits_u08(&(NtcInfo_Arg->Sts), DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08);
                        /* Update NtcStInfo, DebCntr, AgiCntr */
                        NtcInfo_Arg->NtcStInfo = NtcInfo_Arg->NtcStInfo | NtcStInfo_Arg;                        
                        NtcInfo_Arg->AgiCntr  = 0U;

                        /** ProcessRampResponse and DiagcSts **/
                        ProcRampResp(NtcNr_Arg, DiagcData_Arg, ProxySetNtcData_Arg);
                    }
                    else
                    {
                        /* Deb Counter < MAXDEBCNTRVAL_CNT_S16 */
                        if(*NtcInfoDebCntr_Arg < 0)
                        {
                            *NtcInfoDebCntr_Arg = (sint16)((sint32)(uint32)DebStep_Arg);
                        }
                        else
                        {
                            *NtcInfoDebCntr_Arg = *NtcInfoDebCntr_Arg + (sint16)(sint32)(uint32)DebStep_Arg;
                        }
                    }               
                }
                else
                {
                    Return_Cnt_T_u08 = E_NOT_OK;
                }
            }            
        }
    }
    else
    {
        /* NtcNr is invalid */
        Return_Cnt_T_u08 = E_NOT_OK;
    }  
  return Return_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define DiagcMgr_STOP_SEC_CODE
#include "DiagcMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
/**********************************************************************************************************************
 * Function:    ProcRampResp
 * Description: This function will update Ramp Rate, Scale and Ramp Related DiagStatus bits based on passed fault response
 *              currently active. This corresponds to "ProcessRampResponse and DiagcSts" block in DiagcMgr model
 * Inputs:      NtcNr_Cnt_T_u16 : NTC number between 0 to 511, from the input to SetNtcStsCore runnable
 *              DiagcData_T_rec : Diagnostic Status that get updated each time SetNtcSts is called.
 *              ProxySetNtcData_T_rec : Copy of Diagnostic Status that get updated along with DiagcData_T_rec
 * Outputs:     None
 * Usage Notes: None
 **********************************************************************************************************************/
 static FUNC(void, DiagcMgr_CODE) ProcRampResp(VAR(uint16,AUTOMATIC) NtcNr_Cnt_T_u16,
                                               CONSTP2VAR(DiagcDataRec2, AUTOMATIC, AUTOMATIC) DiagcData_T_rec,
                                               CONSTP2VAR(DiagcDataRec2, AUTOMATIC, AUTOMATIC) ProxySetNtcData_T_rec)
{   
    VAR(uint8, AUTOMATIC)  TempDiagcSts_Cnt_T_u08;
    VAR(uint16, AUTOMATIC) RampRespBits_Cnt_T_u16;
    VAR(uint8 , AUTOMATIC) NonRcvrlNtc_Cnt_T_u08;
    
    RampRespBits_Cnt_T_u16 = (uint16)(((PrmDiagcMgrFltResp_u16[NtcNr_Cnt_T_u16]) & FLTRESPRAMPBITS_CNT_U16) >> 8U);
    if(((PrmDiagcMgrFltResp_u16[NtcNr_Cnt_T_u16]) & FLTRESPRCVRLFLT_CNT_U16) != 0U)
    {
        /*NtcIsRecoverable*/
        NonRcvrlNtc_Cnt_T_u08 = 0U;
    }
    else
    {
        /*NtcIsNotRecoverable*/
        NonRcvrlNtc_Cnt_T_u08 = DIAGCSTSNONRCVRLREQDIFLTPRSNT_CNT_U08;
    }

    switch(RampRespBits_Cnt_T_u16)
    {
        /* RapidShutdown Fault*/ 
        case IMDTSHTDWNFLT_CNT_U16:
        {   /*** RapidShutdown Fault ***/
            TempDiagcSts_Cnt_T_u08 = DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U08 | NonRcvrlNtc_Cnt_T_u08;

            /* Atomic Section */
            Rte_Enter_DiagcMgrExclusiveArea();

            /* Update DiagcSts */
            DiagcData_T_rec->DiagcSts = DiagcData_T_rec->DiagcSts | TempDiagcSts_Cnt_T_u08;
            ProxySetNtcData_T_rec->DiagcSts = ProxySetNtcData_T_rec->DiagcSts | TempDiagcSts_Cnt_T_u08;

            /* Update Ramp Rate */  
            if(MAXRAMPRATE_ULSPERSEC_F32 > DiagcData_T_rec->ActvRampRate)
            {                               
                DiagcData_T_rec->ActvRampRate = MAXRAMPRATE_ULSPERSEC_F32;
            }            
            if(MAXRAMPRATE_ULSPERSEC_F32 > ProxySetNtcData_T_rec->ActvRampRate)
            {                               
                ProxySetNtcData_T_rec->ActvRampRate = MAXRAMPRATE_ULSPERSEC_F32;
            }            
            /* Update Scale */  
            if(SCAMOTTQCMDTOZERO_ULS_F32 < DiagcData_T_rec->ActvMotTqCmdSca)
            {                               
                DiagcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }            
            if(SCAMOTTQCMDTOZERO_ULS_F32 < ProxySetNtcData_T_rec->ActvMotTqCmdSca)
            {                               
                ProxySetNtcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }               
            Rte_Exit_DiagcMgrExclusiveArea();  
        }   
        break;

        /* ControlledShutdown Fault */ 
        case CTRLDSHTDWNFLT_CNT_U16:
        {
            /* ProcessDiagcSts */                       
            TempDiagcSts_Cnt_T_u08 = DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U08 | DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U08 | NonRcvrlNtc_Cnt_T_u08;

            /* Atomic Section */
            Rte_Enter_DiagcMgrExclusiveArea();

            /* Update DiagcSts */
            DiagcData_T_rec->DiagcSts = DiagcData_T_rec->DiagcSts | TempDiagcSts_Cnt_T_u08;
            ProxySetNtcData_T_rec->DiagcSts = ProxySetNtcData_T_rec->DiagcSts | TempDiagcSts_Cnt_T_u08;                                  

            /* Update Scale */  
            if(SCAMOTTQCMDTOZERO_ULS_F32 < DiagcData_T_rec->ActvMotTqCmdSca)
            {                               
                DiagcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }            
            if(SCAMOTTQCMDTOZERO_ULS_F32 < ProxySetNtcData_T_rec->ActvMotTqCmdSca)
            {                               
                ProxySetNtcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }             
            Rte_Exit_DiagcMgrExclusiveArea();
        }   
        break;                                                                    

        /* Information Only Fault */
        case INFOONLYFLT_CNT_U16:     
        {
            /*Input is passed as is - No action required here*/
        }
        break;

        /* TimedShutdown Fault */
        default: 
        {            
            /* ProcessDiagcSts */                       
            TempDiagcSts_Cnt_T_u08 = DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U08 | NonRcvrlNtc_Cnt_T_u08;

            /* Atomic Section */
            Rte_Enter_DiagcMgrExclusiveArea();

            /* Update DiagcSts */
            DiagcData_T_rec->DiagcSts = DiagcData_T_rec->DiagcSts | TempDiagcSts_Cnt_T_u08;
            ProxySetNtcData_T_rec->DiagcSts = ProxySetNtcData_T_rec->DiagcSts | TempDiagcSts_Cnt_T_u08;                                      

            /* Update Ramp Rate */ 
            if((FLTRESPRAMPTBL_ULS_F32[RampRespBits_Cnt_T_u16]) > DiagcData_T_rec->ActvRampRate)
            {                               
                DiagcData_T_rec->ActvRampRate = FLTRESPRAMPTBL_ULS_F32[RampRespBits_Cnt_T_u16];
            }            
            if((FLTRESPRAMPTBL_ULS_F32[RampRespBits_Cnt_T_u16]) > ProxySetNtcData_T_rec->ActvRampRate)
            {                               
                ProxySetNtcData_T_rec->ActvRampRate = FLTRESPRAMPTBL_ULS_F32[RampRespBits_Cnt_T_u16];
            }            
            /* Update Scale */  
            if(SCAMOTTQCMDTOZERO_ULS_F32 < DiagcData_T_rec->ActvMotTqCmdSca)
            {                               
                DiagcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }            
            if(SCAMOTTQCMDTOZERO_ULS_F32 < ProxySetNtcData_T_rec->ActvMotTqCmdSca)
            {                               
                ProxySetNtcData_T_rec->ActvMotTqCmdSca = SCAMOTTQCMDTOZERO_ULS_F32;
            }             
            Rte_Exit_DiagcMgrExclusiveArea();
        }   
        break;                           
    }
}

/**********************************************************************************************************************
 * Function:    UpdSnpshtData
 * Description: This function will update Snapshot Data based on passed fault response bit currently active
 * Inputs:      McuDiagcSpplData_Cnt_T_u32 : BRAMDAT1 register value from call to GetMcuDiagcSpplData
 *              HwTq_HwNwtMtr_T_s5p10      : Handwheel Torque RTE Input
 *              MotTqCmdMrfScad_MotNwtMtr_T_s5p10 : Mrf Motor Torque Command scaled RTE Input
 *              IgnCntr_Cnt_T_u32          : Ignition Counter RTE Input
                BrdgVltg_Volt_T_u6p10      : Bridge Voltage RTE Input
                EcuTFild_DegCgrd_T_s8p7    : Ecu Temperature Filtered in DegC. RTE Input.
 *              NtcNr_Cnt_T_u16            : NTC number in the range 0-255
 *              NtcStInfo_Cnt_T_u08        : NTC State Info argument input to SetNtcStsCore
 *              SysSt_Cnt_T_enum           : System State RTE Input
 *              SpclSnpshtData0_Cnt_T_u32  : Special Snapshot Data 0 Input Argument to SetNtcStsCore runnable
 *              SpclSnpshtData1_Cnt_T_u32  : Special Snapshot Data 1 Input Argument to SetNtcStsCore runnable
 *              SpclSnpshtData2_Cnt_T_u32  : Special Snapshot Data 2 Input Argument to SetNtcStsCore runnable
 * Outputs:     None
 * Usage Notes: None
 **********************************************************************************************************************/
static FUNC(void, DiagcMgr_CODE) UpdSnpshtData(VAR(uint32, AUTOMATIC) McuDiagcSpplData_Cnt_T_u32, 
                                               VAR(sint16, AUTOMATIC) HwTq_HwNwtMtr_T_s5p10,
                                               VAR(sint16, AUTOMATIC) MotTqCmdMrfScad_MotNwtMtr_T_s5p10, 
                                               VAR(uint32, AUTOMATIC) IgnCntr_Cnt_T_u32, 
                                               VAR(uint16, AUTOMATIC) BrdgVltg_Volt_T_u6p10, 
                                               VAR(sint16, AUTOMATIC) EcuTFild_DegCgrd_T_s8p7, 
                                               VAR(NtcNr1, AUTOMATIC) NtcNr_Cnt_T_u16, 
                                               VAR(uint8 , AUTOMATIC) NtcStInfo_Cnt_T_u08, 
                                               VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum,
                                               VAR(uint32, AUTOMATIC) SpclSnpshtData0_Cnt_T_u32,
                                               VAR(uint32, AUTOMATIC) SpclSnpshtData1_Cnt_T_u32,
                                               VAR(uint32, AUTOMATIC) SpclSnpshtData2_Cnt_T_u32)
{   
    VAR(boolean, AUTOMATIC) SnpshtDataAryIdxInvld_Cnt_T_logl;
    VAR(uint8, AUTOMATIC) SnpshtDataAryIdx_Cnt_T_u08;

    /* Initialize */
    SnpshtDataAryIdxInvld_Cnt_T_logl = TRUE;
    SnpshtDataAryIdx_Cnt_T_u08 = 0U;
    
    while((SnpshtDataAryIdxInvld_Cnt_T_logl == TRUE) && (SnpshtDataAryIdx_Cnt_T_u08 < TblSize_m(PimSnpshtDataAry_rec)))
    {
        if((PimSnpshtDataAry_rec[SnpshtDataAryIdx_Cnt_T_u08].NtcNr == 0U) ||
        (PimSnpshtDataAry_rec[SnpshtDataAryIdx_Cnt_T_u08].NtcNr == NtcNr_Cnt_T_u16))
        {
            if(PimSnpshtDataAry_rec[SnpshtDataAryIdx_Cnt_T_u08].IgnCntr < IgnCntr_Cnt_T_u32)
            {
                /* Update Snapshot Data */
                PimSnpshtDataAry_rec[SnpshtDataAryIdx_Cnt_T_u08].SpclSnpshtData0 = DFTSPCLSNPSHTDATA_CNT_U32;
                PimSnpshtDataAry_rec[SnpshtDataAryIdx_Cnt_T_u08].SpclSnpshtData1 = DFTSPCLSNPSHTDATA_CNT_U32;
                PimSnpshtDataAry_rec[SnpshtDataAryIdx_Cnt_T_u08].SpclSnpshtData2 = DFTSPCLSNPSHTDATA_CNT_U32;
                PimSnpshtDataAry_rec[SnpshtDataAryIdx_Cnt_T_u08].MicroDiagcData  = McuDiagcSpplData_Cnt_T_u32;
                PimSnpshtDataAry_rec[SnpshtDataAryIdx_Cnt_T_u08].IgnCntr         = IgnCntr_Cnt_T_u32;
                PimSnpshtDataAry_rec[SnpshtDataAryIdx_Cnt_T_u08].HwTq            = HwTq_HwNwtMtr_T_s5p10;
                PimSnpshtDataAry_rec[SnpshtDataAryIdx_Cnt_T_u08].MotTq           = MotTqCmdMrfScad_MotNwtMtr_T_s5p10;
                PimSnpshtDataAry_rec[SnpshtDataAryIdx_Cnt_T_u08].BrdgVltg        = BrdgVltg_Volt_T_u6p10;
                PimSnpshtDataAry_rec[SnpshtDataAryIdx_Cnt_T_u08].EcuT            = EcuTFild_DegCgrd_T_s8p7;
                PimSnpshtDataAry_rec[SnpshtDataAryIdx_Cnt_T_u08].NtcNr           = (NtcNrWithResd1)NtcNr_Cnt_T_u16;
                PimSnpshtDataAry_rec[SnpshtDataAryIdx_Cnt_T_u08].NtcStInfo       = NtcStInfo_Cnt_T_u08;
                PimSnpshtDataAry_rec[SnpshtDataAryIdx_Cnt_T_u08].SysSt           = SysSt_Cnt_T_enum;
                
                /* Write to NvM */
                (void) Rte_Call_SnpshtDataAry_SetRamBlockStatus(TRUE);
            }
            /* Update Snapshot Data and exit loop */
            SnpshtDataAryIdxInvld_Cnt_T_logl = FALSE;
        }
        else
        {
            /* Increment Snapshot Data Array Index */
            SnpshtDataAryIdx_Cnt_T_u08++;
        }
    }
}

/**********************************************************************************************************************
 * Function:    GetNtcInfoApplXRte
 * Description: Call the Rte version of GetInfoApplX, where X is based on the Appl ID passed to function. In case of
 *              an invalid application (or default case) the return value of this function will be FALSE.
 * Inputs:      ApplIdx_Cnt_T_u08    : Application ID of the NTC being processed (from the map array)
 *              NtcInfoIdx_Cnt_T_u08 : Index in the NTC Info in that application for that NTC (from the map array)
 *              NtcInfoPtr_Cnt_T_rec : This should be the address of the NtcInfoPtr value that needs to be updated.
 * Outputs:     *NtcInfoPtr_Cnt_T_rec : The value at the input address (NtcInfoPtr_Cnt_T_rec) is updated.
 *              ApplIDValid_Cnt_T_logl: TRUE for all cases except when the Application ID is invalid and default case
 *                                      is executed.
 * Usage Notes: ApplIDValid_Cnt_T_logl must be checked and the value at NtcInfoPtr_Cnt_T_rec must be updated with
 *              the desired default value for an invalid application if return is FALSE.(since in this path the output
 *              isn't modified).
 *              Only call from a function whose port access allows calls to Rte_Call_GetNtcInfoApplX_Oper() for all
 *              available applications of the system
 **********************************************************************************************************************/
static FUNC(boolean, DiagcMgr_CODE) GetNtcInfoApplXRte(VAR(uint8, AUTOMATIC) ApplIdx_Cnt_T_u08,
                                                       VAR(uint8, AUTOMATIC) NtcInfoIdx_Cnt_T_u08,
                                                       P2VAR(NtcInfoRec4, AUTOMATIC, AUTOMATIC) NtcInfoPtr_Cnt_T_rec)
{
    VAR(boolean, AUTOMATIC) ApplIDValid_Cnt_T_logl = TRUE;
    switch(ApplIdx_Cnt_T_u08)
    {
        #ifdef NTCCNTAPPL0_CNT_U16
            case 0x00U:
            {
                (void) Rte_Call_GetNtcInfoAppl0_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);
            }
            break;
        #endif

        #ifdef NTCCNTAPPL1_CNT_U16
            case 0x01U:
            {
                (void) Rte_Call_GetNtcInfoAppl1_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);
            }
            break;
        #endif

        #ifdef NTCCNTAPPL2_CNT_U16
            case 0x02U:
            {
                (void) Rte_Call_GetNtcInfoAppl2_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);
            }
            break;
        #endif

        #ifdef NTCCNTAPPL3_CNT_U16
            case 0x03U:
            {
                (void) Rte_Call_GetNtcInfoAppl3_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);
            }
            break;
        #endif

        #ifdef NTCCNTAPPL4_CNT_U16
            case 0x04U:
            {
                (void) Rte_Call_GetNtcInfoAppl4_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);
            }
            break;
        #endif

        #ifdef NTCCNTAPPL5_CNT_U16
            case 0x05U:
            {
                (void) Rte_Call_GetNtcInfoAppl5_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);
            }
            break;
        #endif

        #ifdef NTCCNTAPPL6_CNT_U16
            case 0x06U:
            {
                (void) Rte_Call_GetNtcInfoAppl6_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);
            }
            break;
        #endif

        #ifdef NTCCNTAPPL7_CNT_U16
            case 0x07U:
            {
                (void) Rte_Call_GetNtcInfoAppl7_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);
            }
            break;
        #endif

        #ifdef NTCCNTAPPL8_CNT_U16
            case 0x08U:
            {
                (void) Rte_Call_GetNtcInfoAppl8_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);
            }
            break;
        #endif

        #ifdef NTCCNTAPPL9_CNT_U16
            case 0x09U:
            {
                (void) Rte_Call_GetNtcInfoAppl9_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);
            }
            break;
        #endif

        #ifdef NTCCNTAPPL10_CNT_U16
            case 0x0AU:
            {
                (void) Rte_Call_GetNtcInfoAppl10_Oper(NtcInfoIdx_Cnt_T_u08, NtcInfoPtr_Cnt_T_rec);
            }
            break;
        #endif

        default:/*case 0xFFU:*/
        {
            ApplIDValid_Cnt_T_logl = FALSE;
        }
        break;
    }
    return ApplIDValid_Cnt_T_logl;
}

/**********************************************************************************************************************
 * Function:    UpdDtcSts
 * Description: Implement "Update DTC Status" subblock from Per2 in the FDD. Note that this is called in a while loop.
 * Inputs:      NtcMapIdx_Cnt_T_u16     : A number from 0 to (sizeof(DIAGCMGRNTCMAP_CNT_REC)-1) based on the iteration
 *                                        number in the while loop that calls this function.
 *              NtcInfoRecSts_Cnt_T_u08 : NtcInfo_Cnt_T_rec.Sts obtained in Per2 before this function by a call to
 *                                        GetNtcInfoApplXRte local function.
 *              DtctempIdx_Cnt_T_u08    : The index in the DTC array to which the current NTCNR maps to. This info
 *                                        is obtained from the lower 8-bits ( see FLTRESPDTCIDX_CNT_U16) of FltRespTbl
 *                                        calibration.
 *              DtcIdxCurrSts_Cnt_T_u08 : Pointer to temp. array of Current DTC statuses, each element of which has 
 *                                        been initialized to DTCIDXSTSNONTC_CNT_U08.
 * Outputs:     *DtcIdxCurrSts_Cnt_T_u08: The current status of each DTC is updated according to all the NTCs that map
 *                                        to that DTC. It is written back to the respective location in memory using
 *                                        the input pointer DtcIdxCurrSts_Cnt_T_u08
 * Usage Notes: None
 **********************************************************************************************************************/
static FUNC(void, DiagcMgr_CODE) UpdDtcSts(VAR(uint16, AUTOMATIC) NtcMapIdx_Cnt_T_u16,
                                           VAR(uint8 , AUTOMATIC) NtcInfoRecSts_Cnt_T_u08,
                                           VAR(uint8 , AUTOMATIC) DtctempIdx_Cnt_T_u08,
                                           P2VAR(uint8, AUTOMATIC, AUTOMATIC) DtcIdxCurrSts_Cnt_T_u08)
{
    VAR(SigQlfr1, AUTOMATIC) NtcQlfr_Cnt_T_enum;
    /** Update DTC Status **/
    /* NTC Enabled */ 
    if(((PrmDiagcMgrFltResp_u16[NtcMapIdx_Cnt_T_u16] & FLTRESPNTCENAD_CNT_U16) != 0U) && 
        (DtctempIdx_Cnt_T_u08 != 0U) && 
        (DtctempIdx_Cnt_T_u08 <= TOTNROFDTC_CNT_U08))
    {
        /* SIGQLFR_NORES */
        if((NtcInfoRecSts_Cnt_T_u08 & DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08) != 0U)
        {
            NtcQlfr_Cnt_T_enum = SIGQLFR_NORES;
        }
        /* SIGQLFR_PASSD */
        else if((NtcInfoRecSts_Cnt_T_u08 & DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08) == 0U)
        {
            NtcQlfr_Cnt_T_enum = SIGQLFR_PASSD;
        }
        /* SIGQLFR_FAILD */
        else
        {
            NtcQlfr_Cnt_T_enum = SIGQLFR_FAILD;
        }

        /* DTC Fail */
        if((DtcIdxCurrSts_Cnt_T_u08[DtctempIdx_Cnt_T_u08] == DTCIDXSTSFAIL_CNT_U08) ||
            (NtcQlfr_Cnt_T_enum == SIGQLFR_FAILD))
        {
            DtcIdxCurrSts_Cnt_T_u08[DtctempIdx_Cnt_T_u08] = DTCIDXSTSFAIL_CNT_U08;
        }
        /* DTC NoRes */
        else if(NtcQlfr_Cnt_T_enum == SIGQLFR_NORES)
        {
            DtcIdxCurrSts_Cnt_T_u08[DtctempIdx_Cnt_T_u08] = DTCIDXSTSNORES_CNT_U08;
        }
        /* DTC Pass */
        else if((DtcIdxCurrSts_Cnt_T_u08[DtctempIdx_Cnt_T_u08] == DTCIDXSTSNONTC_CNT_U08) || 
                (DtcIdxCurrSts_Cnt_T_u08[DtctempIdx_Cnt_T_u08] ==  DTCIDXSTSPASS_CNT_U08))
        {
            DtcIdxCurrSts_Cnt_T_u08[DtctempIdx_Cnt_T_u08] = DTCIDXSTSPASS_CNT_U08;
        }
        else
        {
            /* Do Nothing */
        }
    }
    /* NTC Not Enabled */
    else
    {
        /* Do Nothing */
    }
}

/**********************************************************************************************************************
 * Function:    ProcNtcStsPassd
 * Description: Implements 'NTCSTS_PASSD' inside SetNtcStsCore block of the DiagcMgr simulink model in the FDD
 * Inputs:      NtcNr_Cnt_T_enum          : The NtcNr_Arg passed to SetNtcStsCore server runnable (checked to be in 
 *                                          the range 0 to 511)
 *              NtcInfo_Cnt_T_rec         : This is the NtcInfo_Arg passed to SetNtcStsCore server runnable
 *              NtcInfoDebCntr_Cnt_T_s16  : This is the NtcInfoDebCntr_Arg passed to SetNtcStsCore server runnable
 * Outputs:     *NtcInfo_Cnt_T_rec        : The value at input address (NtcInfo_Cnt_T_rec), which is a structure. The
 *                                          status in this structure is conditionally updated in this function
 *              *NtcInfoDebCntr_Cnt_T_s16 : The value at input address (NtcInfoDebCntr_Cnt_T_s16) is conditionally
 *                                          updated in this function.
 * Usage Notes: None
 **********************************************************************************************************************/
static FUNC(void, DiagcMgr_CODE) ProcNtcStsPassd(VAR(NtcNr1, AUTOMATIC)                   NtcNr_Cnt_T_enum,
                                                 P2VAR(NtcInfoRec4, AUTOMATIC, AUTOMATIC) NtcInfo_Cnt_T_rec,
                                                 P2VAR(sint16, AUTOMATIC, AUTOMATIC)      NtcInfoDebCntr_Cnt_T_s16)
{
    if(((PrmDiagcMgrFltResp_u16[NtcNr_Cnt_T_enum] & FLTRESPRCVRLFLT_CNT_U16) != 0U)  ||
        ((NtcInfo_Cnt_T_rec->Sts & DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08) == 0U))
    {
        /** Update NTC Info's Status Byte **/
        /* Clear DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08 and DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08 */
        DiagcMgrClrBits_u08(&(NtcInfo_Cnt_T_rec->Sts), DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08); 
        DiagcMgrClrBits_u08(&(NtcInfo_Cnt_T_rec->Sts), DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08);
        *NtcInfoDebCntr_Cnt_T_s16 = MINDEBCNTRVAL_CNT_S16;
    }
}

/**********************************************************************************************************************
 * Function:    ProcNtcStsPrePassd
 * Description: Implements 'NTCSTS_PREPASSD' inside SetNtcStsCore block of the DiagcMgr simulink model in the FDD
 * Inputs:      NtcNr_Cnt_T_enum          : The NtcNr_Arg passed to SetNtcStsCore server runnable (checked to be in 
 *                                          the range 0 to 511)
 *              DebStep_Cnt_T_u16         : The DebStep_Arg passed to SetNtcStsCore server runnable
 *              NtcInfo_Cnt_T_rec         : This is the NtcInfo_Arg passed to SetNtcStsCore server runnable
 *              NtcInfoDebCntr_Cnt_T_s16  : This is the NtcInfoDebCntr_Arg passed to SetNtcStsCore server runnable
 * Outputs:     *NtcInfo_Cnt_T_rec        : The value at input address (NtcInfo_Cnt_T_rec), which is a structure. The
 *                                          status in this structure is conditionally updated in this function
 *              *NtcInfoDebCntr_Cnt_T_s16 : The value at input address (NtcInfoDebCntr_Cnt_T_s16) is
 *                                          updated in this function.
 * Usage Notes: None
 **********************************************************************************************************************/
static FUNC(void, DiagcMgr_CODE) ProcNtcStsPrePassd(VAR(NtcNr1, AUTOMATIC)                   NtcNr_Cnt_T_enum,
                                                    VAR(uint16, AUTOMATIC)                   DebStep_Cnt_T_u16,
                                                    P2VAR(NtcInfoRec4, AUTOMATIC, AUTOMATIC) NtcInfo_Cnt_T_rec,
                                                    P2VAR(sint16, AUTOMATIC, AUTOMATIC)      NtcInfoDebCntr_Cnt_T_s16)
{
    if((((PrmDiagcMgrFltResp_u16[NtcNr_Cnt_T_enum] & FLTRESPRCVRLFLT_CNT_U16) != 0U)) || 
        (((NtcInfo_Cnt_T_rec->Sts & DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08) == 0U)))
    {   
        /** Update NTC Info's Status Byte and Update the NTC Fault Array **/
        /* Decrement Counter */
        if(((sint32)*NtcInfoDebCntr_Cnt_T_s16) <= ((sint32)MINDEBCNTRVAL_CNT_S16 + (sint32)(uint32)DebStep_Cnt_T_u16))
        {
            /* DebCntr = MINDEBCNTRVAL_CNT_S16 */
            *NtcInfoDebCntr_Cnt_T_s16 = MINDEBCNTRVAL_CNT_S16;
            /** Update Status Byte **/                  
            /* Clear DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08, DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08 */
            DiagcMgrClrBits_u08(&(NtcInfo_Cnt_T_rec->Sts), DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08);
            DiagcMgrClrBits_u08(&(NtcInfo_Cnt_T_rec->Sts), DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08);
        }
        else
        {
            /* Deb Counter > MINDEBCNTRVAL_CNT_S16 */
            /* for a debstep value greater than 32767 the cast to sint16 overflows, but the subtraction will not overflow 
            overflow case is already checked in the condition above */
            *NtcInfoDebCntr_Cnt_T_s16 = *NtcInfoDebCntr_Cnt_T_s16 - (sint16)DebStep_Cnt_T_u16;
        }
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
