/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordMsg3D7BusHiSpd.c
 *        Config:  C:/Users/nz4826/Documents/Mrudula/Synergy_working/comp_dev_ea4/MM075A_FordMsg3D7BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg3D7BusHiSpd
 *  Generated at:  Fri May  4 15:34:52 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordMsg3D7BusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
* Copyright 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg3D7BusHiSpd.c
* Module Description: Implementation of FordMsg3D7BusHiSpd FDD MM075A
* Project           : CBD 
* Author            : Mrudula Paturi
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz4826 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/18/18  1        MP           Initial version from FDD v2.0.0                                             EA4#20126     
* **********************************************************************************************************************/

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

#include "Rte_FordMsg3D7BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value of RTE reads, RTE writes, and SetNtcSts */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void function; Rte generation adds standard return type but no error information is returned.
                                              [GetRefTmr100MicroSec32bit, GetTiSpan100MicroSec32bit] */
/* MISRA-C:2004 Rule 8.10 [NXTRDEV 8.10.1]: There are nonRTE server runnables which have their prototypes in another header file. */
#include "NxtrMath.h"
/********************************************* Embedded Local Constants **********************************************/
#define BUSHISPDFIXDTITHD_MILLISEC_U16               	((uint16)5000U)
#define CNVMILLISECTOCNT_CNTPERMILLISEC_U16          	((uint16)10U)
#define DEBSTEP_CNT_U16                              	((uint16)65535U)
#define DSTRAWMINVAL_CNT_U16                         	((uint16)0U)
#define FORDVEHCLLSNMTGTNBYBRKGLATRAWTHD_CNT_U16     	((uint16)509U)
#define FORDVEHCLLSNMTGTNBYBRKGLGTRAWTHD_CNT_U16     	((uint16)1021U)
#define FORDVEHCLLSNMTGTNBYBRKGTITOCLLSNRAWTHD_CNT_U08	((uint8)125U)
#define LATDSTRAWMAXVAL_CNT_U16							((uint16)511U)
#define LATDSTRAWNODATAEXIST_CNT_U16					((uint16)510U)
#define LGTDSTRAWMAXVAL_CNT_U16							((uint16)1023U)
#define LGTDSTRAWNODATAEXIST_CNT_U16					((uint16)1022U)
#define MODSEL_CNT_U08									((uint8)1U)
#define RELLATVELRAWMAXVAL_CNT_U16						((uint16)511U)
#define RELLATVELRAWNODATAEXIST_CNT_U16					((uint16)510U)
#define RELLGTVELRAWMAXVAL_CNT_U16						((uint16)1023U)
#define RELLGTVELRAWNODATAEXIST_CNT_U16					((uint16)1022U)
#define TITOCLLSNRAWMAX_CNT_U08							((uint8)127U)
#define TITOCLLSNRAWMIN_CNT_U08							((uint8)0U)
#define TITOCLLSNRAWNODATAEXIST_CNT_U08					((uint8)126U)
#define VELRAWMINVAL_CNT_U16 							((uint16)0U)

/******************************************** Local Function Prototypes **********************************************/

static FUNC(void, FordMsg3D7BusHiSpd_CODE)NtcEnab(VAR(boolean, AUTOMATIC)FordEvasSteerAssiEnad_Cnt_T_logl,
												  VAR(boolean, AUTOMATIC)FordCanDtcInhb_Cnt_T_logl,
												  VAR(uint8, AUTOMATIC)ClrDiagcFlgProxy_Cnt_T_u08,
			                                      P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)DiagEna_Cnt_T_logl,
			                                      P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)ClrDiagcFlgProxyEna_Cnt_T_logl);


