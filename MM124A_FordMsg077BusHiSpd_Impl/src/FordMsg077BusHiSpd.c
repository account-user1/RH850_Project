/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordMsg077BusHiSpd.c
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM124A_FordMsg077BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg077BusHiSpd
 *  Generated at:  Fri May  4 12:39:43 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordMsg077BusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/**********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name  : FordMsg077BusHiSpd.c
* Module Description: FordMsg077BusHiSpd.c - MM124A
* Project           : CBD
* Author            : Shishir Holenarasipura
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz5334 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  --------------------------------------------------------------------------  ------------
* 04/28/18   1       SNH  		Initial Version                                                              EA4#20138
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
 * u16p0
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_FordMsg077BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"
/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Read, Rte_Write and SetNtcSts */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void function; Rte generation adds standard return type but no error information is returned.
                                              [GetRefTmr100MicroSec32bit, GetTiSpan100MicroSec32bit] */

/********************************************* Embedded Local Constants **********************************************/
#define BUSHISPDFIXDTITHD_MILLISEC_U16 						((uint16)5000U)
#define CNVMILLISECTOCNT_CNTPERMILLISEC_U16 				((uint16)10U)
#define DEBSTEP_CNT_U16 									((uint16)65535U)
#define DTCENA_CNT_LGC 										(0U)
#define FEATACTV_CNT_LGC 									(1U)
#define FORDVEHACMPDFLT_MTRPERSECSQD_F32 					(17.835F)
#define FORDVEHACMPDOFFS_MTRPERSECSQD_F32 					(17.9F)
#define FORDVEHACMPDRAWMIN_MTRPERSECSQD_F32 				(-17.9F)
#define FORDVEHACMPDRAW_CNT_U16 							((uint16)1022U)
#define FORDVEHACMPDSCAGFAC_MTRPERSECSQDPERCNT_F32 			(0.035F)
#define FORDVEHACMPD_MTRPERSECSQD_F32 						(17.835F)
#define FORDVEHLATACMPDRAWFLT_CNT_U16 						((uint16)1023U)
#define FORDVEHSPDOVERGNDMAX_KPH_F32 						(655.33F)
#define FORDVEHSPDOVERGNDMIN_KPH_F32 						(0.0F)
#define FORDVEHSPDOVERGNDRAWINVLD_CNT_U16 					((uint16)65535U)
#define FORDVEHSPDOVERGNDRAWUKWN_CNT_U16 					((uint16)65534U)
#define FORDVEHSPDOVERGNDRAW_CNT_U16 						((uint16)0U)
#define FORDVEHSPDOVERGNDSCAGFAC_KPHPERCNT_F32 				(0.01F)
#define FORDVEHYAWRATECMPDMAX_HWDEGPERSEC_F32 				(74.92659F)
#define FORDVEHYAWRATECMPDMIN_HWDEGPERSEC_F32 				(-75.0F)
#define FORDVEHYAWRATECMPDOFFS_HWDEGPERSEC_F32 				(75.0F)
#define FORDVEHYAWRATECMPDRAWFLT_CNT_U16 					((uint16)4095U)
#define FORDVEHYAWRATECMPDRAW_CNT_U16 						((uint16)4094U)
#define FORDVEHYAWRATECMPDSCAGFAC_HWDEGPERSECPERCNT_F32 	(0.3663F)
#define FORDVEHYAWRATECMPD_HWDEGPERSEC_F32 					(74.92659F)
#define MODSEL_CNT_U08 										((uint8)1U)

/******************************************** Local Function Prototypes **********************************************/
static FUNC(void, FordMsg077BusHiSpd_CODE)DiagEna(VAR(boolean, AUTOMATIC) FordTqSteerCmpEnad_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordBrkOscnRednEnad_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordLaneKeepAssiEnad_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordTrfcJamAssiEnad_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordLaneCentrAssiEnad_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordPullDriftCmpEnad_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordTrlrBackUpAssiEnad_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordEvasSteerAssiEnad_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordCanDtcInhb_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordClrDiagcFlgProxy_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)MissMsgDiagEna_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLatACmpdInvldDiagEna_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLgtACmpdInvldDiagEna_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehSpdOverGndInvldDiagEna_Cnt_T_logl);
	
static FUNC(void, FordMsg077BusHiSpd_CODE)CalSeln(VAR(uint8, AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)BusHiSpdMissThd_Cnt_T_u16,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)BusHiSpdLatACmpdInvldThd_Cnt_T_u16,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)BusHiSpdLgtACmpdInvldThd_Cnt_T_u16,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)BusHiSpdYawRateCmpdInvldThd_Cnt_T_u16,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)BusHiSpdOverGndInvldThd_Cnt_T_u16);
													
static FUNC(void, FordMsg077BusHiSpd_CODE)MissMsg(VAR(boolean, AUTOMATIC)MissMsgDiagEna_Cnt_T_logl,
													VAR(uint16, AUTOMATIC)BusHiSpdMissThd_Cnt_T_u16,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLatACmpdRaw_Cnt_T_u16,
													P2VAR(float32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLatACmpd_Cnt_T_f32,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLatACmpdVld_Cnt_T_logl,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLgtACmpdRaw_Cnt_T_u16,
													P2VAR(float32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLgtACmpd_Cnt_T_f32,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLgtACmpdVld_Cnt_T_logl,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehYawRateCmpdRaw_Cnt_T_u16,
													P2VAR(float32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehYawRateCmpd_Cnt_T_f32,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehYawRateCmpdVld_Cnt_T_logl,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehSpdOverGndRaw_Cnt_T_u16,
													P2VAR(float32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehSpdOverGnd_Kph_T_f32,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehSpdOverGndVld_Cnt_T_logl);

static FUNC(void, FordMsg077BusHiSpd_CODE)OutProcg(VAR(Ford_VehLatComp_A_Actl, AUTOMATIC) Ford_VehLatComp_A_Actl_Cnt_T_enum,
													VAR(Ford_VehLongComp_A_Actl, AUTOMATIC) Ford_VehLongComp_A_Actl_Cnt_T_enum,
													VAR(Ford_VehYawComp_W_Actl, AUTOMATIC) Ford_VehYawComp_W_Actl_Cnt_T_enum,
													VAR(Ford_VehOverGnd_V_Est, AUTOMATIC) Ford_VehOverGnd_V_Est_Cnt_T_enum,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehLatACmpdRaw_Cnt_T_u16,
													P2VAR(float32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehLatACmpd_Cnt_T_f32,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehLatACmpdVld_Cnt_T_logl,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehLgtACmpdRaw_Cnt_T_u16,
													P2VAR(float32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehLgtACmpd_Cnt_T_f32,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehLgtACmpdVld_Cnt_T_logl,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehYawRateCmpdRaw_Cnt_T_u16,
													P2VAR(float32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehYawRateCmpd_Cnt_T_f32,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehYawRateCmpdVld_Cnt_T_logl,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehSpdOverGndRaw_Cnt_T_u16,
													P2VAR(float32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehSpdOverGnd_Kph_T_f32,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehSpdOverGndVld_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehLatACmpdVldInp_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehLgtACmpdInp_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehYawRateCmpdInp_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehSpdOverGndInp_Cnt_T_logl);

static FUNC(void, FordMsg077BusHiSpd_CODE)VldElpdTi(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)  VehLatVldElpdTi_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)	VehLatInvldElpdTi_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)	VehLgtVldElpdTi_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)	VehLgtInvldElpdTi_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)	VehYawRateVldElpdTi_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)	VehYawRateInvldElpdTi_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)	VehSpdOverGndVldElpdTi_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)	VehSpdOverGndInvldElpdTi_Cnt_T_logl);

static FUNC(void, FordMsg077BusHiSpd_CODE)VehLatVldElpdTi(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)VehLatVldElpdTi_Cnt_T_logl,
															P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)VehLatInvldElpdTi_Cnt_T_logl);

static FUNC(void, FordMsg077BusHiSpd_CODE)VehLgtVldElpdTi(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)VehLgtVldElpdTi_Cnt_T_logl,
															P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)VehLgtInvldElpdTi_Cnt_T_logl);

static FUNC(void, FordMsg077BusHiSpd_CODE)VehYawRateVldElpdTi(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)VehYawRateVldElpdTi_Cnt_T_logl,
																P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)VehYawRateInvldElpdTi_Cnt_T_logl);

static FUNC(void, FordMsg077BusHiSpd_CODE)VehSpdOverGndVldElpdTi(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)VehSpdOverGndVldElpdTi_Cnt_T_logl,
																	P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)VehSpdOverGndInvldElpdTi_Cnt_T_logl);
													
static FUNC(void, FordMsg077BusHiSpd_CODE)VehLatAVld(VAR(boolean, AUTOMATIC) FordVehLatACmpdVldInp_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)VehLatVldElpdTi_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)VehLatInvldElpdTi_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLatACmpdVld_Cnt_T_logl);

static FUNC(void, FordMsg077BusHiSpd_CODE)VehLgtAVld(VAR(boolean, AUTOMATIC) FordVehLgtACmpdInp_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)  VehLgtVldElpdTi_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)  VehLgtInvldElpdTi_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLgtACmpdVld_Cnt_T_logl);

static FUNC(void, FordMsg077BusHiSpd_CODE)VehYawRateVld(VAR(boolean, AUTOMATIC) FordVehYawRateCmpdInp_Cnt_T_logl,
														VAR(boolean, AUTOMATIC)  VehYawRateVldElpdTi_Cnt_T_logl,
														VAR(boolean, AUTOMATIC)  VehYawRateInvldElpdTi_Cnt_T_logl,
														P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehYawRateCmpdVld_Cnt_T_logl);

static FUNC(void, FordMsg077BusHiSpd_CODE)VehSpdOverGndVld(VAR(boolean, AUTOMATIC) FordVehSpdOverGndInp_Cnt_T_logl,
															VAR(boolean, AUTOMATIC)  VehSpdOverGndVldElpdTi_Cnt_T_logl,
															VAR(boolean, AUTOMATIC)  VehSpdOverGndInvldElpdTi_Cnt_T_logl,
															P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehSpdOverGndVld_Cnt_T_logl);	

