/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordMsg202BusHiSpd.c
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/MM061A_FordMsg202BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg202BusHiSpd
 *  Generated at:  Tue Feb 20 13:10:26 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordMsg202BusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/**********************************************************************************************************************
* Copyright 2017, 2018 Nexteer
* Nexteer Confidential
*
* Module File Name  : FordMsg202BusHiSpd.c
* Module Description: FordMsg202BusHiSpd.c - MM061A
* Project           : CBD
* Author            : Ramachandran M G(TATA Elxsi)
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz3541 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  --------------------------------------------------------------------------  ------------
* 12/20/17   1       RMG(TATA)  Initial version                                                             EA4#17238
* 02/20/18   2       SPP        Change 4 data types to boolean                                              EA4#20808
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

#include "Rte_FordMsg202BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 #include "NxtrFixdPt.h"
 #include "NxtrMath.h"
  /******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Read and Rte_Write */

/********************************************* Embedded Local Constants **********************************************/

 #define BUSHISPDFIXDTITHD_MILLISEC_U16                  (5000U)
 #define CNVMILLISECTOCNT_CNTPERMILLISEC_U16             (10U)
 #define DEBSTEP_CNT_U16                                 (65535U)
 #define DIAGENA_CNT_U08                                 (0U)
 #define DTCENA_CNT_U08                                  (0U)

 #define GEARRVSSTSRAWMAX_CNT_U08                        (7U)
 #define GEARRVSSTSRAWMIN_CNT_U08                        (0U)
 #define MAXVAL_CNT_U08                                  (1U)
 #define MINVAL_CNT_U08                                  (0U)
 #define MODSEL_CNT_U08                                  (1U)
 #define SPDCHKSENGMODLMAX_CNT_U08                       (255U)
 #define SPDCHKSENGMODLMIN_CNT_U08                       (0U)
 #define SPDCNTRENGMODLMAX_CNT_U08                       (15U)
 #define SPDCNTRENGMODLMIN_CNT_U08                       (0U)
 #define SPDENGMODLMAX_KPH_F32                           (655.35F)
 #define SPDENGMODLMIN_KPH_F32                           (0.0F)
 #define SPDENGMODLRAWMAX_CNT_U16                        (65535U)
 #define SPDENGMODLRAWMIN_CNT_U16                        (0U)
 #define SPDENGMODLSCAGVAL_KPHPERCNT_F32                 (0.01F)
 
/******************************************** Local Function Prototypes **********************************************/
static FUNC(void, FordMsg202BusHiSpd_CODE) DiagEna(VAR(uint8,AUTOMATIC) ClrDiagcFlgProxy_Cnt_T_u08,
                                                   VAR(uint8,AUTOMATIC) FordAbsPrsnt_Cnt_T_logl,
                                                   VAR(uint8,AUTOMATIC) FordTqSteerCmpEnad_Cnt_T_logl,
                                                   VAR(uint8,AUTOMATIC) FordMissMsgDiagcInhb_Cnt_T_u08,
                                                   VAR(uint8,AUTOMATIC) FordMfgDiagcInhb_Cnt_T_u08,
                                                   VAR(uint8,AUTOMATIC) FordCanDtcInhb_Cnt_T_u08,
                                                   VAR(uint8,AUTOMATIC) FordBrkOscnRednEnad_Cnt_T_logl,
                                                   VAR(uint8,AUTOMATIC) FordTrlrBackupAssiEnad_Cnt_T_logl,
                                                   VAR(uint8,AUTOMATIC) FordInvldMsgDiagcInhb_Cnt_T_u08,
                                                   P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)MissMsgNtcFail_Cnt_T_logl,
                                                   P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)MissMsgNtcPass_Cnt_T_logl,
                                                   P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)InvldMsgQlyFacDiagEna_Cnt_T_logl,
                                                   P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)InvldMsgGearRevDiagEna_Cnt_T_logl);

static FUNC(void, FordMsg202BusHiSpd_CODE) CalSeln(VAR(uint8,AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08,
                                                   VAR(uint8,AUTOMATIC) FordAbsPrsnt_Cnt_T_logl,
                                                   P2VAR(uint16, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)BusHiSpdMissMsgFaildThd_Cnt_T_u16,
                                                   P2VAR(uint16, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)BusHiSpdGearRvStsInvldFaildThd_Cnt_T_u16,
                                                   P2VAR(uint16, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)BusHiSpdQlyFacEngModInvldFaildThd_Cnt_T_u16);

static FUNC(void, FordMsg202BusHiSpd_CODE) VldFalse(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)FordVehGearRvsStsVld_Cnt_T_logl,
                                                    P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)FordVehSpdEngModlVld_Cnt_T_logl,
                                                    P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)FordVehSpdEngModLoQlyVld_Cnt_T_logl,
                                                    P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)FordVehTrlrBackupAssiAvlVld_Cnt_T_logl);