static FUNC(void, FordMsg3D7BusHiSpd_CODE)MsgMiss(VAR(boolean, AUTOMATIC)DiagEna_Cnt_T_logl,
		                                           VAR(uint16, AUTOMATIC)BusHiSpdMissThd_Cnt_T_u16,
												   VAR(boolean, AUTOMATIC)ClrDiagcFlgProxyEna_Cnt_T_logl,
		                                           P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl,
		                                           P2VAR(uint8, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehEvasSteerAssiEnadReqRaw_Cnt_T_u08,
		                                           P2VAR(uint8, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Cnt_T_u08,
		                                           P2VAR(uint16, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgLgtDstRaw_Cnt_T_u16,
		                                           P2VAR(uint16, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgLatDstRaw_Cnt_T_u16,
		                                           P2VAR(uint16, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Cnt_T_u16,
		                                           P2VAR(uint16, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgRelLatVelRaw_Cnt_T_u16,
		                                           P2VAR(uint8, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Cnt_T_u08,
		                                           P2VAR(uint8, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Cnt_T_u08);
												   

static FUNC(void, FordMsg3D7BusHiSpd_CODE) OutpProcd(VAR(Ford_EsaEnbl_D2_Rq, AUTOMATIC)Ford_EsaEnbl_D2_Rq_Cnt_T_enum,
				                                     VAR(Ford_CmbbObjClass_D_Stat, AUTOMATIC)Ford_CmbbObjClass_D_Stat_Cnt_T_enum,
				                                     VAR(Ford_CmbbObjConfdnc_D_Stat, AUTOMATIC)Ford_CmbbObjConfdnc_D_Stat_Cnt_T_enum,
				                                     VAR(Ford_CmbbObjDistLong_L_Actl, AUTOMATIC)Ford_CmbbObjDistLong_L_Actl_Cnt_T_enum,
				                                     VAR(Ford_CmbbObjDistLat_L_Actl, AUTOMATIC)Ford_CmbbObjDistLat_L_Actl_Cnt_T_enum,
				                                     VAR(Ford_CmbbObjRelLong_V_Actl, AUTOMATIC)Ford_CmbbObjRelLong_V_Actl_Cnt_T_enum,
				                                     VAR(Ford_CmbbObjRelLat_V_Actl, AUTOMATIC)Ford_CmbbObjRelLat_V_Actl_Cnt_T_enum,
				                                     VAR(Ford_CmbbObjColl_T_Actl, AUTOMATIC)Ford_CmbbObjColl_T_Actl_Cnt_T_enum,
				                                     P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl,
				                                     P2VAR(uint8, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehEvasSteerAssiEnadReqRaw_Cnt_T_u08,
				                                     P2VAR(uint8, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Cnt_T_u08,
				                                     P2VAR(uint8, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Cnt_T_u08,
				                                     P2VAR(uint16, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgLgtDstRaw_Cnt_T_u16,
				                                     P2VAR(uint16, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgLatDstRaw_Cnt_T_u16,
				                                     P2VAR(uint16, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Cnt_T_u16,
				                                     P2VAR(uint16, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgRelLatVelRaw_Cnt_T_u16,
				                                     P2VAR(uint8, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Cnt_T_u08,
				                                     P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl,
	                                                 P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl,
	                                                 P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl,
	                                                 P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl,
	                                                 P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl);
static FUNC(void, FordMsg3D7BusHiSpd_CODE) VldElpdTi(P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) ImgProcrModlAVldPassdElpdTi_Cnt_T_logl,
	                                                 P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) LgtDstRawVldFaildElpdTi_Cnt_T_logl,
	                                                 P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) LatDstRawVldFaildElpdTi_Cnt_T_logl,
	                                                 P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) RelLgtVelRawVldFaildElpdTi_Cnt_T_logl,
	                                                 P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) RelLatVelRawVldFaildElpdTi_Cnt_T_logl,
	                                                 P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) TiToCllsnRawVldFaildElpdTi_Cnt_T_logl);
static FUNC(void, FordMsg3D7BusHiSpd_CODE) FirstTran(VAR(boolean, AUTOMATIC)VldChkFlg_Cnt_T_logl,
                                                     P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl );

static FUNC(void, FordMsg3D7BusHiSpd_CODE) ChkElpdTi(VAR(boolean, AUTOMATIC)VldChkFlg_Cnt_T_logl,
		                                             VAR(boolean, AUTOMATIC)ImgProcrModlAVldPassdElpdTi_Cnt_T_logl,
		                                             VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl,
				                                     VAR(boolean, AUTOMATIC)LgtDstRawVldFaildElpdTi_Cnt_T_logl,
                                                     VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl,
                                                     VAR(boolean, AUTOMATIC)LatDstRawVldFaildElpdTi_Cnt_T_logl,
                                                     VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl,
                                                     VAR(boolean, AUTOMATIC)RelLgtVelRawVldFaildElpdTi_Cnt_T_logl,
                                                     VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl,
                                                     VAR(boolean, AUTOMATIC)RelLatVelRawVldFaildElpdTi_Cnt_T_logl,
                                                     VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl,
                                                     VAR(boolean, AUTOMATIC)TiToCllsnRawVldFaildElpdTi_Cnt_T_logl,
                                                     P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl);
													 
static FUNC(void, FordMsg3D7BusHiSpd_CODE) Enad(VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl,
	                                                VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl,
	                                                VAR(uint16, AUTOMATIC)BusHiSpdLgtDstInvldThd_Cnt_T_u16,
					                                VAR(uint16, AUTOMATIC)BusHiSpdLatDstInvldThd_Cnt_T_u16);

static FUNC(void, FordMsg3D7BusHiSpd_CODE) Enad2(VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl,
	                                                VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl,
	                                                VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl,
													VAR(uint16, AUTOMATIC)BusHiSpdTiToCllsnInvldThd_Cnt_T_u16,
					                                VAR(uint16, AUTOMATIC)BusHiSpdRelLgtVelInvldThd_Cnt_T_u16,
					                                VAR(uint16, AUTOMATIC)BusHiSpdRelLatVelInvldThd_Cnt_T_u16);

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
 * Ford_CmbbObjClass_D_Stat: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_Undetermined (0U)
 *   Cx1_Vehicle (1U)
 *   Cx2_Motorcycle (2U)
 *   Cx3_Truck (3U)
 *   Cx4_Pedestrian (4U)
 *   Cx5_Bicycle (5U)
 *   Cx6_Unclassified_Vehicle (6U)
 *   Cx7_NotUsed_1 (7U)
 *   Cx8_NotUsed_2 (8U)
 *   Cx9_NotUsed_3 (9U)
 *   CxA_NotUsed_4 (10U)
 *   CxB_NotUsed_5 (11U)
 *   CxC_NotUsed_6 (12U)
 *   CxD_NotUsed_7 (13U)
 *   CxE_NotUsed_8 (14U)
 *   CxF_NotUsed_9 (15U)
 * Ford_CmbbObjColl_T_Actl: Enumeration of integer in interval [0...127] with enumerators
 *   Cx7E_NoDataExists (126U)
 *   Cx7F_Faulty (127U)
 *   Unit: [second], Factor: 0.05, Offset: 0
 * Ford_CmbbObjConfdnc_D_Stat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_NotDetermined (0U)
 *   Cx1_Low (1U)
 *   Cx2_Medium (2U)
 *   Cx3_High (3U)
 * Ford_CmbbObjDistLat_L_Actl: Enumeration of integer in interval [0...511] with enumerators
 *   Cx1FE_NoDataExists (510U)
 *   Cx1FF_Faulty (511U)
 *   Unit: [meter], Factor: 0.1, Offset: -25.5
 * Ford_CmbbObjDistLong_L_Actl: Enumeration of integer in interval [0...1023] with enumerators
 *   Cx3FE_NoDataExists (1022U)
 *   Cx3FF_Faulty (1023U)
 *   Unit: [meter], Factor: 0.1, Offset: 0
 * Ford_CmbbObjRelLat_V_Actl: Enumeration of integer in interval [0...511] with enumerators
 *   Cx1FE_NoDataExists (510U)
 *   Cx1FF_Faulty (511U)
 *   Unit: [meters/sec], Factor: 0.1, Offset: -25.5
 * Ford_CmbbObjRelLong_V_Actl: Enumeration of integer in interval [0...1023] with enumerators
 *   Cx3FE_NoDataExists (1022U)
 *   Cx3FF_Faulty (1023U)
 *   Unit: [meters/sec], Factor: 0.1, Offset: -102.1
 * Ford_EsaEnbl_D2_Rq: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_Disabled (0U)
 *   Cx1_Pending (1U)
 *   Cx2_Enabled (2U)
 *   Cx3_NotConfigured (3U)
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
 *   uint32 *Rte_Pim_EvasSteerAssiImgProcrModlAVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_ImgProcrModlAVldMissRefTi(void)
 *   uint32 *Rte_Pim_LatDstRawVldFaildRefTi(void)
 *   uint32 *Rte_Pim_LgtDstRawVldFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint32 *Rte_Pim_RelLatVelRawVldFaildRefTi(void)
 *   uint32 *Rte_Pim_RelLgtVelRawVldFaildRefTi(void)
 *   uint32 *Rte_Pim_TiToCllsnRawVldFaildRefTi(void)
 *   uint16 *Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstRawPrev(void)
 *   uint16 *Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstRawPrev(void)
 *   uint16 *Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelRawPrev(void)
 *   uint16 *Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   uint8 *Rte_Pim_FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev(void)
 *   uint8 *Rte_Pim_FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev(void)
 *   uint8 *Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev(void)
 *   uint8 *Rte_Pim_FordVehEvasSteerAssiEnadReqRawPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehEvasSteerAssiImgProcrModlAVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg3D7Miss(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdImgProcrModlAVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdLatDstInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdLatDstInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdLatDstRawVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdLgtDstInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdLgtDstInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdLgtDstRawVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdMissMsgFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdMissMsgPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdRelLatVelInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdRelLatVelInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd_Val(void)
 *
 *********************************************************************************************************************/


#define FordMsg3D7BusHiSpd_START_SEC_CODE
#include "FordMsg3D7BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3D7BusHiSpdInit1
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
 * Symbol: FordMsg3D7BusHiSpdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg3D7BusHiSpd_CODE) FordMsg3D7BusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg3D7BusHiSpdInit1
 *********************************************************************************************************************/
	
	VAR(uint32, AUTOMATIC) GetRefTmr_Cnt_T_u32;
	
	*Rte_Pim_FirstTranVldFlg() = TRUE;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstRawPrev() = LATDSTRAWNODATAEXIST_CNT_U16;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelRawPrev() = RELLATVELRAWNODATAEXIST_CNT_U16;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstRawPrev() = LGTDSTRAWNODATAEXIST_CNT_U16;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev() = RELLGTVELRAWNODATAEXIST_CNT_U16;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev() = TITOCLLSNRAWNODATAEXIST_CNT_U08;

	
	
	
	(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
	*Rte_Pim_MissMsgFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_MissMsgPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_EvasSteerAssiImgProcrModlAVldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_ImgProcrModlAVldMissRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_LgtDstRawVldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_LatDstRawVldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_RelLgtVelRawVldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_RelLatVelRawVldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_TiToCllsnRawVldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	







/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3D7BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_CmbbObjClass_D_Stat1_Ford_CmbbObjClass_D_Stat(Ford_CmbbObjClass_D_Stat *data)
 *   Std_ReturnType Rte_Read_Ford_CmbbObjColl_T_Actl_Ford_CmbbObjColl_T_Actl(Ford_CmbbObjColl_T_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_CmbbObjConfdnc_D_Stat1_Ford_CmbbObjConfdnc_D_Stat(Ford_CmbbObjConfdnc_D_Stat *data)
 *   Std_ReturnType Rte_Read_Ford_CmbbObjDistLat_L_Actl_Ford_CmbbObjDistLat_L_Actl(Ford_CmbbObjDistLat_L_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_CmbbObjDistLong_L_Actl_Ford_CmbbObjDistLong_L_Actl(Ford_CmbbObjDistLong_L_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_CmbbObjRelLat_V_Actl_Ford_CmbbObjRelLat_V_Actl(Ford_CmbbObjRelLat_V_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_CmbbObjRelLong_V_Actl_Ford_CmbbObjRelLong_V_Actl(Ford_CmbbObjRelLong_V_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_EsaEnbl_D2_Rq1_Ford_EsaEnbl_D2_Rq(Ford_EsaEnbl_D2_Rq *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehCllsnMtgtnByBrkgLatDstRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehEvasSteerAssiEnadReqRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehEvasSteerAssiImgProcrModlAVld_Logl(boolean data)
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
 * Symbol: FordMsg3D7BusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg3D7BusHiSpd_CODE) FordMsg3D7BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg3D7BusHiSpdPer1
 *********************************************************************************************************************/
	VAR(boolean, AUTOMATIC)	FordEvasSteerAssiEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordCanDtcInhb_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) DiagEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) ClrDiagcFlgProxyEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl;
	
	VAR(uint8, AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08;
	VAR(Ford_CmbbObjColl_T_Actl, AUTOMATIC) Ford_CmbbObjColl_T_Actl_Cnt_T_enum;
	VAR(uint8, AUTOMATIC) ClrDiagcFlgProxy_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Cnt_T_u08;
	
	VAR(Ford_EsaEnbl_D2_Rq, AUTOMATIC) Ford_EsaEnbl_D2_Rq_Cnt_T_enum;
	VAR(Ford_CmbbObjClass_D_Stat, AUTOMATIC) Ford_CmbbObjClass_D_Stat_Cnt_T_enum;
	VAR(Ford_CmbbObjConfdnc_D_Stat, AUTOMATIC) Ford_CmbbObjConfdnc_D_Stat_Cnt_T_enum;
	VAR(uint8, AUTOMATIC) FordVehEvasSteerAssiEnadReqRaw_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Cnt_T_u08;
	
	
	
	VAR(Ford_CmbbObjDistLong_L_Actl, AUTOMATIC) Ford_CmbbObjDistLong_L_Actl_Cnt_T_enum;
	VAR(Ford_CmbbObjDistLat_L_Actl, AUTOMATIC) Ford_CmbbObjDistLat_L_Actl_Cnt_T_enum;
	VAR(Ford_CmbbObjRelLong_V_Actl, AUTOMATIC) Ford_CmbbObjRelLong_V_Actl_Cnt_T_enum;
	VAR(Ford_CmbbObjRelLat_V_Actl, AUTOMATIC) Ford_CmbbObjRelLat_V_Actl_Cnt_T_enum;
	VAR(uint16, AUTOMATIC) BusHiSpdMissThd_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) BusHiSpdTiToCllsnInvldThd_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) BusHiSpdRelLatVelInvldThd_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) BusHiSpdRelLgtVelInvldThd_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) BusHiSpdLatDstInvldThd_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) BusHiSpdLgtDstInvldThd_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) FordVehCllsnMtgtnByBrkgLgtDstRaw_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) FordVehCllsnMtgtnByBrkgLatDstRaw_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) FordVehCllsnMtgtnByBrkgRelLatVelRaw_Cnt_T_u16;
	VAR(boolean, AUTOMATIC) FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl;
	VAR(uint32, AUTOMATIC) GetRefTmr_Cnt_T_u32;
	
	
	
	
	/*** Read Inputs from RTE ***/

	
	(void) Rte_Read_FordEvasSteerAssiEnad_Logl(&FordEvasSteerAssiEnad_Cnt_T_logl);
	(void) Rte_Read_FordCanDtcInhb_Logl(&FordCanDtcInhb_Cnt_T_logl);
	(void) Rte_Read_FordEpsLifeCycMod_Val(&FordEpsLifeCycMod_Cnt_T_u08);
	(void) Rte_Read_Ford_EsaEnbl_D2_Rq1_Ford_EsaEnbl_D2_Rq(&Ford_EsaEnbl_D2_Rq_Cnt_T_enum);
	(void) Rte_Read_Ford_CmbbObjClass_D_Stat1_Ford_CmbbObjClass_D_Stat(&Ford_CmbbObjClass_D_Stat_Cnt_T_enum);
	(void) Rte_Read_Ford_CmbbObjDistLong_L_Actl_Ford_CmbbObjDistLong_L_Actl(&Ford_CmbbObjDistLong_L_Actl_Cnt_T_enum);
	(void) Rte_Read_Ford_CmbbObjDistLat_L_Actl_Ford_CmbbObjDistLat_L_Actl(&Ford_CmbbObjDistLat_L_Actl_Cnt_T_enum);
	(void) Rte_Read_Ford_CmbbObjRelLong_V_Actl_Ford_CmbbObjRelLong_V_Actl(&Ford_CmbbObjRelLong_V_Actl_Cnt_T_enum);
	(void) Rte_Read_Ford_CmbbObjRelLat_V_Actl_Ford_CmbbObjRelLat_V_Actl(&Ford_CmbbObjRelLat_V_Actl_Cnt_T_enum);
	(void) Rte_Read_Ford_CmbbObjColl_T_Actl_Ford_CmbbObjColl_T_Actl(&Ford_CmbbObjColl_T_Actl_Cnt_T_enum);
	(void) Rte_Read_Ford_CmbbObjConfdnc_D_Stat1_Ford_CmbbObjConfdnc_D_Stat(&Ford_CmbbObjConfdnc_D_Stat_Cnt_T_enum);
	(void) Rte_Read_ClrDiagcFlgProxy_Val(&ClrDiagcFlgProxy_Cnt_T_u08);
	
	
	/*NtcEnab*/
	
	/**Start of NtcEnab **/
	NtcEnab(FordEvasSteerAssiEnad_Cnt_T_logl,
			FordCanDtcInhb_Cnt_T_logl,
			ClrDiagcFlgProxy_Cnt_T_u08,
			&DiagEna_Cnt_T_logl,
			&ClrDiagcFlgProxyEna_Cnt_T_logl);
	/**End of NtcEnab **/
	
	/*CalSeln*/
	
	/**Start of CalSeln **/
	
	if(FordEpsLifeCycMod_Cnt_T_u08 == MODSEL_CNT_U08)
	{
		BusHiSpdMissThd_Cnt_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
		BusHiSpdTiToCllsnInvldThd_Cnt_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
		BusHiSpdRelLatVelInvldThd_Cnt_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
		BusHiSpdRelLgtVelInvldThd_Cnt_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
		BusHiSpdLatDstInvldThd_Cnt_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
		BusHiSpdLgtDstInvldThd_Cnt_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
		
	}
	
	else
	{
		BusHiSpdLgtDstInvldThd_Cnt_T_u16 = Rte_Prm_FordMsg3D7BusHiSpdLgtDstInvldFaildThd_Val();
		BusHiSpdLatDstInvldThd_Cnt_T_u16 = Rte_Prm_FordMsg3D7BusHiSpdLatDstInvldFaildThd_Val();
		BusHiSpdRelLgtVelInvldThd_Cnt_T_u16 = Rte_Prm_FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd_Val();
		BusHiSpdRelLatVelInvldThd_Cnt_T_u16 = Rte_Prm_FordMsg3D7BusHiSpdRelLatVelInvldFaildThd_Val();
		BusHiSpdTiToCllsnInvldThd_Cnt_T_u16 = Rte_Prm_FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd_Val();
		BusHiSpdMissThd_Cnt_T_u16 = Rte_Prm_FordMsg3D7BusHiSpdMissMsgFaildThd_Val();  
		
	}
	/**End of CalSeln **/
	
	if(*Rte_Pim_FordVehMsg3D7Miss()!= FALSE)
	{
	    /*MsgMiss*/
    
		MsgMiss(DiagEna_Cnt_T_logl,
		BusHiSpdMissThd_Cnt_T_u16,
		ClrDiagcFlgProxyEna_Cnt_T_logl,
		&FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl,
		&FordVehEvasSteerAssiEnadReqRaw_Cnt_T_u08,
		&FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Cnt_T_u08,
		&FordVehCllsnMtgtnByBrkgLgtDstRaw_Cnt_T_u16,
		&FordVehCllsnMtgtnByBrkgLatDstRaw_Cnt_T_u16,
		&FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Cnt_T_u16,
		&FordVehCllsnMtgtnByBrkgRelLatVelRaw_Cnt_T_u16,
		&FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Cnt_T_u08,
		&FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Cnt_T_u08);
	
	}
	else
	{
		/*MsgPrsnt*/
		/*OutpProcd*/
		OutpProcd(Ford_EsaEnbl_D2_Rq_Cnt_T_enum,
				  Ford_CmbbObjClass_D_Stat_Cnt_T_enum,
				  Ford_CmbbObjConfdnc_D_Stat_Cnt_T_enum,
				  Ford_CmbbObjDistLong_L_Actl_Cnt_T_enum,
				  Ford_CmbbObjDistLat_L_Actl_Cnt_T_enum,
				  Ford_CmbbObjRelLong_V_Actl_Cnt_T_enum,
				  Ford_CmbbObjRelLat_V_Actl_Cnt_T_enum,
				  Ford_CmbbObjColl_T_Actl_Cnt_T_enum,
				  &FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl,
				  &FordVehEvasSteerAssiEnadReqRaw_Cnt_T_u08,
				  &FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Cnt_T_u08,
				  &FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Cnt_T_u08,
				  &FordVehCllsnMtgtnByBrkgLgtDstRaw_Cnt_T_u16,
				  &FordVehCllsnMtgtnByBrkgLatDstRaw_Cnt_T_u16,
				  &FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Cnt_T_u16,
				  &FordVehCllsnMtgtnByBrkgRelLatVelRaw_Cnt_T_u16,
				  &FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Cnt_T_u08,
				  &FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl,
	              &FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl,
	              &FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl,
	              &FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl,
	              &FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl);
		
		
		if(DiagEna_Cnt_T_logl != FALSE)
		{
		    Enad(FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl,
	                FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl,
	                BusHiSpdLgtDstInvldThd_Cnt_T_u16,
					BusHiSpdLatDstInvldThd_Cnt_T_u16);
			Enad2(FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl,
	                FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl,
	                FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl,
					BusHiSpdTiToCllsnInvldThd_Cnt_T_u16,
					BusHiSpdRelLgtVelInvldThd_Cnt_T_u16,
					BusHiSpdRelLatVelInvldThd_Cnt_T_u16);
		}
		else
		{
			/* NtcPassTmrRst */
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
	
			*Rte_Pim_MissMsgPassdRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
			
			
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15B,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15C,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15D,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15E,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15F,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15A,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
		}	
		
		if(ClrDiagcFlgProxyEna_Cnt_T_logl != FALSE)
		{
			/*TmrRst*/
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
	
			*Rte_Pim_MissMsgPassdRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
		}
		else
		{
			/* Do nothing*/
		}
		
		
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
		*Rte_Pim_MissMsgFaildRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_ImgProcrModlAVldMissRefTi() = GetRefTmr_Cnt_T_u32;
		
	}
	
	FordVehCllsnMtgtnByBrkgLgtDstRaw_Cnt_T_u16 = Lim_u16(FordVehCllsnMtgtnByBrkgLgtDstRaw_Cnt_T_u16,DSTRAWMINVAL_CNT_U16,LGTDSTRAWMAXVAL_CNT_U16);
	FordVehCllsnMtgtnByBrkgLatDstRaw_Cnt_T_u16 = Lim_u16(FordVehCllsnMtgtnByBrkgLatDstRaw_Cnt_T_u16,DSTRAWMINVAL_CNT_U16,LATDSTRAWMAXVAL_CNT_U16);
	FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Cnt_T_u16 = Lim_u16(FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Cnt_T_u16,VELRAWMINVAL_CNT_U16,RELLGTVELRAWMAXVAL_CNT_U16);
	FordVehCllsnMtgtnByBrkgRelLatVelRaw_Cnt_T_u16 = Lim_u16(FordVehCllsnMtgtnByBrkgRelLatVelRaw_Cnt_T_u16,VELRAWMINVAL_CNT_U16,RELLATVELRAWMAXVAL_CNT_U16);
	FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Cnt_T_u08 = Lim_u08(FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Cnt_T_u08,TITOCLLSNRAWMIN_CNT_U08,TITOCLLSNRAWMAX_CNT_U08);
	
	*Rte_Pim_FordVehEvasSteerAssiEnadReqRawPrev() = FordVehEvasSteerAssiEnadReqRaw_Cnt_T_u08;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev() = FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Cnt_T_u08;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstRawPrev() = FordVehCllsnMtgtnByBrkgLgtDstRaw_Cnt_T_u16;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstRawPrev() = FordVehCllsnMtgtnByBrkgLatDstRaw_Cnt_T_u16;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev() = FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Cnt_T_u16;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelRawPrev() = FordVehCllsnMtgtnByBrkgRelLatVelRaw_Cnt_T_u16;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev() = FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Cnt_T_u08;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev() = FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Cnt_T_u08;
	*Rte_Pim_FordVehEvasSteerAssiImgProcrModlAVldPrev() = FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl;
	
	
	
	/** Write Outputs to RTE **/		
	/* Three of the u08 outputs are not limited as the CAN bus takes care of them. */
	(void) Rte_Write_FordVehCllsnMtgtnByBrkgLatDstRaw_Val(FordVehCllsnMtgtnByBrkgLatDstRaw_Cnt_T_u16);
    (void) Rte_Write_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val(FordVehCllsnMtgtnByBrkgLgtDstRaw_Cnt_T_u16);
    (void) Rte_Write_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val(FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Cnt_T_u08);
    (void) Rte_Write_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val(FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Cnt_T_u08);
    (void) Rte_Write_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val(FordVehCllsnMtgtnByBrkgRelLatVelRaw_Cnt_T_u16);
    (void) Rte_Write_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val(FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Cnt_T_u16);
    (void) Rte_Write_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val(FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Cnt_T_u08);
    (void) Rte_Write_FordVehEvasSteerAssiEnadReqRaw_Val(FordVehEvasSteerAssiEnadReqRaw_Cnt_T_u08);
    (void) Rte_Write_FordVehEvasSteerAssiImgProcrModlAVld_Logl(FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl);	
	
	

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordMsg3D7BusHiSpd_STOP_SEC_CODE
#include "FordMsg3D7BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************************************************
  * Name         :  NtcEnab
  * Description  :  Implementation of 'NtcEnab' subfunction
  * Inputs        :  FordEvasSteerAssiEnad_Cnt_T_logl,FordCanDtcInhb_Cnt_T_logl
  *			        ClrDiagcFlgProxy_Cnt_T_u08		
  * Outputs       : DiagEna_Cnt_T_logl
  *                 ClrDiagcFlgProxyEna_Cnt_T_logl
  * Usage Notes  :  None
 *****************************************************************************************************************/	 
 
 static FUNC(void, FordMsg3D7BusHiSpd_CODE)NtcEnab(VAR(boolean, AUTOMATIC)FordEvasSteerAssiEnad_Cnt_T_logl,
												  VAR(boolean, AUTOMATIC)FordCanDtcInhb_Cnt_T_logl,
												  VAR(uint8, AUTOMATIC)ClrDiagcFlgProxy_Cnt_T_u08,
			                                      P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)DiagEna_Cnt_T_logl,
			                                      P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)ClrDiagcFlgProxyEna_Cnt_T_logl)
 {
	if ((FordCanDtcInhb_Cnt_T_logl == FALSE) && (FordEvasSteerAssiEnad_Cnt_T_logl == TRUE))
		 
	{
		*DiagEna_Cnt_T_logl = TRUE;
	}
    else
    {
		*DiagEna_Cnt_T_logl = FALSE;
    }	

	if (ClrDiagcFlgProxy_Cnt_T_u08 != *Rte_Pim_ClrDiagcFlgProxyPrev())
	{
		*ClrDiagcFlgProxyEna_Cnt_T_logl = TRUE;
	}
	else
	{
		*ClrDiagcFlgProxyEna_Cnt_T_logl = FALSE;
	}
	*Rte_Pim_ClrDiagcFlgProxyPrev() = ClrDiagcFlgProxy_Cnt_T_u08;
 }
	

/*****************************************************************************************************************
  * Name          : MsgMiss
  * Description   : Implementation of 'MsgMiss' subfunction
  * Inputs        : DiagEna_Cnt_T_logl,BusHiSpdMissThd_Cnt_T_u16
  			        ClrDiagcFlgProxyEna_Cnt_T_logl		
  * Outputs       : FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl,FordVehEvasSteerAssiEnadReqRaw_Cnt_T_u08,FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Cnt_T_u08,
                    FordVehCllsnMtgtnByBrkgLgtDstRaw_Cnt_T_u16,FordVehCllsnMtgtnByBrkgLatDstRaw_Cnt_T_u16,FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Cnt_T_u16,
					FordVehCllsnMtgtnByBrkgRelLatVelRaw_Cnt_T_u16,FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Cnt_T_u08,FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Cnt_T_u08                  
  * Usage Notes   : None
 *****************************************************************************************************************/	 
static FUNC(void, FordMsg3D7BusHiSpd_CODE)MsgMiss(VAR(boolean, AUTOMATIC)DiagEna_Cnt_T_logl,
		                                           VAR(uint16, AUTOMATIC)BusHiSpdMissThd_Cnt_T_u16,
												   VAR(boolean, AUTOMATIC)ClrDiagcFlgProxyEna_Cnt_T_logl,
		                                           P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl,
		                                           P2VAR(uint8, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehEvasSteerAssiEnadReqRaw_Cnt_T_u08,
		                                           P2VAR(uint8, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Cnt_T_u08,
		                                           P2VAR(uint16, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgLgtDstRaw_Cnt_T_u16,
		                                           P2VAR(uint16, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgLatDstRaw_Cnt_T_u16,
		                                           P2VAR(uint16, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Cnt_T_u16,
		                                           P2VAR(uint16, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgRelLatVelRaw_Cnt_T_u16,
		                                           P2VAR(uint8, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Cnt_T_u08,
		                                           P2VAR(uint8, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Cnt_T_u08)
 
 {  
    VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) GetRefTmr_Cnt_T_u32;
	
    /**Start of MsgMiss**/
	if(DiagEna_Cnt_T_logl != FALSE)
	{
		/*Ntc0X15AFail*/
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MissMsgFaildRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)BusHiSpdMissThd_Cnt_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15A,0U,NTCSTS_FAILD,DEBSTEP_CNT_U16);
		}
		else
		{
		/*NtcPassTmrRst*/
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgFaildRefTi());
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15A,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
		}
	}
	
	if (ClrDiagcFlgProxyEna_Cnt_T_logl != FALSE)
	{
		/*TmrRst*/
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgFaildRefTi());
	}	
	else
	{
		/*Do nothing*/
	}

	
	(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15B,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
	(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15C,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
	(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15D,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
	(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15E,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
	(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15F,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
	
	
	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_ImgProcrModlAVldMissRefTi(),&TiSpan_Cnt_T_u32);
	if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3D7BusHiSpdImgProcrModlAVldMissThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		/*SetFalse*/
		*FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl = FALSE;
	}
	else
	{
		/*PrevValue*/
		*FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl = *Rte_Pim_FordVehEvasSteerAssiImgProcrModlAVldPrev();
	
	}
	
	
    *FordVehEvasSteerAssiEnadReqRaw_Cnt_T_u08 = *Rte_Pim_FordVehEvasSteerAssiEnadReqRawPrev();
	*FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Cnt_T_u08 = *Rte_Pim_FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev();
	*FordVehCllsnMtgtnByBrkgLgtDstRaw_Cnt_T_u16 = *Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstRawPrev();
	*FordVehCllsnMtgtnByBrkgLatDstRaw_Cnt_T_u16 = *Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstRawPrev();
	*FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Cnt_T_u16 = *Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev();
	*FordVehCllsnMtgtnByBrkgRelLatVelRaw_Cnt_T_u16 = *Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelRawPrev();
	*FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Cnt_T_u08 = *Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev();
	*FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Cnt_T_u08 = *Rte_Pim_FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev();
	
	
	(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
	
	*Rte_Pim_MissMsgPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_EvasSteerAssiImgProcrModlAVldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_LgtDstRawVldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_LatDstRawVldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_RelLgtVelRawVldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_RelLatVelRawVldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_TiToCllsnRawVldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	/**End of MsgMiss**/
 } 
 
/*****************************************************************************************************************
  * Name          : OutpProcd
  * Description   : Implementation of 'OutpProcd' subfunction
  * Inputs        : Ford_EsaEnbl_D2_Rq_Cnt_T_enum,Ford_CmbbObjClass_D_Stat_Cnt_T_enum,Ford_CmbbObjConfdnc_D_Stat_Cnt_T_enum,
                    Ford_CmbbObjDistLong_L_Actl_Cnt_T_enum,Ford_CmbbObjDistLat_L_Actl_Cnt_T_enum,Ford_CmbbObjRelLong_V_Actl_Cnt_T_enum,
					Ford_CmbbObjRelLat_V_Actl_Cnt_T_enum,Ford_CmbbObjColl_T_Actl_Cnt_T_enum
  * Outputs       : FordVehEvasSteerAssiEnadReqRaw_Cnt_T_u08,FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Cnt_T_u08,FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Cnt_T_u08,
                    FordVehCllsnMtgtnByBrkgLgtDstRaw_Cnt_T_u16,FordVehCllsnMtgtnByBrkgLatDstRaw_Cnt_T_u16,FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Cnt_T_u16,
					FordVehCllsnMtgtnByBrkgRelLatVelRaw_Cnt_T_u16,FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Cnt_T_u08,FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl,
					FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl,FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl,FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl,
					FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl
  * Usage Notes   : None
 *****************************************************************************************************************/	
static FUNC(void, FordMsg3D7BusHiSpd_CODE) OutpProcd(VAR(Ford_EsaEnbl_D2_Rq, AUTOMATIC)Ford_EsaEnbl_D2_Rq_Cnt_T_enum,
				  VAR(Ford_CmbbObjClass_D_Stat, AUTOMATIC)Ford_CmbbObjClass_D_Stat_Cnt_T_enum,
				  VAR(Ford_CmbbObjConfdnc_D_Stat, AUTOMATIC)Ford_CmbbObjConfdnc_D_Stat_Cnt_T_enum,
				  VAR(Ford_CmbbObjDistLong_L_Actl, AUTOMATIC)Ford_CmbbObjDistLong_L_Actl_Cnt_T_enum,
				  VAR(Ford_CmbbObjDistLat_L_Actl, AUTOMATIC)Ford_CmbbObjDistLat_L_Actl_Cnt_T_enum,
				  VAR(Ford_CmbbObjRelLong_V_Actl, AUTOMATIC)Ford_CmbbObjRelLong_V_Actl_Cnt_T_enum,
				  VAR(Ford_CmbbObjRelLat_V_Actl, AUTOMATIC)Ford_CmbbObjRelLat_V_Actl_Cnt_T_enum,
				  VAR(Ford_CmbbObjColl_T_Actl, AUTOMATIC)Ford_CmbbObjColl_T_Actl_Cnt_T_enum,
				  P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl,
				  P2VAR(uint8, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehEvasSteerAssiEnadReqRaw_Cnt_T_u08,
				  P2VAR(uint8, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Cnt_T_u08,
				  P2VAR(uint8, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Cnt_T_u08,
				  P2VAR(uint16, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgLgtDstRaw_Cnt_T_u16,
				  P2VAR(uint16, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgLatDstRaw_Cnt_T_u16,
				  P2VAR(uint16, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Cnt_T_u16,
				  P2VAR(uint16, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgRelLatVelRaw_Cnt_T_u16,
				  P2VAR(uint8, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Cnt_T_u08,
				  P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl,
	              P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl,
	              P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl,
	              P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl,
	              P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl)
 {
	
    VAR(boolean, AUTOMATIC) VldChkFlg_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) ImgProcrModlAVldPassdElpdTi_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) LgtDstRawVldFaildElpdTi_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) LatDstRawVldFaildElpdTi_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) RelLgtVelRawVldFaildElpdTi_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) RelLatVelRawVldFaildElpdTi_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) TiToCllsnRawVldFaildElpdTi_Cnt_T_logl;
	/*SigProcd*/
	/**Start of SigProcd**/
	/* FordVehEvasSteerAssiEnadReqRawProcd */
	/** Enum is casted to uint8 for coding standards compliance. Refer to MDD for more information **/
	*FordVehEvasSteerAssiEnadReqRaw_Cnt_T_u08 = (uint8)Ford_EsaEnbl_D2_Rq_Cnt_T_enum;
	
	/* FordVehCllsnMtgtnByBrkgObjTypClassnRawProcd */
	*FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Cnt_T_u08 = (uint8)Ford_CmbbObjClass_D_Stat_Cnt_T_enum;
	
	/* FordVehCllsnMtgtnByBrkgObjDataConfLvlRawProcd */
	*FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Cnt_T_u08 = (uint8)Ford_CmbbObjConfdnc_D_Stat_Cnt_T_enum;
	
	/* FordVehCllsnMtgtnByBrkgLgtDstRawProcd */
	*FordVehCllsnMtgtnByBrkgLgtDstRaw_Cnt_T_u16 = (uint16)Ford_CmbbObjDistLong_L_Actl_Cnt_T_enum;
	if(((uint16)Ford_CmbbObjDistLong_L_Actl_Cnt_T_enum) <= FORDVEHCLLSNMTGTNBYBRKGLGTRAWTHD_CNT_U16)
	{
		*FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl = TRUE;
		
	}
	else
	{
		*FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl = FALSE;
	}
	
	/* FordVehCllsnMtgtnByBrkgLatDstRawProcd */
	*FordVehCllsnMtgtnByBrkgLatDstRaw_Cnt_T_u16 = (uint16)Ford_CmbbObjDistLat_L_Actl_Cnt_T_enum;
	if(((uint16)Ford_CmbbObjDistLat_L_Actl_Cnt_T_enum) <= FORDVEHCLLSNMTGTNBYBRKGLATRAWTHD_CNT_U16)
	{
		*FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl = TRUE;
		
	}
	else
	{
		*FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl = FALSE;
	}
	
	/*FordVehCllsnMtgtnByBrkgRelLgtVelRawProcd */
	*FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Cnt_T_u16 = (uint16)Ford_CmbbObjRelLong_V_Actl_Cnt_T_enum;
	if(((uint16)Ford_CmbbObjRelLong_V_Actl_Cnt_T_enum) <= FORDVEHCLLSNMTGTNBYBRKGLGTRAWTHD_CNT_U16)
	{
		*FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl = TRUE;
		
	}
	else
	{
		*FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl = FALSE;
	}
	
	/* FordVehCllsnMtgtnByBrkgRelLatVelRawProcd */
	*FordVehCllsnMtgtnByBrkgRelLatVelRaw_Cnt_T_u16 = (uint16)Ford_CmbbObjRelLat_V_Actl_Cnt_T_enum;
	if(((uint16)Ford_CmbbObjRelLat_V_Actl_Cnt_T_enum) <= FORDVEHCLLSNMTGTNBYBRKGLATRAWTHD_CNT_U16)
	{
		*FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl = TRUE;
		
	}
	else
	{
		*FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl = FALSE;
	}
	
	/* FordVehCllsnMtgtnByBrkgTiToCllsnRawProcd */
	*FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Cnt_T_u08 = (uint8)Ford_CmbbObjColl_T_Actl_Cnt_T_enum;
	if(Ford_CmbbObjColl_T_Actl_Cnt_T_enum <= FORDVEHCLLSNMTGTNBYBRKGTITOCLLSNRAWTHD_CNT_U08)
	{
		*FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl = TRUE;
		
	}
	else
	{
		*FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl = FALSE;
	}
	
	if((*FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl == TRUE) && (*FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl == TRUE) &&
							(*FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl == TRUE) && (*FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl == TRUE) &&
							(*FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl == TRUE))
	{
		
		VldChkFlg_Cnt_T_logl = TRUE;
	
	}
	
	else
	{
		VldChkFlg_Cnt_T_logl = FALSE;
		
	}
	
	/**End of SigProcd**/
	
	/* VldElpdTi */
	VldElpdTi(&ImgProcrModlAVldPassdElpdTi_Cnt_T_logl,
	          &LgtDstRawVldFaildElpdTi_Cnt_T_logl,
			  &LatDstRawVldFaildElpdTi_Cnt_T_logl,
			  &RelLgtVelRawVldFaildElpdTi_Cnt_T_logl,
			  &RelLatVelRawVldFaildElpdTi_Cnt_T_logl,
			  &TiToCllsnRawVldFaildElpdTi_Cnt_T_logl);
	
	if(TRUE == *Rte_Pim_FirstTranVldFlg())
	{
		/* FirstTran */
		FirstTran(VldChkFlg_Cnt_T_logl,
		          FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl);
		
	}
	else
	{
		/* ChkElpdTi */
		ChkElpdTi(VldChkFlg_Cnt_T_logl,
		          ImgProcrModlAVldPassdElpdTi_Cnt_T_logl,
		          *FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl,
				  LgtDstRawVldFaildElpdTi_Cnt_T_logl,
                  *FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl,
                  LatDstRawVldFaildElpdTi_Cnt_T_logl,
                  *FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl,
                  RelLgtVelRawVldFaildElpdTi_Cnt_T_logl,
                  *FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl,
                  RelLatVelRawVldFaildElpdTi_Cnt_T_logl,
                  *FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl,
                  TiToCllsnRawVldFaildElpdTi_Cnt_T_logl,
                  FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl);
		
	}
	
 }

/*****************************************************************************************************************
  * Name          : VldElpdTi
  * Description   : Implementation of 'VldElpdTi' subfunction
  * Inputs        : None
  * Outputs       : ImgProcrModlAVldPassdElpdTi_Cnt_T_logl,LgtDstRawVldFaildElpdTi_Cnt_T_logl,LatDstRawVldFaildElpdTi_Cnt_T_logl
                    RelLgtVelRawVldFaildElpdTi_Cnt_T_logl,RelLatVelRawVldFaildElpdTi_Cnt_T_logl,TiToCllsnRawVldFaildElpdTi_Cnt_T_logl
  * Usage Notes   : None
 *****************************************************************************************************************/	

static FUNC(void, FordMsg3D7BusHiSpd_CODE) VldElpdTi(P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) ImgProcrModlAVldPassdElpdTi_Cnt_T_logl,
	                                                 P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) LgtDstRawVldFaildElpdTi_Cnt_T_logl,
	                                                 P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) LatDstRawVldFaildElpdTi_Cnt_T_logl,
	                                                 P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) RelLgtVelRawVldFaildElpdTi_Cnt_T_logl,
	                                                 P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) RelLatVelRawVldFaildElpdTi_Cnt_T_logl,
	                                                 P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE) TiToCllsnRawVldFaildElpdTi_Cnt_T_logl)
 {
	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
    /**Start of VldElpdTi**/
 
	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_EvasSteerAssiImgProcrModlAVldPassdRefTi(),&TiSpan_Cnt_T_u32);
	if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*ImgProcrModlAVldPassdElpdTi_Cnt_T_logl = TRUE;
		
	}
	else
	{
		*ImgProcrModlAVldPassdElpdTi_Cnt_T_logl = FALSE;
	}
	
	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LgtDstRawVldFaildRefTi(),&TiSpan_Cnt_T_u32);
	if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*LgtDstRawVldFaildElpdTi_Cnt_T_logl = TRUE;
		
	}
	else
	{
		*LgtDstRawVldFaildElpdTi_Cnt_T_logl = FALSE;
	}
	
	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LatDstRawVldFaildRefTi(),&TiSpan_Cnt_T_u32);
	if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3D7BusHiSpdLatDstRawVldFaildThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*LatDstRawVldFaildElpdTi_Cnt_T_logl = TRUE;
		
	}
	else
	{
		*LatDstRawVldFaildElpdTi_Cnt_T_logl = FALSE;
	}
	
	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_RelLgtVelRawVldFaildRefTi(),&TiSpan_Cnt_T_u32);
	if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*RelLgtVelRawVldFaildElpdTi_Cnt_T_logl = TRUE;
		
	}
	else
	{
		*RelLgtVelRawVldFaildElpdTi_Cnt_T_logl = FALSE;
	}
	
	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_RelLatVelRawVldFaildRefTi(),&TiSpan_Cnt_T_u32);
	if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*RelLatVelRawVldFaildElpdTi_Cnt_T_logl = TRUE;
		
	}
	else
	{
		*RelLatVelRawVldFaildElpdTi_Cnt_T_logl = FALSE;
	}
	
	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_TiToCllsnRawVldFaildRefTi(),&TiSpan_Cnt_T_u32);
	if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*TiToCllsnRawVldFaildElpdTi_Cnt_T_logl = TRUE;
		
	}
	else
	{
		*TiToCllsnRawVldFaildElpdTi_Cnt_T_logl = FALSE;
	}
	
	/**End of VldElpdTi**/
 }
 