static FUNC(void, FordMsg077BusHiSpd_CODE)MissMsgNtcPass(VAR(boolean, AUTOMATIC) MissMsgDiagEna_Cnt_T_logl,
														VAR(boolean, AUTOMATIC) FordVehYawRateCmpdInp_Cnt_T_logl,
														VAR(uint16, AUTOMATIC) BusHiSpdYawRateCmpdInvldThd_Cnt_T_u16,
														VAR(boolean, AUTOMATIC) FordEvasSteerAssiEnad_Cnt_T_logl);
						
static FUNC(void, FordMsg077BusHiSpd_CODE)FordVehLgtACmpdInvldNtc(VAR(boolean, AUTOMATIC) FordVehLgtACmpdInvldDiagEna_Cnt_T_logl,
																	VAR(boolean, AUTOMATIC) FordVehLgtACmpdInp_Cnt_T_logl,
																	VAR(uint16, AUTOMATIC) BusHiSpdLgtACmpdInvldThd_Cnt_T_u16);
								
static FUNC(void, FordMsg077BusHiSpd_CODE)FordVehLatACmpdInvldDiagEnaPass(VAR(boolean, AUTOMATIC) FordVehLatACmpdInvldDiagEna_Cnt_T_logl,
																			VAR(boolean, AUTOMATIC) FordVehLatACmpdVldInp_Cnt_T_logl,
																			VAR(uint16, AUTOMATIC) BusHiSpdLatACmpdInvldThd_Cnt_T_u16);
										
static FUNC(void, FordMsg077BusHiSpd_CODE)FordVehSpdOverGndInvldNtc(VAR(boolean, AUTOMATIC) FordVehSpdOverGndInvldDiagEna_Cnt_T_logl,
																	VAR(uint16, AUTOMATIC) BusHiSpdOverGndInvldThd_Cnt_T_u16,
																	VAR(boolean, AUTOMATIC) FordVehSpdOverGndInp_Cnt_T_logl);

static FUNC(boolean, FordMsg077BusHiSpd_CODE)IsFeatActv(VAR(boolean, AUTOMATIC) Enad_Cnt_T_logl);
																	
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
 * u16p0: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Ford_VehLatComp_A_Actl: Enumeration of integer in interval [0...1023] with enumerators
 *   Cx3FE_NoDataExists (1022U)
 *   Cx3FF_Fault (1023U)
 *   Unit: [m/s^2], Factor: 0.035, Offset: -17.9
 * Ford_VehLongComp_A_Actl: Enumeration of integer in interval [0...1023] with enumerators
 *   Cx3FE_NoDataExists (1022U)
 *   Cx3FF_Fault (1023U)
 *   Unit: [m/s^2], Factor: 0.035, Offset: -17.9
 * Ford_VehOverGnd_V_Est: Enumeration of integer in interval [0...65535] with enumerators
 *   CxFFFE_Unknown (65534U)
 *   CxFFFF_Invalid (65535U)
 *   Unit: [kph], Factor: 0.01, Offset: 0
 * Ford_VehYawComp_W_Actl: Enumeration of integer in interval [0...4095] with enumerators
 *   CxFFE_NoDataExists (4094U)
 *   CxFFF_Fault (4095U)
 *   Unit: [deg/s], Factor: 0.03663, Offset: -75
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
 *   float32 *Rte_Pim_FordVehLatACmpdPrev(void)
 *   float32 *Rte_Pim_FordVehLgtACmpdPrev(void)
 *   float32 *Rte_Pim_FordVehSpdOverGndPrev(void)
 *   float32 *Rte_Pim_FordVehYawRateCmpdPrev(void)
 *   uint32 *Rte_Pim_CanDtcInhbRefTi(void)
 *   uint32 *Rte_Pim_FordVehLatACmpdInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehLatACmpdInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehLatACmpdVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehLatACmpdVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehLatACmpdVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehLgtACmpdInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehLgtACmpdInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehLgtACmpdVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehLgtACmpdVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehLgtACmpdVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdOverGndInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdOverGndInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdOverGndVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdOverGndVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdOverGndVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehYawRateCmpdInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehYawRateCmpdInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehYawRateCmpdVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehYawRateCmpdVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehYawRateCmpdVldPassdRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint16 *Rte_Pim_FordVehLatACmpdRawPrev(void)
 *   uint16 *Rte_Pim_FordVehLgtACmpdRawPrev(void)
 *   uint16 *Rte_Pim_FordVehSpdOverGndRawPrev(void)
 *   uint16 *Rte_Pim_FordVehYawRateCmpdRawPrev(void)
 *   boolean *Rte_Pim_DiagcClrProxyFlgPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehLatACmpdVldPrev(void)
 *   boolean *Rte_Pim_FordVehLgtACmpdVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg77Miss(void)
 *   boolean *Rte_Pim_FordVehSpdOverGndVldPrev(void)
 *   boolean *Rte_Pim_FordVehYawRateCmpdVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdCanDtcInhbThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdLatACmpdInvldSigFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdLatACmpdInvldSigPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdLatACmpdVldMissThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdLgtACmpdVldMissThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdMissMsgFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdMissMsgPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdOverGndInvldSigFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdOverGndInvldSigPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehLatACmpdVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehLatACmpdVldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehLgtACmpdVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehLgtACmpdVldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehSpdOverGndVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehSpdOverGndVldMissThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehSpdOverGndVldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdYawRateCmpdVldMissThd_Val(void)
 *
 *********************************************************************************************************************/