static FUNC(void, FordMsg202BusHiSpd_CODE) SigProcg(VAR(Ford_GearRvrse_D_Actl,AUTOMATIC)Ford_GearRvrse_D_Actl1_Cnt_T_enum,
                                                    VAR(uint16,AUTOMATIC) Ford_Veh_V_ActlEng_Cnt_T_enum,
                                                    VAR(Ford_VehVActlEng_D_Qf,AUTOMATIC) Ford_VehVActlEng_D_Qf1_Cnt_T_enum,
                                                    VAR(uint8,AUTOMATIC) Ford_VehVActlEng_No_Cnt_Cnt_T_enum,
                                                    VAR(uint8,AUTOMATIC) Ford_VehVActlEng_No_Cs_Cnt_T_enum,
                                                    VAR(Ford_VehVTrlrAid_B_Avail,AUTOMATIC) Ford_VehVTrlrAid_B_Avail1_Cnt_T_enum,
                                                    P2VAR(uint8, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehGearRvsStsRaw_Cnt_T_u08,
                                                    P2VAR(Ford_GearRvrse_D_Actl, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehGearRvsSts_Cnt_T_enum,
                                                    P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehGearRvsStsVld_Cnt_T_logl,
                                                    P2VAR(uint16, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdEngModlRaw_Cnt_T_u16,
                                                    P2VAR(float32, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdEngModl_Kph_T_f32,
                                                    P2VAR(Ford_VehVActlEng_D_Qf, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdQlyFacEngModl_Cnt_T_enum,
                                                    P2VAR(uint8, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdCntrEngModl_Cnt_T_u08,
                                                    P2VAR(uint8, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdChksEngModl_Cnt_T_u08,
                                                    P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdEngModlVld_Cnt_T_logl,
                                                    P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdEngModLoQlyVld_Cnt_T_logl,
                                                    P2VAR(uint8, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehTrlrAidAvlRaw_Cnt_T_u08,
                                                    P2VAR(Ford_VehVTrlrAid_B_Avail, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehTrlrAidAvl_Cnt_T_enum,
                                                    P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehTrlrBackupAssiAvlVld_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehGearRvsStsVldFlg_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdEngModlVldFlg_Cnt_T_logl);
													  
 static FUNC(void, FordMsg202BusHiSpd_CODE)	VldElpdTi(P2VAR(boolean,AUTOMATIC,RTE_FORDMSG202BUSHISPD_APPL_VAR) GearRvsStsVldElpdTi_Cnt_T_logl,
											          P2VAR(boolean,AUTOMATIC,RTE_FORDMSG202BUSHISPD_APPL_VAR) GearRvsStsInvldElpdTi_Cnt_T_logl,
													  P2VAR(boolean,AUTOMATIC,RTE_FORDMSG202BUSHISPD_APPL_VAR) SpdEngModLoQlyVldElpdTi_Cnt_T_logl,
													  P2VAR(boolean,AUTOMATIC,RTE_FORDMSG202BUSHISPD_APPL_VAR) SpdEngModLoQlyInvldElpdTi_Cnt_T_logl,
													  P2VAR(boolean,AUTOMATIC,RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehTrlrBackupAssiAvlVldElpdTi_Cnt_T_logl,
													  P2VAR(boolean,AUTOMATIC,RTE_FORDMSG202BUSHISPD_APPL_VAR) EngModlInvldElpdTi_Cnt_T_logl);
													  
static FUNC(void, FordMsg202BusHiSpd_CODE) VldChk(VAR(boolean, AUTOMATIC)FordVehGearRvsStsVldFlg_Cnt_T_logl,
												  VAR(boolean, AUTOMATIC) FordVehSpdEngModLoQlyVldFlg_Cnt_T_logl,
												  VAR(boolean, AUTOMATIC) FordVehSpdEngModlVldFlg_Cnt_T_logl,
												  VAR(boolean, AUTOMATIC) FordVehTrlrBackupAssiAvlVldElpdTi_Cnt_T_logl,
												  VAR(boolean, AUTOMATIC) GearRvsStsVldElpdTi_Cnt_T_logl,
												  VAR(boolean, AUTOMATIC) GearRvsStsInvldElpdTi_Cnt_T_logl,
												  VAR(boolean, AUTOMATIC) SpdEngModLoQlyVldElpdTi_Cnt_T_logl,
												  VAR(boolean, AUTOMATIC) SpdEngModLoQlyInvldElpdTi_Cnt_T_logl,
												  VAR(boolean, AUTOMATIC) EngModlInvldElpdTi_Cnt_T_logl,
												  P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehGearRvsStsVld_Cnt_T_logl,
												  P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdEngModLoQlyVld_Cnt_T_logl,
												  P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehTrlrBackupAssiAvlVld_Cnt_T_logl,
												  P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdEngModlVld_Cnt_T_logl);													  

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
 * Ford_VehVActlEng_No_Cnt: Integer in interval [0...15]
 *   Unit: [Unitless], Factor: 1, Offset: 0
 * Ford_VehVActlEng_No_Cs: Integer in interval [0...255]
 *   Unit: [Unitless], Factor: 1, Offset: 0
 * Ford_VehVTrlrAid_B_Avail: Boolean
 * Ford_Veh_V_ActlEng: Integer in interval [0...65535]
 *   Unit: [kph], Factor: 0.01, Offset: 0
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Ford_GearRvrse_D_Actl: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_Inactive_not_confirmed (0U)
 *   Cx1_Inactive_confirmed (1U)
 *   Cx2_Active_not_confirmed (2U)
 *   Cx3_Active_confirmed (3U)
 *   Cx4_NotUsed_1 (4U)
 *   Cx5_NotUsed_2 (5U)
 *   Cx6_NotUsed_3 (6U)
 *   Cx7_Fault (7U)
 * Ford_VehVActlEng_D_Qf: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_Faulty (0U)
 *   Cx1_No_Data_Exists (1U)
 *   Cx2_Not_Within_Specifications (2U)
 *   Cx3_OK (3U)
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
 *   float32 *Rte_Pim_FordVehSpdEngModlPrev(void)
 *   uint32 *Rte_Pim_FordVehGearRvsStsInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehGearRvsStsInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehGearRvsStsVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehGearRvsStsVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehGearRvsStsVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdEngModLoQlyVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdEngModLoQlyVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdEngModLoQlyVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdEngModlVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdEngModlVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdQlyFacEngModlInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdQlyFacEngModlInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehTrlrBackupAssiAvlVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehTrlrBackupAssiAvlVldPassdRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint16 *Rte_Pim_FordVehSpdEngModlRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   Ford_GearRvrse_D_Actl *Rte_Pim_FordVehGearRvsStsPrev(void)
 *   uint8 *Rte_Pim_FordVehGearRvsStsRawPrev(void)
 *   uint8 *Rte_Pim_FordVehSpdChksEngModlPrev(void)
 *   uint8 *Rte_Pim_FordVehSpdCntrEngModlPrev(void)
 *   Ford_VehVActlEng_D_Qf *Rte_Pim_FordVehSpdQlyFacEngModlPrev(void)
 *   uint8 *Rte_Pim_FordVehTrlrAidAvlRawPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehGearRvsStsVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg202Miss(void)
 *   boolean *Rte_Pim_FordVehMsg202Rxd(void)
 *   boolean *Rte_Pim_FordVehSpdEngModLoQlyVldPrev(void)
 *   boolean *Rte_Pim_FordVehSpdEngModlVldPrev(void)
 *   Ford_VehVTrlrAid_B_Avail *Rte_Pim_FordVehTrlrAidAvlPrev(void)
 *   boolean *Rte_Pim_FordVehTrlrBackupAssiAvlVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdEngModlVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdEngModlVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdGearRvsStsInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdGearRvsStsInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdMissMsgPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdQlyFacEngModInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdQlyFacEngModInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd_Val(void)
 *
 *********************************************************************************************************************/


#define FordMsg202BusHiSpd_START_SEC_CODE
#include "FordMsg202BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg202BusHiSpdInit1
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
 * Symbol: FordMsg202BusHiSpdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg202BusHiSpd_CODE) FordMsg202BusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg202BusHiSpdInit1
 *********************************************************************************************************************/
 *Rte_Pim_FirstTranVldFlg() = TRUE;
 *Rte_Pim_FordVehGearRvsStsRawPrev() = GEARRVSSTSRAWMAX_CNT_U08;
 *Rte_Pim_FordVehGearRvsStsPrev() = Cx7_Fault;
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgFaildRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgPassdRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdQlyFacEngModlInvldFaildRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdQlyFacEngModlInvldPassdRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehGearRvsStsInvldFaildRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehGearRvsStsInvldPassdRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehGearRvsStsVldPassdRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehGearRvsStsVldFaildRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdEngModlVldFaildRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdEngModLoQlyVldPassdRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdEngModLoQlyVldFaildRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrBackupAssiAvlVldPassdRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehGearRvsStsVldMissRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdEngModlVldMissRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdEngModLoQlyVldMissRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrBackupAssiAvlVldMissRefTi());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg202BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordAbsPrsnt_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordBrkOscnRednEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordInvldMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMfgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMissMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordTqSteerCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackupAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_GearRvrse_D_Actl1_Ford_GearRvrse_D_Actl(Ford_GearRvrse_D_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_VehVActlEng_D_Qf1_Ford_VehVActlEng_D_Qf(Ford_VehVActlEng_D_Qf *data)
 *   Std_ReturnType Rte_Read_Ford_VehVActlEng_No_Cnt_Ford_VehVActlEng_No_Cnt(Ford_VehVActlEng_No_Cnt *data)
 *   Std_ReturnType Rte_Read_Ford_VehVActlEng_No_Cs_Ford_VehVActlEng_No_Cs(Ford_VehVActlEng_No_Cs *data)
 *   Std_ReturnType Rte_Read_Ford_VehVTrlrAid_B_Avail1_Ford_VehVTrlrAid_B_Avail(Ford_VehVTrlrAid_B_Avail *data)
 *   Std_ReturnType Rte_Read_Ford_Veh_V_ActlEng_Ford_Veh_V_ActlEng(Ford_Veh_V_ActlEng *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehGearRvsSts_Ford_GearRvrse_D_Actl(Ford_GearRvrse_D_Actl data)
 *   Std_ReturnType Rte_Write_FordVehGearRvsStsRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehGearRvsStsVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSpdChksEngModl_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehSpdCntrEngModl_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehSpdEngModLoQlyVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSpdEngModl_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehSpdEngModlRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehSpdEngModlVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSpdQlyFacEngModl_Ford_VehVActlEng_D_Qf(Ford_VehVActlEng_D_Qf data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidAvl_Ford_VehVTrlrAid_B_Avail(Ford_VehVTrlrAid_B_Avail data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidAvlRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrBackupAssiAvlVld_Logl(boolean data)
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
 * Symbol: FordMsg202BusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg202BusHiSpd_CODE) FordMsg202BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg202BusHiSpdPer1
 *********************************************************************************************************************/
VAR(uint8, AUTOMATIC) ClrDiagcFlgProxy_Cnt_T_u08;
VAR(uint8, AUTOMATIC) FordAbsPrsnt_Cnt_T_logl;
VAR(uint8, AUTOMATIC) FordBrkOscnRednEnad_Cnt_T_logl;
VAR(uint8, AUTOMATIC) FordCanDtcInhb_Cnt_T_u08;
VAR(uint8, AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08;
VAR(uint8, AUTOMATIC) FordInvldMsgDiagcInhb_Cnt_T_u08;
VAR(uint8, AUTOMATIC) FordMfgDiagcInhb_Cnt_T_u08;
VAR(uint8, AUTOMATIC) FordMissMsgDiagcInhb_Cnt_T_u08;
VAR(uint8, AUTOMATIC) FordTqSteerCmpEnad_Cnt_T_logl;
VAR(uint8, AUTOMATIC) FordTrlrBackupAssiEnad_Cnt_T_logl;
VAR(uint8, AUTOMATIC) Ford_VehVActlEng_No_Cnt_Cnt_T_enum;
VAR(uint8, AUTOMATIC) Ford_VehVActlEng_No_Cs_Cnt_T_enum;
VAR(uint8, AUTOMATIC) FordVehGearRvsStsRaw_Cnt_T_u08;
VAR(uint8, AUTOMATIC) FordVehSpdCntrEngModl_Cnt_T_u08;
VAR(uint8, AUTOMATIC) FordVehSpdChksEngModl_Cnt_T_u08;
VAR(uint8, AUTOMATIC) FordVehTrlrAidAvlRaw_Cnt_T_u08;

VAR(uint16, AUTOMATIC) Ford_Veh_V_ActlEng_Cnt_T_enum;
VAR(uint16, AUTOMATIC) BusHiSpdMissMsgFaildThd_Cnt_T_u16;
VAR(uint16, AUTOMATIC) BusHiSpdGearRvStsInvldFaildThd_Cnt_T_u16;
VAR(uint16, AUTOMATIC) BusHiSpdQlyFacEngModInvldFaildThd_Cnt_T_u16;
VAR(uint16, AUTOMATIC) FordVehSpdEngModlRaw_Cnt_T_u16;

VAR(uint32, AUTOMATIC) TiSpan_Cnt_T_u32;

VAR(Ford_GearRvrse_D_Actl,AUTOMATIC) Ford_GearRvrse_D_Actl1_Cnt_T_enum;
VAR(Ford_VehVTrlrAid_B_Avail,AUTOMATIC) Ford_VehVTrlrAid_B_Avail1_Cnt_T_enum;
VAR(Ford_GearRvrse_D_Actl,AUTOMATIC) FordVehGearRvsSts_Cnt_T_enum;
VAR(Ford_VehVActlEng_D_Qf,AUTOMATIC) FordVehSpdQlyFacEngModl_Cnt_T_enum;
VAR(Ford_VehVTrlrAid_B_Avail,AUTOMATIC) FordVehTrlrAidAvl_Cnt_T_enum;
VAR(Ford_VehVActlEng_D_Qf,AUTOMATIC) Ford_VehVActlEng_D_Qf1_Cnt_T_enum;

VAR(float32, AUTOMATIC) FordVehSpdEngModl_Kph_T_f32;

VAR(boolean, AUTOMATIC)MissMsgNtcFail_Cnt_T_logl;
VAR(boolean, AUTOMATIC)MissMsgNtcPass_Cnt_T_logl;
VAR(boolean, AUTOMATIC)InvldMsgQlyFacDiagEna_Cnt_T_logl;
VAR(boolean, AUTOMATIC)InvldMsgGearRevDiagEna_Cnt_T_logl;
VAR(boolean, AUTOMATIC)FordVehGearRvsStsVld_Cnt_T_logl = FALSE;
VAR(boolean, AUTOMATIC)FordVehSpdEngModlVld_Cnt_T_logl;
VAR(boolean, AUTOMATIC)FordVehSpdEngModLoQlyVld_Cnt_T_logl = FALSE;
VAR(boolean, AUTOMATIC)FordVehTrlrBackupAssiAvlVld_Cnt_T_logl = FALSE;
VAR(boolean, AUTOMATIC) FordVehGearRvsStsVldFlg_Cnt_T_logl;
VAR(boolean, AUTOMATIC) FordVehSpdEngModlVldFlg_Cnt_T_logl = FALSE;

/*Reading inputs from RTE*/
 (void)Rte_Read_ClrDiagcFlgProxy_Val(&ClrDiagcFlgProxy_Cnt_T_u08);
 (void)Rte_Read_FordAbsPrsnt_Logl(&FordAbsPrsnt_Cnt_T_logl);
 (void)Rte_Read_FordBrkOscnRednEnad_Logl(&FordBrkOscnRednEnad_Cnt_T_logl);
 (void)Rte_Read_FordCanDtcInhb_Val(&FordCanDtcInhb_Cnt_T_u08);
 (void)Rte_Read_FordEpsLifeCycMod_Val(&FordEpsLifeCycMod_Cnt_T_u08);
 (void)Rte_Read_FordInvldMsgDiagcInhb_Val(&FordInvldMsgDiagcInhb_Cnt_T_u08);
 (void)Rte_Read_FordMfgDiagcInhb_Val(&FordMfgDiagcInhb_Cnt_T_u08);
 (void)Rte_Read_FordMissMsgDiagcInhb_Val(&FordMissMsgDiagcInhb_Cnt_T_u08);
 (void)Rte_Read_FordTqSteerCmpEnad_Logl(&FordTqSteerCmpEnad_Cnt_T_logl);
 (void)Rte_Read_FordTrlrBackupAssiEnad_Logl(&FordTrlrBackupAssiEnad_Cnt_T_logl);
 (void)Rte_Read_Ford_GearRvrse_D_Actl1_Ford_GearRvrse_D_Actl(&Ford_GearRvrse_D_Actl1_Cnt_T_enum);
 (void)Rte_Read_Ford_VehVActlEng_D_Qf1_Ford_VehVActlEng_D_Qf(&Ford_VehVActlEng_D_Qf1_Cnt_T_enum);
 (void)Rte_Read_Ford_VehVActlEng_No_Cnt_Ford_VehVActlEng_No_Cnt(&Ford_VehVActlEng_No_Cnt_Cnt_T_enum);
 (void)Rte_Read_Ford_VehVActlEng_No_Cs_Ford_VehVActlEng_No_Cs(&Ford_VehVActlEng_No_Cs_Cnt_T_enum);
 (void)Rte_Read_Ford_VehVTrlrAid_B_Avail1_Ford_VehVTrlrAid_B_Avail(&Ford_VehVTrlrAid_B_Avail1_Cnt_T_enum);
 (void)Rte_Read_Ford_Veh_V_ActlEng_Ford_Veh_V_ActlEng(&Ford_Veh_V_ActlEng_Cnt_T_enum);


     /** Start of DiagEna */
DiagEna(ClrDiagcFlgProxy_Cnt_T_u08,
        FordAbsPrsnt_Cnt_T_logl,
        FordTqSteerCmpEnad_Cnt_T_logl,
        FordMissMsgDiagcInhb_Cnt_T_u08,
        FordMfgDiagcInhb_Cnt_T_u08,
        FordCanDtcInhb_Cnt_T_u08,
        FordBrkOscnRednEnad_Cnt_T_logl,
        FordTrlrBackupAssiEnad_Cnt_T_logl,
        FordInvldMsgDiagcInhb_Cnt_T_u08,
        &MissMsgNtcFail_Cnt_T_logl,
        &MissMsgNtcPass_Cnt_T_logl,
        &InvldMsgQlyFacDiagEna_Cnt_T_logl,
        &InvldMsgGearRevDiagEna_Cnt_T_logl);
      /** End of DiagEna */

      /** Start of CalSeln */
CalSeln(FordEpsLifeCycMod_Cnt_T_u08,
        FordAbsPrsnt_Cnt_T_logl,
        &BusHiSpdMissMsgFaildThd_Cnt_T_u16,
        &BusHiSpdGearRvStsInvldFaildThd_Cnt_T_u16,
        &BusHiSpdQlyFacEngModInvldFaildThd_Cnt_T_u16);
      /** End of CalSeln */

    if(TRUE == *Rte_Pim_FordVehMsg202Miss())
    {
        /** Start of FordMsg202MsgMiss **/
        if(TRUE == MissMsgNtcFail_Cnt_T_logl)
        {
            (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MissMsgFaildRefTi(),&TiSpan_Cnt_T_u32);
            if(TiSpan_Cnt_T_u32 > (((uint32)BusHiSpdMissMsgFaildThd_Cnt_T_u16) * ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))
            {
                (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X122, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
            }
        }
        else
        {
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X122, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgFaildRefTi());
        }
        
		/** Start of VldFalse **/
        VldFalse(&FordVehGearRvsStsVld_Cnt_T_logl,
                 &FordVehSpdEngModlVld_Cnt_T_logl,
                 &FordVehSpdEngModLoQlyVld_Cnt_T_logl,
                 &FordVehTrlrBackupAssiAvlVld_Cnt_T_logl);
	    /** End of VldFalse **/

        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X123, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X124, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);

        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgPassdRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdQlyFacEngModlInvldFaildRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdQlyFacEngModlInvldPassdRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehGearRvsStsInvldFaildRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehGearRvsStsInvldPassdRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehGearRvsStsVldPassdRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehGearRvsStsVldFaildRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdEngModlVldFaildRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdEngModLoQlyVldPassdRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdEngModLoQlyVldFaildRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrBackupAssiAvlVldPassdRefTi());

        FordVehGearRvsStsRaw_Cnt_T_u08 = *Rte_Pim_FordVehGearRvsStsRawPrev();
        FordVehGearRvsSts_Cnt_T_enum = *Rte_Pim_FordVehGearRvsStsPrev();
        FordVehSpdEngModlRaw_Cnt_T_u16 = *Rte_Pim_FordVehSpdEngModlRawPrev();
        FordVehSpdEngModl_Kph_T_f32 = *Rte_Pim_FordVehSpdEngModlPrev();
        FordVehSpdQlyFacEngModl_Cnt_T_enum = *Rte_Pim_FordVehSpdQlyFacEngModlPrev();
        FordVehSpdCntrEngModl_Cnt_T_u08 = *Rte_Pim_FordVehSpdCntrEngModlPrev();
        FordVehSpdChksEngModl_Cnt_T_u08 = *Rte_Pim_FordVehSpdChksEngModlPrev();
        FordVehTrlrAidAvlRaw_Cnt_T_u08 = *Rte_Pim_FordVehTrlrAidAvlRawPrev();
        FordVehTrlrAidAvl_Cnt_T_enum = *Rte_Pim_FordVehTrlrAidAvlPrev();
         /** End of FordMsg202MsgMiss **/
    }
    else if(TRUE == *Rte_Pim_FordVehMsg202Rxd())
    {
        /*** Start of FordMsg202MsgPrsnt ***/
            /*** Start of SignalProcessing ***/
            SigProcg(Ford_GearRvrse_D_Actl1_Cnt_T_enum,
                       Ford_Veh_V_ActlEng_Cnt_T_enum,
                       Ford_VehVActlEng_D_Qf1_Cnt_T_enum,
                       Ford_VehVActlEng_No_Cnt_Cnt_T_enum,
                       Ford_VehVActlEng_No_Cs_Cnt_T_enum,
                       Ford_VehVTrlrAid_B_Avail1_Cnt_T_enum,
                       &FordVehGearRvsStsRaw_Cnt_T_u08,
                       &FordVehGearRvsSts_Cnt_T_enum,
                       &FordVehGearRvsStsVld_Cnt_T_logl,
                       &FordVehSpdEngModlRaw_Cnt_T_u16,
                       &FordVehSpdEngModl_Kph_T_f32,
                       &FordVehSpdQlyFacEngModl_Cnt_T_enum,
                       &FordVehSpdCntrEngModl_Cnt_T_u08,
                       &FordVehSpdChksEngModl_Cnt_T_u08,
                       &FordVehSpdEngModlVld_Cnt_T_logl,
                       &FordVehSpdEngModLoQlyVld_Cnt_T_logl,
                       &FordVehTrlrAidAvlRaw_Cnt_T_u08,
                       &FordVehTrlrAidAvl_Cnt_T_enum,
                       &FordVehTrlrBackupAssiAvlVld_Cnt_T_logl,
					   &FordVehGearRvsStsVldFlg_Cnt_T_logl,
					   &FordVehSpdEngModlVldFlg_Cnt_T_logl);
            /*** End of SignalProcessing ***/
			
			if(TRUE == MissMsgNtcPass_Cnt_T_logl)
			{
			    /** FordMsg202MissMsgPass **/
				(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MissMsgPassdRefTi(),&TiSpan_Cnt_T_u32);
				if(TiSpan_Cnt_T_u32 > (((uint32)Rte_Prm_FordMsg202BusHiSpdMissMsgPassdThd_Val()) * ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))
				{
				    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X122, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
				}
			}
			else
			{
			    /** MissMsgTmrRst **/
				(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X122, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
				(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgPassdRefTi());
			}
			if(TRUE == InvldMsgQlyFacDiagEna_Cnt_T_logl)
			{   
			    /** Start of FordVehSpdQlyFacEngModlInvld **/
				if(TRUE == FordVehSpdEngModlVldFlg_Cnt_T_logl)
				{
				    /*** FordVehSpdQlyFacEngModlInvldPassd ***/
					(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehSpdQlyFacEngModlInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
					if(TiSpan_Cnt_T_u32 > ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16 * (uint32)Rte_Prm_FordMsg202BusHiSpdQlyFacEngModInvldPassdThd_Val()))
					{
						(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X123, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
					}
					(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdQlyFacEngModlInvldFaildRefTi());
				}
				else
				{
				    /*** FordVehSpdQlyFacEngModlInvldFaild ***/
					(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehSpdQlyFacEngModlInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
					if(TiSpan_Cnt_T_u32 > ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16 * (uint32)BusHiSpdQlyFacEngModInvldFaildThd_Cnt_T_u16))
					{
						(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X123, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
					}
					(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdQlyFacEngModlInvldPassdRefTi());					
				}
				/** End of FordVehSpdQlyFacEngModlInvld **/
			}
			else
			{
			    /*** VehGearRvsStsinvldTmrRst ***/
				(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X123, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
				(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdQlyFacEngModlInvldFaildRefTi());
				(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdQlyFacEngModlInvldPassdRefTi());
			}
			if(TRUE == InvldMsgGearRevDiagEna_Cnt_T_logl)
			{
			    /**  Start of FordVehGearRvsStsinvld **/
				if(TRUE == FordVehGearRvsStsVldFlg_Cnt_T_logl)
				{
				    /** FordVehGearRvsStsinvldPassd **/
					(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehGearRvsStsInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
					if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg202BusHiSpdGearRvsStsInvldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
					{
						(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X124, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
					}
					(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehGearRvsStsInvldFaildRefTi());
				}
				else
				{
				    /** FordVehGearRvsStsinvldFaild **/
					(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehGearRvsStsInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
					if(TiSpan_Cnt_T_u32 > ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16 * (uint32)BusHiSpdGearRvStsInvldFaildThd_Cnt_T_u16))
					{
						(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X124, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
					}
					(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehGearRvsStsInvldPassdRefTi());					
				}
				/**  End of FordVehGearRvsStsinvld **/
			}
			else
			{
			    /** VehGearRvsStsinvldTmrRst **/
				(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X124, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
				(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehGearRvsStsInvldFaildRefTi());
				(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehGearRvsStsInvldPassdRefTi());
			}
		
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgFaildRefTi());
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehGearRvsStsVldMissRefTi());
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdEngModlVldMissRefTi());
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdEngModLoQlyVldMissRefTi());
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehTrlrBackupAssiAvlVldMissRefTi());
			
			*Rte_Pim_FordVehMsg202Rxd() = FALSE;
        /*** End of FordMsg202MsgPrsnt ***/
    }
	else
	{
	    /*** Start of LstStordVal ***/
		FordVehGearRvsStsRaw_Cnt_T_u08 = *Rte_Pim_FordVehGearRvsStsRawPrev();
		FordVehGearRvsSts_Cnt_T_enum = *Rte_Pim_FordVehGearRvsStsPrev();
		FordVehGearRvsStsVld_Cnt_T_logl = *Rte_Pim_FordVehGearRvsStsVldPrev();
		FordVehSpdEngModlRaw_Cnt_T_u16 = *Rte_Pim_FordVehSpdEngModlRawPrev();
		FordVehSpdEngModl_Kph_T_f32 = *Rte_Pim_FordVehSpdEngModlPrev();
		FordVehSpdQlyFacEngModl_Cnt_T_enum = *Rte_Pim_FordVehSpdQlyFacEngModlPrev();
		FordVehSpdCntrEngModl_Cnt_T_u08 = *Rte_Pim_FordVehSpdCntrEngModlPrev();
		FordVehSpdChksEngModl_Cnt_T_u08 = *Rte_Pim_FordVehSpdChksEngModlPrev();
		FordVehSpdEngModlVld_Cnt_T_logl = *Rte_Pim_FordVehSpdEngModlVldPrev();
		FordVehSpdEngModLoQlyVld_Cnt_T_logl = *Rte_Pim_FordVehSpdEngModLoQlyVldPrev();
		FordVehTrlrAidAvlRaw_Cnt_T_u08 = *Rte_Pim_FordVehTrlrAidAvlRawPrev();
		FordVehTrlrAidAvl_Cnt_T_enum = *Rte_Pim_FordVehTrlrAidAvlPrev();
		FordVehTrlrBackupAssiAvlVld_Cnt_T_logl = *Rte_Pim_FordVehTrlrBackupAssiAvlVldPrev();
		/*** End of LstStordVal ***/
	}
	
	FordVehGearRvsStsRaw_Cnt_T_u08 = Lim_u08(FordVehGearRvsStsRaw_Cnt_T_u08,GEARRVSSTSRAWMIN_CNT_U08,GEARRVSSTSRAWMAX_CNT_U08);
	*Rte_Pim_FordVehGearRvsStsRawPrev() = FordVehGearRvsStsRaw_Cnt_T_u08;
	
	*Rte_Pim_FordVehGearRvsStsPrev() = FordVehGearRvsSts_Cnt_T_enum;
	
	*Rte_Pim_FordVehGearRvsStsVldPrev() = FordVehGearRvsStsVld_Cnt_T_logl;
	
	FordVehSpdEngModlRaw_Cnt_T_u16 = Lim_u16(FordVehSpdEngModlRaw_Cnt_T_u16,SPDENGMODLRAWMIN_CNT_U16,SPDENGMODLRAWMAX_CNT_U16);
	*Rte_Pim_FordVehSpdEngModlRawPrev() = FordVehSpdEngModlRaw_Cnt_T_u16;
	
	FordVehSpdEngModl_Kph_T_f32 = Lim_f32(FordVehSpdEngModl_Kph_T_f32,SPDENGMODLMIN_KPH_F32,SPDENGMODLMAX_KPH_F32);
	*Rte_Pim_FordVehSpdEngModlPrev() = FordVehSpdEngModl_Kph_T_f32;
	
	*Rte_Pim_FordVehSpdQlyFacEngModlPrev() = FordVehSpdQlyFacEngModl_Cnt_T_enum;
	
	FordVehSpdCntrEngModl_Cnt_T_u08 = Lim_u08(FordVehSpdCntrEngModl_Cnt_T_u08,SPDCNTRENGMODLMIN_CNT_U08,SPDCNTRENGMODLMAX_CNT_U08);
	*Rte_Pim_FordVehSpdCntrEngModlPrev() = FordVehSpdCntrEngModl_Cnt_T_u08;
	
	FordVehSpdChksEngModl_Cnt_T_u08 = Lim_u08(FordVehSpdChksEngModl_Cnt_T_u08,SPDCHKSENGMODLMIN_CNT_U08,SPDCHKSENGMODLMAX_CNT_U08);
	*Rte_Pim_FordVehSpdChksEngModlPrev() = FordVehSpdChksEngModl_Cnt_T_u08;
	
	*Rte_Pim_FordVehSpdEngModlVldPrev() = FordVehSpdEngModlVld_Cnt_T_logl;
	
	*Rte_Pim_FordVehSpdEngModLoQlyVldPrev() = FordVehSpdEngModLoQlyVld_Cnt_T_logl;
	
	FordVehTrlrAidAvlRaw_Cnt_T_u08 = Lim_u08(FordVehTrlrAidAvlRaw_Cnt_T_u08, MINVAL_CNT_U08, MAXVAL_CNT_U08);
	*Rte_Pim_FordVehTrlrAidAvlRawPrev() = FordVehTrlrAidAvlRaw_Cnt_T_u08;
	
	*Rte_Pim_FordVehTrlrAidAvlPrev() = FordVehTrlrAidAvl_Cnt_T_enum;
	
	*Rte_Pim_FordVehTrlrBackupAssiAvlVldPrev() = FordVehTrlrBackupAssiAvlVld_Cnt_T_logl;
 
 /*Writing outputs to RTE*/
	(void) Rte_Write_FordVehGearRvsSts_Ford_GearRvrse_D_Actl(FordVehGearRvsSts_Cnt_T_enum);
	(void) Rte_Write_FordVehGearRvsStsRaw_Val(FordVehGearRvsStsRaw_Cnt_T_u08);
	(void) Rte_Write_FordVehGearRvsStsVld_Logl(FordVehGearRvsStsVld_Cnt_T_logl);
	(void) Rte_Write_FordVehSpdChksEngModl_Val(FordVehSpdChksEngModl_Cnt_T_u08);
	(void) Rte_Write_FordVehSpdCntrEngModl_Val(FordVehSpdCntrEngModl_Cnt_T_u08);
	(void) Rte_Write_FordVehSpdEngModLoQlyVld_Logl(FordVehSpdEngModLoQlyVld_Cnt_T_logl);
	(void) Rte_Write_FordVehSpdEngModl_Val(FordVehSpdEngModl_Kph_T_f32);
	(void) Rte_Write_FordVehSpdEngModlRaw_Val(FordVehSpdEngModlRaw_Cnt_T_u16);
	(void) Rte_Write_FordVehSpdEngModlVld_Logl(FordVehSpdEngModlVld_Cnt_T_logl);
	(void) Rte_Write_FordVehSpdQlyFacEngModl_Ford_VehVActlEng_D_Qf(FordVehSpdQlyFacEngModl_Cnt_T_enum);
	(void) Rte_Write_FordVehTrlrAidAvl_Ford_VehVTrlrAid_B_Avail(FordVehTrlrAidAvl_Cnt_T_enum);
	(void) Rte_Write_FordVehTrlrAidAvlRaw_Val(FordVehTrlrAidAvlRaw_Cnt_T_u08);
	(void) Rte_Write_FordVehTrlrBackupAssiAvlVld_Logl(FordVehTrlrBackupAssiAvlVld_Cnt_T_logl);
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordMsg202BusHiSpd_STOP_SEC_CODE
#include "FordMsg202BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /*****************************************************************************
  * Name            : DiagEna
  * Description     : Implementation of "DiagEna" subsystem in model.
  * Inputs          : ClrDiagcFlgProxy_Cnt_T_u08,FordAbsPrsnt_Cnt_T_logl,FordTqSteerCmpEnad_Cnt_T_logl,
  *                   FordMissMsgDiagcInhb_Cnt_T_u08,FordMfgDiagcInhb_Cnt_T_u08,FordCanDtcInhb_Cnt_T_u08,
  *                   FordBrkOscnRednEnad_Cnt_T_logl,FordTrlrBackupAssiEnad_Cnt_T_logl,FordInvldMsgDiagcInhb_Cnt_T_u08.
  * Outputs         : *MissMsgNtcFail_Cnt_T_logl,*InvldMsgQlyFacDiagEna_Cnt_T_logl
  *                   *MissMsgNtcPass_Cnt_T_logl,*InvldMsgGearRevDiagEna_Cnt_T_logl.
  * Returns         : None
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg202BusHiSpd_CODE) DiagEna(VAR(uint8,AUTOMATIC) ClrDiagcFlgProxy_Cnt_T_u08,
                                                   VAR(uint8,AUTOMATIC) FordAbsPrsnt_Cnt_T_logl,
                                                   VAR(uint8,AUTOMATIC) FordTqSteerCmpEnad_Cnt_T_logl,
                                                   VAR(uint8,AUTOMATIC) FordMissMsgDiagcInhb_Cnt_T_u08,
                                                   VAR(uint8,AUTOMATIC) FordMfgDiagcInhb_Cnt_T_u08,
                                                   VAR(uint8,AUTOMATIC) FordCanDtcInhb_Cnt_T_u08,
                                                   VAR(uint8,AUTOMATIC) FordBrkOscnRednEnad_Cnt_T_logl,
                                                   VAR(uint8,AUTOMATIC) FordTrlrBackupAssiEnad_Cnt_T_logl,
                                                   VAR(uint8,AUTOMATIC) FordInvldMsgDiagcInhb_Cnt_T_u08,
                                                   P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)MissMsgNtcFail_Cnt_T_logl,
                                                   P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)MissMsgNtcPass_Cnt_T_logl,
                                                   P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)InvldMsgQlyFacDiagEna_Cnt_T_logl,
                                                   P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)InvldMsgGearRevDiagEna_Cnt_T_logl)

{

    VAR(boolean,AUTOMATIC) ComparisonAnd1_Cnt_T_logl;
    VAR(boolean,AUTOMATIC) ComparisionOr_Cnt_T_logl;
    VAR(boolean,AUTOMATIC) ComparisonAnd2_Cnt_T_logl;

    /** Start of DiagEna */
    if((FordCanDtcInhb_Cnt_T_u08 == DTCENA_CNT_U08)&&
       (FordMissMsgDiagcInhb_Cnt_T_u08 == DTCENA_CNT_U08)&&
       (FordMfgDiagcInhb_Cnt_T_u08 == DTCENA_CNT_U08)&&
       (ClrDiagcFlgProxy_Cnt_T_u08 == *Rte_Pim_ClrDiagcFlgProxyPrev()))
    {
        ComparisonAnd1_Cnt_T_logl = TRUE;
    }
    else
    {
        ComparisonAnd1_Cnt_T_logl = FALSE;
    }

    if((FordTqSteerCmpEnad_Cnt_T_logl == TRUE)||
       (FordBrkOscnRednEnad_Cnt_T_logl == TRUE)||
       (FordTrlrBackupAssiEnad_Cnt_T_logl == TRUE))
    {
        ComparisionOr_Cnt_T_logl = TRUE;
    }
    else
    {
        ComparisionOr_Cnt_T_logl = FALSE;
    }

    if((TRUE == ComparisonAnd1_Cnt_T_logl)&&
      (TRUE == ComparisionOr_Cnt_T_logl))
    {
        *MissMsgNtcFail_Cnt_T_logl = TRUE;
    }
    else
    {
        *MissMsgNtcFail_Cnt_T_logl = FALSE;
    }

    if((TRUE == *MissMsgNtcFail_Cnt_T_logl) &&
       (FordAbsPrsnt_Cnt_T_logl == FALSE))
    {
        *MissMsgNtcPass_Cnt_T_logl = TRUE;
    }
    else
    {
        *MissMsgNtcPass_Cnt_T_logl = FALSE;
    }

    if((FordCanDtcInhb_Cnt_T_u08 == DTCENA_CNT_U08)&&
       (FordInvldMsgDiagcInhb_Cnt_T_u08 == DIAGENA_CNT_U08)&&
       (ClrDiagcFlgProxy_Cnt_T_u08 == *Rte_Pim_ClrDiagcFlgProxyPrev())&&
       (FordMfgDiagcInhb_Cnt_T_u08 == DTCENA_CNT_U08))
    {
        ComparisonAnd2_Cnt_T_logl = TRUE;
    }
    else
    {
        ComparisonAnd2_Cnt_T_logl = FALSE;
    }
	 
	*Rte_Pim_ClrDiagcFlgProxyPrev() = ClrDiagcFlgProxy_Cnt_T_u08;

    if((FordAbsPrsnt_Cnt_T_logl == FALSE)&&
       (TRUE == ComparisonAnd2_Cnt_T_logl))
    {
        *InvldMsgQlyFacDiagEna_Cnt_T_logl = TRUE;
    }
    else
    {
        *InvldMsgQlyFacDiagEna_Cnt_T_logl = FALSE;
    }
    if((TRUE == ComparisonAnd2_Cnt_T_logl)&&
    (FordTqSteerCmpEnad_Cnt_T_logl == TRUE))
    {
        *InvldMsgGearRevDiagEna_Cnt_T_logl = TRUE;
    }
    else
    {
        *InvldMsgGearRevDiagEna_Cnt_T_logl = FALSE;
    }
    /** End of DiagEna */
}

 /*****************************************************************************
  * Name            : CalSeln
  * Description     : Implementation of "CalSeln" subsystem in model.
  * Inputs          : FordEpsLifeCycMod_Cnt_T_u08,FordAbsPrsnt_Cnt_T_logl.
  * Outputs         : *BusHiSpdMissMsgFaildThd_Cnt_T_u16,*BusHiSpdGearRvStsInvldFaildThd_Cnt_T_u16
  *                   *BusHiSpdQlyFacEngModInvldFaildThd_Cnt_T_u16.
  * Returns         : None
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg202BusHiSpd_CODE) CalSeln(VAR(uint8,AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08,
                                                   VAR(uint8,AUTOMATIC) FordAbsPrsnt_Cnt_T_logl,
                                                   P2VAR(uint16, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)BusHiSpdMissMsgFaildThd_Cnt_T_u16,
                                                   P2VAR(uint16, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)BusHiSpdGearRvStsInvldFaildThd_Cnt_T_u16,
                                                   P2VAR(uint16, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)BusHiSpdQlyFacEngModInvldFaildThd_Cnt_T_u16)

{

    /** Start of CalSeln */
    if(FordEpsLifeCycMod_Cnt_T_u08 == MODSEL_CNT_U08)
    {
        *BusHiSpdMissMsgFaildThd_Cnt_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
        *BusHiSpdGearRvStsInvldFaildThd_Cnt_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
        *BusHiSpdQlyFacEngModInvldFaildThd_Cnt_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
    }
    else
    {
        if(FordAbsPrsnt_Cnt_T_logl != FALSE)
        {
            *BusHiSpdMissMsgFaildThd_Cnt_T_u16 = Rte_Prm_FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd_Val();
        }
        else
        {
            *BusHiSpdMissMsgFaildThd_Cnt_T_u16 = Rte_Prm_FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd_Val();
        }
        *BusHiSpdGearRvStsInvldFaildThd_Cnt_T_u16 = Rte_Prm_FordMsg202BusHiSpdGearRvsStsInvldFaildThd_Val();
        *BusHiSpdQlyFacEngModInvldFaildThd_Cnt_T_u16 = Rte_Prm_FordMsg202BusHiSpdQlyFacEngModInvldFaildThd_Val();
    }
      /** End of CalSeln */
}

 /*****************************************************************************
  * Name            : VldFalse
  * Description     : Implementation of "VldFalse" subsystem in model.
  * Inputs          : FordEpsLifeCycMod_Cnt_T_u08.
  * Outputs         : *BusHiSpdMissMsgFaildThd_Cnt_T_u16,*BusHiSpdGearRvStsInvldFaildThd_Cnt_T_u16
  *                   *BusHiSpdQlyFacEngModInvldFaildThd_Cnt_T_u16.
  * Returns         : None
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg202BusHiSpd_CODE) VldFalse(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)FordVehGearRvsStsVld_Cnt_T_logl,
                                                    P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)FordVehSpdEngModlVld_Cnt_T_logl,
                                                    P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)FordVehSpdEngModLoQlyVld_Cnt_T_logl,
                                                    P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR)FordVehTrlrBackupAssiAvlVld_Cnt_T_logl)
{
    VAR(uint32,AUTOMATIC)TiSpan_Cnt_T_u32;
    /** Start of VldFalse **/
    (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehGearRvsStsVldMissRefTi(),&TiSpan_Cnt_T_u32);
    if(TiSpan_Cnt_T_u32 > (((uint32)Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldMissThd_Val()) * ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))
    {
        *FordVehGearRvsStsVld_Cnt_T_logl = FALSE;
    }
    else
    {
        *FordVehGearRvsStsVld_Cnt_T_logl = *Rte_Pim_FordVehGearRvsStsVldPrev();
    }

    (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehSpdEngModlVldMissRefTi(),&TiSpan_Cnt_T_u32);
    if(TiSpan_Cnt_T_u32 > (((uint32)Rte_Prm_FordMsg202BusHiSpdEngModlVldMissThd_Val()) * ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))
    {
        *FordVehSpdEngModlVld_Cnt_T_logl = FALSE;
    }
    else
    {
        *FordVehSpdEngModlVld_Cnt_T_logl = *Rte_Pim_FordVehSpdEngModlVldPrev();
    }

    (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehSpdEngModLoQlyVldMissRefTi(),&TiSpan_Cnt_T_u32);
    if(TiSpan_Cnt_T_u32 > (((uint32)Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldMissThd_Val()) * ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))
    {
        *FordVehSpdEngModLoQlyVld_Cnt_T_logl = FALSE;
    }
    else
    {
        *FordVehSpdEngModLoQlyVld_Cnt_T_logl = *Rte_Pim_FordVehSpdEngModLoQlyVldPrev();
    }

    (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehTrlrBackupAssiAvlVldMissRefTi(),&TiSpan_Cnt_T_u32);
    if(TiSpan_Cnt_T_u32 > (((uint32)Rte_Prm_FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd_Val()) * ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))
    {
        *FordVehTrlrBackupAssiAvlVld_Cnt_T_logl = FALSE;
    }
    else
    {
        *FordVehTrlrBackupAssiAvlVld_Cnt_T_logl = *Rte_Pim_FordVehTrlrBackupAssiAvlVldPrev();
    }

    /** End of VldFalse **/
}

/*****************************************************************************
  * Name            : SigProcg
  * Description     : Implementation of "SignalProcessing" subsystem in model.
  * Inputs          : Ford_GearRvrse_D_Actl1_Cnt_T_enum,Ford_Veh_V_ActlEng_Cnt_T_enum,
  *                   Ford_VehVActlEng_D_Qf1_Cnt_T_enum,Ford_VehVActlEng_No_Cnt_Cnt_T_enum,
  *                   Ford_VehVActlEng_No_Cs_Cnt_T_enum, Ford_VehVTrlrAid_B_Avail1_Cnt_T_enum
  * Outputs         : *FordVehGearRvsStsRaw_Cnt_T_u08,*FordVehGearRvsSts_Cnt_T_enum,
  *                   *FordVehGearRvsStsVld_Cnt_T_logl,*FordVehSpdEngModlRaw_Cnt_T_u16,
  *                   *FordVehSpdEngModl_Kph_T_f32,*FordVehSpdQlyFacEngModl_Cnt_T_enum,
  *                   *FordVehSpdCntrEngModl_Cnt_T_u08,*FordVehSpdChksEngModl_Cnt_T_u08,
  *                   *FordVehSpdEngModlVld_Cnt_T_logl,*FordVehSpdEngModLoQlyVld_Cnt_T_logl,
  *                   *FordVehTrlrAidAvlRaw_Cnt_T_u08,*FordVehTrlrAidAvl_Cnt_T_enum,
  *                   *FordVehTrlrBackupAssiAvlVld_Cnt_T_logl.
  * Returns         : None
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordMsg202BusHiSpd_CODE) SigProcg(VAR(Ford_GearRvrse_D_Actl,AUTOMATIC)Ford_GearRvrse_D_Actl1_Cnt_T_enum,
                                                       VAR(uint16,AUTOMATIC) Ford_Veh_V_ActlEng_Cnt_T_enum,
                                                       VAR(Ford_VehVActlEng_D_Qf,AUTOMATIC) Ford_VehVActlEng_D_Qf1_Cnt_T_enum,
                                                       VAR(uint8,AUTOMATIC) Ford_VehVActlEng_No_Cnt_Cnt_T_enum,
                                                       VAR(uint8,AUTOMATIC) Ford_VehVActlEng_No_Cs_Cnt_T_enum,
                                                       VAR(Ford_VehVTrlrAid_B_Avail,AUTOMATIC) Ford_VehVTrlrAid_B_Avail1_Cnt_T_enum,
                                                       P2VAR(uint8, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehGearRvsStsRaw_Cnt_T_u08,
                                                       P2VAR(Ford_GearRvrse_D_Actl, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehGearRvsSts_Cnt_T_enum,
                                                       P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehGearRvsStsVld_Cnt_T_logl,
                                                       P2VAR(uint16, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdEngModlRaw_Cnt_T_u16,
                                                       P2VAR(float32, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdEngModl_Kph_T_f32,
                                                       P2VAR(Ford_VehVActlEng_D_Qf, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdQlyFacEngModl_Cnt_T_enum,
                                                       P2VAR(uint8, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdCntrEngModl_Cnt_T_u08,
                                                       P2VAR(uint8, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdChksEngModl_Cnt_T_u08,
                                                       P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdEngModlVld_Cnt_T_logl,
                                                       P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdEngModLoQlyVld_Cnt_T_logl,
                                                       P2VAR(uint8, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehTrlrAidAvlRaw_Cnt_T_u08,
                                                       P2VAR(Ford_VehVTrlrAid_B_Avail, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehTrlrAidAvl_Cnt_T_enum,
                                                       P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehTrlrBackupAssiAvlVld_Cnt_T_logl,
													   P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehGearRvsStsVldFlg_Cnt_T_logl,
													   P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdEngModlVldFlg_Cnt_T_logl)
 {
	VAR(boolean,AUTOMATIC) FordVehSpdEngModLoQlyVldFlg_Cnt_T_logl = FALSE;
	VAR(boolean,AUTOMATIC) GearRvsStsVldElpdTi_Cnt_T_logl;
	VAR(boolean,AUTOMATIC) GearRvsStsInvldElpdTi_Cnt_T_logl;
	VAR(boolean,AUTOMATIC) SpdEngModLoQlyVldElpdTi_Cnt_T_logl;
	VAR(boolean,AUTOMATIC) SpdEngModLoQlyInvldElpdTi_Cnt_T_logl;
	VAR(boolean,AUTOMATIC) FordVehTrlrBackupAssiAvlVldElpdTi_Cnt_T_logl;
	VAR(boolean,AUTOMATIC) EngModlInvldElpdTi_Cnt_T_logl;
	
	/*** Start of Signal Processing ***/
	/*** Start of GearRvsStsCalcn ***/
    *FordVehGearRvsStsRaw_Cnt_T_u08 = (uint8)Ford_GearRvrse_D_Actl1_Cnt_T_enum;
    *FordVehGearRvsSts_Cnt_T_enum = Ford_GearRvrse_D_Actl1_Cnt_T_enum;
    if((Ford_GearRvrse_D_Actl1_Cnt_T_enum == Cx0_Inactive_not_confirmed) ||
       (Ford_GearRvrse_D_Actl1_Cnt_T_enum == Cx1_Inactive_confirmed) ||
       (Ford_GearRvrse_D_Actl1_Cnt_T_enum == Cx2_Active_not_confirmed) ||
       (Ford_GearRvrse_D_Actl1_Cnt_T_enum == Cx3_Active_confirmed))
       {
           *FordVehGearRvsStsVldFlg_Cnt_T_logl = TRUE;
       }
    else
      {
           *FordVehGearRvsStsVldFlg_Cnt_T_logl = FALSE;
      }
    /*** End of GearRvsStsCalcn ***/
	
	/*** Start of SpdEngModlCalcn ***/
	*FordVehSpdEngModlRaw_Cnt_T_u16 = Ford_Veh_V_ActlEng_Cnt_T_enum;
	*FordVehSpdEngModl_Kph_T_f32 = FixdToFloat_f32_u16(Ford_Veh_V_ActlEng_Cnt_T_enum,NXTRFIXDPT_P0TOFLOAT_ULS_F32) * SPDENGMODLSCAGVAL_KPHPERCNT_F32;
	/*** End of SpdEngModlCalcn ***/
	
	
	*FordVehSpdQlyFacEngModl_Cnt_T_enum = (Ford_VehVActlEng_D_Qf)Ford_VehVActlEng_D_Qf1_Cnt_T_enum;
	if((Ford_VehVActlEng_D_Qf1_Cnt_T_enum == Cx2_Not_Within_Specifications) ||
	   (Ford_VehVActlEng_D_Qf1_Cnt_T_enum == Cx3_OK))
	{
		/*** Start of SpdSpdQlyFacEngModl ***/
		*FordVehSpdEngModlVldFlg_Cnt_T_logl = TRUE;
		FordVehSpdEngModLoQlyVldFlg_Cnt_T_logl = TRUE;
		/*** End of SpdSpdQlyFacEngModl ***/
	}
	else
	{
		/*** Start of SpdEngModlInvldSln ***/
		*FordVehSpdEngModlVldFlg_Cnt_T_logl = FALSE;
		FordVehSpdEngModLoQlyVldFlg_Cnt_T_logl = FALSE;
		/*** End of SpdEngModlInvldSln ***/
	}
	
	*FordVehSpdCntrEngModl_Cnt_T_u08 = Ford_VehVActlEng_No_Cnt_Cnt_T_enum;
	*FordVehSpdChksEngModl_Cnt_T_u08 = Ford_VehVActlEng_No_Cs_Cnt_T_enum;
	
	/*** Start of VehTrlrAidAvlCalcn ***/
	if(TRUE == Ford_VehVTrlrAid_B_Avail1_Cnt_T_enum )
	{
		*FordVehTrlrAidAvlRaw_Cnt_T_u08 = 1U;
		*FordVehTrlrAidAvl_Cnt_T_enum = TRUE;
	}
	else
	{
		*FordVehTrlrAidAvlRaw_Cnt_T_u08 = 0U;
		*FordVehTrlrAidAvl_Cnt_T_enum = FALSE;
	}
	/*** End of VehTrlrAidAvlCalcn ***/
	
	/*** Start of VldElpdTi ***/
	VldElpdTi(&GearRvsStsVldElpdTi_Cnt_T_logl,
	          &GearRvsStsInvldElpdTi_Cnt_T_logl,
	          &SpdEngModLoQlyVldElpdTi_Cnt_T_logl,
	          &SpdEngModLoQlyInvldElpdTi_Cnt_T_logl,
	          &FordVehTrlrBackupAssiAvlVldElpdTi_Cnt_T_logl,
	          &EngModlInvldElpdTi_Cnt_T_logl);
	/*** End of VldElpdTi ***/
		
	if(TRUE == *Rte_Pim_FirstTranVldFlg())
	{
		/***Start of FirstTran ***/
		*Rte_Pim_FirstTranVldFlg() = FALSE;
		*FordVehTrlrBackupAssiAvlVld_Cnt_T_logl = TRUE;
		*FordVehGearRvsStsVld_Cnt_T_logl = *FordVehGearRvsStsVldFlg_Cnt_T_logl;
		*FordVehSpdEngModlVld_Cnt_T_logl = *FordVehSpdEngModlVldFlg_Cnt_T_logl;
		*FordVehSpdEngModLoQlyVld_Cnt_T_logl = FordVehSpdEngModLoQlyVldFlg_Cnt_T_logl;
		/*** End of FirstTran ***/
	}
	else
	{
		/*** Start of VldChk ***/
		VldChk(*FordVehGearRvsStsVldFlg_Cnt_T_logl,
			   FordVehSpdEngModLoQlyVldFlg_Cnt_T_logl,
			   *FordVehSpdEngModlVldFlg_Cnt_T_logl,
				FordVehTrlrBackupAssiAvlVldElpdTi_Cnt_T_logl,
				GearRvsStsVldElpdTi_Cnt_T_logl,
				GearRvsStsInvldElpdTi_Cnt_T_logl,
				SpdEngModLoQlyVldElpdTi_Cnt_T_logl,
				SpdEngModLoQlyInvldElpdTi_Cnt_T_logl,
				EngModlInvldElpdTi_Cnt_T_logl,
				FordVehGearRvsStsVld_Cnt_T_logl,
				FordVehSpdEngModLoQlyVld_Cnt_T_logl,
				FordVehTrlrBackupAssiAvlVld_Cnt_T_logl,
				FordVehSpdEngModlVld_Cnt_T_logl);
		/*** End of VldChk ***/
		/*** Start of Signal Processing ***/
	}
 }
 
/*****************************************************************************
  * Name            : VldElpdTi
  * Description     : Implementation of "VldElpdTi" subsystem in model.
  * Outputs         : *GearRvsStsVldElpdTi_Cnt_T_logl,
  *                   *GearRvsStsInvldElpdTi_Cnt_T_logl,
  *                   *SpdEngModLoQlyVldElpdTi_Cnt_T_logl,
  *                   *SpdEngModLoQlyInvldElpdTi_Cnt_T_logl,
  *                   *FordVehTrlrBackupAssiAvlVldElpdTi_Cnt_T_logl,
  *                   *EngModlInvldElpdTi_Cnt_T_logl.
  * Returns         : None
  * Usage Notes     : NA.
*****************************************************************************/ 
 static FUNC(void, FordMsg202BusHiSpd_CODE)	VldElpdTi(P2VAR(boolean,AUTOMATIC,RTE_FORDMSG202BUSHISPD_APPL_VAR) GearRvsStsVldElpdTi_Cnt_T_logl,
											          P2VAR(boolean,AUTOMATIC,RTE_FORDMSG202BUSHISPD_APPL_VAR) GearRvsStsInvldElpdTi_Cnt_T_logl,
													  P2VAR(boolean,AUTOMATIC,RTE_FORDMSG202BUSHISPD_APPL_VAR) SpdEngModLoQlyVldElpdTi_Cnt_T_logl,
													  P2VAR(boolean,AUTOMATIC,RTE_FORDMSG202BUSHISPD_APPL_VAR) SpdEngModLoQlyInvldElpdTi_Cnt_T_logl,
													  P2VAR(boolean,AUTOMATIC,RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehTrlrBackupAssiAvlVldElpdTi_Cnt_T_logl,
													  P2VAR(boolean,AUTOMATIC,RTE_FORDMSG202BUSHISPD_APPL_VAR) EngModlInvldElpdTi_Cnt_T_logl)
 {
	 VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;
	 /*** Start of VldElpdTi ***/
	 (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehGearRvsStsVldPassdRefTi(),&TiSpan_Cnt_T_u32);
	 if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	 {
		 *GearRvsStsVldElpdTi_Cnt_T_logl = TRUE;
	 }
	 else
	 {
		 *GearRvsStsVldElpdTi_Cnt_T_logl = FALSE;
	 }
	 
	 (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehGearRvsStsVldFaildRefTi(),&TiSpan_Cnt_T_u32);
	 if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldFaildThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	 {
		 *GearRvsStsInvldElpdTi_Cnt_T_logl = TRUE;
	 }
	 else
	 {
		 *GearRvsStsInvldElpdTi_Cnt_T_logl = FALSE;
	 }
	 
	 (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehSpdEngModLoQlyVldPassdRefTi(),&TiSpan_Cnt_T_u32);
	 if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	 {
		 *SpdEngModLoQlyVldElpdTi_Cnt_T_logl = TRUE;
	 }
	 else
	 {
		 *SpdEngModLoQlyVldElpdTi_Cnt_T_logl = FALSE;
	 }
	 
	 (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehSpdEngModLoQlyVldFaildRefTi(),&TiSpan_Cnt_T_u32);
	 if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldFaildThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	 {
		 *SpdEngModLoQlyInvldElpdTi_Cnt_T_logl = TRUE;
	 }
	 else
	 {
		 *SpdEngModLoQlyInvldElpdTi_Cnt_T_logl = FALSE;
	 }
	 
	 (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehTrlrBackupAssiAvlVldPassdRefTi(),&TiSpan_Cnt_T_u32);
	 if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	 {
		 *FordVehTrlrBackupAssiAvlVldElpdTi_Cnt_T_logl = TRUE;
	 }
	 else
	 {
		 *FordVehTrlrBackupAssiAvlVldElpdTi_Cnt_T_logl = FALSE;
	 }
	 
	 (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehSpdEngModlVldFaildRefTi(),&TiSpan_Cnt_T_u32);
	 if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg202BusHiSpdEngModlVldFaildThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	 {
		 *EngModlInvldElpdTi_Cnt_T_logl = TRUE;
	 }
	 else
	 {
		 *EngModlInvldElpdTi_Cnt_T_logl = FALSE;
	 }
	 /*** End of VldElpdTi ***/
 }
 /*****************************************************************************
  * Name            : VldChk
  * Description     : Implementation of "VldChk" subsystem in model.
  * Inputs          : FordVehGearRvsStsVldFlg_Cnt_T_logl,
  *                   FordVehSpdEngModLoQlyVldFlg_Cnt_T_logl,
  *                   FordVehSpdEngModlVldFlg_Cnt_T_logl,
  *                   FordVehTrlrBackupAssiAvlVldElpdTi_Cnt_T_logl,
  *                   GearRvsStsVldElpdTi_Cnt_T_logl,
  *                   GearRvsStsInvldElpdTi_Cnt_T_logl,
  *                   SpdEngModLoQlyVldElpdTi_Cnt_T_logl,
  *                   SpdEngModLoQlyInvldElpdTi_Cnt_T_logl,
  *                   EngModlInvldElpdTi_Cnt_T_logl.
  * Outputs         : *FordVehGearRvsStsVld_Cnt_T_logl,
  *                   *FordVehSpdEngModLoQlyVld_Cnt_T_logl,
  *                   *FordVehTrlrBackupAssiAvlVld_Cnt_T_logl,
  *                   *FordVehSpdEngModlVld_Cnt_T_logl.
  * Returns         : None
  * Usage Notes     : NA.
*****************************************************************************/ 
 static FUNC(void, FordMsg202BusHiSpd_CODE) VldChk(VAR(boolean, AUTOMATIC)FordVehGearRvsStsVldFlg_Cnt_T_logl,
												   VAR(boolean, AUTOMATIC) FordVehSpdEngModLoQlyVldFlg_Cnt_T_logl,
												   VAR(boolean, AUTOMATIC) FordVehSpdEngModlVldFlg_Cnt_T_logl,
												   VAR(boolean, AUTOMATIC) FordVehTrlrBackupAssiAvlVldElpdTi_Cnt_T_logl,
												   VAR(boolean, AUTOMATIC) GearRvsStsVldElpdTi_Cnt_T_logl,
												   VAR(boolean, AUTOMATIC) GearRvsStsInvldElpdTi_Cnt_T_logl,
												   VAR(boolean, AUTOMATIC) SpdEngModLoQlyVldElpdTi_Cnt_T_logl,
												   VAR(boolean, AUTOMATIC) SpdEngModLoQlyInvldElpdTi_Cnt_T_logl,
												   VAR(boolean, AUTOMATIC) EngModlInvldElpdTi_Cnt_T_logl,
												   P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehGearRvsStsVld_Cnt_T_logl,
												   P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdEngModLoQlyVld_Cnt_T_logl,
												   P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehTrlrBackupAssiAvlVld_Cnt_T_logl,
												   P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) FordVehSpdEngModlVld_Cnt_T_logl)
 {
	/*** Start of VldChk ***/
	if(TRUE == FordVehGearRvsStsVldFlg_Cnt_T_logl)
	{
	    /*** GearRvsStsVld ***/
		if(TRUE == GearRvsStsVldElpdTi_Cnt_T_logl)
		{
			*FordVehGearRvsStsVld_Cnt_T_logl = TRUE;
		}
		else
		{
			*FordVehGearRvsStsVld_Cnt_T_logl = *Rte_Pim_FordVehGearRvsStsVldPrev();
		}
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehGearRvsStsVldFaildRefTi());
	}
	else
	{
	    /** GearRvsStsInvld **/
		if(TRUE == GearRvsStsInvldElpdTi_Cnt_T_logl)
		{
			*FordVehGearRvsStsVld_Cnt_T_logl = FALSE;
		}
		else
		{
			*FordVehGearRvsStsVld_Cnt_T_logl = *Rte_Pim_FordVehGearRvsStsVldPrev();
		}
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehGearRvsStsVldPassdRefTi());
	}
	
	if(TRUE == FordVehSpdEngModlVldFlg_Cnt_T_logl)
	{ 
	    /*** SpdEngModlVld ***/
		*FordVehSpdEngModlVld_Cnt_T_logl = TRUE;
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdEngModlVldFaildRefTi());
	}
	else
	{
	    /*** SpdEngModlInvld ***/
		if(TRUE == EngModlInvldElpdTi_Cnt_T_logl)
		{
			*FordVehSpdEngModlVld_Cnt_T_logl = FALSE;
		}
		else
		{
			*FordVehSpdEngModlVld_Cnt_T_logl = *Rte_Pim_FordVehSpdEngModlVldPrev();
		}
	}
	
	if(TRUE == FordVehSpdEngModLoQlyVldFlg_Cnt_T_logl)
	{
	    /*** SpdEngModLoQlyVld ***/
		if(TRUE == SpdEngModLoQlyVldElpdTi_Cnt_T_logl)
		{
			*FordVehSpdEngModLoQlyVld_Cnt_T_logl = TRUE;
		}
		else
		{
			*FordVehSpdEngModLoQlyVld_Cnt_T_logl = *Rte_Pim_FordVehSpdEngModLoQlyVldPrev();
		}
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdEngModLoQlyVldFaildRefTi());
	}
	else
	{
	    /*** SpdEngModLoQlyInvld ***/
		if(TRUE == SpdEngModLoQlyInvldElpdTi_Cnt_T_logl)
		{
			*FordVehSpdEngModLoQlyVld_Cnt_T_logl = FALSE;
		}
		else
		{
			*FordVehSpdEngModLoQlyVld_Cnt_T_logl = *Rte_Pim_FordVehSpdEngModLoQlyVldPrev();
		}
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdEngModLoQlyVldPassdRefTi());
	}
	
	if(TRUE == FordVehTrlrBackupAssiAvlVldElpdTi_Cnt_T_logl)
	{
		*FordVehTrlrBackupAssiAvlVld_Cnt_T_logl = TRUE;
	}
	else
	{
		*FordVehTrlrBackupAssiAvlVld_Cnt_T_logl = *Rte_Pim_FordVehTrlrBackupAssiAvlVldPrev();
	}
	/*** End of VldChk ***/
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