/*****************************************************************************************************************
  * Name          : FirstTran
  * Description   : Implementation of 'FirstTran' subfunction
  * Inputs        : VldChkFlg_Cnt_T_logl
  * Outputs       : FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl
  * Usage Notes   : None
 *****************************************************************************************************************/	
static FUNC(void, FordMsg3D7BusHiSpd_CODE) FirstTran(VAR(boolean, AUTOMATIC)VldChkFlg_Cnt_T_logl,
                                                     P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl )
 {
	 
	*Rte_Pim_FirstTranVldFlg() = FALSE;
	if(VldChkFlg_Cnt_T_logl != FALSE)
	{
		/* VldTrue */
		*FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl = TRUE;
	}
	else
	{
		/* VldPrev */
		*FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl = *Rte_Pim_FordVehEvasSteerAssiImgProcrModlAVldPrev();
	}
 }
/*****************************************************************************************************************
  * Name          : ChkElpdTi
  * Description   : Implementation of 'ChkElpdTi' subfunction
  * Inputs        : VldChkFlg_Cnt_T_logl,ImgProcrModlAVldPassdElpdTi_Cnt_T_logl,FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl,
                    LgtDstRawVldFaildElpdTi_Cnt_T_logl,FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl,LatDstRawVldFaildElpdTi_Cnt_T_logl,
					FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl,RelLgtVelRawVldFaildElpdTi_Cnt_T_logl,FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl,
					RelLatVelRawVldFaildElpdTi_Cnt_T_logl,FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl,TiToCllsnRawVldFaildElpdTi_Cnt_T_logl
  * Outputs       : FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl
  * Usage Notes   : None
 *****************************************************************************************************************/	