#define FordMsg077BusHiSpd_START_SEC_CODE
#include "FordMsg077BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg077BusHiSpdInit1
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
 * Symbol: FordMsg077BusHiSpdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg077BusHiSpd_CODE) FordMsg077BusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg077BusHiSpdInit1
 *********************************************************************************************************************/
	VAR(uint32, AUTOMATIC) GetRefTmr_Cnt_T_u32;
	
	*Rte_Pim_FordVehSpdOverGndRawPrev() 	= FORDVEHSPDOVERGNDRAW_CNT_U16;
	*Rte_Pim_FirstTranVldFlg() 				= TRUE;
	*Rte_Pim_FordVehLatACmpdRawPrev() 		= FORDVEHACMPDRAW_CNT_U16;
	*Rte_Pim_FordVehLgtACmpdRawPrev() 		= FORDVEHACMPDRAW_CNT_U16;
	*Rte_Pim_FordVehLatACmpdPrev() 			= FORDVEHACMPD_MTRPERSECSQD_F32;
	*Rte_Pim_FordVehLgtACmpdPrev() 			= FORDVEHACMPD_MTRPERSECSQD_F32;
	*Rte_Pim_FordVehYawRateCmpdRawPrev() 	= FORDVEHYAWRATECMPDRAW_CNT_U16;
	*Rte_Pim_FordVehYawRateCmpdPrev() 		= FORDVEHYAWRATECMPD_HWDEGPERSEC_F32;
	
	(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
	*Rte_Pim_CanDtcInhbRefTi() 						= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_MissMsgFaildRefTi() 					= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_MissMsgPassdRefTi() 					= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLatACmpdVldMissRefTi() 			= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLgtACmpdVldMissRefTi() 			= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehYawRateCmpdVldMissRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehSpdOverGndVldMissRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLatACmpdInvldPassdRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLatACmpdInvldFaildRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehYawRateCmpdInvldPassdRefTi() 	= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLgtACmpdInvldPassdRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLgtACmpdInvldFaildRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehSpdOverGndInvldPassdRefTi() 	= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehSpdOverGndInvldFaildRefTi() 	= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLatACmpdVldPassdRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLatACmpdVldFaildRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLgtACmpdVldPassdRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLgtACmpdVldFaildRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehYawRateCmpdVldPassdRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehYawRateCmpdVldFaildRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehYawRateCmpdInvldFaildRefTi() 	= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehSpdOverGndVldPassdRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehSpdOverGndVldFaildRefTi() 		= GetRefTmr_Cnt_T_u32;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg077BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordBrkOscnRednEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordClrDiagcFlgProxy_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneCentrAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTqSteerCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrfcJamAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackUpAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_VehLatComp_A_Actl_Ford_VehLatComp_A_Actl(Ford_VehLatComp_A_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_VehLongComp_A_Actl_Ford_VehLongComp_A_Actl(Ford_VehLongComp_A_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_VehOverGnd_V_Est_Ford_VehOverGnd_V_Est(Ford_VehOverGnd_V_Est *data)
 *   Std_ReturnType Rte_Read_Ford_VehYawComp_W_Actl_Ford_VehYawComp_W_Actl(Ford_VehYawComp_W_Actl *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehLatACmpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehLatACmpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehLatACmpdVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehLgtACmpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehLgtACmpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehLgtACmpdVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSpdOverGnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehSpdOverGndRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehSpdOverGndVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehYawRateCmpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehYawRateCmpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehYawRateCmpdVld_Logl(boolean data)
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
 * Symbol: FordMsg077BusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg077BusHiSpd_CODE) FordMsg077BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg077BusHiSpdPer1
 *********************************************************************************************************************/
	VAR(boolean, AUTOMATIC) FordBrkOscnRednEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordCanDtcInhb_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordClrDiagcFlgProxy_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordEvasSteerAssiEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordLaneCentrAssiEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordLaneKeepAssiEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordPullDriftCmpEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordTqSteerCmpEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordTrfcJamAssiEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordTrlrBackUpAssiEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) MissMsgDiagEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehLatACmpdInvldDiagEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehLgtACmpdInvldDiagEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehSpdOverGndInvldDiagEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehLatACmpdVld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehLgtACmpdVld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehYawRateCmpdVld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehSpdOverGndVld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehLatACmpdVldInp_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehLgtACmpdInp_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehYawRateCmpdInp_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehSpdOverGndInp_Cnt_T_logl;
	
	VAR(uint8, AUTOMATIC)   FordEpsLifeCycMod_Cnt_T_u08;
	VAR(uint32, AUTOMATIC)  GetRefTmr_Cnt_T_u32;
	
	VAR(uint16, AUTOMATIC)  BusHiSpdMissThd_Cnt_T_u16;
	VAR(uint16, AUTOMATIC)  BusHiSpdLatACmpdInvldThd_Cnt_T_u16;
	VAR(uint16, AUTOMATIC)  BusHiSpdLgtACmpdInvldThd_Cnt_T_u16;
	VAR(uint16, AUTOMATIC)  BusHiSpdYawRateCmpdInvldThd_Cnt_T_u16;
	VAR(uint16, AUTOMATIC)  BusHiSpdOverGndInvldThd_Cnt_T_u16;
	
	VAR(float32, AUTOMATIC) FordVehLatACmpd_Cnt_T_f32;
	VAR(float32, AUTOMATIC) FordVehLgtACmpd_Cnt_T_f32;
	VAR(float32, AUTOMATIC) FordVehYawRateCmpd_Cnt_T_f32;
	VAR(float32, AUTOMATIC) FordVehSpdOverGnd_Kph_T_f32;
	
	VAR(Ford_VehLatComp_A_Actl, AUTOMATIC) 	Ford_VehLatComp_A_Actl_Cnt_T_enum;
	VAR(Ford_VehLongComp_A_Actl, AUTOMATIC) Ford_VehLongComp_A_Actl_Cnt_T_enum;
	VAR(Ford_VehOverGnd_V_Est, AUTOMATIC) 	Ford_VehOverGnd_V_Est_Cnt_T_enum;
	VAR(Ford_VehYawComp_W_Actl, AUTOMATIC) 	Ford_VehYawComp_W_Actl_Cnt_T_enum;
	VAR(uint16, AUTOMATIC)  FordVehLatACmpdRaw_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) FordVehLgtACmpdRaw_Cnt_T_u16;
	VAR(uint16, AUTOMATIC)  FordVehYawRateCmpdRaw_Cnt_T_u16;
	VAR(uint16, AUTOMATIC)   FordVehSpdOverGndRaw_Cnt_T_u16;
	
	/*** Read Inputs from RTE ***/
	(void)Rte_Read_FordBrkOscnRednEnad_Logl(&FordBrkOscnRednEnad_Cnt_T_logl);
	(void)Rte_Read_FordCanDtcInhb_Logl(&FordCanDtcInhb_Cnt_T_logl);
	(void)Rte_Read_FordClrDiagcFlgProxy_Logl(&FordClrDiagcFlgProxy_Cnt_T_logl);
	(void)Rte_Read_FordEpsLifeCycMod_Val(&FordEpsLifeCycMod_Cnt_T_u08);
	(void)Rte_Read_FordEvasSteerAssiEnad_Logl(&FordEvasSteerAssiEnad_Cnt_T_logl);
	(void)Rte_Read_FordLaneCentrAssiEnad_Logl(&FordLaneCentrAssiEnad_Cnt_T_logl);
	(void)Rte_Read_FordLaneKeepAssiEnad_Logl(&FordLaneKeepAssiEnad_Cnt_T_logl);
	(void)Rte_Read_FordPullDriftCmpEnad_Logl(&FordPullDriftCmpEnad_Cnt_T_logl);
	(void)Rte_Read_FordTqSteerCmpEnad_Logl(&FordTqSteerCmpEnad_Cnt_T_logl);
	(void)Rte_Read_FordTrfcJamAssiEnad_Logl(&FordTrfcJamAssiEnad_Cnt_T_logl);
	(void)Rte_Read_FordTrlrBackUpAssiEnad_Logl(&FordTrlrBackUpAssiEnad_Cnt_T_logl);
	(void)Rte_Read_Ford_VehLatComp_A_Actl_Ford_VehLatComp_A_Actl(&Ford_VehLatComp_A_Actl_Cnt_T_enum);
	(void)Rte_Read_Ford_VehLongComp_A_Actl_Ford_VehLongComp_A_Actl(&Ford_VehLongComp_A_Actl_Cnt_T_enum);
	(void)Rte_Read_Ford_VehOverGnd_V_Est_Ford_VehOverGnd_V_Est(&Ford_VehOverGnd_V_Est_Cnt_T_enum);
	(void)Rte_Read_Ford_VehYawComp_W_Actl_Ford_VehYawComp_W_Actl(&Ford_VehYawComp_W_Actl_Cnt_T_enum);
	
	DiagEna(FordTqSteerCmpEnad_Cnt_T_logl,
			FordBrkOscnRednEnad_Cnt_T_logl,
			FordLaneKeepAssiEnad_Cnt_T_logl,
			FordTrfcJamAssiEnad_Cnt_T_logl,
			FordLaneCentrAssiEnad_Cnt_T_logl,
			FordPullDriftCmpEnad_Cnt_T_logl,
			FordTrlrBackUpAssiEnad_Cnt_T_logl,
			FordEvasSteerAssiEnad_Cnt_T_logl,
			FordCanDtcInhb_Cnt_T_logl,
			FordClrDiagcFlgProxy_Cnt_T_logl,
			&MissMsgDiagEna_Cnt_T_logl,
			&FordVehLatACmpdInvldDiagEna_Cnt_T_logl,
			&FordVehLgtACmpdInvldDiagEna_Cnt_T_logl,
            &FordVehSpdOverGndInvldDiagEna_Cnt_T_logl);
			
	CalSeln(FordEpsLifeCycMod_Cnt_T_u08,
			&BusHiSpdMissThd_Cnt_T_u16,
			&BusHiSpdLatACmpdInvldThd_Cnt_T_u16,
			&BusHiSpdLgtACmpdInvldThd_Cnt_T_u16,
			&BusHiSpdYawRateCmpdInvldThd_Cnt_T_u16,
			&BusHiSpdOverGndInvldThd_Cnt_T_u16);
	
	if(TRUE == *Rte_Pim_FordVehMsg77Miss())
	{
		MissMsg(MissMsgDiagEna_Cnt_T_logl,
				BusHiSpdMissThd_Cnt_T_u16,
				&FordVehLatACmpdRaw_Cnt_T_u16,
				&FordVehLatACmpd_Cnt_T_f32,
				&FordVehLatACmpdVld_Cnt_T_logl,
				&FordVehLgtACmpdRaw_Cnt_T_u16,
				&FordVehLgtACmpd_Cnt_T_f32,
				&FordVehLgtACmpdVld_Cnt_T_logl,
				&FordVehYawRateCmpdRaw_Cnt_T_u16,
				&FordVehYawRateCmpd_Cnt_T_f32,
				&FordVehYawRateCmpdVld_Cnt_T_logl,
				&FordVehSpdOverGndRaw_Cnt_T_u16,
				&FordVehSpdOverGnd_Kph_T_f32,
				&FordVehSpdOverGndVld_Cnt_T_logl);
	}
	else
	{
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
		*Rte_Pim_MissMsgFaildRefTi() 				= GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehLatACmpdVldMissRefTi() 		= GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehLgtACmpdVldMissRefTi() 		= GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehYawRateCmpdVldMissRefTi() 	= GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehSpdOverGndVldMissRefTi() 	= GetRefTmr_Cnt_T_u32;
		
		OutProcg(Ford_VehLatComp_A_Actl_Cnt_T_enum,
				 Ford_VehLongComp_A_Actl_Cnt_T_enum,
				 Ford_VehYawComp_W_Actl_Cnt_T_enum,
				 Ford_VehOverGnd_V_Est_Cnt_T_enum,
				 &FordVehLatACmpdRaw_Cnt_T_u16,
				 &FordVehLatACmpd_Cnt_T_f32,
				 &FordVehLatACmpdVld_Cnt_T_logl,
				 &FordVehLgtACmpdRaw_Cnt_T_u16,
				 &FordVehLgtACmpd_Cnt_T_f32,
				 &FordVehLgtACmpdVld_Cnt_T_logl,
				 &FordVehYawRateCmpdRaw_Cnt_T_u16,
				 &FordVehYawRateCmpd_Cnt_T_f32,
				 &FordVehYawRateCmpdVld_Cnt_T_logl,
				 &FordVehSpdOverGndRaw_Cnt_T_u16,
				 &FordVehSpdOverGnd_Kph_T_f32,
				 &FordVehSpdOverGndVld_Cnt_T_logl,
				 &FordVehLatACmpdVldInp_Cnt_T_logl,
				 &FordVehLgtACmpdInp_Cnt_T_logl,
				 &FordVehYawRateCmpdInp_Cnt_T_logl,
				 &FordVehSpdOverGndInp_Cnt_T_logl);
		
		MissMsgNtcPass(MissMsgDiagEna_Cnt_T_logl,
						FordVehYawRateCmpdInp_Cnt_T_logl,
						BusHiSpdYawRateCmpdInvldThd_Cnt_T_u16,
						FordEvasSteerAssiEnad_Cnt_T_logl);
						
		FordVehLgtACmpdInvldNtc(FordVehLgtACmpdInvldDiagEna_Cnt_T_logl,
								FordVehLgtACmpdInp_Cnt_T_logl,
								BusHiSpdLgtACmpdInvldThd_Cnt_T_u16);
								
		FordVehLatACmpdInvldDiagEnaPass(FordVehLatACmpdInvldDiagEna_Cnt_T_logl,
										FordVehLatACmpdVldInp_Cnt_T_logl,
										BusHiSpdLatACmpdInvldThd_Cnt_T_u16);
										
		FordVehSpdOverGndInvldNtc(FordVehSpdOverGndInvldDiagEna_Cnt_T_logl,
									BusHiSpdOverGndInvldThd_Cnt_T_u16,
									FordVehSpdOverGndInp_Cnt_T_logl);	
	}
	
	*Rte_Pim_FordVehLatACmpdRawPrev() = FordVehLatACmpdRaw_Cnt_T_u16;
	
	FordVehLatACmpd_Cnt_T_f32 = Lim_f32(FordVehLatACmpd_Cnt_T_f32, FORDVEHACMPDRAWMIN_MTRPERSECSQD_F32, FORDVEHACMPDFLT_MTRPERSECSQD_F32);
	*Rte_Pim_FordVehLatACmpdPrev() = FordVehLatACmpd_Cnt_T_f32;
	
	*Rte_Pim_FordVehLatACmpdVldPrev() = FordVehLatACmpdVld_Cnt_T_logl;
	*Rte_Pim_FordVehLgtACmpdRawPrev() = FordVehLgtACmpdRaw_Cnt_T_u16;
	
	FordVehLgtACmpd_Cnt_T_f32 = Lim_f32(FordVehLgtACmpd_Cnt_T_f32, FORDVEHACMPDRAWMIN_MTRPERSECSQD_F32, FORDVEHACMPDFLT_MTRPERSECSQD_F32);
	*Rte_Pim_FordVehLgtACmpdPrev() = FordVehLgtACmpd_Cnt_T_f32;
	
	*Rte_Pim_FordVehLgtACmpdVldPrev() = FordVehLgtACmpdVld_Cnt_T_logl;
	*Rte_Pim_FordVehYawRateCmpdRawPrev() = FordVehYawRateCmpdRaw_Cnt_T_u16;
	
	FordVehYawRateCmpd_Cnt_T_f32 = Lim_f32(FordVehYawRateCmpd_Cnt_T_f32, FORDVEHYAWRATECMPDMIN_HWDEGPERSEC_F32, FORDVEHYAWRATECMPDMAX_HWDEGPERSEC_F32);
	*Rte_Pim_FordVehYawRateCmpdPrev() = FordVehYawRateCmpd_Cnt_T_f32;
	
	*Rte_Pim_FordVehYawRateCmpdVldPrev() = FordVehYawRateCmpdVld_Cnt_T_logl;
	*Rte_Pim_FordVehSpdOverGndRawPrev() = FordVehSpdOverGndRaw_Cnt_T_u16;
	
	FordVehSpdOverGnd_Kph_T_f32 = Lim_f32(FordVehSpdOverGnd_Kph_T_f32, FORDVEHSPDOVERGNDMIN_KPH_F32, FORDVEHSPDOVERGNDMAX_KPH_F32);
	*Rte_Pim_FordVehSpdOverGndPrev() = FordVehSpdOverGnd_Kph_T_f32;
	
	*Rte_Pim_FordVehSpdOverGndVldPrev() = FordVehSpdOverGndVld_Cnt_T_logl;
	
	(void)Rte_Write_FordVehLatACmpd_Val(FordVehLatACmpd_Cnt_T_f32);
	(void)Rte_Write_FordVehLatACmpdRaw_Val(FordVehLatACmpdRaw_Cnt_T_u16);
	(void)Rte_Write_FordVehLatACmpdVld_Logl(FordVehLatACmpdVld_Cnt_T_logl);
	(void)Rte_Write_FordVehLgtACmpd_Val(FordVehLgtACmpd_Cnt_T_f32);
	(void)Rte_Write_FordVehLgtACmpdRaw_Val(FordVehLgtACmpdRaw_Cnt_T_u16);
	(void)Rte_Write_FordVehLgtACmpdVld_Logl(FordVehLgtACmpdVld_Cnt_T_logl);
	(void)Rte_Write_FordVehSpdOverGnd_Val(FordVehSpdOverGnd_Kph_T_f32);
	(void)Rte_Write_FordVehSpdOverGndRaw_Val(FordVehSpdOverGndRaw_Cnt_T_u16);
	(void)Rte_Write_FordVehSpdOverGndVld_Logl(FordVehSpdOverGndVld_Cnt_T_logl);
	(void)Rte_Write_FordVehYawRateCmpd_Val(FordVehYawRateCmpd_Cnt_T_f32);
	(void)Rte_Write_FordVehYawRateCmpdRaw_Val(FordVehYawRateCmpdRaw_Cnt_T_u16);
	(void)Rte_Write_FordVehYawRateCmpdVld_Logl(FordVehYawRateCmpdVld_Cnt_T_logl);
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordMsg077BusHiSpd_STOP_SEC_CODE
#include "FordMsg077BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************
  * Name            : DiagEna
  * Description     : Implementation of DiagEna subsystem in the model.
  * Inputs          : FordTqSteerCmpEnad_Cnt_T_logl,
  *                   FordBrkOscnRednEnad_Cnt_T_logl,
  *                   FordLaneKeepAssiEnad_Cnt_T_logl,
  *					  FordTrfcJamAssiEnad_Cnt_T_logl.
  *                   FordLaneCentrAssiEnad_Cnt_T_logl,
  *                   FordPullDriftCmpEnad_Cnt_T_logl,
  *                   FordTrlrBackUpAssiEnad_Cnt_T_logl,
  *                   FordEvasSteerAssiEnad_Cnt_T_logl,
  *                   FordCanDtcInhb_Cnt_T_logl,
  *                   FordClrDiagcFlgProxy_Cnt_T_logl
  * Outputs         : *MissMsgDiagEna_Cnt_T_logl,
  *					  *FordVehLatACmpdInvldDiagEna_Cnt_T_logl,
  *					  *FordVehLgtACmpdInvldDiagEna_Cnt_T_logl,
  *					  *FordVehSpdOverGndInvldDiagEna_Cnt_T_logl
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg077BusHiSpd_CODE)DiagEna(VAR(boolean, AUTOMATIC) FordTqSteerCmpEnad_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordBrkOscnRednEnad_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordLaneKeepAssiEnad_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordTrfcJamAssiEnad_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordLaneCentrAssiEnad_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordPullDriftCmpEnad_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordTrlrBackUpAssiEnad_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordEvasSteerAssiEnad_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordCanDtcInhb_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)FordClrDiagcFlgProxy_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)MissMsgDiagEna_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLatACmpdInvldDiagEna_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLgtACmpdInvldDiagEna_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehSpdOverGndInvldDiagEna_Cnt_T_logl)

{
	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) 	GetRefTmr_Cnt_T_u32;
	
	VAR(boolean, AUTOMATIC) CanDtcInh_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) TqSteerCmpEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) BrkOscnRednEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) PullDriftCmpEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) TrlrBackUpAssiEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) EvasSteerAssiEnad_Cnt_T_logl;
	
	if(DTCENA_CNT_LGC == FordCanDtcInhb_Cnt_T_logl)
	{
		(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_CanDtcInhbRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdCanDtcInhbThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			CanDtcInh_Cnt_T_logl = TRUE;
		}
		else
		{
			CanDtcInh_Cnt_T_logl = FALSE;
		}
	}
	else
	{
		CanDtcInh_Cnt_T_logl = FALSE;
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_CanDtcInhbRefTi());
	}
	
	TqSteerCmpEnad_Cnt_T_logl = IsFeatActv(FordTqSteerCmpEnad_Cnt_T_logl);
	BrkOscnRednEnad_Cnt_T_logl = IsFeatActv(FordBrkOscnRednEnad_Cnt_T_logl);
	PullDriftCmpEnad_Cnt_T_logl = IsFeatActv(FordPullDriftCmpEnad_Cnt_T_logl);
	TrlrBackUpAssiEnad_Cnt_T_logl = IsFeatActv(FordTrlrBackUpAssiEnad_Cnt_T_logl);
	EvasSteerAssiEnad_Cnt_T_logl = IsFeatActv(FordEvasSteerAssiEnad_Cnt_T_logl);
	
	if((TRUE == CanDtcInh_Cnt_T_logl)&&
		((TRUE == TqSteerCmpEnad_Cnt_T_logl)||
		(TRUE == BrkOscnRednEnad_Cnt_T_logl)||
		(FEATACTV_CNT_LGC == FordLaneKeepAssiEnad_Cnt_T_logl)||
		(FEATACTV_CNT_LGC == FordTrfcJamAssiEnad_Cnt_T_logl)||
		(FEATACTV_CNT_LGC == FordLaneCentrAssiEnad_Cnt_T_logl)||
		(TRUE == PullDriftCmpEnad_Cnt_T_logl)||
		(TRUE == TrlrBackUpAssiEnad_Cnt_T_logl)||
		(TRUE == EvasSteerAssiEnad_Cnt_T_logl)))
	{
		*MissMsgDiagEna_Cnt_T_logl = TRUE;
	}
	else
	{
		*MissMsgDiagEna_Cnt_T_logl = FALSE;
	}
	
	if((TRUE == CanDtcInh_Cnt_T_logl)&&
		((TRUE == TqSteerCmpEnad_Cnt_T_logl)||
		(TRUE == BrkOscnRednEnad_Cnt_T_logl)||
		(TRUE == PullDriftCmpEnad_Cnt_T_logl)||
		(TRUE == TrlrBackUpAssiEnad_Cnt_T_logl)||
		(TRUE == EvasSteerAssiEnad_Cnt_T_logl)))
	{
		*FordVehLatACmpdInvldDiagEna_Cnt_T_logl = TRUE;
	}
	else
	{
		*FordVehLatACmpdInvldDiagEna_Cnt_T_logl = FALSE;
	}
	
	if((TRUE == CanDtcInh_Cnt_T_logl)&&
		(TRUE == TrlrBackUpAssiEnad_Cnt_T_logl))
	{
		*FordVehLgtACmpdInvldDiagEna_Cnt_T_logl = TRUE;
	}
	else
	{
		*FordVehLgtACmpdInvldDiagEna_Cnt_T_logl = FALSE;
	}
	
	if((TRUE == CanDtcInh_Cnt_T_logl)&&
		(TRUE == EvasSteerAssiEnad_Cnt_T_logl))
	{
		*FordVehSpdOverGndInvldDiagEna_Cnt_T_logl = TRUE;
	}
	else
	{
		*FordVehSpdOverGndInvldDiagEna_Cnt_T_logl = FALSE;
	}
	
	if(FordClrDiagcFlgProxy_Cnt_T_logl != *Rte_Pim_DiagcClrProxyFlgPrev())
	{
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
		*Rte_Pim_MissMsgFaildRefTi() 					= GetRefTmr_Cnt_T_u32;
		*Rte_Pim_MissMsgPassdRefTi() 					= GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehLatACmpdInvldPassdRefTi() 		= GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehLatACmpdInvldFaildRefTi() 		= GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehLgtACmpdInvldPassdRefTi() 		= GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehLgtACmpdInvldFaildRefTi() 		= GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehSpdOverGndInvldPassdRefTi() 	= GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehSpdOverGndInvldFaildRefTi() 	= GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehYawRateCmpdInvldFaildRefTi() 	= GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehYawRateCmpdInvldPassdRefTi() 	= GetRefTmr_Cnt_T_u32;
	}
	else
	{
		/* Do Nothing */
	}
	*Rte_Pim_DiagcClrProxyFlgPrev() = FordClrDiagcFlgProxy_Cnt_T_logl;
}