static FUNC(void, FordMsg3D7BusHiSpd_CODE) ChkElpdTi(VAR(boolean, AUTOMATIC)VldChkFlg_Cnt_T_logl,
		                                             VAR(boolean, AUTOMATIC)ImgProcrModlAVldPassdElpdTi_Cnt_T_logl,
		                                             VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl,
				                                     VAR(boolean, AUTOMATIC)LgtDstRawVldFaildElpdTi_Cnt_T_logl,
                                                     VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl,
                                                     VAR(boolean, AUTOMATIC)LatDstRawVldFaildElpdTi_Cnt_T_logl,
                                                     VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl,
                                                     VAR(boolean, AUTOMATIC)RelLgtVelRawVldFaildElpdTi_Cnt_T_logl,
                                                     VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl,
                                                     VAR(boolean, AUTOMATIC)RelLatVelRawVldFaildElpdTi_Cnt_T_logl,
                                                     VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl,
                                                     VAR(boolean, AUTOMATIC)TiToCllsnRawVldFaildElpdTi_Cnt_T_logl,
                                                     P2VAR(boolean, AUTOMATIC, FordMsg3D7BusHiSpd_CODE)FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl)
 {
	VAR(boolean, AUTOMATIC) LgtDstRawInvld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) LatDstRawInvld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) RelLgtVelRawInvld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) RelLatVelRawInvld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) TiToCllsnRawInvld_Cnt_T_logl; 
	VAR(uint32, AUTOMATIC) GetRefTmr_Cnt_T_u32;
	if(VldChkFlg_Cnt_T_logl != FALSE)
	{
		/* VldTrue */
		if(ImgProcrModlAVldPassdElpdTi_Cnt_T_logl != FALSE)
		{
			*FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl = TRUE;
		}
	    else
		{
			*FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl = *Rte_Pim_FordVehEvasSteerAssiImgProcrModlAVldPrev();
		}

			
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
		*Rte_Pim_LgtDstRawVldFaildRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_LatDstRawVldFaildRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_RelLgtVelRawVldFaildRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_RelLatVelRawVldFaildRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_TiToCllsnRawVldFaildRefTi() = GetRefTmr_Cnt_T_u32;
		
	}
	else
	{
		/* VldSigSetToFalse */
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_EvasSteerAssiImgProcrModlAVldPassdRefTi());
		if (FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl != FALSE)
		{
			/* LgtDstRawInvldSetToFalse */
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LgtDstRawVldFaildRefTi());
			LgtDstRawInvld_Cnt_T_logl = FALSE;
			
		}
		else
		{
			/* LgtDstRawInvld */
			
			LgtDstRawInvld_Cnt_T_logl = LgtDstRawVldFaildElpdTi_Cnt_T_logl;
		}
		if (FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl != FALSE)
		{
			/* LatDstRawInvldSetToFalse */
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LatDstRawVldFaildRefTi());
			LatDstRawInvld_Cnt_T_logl = FALSE;
		}
		else
		{
			/* LatDstRawInvld */
			LatDstRawInvld_Cnt_T_logl = LatDstRawVldFaildElpdTi_Cnt_T_logl;
		}
		
		if(FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl != FALSE)
		{
			/* RelLgtVelRawSetToFalse */
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_RelLgtVelRawVldFaildRefTi());
			RelLgtVelRawInvld_Cnt_T_logl = FALSE;
		}
		else
		{
			/*RelLgtVelRawInvld */
			RelLgtVelRawInvld_Cnt_T_logl = RelLgtVelRawVldFaildElpdTi_Cnt_T_logl;
		}
		if (FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl != FALSE)
		{
			/* RelLatVelRawSetToFalse */
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_RelLatVelRawVldFaildRefTi());
			RelLatVelRawInvld_Cnt_T_logl = FALSE;
		}
		else
		{
			/* RelLatVelRawInvld */
			RelLatVelRawInvld_Cnt_T_logl = RelLatVelRawVldFaildElpdTi_Cnt_T_logl;
		}
		if (FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl != FALSE)
		{
			/* TiToCllsnRawPrev */
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_TiToCllsnRawVldFaildRefTi());
			TiToCllsnRawInvld_Cnt_T_logl = FALSE;
		}
		else
		{
			/* TiToCllsnRawInvld */
			TiToCllsnRawInvld_Cnt_T_logl = TiToCllsnRawVldFaildElpdTi_Cnt_T_logl;
		}
		
		if ((LgtDstRawInvld_Cnt_T_logl == TRUE) || (LatDstRawInvld_Cnt_T_logl == TRUE) || (RelLgtVelRawInvld_Cnt_T_logl == TRUE) || (RelLatVelRawInvld_Cnt_T_logl == TRUE) || (TiToCllsnRawInvld_Cnt_T_logl == TRUE))
        {
			/* SetSigVldFalse */
			*FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl = FALSE;
		}
		else
		{
			/* VldPrev */
			*FordVehEvasSteerAssiImgProcrModlAVld_Cnt_T_logl = *Rte_Pim_FordVehEvasSteerAssiImgProcrModlAVldPrev();
		}
	}
 }	
 