/*****************************************************************************
  * Name            : CalSeln
  * Description     : Implementation of CalSeln subsystem in the model.
  * Inputs          : FordEpsLifeCycMod_Cnt_T_u08
  * Outputs         : *BusHiSpdMissThd_Cnt_T_u16,
  *					  *BusHiSpdLatACmpdInvldThd_Cnt_T_u16,
  *					  *BusHiSpdLgtACmpdInvldThd_Cnt_T_u16,
  *					  *BusHiSpdYawRateCmpdInvldThd_Cnt_T_u16,
  *					  *BusHiSpdOverGndInvldThd_Cnt_T_u16
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg077BusHiSpd_CODE)CalSeln(VAR(uint8, AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)BusHiSpdMissThd_Cnt_T_u16,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)BusHiSpdLatACmpdInvldThd_Cnt_T_u16,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)BusHiSpdLgtACmpdInvldThd_Cnt_T_u16,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)BusHiSpdYawRateCmpdInvldThd_Cnt_T_u16,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)BusHiSpdOverGndInvldThd_Cnt_T_u16)

{
	if(MODSEL_CNT_U08 == FordEpsLifeCycMod_Cnt_T_u08)
	{
		*BusHiSpdMissThd_Cnt_T_u16 				= BUSHISPDFIXDTITHD_MILLISEC_U16;
		*BusHiSpdLatACmpdInvldThd_Cnt_T_u16 	= BUSHISPDFIXDTITHD_MILLISEC_U16;
		*BusHiSpdLgtACmpdInvldThd_Cnt_T_u16 	= BUSHISPDFIXDTITHD_MILLISEC_U16;
		*BusHiSpdYawRateCmpdInvldThd_Cnt_T_u16 	= BUSHISPDFIXDTITHD_MILLISEC_U16;
		*BusHiSpdOverGndInvldThd_Cnt_T_u16 		= BUSHISPDFIXDTITHD_MILLISEC_U16;
	}
	else
	{
		*BusHiSpdMissThd_Cnt_T_u16 				= Rte_Prm_FordMsg077BusHiSpdMissMsgFaildThd_Val();
		*BusHiSpdLatACmpdInvldThd_Cnt_T_u16 	= Rte_Prm_FordMsg077BusHiSpdLatACmpdInvldSigFaildThd_Val();
		*BusHiSpdLgtACmpdInvldThd_Cnt_T_u16 	= Rte_Prm_FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd_Val();
		*BusHiSpdYawRateCmpdInvldThd_Cnt_T_u16 	= Rte_Prm_FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd_Val();
		*BusHiSpdOverGndInvldThd_Cnt_T_u16 		= Rte_Prm_FordMsg077BusHiSpdOverGndInvldSigFaildThd_Val();
	}
}

/*****************************************************************************
  * Name            : MissMsg
  * Description     : Implementation of MissingMsgDetermination subsystem in the model.
  * Inputs          : MissMsgDiagEna_Cnt_T_logl,
  *					  BusHiSpdMissThd_Cnt_T_u16
  * Outputs         : *FordVehLatACmpdRaw_Cnt_T_u16,
  *					  *FordVehLatACmpd_Cnt_T_f32,
  *					  *FordVehLatACmpdVld_Cnt_T_logl,
  *					  *FordVehLgtACmpdRaw_Cnt_T_u16,
  *					  *FordVehLgtACmpd_Cnt_T_f32,
  *					  *FordVehLgtACmpdVld_Cnt_T_logl,
  *					  *FordVehYawRateCmpdRaw_Cnt_T_u16,
  *					  *FordVehYawRateCmpd_Cnt_T_f32,
  *					  *FordVehYawRateCmpdVld_Cnt_T_logl,
  *					  *FordVehSpdOverGndRaw_Cnt_T_u16,
  *					  *FordVehSpdOverGnd_Kph_T_f32,
  *					  *FordVehSpdOverGndVld_Cnt_T_logl,
  *
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg077BusHiSpd_CODE)MissMsg(VAR(boolean, AUTOMATIC)MissMsgDiagEna_Cnt_T_logl,
													VAR(uint16, AUTOMATIC)BusHiSpdMissThd_Cnt_T_u16,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLatACmpdRaw_Cnt_T_u16,
													P2VAR(float32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLatACmpd_Cnt_T_f32,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLatACmpdVld_Cnt_T_logl,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLgtACmpdRaw_Cnt_T_u16,
													P2VAR(float32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLgtACmpd_Cnt_T_f32,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLgtACmpdVld_Cnt_T_logl,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehYawRateCmpdRaw_Cnt_T_u16,
													P2VAR(float32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehYawRateCmpd_Cnt_T_f32,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehYawRateCmpdVld_Cnt_T_logl,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehSpdOverGndRaw_Cnt_T_u16,
													P2VAR(float32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehSpdOverGnd_Kph_T_f32,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehSpdOverGndVld_Cnt_T_logl)
													
{
	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) 	GetRefTmr_Cnt_T_u32;
	
	(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
	*Rte_Pim_MissMsgPassdRefTi() 					= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLatACmpdInvldPassdRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLatACmpdInvldFaildRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLgtACmpdInvldPassdRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLgtACmpdInvldFaildRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehSpdOverGndInvldPassdRefTi() 	= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehSpdOverGndInvldFaildRefTi() 	= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehYawRateCmpdInvldFaildRefTi() 	= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehYawRateCmpdInvldPassdRefTi() 	= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLatACmpdVldPassdRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLatACmpdVldFaildRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLgtACmpdVldPassdRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLgtACmpdVldFaildRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehSpdOverGndVldPassdRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehSpdOverGndVldFaildRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehYawRateCmpdVldFaildRefTi() 		= GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehYawRateCmpdVldPassdRefTi() 		= GetRefTmr_Cnt_T_u32;
	
	if(TRUE == MissMsgDiagEna_Cnt_T_logl)
	{
		(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MissMsgFaildRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)BusHiSpdMissThd_Cnt_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X105, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
		}
		else
		{
			/* Do Nothing */
		}
	}
	else
	{
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgFaildRefTi());
		{
			(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X105, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		}
	}

	*FordVehLatACmpdRaw_Cnt_T_u16 		= *Rte_Pim_FordVehLatACmpdRawPrev();	
	*FordVehLatACmpd_Cnt_T_f32 			= *Rte_Pim_FordVehLatACmpdPrev();	
	*FordVehLgtACmpdRaw_Cnt_T_u16 		= *Rte_Pim_FordVehLgtACmpdRawPrev();	
	*FordVehLgtACmpd_Cnt_T_f32 			= *Rte_Pim_FordVehLgtACmpdPrev();
	*FordVehYawRateCmpdRaw_Cnt_T_u16 	= *Rte_Pim_FordVehYawRateCmpdRawPrev();
	*FordVehYawRateCmpd_Cnt_T_f32 		= *Rte_Pim_FordVehYawRateCmpdPrev();
	*FordVehSpdOverGndRaw_Cnt_T_u16 	= *Rte_Pim_FordVehSpdOverGndRawPrev();
	*FordVehSpdOverGnd_Kph_T_f32 		= *Rte_Pim_FordVehSpdOverGndPrev();
	
	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehLatACmpdVldMissRefTi(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdLgtACmpdVldMissThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*FordVehLatACmpdVld_Cnt_T_logl = FALSE;
	}
	else
	{
		*FordVehLatACmpdVld_Cnt_T_logl = *Rte_Pim_FordVehLatACmpdVldPrev();
	}

	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehLgtACmpdVldMissRefTi(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdLgtACmpdVldMissThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*FordVehLgtACmpdVld_Cnt_T_logl = FALSE;
	}
	else
	{
		*FordVehLgtACmpdVld_Cnt_T_logl = *Rte_Pim_FordVehLgtACmpdVldPrev();
	}

	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehYawRateCmpdVldMissRefTi(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdYawRateCmpdVldMissThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*FordVehYawRateCmpdVld_Cnt_T_logl = FALSE;
	}
	else
	{
		*FordVehYawRateCmpdVld_Cnt_T_logl = *Rte_Pim_FordVehYawRateCmpdVldPrev();
	}

	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehSpdOverGndVldMissRefTi(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdVehSpdOverGndVldMissThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*FordVehSpdOverGndVld_Cnt_T_logl = FALSE;
	}
	else
	{
		*FordVehSpdOverGndVld_Cnt_T_logl = *Rte_Pim_FordVehSpdOverGndVldPrev();
	}
	
	(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X106, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
	(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X109, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
	(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X107, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
	(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X108, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
}

/*****************************************************************************
  * Name            : OutProcg
  * Description     : Implementation of OutputProcessing subsystem in the model.
  * Inputs          : Ford_VehLatComp_A_Actl_Cnt_T_enum,
  *					  Ford_VehLongComp_A_Actl_Cnt_T_enum,
  *					  Ford_VehYawComp_W_Actl_Cnt_T_enum,
  *					  Ford_VehOverGnd_V_Est_Cnt_T_enum,
  * Outputs         : *FordVehLatACmpdRaw_Cnt_T_u16,
  *					  *FordVehLatACmpd_Cnt_T_f32,
  *					  *FordVehLatACmpdVld_Cnt_T_logl,
  *					  *FordVehLgtACmpdRaw_Cnt_T_u16,
  *					  *FordVehLgtACmpd_Cnt_T_f32,
  *					  *FordVehLgtACmpdVld_Cnt_T_logl,
  *					  *FordVehYawRateCmpdRaw_Cnt_T_u16,
  *					  *FordVehYawRateCmpd_Cnt_T_f32,
  *					  *FordVehYawRateCmpdVld_Cnt_T_logl,
  *					  *FordVehSpdOverGndRaw_Cnt_T_u16,
  *					  *FordVehSpdOverGnd_Kph_T_f32,
  *					  *FordVehSpdOverGndVld_Cnt_T_logl,
  *					  *FordVehLatACmpdVldInp_Cnt_T_logl,
  *					  *FordVehLgtACmpdInp_Cnt_T_logl,
  *					  *FordVehYawRateCmpdInp_Cnt_T_logl,
  *					  *FordVehSpdOverGndInp_Cnt_T_logl
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg077BusHiSpd_CODE)OutProcg(VAR(Ford_VehLatComp_A_Actl, AUTOMATIC) Ford_VehLatComp_A_Actl_Cnt_T_enum,
													VAR(Ford_VehLongComp_A_Actl, AUTOMATIC) Ford_VehLongComp_A_Actl_Cnt_T_enum,
													VAR(Ford_VehYawComp_W_Actl, AUTOMATIC) Ford_VehYawComp_W_Actl_Cnt_T_enum,
													VAR(Ford_VehOverGnd_V_Est, AUTOMATIC) Ford_VehOverGnd_V_Est_Cnt_T_enum,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehLatACmpdRaw_Cnt_T_u16,
													P2VAR(float32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehLatACmpd_Cnt_T_f32,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehLatACmpdVld_Cnt_T_logl,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehLgtACmpdRaw_Cnt_T_u16,
													P2VAR(float32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehLgtACmpd_Cnt_T_f32,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehLgtACmpdVld_Cnt_T_logl,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehYawRateCmpdRaw_Cnt_T_u16,
													P2VAR(float32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehYawRateCmpd_Cnt_T_f32,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehYawRateCmpdVld_Cnt_T_logl,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehSpdOverGndRaw_Cnt_T_u16,
													P2VAR(float32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehSpdOverGnd_Kph_T_f32,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehSpdOverGndVld_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehLatACmpdVldInp_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehLgtACmpdInp_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehYawRateCmpdInp_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) FordVehSpdOverGndInp_Cnt_T_logl)
													
{
	VAR(boolean, AUTOMATIC) VehLatVldElpdTi_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) VehLatInvldElpdTi_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) VehLgtVldElpdTi_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) VehLgtInvldElpdTi_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) VehYawRateVldElpdTi_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) VehYawRateInvldElpdTi_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) VehSpdOverGndVldElpdTi_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) VehSpdOverGndInvldElpdTi_Cnt_T_logl;

	*FordVehLatACmpdRaw_Cnt_T_u16 = Ford_VehLatComp_A_Actl_Cnt_T_enum;
	*FordVehLatACmpd_Cnt_T_f32 = (FixdToFloat_f32_u16((uint16)*FordVehLatACmpdRaw_Cnt_T_u16, NXTRFIXDPT_P0TOFLOAT_ULS_F32) * FORDVEHACMPDSCAGFAC_MTRPERSECSQDPERCNT_F32) - FORDVEHACMPDOFFS_MTRPERSECSQD_F32;
	
	*FordVehLgtACmpdRaw_Cnt_T_u16 = Ford_VehLongComp_A_Actl_Cnt_T_enum;
	*FordVehLgtACmpd_Cnt_T_f32 = (FixdToFloat_f32_u16((uint16)*FordVehLgtACmpdRaw_Cnt_T_u16, NXTRFIXDPT_P0TOFLOAT_ULS_F32) * FORDVEHACMPDSCAGFAC_MTRPERSECSQDPERCNT_F32) - FORDVEHACMPDOFFS_MTRPERSECSQD_F32;
	
	*FordVehYawRateCmpdRaw_Cnt_T_u16 = Ford_VehYawComp_W_Actl_Cnt_T_enum;
	*FordVehYawRateCmpd_Cnt_T_f32 = (FixdToFloat_f32_u16((uint16)*FordVehYawRateCmpdRaw_Cnt_T_u16, NXTRFIXDPT_P0TOFLOAT_ULS_F32) * FORDVEHYAWRATECMPDSCAGFAC_HWDEGPERSECPERCNT_F32) - FORDVEHYAWRATECMPDOFFS_HWDEGPERSEC_F32;
	
	*FordVehSpdOverGndRaw_Cnt_T_u16 = Ford_VehOverGnd_V_Est_Cnt_T_enum;
	*FordVehSpdOverGnd_Kph_T_f32 = (FixdToFloat_f32_u16((uint16)*FordVehSpdOverGndRaw_Cnt_T_u16, NXTRFIXDPT_P0TOFLOAT_ULS_F32) * FORDVEHSPDOVERGNDSCAGFAC_KPHPERCNT_F32);
	
	if(*FordVehLatACmpdRaw_Cnt_T_u16 < FORDVEHACMPDRAW_CNT_U16)
	{
		*FordVehLatACmpdVldInp_Cnt_T_logl = TRUE;
	}
	else
	{
		*FordVehLatACmpdVldInp_Cnt_T_logl = FALSE;
	}
	
	if(*FordVehLgtACmpdRaw_Cnt_T_u16 < FORDVEHACMPDRAW_CNT_U16)
	{
		*FordVehLgtACmpdInp_Cnt_T_logl = TRUE;
	}
	else 
	{
		*FordVehLgtACmpdInp_Cnt_T_logl = FALSE;
	}
	
	if(*FordVehYawRateCmpdRaw_Cnt_T_u16 < FORDVEHYAWRATECMPDRAW_CNT_U16)
	{
		*FordVehYawRateCmpdInp_Cnt_T_logl = TRUE;
	}
	else 
	{
		*FordVehYawRateCmpdInp_Cnt_T_logl = FALSE;
	}
	
	if(*FordVehSpdOverGndRaw_Cnt_T_u16 < FORDVEHSPDOVERGNDRAWUKWN_CNT_U16)
	{
		*FordVehSpdOverGndInp_Cnt_T_logl = TRUE;
	}
	else
	{
		*FordVehSpdOverGndInp_Cnt_T_logl = FALSE;
	}
	
	VldElpdTi(&VehLatVldElpdTi_Cnt_T_logl,
			&VehLatInvldElpdTi_Cnt_T_logl,
			&VehLgtVldElpdTi_Cnt_T_logl,
			&VehLgtInvldElpdTi_Cnt_T_logl,
			&VehYawRateVldElpdTi_Cnt_T_logl,
			&VehYawRateInvldElpdTi_Cnt_T_logl,
			&VehSpdOverGndVldElpdTi_Cnt_T_logl,
			&VehSpdOverGndInvldElpdTi_Cnt_T_logl);
	
	if(TRUE == *Rte_Pim_FirstTranVldFlg())
	{
		*Rte_Pim_FirstTranVldFlg() = FALSE;
		
		*FordVehLatACmpdVld_Cnt_T_logl 		= *FordVehLatACmpdVldInp_Cnt_T_logl;
		*FordVehLgtACmpdVld_Cnt_T_logl 		= *FordVehLgtACmpdInp_Cnt_T_logl;
		*FordVehYawRateCmpdVld_Cnt_T_logl 	= *FordVehYawRateCmpdInp_Cnt_T_logl;
		*FordVehSpdOverGndVld_Cnt_T_logl 	= *FordVehSpdOverGndInp_Cnt_T_logl;
	}
	else
	{
		VehLatAVld(*FordVehLatACmpdVldInp_Cnt_T_logl,
					VehLatVldElpdTi_Cnt_T_logl,
					VehLatInvldElpdTi_Cnt_T_logl,
					FordVehLatACmpdVld_Cnt_T_logl);
					
		VehLgtAVld(*FordVehLgtACmpdInp_Cnt_T_logl,
					VehLgtVldElpdTi_Cnt_T_logl,
					VehLgtInvldElpdTi_Cnt_T_logl,
					FordVehLgtACmpdVld_Cnt_T_logl);
					
		VehYawRateVld(*FordVehYawRateCmpdInp_Cnt_T_logl,
					  VehYawRateVldElpdTi_Cnt_T_logl,
					  VehYawRateInvldElpdTi_Cnt_T_logl,
					  FordVehYawRateCmpdVld_Cnt_T_logl);
					  
		VehSpdOverGndVld(*FordVehSpdOverGndInp_Cnt_T_logl,
						VehSpdOverGndVldElpdTi_Cnt_T_logl,
						VehSpdOverGndInvldElpdTi_Cnt_T_logl,
						FordVehSpdOverGndVld_Cnt_T_logl);
	}
}

/*****************************************************************************
  * Name            : VldElpdTi
  * Description     : Implementation of VldElpdTi subsystem in the model.
  * Inputs          : None
  * Outputs         : *VehLatVldElpdTi_Cnt_T_logl,
  *					  *VehLatInvldElpdTi_Cnt_T_logl,
  *					  *VehLgtVldElpdTi_Cnt_T_logl,
  *					  *VehLgtInvldElpdTi_Cnt_T_logl,
  *					  *VehYawRateVldElpdTi_Cnt_T_logl,
  *					  *VehYawRateInvldElpdTi_Cnt_T_logl,
  *					  *VehSpdOverGndVldElpdTi_Cnt_T_logl,
  *					  *VehSpdOverGndInvldElpdTi_Cnt_T_logl
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg077BusHiSpd_CODE)VldElpdTi(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) VehLatVldElpdTi_Cnt_T_logl,
												P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)	VehLatInvldElpdTi_Cnt_T_logl,
												P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)	VehLgtVldElpdTi_Cnt_T_logl,
												P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)	VehLgtInvldElpdTi_Cnt_T_logl,
												P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)	VehYawRateVldElpdTi_Cnt_T_logl,
												P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)	VehYawRateInvldElpdTi_Cnt_T_logl,
												P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)	VehSpdOverGndVldElpdTi_Cnt_T_logl,
												P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)	VehSpdOverGndInvldElpdTi_Cnt_T_logl)
{	
	
	VehLatVldElpdTi(VehLatVldElpdTi_Cnt_T_logl,
					VehLatInvldElpdTi_Cnt_T_logl);
	
	VehLgtVldElpdTi(VehLgtVldElpdTi_Cnt_T_logl,
					VehLgtInvldElpdTi_Cnt_T_logl);
	
	VehYawRateVldElpdTi(VehYawRateVldElpdTi_Cnt_T_logl,
						VehYawRateInvldElpdTi_Cnt_T_logl);
	
	VehSpdOverGndVldElpdTi(VehSpdOverGndVldElpdTi_Cnt_T_logl,
							VehSpdOverGndInvldElpdTi_Cnt_T_logl);

}

/*****************************************************************************
  * Name            : VehLatVldElpdTi
  * Description     : Implementation of VehLatVldElpdTi subsystem in the model.
  * Inputs          : None
  * Outputs         : *VehLatVldElpdTi_Cnt_T_logl,
  *					  *VehLatInvldElpdTi_Cnt_T_logl
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg077BusHiSpd_CODE)VehLatVldElpdTi(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)VehLatVldElpdTi_Cnt_T_logl,
															P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)VehLatInvldElpdTi_Cnt_T_logl)
{
	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	
	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehLatACmpdVldPassdRefTi(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdVehLatACmpdVldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*VehLatVldElpdTi_Cnt_T_logl = TRUE;
	}
	else
	{
		*VehLatVldElpdTi_Cnt_T_logl = FALSE;
	}
	
	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehLatACmpdVldFaildRefTi(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdVehLatACmpdVldFaildThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*VehLatInvldElpdTi_Cnt_T_logl = TRUE;
	}
	else
	{
		*VehLatInvldElpdTi_Cnt_T_logl = FALSE;
	}
}

/*****************************************************************************
  * Name            : VehLgtVldElpdTi
  * Description     : Implementation of VehLgtVldElpdTi subsystem in the model.
  * Inputs          : None
  * Outputs         : *VehLgtVldElpdTi_Cnt_T_logl,
  *					  *VehLgtInvldElpdTi_Cnt_T_logl
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg077BusHiSpd_CODE)VehLgtVldElpdTi(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)VehLgtVldElpdTi_Cnt_T_logl,
															P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)VehLgtInvldElpdTi_Cnt_T_logl)
{
	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	
	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehLgtACmpdVldPassdRefTi(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdVehLgtACmpdVldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*VehLgtVldElpdTi_Cnt_T_logl = TRUE;
	}
	else
	{
		*VehLgtVldElpdTi_Cnt_T_logl = FALSE;
	}
	
	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehLgtACmpdVldFaildRefTi(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdVehLgtACmpdVldFaildThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*VehLgtInvldElpdTi_Cnt_T_logl = TRUE;
	}
	else
	{
		*VehLgtInvldElpdTi_Cnt_T_logl = FALSE;
	}
}

/*****************************************************************************
  * Name            : VehYawRateVldElpdTi
  * Description     : Implementation of VehYawRateVldElpdTi subsystem in the model.
  * Inputs          : None
  * Outputs         : *VehYawRateVldElpdTi_Cnt_T_logl,
  *					  *VehYawRateInvldElpdTi_Cnt_T_logl
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg077BusHiSpd_CODE)VehYawRateVldElpdTi(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)VehYawRateVldElpdTi_Cnt_T_logl,
																P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)VehYawRateInvldElpdTi_Cnt_T_logl)
{
	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	
	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehYawRateCmpdVldPassdRefTi(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*VehYawRateVldElpdTi_Cnt_T_logl = TRUE;
	}
	else
	{
		*VehYawRateVldElpdTi_Cnt_T_logl = FALSE;
	}
	
	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehYawRateCmpdVldFaildRefTi(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*VehYawRateInvldElpdTi_Cnt_T_logl = TRUE;
	}
	else
	{
		*VehYawRateInvldElpdTi_Cnt_T_logl = FALSE;
	}
}

/*****************************************************************************
  * Name            : VehSpdOverGndVldElpdTi
  * Description     : Implementation of VehSpdOverGndVldElpdTi subsystem in the model.
  * Inputs          : None
  * Outputs         : *VehSpdOverGndVldElpdTi_Cnt_T_logl,
  *					  *VehSpdOverGndInvldElpdTi_Cnt_T_logl
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg077BusHiSpd_CODE)VehSpdOverGndVldElpdTi(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)VehSpdOverGndVldElpdTi_Cnt_T_logl,
																	P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)VehSpdOverGndInvldElpdTi_Cnt_T_logl)
{
	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	
	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehSpdOverGndVldPassdRefTi(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdVehSpdOverGndVldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*VehSpdOverGndVldElpdTi_Cnt_T_logl = TRUE;
	}
	else
	{
		*VehSpdOverGndVldElpdTi_Cnt_T_logl = FALSE;
	}
	
	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehSpdOverGndVldFaildRefTi(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdVehSpdOverGndVldFaildThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*VehSpdOverGndInvldElpdTi_Cnt_T_logl = TRUE;
	}
	else
	{
		*VehSpdOverGndInvldElpdTi_Cnt_T_logl = FALSE;
	}
}

/*****************************************************************************
  * Name            : VehLatAVld
  * Description     : Implementation of VehLatAVld subsystem in the model.
  * Inputs          : FordVehLatACmpdVldInp_Cnt_T_logl,
  *					  VehLatVldElpdTi_Cnt_T_logl,
  *					  VehLatInvldElpdTi_Cnt_T_logl
  * Outputs         : *FordVehLatACmpdVld_Cnt_T_logl
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg077BusHiSpd_CODE)VehLatAVld(VAR(boolean, AUTOMATIC) FordVehLatACmpdVldInp_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)  VehLatVldElpdTi_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)  VehLatInvldElpdTi_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLatACmpdVld_Cnt_T_logl)
{
	if(TRUE == FordVehLatACmpdVldInp_Cnt_T_logl)
	{
		if(TRUE == VehLatVldElpdTi_Cnt_T_logl)
		{
			*FordVehLatACmpdVld_Cnt_T_logl = TRUE;
		}
		else
		{
			*FordVehLatACmpdVld_Cnt_T_logl = *Rte_Pim_FordVehLatACmpdVldPrev();
		}
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehLatACmpdVldFaildRefTi());
	}
	else
	{
		if(TRUE == VehLatInvldElpdTi_Cnt_T_logl)
		{
			*FordVehLatACmpdVld_Cnt_T_logl = FALSE;
		}
		else
		{
			*FordVehLatACmpdVld_Cnt_T_logl = *Rte_Pim_FordVehLatACmpdVldPrev();
		}
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehLatACmpdVldPassdRefTi());
	}
}

/*****************************************************************************
  * Name            : VehLgtAVld
  * Description     : Implementation of VehLgtAVld subsystem in the model.
  * Inputs          : FordVehLgtACmpdInp_Cnt_T_logl,
  *					  VehLgtVldElpdTi_Cnt_T_logl,
  *					  VehLgtInvldElpdTi_Cnt_T_logl
  * Outputs         : *FordVehLgtACmpdVld_Cnt_T_logl
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg077BusHiSpd_CODE)VehLgtAVld(VAR(boolean, AUTOMATIC) FordVehLgtACmpdInp_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)  VehLgtVldElpdTi_Cnt_T_logl,
													VAR(boolean, AUTOMATIC)  VehLgtInvldElpdTi_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehLgtACmpdVld_Cnt_T_logl)
{
	if(TRUE == FordVehLgtACmpdInp_Cnt_T_logl)
	{
		if(TRUE == VehLgtVldElpdTi_Cnt_T_logl)
		{
			*FordVehLgtACmpdVld_Cnt_T_logl = TRUE;
		}
		else
		{
			*FordVehLgtACmpdVld_Cnt_T_logl = *Rte_Pim_FordVehLgtACmpdVldPrev();
		}
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehLgtACmpdVldFaildRefTi());
	}
	else
	{
		if(TRUE == VehLgtInvldElpdTi_Cnt_T_logl)
		{
			*FordVehLgtACmpdVld_Cnt_T_logl = FALSE;
		}
		else
		{
			*FordVehLgtACmpdVld_Cnt_T_logl = *Rte_Pim_FordVehLgtACmpdVldPrev();
		}
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehLgtACmpdVldPassdRefTi());
	}
}

/*****************************************************************************
  * Name            : VehYawRateVld
  * Description     : Implementation of VehYawRateVld subsystem in the model.
  * Inputs          : FordVehYawRateCmpdInp_Cnt_T_logl,
  *					  VehYawRateVldElpdTi_Cnt_T_logl,
  *					  VehYawRateInvldElpdTi_Cnt_T_logl
  * Outputs         : *FordVehYawRateCmpdVld_Cnt_T_logl
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg077BusHiSpd_CODE)VehYawRateVld(VAR(boolean, AUTOMATIC) FordVehYawRateCmpdInp_Cnt_T_logl,
														VAR(boolean, AUTOMATIC)  VehYawRateVldElpdTi_Cnt_T_logl,
														VAR(boolean, AUTOMATIC)  VehYawRateInvldElpdTi_Cnt_T_logl,
														P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehYawRateCmpdVld_Cnt_T_logl)
{
	if(TRUE == FordVehYawRateCmpdInp_Cnt_T_logl)
	{
		if(TRUE == VehYawRateVldElpdTi_Cnt_T_logl)
		{
			*FordVehYawRateCmpdVld_Cnt_T_logl = TRUE;
		}
		else
		{
			*FordVehYawRateCmpdVld_Cnt_T_logl = *Rte_Pim_FordVehYawRateCmpdVldPrev();
		}
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehYawRateCmpdVldFaildRefTi());
	}
	else
	{
		if(TRUE == VehYawRateInvldElpdTi_Cnt_T_logl)
		{
			*FordVehYawRateCmpdVld_Cnt_T_logl = FALSE;
		}
		else
		{
			*FordVehYawRateCmpdVld_Cnt_T_logl = *Rte_Pim_FordVehYawRateCmpdVldPrev();
		}
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehYawRateCmpdVldPassdRefTi());
	}
}

/*****************************************************************************
  * Name            : VehSpdOverGndVld
  * Description     : Implementation of VehSpdOverGndVld subsystem in the model.
  * Inputs          : FordVehSpdOverGndInp_Cnt_T_logl,
  *					  VehSpdOverGndVldElpdTi_Cnt_T_logl,
  *					  VehSpdOverGndInvldElpdTi_Cnt_T_logl
  * Outputs         : *FordVehSpdOverGndVld_Cnt_T_logl
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg077BusHiSpd_CODE)VehSpdOverGndVld(VAR(boolean, AUTOMATIC) FordVehSpdOverGndInp_Cnt_T_logl,
															VAR(boolean, AUTOMATIC)  VehSpdOverGndVldElpdTi_Cnt_T_logl,
															VAR(boolean, AUTOMATIC)  VehSpdOverGndInvldElpdTi_Cnt_T_logl,
															P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR)FordVehSpdOverGndVld_Cnt_T_logl)
{
	if(TRUE == FordVehSpdOverGndInp_Cnt_T_logl)
	{
		if(TRUE == VehSpdOverGndVldElpdTi_Cnt_T_logl)
		{
			*FordVehSpdOverGndVld_Cnt_T_logl = TRUE;
		}
		else
		{
			*FordVehSpdOverGndVld_Cnt_T_logl = *Rte_Pim_FordVehSpdOverGndVldPrev();
		}
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdOverGndVldFaildRefTi());
	}
	else
	{
		if(TRUE == VehSpdOverGndInvldElpdTi_Cnt_T_logl)
		{
			*FordVehSpdOverGndVld_Cnt_T_logl = FALSE;
		}
		else
		{
			*FordVehSpdOverGndVld_Cnt_T_logl = *Rte_Pim_FordVehSpdOverGndVldPrev();
		}
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdOverGndVldPassdRefTi());
	}
}

/*****************************************************************************
  * Name            : MissMsgNtcPass
  * Description     : Implementation of MissMsgNtcPass subsystem in the model.
  * Inputs          : MissMsgDiagEna_Cnt_T_logl,
  *					  FordVehYawRateCmpdInp_Cnt_T_logl,
  *					  BusHiSpdYawRateCmpdInvldThd_Cnt_T_u16,
  *					  FordEvasSteerAssiEnad_Cnt_T_logl
  * Outputs         : None
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg077BusHiSpd_CODE)MissMsgNtcPass(VAR(boolean, AUTOMATIC) MissMsgDiagEna_Cnt_T_logl,
														VAR(boolean, AUTOMATIC) FordVehYawRateCmpdInp_Cnt_T_logl,
														VAR(uint16, AUTOMATIC) BusHiSpdYawRateCmpdInvldThd_Cnt_T_u16,
														VAR(boolean, AUTOMATIC) FordEvasSteerAssiEnad_Cnt_T_logl)
{
	VAR(uint32, AUTOMATIC) TiSpan_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) GetRefTmr_Cnt_T_u32;
	
	if(TRUE == MissMsgDiagEna_Cnt_T_logl)
	{
		(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MissMsgPassdRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdMissMsgPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X105, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		}
		if(TRUE == FordVehYawRateCmpdInp_Cnt_T_logl)
		{
			(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehYawRateCmpdInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
			if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
			{
				(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X108, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
			}
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehYawRateCmpdInvldFaildRefTi());
		}
		else
		{
			(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehYawRateCmpdInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
			if(TiSpan_Cnt_T_u32 > ((uint32)BusHiSpdYawRateCmpdInvldThd_Cnt_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
			{
				(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X108, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
			}
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehYawRateCmpdInvldPassdRefTi());
		}
		if(FEATACTV_CNT_LGC == FordEvasSteerAssiEnad_Cnt_T_logl)
		{
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
			*Rte_Pim_FordVehSpdOverGndInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehSpdOverGndInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
		}
		else
		{
			/* Do Nothing */
		}
	}
	else
	{
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
		*Rte_Pim_MissMsgPassdRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehYawRateCmpdInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehYawRateCmpdInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehSpdOverGndInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehSpdOverGndInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
		
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X105, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X108, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
	}
}

/*****************************************************************************
  * Name            : FordVehLgtACmpdInvldNtc
  * Description     : Implementation of FordVehLgtACmpdInvldNtc subsystem in the model.
  * Inputs          : FordVehLgtACmpdInvldDiagEna_Cnt_T_logl,
  *					  FordVehLgtACmpdInp_Cnt_T_logl,
  *					  BusHiSpdLgtACmpdInvldThd_Cnt_T_u16
  * Outputs         : None
  * Usage Notes     : NA.
*****************************************************************************/					
static FUNC(void, FordMsg077BusHiSpd_CODE)FordVehLgtACmpdInvldNtc(VAR(boolean, AUTOMATIC) FordVehLgtACmpdInvldDiagEna_Cnt_T_logl,
																	VAR(boolean, AUTOMATIC) FordVehLgtACmpdInp_Cnt_T_logl,
																	VAR(uint16, AUTOMATIC) BusHiSpdLgtACmpdInvldThd_Cnt_T_u16)
{
	VAR(uint32, AUTOMATIC) TiSpan_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) GetRefTmr_Cnt_T_u32;
	
	if(TRUE == FordVehLgtACmpdInvldDiagEna_Cnt_T_logl)
	{
		if(TRUE == FordVehLgtACmpdInp_Cnt_T_logl)
		{
			(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehLgtACmpdInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
			if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
			{
				(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X107, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
			}
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehLgtACmpdInvldFaildRefTi());
		}
		else
		{
			(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehLgtACmpdInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
			if(TiSpan_Cnt_T_u32 > ((uint32)BusHiSpdLgtACmpdInvldThd_Cnt_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
			{
				(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X107, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
			}
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehLgtACmpdInvldPassdRefTi());
		}
	}
	else
	{
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X107, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
		*Rte_Pim_FordVehLgtACmpdInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehLgtACmpdInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	}
}

/*****************************************************************************
  * Name            : FordVehLatACmpdInvldDiagEnaPass
  * Description     : Implementation of FordVehLatACmpdInvldDiagEnaPass subsystem in the model.
  * Inputs          : FordVehLatACmpdInvldDiagEna_Cnt_T_logl,
  *					  FordVehLatACmpdVldInp_Cnt_T_logl,
  *					  BusHiSpdLatACmpdInvldThd_Cnt_T_u16
  * Outputs         : None
  * Usage Notes     : NA.
*****************************************************************************/																	
static FUNC(void, FordMsg077BusHiSpd_CODE)FordVehLatACmpdInvldDiagEnaPass(VAR(boolean, AUTOMATIC) FordVehLatACmpdInvldDiagEna_Cnt_T_logl,
																			VAR(boolean, AUTOMATIC) FordVehLatACmpdVldInp_Cnt_T_logl,
																			VAR(uint16, AUTOMATIC) BusHiSpdLatACmpdInvldThd_Cnt_T_u16)
{
	VAR(uint32, AUTOMATIC) TiSpan_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) GetRefTmr_Cnt_T_u32;
	
	if(TRUE == FordVehLatACmpdInvldDiagEna_Cnt_T_logl)
	{
		if(TRUE == FordVehLatACmpdVldInp_Cnt_T_logl)
		{
			(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehLatACmpdInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
			if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdLatACmpdInvldSigPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
			{
				(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X106, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
			}
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehLatACmpdInvldFaildRefTi());
		}
		else
		{
			(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehLatACmpdInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
			if(TiSpan_Cnt_T_u32 > ((uint32)BusHiSpdLatACmpdInvldThd_Cnt_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
			{
				(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X106, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
			}
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehLatACmpdInvldPassdRefTi());
		}
	}
	else
	{
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X106, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
		*Rte_Pim_FordVehLatACmpdInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehLatACmpdInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	}
}

/*****************************************************************************
  * Name            : FordVehSpdOverGndInvldNtc
  * Description     : Implementation of FordVehSpdOverGndInvldNtc subsystem in the model.
  * Inputs          : FordVehSpdOverGndInvldDiagEna_Cnt_T_logl,
  *					  BusHiSpdOverGndInvldThd_Cnt_T_u16,
  *					  FordVehSpdOverGndInp_Cnt_T_logl
  * Outputs         : None
  * Usage Notes     : NA.
*****************************************************************************/																			
static FUNC(void, FordMsg077BusHiSpd_CODE)FordVehSpdOverGndInvldNtc(VAR(boolean, AUTOMATIC) FordVehSpdOverGndInvldDiagEna_Cnt_T_logl,
																	VAR(uint16, AUTOMATIC) BusHiSpdOverGndInvldThd_Cnt_T_u16,
																	VAR(boolean, AUTOMATIC) FordVehSpdOverGndInp_Cnt_T_logl)
{
	VAR(uint32, AUTOMATIC) TiSpan_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) GetRefTmr_Cnt_T_u32;
	
	if(TRUE == FordVehSpdOverGndInvldDiagEna_Cnt_T_logl)
	{
		if(TRUE == FordVehSpdOverGndInp_Cnt_T_logl)
		{
			(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehSpdOverGndInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
			if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg077BusHiSpdOverGndInvldSigPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
			{
				(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X109, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
			}
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdOverGndInvldFaildRefTi());
		}
		else
		{
			(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehSpdOverGndInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
			if(TiSpan_Cnt_T_u32 > ((uint32)BusHiSpdOverGndInvldThd_Cnt_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
			{
				(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X109, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
			}
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehSpdOverGndInvldPassdRefTi());
		}
	}
	else
	{
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X109, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
		*Rte_Pim_FordVehSpdOverGndInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehSpdOverGndInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	}
}

/*****************************************************************************
  * Name            : IsFeatActv
  * Description     : Implementation of IsFeatActv
  * Inputs          : Enad_Cnt_T_logl
  * Return         :  boolean
  * Usage Notes     : NA.
*****************************************************************************/	
static FUNC(boolean, FordMsg077BusHiSpd_CODE)IsFeatActv(VAR(boolean, AUTOMATIC) Enad_Cnt_T_logl)
{
	VAR(boolean, AUTOMATIC) FeatActv_Cnt_T_logl;
	
	if(FEATACTV_CNT_LGC == Enad_Cnt_T_logl)
	{
		FeatActv_Cnt_T_logl = TRUE;
	}
	else
	{
		FeatActv_Cnt_T_logl = FALSE;
	}
	
	return FeatActv_Cnt_T_logl;
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