/*****************************************************************************************************************
  * Name         :  Enad
  * Description  :  Implementation of 'Enad' subfunction
  * Inputs       :  FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl,FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl,BusHiSpdLgtDstInvldThd_Cnt_T_u16,
					BusHiSpdLatDstInvldThd_Cnt_T_u16
  * Outputs      :  None
  * Usage Notes  :  None
 *****************************************************************************************************************/	
 
static FUNC(void, FordMsg3D7BusHiSpd_CODE) Enad(VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl,
	                                                VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl,
	                                                VAR(uint16, AUTOMATIC)BusHiSpdLgtDstInvldThd_Cnt_T_u16,
					                                VAR(uint16, AUTOMATIC)BusHiSpdLatDstInvldThd_Cnt_T_u16)
 {
	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	/* MissMsgNtcPass */
	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MissMsgPassdRefTi(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3D7BusHiSpdMissMsgPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15A,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
	}

	if (FordVehCllsnMtgtnByBrkgLgtDstRawInp_Cnt_T_logl != FALSE)
	{
		/* Ntc0X15BPass */
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3D7BusHiSpdLgtDstInvldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15B,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
	    }
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi());
	}
	else
	{
		/* Ntc0X15BFail */
		
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)BusHiSpdLgtDstInvldThd_Cnt_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15B,0U,NTCSTS_FAILD,DEBSTEP_CNT_U16);
	    }
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi());
	}
	if (FordVehCllsnMtgtnByBrkgLatDstRawInp_Cnt_T_logl != FALSE)
	{
		/* Ntc0X15CPass */
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3D7BusHiSpdLatDstInvldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15C,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
	    }
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi());
	}
	else
	{
		/* Ntc0X15CFail */
		
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)BusHiSpdLatDstInvldThd_Cnt_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15C,0U,NTCSTS_FAILD,DEBSTEP_CNT_U16);
	    }
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi());
	}
	
 }
 
/*****************************************************************************************************************
  * Name         :  Enad2
  * Description  :  Implementation of 'Enad2' subfunction
  * Inputs       :  FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl,FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl,FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl,
					BusHiSpdTiToCllsnInvldThd_Cnt_T_u16,BusHiSpdRelLgtVelInvldThd_Cnt_T_u16,BusHiSpdRelLatVelInvldThd_Cnt_T_u16		
  * Outputs      :  None
  * Usage Notes  :  None
 *****************************************************************************************************************/	
static FUNC(void, FordMsg3D7BusHiSpd_CODE) Enad2(VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl,
	                                                VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl,
	                                                VAR(boolean, AUTOMATIC)FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl,
													VAR(uint16, AUTOMATIC)BusHiSpdTiToCllsnInvldThd_Cnt_T_u16,
					                                VAR(uint16, AUTOMATIC)BusHiSpdRelLgtVelInvldThd_Cnt_T_u16,
					                                VAR(uint16, AUTOMATIC)BusHiSpdRelLatVelInvldThd_Cnt_T_u16)
{
	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	if (FordVehCllsnMtgtnByBrkgTiToCllsnRawInp_Cnt_T_logl != FALSE)
	{
		/* Ntc0X15FPass */
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15F,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
	    }
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi());
	}
	else
	{
		/* Ntc0X15FFail */
		
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)BusHiSpdTiToCllsnInvldThd_Cnt_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15F,0U,NTCSTS_FAILD,DEBSTEP_CNT_U16);
	    }
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi());
	}
	
	if (FordVehCllsnMtgtnByBrkgRelLgtVelRawInp_Cnt_T_logl != FALSE)
	{
		/* Ntc0X15DPass */
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15D,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
	    }
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi());
	}
	else
	{
		/* Ntc0X15DFail */
		
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)BusHiSpdRelLgtVelInvldThd_Cnt_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15D,0U,NTCSTS_FAILD,DEBSTEP_CNT_U16);
	    }
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi());
	}
	if (FordVehCllsnMtgtnByBrkgRelLatVelRawInp_Cnt_T_logl != FALSE)
	{
		/* Ntc0X15EPass */
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3D7BusHiSpdRelLatVelInvldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15E,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
	    }
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi());
	}
	else
	{
		/* Ntc0X15EFail */
		
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)BusHiSpdRelLatVelInvldThd_Cnt_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X15E,0U,NTCSTS_FAILD,DEBSTEP_CNT_U16);
	    }
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi());
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
